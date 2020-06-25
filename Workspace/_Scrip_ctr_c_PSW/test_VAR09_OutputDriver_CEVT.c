/*****************************************************************************/
/*                            Cantata Test Script                            */
/*****************************************************************************/
/*
 *    Filename: test_VAR09_OutputDriver_CEVT.c
 *    Author: gup7hc
 *    Generated on: 04-Jun-2020 14:24:17
 *    Generated from: VAR09_OutputDriver_CEVT.c
 */
/*****************************************************************************/
/* Environment Definition                                                    */
/*****************************************************************************/

#define TEST_SCRIPT_GENERATOR 2
/*      Author: HC-UT40277C      */ 
 	#define False 0 
 	#define True (!False) 
/*      Author: HC-UT40277C      */ 
 	#define False 0 
 	#define True (!False) 
/*      Author: HC-UT40195C      */ 
 	#define False 0 
 	#define True (!False) 

/* Include files from software under test */
#include "CM_Basetypes_COMMON.h"
#include "Dem.h"
#include "rba_STM_Config_Cfg.h"
#include "rba_STM_SSC_Cfg.h"
#include "VAR09_GCCC_STATEMACHINE_CEVT.h"
#include "VAR09_GCCC_Config_CEVT.h"
#include "VAR09_IDDefinitionTable_CEVT.h"
#include "VAR09_OutputDriver_CEVT.h"
#include "VAR09_VarCode_CEVT.h"
#include "DNCIF_CommonConfig_Project.h"
#include "DNCIF_RSC_CMA.h"
#include "DNCIF_VAF_CMA.h"
#include "Dem_VarCodeHandling_Cfg.h"
#include "Dem_VarCodeHandling.h"
#include "DNCIF_CustomerSpecific_F30.h"

#define CANTATA_DEFAULT_VALUE 0 /* Default value of variables & stub returns */

#include <cantpp.h>  /* Cantata Directives */
/* pragma qas cantata testscript start */
/*****************************************************************************/
/* Global Data Definitions                                                   */
/*****************************************************************************/

/* Global Functions */
Std_ReturnType Dem_SetEnableCondition(uint8 EnableConditionID, boolean ConditionFulfilled);
Std_ReturnType Dem_SetEventAvailable(uint32 EventId, boolean status);
void StateLimiter__setActive(const StateLimiter * self, boolean isActive);
void Dem_setVariantActive(VariantList_t variantlist, uint8_t isActive);
void Dem_NodeSetAvailable(Dem_NodeIdType NodeId, boolean available);
extern void FNC_VAR09_Cevt_OutputDriver(UWORD pVarCode, UBYTE * CDPVars);

/* Global data */
extern VarCodeType_ST g_VariantCode_ST;
extern UWORD g_VariantCode_UW;
extern volatile MESGType_NMSG_VarCode_ST MESG_NMSG_VarCode_ST;
extern uint8 DemConf_DemEnableCondition_NET_IsMcActive_CMA_Autogear;
extern uint32 DemConf_DemEventParameter_Scl_PtTiToCluEngmt_TO;
extern uint8 DemConf_DemEventParameter_Scl_PtBrkTq_TO;
extern uint8 DemConf_DemEventParameter_Scl_PtBrkTqActTot_Qualifier_Invalid;
extern uint8 DemConf_DemEventParameter_Scl_PtBrkTqCpTot_TO;
extern uint8 DemConf_DemEventParameter_Scl_PtBrkTqCpTot_Qualifier_Invalid;
extern uint8 DemConf_DemEventParameter_Scl_PtBrkTqRgnAtAxleReAct_TO;
extern uint8 DemConf_DemEventParameter_Scl_PtBrkTqRgnAtAxleReAct_Qualifier_Invalid;
extern uint8 DemConf_DemEventParameter_Scl_PtTqAtAxleAvlReMin_TO;
extern BOOL g_GCCC_BLKID_02_B;
extern BOOL g_Gearbox_invalid_B;
extern UBYTE GCCC_CDPRAMVars[NO_OF_CDPs];
extern volatile MESGType_NMSG_Gearbox_B MESG_NMSG_Gearbox_B;
extern UBYTE GCCC_CDPNVVars[NO_OF_CDPs];
extern volatile MESGType_NMSG_GearboxType_N MESG_NMSG_GearboxType_N;
extern volatile MESGType_NMSG_GearboxType_FA_N MESG_NMSG_GearboxType_FA_N;
extern volatile MESGType_NMSG_GearboxType_RA_N MESG_NMSG_GearboxType_RA_N;
extern volatile MESGType_NMSG_DrvUnitType_RA_N MESG_NMSG_DrvUnitType_RA_N;
extern BOOL g_GCCC_BLKID_01_B;
extern BOOL g_Propulsion_Engine_invalid_B;
extern BOOL g_Electric_Driveline_incompatible_B;
extern volatile MESGType_NMSG_DrvUnitType_FA_N MESG_NMSG_DrvUnitType_FA_N;
extern BOOL g_vehicletype_invalid_B;
extern volatile MESGType_NMSG_VehicleType_N MESG_NMSG_VehicleType_N;
extern BOOL g_GCCC_BLKID_16_B;
extern volatile MESGType_NMSG_Power_Source_ATS_UB MESG_NMSG_Power_Source_ATS_UB;
extern BOOL g_Electric_Driveline_invalid_B;
extern BOOL g_DriveLine_invalid_B;
extern volatile MESGType_NMSG_Code_info_ATS_UB MESG_NMSG_Code_info_ATS_UB;
extern BOOL g_Fuel_invalid_B;
extern UBYTE g_EngineFuelTypeToASW_UB;
extern volatile MESGType_NMSG_EngineType_N MESG_NMSG_EngineType_N;
extern BOOL g_RCB_invalid_B;
extern UBYTE g_RCBVehConfigOnToASW_UB;
extern BOOL g_GCCC_BLKID_08_B;
extern BOOL g_PIB_invalid_B;
extern UBYTE g_PIBVehConfigOnToASW_UB;
extern uint8 DemConf_DemEnableCondition_VAR_NET_IsMcActive_CMA_PIB_B;
extern volatile MESGType_NMSG_RCBVehConfigOn_B MESG_NMSG_RCBVehConfigOn_B;
extern volatile MESGType_NMSG_PIBVehConfigOn_B MESG_NMSG_PIBVehConfigOn_B;
extern volatile MESGType_NMSG_DrvunitVeh_N MESG_NMSG_DrvunitVeh_N;
extern volatile MESGType_NMSG_DrvUnitType_N MESG_NMSG_DrvUnitType_N;
extern BOOL g_TSA_invalid_B;
extern StateLimiter STM_LIMITER_TSM_TSM_Off_ByCarConfig[5];
extern BOOL g_HDC_invalid_B;
extern StateLimiter STM_LIMITER_HDC_HDC_Off_ByCarConfig[5];
extern BOOL g_GCCC_BLKID_9_B;
extern BOOL g_HillStartAssist_invalid_B;
extern StateLimiter STM_LIMITER_HHC_HHC_Off_ByCarConfig[5];
extern BOOL g_GCCC_BLKID_15_B;
extern BOOL g_AEB_invalid_B;
extern BOOL g_RCTA_invalid_B;
extern StateLimiter STM_LIMITER_AEB_AEB_Off_ByCarConfig[5];
extern StateLimiter STM_LIMITER_AWB_AWB_Off_ByCarConfig[5];
extern BOOL g_GCCC_BLKID_3B_B;
extern BOOL g_VAC_invalid_B;
extern StateLimiter STM_LIMITER_HBB_HBB_Off_ByCarConfig[5];
extern VariantList_t VARIANT_GCCC_CDPRAMVars;
extern volatile MESGType_NMSG_Vacsensoravl_B MESG_NMSG_Vacsensoravl_B;
extern uint8 DemConf_DemEnableCondition_NET_IsMcActive_CMA_VacuumSnsr_B;
extern BOOL g_GCCC_BLKID_27_B;
extern BOOL g_ITPMSConfig_invalid_B;
extern UBYTE g_ITPMS_value_UB;
extern volatile MESGType_NMSG_ITPMSConfig_UB MESG_NMSG_ITPMSConfig_UB;
extern BOOL g_COOLANT_INDICATION_invalid_B;
extern BOOL g_COOLANT_value_B;
extern volatile MESGType_NMSG_CCC_coolantlevel_B MESG_NMSG_CCC_coolantlevel_B;
extern BOOL g_Activesuspension_invalid_B;
extern BOOL g_ACTIVESUSPENSION_value_B;
extern volatile MESGType_NMSG_WO_Act_Susp_B MESG_NMSG_WO_Act_Susp_B;
extern Dem_NodeIdType DemConf_DemNode_SuspSUM;
extern volatile MESGType_NMSG_CCC_Activesuspension_B MESG_NMSG_CCC_Activesuspension_B;
extern BOOL g_GCCC_BLKID_07_B;
extern BOOL g_DIAGSYS_invalid_B;
extern volatile MESGType_NMSG_DiagSys_OBD2_B MESG_NMSG_DiagSys_OBD2_B;
extern BOOL g_IMU_invalid_B;
extern BOOL g_IMUs_Without_RollrateSensor_B;
extern BOOL g_GCCC_BLKID_05_B;
extern BOOL g_RBS_invalid_B;
extern StateLimiter STM_LIMITER_RBC_RBC_Off_ByCarConfig[5];
extern BOOL g_DC1E_PWR_FWD;
extern BOOL g_BSG_PWR_AWD;
extern StateLimiter STM_LIMITER_ABA_ABA_Off_ByEEPROM[5];
extern StateLimiter STM_LIMITER_ABP_ABP_Off_ByEEPROM[5];
extern StateLimiter STM_LIMITER_AVH_AVH_Off_ByEEPROM[5];
extern StateLimiter STM_LIMITER_BTM_BTM_Off_ByEEPROM[5];
extern StateLimiter STM_LIMITER_CDP_CDP_Off_ByEEPROM[5];
extern StateLimiter STM_LIMITER_DCT_C_DCT_C_Off_ByEEPROM[5];
extern StateLimiter STM_LIMITER_DST_MSA_DST_MSA_Off_ByEEPROM[5];
extern StateLimiter STM_LIMITER_DST_MSB_DST_MSB_Off_ByEEPROM[5];
extern StateLimiter STM_LIMITER_DST_OSF_DST_OSF_Off_ByEEPROM[5];
extern StateLimiter STM_LIMITER_DST_TLF_DST_TLF_Off_ByEEPROM[5];
extern StateLimiter STM_LIMITER_DST_TSM_DST_TSM_Off_ByEEPROM[5];
extern StateLimiter STM_LIMITER_DST_USF_DST_USF_Off_ByEEPROM[5];
extern StateLimiter STM_LIMITER_EBP_EBP_Off_ByEEPROM[5];
extern StateLimiter STM_LIMITER_HBA_HBA_Off_ByEEPROM[5];
extern StateLimiter STM_LIMITER_HBB_HBB_Off_ByEEPROM[5];
extern StateLimiter STM_LIMITER_HFC_HFC_Off_ByEEPROM[5];
extern StateLimiter STM_LIMITER_HRB_HRB_Off_ByEEPROM[5];
extern StateLimiter STM_LIMITER_HSM_HSM_Off_ByEEPROM[5];
extern StateLimiter STM_LIMITER_LFC_LFC_Off_ByEEPROM[5];
extern StateLimiter STM_LIMITER_SCM_SCM_Off_ByEEPROM[5];
extern StateLimiter STM_LIMITER_TSM_TSM_Off_ByEEPROM[5];

/* Expected variables for global data */
VarCodeType_ST expected_g_VariantCode_ST;
UWORD expected_g_VariantCode_UW;
MESGType_NMSG_VarCode_ST expected_MESG_NMSG_VarCode_ST;
uint8 expected_DemConf_DemEnableCondition_NET_IsMcActive_CMA_Autogear;
uint32 expected_DemConf_DemEventParameter_Scl_PtTiToCluEngmt_TO;
uint8 expected_DemConf_DemEventParameter_Scl_PtBrkTq_TO;
uint8 expected_DemConf_DemEventParameter_Scl_PtBrkTqActTot_Qualifier_Invalid;
uint8 expected_DemConf_DemEventParameter_Scl_PtBrkTqCpTot_TO;
uint8 expected_DemConf_DemEventParameter_Scl_PtBrkTqCpTot_Qualifier_Invalid;
uint8 expected_DemConf_DemEventParameter_Scl_PtBrkTqRgnAtAxleReAct_TO;
uint8 expected_DemConf_DemEventParameter_Scl_PtBrkTqRgnAtAxleReAct_Qualifier_Invalid;
uint8 expected_DemConf_DemEventParameter_Scl_PtTqAtAxleAvlReMin_TO;
BOOL expected_g_GCCC_BLKID_02_B;
BOOL expected_g_Gearbox_invalid_B;
UBYTE expected_GCCC_CDPRAMVars[NO_OF_CDPs];
MESGType_NMSG_Gearbox_B expected_MESG_NMSG_Gearbox_B;
UBYTE expected_GCCC_CDPNVVars[NO_OF_CDPs];
MESGType_NMSG_GearboxType_N expected_MESG_NMSG_GearboxType_N;
MESGType_NMSG_GearboxType_FA_N expected_MESG_NMSG_GearboxType_FA_N;
MESGType_NMSG_GearboxType_RA_N expected_MESG_NMSG_GearboxType_RA_N;
MESGType_NMSG_DrvUnitType_RA_N expected_MESG_NMSG_DrvUnitType_RA_N;
BOOL expected_g_GCCC_BLKID_01_B;
BOOL expected_g_Propulsion_Engine_invalid_B;
BOOL expected_g_Electric_Driveline_incompatible_B;
MESGType_NMSG_DrvUnitType_FA_N expected_MESG_NMSG_DrvUnitType_FA_N;
BOOL expected_g_vehicletype_invalid_B;
MESGType_NMSG_VehicleType_N expected_MESG_NMSG_VehicleType_N;
BOOL expected_g_GCCC_BLKID_16_B;
MESGType_NMSG_Power_Source_ATS_UB expected_MESG_NMSG_Power_Source_ATS_UB;
BOOL expected_g_Electric_Driveline_invalid_B;
BOOL expected_g_DriveLine_invalid_B;
MESGType_NMSG_Code_info_ATS_UB expected_MESG_NMSG_Code_info_ATS_UB;
BOOL expected_g_Fuel_invalid_B;
UBYTE expected_g_EngineFuelTypeToASW_UB;
MESGType_NMSG_EngineType_N expected_MESG_NMSG_EngineType_N;
BOOL expected_g_RCB_invalid_B;
UBYTE expected_g_RCBVehConfigOnToASW_UB;
BOOL expected_g_GCCC_BLKID_08_B;
BOOL expected_g_PIB_invalid_B;
UBYTE expected_g_PIBVehConfigOnToASW_UB;
uint8 expected_DemConf_DemEnableCondition_VAR_NET_IsMcActive_CMA_PIB_B;
MESGType_NMSG_RCBVehConfigOn_B expected_MESG_NMSG_RCBVehConfigOn_B;
MESGType_NMSG_PIBVehConfigOn_B expected_MESG_NMSG_PIBVehConfigOn_B;
MESGType_NMSG_DrvunitVeh_N expected_MESG_NMSG_DrvunitVeh_N;
MESGType_NMSG_DrvUnitType_N expected_MESG_NMSG_DrvUnitType_N;
BOOL expected_g_TSA_invalid_B;
StateLimiter expected_STM_LIMITER_TSM_TSM_Off_ByCarConfig[5];
BOOL expected_g_HDC_invalid_B;
StateLimiter expected_STM_LIMITER_HDC_HDC_Off_ByCarConfig[5];
BOOL expected_g_GCCC_BLKID_9_B;
BOOL expected_g_HillStartAssist_invalid_B;
StateLimiter expected_STM_LIMITER_HHC_HHC_Off_ByCarConfig[5];
BOOL expected_g_GCCC_BLKID_15_B;
BOOL expected_g_AEB_invalid_B;
BOOL expected_g_RCTA_invalid_B;
StateLimiter expected_STM_LIMITER_AEB_AEB_Off_ByCarConfig[5];
StateLimiter expected_STM_LIMITER_AWB_AWB_Off_ByCarConfig[5];
BOOL expected_g_GCCC_BLKID_3B_B;
BOOL expected_g_VAC_invalid_B;
StateLimiter expected_STM_LIMITER_HBB_HBB_Off_ByCarConfig[5];
VariantList_t expected_VARIANT_GCCC_CDPRAMVars;
MESGType_NMSG_Vacsensoravl_B expected_MESG_NMSG_Vacsensoravl_B;
uint8 expected_DemConf_DemEnableCondition_NET_IsMcActive_CMA_VacuumSnsr_B;
BOOL expected_g_GCCC_BLKID_27_B;
BOOL expected_g_ITPMSConfig_invalid_B;
UBYTE expected_g_ITPMS_value_UB;
MESGType_NMSG_ITPMSConfig_UB expected_MESG_NMSG_ITPMSConfig_UB;
BOOL expected_g_COOLANT_INDICATION_invalid_B;
BOOL expected_g_COOLANT_value_B;
MESGType_NMSG_CCC_coolantlevel_B expected_MESG_NMSG_CCC_coolantlevel_B;
BOOL expected_g_Activesuspension_invalid_B;
BOOL expected_g_ACTIVESUSPENSION_value_B;
MESGType_NMSG_WO_Act_Susp_B expected_MESG_NMSG_WO_Act_Susp_B;
Dem_NodeIdType expected_DemConf_DemNode_SuspSUM;
MESGType_NMSG_CCC_Activesuspension_B expected_MESG_NMSG_CCC_Activesuspension_B;
BOOL expected_g_GCCC_BLKID_07_B;
BOOL expected_g_DIAGSYS_invalid_B;
MESGType_NMSG_DiagSys_OBD2_B expected_MESG_NMSG_DiagSys_OBD2_B;
BOOL expected_g_IMU_invalid_B;
BOOL expected_g_IMUs_Without_RollrateSensor_B;
BOOL expected_g_GCCC_BLKID_05_B;
BOOL expected_g_RBS_invalid_B;
StateLimiter expected_STM_LIMITER_RBC_RBC_Off_ByCarConfig[5];
BOOL expected_g_DC1E_PWR_FWD;
BOOL expected_g_BSG_PWR_AWD;
StateLimiter expected_STM_LIMITER_ABA_ABA_Off_ByEEPROM[5];
StateLimiter expected_STM_LIMITER_ABP_ABP_Off_ByEEPROM[5];
StateLimiter expected_STM_LIMITER_AVH_AVH_Off_ByEEPROM[5];
StateLimiter expected_STM_LIMITER_BTM_BTM_Off_ByEEPROM[5];
StateLimiter expected_STM_LIMITER_CDP_CDP_Off_ByEEPROM[5];
StateLimiter expected_STM_LIMITER_DCT_C_DCT_C_Off_ByEEPROM[5];
StateLimiter expected_STM_LIMITER_DST_MSA_DST_MSA_Off_ByEEPROM[5];
StateLimiter expected_STM_LIMITER_DST_MSB_DST_MSB_Off_ByEEPROM[5];
StateLimiter expected_STM_LIMITER_DST_OSF_DST_OSF_Off_ByEEPROM[5];
StateLimiter expected_STM_LIMITER_DST_TLF_DST_TLF_Off_ByEEPROM[5];
StateLimiter expected_STM_LIMITER_DST_TSM_DST_TSM_Off_ByEEPROM[5];
StateLimiter expected_STM_LIMITER_DST_USF_DST_USF_Off_ByEEPROM[5];
StateLimiter expected_STM_LIMITER_EBP_EBP_Off_ByEEPROM[5];
StateLimiter expected_STM_LIMITER_HBA_HBA_Off_ByEEPROM[5];
StateLimiter expected_STM_LIMITER_HBB_HBB_Off_ByEEPROM[5];
StateLimiter expected_STM_LIMITER_HFC_HFC_Off_ByEEPROM[5];
StateLimiter expected_STM_LIMITER_HRB_HRB_Off_ByEEPROM[5];
StateLimiter expected_STM_LIMITER_HSM_HSM_Off_ByEEPROM[5];
StateLimiter expected_STM_LIMITER_LFC_LFC_Off_ByEEPROM[5];
StateLimiter expected_STM_LIMITER_SCM_SCM_Off_ByEEPROM[5];
StateLimiter expected_STM_LIMITER_TSM_TSM_Off_ByEEPROM[5];

/* This function initialises global data to default values. This function       */
/* is called by every test case so must not contain test case specific settings */
static void initialise_global_data(){
    INITIALISE(g_VariantCode_ST);
    INITIALISE(g_VariantCode_UW);
    INITIALISE(MESG_NMSG_VarCode_ST);
    INITIALISE(DemConf_DemEnableCondition_NET_IsMcActive_CMA_Autogear);
    INITIALISE(DemConf_DemEventParameter_Scl_PtTiToCluEngmt_TO);
    INITIALISE(DemConf_DemEventParameter_Scl_PtBrkTq_TO);
    INITIALISE(DemConf_DemEventParameter_Scl_PtBrkTqActTot_Qualifier_Invalid);
    INITIALISE(DemConf_DemEventParameter_Scl_PtBrkTqCpTot_TO);
    INITIALISE(DemConf_DemEventParameter_Scl_PtBrkTqCpTot_Qualifier_Invalid);
    INITIALISE(DemConf_DemEventParameter_Scl_PtBrkTqRgnAtAxleReAct_TO);
    INITIALISE(DemConf_DemEventParameter_Scl_PtBrkTqRgnAtAxleReAct_Qualifier_Invalid);
    INITIALISE(DemConf_DemEventParameter_Scl_PtTqAtAxleAvlReMin_TO);
    INITIALISE(g_GCCC_BLKID_02_B);
    INITIALISE(g_Gearbox_invalid_B);
    INITIALISE(GCCC_CDPRAMVars);
    INITIALISE(MESG_NMSG_Gearbox_B);
    INITIALISE(GCCC_CDPNVVars);
    INITIALISE(MESG_NMSG_GearboxType_N);
    INITIALISE(MESG_NMSG_GearboxType_FA_N);
    INITIALISE(MESG_NMSG_GearboxType_RA_N);
    INITIALISE(MESG_NMSG_DrvUnitType_RA_N);
    INITIALISE(g_GCCC_BLKID_01_B);
    INITIALISE(g_Propulsion_Engine_invalid_B);
    INITIALISE(g_Electric_Driveline_incompatible_B);
    INITIALISE(MESG_NMSG_DrvUnitType_FA_N);
    INITIALISE(g_vehicletype_invalid_B);
    INITIALISE(MESG_NMSG_VehicleType_N);
    INITIALISE(g_GCCC_BLKID_16_B);
    INITIALISE(MESG_NMSG_Power_Source_ATS_UB);
    INITIALISE(g_Electric_Driveline_invalid_B);
    INITIALISE(g_DriveLine_invalid_B);
    INITIALISE(MESG_NMSG_Code_info_ATS_UB);
    INITIALISE(g_Fuel_invalid_B);
    INITIALISE(g_EngineFuelTypeToASW_UB);
    INITIALISE(MESG_NMSG_EngineType_N);
    INITIALISE(g_RCB_invalid_B);
    INITIALISE(g_RCBVehConfigOnToASW_UB);
    INITIALISE(g_GCCC_BLKID_08_B);
    INITIALISE(g_PIB_invalid_B);
    INITIALISE(g_PIBVehConfigOnToASW_UB);
    INITIALISE(DemConf_DemEnableCondition_VAR_NET_IsMcActive_CMA_PIB_B);
    INITIALISE(MESG_NMSG_RCBVehConfigOn_B);
    INITIALISE(MESG_NMSG_PIBVehConfigOn_B);
    INITIALISE(MESG_NMSG_DrvunitVeh_N);
    INITIALISE(MESG_NMSG_DrvUnitType_N);
    INITIALISE(g_TSA_invalid_B);
    INITIALISE(STM_LIMITER_TSM_TSM_Off_ByCarConfig);
    INITIALISE(g_HDC_invalid_B);
    INITIALISE(STM_LIMITER_HDC_HDC_Off_ByCarConfig);
    INITIALISE(g_GCCC_BLKID_9_B);
    INITIALISE(g_HillStartAssist_invalid_B);
    INITIALISE(STM_LIMITER_HHC_HHC_Off_ByCarConfig);
    INITIALISE(g_GCCC_BLKID_15_B);
    INITIALISE(g_AEB_invalid_B);
    INITIALISE(g_RCTA_invalid_B);
    INITIALISE(STM_LIMITER_AEB_AEB_Off_ByCarConfig);
    INITIALISE(STM_LIMITER_AWB_AWB_Off_ByCarConfig);
    INITIALISE(g_GCCC_BLKID_3B_B);
    INITIALISE(g_VAC_invalid_B);
    INITIALISE(STM_LIMITER_HBB_HBB_Off_ByCarConfig);
    INITIALISE(VARIANT_GCCC_CDPRAMVars);
    INITIALISE(MESG_NMSG_Vacsensoravl_B);
    INITIALISE(DemConf_DemEnableCondition_NET_IsMcActive_CMA_VacuumSnsr_B);
    INITIALISE(g_GCCC_BLKID_27_B);
    INITIALISE(g_ITPMSConfig_invalid_B);
    INITIALISE(g_ITPMS_value_UB);
    INITIALISE(MESG_NMSG_ITPMSConfig_UB);
    INITIALISE(g_COOLANT_INDICATION_invalid_B);
    INITIALISE(g_COOLANT_value_B);
    INITIALISE(MESG_NMSG_CCC_coolantlevel_B);
    INITIALISE(g_Activesuspension_invalid_B);
    INITIALISE(g_ACTIVESUSPENSION_value_B);
    INITIALISE(MESG_NMSG_WO_Act_Susp_B);
    INITIALISE(DemConf_DemNode_SuspSUM);
    INITIALISE(MESG_NMSG_CCC_Activesuspension_B);
    INITIALISE(g_GCCC_BLKID_07_B);
    INITIALISE(g_DIAGSYS_invalid_B);
    INITIALISE(MESG_NMSG_DiagSys_OBD2_B);
    INITIALISE(g_IMU_invalid_B);
    INITIALISE(g_IMUs_Without_RollrateSensor_B);
    INITIALISE(g_GCCC_BLKID_05_B);
    INITIALISE(g_RBS_invalid_B);
    INITIALISE(STM_LIMITER_RBC_RBC_Off_ByCarConfig);
    INITIALISE(g_DC1E_PWR_FWD);
    INITIALISE(g_BSG_PWR_AWD);
    INITIALISE(STM_LIMITER_ABA_ABA_Off_ByEEPROM);
    INITIALISE(STM_LIMITER_ABP_ABP_Off_ByEEPROM);
    INITIALISE(STM_LIMITER_AVH_AVH_Off_ByEEPROM);
    INITIALISE(STM_LIMITER_BTM_BTM_Off_ByEEPROM);
    INITIALISE(STM_LIMITER_CDP_CDP_Off_ByEEPROM);
    INITIALISE(STM_LIMITER_DCT_C_DCT_C_Off_ByEEPROM);
    INITIALISE(STM_LIMITER_DST_MSA_DST_MSA_Off_ByEEPROM);
    INITIALISE(STM_LIMITER_DST_MSB_DST_MSB_Off_ByEEPROM);
    INITIALISE(STM_LIMITER_DST_OSF_DST_OSF_Off_ByEEPROM);
    INITIALISE(STM_LIMITER_DST_TLF_DST_TLF_Off_ByEEPROM);
    INITIALISE(STM_LIMITER_DST_TSM_DST_TSM_Off_ByEEPROM);
    INITIALISE(STM_LIMITER_DST_USF_DST_USF_Off_ByEEPROM);
    INITIALISE(STM_LIMITER_EBP_EBP_Off_ByEEPROM);
    INITIALISE(STM_LIMITER_HBA_HBA_Off_ByEEPROM);
    INITIALISE(STM_LIMITER_HBB_HBB_Off_ByEEPROM);
    INITIALISE(STM_LIMITER_HFC_HFC_Off_ByEEPROM);
    INITIALISE(STM_LIMITER_HRB_HRB_Off_ByEEPROM);
    INITIALISE(STM_LIMITER_HSM_HSM_Off_ByEEPROM);
    INITIALISE(STM_LIMITER_LFC_LFC_Off_ByEEPROM);
    INITIALISE(STM_LIMITER_SCM_SCM_Off_ByEEPROM);
    INITIALISE(STM_LIMITER_TSM_TSM_Off_ByEEPROM);
}

/* This function copies the global data settings into expected variables for */
/* use in check_global_data(). It is called by every test case so must not   */
/* contain test case specific settings.                                      */
static void initialise_expected_global_data(){
    COPY_TO_EXPECTED(g_VariantCode_ST, expected_g_VariantCode_ST);
    COPY_TO_EXPECTED(g_VariantCode_UW, expected_g_VariantCode_UW);
    COPY_TO_EXPECTED(MESG_NMSG_VarCode_ST, expected_MESG_NMSG_VarCode_ST);
    COPY_TO_EXPECTED(DemConf_DemEnableCondition_NET_IsMcActive_CMA_Autogear, expected_DemConf_DemEnableCondition_NET_IsMcActive_CMA_Autogear);
    COPY_TO_EXPECTED(DemConf_DemEventParameter_Scl_PtTiToCluEngmt_TO, expected_DemConf_DemEventParameter_Scl_PtTiToCluEngmt_TO);
    COPY_TO_EXPECTED(DemConf_DemEventParameter_Scl_PtBrkTq_TO, expected_DemConf_DemEventParameter_Scl_PtBrkTq_TO);
    COPY_TO_EXPECTED(DemConf_DemEventParameter_Scl_PtBrkTqActTot_Qualifier_Invalid, expected_DemConf_DemEventParameter_Scl_PtBrkTqActTot_Qualifier_Invalid);
    COPY_TO_EXPECTED(DemConf_DemEventParameter_Scl_PtBrkTqCpTot_TO, expected_DemConf_DemEventParameter_Scl_PtBrkTqCpTot_TO);
    COPY_TO_EXPECTED(DemConf_DemEventParameter_Scl_PtBrkTqCpTot_Qualifier_Invalid, expected_DemConf_DemEventParameter_Scl_PtBrkTqCpTot_Qualifier_Invalid);
    COPY_TO_EXPECTED(DemConf_DemEventParameter_Scl_PtBrkTqRgnAtAxleReAct_TO, expected_DemConf_DemEventParameter_Scl_PtBrkTqRgnAtAxleReAct_TO);
    COPY_TO_EXPECTED(DemConf_DemEventParameter_Scl_PtBrkTqRgnAtAxleReAct_Qualifier_Invalid, expected_DemConf_DemEventParameter_Scl_PtBrkTqRgnAtAxleReAct_Qualifier_Invalid);
    COPY_TO_EXPECTED(DemConf_DemEventParameter_Scl_PtTqAtAxleAvlReMin_TO, expected_DemConf_DemEventParameter_Scl_PtTqAtAxleAvlReMin_TO);
    COPY_TO_EXPECTED(g_GCCC_BLKID_02_B, expected_g_GCCC_BLKID_02_B);
    COPY_TO_EXPECTED(g_Gearbox_invalid_B, expected_g_Gearbox_invalid_B);
    COPY_TO_EXPECTED(GCCC_CDPRAMVars, expected_GCCC_CDPRAMVars);
    COPY_TO_EXPECTED(MESG_NMSG_Gearbox_B, expected_MESG_NMSG_Gearbox_B);
    COPY_TO_EXPECTED(GCCC_CDPNVVars, expected_GCCC_CDPNVVars);
    COPY_TO_EXPECTED(MESG_NMSG_GearboxType_N, expected_MESG_NMSG_GearboxType_N);
    COPY_TO_EXPECTED(MESG_NMSG_GearboxType_FA_N, expected_MESG_NMSG_GearboxType_FA_N);
    COPY_TO_EXPECTED(MESG_NMSG_GearboxType_RA_N, expected_MESG_NMSG_GearboxType_RA_N);
    COPY_TO_EXPECTED(MESG_NMSG_DrvUnitType_RA_N, expected_MESG_NMSG_DrvUnitType_RA_N);
    COPY_TO_EXPECTED(g_GCCC_BLKID_01_B, expected_g_GCCC_BLKID_01_B);
    COPY_TO_EXPECTED(g_Propulsion_Engine_invalid_B, expected_g_Propulsion_Engine_invalid_B);
    COPY_TO_EXPECTED(g_Electric_Driveline_incompatible_B, expected_g_Electric_Driveline_incompatible_B);
    COPY_TO_EXPECTED(MESG_NMSG_DrvUnitType_FA_N, expected_MESG_NMSG_DrvUnitType_FA_N);
    COPY_TO_EXPECTED(g_vehicletype_invalid_B, expected_g_vehicletype_invalid_B);
    COPY_TO_EXPECTED(MESG_NMSG_VehicleType_N, expected_MESG_NMSG_VehicleType_N);
    COPY_TO_EXPECTED(g_GCCC_BLKID_16_B, expected_g_GCCC_BLKID_16_B);
    COPY_TO_EXPECTED(MESG_NMSG_Power_Source_ATS_UB, expected_MESG_NMSG_Power_Source_ATS_UB);
    COPY_TO_EXPECTED(g_Electric_Driveline_invalid_B, expected_g_Electric_Driveline_invalid_B);
    COPY_TO_EXPECTED(g_DriveLine_invalid_B, expected_g_DriveLine_invalid_B);
    COPY_TO_EXPECTED(MESG_NMSG_Code_info_ATS_UB, expected_MESG_NMSG_Code_info_ATS_UB);
    COPY_TO_EXPECTED(g_Fuel_invalid_B, expected_g_Fuel_invalid_B);
    COPY_TO_EXPECTED(g_EngineFuelTypeToASW_UB, expected_g_EngineFuelTypeToASW_UB);
    COPY_TO_EXPECTED(MESG_NMSG_EngineType_N, expected_MESG_NMSG_EngineType_N);
    COPY_TO_EXPECTED(g_RCB_invalid_B, expected_g_RCB_invalid_B);
    COPY_TO_EXPECTED(g_RCBVehConfigOnToASW_UB, expected_g_RCBVehConfigOnToASW_UB);
    COPY_TO_EXPECTED(g_GCCC_BLKID_08_B, expected_g_GCCC_BLKID_08_B);
    COPY_TO_EXPECTED(g_PIB_invalid_B, expected_g_PIB_invalid_B);
    COPY_TO_EXPECTED(g_PIBVehConfigOnToASW_UB, expected_g_PIBVehConfigOnToASW_UB);
    COPY_TO_EXPECTED(DemConf_DemEnableCondition_VAR_NET_IsMcActive_CMA_PIB_B, expected_DemConf_DemEnableCondition_VAR_NET_IsMcActive_CMA_PIB_B);
    COPY_TO_EXPECTED(MESG_NMSG_RCBVehConfigOn_B, expected_MESG_NMSG_RCBVehConfigOn_B);
    COPY_TO_EXPECTED(MESG_NMSG_PIBVehConfigOn_B, expected_MESG_NMSG_PIBVehConfigOn_B);
    COPY_TO_EXPECTED(MESG_NMSG_DrvunitVeh_N, expected_MESG_NMSG_DrvunitVeh_N);
    COPY_TO_EXPECTED(MESG_NMSG_DrvUnitType_N, expected_MESG_NMSG_DrvUnitType_N);
    COPY_TO_EXPECTED(g_TSA_invalid_B, expected_g_TSA_invalid_B);
    COPY_TO_EXPECTED(STM_LIMITER_TSM_TSM_Off_ByCarConfig, expected_STM_LIMITER_TSM_TSM_Off_ByCarConfig);
    COPY_TO_EXPECTED(g_HDC_invalid_B, expected_g_HDC_invalid_B);
    COPY_TO_EXPECTED(STM_LIMITER_HDC_HDC_Off_ByCarConfig, expected_STM_LIMITER_HDC_HDC_Off_ByCarConfig);
    COPY_TO_EXPECTED(g_GCCC_BLKID_9_B, expected_g_GCCC_BLKID_9_B);
    COPY_TO_EXPECTED(g_HillStartAssist_invalid_B, expected_g_HillStartAssist_invalid_B);
    COPY_TO_EXPECTED(STM_LIMITER_HHC_HHC_Off_ByCarConfig, expected_STM_LIMITER_HHC_HHC_Off_ByCarConfig);
    COPY_TO_EXPECTED(g_GCCC_BLKID_15_B, expected_g_GCCC_BLKID_15_B);
    COPY_TO_EXPECTED(g_AEB_invalid_B, expected_g_AEB_invalid_B);
    COPY_TO_EXPECTED(g_RCTA_invalid_B, expected_g_RCTA_invalid_B);
    COPY_TO_EXPECTED(STM_LIMITER_AEB_AEB_Off_ByCarConfig, expected_STM_LIMITER_AEB_AEB_Off_ByCarConfig);
    COPY_TO_EXPECTED(STM_LIMITER_AWB_AWB_Off_ByCarConfig, expected_STM_LIMITER_AWB_AWB_Off_ByCarConfig);
    COPY_TO_EXPECTED(g_GCCC_BLKID_3B_B, expected_g_GCCC_BLKID_3B_B);
    COPY_TO_EXPECTED(g_VAC_invalid_B, expected_g_VAC_invalid_B);
    COPY_TO_EXPECTED(STM_LIMITER_HBB_HBB_Off_ByCarConfig, expected_STM_LIMITER_HBB_HBB_Off_ByCarConfig);
    COPY_TO_EXPECTED(VARIANT_GCCC_CDPRAMVars, expected_VARIANT_GCCC_CDPRAMVars);
    COPY_TO_EXPECTED(MESG_NMSG_Vacsensoravl_B, expected_MESG_NMSG_Vacsensoravl_B);
    COPY_TO_EXPECTED(DemConf_DemEnableCondition_NET_IsMcActive_CMA_VacuumSnsr_B, expected_DemConf_DemEnableCondition_NET_IsMcActive_CMA_VacuumSnsr_B);
    COPY_TO_EXPECTED(g_GCCC_BLKID_27_B, expected_g_GCCC_BLKID_27_B);
    COPY_TO_EXPECTED(g_ITPMSConfig_invalid_B, expected_g_ITPMSConfig_invalid_B);
    COPY_TO_EXPECTED(g_ITPMS_value_UB, expected_g_ITPMS_value_UB);
    COPY_TO_EXPECTED(MESG_NMSG_ITPMSConfig_UB, expected_MESG_NMSG_ITPMSConfig_UB);
    COPY_TO_EXPECTED(g_COOLANT_INDICATION_invalid_B, expected_g_COOLANT_INDICATION_invalid_B);
    COPY_TO_EXPECTED(g_COOLANT_value_B, expected_g_COOLANT_value_B);
    COPY_TO_EXPECTED(MESG_NMSG_CCC_coolantlevel_B, expected_MESG_NMSG_CCC_coolantlevel_B);
    COPY_TO_EXPECTED(g_Activesuspension_invalid_B, expected_g_Activesuspension_invalid_B);
    COPY_TO_EXPECTED(g_ACTIVESUSPENSION_value_B, expected_g_ACTIVESUSPENSION_value_B);
    COPY_TO_EXPECTED(MESG_NMSG_WO_Act_Susp_B, expected_MESG_NMSG_WO_Act_Susp_B);
    COPY_TO_EXPECTED(DemConf_DemNode_SuspSUM, expected_DemConf_DemNode_SuspSUM);
    COPY_TO_EXPECTED(MESG_NMSG_CCC_Activesuspension_B, expected_MESG_NMSG_CCC_Activesuspension_B);
    COPY_TO_EXPECTED(g_GCCC_BLKID_07_B, expected_g_GCCC_BLKID_07_B);
    COPY_TO_EXPECTED(g_DIAGSYS_invalid_B, expected_g_DIAGSYS_invalid_B);
    COPY_TO_EXPECTED(MESG_NMSG_DiagSys_OBD2_B, expected_MESG_NMSG_DiagSys_OBD2_B);
    COPY_TO_EXPECTED(g_IMU_invalid_B, expected_g_IMU_invalid_B);
    COPY_TO_EXPECTED(g_IMUs_Without_RollrateSensor_B, expected_g_IMUs_Without_RollrateSensor_B);
    COPY_TO_EXPECTED(g_GCCC_BLKID_05_B, expected_g_GCCC_BLKID_05_B);
    COPY_TO_EXPECTED(g_RBS_invalid_B, expected_g_RBS_invalid_B);
    COPY_TO_EXPECTED(STM_LIMITER_RBC_RBC_Off_ByCarConfig, expected_STM_LIMITER_RBC_RBC_Off_ByCarConfig);
    COPY_TO_EXPECTED(g_DC1E_PWR_FWD, expected_g_DC1E_PWR_FWD);
    COPY_TO_EXPECTED(g_BSG_PWR_AWD, expected_g_BSG_PWR_AWD);
    COPY_TO_EXPECTED(STM_LIMITER_ABA_ABA_Off_ByEEPROM, expected_STM_LIMITER_ABA_ABA_Off_ByEEPROM);
    COPY_TO_EXPECTED(STM_LIMITER_ABP_ABP_Off_ByEEPROM, expected_STM_LIMITER_ABP_ABP_Off_ByEEPROM);
    COPY_TO_EXPECTED(STM_LIMITER_AVH_AVH_Off_ByEEPROM, expected_STM_LIMITER_AVH_AVH_Off_ByEEPROM);
    COPY_TO_EXPECTED(STM_LIMITER_BTM_BTM_Off_ByEEPROM, expected_STM_LIMITER_BTM_BTM_Off_ByEEPROM);
    COPY_TO_EXPECTED(STM_LIMITER_CDP_CDP_Off_ByEEPROM, expected_STM_LIMITER_CDP_CDP_Off_ByEEPROM);
    COPY_TO_EXPECTED(STM_LIMITER_DCT_C_DCT_C_Off_ByEEPROM, expected_STM_LIMITER_DCT_C_DCT_C_Off_ByEEPROM);
    COPY_TO_EXPECTED(STM_LIMITER_DST_MSA_DST_MSA_Off_ByEEPROM, expected_STM_LIMITER_DST_MSA_DST_MSA_Off_ByEEPROM);
    COPY_TO_EXPECTED(STM_LIMITER_DST_MSB_DST_MSB_Off_ByEEPROM, expected_STM_LIMITER_DST_MSB_DST_MSB_Off_ByEEPROM);
    COPY_TO_EXPECTED(STM_LIMITER_DST_OSF_DST_OSF_Off_ByEEPROM, expected_STM_LIMITER_DST_OSF_DST_OSF_Off_ByEEPROM);
    COPY_TO_EXPECTED(STM_LIMITER_DST_TLF_DST_TLF_Off_ByEEPROM, expected_STM_LIMITER_DST_TLF_DST_TLF_Off_ByEEPROM);
    COPY_TO_EXPECTED(STM_LIMITER_DST_TSM_DST_TSM_Off_ByEEPROM, expected_STM_LIMITER_DST_TSM_DST_TSM_Off_ByEEPROM);
    COPY_TO_EXPECTED(STM_LIMITER_DST_USF_DST_USF_Off_ByEEPROM, expected_STM_LIMITER_DST_USF_DST_USF_Off_ByEEPROM);
    COPY_TO_EXPECTED(STM_LIMITER_EBP_EBP_Off_ByEEPROM, expected_STM_LIMITER_EBP_EBP_Off_ByEEPROM);
    COPY_TO_EXPECTED(STM_LIMITER_HBA_HBA_Off_ByEEPROM, expected_STM_LIMITER_HBA_HBA_Off_ByEEPROM);
    COPY_TO_EXPECTED(STM_LIMITER_HBB_HBB_Off_ByEEPROM, expected_STM_LIMITER_HBB_HBB_Off_ByEEPROM);
    COPY_TO_EXPECTED(STM_LIMITER_HFC_HFC_Off_ByEEPROM, expected_STM_LIMITER_HFC_HFC_Off_ByEEPROM);
    COPY_TO_EXPECTED(STM_LIMITER_HRB_HRB_Off_ByEEPROM, expected_STM_LIMITER_HRB_HRB_Off_ByEEPROM);
    COPY_TO_EXPECTED(STM_LIMITER_HSM_HSM_Off_ByEEPROM, expected_STM_LIMITER_HSM_HSM_Off_ByEEPROM);
    COPY_TO_EXPECTED(STM_LIMITER_LFC_LFC_Off_ByEEPROM, expected_STM_LIMITER_LFC_LFC_Off_ByEEPROM);
    COPY_TO_EXPECTED(STM_LIMITER_SCM_SCM_Off_ByEEPROM, expected_STM_LIMITER_SCM_SCM_Off_ByEEPROM);
    COPY_TO_EXPECTED(STM_LIMITER_TSM_TSM_Off_ByEEPROM, expected_STM_LIMITER_TSM_TSM_Off_ByEEPROM);
}

/* This function checks global data against the expected values. */
static void check_global_data(){
    CHECK_U_INT(g_VariantCode_UW, expected_g_VariantCode_UW);
    CHECK_U_CHAR(DemConf_DemEnableCondition_NET_IsMcActive_CMA_Autogear, expected_DemConf_DemEnableCondition_NET_IsMcActive_CMA_Autogear);
    CHECK_U_INT(DemConf_DemEventParameter_Scl_PtTiToCluEngmt_TO, expected_DemConf_DemEventParameter_Scl_PtTiToCluEngmt_TO);
    CHECK_U_CHAR(DemConf_DemEventParameter_Scl_PtBrkTq_TO, expected_DemConf_DemEventParameter_Scl_PtBrkTq_TO);
    CHECK_U_CHAR(DemConf_DemEventParameter_Scl_PtBrkTqActTot_Qualifier_Invalid, expected_DemConf_DemEventParameter_Scl_PtBrkTqActTot_Qualifier_Invalid);
    CHECK_U_CHAR(DemConf_DemEventParameter_Scl_PtBrkTqCpTot_TO, expected_DemConf_DemEventParameter_Scl_PtBrkTqCpTot_TO);
    CHECK_U_CHAR(DemConf_DemEventParameter_Scl_PtBrkTqCpTot_Qualifier_Invalid, expected_DemConf_DemEventParameter_Scl_PtBrkTqCpTot_Qualifier_Invalid);
    CHECK_U_CHAR(DemConf_DemEventParameter_Scl_PtBrkTqRgnAtAxleReAct_TO, expected_DemConf_DemEventParameter_Scl_PtBrkTqRgnAtAxleReAct_TO);
    CHECK_U_CHAR(DemConf_DemEventParameter_Scl_PtBrkTqRgnAtAxleReAct_Qualifier_Invalid, expected_DemConf_DemEventParameter_Scl_PtBrkTqRgnAtAxleReAct_Qualifier_Invalid);
    CHECK_U_CHAR(DemConf_DemEventParameter_Scl_PtTqAtAxleAvlReMin_TO, expected_DemConf_DemEventParameter_Scl_PtTqAtAxleAvlReMin_TO);
    CHECK_U_CHAR(g_GCCC_BLKID_02_B, expected_g_GCCC_BLKID_02_B);
    CHECK_U_CHAR(g_Gearbox_invalid_B, expected_g_Gearbox_invalid_B);
    CHECK_MEMORY("GCCC_CDPRAMVars", GCCC_CDPRAMVars, expected_GCCC_CDPRAMVars, sizeof(expected_GCCC_CDPRAMVars));
    CHECK_U_CHAR(MESG_NMSG_Gearbox_B, expected_MESG_NMSG_Gearbox_B);
    CHECK_MEMORY("GCCC_CDPNVVars", GCCC_CDPNVVars, expected_GCCC_CDPNVVars, sizeof(expected_GCCC_CDPNVVars));
    CHECK_U_INT(MESG_NMSG_GearboxType_N, expected_MESG_NMSG_GearboxType_N);
    CHECK_U_INT(MESG_NMSG_GearboxType_FA_N, expected_MESG_NMSG_GearboxType_FA_N);
    CHECK_U_INT(MESG_NMSG_GearboxType_RA_N, expected_MESG_NMSG_GearboxType_RA_N);
    CHECK_U_INT(MESG_NMSG_DrvUnitType_RA_N, expected_MESG_NMSG_DrvUnitType_RA_N);
    CHECK_U_CHAR(g_GCCC_BLKID_01_B, expected_g_GCCC_BLKID_01_B);
    CHECK_U_CHAR(g_Propulsion_Engine_invalid_B, expected_g_Propulsion_Engine_invalid_B);
    CHECK_U_CHAR(g_Electric_Driveline_incompatible_B, expected_g_Electric_Driveline_incompatible_B);
    CHECK_U_INT(MESG_NMSG_DrvUnitType_FA_N, expected_MESG_NMSG_DrvUnitType_FA_N);
    CHECK_U_CHAR(g_vehicletype_invalid_B, expected_g_vehicletype_invalid_B);
    CHECK_U_INT(MESG_NMSG_VehicleType_N, expected_MESG_NMSG_VehicleType_N);
    CHECK_U_CHAR(g_GCCC_BLKID_16_B, expected_g_GCCC_BLKID_16_B);
    CHECK_U_CHAR(MESG_NMSG_Power_Source_ATS_UB, expected_MESG_NMSG_Power_Source_ATS_UB);
    CHECK_U_CHAR(g_Electric_Driveline_invalid_B, expected_g_Electric_Driveline_invalid_B);
    CHECK_U_CHAR(g_DriveLine_invalid_B, expected_g_DriveLine_invalid_B);
    CHECK_U_CHAR(MESG_NMSG_Code_info_ATS_UB, expected_MESG_NMSG_Code_info_ATS_UB);
    CHECK_U_CHAR(g_Fuel_invalid_B, expected_g_Fuel_invalid_B);
    CHECK_U_CHAR(g_EngineFuelTypeToASW_UB, expected_g_EngineFuelTypeToASW_UB);
    CHECK_U_INT(MESG_NMSG_EngineType_N, expected_MESG_NMSG_EngineType_N);
    CHECK_U_CHAR(g_RCB_invalid_B, expected_g_RCB_invalid_B);
    CHECK_U_CHAR(g_RCBVehConfigOnToASW_UB, expected_g_RCBVehConfigOnToASW_UB);
    CHECK_U_CHAR(g_GCCC_BLKID_08_B, expected_g_GCCC_BLKID_08_B);
    CHECK_U_CHAR(g_PIB_invalid_B, expected_g_PIB_invalid_B);
    CHECK_U_CHAR(g_PIBVehConfigOnToASW_UB, expected_g_PIBVehConfigOnToASW_UB);
    CHECK_U_CHAR(DemConf_DemEnableCondition_VAR_NET_IsMcActive_CMA_PIB_B, expected_DemConf_DemEnableCondition_VAR_NET_IsMcActive_CMA_PIB_B);
    CHECK_U_CHAR(MESG_NMSG_RCBVehConfigOn_B, expected_MESG_NMSG_RCBVehConfigOn_B);
    CHECK_U_CHAR(MESG_NMSG_PIBVehConfigOn_B, expected_MESG_NMSG_PIBVehConfigOn_B);
    CHECK_U_INT(MESG_NMSG_DrvunitVeh_N, expected_MESG_NMSG_DrvunitVeh_N);
    CHECK_U_INT(MESG_NMSG_DrvUnitType_N, expected_MESG_NMSG_DrvUnitType_N);
    CHECK_U_CHAR(g_TSA_invalid_B, expected_g_TSA_invalid_B);
    CHECK_MEMORY("STM_LIMITER_TSM_TSM_Off_ByCarConfig", STM_LIMITER_TSM_TSM_Off_ByCarConfig, expected_STM_LIMITER_TSM_TSM_Off_ByCarConfig, sizeof(expected_STM_LIMITER_TSM_TSM_Off_ByCarConfig));
    CHECK_U_CHAR(g_HDC_invalid_B, expected_g_HDC_invalid_B);
    CHECK_MEMORY("STM_LIMITER_HDC_HDC_Off_ByCarConfig", STM_LIMITER_HDC_HDC_Off_ByCarConfig, expected_STM_LIMITER_HDC_HDC_Off_ByCarConfig, sizeof(expected_STM_LIMITER_HDC_HDC_Off_ByCarConfig));
    CHECK_U_CHAR(g_GCCC_BLKID_9_B, expected_g_GCCC_BLKID_9_B);
    CHECK_U_CHAR(g_HillStartAssist_invalid_B, expected_g_HillStartAssist_invalid_B);
    CHECK_MEMORY("STM_LIMITER_HHC_HHC_Off_ByCarConfig", STM_LIMITER_HHC_HHC_Off_ByCarConfig, expected_STM_LIMITER_HHC_HHC_Off_ByCarConfig, sizeof(expected_STM_LIMITER_HHC_HHC_Off_ByCarConfig));
    CHECK_U_CHAR(g_GCCC_BLKID_15_B, expected_g_GCCC_BLKID_15_B);
    CHECK_U_CHAR(g_AEB_invalid_B, expected_g_AEB_invalid_B);
    CHECK_U_CHAR(g_RCTA_invalid_B, expected_g_RCTA_invalid_B);
    CHECK_MEMORY("STM_LIMITER_AEB_AEB_Off_ByCarConfig", STM_LIMITER_AEB_AEB_Off_ByCarConfig, expected_STM_LIMITER_AEB_AEB_Off_ByCarConfig, sizeof(expected_STM_LIMITER_AEB_AEB_Off_ByCarConfig));
    CHECK_MEMORY("STM_LIMITER_AWB_AWB_Off_ByCarConfig", STM_LIMITER_AWB_AWB_Off_ByCarConfig, expected_STM_LIMITER_AWB_AWB_Off_ByCarConfig, sizeof(expected_STM_LIMITER_AWB_AWB_Off_ByCarConfig));
    CHECK_U_CHAR(g_GCCC_BLKID_3B_B, expected_g_GCCC_BLKID_3B_B);
    CHECK_U_CHAR(g_VAC_invalid_B, expected_g_VAC_invalid_B);
    CHECK_MEMORY("STM_LIMITER_HBB_HBB_Off_ByCarConfig", STM_LIMITER_HBB_HBB_Off_ByCarConfig, expected_STM_LIMITER_HBB_HBB_Off_ByCarConfig, sizeof(expected_STM_LIMITER_HBB_HBB_Off_ByCarConfig));
    CHECK_U_INT(VARIANT_GCCC_CDPRAMVars, expected_VARIANT_GCCC_CDPRAMVars);
    CHECK_U_CHAR(MESG_NMSG_Vacsensoravl_B, expected_MESG_NMSG_Vacsensoravl_B);
    CHECK_U_CHAR(DemConf_DemEnableCondition_NET_IsMcActive_CMA_VacuumSnsr_B, expected_DemConf_DemEnableCondition_NET_IsMcActive_CMA_VacuumSnsr_B);
    CHECK_U_CHAR(g_GCCC_BLKID_27_B, expected_g_GCCC_BLKID_27_B);
    CHECK_U_CHAR(g_ITPMSConfig_invalid_B, expected_g_ITPMSConfig_invalid_B);
    CHECK_U_CHAR(g_ITPMS_value_UB, expected_g_ITPMS_value_UB);
    CHECK_U_CHAR(MESG_NMSG_ITPMSConfig_UB, expected_MESG_NMSG_ITPMSConfig_UB);
    CHECK_U_CHAR(g_COOLANT_INDICATION_invalid_B, expected_g_COOLANT_INDICATION_invalid_B);
    CHECK_U_CHAR(g_COOLANT_value_B, expected_g_COOLANT_value_B);
    CHECK_U_CHAR(MESG_NMSG_CCC_coolantlevel_B, expected_MESG_NMSG_CCC_coolantlevel_B);
    CHECK_U_CHAR(g_Activesuspension_invalid_B, expected_g_Activesuspension_invalid_B);
    CHECK_U_CHAR(g_ACTIVESUSPENSION_value_B, expected_g_ACTIVESUSPENSION_value_B);
    CHECK_U_CHAR(MESG_NMSG_WO_Act_Susp_B, expected_MESG_NMSG_WO_Act_Susp_B);
    CHECK_U_INT(DemConf_DemNode_SuspSUM, expected_DemConf_DemNode_SuspSUM);
    CHECK_U_CHAR(MESG_NMSG_CCC_Activesuspension_B, expected_MESG_NMSG_CCC_Activesuspension_B);
    CHECK_U_CHAR(g_GCCC_BLKID_07_B, expected_g_GCCC_BLKID_07_B);
    CHECK_U_CHAR(g_DIAGSYS_invalid_B, expected_g_DIAGSYS_invalid_B);
    CHECK_U_CHAR(MESG_NMSG_DiagSys_OBD2_B, expected_MESG_NMSG_DiagSys_OBD2_B);
    CHECK_U_CHAR(g_IMU_invalid_B, expected_g_IMU_invalid_B);
    CHECK_U_CHAR(g_IMUs_Without_RollrateSensor_B, expected_g_IMUs_Without_RollrateSensor_B);
    CHECK_U_CHAR(g_GCCC_BLKID_05_B, expected_g_GCCC_BLKID_05_B);
    CHECK_U_CHAR(g_RBS_invalid_B, expected_g_RBS_invalid_B);
    CHECK_MEMORY("STM_LIMITER_RBC_RBC_Off_ByCarConfig", STM_LIMITER_RBC_RBC_Off_ByCarConfig, expected_STM_LIMITER_RBC_RBC_Off_ByCarConfig, sizeof(expected_STM_LIMITER_RBC_RBC_Off_ByCarConfig));
    CHECK_U_CHAR(g_DC1E_PWR_FWD, expected_g_DC1E_PWR_FWD);
    CHECK_U_CHAR(g_BSG_PWR_AWD, expected_g_BSG_PWR_AWD);
    CHECK_MEMORY("STM_LIMITER_ABA_ABA_Off_ByEEPROM", STM_LIMITER_ABA_ABA_Off_ByEEPROM, expected_STM_LIMITER_ABA_ABA_Off_ByEEPROM, sizeof(expected_STM_LIMITER_ABA_ABA_Off_ByEEPROM));
    CHECK_MEMORY("STM_LIMITER_ABP_ABP_Off_ByEEPROM", STM_LIMITER_ABP_ABP_Off_ByEEPROM, expected_STM_LIMITER_ABP_ABP_Off_ByEEPROM, sizeof(expected_STM_LIMITER_ABP_ABP_Off_ByEEPROM));
    CHECK_MEMORY("STM_LIMITER_AVH_AVH_Off_ByEEPROM", STM_LIMITER_AVH_AVH_Off_ByEEPROM, expected_STM_LIMITER_AVH_AVH_Off_ByEEPROM, sizeof(expected_STM_LIMITER_AVH_AVH_Off_ByEEPROM));
    CHECK_MEMORY("STM_LIMITER_BTM_BTM_Off_ByEEPROM", STM_LIMITER_BTM_BTM_Off_ByEEPROM, expected_STM_LIMITER_BTM_BTM_Off_ByEEPROM, sizeof(expected_STM_LIMITER_BTM_BTM_Off_ByEEPROM));
    CHECK_MEMORY("STM_LIMITER_CDP_CDP_Off_ByEEPROM", STM_LIMITER_CDP_CDP_Off_ByEEPROM, expected_STM_LIMITER_CDP_CDP_Off_ByEEPROM, sizeof(expected_STM_LIMITER_CDP_CDP_Off_ByEEPROM));
    CHECK_MEMORY("STM_LIMITER_DCT_C_DCT_C_Off_ByEEPROM", STM_LIMITER_DCT_C_DCT_C_Off_ByEEPROM, expected_STM_LIMITER_DCT_C_DCT_C_Off_ByEEPROM, sizeof(expected_STM_LIMITER_DCT_C_DCT_C_Off_ByEEPROM));
    CHECK_MEMORY("STM_LIMITER_DST_MSA_DST_MSA_Off_ByEEPROM", STM_LIMITER_DST_MSA_DST_MSA_Off_ByEEPROM, expected_STM_LIMITER_DST_MSA_DST_MSA_Off_ByEEPROM, sizeof(expected_STM_LIMITER_DST_MSA_DST_MSA_Off_ByEEPROM));
    CHECK_MEMORY("STM_LIMITER_DST_MSB_DST_MSB_Off_ByEEPROM", STM_LIMITER_DST_MSB_DST_MSB_Off_ByEEPROM, expected_STM_LIMITER_DST_MSB_DST_MSB_Off_ByEEPROM, sizeof(expected_STM_LIMITER_DST_MSB_DST_MSB_Off_ByEEPROM));
    CHECK_MEMORY("STM_LIMITER_DST_OSF_DST_OSF_Off_ByEEPROM", STM_LIMITER_DST_OSF_DST_OSF_Off_ByEEPROM, expected_STM_LIMITER_DST_OSF_DST_OSF_Off_ByEEPROM, sizeof(expected_STM_LIMITER_DST_OSF_DST_OSF_Off_ByEEPROM));
    CHECK_MEMORY("STM_LIMITER_DST_TLF_DST_TLF_Off_ByEEPROM", STM_LIMITER_DST_TLF_DST_TLF_Off_ByEEPROM, expected_STM_LIMITER_DST_TLF_DST_TLF_Off_ByEEPROM, sizeof(expected_STM_LIMITER_DST_TLF_DST_TLF_Off_ByEEPROM));
    CHECK_MEMORY("STM_LIMITER_DST_TSM_DST_TSM_Off_ByEEPROM", STM_LIMITER_DST_TSM_DST_TSM_Off_ByEEPROM, expected_STM_LIMITER_DST_TSM_DST_TSM_Off_ByEEPROM, sizeof(expected_STM_LIMITER_DST_TSM_DST_TSM_Off_ByEEPROM));
    CHECK_MEMORY("STM_LIMITER_DST_USF_DST_USF_Off_ByEEPROM", STM_LIMITER_DST_USF_DST_USF_Off_ByEEPROM, expected_STM_LIMITER_DST_USF_DST_USF_Off_ByEEPROM, sizeof(expected_STM_LIMITER_DST_USF_DST_USF_Off_ByEEPROM));
    CHECK_MEMORY("STM_LIMITER_EBP_EBP_Off_ByEEPROM", STM_LIMITER_EBP_EBP_Off_ByEEPROM, expected_STM_LIMITER_EBP_EBP_Off_ByEEPROM, sizeof(expected_STM_LIMITER_EBP_EBP_Off_ByEEPROM));
    CHECK_MEMORY("STM_LIMITER_HBA_HBA_Off_ByEEPROM", STM_LIMITER_HBA_HBA_Off_ByEEPROM, expected_STM_LIMITER_HBA_HBA_Off_ByEEPROM, sizeof(expected_STM_LIMITER_HBA_HBA_Off_ByEEPROM));
    CHECK_MEMORY("STM_LIMITER_HBB_HBB_Off_ByEEPROM", STM_LIMITER_HBB_HBB_Off_ByEEPROM, expected_STM_LIMITER_HBB_HBB_Off_ByEEPROM, sizeof(expected_STM_LIMITER_HBB_HBB_Off_ByEEPROM));
    CHECK_MEMORY("STM_LIMITER_HFC_HFC_Off_ByEEPROM", STM_LIMITER_HFC_HFC_Off_ByEEPROM, expected_STM_LIMITER_HFC_HFC_Off_ByEEPROM, sizeof(expected_STM_LIMITER_HFC_HFC_Off_ByEEPROM));
    CHECK_MEMORY("STM_LIMITER_HRB_HRB_Off_ByEEPROM", STM_LIMITER_HRB_HRB_Off_ByEEPROM, expected_STM_LIMITER_HRB_HRB_Off_ByEEPROM, sizeof(expected_STM_LIMITER_HRB_HRB_Off_ByEEPROM));
    CHECK_MEMORY("STM_LIMITER_HSM_HSM_Off_ByEEPROM", STM_LIMITER_HSM_HSM_Off_ByEEPROM, expected_STM_LIMITER_HSM_HSM_Off_ByEEPROM, sizeof(expected_STM_LIMITER_HSM_HSM_Off_ByEEPROM));
    CHECK_MEMORY("STM_LIMITER_LFC_LFC_Off_ByEEPROM", STM_LIMITER_LFC_LFC_Off_ByEEPROM, expected_STM_LIMITER_LFC_LFC_Off_ByEEPROM, sizeof(expected_STM_LIMITER_LFC_LFC_Off_ByEEPROM));
    CHECK_MEMORY("STM_LIMITER_SCM_SCM_Off_ByEEPROM", STM_LIMITER_SCM_SCM_Off_ByEEPROM, expected_STM_LIMITER_SCM_SCM_Off_ByEEPROM, sizeof(expected_STM_LIMITER_SCM_SCM_Off_ByEEPROM));
    CHECK_MEMORY("STM_LIMITER_TSM_TSM_Off_ByEEPROM", STM_LIMITER_TSM_TSM_Off_ByEEPROM, expected_STM_LIMITER_TSM_TSM_Off_ByEEPROM, sizeof(expected_STM_LIMITER_TSM_TSM_Off_ByEEPROM));
}

/* Prototypes for test functions */
void run_tests();
void test_FNC_VAR09_Cevt_OutputDriver_1(int);
void test_FNC_VAR09_Cevt_OutputDriver_2(int);
void test_FNC_VAR09_Cevt_OutputDriver_3(int);
void test_FNC_VAR09_Cevt_OutputDriver_4(int);
void test_FNC_VAR09_Cevt_OutputDriver_5(int);
void test_FNC_VAR09_Cevt_OutputDriver_6(int);
void test_FNC_VAR09_Cevt_OutputDriver_7(int);
void test_FNC_VAR09_Cevt_OutputDriver_8(int);
void test_FNC_VAR09_Cevt_OutputDriver_9(int);
void test_FNC_VAR09_Cevt_OutputDriver_10(int);
void test_FNC_VAR09_Cevt_OutputDriver_11(int);
void test_FNC_VAR09_Cevt_OutputDriver_12(int);
void test_FNC_VAR09_Cevt_OutputDriver_13(int);
void test_FNC_VAR09_Cevt_OutputDriver_14(int);
void test_FNC_VAR09_Cevt_OutputDriver_15(int);
void test_FNC_VAR09_Cevt_OutputDriver_16(int);
void test_FNC_VAR09_Cevt_OutputDriver_17(int);
void test_FNC_VAR09_Cevt_OutputDriver_18(int);
void test_FNC_VAR09_Cevt_OutputDriver_19(int);
void test_FNC_VAR09_Cevt_OutputDriver_20(int);
void test_FNC_VAR09_Cevt_OutputDriver_21(int);
void test_FNC_VAR09_Cevt_OutputDriver_22(int);
void test_FNC_VAR09_Cevt_OutputDriver_23(int);
void test_FNC_VAR09_Cevt_OutputDriver_24(int);
void test_FNC_VAR09_Cevt_OutputDriver_25(int);
void test_FNC_VAR09_Cevt_OutputDriver_26(int);
void test_FNC_VAR09_Cevt_OutputDriver_27(int);
void test_FNC_VAR09_Cevt_OutputDriver_28(int);
void test_FNC_VAR09_Cevt_OutputDriver_29(int);
void test_FNC_VAR09_Cevt_OutputDriver_30(int);
void test_FNC_VAR09_Cevt_OutputDriver_31(int);
void test_FNC_VAR09_Cevt_OutputDriver_32(int);
void test_FNC_VAR09_Cevt_OutputDriver_33(int);
void test_FNC_VAR09_Cevt_OutputDriver_34(int);
void test_FNC_VAR09_Cevt_OutputDriver_35(int);
void test_FNC_VAR09_Cevt_OutputDriver_36(int);
void test_FNC_VAR09_Cevt_OutputDriver_37(int);
void test_FNC_VAR09_Cevt_OutputDriver_38(int);
void test_FNC_VAR09_Cevt_OutputDriver_39(int);
void test_FNC_VAR09_Cevt_OutputDriver_40(int);
void test_FNC_VAR09_Cevt_OutputDriver_41(int);
void test_FNC_VAR09_Cevt_OutputDriver_42(int);
void test_FNC_VAR09_Cevt_OutputDriver_43(int);
void test_FNC_VAR09_Cevt_OutputDriver_44(int);
void test_FNC_VAR09_Cevt_OutputDriver_45(int);
void test_FNC_VAR09_Cevt_OutputDriver_46(int);
void test_FNC_VAR09_Cevt_OutputDriver_47(int);
void test_FNC_VAR09_Cevt_OutputDriver_48(int);
void test_FNC_VAR09_Cevt_OutputDriver_49(int);
void test_FNC_VAR09_Cevt_OutputDriver_50(int);
void test_FNC_VAR09_Cevt_OutputDriver_51(int);
void test_FNC_VAR09_Cevt_OutputDriver_52(int);
void test_FNC_VAR09_Cevt_OutputDriver_53(int);
void test_FNC_VAR09_Cevt_OutputDriver_54(int);
void test_FNC_VAR09_Cevt_OutputDriver_55(int);
void test_FNC_VAR09_Cevt_OutputDriver_56(int);
void test_FNC_VAR09_Cevt_OutputDriver_57(int);
void test_FNC_VAR09_Cevt_OutputDriver_58(int);
void test_FNC_VAR09_Cevt_OutputDriver_59(int);
void test_FNC_VAR09_Cevt_OutputDriver_60(int);
void test_FNC_VAR09_Cevt_OutputDriver_61(int);
void test_FNC_VAR09_Cevt_OutputDriver_62(int);
void test_FNC_VAR09_Cevt_OutputDriver_63(int);
void test_FNC_VAR09_Cevt_OutputDriver_64(int);
void test_FNC_VAR09_Cevt_OutputDriver_65(int);
void test_FNC_VAR09_Cevt_OutputDriver_66(int);
void test_FNC_VAR09_Cevt_OutputDriver_67(int);
void test_FNC_VAR09_Cevt_OutputDriver_68(int);
void test_FNC_VAR09_Cevt_OutputDriver_69(int);
void test_FNC_VAR09_Cevt_OutputDriver_70(int);
void test_FNC_VAR09_Cevt_OutputDriver_71(int);
void test_FNC_VAR09_Cevt_OutputDriver_72(int);
void test_FNC_VAR09_Cevt_OutputDriver_73(int);
void test_FNC_VAR09_Cevt_OutputDriver_74(int);
void test_FNC_VAR09_Cevt_OutputDriver_75(int);
void test_FNC_VAR09_Cevt_OutputDriver_76(int);
void test_FNC_VAR09_Cevt_OutputDriver_77(int);
void test_FNC_VAR09_Cevt_OutputDriver_78(int);
void test_FNC_VAR09_Cevt_OutputDriver_79(int);
void test_FNC_VAR09_Cevt_OutputDriver_80(int);
void test_FNC_VAR09_Cevt_OutputDriver_81(int);
void test_FNC_VAR09_Cevt_OutputDriver_82(int);
void test_FNC_VAR09_Cevt_OutputDriver_83(int);
void test_FNC_VAR09_Cevt_OutputDriver_84(int);
void test_FNC_VAR09_Cevt_OutputDriver_85(int);
void test_FNC_VAR09_Cevt_OutputDriver_86(int);
void test_FNC_VAR09_Cevt_OutputDriver_87(int);
void test_FNC_VAR09_Cevt_OutputDriver_88(int);
void test_FNC_VAR09_Cevt_OutputDriver_89(int);
void test_FNC_VAR09_Cevt_OutputDriver_90(int);
void test_FNC_VAR09_Cevt_OutputDriver_91(int);
void test_FNC_VAR09_Cevt_OutputDriver_92(int);
void test_FNC_VAR09_Cevt_OutputDriver_93(int);
void test_FNC_VAR09_Cevt_OutputDriver_94(int);
void test_FNC_VAR09_Cevt_OutputDriver_95(int);
void test_FNC_VAR09_Cevt_OutputDriver_96(int);
void test_FNC_VAR09_Cevt_OutputDriver_97(int);
void test_FNC_VAR09_Cevt_OutputDriver_98(int);
void test_FNC_VAR09_Cevt_OutputDriver_99(int);
void test_FNC_VAR09_Cevt_OutputDriver_100(int);
void test_FNC_VAR09_Cevt_OutputDriver_101(int);
void test_FNC_VAR09_Cevt_OutputDriver_102(int);
void test_FNC_VAR09_Cevt_OutputDriver_103(int);
void test_FNC_VAR09_Cevt_OutputDriver_104(int);
void test_FNC_VAR09_Cevt_OutputDriver_105(int);
void test_FNC_VAR09_Cevt_OutputDriver_106(int);
void test_FNC_VAR09_Cevt_OutputDriver_107(int);
void test_FNC_VAR09_Cevt_OutputDriver_108(int);
void test_FNC_VAR09_Cevt_OutputDriver_109(int);
void test_FNC_VAR09_Cevt_OutputDriver_110(int);
void test_FNC_VAR09_Cevt_OutputDriver_111(int);
void test_FNC_VAR09_Cevt_OutputDriver_112(int);
void test_FNC_VAR09_Cevt_OutputDriver_113(int);
void test_FNC_VAR09_Cevt_OutputDriver_114(int);
void test_FNC_VAR09_Cevt_OutputDriver_115(int);
void test_FNC_VAR09_Cevt_OutputDriver_116(int);
void test_FNC_VAR09_Cevt_OutputDriver_117(int);
void test_FNC_VAR09_Cevt_OutputDriver_118(int);
void test_FNC_VAR09_Cevt_OutputDriver_119(int);
void test_FNC_VAR09_Cevt_OutputDriver_120(int);
void test_FNC_VAR09_Cevt_OutputDriver_121(int);
void test_FNC_VAR09_Cevt_OutputDriver_122(int);
void test_FNC_VAR09_Cevt_OutputDriver_123(int);
void test_FNC_VAR09_Cevt_OutputDriver_124(int);
void test_FNC_VAR09_Cevt_OutputDriver_125(int);
void test_FNC_VAR09_Cevt_OutputDriver_126(int);
void test_FNC_VAR09_Cevt_OutputDriver_127(int);
void test_FNC_VAR09_Cevt_OutputDriver_128(int);
void test_FNC_VAR09_Cevt_OutputDriver_129(int);
void test_FNC_VAR09_Cevt_OutputDriver_130(int);
void test_FNC_VAR09_Cevt_OutputDriver_131(int);
void test_FNC_VAR09_Cevt_OutputDriver_132(int);
void test_FNC_VAR09_Cevt_OutputDriver_133(int);
void test_FNC_VAR09_Cevt_OutputDriver_134(int);
void test_FNC_VAR09_Cevt_OutputDriver_135(int);
void test_FNC_VAR09_Cevt_OutputDriver_136(int);
void test_FNC_VAR09_Cevt_OutputDriver_137(int);
void test_FNC_VAR09_Cevt_OutputDriver_138(int);
void test_FNC_VAR09_Cevt_OutputDriver_139(int);
void test_FNC_VAR09_Cevt_OutputDriver_140(int);
void test_FNC_VAR09_Cevt_OutputDriver_141(int);
void test_FNC_VAR09_Cevt_OutputDriver_142(int);
void test_FNC_VAR09_Cevt_OutputDriver_143(int);
void test_FNC_VAR09_Cevt_OutputDriver_144(int);
void test_FNC_VAR09_Cevt_OutputDriver_145(int);
void test_FNC_VAR09_Cevt_OutputDriver_146(int);
void test_FNC_VAR09_Cevt_OutputDriver_147(int);
void test_FNC_VAR09_Cevt_OutputDriver_148(int);
void test_FNC_VAR09_Cevt_OutputDriver_149(int);
void test_FNC_VAR09_Cevt_OutputDriver_150(int);
void test_FNC_VAR09_Cevt_OutputDriver_151(int);
void test_FNC_VAR09_Cevt_OutputDriver_152(int);
void test_FNC_VAR09_Cevt_OutputDriver_153(int);
void test_FNC_VAR09_Cevt_OutputDriver_154(int);
void test_FNC_VAR09_Cevt_OutputDriver_155(int);
void test_FNC_VAR09_Cevt_OutputDriver_156(int);
void test_FNC_VAR09_Cevt_OutputDriver_157(int);
void test_FNC_VAR09_Cevt_OutputDriver_158(int);
void test_FNC_VAR09_Cevt_OutputDriver_159(int);
void test_FNC_VAR09_Cevt_OutputDriver_160(int);
void test_FNC_VAR09_Cevt_OutputDriver_161(int);
void test_FNC_VAR09_Cevt_OutputDriver_162(int);
void test_FNC_VAR09_Cevt_OutputDriver_163(int);
void test_FNC_VAR09_Cevt_OutputDriver_164(int);
void test_FNC_VAR09_Cevt_OutputDriver_165(int);
void test_FNC_VAR09_Cevt_OutputDriver_166(int);
void test_FNC_VAR09_Cevt_OutputDriver_167(int);

/*****************************************************************************/
/* Coverage Analysis                                                         */
/*****************************************************************************/
/* Coverage Rule Set: Report all Metrics */
static void rule_set(char* cppca_sut,
                     char* cppca_context)
{
    START_TEST("COVERAGE RULE SET",
               "Report all Metrics");
#ifdef CANTPP_SUBSET_DEFERRED_ANALYSIS
    TEST_SCRIPT_WARNING("Coverage Rule Set ignored in deferred analysis mode\n");
#elif CANTPP_COVERAGE_INSTRUMENTATION_DISABLED
    TEST_SCRIPT_WARNING("Coverage Instrumentation has been disabled\n");
#elif CANTPP_INSTRUMENTATION_DISABLED
    TEST_SCRIPT_WARNING("Instrumentation has been disabled\n");
#else
    REPORT_COVERAGE(cppca_entrypoint_cov|
                    cppca_statement_cov|
                    cppca_basicblock_cov|
                    cppca_callreturn_cov|
                    cppca_decision_cov|
                    cppca_relational_cov|
                    cppca_loop_cov|
                    cppca_booloper_cov|
                    cppca_booleff_cov,
                    cppca_sut,
                    cppca_all_details|cppca_include_catch,
                    cppca_context);
#endif
    END_TEST();
}

/*****************************************************************************/
/* Program Entry Point                                                       */
/*****************************************************************************/
int main()
{
    CONFIGURE_COVERAGE("cov:boolcomb:yes");
    OPEN_LOG("test_VAR09_OutputDriver_CEVT.ctr", false, 100);
    START_SCRIPT("VAR09_OutputDriver_CEVT", true);

    run_tests();

    return !END_SCRIPT(true);
}

/*****************************************************************************/
/* Test Control                                                              */
/*****************************************************************************/
/* run_tests() contains calls to the individual test cases, you can turn test*/
/* cases off by adding comments*/
void run_tests()
{
    test_FNC_VAR09_Cevt_OutputDriver_1(1);
    test_FNC_VAR09_Cevt_OutputDriver_2(1);
    test_FNC_VAR09_Cevt_OutputDriver_3(1);
    test_FNC_VAR09_Cevt_OutputDriver_4(1);
    test_FNC_VAR09_Cevt_OutputDriver_5(1);
    test_FNC_VAR09_Cevt_OutputDriver_6(1);
    test_FNC_VAR09_Cevt_OutputDriver_7(1);
    test_FNC_VAR09_Cevt_OutputDriver_8(1);
    test_FNC_VAR09_Cevt_OutputDriver_9(1);
    test_FNC_VAR09_Cevt_OutputDriver_10(1);
    test_FNC_VAR09_Cevt_OutputDriver_11(1);
    test_FNC_VAR09_Cevt_OutputDriver_12(1);
    test_FNC_VAR09_Cevt_OutputDriver_13(1);
    test_FNC_VAR09_Cevt_OutputDriver_14(1);
    test_FNC_VAR09_Cevt_OutputDriver_15(1);
    test_FNC_VAR09_Cevt_OutputDriver_16(1);
    test_FNC_VAR09_Cevt_OutputDriver_17(1);
    test_FNC_VAR09_Cevt_OutputDriver_18(1);
    test_FNC_VAR09_Cevt_OutputDriver_19(1);
    test_FNC_VAR09_Cevt_OutputDriver_20(1);
    test_FNC_VAR09_Cevt_OutputDriver_21(1);
    test_FNC_VAR09_Cevt_OutputDriver_22(1);
    test_FNC_VAR09_Cevt_OutputDriver_23(1);
    test_FNC_VAR09_Cevt_OutputDriver_24(1);
    test_FNC_VAR09_Cevt_OutputDriver_25(1);
    test_FNC_VAR09_Cevt_OutputDriver_26(1);
    test_FNC_VAR09_Cevt_OutputDriver_27(1);
    test_FNC_VAR09_Cevt_OutputDriver_28(1);
    test_FNC_VAR09_Cevt_OutputDriver_29(1);
    test_FNC_VAR09_Cevt_OutputDriver_30(1);
    test_FNC_VAR09_Cevt_OutputDriver_31(1);
    test_FNC_VAR09_Cevt_OutputDriver_32(1);
    test_FNC_VAR09_Cevt_OutputDriver_33(1);
    test_FNC_VAR09_Cevt_OutputDriver_34(1);
    test_FNC_VAR09_Cevt_OutputDriver_35(1);
    test_FNC_VAR09_Cevt_OutputDriver_36(1);
    test_FNC_VAR09_Cevt_OutputDriver_37(1);
    test_FNC_VAR09_Cevt_OutputDriver_38(1);
    test_FNC_VAR09_Cevt_OutputDriver_39(1);
    test_FNC_VAR09_Cevt_OutputDriver_40(1);
    test_FNC_VAR09_Cevt_OutputDriver_41(1);
    test_FNC_VAR09_Cevt_OutputDriver_42(1);
    test_FNC_VAR09_Cevt_OutputDriver_43(1);
    test_FNC_VAR09_Cevt_OutputDriver_44(1);
    test_FNC_VAR09_Cevt_OutputDriver_45(1);
    test_FNC_VAR09_Cevt_OutputDriver_46(1);
    test_FNC_VAR09_Cevt_OutputDriver_47(1);
    test_FNC_VAR09_Cevt_OutputDriver_48(1);
    test_FNC_VAR09_Cevt_OutputDriver_49(1);
    test_FNC_VAR09_Cevt_OutputDriver_50(1);
    test_FNC_VAR09_Cevt_OutputDriver_51(1);
    test_FNC_VAR09_Cevt_OutputDriver_52(1);
    test_FNC_VAR09_Cevt_OutputDriver_53(1);
    test_FNC_VAR09_Cevt_OutputDriver_54(1);
    test_FNC_VAR09_Cevt_OutputDriver_55(1);
    test_FNC_VAR09_Cevt_OutputDriver_56(1);
    test_FNC_VAR09_Cevt_OutputDriver_57(1);
    test_FNC_VAR09_Cevt_OutputDriver_58(1);
    test_FNC_VAR09_Cevt_OutputDriver_59(1);
    test_FNC_VAR09_Cevt_OutputDriver_60(1);
    test_FNC_VAR09_Cevt_OutputDriver_61(1);
    test_FNC_VAR09_Cevt_OutputDriver_62(1);
    test_FNC_VAR09_Cevt_OutputDriver_63(1);
    test_FNC_VAR09_Cevt_OutputDriver_64(1);
    test_FNC_VAR09_Cevt_OutputDriver_65(1);
    test_FNC_VAR09_Cevt_OutputDriver_66(1);
    test_FNC_VAR09_Cevt_OutputDriver_67(1);
    test_FNC_VAR09_Cevt_OutputDriver_68(1);
    test_FNC_VAR09_Cevt_OutputDriver_69(1);
    test_FNC_VAR09_Cevt_OutputDriver_70(1);
    test_FNC_VAR09_Cevt_OutputDriver_71(1);
    test_FNC_VAR09_Cevt_OutputDriver_72(1);
    test_FNC_VAR09_Cevt_OutputDriver_73(1);
    test_FNC_VAR09_Cevt_OutputDriver_74(1);
    test_FNC_VAR09_Cevt_OutputDriver_75(1);
    test_FNC_VAR09_Cevt_OutputDriver_76(1);
    test_FNC_VAR09_Cevt_OutputDriver_77(1);
    test_FNC_VAR09_Cevt_OutputDriver_78(1);
    test_FNC_VAR09_Cevt_OutputDriver_79(1);
    test_FNC_VAR09_Cevt_OutputDriver_80(1);
    test_FNC_VAR09_Cevt_OutputDriver_81(1);
    test_FNC_VAR09_Cevt_OutputDriver_82(1);
    test_FNC_VAR09_Cevt_OutputDriver_83(1);
    test_FNC_VAR09_Cevt_OutputDriver_84(1);
    test_FNC_VAR09_Cevt_OutputDriver_85(1);
    test_FNC_VAR09_Cevt_OutputDriver_86(1);
    test_FNC_VAR09_Cevt_OutputDriver_87(1);
    test_FNC_VAR09_Cevt_OutputDriver_88(1);
    test_FNC_VAR09_Cevt_OutputDriver_89(1);
    test_FNC_VAR09_Cevt_OutputDriver_90(1);
    test_FNC_VAR09_Cevt_OutputDriver_91(1);
    test_FNC_VAR09_Cevt_OutputDriver_92(1);
    test_FNC_VAR09_Cevt_OutputDriver_93(1);
    test_FNC_VAR09_Cevt_OutputDriver_94(1);
    test_FNC_VAR09_Cevt_OutputDriver_95(1);
    test_FNC_VAR09_Cevt_OutputDriver_96(1);
    test_FNC_VAR09_Cevt_OutputDriver_97(1);
    test_FNC_VAR09_Cevt_OutputDriver_98(1);
    test_FNC_VAR09_Cevt_OutputDriver_99(1);
    test_FNC_VAR09_Cevt_OutputDriver_100(1);
    test_FNC_VAR09_Cevt_OutputDriver_101(1);
    test_FNC_VAR09_Cevt_OutputDriver_102(1);
    test_FNC_VAR09_Cevt_OutputDriver_103(1);
    test_FNC_VAR09_Cevt_OutputDriver_104(1);
    test_FNC_VAR09_Cevt_OutputDriver_105(1);
    test_FNC_VAR09_Cevt_OutputDriver_106(1);
    test_FNC_VAR09_Cevt_OutputDriver_107(1);
    test_FNC_VAR09_Cevt_OutputDriver_108(1);
    test_FNC_VAR09_Cevt_OutputDriver_109(1);
    test_FNC_VAR09_Cevt_OutputDriver_110(1);
    test_FNC_VAR09_Cevt_OutputDriver_111(1);
    test_FNC_VAR09_Cevt_OutputDriver_112(1);
    test_FNC_VAR09_Cevt_OutputDriver_113(1);
    test_FNC_VAR09_Cevt_OutputDriver_114(1);
    test_FNC_VAR09_Cevt_OutputDriver_115(1);
    test_FNC_VAR09_Cevt_OutputDriver_116(1);
    test_FNC_VAR09_Cevt_OutputDriver_117(1);
    test_FNC_VAR09_Cevt_OutputDriver_118(1);
    test_FNC_VAR09_Cevt_OutputDriver_119(1);
    test_FNC_VAR09_Cevt_OutputDriver_120(1);
    test_FNC_VAR09_Cevt_OutputDriver_121(1);
    test_FNC_VAR09_Cevt_OutputDriver_122(1);
    test_FNC_VAR09_Cevt_OutputDriver_123(1);
    test_FNC_VAR09_Cevt_OutputDriver_124(1);
    test_FNC_VAR09_Cevt_OutputDriver_125(1);
    test_FNC_VAR09_Cevt_OutputDriver_126(1);
    test_FNC_VAR09_Cevt_OutputDriver_127(1);
    test_FNC_VAR09_Cevt_OutputDriver_128(1);
    test_FNC_VAR09_Cevt_OutputDriver_129(1);
    test_FNC_VAR09_Cevt_OutputDriver_130(1);
    test_FNC_VAR09_Cevt_OutputDriver_131(1);
    test_FNC_VAR09_Cevt_OutputDriver_132(1);
    test_FNC_VAR09_Cevt_OutputDriver_133(1);
    test_FNC_VAR09_Cevt_OutputDriver_134(1);
    test_FNC_VAR09_Cevt_OutputDriver_135(1);
    test_FNC_VAR09_Cevt_OutputDriver_136(1);
    test_FNC_VAR09_Cevt_OutputDriver_137(1);
    test_FNC_VAR09_Cevt_OutputDriver_138(1);
    test_FNC_VAR09_Cevt_OutputDriver_139(1);
    test_FNC_VAR09_Cevt_OutputDriver_140(1);
    test_FNC_VAR09_Cevt_OutputDriver_141(1);
    test_FNC_VAR09_Cevt_OutputDriver_142(1);
    test_FNC_VAR09_Cevt_OutputDriver_143(1);
    test_FNC_VAR09_Cevt_OutputDriver_144(1);
    test_FNC_VAR09_Cevt_OutputDriver_145(1);
    test_FNC_VAR09_Cevt_OutputDriver_146(1);
    test_FNC_VAR09_Cevt_OutputDriver_147(1);
    test_FNC_VAR09_Cevt_OutputDriver_148(1);
    test_FNC_VAR09_Cevt_OutputDriver_149(1);
    test_FNC_VAR09_Cevt_OutputDriver_150(1);
    test_FNC_VAR09_Cevt_OutputDriver_151(1);
    test_FNC_VAR09_Cevt_OutputDriver_152(1);
    test_FNC_VAR09_Cevt_OutputDriver_153(1);
    test_FNC_VAR09_Cevt_OutputDriver_154(1);
    test_FNC_VAR09_Cevt_OutputDriver_155(1);
    test_FNC_VAR09_Cevt_OutputDriver_156(1);
    test_FNC_VAR09_Cevt_OutputDriver_157(1);
    test_FNC_VAR09_Cevt_OutputDriver_158(1);
    test_FNC_VAR09_Cevt_OutputDriver_159(1);
    test_FNC_VAR09_Cevt_OutputDriver_160(1);
    test_FNC_VAR09_Cevt_OutputDriver_161(1);
    test_FNC_VAR09_Cevt_OutputDriver_162(1);
    test_FNC_VAR09_Cevt_OutputDriver_163(1);
    test_FNC_VAR09_Cevt_OutputDriver_164(1);
    test_FNC_VAR09_Cevt_OutputDriver_165(1);
    test_FNC_VAR09_Cevt_OutputDriver_166(1);
    test_FNC_VAR09_Cevt_OutputDriver_167(1);

    rule_set("*", "*");
    EXPORT_COVERAGE("test_VAR09_OutputDriver_CEVT.cov", cppca_export_replace);
}

/*****************************************************************************/
/* Test Cases                                                                */
/*****************************************************************************/

void test_FNC_VAR09_Cevt_OutputDriver_1(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 1;
    g_Gearbox_invalid_B =0;
    GCCC_CDPRAMVars[GCCC_GEARBOX_B3]=0;
    GCCC_CDPRAMVars[GCCC_GEARBOXTYPE_B4]=0;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_MESG_NMSG_Gearbox_B = 0x00 ; 
    expected_MESG_NMSG_GearboxType_N = 2 ; 
    expected_MESG_NMSG_GearboxType_FA_N = 2 ; 
    expected_MESG_NMSG_GearboxType_RA_N = 2 ; 
    expected_MESG_NMSG_DrvUnitType_RA_N = 3 ; 
    expected_MESG_NMSG_VehicleType_N = 1 ; 
    expected_MESG_NMSG_Power_Source_ATS_UB = 0x00 ; 
    expected_MESG_NMSG_Code_info_ATS_UB = 0x00 ; 
    expected_MESG_NMSG_RCBVehConfigOn_B = 0x00 ; 
    expected_MESG_NMSG_PIBVehConfigOn_B = 0x00 ; 
    expected_MESG_NMSG_DrvunitVeh_N = 0 ; 
    expected_MESG_NMSG_DrvUnitType_N = 1 ; 
    expected_MESG_NMSG_Vacsensoravl_B = 0x00 ; 
    expected_g_ITPMS_value_UB = 0x01 ; 
    expected_MESG_NMSG_ITPMSConfig_UB = 0x01 ; 
    expected_g_COOLANT_value_B = 0x00 ; 
    expected_MESG_NMSG_CCC_coolantlevel_B = 0x00 ; 
    expected_g_ACTIVESUSPENSION_value_B = 0x00 ; 
    expected_MESG_NMSG_CCC_Activesuspension_B = 0x00 ; 
    expected_MESG_NMSG_DiagSys_OBD2_B = 0x00 ; 
    expected_g_DC1E_PWR_FWD = 0x00 ; 
    expected_g_BSG_PWR_AWD = 0x00 ; 

    START_TEST("1: FNC_VAR09_Cevt_OutputDriver_1",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_2(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 1;
    g_Gearbox_invalid_B =0;
    GCCC_CDPRAMVars[GCCC_GEARBOX_B3]= 0x01;
    GCCC_CDPRAMVars[GCCC_GEARBOXTYPE_B4]= 0x01;

    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_MESG_NMSG_Gearbox_B = 0x01 ; 
    expected_MESG_NMSG_GearboxType_N = 2 ; 
    expected_MESG_NMSG_GearboxType_FA_N = 2 ; 
    expected_MESG_NMSG_GearboxType_RA_N = 2 ; 
    expected_MESG_NMSG_DrvUnitType_RA_N = 3 ; 
    expected_MESG_NMSG_VehicleType_N = 1 ; 
    expected_MESG_NMSG_Power_Source_ATS_UB = 0x00 ; 
    expected_MESG_NMSG_Code_info_ATS_UB = 0x00 ; 
    expected_MESG_NMSG_RCBVehConfigOn_B = 0x00 ; 
    expected_MESG_NMSG_PIBVehConfigOn_B = 0x00 ; 
    expected_MESG_NMSG_DrvunitVeh_N = 0 ; 
    expected_MESG_NMSG_DrvUnitType_N = 1 ; 
    expected_MESG_NMSG_Vacsensoravl_B = 0x00 ; 
    expected_g_ITPMS_value_UB = 0x01 ; 
    expected_MESG_NMSG_ITPMSConfig_UB = 0x01 ; 
    expected_g_COOLANT_value_B = 0x00 ; 
    expected_MESG_NMSG_CCC_coolantlevel_B = 0x00 ; 
    expected_g_ACTIVESUSPENSION_value_B = 0x00 ; 
    expected_MESG_NMSG_CCC_Activesuspension_B = 0x00 ; 
    expected_MESG_NMSG_DiagSys_OBD2_B = 0x00 ; 
    expected_g_DC1E_PWR_FWD = 0x00 ; 
    expected_g_BSG_PWR_AWD = 0x00 ; 

    START_TEST("2: FNC_VAR09_Cevt_OutputDriver_2",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_3(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 0;
    g_Gearbox_invalid_B =0;
    GCCC_CDPNVVars[GCCC_GEARBOX_B3]=4;
    GCCC_CDPNVVars[GCCC_GEARBOXTYPE_B4]=4;

    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_MESG_NMSG_Gearbox_B = 0x01 ; 
    expected_MESG_NMSG_GearboxType_N = 2 ; 
    expected_MESG_NMSG_GearboxType_FA_N = 2 ; 
    expected_MESG_NMSG_GearboxType_RA_N = 2 ; 
    expected_MESG_NMSG_DrvUnitType_RA_N = 3 ; 
    expected_MESG_NMSG_VehicleType_N = 1 ; 
    expected_MESG_NMSG_Power_Source_ATS_UB = 0x00 ; 
    expected_MESG_NMSG_Code_info_ATS_UB = 0x00 ; 
    expected_MESG_NMSG_RCBVehConfigOn_B = 0x00 ; 
    expected_MESG_NMSG_PIBVehConfigOn_B = 0x00 ; 
    expected_MESG_NMSG_DrvunitVeh_N = 0 ; 
    expected_MESG_NMSG_DrvUnitType_N = 1 ; 
    expected_MESG_NMSG_Vacsensoravl_B = 0x00 ; 
    expected_g_ITPMS_value_UB = 0x01 ; 
    expected_MESG_NMSG_ITPMSConfig_UB = 0x01 ; 
    expected_g_COOLANT_value_B = 0x00 ; 
    expected_MESG_NMSG_CCC_coolantlevel_B = 0x00 ; 
    expected_g_ACTIVESUSPENSION_value_B = 0x00 ; 
    expected_MESG_NMSG_CCC_Activesuspension_B = 0x00 ; 
    expected_MESG_NMSG_DiagSys_OBD2_B = 0x00 ; 
    expected_g_DC1E_PWR_FWD = 0x00 ; 
    expected_g_BSG_PWR_AWD = 0x00 ; 

    START_TEST("3: FNC_VAR09_Cevt_OutputDriver_3",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_4(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 1;
    g_Gearbox_invalid_B =0;
    GCCC_CDPRAMVars[GCCC_GEARBOX_B3]= 0xa;
    GCCC_CDPRAMVars[GCCC_GEARBOXTYPE_B4]= 0xa;

    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_MESG_NMSG_Gearbox_B = 0x01 ; 
    expected_MESG_NMSG_GearboxType_N = 2 ; 
    expected_MESG_NMSG_GearboxType_FA_N = 2 ; 
    expected_MESG_NMSG_GearboxType_RA_N = 2 ; 
    expected_MESG_NMSG_DrvUnitType_RA_N = 3 ; 
    expected_MESG_NMSG_VehicleType_N = 1 ; 
    expected_MESG_NMSG_Power_Source_ATS_UB = 0x00 ; 
    expected_MESG_NMSG_Code_info_ATS_UB = 0x00 ; 
    expected_MESG_NMSG_RCBVehConfigOn_B = 0x00 ; 
    expected_MESG_NMSG_PIBVehConfigOn_B = 0x00 ; 
    expected_MESG_NMSG_DrvunitVeh_N = 0 ; 
    expected_MESG_NMSG_DrvUnitType_N = 1 ; 
    expected_MESG_NMSG_Vacsensoravl_B = 0x00 ; 
    expected_g_ITPMS_value_UB = 0x01 ; 
    expected_MESG_NMSG_ITPMSConfig_UB = 0x01 ; 
    expected_g_COOLANT_value_B = 0x00 ; 
    expected_MESG_NMSG_CCC_coolantlevel_B = 0x00 ; 

    START_TEST("4: FNC_VAR09_Cevt_OutputDriver_4",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_5(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 1;
    g_Gearbox_invalid_B =0;
    GCCC_CDPRAMVars[GCCC_GEARBOX_B3]= 0xb;
    GCCC_CDPRAMVars[GCCC_GEARBOXTYPE_B4]= 0xb;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("5: FNC_VAR09_Cevt_OutputDriver_5",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_6(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 1;
    g_Gearbox_invalid_B =0;
    GCCC_CDPRAMVars[GCCC_GEARBOX_B3]=4;
    GCCC_CDPRAMVars[GCCC_GEARBOXTYPE_B4]=4;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("6: FNC_VAR09_Cevt_OutputDriver_6",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_7(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 0;
    g_Gearbox_invalid_B =0;
    GCCC_CDPNVVars[GCCC_GEARBOX_B3]=0;
    GCCC_CDPNVVars[GCCC_GEARBOXTYPE_B4]=0;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("7: FNC_VAR09_Cevt_OutputDriver_7",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_8(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 0;
    g_Gearbox_invalid_B =0;
    GCCC_CDPNVVars[GCCC_GEARBOX_B3]=0xa;
    GCCC_CDPNVVars[GCCC_GEARBOXTYPE_B4]=0xa;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("8: FNC_VAR09_Cevt_OutputDriver_8",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_9(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 0;
    g_Gearbox_invalid_B =0;
    GCCC_CDPNVVars[GCCC_GEARBOX_B3]=0xb;
    GCCC_CDPNVVars[GCCC_GEARBOXTYPE_B4]=0xb;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("9: FNC_VAR09_Cevt_OutputDriver_9",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_10(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 0;
    g_Gearbox_invalid_B =0;
    GCCC_CDPNVVars[GCCC_GEARBOX_B3]=1;
    GCCC_CDPNVVars[GCCC_GEARBOXTYPE_B4]=1;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("10: FNC_VAR09_Cevt_OutputDriver_10",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_11(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 1;
    g_Gearbox_invalid_B =0;


    GCCC_CDPRAMVars[GCCC_GEARBOXTYPE_B4]= GCCC_GearboxType_Auto;
    GCCC_CDPRAMVars[GCCC_GEARBOX_B3]= 0;
    GCCC_CDPRAMVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_80;
    GCCC_CDPRAMVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_01;
    GCCC_CDPRAMVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_02;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("11: FNC_VAR09_Cevt_OutputDriver_11",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_12(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 1;
    g_Gearbox_invalid_B =0;


    GCCC_CDPRAMVars[GCCC_GEARBOXTYPE_B4]= GCCC_GearboxType_Auto;
    GCCC_CDPRAMVars[GCCC_GEARBOX_B3]= GCCC_GEARBOX_DClutch_FWD;
    GCCC_CDPRAMVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_80;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("12: FNC_VAR09_Cevt_OutputDriver_12",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_13(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 1;
    g_Gearbox_invalid_B =0;


    GCCC_CDPRAMVars[GCCC_GEARBOXTYPE_B4]= GCCC_GearboxType_Auto;
    GCCC_CDPRAMVars[GCCC_GEARBOX_B3]= GCCC_GEARBOX_DClutch_FWD;
    GCCC_CDPRAMVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_01;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("13: FNC_VAR09_Cevt_OutputDriver_13",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_14(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 1;
    g_Gearbox_invalid_B =0;


    GCCC_CDPRAMVars[GCCC_GEARBOXTYPE_B4]= GCCC_GearboxType_Auto;
    GCCC_CDPRAMVars[GCCC_GEARBOX_B3]= GCCC_GEARBOX_DClutch_FWD;
    GCCC_CDPRAMVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_02;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("14: FNC_VAR09_Cevt_OutputDriver_14",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_15(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 1;
    g_Gearbox_invalid_B =0;


    GCCC_CDPRAMVars[GCCC_GEARBOXTYPE_B4]= GCCC_GearboxType_Auto;
    GCCC_CDPRAMVars[GCCC_GEARBOX_B3]= GCCC_GEARBOX_DClutch_FWD;
    GCCC_CDPRAMVars[GCCC_ELECTRIC_DRIVELINE_B5] = 0;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("15: FNC_VAR09_Cevt_OutputDriver_15",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_16(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 0;
    g_Gearbox_invalid_B =0;


    GCCC_CDPNVVars[GCCC_GEARBOXTYPE_B4]= GCCC_GearboxType_Auto;
    GCCC_CDPNVVars[GCCC_GEARBOX_B3]= 0;
    GCCC_CDPNVVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_80;
    GCCC_CDPNVVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_01;
    GCCC_CDPNVVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_02;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("16: FNC_VAR09_Cevt_OutputDriver_16",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_17(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 0;
    g_Gearbox_invalid_B =0;


    GCCC_CDPNVVars[GCCC_GEARBOXTYPE_B4]= GCCC_GearboxType_Auto;
    GCCC_CDPNVVars[GCCC_GEARBOX_B3]= GCCC_GEARBOX_DClutch_FWD;
    GCCC_CDPNVVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_80;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("17: FNC_VAR09_Cevt_OutputDriver_17",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_18(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 0;
    g_Gearbox_invalid_B =0;


    GCCC_CDPNVVars[GCCC_GEARBOXTYPE_B4]= GCCC_GearboxType_Auto;
    GCCC_CDPNVVars[GCCC_GEARBOX_B3]= GCCC_GEARBOX_DClutch_FWD;
    GCCC_CDPNVVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_01;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("18: FNC_VAR09_Cevt_OutputDriver_18",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_19(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 0;
    g_Gearbox_invalid_B =0;


    GCCC_CDPNVVars[GCCC_GEARBOXTYPE_B4]= GCCC_GearboxType_Auto;
    GCCC_CDPNVVars[GCCC_GEARBOX_B3]= GCCC_GEARBOX_DClutch_FWD;
    GCCC_CDPNVVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_02;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("19: FNC_VAR09_Cevt_OutputDriver_19",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_20(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 0;
    g_Gearbox_invalid_B =0;


    GCCC_CDPNVVars[GCCC_GEARBOXTYPE_B4]= GCCC_GearboxType_Auto;
    GCCC_CDPNVVars[GCCC_GEARBOX_B3]= GCCC_GEARBOX_DClutch_FWD;
    GCCC_CDPNVVars[GCCC_ELECTRIC_DRIVELINE_B5] = 0;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("20: FNC_VAR09_Cevt_OutputDriver_20",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_21(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 1;
    g_GCCC_BLKID_01_B = 1;
    g_Propulsion_Engine_invalid_B =!1;
    g_Electric_Driveline_incompatible_B = !1;

    GCCC_CDPRAMVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_PluginHybrid;
    GCCC_CDPRAMVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_03;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("21: FNC_VAR09_Cevt_OutputDriver_21",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_22(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 1;
    g_GCCC_BLKID_01_B = 1;
    g_Propulsion_Engine_invalid_B =!1;
    g_Electric_Driveline_incompatible_B = !1;

    GCCC_CDPRAMVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_BatteryElectric;
    GCCC_CDPRAMVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_03;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("22: FNC_VAR09_Cevt_OutputDriver_22",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_23(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 1;
    g_GCCC_BLKID_01_B = 1;
    g_Propulsion_Engine_invalid_B =!1;
    g_Electric_Driveline_incompatible_B = !1;

    GCCC_CDPRAMVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_PluginHybrid;
    GCCC_CDPRAMVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_06;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("23: FNC_VAR09_Cevt_OutputDriver_23",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_24(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 1;
    g_GCCC_BLKID_01_B = 1;
    g_Propulsion_Engine_invalid_B =!1;
    g_Electric_Driveline_incompatible_B = !1;

    GCCC_CDPRAMVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_BatteryElectric;
    GCCC_CDPRAMVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_06;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("24: FNC_VAR09_Cevt_OutputDriver_24",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_25(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 1;
    g_GCCC_BLKID_01_B = 0;
    g_Propulsion_Engine_invalid_B =!1;
    g_Electric_Driveline_incompatible_B = !1;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("25: FNC_VAR09_Cevt_OutputDriver_25",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_26(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 1;
    g_GCCC_BLKID_01_B = 1;
    g_Propulsion_Engine_invalid_B =!1;
    g_Electric_Driveline_incompatible_B = !0;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("26: FNC_VAR09_Cevt_OutputDriver_26",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_27(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 1;
    g_GCCC_BLKID_01_B = 1;
    g_Propulsion_Engine_invalid_B =!1;
    g_Electric_Driveline_incompatible_B = !0;

    GCCC_CDPNVVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_PluginHybrid;
    GCCC_CDPNVVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_03;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("27: FNC_VAR09_Cevt_OutputDriver_27",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_28(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 1;
    g_GCCC_BLKID_01_B = 1;
    g_Propulsion_Engine_invalid_B =!1;
    g_Electric_Driveline_incompatible_B = !0;

    GCCC_CDPNVVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_BatteryElectric;
    GCCC_CDPNVVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_03;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("28: FNC_VAR09_Cevt_OutputDriver_28",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_29(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 1;
    g_GCCC_BLKID_01_B = 1;
    g_Propulsion_Engine_invalid_B =!1;
    g_Electric_Driveline_incompatible_B = !0;

    GCCC_CDPNVVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_PluginHybrid;
    GCCC_CDPNVVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_06;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("29: FNC_VAR09_Cevt_OutputDriver_29",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_30(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B = 1;
    g_GCCC_BLKID_01_B = 1;
    g_Propulsion_Engine_invalid_B =!1;
    g_Electric_Driveline_incompatible_B = !0;

    GCCC_CDPNVVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_BatteryElectric;
    GCCC_CDPNVVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_06;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("30: FNC_VAR09_Cevt_OutputDriver_30",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_31(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_01_B = 1;
    g_vehicletype_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_VEHICLETYPE_B2] = GCCC_VEHICLETYPE_KX11;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("31: FNC_VAR09_Cevt_OutputDriver_31",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_32(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_01_B = 1;
    g_vehicletype_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_VEHICLETYPE_B2] = GCCC_VEHICLETYPE_EX11;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("32: FNC_VAR09_Cevt_OutputDriver_32",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_33(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_01_B = 1;
    g_vehicletype_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_VEHICLETYPE_B2] = GCCC_VEHICLETYPE_DC1E;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("33: FNC_VAR09_Cevt_OutputDriver_33",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_34(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_01_B = 1;
    g_vehicletype_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_VEHICLETYPE_B2] = GCCC_VEHICLETYPE_FW11;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("34: FNC_VAR09_Cevt_OutputDriver_34",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_35(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_01_B = 1;
    g_vehicletype_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_VEHICLETYPE_B2] = GCCC_VEHICLETYPE_EF1E;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("35: FNC_VAR09_Cevt_OutputDriver_35",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_36(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_01_B = 1;
    g_vehicletype_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_VEHICLETYPE_B2] = 0xff;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("36: FNC_VAR09_Cevt_OutputDriver_36",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_37(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_01_B = 0;
    g_vehicletype_invalid_B = !1;

    GCCC_CDPNVVars[GCCC_VEHICLETYPE_B2] = 0xff;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("37: FNC_VAR09_Cevt_OutputDriver_37",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_38(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_01_B = 0;
    g_vehicletype_invalid_B = !1;

    GCCC_CDPNVVars[GCCC_VEHICLETYPE_B2] = GCCC_VEHICLETYPE_KX11;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("38: FNC_VAR09_Cevt_OutputDriver_38",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_39(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_01_B = 0;
    g_vehicletype_invalid_B = !1;

    GCCC_CDPNVVars[GCCC_VEHICLETYPE_B2] = GCCC_VEHICLETYPE_EX11;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("39: FNC_VAR09_Cevt_OutputDriver_39",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_40(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_01_B = 0;
    g_vehicletype_invalid_B = !1;

    GCCC_CDPNVVars[GCCC_VEHICLETYPE_B2] = GCCC_VEHICLETYPE_DC1E;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("40: FNC_VAR09_Cevt_OutputDriver_40",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_41(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_01_B = 0;
    g_vehicletype_invalid_B = !1;

    GCCC_CDPNVVars[GCCC_VEHICLETYPE_B2] = GCCC_VEHICLETYPE_FW11;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("41: FNC_VAR09_Cevt_OutputDriver_41",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_42(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_01_B = 0;
    g_vehicletype_invalid_B = !1;

    GCCC_CDPNVVars[GCCC_VEHICLETYPE_B2] = GCCC_VEHICLETYPE_EF1E;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("42: FNC_VAR09_Cevt_OutputDriver_42",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_43(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 1;
    g_Propulsion_Engine_invalid_B  = !1;

    GCCC_CDPRAMVars[GCCC_Propulsion_Type_B7] =GCCC_PropulsionType_Combutionengine;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("43: FNC_VAR09_Cevt_OutputDriver_43",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_44(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 1;
    g_Propulsion_Engine_invalid_B  = !1;

    GCCC_CDPRAMVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_MHEV;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("44: FNC_VAR09_Cevt_OutputDriver_44",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_45(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 0;
    g_Propulsion_Engine_invalid_B  = !1;
    GCCC_CDPNVVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_Combutionengine;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("45: FNC_VAR09_Cevt_OutputDriver_45",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_46(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 0;
    g_Propulsion_Engine_invalid_B  = !1;
    GCCC_CDPNVVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_MHEV;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("46: FNC_VAR09_Cevt_OutputDriver_46",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_47(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 0;
    g_Propulsion_Engine_invalid_B  = !1;
    GCCC_CDPNVVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_PluginHybrid;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("47: FNC_VAR09_Cevt_OutputDriver_47",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_48(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 0;
    g_Propulsion_Engine_invalid_B  = !1;
    GCCC_CDPNVVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_BatteryElectric;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("48: FNC_VAR09_Cevt_OutputDriver_48",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_49(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 0;
    g_Propulsion_Engine_invalid_B  = !1;
    GCCC_CDPNVVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_BatteryElectric;



    MESG_NMSG_Power_Source_ATS_UB = 0x04;
    g_GCCC_BLKID_01_B = 1;
    g_Electric_Driveline_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_06;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("49: FNC_VAR09_Cevt_OutputDriver_49",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_50(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 0;
    g_Propulsion_Engine_invalid_B  = !1;
    GCCC_CDPNVVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_BatteryElectric;



    MESG_NMSG_Power_Source_ATS_UB = 0x04;
    g_GCCC_BLKID_01_B = 1;
    g_Electric_Driveline_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_07;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("50: FNC_VAR09_Cevt_OutputDriver_50",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_51(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 0;
    g_Propulsion_Engine_invalid_B  = !1;
    GCCC_CDPNVVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_BatteryElectric;



    MESG_NMSG_Power_Source_ATS_UB = 0x04;
    g_GCCC_BLKID_01_B = 1;
    g_Electric_Driveline_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_08;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("51: FNC_VAR09_Cevt_OutputDriver_51",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_52(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 0;
    g_Propulsion_Engine_invalid_B  = !1;
    GCCC_CDPNVVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_BatteryElectric;



    MESG_NMSG_Power_Source_ATS_UB = 0x04;
    g_GCCC_BLKID_01_B = 1;
    g_Electric_Driveline_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_ELECTRIC_DRIVELINE_B5] = 0XFF;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("52: FNC_VAR09_Cevt_OutputDriver_52",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_53(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 0;
    g_Propulsion_Engine_invalid_B  = !1;
    GCCC_CDPNVVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_BatteryElectric;



    MESG_NMSG_Power_Source_ATS_UB = 0x04;
    g_GCCC_BLKID_01_B = 0;
    g_Electric_Driveline_invalid_B = !1;
    GCCC_CDPNVVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_06;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("53: FNC_VAR09_Cevt_OutputDriver_53",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_54(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 0;
    g_Propulsion_Engine_invalid_B  = !1;
    GCCC_CDPNVVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_BatteryElectric;



    MESG_NMSG_Power_Source_ATS_UB = 0x04;
    g_GCCC_BLKID_01_B = 0;
    g_Electric_Driveline_invalid_B = !1;
    GCCC_CDPNVVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_07;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("54: FNC_VAR09_Cevt_OutputDriver_54",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_55(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 0;
    g_Propulsion_Engine_invalid_B  = !1;
    GCCC_CDPNVVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_BatteryElectric;



    MESG_NMSG_Power_Source_ATS_UB = 0x04;
    g_GCCC_BLKID_01_B = 0;
    g_Electric_Driveline_invalid_B = !1;
    GCCC_CDPNVVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_08;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("55: FNC_VAR09_Cevt_OutputDriver_55",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_56(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 0;
    g_Propulsion_Engine_invalid_B  = !1;
    GCCC_CDPNVVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_MHEV;



    MESG_NMSG_Power_Source_ATS_UB = 0x80;
    g_GCCC_BLKID_01_B = 1;
    g_DriveLine_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_DriveLine_B4] = GCCC_DRIVELINE_Two_Wd;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("56: FNC_VAR09_Cevt_OutputDriver_56",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_57(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 0;
    g_Propulsion_Engine_invalid_B  = !1;
    GCCC_CDPNVVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_MHEV;



    MESG_NMSG_Power_Source_ATS_UB = 0x80;
    g_GCCC_BLKID_01_B = 1;
    g_DriveLine_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_DriveLine_B4] = GCCC_DRIVELINE_All_Wd;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("57: FNC_VAR09_Cevt_OutputDriver_57",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_58(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 0;
    g_Propulsion_Engine_invalid_B  = !1;
    GCCC_CDPNVVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_MHEV;



    MESG_NMSG_Power_Source_ATS_UB = 0x80;
    g_GCCC_BLKID_01_B = 1;
    g_DriveLine_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_DriveLine_B4] = 0XFF;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("58: FNC_VAR09_Cevt_OutputDriver_58",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_59(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 0;
    g_Propulsion_Engine_invalid_B  = !1;
    GCCC_CDPNVVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_MHEV;



    MESG_NMSG_Power_Source_ATS_UB = 0x80;
    g_GCCC_BLKID_01_B = 0;
    g_DriveLine_invalid_B = !1;
    GCCC_CDPNVVars[GCCC_DriveLine_B4] = GCCC_DRIVELINE_Two_Wd;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("59: FNC_VAR09_Cevt_OutputDriver_59",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_60(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 0;
    g_Propulsion_Engine_invalid_B  = !1;
    GCCC_CDPNVVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_MHEV;



    MESG_NMSG_Power_Source_ATS_UB = 0x80;
    g_GCCC_BLKID_01_B = 0;
    g_DriveLine_invalid_B = !1;
    GCCC_CDPNVVars[GCCC_DriveLine_B4] = GCCC_DRIVELINE_All_Wd;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("60: FNC_VAR09_Cevt_OutputDriver_60",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_61(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_01_B = 0;
    g_Fuel_invalid_B = !1;
    GCCC_CDPNVVars[GCCC_Fueltype_B7] = 1;



    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("61: FNC_VAR09_Cevt_OutputDriver_61",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_62(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_01_B = 0;
    g_Fuel_invalid_B = !1;
    GCCC_CDPNVVars[GCCC_Fueltype_B7] = 2;



    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("62: FNC_VAR09_Cevt_OutputDriver_62",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_63(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_01_B = 0;
    g_Fuel_invalid_B = !1;
    GCCC_CDPNVVars[GCCC_Fueltype_B7] = 3;



    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("63: FNC_VAR09_Cevt_OutputDriver_63",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_64(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_01_B = 1;
    g_Fuel_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_Fueltype_B7] = 1;



    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("64: FNC_VAR09_Cevt_OutputDriver_64",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_65(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_01_B = 1;
    g_Fuel_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_Fueltype_B7] = 2;



    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("65: FNC_VAR09_Cevt_OutputDriver_65",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_66(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_01_B = 1;
    g_Fuel_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_Fueltype_B7] = 3;



    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("66: FNC_VAR09_Cevt_OutputDriver_66",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_67(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 1;
    g_RCB_invalid_B = !1;


    GCCC_CDPRAMVars[GCCC_RCB_B7] == 0x0;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("67: FNC_VAR09_Cevt_OutputDriver_67",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_68(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 1;
    g_RCB_invalid_B = !1;


    GCCC_CDPRAMVars[GCCC_RCB_B7] = 1;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("68: FNC_VAR09_Cevt_OutputDriver_68",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_69(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 1;
    g_RCB_invalid_B = !1;


    GCCC_CDPRAMVars[GCCC_RCB_B7] = 2;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("69: FNC_VAR09_Cevt_OutputDriver_69",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_70(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 1;
    g_RCB_invalid_B = !1;


    GCCC_CDPRAMVars[GCCC_RCB_B7] = 3;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("70: FNC_VAR09_Cevt_OutputDriver_70",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_71(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 1;
    g_RCB_invalid_B = !1;


    GCCC_CDPRAMVars[GCCC_RCB_B7] = 4;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("71: FNC_VAR09_Cevt_OutputDriver_71",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_72(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("72: FNC_VAR09_Cevt_OutputDriver_72",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_73(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 0;
    g_RCB_invalid_B = !1;


    GCCC_CDPNVVars[GCCC_RCB_B7] == 0x0;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("73: FNC_VAR09_Cevt_OutputDriver_73",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_74(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 0;
    g_RCB_invalid_B = !1;


    GCCC_CDPNVVars[GCCC_RCB_B7] = 1;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("74: FNC_VAR09_Cevt_OutputDriver_74",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_75(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 0;
    g_RCB_invalid_B = !1;


    GCCC_CDPNVVars[GCCC_RCB_B7] = 2;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("75: FNC_VAR09_Cevt_OutputDriver_75",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_76(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 0;
    g_RCB_invalid_B = !1;


    GCCC_CDPNVVars[GCCC_RCB_B7] = 3;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("76: FNC_VAR09_Cevt_OutputDriver_76",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_77(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_16_B = 0;
    g_RCB_invalid_B = !1;


    GCCC_CDPNVVars[GCCC_RCB_B7] = 4;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("77: FNC_VAR09_Cevt_OutputDriver_77",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_78(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_08_B = 1;
    g_PIB_invalid_B = !1;


    GCCC_CDPRAMVars[GCCC_PIB_B4] = 1;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("78: FNC_VAR09_Cevt_OutputDriver_78",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_79(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_08_B = 1;
    g_PIB_invalid_B = !1;


    GCCC_CDPRAMVars[GCCC_PIB_B4] = 2;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("79: FNC_VAR09_Cevt_OutputDriver_79",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_80(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_08_B = 1;
    g_PIB_invalid_B = !1;


    GCCC_CDPRAMVars[GCCC_PIB_B4] = 3;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("80: FNC_VAR09_Cevt_OutputDriver_80",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_81(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_08_B = 0;
    g_PIB_invalid_B = !1;


    GCCC_CDPNVVars[GCCC_PIB_B4] = 3;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("81: FNC_VAR09_Cevt_OutputDriver_81",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_82(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_08_B = 0;
    g_PIB_invalid_B = !1;


    GCCC_CDPNVVars[GCCC_PIB_B4] = 2;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("82: FNC_VAR09_Cevt_OutputDriver_82",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_83(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_08_B = 0;
    g_PIB_invalid_B = !1;


    GCCC_CDPNVVars[GCCC_PIB_B4] = 1;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("83: FNC_VAR09_Cevt_OutputDriver_83",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_84(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B= 1;
    g_GCCC_BLKID_01_B=1;
    g_Propulsion_Engine_invalid_B=!1;
    g_Electric_Driveline_incompatible_B =!1;

    GCCC_CDPRAMVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_PluginHybrid;
    GCCC_CDPRAMVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_02;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("84: FNC_VAR09_Cevt_OutputDriver_84",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_85(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B= 1;
    g_GCCC_BLKID_01_B=1;
    g_Propulsion_Engine_invalid_B=!1;
    g_Electric_Driveline_incompatible_B =!1;

    GCCC_CDPRAMVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_MHEV;
    GCCC_CDPRAMVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_02;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("85: FNC_VAR09_Cevt_OutputDriver_85",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_86(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B= 1;
    g_GCCC_BLKID_01_B=1;
    g_Propulsion_Engine_invalid_B=!1;
    g_Electric_Driveline_incompatible_B =!1;

    GCCC_CDPRAMVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_PluginHybrid;
    GCCC_CDPRAMVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_80;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("86: FNC_VAR09_Cevt_OutputDriver_86",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_87(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B= 1;
    g_GCCC_BLKID_01_B=1;
    g_Propulsion_Engine_invalid_B=!1;
    g_Electric_Driveline_incompatible_B =!1;

    GCCC_CDPRAMVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_MHEV;
    GCCC_CDPRAMVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_80;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("87: FNC_VAR09_Cevt_OutputDriver_87",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_88(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B= 1;
    g_GCCC_BLKID_01_B=1;
    g_Propulsion_Engine_invalid_B=!1;
    g_Electric_Driveline_incompatible_B =!1;

    GCCC_CDPRAMVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_BatteryElectric;
    GCCC_CDPRAMVars[GCCC_ELECTRIC_DRIVELINE_B5] = 0xff;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("88: FNC_VAR09_Cevt_OutputDriver_88",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_89(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B= 1;
    g_GCCC_BLKID_01_B=1;
    g_Propulsion_Engine_invalid_B=!1;
    g_Electric_Driveline_incompatible_B =!1;

    GCCC_CDPRAMVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_BatteryElectric;
    GCCC_CDPRAMVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_08;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("89: FNC_VAR09_Cevt_OutputDriver_89",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_90(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B= 1;
    g_GCCC_BLKID_01_B=1;
    g_Propulsion_Engine_invalid_B=!1;
    g_Electric_Driveline_incompatible_B =!1;

    GCCC_CDPRAMVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_BatteryElectric;
    GCCC_CDPRAMVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_01;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("90: FNC_VAR09_Cevt_OutputDriver_90",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_91(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B= 0;
    g_GCCC_BLKID_01_B=1;
    g_Propulsion_Engine_invalid_B=!1;
    g_Electric_Driveline_incompatible_B =!1;

    GCCC_CDPNVVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_BatteryElectric;
    GCCC_CDPNVVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_01;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("91: FNC_VAR09_Cevt_OutputDriver_91",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_92(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_02_B= 0;
    g_GCCC_BLKID_01_B=1;
    g_Propulsion_Engine_invalid_B=!1;
    g_Electric_Driveline_incompatible_B =!1;

    GCCC_CDPNVVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_MHEV;
    GCCC_CDPNVVars[GCCC_ELECTRIC_DRIVELINE_B5] = GCCC_ELECTRIC_DRIVELINE_80;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("92: FNC_VAR09_Cevt_OutputDriver_92",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_93(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_08_B  = 1;
    g_TSA_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_TSA_B3] =1;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("93: FNC_VAR09_Cevt_OutputDriver_93",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_94(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_08_B  = 1;
    g_TSA_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_TSA_B3] =2;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("94: FNC_VAR09_Cevt_OutputDriver_94",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_95(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_08_B  = 1;
    g_TSA_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_TSA_B3] =3;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("95: FNC_VAR09_Cevt_OutputDriver_95",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_96(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_08_B  = 0;
    GCCC_CDPNVVars[GCCC_TSA_B3] =1;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("96: FNC_VAR09_Cevt_OutputDriver_96",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_97(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_08_B  = 0;
    GCCC_CDPNVVars[GCCC_TSA_B3] =2;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("97: FNC_VAR09_Cevt_OutputDriver_97",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_98(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_08_B  = 0;
    GCCC_CDPNVVars[GCCC_TSA_B3] =3;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("98: FNC_VAR09_Cevt_OutputDriver_98",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_99(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_08_B  = 1;
    g_HDC_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_HDC_B5] = 0x01 ;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("99: FNC_VAR09_Cevt_OutputDriver_99",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_100(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_08_B  = 1;
    g_HDC_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_HDC_B5] = 0x02 ;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("100: FNC_VAR09_Cevt_OutputDriver_100",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_101(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_08_B  = 1;
    g_HDC_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_HDC_B5] = 0x03 ;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("101: FNC_VAR09_Cevt_OutputDriver_101",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_102(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_08_B  = 0;
    g_HDC_invalid_B = !1;
  GCCC_CDPNVVars[GCCC_HDC_B5] = 0x01;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("102: FNC_VAR09_Cevt_OutputDriver_102",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_103(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_08_B  = 0;
    g_HDC_invalid_B = !1;
  GCCC_CDPNVVars[GCCC_HDC_B5] = 0x02;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("103: FNC_VAR09_Cevt_OutputDriver_103",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_104(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_08_B  = 0;
    g_HDC_invalid_B = !1;
  GCCC_CDPNVVars[GCCC_HDC_B5] = 0x03;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("104: FNC_VAR09_Cevt_OutputDriver_104",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_105(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_9_B = 1;
    g_HillStartAssist_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_HillStartAssist_B6] = 0x01;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("105: FNC_VAR09_Cevt_OutputDriver_105",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_106(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_9_B = 1;
    g_HillStartAssist_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_HillStartAssist_B6] = 0x02;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("106: FNC_VAR09_Cevt_OutputDriver_106",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_107(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_9_B = 1;
    g_HillStartAssist_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_HillStartAssist_B6] = 0x03;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("107: FNC_VAR09_Cevt_OutputDriver_107",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_108(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_9_B = 0;
    g_HillStartAssist_invalid_B = !1;
    GCCC_CDPNVVars[GCCC_HillStartAssist_B6] = 0x01;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("108: FNC_VAR09_Cevt_OutputDriver_108",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_109(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_9_B = 0;
    g_HillStartAssist_invalid_B = !1;
    GCCC_CDPNVVars[GCCC_HillStartAssist_B6] = 0x02;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("109: FNC_VAR09_Cevt_OutputDriver_109",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_110(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_9_B = 0;
    g_HillStartAssist_invalid_B = !1;
    GCCC_CDPNVVars[GCCC_HillStartAssist_B6] = 0x03;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("110: FNC_VAR09_Cevt_OutputDriver_110",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_111(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_15_B = GCCC_BLKID_IDENT_16;
    g_AEB_invalid_B =!1;
    g_RCTA_invalid_B = !1;

    GCCC_CDPRAMVars[GCCC_AEB_B7]= 0x02;
    GCCC_CDPRAMVars[GCCC_RCTA_B6] = 0x01;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("111: FNC_VAR09_Cevt_OutputDriver_111",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_112(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_15_B = GCCC_BLKID_IDENT_16;
    g_AEB_invalid_B =!1;
    g_RCTA_invalid_B = !1;

    GCCC_CDPRAMVars[GCCC_AEB_B7] = 0x01;
    GCCC_CDPRAMVars[GCCC_RCTA_B6] = 0x01;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("112: FNC_VAR09_Cevt_OutputDriver_112",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_113(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_15_B = GCCC_BLKID_IDENT_16;
    g_AEB_invalid_B =!1;
    g_RCTA_invalid_B = !1;

    GCCC_CDPRAMVars[GCCC_AEB_B7] =0x01;
    GCCC_CDPRAMVars[GCCC_RCTA_B6] = 0x02;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("113: FNC_VAR09_Cevt_OutputDriver_113",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_114(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_15_B = GCCC_BLKID_IDENT_16;
    g_AEB_invalid_B =!1;
    g_RCTA_invalid_B = !1;

    GCCC_CDPRAMVars[GCCC_AEB_B7] = 0x1;
    GCCC_CDPRAMVars[GCCC_RCTA_B6] = 0x03;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("114: FNC_VAR09_Cevt_OutputDriver_114",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_115(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_15_B = GCCC_BLKID_IDENT_16;
    g_AEB_invalid_B =!1;
    g_RCTA_invalid_B = !1;

    GCCC_CDPRAMVars[GCCC_AEB_B7] = 0x1;
    GCCC_CDPRAMVars[GCCC_RCTA_B6] = 0x04;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("115: FNC_VAR09_Cevt_OutputDriver_115",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_116(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_15_B = GCCC_BLKID_IDENT_16;
    g_AEB_invalid_B =!1;
    g_RCTA_invalid_B = !1;

    GCCC_CDPRAMVars[GCCC_AEB_B7] = 0x2;
    GCCC_CDPRAMVars[GCCC_RCTA_B6] = 0x04;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("116: FNC_VAR09_Cevt_OutputDriver_116",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_117(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_15_B = GCCC_BLKID_IDENT_16;
    g_AEB_invalid_B =!1;
    g_RCTA_invalid_B = !1;

    GCCC_CDPRAMVars[GCCC_AEB_B7] = 0x3;
    GCCC_CDPRAMVars[GCCC_RCTA_B6] = 0x04;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("117: FNC_VAR09_Cevt_OutputDriver_117",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_118(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_15_B = GCCC_BLKID_IDENT_16;
    g_AEB_invalid_B =!1;
    g_RCTA_invalid_B = !1;

    GCCC_CDPRAMVars[GCCC_AEB_B7] = 0x2;
    GCCC_CDPRAMVars[GCCC_RCTA_B6] = 0x02;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("118: FNC_VAR09_Cevt_OutputDriver_118",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_119(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_15_B = GCCC_BLKID_IDENT_16;
    g_AEB_invalid_B =!1;
    g_RCTA_invalid_B = !0;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("119: FNC_VAR09_Cevt_OutputDriver_119",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_120(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_15_B = 0;

    GCCC_CDPNVVars[GCCC_AEB_B7] = 0x01;
    GCCC_CDPNVVars[GCCC_RCTA_B6] = 0x01;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("120: FNC_VAR09_Cevt_OutputDriver_120",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_121(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_15_B = 0;

    GCCC_CDPNVVars[GCCC_AEB_B7] =0x01;
    GCCC_CDPNVVars[GCCC_RCTA_B6] = 0x02;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("121: FNC_VAR09_Cevt_OutputDriver_121",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_122(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_15_B = 0;

    GCCC_CDPNVVars[GCCC_AEB_B7] = 0x01;
    GCCC_CDPNVVars[GCCC_RCTA_B6] = 0x03;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("122: FNC_VAR09_Cevt_OutputDriver_122",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_123(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_15_B = 0;
    GCCC_CDPNVVars[GCCC_AEB_B7]= 0x01;
    GCCC_CDPNVVars[GCCC_RCTA_B6] = 0x04;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("123: FNC_VAR09_Cevt_OutputDriver_123",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_124(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_15_B = 0;
    GCCC_CDPNVVars[GCCC_AEB_B7]= 0x02;
    GCCC_CDPNVVars[GCCC_RCTA_B6] = 0x04;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("124: FNC_VAR09_Cevt_OutputDriver_124",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_125(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_15_B = 0;
    GCCC_CDPNVVars[GCCC_AEB_B7]= 0x03;
    GCCC_CDPNVVars[GCCC_RCTA_B6] = 0x04;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("125: FNC_VAR09_Cevt_OutputDriver_125",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_126(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_15_B = 0;
    GCCC_CDPNVVars[GCCC_AEB_B7]= 0x03;
    GCCC_CDPNVVars[GCCC_RCTA_B6] = 0x05;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("126: FNC_VAR09_Cevt_OutputDriver_126",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_127(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_3B_B = 1;
    g_VAC_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_VACCUM_SENSOR_B5] = 1;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("127: FNC_VAR09_Cevt_OutputDriver_127",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_128(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_3B_B = 1;
    g_VAC_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_VACCUM_SENSOR_B5] = 2;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("128: FNC_VAR09_Cevt_OutputDriver_128",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_129(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_3B_B = 0;
    GCCC_CDPNVVars[GCCC_VACCUM_SENSOR_B5] = 0x01;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("129: FNC_VAR09_Cevt_OutputDriver_129",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_130(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_3B_B = 0;
    GCCC_CDPNVVars[GCCC_VACCUM_SENSOR_B5] = 0x02;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("130: FNC_VAR09_Cevt_OutputDriver_130",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_131(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_3B_B = 0;
    GCCC_CDPNVVars[GCCC_VACCUM_SENSOR_B5] = 0x03;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("131: FNC_VAR09_Cevt_OutputDriver_131",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_132(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_27_B = 1;
    g_ITPMSConfig_invalid_B  = !1;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("132: FNC_VAR09_Cevt_OutputDriver_132",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_133(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_27_B = 1;
    g_ITPMSConfig_invalid_B  = !0;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("133: FNC_VAR09_Cevt_OutputDriver_133",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_134(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_27_B = 0;
    GCCC_CDPNVVars[GCCC_ITPMS_B2] = 0x00;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("134: FNC_VAR09_Cevt_OutputDriver_134",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_135(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_27_B = 0;
    GCCC_CDPNVVars[GCCC_ITPMS_B2] = 0x01;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("135: FNC_VAR09_Cevt_OutputDriver_135",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_136(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_3B_B = 1;
    g_VAC_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_VACCUM_SENSOR_B5] = 3;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("136: FNC_VAR09_Cevt_OutputDriver_136",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_137(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_3B_B = 1;
    g_COOLANT_INDICATION_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_COOLANT_INDICATION_B2] = 1;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("137: FNC_VAR09_Cevt_OutputDriver_137",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_138(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_3B_B = 1;
    g_COOLANT_INDICATION_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_COOLANT_INDICATION_B2] = 2;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("138: FNC_VAR09_Cevt_OutputDriver_138",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_139(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_3B_B = 1;
    g_COOLANT_INDICATION_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_COOLANT_INDICATION_B2] = 3;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("139: FNC_VAR09_Cevt_OutputDriver_139",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_140(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_3B_B = 0;
    GCCC_CDPNVVars[GCCC_COOLANT_INDICATION_B2] = 0;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("140: FNC_VAR09_Cevt_OutputDriver_140",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_141(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_3B_B = 0;
    GCCC_CDPNVVars[GCCC_COOLANT_INDICATION_B2] = 1;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("141: FNC_VAR09_Cevt_OutputDriver_141",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_142(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_3B_B = 0;
    GCCC_CDPNVVars[GCCC_COOLANT_INDICATION_B2] = 2;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("142: FNC_VAR09_Cevt_OutputDriver_142",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_143(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_9_B = 1;
    g_Activesuspension_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_Activesuspension_B5] = 1;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("143: FNC_VAR09_Cevt_OutputDriver_143",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_144(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_9_B = 1;
    g_Activesuspension_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_Activesuspension_B5] = 2;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("144: FNC_VAR09_Cevt_OutputDriver_144",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_145(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_9_B = 1;
    g_Activesuspension_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_Activesuspension_B5] = 3;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("145: FNC_VAR09_Cevt_OutputDriver_145",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_146(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_9_B = 0;
    GCCC_CDPNVVars[GCCC_Activesuspension_B5] = 0;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("146: FNC_VAR09_Cevt_OutputDriver_146",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_147(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_9_B = 0;
    GCCC_CDPNVVars[GCCC_Activesuspension_B5] = 1;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("147: FNC_VAR09_Cevt_OutputDriver_147",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_148(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_9_B = 0;
    GCCC_CDPNVVars[GCCC_Activesuspension_B5] = 2;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("148: FNC_VAR09_Cevt_OutputDriver_148",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_149(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_07_B = 0;
    g_DIAGSYS_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_DIAGSYS_B5] = 1;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("149: FNC_VAR09_Cevt_OutputDriver_149",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_150(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_07_B = 0;
    g_DIAGSYS_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_DIAGSYS_B5] = 2;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("150: FNC_VAR09_Cevt_OutputDriver_150",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_151(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_07_B = 0;
    g_DIAGSYS_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_DIAGSYS_B5] = 3;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("151: FNC_VAR09_Cevt_OutputDriver_151",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_152(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_07_B = 1;
    g_DIAGSYS_invalid_B = !1;
    GCCC_CDPNVVars[GCCC_DIAGSYS_B5] = 0x01;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("152: FNC_VAR09_Cevt_OutputDriver_152",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_153(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_07_B = 1;
    g_DIAGSYS_invalid_B = !1;
    GCCC_CDPNVVars[GCCC_DIAGSYS_B5] = 0x02;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("153: FNC_VAR09_Cevt_OutputDriver_153",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_154(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_IMU_invalid_B = 1;
    g_GCCC_BLKID_3B_B = !1;
    GCCC_CDPRAMVars[GCCC_IMU_SENSOR_B4] = 0x03;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("154: FNC_VAR09_Cevt_OutputDriver_154",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_155(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_IMU_invalid_B = 1;
    g_GCCC_BLKID_3B_B = !1;
    GCCC_CDPRAMVars[GCCC_IMU_SENSOR_B4] = 0x0;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("155: FNC_VAR09_Cevt_OutputDriver_155",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_156(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_IMU_invalid_B = 0;
    GCCC_CDPNVVars[GCCC_IMU_SENSOR_B4] = 0x03;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("156: FNC_VAR09_Cevt_OutputDriver_156",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_157(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_IMU_invalid_B = 0;
    GCCC_CDPNVVars[GCCC_IMU_SENSOR_B4] = 0x0;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("157: FNC_VAR09_Cevt_OutputDriver_157",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_158(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_05_B = 1;
    GCCC_CDPNVVars[GCCC_IMU_SENSOR_B4] = 0x0;
    g_RBS_invalid_B =!1;
    GCCC_CDPRAMVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_MHEV;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("158: FNC_VAR09_Cevt_OutputDriver_158",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_159(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_05_B = 0;
    GCCC_CDPNVVars[GCCC_Propulsion_Type_B7] = GCCC_PropulsionType_MHEV;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("159: FNC_VAR09_Cevt_OutputDriver_159",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_160(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_05_B = 0;
    GCCC_CDPNVVars[GCCC_Propulsion_Type_B7] = 0;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("160: FNC_VAR09_Cevt_OutputDriver_160",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_161(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_07_B = 1;
    g_DIAGSYS_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_DIAGSYS_B5] = 0x01;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("161: FNC_VAR09_Cevt_OutputDriver_161",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_162(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_07_B = 1;
    g_DIAGSYS_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_DIAGSYS_B5] = 0x02;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("162: FNC_VAR09_Cevt_OutputDriver_162",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_163(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    g_GCCC_BLKID_07_B = 0;
    GCCC_CDPNVVars[GCCC_DIAGSYS_B5] = 0x01;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("163: FNC_VAR09_Cevt_OutputDriver_163",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_164(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_05_B = 1;
    g_RBS_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_Propulsion_Type_B7] = 0;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("164: FNC_VAR09_Cevt_OutputDriver_164",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_165(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_02_B = 1;
    g_Gearbox_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_GEARBOX_B3]= GCCC_GEARBOX_REDUCER_FWD;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("165: FNC_VAR09_Cevt_OutputDriver_165",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_166(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_02_B = 0;
    g_Gearbox_invalid_B = !1;
    GCCC_CDPRAMVars[GCCC_GEARBOX_B3]= GCCC_GEARBOX_REDUCER_FWD;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("166: FNC_VAR09_Cevt_OutputDriver_166",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_FNC_VAR09_Cevt_OutputDriver_167(int doIt){
if (doIt) {
    /* Test case data declarations */
    UWORD pVarCode = CANTATA_DEFAULT_VALUE;
    UBYTE * CDPVars = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();

    g_GCCC_BLKID_02_B = 0;
    g_Gearbox_invalid_B = !1;
    GCCC_CDPNVVars[GCCC_GEARBOX_B3]= GCCC_GEARBOX_REDUCER_FWD;
  /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("167: FNC_VAR09_Cevt_OutputDriver_167",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{Dem_SetEnableCondition#default}{Dem_SetEventAvailable#default}{StateLimiter__setActive#default}{Dem_setVariantActive#default}{Dem_NodeSetAvailable#default}}");

            /* Call SUT */
            FNC_VAR09_Cevt_OutputDriver(pVarCode, CDPVars);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

/*****************************************************************************/
/* Call Interface Control                                                    */
/*****************************************************************************/

/* Stub for function Dem_SetEnableCondition */
Std_ReturnType Dem_SetEnableCondition(uint8 EnableConditionID,
                                      boolean ConditionFulfilled){
    REGISTER_CALL("Dem_SetEnableCondition");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Stub for function Dem_SetEventAvailable */
Std_ReturnType Dem_SetEventAvailable(uint32 EventId,
                                     boolean status){
    REGISTER_CALL("Dem_SetEventAvailable");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Stub for function StateLimiter__setActive */
void StateLimiter__setActive(const StateLimiter * self,
                             boolean isActive){
    REGISTER_CALL("StateLimiter__setActive");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Stub for function Dem_setVariantActive */
void Dem_setVariantActive(VariantList_t variantlist,
                          uint8_t isActive){
    REGISTER_CALL("Dem_setVariantActive");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Stub for function Dem_NodeSetAvailable */
void Dem_NodeSetAvailable(Dem_NodeIdType NodeId,
                          boolean available){
    REGISTER_CALL("Dem_NodeSetAvailable");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* pragma qas cantata testscript end */
/*****************************************************************************/
/* End of test script                                                        */
/*****************************************************************************/
