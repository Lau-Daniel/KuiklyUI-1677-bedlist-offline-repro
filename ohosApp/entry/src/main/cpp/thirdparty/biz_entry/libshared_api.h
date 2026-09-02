#ifndef KONAN_LIBSHARED_H
#define KONAN_LIBSHARED_H
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
typedef bool            libshared_KBoolean;
#else
typedef _Bool           libshared_KBoolean;
#endif
typedef unsigned short     libshared_KChar;
typedef signed char        libshared_KByte;
typedef short              libshared_KShort;
typedef int                libshared_KInt;
typedef long long          libshared_KLong;
typedef unsigned char      libshared_KUByte;
typedef unsigned short     libshared_KUShort;
typedef unsigned int       libshared_KUInt;
typedef unsigned long long libshared_KULong;
typedef float              libshared_KFloat;
typedef double             libshared_KDouble;
typedef float __attribute__ ((__vector_size__ (16))) libshared_KVector128;
typedef void*              libshared_KNativePtr;
struct libshared_KType;
typedef struct libshared_KType libshared_KType;

typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_kotlin_Byte;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_kotlin_Short;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_kotlin_Int;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_kotlin_Long;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_kotlin_Float;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_kotlin_Double;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_kotlin_Char;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_kotlin_Boolean;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_kotlin_Unit;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_kotlin_UByte;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_kotlin_UShort;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_kotlin_UInt;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_kotlin_ULong;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_kuiklyui_bedlist_BedListOfflineReproPage;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_kuiklyui_designsystem_FusionAndroidBaselineComposeContainer;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardPregnancyMark;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardPregnancyMark_None;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardPregnancyMark_LossOrStillbirth;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardPregnancyMark_PregnancyOrLiveBirth;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardLegacyMappings;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_NursingLevel;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_kotlin_Any;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputNormalizer;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_kotlin_collections_Set;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_kotlin_collections_List;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskEvaluationFact;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskTagDictionaryFact;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskLevelDisplayConfigFact;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_NursingLevel_Special;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_NursingLevel_First;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_NursingLevel_Second;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_NursingLevel_Third;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_NursingLevel_SpecialDisease;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_NursingLevel_Unknown;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel_Danger;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel_Severe;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel_None;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel_Unknown;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag_NewIn;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag_NewOrder;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag_NewOrderStatus;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag_StatOrder;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag_OutHospitalToday;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag_Arrears;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag_HighTemperature;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag_NursePlan;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag_TodayIn3;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag_Surgery;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag_Surgery2;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag_Surgery3;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag_Surgery4;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag_TransIn;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag_TransOut;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag_TransferOut;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskNature;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskNature_SelfCare;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskNature_Pain;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskNature_FallDown;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskNature_PressureSore;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskNature_PipeFall;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskNature_Anxiety;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskNature_Depression;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskNature_Nutrition;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskNature_DeepVeins;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_All;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_Special;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_First;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_Second;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_Third;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_SpecialDisease;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_Danger;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_Severe;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_NewIn;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_OutHospital;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_Surgery;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_OweFee;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_NewOpen;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_TodayIn3;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_Surgery2;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_Surgery3;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_Surgery4;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_Adult;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_Baby;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_TransIn;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_TransOut;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_TransferOut;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_SelfCare;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_Pain;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_FallDown;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_PressureSore;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_PipeFall;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_Anxiety;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_Depression;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_Nutrition;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_DeepVeins;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_HighTemperature;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_NursePlan;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_Companion;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroupType;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroupType_TodayOutHospital;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroupType_TodaySurgery;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroupType_TodayTransferIn;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroupType_TodayTransferOut;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroupType_FlowTransferOut;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroup;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupConfig;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientIdentifierDisplayMode;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientIdentifierDisplayMode_InpatientNumber;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientIdentifierDisplayMode_MedicalRecordNumber;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientIdentifierDisplayMode_Companion;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHostPresentationConfig;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathMarker;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatus;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPresentation;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardBasicInfoUiState;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardClinicalInfoUiState;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardCriticalFlagUiState;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardDoctorTagsUiState;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardGenderUiState;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHeaderUiState;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardMewsScoreUiState;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatusUiState;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathNurseLevelUiState;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskLevelDisplayConfig;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagsUiState;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardSpecialMarksUiState;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathMarker_Hidden;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathMarker_NeedFinish;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathMarker_NoNeedFinish;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatus_None;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatus_Stat;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatus_NewOrder;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigPlanner;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagInput;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagDictionaryItem;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagUiState;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientGroupState;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle_Default;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle_LevelOne;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle_LevelTwo;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle_LevelThree;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle_LevelFour;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle_LevelFive;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle_Isolation;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle_VteLevelOne;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle_VteLevelTwo;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle_VteLevelThree;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle_VteTodo;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationState;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchMatchMode;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchMatchMode_Contains;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchMatchMode_Exact;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListSearchUiState;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListContentMode;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListContentMode_Patient;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListContentMode_Surgery;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadPhase;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadPhase_Loading;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadPhase_Ready;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadPhase_Error;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadPhase_MissingConfiguration;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadPhase_Unavailable;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage_None;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage_Loading;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage_Loaded;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage_Refreshing;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage_Refreshed;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage_RefreshConfigurationMissing;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage_SessionMissing;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage_SessionRestoreFailed;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage_ConfigurationMissing;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage_GroupConfigurationMissing;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage_NetworkFailure;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage_ResponseInvalid;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage_HttpFailure;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage_UnknownFailure;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadFacts;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadUiState;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadPresenter;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_routing_MnisRoute;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientDetailDestination;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientDetailDestination_NursingTask;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientDetailDestination_LegacyDeferred;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectGroup;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectCareScope;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectPatient;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_Refresh;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_OpenSearch;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_OpenFunctionMenu;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_RefreshRequested;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_CareScopeRefreshRequested;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenSearchRequested;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenFunctionMenuRequested;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_routing_MnisRoute_PatientList;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_routing_MnisRoute_ScanDispatch;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_routing_MnisRoute_OrderPrecheck;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_routing_RouteReadiness;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_routing_RouteReadiness_LocalReady;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_routing_RouteReadiness_BlockedByDevice;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_routing_RouteReadiness_BlockedByEnvironment;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_routing_RouteReadiness_ManualRequired;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_routing_RequiredParam;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_routing_RouteContract;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_kotlin_collections_Map;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_routing_RouteValidationResult;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_routing_RouteValidationResult_Valid;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_routing_RouteValidationResult_Invalid;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_routing_PageManifestEntry;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_routing_PageManifestGate;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_routing_ManifestValidationResult;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_routing_ManifestValidationResult_Valid;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_routing_ManifestValidationResult_Invalid;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_routing_MnisPageContracts;
typedef struct {
  libshared_KNativePtr pinned;
} libshared_kref_com_lachesis_fusion_shared_routing_MnisPageManifest;


typedef struct {
  /* Service functions. */
  void (*DisposeStablePointer)(libshared_KNativePtr ptr);
  void (*DisposeString)(const char* string);
  libshared_KBoolean (*IsInstance)(libshared_KNativePtr ref, const libshared_KType* type);
  libshared_kref_kotlin_Byte (*createNullableByte)(libshared_KByte);
  libshared_KByte (*getNonNullValueOfByte)(libshared_kref_kotlin_Byte);
  libshared_kref_kotlin_Short (*createNullableShort)(libshared_KShort);
  libshared_KShort (*getNonNullValueOfShort)(libshared_kref_kotlin_Short);
  libshared_kref_kotlin_Int (*createNullableInt)(libshared_KInt);
  libshared_KInt (*getNonNullValueOfInt)(libshared_kref_kotlin_Int);
  libshared_kref_kotlin_Long (*createNullableLong)(libshared_KLong);
  libshared_KLong (*getNonNullValueOfLong)(libshared_kref_kotlin_Long);
  libshared_kref_kotlin_Float (*createNullableFloat)(libshared_KFloat);
  libshared_KFloat (*getNonNullValueOfFloat)(libshared_kref_kotlin_Float);
  libshared_kref_kotlin_Double (*createNullableDouble)(libshared_KDouble);
  libshared_KDouble (*getNonNullValueOfDouble)(libshared_kref_kotlin_Double);
  libshared_kref_kotlin_Char (*createNullableChar)(libshared_KChar);
  libshared_KChar (*getNonNullValueOfChar)(libshared_kref_kotlin_Char);
  libshared_kref_kotlin_Boolean (*createNullableBoolean)(libshared_KBoolean);
  libshared_KBoolean (*getNonNullValueOfBoolean)(libshared_kref_kotlin_Boolean);
  libshared_kref_kotlin_Unit (*createNullableUnit)(void);
  libshared_kref_kotlin_UByte (*createNullableUByte)(libshared_KUByte);
  libshared_KUByte (*getNonNullValueOfUByte)(libshared_kref_kotlin_UByte);
  libshared_kref_kotlin_UShort (*createNullableUShort)(libshared_KUShort);
  libshared_KUShort (*getNonNullValueOfUShort)(libshared_kref_kotlin_UShort);
  libshared_kref_kotlin_UInt (*createNullableUInt)(libshared_KUInt);
  libshared_KUInt (*getNonNullValueOfUInt)(libshared_kref_kotlin_UInt);
  libshared_kref_kotlin_ULong (*createNullableULong)(libshared_KULong);
  libshared_KULong (*getNonNullValueOfULong)(libshared_kref_kotlin_ULong);

  /* User functions. */
  struct {
    struct {
      struct {
        struct {
          struct {
            struct {
              struct {
                struct {
                  libshared_KType* (*_type)(void);
                  libshared_kref_com_lachesis_fusion_kuiklyui_bedlist_BedListOfflineReproPage (*BedListOfflineReproPage)();
                  void (*willInit)(libshared_kref_com_lachesis_fusion_kuiklyui_bedlist_BedListOfflineReproPage thiz);
                } BedListOfflineReproPage;
                const char* (*get_BED_LIST_HOST_SCROLL_LIST_GROUP_RAIL)();
                const char* (*get_BED_LIST_HOST_SCROLL_LIST_PATIENTS)();
                libshared_KInt (*com_lachesis_fusion_kuiklyui_bedlist_BedListAdaptiveLayoutMetrics$stableprop_getter)();
                libshared_KInt (*com_lachesis_fusion_kuiklyui_bedlist_BedListMarqueeMotion$stableprop_getter)();
                libshared_KInt (*com_lachesis_fusion_kuiklyui_bedlist_BedListOfflineReproPage$stableprop_getter)();
                libshared_KInt (*com_lachesis_fusion_kuiklyui_bedlist_BedListPatientLazyListPolicy$stableprop_getter)();
                libshared_KInt (*com_lachesis_fusion_kuiklyui_bedlist_BedListRiskTagColors$stableprop_getter)();
                libshared_KInt (*com_lachesis_fusion_kuiklyui_bedlist_BedListVisualMetrics$stableprop_getter)();
                libshared_KInt (*com_lachesis_fusion_kuiklyui_bedlist_BedListAdaptiveLayoutMetrics$stableprop_getter_)();
                libshared_KInt (*com_lachesis_fusion_kuiklyui_bedlist_BedListMarqueeMotion$stableprop_getter_)();
                libshared_KInt (*com_lachesis_fusion_kuiklyui_bedlist_BedListOfflineReproPage$stableprop_getter_)();
                libshared_KInt (*com_lachesis_fusion_kuiklyui_bedlist_BedListPatientLazyListPolicy$stableprop_getter_)();
                libshared_KInt (*com_lachesis_fusion_kuiklyui_bedlist_BedListRiskTagColors$stableprop_getter_)();
                libshared_KInt (*com_lachesis_fusion_kuiklyui_bedlist_BedListVisualMetrics$stableprop_getter_)();
                libshared_KInt (*com_lachesis_fusion_kuiklyui_bedlist_BedListAdaptiveLayoutMetrics$stableprop_getter__)();
                libshared_KInt (*com_lachesis_fusion_kuiklyui_bedlist_BedListMarqueeMotion$stableprop_getter__)();
                libshared_KInt (*com_lachesis_fusion_kuiklyui_bedlist_BedListOfflineReproPage$stableprop_getter__)();
                libshared_KInt (*com_lachesis_fusion_kuiklyui_bedlist_BedListPatientLazyListPolicy$stableprop_getter__)();
                libshared_KInt (*com_lachesis_fusion_kuiklyui_bedlist_BedListRiskTagColors$stableprop_getter__)();
                libshared_KInt (*com_lachesis_fusion_kuiklyui_bedlist_BedListVisualMetrics$stableprop_getter__)();
              } bedlist;
              struct {
                struct {
                  libshared_KType* (*_type)(void);
                  libshared_kref_com_lachesis_fusion_kuiklyui_designsystem_FusionAndroidBaselineComposeContainer (*FusionAndroidBaselineComposeContainer)();
                } FusionAndroidBaselineComposeContainer;
                libshared_KInt (*com_lachesis_fusion_kuiklyui_designsystem_FusionAndroidBaselineComposeContainer$stableprop_getter)();
                libshared_KInt (*com_lachesis_fusion_kuiklyui_designsystem_FusionAndroidBaselineComposeContainer$stableprop_getter_)();
              } designsystem;
            } kuiklyui;
            struct {
              struct {
                struct {
                  struct {
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardPregnancyMark (*get)(); /* enum entry for None. */
                    } None;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardPregnancyMark (*get)(); /* enum entry for LossOrStillbirth. */
                    } LossOrStillbirth;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardPregnancyMark (*get)(); /* enum entry for PregnancyOrLiveBirth. */
                    } PregnancyOrLiveBirth;
                    libshared_KType* (*_type)(void);
                  } PatientCardPregnancyMark;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardLegacyMappings (*_instance)();
                    const char* (*legacyDangerLevelCode)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardLegacyMappings thiz, libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel riskLevel);
                    libshared_KInt (*legacyNursingLevelCode)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardLegacyMappings thiz, libshared_kref_com_lachesis_fusion_shared_patient_domain_NursingLevel level);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_NursingLevel (*nursingLevelFromLegacyCode)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardLegacyMappings thiz, libshared_KInt level);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel (*riskLevelFromLegacyDangerCode)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardLegacyMappings thiz, const char* dangerLevel);
                  } PatientCardLegacyMappings;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts (*PatientCardInputFacts)(const char* displayCode, const char* bedNo, const char* name, libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel riskLevel, libshared_KBoolean stOrderStatus, libshared_KBoolean newOrderStatus, const char* alertLevel, const char* totalScore, const char* admissionDate, libshared_KInt inHospitalDay, const char* age, const char* birthDateText, const char* gender, const char* diet, const char* allergen, const char* diagnosis, const char* pathStatus, const char* pathPendingNodeStatus, const char* doctorName, const char* hospitalDoctorName, const char* surgeryMark, const char* infectionDisease, const char* inDiagnosisText);
                    const char* (*get_admissionDate)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*get_age)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*get_alertLevel)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*get_allergen)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*get_bedNo)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*get_birthDateText)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*get_diagnosis)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*get_diet)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*get_displayCode)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*get_doctorName)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*get_gender)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*get_hospitalDoctorName)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*get_inDiagnosisText)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    libshared_KInt (*get_inHospitalDay)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*get_infectionDisease)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*get_name)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    libshared_KBoolean (*get_newOrderStatus)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*get_pathPendingNodeStatus)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*get_pathStatus)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel (*get_riskLevel)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    libshared_KBoolean (*get_stOrderStatus)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*get_surgeryMark)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*get_totalScore)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    libshared_KInt (*component10)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*component11)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*component12)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*component13)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*component14)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*component15)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*component16)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*component17)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*component18)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*component19)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*component20)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*component21)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*component22)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*component23)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel (*component4)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    libshared_KBoolean (*component5)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    libshared_KBoolean (*component6)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*component7)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*component8)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*component9)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz, const char* displayCode, const char* bedNo, const char* name, libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel riskLevel, libshared_KBoolean stOrderStatus, libshared_KBoolean newOrderStatus, const char* alertLevel, const char* totalScore, const char* admissionDate, libshared_KInt inHospitalDay, const char* age, const char* birthDateText, const char* gender, const char* diet, const char* allergen, const char* diagnosis, const char* pathStatus, const char* pathPendingNodeStatus, const char* doctorName, const char* hospitalDoctorName, const char* surgeryMark, const char* infectionDisease, const char* inDiagnosisText);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts thiz);
                  } PatientCardInputFacts;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputNormalizer (*_instance)();
                    const char* (*admissionDatePrefixOf)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputNormalizer thiz, const char* admissionDate);
                    const char* (*ageTextOf)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputNormalizer thiz, const char* age);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput (*input)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputNormalizer thiz, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts facts);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardPregnancyMark (*pregnancyMarkOf)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInputNormalizer thiz, const char* inDiagnosisText);
                  } PatientCardInputNormalizer;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput (*PatientCardInput)(const char* displayCode, const char* bedNo, const char* name, libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel riskLevel, libshared_KBoolean stOrderStatus, libshared_KBoolean newOrderStatus, const char* alertLevel, const char* totalScore, libshared_KBoolean hasAdmissionDate, const char* admissionDatePrefix, libshared_KInt inHospitalDay, const char* ageText, const char* birthDateText, const char* gender, const char* diet, const char* allergen, const char* diagnosis, const char* pathStatus, const char* pathPendingNodeStatus, const char* doctorName, const char* hospitalDoctorName, const char* surgeryMark, const char* infectionDisease, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardPregnancyMark pregnancyMark);
                    const char* (*get_admissionDatePrefix)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*get_ageText)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*get_alertLevel)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*get_allergen)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*get_bedNo)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*get_bedTitle)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*get_birthDateText)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*get_diagnosis)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*get_diet)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*get_displayCode)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*get_doctorName)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*get_gender)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    libshared_KBoolean (*get_hasAdmissionDate)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*get_hospitalDoctorName)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    libshared_KInt (*get_inHospitalDay)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*get_infectionDisease)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*get_name)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    libshared_KBoolean (*get_newOrderStatus)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*get_pathPendingNodeStatus)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*get_pathStatus)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardPregnancyMark (*get_pregnancyMark)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel (*get_riskLevel)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    libshared_KBoolean (*get_stOrderStatus)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*get_surgeryMark)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*get_totalScore)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*component10)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    libshared_KInt (*component11)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*component12)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*component13)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*component14)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*component15)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*component16)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*component17)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*component18)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*component19)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*component20)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*component21)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*component22)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*component23)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardPregnancyMark (*component24)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel (*component4)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    libshared_KBoolean (*component5)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    libshared_KBoolean (*component6)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*component7)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*component8)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    libshared_KBoolean (*component9)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz, const char* displayCode, const char* bedNo, const char* name, libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel riskLevel, libshared_KBoolean stOrderStatus, libshared_KBoolean newOrderStatus, const char* alertLevel, const char* totalScore, libshared_KBoolean hasAdmissionDate, const char* admissionDatePrefix, libshared_KInt inHospitalDay, const char* ageText, const char* birthDateText, const char* gender, const char* diet, const char* allergen, const char* diagnosis, const char* pathStatus, const char* pathPendingNodeStatus, const char* doctorName, const char* hospitalDoctorName, const char* surgeryMark, const char* infectionDisease, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardPregnancyMark pregnancyMark);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput thiz);
                  } PatientCardInput;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary (*PatientSummary)(const char* patientId, const char* encounterId, const char* bedNo, const char* name, const char* displayCode, const char* gender, const char* age, const char* admissionDate, libshared_KInt inHospitalDay, const char* birthDate, const char* diagnosis, const char* diet, const char* allergen, const char* doctorName, const char* hospitalDoctorName, const char* alertLevel, const char* totalScore, const char* pathStatus, const char* pathPendingNodeStatus, libshared_KBoolean pathSpecialThrombolysis, const char* surgeryMark, const char* infectionDisease, const char* inDiagnosisText, libshared_kref_com_lachesis_fusion_shared_patient_domain_NursingLevel nursingLevel, libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel riskLevel, libshared_KBoolean isBaby, const char* motherEncounterId, libshared_KBoolean isCared, libshared_KBoolean isAuthorized, libshared_kref_kotlin_collections_Set flags, libshared_kref_kotlin_collections_Set riskNatures, libshared_kref_kotlin_collections_List riskEvaluations, libshared_KBoolean isIsolated);
                    const char* (*get_admissionDate)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*get_age)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*get_alertLevel)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*get_allergen)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*get_bedNo)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*get_birthDate)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*get_diagnosis)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*get_diet)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*get_displayCode)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*get_doctorName)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*get_encounterId)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    libshared_kref_kotlin_collections_Set (*get_flags)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*get_gender)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*get_hospitalDoctorName)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*get_inDiagnosisText)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    libshared_KInt (*get_inHospitalDay)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*get_infectionDisease)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    libshared_KBoolean (*get_isAuthorized)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    libshared_KBoolean (*get_isBaby)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    libshared_KBoolean (*get_isCared)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    libshared_KBoolean (*get_isIsolated)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*get_motherEncounterId)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*get_name)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_NursingLevel (*get_nursingLevel)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*get_pathPendingNodeStatus)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    libshared_KBoolean (*get_pathSpecialThrombolysis)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*get_pathStatus)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*get_patientId)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    libshared_kref_kotlin_collections_List (*get_riskEvaluations)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel (*get_riskLevel)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    libshared_kref_kotlin_collections_Set (*get_riskNatures)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*get_surgeryMark)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*get_totalScore)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*component10)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*component11)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*component12)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*component13)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*component14)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*component15)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*component16)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*component17)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*component18)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*component19)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    libshared_KBoolean (*component20)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*component21)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*component22)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*component23)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_NursingLevel (*component24)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel (*component25)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    libshared_KBoolean (*component26)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*component27)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    libshared_KBoolean (*component28)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    libshared_KBoolean (*component29)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    libshared_kref_kotlin_collections_Set (*component30)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    libshared_kref_kotlin_collections_Set (*component31)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    libshared_kref_kotlin_collections_List (*component32)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    libshared_KBoolean (*component33)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*component4)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*component5)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*component6)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*component7)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*component8)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    libshared_KInt (*component9)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz, const char* patientId, const char* encounterId, const char* bedNo, const char* name, const char* displayCode, const char* gender, const char* age, const char* admissionDate, libshared_KInt inHospitalDay, const char* birthDate, const char* diagnosis, const char* diet, const char* allergen, const char* doctorName, const char* hospitalDoctorName, const char* alertLevel, const char* totalScore, const char* pathStatus, const char* pathPendingNodeStatus, libshared_KBoolean pathSpecialThrombolysis, const char* surgeryMark, const char* infectionDisease, const char* inDiagnosisText, libshared_kref_com_lachesis_fusion_shared_patient_domain_NursingLevel nursingLevel, libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel riskLevel, libshared_KBoolean isBaby, const char* motherEncounterId, libshared_KBoolean isCared, libshared_KBoolean isAuthorized, libshared_kref_kotlin_collections_Set flags, libshared_kref_kotlin_collections_Set riskNatures, libshared_kref_kotlin_collections_List riskEvaluations, libshared_KBoolean isIsolated);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientSummary thiz);
                  } PatientSummary;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskEvaluationFact (*PatientRiskEvaluationFact)(const char* nature, const char* realName, const char* riskLevel);
                    const char* (*get_nature)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskEvaluationFact thiz);
                    const char* (*get_realName)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskEvaluationFact thiz);
                    const char* (*get_riskLevel)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskEvaluationFact thiz);
                    const char* (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskEvaluationFact thiz);
                    const char* (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskEvaluationFact thiz);
                    const char* (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskEvaluationFact thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskEvaluationFact (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskEvaluationFact thiz, const char* nature, const char* realName, const char* riskLevel);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskEvaluationFact thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskEvaluationFact thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskEvaluationFact thiz);
                  } PatientRiskEvaluationFact;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskTagDictionaryFact (*PatientRiskTagDictionaryFact)(const char* code, const char* abbreviation);
                    const char* (*get_abbreviation)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskTagDictionaryFact thiz);
                    const char* (*get_code)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskTagDictionaryFact thiz);
                    const char* (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskTagDictionaryFact thiz);
                    const char* (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskTagDictionaryFact thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskTagDictionaryFact (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskTagDictionaryFact thiz, const char* code, const char* abbreviation);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskTagDictionaryFact thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskTagDictionaryFact thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskTagDictionaryFact thiz);
                  } PatientRiskTagDictionaryFact;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskLevelDisplayConfigFact (*PatientRiskLevelDisplayConfigFact)(libshared_kref_kotlin_Boolean level1, libshared_kref_kotlin_Boolean level2, libshared_kref_kotlin_Boolean level3, libshared_kref_kotlin_Boolean level4, libshared_kref_kotlin_Boolean level5);
                    libshared_kref_kotlin_Boolean (*get_level1)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskLevelDisplayConfigFact thiz);
                    libshared_kref_kotlin_Boolean (*get_level2)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskLevelDisplayConfigFact thiz);
                    libshared_kref_kotlin_Boolean (*get_level3)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskLevelDisplayConfigFact thiz);
                    libshared_kref_kotlin_Boolean (*get_level4)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskLevelDisplayConfigFact thiz);
                    libshared_kref_kotlin_Boolean (*get_level5)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskLevelDisplayConfigFact thiz);
                    libshared_kref_kotlin_Boolean (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskLevelDisplayConfigFact thiz);
                    libshared_kref_kotlin_Boolean (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskLevelDisplayConfigFact thiz);
                    libshared_kref_kotlin_Boolean (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskLevelDisplayConfigFact thiz);
                    libshared_kref_kotlin_Boolean (*component4)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskLevelDisplayConfigFact thiz);
                    libshared_kref_kotlin_Boolean (*component5)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskLevelDisplayConfigFact thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskLevelDisplayConfigFact (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskLevelDisplayConfigFact thiz, libshared_kref_kotlin_Boolean level1, libshared_kref_kotlin_Boolean level2, libshared_kref_kotlin_Boolean level3, libshared_kref_kotlin_Boolean level4, libshared_kref_kotlin_Boolean level5);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskLevelDisplayConfigFact thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskLevelDisplayConfigFact thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskLevelDisplayConfigFact thiz);
                  } PatientRiskLevelDisplayConfigFact;
                  struct {
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_NursingLevel (*get)(); /* enum entry for Special. */
                    } Special;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_NursingLevel (*get)(); /* enum entry for First. */
                    } First;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_NursingLevel (*get)(); /* enum entry for Second. */
                    } Second;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_NursingLevel (*get)(); /* enum entry for Third. */
                    } Third;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_NursingLevel (*get)(); /* enum entry for SpecialDisease. */
                    } SpecialDisease;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_NursingLevel (*get)(); /* enum entry for Unknown. */
                    } Unknown;
                    libshared_KType* (*_type)(void);
                  } NursingLevel;
                  struct {
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel (*get)(); /* enum entry for Danger. */
                    } Danger;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel (*get)(); /* enum entry for Severe. */
                    } Severe;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel (*get)(); /* enum entry for None. */
                    } None;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel (*get)(); /* enum entry for Unknown. */
                    } Unknown;
                    libshared_KType* (*_type)(void);
                  } RiskLevel;
                  struct {
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag (*get)(); /* enum entry for NewIn. */
                    } NewIn;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag (*get)(); /* enum entry for NewOrder. */
                    } NewOrder;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag (*get)(); /* enum entry for NewOrderStatus. */
                    } NewOrderStatus;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag (*get)(); /* enum entry for StatOrder. */
                    } StatOrder;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag (*get)(); /* enum entry for OutHospitalToday. */
                    } OutHospitalToday;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag (*get)(); /* enum entry for Arrears. */
                    } Arrears;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag (*get)(); /* enum entry for HighTemperature. */
                    } HighTemperature;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag (*get)(); /* enum entry for NursePlan. */
                    } NursePlan;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag (*get)(); /* enum entry for TodayIn3. */
                    } TodayIn3;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag (*get)(); /* enum entry for Surgery. */
                    } Surgery;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag (*get)(); /* enum entry for Surgery2. */
                    } Surgery2;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag (*get)(); /* enum entry for Surgery3. */
                    } Surgery3;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag (*get)(); /* enum entry for Surgery4. */
                    } Surgery4;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag (*get)(); /* enum entry for TransIn. */
                    } TransIn;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag (*get)(); /* enum entry for TransOut. */
                    } TransOut;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientFlag (*get)(); /* enum entry for TransferOut. */
                    } TransferOut;
                    libshared_KType* (*_type)(void);
                  } PatientFlag;
                  struct {
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskNature (*get)(); /* enum entry for SelfCare. */
                    } SelfCare;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskNature (*get)(); /* enum entry for Pain. */
                    } Pain;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskNature (*get)(); /* enum entry for FallDown. */
                    } FallDown;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskNature (*get)(); /* enum entry for PressureSore. */
                    } PressureSore;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskNature (*get)(); /* enum entry for PipeFall. */
                    } PipeFall;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskNature (*get)(); /* enum entry for Anxiety. */
                    } Anxiety;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskNature (*get)(); /* enum entry for Depression. */
                    } Depression;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskNature (*get)(); /* enum entry for Nutrition. */
                    } Nutrition;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskNature (*get)(); /* enum entry for DeepVeins. */
                    } DeepVeins;
                    libshared_KType* (*_type)(void);
                  } PatientRiskNature;
                  struct {
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for All. */
                    } All;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for Special. */
                    } Special;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for First. */
                    } First;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for Second. */
                    } Second;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for Third. */
                    } Third;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for SpecialDisease. */
                    } SpecialDisease;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for Danger. */
                    } Danger;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for Severe. */
                    } Severe;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for NewIn. */
                    } NewIn;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for OutHospital. */
                    } OutHospital;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for Surgery. */
                    } Surgery;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for OweFee. */
                    } OweFee;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for NewOpen. */
                    } NewOpen;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for TodayIn3. */
                    } TodayIn3;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for Surgery2. */
                    } Surgery2;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for Surgery3. */
                    } Surgery3;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for Surgery4. */
                    } Surgery4;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for Adult. */
                    } Adult;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for Baby. */
                    } Baby;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for TransIn. */
                    } TransIn;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for TransOut. */
                    } TransOut;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for TransferOut. */
                    } TransferOut;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for SelfCare. */
                    } SelfCare;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for Pain. */
                    } Pain;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for FallDown. */
                    } FallDown;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for PressureSore. */
                    } PressureSore;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for PipeFall. */
                    } PipeFall;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for Anxiety. */
                    } Anxiety;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for Depression. */
                    } Depression;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for Nutrition. */
                    } Nutrition;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for DeepVeins. */
                    } DeepVeins;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for HighTemperature. */
                    } HighTemperature;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get)(); /* enum entry for NursePlan. */
                    } NursePlan;
                    struct {
                      libshared_KType* (*_type)(void);
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_Companion (*_instance)();
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*fromLegacyCode)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType_Companion thiz, const char* code);
                    } Companion;
                    libshared_KType* (*_type)(void);
                    const char* (*get_legacyCode)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType thiz);
                  } PatientGroupType;
                  struct {
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroupType (*get)(); /* enum entry for TodayOutHospital. */
                    } TodayOutHospital;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroupType (*get)(); /* enum entry for TodaySurgery. */
                    } TodaySurgery;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroupType (*get)(); /* enum entry for TodayTransferIn. */
                    } TodayTransferIn;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroupType (*get)(); /* enum entry for TodayTransferOut. */
                    } TodayTransferOut;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroupType (*get)(); /* enum entry for FlowTransferOut. */
                    } FlowTransferOut;
                    libshared_KType* (*_type)(void);
                  } PatientExternalGroupType;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroup (*PatientExternalGroup)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroupType type, libshared_kref_kotlin_collections_List patients, libshared_KBoolean replacesInferredGroup);
                    libshared_kref_kotlin_collections_List (*get_patients)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroup thiz);
                    libshared_KBoolean (*get_replacesInferredGroup)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroup thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroupType (*get_type)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroup thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroupType (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroup thiz);
                    libshared_kref_kotlin_collections_List (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroup thiz);
                    libshared_KBoolean (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroup thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroup (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroup thiz, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroupType type, libshared_kref_kotlin_collections_List patients, libshared_KBoolean replacesInferredGroup);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroup thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroup thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientExternalGroup thiz);
                  } PatientExternalGroup;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupConfig (*PatientGroupConfig)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType type, const char* name, libshared_KBoolean isSelected);
                    libshared_KBoolean (*get_isSelected)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupConfig thiz);
                    const char* (*get_name)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupConfig thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get_type)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupConfig thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupConfig thiz);
                    const char* (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupConfig thiz);
                    libshared_KBoolean (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupConfig thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupConfig (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupConfig thiz, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType type, const char* name, libshared_KBoolean isSelected);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupConfig thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupConfig thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupConfig thiz);
                  } PatientGroupConfig;
                  struct {
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientIdentifierDisplayMode (*get)(); /* enum entry for InpatientNumber. */
                    } InpatientNumber;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientIdentifierDisplayMode (*get)(); /* enum entry for MedicalRecordNumber. */
                    } MedicalRecordNumber;
                    struct {
                      libshared_KType* (*_type)(void);
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientIdentifierDisplayMode_Companion (*_instance)();
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientIdentifierDisplayMode (*fromLegacyInhosCodeShowName)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientIdentifierDisplayMode_Companion thiz, const char* value);
                    } Companion;
                    libshared_KType* (*_type)(void);
                  } PatientIdentifierDisplayMode;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput (*PatientListInput)(const char* wardCode, libshared_kref_kotlin_collections_List patients, libshared_kref_kotlin_collections_List groupConfigs, libshared_KBoolean groupConfigsProvided, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType selectedGroupType, libshared_KBoolean isCareScopeSelected, const char* careScopeName, libshared_KBoolean isRefreshing, libshared_KBoolean filterUnauthorizedPatients, libshared_KBoolean excludeNeonateFromAdultGroups, libshared_kref_kotlin_collections_List externalGroups, libshared_KBoolean searchAccurate, libshared_KBoolean useNewVersion, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientIdentifierDisplayMode patientIdentifierDisplayMode, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput cardRenderConfigFacts, libshared_kref_kotlin_collections_List riskTagDictionaryFacts, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskLevelDisplayConfigFact riskLevelDisplayConfigFact);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput (*get_cardRenderConfigFacts)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    const char* (*get_careScopeName)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_KBoolean (*get_excludeNeonateFromAdultGroups)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_kref_kotlin_collections_List (*get_externalGroups)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_KBoolean (*get_filterUnauthorizedPatients)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_kref_kotlin_collections_List (*get_groupConfigs)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_KBoolean (*get_groupConfigsProvided)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_KBoolean (*get_isCareScopeSelected)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_KBoolean (*get_isRefreshing)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientIdentifierDisplayMode (*get_patientIdentifierDisplayMode)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_kref_kotlin_collections_List (*get_patients)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskLevelDisplayConfigFact (*get_riskLevelDisplayConfigFact)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_kref_kotlin_collections_List (*get_riskTagDictionaryFacts)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_KBoolean (*get_searchAccurate)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get_selectedGroupType)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_KBoolean (*get_useNewVersion)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    const char* (*get_wardCode)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    const char* (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_KBoolean (*component10)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_kref_kotlin_collections_List (*component11)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_KBoolean (*component12)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_KBoolean (*component13)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientIdentifierDisplayMode (*component14)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput (*component15)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_kref_kotlin_collections_List (*component16)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskLevelDisplayConfigFact (*component17)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_kref_kotlin_collections_List (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_kref_kotlin_collections_List (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_KBoolean (*component4)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*component5)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_KBoolean (*component6)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    const char* (*component7)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_KBoolean (*component8)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_KBoolean (*component9)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz, const char* wardCode, libshared_kref_kotlin_collections_List patients, libshared_kref_kotlin_collections_List groupConfigs, libshared_KBoolean groupConfigsProvided, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType selectedGroupType, libshared_KBoolean isCareScopeSelected, const char* careScopeName, libshared_KBoolean isRefreshing, libshared_KBoolean filterUnauthorizedPatients, libshared_KBoolean excludeNeonateFromAdultGroups, libshared_kref_kotlin_collections_List externalGroups, libshared_KBoolean searchAccurate, libshared_KBoolean useNewVersion, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientIdentifierDisplayMode patientIdentifierDisplayMode, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput cardRenderConfigFacts, libshared_kref_kotlin_collections_List riskTagDictionaryFacts, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientRiskLevelDisplayConfigFact riskLevelDisplayConfigFact);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientListInput thiz);
                  } PatientListInput;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput (*PatientCardRenderConfigFactsInput)(libshared_kref_kotlin_Int legacyBedStyle, libshared_kref_kotlin_collections_List selectedCodes, const char* nurseLevelSpecialColor, const char* nurseLevelFirstColor, const char* nurseLevelSecondColor, const char* nurseLevelThirdColor, const char* dangerLevelColor, const char* severeLevelColor);
                    const char* (*get_dangerLevelColor)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput thiz);
                    libshared_kref_kotlin_Int (*get_legacyBedStyle)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput thiz);
                    const char* (*get_nurseLevelFirstColor)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput thiz);
                    const char* (*get_nurseLevelSecondColor)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput thiz);
                    const char* (*get_nurseLevelSpecialColor)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput thiz);
                    const char* (*get_nurseLevelThirdColor)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput thiz);
                    libshared_kref_kotlin_collections_List (*get_selectedCodes)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput thiz);
                    const char* (*get_severeLevelColor)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput thiz);
                    libshared_kref_kotlin_Int (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput thiz);
                    libshared_kref_kotlin_collections_List (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput thiz);
                    const char* (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput thiz);
                    const char* (*component4)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput thiz);
                    const char* (*component5)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput thiz);
                    const char* (*component6)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput thiz);
                    const char* (*component7)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput thiz);
                    const char* (*component8)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput thiz, libshared_kref_kotlin_Int legacyBedStyle, libshared_kref_kotlin_collections_List selectedCodes, const char* nurseLevelSpecialColor, const char* nurseLevelFirstColor, const char* nurseLevelSecondColor, const char* nurseLevelThirdColor, const char* dangerLevelColor, const char* severeLevelColor);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput thiz);
                  } PatientCardRenderConfigFactsInput;
                  libshared_KInt (*com_lachesis_fusion_shared_patient_domain_PatientCardInput$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_domain_PatientCardInputNormalizer$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_domain_PatientCardLegacyMappings$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_domain_PatientExternalGroup$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_domain_PatientGroupConfig$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_domain_PatientListInput$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_domain_PatientRiskEvaluationFact$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_domain_PatientRiskLevelDisplayConfigFact$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_domain_PatientRiskTagDictionaryFact$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_domain_PatientSummary$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_domain_PatientCardInput$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_domain_PatientCardInputFacts$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_domain_PatientCardInputNormalizer$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_domain_PatientCardLegacyMappings$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_domain_PatientCardRenderConfigFactsInput$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_domain_PatientExternalGroup$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_domain_PatientGroupConfig$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_domain_PatientListInput$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_domain_PatientRiskEvaluationFact$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_domain_PatientRiskLevelDisplayConfigFact$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_domain_PatientRiskTagDictionaryFact$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_domain_PatientSummary$stableprop_getter_)();
                } domain;
                struct {
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPresentation (*_instance)();
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardBasicInfoUiState (*basicInfo)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPresentation thiz, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput input, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions options);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState (*card)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPresentation thiz, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput input, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions options, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHostPresentationConfig hostConfig);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardClinicalInfoUiState (*clinicalInfo)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPresentation thiz, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput input, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions options, const char* dietTitleFormat);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardCriticalFlagUiState (*criticalFlag)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPresentation thiz, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput input, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions options);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardDoctorTagsUiState (*doctorTags)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPresentation thiz, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput input, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions options, const char* doctorPrefix, const char* hospitalDoctorPrefix);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardGenderUiState (*gender)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPresentation thiz, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput input);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHeaderUiState (*header)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPresentation thiz, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput input, libshared_KBoolean normalStyle);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardMewsScoreUiState (*mewsScore)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPresentation thiz, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput input, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions options);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatusUiState (*orderStatus)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPresentation thiz, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput input);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathNurseLevelUiState (*pathAndNurseLevel)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPresentation thiz, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput input, const char* nurseLevelText, libshared_KBoolean nurseLevelVisible);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagsUiState (*riskTags)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPresentation thiz, libshared_kref_kotlin_collections_List items, libshared_kref_kotlin_collections_List dictionary, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskLevelDisplayConfig levelConfig);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardSpecialMarksUiState (*specialMarks)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPresentation thiz, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardInput input);
                  } PatientCardPresentation;
                  struct {
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathMarker (*get)(); /* enum entry for Hidden. */
                    } Hidden;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathMarker (*get)(); /* enum entry for NeedFinish. */
                    } NeedFinish;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathMarker (*get)(); /* enum entry for NoNeedFinish. */
                    } NoNeedFinish;
                    libshared_KType* (*_type)(void);
                  } PatientCardPathMarker;
                  struct {
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatus (*get)(); /* enum entry for None. */
                    } None;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatus (*get)(); /* enum entry for Stat. */
                    } Stat;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatus (*get)(); /* enum entry for NewOrder. */
                    } NewOrder;
                    libshared_KType* (*_type)(void);
                  } PatientCardOrderStatus;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts (*PatientCardRenderConfigFacts)(libshared_kref_kotlin_Int legacyBedStyle, libshared_kref_kotlin_collections_List selectedCodes, const char* nurseLevelSpecialColor, const char* nurseLevelFirstColor, const char* nurseLevelSecondColor, const char* nurseLevelThirdColor, const char* dangerLevelColor, const char* severeLevelColor);
                    const char* (*get_dangerLevelColor)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts thiz);
                    libshared_kref_kotlin_Int (*get_legacyBedStyle)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts thiz);
                    const char* (*get_nurseLevelFirstColor)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts thiz);
                    const char* (*get_nurseLevelSecondColor)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts thiz);
                    const char* (*get_nurseLevelSpecialColor)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts thiz);
                    const char* (*get_nurseLevelThirdColor)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts thiz);
                    libshared_kref_kotlin_collections_List (*get_selectedCodes)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts thiz);
                    const char* (*get_severeLevelColor)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts thiz);
                    libshared_kref_kotlin_Int (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts thiz);
                    libshared_kref_kotlin_collections_List (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts thiz);
                    const char* (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts thiz);
                    const char* (*component4)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts thiz);
                    const char* (*component5)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts thiz);
                    const char* (*component6)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts thiz);
                    const char* (*component7)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts thiz);
                    const char* (*component8)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts thiz, libshared_kref_kotlin_Int legacyBedStyle, libshared_kref_kotlin_collections_List selectedCodes, const char* nurseLevelSpecialColor, const char* nurseLevelFirstColor, const char* nurseLevelSecondColor, const char* nurseLevelThirdColor, const char* dangerLevelColor, const char* severeLevelColor);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts thiz);
                  } PatientCardRenderConfigFacts;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig (*PatientCardRenderConfig)(libshared_KInt legacyBedStyle, libshared_KBoolean normalStyle, libshared_KBoolean showEvaluateList, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions cardOptions, const char* nurseLevelSpecialColor, const char* nurseLevelFirstColor, const char* nurseLevelSecondColor, const char* nurseLevelThirdColor, const char* dangerLevelColor, const char* severeLevelColor);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions (*get_cardOptions)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig thiz);
                    const char* (*get_dangerLevelColor)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig thiz);
                    libshared_KInt (*get_legacyBedStyle)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig thiz);
                    libshared_KBoolean (*get_normalStyle)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig thiz);
                    const char* (*get_nurseLevelFirstColor)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig thiz);
                    const char* (*get_nurseLevelSecondColor)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig thiz);
                    const char* (*get_nurseLevelSpecialColor)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig thiz);
                    const char* (*get_nurseLevelThirdColor)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig thiz);
                    const char* (*get_severeLevelColor)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig thiz);
                    libshared_KBoolean (*get_showEvaluateList)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig thiz);
                    libshared_KInt (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig thiz);
                    const char* (*component10)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig thiz);
                    libshared_KBoolean (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig thiz);
                    libshared_KBoolean (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions (*component4)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig thiz);
                    const char* (*component5)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig thiz);
                    const char* (*component6)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig thiz);
                    const char* (*component7)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig thiz);
                    const char* (*component8)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig thiz);
                    const char* (*component9)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig thiz, libshared_KInt legacyBedStyle, libshared_KBoolean normalStyle, libshared_KBoolean showEvaluateList, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions cardOptions, const char* nurseLevelSpecialColor, const char* nurseLevelFirstColor, const char* nurseLevelSecondColor, const char* nurseLevelThirdColor, const char* dangerLevelColor, const char* severeLevelColor);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig thiz);
                  } PatientCardRenderConfig;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigPlanner (*_instance)();
                    const char* (*get_CODE_ADMISSION_DATE)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigPlanner thiz);
                    const char* (*get_CODE_AGE)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigPlanner thiz);
                    const char* (*get_CODE_ALLERGY)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigPlanner thiz);
                    const char* (*get_CODE_BIRTH_DATE)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigPlanner thiz);
                    const char* (*get_CODE_DANGER_LEVEL)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigPlanner thiz);
                    const char* (*get_CODE_DIET)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigPlanner thiz);
                    const char* (*get_CODE_DOCTOR_NAME)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigPlanner thiz);
                    const char* (*get_CODE_EVALUATE_LIST)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigPlanner thiz);
                    const char* (*get_CODE_HOSPITAL_DOCTOR_NAME)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigPlanner thiz);
                    const char* (*get_CODE_IN_HOSPITAL_DAYS)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigPlanner thiz);
                    const char* (*get_CODE_MEWS_SCORE)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigPlanner thiz);
                    libshared_KInt (*get_LEGACY_STYLE_DISPLAY_CODE_TOP)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigPlanner thiz);
                    libshared_KInt (*get_LEGACY_STYLE_DISPLAY_CODE_TOP_MEWS_BOTTOM)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigPlanner thiz);
                    libshared_KInt (*get_LEGACY_STYLE_NORMAL)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigPlanner thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig (*config)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigPlanner thiz, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts facts);
                  } PatientCardRenderConfigPlanner;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions (*PatientCardRenderOptions)(libshared_KBoolean topMewsBottomLayout, libshared_KBoolean showDangerLevel, libshared_KBoolean showMewsScore, libshared_KBoolean showInHospitalDays, libshared_KBoolean showAdmissionDate, libshared_KBoolean showAge, libshared_KBoolean showBirthDate, libshared_KBoolean showDiet, libshared_KBoolean showAllergy, libshared_KBoolean showDoctorName, libshared_KBoolean showHospitalDoctorName);
                    libshared_KBoolean (*get_showAdmissionDate)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions thiz);
                    libshared_KBoolean (*get_showAge)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions thiz);
                    libshared_KBoolean (*get_showAllergy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions thiz);
                    libshared_KBoolean (*get_showBirthDate)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions thiz);
                    libshared_KBoolean (*get_showDangerLevel)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions thiz);
                    libshared_KBoolean (*get_showDiet)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions thiz);
                    libshared_KBoolean (*get_showDoctorName)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions thiz);
                    libshared_KBoolean (*get_showHospitalDoctorName)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions thiz);
                    libshared_KBoolean (*get_showInHospitalDays)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions thiz);
                    libshared_KBoolean (*get_showMewsScore)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions thiz);
                    libshared_KBoolean (*get_topMewsBottomLayout)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions thiz);
                    libshared_KBoolean (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions thiz);
                    libshared_KBoolean (*component10)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions thiz);
                    libshared_KBoolean (*component11)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions thiz);
                    libshared_KBoolean (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions thiz);
                    libshared_KBoolean (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions thiz);
                    libshared_KBoolean (*component4)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions thiz);
                    libshared_KBoolean (*component5)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions thiz);
                    libshared_KBoolean (*component6)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions thiz);
                    libshared_KBoolean (*component7)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions thiz);
                    libshared_KBoolean (*component8)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions thiz);
                    libshared_KBoolean (*component9)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions thiz, libshared_KBoolean topMewsBottomLayout, libshared_KBoolean showDangerLevel, libshared_KBoolean showMewsScore, libshared_KBoolean showInHospitalDays, libshared_KBoolean showAdmissionDate, libshared_KBoolean showAge, libshared_KBoolean showBirthDate, libshared_KBoolean showDiet, libshared_KBoolean showAllergy, libshared_KBoolean showDoctorName, libshared_KBoolean showHospitalDoctorName);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions thiz);
                  } PatientCardRenderOptions;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHostPresentationConfig (*PatientCardHostPresentationConfig)(libshared_KBoolean normalStyle, const char* dietTitleFormat, const char* nurseLevelText, libshared_KBoolean nurseLevelVisible, const char* doctorPrefix, const char* hospitalDoctorPrefix);
                    const char* (*get_dietTitleFormat)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHostPresentationConfig thiz);
                    const char* (*get_doctorPrefix)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHostPresentationConfig thiz);
                    const char* (*get_hospitalDoctorPrefix)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHostPresentationConfig thiz);
                    libshared_KBoolean (*get_normalStyle)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHostPresentationConfig thiz);
                    const char* (*get_nurseLevelText)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHostPresentationConfig thiz);
                    libshared_KBoolean (*get_nurseLevelVisible)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHostPresentationConfig thiz);
                    libshared_KBoolean (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHostPresentationConfig thiz);
                    const char* (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHostPresentationConfig thiz);
                    const char* (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHostPresentationConfig thiz);
                    libshared_KBoolean (*component4)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHostPresentationConfig thiz);
                    const char* (*component5)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHostPresentationConfig thiz);
                    const char* (*component6)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHostPresentationConfig thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHostPresentationConfig (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHostPresentationConfig thiz, libshared_KBoolean normalStyle, const char* dietTitleFormat, const char* nurseLevelText, libshared_KBoolean nurseLevelVisible, const char* doctorPrefix, const char* hospitalDoctorPrefix);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHostPresentationConfig thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHostPresentationConfig thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHostPresentationConfig thiz);
                  } PatientCardHostPresentationConfig;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHeaderUiState (*PatientCardHeaderUiState)(libshared_KBoolean isTopDisplayCodeVisible, libshared_KBoolean isInlineDisplayCodeVisible, const char* displayCode, const char* bedTitle);
                    const char* (*get_bedTitle)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHeaderUiState thiz);
                    const char* (*get_displayCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHeaderUiState thiz);
                    libshared_KBoolean (*get_isInlineDisplayCodeVisible)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHeaderUiState thiz);
                    libshared_KBoolean (*get_isTopDisplayCodeVisible)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHeaderUiState thiz);
                    libshared_KBoolean (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHeaderUiState thiz);
                    libshared_KBoolean (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHeaderUiState thiz);
                    const char* (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHeaderUiState thiz);
                    const char* (*component4)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHeaderUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHeaderUiState (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHeaderUiState thiz, libshared_KBoolean isTopDisplayCodeVisible, libshared_KBoolean isInlineDisplayCodeVisible, const char* displayCode, const char* bedTitle);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHeaderUiState thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHeaderUiState thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHeaderUiState thiz);
                  } PatientCardHeaderUiState;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardBasicInfoUiState (*PatientCardBasicInfoUiState)(const char* text, libshared_KBoolean isVisible);
                    libshared_KBoolean (*get_isVisible)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardBasicInfoUiState thiz);
                    const char* (*get_text)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardBasicInfoUiState thiz);
                    const char* (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardBasicInfoUiState thiz);
                    libshared_KBoolean (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardBasicInfoUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardBasicInfoUiState (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardBasicInfoUiState thiz, const char* text, libshared_KBoolean isVisible);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardBasicInfoUiState thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardBasicInfoUiState thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardBasicInfoUiState thiz);
                  } PatientCardBasicInfoUiState;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardClinicalInfoUiState (*PatientCardClinicalInfoUiState)(libshared_KBoolean isDietVisible, const char* dietText, libshared_KBoolean isAllergyVisible, const char* allergyText, const char* diagnosisText);
                    const char* (*get_allergyText)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardClinicalInfoUiState thiz);
                    const char* (*get_diagnosisText)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardClinicalInfoUiState thiz);
                    const char* (*get_dietText)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardClinicalInfoUiState thiz);
                    libshared_KBoolean (*get_isAllergyVisible)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardClinicalInfoUiState thiz);
                    libshared_KBoolean (*get_isDietVisible)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardClinicalInfoUiState thiz);
                    libshared_KBoolean (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardClinicalInfoUiState thiz);
                    const char* (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardClinicalInfoUiState thiz);
                    libshared_KBoolean (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardClinicalInfoUiState thiz);
                    const char* (*component4)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardClinicalInfoUiState thiz);
                    const char* (*component5)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardClinicalInfoUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardClinicalInfoUiState (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardClinicalInfoUiState thiz, libshared_KBoolean isDietVisible, const char* dietText, libshared_KBoolean isAllergyVisible, const char* allergyText, const char* diagnosisText);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardClinicalInfoUiState thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardClinicalInfoUiState thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardClinicalInfoUiState thiz);
                  } PatientCardClinicalInfoUiState;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathNurseLevelUiState (*PatientCardPathNurseLevelUiState)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathMarker pathMarker, const char* nurseLevelText, libshared_KBoolean isNurseLevelVisible);
                    libshared_KBoolean (*get_isNurseLevelVisible)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathNurseLevelUiState thiz);
                    const char* (*get_nurseLevelText)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathNurseLevelUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathMarker (*get_pathMarker)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathNurseLevelUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathMarker (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathNurseLevelUiState thiz);
                    const char* (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathNurseLevelUiState thiz);
                    libshared_KBoolean (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathNurseLevelUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathNurseLevelUiState (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathNurseLevelUiState thiz, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathMarker pathMarker, const char* nurseLevelText, libshared_KBoolean isNurseLevelVisible);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathNurseLevelUiState thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathNurseLevelUiState thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathNurseLevelUiState thiz);
                  } PatientCardPathNurseLevelUiState;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardDoctorTagsUiState (*PatientCardDoctorTagsUiState)(libshared_KBoolean isDoctorVisible, const char* doctorText, libshared_KBoolean isHospitalDoctorVisible, const char* hospitalDoctorText);
                    const char* (*get_doctorText)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardDoctorTagsUiState thiz);
                    const char* (*get_hospitalDoctorText)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardDoctorTagsUiState thiz);
                    libshared_KBoolean (*get_isDoctorVisible)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardDoctorTagsUiState thiz);
                    libshared_KBoolean (*get_isHospitalDoctorVisible)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardDoctorTagsUiState thiz);
                    libshared_KBoolean (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardDoctorTagsUiState thiz);
                    const char* (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardDoctorTagsUiState thiz);
                    libshared_KBoolean (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardDoctorTagsUiState thiz);
                    const char* (*component4)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardDoctorTagsUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardDoctorTagsUiState (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardDoctorTagsUiState thiz, libshared_KBoolean isDoctorVisible, const char* doctorText, libshared_KBoolean isHospitalDoctorVisible, const char* hospitalDoctorText);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardDoctorTagsUiState thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardDoctorTagsUiState thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardDoctorTagsUiState thiz);
                  } PatientCardDoctorTagsUiState;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardSpecialMarksUiState (*PatientCardSpecialMarksUiState)(libshared_KBoolean isSurgeryVisible, const char* surgeryText, libshared_KBoolean isInfectionVisible, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardPregnancyMark pregnancyMark);
                    libshared_KBoolean (*get_isInfectionVisible)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardSpecialMarksUiState thiz);
                    libshared_KBoolean (*get_isSurgeryVisible)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardSpecialMarksUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardPregnancyMark (*get_pregnancyMark)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardSpecialMarksUiState thiz);
                    const char* (*get_surgeryText)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardSpecialMarksUiState thiz);
                    libshared_KBoolean (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardSpecialMarksUiState thiz);
                    const char* (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardSpecialMarksUiState thiz);
                    libshared_KBoolean (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardSpecialMarksUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardPregnancyMark (*component4)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardSpecialMarksUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardSpecialMarksUiState (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardSpecialMarksUiState thiz, libshared_KBoolean isSurgeryVisible, const char* surgeryText, libshared_KBoolean isInfectionVisible, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardPregnancyMark pregnancyMark);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardSpecialMarksUiState thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardSpecialMarksUiState thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardSpecialMarksUiState thiz);
                  } PatientCardSpecialMarksUiState;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatusUiState (*PatientCardOrderStatusUiState)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatus status, libshared_KBoolean isVisible);
                    libshared_KBoolean (*get_isVisible)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatusUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatus (*get_status)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatusUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatus (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatusUiState thiz);
                    libshared_KBoolean (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatusUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatusUiState (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatusUiState thiz, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatus status, libshared_KBoolean isVisible);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatusUiState thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatusUiState thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatusUiState thiz);
                  } PatientCardOrderStatusUiState;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardMewsScoreUiState (*PatientCardMewsScoreUiState)(libshared_KBoolean isTopMewsBottomLayout, libshared_KBoolean isConfiguredVisible, libshared_KBoolean isVisible, const char* scoreText);
                    libshared_KBoolean (*get_isConfiguredVisible)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardMewsScoreUiState thiz);
                    libshared_KBoolean (*get_isTopMewsBottomLayout)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardMewsScoreUiState thiz);
                    libshared_KBoolean (*get_isVisible)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardMewsScoreUiState thiz);
                    const char* (*get_scoreText)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardMewsScoreUiState thiz);
                    libshared_KBoolean (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardMewsScoreUiState thiz);
                    libshared_KBoolean (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardMewsScoreUiState thiz);
                    libshared_KBoolean (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardMewsScoreUiState thiz);
                    const char* (*component4)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardMewsScoreUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardMewsScoreUiState (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardMewsScoreUiState thiz, libshared_KBoolean isTopMewsBottomLayout, libshared_KBoolean isConfiguredVisible, libshared_KBoolean isVisible, const char* scoreText);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardMewsScoreUiState thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardMewsScoreUiState thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardMewsScoreUiState thiz);
                  } PatientCardMewsScoreUiState;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardCriticalFlagUiState (*PatientCardCriticalFlagUiState)(libshared_KBoolean isVisible, const char* text, libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel riskLevel);
                    libshared_KBoolean (*get_isVisible)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardCriticalFlagUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel (*get_riskLevel)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardCriticalFlagUiState thiz);
                    const char* (*get_text)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardCriticalFlagUiState thiz);
                    libshared_KBoolean (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardCriticalFlagUiState thiz);
                    const char* (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardCriticalFlagUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardCriticalFlagUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardCriticalFlagUiState (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardCriticalFlagUiState thiz, libshared_KBoolean isVisible, const char* text, libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel riskLevel);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardCriticalFlagUiState thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardCriticalFlagUiState thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardCriticalFlagUiState thiz);
                  } PatientCardCriticalFlagUiState;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardGenderUiState (*PatientCardGenderUiState)(const char* text);
                    const char* (*get_text)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardGenderUiState thiz);
                    const char* (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardGenderUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardGenderUiState (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardGenderUiState thiz, const char* text);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardGenderUiState thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardGenderUiState thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardGenderUiState thiz);
                  } PatientCardGenderUiState;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagInput (*PatientCardRiskTagInput)(const char* nature, const char* realName, const char* riskLevel, libshared_KBoolean isVte);
                    libshared_KBoolean (*get_isVte)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagInput thiz);
                    const char* (*get_nature)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagInput thiz);
                    const char* (*get_realName)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagInput thiz);
                    const char* (*get_riskLevel)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagInput thiz);
                    const char* (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagInput thiz);
                    const char* (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagInput thiz);
                    const char* (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagInput thiz);
                    libshared_KBoolean (*component4)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagInput thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagInput (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagInput thiz, const char* nature, const char* realName, const char* riskLevel, libshared_KBoolean isVte);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagInput thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagInput thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagInput thiz);
                  } PatientCardRiskTagInput;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagDictionaryItem (*PatientCardRiskTagDictionaryItem)(const char* code, const char* abbreviation);
                    const char* (*get_abbreviation)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagDictionaryItem thiz);
                    const char* (*get_code)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagDictionaryItem thiz);
                    const char* (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagDictionaryItem thiz);
                    const char* (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagDictionaryItem thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagDictionaryItem (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagDictionaryItem thiz, const char* code, const char* abbreviation);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagDictionaryItem thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagDictionaryItem thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagDictionaryItem thiz);
                  } PatientCardRiskTagDictionaryItem;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskLevelDisplayConfig (*PatientCardRiskLevelDisplayConfig)(libshared_kref_kotlin_Boolean level1, libshared_kref_kotlin_Boolean level2, libshared_kref_kotlin_Boolean level3, libshared_kref_kotlin_Boolean level4, libshared_kref_kotlin_Boolean level5);
                    libshared_kref_kotlin_Boolean (*get_level1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskLevelDisplayConfig thiz);
                    libshared_kref_kotlin_Boolean (*get_level2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskLevelDisplayConfig thiz);
                    libshared_kref_kotlin_Boolean (*get_level3)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskLevelDisplayConfig thiz);
                    libshared_kref_kotlin_Boolean (*get_level4)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskLevelDisplayConfig thiz);
                    libshared_kref_kotlin_Boolean (*get_level5)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskLevelDisplayConfig thiz);
                    libshared_kref_kotlin_Boolean (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskLevelDisplayConfig thiz);
                    libshared_kref_kotlin_Boolean (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskLevelDisplayConfig thiz);
                    libshared_kref_kotlin_Boolean (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskLevelDisplayConfig thiz);
                    libshared_kref_kotlin_Boolean (*component4)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskLevelDisplayConfig thiz);
                    libshared_kref_kotlin_Boolean (*component5)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskLevelDisplayConfig thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskLevelDisplayConfig (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskLevelDisplayConfig thiz, libshared_kref_kotlin_Boolean level1, libshared_kref_kotlin_Boolean level2, libshared_kref_kotlin_Boolean level3, libshared_kref_kotlin_Boolean level4, libshared_kref_kotlin_Boolean level5);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskLevelDisplayConfig thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskLevelDisplayConfig thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskLevelDisplayConfig thiz);
                  } PatientCardRiskLevelDisplayConfig;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagUiState (*PatientCardRiskTagUiState)(const char* displayName, libshared_KBoolean isVisible, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle style);
                    const char* (*get_displayName)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagUiState thiz);
                    libshared_KBoolean (*get_isVisible)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle (*get_style)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagUiState thiz);
                    const char* (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagUiState thiz);
                    libshared_KBoolean (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagUiState (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagUiState thiz, const char* displayName, libshared_KBoolean isVisible, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle style);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagUiState thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagUiState thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagUiState thiz);
                  } PatientCardRiskTagUiState;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagsUiState (*PatientCardRiskTagsUiState)(libshared_kref_kotlin_collections_List items, libshared_KInt spanCount);
                    libshared_kref_kotlin_collections_List (*get_items)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagsUiState thiz);
                    libshared_KInt (*get_spanCount)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagsUiState thiz);
                    libshared_kref_kotlin_collections_List (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagsUiState thiz);
                    libshared_KInt (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagsUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagsUiState (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagsUiState thiz, libshared_kref_kotlin_collections_List items, libshared_KInt spanCount);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagsUiState thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagsUiState thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagsUiState thiz);
                  } PatientCardRiskTagsUiState;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState (*PatientCardUiState)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHeaderUiState header, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardBasicInfoUiState basicInfo, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardGenderUiState gender, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardClinicalInfoUiState clinicalInfo, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathNurseLevelUiState pathNurseLevel, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardDoctorTagsUiState doctorTags, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardSpecialMarksUiState specialMarks, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatusUiState orderStatus, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardMewsScoreUiState mewsScore, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardCriticalFlagUiState criticalFlag);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardBasicInfoUiState (*get_basicInfo)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardClinicalInfoUiState (*get_clinicalInfo)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardCriticalFlagUiState (*get_criticalFlag)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardDoctorTagsUiState (*get_doctorTags)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardGenderUiState (*get_gender)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHeaderUiState (*get_header)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardMewsScoreUiState (*get_mewsScore)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatusUiState (*get_orderStatus)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathNurseLevelUiState (*get_pathNurseLevel)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardSpecialMarksUiState (*get_specialMarks)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHeaderUiState (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardCriticalFlagUiState (*component10)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardBasicInfoUiState (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardGenderUiState (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardClinicalInfoUiState (*component4)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathNurseLevelUiState (*component5)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardDoctorTagsUiState (*component6)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardSpecialMarksUiState (*component7)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatusUiState (*component8)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardMewsScoreUiState (*component9)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState thiz, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHeaderUiState header, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardBasicInfoUiState basicInfo, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardGenderUiState gender, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardClinicalInfoUiState clinicalInfo, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathNurseLevelUiState pathNurseLevel, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardDoctorTagsUiState doctorTags, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardSpecialMarksUiState specialMarks, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatusUiState orderStatus, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardMewsScoreUiState mewsScore, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardCriticalFlagUiState criticalFlag);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState thiz);
                  } PatientCardUiState;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientGroupState (*PatientGroupState)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType type, const char* name, libshared_KInt count, libshared_KBoolean isSelected);
                    libshared_KInt (*get_count)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientGroupState thiz);
                    libshared_KBoolean (*get_isSelected)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientGroupState thiz);
                    const char* (*get_name)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientGroupState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get_type)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientGroupState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientGroupState thiz);
                    const char* (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientGroupState thiz);
                    libshared_KInt (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientGroupState thiz);
                    libshared_KBoolean (*component4)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientGroupState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientGroupState (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientGroupState thiz, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType type, const char* name, libshared_KInt count, libshared_KBoolean isSelected);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientGroupState thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientGroupState thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientGroupState thiz);
                  } PatientGroupState;
                  struct {
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle (*get)(); /* enum entry for Default. */
                    } Default;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle (*get)(); /* enum entry for LevelOne. */
                    } LevelOne;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle (*get)(); /* enum entry for LevelTwo. */
                    } LevelTwo;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle (*get)(); /* enum entry for LevelThree. */
                    } LevelThree;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle (*get)(); /* enum entry for LevelFour. */
                    } LevelFour;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle (*get)(); /* enum entry for LevelFive. */
                    } LevelFive;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle (*get)(); /* enum entry for Isolation. */
                    } Isolation;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle (*get)(); /* enum entry for VteLevelOne. */
                    } VteLevelOne;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle (*get)(); /* enum entry for VteLevelTwo. */
                    } VteLevelTwo;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle (*get)(); /* enum entry for VteLevelThree. */
                    } VteLevelThree;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle (*get)(); /* enum entry for VteTodo. */
                    } VteTodo;
                    libshared_KType* (*_type)(void);
                  } PatientRiskTagPresentationStyle;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationState (*PatientRiskTagPresentationState)(const char* displayName, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle style);
                    const char* (*get_displayName)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle (*get_style)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationState thiz);
                    const char* (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationState (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationState thiz, const char* displayName, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationStyle style);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationState thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationState thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationState thiz);
                  } PatientRiskTagPresentationState;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState (*PatientListItemState)(const char* patientId, const char* encounterId, const char* bedNo, const char* name, const char* displayCode, const char* gender, const char* age, const char* admissionDate, libshared_KInt inHospitalDay, const char* birthDate, const char* diagnosis, const char* diet, const char* allergen, const char* doctorName, const char* hospitalDoctorName, const char* alertLevel, const char* totalScore, const char* pathStatus, const char* pathPendingNodeStatus, libshared_KBoolean pathSpecialThrombolysis, const char* surgeryMark, const char* infectionDisease, const char* inDiagnosisText, libshared_kref_com_lachesis_fusion_shared_patient_domain_NursingLevel nursingLevel, libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel riskLevel, libshared_KBoolean isBaby, libshared_KBoolean isCared, libshared_KBoolean isAuthorized, libshared_kref_kotlin_collections_Set flags, libshared_kref_kotlin_collections_Set riskNatures, libshared_kref_kotlin_collections_List riskTagLabels, libshared_kref_kotlin_collections_List riskTags, libshared_KInt riskTagSpanCount, libshared_KBoolean nurseLevelBadgeVisible, const char* nurseLevelBadgeColor, const char* criticalBadgeColor);
                    const char* (*get_admissionDate)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*get_age)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*get_alertLevel)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*get_allergen)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*get_bedNo)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*get_birthDate)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*get_criticalBadgeColor)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*get_diagnosis)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*get_diet)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*get_displayCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*get_doctorName)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*get_encounterId)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    libshared_kref_kotlin_collections_Set (*get_flags)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*get_gender)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*get_hospitalDoctorName)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*get_inDiagnosisText)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    libshared_KInt (*get_inHospitalDay)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*get_infectionDisease)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    libshared_KBoolean (*get_isAuthorized)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    libshared_KBoolean (*get_isBaby)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    libshared_KBoolean (*get_isCared)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*get_name)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*get_nurseLevelBadgeColor)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    libshared_KBoolean (*get_nurseLevelBadgeVisible)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_NursingLevel (*get_nursingLevel)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*get_pathPendingNodeStatus)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    libshared_KBoolean (*get_pathSpecialThrombolysis)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*get_pathStatus)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*get_patientId)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel (*get_riskLevel)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    libshared_kref_kotlin_collections_Set (*get_riskNatures)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    libshared_kref_kotlin_collections_List (*get_riskTagLabels)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    libshared_KInt (*get_riskTagSpanCount)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    libshared_kref_kotlin_collections_List (*get_riskTags)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*get_surgeryMark)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*get_totalScore)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*component10)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*component11)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*component12)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*component13)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*component14)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*component15)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*component16)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*component17)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*component18)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*component19)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    libshared_KBoolean (*component20)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*component21)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*component22)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*component23)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_NursingLevel (*component24)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel (*component25)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    libshared_KBoolean (*component26)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    libshared_KBoolean (*component27)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    libshared_KBoolean (*component28)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    libshared_kref_kotlin_collections_Set (*component29)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    libshared_kref_kotlin_collections_Set (*component30)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    libshared_kref_kotlin_collections_List (*component31)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    libshared_kref_kotlin_collections_List (*component32)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    libshared_KInt (*component33)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    libshared_KBoolean (*component34)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*component35)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*component36)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*component4)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*component5)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*component6)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*component7)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*component8)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    libshared_KInt (*component9)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz, const char* patientId, const char* encounterId, const char* bedNo, const char* name, const char* displayCode, const char* gender, const char* age, const char* admissionDate, libshared_KInt inHospitalDay, const char* birthDate, const char* diagnosis, const char* diet, const char* allergen, const char* doctorName, const char* hospitalDoctorName, const char* alertLevel, const char* totalScore, const char* pathStatus, const char* pathPendingNodeStatus, libshared_KBoolean pathSpecialThrombolysis, const char* surgeryMark, const char* infectionDisease, const char* inDiagnosisText, libshared_kref_com_lachesis_fusion_shared_patient_domain_NursingLevel nursingLevel, libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel riskLevel, libshared_KBoolean isBaby, libshared_KBoolean isCared, libshared_KBoolean isAuthorized, libshared_kref_kotlin_collections_Set flags, libshared_kref_kotlin_collections_Set riskNatures, libshared_kref_kotlin_collections_List riskTagLabels, libshared_kref_kotlin_collections_List riskTags, libshared_KInt riskTagSpanCount, libshared_KBoolean nurseLevelBadgeVisible, const char* nurseLevelBadgeColor, const char* criticalBadgeColor);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                  } PatientListItemState;
                  struct {
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchMatchMode (*get)(); /* enum entry for Contains. */
                    } Contains;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchMatchMode (*get)(); /* enum entry for Exact. */
                    } Exact;
                    libshared_KType* (*_type)(void);
                  } PatientSearchMatchMode;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState (*PatientSearchItemState)(const char* stableKey, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState patient, const char* titleText, const char* patientInfoText, const char* patientIdentifierText, const char* diagnosisText, libshared_KBoolean pathIconVisible, libshared_KBoolean pathIconNoNeedFinish, const char* criticalText, const char* mewsAlertLevel, const char* mewsScoreText, const char* nurseLevelText, libshared_kref_kotlin_collections_List riskTags);
                    const char* (*get_criticalText)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                    const char* (*get_diagnosisText)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                    const char* (*get_mewsAlertLevel)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                    const char* (*get_mewsScoreText)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                    const char* (*get_nurseLevelText)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                    libshared_KBoolean (*get_pathIconNoNeedFinish)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                    libshared_KBoolean (*get_pathIconVisible)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState (*get_patient)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                    const char* (*get_patientIdentifierText)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                    const char* (*get_patientInfoText)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                    libshared_kref_kotlin_collections_List (*get_riskTags)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                    const char* (*get_stableKey)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                    const char* (*get_titleText)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                    const char* (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                    const char* (*component10)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                    const char* (*component11)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                    const char* (*component12)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                    libshared_kref_kotlin_collections_List (*component13)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                    const char* (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                    const char* (*component4)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                    const char* (*component5)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                    const char* (*component6)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                    libshared_KBoolean (*component7)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                    libshared_KBoolean (*component8)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                    const char* (*component9)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz, const char* stableKey, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState patient, const char* titleText, const char* patientInfoText, const char* patientIdentifierText, const char* diagnosisText, libshared_KBoolean pathIconVisible, libshared_KBoolean pathIconNoNeedFinish, const char* criticalText, const char* mewsAlertLevel, const char* mewsScoreText, const char* nurseLevelText, libshared_kref_kotlin_collections_List riskTags);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState thiz);
                  } PatientSearchItemState;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListSearchUiState (*PatientListSearchUiState)(const char* keyword, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchMatchMode matchMode, libshared_KInt sourceCount, libshared_kref_kotlin_collections_List items, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig cardRenderConfig, const char* searchPlaceholder, libshared_KBoolean isEmpty);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig (*get_cardRenderConfig)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListSearchUiState thiz);
                    libshared_KBoolean (*get_isEmpty)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListSearchUiState thiz);
                    libshared_kref_kotlin_collections_List (*get_items)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListSearchUiState thiz);
                    const char* (*get_keyword)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListSearchUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchMatchMode (*get_matchMode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListSearchUiState thiz);
                    const char* (*get_searchPlaceholder)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListSearchUiState thiz);
                    libshared_KInt (*get_sourceCount)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListSearchUiState thiz);
                    const char* (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListSearchUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchMatchMode (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListSearchUiState thiz);
                    libshared_KInt (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListSearchUiState thiz);
                    libshared_kref_kotlin_collections_List (*component4)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListSearchUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig (*component5)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListSearchUiState thiz);
                    const char* (*component6)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListSearchUiState thiz);
                    libshared_KBoolean (*component7)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListSearchUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListSearchUiState (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListSearchUiState thiz, const char* keyword, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientSearchMatchMode matchMode, libshared_KInt sourceCount, libshared_kref_kotlin_collections_List items, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig cardRenderConfig, const char* searchPlaceholder, libshared_KBoolean isEmpty);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListSearchUiState thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListSearchUiState thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListSearchUiState thiz);
                  } PatientListSearchUiState;
                  struct {
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListContentMode (*get)(); /* enum entry for Patient. */
                    } Patient;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListContentMode (*get)(); /* enum entry for Surgery. */
                    } Surgery;
                    libshared_KType* (*_type)(void);
                  } PatientListContentMode;
                  struct {
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadPhase (*get)(); /* enum entry for Loading. */
                    } Loading;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadPhase (*get)(); /* enum entry for Ready. */
                    } Ready;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadPhase (*get)(); /* enum entry for Error. */
                    } Error;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadPhase (*get)(); /* enum entry for MissingConfiguration. */
                    } MissingConfiguration;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadPhase (*get)(); /* enum entry for Unavailable. */
                    } Unavailable;
                    libshared_KType* (*_type)(void);
                  } PatientListLoadPhase;
                  struct {
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage (*get)(); /* enum entry for None. */
                    } None;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage (*get)(); /* enum entry for Loading. */
                    } Loading;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage (*get)(); /* enum entry for Loaded. */
                    } Loaded;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage (*get)(); /* enum entry for Refreshing. */
                    } Refreshing;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage (*get)(); /* enum entry for Refreshed. */
                    } Refreshed;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage (*get)(); /* enum entry for RefreshConfigurationMissing. */
                    } RefreshConfigurationMissing;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage (*get)(); /* enum entry for SessionMissing. */
                    } SessionMissing;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage (*get)(); /* enum entry for SessionRestoreFailed. */
                    } SessionRestoreFailed;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage (*get)(); /* enum entry for ConfigurationMissing. */
                    } ConfigurationMissing;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage (*get)(); /* enum entry for GroupConfigurationMissing. */
                    } GroupConfigurationMissing;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage (*get)(); /* enum entry for NetworkFailure. */
                    } NetworkFailure;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage (*get)(); /* enum entry for ResponseInvalid. */
                    } ResponseInvalid;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage (*get)(); /* enum entry for HttpFailure. */
                    } HttpFailure;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage (*get)(); /* enum entry for UnknownFailure. */
                    } UnknownFailure;
                    libshared_KType* (*_type)(void);
                  } PatientListLoadMessage;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadFacts (*PatientListLoadFacts)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadPhase phase, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage message);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage (*get_message)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadFacts thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadPhase (*get_phase)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadFacts thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadPhase (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadFacts thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadFacts thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadFacts (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadFacts thiz, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadPhase phase, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadMessage message);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadFacts thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadFacts thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadFacts thiz);
                  } PatientListLoadFacts;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadUiState (*PatientListLoadUiState)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadPhase phase, const char* title, const char* detailMessage, const char* noticeMessage, libshared_KBoolean retryVisible, libshared_KBoolean reopenLoginVisible);
                    const char* (*get_detailMessage)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadUiState thiz);
                    const char* (*get_noticeMessage)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadPhase (*get_phase)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadUiState thiz);
                    libshared_KBoolean (*get_reopenLoginVisible)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadUiState thiz);
                    libshared_KBoolean (*get_retryVisible)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadUiState thiz);
                    const char* (*get_title)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadPhase (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadUiState thiz);
                    const char* (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadUiState thiz);
                    const char* (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadUiState thiz);
                    const char* (*component4)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadUiState thiz);
                    libshared_KBoolean (*component5)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadUiState thiz);
                    libshared_KBoolean (*component6)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadUiState (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadUiState thiz, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadPhase phase, const char* title, const char* detailMessage, const char* noticeMessage, libshared_KBoolean retryVisible, libshared_KBoolean reopenLoginVisible);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadUiState thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadUiState thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadUiState thiz);
                  } PatientListLoadUiState;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadPresenter (*_instance)();
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadFacts (*factsFromHostCodes)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadPresenter thiz, const char* phaseCode, const char* messageCode);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadUiState (*present)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadPresenter thiz, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListContentMode mode, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListLoadFacts facts);
                  } PatientListLoadPresenter;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState (*PatientListUiState)(libshared_kref_com_lachesis_fusion_shared_routing_MnisRoute route, libshared_KBoolean routeValid, libshared_kref_kotlin_collections_List missingParams, libshared_kref_kotlin_collections_List groups, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType selectedGroupType, libshared_KBoolean isCareScopeSelected, const char* careScopeName, libshared_KBoolean isRefreshing, libshared_kref_kotlin_collections_List items, const char* patientIdentifierLabel, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientDetailDestination patientDetailDestination, libshared_KBoolean isEmpty, const char* emptyMessage, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig cardRenderConfig);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig (*get_cardRenderConfig)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    const char* (*get_careScopeName)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    const char* (*get_emptyMessage)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    libshared_kref_kotlin_collections_List (*get_groups)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    libshared_KBoolean (*get_isCareScopeSelected)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    libshared_KBoolean (*get_isEmpty)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    libshared_KBoolean (*get_isRefreshing)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    libshared_kref_kotlin_collections_List (*get_items)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    libshared_kref_kotlin_collections_List (*get_missingParams)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientDetailDestination (*get_patientDetailDestination)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    const char* (*get_patientIdentifierLabel)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_routing_MnisRoute (*get_route)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    libshared_KBoolean (*get_routeValid)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get_selectedGroupType)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_routing_MnisRoute (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    const char* (*component10)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientDetailDestination (*component11)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    libshared_KBoolean (*component12)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    const char* (*component13)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig (*component14)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    libshared_KBoolean (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    libshared_kref_kotlin_collections_List (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    libshared_kref_kotlin_collections_List (*component4)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*component5)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    libshared_KBoolean (*component6)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    const char* (*component7)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    libshared_KBoolean (*component8)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    libshared_kref_kotlin_collections_List (*component9)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz, libshared_kref_com_lachesis_fusion_shared_routing_MnisRoute route, libshared_KBoolean routeValid, libshared_kref_kotlin_collections_List missingParams, libshared_kref_kotlin_collections_List groups, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType selectedGroupType, libshared_KBoolean isCareScopeSelected, const char* careScopeName, libshared_KBoolean isRefreshing, libshared_kref_kotlin_collections_List items, const char* patientIdentifierLabel, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientDetailDestination patientDetailDestination, libshared_KBoolean isEmpty, const char* emptyMessage, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig cardRenderConfig);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListUiState thiz);
                  } PatientListUiState;
                  struct {
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientDetailDestination (*get)(); /* enum entry for NursingTask. */
                    } NursingTask;
                    struct {
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientDetailDestination (*get)(); /* enum entry for LegacyDeferred. */
                    } LegacyDeferred;
                    libshared_KType* (*_type)(void);
                  } PatientDetailDestination;
                  struct {
                    struct {
                      libshared_KType* (*_type)(void);
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectGroup (*SelectGroup)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType type);
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*get_type)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectGroup thiz);
                      libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectGroup thiz);
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectGroup (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectGroup thiz, libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientGroupType type);
                      libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectGroup thiz, libshared_kref_kotlin_Any other);
                      libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectGroup thiz);
                      const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectGroup thiz);
                    } SelectGroup;
                    struct {
                      libshared_KType* (*_type)(void);
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectCareScope (*SelectCareScope)(libshared_KBoolean isCare);
                      libshared_KBoolean (*get_isCare)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectCareScope thiz);
                      libshared_KBoolean (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectCareScope thiz);
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectCareScope (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectCareScope thiz, libshared_KBoolean isCare);
                      libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectCareScope thiz, libshared_kref_kotlin_Any other);
                      libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectCareScope thiz);
                      const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectCareScope thiz);
                    } SelectCareScope;
                    struct {
                      libshared_KType* (*_type)(void);
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectPatient (*SelectPatient)(const char* encounterId);
                      const char* (*get_encounterId)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectPatient thiz);
                      const char* (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectPatient thiz);
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectPatient (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectPatient thiz, const char* encounterId);
                      libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectPatient thiz, libshared_kref_kotlin_Any other);
                      libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectPatient thiz);
                      const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectPatient thiz);
                    } SelectPatient;
                    struct {
                      libshared_KType* (*_type)(void);
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient (*SelectSearchPatient)(const char* patientId, const char* encounterId, const char* patientName, const char* bedCode, const char* displayCode, const char* genderName, const char* age, const char* diagnosis, const char* nursingLevelCode);
                      const char* (*get_age)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient thiz);
                      const char* (*get_bedCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient thiz);
                      const char* (*get_diagnosis)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient thiz);
                      const char* (*get_displayCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient thiz);
                      const char* (*get_encounterId)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient thiz);
                      const char* (*get_genderName)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient thiz);
                      const char* (*get_nursingLevelCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient thiz);
                      const char* (*get_patientId)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient thiz);
                      const char* (*get_patientName)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient thiz);
                      const char* (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient thiz);
                      const char* (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient thiz);
                      const char* (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient thiz);
                      const char* (*component4)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient thiz);
                      const char* (*component5)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient thiz);
                      const char* (*component6)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient thiz);
                      const char* (*component7)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient thiz);
                      const char* (*component8)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient thiz);
                      const char* (*component9)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient thiz);
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient thiz, const char* patientId, const char* encounterId, const char* patientName, const char* bedCode, const char* displayCode, const char* genderName, const char* age, const char* diagnosis, const char* nursingLevelCode);
                      libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient thiz, libshared_kref_kotlin_Any other);
                      libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient thiz);
                      const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient thiz);
                    } SelectSearchPatient;
                    struct {
                      libshared_KType* (*_type)(void);
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_Refresh (*_instance)();
                      libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_Refresh thiz, libshared_kref_kotlin_Any other);
                      libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_Refresh thiz);
                      const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_Refresh thiz);
                    } Refresh;
                    struct {
                      libshared_KType* (*_type)(void);
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_OpenSearch (*_instance)();
                      libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_OpenSearch thiz, libshared_kref_kotlin_Any other);
                      libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_OpenSearch thiz);
                      const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_OpenSearch thiz);
                    } OpenSearch;
                    struct {
                      libshared_KType* (*_type)(void);
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_OpenFunctionMenu (*_instance)();
                      libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_OpenFunctionMenu thiz, libshared_kref_kotlin_Any other);
                      libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_OpenFunctionMenu thiz);
                      const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListAction_OpenFunctionMenu thiz);
                    } OpenFunctionMenu;
                    libshared_KType* (*_type)(void);
                  } PatientListAction;
                  struct {
                    struct {
                      libshared_KType* (*_type)(void);
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail (*OpenPatientDetail)(const char* patientId, const char* encounterId, const char* patientName, const char* bedCode, const char* displayCode, const char* genderName, const char* age, const char* diagnosis, const char* nursingLevelCode, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientDetailDestination destination);
                      const char* (*get_age)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail thiz);
                      const char* (*get_bedCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail thiz);
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientDetailDestination (*get_destination)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail thiz);
                      const char* (*get_diagnosis)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail thiz);
                      const char* (*get_displayCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail thiz);
                      const char* (*get_encounterId)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail thiz);
                      const char* (*get_genderName)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail thiz);
                      const char* (*get_nursingLevelCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail thiz);
                      const char* (*get_patientId)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail thiz);
                      const char* (*get_patientName)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail thiz);
                      const char* (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail thiz);
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientDetailDestination (*component10)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail thiz);
                      const char* (*component2)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail thiz);
                      const char* (*component3)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail thiz);
                      const char* (*component4)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail thiz);
                      const char* (*component5)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail thiz);
                      const char* (*component6)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail thiz);
                      const char* (*component7)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail thiz);
                      const char* (*component8)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail thiz);
                      const char* (*component9)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail thiz);
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail thiz, const char* patientId, const char* encounterId, const char* patientName, const char* bedCode, const char* displayCode, const char* genderName, const char* age, const char* diagnosis, const char* nursingLevelCode, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientDetailDestination destination);
                      libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail thiz, libshared_kref_kotlin_Any other);
                      libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail thiz);
                      const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail thiz);
                    } OpenPatientDetail;
                    struct {
                      libshared_KType* (*_type)(void);
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_RefreshRequested (*_instance)();
                      libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_RefreshRequested thiz, libshared_kref_kotlin_Any other);
                      libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_RefreshRequested thiz);
                      const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_RefreshRequested thiz);
                    } RefreshRequested;
                    struct {
                      libshared_KType* (*_type)(void);
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_CareScopeRefreshRequested (*CareScopeRefreshRequested)(libshared_KBoolean isCare);
                      libshared_KBoolean (*get_isCare)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_CareScopeRefreshRequested thiz);
                      libshared_KBoolean (*component1)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_CareScopeRefreshRequested thiz);
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_CareScopeRefreshRequested (*copy)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_CareScopeRefreshRequested thiz, libshared_KBoolean isCare);
                      libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_CareScopeRefreshRequested thiz, libshared_kref_kotlin_Any other);
                      libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_CareScopeRefreshRequested thiz);
                      const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_CareScopeRefreshRequested thiz);
                    } CareScopeRefreshRequested;
                    struct {
                      libshared_KType* (*_type)(void);
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenSearchRequested (*_instance)();
                      libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenSearchRequested thiz, libshared_kref_kotlin_Any other);
                      libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenSearchRequested thiz);
                      const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenSearchRequested thiz);
                    } OpenSearchRequested;
                    struct {
                      libshared_KType* (*_type)(void);
                      libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenFunctionMenuRequested (*_instance)();
                      libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenFunctionMenuRequested thiz, libshared_kref_kotlin_Any other);
                      libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenFunctionMenuRequested thiz);
                      const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenFunctionMenuRequested thiz);
                    } OpenFunctionMenuRequested;
                    libshared_KType* (*_type)(void);
                  } PatientListEffect;
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardBasicInfoUiState$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardClinicalInfoUiState$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardCriticalFlagUiState$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardDoctorTagsUiState$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardGenderUiState$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardHeaderUiState$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardHostPresentationConfig$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardMewsScoreUiState$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatusUiState$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardPathNurseLevelUiState$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardPresentation$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigPlanner$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRiskLevelDisplayConfig$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagDictionaryItem$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagInput$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagUiState$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagsUiState$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardSpecialMarksUiState$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardUiState$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientGroupState$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_OpenFunctionMenu$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_OpenSearch$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_Refresh$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectCareScope$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectGroup$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectPatient$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListEffect_CareScopeRefreshRequested$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenFunctionMenuRequested$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenSearchRequested$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListEffect_RefreshRequested$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListItemState$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListLoadFacts$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListLoadPresenter$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListLoadUiState$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListSearchUiState$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListUiState$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationState$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState$stableprop_getter)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardBasicInfoUiState$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardClinicalInfoUiState$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardCriticalFlagUiState$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardDoctorTagsUiState$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardGenderUiState$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardHeaderUiState$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardHostPresentationConfig$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardMewsScoreUiState$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatusUiState$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardPathNurseLevelUiState$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardPresentation$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigPlanner$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRiskLevelDisplayConfig$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagDictionaryItem$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagInput$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagUiState$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagsUiState$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardSpecialMarksUiState$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardUiState$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientGroupState$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_OpenFunctionMenu$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_OpenSearch$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_Refresh$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectCareScope$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectGroup$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectPatient$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListEffect_CareScopeRefreshRequested$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenFunctionMenuRequested$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenSearchRequested$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListEffect_RefreshRequested$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListItemState$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListLoadFacts$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListLoadPresenter$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListLoadUiState$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListSearchUiState$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListUiState$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationState$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState$stableprop_getter_)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardBasicInfoUiState$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardClinicalInfoUiState$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardCriticalFlagUiState$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardDoctorTagsUiState$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardGenderUiState$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardHeaderUiState$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardHostPresentationConfig$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardMewsScoreUiState$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatusUiState$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardPathNurseLevelUiState$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardPresentation$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigPlanner$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRiskLevelDisplayConfig$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagDictionaryItem$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagInput$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagUiState$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagsUiState$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardSpecialMarksUiState$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardUiState$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientGroupState$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_OpenFunctionMenu$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_OpenSearch$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_Refresh$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectCareScope$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectGroup$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectPatient$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListEffect_CareScopeRefreshRequested$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenFunctionMenuRequested$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenSearchRequested$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListEffect_RefreshRequested$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListItemState$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListLoadFacts$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListLoadPresenter$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListLoadUiState$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListSearchUiState$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListUiState$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationState$stableprop_getter__)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState$stableprop_getter__)();
                  libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardUiState (*patientListCardUiState)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig renderConfig, libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardHostPresentationConfig hostConfig);
                  const char* (*get_PATIENT_LIST_SEARCH_PLACEHOLDER)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardBasicInfoUiState$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardClinicalInfoUiState$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardCriticalFlagUiState$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardDoctorTagsUiState$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardGenderUiState$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardHeaderUiState$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardHostPresentationConfig$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardMewsScoreUiState$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatusUiState$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardPathNurseLevelUiState$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardPresentation$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigPlanner$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRiskLevelDisplayConfig$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagDictionaryItem$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagInput$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagUiState$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagsUiState$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardSpecialMarksUiState$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardUiState$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientGroupState$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_OpenFunctionMenu$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_OpenSearch$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_Refresh$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectCareScope$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectGroup$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectPatient$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListEffect_CareScopeRefreshRequested$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenFunctionMenuRequested$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenSearchRequested$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListEffect_RefreshRequested$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListItemState$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListLoadFacts$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListLoadPresenter$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListLoadUiState$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListSearchUiState$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListUiState$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationState$stableprop_getter___)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState$stableprop_getter___)();
                  const char* (*patientCardDisplayLabel)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardPathMarker thiz);
                  const char* (*patientCardDisplayLabel_)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatus thiz);
                  const char* (*patientCardDisplayLabel__)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientCardPregnancyMark thiz);
                  const char* (*patientIdentifierDisplayLabel)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientIdentifierDisplayMode thiz);
                  const char* (*patientIdentifierDisplayText)(libshared_kref_com_lachesis_fusion_shared_patient_domain_PatientIdentifierDisplayMode thiz, const char* displayCode);
                  const char* (*patientListAgeLabel)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                  const char* (*patientListCardTitleLabel)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                  const char* (*patientListDisplayCodeLabel)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                  const char* (*patientListDisplayLabel)(libshared_kref_com_lachesis_fusion_shared_patient_domain_NursingLevel thiz);
                  const char* (*patientListDisplayLabel_)(libshared_kref_com_lachesis_fusion_shared_patient_domain_RiskLevel thiz);
                  const char* (*patientListGenderLabel)(libshared_kref_com_lachesis_fusion_shared_patient_presentation_PatientListItemState thiz);
                  const char* (*patientListNurseLevelBadgeText)(libshared_kref_com_lachesis_fusion_shared_patient_domain_NursingLevel thiz);
                  const char* (*get_PATIENT_LIST_EMPTY_MESSAGE)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardBasicInfoUiState$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardClinicalInfoUiState$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardCriticalFlagUiState$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardDoctorTagsUiState$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardGenderUiState$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardHeaderUiState$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardHostPresentationConfig$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardMewsScoreUiState$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardOrderStatusUiState$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardPathNurseLevelUiState$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardPresentation$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfig$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigFacts$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRenderConfigPlanner$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRenderOptions$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRiskLevelDisplayConfig$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagDictionaryItem$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagInput$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagUiState$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardRiskTagsUiState$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardSpecialMarksUiState$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientCardUiState$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientGroupState$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_OpenFunctionMenu$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_OpenSearch$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_Refresh$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectCareScope$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectGroup$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectPatient$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListAction_SelectSearchPatient$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListEffect_CareScopeRefreshRequested$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenFunctionMenuRequested$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenPatientDetail$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListEffect_OpenSearchRequested$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListEffect_RefreshRequested$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListItemState$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListLoadFacts$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListLoadPresenter$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListLoadUiState$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListSearchUiState$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientListUiState$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientRiskTagPresentationState$stableprop_getter____)();
                  libshared_KInt (*com_lachesis_fusion_shared_patient_presentation_PatientSearchItemState$stableprop_getter____)();
                } presentation;
              } patient;
              struct {
                struct {
                  struct {
                    libshared_kref_com_lachesis_fusion_shared_routing_MnisRoute (*get)(); /* enum entry for PatientList. */
                  } PatientList;
                  struct {
                    libshared_kref_com_lachesis_fusion_shared_routing_MnisRoute (*get)(); /* enum entry for ScanDispatch. */
                  } ScanDispatch;
                  struct {
                    libshared_kref_com_lachesis_fusion_shared_routing_MnisRoute (*get)(); /* enum entry for OrderPrecheck. */
                  } OrderPrecheck;
                  libshared_KType* (*_type)(void);
                  const char* (*get_value)(libshared_kref_com_lachesis_fusion_shared_routing_MnisRoute thiz);
                } MnisRoute;
                struct {
                  struct {
                    libshared_kref_com_lachesis_fusion_shared_routing_RouteReadiness (*get)(); /* enum entry for LocalReady. */
                  } LocalReady;
                  struct {
                    libshared_kref_com_lachesis_fusion_shared_routing_RouteReadiness (*get)(); /* enum entry for BlockedByDevice. */
                  } BlockedByDevice;
                  struct {
                    libshared_kref_com_lachesis_fusion_shared_routing_RouteReadiness (*get)(); /* enum entry for BlockedByEnvironment. */
                  } BlockedByEnvironment;
                  struct {
                    libshared_kref_com_lachesis_fusion_shared_routing_RouteReadiness (*get)(); /* enum entry for ManualRequired. */
                  } ManualRequired;
                  libshared_KType* (*_type)(void);
                } RouteReadiness;
                struct {
                  libshared_KType* (*_type)(void);
                  libshared_kref_com_lachesis_fusion_shared_routing_RequiredParam (*RequiredParam)(const char* name);
                  const char* (*get_name)(libshared_kref_com_lachesis_fusion_shared_routing_RequiredParam thiz);
                  const char* (*component1)(libshared_kref_com_lachesis_fusion_shared_routing_RequiredParam thiz);
                  libshared_kref_com_lachesis_fusion_shared_routing_RequiredParam (*copy)(libshared_kref_com_lachesis_fusion_shared_routing_RequiredParam thiz, const char* name);
                  libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_routing_RequiredParam thiz, libshared_kref_kotlin_Any other);
                  libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_routing_RequiredParam thiz);
                  const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_routing_RequiredParam thiz);
                } RequiredParam;
                struct {
                  libshared_KType* (*_type)(void);
                  libshared_kref_com_lachesis_fusion_shared_routing_RouteContract (*RouteContract)(libshared_kref_com_lachesis_fusion_shared_routing_MnisRoute route, libshared_kref_kotlin_collections_Set requiredParams, libshared_kref_com_lachesis_fusion_shared_routing_RouteReadiness readiness);
                  libshared_kref_com_lachesis_fusion_shared_routing_RouteReadiness (*get_readiness)(libshared_kref_com_lachesis_fusion_shared_routing_RouteContract thiz);
                  libshared_kref_kotlin_collections_Set (*get_requiredParams)(libshared_kref_com_lachesis_fusion_shared_routing_RouteContract thiz);
                  libshared_kref_com_lachesis_fusion_shared_routing_MnisRoute (*get_route)(libshared_kref_com_lachesis_fusion_shared_routing_RouteContract thiz);
                  libshared_kref_com_lachesis_fusion_shared_routing_MnisRoute (*component1)(libshared_kref_com_lachesis_fusion_shared_routing_RouteContract thiz);
                  libshared_kref_kotlin_collections_Set (*component2)(libshared_kref_com_lachesis_fusion_shared_routing_RouteContract thiz);
                  libshared_kref_com_lachesis_fusion_shared_routing_RouteReadiness (*component3)(libshared_kref_com_lachesis_fusion_shared_routing_RouteContract thiz);
                  libshared_kref_com_lachesis_fusion_shared_routing_RouteContract (*copy)(libshared_kref_com_lachesis_fusion_shared_routing_RouteContract thiz, libshared_kref_com_lachesis_fusion_shared_routing_MnisRoute route, libshared_kref_kotlin_collections_Set requiredParams, libshared_kref_com_lachesis_fusion_shared_routing_RouteReadiness readiness);
                  libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_routing_RouteContract thiz, libshared_kref_kotlin_Any other);
                  libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_routing_RouteContract thiz);
                  const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_routing_RouteContract thiz);
                  libshared_kref_com_lachesis_fusion_shared_routing_RouteValidationResult (*validate)(libshared_kref_com_lachesis_fusion_shared_routing_RouteContract thiz, libshared_kref_kotlin_collections_Map params);
                } RouteContract;
                struct {
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_routing_RouteValidationResult_Valid (*_instance)();
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_routing_RouteValidationResult_Valid thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_routing_RouteValidationResult_Valid thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_routing_RouteValidationResult_Valid thiz);
                  } Valid;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_routing_RouteValidationResult_Invalid (*Invalid)(libshared_kref_com_lachesis_fusion_shared_routing_MnisRoute route, libshared_kref_kotlin_collections_List missingParams);
                    libshared_kref_kotlin_collections_List (*get_missingParams)(libshared_kref_com_lachesis_fusion_shared_routing_RouteValidationResult_Invalid thiz);
                    libshared_kref_com_lachesis_fusion_shared_routing_MnisRoute (*get_route)(libshared_kref_com_lachesis_fusion_shared_routing_RouteValidationResult_Invalid thiz);
                    libshared_kref_com_lachesis_fusion_shared_routing_MnisRoute (*component1)(libshared_kref_com_lachesis_fusion_shared_routing_RouteValidationResult_Invalid thiz);
                    libshared_kref_kotlin_collections_List (*component2)(libshared_kref_com_lachesis_fusion_shared_routing_RouteValidationResult_Invalid thiz);
                    libshared_kref_com_lachesis_fusion_shared_routing_RouteValidationResult_Invalid (*copy)(libshared_kref_com_lachesis_fusion_shared_routing_RouteValidationResult_Invalid thiz, libshared_kref_com_lachesis_fusion_shared_routing_MnisRoute route, libshared_kref_kotlin_collections_List missingParams);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_routing_RouteValidationResult_Invalid thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_routing_RouteValidationResult_Invalid thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_routing_RouteValidationResult_Invalid thiz);
                  } Invalid;
                  libshared_KType* (*_type)(void);
                } RouteValidationResult;
                struct {
                  libshared_KType* (*_type)(void);
                  libshared_kref_com_lachesis_fusion_shared_routing_PageManifestEntry (*PageManifestEntry)(libshared_kref_com_lachesis_fusion_shared_routing_MnisRoute route, const char* pageName, const char* title, libshared_kref_com_lachesis_fusion_shared_routing_RouteReadiness readiness);
                  const char* (*get_pageName)(libshared_kref_com_lachesis_fusion_shared_routing_PageManifestEntry thiz);
                  libshared_kref_com_lachesis_fusion_shared_routing_RouteReadiness (*get_readiness)(libshared_kref_com_lachesis_fusion_shared_routing_PageManifestEntry thiz);
                  libshared_kref_com_lachesis_fusion_shared_routing_MnisRoute (*get_route)(libshared_kref_com_lachesis_fusion_shared_routing_PageManifestEntry thiz);
                  const char* (*get_title)(libshared_kref_com_lachesis_fusion_shared_routing_PageManifestEntry thiz);
                  libshared_kref_com_lachesis_fusion_shared_routing_MnisRoute (*component1)(libshared_kref_com_lachesis_fusion_shared_routing_PageManifestEntry thiz);
                  const char* (*component2)(libshared_kref_com_lachesis_fusion_shared_routing_PageManifestEntry thiz);
                  const char* (*component3)(libshared_kref_com_lachesis_fusion_shared_routing_PageManifestEntry thiz);
                  libshared_kref_com_lachesis_fusion_shared_routing_RouteReadiness (*component4)(libshared_kref_com_lachesis_fusion_shared_routing_PageManifestEntry thiz);
                  libshared_kref_com_lachesis_fusion_shared_routing_PageManifestEntry (*copy)(libshared_kref_com_lachesis_fusion_shared_routing_PageManifestEntry thiz, libshared_kref_com_lachesis_fusion_shared_routing_MnisRoute route, const char* pageName, const char* title, libshared_kref_com_lachesis_fusion_shared_routing_RouteReadiness readiness);
                  libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_routing_PageManifestEntry thiz, libshared_kref_kotlin_Any other);
                  libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_routing_PageManifestEntry thiz);
                  const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_routing_PageManifestEntry thiz);
                } PageManifestEntry;
                struct {
                  libshared_KType* (*_type)(void);
                  libshared_kref_com_lachesis_fusion_shared_routing_PageManifestGate (*PageManifestGate)(libshared_kref_kotlin_collections_List contracts, libshared_kref_kotlin_collections_List entries);
                  libshared_kref_com_lachesis_fusion_shared_routing_PageManifestEntry (*requireEntry)(libshared_kref_com_lachesis_fusion_shared_routing_PageManifestGate thiz, libshared_kref_com_lachesis_fusion_shared_routing_MnisRoute route);
                  libshared_kref_com_lachesis_fusion_shared_routing_ManifestValidationResult (*validate)(libshared_kref_com_lachesis_fusion_shared_routing_PageManifestGate thiz);
                } PageManifestGate;
                struct {
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_routing_ManifestValidationResult_Valid (*_instance)();
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_routing_ManifestValidationResult_Valid thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_routing_ManifestValidationResult_Valid thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_routing_ManifestValidationResult_Valid thiz);
                  } Valid;
                  struct {
                    libshared_KType* (*_type)(void);
                    libshared_kref_com_lachesis_fusion_shared_routing_ManifestValidationResult_Invalid (*Invalid)(libshared_kref_kotlin_collections_List errors);
                    libshared_kref_kotlin_collections_List (*get_errors)(libshared_kref_com_lachesis_fusion_shared_routing_ManifestValidationResult_Invalid thiz);
                    libshared_kref_kotlin_collections_List (*component1)(libshared_kref_com_lachesis_fusion_shared_routing_ManifestValidationResult_Invalid thiz);
                    libshared_kref_com_lachesis_fusion_shared_routing_ManifestValidationResult_Invalid (*copy)(libshared_kref_com_lachesis_fusion_shared_routing_ManifestValidationResult_Invalid thiz, libshared_kref_kotlin_collections_List errors);
                    libshared_KBoolean (*equals)(libshared_kref_com_lachesis_fusion_shared_routing_ManifestValidationResult_Invalid thiz, libshared_kref_kotlin_Any other);
                    libshared_KInt (*hashCode)(libshared_kref_com_lachesis_fusion_shared_routing_ManifestValidationResult_Invalid thiz);
                    const char* (*toString)(libshared_kref_com_lachesis_fusion_shared_routing_ManifestValidationResult_Invalid thiz);
                  } Invalid;
                  libshared_KType* (*_type)(void);
                } ManifestValidationResult;
                struct {
                  libshared_KType* (*_type)(void);
                  libshared_kref_com_lachesis_fusion_shared_routing_MnisPageContracts (*_instance)();
                  libshared_kref_kotlin_collections_List (*get_all)(libshared_kref_com_lachesis_fusion_shared_routing_MnisPageContracts thiz);
                  libshared_kref_com_lachesis_fusion_shared_routing_RouteContract (*get_orderPrecheck)(libshared_kref_com_lachesis_fusion_shared_routing_MnisPageContracts thiz);
                  libshared_kref_com_lachesis_fusion_shared_routing_RouteContract (*get_patientList)(libshared_kref_com_lachesis_fusion_shared_routing_MnisPageContracts thiz);
                  libshared_kref_com_lachesis_fusion_shared_routing_RouteContract (*get_scanDispatch)(libshared_kref_com_lachesis_fusion_shared_routing_MnisPageContracts thiz);
                } MnisPageContracts;
                struct {
                  libshared_KType* (*_type)(void);
                  libshared_kref_com_lachesis_fusion_shared_routing_MnisPageManifest (*_instance)();
                  libshared_kref_kotlin_collections_List (*get_entries)(libshared_kref_com_lachesis_fusion_shared_routing_MnisPageManifest thiz);
                  libshared_kref_com_lachesis_fusion_shared_routing_PageManifestGate (*get_gate)(libshared_kref_com_lachesis_fusion_shared_routing_MnisPageManifest thiz);
                } MnisPageManifest;
                libshared_KInt (*com_lachesis_fusion_shared_routing_ManifestValidationResult_Invalid$stableprop_getter)();
                libshared_KInt (*com_lachesis_fusion_shared_routing_ManifestValidationResult_Valid$stableprop_getter)();
                libshared_KInt (*com_lachesis_fusion_shared_routing_MnisPageContracts$stableprop_getter)();
                libshared_KInt (*com_lachesis_fusion_shared_routing_MnisPageManifest$stableprop_getter)();
                libshared_KInt (*com_lachesis_fusion_shared_routing_PageManifestEntry$stableprop_getter)();
                libshared_KInt (*com_lachesis_fusion_shared_routing_PageManifestGate$stableprop_getter)();
                libshared_KInt (*com_lachesis_fusion_shared_routing_RequiredParam$stableprop_getter)();
                libshared_KInt (*com_lachesis_fusion_shared_routing_RouteContract$stableprop_getter)();
                libshared_KInt (*com_lachesis_fusion_shared_routing_RouteValidationResult_Invalid$stableprop_getter)();
                libshared_KInt (*com_lachesis_fusion_shared_routing_RouteValidationResult_Valid$stableprop_getter)();
              } routing;
            } shared;
          } fusion;
        } lachesis;
      } com;
      libshared_KInt (*initKuikly)();
    } root;
  } kotlin;
} libshared_ExportedSymbols;
extern libshared_ExportedSymbols* libshared_symbols(void);
#ifdef __cplusplus
}  /* extern "C" */
#endif
#endif  /* KONAN_LIBSHARED_H */
