package com.lachesis.fusion.kuiklyui.designsystem

import com.tencent.kuikly.compose.ComposeContainer

internal const val FUSION_ANDROID_REFERENCE_COMPOSE_DENSITY = 2f

internal fun fusionAndroidReferenceComposeDensity(deviceDensity: Float, isOhOs: Boolean): Float =
    if (isOhOs) FUSION_ANDROID_REFERENCE_COMPOSE_DENSITY else deviceDensity

/**
 * 融合页面的共享容器只承载 Kuikly 生命周期，不改变页面 density。
 * Android reference density 必须由确有需要的页面在自身组合树内显式应用，避免局部校准污染其他 route。
 */
abstract class FusionAndroidBaselineComposeContainer : ComposeContainer()
