package com.lachesis.fusion.kuiklyui.bedlist

import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.key
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.runtime.snapshotFlow
import com.tencent.kuikly.compose.animation.core.LinearEasing
import com.tencent.kuikly.compose.animation.core.RepeatMode
import com.tencent.kuikly.compose.animation.core.animateFloat
import com.tencent.kuikly.compose.animation.core.infiniteRepeatable
import com.tencent.kuikly.compose.animation.core.rememberInfiniteTransition
import com.tencent.kuikly.compose.animation.core.tween
import com.lachesis.fusion.shared.patient.domain.PatientGroupType
import com.lachesis.fusion.shared.patient.domain.RiskLevel
import com.lachesis.fusion.shared.patient.presentation.PatientCardHostPresentationConfig
import com.lachesis.fusion.shared.patient.presentation.PatientCardOrderStatus
import com.lachesis.fusion.shared.patient.presentation.PatientCardPathMarker
import com.lachesis.fusion.shared.patient.presentation.PatientCardRenderConfig
import com.lachesis.fusion.shared.patient.presentation.PatientCardSpecialMarksUiState
import com.lachesis.fusion.shared.patient.presentation.PatientCardUiState
import com.lachesis.fusion.shared.patient.presentation.PatientGroupState
import com.lachesis.fusion.shared.patient.presentation.PatientListAction
import com.lachesis.fusion.shared.patient.presentation.PatientListItemState
import com.lachesis.fusion.shared.patient.presentation.PatientListUiState
import com.lachesis.fusion.shared.patient.presentation.PatientRiskTagPresentationState
import com.lachesis.fusion.shared.patient.presentation.PatientRiskTagPresentationStyle
import com.lachesis.fusion.shared.patient.presentation.patientCardDisplayLabel
import com.lachesis.fusion.shared.patient.presentation.patientListCardUiState
import com.lachesis.fusion.shared.patient.presentation.patientListNurseLevelBadgeText
import com.tencent.kuikly.compose.foundation.background
import com.tencent.kuikly.compose.foundation.clickable
import com.tencent.kuikly.compose.foundation.ExperimentalFoundationApi
import com.tencent.kuikly.compose.foundation.Image
import com.tencent.kuikly.compose.foundation.gestures.awaitEachGesture
import com.tencent.kuikly.compose.foundation.gestures.awaitFirstDown
import com.tencent.kuikly.compose.foundation.layout.Arrangement
import com.tencent.kuikly.compose.foundation.layout.Box
import com.tencent.kuikly.compose.foundation.layout.BoxWithConstraints
import com.tencent.kuikly.compose.foundation.layout.BoxScope
import com.tencent.kuikly.compose.foundation.layout.Column
import com.tencent.kuikly.compose.foundation.layout.ExperimentalLayoutApi
import com.tencent.kuikly.compose.foundation.layout.FlowRow
import com.tencent.kuikly.compose.foundation.layout.IntrinsicSize
import com.tencent.kuikly.compose.foundation.layout.PaddingValues
import com.tencent.kuikly.compose.foundation.layout.Row
import com.tencent.kuikly.compose.foundation.layout.Spacer
import com.tencent.kuikly.compose.foundation.layout.fillMaxHeight
import com.tencent.kuikly.compose.foundation.layout.fillMaxSize
import com.tencent.kuikly.compose.foundation.layout.fillMaxWidth
import com.tencent.kuikly.compose.foundation.layout.height
import com.tencent.kuikly.compose.foundation.layout.heightIn
import com.tencent.kuikly.compose.foundation.layout.offset
import com.tencent.kuikly.compose.foundation.layout.padding
import com.tencent.kuikly.compose.foundation.layout.requiredWidth
import com.tencent.kuikly.compose.foundation.layout.size
import com.tencent.kuikly.compose.foundation.layout.width
import com.tencent.kuikly.compose.foundation.lazy.LazyColumn
import com.tencent.kuikly.compose.foundation.lazy.LazyListState
import com.tencent.kuikly.compose.foundation.lazy.enableLazyListPrefetch
import com.tencent.kuikly.compose.foundation.lazy.items
import com.tencent.kuikly.compose.foundation.lazy.rememberLazyListState
import com.tencent.kuikly.compose.foundation.shape.RoundedCornerShape
import com.tencent.kuikly.compose.extension.NestedScrollMode
import com.tencent.kuikly.compose.extension.bouncesEnable
import com.tencent.kuikly.compose.extension.nestedScroll
import com.tencent.kuikly.compose.extension.setProp
import com.tencent.kuikly.compose.material3.Text
import com.tencent.kuikly.compose.resources.DrawableResource
import com.tencent.kuikly.compose.resources.InternalResourceApi
import com.tencent.kuikly.compose.resources.painterResource
import com.tencent.kuikly.compose.ui.Alignment
import com.tencent.kuikly.compose.ui.Modifier
import com.tencent.kuikly.compose.ui.draw.clipToBounds
import com.tencent.kuikly.compose.ui.graphics.Color
import com.tencent.kuikly.compose.ui.input.pointer.PointerEventPass
import com.tencent.kuikly.compose.ui.input.pointer.pointerInput
import com.tencent.kuikly.compose.ui.input.pointer.positionChangeIgnoreConsumed
import com.tencent.kuikly.compose.ui.layout.ContentScale
import com.tencent.kuikly.compose.ui.layout.Layout
import com.tencent.kuikly.compose.ui.layout.onSizeChanged
import com.tencent.kuikly.compose.ui.platform.LocalDensity
import com.tencent.kuikly.compose.ui.semantics.clearAndSetSemantics
import com.tencent.kuikly.compose.ui.text.font.FontWeight
import com.tencent.kuikly.compose.ui.text.style.TextAlign
import com.tencent.kuikly.compose.ui.text.style.TextOverflow
import com.tencent.kuikly.compose.ui.unit.Constraints
import com.tencent.kuikly.compose.ui.unit.Dp
import com.tencent.kuikly.compose.ui.unit.IntSize
import com.tencent.kuikly.compose.ui.unit.TextUnit
import com.tencent.kuikly.compose.ui.unit.dp
import com.tencent.kuikly.compose.ui.unit.sp
import com.tencent.kuikly.compose.ui.zIndex
import com.tencent.kuikly.core.base.attr.ImageUri
import kotlinx.coroutines.delay
import kotlinx.coroutines.flow.distinctUntilChanged
import kotlinx.coroutines.flow.filter
import kotlinx.coroutines.flow.filterNotNull
import kotlinx.coroutines.flow.firstOrNull
import com.lachesis.fusion.kuiklyui.designsystem.fusionFlexibleRemainder
import kotlin.math.roundToInt

/**
 * BedList Kuikly 页面只消费 shared-presentation 已算好的 UiState。
 * 视觉层还原旧原生 BedList 的页面结构，但不读取 Android PatientBean / Repository，
 * 也不重新计算患者分组，避免把 Host 业务规则搬进 UI。
 */
@Composable
fun BedListPatientListContent(
    state: PatientListUiState,
    onAction: (PatientListAction) -> Unit,
    modifier: Modifier = Modifier,
    currentUserDisplayName: String = "",
    onListTopStateChanged: (listType: String, atTop: Boolean) -> Unit = { _, _ -> },
    hostStatePerfSeq: Long = 0L,
    onPatientListFirstVisible: (Long, Int, Int, Int) -> Unit = { _, _, _, _ -> },
    onPatientListEmptyRendered: (Long) -> Unit = {},
) {
    val metrics = remember { BedListVisualMetrics() }
    val stateSelectedGroupType = state.selectedGroupType ?: state.groups.firstOrNull { it.isSelected }?.type
    var pendingGroupType by remember { mutableStateOf<PatientGroupType?>(null) }
    val displayedGroupType = pendingGroupType ?: stateSelectedGroupType
    LaunchedEffect(stateSelectedGroupType) {
        pendingGroupType = null
    }
    LaunchedEffect(pendingGroupType) {
        if (pendingGroupType != null) {
            delay(BedListSelectionFeedbackRollbackMillis)
            pendingGroupType = null
        }
    }
    BoxWithConstraints(
        modifier = modifier.fillMaxSize().setProp("id", "fusion_bedlist_adaptive_root"),
    ) {
        val adaptiveLayout = remember(maxWidth.value, maxHeight.value) {
            BedListAdaptiveLayoutMetrics(maxWidth.value, maxHeight.value)
        }
        Column(
            modifier = Modifier.fillMaxSize().background(BedListSkeletonColors.PageBackground),
        ) {
            BedListTopBar(
                title = "床位列表",
                currentUserDisplayName = currentUserDisplayName,
                metrics = metrics,
                onMenu = { onAction(PatientListAction.OpenFunctionMenu) },
                onRefresh = { onAction(PatientListAction.Refresh) },
                onSearch = { onAction(PatientListAction.OpenSearch) },
            )
            BedListScopeTabs(
                careScopeName = state.careScopeName,
                isCareScopeSelected = state.isCareScopeSelected,
                metrics = metrics,
                onSelectCareScope = { isCare -> onAction(PatientListAction.SelectCareScope(isCare)) },
            )
            HorizontalDivider()
            BedListContentFrame(
                state = state,
                onAction = onAction,
                metrics = metrics,
                displayedGroupType = displayedGroupType,
                onSelectGroup = { type ->
                    pendingGroupType = type.takeIf { it != stateSelectedGroupType }
                    onAction(PatientListAction.SelectGroup(type))
                },
                onListTopStateChanged = onListTopStateChanged,
                hostStatePerfSeq = hostStatePerfSeq,
                onPatientListFirstVisible = onPatientListFirstVisible,
                onPatientListEmptyRendered = onPatientListEmptyRendered,
                patientContentWidthDp = adaptiveLayout.patientContentWidthDp,
                modifier = Modifier
                    .fillMaxWidth()
                    .weight(1f),
            )
        }
    }
}

@Composable
internal fun BedListInitialLoadingContent(
    title: String,
    showPatientScope: Boolean,
    currentUserDisplayName: String,
) {
    val metrics = remember { BedListVisualMetrics() }
    Box(
        modifier = Modifier
            .fillMaxSize()
            .background(BedListSkeletonColors.PageBackground),
    ) {
        Column(modifier = Modifier.fillMaxSize()) {
            BedListTopBar(
                title = title,
                currentUserDisplayName = currentUserDisplayName,
                metrics = metrics,
                onMenu = {},
                onRefresh = {},
                onSearch = {},
            )
            if (showPatientScope) {
                BedListScopeTabs(
                    careScopeName = "本组",
                    isCareScopeSelected = false,
                    metrics = metrics,
                    onSelectCareScope = {},
                )
                HorizontalDivider()
            }
            Row(
                modifier = Modifier
                    .fillMaxWidth()
                    .weight(1f),
            ) {
                if (showPatientScope) {
                    Box(
                        modifier = Modifier
                            .width(metrics.groupRailWidth)
                            .fillMaxHeight()
                            .background(BedListSkeletonColors.PageBackground),
                    )
                    Box(
                        modifier = Modifier
                            .width(1.dp)
                            .fillMaxHeight()
                            .background(BedListSkeletonColors.Divider),
                    )
                }
                Box(
                    modifier = Modifier
                        .weight(1f)
                        .fillMaxHeight()
                        .background(BedListSkeletonColors.PatientListBackground),
                )
            }
        }
        Box(
            modifier = Modifier
                .fillMaxSize()
                .background(Color(0x22000000))
                .clickable { },
            contentAlignment = Alignment.Center,
        ) {
            Box(
                modifier = Modifier
                    .size(64.dp)
                    .background(Color(0xE6333333), RoundedCornerShape(4.dp)),
                contentAlignment = Alignment.Center,
            ) {
                BedListRefreshIndicator(contentDescription = "正在加载床位列表")
            }
        }
    }
}

@Composable
internal fun BedListTopBar(
    title: String,
    currentUserDisplayName: String,
    metrics: BedListVisualMetrics,
    onMenu: () -> Unit,
    @Suppress("UNUSED_PARAMETER")
    onRefresh: () -> Unit,
    onSearch: () -> Unit,
) {
    Row(
        modifier = Modifier
            .fillMaxWidth()
            .height(metrics.topBarHeight)
            .background(BedListSkeletonColors.TitleBarBlue)
            .padding(horizontal = metrics.topBarHorizontalPadding),
        verticalAlignment = Alignment.CenterVertically,
    ) {
        Row(
            modifier = Modifier
                .width(metrics.topBarSideWidth)
                .fillMaxHeight(),
            verticalAlignment = Alignment.CenterVertically,
        ) {
            MenuIcon(
                modifier = Modifier
                    .size(metrics.topBarIconTouchWidth, metrics.topBarHeight)
                    .clickable { onMenu() },
                metrics = metrics,
            )
            Spacer(modifier = Modifier.width(metrics.topBarNameSpacing))
            Text(
                text = currentUserDisplayName,
                color = BedListSkeletonColors.TitleText,
                fontSize = metrics.topBarNameFontSize,
                fontWeight = FontWeight.Normal,
            )
        }
        Row(
            modifier = Modifier
                .weight(1f)
                .fillMaxHeight(),
            horizontalArrangement = Arrangement.Center,
            verticalAlignment = Alignment.CenterVertically,
        ) {
            Text(
                text = title,
                color = BedListSkeletonColors.TitleText,
                fontSize = metrics.topBarTitleFontSize,
                fontWeight = FontWeight.Normal,
            )
        }
        Row(
            modifier = Modifier
                .width(metrics.topBarSideWidth)
                .fillMaxHeight(),
            horizontalArrangement = Arrangement.End,
            verticalAlignment = Alignment.CenterVertically,
        ) {
            SearchIcon(
                modifier = Modifier
                    .size(metrics.searchIconTouchWidth, metrics.topBarHeight)
                    .clickable { onSearch() },
                metrics = metrics,
            )
        }
    }
}

@Composable
private fun BedListScopeTabs(
    careScopeName: String,
    isCareScopeSelected: Boolean,
    metrics: BedListVisualMetrics,
    onSelectCareScope: (Boolean) -> Unit,
) {
    Row(
        modifier = Modifier
            .fillMaxWidth()
            .height(metrics.scopeTabsHeight)
            .background(BedListSkeletonColors.PanelBackground),
        verticalAlignment = Alignment.CenterVertically,
    ) {
        BedListScopeTab(
            text = "全科",
            selected = !isCareScopeSelected,
            metrics = metrics,
            onClick = { onSelectCareScope(false) },
            modifier = Modifier
                .weight(1f)
                .fillMaxHeight(),
        )
        BedListScopeTab(
            text = careScopeName.ifBlank { "本组" },
            selected = isCareScopeSelected,
            metrics = metrics,
            onClick = { onSelectCareScope(true) },
            modifier = Modifier
                .weight(1f)
                .fillMaxHeight(),
        )
    }
}

@Composable
private fun BedListScopeTab(
    text: String,
    selected: Boolean,
    metrics: BedListVisualMetrics,
    onClick: () -> Unit,
    modifier: Modifier = Modifier,
) {
    Column(
        modifier = modifier.clickable { onClick() },
        horizontalAlignment = Alignment.CenterHorizontally,
    ) {
        Row(
            modifier = Modifier
                .fillMaxWidth()
                .height(metrics.scopeTabTextHeight),
            horizontalArrangement = Arrangement.Center,
            verticalAlignment = Alignment.CenterVertically,
        ) {
            Text(
                text = text,
                color = if (selected) BedListSkeletonColors.TitleBarBlue else BedListSkeletonColors.SecondaryText,
                fontSize = metrics.scopeTabFontSize,
                fontWeight = FontWeight.Normal,
            )
        }
        Box(
            modifier = Modifier
                .width(metrics.scopeTabIndicatorWidth)
                .height(metrics.scopeTabIndicatorHeight)
                .background(if (selected) BedListSkeletonColors.TitleBarBlue else BedListSkeletonColors.PanelBackground),
        )
    }
}

@Composable
private fun MenuIcon(
    modifier: Modifier = Modifier,
    metrics: BedListVisualMetrics,
) {
    BedListTopBarImageIcon(
        modifier = modifier,
        resource = BedListTopBarMenuIconResource,
        contentDescription = "功能菜单",
        metrics = metrics,
    )
}

@Composable
private fun SearchIcon(
    modifier: Modifier = Modifier,
    metrics: BedListVisualMetrics,
) {
    BedListTopBarImageIcon(
        modifier = modifier,
        resource = BedListTopBarSearchIconResource,
        contentDescription = "搜索患者",
        metrics = metrics,
    )
}

@OptIn(InternalResourceApi::class)
@Composable
private fun BedListTopBarImageIcon(
    modifier: Modifier = Modifier,
    resource: DrawableResource,
    contentDescription: String,
    metrics: BedListVisualMetrics,
) {
    Box(
        modifier = modifier,
        contentAlignment = Alignment.Center,
    ) {
        Image(
            painter = painterResource(resource),
            contentDescription = contentDescription,
            modifier = Modifier.size(metrics.topBarIconWidth, metrics.topBarIconHeight),
            contentScale = ContentScale.Fit,
        )
    }
}

@Composable
private fun BedListContentFrame(
    state: PatientListUiState,
    onAction: (PatientListAction) -> Unit,
    metrics: BedListVisualMetrics,
    displayedGroupType: PatientGroupType?,
    onSelectGroup: (PatientGroupType) -> Unit,
    onListTopStateChanged: (listType: String, atTop: Boolean) -> Unit,
    hostStatePerfSeq: Long,
    onPatientListFirstVisible: (Long, Int, Int, Int) -> Unit,
    onPatientListEmptyRendered: (Long) -> Unit,
    patientContentWidthDp: Float,
    modifier: Modifier = Modifier,
) {
    val patientListResetKey = state.bedListSkeletonPatientListResetKey()
    var patientListAtTop by remember(patientListResetKey) { mutableStateOf(true) }
    Row(
        modifier = modifier
            .fillMaxSize()
            .background(BedListSkeletonColors.PageBackground),
    ) {
        Box(
            modifier = Modifier
                .width(metrics.groupRailWidth)
                .fillMaxHeight()
                .clipToBounds(),
        ) {
            GroupRail(
                groups = state.groups,
                displayedGroupType = displayedGroupType,
                onSelectGroup = onSelectGroup,
                metrics = metrics,
                onListTopStateChanged = onListTopStateChanged,
                modifier = Modifier.fillMaxSize(),
            )
        }
        BedListPullRefreshSurface(
            refreshEnabled = state.routeValid,
            canStartPull = state.isEmpty || patientListAtTop,
            isRefreshing = state.isRefreshing,
            onRefresh = { onAction(PatientListAction.Refresh) },
            modifier = Modifier
                .width(patientContentWidthDp.dp)
                .fillMaxHeight()
                .clipToBounds(),
        ) {
            when {
                !state.routeValid -> BedListMessagePanel(
                    title = "缺少页面参数",
                    detail = state.missingParams.joinToString(prefix = "缺少：").ifBlank { "路由参数无效" },
                    modifier = Modifier.fillMaxSize(),
                )

                state.isEmpty -> {
                    BedListReportPatientListEmptyRendered(
                        statePerfSeq = hostStatePerfSeq,
                        onPatientListEmptyRendered = onPatientListEmptyRendered,
                    )
                    BedListPatientListEmptyState(
                        message = state.emptyMessage,
                        metrics = metrics,
                        modifier = Modifier.fillMaxSize(),
                    )
                }

                else -> PatientCards(
                    patients = state.items,
                    cardRenderConfig = state.cardRenderConfig,
                    patientIdentifierLabel = state.patientIdentifierLabel,
                    resetKey = patientListResetKey,
                    onAction = onAction,
                    metrics = metrics,
                    onListTopStateChanged = { listType, atTop ->
                        if (listType == BED_LIST_HOST_SCROLL_LIST_PATIENTS) {
                            patientListAtTop = atTop
                        }
                        onListTopStateChanged(listType, atTop)
                    },
                    hostStatePerfSeq = hostStatePerfSeq,
                    onPatientListFirstVisible = onPatientListFirstVisible,
                    modifier = Modifier.fillMaxSize(),
                )
            }
        }
    }
}

@Composable
@OptIn(ExperimentalFoundationApi::class)
private fun BedListPullRefreshSurface(
    refreshEnabled: Boolean,
    canStartPull: Boolean,
    isRefreshing: Boolean,
    onRefresh: () -> Unit,
    modifier: Modifier = Modifier,
    content: @Composable BoxScope.() -> Unit,
) {
    val density = LocalDensity.current
    val refreshThresholdPx = with(density) { 64.dp.toPx() }
    var pullProgress by remember { mutableStateOf(0f) }
    var feedbackRevision by remember { mutableStateOf(0) }
    var minimumFeedbackVisible by remember { mutableStateOf(false) }

    LaunchedEffect(refreshEnabled, isRefreshing) {
        if (!refreshEnabled || isRefreshing) {
            pullProgress = 0f
        }
    }
    LaunchedEffect(feedbackRevision) {
        if (feedbackRevision > 0) {
            minimumFeedbackVisible = true
            delay(BedListRefreshFeedbackMinimumMillis)
            minimumFeedbackVisible = false
        }
    }

    Box(
        modifier = modifier.pointerInput(refreshEnabled, canStartPull, isRefreshing, refreshThresholdPx) {
            awaitEachGesture {
                val down = awaitFirstDown(
                    requireUnconsumed = false,
                    pass = PointerEventPass.Initial,
                )
                var pulling = refreshEnabled && canStartPull && !isRefreshing
                var pullDistancePx = 0f
                var pressed = true
                while (pressed) {
                    val event = awaitPointerEvent(PointerEventPass.Initial)
                    val change = event.changes.firstOrNull { it.id == down.id } ?: break
                    pressed = change.pressed
                    if (!pressed || !pulling) {
                        continue
                    }
                    val deltaY = change.positionChangeIgnoreConsumed().y
                    if (pullDistancePx == 0f && deltaY < 0f) {
                        pulling = false
                        continue
                    }
                    pullDistancePx = (pullDistancePx + deltaY).coerceAtLeast(0f)
                    if (pullDistancePx > 0f) {
                        change.consume()
                        pullProgress = (pullDistancePx / refreshThresholdPx).coerceIn(0f, 1f)
                    }
                }
                val refreshRequested = pulling &&
                    pullDistancePx >= refreshThresholdPx &&
                    !isRefreshing
                pullProgress = 0f
                if (refreshRequested) {
                    feedbackRevision += 1
                    onRefresh()
                }
            }
        },
    ) {
        content()
        if (isRefreshing || minimumFeedbackVisible || pullProgress > 0f) {
            val indicatorModifier = if (isRefreshing || minimumFeedbackVisible) {
                Modifier.setProp("id", "kuikly_bedlist_refresh_indicator")
            } else {
                Modifier
            }
            Box(
                modifier = indicatorModifier
                    .align(Alignment.TopCenter)
                    .padding(top = (8f + 12f * pullProgress).dp)
                    .size(40.dp)
                    .background(Color.White, RoundedCornerShape(20.dp))
                    .zIndex(1f),
                contentAlignment = Alignment.Center,
            ) {
                BedListRefreshIndicator()
            }
        }
    }
}

@Composable
private fun BedListPatientListEmptyState(
    message: String,
    metrics: BedListVisualMetrics,
    modifier: Modifier = Modifier,
) {
    Box(
        modifier = modifier.background(BedListSkeletonColors.PanelBackground),
        contentAlignment = Alignment.Center,
    ) {
        Text(
            text = message,
            color = BedListSkeletonColors.PrimaryText,
            fontSize = metrics.emptyStateFontSize,
            fontWeight = FontWeight.Normal,
        )
    }
}

@Composable
private fun BedListReportPatientListEmptyRendered(
    statePerfSeq: Long,
    onPatientListEmptyRendered: (Long) -> Unit,
) {
    LaunchedEffect(statePerfSeq) {
        if (statePerfSeq > 0L) {
            onPatientListEmptyRendered(statePerfSeq)
        }
    }
}

@Composable
private fun GroupRail(
    groups: List<PatientGroupState>,
    displayedGroupType: PatientGroupType?,
    onSelectGroup: (PatientGroupType) -> Unit,
    metrics: BedListVisualMetrics,
    onListTopStateChanged: (listType: String, atTop: Boolean) -> Unit,
    modifier: Modifier = Modifier,
) {
    val listState = rememberLazyListState()
    BedListReportListTopState(
        listState = listState,
        listType = BED_LIST_HOST_SCROLL_LIST_GROUP_RAIL,
        onListTopStateChanged = onListTopStateChanged,
    )
    LazyColumn(
        state = listState,
        modifier = modifier
            .background(BedListSkeletonColors.PanelBackground)
            .bouncesEnable(false)
            .setProp(BED_LIST_KUIKLY_FLING_ENABLE_PROP, BedListKuiklyFlingEnabled)
            .nestedScroll(
                scrollUp = NestedScrollMode.SELF_FIRST,
                scrollDown = NestedScrollMode.PARENT_FIRST,
            ),
        beyondBoundsItemCount = BedListGroupLazyBeyondBoundsItems,
    ) {
        if (groups.isEmpty()) {
            item {
                GroupEmptyItem(metrics = metrics)
            }
        } else {
            items(
                count = groups.size,
                key = { index -> groups[index].type.name },
                contentType = { "BedListGroupItem" },
            ) { index ->
                val group = groups[index]
                GroupItem(
                    group = group,
                    selected = displayedGroupType?.let { it == group.type } ?: group.isSelected,
                    metrics = metrics,
                    onSelectGroup = onSelectGroup,
                )
            }
        }
    }
}

@Composable
private fun GroupEmptyItem(metrics: BedListVisualMetrics) {
    Row(
        modifier = Modifier
            .fillMaxWidth()
            .heightIn(min = metrics.groupItemHeight)
            .padding(
                start = metrics.groupItemStartPadding,
                top = metrics.groupItemVerticalPadding,
                bottom = metrics.groupItemVerticalPadding,
            ),
        horizontalArrangement = Arrangement.Start,
        verticalAlignment = Alignment.CenterVertically,
    ) {
        Text(
            text = "全部 (0)",
            color = BedListSkeletonColors.DisabledText,
            fontSize = metrics.groupItemFontSize,
            lineHeight = metrics.groupItemLineHeight,
        )
    }
}

@Composable
private fun GroupItem(
    group: PatientGroupState,
    selected: Boolean,
    metrics: BedListVisualMetrics,
    onSelectGroup: (PatientGroupType) -> Unit,
) {
    val textColor = if (selected) {
        BedListSkeletonColors.TitleBarBlue
    } else {
        BedListSkeletonColors.PrimaryText
    }
    Box(
        modifier = Modifier
            .fillMaxWidth()
            .heightIn(min = metrics.groupItemHeight)
            .clickable { onSelectGroup(group.type) },
    ) {
        Row(
            modifier = Modifier
                .fillMaxWidth()
                .padding(
                    start = metrics.groupSelectionBarWidth + metrics.groupItemStartPadding,
                    top = metrics.groupItemVerticalPadding,
                    end = metrics.groupItemEndPadding,
                    bottom = metrics.groupItemVerticalPadding,
                ),
            horizontalArrangement = Arrangement.Start,
            verticalAlignment = Alignment.CenterVertically,
        ) {
            Text(
                text = "${group.name} (${group.count})",
                color = textColor,
                fontSize = metrics.groupItemFontSize,
                lineHeight = metrics.groupItemLineHeight,
                fontWeight = FontWeight.Normal,
            )
        }
        Box(
            modifier = Modifier.matchParentSize(),
            contentAlignment = Alignment.CenterStart,
        ) {
            Box(
                modifier = Modifier
                    .width(metrics.groupSelectionBarWidth)
                    .fillMaxHeight()
                    .background(
                        if (selected) {
                            BedListSkeletonColors.TitleBarBlue
                        } else {
                            BedListSkeletonColors.PanelBackground
                        },
                    ),
            )
        }
    }
}

@Composable
@OptIn(ExperimentalFoundationApi::class)
private fun PatientCards(
    patients: List<PatientListItemState>,
    cardRenderConfig: PatientCardRenderConfig,
    patientIdentifierLabel: String,
    resetKey: String,
    onAction: (PatientListAction) -> Unit,
    metrics: BedListVisualMetrics,
    onListTopStateChanged: (listType: String, atTop: Boolean) -> Unit,
    hostStatePerfSeq: Long,
    onPatientListFirstVisible: (Long, Int, Int, Int) -> Unit,
    modifier: Modifier = Modifier,
) {
    val listState = remember(resetKey) { LazyListState(0, 0) }
    var marqueeAnimationEnabled by remember(resetKey) { mutableStateOf(false) }
    LaunchedEffect(listState.isScrollInProgress, resetKey) {
        if (listState.isScrollInProgress) {
            // 滚动期间移除跑马灯和 intrinsic 测量节点，避免文本绘制与 Lazy slot 复用在同一帧竞争。
            marqueeAnimationEnabled = bedListMarqueeAnimationEnabled(
                isScrollInProgress = true,
                settleComplete = false,
            )
        } else {
            // drag/fling 结束后的首个 frame 仍可能在 renderer 中收尾，留出稳定窗口再恢复动画。
            delay(BedListMarqueeSettleDelayMillis)
            if (!listState.isScrollInProgress) {
                marqueeAnimationEnabled = bedListMarqueeAnimationEnabled(
                    isScrollInProgress = false,
                    settleComplete = true,
                )
            }
        }
    }
    val shouldAnimateMarquee = marqueeAnimationEnabled && !listState.isScrollInProgress
    val rowCache = remember(cardRenderConfig, patientIdentifierLabel) {
        BedListPatientCardRowCache(
            renderConfig = cardRenderConfig,
            patientIdentifierLabel = patientIdentifierLabel,
            maxSize = BedListPatientRowCacheMaxItems,
        )
    }
    val patientRows = remember(patients, rowCache) {
        // Card facts are immutable for one UiState. Resolve them before the scroll window so a fast fling only
        // creates visible UI nodes instead of also repeating stable-key, fingerprint, and presentation mapping.
        patients.map(rowCache::rowFor)
    }
    BedListReportListTopState(
        listState = listState,
        listType = BED_LIST_HOST_SCROLL_LIST_PATIENTS,
        onListTopStateChanged = onListTopStateChanged,
    )
    LaunchedEffect(resetKey) {
        onListTopStateChanged(BED_LIST_HOST_SCROLL_LIST_PATIENTS, true)
    }
    val lazyListPolicy = bedListPatientLazyListPolicy(patientRows.size)
    BedListReportPatientListFirstVisible(
        listState = listState,
        statePerfSeq = hostStatePerfSeq,
        onPatientListFirstVisible = onPatientListFirstVisible,
    )
    LazyColumn(
        state = listState,
        modifier = modifier
            .fillMaxSize()
            .background(BedListSkeletonColors.PatientListBackground)
            .enableLazyListPrefetch(lazyListPolicy.prefetchEnabled)
            .setProp(BED_LIST_KUIKLY_FLING_ENABLE_PROP, BedListKuiklyFlingEnabled),
        contentPadding = PaddingValues(
            start = metrics.patientListStartPadding,
            top = metrics.patientListTopPadding,
            end = metrics.patientListEndPadding,
            bottom = metrics.patientListBottomPadding,
        ),
        verticalArrangement = Arrangement.spacedBy(metrics.patientCardSpacing),
        beyondBoundsItemCount = lazyListPolicy.beyondBoundsItemCount,
    ) {
        items(
            count = patientRows.size,
            key = { index -> patientRows[index].stableKey },
            // Kuikly only reuses lazy slots whose contentType is equal. Patient cards with different
            // height-bearing row structures must not share one pool, otherwise a fast fling repeatedly
            // reconciles and remeasures incompatible slot trees on the render thread.
            contentType = { index -> patientRows[index].layoutContentType },
        ) { index ->
            PatientCard(
                row = patientRows[index],
                marqueeEnabled = shouldAnimateMarquee,
                onAction = onAction,
                metrics = metrics,
            )
        }
    }
}

@Composable
private fun PatientCard(
    row: BedListPatientCardRowState,
    marqueeEnabled: Boolean,
    onAction: (PatientListAction) -> Unit,
    metrics: BedListVisualMetrics,
) {
    val patient = row.patient
    val sharedCard = row.sharedCard
    val riskTags = row.riskTags
    Box(
        modifier = Modifier
            .fillMaxWidth()
            .background(BedListSkeletonColors.CardShadowEdge, metrics.patientCardShape)
            .clickable {
                onAction(PatientListAction.SelectPatient(patient.encounterId))
            }
            .padding(
                start = metrics.patientCardShadowStart,
                top = metrics.patientCardShadowTop,
                end = metrics.patientCardShadowEnd,
                bottom = metrics.patientCardShadowBottom,
            ),
    ) {
        Box(
            modifier = Modifier
                .fillMaxWidth()
                .background(BedListSkeletonColors.CardBackground, metrics.patientCardShape)
                .padding(
                    start = metrics.patientCardStartPadding,
                    top = metrics.patientCardTopPadding,
                    end = metrics.patientCardEndPadding,
                    bottom = metrics.patientCardBottomPadding,
                ),
        ) {
            Column(
                modifier = Modifier.fillMaxWidth(),
            ) {
                PatientHeaderBadges(
                    patient = patient,
                    sharedCard = sharedCard,
                    topDisplayCodeText = row.topDisplayCodeText,
                    reserveNurseLevelCorner = sharedCard.pathNurseLevel.isNurseLevelVisible,
                    metrics = metrics,
                )

                PatientInfoLine(
                    text = row.basicInfoText,
                    topPadding = metrics.patientInfoTopPadding,
                    fontSize = metrics.patientInfoFontSize,
                    lineHeight = metrics.patientInfoLineHeight,
                    maxLines = 2,
                )

                PatientInfoLine(
                    text = row.dietText,
                    topPadding = metrics.patientTightLineTopPadding,
                    fontSize = metrics.patientInfoFontSize,
                    lineHeight = metrics.patientInfoLineHeight,
                    maxLines = 1,
                )

                PatientMarqueeLabeledLine(
                    label = "过敏：",
                    text = row.allergyText,
                    marqueeKey = "${row.stableKey}:allergy",
                    valueColor = BedListSkeletonColors.AllergyText,
                    labelWidth = metrics.allergyMarqueeLabelWidth,
                    marqueeEnabled = marqueeEnabled,
                    fontSize = metrics.patientInfoFontSize,
                    lineHeight = metrics.patientInfoLineHeight,
                    topPadding = metrics.patientTightLineTopPadding,
                )

                PatientDiagnosisLine(
                    text = row.diagnosisText,
                    marqueeKey = "${row.stableKey}:diagnosis",
                    metrics = metrics,
                    marqueeEnabled = marqueeEnabled,
                    fontSize = metrics.patientInfoFontSize,
                    lineHeight = metrics.patientInfoLineHeight,
                )

                PatientDoctorLine(
                    doctorText = row.doctorText,
                    hospitalDoctorText = row.hospitalDoctorText,
                    metrics = metrics,
                    fontSize = metrics.patientInfoFontSize,
                    lineHeight = metrics.patientInfoLineHeight,
                )
                if (riskTags.isNotEmpty()) {
                    PatientRiskBadges(
                        tags = riskTags,
                        spanCount = row.riskTagSpanCount,
                        metrics = metrics,
                        modifier = Modifier
                            .fillMaxWidth()
                            .padding(top = metrics.patientInfoTopPadding),
                    )
                }
                if (sharedCard.mewsScore.isVisible && sharedCard.mewsScore.isTopMewsBottomLayout) {
                    Row(
                        modifier = Modifier
                            .fillMaxWidth()
                            .padding(top = metrics.patientTightLineTopPadding),
                        horizontalArrangement = Arrangement.End,
                    ) {
                        PatientMewsBadge(
                            level = "M",
                            score = sharedCard.mewsScore.scoreText,
                            alertLevel = patient.alertLevel,
                            metrics = metrics,
                        )
                    }
                }
                if (row.inlineDisplayCodeText.isNotBlank()) {
                    PatientDisplayCode(
                        displayCodeText = row.inlineDisplayCodeText,
                        metrics = metrics,
                        modifier = Modifier
                            .fillMaxWidth()
                            .padding(top = metrics.patientTightLineTopPadding),
                    )
                }
            }
            if (sharedCard.pathNurseLevel.isNurseLevelVisible) {
                NurseLevelCorner(
                    text = sharedCard.pathNurseLevel.nurseLevelText,
                    color = row.nurseLevelCornerColor,
                    metrics = metrics,
                    modifier = Modifier.align(Alignment.TopEnd),
                )
            }
        }
    }
}

private data class BedListPatientCardRowState(
    val patient: PatientListItemState,
    val sharedCard: PatientCardUiState,
    val riskTags: List<BedListPatientRiskTagRowState>,
    val riskTagSpanCount: Int,
    val riskTagRowCount: Int,
    val layoutContentType: BedListPatientCardLayoutContentType,
    val stableKey: String,
    val contentFingerprint: String,
    val nurseLevelCornerColor: Color,
    val basicInfoText: String,
    val dietText: String,
    val allergyText: String,
    val diagnosisText: String,
    val doctorText: String,
    val hospitalDoctorText: String,
    val topDisplayCodeText: String,
    val inlineDisplayCodeText: String,
)

private data class BedListPatientRiskTagRowState(
    val displayName: String,
    val colors: BedListRiskTagColors,
)

private class BedListPatientCardRowCache(
    private val renderConfig: PatientCardRenderConfig,
    private val patientIdentifierLabel: String,
    private val maxSize: Int,
) {
    private val rows = linkedMapOf<String, BedListPatientCardRowState>()

    fun rowFor(patient: PatientListItemState): BedListPatientCardRowState {
        val key = patient.bedListSkeletonStableKey()
        val contentFingerprint = patient.bedListSkeletonContentFingerprint()
        val cached = rows.remove(key)
        if (cached != null && cached.contentFingerprint == contentFingerprint) {
            rows[key] = cached
            return cached
        }
        val row = patient.bedListSkeletonCardRowState(
            renderConfig = renderConfig,
            patientIdentifierLabel = patientIdentifierLabel,
            stableKey = key,
            contentFingerprint = contentFingerprint,
        )
        rows[key] = row
        trimToMaxSize()
        return row
    }

    private fun trimToMaxSize() {
        while (rows.size > maxSize) {
            val eldestKey = rows.keys.firstOrNull() ?: return
            rows.remove(eldestKey)
        }
    }
}

private fun PatientListItemState.bedListSkeletonCardRowState(
    renderConfig: PatientCardRenderConfig,
    patientIdentifierLabel: String,
    stableKey: String,
    contentFingerprint: String,
): BedListPatientCardRowState {
    val sharedCard = bedListSkeletonCardUiState(renderConfig)
    val allRiskTagRows = bedListSkeletonRiskTags()
    val riskTagSpanCount = if (riskTags.any { it.displayName.isNotBlank() }) {
        this.riskTagSpanCount.coerceIn(
            minimumValue = BedListPatientRiskTagLongTextSpanCount,
            maximumValue = BedListPatientRiskTagDefaultSpanCount,
        )
    } else {
        bedListPatientRiskTagSpanCount(allRiskTagRows)
    }
    val riskTagRows = allRiskTagRows
        .map { tag ->
            BedListPatientRiskTagRowState(
                displayName = tag.displayName,
                colors = tag.style.bedListRiskTagColors(),
            )
        }
    val basicInfoText = sharedCard.basicInfo.text.takeIf { sharedCard.basicInfo.isVisible }.orEmpty()
    val dietText = sharedCard.clinicalInfo.dietText.takeIf { sharedCard.clinicalInfo.isDietVisible }.orEmpty()
    val allergyText = sharedCard.clinicalInfo.allergyText
        .takeIf { sharedCard.clinicalInfo.isAllergyVisible }
        .orEmpty()
    val diagnosisText = sharedCard.bedListSkeletonDiagnosisText()
    val doctorText = sharedCard.bedListSkeletonDoctorText()
    val hospitalDoctorText = sharedCard.bedListSkeletonHospitalDoctorText()
    val topDisplayCodeText = bedListDisplayCodeText(
        visible = sharedCard.header.isTopDisplayCodeVisible,
        patientIdentifierLabel = patientIdentifierLabel,
        displayCode = sharedCard.header.displayCode,
    )
    val inlineDisplayCodeText = bedListDisplayCodeText(
        visible = sharedCard.header.isInlineDisplayCodeVisible,
        patientIdentifierLabel = patientIdentifierLabel,
        displayCode = sharedCard.header.displayCode,
    )
    val riskTagRowCount = if (riskTagRows.isEmpty()) {
        0
    } else {
        (riskTagRows.size + riskTagSpanCount - 1) / riskTagSpanCount
    }
    return BedListPatientCardRowState(
        patient = this,
        sharedCard = sharedCard,
        riskTags = riskTagRows,
        riskTagSpanCount = riskTagSpanCount,
        riskTagRowCount = riskTagRowCount,
        layoutContentType = bedListPatientCardLayoutContentType(
            hasWrappedHeaderBadges = sharedCard.hasWrappedHeaderBadges(),
            riskTagRowCount = riskTagRowCount,
            hasTopDisplayCodeText = topDisplayCodeText.isNotBlank(),
        ),
        stableKey = stableKey,
        contentFingerprint = contentFingerprint,
        nurseLevelCornerColor = nurseLevelCornerColor(),
        basicInfoText = basicInfoText,
        dietText = dietText,
        allergyText = allergyText,
        diagnosisText = diagnosisText,
        doctorText = doctorText,
        hospitalDoctorText = hospitalDoctorText,
        topDisplayCodeText = topDisplayCodeText,
        inlineDisplayCodeText = inlineDisplayCodeText,
    )
}

@Composable
private fun PatientDisplayCode(
    displayCodeText: String,
    metrics: BedListVisualMetrics,
    modifier: Modifier = Modifier,
) {
    Box(
        modifier = modifier,
        contentAlignment = Alignment.CenterEnd,
    ) {
        Text(
            text = displayCodeText,
            color = BedListSkeletonColors.SecondaryText,
            fontSize = metrics.patientInfoFontSize,
            lineHeight = metrics.patientInfoLineHeight,
            textAlign = TextAlign.End,
        )
    }
}

@Composable
private fun BedListReportListTopState(
    listState: LazyListState,
    listType: String,
    onListTopStateChanged: (listType: String, atTop: Boolean) -> Unit,
) {
    LaunchedEffect(listState, listType, onListTopStateChanged) {
        snapshotFlow {
            listState.firstVisibleItemIndex == 0 &&
                listState.firstVisibleItemScrollOffset <= BedListListTopOffsetTolerancePx
        }
            .distinctUntilChanged()
            .collect { atTop -> onListTopStateChanged(listType, atTop) }
    }
}

@Composable
private fun BedListReportPatientListFirstVisible(
    listState: LazyListState,
    statePerfSeq: Long,
    onPatientListFirstVisible: (Long, Int, Int, Int) -> Unit,
) {
    LaunchedEffect(listState, statePerfSeq, onPatientListFirstVisible) {
        val seq = statePerfSeq.takeIf { it > 0L } ?: return@LaunchedEffect
        val mark = snapshotFlow {
            val visibleCount = listState.layoutInfo.visibleItemsInfo.size
            if (visibleCount > 0) {
                Triple(
                    listState.firstVisibleItemIndex,
                    listState.firstVisibleItemScrollOffset,
                    visibleCount,
                )
            } else {
                null
            }
        }
            .filterNotNull()
            .firstOrNull()
            ?: return@LaunchedEffect
        onPatientListFirstVisible(seq, mark.first, mark.second, mark.third)
    }
}

@Composable
private fun PatientDoctorLine(
    doctorText: String,
    hospitalDoctorText: String,
    metrics: BedListVisualMetrics,
    fontSize: TextUnit = 16.sp,
    lineHeight: TextUnit = 20.sp,
) {
    if (doctorText.isBlank() && hospitalDoctorText.isBlank()) {
        return
    }
    Row(
        modifier = Modifier
            .fillMaxWidth()
            .padding(top = metrics.patientTightLineTopPadding),
    ) {
        Text(
            text = doctorText,
            color = BedListSkeletonColors.SecondaryText,
            fontSize = fontSize,
            lineHeight = lineHeight,
            modifier = Modifier.weight(1f),
            maxLines = 1,
            overflow = TextOverflow.Ellipsis,
        )
        Text(
            text = hospitalDoctorText,
            color = BedListSkeletonColors.SecondaryText,
            fontSize = fontSize,
            lineHeight = lineHeight,
            modifier = Modifier.weight(1f),
            maxLines = 1,
            overflow = TextOverflow.Ellipsis,
        )
    }
}

@OptIn(ExperimentalLayoutApi::class)
@Composable
private fun PatientHeaderBadges(
    patient: PatientListItemState,
    sharedCard: PatientCardUiState,
    topDisplayCodeText: String,
    reserveNurseLevelCorner: Boolean,
    metrics: BedListVisualMetrics,
) {
    val endPadding = if (reserveNurseLevelCorner) metrics.nurseLevelCornerWidth else 0.dp
    Column(
        modifier = Modifier
            .fillMaxWidth()
            .padding(top = metrics.patientHeaderTopPadding, end = endPadding),
    ) {
        FlowRow(
            modifier = Modifier.fillMaxWidth(),
            horizontalArrangement = Arrangement.spacedBy(metrics.patientBadgeSpacing),
            verticalArrangement = Arrangement.spacedBy(metrics.patientTightLineTopPadding),
        ) {
            val centeredHeaderItem = Modifier.align(Alignment.CenterVertically)
            Text(
                text = sharedCard.header.bedTitle,
                color = BedListSkeletonColors.PrimaryText,
                fontSize = metrics.patientHeaderFontSize,
                lineHeight = metrics.patientHeaderLineHeight,
                fontWeight = FontWeight.Normal,
                maxLines = 2,
                modifier = centeredHeaderItem,
            )
            PatientHeaderPrimaryBadges(
                patient = patient,
                sharedCard = sharedCard,
                metrics = metrics,
                itemModifier = centeredHeaderItem,
            )
            PatientHeaderWrappedBadges(
                patient = patient,
                sharedCard = sharedCard,
                metrics = metrics,
                itemModifier = centeredHeaderItem,
            )
        }
        if (topDisplayCodeText.isNotBlank()) {
            PatientDisplayCode(
                displayCodeText = topDisplayCodeText,
                metrics = metrics,
                modifier = Modifier
                    .fillMaxWidth()
                    .padding(top = metrics.patientInfoTopPadding),
            )
        }
    }
}

@Composable
private fun PatientHeaderPrimaryBadges(
    patient: PatientListItemState,
    sharedCard: PatientCardUiState,
    metrics: BedListVisualMetrics,
    itemModifier: Modifier = Modifier,
) {
    if (sharedCard.gender.text.isNotBlank()) {
        Text(
            text = sharedCard.gender.text,
            color = BedListSkeletonColors.SecondaryText,
            fontSize = metrics.patientHeaderBadgeTextFontSize,
            lineHeight = metrics.patientHeaderBadgeTextLineHeight,
            fontWeight = FontWeight.Normal,
            maxLines = 1,
            modifier = itemModifier,
        )
    }
    if (sharedCard.criticalFlag.isVisible) {
        PatientSquareBadge(
            text = sharedCard.criticalFlag.text,
            textColor = BedListSkeletonColors.TitleText,
            backgroundColor = patient.criticalBadgeColor.bedListConfiguredColor(
                sharedCard.criticalFlag.riskLevel.criticalBadgeBackground(),
            ),
            metrics = metrics,
            modifier = itemModifier,
        )
    }
    if (sharedCard.orderStatus.isVisible) {
        PatientOrderBadge(
            status = sharedCard.orderStatus.status,
            metrics = metrics,
            modifier = itemModifier,
        )
    }
}

@Composable
private fun PatientHeaderWrappedBadges(
    patient: PatientListItemState,
    sharedCard: PatientCardUiState,
    metrics: BedListVisualMetrics,
    itemModifier: Modifier = Modifier,
) {
    if (sharedCard.mewsScore.isVisible && !sharedCard.mewsScore.isTopMewsBottomLayout) {
        PatientMewsBadge(
            level = "M",
            score = sharedCard.mewsScore.scoreText,
            alertLevel = patient.alertLevel,
            metrics = metrics,
            modifier = itemModifier,
        )
    }
    PatientPathBadge(
        pathMarker = sharedCard.pathNurseLevel.pathMarker,
        metrics = metrics,
        modifier = itemModifier,
    )
    PatientHeaderSpecialMarks(
        specialMarks = sharedCard.specialMarks,
        metrics = metrics,
        itemModifier = itemModifier,
    )
}

private fun PatientCardUiState.hasWrappedHeaderBadges(): Boolean {
    return (mewsScore.isVisible && !mewsScore.isTopMewsBottomLayout) ||
        pathNurseLevel.pathMarker != PatientCardPathMarker.Hidden ||
        specialMarks.isInfectionVisible ||
        specialMarks.pregnancyMark.patientCardDisplayLabel().isNotBlank() ||
        specialMarks.isSurgeryVisible
}

@Composable
private fun PatientHeaderSpecialMarks(
    specialMarks: PatientCardSpecialMarksUiState,
    metrics: BedListVisualMetrics,
    itemModifier: Modifier = Modifier,
) {
    if (specialMarks.isInfectionVisible) {
        PatientRoundBadge(
            text = "!",
            textColor = BedListSkeletonColors.TitleText,
            backgroundColor = BedListSkeletonColors.InfectionBadge,
            metrics = metrics,
            modifier = itemModifier,
        )
    }
    val pregnancyMarkLabel = specialMarks.pregnancyMark.patientCardDisplayLabel()
    if (pregnancyMarkLabel.isNotBlank()) {
        PatientRoundBadge(
            text = "孕",
            textColor = BedListSkeletonColors.TitleText,
            backgroundColor = BedListSkeletonColors.PregnancyBadge,
            metrics = metrics,
            modifier = itemModifier,
        )
    }
    if (specialMarks.isSurgeryVisible) {
        PatientRoundBadge(
            text = specialMarks.surgeryText.take(1),
            textColor = BedListSkeletonColors.TitleText,
            backgroundColor = BedListSkeletonColors.SurgeryBadge,
            metrics = metrics,
            modifier = itemModifier,
        )
    }
}

@Composable
private fun PatientSquareBadge(
    text: String,
    textColor: Color,
    backgroundColor: Color,
    metrics: BedListVisualMetrics,
    size: Dp = metrics.squareBadgeSize,
    textLineHeight: TextUnit = metrics.squareBadgeLineHeight,
    modifier: Modifier = Modifier,
) {
    if (text.isBlank()) {
        return
    }
    Box(
        modifier = modifier
            .size(size)
            .background(backgroundColor, RoundedCornerShape(metrics.squareBadgeCornerRadius)),
        contentAlignment = Alignment.Center,
    ) {
        Text(
            text = text,
            color = textColor,
            fontSize = metrics.squareBadgeFontSize,
            fontWeight = FontWeight.Normal,
            lineHeight = textLineHeight,
            textAlign = TextAlign.Center,
            maxLines = 1,
        )
    }
}

@Composable
private fun PatientOrderBadge(
    status: PatientCardOrderStatus,
    metrics: BedListVisualMetrics,
    modifier: Modifier = Modifier,
) {
    val text = when (status) {
        PatientCardOrderStatus.Stat -> "ST"
        PatientCardOrderStatus.NewOrder -> "新"
        PatientCardOrderStatus.None -> ""
    }
    if (text.isBlank()) {
        return
    }
    PatientSquareBadge(
        text = text,
        textColor = if (status == PatientCardOrderStatus.Stat) {
            BedListSkeletonColors.CriticalText
        } else {
            BedListSkeletonColors.NewOrderText
        },
        backgroundColor = BedListSkeletonColors.NewOrderBackground,
        metrics = metrics,
        modifier = modifier,
    )
}

@OptIn(InternalResourceApi::class)
@Composable
private fun PatientPathBadge(
    pathMarker: PatientCardPathMarker,
    metrics: BedListVisualMetrics,
    modifier: Modifier = Modifier,
) {
    val resource = when (pathMarker) {
        PatientCardPathMarker.NeedFinish -> BedListPathNeedFinishResource
        PatientCardPathMarker.NoNeedFinish -> BedListPathNoNeedFinishResource
        PatientCardPathMarker.Hidden -> return
    }
    Image(
        painter = painterResource(resource),
        contentDescription = "路径",
        modifier = modifier.size(metrics.pathBadgeSize),
        contentScale = ContentScale.Fit,
    )
}

@Composable
private fun PatientRoundBadge(
    text: String,
    textColor: Color,
    backgroundColor: Color,
    metrics: BedListVisualMetrics,
    size: Dp = metrics.roundBadgeSize,
    modifier: Modifier = Modifier,
) {
    if (text.isBlank()) {
        return
    }
    Box(
        modifier = modifier
            .width(size)
            .height(size)
            .background(backgroundColor, RoundedCornerShape(metrics.roundBadgeCornerRadius)),
        contentAlignment = Alignment.Center,
    ) {
        Text(
            text = text,
            color = textColor,
            fontSize = metrics.roundBadgeFontSize,
            fontWeight = FontWeight.Bold,
            lineHeight = metrics.roundBadgeLineHeight,
            textAlign = TextAlign.Center,
            maxLines = 1,
        )
    }
}

@Composable
private fun PatientRiskBadges(
    tags: List<BedListPatientRiskTagRowState>,
    spanCount: Int,
    metrics: BedListVisualMetrics,
    modifier: Modifier = Modifier,
) {
    Column(
        modifier = modifier,
        verticalArrangement = Arrangement.spacedBy(metrics.riskBadgeRowSpacing),
    ) {
        tags.chunked(spanCount.coerceAtLeast(1)).forEach { rowTags ->
            Row(
                modifier = Modifier.fillMaxWidth(),
                horizontalArrangement = Arrangement.spacedBy(metrics.riskBadgeSpacing),
                verticalAlignment = Alignment.CenterVertically,
            ) {
                rowTags.forEach { tag ->
                    PatientRiskBadge(
                        tag = tag,
                        metrics = metrics,
                        modifier = Modifier.weight(1f),
                    )
                }
                repeat((spanCount - rowTags.size).coerceAtLeast(0)) {
                    Spacer(modifier = Modifier.weight(1f))
                }
            }
        }
    }
}

@Composable
private fun PatientRiskBadge(
    tag: BedListPatientRiskTagRowState,
    metrics: BedListVisualMetrics,
    modifier: Modifier = Modifier,
) {
    if (tag.displayName.isBlank()) {
        return
    }
    Box(
        modifier = modifier
            .height(metrics.riskBadgeHeight)
            .background(tag.colors.background, RoundedCornerShape(metrics.riskBadgeCornerRadius))
            .padding(horizontal = metrics.riskBadgeHorizontalPadding),
        contentAlignment = Alignment.Center,
    ) {
        Text(
            text = tag.displayName,
            color = tag.colors.text,
            fontSize = metrics.riskBadgeFontSize,
            textAlign = TextAlign.Center,
            lineHeight = metrics.riskBadgeLineHeight,
            maxLines = 1,
        )
    }
}

@Composable
private fun PatientInfoLine(
    text: String,
    color: Color = BedListSkeletonColors.SecondaryText,
    topPadding: Dp = 6.dp,
    fontSize: TextUnit = 16.sp,
    lineHeight: TextUnit = 20.sp,
    maxLines: Int = Int.MAX_VALUE,
    overflow: TextOverflow = TextOverflow.Ellipsis,
) {
    if (text.isBlank()) {
        return
    }
    Text(
        text = text,
        color = color,
        fontSize = fontSize,
        lineHeight = lineHeight,
        maxLines = maxLines,
        overflow = overflow,
        modifier = Modifier.padding(top = topPadding),
    )
}

@Composable
private fun PatientMarqueeLabeledLine(
    label: String,
    text: String,
    marqueeKey: String,
    marqueeEnabled: Boolean,
    valueColor: Color = BedListSkeletonColors.SecondaryText,
    labelWidth: Dp,
    fontSize: TextUnit = 16.sp,
    lineHeight: TextUnit = 20.sp,
    topPadding: Dp = 1.dp,
) {
    if (text.isBlank()) {
        return
    }
    val density = LocalDensity.current
    var valueSlotWidthPx by remember(marqueeKey) { mutableStateOf(0) }
    var textWidthPx by remember(marqueeKey, text) { mutableStateOf(0) }
    val updateValueSlotWidth = remember(marqueeKey) {
        { size: IntSize -> valueSlotWidthPx = size.width }
    }
    val updateTextWidth = remember(marqueeKey, text) {
        { size: IntSize -> textWidthPx = size.width }
    }
    val motion = bedListMarqueeMotion(
        textWidthPx = textWidthPx,
        valueSlotWidthPx = valueSlotWidthPx,
        density = density.density,
    )
    Row(
        modifier = Modifier
            .fillMaxWidth()
            .height(lineHeight.value.dp + topPadding)
            .padding(top = topPadding),
        verticalAlignment = Alignment.CenterVertically,
    ) {
        Box(modifier = Modifier.width(labelWidth)) {
            PatientLineLabel(
                text = label,
                fontSize = fontSize,
                lineHeight = lineHeight,
            )
        }
        Box(
            modifier = Modifier
                .weight(1f)
                .height(lineHeight.value.dp)
                .clipToBounds()
                .onSizeChanged(updateValueSlotWidth),
            contentAlignment = Alignment.CenterStart,
        ) {
            if (marqueeEnabled) {
                Text(
                    text = text,
                    color = Color.Transparent,
                    fontSize = fontSize,
                    lineHeight = lineHeight,
                    maxLines = 1,
                    softWrap = false,
                    overflow = TextOverflow.Visible,
                    modifier = Modifier
                        // wrapContentWidth(unbounded = true) 的外层尺寸仍会被值槽最大宽度截断，
                        // 导致重复文本的起点早于真实绘制宽度；IntrinsicSize.Max 保留完整文本宽度。
                        .requiredWidth(IntrinsicSize.Max)
                        .onSizeChanged(updateTextWidth)
                        .clearAndSetSemantics {},
                )
            }
            if (marqueeEnabled && motion.shouldAnimate) {
                key(marqueeKey, text, motion.travelDp, motion.durationMillis) {
                    val transition = rememberInfiniteTransition(label = "BedListPatientMarquee")
                    val offsetX by transition.animateFloat(
                        initialValue = 0f,
                        targetValue = -motion.travelDp,
                        animationSpec = infiniteRepeatable(
                            animation = tween(
                                durationMillis = motion.durationMillis,
                                easing = LinearEasing,
                            ),
                            repeatMode = RepeatMode.Restart,
                        ),
                        label = "BedListPatientMarqueeOffset",
                    )
                    // 普通 Row 会把两个 Text 都按值槽的 maxWidth 测量，绘制虽可溢出，
                    // 第二份副本的布局起点却仍是被截断的槽宽，长文本因此相互覆盖。
                    // 这里仅在布局层对文本使用无限宽度测量，再按第一份实际 measuredWidth
                    // 加固定间距放置；外层 Box 的 clipToBounds 仍是唯一可见窗口。
                    Layout(
                        modifier = Modifier
                            .fillMaxWidth()
                            .height(lineHeight.value.dp)
                            .offset(x = offsetX.dp),
                        content = {
                            Text(
                                text = text,
                                color = valueColor,
                                fontSize = fontSize,
                                lineHeight = lineHeight,
                                maxLines = 1,
                                softWrap = false,
                                overflow = TextOverflow.Visible,
                                modifier = Modifier.onSizeChanged(updateTextWidth),
                            )
                            Spacer(modifier = Modifier.width(BedListMarqueeGapDp.dp))
                            Text(
                                text = text,
                                color = valueColor,
                                fontSize = fontSize,
                                lineHeight = lineHeight,
                                maxLines = 1,
                                softWrap = false,
                                overflow = TextOverflow.Visible,
                                modifier = Modifier.clearAndSetSemantics {},
                            )
                        },
                        measurePolicy = { measurables, constraints ->
                            val textConstraints = Constraints(
                                maxWidth = Constraints.Infinity,
                                maxHeight = constraints.maxHeight,
                            )
                            val first = measurables[0].measure(textConstraints)
                            val gap = measurables[1].measure(
                                Constraints.fixedWidth(BedListMarqueeGapDp.dp.roundToPx()),
                            )
                            val second = measurables[2].measure(textConstraints)
                            val height = maxOf(first.measuredHeight, second.measuredHeight)
                                .coerceIn(constraints.minHeight, constraints.maxHeight)
                            layout(constraints.maxWidth, height) {
                                first.place(0, 0)
                                gap.place(first.measuredWidth, 0)
                                second.place(first.measuredWidth + gap.measuredWidth, 0)
                            }
                        },
                    )
                }
            } else {
                Text(
                    text = text,
                    color = valueColor,
                    fontSize = fontSize,
                    lineHeight = lineHeight,
                    maxLines = 1,
                    overflow = TextOverflow.Ellipsis,
                    modifier = Modifier.fillMaxWidth(),
                )
            }
        }
    }
}

@Composable
private fun PatientPlainLine(
    text: String,
    color: Color = BedListSkeletonColors.SecondaryText,
    maxLines: Int = Int.MAX_VALUE,
    fontSize: TextUnit = 16.sp,
    lineHeight: TextUnit = 20.sp,
    topPadding: Dp = 1.dp,
) {
    if (text.isBlank()) {
        return
    }
    Text(
        text = text,
        color = color,
        fontSize = fontSize,
        lineHeight = lineHeight,
        maxLines = maxLines,
        overflow = TextOverflow.Ellipsis,
        modifier = Modifier.padding(top = topPadding),
    )
}

@Composable
private fun PatientDiagnosisLine(
    text: String,
    marqueeKey: String,
    metrics: BedListVisualMetrics,
    marqueeEnabled: Boolean,
    color: Color = BedListSkeletonColors.SecondaryText,
    fontSize: TextUnit = 16.sp,
    lineHeight: TextUnit = 20.sp,
) {
    PatientMarqueeLabeledLine(
        label = "入院诊断：",
        text = text,
        marqueeKey = marqueeKey,
        marqueeEnabled = marqueeEnabled,
        valueColor = color,
        labelWidth = metrics.diagnosisMarqueeLabelWidth,
        fontSize = fontSize,
        lineHeight = lineHeight,
        topPadding = metrics.patientTightLineTopPadding,
    )
}

@Composable
private fun PatientLineLabel(
    text: String,
    fontSize: TextUnit,
    lineHeight: TextUnit,
) {
    Text(
        text = text,
        color = BedListSkeletonColors.SecondaryText,
        fontSize = fontSize,
        lineHeight = lineHeight,
        maxLines = 1,
    )
}

@Composable
private fun PatientMewsBadge(
    level: String,
    score: String,
    alertLevel: String,
    metrics: BedListVisualMetrics,
    modifier: Modifier = Modifier,
) {
    val textColor = mewsTextColor(alertLevel)
    val backgroundColor = mewsBackgroundColor(alertLevel)
    Row(modifier = modifier, verticalAlignment = Alignment.CenterVertically) {
        Box(
            modifier = Modifier
                .width(metrics.mewsBadgeSegmentWidth)
                .height(metrics.mewsBadgeHeight)
                .background(
                    textColor,
                    RoundedCornerShape(
                        topStart = metrics.squareBadgeCornerRadius,
                        bottomStart = metrics.squareBadgeCornerRadius,
                    ),
                ),
            contentAlignment = Alignment.Center,
        ) {
            Text(
                text = level,
                color = BedListSkeletonColors.TitleText,
                fontSize = metrics.mewsBadgeFontSize,
                lineHeight = metrics.mewsBadgeLineHeight,
                textAlign = TextAlign.Center,
                maxLines = 1,
                modifier = Modifier.height(metrics.mewsBadgeHeight),
            )
        }
        Box(
            modifier = Modifier
                .width(metrics.mewsBadgeSegmentWidth)
                .height(metrics.mewsBadgeHeight)
                .background(
                    backgroundColor,
                    RoundedCornerShape(
                        topEnd = metrics.squareBadgeCornerRadius,
                        bottomEnd = metrics.squareBadgeCornerRadius,
                    ),
                ),
            contentAlignment = Alignment.Center,
        ) {
            Text(
                text = score,
                color = textColor,
                fontSize = metrics.mewsBadgeFontSize,
                lineHeight = metrics.mewsBadgeLineHeight,
                textAlign = TextAlign.Center,
                maxLines = 1,
                modifier = Modifier.height(metrics.mewsBadgeHeight),
            )
        }
    }
}

@Composable
private fun BoxScope.NurseLevelCorner(
    text: String,
    color: Color,
    metrics: BedListVisualMetrics,
    modifier: Modifier = Modifier,
) {
    Box(
        modifier = modifier
            .width(metrics.nurseLevelCornerWidth)
            .height(metrics.nurseLevelCornerHeight)
            .background(
                color,
                RoundedCornerShape(
                    topEnd = metrics.squareBadgeCornerRadius,
                    bottomStart = metrics.nurseLevelCornerBottomRadius,
                ),
            ),
        contentAlignment = Alignment.Center,
    ) {
        Text(
            text = text.take(1),
            color = BedListSkeletonColors.TitleText,
            fontSize = metrics.nurseLevelCornerFontSize,
            fontWeight = FontWeight.Normal,
            lineHeight = metrics.nurseLevelCornerLineHeight,
            textAlign = TextAlign.Center,
            modifier = Modifier
                .width(metrics.nurseLevelCornerTextBox)
                .height(metrics.nurseLevelCornerTextBox),
        )
    }
}

@Composable
private fun BedListMessagePanel(
    title: String,
    detail: String,
    modifier: Modifier = Modifier,
) {
    Box(
        modifier = modifier
            .background(BedListSkeletonColors.PanelBackground)
            .padding(16.dp),
    ) {
        BedListMessageContent(
            title = title,
            detail = detail,
            modifier = Modifier.fillMaxSize(),
        )
    }
}

@Composable
private fun BedListMessageContent(
    title: String,
    detail: String,
    modifier: Modifier = Modifier,
) {
    Column(
        modifier = modifier,
        verticalArrangement = Arrangement.Center,
        horizontalAlignment = Alignment.CenterHorizontally,
    ) {
        Text(
            text = title,
            color = BedListSkeletonColors.PrimaryText,
            fontSize = 16.sp,
            fontWeight = FontWeight.Bold,
        )
        Spacer(modifier = Modifier.height(8.dp))
        Text(
            text = detail,
            color = BedListSkeletonColors.SecondaryText,
            fontSize = 13.sp,
        )
    }
}

@Composable
private fun HorizontalDivider() {
    Box(
        modifier = Modifier
            .fillMaxWidth()
            .height(1.dp)
            .background(BedListSkeletonColors.Divider),
    )
}

internal fun PatientListItemState.bedListSkeletonCardUiState(renderConfig: PatientCardRenderConfig) = run {
    patientListCardUiState(
        renderConfig = renderConfig,
        hostConfig = PatientCardHostPresentationConfig(
            normalStyle = renderConfig.normalStyle,
            dietTitleFormat = "饮食：%s",
            nurseLevelText = nursingLevel.patientListNurseLevelBadgeText(),
            nurseLevelVisible = nurseLevelBadgeVisible,
            doctorPrefix = "[主]\u00A0",
            hospitalDoctorPrefix = "[住]\u00A0",
        ),
    )
}

internal fun bedListSkeletonSpecialMarkLine(specialMarks: PatientCardSpecialMarksUiState): String {
    val pregnancyMarkLabel = specialMarks.pregnancyMark.patientCardDisplayLabel()
    return listOf(
        specialMarks.surgeryText.takeIf { specialMarks.isSurgeryVisible },
        "感染".takeIf { specialMarks.isInfectionVisible },
        pregnancyMarkLabel.takeIf { it.isNotEmpty() },
    ).filterNotNull().joinToString("  ")
}

private fun PatientCardUiState.bedListSkeletonDiagnosisText(): String {
    return clinicalInfo.diagnosisText
        .takeIf { it.isNotBlank() }
        .orEmpty()
}

private fun PatientCardUiState.bedListSkeletonDoctorText(): String {
    return doctorTags.doctorText
        .takeIf { doctorTags.isDoctorVisible }
        .orEmpty()
}

private fun PatientCardUiState.bedListSkeletonHospitalDoctorText(): String {
    return doctorTags.hospitalDoctorText
        .takeIf { doctorTags.isHospitalDoctorVisible }
        .orEmpty()
}

internal fun bedListDisplayCodeText(
    visible: Boolean,
    patientIdentifierLabel: String,
    displayCode: String,
): String {
    return displayCode
        .takeIf { visible && it.isNotBlank() }
        ?.let { "$patientIdentifierLabel：$it" }
        .orEmpty()
}

private fun PatientListItemState.bedListSkeletonRiskTags(): List<PatientRiskTagPresentationState> {
    val hostPreparedTags = riskTags.filter { it.displayName.isNotBlank() }
    if (hostPreparedTags.isNotEmpty()) {
        return hostPreparedTags
    }
    return riskTagLabels.mapNotNull { label ->
        label.takeIf { it.isNotBlank() }?.let { PatientRiskTagPresentationState(it) }
    }
}

private fun PatientListItemState.bedListSkeletonHasRiskTags(): Boolean {
    return riskTags.any { it.displayName.isNotBlank() } ||
        riskTagLabels.any { it.isNotBlank() }
}

private fun bedListPatientRiskTagSpanCount(tags: List<PatientRiskTagPresentationState>): Int {
    return if (tags.any { it.displayName.length > 2 }) {
        BedListPatientRiskTagLongTextSpanCount
    } else {
        BedListPatientRiskTagDefaultSpanCount
    }
}

private fun PatientListItemState.bedListSkeletonStableKey(): String {
    val businessKey = listOf(encounterId, patientId, displayCode, bedNo)
        .firstOrNull { it.isNotBlank() }
        .orEmpty()
    return businessKey.ifBlank { "$bedNo-$name" }
}

internal fun PatientListItemState.bedListSkeletonContentFingerprint(): String {
    return bedListStableHash(
        listOf(
            patientId,
            encounterId,
            bedNo,
            name,
            displayCode,
            gender,
            age,
            admissionDate,
            inHospitalDay.toString(),
            birthDate,
            diagnosis,
            diet,
            allergen,
            doctorName,
            hospitalDoctorName,
            alertLevel,
            totalScore,
            pathStatus,
            pathPendingNodeStatus,
            surgeryMark,
            infectionDisease,
            inDiagnosisText,
            nursingLevel.name,
            riskLevel.name,
            isBaby.toString(),
            isCared.toString(),
            isAuthorized.toString(),
            flags.map { it.name }.sorted().joinToString(","),
            riskNatures.map { it.name }.sorted().joinToString(","),
            riskTagLabels.joinToString(","),
            riskTags.joinToString(",") { "${it.displayName}:${it.style.name}" },
            riskTagSpanCount.toString(),
            nurseLevelBadgeVisible.toString(),
        ).joinToString(separator = "\u001F"),
    )
}

private fun bedListStableHash(value: String): String {
    var hash = -3750763034362895579L
    value.forEach { char ->
        hash = (hash xor char.code.toLong()) * 1099511628211L
    }
    return hash.toString(radix = 16)
}

internal fun PatientListUiState.bedListSkeletonPatientListResetKey(): String {
    val firstItemKey = items.firstOrNull()?.bedListSkeletonStableKey().orEmpty()
    val lastItemKey = items.lastOrNull()?.bedListSkeletonStableKey().orEmpty()
    return listOf(
        isCareScopeSelected.toString(),
        selectedGroupType?.name.orEmpty(),
        items.size.toString(),
        firstItemKey,
        lastItemKey,
    ).joinToString(separator = "|")
}

/**
 * OpenHarmony 患者长列表的同一套 Lazy 运行策略。
 *
 * 高量列表不额外组合和测量可视窗口两侧的患者卡，但保留 Kuikly 默认的单个相邻项预取；
 * 不在应用层扩展预取窗口或维护第二套 handle 队列，避免把长列表优化变成额外调度机制。
 */
internal data class BedListPatientLazyListPolicy(
    val beyondBoundsItemCount: Int,
    val prefetchEnabled: Boolean,
)

internal fun bedListPatientLazyListPolicy(patientCount: Int): BedListPatientLazyListPolicy {
    require(patientCount >= 0) { "patientCount must not be negative" }
    return when {
        patientCount >= BedListPatientHighVolumeBeyondBoundsThreshold -> BedListPatientLazyListPolicy(
            beyondBoundsItemCount = BedListPatientHighVolumeBeyondBoundsItems,
            prefetchEnabled = true,
        )
        patientCount >= BedListPatientLargeDataThreshold -> BedListPatientLazyListPolicy(
            beyondBoundsItemCount = BedListPatientMediumDataBeyondBoundsItems,
            prefetchEnabled = true,
        )
        else -> BedListPatientLazyListPolicy(
            beyondBoundsItemCount = BedListPatientLazyBeyondBoundsItems,
            prefetchEnabled = true,
        )
    }
}

/**
 * 将患者卡片限制在少量稳定的 Lazy slot 复用池中。
 *
 * 普通文案和标签值不进入类型；只有是否需要基础卡片以外的额外高度会切换复用池，避免真实长列表
 * 为每种稀有行结构建立冷池，同时隔离最常见的定高卡片与需要扩高的卡片。
 */
internal enum class BedListPatientCardLayoutContentType {
    /** 不增加额外高度的常规患者卡片。 */
    Compact,

    /** 因头部换行、多行风险标签或顶部编码而增加高度的患者卡片。 */
    Expanded,
}

internal fun bedListPatientCardLayoutContentType(
    hasWrappedHeaderBadges: Boolean,
    riskTagRowCount: Int,
    hasTopDisplayCodeText: Boolean,
): BedListPatientCardLayoutContentType {
    require(riskTagRowCount >= 0) { "riskTagRowCount must not be negative" }
    return if (hasWrappedHeaderBadges || riskTagRowCount > 1 || hasTopDisplayCodeText) {
        BedListPatientCardLayoutContentType.Expanded
    } else {
        BedListPatientCardLayoutContentType.Compact
    }
}

private fun PatientListItemState.nurseLevelCornerColor(): Color {
    return nurseLevelBadgeColor.bedListConfiguredColor(Color.Transparent)
}

internal fun String.bedListConfiguredColor(fallback: Color): Color {
    val hex = trim().removePrefix("#")
    if (hex.length != 6 && hex.length != 8) {
        return fallback
    }
    val value = hex.toLongOrNull(16) ?: return fallback
    return Color(if (hex.length == 6) 0xFF000000L or value else value)
}

internal data class BedListMarqueeMotion(
    val shouldAnimate: Boolean,
    val overflowPx: Int,
    val travelDp: Float,
    val durationMillis: Int,
)

internal fun bedListMarqueeMotion(
    textWidthPx: Int,
    valueSlotWidthPx: Int,
    density: Float,
): BedListMarqueeMotion {
    require(textWidthPx >= 0) { "textWidthPx must not be negative" }
    require(valueSlotWidthPx >= 0) { "valueSlotWidthPx must not be negative" }
    require(density > 0f) { "density must be positive" }
    val overflowPx = (textWidthPx - valueSlotWidthPx).coerceAtLeast(0)
    if (textWidthPx == 0 || valueSlotWidthPx == 0 || overflowPx == 0) {
        return BedListMarqueeMotion(
            shouldAnimate = false,
            overflowPx = overflowPx,
            travelDp = 0f,
            durationMillis = 0,
        )
    }
    val travelDp = textWidthPx / density + BedListMarqueeGapDp
    return BedListMarqueeMotion(
        shouldAnimate = true,
        overflowPx = overflowPx,
        travelDp = travelDp,
        durationMillis = (travelDp / BedListMarqueeSpeedDpPerSecond * 1000f)
            .roundToInt()
            .coerceAtLeast(1),
    )
}

internal fun bedListMarqueeAnimationEnabled(
    isScrollInProgress: Boolean,
    settleComplete: Boolean,
): Boolean = !isScrollInProgress && settleComplete

private fun RiskLevel.criticalBadgeBackground(): Color {
    return when (this) {
        RiskLevel.Danger -> BedListSkeletonColors.DangerBackground
        RiskLevel.Severe -> BedListSkeletonColors.SevereBackground
        RiskLevel.None,
        RiskLevel.Unknown -> BedListSkeletonColors.SevereBackground
    }
}

private fun mewsTextColor(alertLevel: String): Color {
    return when (alertLevel.toIntOrNull() ?: 0) {
        1 -> BedListSkeletonColors.MewsLowText
        2 -> BedListSkeletonColors.MewsMidText
        else -> BedListSkeletonColors.MewsHighText
    }
}

private fun mewsBackgroundColor(alertLevel: String): Color {
    return when (alertLevel.toIntOrNull() ?: 0) {
        1 -> BedListSkeletonColors.MewsLowBackground
        2 -> BedListSkeletonColors.MewsMidBackground
        else -> BedListSkeletonColors.MewsHighBackground
    }
}

internal data class BedListRiskTagColors(
    val text: Color,
    val background: Color,
)

internal fun PatientRiskTagPresentationStyle.bedListRiskTagColors(): BedListRiskTagColors {
    return when (this) {
        PatientRiskTagPresentationStyle.LevelOne -> BedListRiskTagColors(
            text = BedListSkeletonColors.RiskLevelOneText,
            background = BedListSkeletonColors.RiskLevelOneBackground,
        )
        PatientRiskTagPresentationStyle.LevelTwo -> BedListRiskTagColors(
            text = BedListSkeletonColors.RiskLevelTwoText,
            background = BedListSkeletonColors.RiskLevelTwoBackground,
        )
        PatientRiskTagPresentationStyle.LevelThree -> BedListRiskTagColors(
            text = BedListSkeletonColors.RiskLevelThreeText,
            background = BedListSkeletonColors.RiskLevelThreeBackground,
        )
        PatientRiskTagPresentationStyle.LevelFour -> BedListRiskTagColors(
            text = BedListSkeletonColors.RiskLevelFourText,
            background = BedListSkeletonColors.RiskLevelFourBackground,
        )
        PatientRiskTagPresentationStyle.LevelFive -> BedListRiskTagColors(
            text = BedListSkeletonColors.RiskLevelFiveText,
            background = BedListSkeletonColors.RiskLevelFiveBackground,
        )
        PatientRiskTagPresentationStyle.Isolation -> BedListRiskTagColors(
            text = BedListSkeletonColors.TitleBarBlue,
            background = BedListSkeletonColors.RiskIsolationBackground,
        )
        PatientRiskTagPresentationStyle.VteLevelOne -> BedListRiskTagColors(
            text = BedListSkeletonColors.VteLevelOneText,
            background = BedListSkeletonColors.VteLevelOneBackground,
        )
        PatientRiskTagPresentationStyle.VteLevelTwo -> BedListRiskTagColors(
            text = BedListSkeletonColors.VteLevelTwoText,
            background = BedListSkeletonColors.VteLevelTwoBackground,
        )
        PatientRiskTagPresentationStyle.VteLevelThree -> BedListRiskTagColors(
            text = BedListSkeletonColors.VteLevelThreeText,
            background = BedListSkeletonColors.VteLevelThreeBackground,
        )
        PatientRiskTagPresentationStyle.VteTodo -> BedListRiskTagColors(
            text = BedListSkeletonColors.PrimaryText,
            background = BedListSkeletonColors.VteTodoBackground,
        )
        PatientRiskTagPresentationStyle.Default -> BedListRiskTagColors(
            text = BedListSkeletonColors.RiskLevelOneText,
            background = BedListSkeletonColors.RiskLevelOneBackground,
        )
    }
}

private object BedListSkeletonColors {
    val PageBackground = Color(0xFFF1F1F1)
    val PatientListBackground = Color(0xFFFFFFFF)
    val TitleBarBlue = Color(0xFF1881D2)
    val TitleText = Color(0xFFFFFFFF)
    val PanelBackground = Color(0xFFFFFFFF)
    val CardBackground = Color(0xFFFFFFFF)
    val CardShadowEdge = Color(0xFFF0F0F0)
    val Divider = Color(0xFFF0F0F0)
    val SevereBackground = Color(0xFFF1232F)
    val DangerBackground = Color(0xFFF1232F)
    val PrimaryText = Color(0xFF333333)
    val SecondaryText = Color(0xFF666666)
    val DisabledText = Color(0xFF999999)
    val NewOrderText = Color(0xFF2EC281)
    val NewOrderBackground = Color(0x332EC281)
    val CriticalText = Color(0xFFFF3333)
    val AllergyText = Color(0xFFF5202D)
    val PathBadge = Color(0xFF1E9BDF)
    val InfectionBadge = Color(0xFFA453F5)
    val PregnancyBadge = Color(0xFFA453F5)
    val SurgeryBadge = Color(0xFFFFA000)
    val MewsLowText = Color(0xFF2D87F5)
    val MewsLowBackground = Color(0x1A2D87F5)
    val MewsMidText = Color(0xFFFF9900)
    val MewsMidBackground = Color(0x1AFF9900)
    val MewsHighText = Color(0xFFFF4E58)
    val MewsHighBackground = Color(0x1AFF4E58)
    val RiskLevelOneText = Color(0xFF5895FF)
    val RiskLevelTwoText = Color(0xFFFF9900)
    val RiskLevelThreeText = Color(0xFFF1232F)
    val RiskLevelFourText = Color(0xFF333333)
    val RiskLevelFiveText = Color(0xFFF1232F)
    val RiskLevelOneBackground = Color(0xFFEBF5FF)
    val RiskLevelTwoBackground = Color(0xFFFFF2E0)
    val RiskLevelThreeBackground = Color(0xFFFFE4E6)
    val RiskLevelFourBackground = Color(0xFFF5F5F5)
    val RiskLevelFiveBackground = Color(0xFFFFE4E6)
    val RiskIsolationBackground = Color(0x211881D2)
    val VteLevelOneText = Color(0xFF00C963)
    val VteLevelTwoText = Color(0xFFFF9400)
    val VteLevelThreeText = Color(0xFFF1232F)
    val VteLevelOneBackground = Color(0xFFE9FBE4)
    val VteLevelTwoBackground = Color(0xFFFFF2E0)
    val VteLevelThreeBackground = Color(0xFFFFE4E6)
    val VteTodoBackground = Color(0xFFE5E5E5)
}

internal data class BedListAdaptiveLayoutMetrics(
    val viewportWidthDp: Float,
    val viewportHeightDp: Float,
) {
    init {
        require(viewportWidthDp.isFinite() && viewportWidthDp > 0f) { "viewportWidthDp must be positive and finite" }
        require(viewportHeightDp.isFinite() && viewportHeightDp > 0f) { "viewportHeightDp must be positive and finite" }
    }

    val groupRailWidthDp: Float = 84.375f
    val patientContentWidthDp: Float = fusionFlexibleRemainder(viewportWidthDp, groupRailWidthDp)
}

internal class BedListVisualMetrics {
    val topBarHeight = 49.6.dp
    val topBarHorizontalPadding = 0.dp
    val topBarSideWidth = 112.dp
    val topBarIconTouchWidth = 42.dp
    val topBarIconWidth = 42.dp
    val topBarIconHeight = 45.333332.dp
    val topBarNameSpacing = 0.dp
    val topBarNameFontSize = 14.ssp
    val topBarTitleFontSize = 18.sp
    val searchIconTouchWidth = 42.dp

    val scopeTabsHeight = 40.dp
    val scopeTabTextHeight = 37.75.dp
    val scopeTabFontSize = 15.75.sp
    val emptyStateFontSize = 14.ssp
    val scopeTabIndicatorWidth = 67.5.dp
    val scopeTabIndicatorHeight = 2.25.dp

    val groupRailWidth = 84.375.dp
    val groupItemHeight = 40.dp
    val groupSelectionBarWidth = 2.25.dp
    val groupItemStartPadding = 11.25.dp
    val groupItemEndPadding = 4.5.dp
    val groupItemVerticalPadding = 0.dp
    val groupItemFontSize = 14.625.sp
    val groupItemLineHeight = 16.ssp

    val patientListStartPadding = 2.sdp
    val patientListTopPadding = 4.sydp
    val patientListEndPadding = 3.sdp
    val patientListBottomPadding = 4.sydp
    val patientCardSpacing = 6.sydp
    val patientCardShape = RoundedCornerShape(4.sdp)
    val patientCardShadowStart = 1.sdp
    val patientCardShadowTop = 1.sydp
    val patientCardShadowEnd = 1.sdp
    val patientCardShadowBottom = 2.sydp
    val patientCardStartPadding = 10.sdp
    val patientCardTopPadding = 7.sydp
    val patientCardEndPadding = 4.sdp
    val patientCardBottomPadding = 5.sydp
    val patientHeaderTopPadding = 1.sydp
    val patientHeaderFontSize = 12.ssp
    val patientHeaderLineHeight = 21.ssp
    val patientHeaderBadgeTextFontSize = 12.ssp
    val patientHeaderBadgeTextLineHeight = 21.ssp
    val patientBadgeSpacing = 3.sdp
    val patientHeaderWrappedRowHeight = 28.sydp
    val patientTopDisplayCodeExtraHeight = 17.sydp
    val patientInfoTopPadding = 5.sydp
    val patientTightLineTopPadding = 1.sydp
    val patientInfoFontSize = 12.ssp
    val patientInfoLineHeight = 17.ssp

    val squareBadgeCornerRadius = 4.sdp
    val squareBadgeSize = 14.sdp
    val squareBadgeFontSize = 11.ssp
    val squareBadgeLineHeight = 14.ssp
    val pathBadgeSize = 13.sdp
    val pathBadgeLineHeight = 13.ssp
    val roundBadgeCornerRadius = 9.sdp
    val roundBadgeSize = 17.sdp
    val roundBadgeFontSize = 13.ssp
    val roundBadgeLineHeight = 16.ssp
    val mewsBadgeSegmentWidth = 14.sdp
    val mewsBadgeHeight = 14.sdp
    val mewsBadgeFontSize = 11.ssp
    val mewsBadgeLineHeight = 14.ssp

    val riskBadgeSpacing = 3.sdp
    val riskBadgeRowSpacing = 3.sdp
    val riskBadgeHeight = 18.sdp
    val riskBadgeCornerRadius = 3.sdp
    val riskBadgeHorizontalPadding = 3.sdp
    val riskBadgeFontSize = 12.ssp
    val riskBadgeLineHeight = 18.ssp

    val nurseLevelCornerWidth = 22.sdp
    val nurseLevelCornerHeight = 22.sdp
    val nurseLevelCornerBottomRadius = 12.sdp
    val nurseLevelCornerFontSize = 13.ssp
    val nurseLevelCornerLineHeight = 15.ssp
    val nurseLevelCornerTextBox = 15.sdp

    val allergyMarqueeLabelWidth = 36.sdp
    val diagnosisMarqueeLabelWidth = 63.sdp

    val searchBackOuterMargin = 1.6.dp
    val searchBackTouchWidth = 42.dp
    val searchBackTouchHeight = 46.4.dp
    val searchBackIconWidth = 42.dp
    val searchBackIconHeight = 45.333332.dp
    val searchContentStartPadding = 14.625.dp
    val searchContentEndPadding = 56.25.dp
    val searchInputTopPadding = 13.3.dp
    val searchInputHeight = 23.dp
    val searchIconSize = 16.875.dp
    val searchInputStartPadding = 5.sdp
    val searchDeleteSpacing = 11.25.dp
    val searchDeleteIconSize = 15.75.dp
    val searchUnderlineSpacing = 6.4.dp
    val searchUnderlineBottomPadding = 5.9.dp
    val searchFontSize = 16.875.sp
    val searchListTopPadding = 6.4.dp
    val searchCardHeight = 127.sydp
    val searchCardSpacing = 8.sydp
    val searchCardHorizontalPadding = 3.sdp
    val searchCardShadowStart = 1.sdp
    val searchCardShadowTop = 1.sydp
    val searchCardShadowEnd = 1.sdp
    val searchCardShadowBottom = 2.sydp
    val searchCardStartPadding = 10.sdp
    val searchCardEndPadding = 5.sdp
    val searchHeaderTopPadding = 7.sydp
    val searchHeaderHeight = 18.sydp
    val searchTitleWidth = 162.sdp
    val searchInfoTopPadding = 28.sydp
    val searchIdentifierTopExtraHeight = 17.sydp
    val searchAllergyTopPadding = 55.sydp
    val searchDiagnosisTopPadding = 69.sydp
    val searchRiskBottomPadding = 9.sydp
    val searchIdentifierBottomPadding = 4.sydp
    val searchIdentifierReserveWidth = 88.sdp
    val searchTitleFontSize = 14.ssp
    val searchIdentifierFontSize = 13.ssp
    val searchInfoFontSize = 12.ssp
    val searchPathStartPadding = 6.sdp
    val searchPathIconSize = 17.sdp
    val searchRiskBadgeSpacing = 4.sdp
    val searchRiskRowSpacing = 3.sydp
    val searchRiskBadgeHeight = 18.sdp
    val searchRiskBadgeHorizontalPadding = 3.sdp
    val searchRiskBadgeVerticalPadding = 2.sydp
    val searchRiskBadgeFontSize = 10.ssp
    val searchStatusBadgeSpacing = 3.sdp
    val searchStatusBadgeHeight = 14.sdp
    val searchStatusBadgeFontSize = 11.ssp
    val searchNurseLevelSize = 22.sdp
    val searchNurseLevelFontSize = 13.ssp
    val searchNurseLevelCornerRadius = 12.sdp
    val searchNurseLevelTopPadding = 4.sydp

    private val Int.sdp: Dp
        get() = dp

    private val Int.sydp: Dp
        get() = dp

    private val Int.ssp: TextUnit
        get() = sp
}

private const val BedListGroupLazyBeyondBoundsItems = 6
private const val BedListPatientLazyBeyondBoundsItems = 8
private const val BedListPatientMediumDataBeyondBoundsItems = 12
private const val BedListPatientHighVolumeBeyondBoundsItems = 0
private const val BedListPatientLargeDataThreshold = 40
private const val BedListPatientHighVolumeBeyondBoundsThreshold = 120
private const val BedListPatientRowCacheMaxItems = 256
private const val BedListPatientRiskTagDefaultSpanCount = 5
private const val BedListPatientRiskTagLongTextSpanCount = 4
private const val BedListSelectionFeedbackRollbackMillis = 1500L
private const val BedListRefreshFeedbackMinimumMillis = 1500L
private const val BedListMarqueeSettleDelayMillis = 750L
private const val BedListMarqueeGapDp = 24f
private const val BedListMarqueeSpeedDpPerSecond = 30f
private const val BED_LIST_KUIKLY_FLING_ENABLE_PROP = "flingEnable"
private const val BedListKuiklyFlingEnabled = 1
private const val BedListListTopOffsetTolerancePx = 2

@OptIn(InternalResourceApi::class)
private val BedListTopBarMenuIconResource = DrawableResource(ImageUri.commonAssets("more_icon.png").toUrl(""))

@OptIn(InternalResourceApi::class)
private val BedListTopBarSearchIconResource = DrawableResource(ImageUri.commonAssets("search_icon.png").toUrl(""))

@OptIn(InternalResourceApi::class)
private val BedListPathNeedFinishResource = DrawableResource(ImageUri.commonAssets("path_need_finish.png").toUrl(""))

@OptIn(InternalResourceApi::class)
private val BedListPathNoNeedFinishResource = DrawableResource(ImageUri.commonAssets("path_no_need_finish.png").toUrl(""))
