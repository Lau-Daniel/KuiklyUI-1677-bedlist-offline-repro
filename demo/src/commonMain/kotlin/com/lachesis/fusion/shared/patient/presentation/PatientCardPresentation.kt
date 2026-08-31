package com.lachesis.fusion.shared.patient.presentation

import com.lachesis.fusion.shared.patient.domain.PatientCardInput
import com.lachesis.fusion.shared.patient.domain.RiskLevel

/**
 * BedList 右侧卡片跨端展示语义入口。
 *
 * 这里只生成平台无关的文本、显隐和业务语义枚举；Android 资源 id、颜色、drawable、
 * RecyclerView、点击跳转和旧风险标签副作用继续由 Host adapter 负责。
 */
object PatientCardPresentation {
    fun card(
        input: PatientCardInput,
        options: PatientCardRenderOptions,
        hostConfig: PatientCardHostPresentationConfig,
    ): PatientCardUiState {
        return PatientCardUiState(
            header = header(input, hostConfig.normalStyle),
            basicInfo = basicInfo(input, options),
            gender = gender(input),
            clinicalInfo = clinicalInfo(input, options, hostConfig.dietTitleFormat),
            pathNurseLevel = pathAndNurseLevel(input, hostConfig.nurseLevelText, hostConfig.nurseLevelVisible),
            doctorTags = doctorTags(input, options, hostConfig.doctorPrefix, hostConfig.hospitalDoctorPrefix),
            specialMarks = specialMarks(input),
            orderStatus = orderStatus(input),
            mewsScore = mewsScore(input, options),
            criticalFlag = criticalFlag(input, options),
        )
    }

    fun riskTags(
        items: List<PatientCardRiskTagInput?>?,
        dictionary: List<PatientCardRiskTagDictionaryItem?>?,
        levelConfig: PatientCardRiskLevelDisplayConfig?,
    ): PatientCardRiskTagsUiState {
        val sourceItems = items.orEmpty()
        val riskStates = sourceItems.map { item -> riskTag(item, dictionary.orEmpty(), levelConfig) }
        return PatientCardRiskTagsUiState(
            items = riskStates,
            spanCount = riskTagSpanCount(riskStates),
        )
    }

    fun header(input: PatientCardInput, normalStyle: Boolean): PatientCardHeaderUiState {
        return PatientCardHeaderUiState(
            isTopDisplayCodeVisible = !normalStyle,
            isInlineDisplayCodeVisible = normalStyle,
            displayCode = input.displayCode,
            bedTitle = input.bedTitle,
        )
    }

    fun basicInfo(
        input: PatientCardInput,
        options: PatientCardRenderOptions,
    ): PatientCardBasicInfoUiState {
        val inHospitalText = if (input.hasAdmissionDate) {
            val daysText = if (options.showInHospitalDays) "${input.inHospitalDay}天 " else ""
            val admissionDateText = if (options.showAdmissionDate) "(${input.admissionDatePrefix})" else ""
            daysText + admissionDateText
        } else {
            ""
        }
        val text = (if (options.showAge) input.ageText else "") +
            (if (options.showBirthDate) " (${input.birthDateText}) /入院" else "") +
            inHospitalText
        return PatientCardBasicInfoUiState(
            text = text,
            isVisible = text.isNotEmpty(),
        )
    }

    fun gender(input: PatientCardInput): PatientCardGenderUiState {
        val text = when {
            input.gender.equals("F", ignoreCase = true) -> "女"
            input.gender.equals("M", ignoreCase = true) -> "男"
            else -> "未知"
        }
        return PatientCardGenderUiState(text)
    }

    fun clinicalInfo(
        input: PatientCardInput,
        options: PatientCardRenderOptions,
        dietTitleFormat: String,
    ): PatientCardClinicalInfoUiState {
        val showDiet = options.showDiet && !input.diet.isBlankText()
        val showAllergy = options.showAllergy && !input.allergen.isBlankText()
        return PatientCardClinicalInfoUiState(
            isDietVisible = showDiet,
            dietText = if (showDiet) dietTitleFormat.formatOneTextArg(input.diet) else "",
            isAllergyVisible = showAllergy,
            allergyText = if (showAllergy) input.allergen.replace(",", "、") else "",
            diagnosisText = input.diagnosis.textOrEmpty(),
        )
    }

    fun pathAndNurseLevel(
        input: PatientCardInput,
        nurseLevelText: String,
        nurseLevelVisible: Boolean,
    ): PatientCardPathNurseLevelUiState {
        val pathMarker = if (input.pathStatus.equals("1", ignoreCase = true)) {
            if (input.pathPendingNodeStatus == "1") {
                PatientCardPathMarker.NoNeedFinish
            } else {
                PatientCardPathMarker.NeedFinish
            }
        } else {
            PatientCardPathMarker.Hidden
        }
        return PatientCardPathNurseLevelUiState(
            pathMarker = pathMarker,
            nurseLevelText = nurseLevelText,
            isNurseLevelVisible = nurseLevelVisible,
        )
    }

    fun doctorTags(
        input: PatientCardInput,
        options: PatientCardRenderOptions,
        doctorPrefix: String,
        hospitalDoctorPrefix: String,
    ): PatientCardDoctorTagsUiState {
        val showDoctor = options.showDoctorName && input.doctorName.isNotEmpty()
        val showHospitalDoctor = options.showHospitalDoctorName && input.hospitalDoctorName.isNotEmpty()
        return PatientCardDoctorTagsUiState(
            isDoctorVisible = showDoctor,
            doctorText = if (showDoctor) doctorPrefix + input.doctorName else "",
            isHospitalDoctorVisible = showHospitalDoctor,
            hospitalDoctorText = if (showHospitalDoctor) hospitalDoctorPrefix + input.hospitalDoctorName else "",
        )
    }

    fun specialMarks(input: PatientCardInput): PatientCardSpecialMarksUiState {
        val showSurgery = !input.surgeryMark.isBlankText()
        return PatientCardSpecialMarksUiState(
            isSurgeryVisible = showSurgery,
            surgeryText = if (showSurgery) surgeryText(input.surgeryMark) else "",
            isInfectionVisible = !input.infectionDisease.isBlankText(),
            pregnancyMark = input.pregnancyMark,
        )
    }

    fun orderStatus(input: PatientCardInput): PatientCardOrderStatusUiState {
        val status = when {
            input.stOrderStatus -> PatientCardOrderStatus.Stat
            input.newOrderStatus -> PatientCardOrderStatus.NewOrder
            else -> PatientCardOrderStatus.None
        }
        return PatientCardOrderStatusUiState(
            status = status,
            isVisible = status != PatientCardOrderStatus.None,
        )
    }

    fun mewsScore(
        input: PatientCardInput,
        options: PatientCardRenderOptions,
    ): PatientCardMewsScoreUiState {
        val configuredVisible = options.showMewsScore
        val alertLevel = input.alertLevel.toIntOrNull() ?: 0
        if (!configuredVisible || alertLevel == 0) {
            return PatientCardMewsScoreUiState(
                isTopMewsBottomLayout = options.topMewsBottomLayout,
                isConfiguredVisible = configuredVisible,
                isVisible = false,
                scoreText = "",
            )
        }
        return PatientCardMewsScoreUiState(
            isTopMewsBottomLayout = options.topMewsBottomLayout,
            isConfiguredVisible = true,
            isVisible = true,
            scoreText = input.totalScore,
        )
    }

    fun criticalFlag(
        input: PatientCardInput,
        options: PatientCardRenderOptions,
    ): PatientCardCriticalFlagUiState {
        if (!options.showDangerLevel) {
            return hiddenCriticalFlag(input.riskLevel)
        }
        return when (input.riskLevel) {
            RiskLevel.Severe -> PatientCardCriticalFlagUiState(
                isVisible = true,
                text = "重",
                riskLevel = input.riskLevel,
            )
            RiskLevel.Danger -> PatientCardCriticalFlagUiState(
                isVisible = true,
                text = "危",
                riskLevel = input.riskLevel,
            )
            RiskLevel.None,
            RiskLevel.Unknown -> hiddenCriticalFlag(input.riskLevel)
        }
    }

    private fun surgeryText(surgeryMark: String): String {
        return if (surgeryMark == "1") "预" else "术"
    }

    private fun hiddenCriticalFlag(riskLevel: RiskLevel): PatientCardCriticalFlagUiState {
        return PatientCardCriticalFlagUiState(
            isVisible = false,
            text = "",
            riskLevel = riskLevel,
        )
    }

    private fun riskTag(
        item: PatientCardRiskTagInput?,
        dictionary: List<PatientCardRiskTagDictionaryItem?>,
        levelConfig: PatientCardRiskLevelDisplayConfig?,
    ): PatientCardRiskTagUiState {
        if (item == null) {
            return PatientCardRiskTagUiState(
                displayName = null,
                isVisible = false,
            )
        }
        val displayName = if (item.isVte || item.riskLevel == RISK_ISOLATION) {
            item.realName
        } else {
            val matchedItem = dictionaryItemFor(dictionary, item.nature.orEmpty())
            if (matchedItem != null) matchedItem.abbreviation else item.realName
        }
        return PatientCardRiskTagUiState(
            displayName = displayName,
            isVisible = isRiskTagVisible(displayName, item.riskLevel, levelConfig),
            style = riskTagStyle(item.riskLevel),
        )
    }

    private fun riskTagStyle(riskLevel: String?): PatientRiskTagPresentationStyle {
        return when (riskLevel) {
            RISK_LEVEL_ONE -> PatientRiskTagPresentationStyle.LevelOne
            RISK_LEVEL_TWO -> PatientRiskTagPresentationStyle.LevelTwo
            RISK_LEVEL_THREE -> PatientRiskTagPresentationStyle.LevelThree
            RISK_LEVEL_FOUR -> PatientRiskTagPresentationStyle.LevelFour
            RISK_LEVEL_FIVE -> PatientRiskTagPresentationStyle.LevelFive
            RISK_ISOLATION -> PatientRiskTagPresentationStyle.Isolation
            RISK_VTE_LEVEL_ONE -> PatientRiskTagPresentationStyle.VteLevelOne
            RISK_VTE_LEVEL_TWO -> PatientRiskTagPresentationStyle.VteLevelTwo
            RISK_VTE_LEVEL_THREE -> PatientRiskTagPresentationStyle.VteLevelThree
            RISK_VTE_TODO -> PatientRiskTagPresentationStyle.VteTodo
            else -> PatientRiskTagPresentationStyle.Default
        }
    }

    private fun dictionaryItemFor(
        dictionary: List<PatientCardRiskTagDictionaryItem?>,
        code: String,
    ): PatientCardRiskTagDictionaryItem? {
        return dictionary.firstOrNull { item -> item != null && item.code == code }
    }

    private fun isRiskTagVisible(
        displayName: String?,
        riskLevel: String?,
        levelConfig: PatientCardRiskLevelDisplayConfig?,
    ): Boolean {
        if (levelConfig == null) {
            return riskLevel != RISK_LEVEL_FOUR && !displayName.isNullOrBlankText()
        }
        if (displayName.isNullOrBlankText() || riskLevel.isNullOrBlankText()) {
            return false
        }
        return when (riskLevel) {
            RISK_LEVEL_ONE -> levelConfig.level1 == true
            RISK_LEVEL_TWO -> levelConfig.level2 == true
            RISK_LEVEL_THREE -> levelConfig.level3 == true
            RISK_LEVEL_FOUR -> levelConfig.level4 == true
            RISK_LEVEL_FIVE -> levelConfig.level5 == true
            else -> true
        }
    }

    private fun riskTagSpanCount(items: List<PatientCardRiskTagUiState>): Int {
        val hasLongName = items.any { item -> item.isVisible && item.displayName != null && item.displayName.length > 2 }
        return if (hasLongName) LONG_RISK_TEXT_GRID_SPAN_COUNT else DEFAULT_RISK_GRID_SPAN_COUNT
    }
}

private const val DEFAULT_RISK_GRID_SPAN_COUNT = 5
private const val LONG_RISK_TEXT_GRID_SPAN_COUNT = 4
private const val RISK_LEVEL_ONE = "01"
private const val RISK_LEVEL_TWO = "02"
private const val RISK_LEVEL_THREE = "03"
private const val RISK_LEVEL_FOUR = "04"
private const val RISK_LEVEL_FIVE = "05"
private const val RISK_ISOLATION = "--"
private const val RISK_VTE_LEVEL_ONE = "vte_1"
private const val RISK_VTE_LEVEL_TWO = "vte_2"
private const val RISK_VTE_LEVEL_THREE = "vte_3"
private const val RISK_VTE_TODO = "vte_todo"

private fun String.isBlankText(): Boolean = trim().isEmpty()

private fun String?.isNullOrBlankText(): Boolean = this == null || trim().isEmpty()

private fun String.textOrEmpty(): String = if (isBlankText()) "" else this

private fun String.formatOneTextArg(value: String): String {
    return replace("%1\$s", value).replace("%s", value)
}
