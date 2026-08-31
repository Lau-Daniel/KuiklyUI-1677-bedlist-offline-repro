package com.lachesis.fusion.shared.patient.presentation

import com.lachesis.fusion.shared.patient.domain.NursingLevel
import com.lachesis.fusion.shared.patient.domain.PatientFlag
import com.lachesis.fusion.shared.patient.domain.PatientGroupType
import com.lachesis.fusion.shared.patient.domain.PatientIdentifierDisplayMode
import com.lachesis.fusion.shared.patient.domain.PatientRiskNature
import com.lachesis.fusion.shared.patient.domain.RiskLevel
import com.lachesis.fusion.shared.routing.MnisRoute

data class PatientGroupState(
    val type: PatientGroupType,
    val name: String,
    val count: Int,
    val isSelected: Boolean,
)

// 风险标签样式 token 只表达旧页面已准备好的展示级别，不绑定 Android 资源、颜色对象或业务判断。
enum class PatientRiskTagPresentationStyle {
    // 无法识别或 Host 未提供等级时的默认展示样式。
    Default,

    // 旧风险等级 01，对应低风险标签样式。
    LevelOne,

    // 旧风险等级 02，对应中风险标签样式。
    LevelTwo,

    // 旧风险等级 03，对应高风险标签样式。
    LevelThree,

    // 旧风险等级 04，对应无风险/隐藏配置样式，仅在 Host 已显式保留时展示。
    LevelFour,

    // 旧风险等级 05，对应极高风险标签样式。
    LevelFive,

    // 旧隔离标签样式。
    Isolation,

    // VTE 一级标签样式。
    VteLevelOne,

    // VTE 二级标签样式。
    VteLevelTwo,

    // VTE 三级标签样式。
    VteLevelThree,

    // VTE 待处理标签样式。
    VteTodo,
}

data class PatientRiskTagPresentationState(
    val displayName: String,
    val style: PatientRiskTagPresentationStyle = PatientRiskTagPresentationStyle.Default,
)

data class PatientListItemState(
    val patientId: String,
    val encounterId: String,
    val bedNo: String,
    val name: String,
    val displayCode: String,
    val gender: String,
    val age: String,
    val admissionDate: String,
    val inHospitalDay: Int,
    val birthDate: String,
    val diagnosis: String,
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
    val nursingLevel: NursingLevel,
    val riskLevel: RiskLevel,
    val isBaby: Boolean,
    val isCared: Boolean,
    val isAuthorized: Boolean,
    val flags: Set<PatientFlag>,
    val riskNatures: Set<PatientRiskNature>,
    // shared 已按旧页面字典和风险等级规则准备好的兼容标签文本。
    val riskTagLabels: List<String> = emptyList(),
    // shared 已按旧页面字典、风险等级和 VTE/隔离规则准备好的卡片风险标签展示状态。
    val riskTags: List<PatientRiskTagPresentationState> = emptyList(),
    // Android 风险区按短文案五列、长文案四列布局；该值由 shared 基于最终可见文案计算。
    val riskTagSpanCount: Int = 5,
    // shared 按护理等级与有效配置色决定角标显隐，跨端 UI 只消费该展示状态。
    val nurseLevelBadgeVisible: Boolean = true,
    val nurseLevelBadgeColor: String = "",
    val criticalBadgeColor: String = "",
)

// Patient search mode mirrors the Android versionConfig contract and remains independent of Host UI controls.
enum class PatientSearchMatchMode {
    // Match when bed number, display code, or patient name contains the query.
    Contains,

    // Match only when one searchable field equals the query.
    Exact,
}

data class PatientSearchItemState(
    val stableKey: String,
    val patient: PatientListItemState,
    val titleText: String,
    val patientInfoText: String,
    val patientIdentifierText: String,
    val diagnosisText: String,
    val pathIconVisible: Boolean,
    val pathIconNoNeedFinish: Boolean,
    val criticalText: String = "",
    val mewsAlertLevel: String = "",
    val mewsScoreText: String = "",
    val nurseLevelText: String = "",
    val riskTags: List<PatientRiskTagPresentationState> = emptyList(),
)

data class PatientListSearchUiState(
    val keyword: String,
    val matchMode: PatientSearchMatchMode,
    val sourceCount: Int,
    val items: List<PatientSearchItemState>,
    val cardRenderConfig: PatientCardRenderConfig = PatientCardRenderConfigPlanner.config(
        PatientCardRenderConfigFacts(null, emptyList()),
    ),
    val searchPlaceholder: String = PATIENT_LIST_SEARCH_PLACEHOLDER,
    val isEmpty: Boolean = items.isEmpty(),
)

const val PATIENT_LIST_EMPTY_MESSAGE = "暂无数据"

/**
 * BedList 主内容的业务模式。
 *
 * 该类型只用于 shared 生成模式相关文案；Host 仍负责根据真实病区与角色事实选择模式。
 */
enum class PatientListContentMode {
    /** 普通住院患者床位列表。 */
    Patient,

    /** 手术室护士使用的手术列表。 */
    Surgery,
}

/**
 * BedList 主内容的可见加载阶段。
 *
 * Host 只上报归一化阶段事实，标题、按钮和重试显隐由 shared 统一决定。
 */
enum class PatientListLoadPhase {
    /** 首次请求尚未完成。 */
    Loading,

    /** 已有可渲染的完整状态。 */
    Ready,

    /** 首次请求失败，允许用户重试。 */
    Error,

    /** 会话或请求所需配置缺失，需要重新登录或补齐上下文。 */
    MissingConfiguration,

    /** Host 上报了当前合同无法识别的阶段，按不可用状态安全展示。 */
    Unavailable,
}

/**
 * BedList Host 上报的归一化结果事实。
 *
 * 枚举不保存后端自由文本；新增 Host 错误类别时必须在这里显式归类，再由 shared 决定可见反馈。
 */
enum class PatientListLoadMessage {
    /** 没有附加结果事实。 */
    None,

    /** 首次加载正在进行。 */
    Loading,

    /** 首次加载成功。 */
    Loaded,

    /** 保留现有列表并执行刷新。 */
    Refreshing,

    /** 刷新成功。 */
    Refreshed,

    /** 刷新所需配置缺失，但已有列表仍可保留。 */
    RefreshConfigurationMissing,

    /** 本地没有可恢复的登录会话。 */
    SessionMissing,

    /** 登录会话恢复失败。 */
    SessionRestoreFailed,

    /** 页面请求参数或安全上下文配置缺失。 */
    ConfigurationMissing,

    /** Android 等价的床位分组配置未能取得。 */
    GroupConfigurationMissing,

    /** 网络请求未能建立或完成。 */
    NetworkFailure,

    /** 服务端响应无法按既定合同解析。 */
    ResponseInvalid,

    /** 服务端返回非成功 HTTP 状态。 */
    HttpFailure,

    /** 已归一化但尚未细分的失败。 */
    UnknownFailure,
}

data class PatientListLoadFacts(
    val phase: PatientListLoadPhase,
    val message: PatientListLoadMessage,
)

data class PatientListLoadUiState(
    val phase: PatientListLoadPhase,
    val title: String,
    val detailMessage: String,
    val noticeMessage: String,
    val retryVisible: Boolean,
    val reopenLoginVisible: Boolean,
)

object PatientListLoadPresenter {
    fun factsFromHostCodes(phaseCode: String?, messageCode: String?): PatientListLoadFacts {
        return PatientListLoadFacts(
            phase = when (phaseCode?.trim()) {
                "loading" -> PatientListLoadPhase.Loading
                "ready" -> PatientListLoadPhase.Ready
                "error" -> PatientListLoadPhase.Error
                "missing_config" -> PatientListLoadPhase.MissingConfiguration
                else -> PatientListLoadPhase.Unavailable
            },
            message = messageFromHostCode(messageCode),
        )
    }

    fun present(mode: PatientListContentMode, facts: PatientListLoadFacts): PatientListLoadUiState {
        val listName = if (mode == PatientListContentMode.Surgery) "手术列表" else "患者列表"
        return PatientListLoadUiState(
            phase = facts.phase,
            title = when (facts.phase) {
                PatientListLoadPhase.Loading -> "正在加载..."
                PatientListLoadPhase.Ready -> ""
                PatientListLoadPhase.Error -> "${listName}加载失败"
                PatientListLoadPhase.MissingConfiguration -> "${listName}参数缺失"
                PatientListLoadPhase.Unavailable -> "${listName}暂不可用"
            },
            detailMessage = detailMessage(listName, facts.message),
            noticeMessage = noticeMessage(listName, facts),
            retryVisible = facts.phase == PatientListLoadPhase.Error,
            reopenLoginVisible = facts.phase == PatientListLoadPhase.Error ||
                facts.phase == PatientListLoadPhase.MissingConfiguration ||
                facts.phase == PatientListLoadPhase.Unavailable,
        )
    }

    private fun messageFromHostCode(value: String?): PatientListLoadMessage {
        val code = value?.trim().orEmpty()
        return when {
            code.isBlank() -> PatientListLoadMessage.None
            code == "loading" -> PatientListLoadMessage.Loading
            code == "loaded" -> PatientListLoadMessage.Loaded
            code == "refreshing" -> PatientListLoadMessage.Refreshing
            code == "refreshed" -> PatientListLoadMessage.Refreshed
            code == "refresh_config_missing" -> PatientListLoadMessage.RefreshConfigurationMissing
            code == "session_missing" -> PatientListLoadMessage.SessionMissing
            code == "session_restore_failed" -> PatientListLoadMessage.SessionRestoreFailed
            code == "config_missing" -> PatientListLoadMessage.ConfigurationMissing
            code.contains("group_config") -> PatientListLoadMessage.GroupConfigurationMissing
            code.contains("network") -> PatientListLoadMessage.NetworkFailure
            code.contains("response") -> PatientListLoadMessage.ResponseInvalid
            code.contains("http") -> PatientListLoadMessage.HttpFailure
            else -> PatientListLoadMessage.UnknownFailure
        }
    }

    private fun detailMessage(listName: String, message: PatientListLoadMessage): String {
        return when (message) {
            PatientListLoadMessage.None -> ""
            PatientListLoadMessage.SessionMissing -> "登录会话缺失，请重新登录后进入床位列表"
            PatientListLoadMessage.SessionRestoreFailed -> "登录会话恢复失败，请重新登录后进入床位列表"
            PatientListLoadMessage.ConfigurationMissing -> "${listName}参数缺失"
            PatientListLoadMessage.Loading,
            PatientListLoadMessage.Refreshing,
            -> "正在加载${listName}"
            PatientListLoadMessage.Loaded,
            PatientListLoadMessage.Refreshed,
            -> "${listName}已更新"
            PatientListLoadMessage.RefreshConfigurationMissing -> "刷新参数缺失，已保留当前${listName}"
            PatientListLoadMessage.GroupConfigurationMissing -> "无法获取床位列表配置，请登录重试"
            PatientListLoadMessage.NetworkFailure -> "网络不可用，请检查网络配置"
            PatientListLoadMessage.ResponseInvalid -> "${listName}响应异常，请稍后重试"
            PatientListLoadMessage.HttpFailure -> "${listName}请求失败，请稍后重试"
            PatientListLoadMessage.UnknownFailure -> "${listName}加载失败，请稍后重试"
        }
    }

    private fun noticeMessage(listName: String, facts: PatientListLoadFacts): String {
        if (facts.phase != PatientListLoadPhase.Ready) return ""
        return when (facts.message) {
            PatientListLoadMessage.SessionMissing,
            PatientListLoadMessage.SessionRestoreFailed,
            -> "登录会话已失效，已保留当前${listName}"
            PatientListLoadMessage.RefreshConfigurationMissing -> "刷新参数缺失，已保留当前${listName}"
            PatientListLoadMessage.NetworkFailure -> "刷新失败，请检查网络配置；已保留当前${listName}"
            PatientListLoadMessage.ResponseInvalid -> "刷新响应异常，已保留当前${listName}"
            PatientListLoadMessage.HttpFailure,
            PatientListLoadMessage.UnknownFailure,
            -> "刷新失败，已保留当前${listName}"
            else -> ""
        }
    }
}

data class PatientListUiState(
    val route: MnisRoute = MnisRoute.PatientList,
    val routeValid: Boolean,
    val missingParams: List<String> = emptyList(),
    val groups: List<PatientGroupState> = emptyList(),
    val selectedGroupType: PatientGroupType? = null,
    val isCareScopeSelected: Boolean = false,
    val careScopeName: String = "",
    val isRefreshing: Boolean = false,
    val items: List<PatientListItemState> = emptyList(),
    val patientIdentifierLabel: String = PatientIdentifierDisplayMode.InpatientNumber.patientIdentifierDisplayLabel(),
    val patientDetailDestination: PatientDetailDestination = PatientDetailDestination.LegacyDeferred,
    val isEmpty: Boolean = items.isEmpty(),
    val emptyMessage: String = PATIENT_LIST_EMPTY_MESSAGE,
    val cardRenderConfig: PatientCardRenderConfig = PatientCardRenderConfigPlanner.config(PatientCardRenderConfigFacts(null, emptyList())),
)

/** Shared chooses the patient-detail destination; Host only executes the typed route. */
enum class PatientDetailDestination {
    /** The configured new workflow opens the patient nursing-task workspace. */
    NursingTask,

    /** The legacy Android-only destination is not yet available on Harmony and shows a fixed deferred prompt. */
    LegacyDeferred,
}

// Action 只表达用户意图，不直接启动 Android Activity、鸿蒙页面或真实网络。
sealed interface PatientListAction {
    data class SelectGroup(val type: PatientGroupType) : PatientListAction

    data class SelectCareScope(val isCare: Boolean) : PatientListAction

    data class SelectPatient(val encounterId: String) : PatientListAction

    data class SelectSearchPatient(
        val patientId: String,
        val encounterId: String,
        val patientName: String = "",
        val bedCode: String = "",
        val displayCode: String = "",
        val genderName: String = "",
        val age: String = "",
        val diagnosis: String = "",
        val nursingLevelCode: String = "",
    ) : PatientListAction

    data object Refresh : PatientListAction

    data object OpenSearch : PatientListAction

    data object OpenFunctionMenu : PatientListAction
}

// Effect 表达 Action 之后的明确处理意图：纯展示 Effect 可由 Kuikly 本地消费，真实副作用 Effect 交给 Host 审慎接手。
// 分组、排序、筛选继续留在 UiState；真实 Intent、路由跳转、Toast、网络刷新都由 Host adapter 决定。
sealed interface PatientListEffect {
    data class OpenPatientDetail(
        val patientId: String,
        val encounterId: String,
        val patientName: String = "",
        val bedCode: String = "",
        val displayCode: String = "",
        val genderName: String = "",
        val age: String = "",
        val diagnosis: String = "",
        val nursingLevelCode: String = "",
        val destination: PatientDetailDestination,
    ) : PatientListEffect

    data object RefreshRequested : PatientListEffect

    data class CareScopeRefreshRequested(val isCare: Boolean) : PatientListEffect

    data object OpenSearchRequested : PatientListEffect

    data object OpenFunctionMenuRequested : PatientListEffect
}
