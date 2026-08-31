package com.lachesis.fusion.shared.patient.presentation

import com.lachesis.fusion.shared.patient.domain.PatientCardInputFacts
import com.lachesis.fusion.shared.patient.domain.PatientCardInputNormalizer
import com.lachesis.fusion.shared.patient.domain.PatientFlag

/**
 * PatientList item 到床位卡片展示状态的 shared-presentation 入口。
 *
 * 这里只把已脱离平台对象的列表 item 继续转成卡片展示语义；具体资源、颜色、点击、
 * RecyclerView / Kuikly / Harmony 渲染和真实 Host 副作用仍由各端承接。
 */
fun PatientListItemState.patientListCardUiState(
    renderConfig: PatientCardRenderConfig,
    hostConfig: PatientCardHostPresentationConfig,
): PatientCardUiState {
    return PatientCardPresentation.card(
        input = PatientCardInputNormalizer.input(
            PatientCardInputFacts(
                displayCode = displayCode,
                bedNo = bedNo,
                name = name,
                riskLevel = riskLevel,
                stOrderStatus = PatientFlag.StatOrder in flags,
                newOrderStatus = PatientFlag.NewOrderStatus in flags,
                alertLevel = alertLevel,
                totalScore = totalScore,
                admissionDate = admissionDate,
                inHospitalDay = inHospitalDay,
                age = age,
                birthDateText = birthDate.take(10),
                gender = gender.legacyGenderCode(),
                diet = diet,
                allergen = allergen,
                diagnosis = diagnosis,
                pathStatus = pathStatus,
                pathPendingNodeStatus = pathPendingNodeStatus,
                doctorName = doctorName,
                hospitalDoctorName = hospitalDoctorName,
                surgeryMark = surgeryMark,
                infectionDisease = infectionDisease,
                inDiagnosisText = inDiagnosisText,
            ),
        ),
        options = renderConfig.cardOptions,
        hostConfig = hostConfig,
    )
}

private fun String.legacyGenderCode(): String {
    return when (this) {
        "男" -> "M"
        "女" -> "F"
        else -> this
    }
}
