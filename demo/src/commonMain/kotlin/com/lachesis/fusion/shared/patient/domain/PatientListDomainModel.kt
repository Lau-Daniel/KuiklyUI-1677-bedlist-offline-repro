package com.lachesis.fusion.shared.patient.domain

data class PatientSummary(
    val patientId: String,
    val encounterId: String,
    val bedNo: String,
    val name: String,
    val displayCode: String = "",
    val gender: String = "",
    val age: String = "",
    val admissionDate: String = "",
    val inHospitalDay: Int = 0,
    val birthDate: String = "",
    val diagnosis: String = "",
    val diet: String = "",
    val allergen: String = "",
    val doctorName: String = "",
    val hospitalDoctorName: String = "",
    val alertLevel: String = "",
    val totalScore: String = "",
    val pathStatus: String = "",
    val pathPendingNodeStatus: String = "",
    val pathSpecialThrombolysis: Boolean = false,
    val surgeryMark: String = "",
    val infectionDisease: String = "",
    val inDiagnosisText: String = "",
    val nursingLevel: NursingLevel = NursingLevel.Unknown,
    val riskLevel: RiskLevel = RiskLevel.None,
    val isBaby: Boolean = false,
    val motherEncounterId: String? = null,
    val isCared: Boolean = false,
    val isAuthorized: Boolean = true,
    val flags: Set<PatientFlag> = emptySet(),
    val riskNatures: Set<PatientRiskNature> = emptySet(),
    val riskEvaluations: List<PatientRiskEvaluationFact> = emptyList(),
    val isIsolated: Boolean = false,
)

data class PatientRiskEvaluationFact(
    val nature: String = "",
    val realName: String = "",
    val riskLevel: String = "",
)

data class PatientRiskTagDictionaryFact(
    val code: String = "",
    val abbreviation: String = "",
)

data class PatientRiskLevelDisplayConfigFact(
    val level1: Boolean? = null,
    val level2: Boolean? = null,
    val level3: Boolean? = null,
    val level4: Boolean? = null,
    val level5: Boolean? = null,
)

// 护理级别只表达床位列表分组和卡片展示所需的稳定业务级别。
// 不在这里绑定 Android 颜色、图标或字符串资源，避免 shared-presentation 泄漏 Host UI 细节。
enum class NursingLevel {
    // 特级护理，对应 Android BedType.Special / nursingLevel0。
    Special,

    // 一级护理，对应 Android BedType.First / nursingLevel1。
    First,

    // 二级护理，对应 Android BedType.Second / nursingLevel2。
    Second,

    // 三级护理，对应 Android BedType.Third / nursingLevel3。
    Third,

    // 特殊病情护理分组，对应 Android BedType.SpecialDisease / specialDisease。
    SpecialDisease,

    // Host 原始值无法稳定识别时使用；不生成护理级别分组。
    Unknown,
}

// 病情风险级别只保留床位列表分组需要的危 / 重语义。
// 具体颜色、角标文案和资源选择由 Android / Kuikly UI 层决定。
enum class RiskLevel {
    // 病危，对应旧链路 dangerLevel D/d。
    Danger,

    // 病重，对应旧链路 dangerLevel S/s。
    Severe,

    // 普通或未配置风险，不生成危重分组。
    None,

    // Host 传入了非空但 shared 暂不识别的风险值，用于后续审计。
    Unknown,
}

// 患者标记用于表达床位列表稳定业务状态。
// 它不等同于卡片最终视觉标签；标签显隐、颜色和排序由 UI 层或 Host adapter 决定。
enum class PatientFlag {
    // 今日新入科患者。
    NewIn,

    // 参与“新开医嘱”左侧分组的标记，对应 Android PatientBean.isNewOrder。
    NewOrder,

    // 卡片上的新医嘱状态标记，不参与左侧分组计数。
    NewOrderStatus,

    // 卡片上的 ST 医嘱状态标记，不参与左侧分组计数。
    StatOrder,

    // 今日出院患者。
    OutHospitalToday,

    // 欠费患者。
    Arrears,

    // 高热患者。
    HighTemperature,

    // 存在护理计划。
    NursePlan,

    // 三日内入院患者。
    TodayIn3,

    // 卡片上的手术标记；左侧“手术患者”分组由 Host 额外手术列表显式传入。
    Surgery,

    // 术后第二天患者。
    Surgery2,

    // 术后第三天患者。
    Surgery3,

    // 术后第四天患者。
    Surgery4,

    // 卡片上的今日转入标记；左侧转入分组由 Host 额外转入列表显式传入。
    TransIn,

    // 卡片上的今日转出标记；左侧转出分组由 Host 额外列表显式传入。
    TransOut,

    // 卡片上的流转转出状态；左侧流转转出分组由 Host 额外列表显式传入。
    TransferOut,
}

// 风险评估性质用于把 Android realTimeEvaluateList.nature 映射为跨端稳定分组。
// 风险等级、字典缩写和 VTE 图标仍由 Host 或 UI adapter 按配置解释。
enum class PatientRiskNature {
    // 自理能力风险。
    SelfCare,

    // 疼痛风险。
    Pain,

    // 跌倒风险。
    FallDown,

    // 压疮风险。
    PressureSore,

    // 管路滑脱风险。
    PipeFall,

    // 焦虑风险。
    Anxiety,

    // 抑郁风险。
    Depression,

    // 营养风险。
    Nutrition,

    // 深静脉血栓风险。
    DeepVeins,
}

// 患者分组类型对齐 Android BedType 的稳定业务 code。
// 新增分组时必须说明来源字段，不能把 Host 筛选、副作用或 UI 文案塞进枚举值。
enum class PatientGroupType(val legacyCode: String) {
    // 全部患者分组，对应 patInhos。
    All("patInhos"),

    // 特级护理分组，对应 nursingLevel0。
    Special("nursingLevel0"),

    // 一级护理分组，对应 nursingLevel1。
    First("nursingLevel1"),

    // 二级护理分组，对应 nursingLevel2。
    Second("nursingLevel2"),

    // 三级护理分组，对应 nursingLevel3。
    Third("nursingLevel3"),

    // 特殊病情分组，对应 specialDisease。
    SpecialDisease("specialDisease"),

    // 病危分组，对应 dangerLevelD。
    Danger("dangerLevelD"),

    // 病重分组，对应 dangerLevelS。
    Severe("dangerLevelS"),

    // 今日新入分组，对应 todayIn。
    NewIn("todayIn"),

    // 今日出院分组，对应 todayOut。
    OutHospital("todayOut"),

    // 手术患者分组，对应 todaySurgery。
    Surgery("todaySurgery"),

    // 欠费分组，对应 oweFree。
    OweFee("oweFree"),

    // 新开医嘱分组，对应 newOpenOrder。
    NewOpen("newOpenOrder"),

    // 三日内入院分组，对应 todayIn3。
    TodayIn3("todayIn3"),

    // 术后第二天分组，对应 surgery2。
    Surgery2("surgery2"),

    // 术后第三天分组，对应 surgery3。
    Surgery3("surgery3"),

    // 术后第四天分组，对应 surgery4。
    Surgery4("surgery4"),

    // 成人分组，对应 adult。
    Adult("adult"),

    // 婴儿分组，对应 baby。
    Baby("baby"),

    // 今日转入分组，对应 todayTransferIn。
    TransIn("todayTransferIn"),

    // 今日转出分组，对应 todayTransOut。
    TransOut("todayTransOut"),

    // 流转转出分组，对应 todayTransferOut。
    TransferOut("todayTransferOut"),

    // 自理能力风险分组，对应 selfCare。
    SelfCare("selfCare"),

    // 疼痛风险分组，对应 pain。
    Pain("pain"),

    // 跌倒风险分组，对应 fallDown。
    FallDown("fallDown"),

    // 压疮风险分组，对应 pressureSore。
    PressureSore("pressureSore"),

    // 管路滑脱风险分组，对应 pipeFall。
    PipeFall("pipeFall"),

    // 焦虑风险分组，对应 anxiety。
    Anxiety("anxiety"),

    // 抑郁风险分组，对应 depression。
    Depression("depression"),

    // 营养风险分组，对应 nutrition。
    Nutrition("nutrition"),

    // 深静脉血栓风险分组，对应 autar。
    DeepVeins("autar"),

    // 高热分组，对应 highTemperature。
    HighTemperature("highTemperature"),

    // 护理计划分组，对应 nursePlan。
    NursePlan("nursePlan");

    companion object {
        fun fromLegacyCode(code: String?): PatientGroupType? {
            return values().firstOrNull { it.legacyCode == code }
        }
    }
}

// Host 外部分组类型只覆盖 BedList 旧链路中确实来自额外接口 / 列表的分组。
// 不允许 Host 任意塞护理级别、风险级别、All / Adult / Baby 等 shared 可自行计算的分组，避免绕过字段规则。
enum class PatientExternalGroupType {
    // 今日出院接口返回的患者列表，对应 OutHospital；旧链路在列表非空时覆盖 outDate 推导结果。
    TodayOutHospital,

    // 手术列表确认的患者，对应 Surgery。
    TodaySurgery,

    // 今日转入列表确认的患者，对应 TransIn。
    TodayTransferIn,

    // 今日转出列表确认的患者，对应 TransOut。
    TodayTransferOut,

    // 流转转出列表确认的患者，对应 TransferOut。
    FlowTransferOut,
}

data class PatientExternalGroup(
    val type: PatientExternalGroupType,
    val patients: List<PatientSummary>,
    val replacesInferredGroup: Boolean = false,
)

data class PatientGroupConfig(
    val type: PatientGroupType,
    val name: String,
    val isSelected: Boolean = false,
)

// 患者标识标题模式表达 Android versionConfig.inhosCodeShowName 的稳定业务语义。
// Host 只提供原始配置事实；具体中文标题和搜索提示由 shared-presentation 统一生成。
enum class PatientIdentifierDisplayMode {
    // 默认显示“住院号”，对应未配置、inhosCode 或其他旧系统兼容值。
    InpatientNumber,

    // 显示“病历号”，仅对应后端明确返回 displayCode。
    MedicalRecordNumber,
    ;

    companion object {
        fun fromLegacyInhosCodeShowName(value: String): PatientIdentifierDisplayMode {
            return if (value == "displayCode") MedicalRecordNumber else InpatientNumber
        }
    }
}

data class PatientListInput(
    val wardCode: String,
    val patients: List<PatientSummary>,
    val groupConfigs: List<PatientGroupConfig> = emptyList(),
    val groupConfigsProvided: Boolean = groupConfigs.isNotEmpty(),
    val selectedGroupType: PatientGroupType? = null,
    val isCareScopeSelected: Boolean = false,
    val careScopeName: String = "",
    val isRefreshing: Boolean = false,
    val filterUnauthorizedPatients: Boolean = false,
    val excludeNeonateFromAdultGroups: Boolean = false,
    val externalGroups: List<PatientExternalGroup> = emptyList(),
    val searchAccurate: Boolean = false,
    val useNewVersion: Boolean = false,
    val patientIdentifierDisplayMode: PatientIdentifierDisplayMode = PatientIdentifierDisplayMode.InpatientNumber,
    val cardRenderConfigFacts: PatientCardRenderConfigFactsInput = PatientCardRenderConfigFactsInput(),
    val riskTagDictionaryFacts: List<PatientRiskTagDictionaryFact> = emptyList(),
    val riskLevelDisplayConfigFact: PatientRiskLevelDisplayConfigFact? = null,
)

internal fun PatientListInput.visiblePatients(
    source: List<PatientSummary> = patients,
): List<PatientSummary> {
    // Android keeps group counters unchanged, but every rendered patient list still enforces authorization.
    return if (filterUnauthorizedPatients) {
        source.filter(PatientSummary::isAuthorized)
    } else {
        source
    }
}

data class PatientCardRenderConfigFactsInput(
    val legacyBedStyle: Int? = null,
    val selectedCodes: List<String> = emptyList(),
    val nurseLevelSpecialColor: String = "",
    val nurseLevelFirstColor: String = "",
    val nurseLevelSecondColor: String = "",
    val nurseLevelThirdColor: String = "",
    val dangerLevelColor: String = "",
    val severeLevelColor: String = "",
)
