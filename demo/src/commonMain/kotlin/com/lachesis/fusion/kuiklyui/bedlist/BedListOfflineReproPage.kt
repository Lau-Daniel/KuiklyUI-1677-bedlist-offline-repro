package com.lachesis.fusion.kuiklyui.bedlist

import androidx.compose.runtime.CompositionLocalProvider
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import com.lachesis.fusion.shared.patient.domain.NursingLevel
import com.lachesis.fusion.shared.patient.domain.PatientFlag
import com.lachesis.fusion.shared.patient.domain.PatientGroupType
import com.lachesis.fusion.shared.patient.domain.PatientRiskNature
import com.lachesis.fusion.shared.patient.domain.RiskLevel
import com.lachesis.fusion.shared.patient.presentation.PatientCardRenderConfig
import com.lachesis.fusion.shared.patient.presentation.PatientCardRenderConfigFacts
import com.lachesis.fusion.shared.patient.presentation.PatientCardRenderConfigPlanner
import com.lachesis.fusion.shared.patient.presentation.PatientGroupState
import com.lachesis.fusion.shared.patient.presentation.PatientListAction
import com.lachesis.fusion.shared.patient.presentation.PatientListItemState
import com.lachesis.fusion.shared.patient.presentation.PatientListUiState
import com.lachesis.fusion.shared.patient.presentation.PatientRiskTagPresentationState
import com.lachesis.fusion.shared.patient.presentation.PatientRiskTagPresentationStyle
import com.lachesis.fusion.kuiklyui.designsystem.FusionAndroidBaselineComposeContainer
import com.lachesis.fusion.kuiklyui.designsystem.fusionAndroidReferenceComposeDensity
import com.tencent.kuikly.compose.setContent
import com.tencent.kuikly.compose.ui.Modifier
import com.tencent.kuikly.compose.foundation.layout.fillMaxSize
import com.tencent.kuikly.compose.ui.platform.LocalDensity
import com.tencent.kuikly.compose.ui.unit.Density
import com.tencent.kuikly.core.annotations.Page

/**
 * Kuikly #1677 的 MNIS BedList 离线复现入口。
 *
 * 页面直接调用主线的 [BedListPatientListContent]。本文件只替换真实 Session、HTTP 和 Host
 * 副作用，把已确认的测试数据形态固化为不可变 typed snapshot；因此列表、卡片、稳定 key、
 * contentType、宽度测量和跑马灯均由主线原实现负责。
 */
@Page("BedListOfflineRepro")
class BedListOfflineReproPage : FusionAndroidBaselineComposeContainer() {
    override fun willInit() {
        super.willInit()
        // 仅校准 BedList 自身组合树，沿用主线 Android reference logical viewport；
        // 不改 Kuikly pager density，也不把单台设备物理比例写进通用 Host。
        val patientContentDensity = fusionAndroidReferenceComposeDensity(
            deviceDensity = pageData.density,
            isOhOs = pageData.isOhOs,
        )
        setContent {
            var state by remember { mutableStateOf(offlineBedListState()) }
            CompositionLocalProvider(LocalDensity provides Density(patientContentDensity)) {
                BedListPatientListContent(
                    state = state,
                    onAction = { action ->
                        state = when (action) {
                            is PatientListAction.SelectCareScope -> offlineBedListState(
                                isCareScopeSelected = action.isCare,
                                selectedGroupType = state.selectedGroupType ?: PatientGroupType.All,
                            )
                            is PatientListAction.SelectGroup -> offlineBedListState(
                                isCareScopeSelected = state.isCareScopeSelected,
                                selectedGroupType = action.type,
                            )
                            PatientListAction.Refresh,
                            PatientListAction.OpenSearch,
                            PatientListAction.OpenFunctionMenu,
                            is PatientListAction.SelectPatient,
                            is PatientListAction.SelectSearchPatient,
                            -> state
                        }
                    },
                    modifier = Modifier.fillMaxSize(),
                    currentUserDisplayName = "测试护士",
                )
            }
        }
    }
}

private fun offlineBedListState(
    isCareScopeSelected: Boolean = false,
    selectedGroupType: PatientGroupType = PatientGroupType.All,
): PatientListUiState {
    val scopeItems = if (isCareScopeSelected) {
        OFFLINE_BED_LIST_ITEMS.filter(PatientListItemState::isCared)
    } else {
        OFFLINE_BED_LIST_ITEMS
    }
    val visibleItems = scopeItems.filter { item -> item.matches(selectedGroupType) }
    return PatientListUiState(
        routeValid = true,
        groups = offlineGroupStates(scopeItems, selectedGroupType),
        selectedGroupType = selectedGroupType,
        isCareScopeSelected = isCareScopeSelected,
        careScopeName = "本组",
        items = visibleItems,
        cardRenderConfig = OFFLINE_CARD_RENDER_CONFIG,
    )
}

private fun offlineGroupStates(
    source: List<PatientListItemState>,
    selectedGroupType: PatientGroupType,
): List<PatientGroupState> {
    return OFFLINE_GROUPS.map { (type, name) ->
        PatientGroupState(
            type = type,
            name = name,
            count = source.count { item -> item.matches(type) },
            isSelected = type == selectedGroupType,
        )
    }
}

private fun PatientListItemState.matches(type: PatientGroupType): Boolean = when (type) {
    PatientGroupType.All -> true
    PatientGroupType.Special -> nursingLevel == NursingLevel.Special
    PatientGroupType.First -> nursingLevel == NursingLevel.First
    PatientGroupType.Second -> nursingLevel == NursingLevel.Second
    PatientGroupType.Third -> nursingLevel == NursingLevel.Third
    PatientGroupType.SpecialDisease -> nursingLevel == NursingLevel.SpecialDisease
    PatientGroupType.Danger -> riskLevel == RiskLevel.Danger
    PatientGroupType.Severe -> riskLevel == RiskLevel.Severe
    PatientGroupType.NewIn -> PatientFlag.NewIn in flags
    PatientGroupType.OutHospital -> PatientFlag.OutHospitalToday in flags
    PatientGroupType.Surgery -> PatientFlag.Surgery in flags || PatientFlag.Surgery2 in flags
    PatientGroupType.OweFee -> PatientFlag.Arrears in flags
    PatientGroupType.NewOpen -> PatientFlag.NewOrder in flags
    PatientGroupType.HighTemperature -> PatientFlag.HighTemperature in flags
    PatientGroupType.NursePlan -> PatientFlag.NursePlan in flags
    else -> false
}

private val OFFLINE_GROUPS = listOf(
    PatientGroupType.All to "住院患者",
    PatientGroupType.Special to "特级护理",
    PatientGroupType.First to "一级护理",
    PatientGroupType.Second to "二级护理",
    PatientGroupType.Third to "三级护理",
    PatientGroupType.SpecialDisease to "特殊疾病护理",
    PatientGroupType.Severe to "病重",
    PatientGroupType.Danger to "病危",
    PatientGroupType.NewIn to "新入",
    PatientGroupType.OutHospital to "出院",
    PatientGroupType.Surgery to "手术",
    PatientGroupType.OweFee to "欠费",
    PatientGroupType.HighTemperature to "发热",
    PatientGroupType.NursePlan to "护理计划",
)

private val OFFLINE_CARD_RENDER_CONFIG: PatientCardRenderConfig = PatientCardRenderConfigPlanner.config(
    PatientCardRenderConfigFacts(
        legacyBedStyle = PatientCardRenderConfigPlanner.LEGACY_STYLE_NORMAL,
        selectedCodes = listOf(
            PatientCardRenderConfigPlanner.CODE_AGE,
            PatientCardRenderConfigPlanner.CODE_BIRTH_DATE,
            PatientCardRenderConfigPlanner.CODE_IN_HOSPITAL_DAYS,
            PatientCardRenderConfigPlanner.CODE_ADMISSION_DATE,
            PatientCardRenderConfigPlanner.CODE_DIET,
            PatientCardRenderConfigPlanner.CODE_ALLERGY,
            PatientCardRenderConfigPlanner.CODE_DOCTOR_NAME,
            PatientCardRenderConfigPlanner.CODE_HOSPITAL_DOCTOR_NAME,
            PatientCardRenderConfigPlanner.CODE_DANGER_LEVEL,
            PatientCardRenderConfigPlanner.CODE_MEWS_SCORE,
        ),
    ),
)

private val OFFLINE_BED_LIST_ITEMS: List<PatientListItemState> = List(237) { zeroBasedIndex ->
    val index = zeroBasedIndex + 1
    val nursingLevel = when (index % 5) {
        0 -> NursingLevel.Special
        1 -> NursingLevel.First
        2 -> NursingLevel.Second
        3 -> NursingLevel.Third
        else -> NursingLevel.SpecialDisease
    }
    val riskLevel = when {
        index % 17 == 0 -> RiskLevel.Danger
        index % 11 == 0 -> RiskLevel.Severe
        else -> RiskLevel.None
    }
    val flags = buildSet {
        if (index % 13 == 0) add(PatientFlag.NewIn)
        if (index % 7 == 0) add(PatientFlag.NewOrder)
        if (index % 9 == 0) add(PatientFlag.NewOrderStatus)
        if (index % 19 == 0) add(PatientFlag.StatOrder)
        if (index % 23 == 0) add(PatientFlag.OutHospitalToday)
        if (index % 8 == 0) add(PatientFlag.Surgery)
        if (index % 29 == 0) add(PatientFlag.Surgery2)
        if (index % 31 == 0) add(PatientFlag.Arrears)
        if (index % 10 == 0) add(PatientFlag.HighTemperature)
        if (index % 6 == 0) add(PatientFlag.NursePlan)
    }
    PatientListItemState(
        patientId = "TEST-PAT-${index.toString().padStart(3, '0')}",
        encounterId = "TEST-ENC-${index.toString().padStart(3, '0')}",
        bedNo = "${index.toString().padStart(3, '0')}床",
        name = "测试患者${index.toString().padStart(3, '0')}",
        displayCode = "TEST-${(100000 + index)}",
        gender = if (index % 2 == 0) "女" else "男",
        age = if (index % 37 == 0) "${index % 28 + 1}天" else "${18 + index % 73}岁",
        admissionDate = "2026-08-${(index % 28 + 1).toString().padStart(2, '0')}T08:00:00.000+0800",
        inHospitalDay = index % 45 + 1,
        birthDate = "${1940 + index % 67}-01-01T00:00:00.000+0800",
        diagnosis = offlineDiagnosis(index),
        diet = if (index % 4 == 0) "糖尿病低盐低脂饮食" else "普通饮食",
        allergen = offlineAllergen(index),
        doctorName = if (index % 3 == 0) "测试主管医生" else "测试医生${index % 12 + 1}",
        hospitalDoctorName = if (index % 5 == 0) "测试住院医生" else "",
        alertLevel = if (index % 9 == 0) "2" else "0",
        totalScore = if (index % 9 == 0) "${index % 8 + 3}" else "0",
        pathStatus = if (index % 14 == 0) "1" else "",
        pathPendingNodeStatus = if (index % 28 == 0) "1" else "0",
        surgeryMark = if (index % 8 == 0) "1" else "",
        infectionDisease = if (index % 41 == 0) "测试隔离标记" else "",
        inDiagnosisText = if (index % 37 == 0) "安胎观察" else "",
        nursingLevel = nursingLevel,
        riskLevel = riskLevel,
        isBaby = index % 37 == 0,
        isCared = index % 3 == 0 || index % 7 == 0,
        isAuthorized = true,
        flags = flags,
        riskNatures = emptySet<PatientRiskNature>(),
        riskTags = offlineRiskTags(index),
        riskTagSpanCount = if (index % 5 == 0) 4 else 5,
        nurseLevelBadgeVisible = true,
    )
}

private fun offlineAllergen(index: Int): String = when {
    index % 7 == 0 -> "青霉素、头孢类抗生素、磺胺类药物、阿司匹林、布洛芬、乳胶、花粉、尘螨、海鲜、坚果、含碘造影剂"
    index % 3 == 0 -> "青霉素、头孢类抗生素、花粉、海鲜、含碘造影剂"
    index % 2 == 0 -> "乳胶、海鲜"
    else -> "未发现测试过敏信息"
}

private fun offlineDiagnosis(index: Int): String = when {
    index % 11 == 0 -> "测试诊断：慢性基础疾病伴多项观察指标异常，需要持续评估生命体征和治疗反应"
    index % 5 == 0 -> "测试诊断：术后恢复期并发症观察"
    else -> "测试诊断${index % 9 + 1}"
}

private fun offlineRiskTags(index: Int): List<PatientRiskTagPresentationState> {
    if (index % 4 != 0) return emptyList()
    val tags = mutableListOf(
        PatientRiskTagPresentationState("跌倒", PatientRiskTagPresentationStyle.LevelTwo),
        PatientRiskTagPresentationState("压疮", PatientRiskTagPresentationStyle.LevelThree),
    )
    if (index % 8 == 0) {
        tags += PatientRiskTagPresentationState("管路滑脱", PatientRiskTagPresentationStyle.LevelFive)
        tags += PatientRiskTagPresentationState("VTE待处理", PatientRiskTagPresentationStyle.VteTodo)
    }
    return tags
}
