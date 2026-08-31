package com.lachesis.fusion.shared.routing

// 路由枚举只定义跨端页面或动作的稳定标识，供 manifest、Host bridge 和 shared-presentation 对齐。
// 新增路由时必须同步 RouteContract 与 PageManifestEntry，不要把页面可用状态或业务决策塞进路由值。
enum class MnisRoute(val value: String) {
    // 患者列表页路由，需要 wardCode 定位护理单元患者范围。
    PatientList("mnis.patient.list"),

    // 扫码分发入口路由，需要 Host 提供扫码原文后再决定后续页面或动作。
    ScanDispatch("mnis.scan.dispatch"),

    // 医嘱执行前检查路由，承载提交前 shared 决策和 Host 提示链路。
    OrderPrecheck("mnis.order.precheck"),
}

// 可用性枚举用于 manifest/gate 层标记当前路由离真实可用还差什么。
// 它不属于单次业务决策输出；业务规则只能返回决策分支，不能用 readiness 暗示测试或体验闭环已通过。
enum class RouteReadiness {
    // 本地静态逻辑已可验证，不依赖设备、外部环境或人工确认。
    LocalReady,

    // 依赖设备能力，例如扫码设备、PDA 或运行态桥接；本地不能声明闭环。
    BlockedByDevice,

    // 依赖联调环境、外部服务或配置条件；本地只能完成结构级验证。
    BlockedByEnvironment,

    // 需要人工检查、正式测试或业务确认后才能推进到可用状态。
    ManualRequired,
}

data class RequiredParam(val name: String)

data class RouteContract(
    val route: MnisRoute,
    val requiredParams: Set<RequiredParam>,
    val readiness: RouteReadiness = RouteReadiness.LocalReady,
) {
    fun validate(params: Map<String, String?>): RouteValidationResult {
        val missing = requiredParams
            .map { it.name }
            .filter { name -> params[name].isNullOrBlank() }

        return if (missing.isEmpty()) {
            RouteValidationResult.Valid
        } else {
            RouteValidationResult.Invalid(route = route, missingParams = missing)
        }
    }
}

sealed interface RouteValidationResult {
    data object Valid : RouteValidationResult

    data class Invalid(
        val route: MnisRoute,
        val missingParams: List<String>,
    ) : RouteValidationResult
}

data class PageManifestEntry(
    val route: MnisRoute,
    val pageName: String,
    val title: String,
    val readiness: RouteReadiness,
)

class PageManifestGate(
    private val contracts: List<RouteContract>,
    private val entries: List<PageManifestEntry>,
) {
    private val contractByRoute = contracts.associateBy { it.route }
    private val entryByRoute = entries.associateBy { it.route }

    fun requireEntry(route: MnisRoute): PageManifestEntry {
        return entryByRoute[route] ?: error("Missing page manifest entry for ${route.value}")
    }

    fun validate(): ManifestValidationResult {
        val errors = mutableListOf<String>()

        errors += duplicateRoutes(contracts.map { it.route }).map { route ->
            "Duplicate route contract: ${route.value}"
        }
        errors += duplicateRoutes(entries.map { it.route }).map { route ->
            "Duplicate page manifest entry: ${route.value}"
        }

        contracts.forEach { contract ->
            val entry = entryByRoute[contract.route]
            if (entry == null) {
                errors += "Missing page manifest entry for ${contract.route.value}"
            } else if (entry.readiness != contract.readiness) {
                errors += "Readiness mismatch for ${contract.route.value}: contract=${contract.readiness}, manifest=${entry.readiness}"
            }
        }

        entries.forEach { entry ->
            if (contractByRoute[entry.route] == null) {
                errors += "Page manifest entry has no route contract: ${entry.route.value}"
            }
            if (entry.pageName.isBlank()) {
                errors += "Page manifest entry pageName is blank: ${entry.route.value}"
            }
            if (entry.title.isBlank()) {
                errors += "Page manifest entry title is blank: ${entry.route.value}"
            }
        }

        return if (errors.isEmpty()) {
            ManifestValidationResult.Valid
        } else {
            ManifestValidationResult.Invalid(errors)
        }
    }

    private fun duplicateRoutes(routes: List<MnisRoute>): List<MnisRoute> {
        return routes
            .groupingBy { it }
            .eachCount()
            .filterValues { count -> count > 1 }
            .keys
            .toList()
    }
}

sealed interface ManifestValidationResult {
    data object Valid : ManifestValidationResult

    data class Invalid(val errors: List<String>) : ManifestValidationResult
}

object MnisPageContracts {
    val patientList = RouteContract(
        route = MnisRoute.PatientList,
        requiredParams = setOf(RequiredParam("wardCode")),
        readiness = RouteReadiness.LocalReady,
    )

    val scanDispatch = RouteContract(
        route = MnisRoute.ScanDispatch,
        requiredParams = setOf(RequiredParam("rawBarcode")),
        readiness = RouteReadiness.BlockedByDevice,
    )

    val orderPrecheck = RouteContract(
        route = MnisRoute.OrderPrecheck,
        requiredParams = setOf(RequiredParam("patientId"), RequiredParam("orderGroupNo")),
        readiness = RouteReadiness.ManualRequired,
    )

    val all = listOf(patientList, scanDispatch, orderPrecheck)
}

object MnisPageManifest {
    val entries = listOf(
        PageManifestEntry(
            route = MnisRoute.PatientList,
            pageName = "PatientListPage",
            title = "患者列表",
            readiness = RouteReadiness.LocalReady,
        ),
        PageManifestEntry(
            route = MnisRoute.ScanDispatch,
            pageName = "ScanDispatchAction",
            title = "扫码分发",
            readiness = RouteReadiness.BlockedByDevice,
        ),
        PageManifestEntry(
            route = MnisRoute.OrderPrecheck,
            pageName = "OrderPrecheckPage",
            title = "医嘱执行前检查",
            readiness = RouteReadiness.ManualRequired,
        ),
    )

    val gate = PageManifestGate(
        contracts = MnisPageContracts.all,
        entries = entries,
    )
}
