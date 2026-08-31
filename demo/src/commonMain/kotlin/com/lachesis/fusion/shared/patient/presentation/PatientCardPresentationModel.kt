package com.lachesis.fusion.shared.patient.presentation

import com.lachesis.fusion.shared.patient.domain.PatientCardPregnancyMark
import com.lachesis.fusion.shared.patient.domain.RiskLevel

// 床位卡片路径图标语义只表达是否展示以及待处理状态。
// 具体 drawable、尺寸和可见性赋值由 Android / Kuikly / Harmony Host 自行适配。
enum class PatientCardPathMarker {
    // 不展示路径状态图标。
    Hidden,

    // 路径存在且当前节点需要处理。
    NeedFinish,

    // 路径存在且当前节点不需要处理。
    NoNeedFinish,
}

// 床位卡片医嘱角标语义只表达医嘱状态优先级。
// 文案资源、颜色和圆角背景由 Host adapter 决定。
enum class PatientCardOrderStatus {
    // 不展示医嘱角标。
    None,

    // ST 医嘱优先于新医嘱展示。
    Stat,

    // 新医嘱角标。
    NewOrder,
}

// Host 旧床位卡片样式配置快照，只表达平台无关的样式选择与配置颜色事实。
// 旧 Android 配置对象读取、资源和 View 副作用仍留在 Host。
data class PatientCardRenderConfigFacts(
    val legacyBedStyle: Int?,
    val selectedCodes: List<String>,
    val nurseLevelSpecialColor: String = "",
    val nurseLevelFirstColor: String = "",
    val nurseLevelSecondColor: String = "",
    val nurseLevelThirdColor: String = "",
    val dangerLevelColor: String = "",
    val severeLevelColor: String = "",
)

data class PatientCardRenderConfig(
    val legacyBedStyle: Int,
    val normalStyle: Boolean,
    val showEvaluateList: Boolean,
    val cardOptions: PatientCardRenderOptions,
    val nurseLevelSpecialColor: String,
    val nurseLevelFirstColor: String,
    val nurseLevelSecondColor: String,
    val nurseLevelThirdColor: String,
    val dangerLevelColor: String,
    val severeLevelColor: String,
)

// 旧床位卡片样式配置到 shared 渲染选项的稳定映射。
// code 值来自后端 / 旧配置协议，不绑定 Android 资源或具体 View。
object PatientCardRenderConfigPlanner {
    const val LEGACY_STYLE_NORMAL = 1
    const val LEGACY_STYLE_DISPLAY_CODE_TOP = 2
    const val LEGACY_STYLE_DISPLAY_CODE_TOP_MEWS_BOTTOM = 3

    const val CODE_AGE = "age"
    const val CODE_BIRTH_DATE = "birthDate"
    const val CODE_IN_HOSPITAL_DAYS = "inHosDays"
    const val CODE_ADMISSION_DATE = "inHospitalDay"
    const val CODE_DIET = "diet"
    const val CODE_DOCTOR_NAME = "doctorName"
    const val CODE_HOSPITAL_DOCTOR_NAME = "hospitalDoctorName"
    const val CODE_DANGER_LEVEL = "dangerLevel"
    const val CODE_EVALUATE_LIST = "evaluateList"
    const val CODE_MEWS_SCORE = "alertLevel"
    const val CODE_ALLERGY = "allergy"

    fun config(facts: PatientCardRenderConfigFacts): PatientCardRenderConfig {
        val legacyBedStyle = facts.legacyBedStyle ?: LEGACY_STYLE_NORMAL
        val selectedCodes = facts.selectedCodes.toSet()
        return PatientCardRenderConfig(
            legacyBedStyle = legacyBedStyle,
            normalStyle = legacyBedStyle == LEGACY_STYLE_NORMAL,
            showEvaluateList = selectedCodes.contains(CODE_EVALUATE_LIST),
            cardOptions = PatientCardRenderOptions(
                topMewsBottomLayout = legacyBedStyle == LEGACY_STYLE_DISPLAY_CODE_TOP_MEWS_BOTTOM,
                showDangerLevel = selectedCodes.contains(CODE_DANGER_LEVEL),
                showMewsScore = selectedCodes.contains(CODE_MEWS_SCORE),
                showInHospitalDays = selectedCodes.contains(CODE_IN_HOSPITAL_DAYS),
                showAdmissionDate = selectedCodes.contains(CODE_ADMISSION_DATE),
                showAge = selectedCodes.contains(CODE_AGE),
                showBirthDate = selectedCodes.contains(CODE_BIRTH_DATE),
                showDiet = selectedCodes.contains(CODE_DIET),
                showAllergy = selectedCodes.contains(CODE_ALLERGY),
                showDoctorName = selectedCodes.contains(CODE_DOCTOR_NAME),
                showHospitalDoctorName = selectedCodes.contains(CODE_HOSPITAL_DOCTOR_NAME),
            ),
            nurseLevelSpecialColor = facts.nurseLevelSpecialColor,
            nurseLevelFirstColor = facts.nurseLevelFirstColor,
            nurseLevelSecondColor = facts.nurseLevelSecondColor,
            nurseLevelThirdColor = facts.nurseLevelThirdColor,
            dangerLevelColor = facts.dangerLevelColor,
            severeLevelColor = facts.severeLevelColor,
        )
    }
}

data class PatientCardRenderOptions(
    val topMewsBottomLayout: Boolean = false,
    val showDangerLevel: Boolean = false,
    val showMewsScore: Boolean = false,
    val showInHospitalDays: Boolean = false,
    val showAdmissionDate: Boolean = false,
    val showAge: Boolean = false,
    val showBirthDate: Boolean = false,
    val showDiet: Boolean = false,
    val showAllergy: Boolean = false,
    val showDoctorName: Boolean = false,
    val showHospitalDoctorName: Boolean = false,
)

// Host 注入值只承载跨端共享卡片生成所需的文案和平台样式选择结果。
// Android 资源读取、颜色 / drawable 选择和 View 副作用仍在 Host adapter 内完成。
data class PatientCardHostPresentationConfig(
    val normalStyle: Boolean,
    val dietTitleFormat: String,
    val nurseLevelText: String,
    val nurseLevelVisible: Boolean,
    val doctorPrefix: String,
    val hospitalDoctorPrefix: String,
)

data class PatientCardHeaderUiState(
    val isTopDisplayCodeVisible: Boolean,
    val isInlineDisplayCodeVisible: Boolean,
    val displayCode: String,
    val bedTitle: String,
)

data class PatientCardBasicInfoUiState(
    val text: String,
    val isVisible: Boolean,
)

data class PatientCardClinicalInfoUiState(
    val isDietVisible: Boolean,
    val dietText: String,
    val isAllergyVisible: Boolean,
    val allergyText: String,
    val diagnosisText: String,
)

data class PatientCardPathNurseLevelUiState(
    val pathMarker: PatientCardPathMarker,
    val nurseLevelText: String,
    val isNurseLevelVisible: Boolean,
)

data class PatientCardDoctorTagsUiState(
    val isDoctorVisible: Boolean,
    val doctorText: String,
    val isHospitalDoctorVisible: Boolean,
    val hospitalDoctorText: String,
)

data class PatientCardSpecialMarksUiState(
    val isSurgeryVisible: Boolean,
    val surgeryText: String,
    val isInfectionVisible: Boolean,
    val pregnancyMark: PatientCardPregnancyMark,
)

data class PatientCardOrderStatusUiState(
    val status: PatientCardOrderStatus,
    val isVisible: Boolean,
)

data class PatientCardMewsScoreUiState(
    val isTopMewsBottomLayout: Boolean,
    val isConfiguredVisible: Boolean,
    val isVisible: Boolean,
    val scoreText: String,
)

data class PatientCardCriticalFlagUiState(
    val isVisible: Boolean,
    val text: String,
    val riskLevel: RiskLevel,
)

data class PatientCardGenderUiState(
    val text: String,
)

// 床位卡片风险标签准备只表达跨端可复用的显示名替换、风险等级过滤、样式语义和列数规则。
// 旧 Android EvaluateBean 的原地修改和 RecyclerView 刷新仍由 Host 承接。
data class PatientCardRiskTagInput(
    val nature: String?,
    val realName: String?,
    val riskLevel: String?,
    val isVte: Boolean,
)

data class PatientCardRiskTagDictionaryItem(
    val code: String?,
    val abbreviation: String?,
)

data class PatientCardRiskLevelDisplayConfig(
    val level1: Boolean?,
    val level2: Boolean?,
    val level3: Boolean?,
    val level4: Boolean?,
    val level5: Boolean?,
)

data class PatientCardRiskTagUiState(
    val displayName: String?,
    val isVisible: Boolean,
    val style: PatientRiskTagPresentationStyle = PatientRiskTagPresentationStyle.Default,
)

data class PatientCardRiskTagsUiState(
    val items: List<PatientCardRiskTagUiState>,
    val spanCount: Int,
)

data class PatientCardUiState(
    val header: PatientCardHeaderUiState,
    val basicInfo: PatientCardBasicInfoUiState,
    val gender: PatientCardGenderUiState,
    val clinicalInfo: PatientCardClinicalInfoUiState,
    val pathNurseLevel: PatientCardPathNurseLevelUiState,
    val doctorTags: PatientCardDoctorTagsUiState,
    val specialMarks: PatientCardSpecialMarksUiState,
    val orderStatus: PatientCardOrderStatusUiState,
    val mewsScore: PatientCardMewsScoreUiState,
    val criticalFlag: PatientCardCriticalFlagUiState,
)
