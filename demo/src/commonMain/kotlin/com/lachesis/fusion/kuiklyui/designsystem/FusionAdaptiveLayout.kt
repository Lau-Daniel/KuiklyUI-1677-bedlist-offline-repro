package com.lachesis.fusion.kuiklyui.designsystem

internal fun fusionBoundedContentWidth(
    viewportWidthDp: Float,
    preferredWidthDp: Float,
    horizontalMarginDp: Float,
): Float {
    require(viewportWidthDp.isFinite() && viewportWidthDp >= 0f) { "viewportWidthDp must be finite and non-negative" }
    require(preferredWidthDp.isFinite() && preferredWidthDp >= 0f) { "preferredWidthDp must be finite and non-negative" }
    require(horizontalMarginDp.isFinite() && horizontalMarginDp >= 0f) { "horizontalMarginDp must be finite and non-negative" }
    return preferredWidthDp.coerceAtMost((viewportWidthDp - horizontalMarginDp * 2f).coerceAtLeast(0f))
}

internal fun fusionFlexibleRemainder(totalDp: Float, fixedDp: Float): Float {
    require(totalDp.isFinite() && totalDp >= 0f) { "totalDp must be finite and non-negative" }
    require(fixedDp.isFinite() && fixedDp >= 0f) { "fixedDp must be finite and non-negative" }
    return (totalDp - fixedDp).coerceAtLeast(0f)
}

/**
 * Keeps a fixed-height Android surface vertically centered while preserving a required top anchor.
 * Compact viewports fail closed inside the available parent bounds instead of scaling fixed controls.
 */
internal fun fusionCenteredTopWithMinimumAnchor(
    viewportHeightDp: Float,
    contentHeightDp: Float,
    minimumTopDp: Float,
): Float {
    require(viewportHeightDp.isFinite() && viewportHeightDp >= 0f) {
        "viewportHeightDp must be finite and non-negative"
    }
    require(contentHeightDp.isFinite() && contentHeightDp >= 0f) {
        "contentHeightDp must be finite and non-negative"
    }
    require(minimumTopDp.isFinite() && minimumTopDp >= 0f) {
        "minimumTopDp must be finite and non-negative"
    }
    val maximumTopDp = (viewportHeightDp - contentHeightDp).coerceAtLeast(0f)
    val centeredTopDp = maximumTopDp / 2f
    return maxOf(centeredTopDp, minimumTopDp).coerceAtMost(maximumTopDp)
}
