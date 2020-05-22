/*****************************************************************************/
/*                            Cantata Test Script                            */
/*****************************************************************************/
/*
 *    Filename: test_GWM_NET_SCL_Rx_VAF.c
 *    Author: nbg7hc
 *    Generated on: 21-May-2020 17:18:26
 *    Generated from: GWM_NET_SCL_Rx_VAF.c
 */
/*****************************************************************************/
/* Environment Definition                                                    */
/*****************************************************************************/

#define TEST_SCRIPT_GENERATOR 2

/* Include files from software under test */
#include "DNCIF_Global.h"
#include "rba_SCL_ClassMapping.h"
#include "rba_SCL_Parameters.h"
#include "rba_SCL_Subsystem.h"
#include "RBCN_SclConvert.h"
#include "SAS_Const_GWM.h"
#include "DCOMIF.h"

#define CANTATA_DEFAULT_VALUE 0 /* Default value of variables & stub returns */

#include <cantpp.h>  /* Cantata Directives */
/* pragma qas cantata testscript start */
/*****************************************************************************/
/* Global Data Definitions                                                   */
/*****************************************************************************/

/* Global Functions */
extern void PRC_GWM_NET_SCL_Rx_VAF_V();
void Dem_ReportErrorStatus(Dem_EventIdType EventId, Dem_EventStatusType EventStatus);

/* Global data */
extern uint8 ComScl_RxPduFlags_au8[(uint8)19U];
extern boolean ComScl_RawSignal_DriverDoorSts_RX_b;
extern boolean GWM_ComScl_IsRxPduIndication_DriverSeatBelt;
extern boolean ComScl_RawSignal_DriverSBR_RX_b;
extern volatile MESGType_NMSG_DriverSeatBeltLatched_B MESG_NMSG_DriverSeatBeltLatched_B;
extern volatile MESGType_NMSG_DriverPresent_B MESG_NMSG_DriverPresent_B;
extern boolean GWM_ComScl_IsRxPduIndication_ReverseGear;
extern uint8 ComScl_RawSignal_ReversGearSts_RX_u8;
extern volatile MESGType_NMSG_ReverseGearSwitch_B MESG_NMSG_ReverseGearSwitch_B;
extern boolean GWM_ComScl_EvaluateRxPdu_ReverseGear;
extern boolean GWM_ComScl_IsRxPduIndication_GearInNeutralSts;
extern uint8 ComScl_RawSignal_NeutralSts_RX_u8;
extern volatile MESGType_NMSG_NeutralGear_B MESG_NMSG_NeutralGear_B;
extern boolean GWM_ComScl_EvaluateRxPdu_GearInNeutralSts;
extern boolean GWM_ComScl_IsRxPduIndication_EMotor_Ready;
extern boolean ComScl_RawSignal_TM_OperMod_RX_u8;
extern volatile MESGType_NMSG_EMotor_Ready_B MESG_NMSG_EMotor_Ready_B;
extern boolean GWM_ComScl_EvaluateRxPdu_EMotor_Ready;
extern boolean GWM_ComScl_IsRxPduIndication_VehTotDistance;
extern uint32 ComScl_RawSignal_VehTotDistance_RX_u32;
extern volatile MESGType_NMSG_VehTotDistance_ST MESG_NMSG_VehTotDistance_ST;
extern boolean GWM_ComScl_EvaluateRxPdu_VehTotDistance;
extern boolean GWM_ComScl_IsRxPduIndication_SoakTime;
extern uint16 ComScl_RawSignal_VehicleSoakTime_RX_u16;
extern volatile MESGType_NMSG_tStandMinutes_ST MESG_NMSG_tStandMinutes_ST;
extern boolean GWM_ComScl_EvaluateRxPdu_SoakTime;
extern boolean GWM_ComScl_IsRxPduIndication_StartStopSts;
extern uint8 ComScl_RawSignal_Start_Stop_Sts_G_RX_u8;
extern volatile MESGType_NMSG_StartStop_Active_B MESG_NMSG_StartStop_Active_B;
extern boolean GWM_ComScl_IsRxPduIndication_EngState;
extern uint8 ComScl_RawSignal_EngState_RX_u8;
extern volatile MESGType_NMSG_EngineCranking_N MESG_NMSG_EngineCranking_N;
extern boolean GWM_ComScl_EvaluateRxPdu_EngState;
extern boolean GWM_ComScl_IsRxPduIndication_SystemPowerMode;
extern uint8 ComScl_RawSignal_SystemPowerMode_RX_u8;
extern boolean ComScl_RawSignal_SystemPowerModeValid_RX_b;
extern boolean GWM_ComScl_IsRxPduIndication_SystemOperatingMode;
extern uint8 ComScl_RawSignal_SystemOperatingMode_RX_u8;
extern volatile MESGType_NMSG_BCM_ReqATMMode_UB MESG_NMSG_BCM_ReqATMMode_UB;
extern boolean GWM_ComScl_IsRxPduIndication_ESPFuncOffSwSts;
extern boolean ComScl_RawSignal_HUT_ESPFuncOffSwSts_RX_b;
extern volatile MESGType_NMSG_Pata_CAN_N MESG_NMSG_Pata_CAN_N;
extern boolean GWM_ComScl_IsRxPduIndication_EPBActvReqVld;
extern boolean ComScl_RawSignal_VCU_EPBActvReqVld_RX_b;
extern volatile MESGType_NMSG_VCU_EPBActvReqVld_B MESG_NMSG_VCU_EPBActvReqVld_B;
extern boolean GWM_ComScl_IsRxPduIndication_EPBActvReq;
extern boolean ComScl_RawSignal_VCU_EPBActvReq_RX_b;
extern volatile MESGType_NMSG_VCU_EPBActvReq_B MESG_NMSG_VCU_EPBActvReq_B;
extern boolean GWM_ComScl_EvaluateRxPdu_EPBActvReq;
extern boolean GWM_ComScl_EvaluateRxPdu_EPBActvReqVld;
extern boolean GWM_ComScl_IsRxPduIndication_AmbientTemp_IC;
extern uint8 ComScl_RawSignal_ACAmbtTemp_RX_u8;
extern boolean GWM_ComScl_IsRxPduTimeoutError_AmbientTemp_IC;
extern boolean GWM_ComScl_IsRxPduDataCorruptError_AmbientTemp_IC;
extern volatile MESGType_NMSG_Tambient_ST MESG_NMSG_Tambient_ST;
extern boolean GWM_ComScl_EvaluateRxPdu_AmbientTemp_IC;
extern boolean GWM_ComScl_IsRxPduIndication_ParkBrakeSts;
extern uint8 ComScl_RawSignal_ParkBrakeSts_RX_u8;
extern volatile MESGType_NMSG_Has_B MESG_NMSG_Has_B;
extern boolean GWM_ComScl_EvaluateRxPdu_ParkBrakeSts;
extern boolean GWM_ComScl_IsRxPduIndication_TCU_ESP_DriverIntervention;
extern boolean ComScl_RawSignal_TCU_ESP_DriverIntervention_RX_b;
extern volatile MESGType_NMSG_TCU_DriverIntervention_B MESG_NMSG_TCU_DriverIntervention_B;
extern boolean GWM_ComScl_IsRxPduIndication_TABSwtReq;
extern boolean ComScl_RawSignal_TABSwtReq_RX_b;
extern volatile MESGType_NMSG_TABSwtReq_B MESG_NMSG_TABSwtReq_B;
extern boolean GWM_ComScl_IsRxPduIndication_AccPedalOverride;
extern boolean ComScl_RawSignal_AccPedalOverride_RX_b;
extern volatile MESGType_NMSG_AccPedalOverride_B MESG_NMSG_AccPedalOverride_B;
extern boolean GWM_ComScl_IsRxPduIndication_ECM_interfaceAPS;
extern boolean ComScl_RawSignal_ECM_interfaceAPS_RX_b;
extern boolean GWM_ComScl_EvaluateRxPdu_ECM_interfaceAPS;
extern boolean GWM_ComScl_IsRxPduIndication_DCT_EPBActvReq;
extern boolean ComScl_RawSignal_DCT_EPBActvReq_RX_b;
extern volatile MESGType_NMSG_ApbCtrl_AutoapplyFromDCT_B MESG_NMSG_ApbCtrl_AutoapplyFromDCT_B;
extern volatile MESGType_NMSG_ApbCtrl_AutoapplyFromDCT_Valid_B MESG_NMSG_ApbCtrl_AutoapplyFromDCT_Valid_B;
extern boolean GWM_ComScl_EvaluateRxPdu_DCT_EPBActvReq;
extern boolean GWM_ComScl_IsRxPduIndication_LeftTurnSWSts;
extern volatile MESGType_NMSG_LeftTurnSigCmd MESG_NMSG_LeftTurnSigCmd;
extern boolean ComScl_RawSignal_LeftTurnSWSts_RX_b;
extern boolean GWM_ComScl_IsRxPduIndication_RightTurnSWSts;
extern volatile MESGType_NMSG_RightTurnSigCmd MESG_NMSG_RightTurnSigCmd;
extern boolean ComScl_RawSignal_RightTurnSWSts_RX_b;
extern boolean GWM_ComScl_IsRxPduIndication_CruiseCtrlSts;
extern uint8 ComScl_RawSignal_CruiseCtrlSts_RX_u8;
extern volatile MESGType_NMSG_CruiseControl_Active MESG_NMSG_CruiseControl_Active;
extern boolean GWM_ComScl_IsRxPduIndication_SAS;
extern uint16 ComScl_RawSignal_SteerWheelSpd_RX_u16;
extern boolean ComScl_RawSignal_SteerWheelSpdSign_RX_b;
extern volatile MESGType_NMSG_SteeringWheeSpeed MESG_NMSG_SteeringWheeSpeed;
extern boolean GWM_ComScl_EvaluateRxPdu_SAS;
typedef struct GWM_NET_SCL_Rx_VAF_av_struct { BOOL * ref_g_DriverDoorSts_B; BOOL * ref_g_DriverSBR_B; BOOL * ref_g_EPBActvReqVld_B; } GWM_NET_SCL_Rx_VAF_av_struct;
extern GWM_NET_SCL_Rx_VAF_av_struct av_GWM_NET_SCL_Rx_VAF;
extern BOOL * LOCAL_VARIABLE_ACCESSOR(GWM_NET_SCL_Rx_VAF, PRC_GWM_NET_SCL_Rx_VAF_V, ls_ReverseGear_SignalFailIndication_B);
extern BOOL * LOCAL_VARIABLE_ACCESSOR(GWM_NET_SCL_Rx_VAF, PRC_GWM_NET_SCL_Rx_VAF_V, ls_GearInNeutralSts_SignalFailIndication_B);
extern BOOL * LOCAL_VARIABLE_ACCESSOR(GWM_NET_SCL_Rx_VAF, PRC_GWM_NET_SCL_Rx_VAF_V, ls_EMotor_Ready_SignalFailIndication_B);
extern BOOL * LOCAL_VARIABLE_ACCESSOR(GWM_NET_SCL_Rx_VAF, PRC_GWM_NET_SCL_Rx_VAF_V, ls_VehTotDistance_SignalFailIndication_B);
extern VehTotDistance_ST * LOCAL_VARIABLE_ACCESSOR(GWM_NET_SCL_Rx_VAF, PRC_GWM_NET_SCL_Rx_VAF_V, l_VehTotDistance_ST);
extern tStandMinutes_ST * LOCAL_VARIABLE_ACCESSOR(GWM_NET_SCL_Rx_VAF, PRC_GWM_NET_SCL_Rx_VAF_V, ls_tStandMinutes_ST);
extern BOOL * LOCAL_VARIABLE_ACCESSOR(GWM_NET_SCL_Rx_VAF, PRC_GWM_NET_SCL_Rx_VAF_V, ls_SoakTime_SignalFailIndication_B);
extern BOOL * LOCAL_VARIABLE_ACCESSOR(GWM_NET_SCL_Rx_VAF, PRC_GWM_NET_SCL_Rx_VAF_V, ls_EngStartStop_B);
extern BOOL * LOCAL_VARIABLE_ACCESSOR(GWM_NET_SCL_Rx_VAF, PRC_GWM_NET_SCL_Rx_VAF_V, ls_DCT_EPBActvReq_SignalFailIndication_B);
extern SWORD * LOCAL_VARIABLE_ACCESSOR(GWM_NET_SCL_Rx_VAF, PRC_GWM_NET_SCL_Rx_VAF_V, ls_Tambient_PBC_SW);
extern Tambient_ST * LOCAL_VARIABLE_ACCESSOR(GWM_NET_SCL_Rx_VAF, PRC_GWM_NET_SCL_Rx_VAF_V, ls_Tambient_ST);
extern BOOL * LOCAL_VARIABLE_ACCESSOR(GWM_NET_SCL_Rx_VAF, PRC_GWM_NET_SCL_Rx_VAF_V, ls_EnvTemp_SignalFailIndication_B);
extern BOOL * LOCAL_VARIABLE_ACCESSOR(GWM_NET_SCL_Rx_VAF, PRC_GWM_NET_SCL_Rx_VAF_V, ls_ParkBrake_SignalFailIndication_B);
extern BOOL * LOCAL_VARIABLE_ACCESSOR(GWM_NET_SCL_Rx_VAF, PRC_GWM_NET_SCL_Rx_VAF_V, ls_ECM_interfaceAPS_SignalFailIndication_B);
extern BOOL * LOCAL_VARIABLE_ACCESSOR(GWM_NET_SCL_Rx_VAF, PRC_GWM_NET_SCL_Rx_VAF_V, ls_SteerWheelSpd_SignalFailIndication_B);

/* Expected variables for global data */
uint8 expected_ComScl_RxPduFlags_au8[(uint8)19U];
boolean expected_ComScl_RawSignal_DriverDoorSts_RX_b;
boolean expected_GWM_ComScl_IsRxPduIndication_DriverSeatBelt;
boolean expected_ComScl_RawSignal_DriverSBR_RX_b;
MESGType_NMSG_DriverSeatBeltLatched_B expected_MESG_NMSG_DriverSeatBeltLatched_B;
MESGType_NMSG_DriverPresent_B expected_MESG_NMSG_DriverPresent_B;
boolean expected_GWM_ComScl_IsRxPduIndication_ReverseGear;
uint8 expected_ComScl_RawSignal_ReversGearSts_RX_u8;
MESGType_NMSG_ReverseGearSwitch_B expected_MESG_NMSG_ReverseGearSwitch_B;
boolean expected_GWM_ComScl_EvaluateRxPdu_ReverseGear;
boolean expected_GWM_ComScl_IsRxPduIndication_GearInNeutralSts;
uint8 expected_ComScl_RawSignal_NeutralSts_RX_u8;
MESGType_NMSG_NeutralGear_B expected_MESG_NMSG_NeutralGear_B;
boolean expected_GWM_ComScl_EvaluateRxPdu_GearInNeutralSts;
boolean expected_GWM_ComScl_IsRxPduIndication_EMotor_Ready;
boolean expected_ComScl_RawSignal_TM_OperMod_RX_u8;
MESGType_NMSG_EMotor_Ready_B expected_MESG_NMSG_EMotor_Ready_B;
boolean expected_GWM_ComScl_EvaluateRxPdu_EMotor_Ready;
boolean expected_GWM_ComScl_IsRxPduIndication_VehTotDistance;
uint32 expected_ComScl_RawSignal_VehTotDistance_RX_u32;
MESGType_NMSG_VehTotDistance_ST expected_MESG_NMSG_VehTotDistance_ST;
boolean expected_GWM_ComScl_EvaluateRxPdu_VehTotDistance;
boolean expected_GWM_ComScl_IsRxPduIndication_SoakTime;
uint16 expected_ComScl_RawSignal_VehicleSoakTime_RX_u16;
MESGType_NMSG_tStandMinutes_ST expected_MESG_NMSG_tStandMinutes_ST;
boolean expected_GWM_ComScl_EvaluateRxPdu_SoakTime;
boolean expected_GWM_ComScl_IsRxPduIndication_StartStopSts;
uint8 expected_ComScl_RawSignal_Start_Stop_Sts_G_RX_u8;
MESGType_NMSG_StartStop_Active_B expected_MESG_NMSG_StartStop_Active_B;
boolean expected_GWM_ComScl_IsRxPduIndication_EngState;
uint8 expected_ComScl_RawSignal_EngState_RX_u8;
MESGType_NMSG_EngineCranking_N expected_MESG_NMSG_EngineCranking_N;
boolean expected_GWM_ComScl_EvaluateRxPdu_EngState;
boolean expected_GWM_ComScl_IsRxPduIndication_SystemPowerMode;
uint8 expected_ComScl_RawSignal_SystemPowerMode_RX_u8;
boolean expected_ComScl_RawSignal_SystemPowerModeValid_RX_b;
boolean expected_GWM_ComScl_IsRxPduIndication_SystemOperatingMode;
uint8 expected_ComScl_RawSignal_SystemOperatingMode_RX_u8;
MESGType_NMSG_BCM_ReqATMMode_UB expected_MESG_NMSG_BCM_ReqATMMode_UB;
boolean expected_GWM_ComScl_IsRxPduIndication_ESPFuncOffSwSts;
boolean expected_ComScl_RawSignal_HUT_ESPFuncOffSwSts_RX_b;
MESGType_NMSG_Pata_CAN_N expected_MESG_NMSG_Pata_CAN_N;
boolean expected_GWM_ComScl_IsRxPduIndication_EPBActvReqVld;
boolean expected_ComScl_RawSignal_VCU_EPBActvReqVld_RX_b;
MESGType_NMSG_VCU_EPBActvReqVld_B expected_MESG_NMSG_VCU_EPBActvReqVld_B;
boolean expected_GWM_ComScl_IsRxPduIndication_EPBActvReq;
boolean expected_ComScl_RawSignal_VCU_EPBActvReq_RX_b;
MESGType_NMSG_VCU_EPBActvReq_B expected_MESG_NMSG_VCU_EPBActvReq_B;
boolean expected_GWM_ComScl_EvaluateRxPdu_EPBActvReq;
boolean expected_GWM_ComScl_EvaluateRxPdu_EPBActvReqVld;
boolean expected_GWM_ComScl_IsRxPduIndication_AmbientTemp_IC;
uint8 expected_ComScl_RawSignal_ACAmbtTemp_RX_u8;
boolean expected_GWM_ComScl_IsRxPduTimeoutError_AmbientTemp_IC;
boolean expected_GWM_ComScl_IsRxPduDataCorruptError_AmbientTemp_IC;
MESGType_NMSG_Tambient_ST expected_MESG_NMSG_Tambient_ST;
boolean expected_GWM_ComScl_EvaluateRxPdu_AmbientTemp_IC;
boolean expected_GWM_ComScl_IsRxPduIndication_ParkBrakeSts;
uint8 expected_ComScl_RawSignal_ParkBrakeSts_RX_u8;
MESGType_NMSG_Has_B expected_MESG_NMSG_Has_B;
boolean expected_GWM_ComScl_EvaluateRxPdu_ParkBrakeSts;
boolean expected_GWM_ComScl_IsRxPduIndication_TCU_ESP_DriverIntervention;
boolean expected_ComScl_RawSignal_TCU_ESP_DriverIntervention_RX_b;
MESGType_NMSG_TCU_DriverIntervention_B expected_MESG_NMSG_TCU_DriverIntervention_B;
boolean expected_GWM_ComScl_IsRxPduIndication_TABSwtReq;
boolean expected_ComScl_RawSignal_TABSwtReq_RX_b;
MESGType_NMSG_TABSwtReq_B expected_MESG_NMSG_TABSwtReq_B;
boolean expected_GWM_ComScl_IsRxPduIndication_AccPedalOverride;
boolean expected_ComScl_RawSignal_AccPedalOverride_RX_b;
MESGType_NMSG_AccPedalOverride_B expected_MESG_NMSG_AccPedalOverride_B;
boolean expected_GWM_ComScl_IsRxPduIndication_ECM_interfaceAPS;
boolean expected_ComScl_RawSignal_ECM_interfaceAPS_RX_b;
boolean expected_GWM_ComScl_EvaluateRxPdu_ECM_interfaceAPS;
boolean expected_GWM_ComScl_IsRxPduIndication_DCT_EPBActvReq;
boolean expected_ComScl_RawSignal_DCT_EPBActvReq_RX_b;
MESGType_NMSG_ApbCtrl_AutoapplyFromDCT_B expected_MESG_NMSG_ApbCtrl_AutoapplyFromDCT_B;
MESGType_NMSG_ApbCtrl_AutoapplyFromDCT_Valid_B expected_MESG_NMSG_ApbCtrl_AutoapplyFromDCT_Valid_B;
boolean expected_GWM_ComScl_EvaluateRxPdu_DCT_EPBActvReq;
boolean expected_GWM_ComScl_IsRxPduIndication_LeftTurnSWSts;
MESGType_NMSG_LeftTurnSigCmd expected_MESG_NMSG_LeftTurnSigCmd;
boolean expected_ComScl_RawSignal_LeftTurnSWSts_RX_b;
boolean expected_GWM_ComScl_IsRxPduIndication_RightTurnSWSts;
MESGType_NMSG_RightTurnSigCmd expected_MESG_NMSG_RightTurnSigCmd;
boolean expected_ComScl_RawSignal_RightTurnSWSts_RX_b;
boolean expected_GWM_ComScl_IsRxPduIndication_CruiseCtrlSts;
uint8 expected_ComScl_RawSignal_CruiseCtrlSts_RX_u8;
MESGType_NMSG_CruiseControl_Active expected_MESG_NMSG_CruiseControl_Active;
boolean expected_GWM_ComScl_IsRxPduIndication_SAS;
uint16 expected_ComScl_RawSignal_SteerWheelSpd_RX_u16;
boolean expected_ComScl_RawSignal_SteerWheelSpdSign_RX_b;
MESGType_NMSG_SteeringWheeSpeed expected_MESG_NMSG_SteeringWheeSpeed;
boolean expected_GWM_ComScl_EvaluateRxPdu_SAS;
typedef struct expected_GWM_NET_SCL_Rx_VAF_av_struct { BOOL ref_g_DriverDoorSts_B; BOOL ref_g_DriverSBR_B; BOOL ref_g_EPBActvReqVld_B; } expected_GWM_NET_SCL_Rx_VAF_av_struct;
expected_GWM_NET_SCL_Rx_VAF_av_struct expected_av_GWM_NET_SCL_Rx_VAF;

/* This function initialises global data to default values. This function       */
/* is called by every test case so must not contain test case specific settings */
static void initialise_global_data(){
    INITIALISE(ComScl_RxPduFlags_au8);
    INITIALISE(ComScl_RawSignal_DriverDoorSts_RX_b);
    INITIALISE(ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverDoorSts_B));
    INITIALISE(GWM_ComScl_IsRxPduIndication_DriverSeatBelt);
    INITIALISE(ComScl_RawSignal_DriverSBR_RX_b);
    INITIALISE(ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverSBR_B));
    INITIALISE(MESG_NMSG_DriverSeatBeltLatched_B);
    INITIALISE(MESG_NMSG_DriverPresent_B);
        INITIALISE(GWM_ComScl_IsRxPduIndication_ReverseGear);
    INITIALISE(ComScl_RawSignal_ReversGearSts_RX_u8);
    INITIALISE(MESG_NMSG_ReverseGearSwitch_B);
    INITIALISE(GWM_ComScl_EvaluateRxPdu_ReverseGear);
        INITIALISE(GWM_ComScl_IsRxPduIndication_GearInNeutralSts);
    INITIALISE(ComScl_RawSignal_NeutralSts_RX_u8);
    INITIALISE(MESG_NMSG_NeutralGear_B);
    INITIALISE(GWM_ComScl_EvaluateRxPdu_GearInNeutralSts);
        INITIALISE(GWM_ComScl_IsRxPduIndication_EMotor_Ready);
    INITIALISE(ComScl_RawSignal_TM_OperMod_RX_u8);
    INITIALISE(MESG_NMSG_EMotor_Ready_B);
    INITIALISE(GWM_ComScl_EvaluateRxPdu_EMotor_Ready);
            INITIALISE(GWM_ComScl_IsRxPduIndication_VehTotDistance);
    INITIALISE(ComScl_RawSignal_VehTotDistance_RX_u32);
    INITIALISE(MESG_NMSG_VehTotDistance_ST);
    INITIALISE(GWM_ComScl_EvaluateRxPdu_VehTotDistance);
            INITIALISE(GWM_ComScl_IsRxPduIndication_SoakTime);
    INITIALISE(ComScl_RawSignal_VehicleSoakTime_RX_u16);
    INITIALISE(MESG_NMSG_tStandMinutes_ST);
    INITIALISE(GWM_ComScl_EvaluateRxPdu_SoakTime);
        INITIALISE(GWM_ComScl_IsRxPduIndication_StartStopSts);
    INITIALISE(ComScl_RawSignal_Start_Stop_Sts_G_RX_u8);
    INITIALISE(MESG_NMSG_StartStop_Active_B);
    INITIALISE(GWM_ComScl_IsRxPduIndication_EngState);
    INITIALISE(ComScl_RawSignal_EngState_RX_u8);
    INITIALISE(MESG_NMSG_EngineCranking_N);
    INITIALISE(GWM_ComScl_EvaluateRxPdu_EngState);
    INITIALISE(GWM_ComScl_IsRxPduIndication_SystemPowerMode);
    INITIALISE(ComScl_RawSignal_SystemPowerMode_RX_u8);
    INITIALISE(ComScl_RawSignal_SystemPowerModeValid_RX_b);
    INITIALISE(GWM_ComScl_IsRxPduIndication_SystemOperatingMode);
    INITIALISE(ComScl_RawSignal_SystemOperatingMode_RX_u8);
    INITIALISE(MESG_NMSG_BCM_ReqATMMode_UB);
    INITIALISE(GWM_ComScl_IsRxPduIndication_ESPFuncOffSwSts);
    INITIALISE(ComScl_RawSignal_HUT_ESPFuncOffSwSts_RX_b);
    INITIALISE(MESG_NMSG_Pata_CAN_N);
    INITIALISE(GWM_ComScl_IsRxPduIndication_EPBActvReqVld);
    INITIALISE(ComScl_RawSignal_VCU_EPBActvReqVld_RX_b);
    INITIALISE(ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_EPBActvReqVld_B));
    INITIALISE(MESG_NMSG_VCU_EPBActvReqVld_B);
        INITIALISE(GWM_ComScl_IsRxPduIndication_EPBActvReq);
    INITIALISE(ComScl_RawSignal_VCU_EPBActvReq_RX_b);
    INITIALISE(MESG_NMSG_VCU_EPBActvReq_B);
    INITIALISE(GWM_ComScl_EvaluateRxPdu_EPBActvReq);
    INITIALISE(GWM_ComScl_EvaluateRxPdu_EPBActvReqVld);
                INITIALISE(GWM_ComScl_IsRxPduIndication_AmbientTemp_IC);
    INITIALISE(ComScl_RawSignal_ACAmbtTemp_RX_u8);
    INITIALISE(GWM_ComScl_IsRxPduTimeoutError_AmbientTemp_IC);
    INITIALISE(GWM_ComScl_IsRxPduDataCorruptError_AmbientTemp_IC);
    INITIALISE(MESG_NMSG_Tambient_ST);
    INITIALISE(GWM_ComScl_EvaluateRxPdu_AmbientTemp_IC);
        INITIALISE(GWM_ComScl_IsRxPduIndication_ParkBrakeSts);
    INITIALISE(ComScl_RawSignal_ParkBrakeSts_RX_u8);
    INITIALISE(MESG_NMSG_Has_B);
    INITIALISE(GWM_ComScl_EvaluateRxPdu_ParkBrakeSts);
    INITIALISE(GWM_ComScl_IsRxPduIndication_TCU_ESP_DriverIntervention);
    INITIALISE(ComScl_RawSignal_TCU_ESP_DriverIntervention_RX_b);
    INITIALISE(MESG_NMSG_TCU_DriverIntervention_B);
    INITIALISE(GWM_ComScl_IsRxPduIndication_TABSwtReq);
    INITIALISE(ComScl_RawSignal_TABSwtReq_RX_b);
    INITIALISE(MESG_NMSG_TABSwtReq_B);
    INITIALISE(GWM_ComScl_IsRxPduIndication_AccPedalOverride);
    INITIALISE(ComScl_RawSignal_AccPedalOverride_RX_b);
    INITIALISE(MESG_NMSG_AccPedalOverride_B);
        INITIALISE(GWM_ComScl_IsRxPduIndication_ECM_interfaceAPS);
    INITIALISE(ComScl_RawSignal_ECM_interfaceAPS_RX_b);
    INITIALISE(GWM_ComScl_EvaluateRxPdu_ECM_interfaceAPS);
    INITIALISE(GWM_ComScl_IsRxPduIndication_DCT_EPBActvReq);
    INITIALISE(ComScl_RawSignal_DCT_EPBActvReq_RX_b);
    INITIALISE(MESG_NMSG_ApbCtrl_AutoapplyFromDCT_B);
    INITIALISE(MESG_NMSG_ApbCtrl_AutoapplyFromDCT_Valid_B);
    INITIALISE(GWM_ComScl_EvaluateRxPdu_DCT_EPBActvReq);
    INITIALISE(GWM_ComScl_IsRxPduIndication_LeftTurnSWSts);
    INITIALISE(MESG_NMSG_LeftTurnSigCmd);
    INITIALISE(ComScl_RawSignal_LeftTurnSWSts_RX_b);
    INITIALISE(GWM_ComScl_IsRxPduIndication_RightTurnSWSts);
    INITIALISE(MESG_NMSG_RightTurnSigCmd);
    INITIALISE(ComScl_RawSignal_RightTurnSWSts_RX_b);
    INITIALISE(GWM_ComScl_IsRxPduIndication_CruiseCtrlSts);
    INITIALISE(ComScl_RawSignal_CruiseCtrlSts_RX_u8);
    INITIALISE(MESG_NMSG_CruiseControl_Active);
        INITIALISE(GWM_ComScl_IsRxPduIndication_SAS);
    INITIALISE(ComScl_RawSignal_SteerWheelSpd_RX_u16);
    INITIALISE(ComScl_RawSignal_SteerWheelSpdSign_RX_b);
    INITIALISE(MESG_NMSG_SteeringWheeSpeed);
    INITIALISE(GWM_ComScl_EvaluateRxPdu_SAS);
}

/* This function copies the global data settings into expected variables for */
/* use in check_global_data(). It is called by every test case so must not   */
/* contain test case specific settings.                                      */
static void initialise_expected_global_data(){
    COPY_TO_EXPECTED(ComScl_RxPduFlags_au8, expected_ComScl_RxPduFlags_au8);
    COPY_TO_EXPECTED(ComScl_RawSignal_DriverDoorSts_RX_b, expected_ComScl_RawSignal_DriverDoorSts_RX_b);
    COPY_TO_EXPECTED(ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverDoorSts_B), ACCESS_EXPECTED_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverDoorSts_B));
    COPY_TO_EXPECTED(GWM_ComScl_IsRxPduIndication_DriverSeatBelt, expected_GWM_ComScl_IsRxPduIndication_DriverSeatBelt);
    COPY_TO_EXPECTED(ComScl_RawSignal_DriverSBR_RX_b, expected_ComScl_RawSignal_DriverSBR_RX_b);
    COPY_TO_EXPECTED(ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverSBR_B), ACCESS_EXPECTED_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverSBR_B));
    COPY_TO_EXPECTED(MESG_NMSG_DriverSeatBeltLatched_B, expected_MESG_NMSG_DriverSeatBeltLatched_B);
    COPY_TO_EXPECTED(MESG_NMSG_DriverPresent_B, expected_MESG_NMSG_DriverPresent_B);
    COPY_TO_EXPECTED(GWM_ComScl_IsRxPduIndication_ReverseGear, expected_GWM_ComScl_IsRxPduIndication_ReverseGear);
    COPY_TO_EXPECTED(ComScl_RawSignal_ReversGearSts_RX_u8, expected_ComScl_RawSignal_ReversGearSts_RX_u8);
    COPY_TO_EXPECTED(MESG_NMSG_ReverseGearSwitch_B, expected_MESG_NMSG_ReverseGearSwitch_B);
    COPY_TO_EXPECTED(GWM_ComScl_EvaluateRxPdu_ReverseGear, expected_GWM_ComScl_EvaluateRxPdu_ReverseGear);
    COPY_TO_EXPECTED(GWM_ComScl_IsRxPduIndication_GearInNeutralSts, expected_GWM_ComScl_IsRxPduIndication_GearInNeutralSts);
    COPY_TO_EXPECTED(ComScl_RawSignal_NeutralSts_RX_u8, expected_ComScl_RawSignal_NeutralSts_RX_u8);
    COPY_TO_EXPECTED(MESG_NMSG_NeutralGear_B, expected_MESG_NMSG_NeutralGear_B);
    COPY_TO_EXPECTED(GWM_ComScl_EvaluateRxPdu_GearInNeutralSts, expected_GWM_ComScl_EvaluateRxPdu_GearInNeutralSts);
    COPY_TO_EXPECTED(GWM_ComScl_IsRxPduIndication_EMotor_Ready, expected_GWM_ComScl_IsRxPduIndication_EMotor_Ready);
    COPY_TO_EXPECTED(ComScl_RawSignal_TM_OperMod_RX_u8, expected_ComScl_RawSignal_TM_OperMod_RX_u8);
    COPY_TO_EXPECTED(MESG_NMSG_EMotor_Ready_B, expected_MESG_NMSG_EMotor_Ready_B);
    COPY_TO_EXPECTED(GWM_ComScl_EvaluateRxPdu_EMotor_Ready, expected_GWM_ComScl_EvaluateRxPdu_EMotor_Ready);
    COPY_TO_EXPECTED(GWM_ComScl_IsRxPduIndication_VehTotDistance, expected_GWM_ComScl_IsRxPduIndication_VehTotDistance);
    COPY_TO_EXPECTED(ComScl_RawSignal_VehTotDistance_RX_u32, expected_ComScl_RawSignal_VehTotDistance_RX_u32);
    COPY_TO_EXPECTED(MESG_NMSG_VehTotDistance_ST, expected_MESG_NMSG_VehTotDistance_ST);
    COPY_TO_EXPECTED(GWM_ComScl_EvaluateRxPdu_VehTotDistance, expected_GWM_ComScl_EvaluateRxPdu_VehTotDistance);
    COPY_TO_EXPECTED(GWM_ComScl_IsRxPduIndication_SoakTime, expected_GWM_ComScl_IsRxPduIndication_SoakTime);
    COPY_TO_EXPECTED(ComScl_RawSignal_VehicleSoakTime_RX_u16, expected_ComScl_RawSignal_VehicleSoakTime_RX_u16);
    COPY_TO_EXPECTED(MESG_NMSG_tStandMinutes_ST, expected_MESG_NMSG_tStandMinutes_ST);
    COPY_TO_EXPECTED(GWM_ComScl_EvaluateRxPdu_SoakTime, expected_GWM_ComScl_EvaluateRxPdu_SoakTime);
    COPY_TO_EXPECTED(GWM_ComScl_IsRxPduIndication_StartStopSts, expected_GWM_ComScl_IsRxPduIndication_StartStopSts);
    COPY_TO_EXPECTED(ComScl_RawSignal_Start_Stop_Sts_G_RX_u8, expected_ComScl_RawSignal_Start_Stop_Sts_G_RX_u8);
    COPY_TO_EXPECTED(MESG_NMSG_StartStop_Active_B, expected_MESG_NMSG_StartStop_Active_B);
    COPY_TO_EXPECTED(GWM_ComScl_IsRxPduIndication_EngState, expected_GWM_ComScl_IsRxPduIndication_EngState);
    COPY_TO_EXPECTED(ComScl_RawSignal_EngState_RX_u8, expected_ComScl_RawSignal_EngState_RX_u8);
    COPY_TO_EXPECTED(MESG_NMSG_EngineCranking_N, expected_MESG_NMSG_EngineCranking_N);
    COPY_TO_EXPECTED(GWM_ComScl_EvaluateRxPdu_EngState, expected_GWM_ComScl_EvaluateRxPdu_EngState);
    COPY_TO_EXPECTED(GWM_ComScl_IsRxPduIndication_SystemPowerMode, expected_GWM_ComScl_IsRxPduIndication_SystemPowerMode);
    COPY_TO_EXPECTED(ComScl_RawSignal_SystemPowerMode_RX_u8, expected_ComScl_RawSignal_SystemPowerMode_RX_u8);
    COPY_TO_EXPECTED(ComScl_RawSignal_SystemPowerModeValid_RX_b, expected_ComScl_RawSignal_SystemPowerModeValid_RX_b);
    COPY_TO_EXPECTED(GWM_ComScl_IsRxPduIndication_SystemOperatingMode, expected_GWM_ComScl_IsRxPduIndication_SystemOperatingMode);
    COPY_TO_EXPECTED(ComScl_RawSignal_SystemOperatingMode_RX_u8, expected_ComScl_RawSignal_SystemOperatingMode_RX_u8);
    COPY_TO_EXPECTED(MESG_NMSG_BCM_ReqATMMode_UB, expected_MESG_NMSG_BCM_ReqATMMode_UB);
    COPY_TO_EXPECTED(GWM_ComScl_IsRxPduIndication_ESPFuncOffSwSts, expected_GWM_ComScl_IsRxPduIndication_ESPFuncOffSwSts);
    COPY_TO_EXPECTED(ComScl_RawSignal_HUT_ESPFuncOffSwSts_RX_b, expected_ComScl_RawSignal_HUT_ESPFuncOffSwSts_RX_b);
    COPY_TO_EXPECTED(MESG_NMSG_Pata_CAN_N, expected_MESG_NMSG_Pata_CAN_N);
    COPY_TO_EXPECTED(GWM_ComScl_IsRxPduIndication_EPBActvReqVld, expected_GWM_ComScl_IsRxPduIndication_EPBActvReqVld);
    COPY_TO_EXPECTED(ComScl_RawSignal_VCU_EPBActvReqVld_RX_b, expected_ComScl_RawSignal_VCU_EPBActvReqVld_RX_b);
    COPY_TO_EXPECTED(ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_EPBActvReqVld_B), ACCESS_EXPECTED_VARIABLE(GWM_NET_SCL_Rx_VAF, g_EPBActvReqVld_B));
    COPY_TO_EXPECTED(MESG_NMSG_VCU_EPBActvReqVld_B, expected_MESG_NMSG_VCU_EPBActvReqVld_B);
    COPY_TO_EXPECTED(GWM_ComScl_IsRxPduIndication_EPBActvReq, expected_GWM_ComScl_IsRxPduIndication_EPBActvReq);
    COPY_TO_EXPECTED(ComScl_RawSignal_VCU_EPBActvReq_RX_b, expected_ComScl_RawSignal_VCU_EPBActvReq_RX_b);
    COPY_TO_EXPECTED(MESG_NMSG_VCU_EPBActvReq_B, expected_MESG_NMSG_VCU_EPBActvReq_B);
    COPY_TO_EXPECTED(GWM_ComScl_EvaluateRxPdu_EPBActvReq, expected_GWM_ComScl_EvaluateRxPdu_EPBActvReq);
    COPY_TO_EXPECTED(GWM_ComScl_EvaluateRxPdu_EPBActvReqVld, expected_GWM_ComScl_EvaluateRxPdu_EPBActvReqVld);
    COPY_TO_EXPECTED(GWM_ComScl_IsRxPduIndication_AmbientTemp_IC, expected_GWM_ComScl_IsRxPduIndication_AmbientTemp_IC);
    COPY_TO_EXPECTED(ComScl_RawSignal_ACAmbtTemp_RX_u8, expected_ComScl_RawSignal_ACAmbtTemp_RX_u8);
    COPY_TO_EXPECTED(GWM_ComScl_IsRxPduTimeoutError_AmbientTemp_IC, expected_GWM_ComScl_IsRxPduTimeoutError_AmbientTemp_IC);
    COPY_TO_EXPECTED(GWM_ComScl_IsRxPduDataCorruptError_AmbientTemp_IC, expected_GWM_ComScl_IsRxPduDataCorruptError_AmbientTemp_IC);
    COPY_TO_EXPECTED(MESG_NMSG_Tambient_ST, expected_MESG_NMSG_Tambient_ST);
    COPY_TO_EXPECTED(GWM_ComScl_EvaluateRxPdu_AmbientTemp_IC, expected_GWM_ComScl_EvaluateRxPdu_AmbientTemp_IC);
    COPY_TO_EXPECTED(GWM_ComScl_IsRxPduIndication_ParkBrakeSts, expected_GWM_ComScl_IsRxPduIndication_ParkBrakeSts);
    COPY_TO_EXPECTED(ComScl_RawSignal_ParkBrakeSts_RX_u8, expected_ComScl_RawSignal_ParkBrakeSts_RX_u8);
    COPY_TO_EXPECTED(MESG_NMSG_Has_B, expected_MESG_NMSG_Has_B);
    COPY_TO_EXPECTED(GWM_ComScl_EvaluateRxPdu_ParkBrakeSts, expected_GWM_ComScl_EvaluateRxPdu_ParkBrakeSts);
    COPY_TO_EXPECTED(GWM_ComScl_IsRxPduIndication_TCU_ESP_DriverIntervention, expected_GWM_ComScl_IsRxPduIndication_TCU_ESP_DriverIntervention);
    COPY_TO_EXPECTED(ComScl_RawSignal_TCU_ESP_DriverIntervention_RX_b, expected_ComScl_RawSignal_TCU_ESP_DriverIntervention_RX_b);
    COPY_TO_EXPECTED(MESG_NMSG_TCU_DriverIntervention_B, expected_MESG_NMSG_TCU_DriverIntervention_B);
    COPY_TO_EXPECTED(GWM_ComScl_IsRxPduIndication_TABSwtReq, expected_GWM_ComScl_IsRxPduIndication_TABSwtReq);
    COPY_TO_EXPECTED(ComScl_RawSignal_TABSwtReq_RX_b, expected_ComScl_RawSignal_TABSwtReq_RX_b);
    COPY_TO_EXPECTED(MESG_NMSG_TABSwtReq_B, expected_MESG_NMSG_TABSwtReq_B);
    COPY_TO_EXPECTED(GWM_ComScl_IsRxPduIndication_AccPedalOverride, expected_GWM_ComScl_IsRxPduIndication_AccPedalOverride);
    COPY_TO_EXPECTED(ComScl_RawSignal_AccPedalOverride_RX_b, expected_ComScl_RawSignal_AccPedalOverride_RX_b);
    COPY_TO_EXPECTED(MESG_NMSG_AccPedalOverride_B, expected_MESG_NMSG_AccPedalOverride_B);
    COPY_TO_EXPECTED(GWM_ComScl_IsRxPduIndication_ECM_interfaceAPS, expected_GWM_ComScl_IsRxPduIndication_ECM_interfaceAPS);
    COPY_TO_EXPECTED(ComScl_RawSignal_ECM_interfaceAPS_RX_b, expected_ComScl_RawSignal_ECM_interfaceAPS_RX_b);
    COPY_TO_EXPECTED(GWM_ComScl_EvaluateRxPdu_ECM_interfaceAPS, expected_GWM_ComScl_EvaluateRxPdu_ECM_interfaceAPS);
    COPY_TO_EXPECTED(GWM_ComScl_IsRxPduIndication_DCT_EPBActvReq, expected_GWM_ComScl_IsRxPduIndication_DCT_EPBActvReq);
    COPY_TO_EXPECTED(ComScl_RawSignal_DCT_EPBActvReq_RX_b, expected_ComScl_RawSignal_DCT_EPBActvReq_RX_b);
    COPY_TO_EXPECTED(MESG_NMSG_ApbCtrl_AutoapplyFromDCT_B, expected_MESG_NMSG_ApbCtrl_AutoapplyFromDCT_B);
    COPY_TO_EXPECTED(MESG_NMSG_ApbCtrl_AutoapplyFromDCT_Valid_B, expected_MESG_NMSG_ApbCtrl_AutoapplyFromDCT_Valid_B);
    COPY_TO_EXPECTED(GWM_ComScl_EvaluateRxPdu_DCT_EPBActvReq, expected_GWM_ComScl_EvaluateRxPdu_DCT_EPBActvReq);
    COPY_TO_EXPECTED(GWM_ComScl_IsRxPduIndication_LeftTurnSWSts, expected_GWM_ComScl_IsRxPduIndication_LeftTurnSWSts);
    COPY_TO_EXPECTED(MESG_NMSG_LeftTurnSigCmd, expected_MESG_NMSG_LeftTurnSigCmd);
    COPY_TO_EXPECTED(ComScl_RawSignal_LeftTurnSWSts_RX_b, expected_ComScl_RawSignal_LeftTurnSWSts_RX_b);
    COPY_TO_EXPECTED(GWM_ComScl_IsRxPduIndication_RightTurnSWSts, expected_GWM_ComScl_IsRxPduIndication_RightTurnSWSts);
    COPY_TO_EXPECTED(MESG_NMSG_RightTurnSigCmd, expected_MESG_NMSG_RightTurnSigCmd);
    COPY_TO_EXPECTED(ComScl_RawSignal_RightTurnSWSts_RX_b, expected_ComScl_RawSignal_RightTurnSWSts_RX_b);
    COPY_TO_EXPECTED(GWM_ComScl_IsRxPduIndication_CruiseCtrlSts, expected_GWM_ComScl_IsRxPduIndication_CruiseCtrlSts);
    COPY_TO_EXPECTED(ComScl_RawSignal_CruiseCtrlSts_RX_u8, expected_ComScl_RawSignal_CruiseCtrlSts_RX_u8);
    COPY_TO_EXPECTED(MESG_NMSG_CruiseControl_Active, expected_MESG_NMSG_CruiseControl_Active);
    COPY_TO_EXPECTED(GWM_ComScl_IsRxPduIndication_SAS, expected_GWM_ComScl_IsRxPduIndication_SAS);
    COPY_TO_EXPECTED(ComScl_RawSignal_SteerWheelSpd_RX_u16, expected_ComScl_RawSignal_SteerWheelSpd_RX_u16);
    COPY_TO_EXPECTED(ComScl_RawSignal_SteerWheelSpdSign_RX_b, expected_ComScl_RawSignal_SteerWheelSpdSign_RX_b);
    COPY_TO_EXPECTED(MESG_NMSG_SteeringWheeSpeed, expected_MESG_NMSG_SteeringWheeSpeed);
    COPY_TO_EXPECTED(GWM_ComScl_EvaluateRxPdu_SAS, expected_GWM_ComScl_EvaluateRxPdu_SAS);
}

/* This function checks global data against the expected values. */
static void check_global_data(){
    CHECK_MEMORY("ComScl_RxPduFlags_au8", ComScl_RxPduFlags_au8, expected_ComScl_RxPduFlags_au8, sizeof(expected_ComScl_RxPduFlags_au8));
    CHECK_U_CHAR(ComScl_RawSignal_DriverDoorSts_RX_b, expected_ComScl_RawSignal_DriverDoorSts_RX_b);
    CHECK_U_CHAR(ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverDoorSts_B), ACCESS_EXPECTED_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverDoorSts_B));
    CHECK_U_CHAR(GWM_ComScl_IsRxPduIndication_DriverSeatBelt, expected_GWM_ComScl_IsRxPduIndication_DriverSeatBelt);
    CHECK_U_CHAR(ComScl_RawSignal_DriverSBR_RX_b, expected_ComScl_RawSignal_DriverSBR_RX_b);
    CHECK_U_CHAR(ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverSBR_B), ACCESS_EXPECTED_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverSBR_B));
    CHECK_U_CHAR(MESG_NMSG_DriverSeatBeltLatched_B, expected_MESG_NMSG_DriverSeatBeltLatched_B);
    CHECK_U_CHAR(MESG_NMSG_DriverPresent_B, expected_MESG_NMSG_DriverPresent_B);
    CHECK_U_CHAR(GWM_ComScl_IsRxPduIndication_ReverseGear, expected_GWM_ComScl_IsRxPduIndication_ReverseGear);
    CHECK_U_CHAR(ComScl_RawSignal_ReversGearSts_RX_u8, expected_ComScl_RawSignal_ReversGearSts_RX_u8);
    CHECK_U_CHAR(MESG_NMSG_ReverseGearSwitch_B, expected_MESG_NMSG_ReverseGearSwitch_B);
    CHECK_U_CHAR(GWM_ComScl_EvaluateRxPdu_ReverseGear, expected_GWM_ComScl_EvaluateRxPdu_ReverseGear);
    CHECK_U_CHAR(GWM_ComScl_IsRxPduIndication_GearInNeutralSts, expected_GWM_ComScl_IsRxPduIndication_GearInNeutralSts);
    CHECK_U_CHAR(ComScl_RawSignal_NeutralSts_RX_u8, expected_ComScl_RawSignal_NeutralSts_RX_u8);
    CHECK_U_CHAR(MESG_NMSG_NeutralGear_B, expected_MESG_NMSG_NeutralGear_B);
    CHECK_U_CHAR(GWM_ComScl_EvaluateRxPdu_GearInNeutralSts, expected_GWM_ComScl_EvaluateRxPdu_GearInNeutralSts);
    CHECK_U_CHAR(GWM_ComScl_IsRxPduIndication_EMotor_Ready, expected_GWM_ComScl_IsRxPduIndication_EMotor_Ready);
    CHECK_U_CHAR(ComScl_RawSignal_TM_OperMod_RX_u8, expected_ComScl_RawSignal_TM_OperMod_RX_u8);
    CHECK_U_CHAR(MESG_NMSG_EMotor_Ready_B, expected_MESG_NMSG_EMotor_Ready_B);
    CHECK_U_CHAR(GWM_ComScl_EvaluateRxPdu_EMotor_Ready, expected_GWM_ComScl_EvaluateRxPdu_EMotor_Ready);
    CHECK_U_CHAR(GWM_ComScl_IsRxPduIndication_VehTotDistance, expected_GWM_ComScl_IsRxPduIndication_VehTotDistance);
    CHECK_U_INT(ComScl_RawSignal_VehTotDistance_RX_u32, expected_ComScl_RawSignal_VehTotDistance_RX_u32);
    CHECK_MEMORY("MESG_NMSG_VehTotDistance_ST", &MESG_NMSG_VehTotDistance_ST, &expected_MESG_NMSG_VehTotDistance_ST, sizeof(expected_MESG_NMSG_VehTotDistance_ST));
    CHECK_U_CHAR(GWM_ComScl_EvaluateRxPdu_VehTotDistance, expected_GWM_ComScl_EvaluateRxPdu_VehTotDistance);
    CHECK_U_CHAR(GWM_ComScl_IsRxPduIndication_SoakTime, expected_GWM_ComScl_IsRxPduIndication_SoakTime);
    CHECK_U_INT(ComScl_RawSignal_VehicleSoakTime_RX_u16, expected_ComScl_RawSignal_VehicleSoakTime_RX_u16);
    CHECK_MEMORY("MESG_NMSG_tStandMinutes_ST", &MESG_NMSG_tStandMinutes_ST, &expected_MESG_NMSG_tStandMinutes_ST, sizeof(expected_MESG_NMSG_tStandMinutes_ST));
    CHECK_U_CHAR(GWM_ComScl_EvaluateRxPdu_SoakTime, expected_GWM_ComScl_EvaluateRxPdu_SoakTime);
    CHECK_U_CHAR(GWM_ComScl_IsRxPduIndication_StartStopSts, expected_GWM_ComScl_IsRxPduIndication_StartStopSts);
    CHECK_U_CHAR(ComScl_RawSignal_Start_Stop_Sts_G_RX_u8, expected_ComScl_RawSignal_Start_Stop_Sts_G_RX_u8);
    CHECK_U_CHAR(MESG_NMSG_StartStop_Active_B, expected_MESG_NMSG_StartStop_Active_B);
    CHECK_U_CHAR(GWM_ComScl_IsRxPduIndication_EngState, expected_GWM_ComScl_IsRxPduIndication_EngState);
    CHECK_U_CHAR(ComScl_RawSignal_EngState_RX_u8, expected_ComScl_RawSignal_EngState_RX_u8);
    CHECK_U_INT(MESG_NMSG_EngineCranking_N, expected_MESG_NMSG_EngineCranking_N);
    CHECK_U_CHAR(GWM_ComScl_EvaluateRxPdu_EngState, expected_GWM_ComScl_EvaluateRxPdu_EngState);
    CHECK_U_CHAR(GWM_ComScl_IsRxPduIndication_SystemPowerMode, expected_GWM_ComScl_IsRxPduIndication_SystemPowerMode);
    CHECK_U_CHAR(ComScl_RawSignal_SystemPowerMode_RX_u8, expected_ComScl_RawSignal_SystemPowerMode_RX_u8);
    CHECK_U_CHAR(ComScl_RawSignal_SystemPowerModeValid_RX_b, expected_ComScl_RawSignal_SystemPowerModeValid_RX_b);
    CHECK_U_CHAR(GWM_ComScl_IsRxPduIndication_SystemOperatingMode, expected_GWM_ComScl_IsRxPduIndication_SystemOperatingMode);
    CHECK_U_CHAR(ComScl_RawSignal_SystemOperatingMode_RX_u8, expected_ComScl_RawSignal_SystemOperatingMode_RX_u8);
    CHECK_U_CHAR(MESG_NMSG_BCM_ReqATMMode_UB, expected_MESG_NMSG_BCM_ReqATMMode_UB);
    CHECK_U_CHAR(GWM_ComScl_IsRxPduIndication_ESPFuncOffSwSts, expected_GWM_ComScl_IsRxPduIndication_ESPFuncOffSwSts);
    CHECK_U_CHAR(ComScl_RawSignal_HUT_ESPFuncOffSwSts_RX_b, expected_ComScl_RawSignal_HUT_ESPFuncOffSwSts_RX_b);
    CHECK_U_INT(MESG_NMSG_Pata_CAN_N, expected_MESG_NMSG_Pata_CAN_N);
    CHECK_U_CHAR(GWM_ComScl_IsRxPduIndication_EPBActvReqVld, expected_GWM_ComScl_IsRxPduIndication_EPBActvReqVld);
    CHECK_U_CHAR(ComScl_RawSignal_VCU_EPBActvReqVld_RX_b, expected_ComScl_RawSignal_VCU_EPBActvReqVld_RX_b);
    CHECK_U_CHAR(ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_EPBActvReqVld_B), ACCESS_EXPECTED_VARIABLE(GWM_NET_SCL_Rx_VAF, g_EPBActvReqVld_B));
    CHECK_U_CHAR(MESG_NMSG_VCU_EPBActvReqVld_B, expected_MESG_NMSG_VCU_EPBActvReqVld_B);
    CHECK_U_CHAR(GWM_ComScl_IsRxPduIndication_EPBActvReq, expected_GWM_ComScl_IsRxPduIndication_EPBActvReq);
    CHECK_U_CHAR(ComScl_RawSignal_VCU_EPBActvReq_RX_b, expected_ComScl_RawSignal_VCU_EPBActvReq_RX_b);
    CHECK_U_CHAR(MESG_NMSG_VCU_EPBActvReq_B, expected_MESG_NMSG_VCU_EPBActvReq_B);
    CHECK_U_CHAR(GWM_ComScl_EvaluateRxPdu_EPBActvReq, expected_GWM_ComScl_EvaluateRxPdu_EPBActvReq);
    CHECK_U_CHAR(GWM_ComScl_EvaluateRxPdu_EPBActvReqVld, expected_GWM_ComScl_EvaluateRxPdu_EPBActvReqVld);
    CHECK_U_CHAR(GWM_ComScl_IsRxPduIndication_AmbientTemp_IC, expected_GWM_ComScl_IsRxPduIndication_AmbientTemp_IC);
    CHECK_U_CHAR(ComScl_RawSignal_ACAmbtTemp_RX_u8, expected_ComScl_RawSignal_ACAmbtTemp_RX_u8);
    CHECK_U_CHAR(GWM_ComScl_IsRxPduTimeoutError_AmbientTemp_IC, expected_GWM_ComScl_IsRxPduTimeoutError_AmbientTemp_IC);
    CHECK_U_CHAR(GWM_ComScl_IsRxPduDataCorruptError_AmbientTemp_IC, expected_GWM_ComScl_IsRxPduDataCorruptError_AmbientTemp_IC);
    CHECK_MEMORY("MESG_NMSG_Tambient_ST", &MESG_NMSG_Tambient_ST, &expected_MESG_NMSG_Tambient_ST, sizeof(expected_MESG_NMSG_Tambient_ST));
    CHECK_U_CHAR(GWM_ComScl_EvaluateRxPdu_AmbientTemp_IC, expected_GWM_ComScl_EvaluateRxPdu_AmbientTemp_IC);
    CHECK_U_CHAR(GWM_ComScl_IsRxPduIndication_ParkBrakeSts, expected_GWM_ComScl_IsRxPduIndication_ParkBrakeSts);
    CHECK_U_CHAR(ComScl_RawSignal_ParkBrakeSts_RX_u8, expected_ComScl_RawSignal_ParkBrakeSts_RX_u8);
    CHECK_U_CHAR(MESG_NMSG_Has_B, expected_MESG_NMSG_Has_B);
    CHECK_U_CHAR(GWM_ComScl_EvaluateRxPdu_ParkBrakeSts, expected_GWM_ComScl_EvaluateRxPdu_ParkBrakeSts);
    CHECK_U_CHAR(GWM_ComScl_IsRxPduIndication_TCU_ESP_DriverIntervention, expected_GWM_ComScl_IsRxPduIndication_TCU_ESP_DriverIntervention);
    CHECK_U_CHAR(ComScl_RawSignal_TCU_ESP_DriverIntervention_RX_b, expected_ComScl_RawSignal_TCU_ESP_DriverIntervention_RX_b);
    CHECK_U_CHAR(MESG_NMSG_TCU_DriverIntervention_B, expected_MESG_NMSG_TCU_DriverIntervention_B);
    CHECK_U_CHAR(GWM_ComScl_IsRxPduIndication_TABSwtReq, expected_GWM_ComScl_IsRxPduIndication_TABSwtReq);
    CHECK_U_CHAR(ComScl_RawSignal_TABSwtReq_RX_b, expected_ComScl_RawSignal_TABSwtReq_RX_b);
    CHECK_U_CHAR(MESG_NMSG_TABSwtReq_B, expected_MESG_NMSG_TABSwtReq_B);
    CHECK_U_CHAR(GWM_ComScl_IsRxPduIndication_AccPedalOverride, expected_GWM_ComScl_IsRxPduIndication_AccPedalOverride);
    CHECK_U_CHAR(ComScl_RawSignal_AccPedalOverride_RX_b, expected_ComScl_RawSignal_AccPedalOverride_RX_b);
    CHECK_U_CHAR(MESG_NMSG_AccPedalOverride_B, expected_MESG_NMSG_AccPedalOverride_B);
    CHECK_U_CHAR(GWM_ComScl_IsRxPduIndication_ECM_interfaceAPS, expected_GWM_ComScl_IsRxPduIndication_ECM_interfaceAPS);
    CHECK_U_CHAR(ComScl_RawSignal_ECM_interfaceAPS_RX_b, expected_ComScl_RawSignal_ECM_interfaceAPS_RX_b);
    CHECK_U_CHAR(GWM_ComScl_EvaluateRxPdu_ECM_interfaceAPS, expected_GWM_ComScl_EvaluateRxPdu_ECM_interfaceAPS);
    CHECK_U_CHAR(GWM_ComScl_IsRxPduIndication_DCT_EPBActvReq, expected_GWM_ComScl_IsRxPduIndication_DCT_EPBActvReq);
    CHECK_U_CHAR(ComScl_RawSignal_DCT_EPBActvReq_RX_b, expected_ComScl_RawSignal_DCT_EPBActvReq_RX_b);
    CHECK_U_CHAR(MESG_NMSG_ApbCtrl_AutoapplyFromDCT_B, expected_MESG_NMSG_ApbCtrl_AutoapplyFromDCT_B);
    CHECK_U_CHAR(MESG_NMSG_ApbCtrl_AutoapplyFromDCT_Valid_B, expected_MESG_NMSG_ApbCtrl_AutoapplyFromDCT_Valid_B);
    CHECK_U_CHAR(GWM_ComScl_EvaluateRxPdu_DCT_EPBActvReq, expected_GWM_ComScl_EvaluateRxPdu_DCT_EPBActvReq);
    CHECK_U_CHAR(GWM_ComScl_IsRxPduIndication_LeftTurnSWSts, expected_GWM_ComScl_IsRxPduIndication_LeftTurnSWSts);
    CHECK_U_CHAR(MESG_NMSG_LeftTurnSigCmd, expected_MESG_NMSG_LeftTurnSigCmd);
    CHECK_U_CHAR(ComScl_RawSignal_LeftTurnSWSts_RX_b, expected_ComScl_RawSignal_LeftTurnSWSts_RX_b);
    CHECK_U_CHAR(GWM_ComScl_IsRxPduIndication_RightTurnSWSts, expected_GWM_ComScl_IsRxPduIndication_RightTurnSWSts);
    CHECK_U_CHAR(MESG_NMSG_RightTurnSigCmd, expected_MESG_NMSG_RightTurnSigCmd);
    CHECK_U_CHAR(ComScl_RawSignal_RightTurnSWSts_RX_b, expected_ComScl_RawSignal_RightTurnSWSts_RX_b);
    CHECK_U_CHAR(GWM_ComScl_IsRxPduIndication_CruiseCtrlSts, expected_GWM_ComScl_IsRxPduIndication_CruiseCtrlSts);
    CHECK_U_CHAR(ComScl_RawSignal_CruiseCtrlSts_RX_u8, expected_ComScl_RawSignal_CruiseCtrlSts_RX_u8);
    CHECK_U_CHAR(MESG_NMSG_CruiseControl_Active, expected_MESG_NMSG_CruiseControl_Active);
    CHECK_U_CHAR(GWM_ComScl_IsRxPduIndication_SAS, expected_GWM_ComScl_IsRxPduIndication_SAS);
    CHECK_U_INT(ComScl_RawSignal_SteerWheelSpd_RX_u16, expected_ComScl_RawSignal_SteerWheelSpd_RX_u16);
    CHECK_U_CHAR(ComScl_RawSignal_SteerWheelSpdSign_RX_b, expected_ComScl_RawSignal_SteerWheelSpdSign_RX_b);
    CHECK_S_INT(MESG_NMSG_SteeringWheeSpeed, expected_MESG_NMSG_SteeringWheeSpeed);
    CHECK_U_CHAR(GWM_ComScl_EvaluateRxPdu_SAS, expected_GWM_ComScl_EvaluateRxPdu_SAS);
}

/* Prototypes for test functions */
void run_tests();
void test_PRC_GWM_NET_SCL_Rx_VAF_V(int);
void test_PRC_GWM_NET_SCL_Rx_VAF_V_1(int);
void test_PRC_GWM_NET_SCL_Rx_VAF_V_2(int);
void test_PRC_GWM_NET_SCL_Rx_VAF_V_3(int);
void test_PRC_GWM_NET_SCL_Rx_VAF_V_4(int);
void test_PRC_GWM_NET_SCL_Rx_VAF_V_5(int);
void test_PRC_GWM_NET_SCL_Rx_VAF_V_6(int);
void test_PRC_GWM_NET_SCL_Rx_VAF_V_7(int);
void test_PRC_GWM_NET_SCL_Rx_VAF_V_8(int);
void test_PRC_GWM_NET_SCL_Rx_VAF_V_9(int);
void test_PRC_GWM_NET_SCL_Rx_VAF_V_10(int);
void test_PRC_GWM_NET_SCL_Rx_VAF_V_11(int);
void test_PRC_GWM_NET_SCL_Rx_VAF_V_12(int);
void test_PRC_GWM_NET_SCL_Rx_VAF_V_13(int);
void test_PRC_GWM_NET_SCL_Rx_VAF_V_14(int);
void test_PRC_GWM_NET_SCL_Rx_VAF_V_15(int);
void test_PRC_GWM_NET_SCL_Rx_VAF_V_16(int);

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
    OPEN_LOG("test_GWM_NET_SCL_Rx_VAF.ctr", false, 100);
    START_SCRIPT("GWM_NET_SCL_Rx_VAF", true);

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
    test_PRC_GWM_NET_SCL_Rx_VAF_V(1);
    test_PRC_GWM_NET_SCL_Rx_VAF_V_1(1);
    test_PRC_GWM_NET_SCL_Rx_VAF_V_2(1);
    test_PRC_GWM_NET_SCL_Rx_VAF_V_3(1);
    test_PRC_GWM_NET_SCL_Rx_VAF_V_4(1);
    test_PRC_GWM_NET_SCL_Rx_VAF_V_5(1);
    test_PRC_GWM_NET_SCL_Rx_VAF_V_6(1);
    test_PRC_GWM_NET_SCL_Rx_VAF_V_7(1);
    test_PRC_GWM_NET_SCL_Rx_VAF_V_8(1);
    test_PRC_GWM_NET_SCL_Rx_VAF_V_9(1);
    test_PRC_GWM_NET_SCL_Rx_VAF_V_10(1);
    test_PRC_GWM_NET_SCL_Rx_VAF_V_11(1);
    test_PRC_GWM_NET_SCL_Rx_VAF_V_12(1);
    test_PRC_GWM_NET_SCL_Rx_VAF_V_13(1);
    test_PRC_GWM_NET_SCL_Rx_VAF_V_14(1);
    test_PRC_GWM_NET_SCL_Rx_VAF_V_15(1);
    test_PRC_GWM_NET_SCL_Rx_VAF_V_16(1);

    rule_set("*", "*");
    EXPORT_COVERAGE("test_GWM_NET_SCL_Rx_VAF.cov", cppca_export_replace);
}

/*****************************************************************************/
/* Test Cases                                                                */
/*****************************************************************************/

void test_PRC_GWM_NET_SCL_Rx_VAF_V(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    GWM_ComScl_IsRxPduIndication_FLDoorSts = 1;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_MESG_NMSG_DriverSeatBeltLatched_B = 0x00 ; 
    expected_MESG_NMSG_DriverPresent_B = 0x01 ; 
    expected_MESG_NMSG_ReverseGearSwitch_B = 0x00 ; 
    expected_MESG_NMSG_NeutralGear_B = 0x00 ; 
    expected_MESG_NMSG_EMotor_Ready_B = 0x00 ; 
    expected_MESG_NMSG_StartStop_Active_B = 0x00 ; 
    expected_MESG_NMSG_EngineCranking_N = 3 ; 
    expected_MESG_NMSG_BCM_ReqATMMode_UB = 0x02 ; 
    expected_MESG_NMSG_Pata_CAN_N = 3 ; 
    expected_MESG_NMSG_VCU_EPBActvReqVld_B = 0x00 ; 
    expected_MESG_NMSG_ApbCtrl_AutoapplyFromDCT_Valid_B = 0x00 ; 
    expected_MESG_NMSG_CruiseControl_Active = 0x00 ; 
    expected_MESG_NMSG_SteeringWheeSpeed = 26624 ; 
    ACCESS_EXPECTED_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverSBR_B) = 0x00 ; 

    START_TEST("1: PRC_GWM_NET_SCL_Rx_VAF_V",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{Dem_ReportErrorStatus#default}");

            /* Call SUT */
            PRC_GWM_NET_SCL_Rx_VAF_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_PRC_GWM_NET_SCL_Rx_VAF_V_1(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    GWM_ComScl_IsRxPduIndication_FLDoorSts = 0;
    GWM_ComScl_IsRxPduIndication_DriverSeatBelt = 0;
    ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverSBR_B) = C_DriverSBR_Reminder_B;

    GWM_ComScl_IsRxPduIndication_ReverseGear   = 0;
    GWM_ComScl_EvaluateRxPdu_ReverseGear   = 0;
    GWM_ComScl_IsRxPduIndication_GearInNeutralSts   = 0;
    GWM_ComScl_EvaluateRxPdu_GearInNeutralSts   = 0;
    GWM_ComScl_IsRxPduIndication_EMotor_Ready   = 0;
    GWM_ComScl_EvaluateRxPdu_EMotor_Ready   = 0;
    GWM_ComScl_IsRxPduIndication_VehTotDistance   = 0;
    GWM_ComScl_EvaluateRxPdu_VehTotDistance   = 0;
    GWM_ComScl_IsRxPduIndication_SoakTime   = 0;
    GWM_ComScl_EvaluateRxPdu_SoakTime   = 0;
    GWM_ComScl_IsRxPduIndication_StartStopSts   = 0;
    GWM_ComScl_IsRxPduIndication_EngState   = 0;
    GWM_ComScl_EvaluateRxPdu_EngState   = 0;
    GWM_ComScl_IsRxPduIndication_SystemPowerMode   = 0;
    GWM_ComScl_IsRxPduIndication_SystemOperatingMode   = 0;
    GWM_ComScl_IsRxPduIndication_ESPFuncOffSwSts   = 0;
    GWM_ComScl_IsRxPduIndication_EPBActvReqVld   = 0;
    GWM_ComScl_IsRxPduIndication_EPBActvReq   = 0;
    GWM_ComScl_EvaluateRxPdu_EPBActvReq   = 0;
    GWM_ComScl_EvaluateRxPdu_EPBActvReqVld   = 0;
    GWM_ComScl_IsRxPduIndication_AmbientTemp_IC   = 0;
    GWM_ComScl_IsRxPduTimeoutError_AmbientTemp_IC   = 0;
    GWM_ComScl_IsRxPduDataCorruptError_AmbientTemp_IC   = 0;
    GWM_ComScl_EvaluateRxPdu_AmbientTemp_IC   = 0;
    GWM_ComScl_IsRxPduIndication_ParkBrakeSts   = 0;
    GWM_ComScl_EvaluateRxPdu_ParkBrakeSts   = 0;
    GWM_ComScl_IsRxPduIndication_TCU_ESP_DriverIntervention   = 0;
    GWM_ComScl_IsRxPduIndication_TABSwtReq   = 0;
    GWM_ComScl_IsRxPduIndication_AccPedalOverride   = 0;
    GWM_ComScl_IsRxPduIndication_ECM_interfaceAPS   = 0;
    GWM_ComScl_EvaluateRxPdu_ECM_interfaceAPS   = 0;
    GWM_ComScl_IsRxPduIndication_DCT_EPBActvReq   = 0;
    GWM_ComScl_EvaluateRxPdu_DCT_EPBActvReq   = 0;
    GWM_ComScl_IsRxPduIndication_LeftTurnSWSts   = 0;
    GWM_ComScl_IsRxPduIndication_RightTurnSWSts   = 0;
    GWM_ComScl_IsRxPduIndication_CruiseCtrlSts   = 0;
    GWM_ComScl_IsRxPduIndication_SAS   = 0;
    GWM_ComScl_EvaluateRxPdu_SAS  =0 ;

    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_MESG_NMSG_DriverPresent_B = 0x00 ; 

    START_TEST("2: PRC_GWM_NET_SCL_Rx_VAF_V_1",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{Dem_ReportErrorStatus#default}");

            /* Call SUT */
            PRC_GWM_NET_SCL_Rx_VAF_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_PRC_GWM_NET_SCL_Rx_VAF_V_2(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    GWM_ComScl_IsRxPduIndication_DriverSeatBelt = 1;
    ComScl_RawSignal_DriverSBR_RX_b = C_DriverSBR_NoReminder_B;
    ComScl_RawSignal_Start_Stop_Sts_G_RX_u8 = GWM_C_StartStopSts_StarterRestartMode_UB;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_MESG_NMSG_DriverSeatBeltLatched_B = 0x01 ; 
    expected_MESG_NMSG_DriverPresent_B = 0x01 ; 
    expected_MESG_NMSG_ReverseGearSwitch_B = 0x00 ; 
    expected_MESG_NMSG_NeutralGear_B = 0x00 ; 
    expected_MESG_NMSG_EMotor_Ready_B = 0x00 ; 
    expected_MESG_NMSG_StartStop_Active_B = 0x01 ; 
    expected_MESG_NMSG_EngineCranking_N = 3 ; 
    expected_MESG_NMSG_BCM_ReqATMMode_UB = 0x02 ; 
    expected_MESG_NMSG_Pata_CAN_N = 3 ; 
    expected_MESG_NMSG_VCU_EPBActvReqVld_B = 0x00 ; 
    expected_MESG_NMSG_ApbCtrl_AutoapplyFromDCT_Valid_B = 0x00 ; 
    expected_MESG_NMSG_CruiseControl_Active = 0x00 ; 
    expected_MESG_NMSG_SteeringWheeSpeed = 26624 ; 
    ACCESS_EXPECTED_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverSBR_B) = 0x00 ; 

    START_TEST("3: PRC_GWM_NET_SCL_Rx_VAF_V_2",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{Dem_ReportErrorStatus#default}");

            /* Call SUT */
            PRC_GWM_NET_SCL_Rx_VAF_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_PRC_GWM_NET_SCL_Rx_VAF_V_3(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    GWM_ComScl_IsRxPduIndication_DriverSeatBelt = 1;
    ComScl_RawSignal_DriverSBR_RX_b = C_DriverSBR_Reminder_B;
    ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverSBR_B) = !C_DriverSBR_Reminder_B;
    ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverDoorSts_B) = C_DriverDoorSts_Open_B;
    ComScl_RawSignal_Start_Stop_Sts_G_RX_u8 = GWM_C_StartStopSts_EngRestartMode_UB;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_MESG_NMSG_DriverSeatBeltLatched_B = 0x00 ; 
    expected_MESG_NMSG_DriverPresent_B = 0x00 ; 
    expected_MESG_NMSG_ReverseGearSwitch_B = 0x00 ; 
    expected_MESG_NMSG_NeutralGear_B = 0x00 ; 
    expected_MESG_NMSG_EMotor_Ready_B = 0x00 ; 
    expected_MESG_NMSG_StartStop_Active_B = 0x01 ; 
    expected_MESG_NMSG_EngineCranking_N = 3 ; 
    expected_MESG_NMSG_BCM_ReqATMMode_UB = 0x02 ; 
    expected_MESG_NMSG_Pata_CAN_N = 3 ; 
    expected_MESG_NMSG_VCU_EPBActvReqVld_B = 0x00 ; 
    expected_MESG_NMSG_ApbCtrl_AutoapplyFromDCT_Valid_B = 0x00 ; 
    expected_MESG_NMSG_CruiseControl_Active = 0x00 ; 
    expected_MESG_NMSG_SteeringWheeSpeed = 26624 ; 
    ACCESS_EXPECTED_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverSBR_B) = 0x01 ; 

    START_TEST("4: PRC_GWM_NET_SCL_Rx_VAF_V_3",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{Dem_ReportErrorStatus#default}");

            /* Call SUT */
            PRC_GWM_NET_SCL_Rx_VAF_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_PRC_GWM_NET_SCL_Rx_VAF_V_4(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    GWM_ComScl_IsRxPduIndication_DriverSeatBelt = 1;
    ComScl_RawSignal_DriverSBR_RX_b = C_DriverSBR_NoReminder_B;
    ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverSBR_B) = !C_DriverSBR_Reminder_B;
    ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverDoorSts_B) = C_DriverDoorSts_Open_B;
    ComScl_RawSignal_ReversGearSts_RX_u8 = C_ReverseGear_InvalidValue_UB;
    ComScl_RawSignal_Start_Stop_Sts_G_RX_u8 = GWM_C_StartStopSts_EngAutoStoppingMode_UB;

    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_MESG_NMSG_DriverSeatBeltLatched_B = 0x01 ; 
    expected_MESG_NMSG_DriverPresent_B = 0x00 ; 
    expected_MESG_NMSG_NeutralGear_B = 0x00 ; 
    expected_MESG_NMSG_EMotor_Ready_B = 0x00 ; 
    expected_MESG_NMSG_StartStop_Active_B = 0x01 ; 
    expected_MESG_NMSG_EngineCranking_N = 3 ; 
    expected_MESG_NMSG_BCM_ReqATMMode_UB = 0x02 ; 
    expected_MESG_NMSG_Pata_CAN_N = 3 ; 
    expected_MESG_NMSG_VCU_EPBActvReqVld_B = 0x00 ; 
    expected_MESG_NMSG_ApbCtrl_AutoapplyFromDCT_Valid_B = 0x00 ; 
    expected_MESG_NMSG_CruiseControl_Active = 0x00 ; 
    expected_MESG_NMSG_SteeringWheeSpeed = 26624 ; 

    START_TEST("5: PRC_GWM_NET_SCL_Rx_VAF_V_4",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{Dem_ReportErrorStatus#default}");

            /* Call SUT */
            PRC_GWM_NET_SCL_Rx_VAF_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_PRC_GWM_NET_SCL_Rx_VAF_V_5(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    GWM_ComScl_IsRxPduIndication_DriverSeatBelt = 1;
    ComScl_RawSignal_DriverSBR_RX_b = C_DriverSBR_NoReminder_B;
    ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverSBR_B) = !C_DriverSBR_Reminder_B;
    ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverDoorSts_B) = C_DriverDoorSts_Open_B;
    ComScl_RawSignal_ReversGearSts_RX_u8 = C_ReverseGear_OnValue_UB;
    ComScl_RawSignal_NeutralSts_RX_u8 = GWM_C_GearInNotAvailable_UB;
    ComScl_RawSignal_Start_Stop_Sts_G_RX_u8 = GWM_C_StartStopSts_InvalidMode_UB;
    ComScl_RawSignal_EngState_RX_u8 = GWM_C_CAN_EngState_Stopped_UB;
    ComScl_RawSignal_SystemPowerModeValid_RX_b = GWM_C_CAN_SystemPowerMode_Valid_B;
    ComScl_RawSignal_SystemPowerMode_RX_u8 = 999;
    ComScl_RawSignal_SystemOperatingMode_RX_u8 = C_SystemOperatingMode_4H_UB;
    GWM_ComScl_EvaluateRxPdu_EPBActvReq = 1;
    GWM_ComScl_EvaluateRxPdu_EPBActvReqVld = 1;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_MESG_NMSG_DriverSeatBeltLatched_B = 0x01 ; 
    expected_MESG_NMSG_DriverPresent_B = 0x00 ; 
    expected_MESG_NMSG_ReverseGearSwitch_B = 0x01 ; 
    expected_MESG_NMSG_NeutralGear_B = 0x00 ; 
    expected_MESG_NMSG_EMotor_Ready_B = 0x00 ; 
    expected_MESG_NMSG_StartStop_Active_B = 0x00 ; 
    expected_MESG_NMSG_EngineCranking_N = 0 ; 
    expected_MESG_NMSG_BCM_ReqATMMode_UB = 0x0A ; 
    expected_MESG_NMSG_Pata_CAN_N = 3 ; 
    expected_MESG_NMSG_VCU_EPBActvReqVld_B = 0x00 ; 
    expected_MESG_NMSG_ApbCtrl_AutoapplyFromDCT_Valid_B = 0x00 ; 
    expected_MESG_NMSG_CruiseControl_Active = 0x00 ; 
    expected_MESG_NMSG_SteeringWheeSpeed = 26624 ; 

    START_TEST("6: PRC_GWM_NET_SCL_Rx_VAF_V_5",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{Dem_ReportErrorStatus#default}");

            /* Call SUT */
            PRC_GWM_NET_SCL_Rx_VAF_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_PRC_GWM_NET_SCL_Rx_VAF_V_6(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    GWM_ComScl_IsRxPduIndication_DriverSeatBelt = 1;
    ComScl_RawSignal_DriverSBR_RX_b = C_DriverSBR_NoReminder_B;
    ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverSBR_B) = !C_DriverSBR_Reminder_B;
    ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverDoorSts_B) = C_DriverDoorSts_Open_B;
    ComScl_RawSignal_ReversGearSts_RX_u8 = C_ReverseGear_OnValue_UB;
    ComScl_RawSignal_NeutralSts_RX_u8 = C_GearInNeutral_UB;
    ComScl_RawSignal_TM_OperMod_RX_u8 = C_EMotor_Ready_UB;
    ComScl_RawSignal_VehTotDistanceValid_RX_b = C_VehTotDistanceQualifier_ValidValue_UB;
    ComScl_RawSignal_EngState_RX_u8 = GWM_C_CAN_EngState_Running_UB;
    ComScl_RawSignal_SystemPowerModeValid_RX_b = GWM_C_CAN_SystemPowerMode_Valid_B;
    ComScl_RawSignal_SystemPowerMode_RX_u8 = GWM_C_CAN_SystemPowerMode_CRANK_UB;
    ComScl_RawSignal_SystemOperatingMode_RX_u8 = C_SystemOperatingMode_4L_UB;
    ComScl_RawSignal_HUT_ESPFuncOffSwSts_RX_b = C_SCL_HUT_ESPFuncOffSwSts_NoActivated_UB;
    ComScl_RawSignal_VCU_EPBActvReqVld_RX_b = GWM_C_DCT_EPBActvReqQualifier_ValidValue_UB;
    ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_EPBActvReqVld_B) = GWM_C_DCT_EPBActvReqQualifier_ValidValue_UB;
    ComScl_RawSignal_VCU_EPBActvReq_RX_b = GWM_C_DCT_EPBActvReq_Request_UB;
    ACCESS_LOCAL_VARIABLE(GWM_NET_SCL_Rx_VAF, PRC_GWM_NET_SCL_Rx_VAF_V, ls_DCT_EPBActvReq_SignalFailIndication_B) = 0;
    GWM_ComScl_EvaluateRxPdu_EPBActvReq = 1;
    GWM_ComScl_EvaluateRxPdu_EPBActvReqVld = 1;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_MESG_NMSG_DriverSeatBeltLatched_B = 0x01 ; 
    expected_MESG_NMSG_DriverPresent_B = 0x00 ; 
    expected_MESG_NMSG_ReverseGearSwitch_B = 0x01 ; 
    expected_MESG_NMSG_NeutralGear_B = 0x01 ; 
    expected_MESG_NMSG_EMotor_Ready_B = 0x01 ; 
    expected_MESG_NMSG_StartStop_Active_B = 0x00 ; 
    expected_MESG_NMSG_EngineCranking_N = 2 ; 
    expected_MESG_NMSG_BCM_ReqATMMode_UB = 0x0A ; 
    expected_MESG_NMSG_Pata_CAN_N = 1 ; 
    expected_MESG_NMSG_VCU_EPBActvReqVld_B = 0x01 ; 
    expected_MESG_NMSG_VCU_EPBActvReq_B = 0x01 ; 
    expected_MESG_NMSG_ApbCtrl_AutoapplyFromDCT_Valid_B = 0x00 ; 
    expected_MESG_NMSG_CruiseControl_Active = 0x00 ; 
    expected_MESG_NMSG_SteeringWheeSpeed = 26624 ; 

    START_TEST("7: PRC_GWM_NET_SCL_Rx_VAF_V_6",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{Dem_ReportErrorStatus#default}");

            /* Call SUT */
            PRC_GWM_NET_SCL_Rx_VAF_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_PRC_GWM_NET_SCL_Rx_VAF_V_7(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    GWM_ComScl_IsRxPduIndication_DriverSeatBelt = 1;
    ComScl_RawSignal_DriverSBR_RX_b = C_DriverSBR_NoReminder_B;
    ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverSBR_B) = !C_DriverSBR_Reminder_B;
    ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverDoorSts_B) = C_DriverDoorSts_Open_B;
    ComScl_RawSignal_ReversGearSts_RX_u8 = C_ReverseGear_OnValue_UB;
    ComScl_RawSignal_NeutralSts_RX_u8 = C_GearInNeutral_UB;
    ComScl_RawSignal_TM_OperMod_RX_u8 = C_EMotor_Ready_InvalidValue_UB;
    ComScl_RawSignal_VehTotDistanceValid_RX_b = C_VehTotDistanceQualifier_ValidValue_UB;
    ComScl_RawSignal_VehicleSoakTime_RX_u16 = 0;
    ComScl_RawSignal_Start_Stop_Sts_G_RX_u8 = GWM_C_StartStopSts_NonSSMode_UB;
    ComScl_RawSignal_EngState_RX_u8 = GWM_C_CAN_EngState_Stalling_UB;

    ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_EPBActvReqVld_B) = GWM_C_DCT_EPBActvReqQualifier_ValidValue_UB;
    ComScl_RawSignal_VCU_EPBActvReq_RX_b = !GWM_C_DCT_EPBActvReq_Request_UB;
    GWM_ComScl_EvaluateRxPdu_EPBActvReq = 1;
    GWM_ComScl_EvaluateRxPdu_EPBActvReqVld = 0;
    ComScl_RawSignal_ACAmbtTemp_RX_u8 = GWM_C_EnvTemp_InvalidValue_UB;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_MESG_NMSG_DriverSeatBeltLatched_B = 0x01 ; 
    expected_MESG_NMSG_DriverPresent_B = 0x00 ; 
    expected_MESG_NMSG_ReverseGearSwitch_B = 0x01 ; 
    expected_MESG_NMSG_NeutralGear_B = 0x01 ; 
    expected_MESG_NMSG_EMotor_Ready_B = 0x00 ; 
    expected_MESG_NMSG_StartStop_Active_B = 0x00 ; 
    expected_MESG_NMSG_EngineCranking_N = 3 ; 
    expected_MESG_NMSG_BCM_ReqATMMode_UB = 0x02 ; 
    expected_MESG_NMSG_Pata_CAN_N = 3 ; 
    expected_MESG_NMSG_VCU_EPBActvReqVld_B = 0x00 ; 
    expected_MESG_NMSG_ApbCtrl_AutoapplyFromDCT_Valid_B = 0x00 ; 
    expected_MESG_NMSG_CruiseControl_Active = 0x00 ; 
    expected_MESG_NMSG_SteeringWheeSpeed = 26624 ; 
    ACCESS_EXPECTED_VARIABLE(GWM_NET_SCL_Rx_VAF, g_EPBActvReqVld_B) = 0x55 ; 

    START_TEST("8: PRC_GWM_NET_SCL_Rx_VAF_V_7",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{Dem_ReportErrorStatus#default}");

            /* Call SUT */
            PRC_GWM_NET_SCL_Rx_VAF_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_PRC_GWM_NET_SCL_Rx_VAF_V_8(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    GWM_ComScl_IsRxPduIndication_DriverSeatBelt = 1;
    ComScl_RawSignal_DriverSBR_RX_b = C_DriverSBR_NoReminder_B;
    ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverSBR_B) = !C_DriverSBR_Reminder_B;
    ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverDoorSts_B) = C_DriverDoorSts_Open_B;
    ComScl_RawSignal_ReversGearSts_RX_u8 = C_ReverseGear_OnValue_UB;
    ComScl_RawSignal_NeutralSts_RX_u8 = C_GearInNeutral_UB;
    ComScl_RawSignal_TM_OperMod_RX_u8 = C_EMotor_Ready_SpeedCtl;
    ComScl_RawSignal_VehTotDistanceValid_RX_b = C_VehTotDistanceQualifier_ValidValue_UB;
    ComScl_RawSignal_VehicleSoakTime_RX_u16 = GWM_C_SoakTime_MinValue_UW;
    ComScl_RawSignal_Start_Stop_Sts_G_RX_u8 = GWM_C_StartStopSts_EngStandByMode_UB;
    ComScl_RawSignal_EngState_RX_u8 = GWM_C_CAN_EngState_Cranking_UB;
    ComScl_RawSignal_SystemPowerModeValid_RX_b = GWM_C_CAN_SystemPowerMode_Valid_B;
    ComScl_RawSignal_SystemPowerMode_RX_u8 = GWM_C_CAN_SystemPowerMode_OFF_UB;
    ComScl_RawSignal_ACAmbtTemp_RX_u8 = GWM_C_EnvTemp_InitValue_UB;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_MESG_NMSG_DriverSeatBeltLatched_B = 0x01 ; 
    expected_MESG_NMSG_DriverPresent_B = 0x00 ; 
    expected_MESG_NMSG_ReverseGearSwitch_B = 0x01 ; 
    expected_MESG_NMSG_NeutralGear_B = 0x01 ; 
    expected_MESG_NMSG_EMotor_Ready_B = 0x01 ; 
    expected_MESG_NMSG_StartStop_Active_B = 0x00 ; 
    expected_MESG_NMSG_EngineCranking_N = 0 ; 
    expected_MESG_NMSG_BCM_ReqATMMode_UB = 0x02 ; 
    expected_MESG_NMSG_Pata_CAN_N = 3 ; 
    expected_MESG_NMSG_VCU_EPBActvReqVld_B = 0x00 ; 
    expected_MESG_NMSG_ApbCtrl_AutoapplyFromDCT_Valid_B = 0x00 ; 
    expected_MESG_NMSG_CruiseControl_Active = 0x00 ; 
    expected_MESG_NMSG_SteeringWheeSpeed = 26624 ; 

    START_TEST("9: PRC_GWM_NET_SCL_Rx_VAF_V_8",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{Dem_ReportErrorStatus#default}");

            /* Call SUT */
            PRC_GWM_NET_SCL_Rx_VAF_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_PRC_GWM_NET_SCL_Rx_VAF_V_9(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    GWM_ComScl_IsRxPduIndication_DriverSeatBelt = 1;
    ComScl_RawSignal_DriverSBR_RX_b = C_DriverSBR_NoReminder_B;
    ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverSBR_B) = !C_DriverSBR_Reminder_B;
    ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverDoorSts_B) = C_DriverDoorSts_Open_B;
    ComScl_RawSignal_ReversGearSts_RX_u8 = C_ReverseGear_OnValue_UB;
    ComScl_RawSignal_NeutralSts_RX_u8 = C_GearInNeutral_UB;
    ComScl_RawSignal_TM_OperMod_RX_u8 = C_EMotor_Ready_FailureValue_UB;
    ComScl_RawSignal_VehTotDistance_RX_u32 = C_Max_VehTotDistance_UL;
    ComScl_RawSignal_VehTotDistanceValid_RX_b = C_VehTotDistanceQualifier_ValidValue_UB;
    ComScl_RawSignal_VehicleSoakTime_RX_u16 = GWM_C_SoakTime_MinValue_UW;
    ComScl_RawSignal_Start_Stop_Sts_G_RX_u8 = GWM_C_StartStopSts_EngOperationMode_UB;
    ComScl_RawSignal_SystemPowerModeValid_RX_b = GWM_C_CAN_SystemPowerMode_Valid_B;
    ComScl_RawSignal_SystemPowerMode_RX_u8 = GWM_C_CAN_SystemPowerMode_ACC_UB;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_MESG_NMSG_DriverSeatBeltLatched_B = 0x01 ; 
    expected_MESG_NMSG_DriverPresent_B = 0x00 ; 
    expected_MESG_NMSG_ReverseGearSwitch_B = 0x01 ; 
    expected_MESG_NMSG_NeutralGear_B = 0x01 ; 
    expected_MESG_NMSG_EMotor_Ready_B = 0x00 ; 
    expected_MESG_NMSG_StartStop_Active_B = 0x00 ; 
    expected_MESG_NMSG_EngineCranking_N = 1 ; 
    expected_MESG_NMSG_BCM_ReqATMMode_UB = 0x02 ; 
    expected_MESG_NMSG_Pata_CAN_N = 3 ; 
    expected_MESG_NMSG_VCU_EPBActvReqVld_B = 0x00 ; 
    expected_MESG_NMSG_ApbCtrl_AutoapplyFromDCT_Valid_B = 0x00 ; 
    expected_MESG_NMSG_CruiseControl_Active = 0x00 ; 
    expected_MESG_NMSG_SteeringWheeSpeed = 26624 ; 

    START_TEST("10: PRC_GWM_NET_SCL_Rx_VAF_V_9",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{Dem_ReportErrorStatus#default}");

            /* Call SUT */
            PRC_GWM_NET_SCL_Rx_VAF_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_PRC_GWM_NET_SCL_Rx_VAF_V_10(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    GWM_ComScl_IsRxPduIndication_DriverSeatBelt = 1;
    ComScl_RawSignal_DriverSBR_RX_b = C_DriverSBR_NoReminder_B;
    ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverSBR_B) = !C_DriverSBR_Reminder_B;
    ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverDoorSts_B) = C_DriverDoorSts_Open_B;
    ComScl_RawSignal_ReversGearSts_RX_u8 = C_ReverseGear_OnValue_UB;
    ComScl_RawSignal_NeutralSts_RX_u8 = C_GearInNeutral_UB;
    ComScl_RawSignal_TM_OperMod_RX_u8 = C_EMotor_Ready_FailureValue_UB;
    ComScl_RawSignal_VehTotDistance_RX_u32 = C_Max_VehTotDistance_UL;
    ComScl_RawSignal_VehicleSoakTime_RX_u16 = GWM_C_SoakTime_InvalidValue_UW;
    ComScl_RawSignal_Start_Stop_Sts_G_RX_u8 = GWM_C_StartStopSts_EngStoppedMode_UB;
    ComScl_RawSignal_SystemPowerModeValid_RX_b = GWM_C_CAN_SystemPowerMode_Valid_B;
    ComScl_RawSignal_SystemPowerMode_RX_u8 = GWM_C_CAN_SystemPowerMode_ON_UB;
    ComScl_RawSignal_ACAmbtTemp_RX_u8 = GWM_C_EnvTemp_MaxValue_UB + 6;

    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_MESG_NMSG_DriverSeatBeltLatched_B = 0x01 ; 
    expected_MESG_NMSG_DriverPresent_B = 0x00 ; 
    expected_MESG_NMSG_ReverseGearSwitch_B = 0x01 ; 
    expected_MESG_NMSG_NeutralGear_B = 0x01 ; 
    expected_MESG_NMSG_EMotor_Ready_B = 0x00 ; 
    expected_MESG_NMSG_StartStop_Active_B = 0x01 ; 
    expected_MESG_NMSG_EngineCranking_N = 1 ; 
    expected_MESG_NMSG_BCM_ReqATMMode_UB = 0x02 ; 
    expected_MESG_NMSG_Pata_CAN_N = 3 ; 
    expected_MESG_NMSG_VCU_EPBActvReqVld_B = 0x00 ; 
    expected_MESG_NMSG_ApbCtrl_AutoapplyFromDCT_Valid_B = 0x00 ; 
    expected_MESG_NMSG_CruiseControl_Active = 0x00 ; 
    expected_MESG_NMSG_SteeringWheeSpeed = 26624 ; 

    START_TEST("11: PRC_GWM_NET_SCL_Rx_VAF_V_10",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{Dem_ReportErrorStatus#default}");

            /* Call SUT */
            PRC_GWM_NET_SCL_Rx_VAF_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_PRC_GWM_NET_SCL_Rx_VAF_V_11(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    GWM_ComScl_IsRxPduIndication_DriverSeatBelt = 1;
    ComScl_RawSignal_DriverSBR_RX_b = C_DriverSBR_NoReminder_B;
    ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverSBR_B) = !C_DriverSBR_Reminder_B;
    ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverDoorSts_B) = C_DriverDoorSts_Open_B;
    ComScl_RawSignal_ReversGearSts_RX_u8 = C_ReverseGear_OnValue_UB;
    ComScl_RawSignal_NeutralSts_RX_u8 = C_GearInNeutral_UB;
    ComScl_RawSignal_TM_OperMod_RX_u8 = C_EMotor_Ready_UB;
    ComScl_RawSignal_VehTotDistanceValid_RX_b = C_VehTotDistanceQualifier_ValidValue_UB;
    ComScl_RawSignal_EngState_RX_u8 = GWM_C_CAN_EngState_Running_UB;
    ComScl_RawSignal_SystemPowerModeValid_RX_b = GWM_C_CAN_SystemPowerMode_Valid_B;
    ComScl_RawSignal_SystemPowerMode_RX_u8 = GWM_C_CAN_SystemPowerMode_CRANK_UB;
    ComScl_RawSignal_SystemOperatingMode_RX_u8 = C_SystemOperatingMode_4L_UB;
    ComScl_RawSignal_HUT_ESPFuncOffSwSts_RX_b = C_SCL_HUT_ESPFuncOffSwSts_NoActivated_UB;
    ComScl_RawSignal_VCU_EPBActvReqVld_RX_b = GWM_C_DCT_EPBActvReqQualifier_ValidValue_UB;
    ACCESS_VARIABLE(GWM_NET_SCL_Rx_VAF, g_EPBActvReqVld_B) = GWM_C_DCT_EPBActvReqQualifier_ValidValue_UB;
    ComScl_RawSignal_VCU_EPBActvReq_RX_b = !GWM_C_DCT_EPBActvReq_Request_UB;
    ACCESS_LOCAL_VARIABLE(GWM_NET_SCL_Rx_VAF, PRC_GWM_NET_SCL_Rx_VAF_V, ls_DCT_EPBActvReq_SignalFailIndication_B) = 0;
    GWM_ComScl_EvaluateRxPdu_EPBActvReq = 0;
    GWM_ComScl_EvaluateRxPdu_EPBActvReqVld = 1;
    ComScl_RawSignal_ACAmbtTemp_RX_u8 = 0;
    GWM_ComScl_IsRxPduTimeoutError_AmbientTemp_IC = 0;
    GWM_ComScl_IsRxPduDataCorruptError_AmbientTemp_IC = 1;

    ComScl_RawSignal_ParkBrakeSts_RX_u8 = GWM_C_ParkBrakeSts_InvalidValue_UB;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_MESG_NMSG_DriverSeatBeltLatched_B = 0x01 ; 
    expected_MESG_NMSG_DriverPresent_B = 0x00 ; 
    expected_MESG_NMSG_ReverseGearSwitch_B = 0x01 ; 
    expected_MESG_NMSG_NeutralGear_B = 0x01 ; 
    expected_MESG_NMSG_EMotor_Ready_B = 0x01 ; 
    expected_MESG_NMSG_StartStop_Active_B = 0x01 ; 
    expected_MESG_NMSG_EngineCranking_N = 2 ; 
    expected_MESG_NMSG_BCM_ReqATMMode_UB = 0x0A ; 
    expected_MESG_NMSG_Pata_CAN_N = 1 ; 
    expected_MESG_NMSG_VCU_EPBActvReqVld_B = 0x01 ; 
    expected_MESG_NMSG_VCU_EPBActvReq_B = 0x00 ; 
    expected_MESG_NMSG_ApbCtrl_AutoapplyFromDCT_Valid_B = 0x00 ; 
    expected_MESG_NMSG_CruiseControl_Active = 0x00 ; 
    expected_MESG_NMSG_SteeringWheeSpeed = 26624 ; 

    START_TEST("12: PRC_GWM_NET_SCL_Rx_VAF_V_11",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{Dem_ReportErrorStatus#default}");

            /* Call SUT */
            PRC_GWM_NET_SCL_Rx_VAF_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_PRC_GWM_NET_SCL_Rx_VAF_V_12(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    GWM_ComScl_IsRxPduIndication_FLDoorSts = 1;
    ComScl_RawSignal_ParkBrakeSts_RX_u8 = !GWM_C_ParkBrakeSts_InvalidValue_UB;
    int_GWM_SCL_ParkBrakeStsQualifier = GWM_C_ParkBrakeQualifier_ValidValue_UB;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_MESG_NMSG_DriverSeatBeltLatched_B = 0x00 ; 
    expected_MESG_NMSG_DriverPresent_B = 0x01 ; 
    expected_MESG_NMSG_ReverseGearSwitch_B = 0x00 ; 
    expected_MESG_NMSG_NeutralGear_B = 0x00 ; 
    expected_MESG_NMSG_EMotor_Ready_B = 0x00 ; 
    expected_MESG_NMSG_StartStop_Active_B = 0x01 ; 
    expected_MESG_NMSG_EngineCranking_N = 3 ; 
    expected_MESG_NMSG_BCM_ReqATMMode_UB = 0x02 ; 
    expected_MESG_NMSG_Pata_CAN_N = 3 ; 
    expected_MESG_NMSG_VCU_EPBActvReqVld_B = 0x00 ; 
    expected_MESG_NMSG_Has_B = 0x00 ; 
    expected_MESG_NMSG_ApbCtrl_AutoapplyFromDCT_Valid_B = 0x00 ; 
    expected_MESG_NMSG_CruiseControl_Active = 0x00 ; 
    expected_MESG_NMSG_SteeringWheeSpeed = 26624 ; 
    ACCESS_EXPECTED_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverSBR_B) = 0x00 ; 

    START_TEST("13: PRC_GWM_NET_SCL_Rx_VAF_V_12",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{Dem_ReportErrorStatus#default}");

            /* Call SUT */
            PRC_GWM_NET_SCL_Rx_VAF_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_PRC_GWM_NET_SCL_Rx_VAF_V_13(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    GWM_ComScl_IsRxPduIndication_FLDoorSts = 1;
    ComScl_RawSignal_ParkBrakeSts_RX_u8 = GWM_C_ParkBrake_Applied_UB;
    int_GWM_SCL_ParkBrakeStsQualifier = GWM_C_ParkBrakeQualifier_ValidValue_UB;
    ComScl_RawSignal_SteerWheelSpdSign_RX_b = C_SASSign_Posi_UB;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_MESG_NMSG_DriverSeatBeltLatched_B = 0x00 ; 
    expected_MESG_NMSG_DriverPresent_B = 0x01 ; 
    expected_MESG_NMSG_ReverseGearSwitch_B = 0x00 ; 
    expected_MESG_NMSG_NeutralGear_B = 0x00 ; 
    expected_MESG_NMSG_EMotor_Ready_B = 0x00 ; 
    expected_MESG_NMSG_StartStop_Active_B = 0x01 ; 
    expected_MESG_NMSG_EngineCranking_N = 3 ; 
    expected_MESG_NMSG_BCM_ReqATMMode_UB = 0x02 ; 
    expected_MESG_NMSG_Pata_CAN_N = 3 ; 
    expected_MESG_NMSG_VCU_EPBActvReqVld_B = 0x00 ; 
    expected_MESG_NMSG_Has_B = 0x01 ; 
    expected_MESG_NMSG_ApbCtrl_AutoapplyFromDCT_Valid_B = 0x00 ; 
    expected_MESG_NMSG_CruiseControl_Active = 0x00 ; 
    expected_MESG_NMSG_SteeringWheeSpeed = -26624 ; 
    ACCESS_EXPECTED_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverSBR_B) = 0x00 ; 

    START_TEST("14: PRC_GWM_NET_SCL_Rx_VAF_V_13",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{Dem_ReportErrorStatus#default}");

            /* Call SUT */
            PRC_GWM_NET_SCL_Rx_VAF_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_PRC_GWM_NET_SCL_Rx_VAF_V_14(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    GWM_ComScl_IsRxPduIndication_FLDoorSts = 1;
    ComScl_RawSignal_ParkBrakeSts_RX_u8 = GWM_C_ParkBrake_Applied_UB;
    int_GWM_SCL_ParkBrakeStsQualifier = GWM_C_ParkBrakeQualifier_NotAvailableValue_UB;
    ComScl_RawSignal_CruiseCtrlSts_RX_u8 = GWM_C_CruiseCtrlSts_Standby;
    ComScl_RawSignal_SteerWheelSpd_RX_u16 = GWM_C_SteerWheelSpd_InvalidValue;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_MESG_NMSG_DriverSeatBeltLatched_B = 0x00 ; 
    expected_MESG_NMSG_DriverPresent_B = 0x01 ; 
    expected_MESG_NMSG_ReverseGearSwitch_B = 0x00 ; 
    expected_MESG_NMSG_NeutralGear_B = 0x00 ; 
    expected_MESG_NMSG_EMotor_Ready_B = 0x00 ; 
    expected_MESG_NMSG_StartStop_Active_B = 0x01 ; 
    expected_MESG_NMSG_EngineCranking_N = 3 ; 
    expected_MESG_NMSG_BCM_ReqATMMode_UB = 0x02 ; 
    expected_MESG_NMSG_Pata_CAN_N = 3 ; 
    expected_MESG_NMSG_VCU_EPBActvReqVld_B = 0x00 ; 
    expected_MESG_NMSG_ApbCtrl_AutoapplyFromDCT_Valid_B = 0x00 ; 
    expected_MESG_NMSG_CruiseControl_Active = 0x00 ; 
    ACCESS_EXPECTED_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverSBR_B) = 0x00 ; 

    START_TEST("15: PRC_GWM_NET_SCL_Rx_VAF_V_14",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{Dem_ReportErrorStatus#default}");

            /* Call SUT */
            PRC_GWM_NET_SCL_Rx_VAF_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_PRC_GWM_NET_SCL_Rx_VAF_V_15(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    GWM_ComScl_IsRxPduIndication_FLDoorSts = 1;
    ComScl_RawSignal_ParkBrakeSts_RX_u8 = GWM_C_ParkBrake_Applied_UB;
    int_GWM_SCL_ParkBrakeStsQualifier = 69;
    ComScl_RawSignal_ECM_interfaceAPS_RX_b = GWM_C_ECM_interfaceAPS_ERR_B;
    ComScl_RawSignal_DCT_EPBActvReq_RX_b = GWM_C_DCT_EPBActvReq_Request_UB;
    int_GWM_SCL_DCT_EPBActvReqValid = GWM_C_DCT_EPBActvReqQualifier_ValidValue_UB;
    ComScl_RawSignal_CruiseCtrlSts_RX_u8 = GWM_C_CruiseCtrlSts_Active;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_MESG_NMSG_DriverSeatBeltLatched_B = 0x00 ; 
    expected_MESG_NMSG_DriverPresent_B = 0x01 ; 
    expected_MESG_NMSG_ReverseGearSwitch_B = 0x00 ; 
    expected_MESG_NMSG_NeutralGear_B = 0x00 ; 
    expected_MESG_NMSG_EMotor_Ready_B = 0x00 ; 
    expected_MESG_NMSG_StartStop_Active_B = 0x01 ; 
    expected_MESG_NMSG_EngineCranking_N = 3 ; 
    expected_MESG_NMSG_BCM_ReqATMMode_UB = 0x02 ; 
    expected_MESG_NMSG_Pata_CAN_N = 3 ; 
    expected_MESG_NMSG_VCU_EPBActvReqVld_B = 0x00 ; 
    expected_MESG_NMSG_ApbCtrl_AutoapplyFromDCT_B = 0x01 ; 
    expected_MESG_NMSG_ApbCtrl_AutoapplyFromDCT_Valid_B = 0x01 ; 
    expected_MESG_NMSG_CruiseControl_Active = 0x01 ; 
    expected_MESG_NMSG_SteeringWheeSpeed = 26624 ; 
    ACCESS_EXPECTED_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverSBR_B) = 0x00 ; 

    START_TEST("16: PRC_GWM_NET_SCL_Rx_VAF_V_15",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{Dem_ReportErrorStatus#default}");

            /* Call SUT */
            PRC_GWM_NET_SCL_Rx_VAF_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_PRC_GWM_NET_SCL_Rx_VAF_V_16(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    GWM_ComScl_IsRxPduIndication_FLDoorSts = 1;
    ComScl_RawSignal_ParkBrakeSts_RX_u8 = GWM_C_ParkBrake_Applied_UB;
    int_GWM_SCL_ParkBrakeStsQualifier = 69;
    ComScl_RawSignal_ECM_interfaceAPS_RX_b = GWM_C_ECM_interfaceAPS_ERR_B;
    ComScl_RawSignal_DCT_EPBActvReq_RX_b = !GWM_C_DCT_EPBActvReq_Request_UB;
    int_GWM_SCL_DCT_EPBActvReqValid = GWM_C_DCT_EPBActvReqQualifier_ValidValue_UB;
    ComScl_RawSignal_CruiseCtrlSts_RX_u8 = GWM_C_CruiseCtrlSts_Inactive;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_MESG_NMSG_DriverSeatBeltLatched_B = 0x00 ; 
    expected_MESG_NMSG_DriverPresent_B = 0x01 ; 
    expected_MESG_NMSG_ReverseGearSwitch_B = 0x00 ; 
    expected_MESG_NMSG_NeutralGear_B = 0x00 ; 
    expected_MESG_NMSG_EMotor_Ready_B = 0x00 ; 
    expected_MESG_NMSG_StartStop_Active_B = 0x01 ; 
    expected_MESG_NMSG_EngineCranking_N = 3 ; 
    expected_MESG_NMSG_BCM_ReqATMMode_UB = 0x02 ; 
    expected_MESG_NMSG_Pata_CAN_N = 3 ; 
    expected_MESG_NMSG_VCU_EPBActvReqVld_B = 0x00 ; 
    expected_MESG_NMSG_ApbCtrl_AutoapplyFromDCT_B = 0x00 ; 
    expected_MESG_NMSG_ApbCtrl_AutoapplyFromDCT_Valid_B = 0x01 ; 
    expected_MESG_NMSG_CruiseControl_Active = 0x00 ; 
    expected_MESG_NMSG_SteeringWheeSpeed = 26624 ; 
    ACCESS_EXPECTED_VARIABLE(GWM_NET_SCL_Rx_VAF, g_DriverSBR_B) = 0x00 ; 

    START_TEST("17: PRC_GWM_NET_SCL_Rx_VAF_V_16",
               "<Insert test case description here>");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{Dem_ReportErrorStatus#default}");

            /* Call SUT */
            PRC_GWM_NET_SCL_Rx_VAF_V();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

/*****************************************************************************/
/* Call Interface Control                                                    */
/*****************************************************************************/

/* Stub for function Dem_ReportErrorStatus */
void Dem_ReportErrorStatus(Dem_EventIdType EventId,
                           Dem_EventStatusType EventStatus){
    REGISTER_CALL("Dem_ReportErrorStatus");

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
