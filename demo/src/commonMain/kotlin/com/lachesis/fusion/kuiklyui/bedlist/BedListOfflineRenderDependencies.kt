package com.lachesis.fusion.kuiklyui.bedlist

import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import com.tencent.kuikly.compose.animation.core.LinearEasing
import com.tencent.kuikly.compose.animation.core.RepeatMode
import com.tencent.kuikly.compose.animation.core.animateFloat
import com.tencent.kuikly.compose.animation.core.infiniteRepeatable
import com.tencent.kuikly.compose.animation.core.rememberInfiniteTransition
import com.tencent.kuikly.compose.animation.core.tween
import com.tencent.kuikly.compose.foundation.Canvas
import com.tencent.kuikly.compose.foundation.layout.size
import com.tencent.kuikly.compose.ui.Modifier
import com.tencent.kuikly.compose.ui.geometry.Offset
import com.tencent.kuikly.compose.ui.geometry.Size
import com.tencent.kuikly.compose.ui.graphics.Color
import com.tencent.kuikly.compose.ui.graphics.StrokeCap
import com.tencent.kuikly.compose.ui.graphics.drawscope.Stroke
import com.tencent.kuikly.compose.ui.unit.dp

const val BED_LIST_HOST_SCROLL_LIST_GROUP_RAIL = "GroupRail"
const val BED_LIST_HOST_SCROLL_LIST_PATIENTS = "Patients"

@Composable
internal fun BedListRefreshIndicator(contentDescription: String = "正在刷新") {
    val transition = rememberInfiniteTransition(label = "BedListRefreshIndicator")
    val startAngle by transition.animateFloat(
        initialValue = -90f,
        targetValue = 270f,
        animationSpec = infiniteRepeatable(
            animation = tween(durationMillis = 800, easing = LinearEasing),
            repeatMode = RepeatMode.Restart,
        ),
        label = "BedListRefreshIndicatorAngle",
    )
    Canvas(modifier = Modifier.size(28.dp), contentDescription = contentDescription) {
        val strokeWidth = 3.dp.toPx()
        val inset = strokeWidth / 2f
        drawArc(
            color = Color(0xFF1881D2),
            startAngle = startAngle,
            sweepAngle = 250f,
            useCenter = false,
            topLeft = Offset(inset, inset),
            size = Size(size.width - strokeWidth, size.height - strokeWidth),
            style = Stroke(width = strokeWidth, cap = StrokeCap.Round),
        )
    }
}
