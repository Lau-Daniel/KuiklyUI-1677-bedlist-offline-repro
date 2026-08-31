package com.lachesis.fusion.shared.patient.domain

// 床位卡片孕产相关诊断标记语义来自 Host 传入的入院诊断文本。
// shared 只做平台无关的文本语义归一化，不绑定 Android 旧链路中的 pear / apple drawable 名称。
enum class PatientCardPregnancyMark {
    // 不展示孕产诊断标记。
    None,

    // 引产或死产语义。
    LossOrStillbirth,

    // 安胎或活产语义。
    PregnancyOrLiveBirth,
}

// 旧 BedList Host 字段到 shared 卡片语义的稳定映射。
// 这里只表达跨端可复用的枚举归一化，不读取 Android 对象、不绑定资源或副作用。
object PatientCardLegacyMappings {
    fun nursingLevelFromLegacyCode(level: Int): NursingLevel {
        return when (level) {
            0 -> NursingLevel.Special
            1 -> NursingLevel.First
            2 -> NursingLevel.Second
            3 -> NursingLevel.Third
            4 -> NursingLevel.SpecialDisease
            else -> NursingLevel.Unknown
        }
    }

    fun legacyNursingLevelCode(level: NursingLevel): Int {
        return when (level) {
            NursingLevel.Special -> 0
            NursingLevel.First -> 1
            NursingLevel.Second -> 2
            NursingLevel.Third -> 3
            NursingLevel.SpecialDisease -> 4
            NursingLevel.Unknown -> -1
        }
    }

    fun riskLevelFromLegacyDangerCode(dangerLevel: String?): RiskLevel {
        return when {
            dangerLevel.equals("D", ignoreCase = true) -> RiskLevel.Danger
            dangerLevel.equals("S", ignoreCase = true) -> RiskLevel.Severe
            dangerLevel.isNullOrBlank() -> RiskLevel.None
            else -> RiskLevel.Unknown
        }
    }

    fun legacyDangerLevelCode(riskLevel: RiskLevel): String? {
        return when (riskLevel) {
            RiskLevel.Danger -> "D"
            RiskLevel.Severe -> "S"
            RiskLevel.None,
            RiskLevel.Unknown -> null
        }
    }
}

data class PatientCardInputFacts(
    val displayCode: String,
    val bedNo: String,
    val name: String,
    val riskLevel: RiskLevel,
    val stOrderStatus: Boolean,
    val newOrderStatus: Boolean,
    val alertLevel: String,
    val totalScore: String,
    val admissionDate: String,
    val inHospitalDay: Int,
    val age: String,
    val birthDateText: String,
    val gender: String,
    val diet: String,
    val allergen: String,
    val diagnosis: String,
    val pathStatus: String,
    val pathPendingNodeStatus: String,
    val doctorName: String,
    val hospitalDoctorName: String,
    val surgeryMark: String,
    val infectionDisease: String,
    val inDiagnosisText: String?,
)

// 床位卡片输入归一化只做平台无关事实处理；日期解析、旧患者对象写回和资源映射仍由 Host 负责。
object PatientCardInputNormalizer {
    fun input(facts: PatientCardInputFacts): PatientCardInput {
        return PatientCardInput(
            displayCode = facts.displayCode,
            bedNo = facts.bedNo,
            name = facts.name,
            riskLevel = facts.riskLevel,
            stOrderStatus = facts.stOrderStatus,
            newOrderStatus = facts.newOrderStatus,
            alertLevel = facts.alertLevel,
            totalScore = facts.totalScore,
            hasAdmissionDate = facts.admissionDate.isNotEmpty(),
            admissionDatePrefix = admissionDatePrefixOf(facts.admissionDate),
            inHospitalDay = facts.inHospitalDay,
            ageText = ageTextOf(facts.age),
            birthDateText = facts.birthDateText,
            gender = facts.gender,
            diet = facts.diet,
            allergen = facts.allergen,
            diagnosis = facts.diagnosis,
            pathStatus = facts.pathStatus,
            pathPendingNodeStatus = facts.pathPendingNodeStatus,
            doctorName = facts.doctorName,
            hospitalDoctorName = facts.hospitalDoctorName,
            surgeryMark = facts.surgeryMark,
            infectionDisease = facts.infectionDisease,
            pregnancyMark = pregnancyMarkOf(facts.inDiagnosisText),
        )
    }

    fun admissionDatePrefixOf(admissionDate: String): String {
        return if (admissionDate.length >= 10) admissionDate.substring(0, 10) else admissionDate
    }

    fun ageTextOf(age: String): String {
        return if (age.isEmpty()) "--" else age
    }

    fun pregnancyMarkOf(inDiagnosisText: String?): PatientCardPregnancyMark {
        if (inDiagnosisText == null) {
            return PatientCardPregnancyMark.None
        }
        if (inDiagnosisText.contains("引产") || inDiagnosisText.contains("死产")) {
            return PatientCardPregnancyMark.LossOrStillbirth
        }
        if (inDiagnosisText.contains("安胎") || inDiagnosisText.contains("活产")) {
            return PatientCardPregnancyMark.PregnancyOrLiveBirth
        }
        return PatientCardPregnancyMark.None
    }
}

data class PatientCardInput(
    val displayCode: String,
    val bedNo: String,
    val name: String,
    val riskLevel: RiskLevel,
    val stOrderStatus: Boolean,
    val newOrderStatus: Boolean,
    val alertLevel: String,
    val totalScore: String,
    val hasAdmissionDate: Boolean,
    val admissionDatePrefix: String,
    val inHospitalDay: Int,
    val ageText: String,
    val birthDateText: String,
    val gender: String,
    val diet: String,
    val allergen: String,
    val diagnosis: String,
    val pathStatus: String,
    val pathPendingNodeStatus: String,
    val doctorName: String,
    val hospitalDoctorName: String,
    val surgeryMark: String,
    val infectionDisease: String,
    val pregnancyMark: PatientCardPregnancyMark,
) {
    val bedTitle: String = "$bedNo $name"
}
