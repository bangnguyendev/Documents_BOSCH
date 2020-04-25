/*****************************************************************************/
/*                            Cantata Test Script                            */
/*****************************************************************************/
/*
 *    Filename: atest_DcmAppl_22_rdbi.c
 *    Author: nbg7hc
 *    Generated on: 22-Apr-2020 16:20:52
 *    Generated from: DcmAppl_22_rdbi.c
 */
/*****************************************************************************/
/* Environment Definition                                                    */
/*****************************************************************************/

#define TEST_SCRIPT_GENERATOR 2

/* Include files from software under test */
#include "Dcm.h"
#include "DcmAppl_Intern.h"
#include "DcmDspUds_Dsc_Inf.h"
#include "Dcm_Lcfg_DspUds.h"
#include "Rte_Dcm_Type.h"
#include "NvM.h"
#include "RB_Serialize.h"
#include "DNCIF_CommonConfig_Project.h"
#include "MESGExplicit.h"
#include "Com.h"
#include "Dem.h"
#include "CM_BASETYPES_COMMON.H"
#include "RBMESG_EXPLICIT.h"
#include "RBLiPS_CSWInterface.h"
#include "RBBLM_TEMP_CswItf.h"
#include "Can.h"
#include "DNCIF09_IB_ESP_INTERFACE_IBOOSTER.h"
#include "ASWIF_iBoosterInterfaces.h"
#include "ASWIF_CommonConfig.h"
#include "Net_Global.h"
#include "RBSUPPLYNBS_Voltages.h"
#include "DNCIF_VARIANTCODING_F30.h"
#include "RBLCF_Hexblocks_Iterator.h"
#include "rba_NET_CarConfiguration.h"
#include "RBNMhistory.h"
#include "RBVSI_ControlMain_IF.h"
#include "VAR09_GCCC_STATEMACHINE_CEVT.h"
#include "ASWIF_Formula_Project.h"
#include "DNCIF_CommonConfig_IB2.h"
#include <math.h>
#include <float.h>
#include "RBPSC_MathLib.h"
#include "RBPSC_RPSCalc.h"
#include "RBLCF_Hexblocks_Structs.h"
#include "Platform_Types.h"
#include "RBWauVoltread.h"
#include "RBSUPPLYNBS_Config.h"
#include "RBWauVoltread_PhyCalc.h"
#include "RBSUPPLYNBS_EnvData.h"
#include "RBBLM_Temp_CswItf.h"
#include "RBPSC_RPSCALC_IF.h"
#include "RBPSC_CONTROLMAIN.h"
#include "RBVSI_AscetASW_Interface.h"
#include "rba_NET_FCC_Processing.h"
#include "rba_NET_IMF_Processing.h"
#include "rba_NET_TRC_Processing.h"
#include "rba_SCL_ClassMapping.h"
#include "rba_SCL_ESPiB_Parameters.h"
#include "RBSUPPLYNBS_AverageVoltage.h"
#include "VehicleModeManagement.h"
#include "ComScl_Flags.h"
#include "ComScl_RawSignals.h"
#include "RBWAU_ClientInterface.h"
#include "DNCIF_Global.h"
#include "RBAPLCUST_Global.h"
#include "partnumber.h"
#include "RBSMM_Requester_Cfg.h"
#include "ecy_hsm_csai_session.h"
#include "ecy_hsm_csai_job.h"
#include "ecy_hsm_she.h"
#include "ecy_hsm_csai_keys.h"
#include "ecy_hsm_csai_cert.h"
#include "ecy_hsm_csai_misc.h"
#include "ecy_hsm_csai_data.h"
#include "ecy_hsm_csai_lifecycle.h"
#include "ecy_hsm_ipcdrv.h"
#include "RBAPLOBD_Global.h"
#include "NET_PBCfg_SoftwarePartNumber.h"

#define CANTATA_DEFAULT_VALUE 0 /* Default value of variables & stub returns */

#include <cantpp.h>  /* Cantata Directives */
/* pragma qas cantata testscript start */
/*****************************************************************************/
/* Global Data Definitions                                                   */
/*****************************************************************************/


/* Global Functions */
extern Std_ReturnType DCOM_NvM_GetErrorStatus(NvM_RequestResultType ReadResultValue);
extern void * memcpy(void * param_1, const void * param_2, unsigned int param_3);
uint16 PduR_GetConfigurationId();
uint16 RBWauVolt_getKL15Voltage();
Std_ReturnType Dem_GetEventFailed(Dem_EventIdType EventId, Dem_EventStatusType * EventStatus_p);
uint16 RBLiPS_GetSupplyVoltage_u16();
extern Std_ReturnType DcmAppl_EcuSoftwarePartNumber_0xF12e(uint8 * Data);
extern Std_ReturnType DcmAppl_ECUCoreAssemPartNumber_0xF12a(uint8 * Data);
extern Std_ReturnType DcmAppl_EcuDeliveryAssemblyPart_0xF12b(uint8 * Data);
extern Std_ReturnType DcmAppl_EcuSoftwarePartNumber_Geely_0xF1AE(uint8 * Data);
extern Std_ReturnType DcmAppl_EcuDeliveryAssemblyPart_Geely_0xF1AB(uint8 * Data);
extern Std_ReturnType DcmAppl_ECUCoreAssemPartNumber_Geely_0xF1AA(uint8 * Data);
extern Std_ReturnType DcmAppl_CompleteSoftPartNumb_0xEDA0(uint8 * Data);
extern Std_ReturnType DcmAppl_AppDiagDataPartNumber_0xF120(uint8 * Data);
extern Std_ReturnType DcmAppl_ReadEcuSerialNumber_0xF18C(Dcm_OpStatusType OpStatus, uint8 * Data);
extern Std_ReturnType DcmAppl_AppDiagDataPartNumber_Geely_0xF1A0(uint8 * Data);
extern Std_ReturnType DcmAppl_CompleteSoftPartNumb_Geely_0xED20(uint8 * Data);
extern Std_ReturnType DcmAppl_UsageMode(uint8 * Data);
extern Std_ReturnType DcmAppl_Autosar_BSW_Cluster_Version_0xF126(uint8 * Data);
extern Std_ReturnType DcmAppl_NMHistory_FR_Buffer_0xD200(uint8 * Data);
extern Std_ReturnType DcmAppl_NetworkManagementHistory_0xD210(uint8 * Data);
extern Std_ReturnType DcmAppl_NetworkManagementHistory_0xD239(uint8 * Data);
extern Std_ReturnType DcmAppl_Vehiclebattery_Voltage_0xDD02(uint8 * Data);
extern Std_ReturnType DcmAppl_SupplyVoltage_0xD002(uint8 * Data);
extern Std_ReturnType DcmAppl_BrakePedalPosition_0x2B35(uint8 * Data);
extern Std_ReturnType DcmAppl_GlobalRealTime(uint8 * Data);
extern Std_ReturnType DcmAppl_PartialNetworkCluster_0xDD0B(uint8 * Data);
extern Std_ReturnType DcmAppl_TotalDistance(uint8 * Data);
extern Std_ReturnType DcmAppl_ElPowerLevel_0xDD0C(uint8 * Data);
extern Std_ReturnType DcmAppl_ECU_powerSupply_0xD111(uint8 * Data);
extern Std_ReturnType DcmAppl_PWM_InputSignal_0xD112(uint8 * Data);
extern Std_ReturnType DcmAppl_InternalSensorSignal_0xD113(uint8 * Data);
extern Std_ReturnType DcmAppl_carMode_0xD134(uint8 * Data);
extern Std_ReturnType DcmAppl_faultyCarConfigParameters_0xE103(uint8 * Data);
extern Std_ReturnType DcmAppl_iBstatus(uint8 * Data);
extern Std_ReturnType DcmAppl_forceBlendingPotential(uint8 * Data);
extern Std_ReturnType DcmAppl_outputRodDriver(uint8 * Data);
extern Std_ReturnType DcmAppl_outputRodAct(uint8 * Data);
extern Std_ReturnType DcmAppl_extReqStatus(uint8 * Data);
extern Std_ReturnType DcmAppl_extReqPrio(uint8 * Data);
extern Std_ReturnType DcmAppl_runout(uint8 * Data);
extern void ACCESS_FUNCTION_DcmAppl_22_rdbi_RBAPLCUST_getCCP(uint16 CCPNum_u16, uint8 * pBuffer);
extern Std_ReturnType DcmAppl_AnalogueData_0xFD01(uint8 * Data);
extern Std_ReturnType DcmAppl_iB_Status_Information_0xFD00(uint8 * Data);
extern Std_ReturnType DcmAppl_HighQuiescent_0xD005(uint8 * Data);
extern Std_ReturnType DcmAppl_ReadQCMActDeact_D09A(Dcm_OpStatusType OpStatus, uint8 * Data);
extern Std_ReturnType DcmAppl_RoutingTableConfigurationIdentification_0xD220(uint8 * Data);
extern Std_ReturnType DcmAppl_Supplier_Software_Version_0xFEE0(uint8 * Data);
extern Std_ReturnType DcmAppl_swAuthPublicKeyCheckSum_0xD03A(uint8 * Data);
extern void PRC_DCOM_GetEcuSerial_V();

/* Global data */
extern uint16 C_F12E_PUB[100];
extern UBYTE C_F12E_MERGE[15];
extern uint8 g_ECUCoreAssemPartNum_Read[7];
extern uint8 g_ECUDeliveryAssemPartNum_Read[7];
extern uint16 C_F1AE_PUB[100];
extern UBYTE C_F1AE_MERGE[17];
extern uint8 g_ECUDeliveryAssemPartNum_Geely_Read[8];
extern uint8 g_ECUCoreAssemPartNum_Geely_Read[8];
extern uint16 C_F120_PUB[100];
extern uint8 ECUSerialNumber[4];
extern uint16 C_F1A0_PUB[100];
extern ComScl_RawSigGrp_igVehModMngtGlbSafe1_0_st ComScl_RawSigGrp_igVehModMngtGlbSafe1_0;
extern NMStatebuffer_ST g_NMStatebufferFlexray_PST[10];
extern NMStatebuffer_ST g_NMStatebufferChasCAN_PST[10];
extern NMStatebuffer_ST g_NMStatebufferADReduCAN_PST[10];
extern ComScl_RawSigGrp_igVehBattU_st ComScl_RawSigGrp_igVehBattU;
extern volatile RBMESG_Type_RBVSI_InputRodStrokeCalc RBMESG_RBVSI_InputRodStrokeCalc;
extern volatile MESGType_NMSG_CarTiGlb_UL MESG_NMSG_CarTiGlb_UL;
extern volatile MESGType_NMSG_DcmPNCStatus_u32 MESG_NMSG_DcmPNCStatus_u32;
extern volatile MESGType_NMSG_DstTrvlDMst_RCV_UL MESG_NMSG_DstTrvlDMst_RCV_UL;
extern volatile MESGType_NMSG_VehicleSpeed_ST MESG_NMSG_VehicleSpeed_ST;
extern volatile RBMESG_Type_RBMESG_UBBFiltered RBMESG_RBMESG_UBBFiltered;
extern volatile RBMESG_Type_RBMESG_LiPS2Signal_S16 RBMESG_RBMESG_LiPS2Signal_S16;
extern volatile RBMESG_Type_RBMESG_BLMTemperatureB6_Ch1_s16 RBMESG_RBMESG_BLMTemperatureB6_Ch1_s16;
extern volatile RBMESG_Type_RBMESG_BLMTemperatureB6_Ch2_s16 RBMESG_RBMESG_BLMTemperatureB6_Ch2_s16;
extern volatile MESGType_NMSG_GCC_InvalidParametersArray_ST MESG_NMSG_GCC_InvalidParametersArray_ST;
extern volatile MESGType_NMSG_iBStatusXMT_N MESG_NMSG_iBStatusXMT_N;
extern volatile MESGType_NMSG_pForceBlendingPotentialXMT_ST MESG_NMSG_pForceBlendingPotentialXMT_ST;
extern volatile MESGType_NMSG_sOutputRodDrvr_ST MESG_NMSG_sOutputRodDrvr_ST;
extern volatile MESGType_NMSG_sOutputRod_Act_ST MESG_NMSG_sOutputRod_Act_ST;
extern volatile MESGType_NMSG_ExtReq_XMT_ST MESG_NMSG_ExtReq_XMT_ST;
extern volatile MESGType_NMSG_pRunoutXMT_ST MESG_NMSG_pRunoutXMT_ST;
extern ComScl_RawSigGrp_igVehCfgPrm_st ComScl_RawSigGrp_igVehCfgPrm;
extern volatile RBMESG_Type_QCMStsFlag_Persistent_UB RBMESG_QCMStsFlag_Persistent_UB;
extern volatile RBMESG_Type_NVM_QCMResult_Valid RBMESG_NVM_QCMResult_Valid;
extern UBYTE g_QCMActDeact_UB[1];
extern volatile MESGType_RBAPO_ActuatorPositionQualifier MESG_RBAPO_ActuatorPositionQualifier;
extern volatile MESGType_RBAPO_ActuatorPosition MESG_RBAPO_ActuatorPosition;
extern volatile MESGType_RBVSA_OutputRodActualQualifier MESG_RBVSA_OutputRodActualQualifier;
extern volatile MESGType_RBVSA_OutputRodActual MESG_RBVSA_OutputRodActual;
extern volatile MESGType_RBVSI_pMC_calibrated MESG_RBVSI_pMC_calibrated;
extern volatile RBMESG_Type_RBMESG_UB6Filtered RBMESG_RBMESG_UB6Filtered;
extern sint16 RBPSC_SpeedTarget;
extern sint16 RBPSC_SpeedActual;
extern sint16 RBPSC_TorqueTarget;
extern sint16 RBPSC_TorqueActual;
extern volatile RBMESG_Type_iB_status_N RBMESG_iB_status_N;
extern volatile RBMESG_Type_iB_ready_for_actuation_B RBMESG_iB_ready_for_actuation_B;
extern volatile RBMESG_Type_DriverOnPedal_B RBMESG_DriverOnPedal_B;
extern volatile RBMESG_Type_iB_BrkLightActive_B RBMESG_iB_BrkLightActive_B;
typedef struct DcmAppl_22_rdbi_av_struct { ecy_hsm_Csai_ErrorT * ref_Public_Checksum_Read_RdbiErrCodeOpenSession; ecy_hsm_Csai_ErrorT * ref_Public_Checksum_Read_Success; ecy_hsm_Csai_SessionHandleT * ref_Public_Checksum_Read_RdbihSession; uint32 * ref_Public_Checksum_Read_RdbiStorageTag_u32; uint32 * ref_secureDataCnt; unsigned char(* ref_securePublicKeyChecksumData)[32]; ecy_hsm_Csai_JobHandleT * ref_Public_Checksum_Read_RdbihJob; uint8 * ref_gs_invalidCcpCounter; uint16 * ref_gs_RBMESG_UBBFiltered; uint8 * ref_gs_RBMESG_UBBFilteredAFterConv; } DcmAppl_22_rdbi_av_struct;
extern DcmAppl_22_rdbi_av_struct av_DcmAppl_22_rdbi;
extern uint8(* LOCAL_VARIABLE_ACCESSOR(DcmAppl_22_rdbi, DcmAppl_HighQuiescent_0xD005, QCM_Buffer))[50];
extern boolean * LOCAL_VARIABLE_ACCESSOR(DcmAppl_22_rdbi, DcmAppl_HighQuiescent_0xD005, StatusFlag_b);
extern boolean * LOCAL_VARIABLE_ACCESSOR(DcmAppl_22_rdbi, DcmAppl_ReadQCMActDeact_D09A, s_Status_b);
extern uint8(* LOCAL_VARIABLE_ACCESSOR(DcmAppl_22_rdbi, PRC_DCOM_GetEcuSerial_V, EcuSerialNumber_NvmBuffer))[29];
uint8 map_Data[15]; /* Generated by Cantata */
uint8 map_Data_1[7]; /* Generated by Cantata */
uint8 map_Data_2[7]; /* Generated by Cantata */
uint8 map_Data_3[9]; /* Generated by Cantata */
uint8 map_Data_4[8]; /* Generated by Cantata */
uint8 map_Data_5[8]; /* Generated by Cantata */
uint8 map_Data_6[50]; /* Generated by Cantata */
uint8 map_Data_7[8]; /* Generated by Cantata */
uint8 map_Data_8[4]; /* Generated by Cantata */
uint8 map_Data_9[8]; /* Generated by Cantata */
uint8 map_Data_10[47]; /* Generated by Cantata */
uint8 map_Data_11[1]; /* Generated by Cantata */
uint8 map_Data_12[51]; /* Generated by Cantata */
uint8 map_Data_13[50]; /* Generated by Cantata */
uint8 map_Data_14[50]; /* Generated by Cantata */
uint8 map_Data_15[50]; /* Generated by Cantata */
uint8 map_Data_17[1]; /* Generated by Cantata */
uint8 map_Data_18[2]; /* Generated by Cantata */
uint8 map_Data_19[2]; /* Generated by Cantata */
uint8 map_Data_20[4]; /* Generated by Cantata */
uint8 map_Data_21[3]; /* Generated by Cantata */
uint8 map_Data_22[3]; /* Generated by Cantata */
uint8 map_Data_23[1]; /* Generated by Cantata */
uint8 map_Data_24[1]; /* Generated by Cantata */
uint8 map_Data_25[2]; /* Generated by Cantata */
uint8 map_Data_26[4]; /* Generated by Cantata */
uint8 map_Data_27[1]; /* Generated by Cantata */
uint8 map_Data_28[31]; /* Generated by Cantata */
uint8 map_Data_29[1]; /* Generated by Cantata */
uint8 map_Data_30[1]; /* Generated by Cantata */
uint8 map_Data_31[2]; /* Generated by Cantata */
uint8 map_Data_32[2]; /* Generated by Cantata */
uint8 map_Data_33[1]; /* Generated by Cantata */
uint8 map_Data_34[1]; /* Generated by Cantata */
uint8 map_Data_35[1]; /* Generated by Cantata */
uint8 map_pBuffer[4]; /* Generated by Cantata */
uint8 map_Data_36[28]; /* Generated by Cantata */
uint8 map_Data_37[4]; /* Generated by Cantata */

/* Expected variables for global data */
uint16 expected_C_F12E_PUB[100];
UBYTE expected_C_F12E_MERGE[15];
uint8 expected_g_ECUCoreAssemPartNum_Read[7];
uint8 expected_g_ECUDeliveryAssemPartNum_Read[7];
uint16 expected_C_F1AE_PUB[100];
UBYTE expected_C_F1AE_MERGE[17];
uint8 expected_g_ECUDeliveryAssemPartNum_Geely_Read[8];
uint8 expected_g_ECUCoreAssemPartNum_Geely_Read[8];
uint16 expected_C_F120_PUB[100];
uint8 expected_ECUSerialNumber[4];
uint16 expected_C_F1A0_PUB[100];
ComScl_RawSigGrp_igVehModMngtGlbSafe1_0_st expected_ComScl_RawSigGrp_igVehModMngtGlbSafe1_0;
NMStatebuffer_ST expected_g_NMStatebufferFlexray_PST[10];
NMStatebuffer_ST expected_g_NMStatebufferChasCAN_PST[10];
NMStatebuffer_ST expected_g_NMStatebufferADReduCAN_PST[10];
ComScl_RawSigGrp_igVehBattU_st expected_ComScl_RawSigGrp_igVehBattU;
RBMESG_Type_RBVSI_InputRodStrokeCalc expected_RBMESG_RBVSI_InputRodStrokeCalc;
MESGType_NMSG_CarTiGlb_UL expected_MESG_NMSG_CarTiGlb_UL;
MESGType_NMSG_DcmPNCStatus_u32 expected_MESG_NMSG_DcmPNCStatus_u32;
MESGType_NMSG_DstTrvlDMst_RCV_UL expected_MESG_NMSG_DstTrvlDMst_RCV_UL;
MESGType_NMSG_VehicleSpeed_ST expected_MESG_NMSG_VehicleSpeed_ST;
RBMESG_Type_RBMESG_UBBFiltered expected_RBMESG_RBMESG_UBBFiltered;
RBMESG_Type_RBMESG_LiPS2Signal_S16 expected_RBMESG_RBMESG_LiPS2Signal_S16;
RBMESG_Type_RBMESG_BLMTemperatureB6_Ch1_s16 expected_RBMESG_RBMESG_BLMTemperatureB6_Ch1_s16;
RBMESG_Type_RBMESG_BLMTemperatureB6_Ch2_s16 expected_RBMESG_RBMESG_BLMTemperatureB6_Ch2_s16;
MESGType_NMSG_GCC_InvalidParametersArray_ST expected_MESG_NMSG_GCC_InvalidParametersArray_ST;
MESGType_NMSG_iBStatusXMT_N expected_MESG_NMSG_iBStatusXMT_N;
MESGType_NMSG_pForceBlendingPotentialXMT_ST expected_MESG_NMSG_pForceBlendingPotentialXMT_ST;
MESGType_NMSG_sOutputRodDrvr_ST expected_MESG_NMSG_sOutputRodDrvr_ST;
MESGType_NMSG_sOutputRod_Act_ST expected_MESG_NMSG_sOutputRod_Act_ST;
MESGType_NMSG_ExtReq_XMT_ST expected_MESG_NMSG_ExtReq_XMT_ST;
MESGType_NMSG_pRunoutXMT_ST expected_MESG_NMSG_pRunoutXMT_ST;
ComScl_RawSigGrp_igVehCfgPrm_st expected_ComScl_RawSigGrp_igVehCfgPrm;
RBMESG_Type_QCMStsFlag_Persistent_UB expected_RBMESG_QCMStsFlag_Persistent_UB;
RBMESG_Type_NVM_QCMResult_Valid expected_RBMESG_NVM_QCMResult_Valid;
UBYTE expected_g_QCMActDeact_UB[1];
MESGType_RBAPO_ActuatorPositionQualifier expected_MESG_RBAPO_ActuatorPositionQualifier;
MESGType_RBAPO_ActuatorPosition expected_MESG_RBAPO_ActuatorPosition;
MESGType_RBVSA_OutputRodActualQualifier expected_MESG_RBVSA_OutputRodActualQualifier;
MESGType_RBVSA_OutputRodActual expected_MESG_RBVSA_OutputRodActual;
MESGType_RBVSI_pMC_calibrated expected_MESG_RBVSI_pMC_calibrated;
RBMESG_Type_RBMESG_UB6Filtered expected_RBMESG_RBMESG_UB6Filtered;
sint16 expected_RBPSC_SpeedTarget;
sint16 expected_RBPSC_SpeedActual;
sint16 expected_RBPSC_TorqueTarget;
sint16 expected_RBPSC_TorqueActual;
RBMESG_Type_iB_status_N expected_RBMESG_iB_status_N;
RBMESG_Type_iB_ready_for_actuation_B expected_RBMESG_iB_ready_for_actuation_B;
RBMESG_Type_DriverOnPedal_B expected_RBMESG_DriverOnPedal_B;
RBMESG_Type_iB_BrkLightActive_B expected_RBMESG_iB_BrkLightActive_B;
typedef struct expected_DcmAppl_22_rdbi_av_struct { ecy_hsm_Csai_ErrorT ref_Public_Checksum_Read_RdbiErrCodeOpenSession; ecy_hsm_Csai_ErrorT ref_Public_Checksum_Read_Success; ecy_hsm_Csai_SessionHandleT ref_Public_Checksum_Read_RdbihSession; uint32 ref_Public_Checksum_Read_RdbiStorageTag_u32; uint32 ref_secureDataCnt; unsigned char ref_securePublicKeyChecksumData[32]; ecy_hsm_Csai_JobHandleT ref_Public_Checksum_Read_RdbihJob; uint8 ref_gs_invalidCcpCounter; uint16 ref_gs_RBMESG_UBBFiltered; uint8 ref_gs_RBMESG_UBBFilteredAFterConv; } expected_DcmAppl_22_rdbi_av_struct;
expected_DcmAppl_22_rdbi_av_struct expected_av_DcmAppl_22_rdbi;
uint8 expected_map_Data[15];
uint8 expected_map_Data_1[7];
uint8 expected_map_Data_2[7];
uint8 expected_map_Data_3[9];
uint8 expected_map_Data_4[8];
uint8 expected_map_Data_5[8];
uint8 expected_map_Data_6[50];
uint8 expected_map_Data_7[8];
uint8 expected_map_Data_8[4];
uint8 expected_map_Data_9[8];
uint8 expected_map_Data_10[47];
uint8 expected_map_Data_11[1];
uint8 expected_map_Data_12[51];
uint8 expected_map_Data_13[50];
uint8 expected_map_Data_14[50];
uint8 expected_map_Data_15[50];
uint8 expected_map_Data_17[1];
uint8 expected_map_Data_18[2];
uint8 expected_map_Data_19[2];
uint8 expected_map_Data_20[4];
uint8 expected_map_Data_21[3];
uint8 expected_map_Data_22[3];
uint8 expected_map_Data_23[1];
uint8 expected_map_Data_24[1];
uint8 expected_map_Data_25[2];
uint8 expected_map_Data_26[4];
uint8 expected_map_Data_27[1];
uint8 expected_map_Data_28[31];
uint8 expected_map_Data_29[1];
uint8 expected_map_Data_30[1];
uint8 expected_map_Data_31[2];
uint8 expected_map_Data_32[2];
uint8 expected_map_Data_33[1];
uint8 expected_map_Data_34[1];
uint8 expected_map_Data_35[1];
uint8 expected_map_pBuffer[4];
uint8 expected_map_Data_36[28];
uint8 expected_map_Data_37[4];

/* This function initialises global data to default values. This function       */
/* is called by every test case so must not contain test case specific settings */
static void initialise_global_data(){
    INITIALISE(C_F12E_PUB);
    INITIALISE(C_F12E_MERGE);
    INITIALISE(g_ECUCoreAssemPartNum_Read);
    INITIALISE(g_ECUDeliveryAssemPartNum_Read);
    INITIALISE(C_F1AE_PUB);
    INITIALISE(C_F1AE_MERGE);
    INITIALISE(g_ECUDeliveryAssemPartNum_Geely_Read);
    INITIALISE(g_ECUCoreAssemPartNum_Geely_Read);
    INITIALISE(C_F120_PUB);
    INITIALISE(ECUSerialNumber);
    INITIALISE(C_F1A0_PUB);
    INITIALISE(ComScl_RawSigGrp_igVehModMngtGlbSafe1_0);
    INITIALISE(g_NMStatebufferFlexray_PST);
    INITIALISE(g_NMStatebufferChasCAN_PST);
    INITIALISE(g_NMStatebufferADReduCAN_PST);
    INITIALISE(ComScl_RawSigGrp_igVehBattU);
    INITIALISE(RBMESG_RBVSI_InputRodStrokeCalc);
    INITIALISE(MESG_NMSG_CarTiGlb_UL);
    INITIALISE(MESG_NMSG_DcmPNCStatus_u32);
    INITIALISE(MESG_NMSG_DstTrvlDMst_RCV_UL);
    INITIALISE(MESG_NMSG_VehicleSpeed_ST);
    INITIALISE(ACCESS_VARIABLE(DcmAppl_22_rdbi, gs_RBMESG_UBBFiltered));
    INITIALISE(RBMESG_RBMESG_UBBFiltered);
    INITIALISE(ACCESS_VARIABLE(DcmAppl_22_rdbi, gs_RBMESG_UBBFilteredAFterConv));
    INITIALISE(RBMESG_RBMESG_LiPS2Signal_S16);
    INITIALISE(RBMESG_RBMESG_BLMTemperatureB6_Ch1_s16);
    INITIALISE(RBMESG_RBMESG_BLMTemperatureB6_Ch2_s16);
    INITIALISE(MESG_NMSG_GCC_InvalidParametersArray_ST);
    INITIALISE(MESG_NMSG_iBStatusXMT_N);
    INITIALISE(MESG_NMSG_pForceBlendingPotentialXMT_ST);
    INITIALISE(MESG_NMSG_sOutputRodDrvr_ST);
    INITIALISE(MESG_NMSG_sOutputRod_Act_ST);
    INITIALISE(MESG_NMSG_ExtReq_XMT_ST);
    INITIALISE(MESG_NMSG_pRunoutXMT_ST);
    INITIALISE(ACCESS_VARIABLE(DcmAppl_22_rdbi, gs_invalidCcpCounter));
    INITIALISE(ComScl_RawSigGrp_igVehCfgPrm);
            INITIALISE(RBMESG_QCMStsFlag_Persistent_UB);
        INITIALISE(RBMESG_NVM_QCMResult_Valid);
    INITIALISE(g_QCMActDeact_UB);
        INITIALISE(MESG_RBAPO_ActuatorPositionQualifier);
    INITIALISE(MESG_RBAPO_ActuatorPosition);
    INITIALISE(MESG_RBVSA_OutputRodActualQualifier);
    INITIALISE(MESG_RBVSA_OutputRodActual);
    INITIALISE(MESG_RBVSI_pMC_calibrated);
    INITIALISE(RBMESG_RBMESG_UB6Filtered);
    INITIALISE(RBPSC_SpeedTarget);
    INITIALISE(RBPSC_SpeedActual);
    INITIALISE(RBPSC_TorqueTarget);
    INITIALISE(RBPSC_TorqueActual);
    INITIALISE(RBMESG_iB_status_N);
    INITIALISE(RBMESG_iB_ready_for_actuation_B);
    INITIALISE(RBMESG_DriverOnPedal_B);
    INITIALISE(RBMESG_iB_BrkLightActive_B);
    INITIALISE(ACCESS_VARIABLE(DcmAppl_22_rdbi, Public_Checksum_Read_RdbiErrCodeOpenSession));
    INITIALISE(ACCESS_VARIABLE(DcmAppl_22_rdbi, Public_Checksum_Read_RdbihSession));
    INITIALISE(ACCESS_VARIABLE(DcmAppl_22_rdbi, Public_Checksum_Read_RdbiStorageTag_u32));
    INITIALISE(ACCESS_VARIABLE(DcmAppl_22_rdbi, Public_Checksum_Read_Success));
    INITIALISE(ACCESS_VARIABLE(DcmAppl_22_rdbi, securePublicKeyChecksumData));
    INITIALISE(ACCESS_VARIABLE(DcmAppl_22_rdbi, secureDataCnt));
    INITIALISE(ACCESS_VARIABLE(DcmAppl_22_rdbi, Public_Checksum_Read_RdbihJob));
    INITIALISE(map_Data);
    INITIALISE(map_Data_1);
    INITIALISE(map_Data_2);
    INITIALISE(map_Data_3);
    INITIALISE(map_Data_4);
    INITIALISE(map_Data_5);
    INITIALISE(map_Data_6);
    INITIALISE(map_Data_7);
    INITIALISE(map_Data_8);
    INITIALISE(map_Data_9);
    INITIALISE(map_Data_10);
    INITIALISE(map_Data_11);
    INITIALISE(map_Data_12);
    INITIALISE(map_Data_13);
    INITIALISE(map_Data_14);
    INITIALISE(map_Data_15);
    INITIALISE(map_Data_17);
    INITIALISE(map_Data_18);
    INITIALISE(map_Data_19);
    INITIALISE(map_Data_20);
    INITIALISE(map_Data_21);
    INITIALISE(map_Data_22);
    INITIALISE(map_Data_23);
    INITIALISE(map_Data_24);
    INITIALISE(map_Data_25);
    INITIALISE(map_Data_26);
    INITIALISE(map_Data_27);
    INITIALISE(map_Data_28);
    INITIALISE(map_Data_29);
    INITIALISE(map_Data_30);
    INITIALISE(map_Data_31);
    INITIALISE(map_Data_32);
    INITIALISE(map_Data_33);
    INITIALISE(map_Data_34);
    INITIALISE(map_Data_35);
    INITIALISE(map_pBuffer);
    INITIALISE(map_Data_36);
    INITIALISE(map_Data_37);
}

/* This function copies the global data settings into expected variables for */
/* use in check_global_data(). It is called by every test case so must not   */
/* contain test case specific settings.                                      */
static void initialise_expected_global_data(){
    COPY_TO_EXPECTED(C_F12E_PUB, expected_C_F12E_PUB);
    COPY_TO_EXPECTED(C_F12E_MERGE, expected_C_F12E_MERGE);
    COPY_TO_EXPECTED(g_ECUCoreAssemPartNum_Read, expected_g_ECUCoreAssemPartNum_Read);
    COPY_TO_EXPECTED(g_ECUDeliveryAssemPartNum_Read, expected_g_ECUDeliveryAssemPartNum_Read);
    COPY_TO_EXPECTED(C_F1AE_PUB, expected_C_F1AE_PUB);
    COPY_TO_EXPECTED(C_F1AE_MERGE, expected_C_F1AE_MERGE);
    COPY_TO_EXPECTED(g_ECUDeliveryAssemPartNum_Geely_Read, expected_g_ECUDeliveryAssemPartNum_Geely_Read);
    COPY_TO_EXPECTED(g_ECUCoreAssemPartNum_Geely_Read, expected_g_ECUCoreAssemPartNum_Geely_Read);
    COPY_TO_EXPECTED(C_F120_PUB, expected_C_F120_PUB);
    COPY_TO_EXPECTED(ECUSerialNumber, expected_ECUSerialNumber);
    COPY_TO_EXPECTED(C_F1A0_PUB, expected_C_F1A0_PUB);
    COPY_TO_EXPECTED(ComScl_RawSigGrp_igVehModMngtGlbSafe1_0, expected_ComScl_RawSigGrp_igVehModMngtGlbSafe1_0);
    COPY_TO_EXPECTED(g_NMStatebufferFlexray_PST, expected_g_NMStatebufferFlexray_PST);
    COPY_TO_EXPECTED(g_NMStatebufferChasCAN_PST, expected_g_NMStatebufferChasCAN_PST);
    COPY_TO_EXPECTED(g_NMStatebufferADReduCAN_PST, expected_g_NMStatebufferADReduCAN_PST);
    COPY_TO_EXPECTED(ComScl_RawSigGrp_igVehBattU, expected_ComScl_RawSigGrp_igVehBattU);
    COPY_TO_EXPECTED(RBMESG_RBVSI_InputRodStrokeCalc, expected_RBMESG_RBVSI_InputRodStrokeCalc);
    COPY_TO_EXPECTED(MESG_NMSG_CarTiGlb_UL, expected_MESG_NMSG_CarTiGlb_UL);
    COPY_TO_EXPECTED(MESG_NMSG_DcmPNCStatus_u32, expected_MESG_NMSG_DcmPNCStatus_u32);
    COPY_TO_EXPECTED(MESG_NMSG_DstTrvlDMst_RCV_UL, expected_MESG_NMSG_DstTrvlDMst_RCV_UL);
    COPY_TO_EXPECTED(MESG_NMSG_VehicleSpeed_ST, expected_MESG_NMSG_VehicleSpeed_ST);
    COPY_TO_EXPECTED(ACCESS_VARIABLE(DcmAppl_22_rdbi, gs_RBMESG_UBBFiltered), ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, gs_RBMESG_UBBFiltered));
    COPY_TO_EXPECTED(RBMESG_RBMESG_UBBFiltered, expected_RBMESG_RBMESG_UBBFiltered);
    COPY_TO_EXPECTED(ACCESS_VARIABLE(DcmAppl_22_rdbi, gs_RBMESG_UBBFilteredAFterConv), ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, gs_RBMESG_UBBFilteredAFterConv));
    COPY_TO_EXPECTED(RBMESG_RBMESG_LiPS2Signal_S16, expected_RBMESG_RBMESG_LiPS2Signal_S16);
    COPY_TO_EXPECTED(RBMESG_RBMESG_BLMTemperatureB6_Ch1_s16, expected_RBMESG_RBMESG_BLMTemperatureB6_Ch1_s16);
    COPY_TO_EXPECTED(RBMESG_RBMESG_BLMTemperatureB6_Ch2_s16, expected_RBMESG_RBMESG_BLMTemperatureB6_Ch2_s16);
    COPY_TO_EXPECTED(MESG_NMSG_GCC_InvalidParametersArray_ST, expected_MESG_NMSG_GCC_InvalidParametersArray_ST);
    COPY_TO_EXPECTED(MESG_NMSG_iBStatusXMT_N, expected_MESG_NMSG_iBStatusXMT_N);
    COPY_TO_EXPECTED(MESG_NMSG_pForceBlendingPotentialXMT_ST, expected_MESG_NMSG_pForceBlendingPotentialXMT_ST);
    COPY_TO_EXPECTED(MESG_NMSG_sOutputRodDrvr_ST, expected_MESG_NMSG_sOutputRodDrvr_ST);
    COPY_TO_EXPECTED(MESG_NMSG_sOutputRod_Act_ST, expected_MESG_NMSG_sOutputRod_Act_ST);
    COPY_TO_EXPECTED(MESG_NMSG_ExtReq_XMT_ST, expected_MESG_NMSG_ExtReq_XMT_ST);
    COPY_TO_EXPECTED(MESG_NMSG_pRunoutXMT_ST, expected_MESG_NMSG_pRunoutXMT_ST);
    COPY_TO_EXPECTED(ACCESS_VARIABLE(DcmAppl_22_rdbi, gs_invalidCcpCounter), ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, gs_invalidCcpCounter));
    COPY_TO_EXPECTED(ComScl_RawSigGrp_igVehCfgPrm, expected_ComScl_RawSigGrp_igVehCfgPrm);
    COPY_TO_EXPECTED(RBMESG_QCMStsFlag_Persistent_UB, expected_RBMESG_QCMStsFlag_Persistent_UB);
    COPY_TO_EXPECTED(RBMESG_NVM_QCMResult_Valid, expected_RBMESG_NVM_QCMResult_Valid);
    COPY_TO_EXPECTED(g_QCMActDeact_UB, expected_g_QCMActDeact_UB);
    COPY_TO_EXPECTED(MESG_RBAPO_ActuatorPositionQualifier, expected_MESG_RBAPO_ActuatorPositionQualifier);
    COPY_TO_EXPECTED(MESG_RBAPO_ActuatorPosition, expected_MESG_RBAPO_ActuatorPosition);
    COPY_TO_EXPECTED(MESG_RBVSA_OutputRodActualQualifier, expected_MESG_RBVSA_OutputRodActualQualifier);
    COPY_TO_EXPECTED(MESG_RBVSA_OutputRodActual, expected_MESG_RBVSA_OutputRodActual);
    COPY_TO_EXPECTED(MESG_RBVSI_pMC_calibrated, expected_MESG_RBVSI_pMC_calibrated);
    COPY_TO_EXPECTED(RBMESG_RBMESG_UB6Filtered, expected_RBMESG_RBMESG_UB6Filtered);
    COPY_TO_EXPECTED(RBPSC_SpeedTarget, expected_RBPSC_SpeedTarget);
    COPY_TO_EXPECTED(RBPSC_SpeedActual, expected_RBPSC_SpeedActual);
    COPY_TO_EXPECTED(RBPSC_TorqueTarget, expected_RBPSC_TorqueTarget);
    COPY_TO_EXPECTED(RBPSC_TorqueActual, expected_RBPSC_TorqueActual);
    COPY_TO_EXPECTED(RBMESG_iB_status_N, expected_RBMESG_iB_status_N);
    COPY_TO_EXPECTED(RBMESG_iB_ready_for_actuation_B, expected_RBMESG_iB_ready_for_actuation_B);
    COPY_TO_EXPECTED(RBMESG_DriverOnPedal_B, expected_RBMESG_DriverOnPedal_B);
    COPY_TO_EXPECTED(RBMESG_iB_BrkLightActive_B, expected_RBMESG_iB_BrkLightActive_B);
    COPY_TO_EXPECTED(ACCESS_VARIABLE(DcmAppl_22_rdbi, Public_Checksum_Read_RdbiErrCodeOpenSession), ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, Public_Checksum_Read_RdbiErrCodeOpenSession));
    COPY_TO_EXPECTED(ACCESS_VARIABLE(DcmAppl_22_rdbi, Public_Checksum_Read_RdbihSession), ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, Public_Checksum_Read_RdbihSession));
    COPY_TO_EXPECTED(ACCESS_VARIABLE(DcmAppl_22_rdbi, Public_Checksum_Read_RdbiStorageTag_u32), ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, Public_Checksum_Read_RdbiStorageTag_u32));
    COPY_TO_EXPECTED(ACCESS_VARIABLE(DcmAppl_22_rdbi, Public_Checksum_Read_Success), ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, Public_Checksum_Read_Success));
    COPY_TO_EXPECTED(ACCESS_VARIABLE(DcmAppl_22_rdbi, securePublicKeyChecksumData), ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, securePublicKeyChecksumData));
    COPY_TO_EXPECTED(ACCESS_VARIABLE(DcmAppl_22_rdbi, secureDataCnt), ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, secureDataCnt));
    COPY_TO_EXPECTED(ACCESS_VARIABLE(DcmAppl_22_rdbi, Public_Checksum_Read_RdbihJob), ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, Public_Checksum_Read_RdbihJob));
    COPY_TO_EXPECTED(map_Data, expected_map_Data);
    COPY_TO_EXPECTED(map_Data_1, expected_map_Data_1);
    COPY_TO_EXPECTED(map_Data_2, expected_map_Data_2);
    COPY_TO_EXPECTED(map_Data_3, expected_map_Data_3);
    COPY_TO_EXPECTED(map_Data_4, expected_map_Data_4);
    COPY_TO_EXPECTED(map_Data_5, expected_map_Data_5);
    COPY_TO_EXPECTED(map_Data_6, expected_map_Data_6);
    COPY_TO_EXPECTED(map_Data_7, expected_map_Data_7);
    COPY_TO_EXPECTED(map_Data_8, expected_map_Data_8);
    COPY_TO_EXPECTED(map_Data_9, expected_map_Data_9);
    COPY_TO_EXPECTED(map_Data_10, expected_map_Data_10);
    COPY_TO_EXPECTED(map_Data_11, expected_map_Data_11);
    COPY_TO_EXPECTED(map_Data_12, expected_map_Data_12);
    COPY_TO_EXPECTED(map_Data_13, expected_map_Data_13);
    COPY_TO_EXPECTED(map_Data_14, expected_map_Data_14);
    COPY_TO_EXPECTED(map_Data_15, expected_map_Data_15);
    COPY_TO_EXPECTED(map_Data_17, expected_map_Data_17);
    COPY_TO_EXPECTED(map_Data_18, expected_map_Data_18);
    COPY_TO_EXPECTED(map_Data_19, expected_map_Data_19);
    COPY_TO_EXPECTED(map_Data_20, expected_map_Data_20);
    COPY_TO_EXPECTED(map_Data_21, expected_map_Data_21);
    COPY_TO_EXPECTED(map_Data_22, expected_map_Data_22);
    COPY_TO_EXPECTED(map_Data_23, expected_map_Data_23);
    COPY_TO_EXPECTED(map_Data_24, expected_map_Data_24);
    COPY_TO_EXPECTED(map_Data_25, expected_map_Data_25);
    COPY_TO_EXPECTED(map_Data_26, expected_map_Data_26);
    COPY_TO_EXPECTED(map_Data_27, expected_map_Data_27);
    COPY_TO_EXPECTED(map_Data_28, expected_map_Data_28);
    COPY_TO_EXPECTED(map_Data_29, expected_map_Data_29);
    COPY_TO_EXPECTED(map_Data_30, expected_map_Data_30);
    COPY_TO_EXPECTED(map_Data_31, expected_map_Data_31);
    COPY_TO_EXPECTED(map_Data_32, expected_map_Data_32);
    COPY_TO_EXPECTED(map_Data_33, expected_map_Data_33);
    COPY_TO_EXPECTED(map_Data_34, expected_map_Data_34);
    COPY_TO_EXPECTED(map_Data_35, expected_map_Data_35);
    COPY_TO_EXPECTED(map_pBuffer, expected_map_pBuffer);
    COPY_TO_EXPECTED(map_Data_36, expected_map_Data_36);
    COPY_TO_EXPECTED(map_Data_37, expected_map_Data_37);
}

/* This function checks global data against the expected values. */
static void check_global_data(){
    CHECK_MEMORY("C_F12E_PUB", C_F12E_PUB, expected_C_F12E_PUB, sizeof(expected_C_F12E_PUB));
    CHECK_MEMORY("C_F12E_MERGE", C_F12E_MERGE, expected_C_F12E_MERGE, sizeof(expected_C_F12E_MERGE));
    CHECK_MEMORY("g_ECUCoreAssemPartNum_Read", g_ECUCoreAssemPartNum_Read, expected_g_ECUCoreAssemPartNum_Read, sizeof(expected_g_ECUCoreAssemPartNum_Read));
    CHECK_MEMORY("g_ECUDeliveryAssemPartNum_Read", g_ECUDeliveryAssemPartNum_Read, expected_g_ECUDeliveryAssemPartNum_Read, sizeof(expected_g_ECUDeliveryAssemPartNum_Read));
    CHECK_MEMORY("C_F1AE_PUB", C_F1AE_PUB, expected_C_F1AE_PUB, sizeof(expected_C_F1AE_PUB));
    CHECK_MEMORY("C_F1AE_MERGE", C_F1AE_MERGE, expected_C_F1AE_MERGE, sizeof(expected_C_F1AE_MERGE));
    CHECK_MEMORY("g_ECUDeliveryAssemPartNum_Geely_Read", g_ECUDeliveryAssemPartNum_Geely_Read, expected_g_ECUDeliveryAssemPartNum_Geely_Read, sizeof(expected_g_ECUDeliveryAssemPartNum_Geely_Read));
    CHECK_MEMORY("g_ECUCoreAssemPartNum_Geely_Read", g_ECUCoreAssemPartNum_Geely_Read, expected_g_ECUCoreAssemPartNum_Geely_Read, sizeof(expected_g_ECUCoreAssemPartNum_Geely_Read));
    CHECK_MEMORY("C_F120_PUB", C_F120_PUB, expected_C_F120_PUB, sizeof(expected_C_F120_PUB));
    CHECK_MEMORY("ECUSerialNumber", ECUSerialNumber, expected_ECUSerialNumber, sizeof(expected_ECUSerialNumber));
    CHECK_MEMORY("C_F1A0_PUB", C_F1A0_PUB, expected_C_F1A0_PUB, sizeof(expected_C_F1A0_PUB));
    CHECK_MEMORY("ComScl_RawSigGrp_igVehModMngtGlbSafe1_0", &ComScl_RawSigGrp_igVehModMngtGlbSafe1_0, &expected_ComScl_RawSigGrp_igVehModMngtGlbSafe1_0, sizeof(expected_ComScl_RawSigGrp_igVehModMngtGlbSafe1_0));
    CHECK_MEMORY("g_NMStatebufferFlexray_PST", g_NMStatebufferFlexray_PST, expected_g_NMStatebufferFlexray_PST, sizeof(expected_g_NMStatebufferFlexray_PST));
    CHECK_MEMORY("g_NMStatebufferChasCAN_PST", g_NMStatebufferChasCAN_PST, expected_g_NMStatebufferChasCAN_PST, sizeof(expected_g_NMStatebufferChasCAN_PST));
    CHECK_MEMORY("g_NMStatebufferADReduCAN_PST", g_NMStatebufferADReduCAN_PST, expected_g_NMStatebufferADReduCAN_PST, sizeof(expected_g_NMStatebufferADReduCAN_PST));
    CHECK_MEMORY("ComScl_RawSigGrp_igVehBattU", &ComScl_RawSigGrp_igVehBattU, &expected_ComScl_RawSigGrp_igVehBattU, sizeof(expected_ComScl_RawSigGrp_igVehBattU));
    CHECK_S_INT(RBMESG_RBVSI_InputRodStrokeCalc, expected_RBMESG_RBVSI_InputRodStrokeCalc);
    CHECK_U_INT(MESG_NMSG_CarTiGlb_UL, expected_MESG_NMSG_CarTiGlb_UL);
    CHECK_U_INT(MESG_NMSG_DcmPNCStatus_u32, expected_MESG_NMSG_DcmPNCStatus_u32);
    CHECK_U_INT(MESG_NMSG_DstTrvlDMst_RCV_UL, expected_MESG_NMSG_DstTrvlDMst_RCV_UL);
    CHECK_MEMORY("MESG_NMSG_VehicleSpeed_ST", &MESG_NMSG_VehicleSpeed_ST, &expected_MESG_NMSG_VehicleSpeed_ST, sizeof(expected_MESG_NMSG_VehicleSpeed_ST));
    CHECK_U_INT(ACCESS_VARIABLE(DcmAppl_22_rdbi, gs_RBMESG_UBBFiltered), ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, gs_RBMESG_UBBFiltered));
    CHECK_U_INT(RBMESG_RBMESG_UBBFiltered, expected_RBMESG_RBMESG_UBBFiltered);
    CHECK_U_CHAR(ACCESS_VARIABLE(DcmAppl_22_rdbi, gs_RBMESG_UBBFilteredAFterConv), ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, gs_RBMESG_UBBFilteredAFterConv));
    CHECK_S_INT(RBMESG_RBMESG_LiPS2Signal_S16, expected_RBMESG_RBMESG_LiPS2Signal_S16);
    CHECK_S_INT(RBMESG_RBMESG_BLMTemperatureB6_Ch1_s16, expected_RBMESG_RBMESG_BLMTemperatureB6_Ch1_s16);
    CHECK_S_INT(RBMESG_RBMESG_BLMTemperatureB6_Ch2_s16, expected_RBMESG_RBMESG_BLMTemperatureB6_Ch2_s16);
    CHECK_MEMORY("MESG_NMSG_GCC_InvalidParametersArray_ST", &MESG_NMSG_GCC_InvalidParametersArray_ST, &expected_MESG_NMSG_GCC_InvalidParametersArray_ST, sizeof(expected_MESG_NMSG_GCC_InvalidParametersArray_ST));
    CHECK_U_INT(MESG_NMSG_iBStatusXMT_N, expected_MESG_NMSG_iBStatusXMT_N);
    CHECK_MEMORY("MESG_NMSG_pForceBlendingPotentialXMT_ST", &MESG_NMSG_pForceBlendingPotentialXMT_ST, &expected_MESG_NMSG_pForceBlendingPotentialXMT_ST, sizeof(expected_MESG_NMSG_pForceBlendingPotentialXMT_ST));
    CHECK_MEMORY("MESG_NMSG_sOutputRodDrvr_ST", &MESG_NMSG_sOutputRodDrvr_ST, &expected_MESG_NMSG_sOutputRodDrvr_ST, sizeof(expected_MESG_NMSG_sOutputRodDrvr_ST));
    CHECK_MEMORY("MESG_NMSG_sOutputRod_Act_ST", &MESG_NMSG_sOutputRod_Act_ST, &expected_MESG_NMSG_sOutputRod_Act_ST, sizeof(expected_MESG_NMSG_sOutputRod_Act_ST));
    CHECK_MEMORY("MESG_NMSG_ExtReq_XMT_ST", &MESG_NMSG_ExtReq_XMT_ST, &expected_MESG_NMSG_ExtReq_XMT_ST, sizeof(expected_MESG_NMSG_ExtReq_XMT_ST));
    CHECK_MEMORY("MESG_NMSG_pRunoutXMT_ST", &MESG_NMSG_pRunoutXMT_ST, &expected_MESG_NMSG_pRunoutXMT_ST, sizeof(expected_MESG_NMSG_pRunoutXMT_ST));
    CHECK_U_CHAR(ACCESS_VARIABLE(DcmAppl_22_rdbi, gs_invalidCcpCounter), ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, gs_invalidCcpCounter));
    CHECK_MEMORY("ComScl_RawSigGrp_igVehCfgPrm", &ComScl_RawSigGrp_igVehCfgPrm, &expected_ComScl_RawSigGrp_igVehCfgPrm, sizeof(expected_ComScl_RawSigGrp_igVehCfgPrm));
    CHECK_U_CHAR(RBMESG_QCMStsFlag_Persistent_UB, expected_RBMESG_QCMStsFlag_Persistent_UB);
    CHECK_U_CHAR(RBMESG_NVM_QCMResult_Valid, expected_RBMESG_NVM_QCMResult_Valid);
    CHECK_MEMORY("g_QCMActDeact_UB", g_QCMActDeact_UB, expected_g_QCMActDeact_UB, sizeof(expected_g_QCMActDeact_UB));
    CHECK_U_INT(MESG_RBAPO_ActuatorPositionQualifier, expected_MESG_RBAPO_ActuatorPositionQualifier);
    CHECK_S_INT(MESG_RBAPO_ActuatorPosition, expected_MESG_RBAPO_ActuatorPosition);
    CHECK_U_INT(MESG_RBVSA_OutputRodActualQualifier, expected_MESG_RBVSA_OutputRodActualQualifier);
    CHECK_S_INT(MESG_RBVSA_OutputRodActual, expected_MESG_RBVSA_OutputRodActual);
    CHECK_S_INT(MESG_RBVSI_pMC_calibrated, expected_MESG_RBVSI_pMC_calibrated);
    CHECK_U_INT(RBMESG_RBMESG_UB6Filtered, expected_RBMESG_RBMESG_UB6Filtered);
    CHECK_S_INT(RBPSC_SpeedTarget, expected_RBPSC_SpeedTarget);
    CHECK_S_INT(RBPSC_SpeedActual, expected_RBPSC_SpeedActual);
    CHECK_S_INT(RBPSC_TorqueTarget, expected_RBPSC_TorqueTarget);
    CHECK_S_INT(RBPSC_TorqueActual, expected_RBPSC_TorqueActual);
    CHECK_U_INT(RBMESG_iB_status_N, expected_RBMESG_iB_status_N);
    CHECK_U_CHAR(RBMESG_iB_ready_for_actuation_B, expected_RBMESG_iB_ready_for_actuation_B);
    CHECK_U_CHAR(RBMESG_DriverOnPedal_B, expected_RBMESG_DriverOnPedal_B);
    CHECK_U_CHAR(RBMESG_iB_BrkLightActive_B, expected_RBMESG_iB_BrkLightActive_B);
    CHECK_U_INT(ACCESS_VARIABLE(DcmAppl_22_rdbi, Public_Checksum_Read_RdbiErrCodeOpenSession), ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, Public_Checksum_Read_RdbiErrCodeOpenSession));
    CHECK_U_INT(ACCESS_VARIABLE(DcmAppl_22_rdbi, Public_Checksum_Read_RdbihSession), ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, Public_Checksum_Read_RdbihSession));
    CHECK_U_INT(ACCESS_VARIABLE(DcmAppl_22_rdbi, Public_Checksum_Read_RdbiStorageTag_u32), ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, Public_Checksum_Read_RdbiStorageTag_u32));
    CHECK_U_INT(ACCESS_VARIABLE(DcmAppl_22_rdbi, Public_Checksum_Read_Success), ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, Public_Checksum_Read_Success));
    CHECK_MEMORY("ACCESS_VARIABLE(DcmAppl_22_rdbi, securePublicKeyChecksumData)", ACCESS_VARIABLE(DcmAppl_22_rdbi, securePublicKeyChecksumData), ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, securePublicKeyChecksumData), sizeof(ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, securePublicKeyChecksumData)));
    CHECK_U_INT(ACCESS_VARIABLE(DcmAppl_22_rdbi, secureDataCnt), ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, secureDataCnt));
    CHECK_U_INT(ACCESS_VARIABLE(DcmAppl_22_rdbi, Public_Checksum_Read_RdbihJob), ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, Public_Checksum_Read_RdbihJob));
    CHECK_MEMORY("map_Data", map_Data, expected_map_Data, sizeof(expected_map_Data));
    CHECK_MEMORY("map_Data_1", map_Data_1, expected_map_Data_1, sizeof(expected_map_Data_1));
    CHECK_MEMORY("map_Data_2", map_Data_2, expected_map_Data_2, sizeof(expected_map_Data_2));
    CHECK_MEMORY("map_Data_3", map_Data_3, expected_map_Data_3, sizeof(expected_map_Data_3));
    CHECK_MEMORY("map_Data_4", map_Data_4, expected_map_Data_4, sizeof(expected_map_Data_4));
    CHECK_MEMORY("map_Data_5", map_Data_5, expected_map_Data_5, sizeof(expected_map_Data_5));
    CHECK_MEMORY("map_Data_6", map_Data_6, expected_map_Data_6, sizeof(expected_map_Data_6));
    CHECK_MEMORY("map_Data_7", map_Data_7, expected_map_Data_7, sizeof(expected_map_Data_7));
    CHECK_MEMORY("map_Data_8", map_Data_8, expected_map_Data_8, sizeof(expected_map_Data_8));
    CHECK_MEMORY("map_Data_9", map_Data_9, expected_map_Data_9, sizeof(expected_map_Data_9));
    CHECK_MEMORY("map_Data_10", map_Data_10, expected_map_Data_10, sizeof(expected_map_Data_10));
    CHECK_MEMORY("map_Data_11", map_Data_11, expected_map_Data_11, sizeof(expected_map_Data_11));
    CHECK_MEMORY("map_Data_12", map_Data_12, expected_map_Data_12, sizeof(expected_map_Data_12));
    CHECK_MEMORY("map_Data_13", map_Data_13, expected_map_Data_13, sizeof(expected_map_Data_13));
    CHECK_MEMORY("map_Data_14", map_Data_14, expected_map_Data_14, sizeof(expected_map_Data_14));
    CHECK_MEMORY("map_Data_15", map_Data_15, expected_map_Data_15, sizeof(expected_map_Data_15));
    CHECK_MEMORY("map_Data_17", map_Data_17, expected_map_Data_17, sizeof(expected_map_Data_17));
    CHECK_MEMORY("map_Data_18", map_Data_18, expected_map_Data_18, sizeof(expected_map_Data_18));
    CHECK_MEMORY("map_Data_19", map_Data_19, expected_map_Data_19, sizeof(expected_map_Data_19));
    CHECK_MEMORY("map_Data_20", map_Data_20, expected_map_Data_20, sizeof(expected_map_Data_20));
    CHECK_MEMORY("map_Data_21", map_Data_21, expected_map_Data_21, sizeof(expected_map_Data_21));
    CHECK_MEMORY("map_Data_22", map_Data_22, expected_map_Data_22, sizeof(expected_map_Data_22));
    CHECK_MEMORY("map_Data_23", map_Data_23, expected_map_Data_23, sizeof(expected_map_Data_23));
    CHECK_MEMORY("map_Data_24", map_Data_24, expected_map_Data_24, sizeof(expected_map_Data_24));
    CHECK_MEMORY("map_Data_25", map_Data_25, expected_map_Data_25, sizeof(expected_map_Data_25));
    CHECK_MEMORY("map_Data_26", map_Data_26, expected_map_Data_26, sizeof(expected_map_Data_26));
    CHECK_MEMORY("map_Data_27", map_Data_27, expected_map_Data_27, sizeof(expected_map_Data_27));
    CHECK_MEMORY("map_Data_28", map_Data_28, expected_map_Data_28, sizeof(expected_map_Data_28));
    CHECK_MEMORY("map_Data_29", map_Data_29, expected_map_Data_29, sizeof(expected_map_Data_29));
    CHECK_MEMORY("map_Data_30", map_Data_30, expected_map_Data_30, sizeof(expected_map_Data_30));
    CHECK_MEMORY("map_Data_31", map_Data_31, expected_map_Data_31, sizeof(expected_map_Data_31));
    CHECK_MEMORY("map_Data_32", map_Data_32, expected_map_Data_32, sizeof(expected_map_Data_32));
    CHECK_MEMORY("map_Data_33", map_Data_33, expected_map_Data_33, sizeof(expected_map_Data_33));
    CHECK_MEMORY("map_Data_34", map_Data_34, expected_map_Data_34, sizeof(expected_map_Data_34));
    CHECK_MEMORY("map_Data_35", map_Data_35, expected_map_Data_35, sizeof(expected_map_Data_35));
    CHECK_MEMORY("map_pBuffer", map_pBuffer, expected_map_pBuffer, sizeof(expected_map_pBuffer));
    CHECK_MEMORY("map_Data_36", map_Data_36, expected_map_Data_36, sizeof(expected_map_Data_36));
    CHECK_MEMORY("map_Data_37", map_Data_37, expected_map_Data_37, sizeof(expected_map_Data_37));
}

/* Prototypes for test functions */
void run_tests();
void test_1(int);
void test_2(int);
void test_3(int);
void test_4(int);
void test_5(int);
void test_6(int);
void test_7(int);
void test_8(int);
void test_9(int);
void test_10(int);
void test_11(int);
void test_12(int);
void test_13(int);
void test_14(int);
void test_15(int);
void test_16(int);
void test_17(int);
void test_18(int);
void test_19(int);
void test_20(int);
void test_21(int);
void test_22(int);
void test_23(int);
void test_24(int);
void test_25(int);
void test_26(int);
void test_27(int);
void test_28(int);
void test_29(int);
void test_30(int);
void test_31(int);
void test_32(int);
void test_33(int);
void test_34(int);
void test_35(int);
void test_36(int);
void test_37(int);
void test_38(int);
void test_39(int);
void test_40(int);
void test_41(int);
void test_42(int);
void test_43(int);
void test_44(int);
void test_45(int);
void test_46(int);
void test_47(int);
void test_48(int);
void test_49(int);
void test_50(int);
void test_51(int);
void test_52(int);
void test_53(int);
void test_54(int);
void test_55(int);
void test_56(int);
void test_57(int);
void test_58(int);
void test_59(int);
void test_60(int);
void test_61(int);
void test_62(int);
void test_63(int);
void test_64(int);
void test_65(int);
void test_66(int);
void test_67(int);
void test_68(int);
void test_69(int);
void test_70(int);
void test_71(int);
void test_72(int);
void test_73(int);
void test_74(int);
void test_75(int);
void test_76(int);
void test_77(int);
void test_78(int);
void test_79(int);
void test_80(int);
void test_81(int);
void test_82(int);
void test_DcmAppl_HighQuiescent_0xD005(int);
void test_DcmAppl_HighQuiescent_0xD005_1(int);
void test_DcmAppl_HighQuiescent_0xD005_2(int);
void test_DcmAppl_HighQuiescent_0xD005_3(int);
void test_DcmAppl_HighQuiescent_0xD005_4(int);
void test_DcmAppl_HighQuiescent_0xD005_5(int);
void test_DcmAppl_HighQuiescent_0xD005_6(int);
void test_DcmAppl_HighQuiescent_0xD005_7(int);
void test_83(int);
void test_DcmAppl_ReadQCMActDeact_D09A(int);
void test_DcmAppl_ReadQCMActDeact_D09A_1(int);
void test_DcmAppl_ReadQCMActDeact_D09A_2(int);
void test_DcmAppl_ReadQCMActDeact_D09A_3(int);
void test_DcmAppl_ReadQCMActDeact_D09A_4(int);
void test_DcmAppl_ReadQCMActDeact_D09A_5(int);
void test_DcmAppl_ReadQCMActDeact_D09A_6(int);
void test_DcmAppl_ReadQCMActDeact_D09A_7(int);
void test_DcmAppl_ReadQCMActDeact_D09A_8(int);
void test_DcmAppl_ReadQCMActDeact_D09A_9(int);
void test_DcmAppl_ReadQCMActDeact_D09A_10(int);
void test_DcmAppl_ReadQCMActDeact_D09A_11(int);
void test_DcmAppl_ReadQCMActDeact_D09A_12(int);
void test_DcmAppl_RoutingTableConfigurationIdentification_0xD220(int);
void test_DcmAppl_swAuthPublicKeyCheckSum_0xD03A(int);
void test_DcmAppl_swAuthPublicKeyCheckSum_0xD03A_1(int);
void test_DcmAppl_swAuthPublicKeyCheckSum_0xD03A_2(int);
void test_PRC_DCOM_GetEcuSerial_V(int);
void test_PRC_DCOM_GetEcuSerial_V_1(int);
void test_PRC_DCOM_GetEcuSerial_V_2(int);
void test_PRC_DCOM_GetEcuSerial_V_3(int);
void test_DcmAppl_Supplier_Software_Version_0xFEE0(int);
void test_DcmAppl_Supplier_Software_Version_0xFEE0_1(int);
void test_DcmAppl_Supplier_Software_Version_0xFEE0_2(int);
void test_DcmAppl_Supplier_Software_Version_0xFEE0_3(int);
void test_DcmAppl_Supplier_Software_Version_0xFEE0_4(int);
void test_PRC_DCOM_GetEcuSerial_V_4(int);
void test_PRC_DCOM_GetEcuSerial_V_5(int);
void test_PRC_DCOM_GetEcuSerial_V_6(int);
void test_PRC_DCOM_GetEcuSerial_V_7(int);
void test_PRC_DCOM_GetEcuSerial_V_8(int);
void test_PRC_DCOM_GetEcuSerial_V_9(int);
void test_PRC_DCOM_GetEcuSerial_V_10(int);
void test_DcmAppl_HighQuiescent_0xD005_8(int);
void test_DcmAppl_HighQuiescent_0xD005_9(int);

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
    OPEN_LOG("atest_DcmAppl_22_rdbi.ctr", false, 100);
    START_SCRIPT("DcmAppl_22_rdbi", true);

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
    test_1(1);
    test_2(1);
    test_3(1);
    test_4(1);
    test_5(1);
    test_6(1);
    test_7(1);
    test_8(1);
    test_9(1);
    test_10(1);
    test_11(1);
    test_12(1);
    test_13(1);
    test_14(1);
    test_15(1);
    test_16(1);
    test_17(1);
    test_18(1);
    test_19(1);
    test_20(1);
    test_21(1);
    test_22(1);
    test_23(1);
    test_24(1);
    test_25(1);
    test_26(1);
    test_27(1);
    test_28(1);
    test_29(1);
    test_30(1);
    test_31(1);
    test_32(1);
    test_33(1);
    test_34(1);
    test_35(1);
    test_36(1);
    test_37(1);
    test_38(1);
    test_39(1);
    test_40(1);
    test_41(1);
    test_42(1);
    test_43(1);
    test_44(1);
    test_45(1);
    test_46(1);
    test_47(1);
    test_48(1);
    test_49(1);
    test_50(1);
    test_51(1);
    test_52(1);
    test_53(1);
    test_54(1);
    test_55(1);
    test_56(1);
    test_57(1);
    test_58(1);
    test_59(1);
    test_60(1);
    test_61(1);
    test_62(1);
    test_63(1);
    test_64(1);
    test_65(1);
    test_66(1);
    test_67(1);
    test_68(1);
    test_69(1);
    test_70(1);
    test_71(1);
    test_72(1);
    test_73(1);
    test_74(1);
    test_75(1);
    test_76(1);
    test_77(1);
    test_78(1);
    test_79(1);
    test_80(1);
    test_81(1);
    test_82(1);
    test_DcmAppl_HighQuiescent_0xD005(1);
    test_DcmAppl_HighQuiescent_0xD005_1(1);
    test_DcmAppl_HighQuiescent_0xD005_2(1);
    test_DcmAppl_HighQuiescent_0xD005_3(1);
    test_DcmAppl_HighQuiescent_0xD005_4(1);
    test_DcmAppl_HighQuiescent_0xD005_5(1);
    test_DcmAppl_HighQuiescent_0xD005_6(1);
    test_DcmAppl_HighQuiescent_0xD005_7(1);
    test_83(1);
    test_DcmAppl_ReadQCMActDeact_D09A(1);
    test_DcmAppl_ReadQCMActDeact_D09A_1(1);
    test_DcmAppl_ReadQCMActDeact_D09A_2(1);
    test_DcmAppl_ReadQCMActDeact_D09A_3(1);
    test_DcmAppl_ReadQCMActDeact_D09A_4(1);
    test_DcmAppl_ReadQCMActDeact_D09A_5(1);
    test_DcmAppl_ReadQCMActDeact_D09A_6(1);
    test_DcmAppl_ReadQCMActDeact_D09A_7(1);
    test_DcmAppl_ReadQCMActDeact_D09A_8(1);
    test_DcmAppl_ReadQCMActDeact_D09A_9(1);
    test_DcmAppl_ReadQCMActDeact_D09A_10(1);
    test_DcmAppl_ReadQCMActDeact_D09A_11(1);
    test_DcmAppl_ReadQCMActDeact_D09A_12(1);
    test_DcmAppl_RoutingTableConfigurationIdentification_0xD220(1);
    test_DcmAppl_swAuthPublicKeyCheckSum_0xD03A(1);
    test_DcmAppl_swAuthPublicKeyCheckSum_0xD03A_1(1);
    test_DcmAppl_swAuthPublicKeyCheckSum_0xD03A_2(1);
    test_PRC_DCOM_GetEcuSerial_V(1);
    test_PRC_DCOM_GetEcuSerial_V_1(1);
    test_PRC_DCOM_GetEcuSerial_V_2(1);
    test_PRC_DCOM_GetEcuSerial_V_3(1);
    test_DcmAppl_Supplier_Software_Version_0xFEE0(1);
    test_DcmAppl_Supplier_Software_Version_0xFEE0_1(1);
    test_DcmAppl_Supplier_Software_Version_0xFEE0_2(1);
    test_DcmAppl_Supplier_Software_Version_0xFEE0_3(1);
    test_DcmAppl_Supplier_Software_Version_0xFEE0_4(1);
    test_PRC_DCOM_GetEcuSerial_V_4(1);
    test_PRC_DCOM_GetEcuSerial_V_5(1);
    test_PRC_DCOM_GetEcuSerial_V_6(1);
    test_PRC_DCOM_GetEcuSerial_V_7(1);
    test_PRC_DCOM_GetEcuSerial_V_8(1);
    test_PRC_DCOM_GetEcuSerial_V_9(1);
    test_PRC_DCOM_GetEcuSerial_V_10(1);
    test_DcmAppl_HighQuiescent_0xD005_8(1);
    test_DcmAppl_HighQuiescent_0xD005_9(1);

    rule_set("*", "*");
    EXPORT_COVERAGE("atest_DcmAppl_22_rdbi.cov", cppca_export_replace);
}

/*****************************************************************************/
/* Test Cases                                                                */
/*****************************************************************************/

void test_1(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    C_F12E_PUB[0] = 0U;
    C_F12E_PUB[1] = 0U;
    C_F12E_PUB[2] = 0U;
    C_F12E_PUB[3] = 0U;
    C_F12E_PUB[4] = 0U;
    C_F12E_PUB[5] = 0U;
    C_F12E_PUB[6] = 0U;
    C_F12E_PUB[7] = 0U;
    C_F12E_PUB[8] = 0U;
    C_F12E_PUB[9] = 0U;
    C_F12E_PUB[10] = 0U;
    C_F12E_PUB[11] = 0U;
    C_F12E_PUB[12] = 0U;
    C_F12E_PUB[13] = 0U;
    C_F12E_PUB[14] = 0U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_C_F12E_MERGE[0] = 0U;
    expected_C_F12E_MERGE[1] = 0U;
    expected_C_F12E_MERGE[2] = 0U;
    expected_C_F12E_MERGE[3] = 0U;
    expected_C_F12E_MERGE[4] = 0U;
    expected_C_F12E_MERGE[5] = 0U;
    expected_C_F12E_MERGE[6] = 0U;
    expected_C_F12E_MERGE[7] = 0U;
    expected_map_Data[0] = 0U;
    expected_map_Data[1] = 0U;
    expected_map_Data[2] = 0U;
    expected_map_Data[3] = 0U;
    expected_map_Data[4] = 0U;
    expected_map_Data[5] = 0U;
    expected_map_Data[6] = 0U;
    expected_map_Data[7] = 0U;
    expected_map_Data[8] = 0U;
    expected_map_Data[9] = 0U;
    expected_map_Data[10] = 0U;
    expected_map_Data[11] = 0U;
    expected_map_Data[12] = 0U;
    expected_map_Data[13] = 0U;
    expected_map_Data[14] = 0U;

    START_TEST("1: DcmAppl_EcuSoftwarePartNumber_0xF12e",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_EcuSoftwarePartNumber_0xF12e(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_2(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_1[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    g_ECUCoreAssemPartNum_Read[0] = 85U;
    g_ECUCoreAssemPartNum_Read[1] = 85U;
    g_ECUCoreAssemPartNum_Read[2] = 85U;
    g_ECUCoreAssemPartNum_Read[3] = 85U;
    g_ECUCoreAssemPartNum_Read[4] = 85U;
    g_ECUCoreAssemPartNum_Read[5] = 85U;
    g_ECUCoreAssemPartNum_Read[6] = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_1[0] = 85U;
    expected_map_Data_1[1] = 85U;
    expected_map_Data_1[2] = 85U;
    expected_map_Data_1[3] = 85U;
    expected_map_Data_1[4] = 85U;
    expected_map_Data_1[5] = 85U;
    expected_map_Data_1[6] = 85U;

    START_TEST("2: DcmAppl_ECUCoreAssemPartNumber_0xF12a",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_ECUCoreAssemPartNumber_0xF12a(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_3(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_2[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    g_ECUDeliveryAssemPartNum_Read[0] = 85U;
    g_ECUDeliveryAssemPartNum_Read[1] = 85U;
    g_ECUDeliveryAssemPartNum_Read[2] = 85U;
    g_ECUDeliveryAssemPartNum_Read[3] = 85U;
    g_ECUDeliveryAssemPartNum_Read[4] = 85U;
    g_ECUDeliveryAssemPartNum_Read[5] = 85U;
    g_ECUDeliveryAssemPartNum_Read[6] = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_2[0] = 85U;
    expected_map_Data_2[1] = 85U;
    expected_map_Data_2[2] = 85U;
    expected_map_Data_2[3] = 85U;
    expected_map_Data_2[4] = 85U;
    expected_map_Data_2[5] = 85U;
    expected_map_Data_2[6] = 85U;

    START_TEST("3: DcmAppl_EcuDeliveryAssemblyPart_0xF12b",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_EcuDeliveryAssemblyPart_0xF12b(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_4(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_3[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    C_F1AE_PUB[0] = 0U;
    C_F1AE_PUB[1] = 0U;
    C_F1AE_PUB[2] = 0U;
    C_F1AE_PUB[3] = 0U;
    C_F1AE_PUB[4] = 0U;
    C_F1AE_PUB[5] = 0U;
    C_F1AE_PUB[6] = 0U;
    C_F1AE_PUB[7] = 0U;
    C_F1AE_PUB[8] = 0U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_C_F1AE_MERGE[0] = 0U;
    expected_C_F1AE_MERGE[1] = 0U;
    expected_C_F1AE_MERGE[2] = 0U;
    expected_C_F1AE_MERGE[3] = 0U;
    expected_C_F1AE_MERGE[4] = 0U;
    expected_C_F1AE_MERGE[5] = 0U;
    expected_C_F1AE_MERGE[6] = 0U;
    expected_C_F1AE_MERGE[7] = 0U;
    expected_C_F1AE_MERGE[8] = 0U;
    expected_map_Data_3[0] = 0U;
    expected_map_Data_3[1] = 0U;
    expected_map_Data_3[2] = 0U;
    expected_map_Data_3[3] = 0U;
    expected_map_Data_3[4] = 0U;
    expected_map_Data_3[5] = 0U;
    expected_map_Data_3[6] = 0U;
    expected_map_Data_3[7] = 0U;
    expected_map_Data_3[8] = 0U;

    START_TEST("4: DcmAppl_EcuSoftwarePartNumber_Geely_0xF1AE",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_EcuSoftwarePartNumber_Geely_0xF1AE(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_5(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_4[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    g_ECUDeliveryAssemPartNum_Geely_Read[0] = 85U;
    g_ECUDeliveryAssemPartNum_Geely_Read[1] = 85U;
    g_ECUDeliveryAssemPartNum_Geely_Read[2] = 85U;
    g_ECUDeliveryAssemPartNum_Geely_Read[3] = 85U;
    g_ECUDeliveryAssemPartNum_Geely_Read[4] = 85U;
    g_ECUDeliveryAssemPartNum_Geely_Read[5] = 85U;
    g_ECUDeliveryAssemPartNum_Geely_Read[6] = 85U;
    g_ECUDeliveryAssemPartNum_Geely_Read[7] = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_4[0] = 85U;
    expected_map_Data_4[1] = 85U;
    expected_map_Data_4[2] = 85U;
    expected_map_Data_4[3] = 85U;
    expected_map_Data_4[4] = 85U;
    expected_map_Data_4[5] = 85U;
    expected_map_Data_4[6] = 85U;
    expected_map_Data_4[7] = 85U;

    START_TEST("5: DcmAppl_EcuDeliveryAssemblyPart_Geely_0xF1AB",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_EcuDeliveryAssemblyPart_Geely_0xF1AB(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_6(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_5[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    g_ECUCoreAssemPartNum_Geely_Read[0] = 85U;
    g_ECUCoreAssemPartNum_Geely_Read[1] = 85U;
    g_ECUCoreAssemPartNum_Geely_Read[2] = 85U;
    g_ECUCoreAssemPartNum_Geely_Read[3] = 85U;
    g_ECUCoreAssemPartNum_Geely_Read[4] = 85U;
    g_ECUCoreAssemPartNum_Geely_Read[5] = 85U;
    g_ECUCoreAssemPartNum_Geely_Read[6] = 85U;
    g_ECUCoreAssemPartNum_Geely_Read[7] = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_5[0] = 85U;
    expected_map_Data_5[1] = 85U;
    expected_map_Data_5[2] = 85U;
    expected_map_Data_5[3] = 85U;
    expected_map_Data_5[4] = 85U;
    expected_map_Data_5[5] = 85U;
    expected_map_Data_5[6] = 85U;
    expected_map_Data_5[7] = 85U;

    START_TEST("6: DcmAppl_ECUCoreAssemPartNumber_Geely_0xF1AA",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_ECUCoreAssemPartNumber_Geely_0xF1AA(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_7(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_6[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    C_F12E_PUB[0] = 0U;
    C_F12E_PUB[1] = 0U;
    C_F12E_PUB[2] = 0U;
    C_F12E_PUB[3] = 0U;
    C_F12E_PUB[4] = 0U;
    C_F12E_PUB[5] = 0U;
    C_F12E_PUB[6] = 0U;
    C_F12E_PUB[7] = 0U;
    C_F12E_PUB[8] = 0U;
    C_F12E_PUB[9] = 0U;
    C_F12E_PUB[10] = 0U;
    C_F12E_PUB[11] = 0U;
    C_F12E_PUB[12] = 0U;
    C_F12E_PUB[13] = 0U;
    C_F12E_PUB[14] = 0U;
    C_F120_PUB[0] = 0U;
    C_F120_PUB[1] = 0U;
    C_F120_PUB[2] = 0U;
    C_F120_PUB[3] = 0U;
    C_F120_PUB[4] = 0U;
    C_F120_PUB[5] = 0U;
    C_F120_PUB[6] = 0U;
    ECUSerialNumber[0] = 85U;
    ECUSerialNumber[1] = 85U;
    ECUSerialNumber[2] = 85U;
    ECUSerialNumber[3] = 85U;
    g_ECUDeliveryAssemPartNum_Read[0] = 85U;
    g_ECUDeliveryAssemPartNum_Read[1] = 85U;
    g_ECUDeliveryAssemPartNum_Read[2] = 85U;
    g_ECUDeliveryAssemPartNum_Read[3] = 85U;
    g_ECUDeliveryAssemPartNum_Read[4] = 85U;
    g_ECUDeliveryAssemPartNum_Read[5] = 85U;
    g_ECUDeliveryAssemPartNum_Read[6] = 85U;
    g_ECUCoreAssemPartNum_Read[0] = 85U;
    g_ECUCoreAssemPartNum_Read[1] = 85U;
    g_ECUCoreAssemPartNum_Read[2] = 85U;
    g_ECUCoreAssemPartNum_Read[3] = 85U;
    g_ECUCoreAssemPartNum_Read[4] = 85U;
    g_ECUCoreAssemPartNum_Read[5] = 85U;
    g_ECUCoreAssemPartNum_Read[6] = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_6[0] = 241U;
    expected_map_Data_6[1] = 32U;
    expected_map_Data_6[2] = 0U;
    expected_map_Data_6[3] = 0U;
    expected_map_Data_6[4] = 0U;
    expected_map_Data_6[5] = 0U;
    expected_map_Data_6[6] = 0U;
    expected_map_Data_6[7] = 0U;
    expected_map_Data_6[8] = 0U;
    expected_map_Data_6[9] = 241U;
    expected_map_Data_6[10] = 42U;
    expected_map_Data_6[11] = 85U;
    expected_map_Data_6[12] = 85U;
    expected_map_Data_6[13] = 85U;
    expected_map_Data_6[14] = 85U;
    expected_map_Data_6[15] = 85U;
    expected_map_Data_6[16] = 85U;
    expected_map_Data_6[17] = 85U;
    expected_map_Data_6[18] = 241U;
    expected_map_Data_6[19] = 43U;
    expected_map_Data_6[20] = 85U;
    expected_map_Data_6[21] = 85U;
    expected_map_Data_6[22] = 85U;
    expected_map_Data_6[23] = 85U;
    expected_map_Data_6[24] = 85U;
    expected_map_Data_6[25] = 85U;
    expected_map_Data_6[26] = 85U;
    expected_map_Data_6[27] = 241U;
    expected_map_Data_6[28] = 140U;
    expected_map_Data_6[29] = 85U;
    expected_map_Data_6[30] = 85U;
    expected_map_Data_6[31] = 85U;
    expected_map_Data_6[32] = 85U;
    expected_map_Data_6[33] = 241U;
    expected_map_Data_6[34] = 46U;
    expected_map_Data_6[35] = 0U;
    expected_map_Data_6[36] = 0U;
    expected_map_Data_6[37] = 0U;
    expected_map_Data_6[38] = 0U;
    expected_map_Data_6[39] = 0U;
    expected_map_Data_6[40] = 0U;
    expected_map_Data_6[41] = 0U;
    expected_map_Data_6[42] = 0U;
    expected_map_Data_6[43] = 0U;
    expected_map_Data_6[44] = 0U;
    expected_map_Data_6[45] = 0U;
    expected_map_Data_6[46] = 0U;
    expected_map_Data_6[47] = 0U;
    expected_map_Data_6[48] = 0U;
    expected_map_Data_6[49] = 0U;

    START_TEST("7: DcmAppl_CompleteSoftPartNumb_0xEDA0",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_CompleteSoftPartNumb_0xEDA0(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_8(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_7[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    C_F120_PUB[0] = 0U;
    C_F120_PUB[1] = 0U;
    C_F120_PUB[2] = 0U;
    C_F120_PUB[3] = 0U;
    C_F120_PUB[4] = 0U;
    C_F120_PUB[5] = 0U;
    C_F120_PUB[6] = 0U;
    C_F120_PUB[7] = 0U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_7[0] = 0U;
    expected_map_Data_7[1] = 0U;
    expected_map_Data_7[2] = 0U;
    expected_map_Data_7[3] = 0U;
    expected_map_Data_7[4] = 0U;
    expected_map_Data_7[5] = 0U;
    expected_map_Data_7[6] = 0U;
    expected_map_Data_7[7] = 0U;

    START_TEST("8: DcmAppl_AppDiagDataPartNumber_0xF120",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_AppDiagDataPartNumber_0xF120(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_9(int doIt){
if (doIt) {
    /* Test case data declarations */
    Dcm_OpStatusType OpStatus = 85U;
    uint8 * Data = &map_Data_8[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    ECUSerialNumber[0] = 85U;
    ECUSerialNumber[1] = 85U;
    ECUSerialNumber[2] = 85U;
    ECUSerialNumber[3] = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_8[0] = 85U;
    expected_map_Data_8[1] = 85U;
    expected_map_Data_8[2] = 85U;
    expected_map_Data_8[3] = 85U;

    START_TEST("9: DcmAppl_ReadEcuSerialNumber_0xF18C",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_ReadEcuSerialNumber_0xF18C(OpStatus, Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_10(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_9[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    C_F1A0_PUB[0] = 0U;
    C_F1A0_PUB[1] = 0U;
    C_F1A0_PUB[2] = 0U;
    C_F1A0_PUB[3] = 0U;
    C_F1A0_PUB[4] = 0U;
    C_F1A0_PUB[5] = 0U;
    C_F1A0_PUB[6] = 0U;
    C_F1A0_PUB[7] = 0U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_9[0] = 0U;
    expected_map_Data_9[1] = 0U;
    expected_map_Data_9[2] = 0U;
    expected_map_Data_9[3] = 0U;
    expected_map_Data_9[4] = 0U;
    expected_map_Data_9[5] = 0U;
    expected_map_Data_9[6] = 0U;
    expected_map_Data_9[7] = 0U;

    START_TEST("10: DcmAppl_AppDiagDataPartNumber_Geely_0xF1A0",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_AppDiagDataPartNumber_Geely_0xF1A0(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_11(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_10[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    C_F1AE_PUB[0] = 0U;
    C_F1AE_PUB[1] = 0U;
    C_F1AE_PUB[2] = 0U;
    C_F1AE_PUB[3] = 0U;
    C_F1AE_PUB[4] = 0U;
    C_F1AE_PUB[5] = 0U;
    C_F1AE_PUB[6] = 0U;
    C_F1AE_PUB[7] = 0U;
    C_F1AE_PUB[8] = 0U;
    C_F1A0_PUB[0] = 0U;
    C_F1A0_PUB[1] = 0U;
    C_F1A0_PUB[2] = 0U;
    C_F1A0_PUB[3] = 0U;
    C_F1A0_PUB[4] = 0U;
    C_F1A0_PUB[5] = 0U;
    C_F1A0_PUB[6] = 0U;
    C_F1A0_PUB[7] = 0U;
    ECUSerialNumber[0] = 85U;
    ECUSerialNumber[1] = 85U;
    ECUSerialNumber[2] = 85U;
    ECUSerialNumber[3] = 85U;
    g_ECUDeliveryAssemPartNum_Geely_Read[0] = 85U;
    g_ECUDeliveryAssemPartNum_Geely_Read[1] = 85U;
    g_ECUDeliveryAssemPartNum_Geely_Read[2] = 85U;
    g_ECUDeliveryAssemPartNum_Geely_Read[3] = 85U;
    g_ECUDeliveryAssemPartNum_Geely_Read[4] = 85U;
    g_ECUDeliveryAssemPartNum_Geely_Read[5] = 85U;
    g_ECUDeliveryAssemPartNum_Geely_Read[6] = 85U;
    g_ECUDeliveryAssemPartNum_Geely_Read[7] = 85U;
    g_ECUCoreAssemPartNum_Geely_Read[0] = 85U;
    g_ECUCoreAssemPartNum_Geely_Read[1] = 85U;
    g_ECUCoreAssemPartNum_Geely_Read[2] = 85U;
    g_ECUCoreAssemPartNum_Geely_Read[3] = 85U;
    g_ECUCoreAssemPartNum_Geely_Read[4] = 85U;
    g_ECUCoreAssemPartNum_Geely_Read[5] = 85U;
    g_ECUCoreAssemPartNum_Geely_Read[6] = 85U;
    g_ECUCoreAssemPartNum_Geely_Read[7] = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_10[0] = 241U;
    expected_map_Data_10[1] = 160U;
    expected_map_Data_10[2] = 0U;
    expected_map_Data_10[3] = 0U;
    expected_map_Data_10[4] = 0U;
    expected_map_Data_10[5] = 0U;
    expected_map_Data_10[6] = 0U;
    expected_map_Data_10[7] = 0U;
    expected_map_Data_10[8] = 0U;
    expected_map_Data_10[9] = 0U;
    expected_map_Data_10[10] = 241U;
    expected_map_Data_10[11] = 170U;
    expected_map_Data_10[12] = 85U;
    expected_map_Data_10[13] = 85U;
    expected_map_Data_10[14] = 85U;
    expected_map_Data_10[15] = 85U;
    expected_map_Data_10[16] = 85U;
    expected_map_Data_10[17] = 85U;
    expected_map_Data_10[18] = 85U;
    expected_map_Data_10[19] = 85U;
    expected_map_Data_10[20] = 241U;
    expected_map_Data_10[21] = 171U;
    expected_map_Data_10[22] = 85U;
    expected_map_Data_10[23] = 85U;
    expected_map_Data_10[24] = 85U;
    expected_map_Data_10[25] = 85U;
    expected_map_Data_10[26] = 85U;
    expected_map_Data_10[27] = 85U;
    expected_map_Data_10[28] = 85U;
    expected_map_Data_10[29] = 85U;
    expected_map_Data_10[30] = 241U;
    expected_map_Data_10[31] = 140U;
    expected_map_Data_10[32] = 85U;
    expected_map_Data_10[33] = 85U;
    expected_map_Data_10[34] = 85U;
    expected_map_Data_10[35] = 85U;
    expected_map_Data_10[36] = 241U;
    expected_map_Data_10[37] = 174U;
    expected_map_Data_10[38] = 0U;
    expected_map_Data_10[39] = 0U;
    expected_map_Data_10[40] = 0U;
    expected_map_Data_10[41] = 0U;
    expected_map_Data_10[42] = 0U;
    expected_map_Data_10[43] = 0U;
    expected_map_Data_10[44] = 0U;
    expected_map_Data_10[45] = 0U;
    expected_map_Data_10[46] = 0U;

    START_TEST("11: DcmAppl_CompleteSoftPartNumb_Geely_0xED20",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_CompleteSoftPartNumb_Geely_0xED20(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_12(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_11[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    ComScl_RawSigGrp_igVehModMngtGlbSafe1_0.ComScl_RawSignal_isVehModMngtGlbSafe1UsgModSts_0_u8 = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_11[0] = 85U;

    START_TEST("12: DcmAppl_UsageMode",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_UsageMode(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_13(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_12[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_12[0] = 0U;
    expected_map_Data_12[1] = 6U;
    expected_map_Data_12[2] = 8U;
    expected_map_Data_12[3] = 0U;
    expected_map_Data_12[4] = 0U;
    expected_map_Data_12[5] = 4U;
    expected_map_Data_12[6] = 0U;
    expected_map_Data_12[7] = 2U;
    expected_map_Data_12[8] = 0U;
    expected_map_Data_12[9] = 0U;
    expected_map_Data_12[10] = 0U;
    expected_map_Data_12[11] = 0U;
    expected_map_Data_12[12] = 0U;
    expected_map_Data_12[13] = 0U;
    expected_map_Data_12[14] = 0U;
    expected_map_Data_12[15] = 0U;
    expected_map_Data_12[16] = 0U;
    expected_map_Data_12[17] = 0U;
    expected_map_Data_12[18] = 0U;
    expected_map_Data_12[19] = 0U;
    expected_map_Data_12[20] = 6U;
    expected_map_Data_12[21] = 3U;
    expected_map_Data_12[22] = 0U;
    expected_map_Data_12[23] = 0U;
    expected_map_Data_12[24] = 4U;
    expected_map_Data_12[25] = 2U;
    expected_map_Data_12[26] = 2U;
    expected_map_Data_12[27] = 0U;
    expected_map_Data_12[28] = 6U;
    expected_map_Data_12[29] = 6U;
    expected_map_Data_12[30] = 0U;
    expected_map_Data_12[31] = 0U;
    expected_map_Data_12[32] = 4U;
    expected_map_Data_12[33] = 2U;
    expected_map_Data_12[34] = 2U;
    expected_map_Data_12[35] = 0U;
    expected_map_Data_12[36] = 0U;
    expected_map_Data_12[37] = 0U;
    expected_map_Data_12[38] = 0U;
    expected_map_Data_12[39] = 0U;
    expected_map_Data_12[40] = 0U;
    expected_map_Data_12[41] = 0U;
    expected_map_Data_12[42] = 0U;
    expected_map_Data_12[43] = 0U;
    expected_map_Data_12[44] = 0U;
    expected_map_Data_12[45] = 0U;
    expected_map_Data_12[46] = 0U;
    expected_map_Data_12[47] = 0U;
    expected_map_Data_12[48] = 0U;
    expected_map_Data_12[49] = 0U;
    expected_map_Data_12[50] = 0U;

    START_TEST("13: DcmAppl_Autosar_BSW_Cluster_Version_0xF126",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_Autosar_BSW_Cluster_Version_0xF126(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_14(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_13[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    g_NMStatebufferFlexray_PST[0].NMState_UB = 85U;
    g_NMStatebufferFlexray_PST[0].CarTiGlbforNM_UB = 0U;
    g_NMStatebufferFlexray_PST[1].NMState_UB = 85U;
    g_NMStatebufferFlexray_PST[1].CarTiGlbforNM_UB = 0U;
    g_NMStatebufferFlexray_PST[2].NMState_UB = 85U;
    g_NMStatebufferFlexray_PST[2].CarTiGlbforNM_UB = 0U;
    g_NMStatebufferFlexray_PST[3].NMState_UB = 85U;
    g_NMStatebufferFlexray_PST[3].CarTiGlbforNM_UB = 0U;
    g_NMStatebufferFlexray_PST[4].NMState_UB = 85U;
    g_NMStatebufferFlexray_PST[4].CarTiGlbforNM_UB = 0U;
    g_NMStatebufferFlexray_PST[5].NMState_UB = 85U;
    g_NMStatebufferFlexray_PST[5].CarTiGlbforNM_UB = 0U;
    g_NMStatebufferFlexray_PST[6].NMState_UB = 85U;
    g_NMStatebufferFlexray_PST[6].CarTiGlbforNM_UB = 0U;
    g_NMStatebufferFlexray_PST[7].NMState_UB = 85U;
    g_NMStatebufferFlexray_PST[7].CarTiGlbforNM_UB = 0U;
    g_NMStatebufferFlexray_PST[8].NMState_UB = 85U;
    g_NMStatebufferFlexray_PST[8].CarTiGlbforNM_UB = 0U;
    g_NMStatebufferFlexray_PST[9].NMState_UB = 85U;
    g_NMStatebufferFlexray_PST[9].CarTiGlbforNM_UB = 0U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_13[0] = 85U;
    expected_map_Data_13[1] = 0U;
    expected_map_Data_13[2] = 0U;
    expected_map_Data_13[3] = 0U;
    expected_map_Data_13[4] = 0U;
    expected_map_Data_13[5] = 85U;
    expected_map_Data_13[6] = 0U;
    expected_map_Data_13[7] = 0U;
    expected_map_Data_13[8] = 0U;
    expected_map_Data_13[9] = 0U;
    expected_map_Data_13[10] = 85U;
    expected_map_Data_13[11] = 0U;
    expected_map_Data_13[12] = 0U;
    expected_map_Data_13[13] = 0U;
    expected_map_Data_13[14] = 0U;
    expected_map_Data_13[15] = 85U;
    expected_map_Data_13[16] = 0U;
    expected_map_Data_13[17] = 0U;
    expected_map_Data_13[18] = 0U;
    expected_map_Data_13[19] = 0U;
    expected_map_Data_13[20] = 85U;
    expected_map_Data_13[21] = 0U;
    expected_map_Data_13[22] = 0U;
    expected_map_Data_13[23] = 0U;
    expected_map_Data_13[24] = 0U;
    expected_map_Data_13[25] = 85U;
    expected_map_Data_13[26] = 0U;
    expected_map_Data_13[27] = 0U;
    expected_map_Data_13[28] = 0U;
    expected_map_Data_13[29] = 0U;
    expected_map_Data_13[30] = 85U;
    expected_map_Data_13[31] = 0U;
    expected_map_Data_13[32] = 0U;
    expected_map_Data_13[33] = 0U;
    expected_map_Data_13[34] = 0U;
    expected_map_Data_13[35] = 85U;
    expected_map_Data_13[36] = 0U;
    expected_map_Data_13[37] = 0U;
    expected_map_Data_13[38] = 0U;
    expected_map_Data_13[39] = 0U;
    expected_map_Data_13[40] = 85U;
    expected_map_Data_13[41] = 0U;
    expected_map_Data_13[42] = 0U;
    expected_map_Data_13[43] = 0U;
    expected_map_Data_13[44] = 0U;
    expected_map_Data_13[45] = 85U;
    expected_map_Data_13[46] = 0U;
    expected_map_Data_13[47] = 0U;
    expected_map_Data_13[48] = 0U;
    expected_map_Data_13[49] = 0U;

    START_TEST("14: DcmAppl_NMHistory_FR_Buffer_0xD200",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_NMHistory_FR_Buffer_0xD200(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_15(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_14[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    g_NMStatebufferChasCAN_PST[0].NMState_UB = 85U;
    g_NMStatebufferChasCAN_PST[0].CarTiGlbforNM_UB = 0U;
    g_NMStatebufferChasCAN_PST[1].NMState_UB = 85U;
    g_NMStatebufferChasCAN_PST[1].CarTiGlbforNM_UB = 0U;
    g_NMStatebufferChasCAN_PST[2].NMState_UB = 85U;
    g_NMStatebufferChasCAN_PST[2].CarTiGlbforNM_UB = 0U;
    g_NMStatebufferChasCAN_PST[3].NMState_UB = 85U;
    g_NMStatebufferChasCAN_PST[3].CarTiGlbforNM_UB = 0U;
    g_NMStatebufferChasCAN_PST[4].NMState_UB = 85U;
    g_NMStatebufferChasCAN_PST[4].CarTiGlbforNM_UB = 0U;
    g_NMStatebufferChasCAN_PST[5].NMState_UB = 85U;
    g_NMStatebufferChasCAN_PST[5].CarTiGlbforNM_UB = 0U;
    g_NMStatebufferChasCAN_PST[6].NMState_UB = 85U;
    g_NMStatebufferChasCAN_PST[6].CarTiGlbforNM_UB = 0U;
    g_NMStatebufferChasCAN_PST[7].NMState_UB = 85U;
    g_NMStatebufferChasCAN_PST[7].CarTiGlbforNM_UB = 0U;
    g_NMStatebufferChasCAN_PST[8].NMState_UB = 85U;
    g_NMStatebufferChasCAN_PST[8].CarTiGlbforNM_UB = 0U;
    g_NMStatebufferChasCAN_PST[9].NMState_UB = 85U;
    g_NMStatebufferChasCAN_PST[9].CarTiGlbforNM_UB = 0U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_14[0] = 85U;
    expected_map_Data_14[1] = 0U;
    expected_map_Data_14[2] = 0U;
    expected_map_Data_14[3] = 0U;
    expected_map_Data_14[4] = 0U;
    expected_map_Data_14[5] = 85U;
    expected_map_Data_14[6] = 0U;
    expected_map_Data_14[7] = 0U;
    expected_map_Data_14[8] = 0U;
    expected_map_Data_14[9] = 0U;
    expected_map_Data_14[10] = 85U;
    expected_map_Data_14[11] = 0U;
    expected_map_Data_14[12] = 0U;
    expected_map_Data_14[13] = 0U;
    expected_map_Data_14[14] = 0U;
    expected_map_Data_14[15] = 85U;
    expected_map_Data_14[16] = 0U;
    expected_map_Data_14[17] = 0U;
    expected_map_Data_14[18] = 0U;
    expected_map_Data_14[19] = 0U;
    expected_map_Data_14[20] = 85U;
    expected_map_Data_14[21] = 0U;
    expected_map_Data_14[22] = 0U;
    expected_map_Data_14[23] = 0U;
    expected_map_Data_14[24] = 0U;
    expected_map_Data_14[25] = 85U;
    expected_map_Data_14[26] = 0U;
    expected_map_Data_14[27] = 0U;
    expected_map_Data_14[28] = 0U;
    expected_map_Data_14[29] = 0U;
    expected_map_Data_14[30] = 85U;
    expected_map_Data_14[31] = 0U;
    expected_map_Data_14[32] = 0U;
    expected_map_Data_14[33] = 0U;
    expected_map_Data_14[34] = 0U;
    expected_map_Data_14[35] = 85U;
    expected_map_Data_14[36] = 0U;
    expected_map_Data_14[37] = 0U;
    expected_map_Data_14[38] = 0U;
    expected_map_Data_14[39] = 0U;
    expected_map_Data_14[40] = 85U;
    expected_map_Data_14[41] = 0U;
    expected_map_Data_14[42] = 0U;
    expected_map_Data_14[43] = 0U;
    expected_map_Data_14[44] = 0U;
    expected_map_Data_14[45] = 85U;
    expected_map_Data_14[46] = 0U;
    expected_map_Data_14[47] = 0U;
    expected_map_Data_14[48] = 0U;
    expected_map_Data_14[49] = 0U;

    START_TEST("15: DcmAppl_NetworkManagementHistory_0xD210",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_NetworkManagementHistory_0xD210(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_16(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_15[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    g_NMStatebufferADReduCAN_PST[0].NMState_UB = 85U;
    g_NMStatebufferADReduCAN_PST[0].CarTiGlbforNM_UB = 0U;
    g_NMStatebufferADReduCAN_PST[1].NMState_UB = 85U;
    g_NMStatebufferADReduCAN_PST[1].CarTiGlbforNM_UB = 0U;
    g_NMStatebufferADReduCAN_PST[2].NMState_UB = 85U;
    g_NMStatebufferADReduCAN_PST[2].CarTiGlbforNM_UB = 0U;
    g_NMStatebufferADReduCAN_PST[3].NMState_UB = 85U;
    g_NMStatebufferADReduCAN_PST[3].CarTiGlbforNM_UB = 0U;
    g_NMStatebufferADReduCAN_PST[4].NMState_UB = 85U;
    g_NMStatebufferADReduCAN_PST[4].CarTiGlbforNM_UB = 0U;
    g_NMStatebufferADReduCAN_PST[5].NMState_UB = 85U;
    g_NMStatebufferADReduCAN_PST[5].CarTiGlbforNM_UB = 0U;
    g_NMStatebufferADReduCAN_PST[6].NMState_UB = 85U;
    g_NMStatebufferADReduCAN_PST[6].CarTiGlbforNM_UB = 0U;
    g_NMStatebufferADReduCAN_PST[7].NMState_UB = 85U;
    g_NMStatebufferADReduCAN_PST[7].CarTiGlbforNM_UB = 0U;
    g_NMStatebufferADReduCAN_PST[8].NMState_UB = 85U;
    g_NMStatebufferADReduCAN_PST[8].CarTiGlbforNM_UB = 0U;
    g_NMStatebufferADReduCAN_PST[9].NMState_UB = 85U;
    g_NMStatebufferADReduCAN_PST[9].CarTiGlbforNM_UB = 0U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_15[0] = 85U;
    expected_map_Data_15[1] = 0U;
    expected_map_Data_15[2] = 0U;
    expected_map_Data_15[3] = 0U;
    expected_map_Data_15[4] = 0U;
    expected_map_Data_15[5] = 85U;
    expected_map_Data_15[6] = 0U;
    expected_map_Data_15[7] = 0U;
    expected_map_Data_15[8] = 0U;
    expected_map_Data_15[9] = 0U;
    expected_map_Data_15[10] = 85U;
    expected_map_Data_15[11] = 0U;
    expected_map_Data_15[12] = 0U;
    expected_map_Data_15[13] = 0U;
    expected_map_Data_15[14] = 0U;
    expected_map_Data_15[15] = 85U;
    expected_map_Data_15[16] = 0U;
    expected_map_Data_15[17] = 0U;
    expected_map_Data_15[18] = 0U;
    expected_map_Data_15[19] = 0U;
    expected_map_Data_15[20] = 85U;
    expected_map_Data_15[21] = 0U;
    expected_map_Data_15[22] = 0U;
    expected_map_Data_15[23] = 0U;
    expected_map_Data_15[24] = 0U;
    expected_map_Data_15[25] = 85U;
    expected_map_Data_15[26] = 0U;
    expected_map_Data_15[27] = 0U;
    expected_map_Data_15[28] = 0U;
    expected_map_Data_15[29] = 0U;
    expected_map_Data_15[30] = 85U;
    expected_map_Data_15[31] = 0U;
    expected_map_Data_15[32] = 0U;
    expected_map_Data_15[33] = 0U;
    expected_map_Data_15[34] = 0U;
    expected_map_Data_15[35] = 85U;
    expected_map_Data_15[36] = 0U;
    expected_map_Data_15[37] = 0U;
    expected_map_Data_15[38] = 0U;
    expected_map_Data_15[39] = 0U;
    expected_map_Data_15[40] = 85U;
    expected_map_Data_15[41] = 0U;
    expected_map_Data_15[42] = 0U;
    expected_map_Data_15[43] = 0U;
    expected_map_Data_15[44] = 0U;
    expected_map_Data_15[45] = 85U;
    expected_map_Data_15[46] = 0U;
    expected_map_Data_15[47] = 0U;
    expected_map_Data_15[48] = 0U;
    expected_map_Data_15[49] = 0U;

    START_TEST("16: DcmAppl_NetworkManagementHistory_0xD239",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_NetworkManagementHistory_0xD239(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_17(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_17[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    ComScl_RawSigGrp_igVehBattU.ComScl_RawSignal_isVehBattUSysU_u8 = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_17[0] = 34U;

    START_TEST("17: DcmAppl_Vehiclebattery_Voltage_0xDD02",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_Vehiclebattery_Voltage_0xDD02(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_18(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_17[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    ComScl_RawSigGrp_igVehBattU.ComScl_RawSignal_isVehBattUSysU_u8 = 0U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_17[0] = 0U;

    START_TEST("18: DcmAppl_Vehiclebattery_Voltage_0xDD02",
               "created to solve true case of (ECUvoltage) <= 0 at line number 877 ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_Vehiclebattery_Voltage_0xDD02(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_19(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_18[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_18[0] = 0U;
    expected_map_Data_18[1] = 0U;

    START_TEST("19: DcmAppl_SupplyVoltage_0xD002",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("RBWauVolt_getKL15Voltage#1");

            /* Call SUT */
            returnValue = DcmAppl_SupplyVoltage_0xD002(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_20(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_19[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    RBMESG_RBVSI_InputRodStrokeCalc = 0;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_19[0] = 0U;
    expected_map_Data_19[1] = 0U;

    START_TEST("20: DcmAppl_BrakePedalPosition_0x2B35",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_BrakePedalPosition_0x2B35(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_21(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_20[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    MESG_NMSG_CarTiGlb_UL = 0U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_20[0] = 0U;
    expected_map_Data_20[1] = 0U;
    expected_map_Data_20[2] = 0U;
    expected_map_Data_20[3] = 0U;

    START_TEST("21: DcmAppl_GlobalRealTime",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_GlobalRealTime(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_22(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_21[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    MESG_NMSG_DcmPNCStatus_u32 = 0U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_21[0] = 0U;
    expected_map_Data_21[1] = 0U;
    expected_map_Data_21[2] = 0U;

    START_TEST("22: DcmAppl_PartialNetworkCluster_0xDD0B",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_PartialNetworkCluster_0xDD0B(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_23(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_22[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    MESG_NMSG_DstTrvlDMst_RCV_UL = 0U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_22[0] = 0U;
    expected_map_Data_22[1] = 0U;
    expected_map_Data_22[2] = 0U;

    START_TEST("23: DcmAppl_TotalDistance",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_TotalDistance(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_24(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_23[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    ComScl_RawSigGrp_igVehModMngtGlbSafe1_0.ComScl_RawSignal_isVehModMngtGlbSafe1PwrLvlElecMai_0_u8 = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_23[0] = 15U;

    START_TEST("24: DcmAppl_ElPowerLevel_0xDD0C",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_ElPowerLevel_0xDD0C(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_25(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_23[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    ComScl_RawSigGrp_igVehModMngtGlbSafe1_0.ComScl_RawSignal_isVehModMngtGlbSafe1PwrLvlElecMai_0_u8 = 2U;
    MESG_NMSG_VehicleSpeed_ST.VehicleSpeed_UW = 0U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_23[0] = 32U;

    START_TEST("25: DcmAppl_ElPowerLevel_0xDD0C",
               "created to solve true case of ComScl_RawSigGrp_igVehModMngtGlbSafe1_0.ComScl_RawSignal_isVehModMngtGlbSafe1PwrLvlElecMai_0_u8 == 2 at line number 984");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_ElPowerLevel_0xDD0C(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_26(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_23[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    ComScl_RawSigGrp_igVehModMngtGlbSafe1_0.ComScl_RawSignal_isVehModMngtGlbSafe1PwrLvlElecMai_0_u8 = 2U;
    MESG_NMSG_VehicleSpeed_ST.VehicleSpeed_UW = 1U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_23[0] = 33U;

    START_TEST("26: DcmAppl_ElPowerLevel_0xDD0C",
               "created to solve false case of l_NMSG_VehicleSpeed_ST.VehicleSpeed_UW == 0 at line number 984");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_ElPowerLevel_0xDD0C(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_27(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_23[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    ComScl_RawSigGrp_igVehModMngtGlbSafe1_0.ComScl_RawSignal_isVehModMngtGlbSafe1PwrLvlElecMai_0_u8 = 2U;
    MESG_NMSG_VehicleSpeed_ST.VehicleSpeed_UW = 125U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_23[0] = 15U;

    START_TEST("27: DcmAppl_ElPowerLevel_0xDD0C",
               "created to solve false case of l_NMSG_VehicleSpeed_ST.VehicleSpeed_UW < 125 at line number 988");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_ElPowerLevel_0xDD0C(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_28(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_23[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    ComScl_RawSigGrp_igVehModMngtGlbSafe1_0.ComScl_RawSignal_isVehModMngtGlbSafe1PwrLvlElecMai_0_u8 = 2U;
    MESG_NMSG_VehicleSpeed_ST.VehicleSpeed_UW = 126U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_23[0] = 34U;

    START_TEST("28: DcmAppl_ElPowerLevel_0xDD0C",
               "created to solve true case of l_NMSG_VehicleSpeed_ST.VehicleSpeed_UW > 125 at line number 992");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_ElPowerLevel_0xDD0C(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_29(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_23[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    ComScl_RawSigGrp_igVehModMngtGlbSafe1_0.ComScl_RawSignal_isVehModMngtGlbSafe1PwrLvlElecMai_0_u8 = 2U;
    MESG_NMSG_VehicleSpeed_ST.VehicleSpeed_UW = 267U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_23[0] = 15U;

    START_TEST("29: DcmAppl_ElPowerLevel_0xDD0C",
               "created to solve false case of l_NMSG_VehicleSpeed_ST.VehicleSpeed_UW < 267 at line number 992");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_ElPowerLevel_0xDD0C(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_30(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_23[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    ComScl_RawSigGrp_igVehModMngtGlbSafe1_0.ComScl_RawSignal_isVehModMngtGlbSafe1PwrLvlElecMai_0_u8 = 2U;
    MESG_NMSG_VehicleSpeed_ST.VehicleSpeed_UW = 268U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_23[0] = 35U;

    START_TEST("30: DcmAppl_ElPowerLevel_0xDD0C",
               "created to solve true case of l_NMSG_VehicleSpeed_ST.VehicleSpeed_UW > 267 at line number 996");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_ElPowerLevel_0xDD0C(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_31(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_23[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    ComScl_RawSigGrp_igVehModMngtGlbSafe1_0.ComScl_RawSignal_isVehModMngtGlbSafe1PwrLvlElecMai_0_u8 = 2U;
    MESG_NMSG_VehicleSpeed_ST.VehicleSpeed_UW = 534U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_23[0] = 15U;

    START_TEST("31: DcmAppl_ElPowerLevel_0xDD0C",
               "created to solve false case of l_NMSG_VehicleSpeed_ST.VehicleSpeed_UW < 534 at line number 996");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_ElPowerLevel_0xDD0C(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_32(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_23[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    ComScl_RawSigGrp_igVehModMngtGlbSafe1_0.ComScl_RawSignal_isVehModMngtGlbSafe1PwrLvlElecMai_0_u8 = 2U;
    MESG_NMSG_VehicleSpeed_ST.VehicleSpeed_UW = 535U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_23[0] = 36U;

    START_TEST("32: DcmAppl_ElPowerLevel_0xDD0C",
               "created to solve true case of l_NMSG_VehicleSpeed_ST.VehicleSpeed_UW > 534 at line number 1000");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_ElPowerLevel_0xDD0C(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_33(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_24[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    RBMESG_RBMESG_UBBFiltered = 0U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, gs_RBMESG_UBBFiltered) = 0U;
    ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, gs_RBMESG_UBBFilteredAFterConv) = 0U;
    expected_map_Data_24[0] = 0U;

    START_TEST("33: DcmAppl_ECU_powerSupply_0xD111",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_ECU_powerSupply_0xD111(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_34(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_25[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    RBMESG_RBMESG_LiPS2Signal_S16 = 0;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_25[0] = 0U;
    expected_map_Data_25[1] = 0U;

    START_TEST("34: DcmAppl_PWM_InputSignal_0xD112",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_PWM_InputSignal_0xD112(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_35(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_26[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    RBMESG_RBMESG_BLMTemperatureB6_Ch1_s16 = 0;
    RBMESG_RBMESG_BLMTemperatureB6_Ch2_s16 = 0;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_26[0] = 0U;
    expected_map_Data_26[1] = 0U;
    expected_map_Data_26[2] = 0U;
    expected_map_Data_26[3] = 0U;

    START_TEST("35: DcmAppl_InternalSensorSignal_0xD113",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_InternalSensorSignal_0xD113(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_36(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_27[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    ComScl_RawSigGrp_igVehModMngtGlbSafe1_0.ComScl_RawSignal_isVehModMngtGlbSafe1CarModSts1_0_u8 = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_27[0] = 85U;

    START_TEST("36: DcmAppl_carMode_0xD134",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_carMode_0xD134(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_37(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = NULL;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("37: DcmAppl_faultyCarConfigParameters_0xE103",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_GetEventFailed#1;Dem_GetEventFailed#2");

            /* Call SUT */
            returnValue = DcmAppl_faultyCarConfigParameters_0xE103(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 1U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_38(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = NULL;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("38: DcmAppl_faultyCarConfigParameters_0xE103",
               "created to solve true case of l_std_Return_FORCE_LAMP_TO_RED1 == 0 at line number 1095");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_GetEventFailed#2;Dem_GetEventFailed#1");

            /* Call SUT */
            returnValue = DcmAppl_faultyCarConfigParameters_0xE103(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 1U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_39(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_28[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[0] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[1] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[2] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[3] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[4] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[5] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[6] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[7] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[8] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[9] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[10] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[11] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[12] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[13] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[14] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[15] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[16] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[17] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[18] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[19] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[20] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[21] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[22] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[23] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[24] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[25] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[26] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[27] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[28] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[29] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[30] = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_28[0] = 10U;
    expected_map_Data_28[1] = 85U;
    expected_map_Data_28[2] = 85U;
    expected_map_Data_28[3] = 85U;
    expected_map_Data_28[4] = 85U;
    expected_map_Data_28[5] = 85U;
    expected_map_Data_28[6] = 85U;
    expected_map_Data_28[7] = 85U;
    expected_map_Data_28[8] = 85U;
    expected_map_Data_28[9] = 85U;
    expected_map_Data_28[10] = 85U;
    expected_map_Data_28[11] = 85U;
    expected_map_Data_28[12] = 85U;
    expected_map_Data_28[13] = 85U;
    expected_map_Data_28[14] = 85U;
    expected_map_Data_28[15] = 85U;
    expected_map_Data_28[16] = 85U;
    expected_map_Data_28[17] = 85U;
    expected_map_Data_28[18] = 85U;
    expected_map_Data_28[19] = 85U;
    expected_map_Data_28[20] = 85U;
    expected_map_Data_28[21] = 85U;
    expected_map_Data_28[22] = 85U;
    expected_map_Data_28[23] = 85U;
    expected_map_Data_28[24] = 85U;
    expected_map_Data_28[25] = 85U;
    expected_map_Data_28[26] = 85U;
    expected_map_Data_28[27] = 85U;
    expected_map_Data_28[28] = 85U;
    expected_map_Data_28[29] = 85U;
    expected_map_Data_28[30] = 85U;

    START_TEST("39: DcmAppl_faultyCarConfigParameters_0xE103",
               "created to solve true case of l_std_Return_FORCE_LAMP_TO_RED2 == 0 at line number 1095");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_GetEventFailed#2;Dem_GetEventFailed#2");

            /* Call SUT */
            returnValue = DcmAppl_faultyCarConfigParameters_0xE103(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_40(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_28[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[0] = 0U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[1] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[2] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[3] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[4] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[5] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[6] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[7] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[8] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[9] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[10] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[11] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[12] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[13] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[14] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[15] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[16] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[17] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[18] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[19] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[20] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[21] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[22] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[23] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[24] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[25] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[26] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[27] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[28] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[29] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[30] = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_28[0] = 0U;
    expected_map_Data_28[1] = 85U;
    expected_map_Data_28[2] = 85U;
    expected_map_Data_28[3] = 85U;
    expected_map_Data_28[4] = 85U;
    expected_map_Data_28[5] = 85U;
    expected_map_Data_28[6] = 85U;
    expected_map_Data_28[7] = 85U;
    expected_map_Data_28[8] = 85U;
    expected_map_Data_28[9] = 85U;
    expected_map_Data_28[10] = 85U;
    expected_map_Data_28[11] = 85U;
    expected_map_Data_28[12] = 85U;
    expected_map_Data_28[13] = 85U;
    expected_map_Data_28[14] = 85U;
    expected_map_Data_28[15] = 85U;
    expected_map_Data_28[16] = 85U;
    expected_map_Data_28[17] = 85U;
    expected_map_Data_28[18] = 85U;
    expected_map_Data_28[19] = 85U;
    expected_map_Data_28[20] = 85U;
    expected_map_Data_28[21] = 85U;
    expected_map_Data_28[22] = 85U;
    expected_map_Data_28[23] = 85U;
    expected_map_Data_28[24] = 85U;
    expected_map_Data_28[25] = 85U;
    expected_map_Data_28[26] = 85U;
    expected_map_Data_28[27] = 85U;
    expected_map_Data_28[28] = 85U;
    expected_map_Data_28[29] = 85U;
    expected_map_Data_28[30] = 85U;

    START_TEST("40: DcmAppl_faultyCarConfigParameters_0xE103",
               "created to solve false case of NoOfFaultyParm > 10 at line number 1107 ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_GetEventFailed#2;Dem_GetEventFailed#2");

            /* Call SUT */
            returnValue = DcmAppl_faultyCarConfigParameters_0xE103(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_41(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_28[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[0] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[1] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[2] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[3] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[4] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[5] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[6] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[7] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[8] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[9] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[10] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[11] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[12] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[13] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[14] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[15] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[16] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[17] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[18] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[19] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[20] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[21] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[22] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[23] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[24] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[25] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[26] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[27] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[28] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[29] = 85U;
    MESG_NMSG_GCC_InvalidParametersArray_ST.Index[30] = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_28[0] = 10U;
    expected_map_Data_28[1] = 85U;
    expected_map_Data_28[2] = 85U;
    expected_map_Data_28[3] = 85U;
    expected_map_Data_28[4] = 85U;
    expected_map_Data_28[5] = 85U;
    expected_map_Data_28[6] = 85U;
    expected_map_Data_28[7] = 85U;
    expected_map_Data_28[8] = 85U;
    expected_map_Data_28[9] = 85U;
    expected_map_Data_28[10] = 85U;
    expected_map_Data_28[11] = 85U;
    expected_map_Data_28[12] = 85U;
    expected_map_Data_28[13] = 85U;
    expected_map_Data_28[14] = 85U;
    expected_map_Data_28[15] = 85U;
    expected_map_Data_28[16] = 85U;
    expected_map_Data_28[17] = 85U;
    expected_map_Data_28[18] = 85U;
    expected_map_Data_28[19] = 85U;
    expected_map_Data_28[20] = 85U;
    expected_map_Data_28[21] = 85U;
    expected_map_Data_28[22] = 85U;
    expected_map_Data_28[23] = 85U;
    expected_map_Data_28[24] = 85U;
    expected_map_Data_28[25] = 85U;
    expected_map_Data_28[26] = 85U;
    expected_map_Data_28[27] = 85U;
    expected_map_Data_28[28] = 85U;
    expected_map_Data_28[29] = 85U;
    expected_map_Data_28[30] = 85U;

    START_TEST("41: DcmAppl_faultyCarConfigParameters_0xE103",
               "created to solve true case of FailedState == 0 at line number 1097");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_GetEventFailed#3;Dem_GetEventFailed#2");

            /* Call SUT */
            returnValue = DcmAppl_faultyCarConfigParameters_0xE103(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_42(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = NULL;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("42: DcmAppl_faultyCarConfigParameters_0xE103",
               "created to solve true case of FailedState1 == 0 at line number 1097");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_GetEventFailed#3;Dem_GetEventFailed#3");

            /* Call SUT */
            returnValue = DcmAppl_faultyCarConfigParameters_0xE103(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_43(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_29[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    MESG_NMSG_iBStatusXMT_N = C_iBoosterstate_NotInitialized_or_StartupPhase_N;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_29[0] = 0U;

    START_TEST("43: DcmAppl_iBstatus",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_iBstatus(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_44(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_30[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    MESG_NMSG_pForceBlendingPotentialXMT_ST.pForceBlendingPotential_UB = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_30[0] = 85U;

    START_TEST("44: DcmAppl_forceBlendingPotential",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_forceBlendingPotential(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_45(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_31[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    MESG_NMSG_sOutputRodDrvr_ST.sOutputRodDriver_SW = 0;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_31[0] = 0U;
    expected_map_Data_31[1] = 0U;

    START_TEST("45: DcmAppl_outputRodDriver",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_outputRodDriver(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_46(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_32[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    MESG_NMSG_sOutputRod_Act_ST.sOutputRodAct_SW = 0;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_32[0] = 0U;
    expected_map_Data_32[1] = 0U;

    START_TEST("46: DcmAppl_outputRodAct",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_outputRodAct(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_47(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_33[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    MESG_NMSG_ExtReq_XMT_ST.Qualifier_N = C_ExtReqQualifier_NotInitialized_N;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_33[0] = 0U;

    START_TEST("47: DcmAppl_extReqStatus",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_extReqStatus(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_48(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_34[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    MESG_NMSG_ExtReq_XMT_ST.Active_B = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_34[0] = 85U;

    START_TEST("48: DcmAppl_extReqPrio",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_extReqPrio(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_49(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_35[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    MESG_NMSG_pRunoutXMT_ST.pRunout_UB = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_35[0] = 85U;

    START_TEST("49: DcmAppl_runout",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_runout(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_50(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint16 CCPNum_u16 = 0U;
    uint8 * pBuffer = &map_pBuffer[0];
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_pBuffer[0] = 0U;

    START_TEST("50: RBAPLCUST_getCCP",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            ACCESS_FUNCTION(DcmAppl_22_rdbi, RBAPLCUST_getCCP)(CCPNum_u16, pBuffer);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_51(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint16 CCPNum_u16 = 39U;
    uint8 * pBuffer = &map_pBuffer[0];
    /* Set global data */
    initialise_global_data();
    ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn2_u8 = 85U;
    ACCESS_VARIABLE(DcmAppl_22_rdbi, gs_invalidCcpCounter) = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, gs_invalidCcpCounter) = 86U;
    expected_map_pBuffer[0] = 85U;
    expected_map_pBuffer[1] = 1U;
    expected_map_pBuffer[2] = 11U;
    expected_map_pBuffer[3] = 85U;

    START_TEST("51: RBAPLCUST_getCCP",
               "created to solve true case of CCPNum_u16 == 39 at line number 1255");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            ACCESS_FUNCTION(DcmAppl_22_rdbi, RBAPLCUST_getCCP)(CCPNum_u16, pBuffer);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_52(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint16 CCPNum_u16 = 39U;
    uint8 * pBuffer = &map_pBuffer[0];
    /* Set global data */
    initialise_global_data();
    ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn2_u8 = 4U;
    ACCESS_VARIABLE(DcmAppl_22_rdbi, gs_invalidCcpCounter) = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_pBuffer[0] = 85U;

    START_TEST("52: RBAPLCUST_getCCP",
               "created to solve false case of ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn2_u8 > 0x6 at line number 1257");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            ACCESS_FUNCTION(DcmAppl_22_rdbi, RBAPLCUST_getCCP)(CCPNum_u16, pBuffer);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_53(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint16 CCPNum_u16 = 39U;
    uint8 * pBuffer = &map_pBuffer[0];
    /* Set global data */
    initialise_global_data();
    ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn2_u8 = 0U;
    ACCESS_VARIABLE(DcmAppl_22_rdbi, gs_invalidCcpCounter) = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, gs_invalidCcpCounter) = 86U;
    expected_map_pBuffer[0] = 85U;
    expected_map_pBuffer[1] = 1U;
    expected_map_pBuffer[2] = 11U;
    expected_map_pBuffer[3] = 0U;

    START_TEST("53: RBAPLCUST_getCCP",
               "created to solve true case of ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn2_u8 < 0x4 at line number 1257");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            ACCESS_FUNCTION(DcmAppl_22_rdbi, RBAPLCUST_getCCP)(CCPNum_u16, pBuffer);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_54(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint16 CCPNum_u16 = 22U;
    uint8 * pBuffer = &map_pBuffer[0];
    /* Set global data */
    initialise_global_data();
    ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn4_u8 = 85U;
    ACCESS_VARIABLE(DcmAppl_22_rdbi, gs_invalidCcpCounter) = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, gs_invalidCcpCounter) = 86U;
    expected_map_pBuffer[0] = 85U;
    expected_map_pBuffer[1] = 0U;
    expected_map_pBuffer[2] = 150U;
    expected_map_pBuffer[3] = 85U;

    START_TEST("54: RBAPLCUST_getCCP",
               "created to solve true case of CCPNum_u16 == 22 at line number 1243");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            ACCESS_FUNCTION(DcmAppl_22_rdbi, RBAPLCUST_getCCP)(CCPNum_u16, pBuffer);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_55(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint16 CCPNum_u16 = 22U;
    uint8 * pBuffer = &map_pBuffer[0];
    /* Set global data */
    initialise_global_data();
    ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn4_u8 = 10U;
    ACCESS_VARIABLE(DcmAppl_22_rdbi, gs_invalidCcpCounter) = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_pBuffer[0] = 85U;

    START_TEST("55: RBAPLCUST_getCCP",
               "created to solve false case of ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn4_u8 > 0xc at line number 1245");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            ACCESS_FUNCTION(DcmAppl_22_rdbi, RBAPLCUST_getCCP)(CCPNum_u16, pBuffer);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_56(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint16 CCPNum_u16 = 22U;
    uint8 * pBuffer = &map_pBuffer[0];
    /* Set global data */
    initialise_global_data();
    ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn4_u8 = 0U;
    ACCESS_VARIABLE(DcmAppl_22_rdbi, gs_invalidCcpCounter) = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, gs_invalidCcpCounter) = 86U;
    expected_map_pBuffer[0] = 85U;
    expected_map_pBuffer[1] = 0U;
    expected_map_pBuffer[2] = 150U;
    expected_map_pBuffer[3] = 0U;

    START_TEST("56: RBAPLCUST_getCCP",
               "created to solve true case of ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn4_u8 < 0xa at line number 1245");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            ACCESS_FUNCTION(DcmAppl_22_rdbi, RBAPLCUST_getCCP)(CCPNum_u16, pBuffer);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_57(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint16 CCPNum_u16 = 3U;
    uint8 * pBuffer = &map_pBuffer[0];
    /* Set global data */
    initialise_global_data();
    ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn4_u8 = 85U;
    ACCESS_VARIABLE(DcmAppl_22_rdbi, gs_invalidCcpCounter) = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, gs_invalidCcpCounter) = 86U;
    expected_map_pBuffer[0] = 85U;
    expected_map_pBuffer[1] = 0U;
    expected_map_pBuffer[2] = 17U;
    expected_map_pBuffer[3] = 85U;

    START_TEST("57: RBAPLCUST_getCCP",
               "created to solve true case of CCPNum_u16 == 3 at line number 1231");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            ACCESS_FUNCTION(DcmAppl_22_rdbi, RBAPLCUST_getCCP)(CCPNum_u16, pBuffer);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_58(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint16 CCPNum_u16 = 3U;
    uint8 * pBuffer = &map_pBuffer[0];
    /* Set global data */
    initialise_global_data();
    ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn4_u8 = 4U;
    ACCESS_VARIABLE(DcmAppl_22_rdbi, gs_invalidCcpCounter) = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_pBuffer[0] = 85U;

    START_TEST("58: RBAPLCUST_getCCP",
               "created to solve false case of ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn4_u8 > 0x6 at line number 1233");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            ACCESS_FUNCTION(DcmAppl_22_rdbi, RBAPLCUST_getCCP)(CCPNum_u16, pBuffer);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_59(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint16 CCPNum_u16 = 3U;
    uint8 * pBuffer = &map_pBuffer[0];
    /* Set global data */
    initialise_global_data();
    ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn4_u8 = 0U;
    ACCESS_VARIABLE(DcmAppl_22_rdbi, gs_invalidCcpCounter) = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, gs_invalidCcpCounter) = 86U;
    expected_map_pBuffer[0] = 85U;
    expected_map_pBuffer[1] = 0U;
    expected_map_pBuffer[2] = 17U;
    expected_map_pBuffer[3] = 0U;

    START_TEST("59: RBAPLCUST_getCCP",
               "created to solve true case of ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn4_u8 < 0x4 at line number 1233");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            ACCESS_FUNCTION(DcmAppl_22_rdbi, RBAPLCUST_getCCP)(CCPNum_u16, pBuffer);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_60(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint16 CCPNum_u16 = 1U;
    uint8 * pBuffer = &map_pBuffer[0];
    /* Set global data */
    initialise_global_data();
    ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn2_u8 = 85U;
    ACCESS_VARIABLE(DcmAppl_22_rdbi, gs_invalidCcpCounter) = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, gs_invalidCcpCounter) = 86U;
    expected_map_pBuffer[0] = 85U;
    expected_map_pBuffer[1] = 0U;
    expected_map_pBuffer[2] = 1U;
    expected_map_pBuffer[3] = 85U;

    START_TEST("60: RBAPLCUST_getCCP",
               "created to solve true case of CCPNum_u16 == 1 at line number 1220");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            ACCESS_FUNCTION(DcmAppl_22_rdbi, RBAPLCUST_getCCP)(CCPNum_u16, pBuffer);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_61(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint16 CCPNum_u16 = 1U;
    uint8 * pBuffer = &map_pBuffer[0];
    /* Set global data */
    initialise_global_data();
    ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn2_u8 = 1U;
    ACCESS_VARIABLE(DcmAppl_22_rdbi, gs_invalidCcpCounter) = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_pBuffer[0] = 85U;

    START_TEST("61: RBAPLCUST_getCCP",
               "created to solve false case of ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn2_u8 > 0x3 at line number 1222");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            ACCESS_FUNCTION(DcmAppl_22_rdbi, RBAPLCUST_getCCP)(CCPNum_u16, pBuffer);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_62(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint16 CCPNum_u16 = 1U;
    uint8 * pBuffer = &map_pBuffer[0];
    /* Set global data */
    initialise_global_data();
    ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn2_u8 = 0U;
    ACCESS_VARIABLE(DcmAppl_22_rdbi, gs_invalidCcpCounter) = 85U;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    ACCESS_EXPECTED_VARIABLE(DcmAppl_22_rdbi, gs_invalidCcpCounter) = 86U;
    expected_map_pBuffer[0] = 85U;
    expected_map_pBuffer[1] = 0U;
    expected_map_pBuffer[2] = 1U;
    expected_map_pBuffer[3] = 0U;

    START_TEST("62: RBAPLCUST_getCCP",
               "created to solve true case of ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn2_u8 < 0x1 at line number 1222");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            ACCESS_FUNCTION(DcmAppl_22_rdbi, RBAPLCUST_getCCP)(CCPNum_u16, pBuffer);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_63(int doIt){
if (doIt) {
    /* Test case data declarations */
    NvM_RequestResultType ReadResultValue = 85U;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("63: DCOM_NvM_GetErrorStatus",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DCOM_NvM_GetErrorStatus(ReadResultValue);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_64(int doIt){
if (doIt) {
    /* Test case data declarations */
    NvM_RequestResultType ReadResultValue = 5U;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("64: DCOM_NvM_GetErrorStatus",
               "created to solve true case of ReadResultValue == 5 at line number 1279");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DCOM_NvM_GetErrorStatus(ReadResultValue);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 1U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_65(int doIt){
if (doIt) {
    /* Test case data declarations */
    NvM_RequestResultType ReadResultValue = 3U;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("65: DCOM_NvM_GetErrorStatus",
               "created to solve true case of ReadResultValue == 3 at line number 1279");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DCOM_NvM_GetErrorStatus(ReadResultValue);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 1U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_66(int doIt){
if (doIt) {
    /* Test case data declarations */
    NvM_RequestResultType ReadResultValue = 1U;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("66: DCOM_NvM_GetErrorStatus",
               "created to solve true case of ReadResultValue == 1 at line number 1279");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DCOM_NvM_GetErrorStatus(ReadResultValue);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 1U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_67(int doIt){
if (doIt) {
    /* Test case data declarations */
    NvM_RequestResultType ReadResultValue = 8U;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("67: DCOM_NvM_GetErrorStatus",
               "created to solve true case of ReadResultValue == 8 at line number 1279");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DCOM_NvM_GetErrorStatus(ReadResultValue);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 1U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_68(int doIt){
if (doIt) {
    /* Test case data declarations */
    NvM_RequestResultType ReadResultValue = 4U;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("68: DCOM_NvM_GetErrorStatus",
               "created to solve true case of ReadResultValue == 4 at line number 1279");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DCOM_NvM_GetErrorStatus(ReadResultValue);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 1U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_69(int doIt){
if (doIt) {
    /* Test case data declarations */
    NvM_RequestResultType ReadResultValue = 7U;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("69: DCOM_NvM_GetErrorStatus",
               "created to solve true case of ReadResultValue == 7 at line number 1278");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DCOM_NvM_GetErrorStatus(ReadResultValue);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 1U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_70(int doIt){
if (doIt) {
    /* Test case data declarations */
    NvM_RequestResultType ReadResultValue = 6U;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("70: DCOM_NvM_GetErrorStatus",
               "created to solve true case of ReadResultValue == 6 at line number 1278");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DCOM_NvM_GetErrorStatus(ReadResultValue);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 1U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_71(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_36[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    RBPSC_SpeedTarget = 0;
    RBPSC_TorqueTarget = 0;
    RBPSC_SpeedActual = 0;
    RBPSC_TorqueActual = 0;
    RBMESG_RBMESG_UBBFiltered = 0U;
    RBMESG_RBMESG_UB6Filtered = 0U;
    RBMESG_RBMESG_BLMTemperatureB6_Ch1_s16 = 0;
    RBMESG_RBMESG_BLMTemperatureB6_Ch2_s16 = 0;
    MESG_RBVSI_pMC_calibrated = 0;
    MESG_RBVSA_OutputRodActual = 0;
    RBMESG_RBVSI_InputRodStrokeCalc = 0;
    MESG_RBVSA_OutputRodActualQualifier = C_sOutputRodActQualifier_NotInitialized_N;
    MESG_RBAPO_ActuatorPosition = 0;
    MESG_RBAPO_ActuatorPositionQualifier = RBPSC_NotInitialized;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_36[0] = 0U;
    expected_map_Data_36[1] = 0U;
    expected_map_Data_36[2] = 0U;
    expected_map_Data_36[3] = 0U;
    expected_map_Data_36[4] = 0U;
    expected_map_Data_36[5] = 0U;
    expected_map_Data_36[6] = 0U;
    expected_map_Data_36[7] = 0U;
    expected_map_Data_36[8] = 0U;
    expected_map_Data_36[9] = 0U;
    expected_map_Data_36[10] = 0U;
    expected_map_Data_36[11] = 0U;
    expected_map_Data_36[12] = 0U;
    expected_map_Data_36[13] = 0U;
    expected_map_Data_36[14] = 0U;
    expected_map_Data_36[15] = 0U;
    expected_map_Data_36[16] = 0U;
    expected_map_Data_36[17] = 0U;
    expected_map_Data_36[18] = 0U;
    expected_map_Data_36[19] = 0U;
    expected_map_Data_36[20] = 0U;
    expected_map_Data_36[21] = 0U;
    expected_map_Data_36[22] = 0U;
    expected_map_Data_36[23] = 0U;
    expected_map_Data_36[24] = 0U;
    expected_map_Data_36[25] = 0U;
    expected_map_Data_36[26] = 0U;
    expected_map_Data_36[27] = 0U;

    START_TEST("71: DcmAppl_AnalogueData_0xFD01",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("RBLiPS_GetSupplyVoltage_u16#1");

            /* Call SUT */
            returnValue = DcmAppl_AnalogueData_0xFD01(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_72(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_36[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    RBPSC_SpeedTarget = 0;
    RBPSC_TorqueTarget = 0;
    RBPSC_SpeedActual = 0;
    RBPSC_TorqueActual = 0;
    RBMESG_RBMESG_UBBFiltered = 0U;
    RBMESG_RBMESG_UB6Filtered = 0U;
    RBMESG_RBMESG_BLMTemperatureB6_Ch1_s16 = 0;
    RBMESG_RBMESG_BLMTemperatureB6_Ch2_s16 = 0;
    MESG_RBVSI_pMC_calibrated = 0;
    MESG_RBVSA_OutputRodActual = 0;
    RBMESG_RBVSI_InputRodStrokeCalc = 0;
    MESG_RBVSA_OutputRodActualQualifier = C_sOutputRodActQualifier_NotInitialized_N;
    MESG_RBAPO_ActuatorPosition = 0;
    MESG_RBAPO_ActuatorPositionQualifier = RBPSC_Invalid;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_36[0] = 0U;
    expected_map_Data_36[1] = 0U;
    expected_map_Data_36[2] = 0U;
    expected_map_Data_36[3] = 0U;
    expected_map_Data_36[4] = 0U;
    expected_map_Data_36[5] = 0U;
    expected_map_Data_36[6] = 0U;
    expected_map_Data_36[7] = 0U;
    expected_map_Data_36[8] = 0U;
    expected_map_Data_36[9] = 0U;
    expected_map_Data_36[10] = 0U;
    expected_map_Data_36[11] = 0U;
    expected_map_Data_36[12] = 0U;
    expected_map_Data_36[13] = 0U;
    expected_map_Data_36[14] = 0U;
    expected_map_Data_36[15] = 0U;
    expected_map_Data_36[16] = 0U;
    expected_map_Data_36[17] = 0U;
    expected_map_Data_36[18] = 0U;
    expected_map_Data_36[19] = 0U;
    expected_map_Data_36[20] = 0U;
    expected_map_Data_36[21] = 0U;
    expected_map_Data_36[22] = 0U;
    expected_map_Data_36[23] = 0U;
    expected_map_Data_36[24] = 0U;
    expected_map_Data_36[25] = 0U;
    expected_map_Data_36[26] = 0U;
    expected_map_Data_36[27] = 0U;

    START_TEST("72: DcmAppl_AnalogueData_0xFD01",
               "created to solve false case of l_RBAPO_ActuatorPositionQualifier == RBPSC_NotInitialized at line number 1801");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("RBLiPS_GetSupplyVoltage_u16#1");

            /* Call SUT */
            returnValue = DcmAppl_AnalogueData_0xFD01(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_73(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_36[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    RBPSC_SpeedTarget = 0;
    RBPSC_TorqueTarget = 0;
    RBPSC_SpeedActual = 0;
    RBPSC_TorqueActual = 0;
    RBMESG_RBMESG_UBBFiltered = 0U;
    RBMESG_RBMESG_UB6Filtered = 0U;
    RBMESG_RBMESG_BLMTemperatureB6_Ch1_s16 = 0;
    RBMESG_RBMESG_BLMTemperatureB6_Ch2_s16 = 0;
    MESG_RBVSI_pMC_calibrated = 0;
    MESG_RBVSA_OutputRodActual = 0;
    RBMESG_RBVSI_InputRodStrokeCalc = 0;
    MESG_RBVSA_OutputRodActualQualifier = C_sOutputRodActQualifier_NotInitialized_N;
    MESG_RBAPO_ActuatorPosition = 0;
    MESG_RBAPO_ActuatorPositionQualifier = RBPSC_OffsetCorrected;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_36[0] = 1U;
    expected_map_Data_36[1] = 0U;
    expected_map_Data_36[2] = 0U;
    expected_map_Data_36[3] = 0U;
    expected_map_Data_36[4] = 0U;
    expected_map_Data_36[5] = 0U;
    expected_map_Data_36[6] = 0U;
    expected_map_Data_36[7] = 0U;
    expected_map_Data_36[8] = 0U;
    expected_map_Data_36[9] = 0U;
    expected_map_Data_36[10] = 0U;
    expected_map_Data_36[11] = 0U;
    expected_map_Data_36[12] = 0U;
    expected_map_Data_36[13] = 0U;
    expected_map_Data_36[14] = 0U;
    expected_map_Data_36[15] = 0U;
    expected_map_Data_36[16] = 0U;
    expected_map_Data_36[17] = 0U;
    expected_map_Data_36[18] = 0U;
    expected_map_Data_36[19] = 0U;
    expected_map_Data_36[20] = 0U;
    expected_map_Data_36[21] = 0U;
    expected_map_Data_36[22] = 0U;
    expected_map_Data_36[23] = 0U;
    expected_map_Data_36[24] = 0U;
    expected_map_Data_36[25] = 0U;
    expected_map_Data_36[26] = 0U;
    expected_map_Data_36[27] = 0U;

    START_TEST("73: DcmAppl_AnalogueData_0xFD01",
               "created to solve false case of l_RBAPO_ActuatorPositionQualifier == RBPSC_Invalid at line number 1801");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("RBLiPS_GetSupplyVoltage_u16#1");

            /* Call SUT */
            returnValue = DcmAppl_AnalogueData_0xFD01(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_74(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_36[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    RBPSC_SpeedTarget = 0;
    RBPSC_TorqueTarget = 0;
    RBPSC_SpeedActual = 0;
    RBPSC_TorqueActual = 0;
    RBMESG_RBMESG_UBBFiltered = 0U;
    RBMESG_RBMESG_UB6Filtered = 0U;
    RBMESG_RBMESG_BLMTemperatureB6_Ch1_s16 = 0;
    RBMESG_RBMESG_BLMTemperatureB6_Ch2_s16 = 0;
    MESG_RBVSI_pMC_calibrated = 0;
    MESG_RBVSA_OutputRodActual = 0;
    RBMESG_RBVSI_InputRodStrokeCalc = 0;
    MESG_RBVSA_OutputRodActualQualifier = C_sOutputRodActQualifier_NotInitialized_N;
    MESG_RBAPO_ActuatorPosition = 0;
    MESG_RBAPO_ActuatorPositionQualifier = RBPSC_NotOffsetCorrected;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_36[0] = 2U;
    expected_map_Data_36[1] = 0U;
    expected_map_Data_36[2] = 0U;
    expected_map_Data_36[3] = 0U;
    expected_map_Data_36[4] = 0U;
    expected_map_Data_36[5] = 0U;
    expected_map_Data_36[6] = 0U;
    expected_map_Data_36[7] = 0U;
    expected_map_Data_36[8] = 0U;
    expected_map_Data_36[9] = 0U;
    expected_map_Data_36[10] = 0U;
    expected_map_Data_36[11] = 0U;
    expected_map_Data_36[12] = 0U;
    expected_map_Data_36[13] = 0U;
    expected_map_Data_36[14] = 0U;
    expected_map_Data_36[15] = 0U;
    expected_map_Data_36[16] = 0U;
    expected_map_Data_36[17] = 0U;
    expected_map_Data_36[18] = 0U;
    expected_map_Data_36[19] = 0U;
    expected_map_Data_36[20] = 0U;
    expected_map_Data_36[21] = 0U;
    expected_map_Data_36[22] = 0U;
    expected_map_Data_36[23] = 0U;
    expected_map_Data_36[24] = 0U;
    expected_map_Data_36[25] = 0U;
    expected_map_Data_36[26] = 0U;
    expected_map_Data_36[27] = 0U;

    START_TEST("74: DcmAppl_AnalogueData_0xFD01",
               "created to solve false case of l_RBAPO_ActuatorPositionQualifier == RBPSC_OffsetCorrected at line number 1805 ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("RBLiPS_GetSupplyVoltage_u16#1");

            /* Call SUT */
            returnValue = DcmAppl_AnalogueData_0xFD01(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_75(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_37[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    RBMESG_iB_BrkLightActive_B = 85U;
    RBMESG_DriverOnPedal_B = 85U;
    RBMESG_iB_ready_for_actuation_B = 85U;
    RBMESG_iB_status_N = C_Off_N;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_37[0] = 0U;
    expected_map_Data_37[1] = 1U;
    expected_map_Data_37[2] = 1U;
    expected_map_Data_37[3] = 1U;

    START_TEST("75: DcmAppl_iB_Status_Information_0xFD00",
               "default case");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_iB_Status_Information_0xFD00(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_76(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_37[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    RBMESG_iB_BrkLightActive_B = 85U;
    RBMESG_DriverOnPedal_B = 85U;
    RBMESG_iB_ready_for_actuation_B = 85U;
    RBMESG_iB_status_N = C_Init_N;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_37[0] = 1U;
    expected_map_Data_37[1] = 1U;
    expected_map_Data_37[2] = 1U;
    expected_map_Data_37[3] = 1U;

    START_TEST("76: DcmAppl_iB_Status_Information_0xFD00",
               "created to solve false case of l_iB_status_N == 0 at line number 1909 ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_iB_Status_Information_0xFD00(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_77(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_37[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    RBMESG_iB_BrkLightActive_B = 85U;
    RBMESG_DriverOnPedal_B = 85U;
    RBMESG_iB_ready_for_actuation_B = 85U;
    RBMESG_iB_status_N = C_Failure_N;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_37[0] = 2U;
    expected_map_Data_37[1] = 1U;
    expected_map_Data_37[2] = 1U;
    expected_map_Data_37[3] = 1U;

    START_TEST("77: DcmAppl_iB_Status_Information_0xFD00",
               "created to solve false case of l_iB_status_N == 1 at line number 1913 ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_iB_Status_Information_0xFD00(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_78(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_37[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    RBMESG_iB_BrkLightActive_B = 85U;
    RBMESG_DriverOnPedal_B = 85U;
    RBMESG_iB_ready_for_actuation_B = 85U;
    RBMESG_iB_status_N = C_Diagnosis_N;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_37[0] = 3U;
    expected_map_Data_37[1] = 1U;
    expected_map_Data_37[2] = 1U;
    expected_map_Data_37[3] = 1U;

    START_TEST("78: DcmAppl_iB_Status_Information_0xFD00",
               "created to solve false case of l_iB_status_N == 2 at line number 1917 ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_iB_Status_Information_0xFD00(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_79(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_37[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    RBMESG_iB_BrkLightActive_B = 85U;
    RBMESG_DriverOnPedal_B = 85U;
    RBMESG_iB_ready_for_actuation_B = 85U;
    RBMESG_iB_status_N = C_ActiveGoodCheck_N;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_37[0] = 4U;
    expected_map_Data_37[1] = 1U;
    expected_map_Data_37[2] = 1U;
    expected_map_Data_37[3] = 1U;

    START_TEST("79: DcmAppl_iB_Status_Information_0xFD00",
               "created to solve false case of l_iB_status_N == 3 at line number 1921 ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_iB_Status_Information_0xFD00(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_80(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_37[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    RBMESG_iB_BrkLightActive_B = 85U;
    RBMESG_DriverOnPedal_B = 85U;
    RBMESG_iB_ready_for_actuation_B = 85U;
    RBMESG_iB_status_N = C_Actuated_N;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_37[0] = 5U;
    expected_map_Data_37[1] = 1U;
    expected_map_Data_37[2] = 1U;
    expected_map_Data_37[3] = 1U;

    START_TEST("80: DcmAppl_iB_Status_Information_0xFD00",
               "created to solve false case of l_iB_status_N == 4 at line number 1925");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_iB_Status_Information_0xFD00(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_81(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_37[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    RBMESG_iB_BrkLightActive_B = 85U;
    RBMESG_DriverOnPedal_B = 85U;
    RBMESG_iB_ready_for_actuation_B = 85U;
    RBMESG_iB_status_N = C_Ready_N;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_37[0] = 4U;
    expected_map_Data_37[1] = 1U;
    expected_map_Data_37[2] = 1U;
    expected_map_Data_37[3] = 1U;

    START_TEST("81: DcmAppl_iB_Status_Information_0xFD00",
               "created to solve true case of l_iB_status_N == 5 at line number 1925");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_iB_Status_Information_0xFD00(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_82(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_36[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    RBPSC_SpeedTarget = 0;
    RBPSC_TorqueTarget = 0;
    RBPSC_SpeedActual = 0;
    RBPSC_TorqueActual = 0;
    RBMESG_RBMESG_UBBFiltered = 0U;
    RBMESG_RBMESG_UB6Filtered = 0U;
    RBMESG_RBMESG_BLMTemperatureB6_Ch1_s16 = 0;
    RBMESG_RBMESG_BLMTemperatureB6_Ch2_s16 = 0;
    MESG_RBVSI_pMC_calibrated = 0;
    MESG_RBVSA_OutputRodActual = 0;
    RBMESG_RBVSI_InputRodStrokeCalc = 0;
    MESG_RBVSA_OutputRodActualQualifier = C_sOutputRodActQualifier_NotInitialized_N;
    MESG_RBAPO_ActuatorPosition = 0;
    MESG_RBAPO_ActuatorPositionQualifier = 99;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_36[0] = 2U;
    expected_map_Data_36[1] = 0U;
    expected_map_Data_36[2] = 0U;
    expected_map_Data_36[3] = 0U;
    expected_map_Data_36[4] = 0U;
    expected_map_Data_36[5] = 0U;
    expected_map_Data_36[6] = 0U;
    expected_map_Data_36[7] = 0U;
    expected_map_Data_36[8] = 0U;
    expected_map_Data_36[9] = 0U;
    expected_map_Data_36[10] = 0U;
    expected_map_Data_36[11] = 0U;
    expected_map_Data_36[12] = 0U;
    expected_map_Data_36[13] = 0U;
    expected_map_Data_36[14] = 0U;
    expected_map_Data_36[15] = 0U;
    expected_map_Data_36[16] = 0U;
    expected_map_Data_36[17] = 0U;
    expected_map_Data_36[18] = 0U;
    expected_map_Data_36[19] = 0U;
    expected_map_Data_36[20] = 0U;
    expected_map_Data_36[21] = 0U;
    expected_map_Data_36[22] = 0U;
    expected_map_Data_36[23] = 0U;
    expected_map_Data_36[24] = 0U;
    expected_map_Data_36[25] = 0U;
    expected_map_Data_36[26] = 0U;
    expected_map_Data_36[27] = 0U;

    START_TEST("74: DcmAppl_AnalogueData_0xFD01_1",
               "created to solve false case of l_RBAPO_ActuatorPositionQualifier == RBPSC_OffsetCorrected at line number 1805 ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("RBLiPS_GetSupplyVoltage_u16#1");

            /* Call SUT */
            returnValue = DcmAppl_AnalogueData_0xFD01(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_HighQuiescent_0xD005(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = CANTATA_DEFAULT_VALUE;
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("23: DcmAppl_HighQuiescent_0xD005",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{DCOM_NvM_GetErrorStatus#default}");

            /* Call SUT */
            returnValue = DcmAppl_HighQuiescent_0xD005(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_HighQuiescent_0xD005_1(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = CANTATA_DEFAULT_VALUE;
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("23: DcmAppl_HighQuiescent_0xD005_1",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_ReadBlock#E_OK");

            /* Call SUT */
            returnValue = DcmAppl_HighQuiescent_0xD005(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_HighQuiescent_0xD005_2(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = CANTATA_DEFAULT_VALUE;
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("23: DcmAppl_HighQuiescent_0xD005_2",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_GetErrorStatus#E_OK_NVM_REQ_PENDING");

            /* Call SUT */
            returnValue = DcmAppl_HighQuiescent_0xD005(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_HighQuiescent_0xD005_3(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = CANTATA_DEFAULT_VALUE;
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("23: DcmAppl_HighQuiescent_0xD005_3",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_GetErrorStatus#E_OK_N_NVM_REQ_PENDING;"
                "DCOM_NvM_GetErrorStatus#TRUE"
        );

            /* Call SUT */
            returnValue = DcmAppl_HighQuiescent_0xD005(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_HighQuiescent_0xD005_4(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = CANTATA_DEFAULT_VALUE;
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("24: DcmAppl_HighQuiescent_0xD005_4",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_ReadBlock#E_OK");

            /* Call SUT */
            returnValue = DcmAppl_HighQuiescent_0xD005(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_HighQuiescent_0xD005_5(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = CANTATA_DEFAULT_VALUE;
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("24: DcmAppl_HighQuiescent_0xD005_5",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_ReadBlock#E_NOT_OK");

            /* Call SUT */
            returnValue = DcmAppl_HighQuiescent_0xD005(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_HighQuiescent_0xD005_6(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data[0];
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    map_Data[0] = 0xFFFF;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("24: DcmAppl_HighQuiescent_0xD005_6",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_GetErrorStatus#E_OK_N_NVM_REQ_PENDING;"
                "DCOM_NvM_GetErrorStatus#FALSE");

            /* Call SUT */
            returnValue = DcmAppl_HighQuiescent_0xD005(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_HighQuiescent_0xD005_7(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data[0];
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("24: DcmAppl_HighQuiescent_0xD005_7",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_GetErrorStatus#E_OK_N_NVM_REQ_PENDING;"
                "DCOM_NvM_GetErrorStatus#FALSE");

            /* Call SUT */
            returnValue = DcmAppl_HighQuiescent_0xD005(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_83(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data_37[0];
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    RBMESG_iB_BrkLightActive_B = 85U;
    RBMESG_DriverOnPedal_B = 85U;
    RBMESG_iB_ready_for_actuation_B = 85U;
    RBMESG_iB_status_N = 100;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    expected_map_Data_37[0] = 4U;
    expected_map_Data_37[1] = 1U;
    expected_map_Data_37[2] = 1U;
    expected_map_Data_37[3] = 1U;

    START_TEST("81: DcmAppl_iB_Status_Information_0xFD00_1",
               "created to solve true case of l_iB_status_N == 5 at line number 1925");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_iB_Status_Information_0xFD00(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, 0U);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_ReadQCMActDeact_D09A(int doIt){
if (doIt) {
    /* Test case data declarations */
    Dcm_OpStatusType OpStatus = CANTATA_DEFAULT_VALUE;
    uint8 * Data = &map_Data[0];
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("100: DcmAppl_ReadQCMActDeact_D09A",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_ReadQCMActDeact_D09A(OpStatus, Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_ReadQCMActDeact_D09A_1(int doIt){
if (doIt) {
    /* Test case data declarations */
    Dcm_OpStatusType OpStatus = CANTATA_DEFAULT_VALUE;
    uint8 * Data = &map_Data[0];
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("100: DcmAppl_ReadQCMActDeact_D09A_1",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_ReadBlock#E_OK");

            /* Call SUT */
            returnValue = DcmAppl_ReadQCMActDeact_D09A(OpStatus, Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_ReadQCMActDeact_D09A_2(int doIt){
if (doIt) {
    /* Test case data declarations */
    Dcm_OpStatusType OpStatus = CANTATA_DEFAULT_VALUE;
    uint8 * Data = &map_Data[0];
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("100: DcmAppl_ReadQCMActDeact_D09A_2",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_GetErrorStatus#E_NOT_OK");

            /* Call SUT */
            returnValue = DcmAppl_ReadQCMActDeact_D09A(OpStatus, Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_ReadQCMActDeact_D09A_3(int doIt){
if (doIt) {
    /* Test case data declarations */
    Dcm_OpStatusType OpStatus = CANTATA_DEFAULT_VALUE;
    uint8 * Data = &map_Data[0];
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("100: DcmAppl_ReadQCMActDeact_D09A_3",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_GetErrorStatus#E_OK_NVM_REQ_PENDING");

            /* Call SUT */
            returnValue = DcmAppl_ReadQCMActDeact_D09A(OpStatus, Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_ReadQCMActDeact_D09A_4(int doIt){
if (doIt) {
    /* Test case data declarations */
    Dcm_OpStatusType OpStatus = CANTATA_DEFAULT_VALUE;
    uint8 * Data = &map_Data[0];
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("100: DcmAppl_ReadQCMActDeact_D09A_4",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_GetErrorStatus#E_OK_N_NVM_REQ_PENDING");

            /* Call SUT */
            returnValue = DcmAppl_ReadQCMActDeact_D09A(OpStatus, Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_ReadQCMActDeact_D09A_5(int doIt){
if (doIt) {
    /* Test case data declarations */
    Dcm_OpStatusType OpStatus = CANTATA_DEFAULT_VALUE;
    uint8 * Data = &map_Data[0];
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("100: DcmAppl_ReadQCMActDeact_D09A_5",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_GetErrorStatus#E_OK_N_NVM_REQ_PENDING");

            /* Call SUT */
            returnValue = DcmAppl_ReadQCMActDeact_D09A(OpStatus, Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_ReadQCMActDeact_D09A_6(int doIt){
if (doIt) {
    /* Test case data declarations */
    Dcm_OpStatusType OpStatus = CANTATA_DEFAULT_VALUE;
    uint8 * Data = &map_Data[0];
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    ACCESS_LOCAL_VARIABLE(DcmAppl_22_rdbi, DcmAppl_ReadQCMActDeact_D09A, s_Status_b) = TRUE;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("100: DcmAppl_ReadQCMActDeact_D09A_6",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_GetErrorStatus#E_OK_NVM_REQ_CANCELED");

            /* Call SUT */
            returnValue = DcmAppl_ReadQCMActDeact_D09A(OpStatus, Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_ReadQCMActDeact_D09A_7(int doIt){
if (doIt) {
    /* Test case data declarations */
    Dcm_OpStatusType OpStatus = CANTATA_DEFAULT_VALUE;
    uint8 * Data = &map_Data[0];
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    ACCESS_LOCAL_VARIABLE(DcmAppl_22_rdbi, DcmAppl_ReadQCMActDeact_D09A, s_Status_b) = TRUE;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("100: DcmAppl_ReadQCMActDeact_D09A_7",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_GetErrorStatus#E_OK_NVM_REQ_REDUNDANCY_FAILED");

            /* Call SUT */
            returnValue = DcmAppl_ReadQCMActDeact_D09A(OpStatus, Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_ReadQCMActDeact_D09A_8(int doIt){
if (doIt) {
    /* Test case data declarations */
    Dcm_OpStatusType OpStatus = CANTATA_DEFAULT_VALUE;
    uint8 * Data = &map_Data[0];
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    ACCESS_LOCAL_VARIABLE(DcmAppl_22_rdbi, DcmAppl_ReadQCMActDeact_D09A, s_Status_b) = TRUE;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("100: DcmAppl_ReadQCMActDeact_D09A_8",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_GetErrorStatus#E_OK_NVM_REQ_BLOCK_SKIPPED");

            /* Call SUT */
            returnValue = DcmAppl_ReadQCMActDeact_D09A(OpStatus, Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_ReadQCMActDeact_D09A_9(int doIt){
if (doIt) {
    /* Test case data declarations */
    Dcm_OpStatusType OpStatus = CANTATA_DEFAULT_VALUE;
    uint8 * Data = &map_Data[0];
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    ACCESS_LOCAL_VARIABLE(DcmAppl_22_rdbi, DcmAppl_ReadQCMActDeact_D09A, s_Status_b) = TRUE;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("100: DcmAppl_ReadQCMActDeact_D09A_9",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_GetErrorStatus#E_OK_NVM_REQ_RESTORED_FROM_ROM");

            /* Call SUT */
            returnValue = DcmAppl_ReadQCMActDeact_D09A(OpStatus, Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_ReadQCMActDeact_D09A_10(int doIt){
if (doIt) {
    /* Test case data declarations */
    Dcm_OpStatusType OpStatus = CANTATA_DEFAULT_VALUE;
    uint8 * Data = &map_Data[0];
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    ACCESS_LOCAL_VARIABLE(DcmAppl_22_rdbi, DcmAppl_ReadQCMActDeact_D09A, s_Status_b) = TRUE;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("100: DcmAppl_ReadQCMActDeact_D09A_10",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_GetErrorStatus#E_OK_NVM_REQ_NOT_OK");

            /* Call SUT */
            returnValue = DcmAppl_ReadQCMActDeact_D09A(OpStatus, Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_ReadQCMActDeact_D09A_11(int doIt){
if (doIt) {
    /* Test case data declarations */
    Dcm_OpStatusType OpStatus = CANTATA_DEFAULT_VALUE;
    uint8 * Data = &map_Data[0];
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    ACCESS_LOCAL_VARIABLE(DcmAppl_22_rdbi, DcmAppl_ReadQCMActDeact_D09A, s_Status_b) = TRUE;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("100: DcmAppl_ReadQCMActDeact_D09A_11",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_GetErrorStatus#E_OK_NVM_REQ_INTEGRITY_FAILED");

            /* Call SUT */
            returnValue = DcmAppl_ReadQCMActDeact_D09A(OpStatus, Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_ReadQCMActDeact_D09A_12(int doIt){
if (doIt) {
    /* Test case data declarations */
    Dcm_OpStatusType OpStatus = CANTATA_DEFAULT_VALUE;
    uint8 * Data = &map_Data[0];
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    ACCESS_LOCAL_VARIABLE(DcmAppl_22_rdbi, DcmAppl_ReadQCMActDeact_D09A, s_Status_b) = TRUE;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("100: DcmAppl_ReadQCMActDeact_D09A_12",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_GetErrorStatus#E_OK_NVM_REQ_NV_INVALIDATED");

            /* Call SUT */
            returnValue = DcmAppl_ReadQCMActDeact_D09A(OpStatus, Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_RoutingTableConfigurationIdentification_0xD220(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data[0];
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("102: DcmAppl_RoutingTableConfigurationIdentification_0xD220",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{PduR_GetConfigurationId#default}");

            /* Call SUT */
            returnValue = DcmAppl_RoutingTableConfigurationIdentification_0xD220(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_swAuthPublicKeyCheckSum_0xD03A(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data[0];
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("100: DcmAppl_swAuthPublicKeyCheckSum_0xD03A",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = DcmAppl_swAuthPublicKeyCheckSum_0xD03A(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_swAuthPublicKeyCheckSum_0xD03A_1(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data[0];
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("105: DcmAppl_swAuthPublicKeyCheckSum_0xD03A_1",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("ecy_hsm_Csai_OpenSession#ecy_hsm_CSAI_SUCCESS");

            /* Call SUT */
            returnValue = DcmAppl_swAuthPublicKeyCheckSum_0xD03A(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_swAuthPublicKeyCheckSum_0xD03A_2(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data[0];
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("105: DcmAppl_swAuthPublicKeyCheckSum_0xD03A_2",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("ecy_hsm_Csai_OpenSession#ecy_hsm_CSAI_SUCCESS;"
                "ecy_hsm_Csai_ReadData#ecy_hsm_CSAI_SUCCESS");

            /* Call SUT */
            returnValue = DcmAppl_swAuthPublicKeyCheckSum_0xD03A(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_PRC_DCOM_GetEcuSerial_V(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("100: PRC_DCOM_GetEcuSerial_V",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            PRC_DCOM_GetEcuSerial_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_PRC_DCOM_GetEcuSerial_V_1(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("100: PRC_DCOM_GetEcuSerial_V_1",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_GetErrorStatus#E_OK_NVM_REQ_PENDING");

            /* Call SUT */
            PRC_DCOM_GetEcuSerial_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_PRC_DCOM_GetEcuSerial_V_2(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("100: PRC_DCOM_GetEcuSerial_V_2",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_GetErrorStatus#NVM_REQ_BLOCK_SKIPPED");

            /* Call SUT */
            PRC_DCOM_GetEcuSerial_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_PRC_DCOM_GetEcuSerial_V_3(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("100: PRC_DCOM_GetEcuSerial_V_3",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_GetErrorStatus#69");

            /* Call SUT */
            PRC_DCOM_GetEcuSerial_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}
RBLCF_HexBlockLayout_t map_myHexBlock[100];
RBLCF_StdHexInfoStruct_t map_HexInfoRef[100];

RBLCF_HexBlockLayout_t* map_aaa[100];


void test_DcmAppl_Supplier_Software_Version_0xFEE0(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data[0];
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_DcmAppl_Supplier_Software_Version_0xFEE0",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{memcpy#default}"
                "{RBLCF_GetFirstHexBlock#TRUE_RBLCF_HEXINFOTYPE_FSW}");


            /* Call SUT */
            returnValue = DcmAppl_Supplier_Software_Version_0xFEE0(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_Supplier_Software_Version_0xFEE0_1(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data[0];
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_DcmAppl_Supplier_Software_Version_0xFEE0_1",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{memcpy#default}"
                "{RBLCF_GetFirstHexBlock#TRUE_RBLCF_HEXINFOTYPE_COMPLETE}");


            /* Call SUT */
            returnValue = DcmAppl_Supplier_Software_Version_0xFEE0(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_Supplier_Software_Version_0xFEE0_2(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data[0];
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_DcmAppl_Supplier_Software_Version_0xFEE0_2",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{memcpy#default}"
                "{RBLCF_GetFirstHexBlock#FALSE}"
                "{RBLCF_GetNextHexBlock#1}"
                "{RBLCF_GetNextHexBlock#0}");


            /* Call SUT */
            returnValue = DcmAppl_Supplier_Software_Version_0xFEE0(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_Supplier_Software_Version_0xFEE0_3(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data[0];
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_DcmAppl_Supplier_Software_Version_0xFEE0_3",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{memcpy#default}"
                "{RBLCF_GetFirstHexBlock#TRUE_FALSE_FALSE}"
                "{RBLCF_GetNextHexBlock#0}");


            /* Call SUT */
            returnValue = DcmAppl_Supplier_Software_Version_0xFEE0(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_Supplier_Software_Version_0xFEE0_4(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data[0];
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_DcmAppl_Supplier_Software_Version_0xFEE0_4",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{memcpy#default}"
                "{RBLCF_GetFirstHexBlock#FALSE_1}"
                "{RBLCF_GetNextHexBlock#0}");


            /* Call SUT */
            returnValue = DcmAppl_Supplier_Software_Version_0xFEE0(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_PRC_DCOM_GetEcuSerial_V_4(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    //ACCESS_LOCAL_VARIABLE(DcmAppl_22_rdbi, PRC_DCOM_GetEcuSerial_V, EcuSerialNumber_NvmBuffer) = 0x30;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("100: PRC_DCOM_GetEcuSerial_V_4",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_GetErrorStatus#E_OK_N_NVM_REQ_PENDING;"
                "NvM_ReadBlock#1"
        );

            /* Call SUT */
            PRC_DCOM_GetEcuSerial_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_PRC_DCOM_GetEcuSerial_V_5(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    //ACCESS_LOCAL_VARIABLE(DcmAppl_22_rdbi, PRC_DCOM_GetEcuSerial_V, EcuSerialNumber_NvmBuffer) = 0x30;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("100: PRC_DCOM_GetEcuSerial_V_5",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_GetErrorStatus#E_OK_N_NVM_REQ_PENDING;"
                "NvM_ReadBlock#2"
        );

            /* Call SUT */
            PRC_DCOM_GetEcuSerial_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_PRC_DCOM_GetEcuSerial_V_6(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    //ACCESS_LOCAL_VARIABLE(DcmAppl_22_rdbi, PRC_DCOM_GetEcuSerial_V, EcuSerialNumber_NvmBuffer) = 0x30;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("100: PRC_DCOM_GetEcuSerial_V_6",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_GetErrorStatus#E_OK_N_NVM_REQ_PENDING;"
                "NvM_ReadBlock#3"
        );

            /* Call SUT */
            PRC_DCOM_GetEcuSerial_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_PRC_DCOM_GetEcuSerial_V_7(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    //ACCESS_LOCAL_VARIABLE(DcmAppl_22_rdbi, PRC_DCOM_GetEcuSerial_V, EcuSerialNumber_NvmBuffer) = 0x30;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("100: PRC_DCOM_GetEcuSerial_V_7",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_GetErrorStatus#E_OK_N_NVM_REQ_PENDING;"
                "NvM_ReadBlock#4"
        );

            /* Call SUT */
            PRC_DCOM_GetEcuSerial_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_PRC_DCOM_GetEcuSerial_V_8(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    //ACCESS_LOCAL_VARIABLE(DcmAppl_22_rdbi, PRC_DCOM_GetEcuSerial_V, EcuSerialNumber_NvmBuffer) = 0x30;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("100: PRC_DCOM_GetEcuSerial_V_8",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_GetErrorStatus#E_OK_NVM_REQ_PENDING;"
                "NvM_ReadBlock#5"
        );

            /* Call SUT */
            PRC_DCOM_GetEcuSerial_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_PRC_DCOM_GetEcuSerial_V_9(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    //ACCESS_LOCAL_VARIABLE(DcmAppl_22_rdbi, PRC_DCOM_GetEcuSerial_V, EcuSerialNumber_NvmBuffer) = 0x30;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("100: PRC_DCOM_GetEcuSerial_V_9",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_GetErrorStatus#E_NOT_OK_NVM_REQ_BLOCK_SKIPPED;"
                "NvM_ReadBlock#5"
        );

            /* Call SUT */
            PRC_DCOM_GetEcuSerial_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_PRC_DCOM_GetEcuSerial_V_10(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    //ACCESS_LOCAL_VARIABLE(DcmAppl_22_rdbi, PRC_DCOM_GetEcuSerial_V, EcuSerialNumber_NvmBuffer) = 0x30;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("100: PRC_DCOM_GetEcuSerial_V_10",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_GetErrorStatus#E_OK_N_NVM_REQ_PENDING;"
                "NvM_ReadBlock#6"
        );

            /* Call SUT */
            PRC_DCOM_GetEcuSerial_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_HighQuiescent_0xD005_8(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data[0];
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    map_Data[0] = 0xFFFF;
//    ACCESS_LOCAL_VARIABLE(DcmAppl_22_rdbi, DcmAppl_HighQuiescent_0xD005, StatusFlag_b) = FALSE;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("24: DcmAppl_HighQuiescent_0xD005_8",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_ReadBlock#7;"
                    "NvM_GetErrorStatus#E_OK_N_NVM_REQ_PENDING;"
                    "DCOM_NvM_GetErrorStatus#FALSE");

            /* Call SUT */
            returnValue = DcmAppl_HighQuiescent_0xD005(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_DcmAppl_HighQuiescent_0xD005_9(int doIt){
if (doIt) {
    /* Test case data declarations */
    uint8 * Data = &map_Data[0];
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    map_Data[0] = 0xFFFF;
    ACCESS_LOCAL_VARIABLE(DcmAppl_22_rdbi, DcmAppl_HighQuiescent_0xD005, StatusFlag_b) = TRUE;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("24: DcmAppl_HighQuiescent_0xD005_9",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("NvM_GetErrorStatus#E_OK_N_NVM_REQ_PENDING;"
                "DCOM_NvM_GetErrorStatus#FALSE");

            /* Call SUT */
            returnValue = DcmAppl_HighQuiescent_0xD005(Data);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

/*****************************************************************************/
/* Call Interface Control                                                    */
/*****************************************************************************/

/* Stub for function PduR_GetConfigurationId */
uint16 PduR_GetConfigurationId(){
    uint16 returnValue;
    REGISTER_CALL("PduR_GetConfigurationId");


    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}

/* Stub for function RBWauVolt_getKL15Voltage */
uint16 RBWauVolt_getKL15Voltage(){
    uint16 returnValue;
    REGISTER_CALL("RBWauVolt_getKL15Voltage");

    IF_INSTANCE("1") {
        returnValue = 0U;
        return returnValue;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}

/* Stub for function Dem_GetEventFailed */
Std_ReturnType Dem_GetEventFailed(Dem_EventIdType EventId,
                                  Dem_EventStatusType * EventStatus_p){
    Std_ReturnType returnValue;
    REGISTER_CALL("Dem_GetEventFailed");

    IF_INSTANCE("1") {
        returnValue = 85U;
        CHECK_U_INT(EventId, 0U);
        *EventStatus_p = 85U;
        return returnValue;
    }
    IF_INSTANCE("2") {
        returnValue = 0U;
        CHECK_U_INT(EventId, 0U);
        *EventStatus_p = 85U;
        return returnValue;
    }
    IF_INSTANCE("3") {
        returnValue = 0U;
        CHECK_U_INT(EventId, 0U);
        *EventStatus_p = 0U;
        return returnValue;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}

/* Stub for function RBLiPS_GetSupplyVoltage_u16 */
uint16 RBLiPS_GetSupplyVoltage_u16(){
    uint16 returnValue;
    REGISTER_CALL("RBLiPS_GetSupplyVoltage_u16");

    IF_INSTANCE("1") {
        returnValue = 0U;
        return returnValue;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}

#pragma qas cantata ignore on

/* Before-Wrapper for function DCOM_NvM_GetErrorStatus */
int BEFORE_DCOM_NvM_GetErrorStatus(NvM_RequestResultType ReadResultValue){
    REGISTER_CALL("DCOM_NvM_GetErrorStatus");
    IF_INSTANCE("TRUE") {

        return REPLACE_WRAPPER;
    }
    IF_INSTANCE("FALSE") {

        return REPLACE_WRAPPER;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return AFTER_WRAPPER;
}

/* After-Wrapper for function DCOM_NvM_GetErrorStatus */
Std_ReturnType AFTER_DCOM_NvM_GetErrorStatus(Std_ReturnType cppsm_return_value,
                                             NvM_RequestResultType ReadResultValue){
    Std_ReturnType returnValue;

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return cppsm_return_value;
}

/* Replace-Wrapper for function DCOM_NvM_GetErrorStatus */
Std_ReturnType REPLACE_DCOM_NvM_GetErrorStatus(NvM_RequestResultType ReadResultValue){
    Std_ReturnType returnValue;
    IF_INSTANCE("TRUE") {
        returnValue = TRUE;
        return returnValue;
    }
    IF_INSTANCE("FALSE") {
        returnValue = FALSE;
        return returnValue;
    }
    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}

/* Before-Wrapper for function memcpy */
int BEFORE_memcpy(void * param_1,
                  const void * param_2,
                  unsigned int param_3){
    REGISTER_CALL("memcpy");


    LOG_SCRIPT_ERROR("Call instance not defined.");
    return AFTER_WRAPPER;
}

/* After-Wrapper for function memcpy */
void * AFTER_memcpy(void * cppsm_return_value,
                    void * param_1,
                    const void * param_2,
                    unsigned int param_3){
    void * returnValue;

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return cppsm_return_value;
}

/* Replace-Wrapper for function memcpy */
void * REPLACE_memcpy(void * param_1,
                      const void * param_2,
                      unsigned int param_3){
    void * returnValue;

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}


extern Std_ReturnType BOUND(value_min, value, value_max);
/* Stub for function BOUND */
Std_ReturnType BOUND(int value_min,int value, int value_max){
    uint16 returnValue;
    REGISTER_CALL("BOUND");

    IF_INSTANCE("1") {
        returnValue = 0U;
        return returnValue;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}


extern Std_ReturnType NvM_ReadBlock(NvM_BlockIdType BlockId, void *NvM_DstPtr);
/* Stub for function BOUND */
Std_ReturnType NvM_ReadBlock(NvM_BlockIdType BlockId, void *NvM_DstPtr){
    uint16 returnValue;
    REGISTER_CALL("NvM_ReadBlock");

    IF_INSTANCE("1") {
        returnValue = 0U;
        *(uint8*)NvM_DstPtr = 0x30;
        *(uint8*)(NvM_DstPtr + 1) = 0x30 + 0x08;
        *(uint8*)(NvM_DstPtr + 2) = 0x30 + 0x05;

        return returnValue;
    }
    IF_INSTANCE("2") {
        returnValue = 0U;
        *(uint8*)NvM_DstPtr = 0x30;
        *(uint8*)(NvM_DstPtr + 1) = 0;
        *(uint8*)(NvM_DstPtr + 2) = 0x30 + 0x05;

        return returnValue;
    }
    IF_INSTANCE("3") {
        returnValue = 0U;
        *(uint8*)NvM_DstPtr = 0x30;
        *(uint8*)(NvM_DstPtr + 1) = 0x30 + 0x08;
        *(uint8*)(NvM_DstPtr + 2) = 0;

        return returnValue;
    }
    IF_INSTANCE("4") {
        returnValue = 0U;
        *(uint8*)(NvM_DstPtr + 8) = 0x30;
        *(uint8*)(NvM_DstPtr + 9) = 0x30;
        *(uint8*)(NvM_DstPtr + 10) = 0x30;
        *(uint8*)(NvM_DstPtr + 11) = 0x30;
        *(uint8*)(NvM_DstPtr + 12) = 0x30;

        *(uint8*)(NvM_DstPtr + 15) = 0x30;
        *(uint8*)(NvM_DstPtr + 16) = 0x32;
        *(uint8*)(NvM_DstPtr + 17) = 0x30;
        *(uint8*)(NvM_DstPtr + 18) = 0x32;
        return returnValue;
    }
    IF_INSTANCE("5") {

        returnValue = E_NOT_OK;

        return returnValue;
    }
    IF_INSTANCE("6") {
        returnValue = 0U;
        *(uint8*)NvM_DstPtr = 0x30;
        *(uint8*)(NvM_DstPtr + 1) = 0x30 + 0x08;
        *(uint8*)(NvM_DstPtr + 2) = 0x30 + 0x05;

        *(uint8*)(NvM_DstPtr + 8) = 0x30;
        *(uint8*)(NvM_DstPtr + 9) = 0x30;
        *(uint8*)(NvM_DstPtr + 10) = 0x30;
        *(uint8*)(NvM_DstPtr + 11) = 0x30;
        *(uint8*)(NvM_DstPtr + 12) = 0x30;
        *(uint8*)(NvM_DstPtr + 14) = 0x30;
        *(uint8*)(NvM_DstPtr + 15) = 0x30;
        *(uint8*)(NvM_DstPtr + 16) = 0x32;
        *(uint8*)(NvM_DstPtr + 17) = 0x30;
        *(uint8*)(NvM_DstPtr + 18) = 0x32;
        return returnValue;
    }

    IF_INSTANCE("7") {

        returnValue = E_NOT_OK;
        printf("oklkkk \n");
        *(uint8*)(NvM_DstPtr + 9) = 0xFFFF;
        *(uint8*)(NvM_DstPtr + 19) = 0xFFFF;
        *(uint8*)(NvM_DstPtr + 29) = 0xFFFF;
        *(uint8*)(NvM_DstPtr + 39) = 0xFFFF;
        *(uint8*)(NvM_DstPtr + 49) = 0xFFFF;
        return returnValue;
    }

    IF_INSTANCE("E_OK") {

        returnValue = E_OK;
        return returnValue;
    }
    IF_INSTANCE("E_NOT_OK") {

        returnValue = E_NOT_OK;
        return returnValue;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}

extern Std_ReturnType NvM_GetErrorStatus(NvM_BlockIdType BlockId, NvM_RequestResultType *RequestResultPtr);
/* Stub for function NvM_GetErrorStatus */
Std_ReturnType NvM_GetErrorStatus(NvM_BlockIdType BlockId, NvM_RequestResultType *RequestResultPtr){
    uint16 returnValue;
    REGISTER_CALL("NvM_GetErrorStatus");

    IF_INSTANCE("1") {
        returnValue = 0U;
        return returnValue;
    }
    IF_INSTANCE("E_OK_NVM_REQ_PENDING") {
        returnValue = E_OK;
        *RequestResultPtr = NVM_REQ_PENDING;
        return returnValue;
    }
    IF_INSTANCE("E_OK_NVM_REQ_CANCELED") {
        returnValue = E_OK;
        *RequestResultPtr = NVM_REQ_CANCELED;
        return returnValue;
    }
    IF_INSTANCE("E_OK_NVM_REQ_REDUNDANCY_FAILED") {
        returnValue = E_OK;
        *RequestResultPtr = NVM_REQ_REDUNDANCY_FAILED;
        return returnValue;
    }
    IF_INSTANCE("E_OK_NVM_REQ_BLOCK_SKIPPED") {
        returnValue = E_OK;
        *RequestResultPtr = NVM_REQ_BLOCK_SKIPPED;
        return returnValue;
    }
    IF_INSTANCE("E_OK_NVM_REQ_RESTORED_FROM_ROM") {
        returnValue = E_OK;
        *RequestResultPtr = NVM_REQ_RESTORED_FROM_ROM;
        return returnValue;
    }
    IF_INSTANCE("E_OK_NVM_REQ_NOT_OK") {
        returnValue = E_OK;
        *RequestResultPtr = NVM_REQ_NOT_OK;
        return returnValue;
    }
    IF_INSTANCE("E_OK_NVM_REQ_INTEGRITY_FAILED") {
        returnValue = E_OK;
        *RequestResultPtr = NVM_REQ_INTEGRITY_FAILED;
        return returnValue;
    }
    IF_INSTANCE("E_OK_NVM_REQ_NV_INVALIDATED") {
        returnValue = E_OK;
        *RequestResultPtr = NVM_REQ_NV_INVALIDATED;
        return returnValue;
    }
    IF_INSTANCE("E_OK_N_NVM_REQ_PENDING") {
        returnValue = E_OK;
        *RequestResultPtr = !NVM_REQ_PENDING;
        return returnValue;
    }
    IF_INSTANCE("E_NOT_OK_NVM_REQ_BLOCK_SKIPPED") {
        *RequestResultPtr = NVM_REQ_BLOCK_SKIPPED;
        returnValue = E_NOT_OK;
        return returnValue;
    }
    IF_INSTANCE("E_NOT_OK") {
        returnValue = E_NOT_OK;
        return returnValue;
    }
    IF_INSTANCE("NVM_REQ_BLOCK_SKIPPED") {
        *RequestResultPtr = NVM_REQ_BLOCK_SKIPPED;
        returnValue = NVM_REQ_BLOCK_SKIPPED;
        return returnValue;
    }
    IF_INSTANCE("69") {
        *RequestResultPtr = 9;
        returnValue = E_OK;
        return returnValue;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}


extern Std_ReturnType RBLCF_GetFirstHexBlock(RBLCF_HexBlockLayout_t* nHexBlock);
/* Stub for function RBLCF_GetFirstHexBlock */
Std_ReturnType RBLCF_GetFirstHexBlock(RBLCF_HexBlockLayout_t* nHexBlock){
    uint16 returnValue;
    REGISTER_CALL("RBLCF_GetFirstHexBlock");
    IF_INSTANCE("1") {
        returnValue = 0U;

        return returnValue;
    }
    IF_INSTANCE("TRUE_RBLCF_HEXINFOTYPE_FSW") {
        nHexBlock->hasNext = 1;
        nHexBlock->HexInfoRef->BlockStructureID = RBLCF_HEXINFOTYPE_FSW;
        returnValue = 0U;
        return returnValue;
    }
    IF_INSTANCE("TRUE_RBLCF_HEXINFOTYPE_COMPLETE") {
        nHexBlock->hasNext = 1;
        nHexBlock->HexInfoRef->BlockStructureID = RBLCF_HEXINFOTYPE_COMPLETE;
        returnValue = 0U;
        return returnValue;
    }
    IF_INSTANCE("TRUE_FALSE_FALSE") {
        nHexBlock->hasNext = 1;
        nHexBlock->HexInfoRef->BlockStructureID = 0X00;
        returnValue = 0U;
        return returnValue;
    }
    IF_INSTANCE("FALSE") {
        returnValue = 0U;
        nHexBlock->hasNext = 0;
        return returnValue;
    }
    IF_INSTANCE("FALSE_1") {
        returnValue = 0U;
        nHexBlock->hasNext = 0;

        nHexBlock->HexInfoRef->BBNumber[0] = 9;
        nHexBlock->HexInfoRef->MTCConfiguration[0] = 90;
        nHexBlock->HexInfoRef->SCM_ID = 9;
        nHexBlock->HexInfoRef->SCM_VersionID[0] = 9;

        return returnValue;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}

extern Std_ReturnType RBLCF_GetNextHexBlock(RBLCF_HexBlockLayout_t* nHexBlock);
/* Stub for function RBLCF_GetNextHexBlock */
Std_ReturnType RBLCF_GetNextHexBlock(RBLCF_HexBlockLayout_t* nHexBlock){
    uint16 returnValue;
    REGISTER_CALL("RBLCF_GetNextHexBlock");

    IF_INSTANCE("1") {
        nHexBlock->hasNext = 1;
        returnValue = 0U;
        return returnValue;
    }
    IF_INSTANCE("0") {
        nHexBlock->hasNext = 0;
        returnValue = 0U;
        return returnValue;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}

extern Std_ReturnType ecy_hsm_Csai_OpenSession();
/* Stub for function ecy_hsm_Csai_OpenSession */
Std_ReturnType ecy_hsm_Csai_OpenSession(void){
    uint16 returnValue;
    REGISTER_CALL("ecy_hsm_Csai_OpenSession");

    IF_INSTANCE("1") {
        returnValue = 0U;
        return returnValue;
    }
    IF_INSTANCE("ecy_hsm_CSAI_SUCCESS") {
        returnValue = ecy_hsm_CSAI_SUCCESS;
        return returnValue;
    }
    IF_INSTANCE("1") {
        returnValue = 0U;
        return returnValue;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}

extern Std_ReturnType ecy_hsm_Csai_ReadData();
/* Stub for function ecy_hsm_Csai_ReadData */
Std_ReturnType ecy_hsm_Csai_ReadData(void){
    uint16 returnValue;
    REGISTER_CALL("ecy_hsm_Csai_ReadData");

    IF_INSTANCE("1") {
        returnValue = 0U;
        return returnValue;
    }
    IF_INSTANCE("ecy_hsm_CSAI_SUCCESS") {
        returnValue = ecy_hsm_CSAI_SUCCESS;
        return returnValue;
    }
    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}




#pragma qas cantata ignore off
/* pragma qas cantata testscript end */
/*****************************************************************************/
/* End of test script                                                        */
/*****************************************************************************/
