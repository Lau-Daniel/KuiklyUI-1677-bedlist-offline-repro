package com.lachesis.fusion.shared.patient.presentation

import com.lachesis.fusion.shared.patient.domain.NursingLevel
import com.lachesis.fusion.shared.patient.domain.PatientCardPregnancyMark
import com.lachesis.fusion.shared.patient.domain.PatientIdentifierDisplayMode
import com.lachesis.fusion.shared.patient.domain.RiskLevel

// PatientList 展示标签属于 shared-presentation：跨端 UI 只消费结果，不在页面层重复编写显示兜底。
fun NursingLevel.patientListDisplayLabel(): String {
    return when (this) {
        NursingLevel.Special -> "特级护理"
        NursingLevel.First -> "一级护理"
        NursingLevel.Second -> "二级护理"
        NursingLevel.Third -> "三级护理"
        NursingLevel.SpecialDisease -> "特殊病情"
        NursingLevel.Unknown -> "护理未知"
    }
}

// Android PatientBedItemAdapter 的卡片角标使用 ConstantUtil.getNurseLevelSampleName。
// 单字角标与其他页面使用的完整护理级别文案必须保持两个独立语义。
fun NursingLevel.patientListNurseLevelBadgeText(): String {
    return when (this) {
        NursingLevel.Special -> "特"
        NursingLevel.First -> "一"
        NursingLevel.Second -> "二"
        NursingLevel.Third -> "三"
        NursingLevel.SpecialDisease,
        NursingLevel.Unknown -> ""
    }
}

fun RiskLevel.patientListDisplayLabel(): String {
    return when (this) {
        RiskLevel.Danger -> "病危"
        RiskLevel.Severe -> "病重"
        RiskLevel.None -> "普通"
        RiskLevel.Unknown -> "风险未知"
    }
}

fun PatientListItemState.patientListDisplayCodeLabel(): String {
    return displayCode.ifBlank { "编号未知" }
}

fun PatientIdentifierDisplayMode.patientIdentifierDisplayLabel(): String {
    return when (this) {
        PatientIdentifierDisplayMode.InpatientNumber -> "住院号"
        PatientIdentifierDisplayMode.MedicalRecordNumber -> "病历号"
    }
}

const val PATIENT_LIST_SEARCH_PLACEHOLDER: String = "请输入姓名/床号/住院号"

fun PatientIdentifierDisplayMode.patientIdentifierDisplayText(displayCode: String): String {
    return displayCode.trim()
        .takeIf { it.isNotEmpty() }
        ?.let { "${patientIdentifierDisplayLabel()}：$it" }
        .orEmpty()
}

fun PatientListItemState.patientListGenderLabel(): String {
    return gender.ifBlank { "性别未知" }
}

fun PatientListItemState.patientListAgeLabel(): String {
    return age.ifBlank { "年龄未知" }
}

fun PatientListItemState.patientListCardTitleLabel(): String {
    val bedLabel = when {
        bedNo.isBlank() -> "床号未知"
        bedNo.contains("床") || bedNo.startsWith("BED-", ignoreCase = true) -> bedNo
        else -> "${bedNo}床"
    }
    return "$bedLabel  $name"
}

fun PatientCardPathMarker.patientCardDisplayLabel(): String {
    return when (this) {
        PatientCardPathMarker.Hidden -> ""
        PatientCardPathMarker.NeedFinish -> "路径待处理"
        PatientCardPathMarker.NoNeedFinish -> "路径无需处理"
    }
}

fun PatientCardOrderStatus.patientCardDisplayLabel(): String {
    return when (this) {
        PatientCardOrderStatus.None -> ""
        PatientCardOrderStatus.Stat -> "ST"
        PatientCardOrderStatus.NewOrder -> "新医嘱"
    }
}

fun PatientCardPregnancyMark.patientCardDisplayLabel(): String {
    return when (this) {
        PatientCardPregnancyMark.None -> ""
        PatientCardPregnancyMark.LossOrStillbirth -> "流产/死胎"
        PatientCardPregnancyMark.PregnancyOrLiveBirth -> "妊娠/活产"
    }
}
