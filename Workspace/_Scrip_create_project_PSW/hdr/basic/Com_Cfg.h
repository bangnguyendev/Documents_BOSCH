



/*                                                                                                                     
********************************************************************************************************************** 
*                                                                                                                      
* COPYRIGHT RESERVED, 2010 Robert Bosch GmbH. All rights reserved.                                                     
* The reproduction, distribution and utilization of this document as well as the communication of its contents to      
* others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.       
* All rights reserved in the event of the grant of a patent, utility model or design.                                  
*                                                                                                                      
********************************************************************************************************************** 
*/                                                                                                                     

 
/*<VersionHead>
 * This Configuration File is generated using versions (automatically filled in) as listed below.
 *
 * $Generator__: Com / AR40.14.0.1                Module Package Version
 * $Editor_____: AEEE_2014.1.1.rc3                Tool Version
 * $Model______: 2.3.0.4          	  ECU Parameter Definition Version
 *
 
 </VersionHead>*/


#ifndef COM_CFG_H
#define COM_CFG_H

/***********************************************************************/
/*  Name           : COM_VersionInfoType                             */
/*  Description    : Vendor Information                                */
/***********************************************************************/



/*  START: Local #defines  */


#define COM_TX_TIME_BASE         0.005

#define COM_RX_TIME_BASE         0.005

#define COM_GW_TIME_BASE         0.005


#define COM_CONFIGURATION_ID                0

/************************ SIGNAL GROUP switches *************************/
/************************************************************************/
/* SIGNAL GROUP switches */

#define COM_TX_SIGNALGROUP

#define COM_RX_SIGNALGROUP
/************************************************************************/
/************************************************************************/

/************************ UPDATE_BIT switches ***************************/
/************************************************************************/

#define COM_RxSigUpdateBit

#define COM_TxSigUpdateBit

#define COM_RxSigGrpUpdateBit

#define COM_TxSigGrpUpdateBit

#if (defined(COM_RxSigUpdateBit) || defined(COM_TxSigUpdateBit) || defined(COM_RxSigGrpUpdateBit) || defined(COM_TxSigGrpUpdateBit))
#define COM_UPDATEBIT
#endif /* #if (defined(COM_RxSigUpdateBit) || defined(COM_TxUpdateBit) || defined(COM_RxSigGrpUpdateBit) || defined(COM_TxSigGrpUpdateBit)) */
/************************************************************************/
/************************************************************************/

/************************ RX TIME OUT switches **************************/
/************************************************************************/

/* #define COM_RxSigUpdateTimeout */

/* #define COM_RxSigGrpUpdateTimeout */

/* #define  COM_RxUpdateTimeoutNotify */

/* #define COM_RxIPduTimeout */

/* #define COM_RxIPduTimeoutNotify */

/* #define COM_RxTimeoutSignalActionReplace */


/* #define COM_RxTimeoutSignalGrpActionReplace */
/************************************************************************/
/************************************************************************/

/************************ TX TIME OUT switches **************************/
/************************************************************************/

#define COM_TxIPduTimeOut

#define COM_TxIPduTimeOutNotify
/************************************************************************/
/************************************************************************/


/********************* TRANSFER PROPERTY  switches **********************/
/************************************************************************/

/*#define COM_SigTriggeredOnChange*/


/*#define COM_SigGrpTriggeredOnChange*/

/************************************************************************/
/************************************************************************/

/********************* RX NOTIFICATION switches *************************/
/************************************************************************/

#define COM_RxSignalNotify

#define COM_RxIPduNotification

#define COM_RxSignalGrpNotify
/************************************************************************/
/************************************************************************/


/********************* FILTER related switches **************************/
/************************************************************************/

/* #define COM_RxFilters */

#define COM_TxFilters

#if (defined(COM_RxFilters) || defined(COM_TxFilters))
#define COM_FILTERS
#endif

/* #define COM_F_MASKEDNEWEQUALSX */

/* #define COM_F_MASKEDNEWDIFFERSX */

/* #define COM_F_MASKEDNEWDIFFERSOLD */

/* #define COM_F_NEWISWITHIN_POS */

/* #define COM_F_NEWISWITHIN_NEG */

/* #define COM_F_NEWISOUTSIDE_POS */

/* #define COM_F_NEWISOUTSIDE_NEG */

/* #define COM_F_ONEEVERYN */
/************************************************************************/
/************************************************************************/

/*********************** RX INVALID switches ****************************/
/************************************************************************/

/* #define COM_RxSigInvalid */

/* #define COM_RxSigInvalidNotify */

/* #define COM_RxSigGrpInvalid */

/* #define COM_RxSigGrpInvalidNotify */

/* #define COM_RxSigGrpInvalidActionReplace */

/************************************************************************/
/************************************************************************/

/*********************** TX INVALID switches ****************************/
/************************************************************************/
#define COM_TxInvalid

#define COM_TxGrpSigInvalid
/************************************************************************/
/************************************************************************/

/******************* RX IPdu Deferred Processing ************************/
/************************************************************************/
/* #define COM_RxIPduDeferredProcessing */
/* #define COM_RxSignalGrpDeferredProcessing */

/************************************************************************/
/************************************************************************/

/********************* DYNAMIC SIGNAL switches **********************/
/************************************************************************/
/* #define COM_TX_DYNAMIC_SIGNAL_SUPPORT */


/* #define COM_RX_DYNAMIC_SIGNAL_SUPPORT */

/********************* FLOAT64 switches **********************/
/************************************************************************/
/* #define COM_TXGRPSIG_FLOAT64SUPP */

/* #define COM_TXSIG_FLOAT64SUPP */

/* #define COM_RXSIG_FLOAT64SUPP */

/* #define COM_RXGRPSIG_FLOAT64SUPP */
/************************** Misc FEATURES *******************************/
/************************************************************************/

#define COM_ERRORNOTIFICATION

#define COM_TXDOUBLEBUFFER

#define COM_RxIPduCallOuts

#define COM_TxIPduCallOuts


/*#define COM_MIXEDPHASESHIFT*/


#define COM_TxIPduNotification

#define COM_CONFIGURATION_USE_DET           STD_OFF
#define COM_VERSION_INFO_API                STD_OFF

#define COM_COMMON_TX_PERIOD				STD_OFF
#define COM_ENABLE_JITTERFLITER				STD_OFF
/* #define COM_ENABLE_READRXIPDULENGTH */
/* #define COM_IPDUCONTROL_VIA_CALIBRATION */
#define COM_ARSRVLIB_SUPPORT
/* #define COM_PROVIDE_IPDU_STATUS */

/* #define COM_TXSCHEDULED_DIFF_TIMEBASE */
#define COM_MULTICORE_SUPPORT

#define COM_SIGNALGATEWAY

/************************************************************************/
/************************************************************************/



/*  START: Local #defines  */

#define COM_NUM_RX_SIGNALS		305u
#define COM_NUM_TX_SIGNALS		348u

#define COM_NUM_SIGNALGRP       242

#define COM_NUM_TX_SIGNALGRP	137u

#define COM_NUM_RX_SIGNALGRP    105u

#define COM_NUM_GRPSIGNALS      1071u

#define COM_NUM_TX_GRPSIGNALS	586u

#define COM_NUM_RX_GRPSIGNALS	485u

#define COM_NUM_TX_IPDU         68u
#define COM_NUM_RX_IPDU         100u
#define COM_NUM_TOTAL_IPDU_GRP  77u
#define COM_NUM_ARR_IPDUGRPVECT	10u
#define COM_NUM_GWSRC_SIGNALS  232u
#define COM_NUM_GWSRC_IPDUS     64u

#ifdef COM_RxIPduDeferredProcessing

	/* Buffer to hold data for deferred signal processing */
	#define COM_MAX_DEFERRED_IPDUBUFF_SIZE  1
#endif /* #ifdef COM_RxIPduDeferredProcessing */



#define COM_UPDATE_MAX      0xFFFF   /* max ipdu size */

#define COM_MAX_IPDU_SIZE 32 /* in bytes */

#define COM_RXTIMER_MAX			0xFFFFu
/*  END: Local #defines  */

/* Start Type Declarations*/

/* Enum for Com status, Init/uninit */
typedef enum
{
    COM_UNINIT,
    COM_INIT
}Com_StatusType;

/* Filter type */
#if defined(COM_F_MASKEDNEWEQUALSX) || defined(COM_F_MASKEDNEWDIFFERSX)
    typedef struct
    {
        uint32 Mask;
        uint32 X_Val;
    }Com_MaskXType;
#endif
#if defined(COM_F_NEWISWITHIN_POS) || defined(COM_F_NEWISOUTSIDE_POS)
    typedef struct
    {
        uint32 Min;
        uint32 Max;
    }Com_POSMinMaxType;
#endif
#if defined(COM_F_NEWISWITHIN_NEG) || defined(COM_F_NEWISOUTSIDE_NEG)
    typedef struct
    {
        sint32 Min;
        sint32 Max;
    }Com_NEGMinMaxType;
#endif
#ifdef COM_F_ONEEVERYN
    typedef struct
    {
        uint32 Period;
        uint32 Offset;
        uint8  Occurrence;
    }Com_OneEveryNType;
#endif

	typedef uint16 Com_SignalIdType;
#if defined(COM_TX_SIGNALGROUP) || defined(COM_RX_SIGNALGROUP)
	typedef uint16 Com_SignalGroupIdType;
#endif


typedef uint8 Com_IpduIdType;


typedef uint16 Com_IpduGroupIdType;

typedef uint8 Com_IpduGroupVector[COM_NUM_ARR_IPDUGRPVECT];




typedef uint16    Com_GrpSignalIdType;



typedef uint8    Com_NoOfTxGrpSignalType;
	

typedef uint8    Com_NoOfRxGrpSignalType;
	

#ifdef COM_TX_SIGNALGROUP




typedef uint16    Com_TxIntGrpSignalIdType;

#endif

#ifdef COM_RX_SIGNALGROUP

typedef uint16    Com_RxIntGrpSignalIdType;


#endif






typedef uint16    Com_TxIntSignalIdType;



typedef uint16    Com_RxIntSignalIdType;







#ifdef COM_TX_SIGNALGROUP



 
 typedef uint8 Com_TxIntSignalGroupIdType;
 
#endif

#ifdef COM_RX_SIGNALGROUP 
  
 typedef uint8 Com_RxIntSignalGroupIdType;
 
 

#endif







typedef uint8   Com_BitsizeType;
typedef uint16 Com_BitpositionType;
#if defined(COM_TxFilters) || defined (COM_RxFilters) 
typedef uint8   Com_FilterType;
#endif

typedef uint8 Com_RxGwQueueIndexType;
#if defined(COM_SigTriggeredOnChange) || defined(COM_SigGrpTriggeredOnChange)
typedef uint8   Com_OldValType;
#endif


typedef uint8 Com_SigBuffIndexType;



typedef uint16 Com_RxGrpSigBuffIndexType;


typedef uint16 Com_TxGrpSigBuffIndexType;

/*  END: Type Declaration  */



/* Signal IDs*/
/* Tx Signal ID*/
	#define ComSignal_isPtTqAtAxleFrntMaxReq_CAN_Tx 0
	#define ComSignal_isYawRateReqdByDrvr_CAN_Tx 1
	#define ComSignal_isTInCooltAtStrtOfClima_CAN_Tx 2
	#define ComSignal_isHoodSts_CAN_Tx 3
	#define ComSignal_isDoorPassReSts_CAN_Tx 4
	#define ComSignal_isDoorPassSts_CAN_Tx 5
	#define ComSignal_isAccInhbReq_CAN_Tx 6
	#define ComSignal_isDoorDrvrSts_CAN_Tx 7
	#define ComSignal_isCnclReqForCrsCtrl_CAN_Tx 8
	#define ComSignal_isTrSts_CAN_Tx 9
	#define ComSignal_isPrpsnTqForBrkRels_CAN_Tx 10
	#define ComSignal_isDynModOfPtReq_CAN_Tx 11
	#define ComSignal_isPtTqAtWhlsPrePush_CAN_Tx 12
	#define ComSignal_isHvacCoolgEnaFrnt_CAN_Tx 13
	#define ComSignal_isAbsCtrlActv_1_CAN_Tx 14
	#define ComSignal_isHeatrIntkCooltTEstimd_CAN_Tx 15
	#define ComSignal_isHybFacyStart_CAN_Tx 16
	#define ComSignal_isPtActvnReq1WdPtActvnReq_CAN_Tx 17
	#define ComSignal_isSteerLockEnagOfPrpsn_CAN_Tx 18
	#define ComSignal_isAsyDamprReq_CAN_Tx 19
	#define ComSignal_isEngActvnMod1WdReq_CAN_Tx 20
	#define ComSignal_isEngRunngReqByBrk_CAN_Tx 21
	#define ComSignal_isPtTqAtAxleReMinSlowReq_CAN_Tx 22
	#define ComSignal_isEscDamprReq_CAN_Tx 23
	#define ComSignal_isTqRednDurgCllsnMtgtnByBrkg_CAN_Tx 24
	#define ComSignal_isEscGearShiftInhbReq_CAN_Tx 25
	#define ComSignal_isHvacRecircAct_CAN_Tx 26
	#define ComSignal_isPVac_CAN_Tx 27
	#define ComSignal_isStandStillReqForCmftToPrpsn_CAN_Tx 28
	#define ComSignal_isHvacAirMFlowEstimd_CAN_Tx 29
	#define ComSignal_isStandStillMgrStsForHld_CAN_Tx 30
	#define ComSignal_isClimaTiOfEnd_CAN_Tx 31
	#define ComSignal_isTiExcdStopModTmp_CAN_Tx 32
	#define ComSignal_isBkpOfDstTrvld_0_CAN_Tx 33
	#define ComSignal_isDrvModReq_CAN_Tx 34
	#define ComSignal_isCmptmtAirTEstimdAtRowFirstLoResl_CAN_Tx 35
	#define ComSignal_isSpdOfTarForAsyCmft_CAN_Tx 36
	#define ComSignal_isHmiCmptmtCoolgReq_CAN_Tx 37
	#define ComSignal_isIntvSide_CAN_Tx 38
	#define ComSignal_isSteerTqSgnReq_CAN_Tx 39
	#define ComSignal_isEngSpdIncIdleForClima_CAN_Tx 40
	#define ComSignal_isPrpsnHvBattUsgStsDispd_CAN_Tx 41
	#define ComSignal_isChrgMod_CAN_Tx 42
	#define ComSignal_isSetSpdSts_CAN_Tx 43
	#define ComSignal_isPrpsnHvBattUsgModReq_CAN_Tx 44
	#define ComSignal_isFuTankPRelsForFuHeatrReq_CAN_Tx 45
	#define ComSignal_isCooltFlowFromWtrPmpAux_CAN_Tx 46
	#define ComSignal_isHvHeatgPwrCritDes_CAN_Tx 47
	#define ComSignal_isHvHeatgPwrCns_CAN_Tx 48
	#define ComSignal_isHvacEvaprTSpFrnt_CAN_Tx 49
	#define ComSignal_isHvHeatgPwrNormDes_CAN_Tx 50
	#define ComSignal_isHvacHeatrPwrCns_CAN_Tx 51
	#define ComSignal_isHvacCooltFlowReq_CAN_Tx 52
	#define ComSignal_isClimaSts_CAN_Tx 53
	#define ComSignal_isDeactvtLvlgCtrl_CAN_Tx 54
	#define ComSignal_isHvacCooltVlvSts_CAN_Tx 55
	#define ComSignal_isDrvModDispd_CAN_Tx 56
	#define ComSignal_isPwrIncGendWdReq_CAN_Tx 57
	#define ComSignal_isHvacAirMFlowReEstimd_CAN_Tx 58
	#define ComSignal_isSpdLimFirst_CAN_Tx 59
	#define ComSignal_isAbsErrIndcnReq_CAN_Tx 60
	#define ComSignal_isEngHeatgReq_CAN_Tx 61
	#define ComSignal_isPrpsnHvBattUsgOfHldSpd_CAN_Tx 62
	#define ComSignal_isBattChgInhbReq1WdReq_CAN_Tx 63
	#define ComSignal_isChrgnUReqMin_CAN_Tx 64
	#define ComSignal_isChrgnUReqMax_CAN_Tx 65
	#define ComSignal_isURateUpRampMax_CAN_Tx 66
	#define ComSignal_isEscActvCtrlIndcdToDrvr_1_CAN_Tx 67
	#define ComSignal_isHvEgyDesForClima_CAN_Tx 68
	#define ComSignal_isPwrAvlRednWdSts_CAN_Tx 69
	#define ComSignal_isEngPwrAllwdDeltaWdCmd_CAN_Tx 70
	#define ComSignal_isClimaActv_CAN_Tx 71
	#define ComSignal_isEngCooltLvl_1_CAN_Tx 72
	#define ComSignal_isChassisCntrForMissCom_CAN_Tx 73
	#define ComSignal_isMstCfgIDChassisCAN_CAN_Tx 74
	#define ComSignal_isSetSpdForCrsCtrlFct_CAN_Tx 75
	#define ComSignal_isDoorDrvrReSts_CAN_Tx 76
	#define ComSignal_isAsyActrActvForLgtCtrl_1_CAN_Tx 77
	#define ComSignal_isSrvRst_CAN_Tx 78
	#define ComSignal_isPwrSplyErrSts_CAN_Tx 79
	#define ComSignal_isSpdLimUnit_CAN_Tx 80
	#define ComSignal_isEscCtrlIndcn_1_CAN_Tx 81
	#define ComSignal_isBrkTracCtrlActv_CAN_Tx 82
	#define ComSignal_isAbsSts_CAN_Tx 83
	#define ComSignal_isAsyALgtActvAftLim_1_CAN_Tx 84
	#define ComSignal_isWhlAFrntMax_CAN_Tx 85
	#define ComSignal_isDrvrCrsCtrlFctActvReq_CAN_Tx 86
	#define ComSignal_isChrgHndlStrtEna_CAN_Tx 87
	#define ComSignal_isAsyPinionAgReq_CAN_Tx 88
	#define ComSignal_isDrvrCrsCtrlFctSeld_CAN_Tx 89
	#define ComSignal_isSetSpdForKeySpdLimn_CAN_Tx 90
	#define ComSignal_isAccActvnInSpdLoCfmd_CAN_Tx 91
	#define ComSignal_isDrvrCrsCtrlFctDeactvnReq_CAN_Tx 92
	#define ComSignal_isEngStrtStopSetg_CAN_Tx 93
	#define ComSignal_isAsyRoadCrvt_CAN_Tx 94
	#define ComSignal_isEngRunngReqByClima_CAN_Tx 95
	#define ComSignal_isHvacCoolgEnaRe_CAN_Tx 96
	#define ComSignal_isDrvrEntryLoReq_CAN_Tx 97
	#define ComSignal_isProfPenSts1_CAN_Tx 98
	#define ComSignal_isTrlrPrsnt_0_CAN_Tx 99
	#define ComSignal_isIncSpdIdleElecReq_CAN_Tx 100
	#define ComSignal_isSaveSetgToMemPrmnt_CAN_Tx 101
	#define ComSignal_isEvaprVlvReSts_CAN_Tx 102
	#define ComSignal_isEngRunngReqByParkAssi_CAN_Tx 103
	#define ComSignal_isSteerWhlHeatgOnReq_CAN_Tx 104
	#define ComSignal_isTankFlapReqFromSwtIntrFild_CAN_Tx 105
	#define ComSignal_isTankFlapSts_CAN_Tx 106
	#define ComSignal_isCarTiGlb_0_CAN_Tx 107
	#define ComSignal_isHeatrCooltT_CAN_Tx 108
	#define ComSignal_isMstCfgIDPropulsionCAN_CAN_Tx 109
	#define ComSignal_isPrpsnCntrForMissCom_CAN_Tx 110
	#define ComSignal_isEngTracCtrlActvFrntMax_CAN_Tx 111
	#define ComSignal_isAxleSlipRelAct_CAN_Tx 112
	#define ComSignal_isCarTiGlb_1_CAN_Tx 113
	#define ComSignal_isBrkTqAtWhlsReq_1_CAN_Tx 114
	#define ComSignal_isPtTqAtAxleReMaxReq_CAN_Tx 115
	#define ComSignal_isSpdRotlForWhlsAtAxleRe_CAN_Tx 116
	#define ComSignal_isYawStabyCtrlActv_CAN_Tx 117
	#define ComSignal_isWhlCircum_CAN_Tx 118
	#define ComSignal_isTrlrPrsnt_1_CAN_Tx 119
	#define ComSignal_isTiDrvgCycOff_CAN_Tx 120
	#define ComSignal_isIntrBriSts_CAN_Tx 121
	#define ComSignal_isTwliBriSts_CAN_Tx 122
	#define ComSignal_isChrgnUReq_CAN_Tx 123
	#define ComSignal_isPtActrReModReq_CAN_Tx 124
	#define ComSignal_isBkpOfDstTrvld_1_CAN_Tx 125
	#define ComSignal_isSoundExtActvSts_CAN_Tx 126
	#define ComSignal_isAccrPedlRatGrdt_FR_Tx 127
	#define ComSignal_isDispOfPrpsnPwrPercElecMax_FR_Tx 128
	#define ComSignal_isFltTDcDc_FR_Tx 129
	#define ComSignal_isParkByDrvrWhlsFrnt_FR_Tx 130
	#define ComSignal_isDispOfBrkPwrPercRgnMin_FR_Tx 131
	#define ComSignal_isHvCooltHeatrEnad_FR_Tx 132
	#define ComSignal_isIDcDcAvlMaxLoSide_FR_Tx 133
	#define ComSignal_isIDcDcActLoSide_FR_Tx 134
	#define ComSignal_isFltElecDcDc_FR_Tx 135
	#define ComSignal_isBrkRelsWarnReq_FR_Tx 136
	#define ComSignal_isSteerTqReqScaCoeff_FR_Tx 137
	#define ComSignal_isSteerWhlTqAddl_FR_Tx 138
	#define ComSignal_isEngSpdDispd_FR_Tx 139
	#define ComSignal_isPwrCnsReqAtHvBattFlt_FR_Tx 140
	#define ComSignal_isInhbOfAsySftyDecelByVehDyn_FR_Tx 141
	#define ComSignal_isEscActvCtrlIndcdToDrvr_0_FR_Tx 142
	#define ComSignal_isDispOfPrpsnMod_FR_Tx 143
	#define ComSignal_isEmgyBrkLiReq_FR_Tx 144
	#define ComSignal_isAsyActrActvForLgtCtrl_0_FR_Tx 145
	#define ComSignal_isAsyEngBrkMaxForCmft_FR_Tx 146
	#define ComSignal_isAsySftyBrkDlyEstimd_FR_Tx 147
	#define ComSignal_isAsySftyDecelEnadByVehDyn_FR_Tx 148
	#define ComSignal_isHmiEngHybSts_FR_Tx 149
	#define ComSignal_isHvPwrAvlForClimaEstimd_FR_Tx 150
	#define ComSignal_isHmiFuTankRdy_FR_Tx 151
	#define ComSignal_isHmiFuLidNotClsd_FR_Tx 152
	#define ComSignal_isPrpsnHvBattUsgModAct_FR_Tx 153
	#define ComSignal_isSteerServoSts_FR_Tx 154
	#define ComSignal_isHmiFuLidOpenSts_FR_Tx 155
	#define ComSignal_isEngCooltLvl_0_FR_Tx 156
	#define ComSignal_isEngSpdMaxDispd_FR_Tx 157
	#define ComSignal_isEngCooltIndcnReq_FR_Tx 158
	#define ComSignal_isEngLoadReqElec_FR_Tx 159
	#define ComSignal_isEngFuCns_FR_Tx 160
	#define ComSignal_isImobEngSts1_FR_Tx 161
	#define ComSignal_isEngOilPWarn_FR_Tx 162
	#define ComSignal_isPrpsnErrIndcnReq_FR_Tx 163
	#define ComSignal_isPtGearTar_FR_Tx 164
	#define ComSignal_isEngPAmbAir1_FR_Tx 165
	#define ComSignal_isPrpsnModSptBlkd_FR_Tx 166
	#define ComSignal_isPrpsnModElecDrvBlkd_FR_Tx 167
	#define ComSignal_isPrpsnModOfTracBlkd_FR_Tx 168
	#define ComSignal_isDcDcActvd_FR_Tx 169
	#define ComSignal_isPrpsnModOfSaveBlkd_FR_Tx 170
	#define ComSignal_isDftlFltIndcn_FR_Tx 171
	#define ComSignal_isBrkFldLvl_FR_Tx 172
	#define ComSignal_isLampReqByVehHld_FR_Tx 173
	#define ComSignal_isBrkByWireWarnIndcn_FR_Tx 174
	#define ComSignal_isIndcnToDrvrPostImpctCtrl_FR_Tx 175
	#define ComSignal_isDispMsgByVehHld_FR_Tx 176
	#define ComSignal_isBrkMsgForLoVacReqd_FR_Tx 177
	#define ComSignal_isMsgReqByHillDwnCtrl_FR_Tx 178
	#define ComSignal_isEpbDrvrDisp_FR_Tx 179
	#define ComSignal_isBrkMsgForHybWarnReq_FR_Tx 180
	#define ComSignal_isBrkMsgWarnReq_FR_Tx 181
	#define ComSignal_isDstTrvldVldFromBrkBkp_FR_Tx 182
	#define ComSignal_isTrsmFltIndcn_FR_Tx 183
	#define ComSignal_isWhlRotCntrFrnt_FR_Tx 184
	#define ComSignal_isDispHvBattLvlOfChrg_FR_Tx 185
	#define ComSignal_isHvacCooltFlowAct_FR_Tx 186
	#define ComSignal_isHvClimaCmd_FR_Tx 187
	#define ComSignal_isSteerLockWarnIndcn_FR_Tx 188
	#define ComSignal_isSuspCnseEgy_FR_Tx 189
	#define ComSignal_isAltI_FR_Tx 190
	#define ComSignal_isAltIAvl_FR_Tx 191
	#define ComSignal_isChrgrSt_FR_Tx 192
	#define ComSignal_isEngEgyEffElec_FR_Tx 193
	#define ComSignal_isEngPwrCritDes_FR_Tx 194
	#define ComSignal_isEngPwrCns_FR_Tx 195
	#define ComSignal_isAltIAvlAtIdle_FR_Tx 196
	#define ComSignal_isEngPwrNormDes_FR_Tx 197
	#define ComSignal_isOnBdChrgrHndlSts_FR_Tx 198
	#define ComSignal_isEngEffSts_FR_Tx 199
	#define ComSignal_isEngStallMsgToModMngt_FR_Tx 200
	#define ComSignal_isDstEstimdToEmptyForDrvgElec_FR_Tx 201
	#define ComSignal_isAltBoostIndcn_FR_Tx 202
	#define ComSignal_isCoastAPhaIndcn_FR_Tx 203
	#define ComSignal_isDispBattEgyOut_FR_Tx 204
	#define ComSignal_isPrpsnModOffroadBlkd_FR_Tx 205
	#define ComSignal_isFltCrkIndcn_FR_Tx 206
	#define ComSignal_isHvSysCrashFb_FR_Tx 207
	#define ComSignal_isEngCooltTPercForDisp_FR_Tx 208
	#define ComSignal_isEngCooltLoFlowReq_FR_Tx 209
	#define ComSignal_isEngCrashFb_FR_Tx 210
	#define ComSignal_isEngOilLvlSts_FR_Tx 211
	#define ComSignal_isHvPwrEgyPrio_FR_Tx 212
	#define ComSignal_isAltFltElec_FR_Tx 213
	#define ComSignal_isAltFltT_FR_Tx 214
	#define ComSignal_isCoastIdlePhaIndcn_FR_Tx 215
	#define ComSignal_isChrgnTiEstimd_FR_Tx 216
	#define ComSignal_isHvEgyLoadFctReq_FR_Tx 217
	#define ComSignal_isRcwmBrkActvd_FR_Tx 218
	#define ComSignal_isComLostExtrSound_FR_Tx 219
	#define ComSignal_isLeakDetdActv_FR_Tx 220
	#define ComSignal_isSumActv_FR_Tx 221
	#define ComSignal_isAltFltMecl_FR_Tx 222
	#define ComSignal_isAltNoResp_FR_Tx 223
	#define ComSignal_isCmptmtCoolgSts_FR_Tx 224
	#define ComSignal_isCoastIdleActv_FR_Tx 225
	#define ComSignal_isCrsEcoActv_FR_Tx 226
	#define ComSignal_isDispBattEgyIn_FR_Tx 227
	#define ComSignal_isEngCooltInhbFlow_FR_Tx 228
	#define ComSignal_isEvaprVlvReqRe_FR_Tx 229
	#define ComSignal_isHvHeatgPwrAllwd_FR_Tx 230
	#define ComSignal_isUBoostReqByPt_FR_Tx 231
	#define ComSignal_isStopStrtStbIndcn_FR_Tx 232
	#define ComSignal_isDstTrvldFromBrkBkp_FR_Tx 233
	#define ComSignal_isEpbBtnCtrlSt_FR_Tx 234
	#define ComSignal_isEngOilLvl_FR_Tx 235
	#define ComSignal_isRngExtd_FR_Tx 236
	#define ComSignal_isFuTankPOkForFuHeatr_FR_Tx 237
	#define ComSignal_isBattRlyFlt_FR_Tx 238
	#define ComSignal_isEngStbActI_FR_Tx 239
	#define ComSignal_isBodyHei_FR_Tx 240
	#define ComSignal_isEngFuCnsFild_FR_Tx 241
	#define ComSignal_isImobEngSts2_FR_Tx 242
	#define ComSignal_isImobEngSts3_FR_Tx 243
	#define ComSignal_isLvlgDirMovmtIndcr_FR_Tx 244
	#define ComSignal_isPinionSteerAgMax1_FR_Tx 245
	#define ComSignal_isStrtMsgToModMngt_FR_Tx 246
	#define ComSignal_isTankFlapLockUnlckReq_FR_Tx 247
	#define ComSignal_isTrsmParkAutRdy_FR_Tx 248
	#define ComSignal_isHvEgyCnsAllwdForClima_FR_Tx 249
	#define ComSignal_isTrsmLockSts_FR_Tx 250
	#define ComSignal_isRdyPostImpctBrkg_FR_Tx 251
	#define ComSignal_isTrsmGearAct_FR_Tx 252
	#define ComSignal_isEngAmbTCalcd_FR_Tx 253
	#define ComSignal_isHmiVehStopForRefu_FR_Tx 254
	#define ComSignal_isElecDrvSysThermLimnLvl_FR_Tx 255
	#define ComSignal_isPrpsnHvBattUsgOfHldSmtBlkd_FR_Tx 256
	#define ComSignal_isPrpsnHvBattUsgOfDispSoc_FR_Tx 257
	#define ComSignal_isPrpsnHvBattUsgOfHldBlkd_FR_Tx 258
	#define ComSignal_isPrpsnHvBattUsgOfChrgBlkd_FR_Tx 259
	#define ComSignal_isiTPMSCalPsbl_FR_Tx 260
	#define ComSignal_isiTPMSCalSts_FR_Tx 261
	#define ComSignal_isiTPMSTirePMSts_FR_Tx 262
	#define ComSignal_isPrpsnHvBattUsgOfChrgBlkd2_FR_Tx 263
	#define ComSignal_isPrpsnHvBattUsgOfHldSmtBlkd2_FR_Tx 264
	#define ComSignal_isPrpsnHvBattUsgOfHldBlkd2_FR_Tx 265
	#define ComSignal_isBrkTqAtWhlsReq_0_FR_Tx 266
	#define ComSignal_isCrsCtrlrActvnOk_FR_Tx 267
	#define ComSignal_isAccSts_FR_Tx 268
	#define ComSignal_isAdjSpdLimnActvnOk_FR_Tx 269
	#define ComSignal_isAdjSpdLimnMsg_FR_Tx 270
	#define ComSignal_isAdjSpdLimnSts_FR_Tx 271
	#define ComSignal_isSteerStsToParkAssi_FR_Tx 272
	#define ComSignal_isAdjSpdLimnStbOk_FR_Tx 273
	#define ComSignal_isStopStrtInhb_FR_Tx 274
	#define ComSignal_isAccStbOk_FR_Tx 275
	#define ComSignal_isAdjSpdLimnWarn_FR_Tx 276
	#define ComSignal_isCrsCtrlrStbOk_FR_Tx 277
	#define ComSignal_isCrsCtrlrSts_FR_Tx 278
	#define ComSignal_isAccStopModOk_FR_Tx 279
	#define ComSignal_isEscCtrlIndcn_0_FR_Tx 280
	#define ComSignal_isAbsCtrlActv_0_FR_Tx 281
	#define ComSignal_isDispOfPrpsnPwrPercAct_FR_Tx 282
	#define ComSignal_isParkAssiDrvrSteerOvrdSts_FR_Tx 283
	#define ComSignal_isDrvrDesDir_FR_Tx 284
	#define ComSignal_isAccInhbByPrpsn_FR_Tx 285
	#define ComSignal_isDrvrGearLvrLockIndcn_FR_Tx 286
	#define ComSignal_isCrsCtrlOvrdn_FR_Tx 287
	#define ComSignal_isCrsCtrlrMsg_FR_Tx 288
	#define ComSignal_isPrpsnStsForAcc_FR_Tx 289
	#define ComSignal_isAccrPedlRat_FR_Tx 290
	#define ComSignal_isEngSt1WdSts_FR_Tx 291
	#define ComSignal_isDispBoostElec_FR_Tx 292
	#define ComSignal_isAsyALgtActvAftLim_0_FR_Tx 293
	#define ComSignal_isSteerWhlTqLimActvd_FR_Tx 294
	#define ComSignal_isWhlMotSysSpdAct_FR_Tx 295
	#define ComSignal_isDrvrDecelReq_FR_Tx 296
	#define ComSignal_isRlyCrashForHvsysReq_FR_Tx 297
	#define ComSignal_isDrvrBrkTqAtWhlsGrdtReqd_FR_Tx 298
	#define ComSignal_isAccActvnOk_FR_Tx 299
	#define ComSignal_isUBoostReqBySteerFrnt_FR_Tx 300
	#define ComSignal_isGearLvrIndcn_FR_Tx 301
	#define ComSignal_isSpprtBattChrgnReq_CAN_Tx 302
	#define ComSignal_isSpprtBattOkForCrkCold_CAN_Tx 303
	#define ComSignal_PNCEntranceChasEiraTx 304
	#define ComSignal_InfotainmentHMIChasEiraTx 305
	#define ComSignal_VisibilityChasEiraTx 306
	#define ComSignal_PNCLockingChasEiraTx 307
	#define ComSignal_Pnc_PNCDrivingInfoChasEiraTx 308
	#define ComSignal_Pnc_PNCDrivingInfoPollChasEiraTx 309
	#define ComSignal_PNCGSDChasEiraTx 310
	#define ComSignal_PNCGlobalChasEiraTx 311
	#define ComSignal_PNCTrailerCaravanChasEiraTx 312
	#define ComSignal_PNCDrivingChasEiraTx 313
	#define ComSignal_Pnc_PNCPreClimatizationChasEiraTx 314
	#define ComSignal_Pnc_PNCChargingChasEiraTx 315
	#define ComSignal_PNCStartChasEiraTx 316
	#define ComSignal_CanNmUserDataSigChasCAN 317
	#define ComSignal_PNCEntrancePropEiraTx 318
	#define ComSignal_InfotainmentHMIPropEiraTx 319
	#define ComSignal_VisibilityPropEiraTx 320
	#define ComSignal_PNCLockingPropEiraTx 321
	#define ComSignal_Pnc_PNCDrivingInfoPropEiraTx 322
	#define ComSignal_Pnc_PNCDrivingInfoPollPropEiraTx 323
	#define ComSignal_PNCGSDPropEiraTx 324
	#define ComSignal_PNCGlobalPropEiraTx 325
	#define ComSignal_PNCTrailerCaravanPropEiraTx 326
	#define ComSignal_PNCDrivingPropEiraTx 327
	#define ComSignal_Pnc_PNCPreClimatizationPropEiraTx 328
	#define ComSignal_Pnc_PNCChargingPropEiraTx 329
	#define ComSignal_PNCStartPropEiraTx 330
	#define ComSignal_CanNmUserDataSigPropCAN 331
	#define ComSignal_PNCTrailerCaravanFlexrayEiraTx 332
	#define ComSignal_PNCDrivingFlexrayEiraTx 333
	#define ComSignal_Pnc_PNCPreClimatizationFlexrayEiraTx 334
	#define ComSignal_PNCStartFlexrayEiraTx 335
	#define ComSignal_PNCEntranceFlexrayEiraTx 336
	#define ComSignal_InfotainmentHMIFlexrayEiraTx 337
	#define ComSignal_Pnc_BodyFlexrayEiraTx 338
	#define ComSignal_VisibilityFlexrayEiraTx 339
	#define ComSignal_Pnc_WarningSoundsFlexrayEiraTx 340
	#define ComSignal_Pnc_HazardFlexrayEiraTx 341
	#define ComSignal_PNCLockingFlexrayEiraTx 342
	#define ComSignal_Pnc_PNCDrivingInfoFlexrayEiraTx 343
	#define ComSignal_Pnc_PNCDrivingInfoPollFlexrayEiraTx 344
	#define ComSignal_PNCGSDFlexrayEiraTx 345
	#define ComSignal_PNCGlobalFlexrayEiraTx 346
	#define ComSignal_FrNmUserDataSigFlexray 347

/* Rx Signal ID*/
	#define ComSignal_isBodyHei_CAN_Rx 0
	#define ComSignal_isSumActv_CAN_Rx 1
	#define ComSignal_isSuspCnseEgy_CAN_Rx 2
	#define ComSignal_isSteerWhlTqLimActvd_CAN_Rx 3
	#define ComSignal_isSteerTqReqScaCoeff_CAN_Rx 4
	#define ComSignal_isUBoostReqBySteerFrnt_CAN_Rx 5
	#define ComSignal_isFrntSteerFEstimd1_CAN_Rx 6
	#define ComSignal_isSteerLockWarnIndcn_CAN_Rx 7
	#define ComSignal_isLvlgDirMovmtIndcr_CAN_Rx 8
	#define ComSignal_isSuspStabyCritFailrDetd_CAN_Rx 9
	#define ComSignal_isAdjSpdLimnStbOk_CAN_Rx 10
	#define ComSignal_isAdjSpdLimnActvnOk_CAN_Rx 11
	#define ComSignal_isCrsCtrlrStbOk_CAN_Rx 12
	#define ComSignal_isAccStbOk_CAN_Rx 13
	#define ComSignal_isRlyCrashForHvsysReq_CAN_Rx 14
	#define ComSignal_isAccActvnOk_CAN_Rx 15
	#define ComSignal_isAccrPedlRatGrdt_CAN_Rx 16
	#define ComSignal_isPrpsnTqReReq_CAN_Rx 17
	#define ComSignal_isPtBrkTqRgnAtAxleReAct_CAN_Rx 18
	#define ComSignal_isPtGearTar_CAN_Rx 19
	#define ComSignal_isAccSts_CAN_Rx 20
	#define ComSignal_isAdjSpdLimnWarn_CAN_Rx 21
	#define ComSignal_isAdjSpdLimnMsg_CAN_Rx 22
	#define ComSignal_isPtTqAtAxleAvlReMax_CAN_Rx 23
	#define ComSignal_isPtVehSpdMax_CAN_Rx 24
	#define ComSignal_isCrsCtrlrActvnOk_CAN_Rx 25
	#define ComSignal_isAccStopModOk_CAN_Rx 26
	#define ComSignal_isAdjSpdLimnSts_CAN_Rx 27
	#define ComSignal_isCrsCtrlrSts_CAN_Rx 28
	#define ComSignal_isCrsCtrlrMsg_CAN_Rx 29
	#define ComSignal_isEngSpdDispd_CAN_Rx 30
	#define ComSignal_isPtTqAtAxleAvlFrntMax_CAN_Rx 31
	#define ComSignal_isSteerWhlTqAddl_CAN_Rx 32
	#define ComSignal_isDrvrGearLvrLockIndcn_CAN_Rx 33
	#define ComSignal_isGearLvrIndcn_CAN_Rx 34
	#define ComSignal_isHvCooltHeatrEnad_CAN_Rx 35
	#define ComSignal_isDrvrPrpsnTqReq_CAN_Rx 36
	#define ComSignal_isStopStrtInhb_CAN_Rx 37
	#define ComSignal_isCrsCtrlOvrdn_CAN_Rx 38
	#define ComSignal_isPrpsnHvBattUsgOfHldSmtBlkd2_CAN_Rx 39
	#define ComSignal_isPrpsnHvBattUsgOfHldBlkd2_CAN_Rx 40
	#define ComSignal_isPrpsnHvBattUsgOfChrgBlkd2_CAN_Rx 41
	#define ComSignal_isPrpsnStsForAcc_CAN_Rx 42
	#define ComSignal_isDispOfPrpsnPwrPercAct_CAN_Rx 43
	#define ComSignal_isAccInhbByPrpsn_CAN_Rx 44
	#define ComSignal_isDispOfPrpsnMod_CAN_Rx 45
	#define ComSignal_isHvEgyCnsAllwdForClima_CAN_Rx 46
	#define ComSignal_isPrpsnHvBattUsgModAct_CAN_Rx 47
	#define ComSignal_isPrpsnHvBattUsgOfChrgBlkd_CAN_Rx 48
	#define ComSignal_isPrpsnHvBattUsgOfDispSoc_CAN_Rx 49
	#define ComSignal_isPrpsnHvBattUsgOfHldBlkd_CAN_Rx 50
	#define ComSignal_isPrpsnHvBattUsgOfHldSmtBlkd_CAN_Rx 51
	#define ComSignal_isSpdTarForHillDwnCtrl_CAN_Rx 52
	#define ComSignal_isPinionSteerAgMax1_CAN_Rx 53
	#define ComSignal_isParkAssiDrvrSteerOvrdSts_CAN_Rx 54
	#define ComSignal_isSteerStsToParkAssi_CAN_Rx 55
	#define ComSignal_isSteerServoSts_CAN_Rx 56
	#define ComSignal_isDispBoostElec_CAN_Rx 57
	#define ComSignal_isHmiFuLidOpenSts_CAN_Rx 58
	#define ComSignal_isHmiFuTankRdy_CAN_Rx 59
	#define ComSignal_isPtGearRatFrntAct_CAN_Rx 60
	#define ComSignal_isCluPedlRat_CAN_Rx 61
	#define ComSignal_isALgtReqForCmftToPrpsnAftLim_CAN_Rx 62
	#define ComSignal_isPtTqTotDrgAtWhls_CAN_Rx 63
	#define ComSignal_isDispOfBrkPwrPercRgnMin_CAN_Rx 64
	#define ComSignal_isDispOfPrpsnPwrPercElecMax_CAN_Rx 65
	#define ComSignal_isEngSpdMaxDispd_CAN_Rx 66
	#define ComSignal_isParkByDrvrWhlsFrnt_CAN_Rx 67
	#define ComSignal_isEngCooltIndcnReq_CAN_Rx 68
	#define ComSignal_isEngEffSts_CAN_Rx 69
	#define ComSignal_isPtTqAtAxleAvlReMin_CAN_Rx 70
	#define ComSignal_isEngBrkMax_CAN_Rx 71
	#define ComSignal_isPrpsnModOfSaveBlkd_CAN_Rx 72
	#define ComSignal_isPrpsnModElecDrvBlkd_CAN_Rx 73
	#define ComSignal_isAltIAvl_CAN_Rx 74
	#define ComSignal_isAltI_CAN_Rx 75
	#define ComSignal_isEngPwrNormDes_CAN_Rx 76
	#define ComSignal_isStrtMsgToModMngt_CAN_Rx 77
	#define ComSignal_isHmiEngHybSts_CAN_Rx 78
	#define ComSignal_isHmiFuLidNotClsd_CAN_Rx 79
	#define ComSignal_isEngPwrCns_CAN_Rx 80
	#define ComSignal_isTankFlapLockUnlckReq_CAN_Rx 81
	#define ComSignal_isTrsmParkAutRdy_CAN_Rx 82
	#define ComSignal_isCmptmtCoolgSts_CAN_Rx 83
	#define ComSignal_isEngCooltLoFlowReq_CAN_Rx 84
	#define ComSignal_isEngOilLvlSts_CAN_Rx 85
	#define ComSignal_isHvHeatgPwrAllwd_CAN_Rx 86
	#define ComSignal_isHvEgyLoadFctReq_CAN_Rx 87
	#define ComSignal_isPrpsnModOfTracBlkd_CAN_Rx 88
	#define ComSignal_isFuTankPOkForFuHeatr_CAN_Rx 89
	#define ComSignal_isEngPAmbAir1_CAN_Rx 90
	#define ComSignal_isEngStallMsgToModMngt_CAN_Rx 91
	#define ComSignal_isEngEgyEffElec_CAN_Rx 92
	#define ComSignal_isEngOilPWarn_CAN_Rx 93
	#define ComSignal_isPrpsnErrIndcnReq_CAN_Rx 94
	#define ComSignal_isPrpsnModSptBlkd_CAN_Rx 95
	#define ComSignal_isDispHvBattLvlOfChrg_CAN_Rx 96
	#define ComSignal_isEngFuCnsFild_CAN_Rx 97
	#define ComSignal_isEngFuCns_CAN_Rx 98
	#define ComSignal_isImobBrkNrSerlReq_CAN_Rx 99
	#define ComSignal_isPtParkReqToWhlsRe_CAN_Rx 100
	#define ComSignal_isEngPwrCritDes_CAN_Rx 101
	#define ComSignal_isEngStbActI_CAN_Rx 102
	#define ComSignal_isEngLoadReqElec_CAN_Rx 103
	#define ComSignal_isAltIAvlAtIdle_CAN_Rx 104
	#define ComSignal_isHvPwrAvlForClimaEstimd_CAN_Rx 105
	#define ComSignal_isImobEngSts1_CAN_Rx 106
	#define ComSignal_isPwrCnsReqAtHvBattFlt_CAN_Rx 107
	#define ComSignal_isDstEstimdToEmptyForDrvgElec_CAN_Rx 108
	#define ComSignal_isStopStrtStbIndcn_CAN_Rx 109
	#define ComSignal_isAltFltElec_CAN_Rx 110
	#define ComSignal_isCoastIdleActv_CAN_Rx 111
	#define ComSignal_isFltCrkIndcn_CAN_Rx 112
	#define ComSignal_isAltNoResp_CAN_Rx 113
	#define ComSignal_isCoastAPhaIndcn_CAN_Rx 114
	#define ComSignal_isEngCooltTPercForDisp_CAN_Rx 115
	#define ComSignal_isAltFltMecl_CAN_Rx 116
	#define ComSignal_isEvaprVlvReqRe_CAN_Rx 117
	#define ComSignal_isHvClimaCmd_CAN_Rx 118
	#define ComSignal_isUBoostReqByPt_CAN_Rx 119
	#define ComSignal_isHvacCooltFlowAct_CAN_Rx 120
	#define ComSignal_isPrpsnModOffroadBlkd_CAN_Rx 121
	#define ComSignal_isEngCrashFb_CAN_Rx 122
	#define ComSignal_isLeakDetdActv_CAN_Rx 123
	#define ComSignal_isCrsEcoActv_CAN_Rx 124
	#define ComSignal_isCoastIdlePhaIndcn_CAN_Rx 125
	#define ComSignal_isAltFltT_CAN_Rx 126
	#define ComSignal_isEngOilLvl_CAN_Rx 127
	#define ComSignal_isDispBattEgyIn_CAN_Rx 128
	#define ComSignal_isDispBattEgyOut_CAN_Rx 129
	#define ComSignal_isHmiVehStopForRefu_CAN_Rx 130
	#define ComSignal_isAltBoostIndcn_CAN_Rx 131
	#define ComSignal_isRngExtd_CAN_Rx 132
	#define ComSignal_isBattRlyFlt_CAN_Rx 133
	#define ComSignal_isOnBdChrgrHndlSts_CAN_Rx 134
	#define ComSignal_isChrgrSt_CAN_Rx 135
	#define ComSignal_isChrgnTiEstimd_CAN_Rx 136
	#define ComSignal_isDftlFltIndcn_CAN_Rx 137
	#define ComSignal_isTrsmStAxleReActr_CAN_Rx 138
	#define ComSignal_isDftlRatReRi_CAN_Rx 139
	#define ComSignal_isDrvrDesDir_CAN_Rx 140
	#define ComSignal_isHvPwrEgyPrio_CAN_Rx 141
	#define ComSignal_isEngCooltInhbFlow_CAN_Rx 142
	#define ComSignal_isComLostExtrSound_CAN_Rx 143
	#define ComSignal_isHvSysCrashFb_CAN_Rx 144
	#define ComSignal_isEngSt1WdSts_CAN_Rx 145
	#define ComSignal_isPtGearAct_CAN_Rx 146
	#define ComSignal_isWhlMotSysSpdAct_CAN_Rx 147
	#define ComSignal_isImobEngSts2_CAN_Rx 148
	#define ComSignal_isDcDcActvd_CAN_Rx 149
	#define ComSignal_isIsgModSts_CAN_Rx 150
	#define ComSignal_isIDcDcAvlMaxLoSide_CAN_Rx 151
	#define ComSignal_isIDcDcActLoSide_CAN_Rx 152
	#define ComSignal_isFltTDcDc_CAN_Rx 153
	#define ComSignal_isFltElecDcDc_CAN_Rx 154
	#define ComSignal_isImobEngSts3_CAN_Rx 155
	#define ComSignal_isTrsmGearAct_CAN_Rx 156
	#define ComSignal_isTrsmFltIndcn_CAN_Rx 157
	#define ComSignal_isEngAmbTCalcd_CAN_Rx 158
	#define ComSignal_isMonrCycCmpl_CAN_Rx 159
	#define ComSignal_isPrpsnSysActv_CAN_Rx 160
	#define ComSignal_isAccrPedlRat_CAN_Rx 161
	#define ComSignal_isCnclReqForCrsCtrl_FR_Rx 162
	#define ComSignal_isAccInhbReq_FR_Rx 163
	#define ComSignal_isAccActvnInSpdLoCfmd_FR_Rx 164
	#define ComSignal_isAsyPinionAgReq_FR_Rx 165
	#define ComSignal_isRcwmBrkReq_FR_Rx 166
	#define ComSignal_isSteerTqSgnReq_FR_Rx 167
	#define ComSignal_isSpdOfTarForAsyCmft_FR_Rx 168
	#define ComSignal_isIntvSide_FR_Rx 169
	#define ComSignal_isAsyDamprReq_FR_Rx 170
	#define ComSignal_isAsyRoadCrvt_FR_Rx 171
	#define ComSignal_isHeatrIntkCooltTEstimd_FR_Rx 172
	#define ComSignal_isHoodSts_FR_Rx 173
	#define ComSignal_isTrSts_FR_Rx 174
	#define ComSignal_isHvacCoolgEnaFrnt_FR_Rx 175
	#define ComSignal_isChrgHndlStrtEna_FR_Rx 176
	#define ComSignal_isTwliBriSts_FR_Rx 177
	#define ComSignal_isDoorPassSts_FR_Rx 178
	#define ComSignal_isIntrBriSts_FR_Rx 179
	#define ComSignal_isDoorDrvrSts_FR_Rx 180
	#define ComSignal_isPtActvnReq1WdPtActvnReq_FR_Rx 181
	#define ComSignal_isDoorPassReSts_FR_Rx 182
	#define ComSignal_isSteerLockEnagOfPrpsn_FR_Rx 183
	#define ComSignal_isHybFacyStart_FR_Rx 184
	#define ComSignal_isTInCooltAtStrtOfClima_FR_Rx 185
	#define ComSignal_isCmptmtAirTEstimdAtRowFirstLoResl_FR_Rx 186
	#define ComSignal_isEngActvnMod1WdReq_FR_Rx 187
	#define ComSignal_isChrgnUReqMin_FR_Rx 188
	#define ComSignal_isSpprtBattOkForCrkCold_FR_Rx 189
	#define ComSignal_isFltBrkLiReq_FR_Rx 190
	#define ComSignal_isClimaTiOfEnd_FR_Rx 191
	#define ComSignal_isHvacAirMFlowEstimd_FR_Rx 192
	#define ComSignal_isHvacRecircAct_FR_Rx 193
	#define ComSignal_isWhlCircum_FR_Rx 194
	#define ComSignal_isChrgnUReq_FR_Rx 195
	#define ComSignal_isClimaActv_FR_Rx 196
	#define ComSignal_isDoorDrvrReSts_FR_Rx 197
	#define ComSignal_isEngSpdIncIdleForClima_FR_Rx 198
	#define ComSignal_isProfPenSts1_FR_Rx 199
	#define ComSignal_isPwrSplyErrSts_FR_Rx 200
	#define ComSignal_isEngRunngReqByClima_FR_Rx 201
	#define ComSignal_isHvacHeatrPwrCns_FR_Rx 202
	#define ComSignal_isHeatrCooltT_FR_Rx 203
	#define ComSignal_isHvacEvaprTSpFrnt_FR_Rx 204
	#define ComSignal_isHvacCooltVlvSts_FR_Rx 205
	#define ComSignal_isHvHeatgPwrCns_FR_Rx 206
	#define ComSignal_isIncSpdIdleElecReq_FR_Rx 207
	#define ComSignal_isSpprtBattChrgnReq_FR_Rx 208
	#define ComSignal_isEngHeatgReq_FR_Rx 209
	#define ComSignal_isHvEgyDesForClima_FR_Rx 210
	#define ComSignal_isDrvrCrsCtrlFctDeactvnReq_FR_Rx 211
	#define ComSignal_isDrvrCrsCtrlFctSeld_FR_Rx 212
	#define ComSignal_isSetSpdForKeySpdLimn_FR_Rx 213
	#define ComSignal_isDrvrCrsCtrlFctActvReq_FR_Rx 214
	#define ComSignal_isSetSpdForCrsCtrlFct_FR_Rx 215
	#define ComSignal_isSetSpdSts_FR_Rx 216
	#define ComSignal_isSrvRst_FR_Rx 217
	#define ComSignal_isHmiCmptmtCoolgReq_FR_Rx 218
	#define ComSignal_isDrvModReq_FR_Rx 219
	#define ComSignal_isDrvModDispd_FR_Rx 220
	#define ComSignal_isSoundExtActvSts_FR_Rx 221
	#define ComSignal_isPrpsnHvBattUsgStsDispd_FR_Rx 222
	#define ComSignal_isPrpsnHvBattUsgOfHldSpd_FR_Rx 223
	#define ComSignal_isSaveSetgToMemPrmnt_FR_Rx 224
	#define ComSignal_isDrvrEntryLoReq_FR_Rx 225
	#define ComSignal_isEngStrtStopSetg_FR_Rx 226
	#define ComSignal_isHvHeatgPwrNormDes_FR_Rx 227
	#define ComSignal_isClimaSts_FR_Rx 228
	#define ComSignal_isPwrIncGendWdReq_FR_Rx 229
	#define ComSignal_isCooltFlowFromWtrPmpAux_FR_Rx 230
	#define ComSignal_isEvaprVlvReSts_FR_Rx 231
	#define ComSignal_isHvacCooltFlowReq_FR_Rx 232
	#define ComSignal_isBattChgInhbReq1WdReq_FR_Rx 233
	#define ComSignal_isHvHeatgPwrCritDes_FR_Rx 234
	#define ComSignal_isEngPwrAllwdDeltaWdCmd_FR_Rx 235
	#define ComSignal_isHvacAirMFlowReEstimd_FR_Rx 236
	#define ComSignal_isPwrAvlRednWdSts_FR_Rx 237
	#define ComSignal_isTankFlapReqFromSwtIntrFild_FR_Rx 238
	#define ComSignal_isFuTankPRelsForFuHeatrReq_FR_Rx 239
	#define ComSignal_isTrlrPrsnt_0_FR_Rx 240
	#define ComSignal_isTiDrvgCycOff_FR_Rx 241
	#define ComSignal_isHvacCoolgEnaRe_FR_Rx 242
	#define ComSignal_isCarTiGlb_0_FR_Rx 243
	#define ComSignal_isChrgnUReqMax_FR_Rx 244
	#define ComSignal_isChrgMod_FR_Rx 245
	#define ComSignal_isTankFlapSts_FR_Rx 246
	#define ComSignal_isURateUpRampMax_FR_Rx 247
	#define ComSignal_isVehParkNotActvd_FR_Rx 248
	#define ComSignal_isBkpOfDstTrvld_0_FR_Rx 249
	#define ComSignal_isSteerWhlHeatgOnReq_FR_Rx 250
	#define ComSignal_isDeactvtLvlgCtrl_FR_Rx 251
	#define ComSignal_isSpdLimFirst_FR_Rx 252
	#define ComSignal_isSpdLimUnit_FR_Rx 253
	#define ComSignal_isEngRunngReqByParkAssi_FR_Rx 254
	#define ComSignal_isParkAssiLatCtrlModReq_FR_Rx 255
	#define ComSignal_isTrsmLockSts_CAN_Rx 256
	#define ComSignal_isElecDrvSysThermLimnLvl_CAN_Rx 257
	#define ComSignal_isPrpsnHvBattUsgModReq_FR_Rx 258
	#define ComSignal_isIniValMstCfgIDChassisCAN_CAN_Rx 259
	#define ComSignal_isIniValMstCfgIDPropulsionCAN_CAN_Rx 260
	#define ComSignal_isPtTiToCluEngmt_CAN_Rx 261
	#define ComSignal_isLoadValCalcd_CAN_Rx 262
	#define ComSignal_isThrPos_CAN_Rx 263
	#define ComSignal_isPrpsnTqFrntReq_CAN_Rx 264
	#define ComSignal_isIniValSigCfgIDBackboneFR_FR_Rx 265
	#define ComSignal_isBrkPedlStsOk_FR_Rx 266
	#define ComSignal_isAsySteerWhlHptcWarnReq_FR_Rx 267
	#define ComSignal_isWhlSpdCmpFac_FR_Rx 268
	#define ComSignal_isAsyStandStillReqForCmft_FR_Rx 269
	#define ComSignal_isAsySftyStandStillReq_FR_Rx 270
	#define ComSignal_isAsyALgtReqHysForCmft_FR_Rx 271
	#define ComSignal_isFRNetworkStatus_FR_Rx 272
	#define ComSignal_isBackCntrForMissCom_FR_Rx 273
	#define ComSignal_isMstCfgIDBackboneFR_FR_Rx 274
	#define ComSignal_isDeactvtTestCom_CAN_Rx 275
	#define ComSignal_Pnc_PNCDrivingInfoChasEraRx 276
	#define ComSignal_Pnc_PNCPreClimatizationChasEraRx 277
	#define ComSignal_Pnc_PNCDrivingInfoPropEraRx 278
	#define ComSignal_Pnc_PNCPreClimatizationPropEraRx 279
	#define ComSignal_Pnc_PNCDrivingInfoPollFlexrayEraRx 280
	#define ComSignal_Pnc_PNCPreClimatizationFlexrayEraRx 281
	#define ComSignal_PNCEntranceChasEiraRx 282
	#define ComSignal_InfotainmentHMIChasEiraRx 283
	#define ComSignal_VisibilityChasEiraRx 284
	#define ComSignal_PNCLockingChasEiraRx 285
	#define ComSignal_Pnc_PNCDrivingInfoChasCANEiraRx 286
	#define ComSignal_PNCGSDChasEiraRx 287
	#define ComSignal_PNCGlobalChasEiraRx 288
	#define ComSignal_PNCTrailerCaravanChasEiraRx 289
	#define ComSignal_PNCDrivingChasEiraRx 290
	#define ComSignal_Pnc_PNCPreClimatizationCANEiraRx 291
	#define ComSignal_PNCStartChasEiraRx 292
	#define ComSignal_PNCEntranceFlexrayEiraRx 293
	#define ComSignal_InfotainmentHMIFlexrayEiraRx 294
	#define ComSignal_VisibilityFlexrayEiraRx 295
	#define ComSignal_PNCLockingFlexrayEiraRx 296
	#define ComSignal_Pnc_PNCDrivingInfoPollFlexrayEiraRx 297
	#define ComSignal_PNCGSDFlexrayEiraRx 298
	#define ComSignal_PNCGlobalFlexrayEiraRx 299
	#define ComSignal_PNCTrailerCaravanFlexrayEiraRx 300
	#define ComSignal_PNCDrivingFlexrayEiraRx 301
	#define ComSignal_Pnc_PNCPreClimatizationFlexrayEiraRx 302
	#define ComSignal_PNCStartFlexrayEiraRx 303
	#define ComSignal_isiTPMSCalReq_FR_Rx 304





/* Group Signal Ids */


/* Tx GroupSignal ID*/
#ifdef COM_TX_SIGNALGROUP

	#define ComGroupSignal_isPtTqAtAxleFrntMinReq_CAN_Tx 0

	#define ComGroupSignal_isPtTqAtAxleFrntMinReqCntr_CAN_Tx 1

	#define ComGroupSignal_isPtTqAtAxleFrntMinReqChks_CAN_Tx 2

	#define ComGroupSignal_isPtTqAtAxleFrntAddReq_CAN_Tx 3

	#define ComGroupSignal_isPtTqAtAxleReAddReq_CAN_Tx 4

	#define ComGroupSignal_isPtTqAtAxleAddReqChks_CAN_Tx 5

	#define ComGroupSignal_isPtTqAtAxleAddReqCntr_CAN_Tx 6

	#define ComGroupSignal_isVehDynCtrlStsForBrkPrecActv_1_CAN_Tx 7

	#define ComGroupSignal_isVehDynCtrlStsNotEna_1_CAN_Tx 8

	#define ComGroupSignal_isVehDynCtrlStsDend_1_CAN_Tx 9

	#define ComGroupSignal_isVehDynCtrlStsForBrkActv_1_CAN_Tx 10

	#define ComGroupSignal_isVehDynCtrlStsForStandStillMgrForPark_1_CAN_Tx 11

	#define ComGroupSignal_isVehDynCtrlStsCntr_1_CAN_Tx 12

	#define ComGroupSignal_isVehDynCtrlStsChks_1_CAN_Tx 13

	#define ComGroupSignal_isVehDynCtrlStsForWhlBrkWrm_1_CAN_Tx 14

	#define ComGroupSignal_isBltLockStAtDrvrForDevErrSts2_CAN_Tx 15

	#define ComGroupSignal_isBltLockStAtDrvrForBltLockSt1_CAN_Tx 16

	#define ComGroupSignal_isAVert2Qf1_0_CAN_Tx 17

	#define ComGroupSignal_isALgt1_0_CAN_Tx 18

	#define ComGroupSignal_isALat1_0_CAN_Tx 19

	#define ComGroupSignal_isADataRawSafeChks_0_CAN_Tx 20

	#define ComGroupSignal_isALat1Qf1_0_CAN_Tx 21

	#define ComGroupSignal_isADataRawSafeCntr_0_CAN_Tx 22

	#define ComGroupSignal_isALgt1Qf1_0_CAN_Tx 23

	#define ComGroupSignal_isAVert2_0_CAN_Tx 24

	#define ComGroupSignal_isVehSpdLgtSafeCntr_1_CAN_Tx 25

	#define ComGroupSignal_isVehSpdLgtSafeChks_1_CAN_Tx 26

	#define ComGroupSignal_isVehSpdLgtSafe_1_CAN_Tx 27

	#define ComGroupSignal_isVehSpdLgtSafeQf_1_CAN_Tx 28

	#define ComGroupSignal_isDrvrBrkTqAtWhlsReqd_1_CAN_Tx 29

	#define ComGroupSignal_isDrvrBrkTqAtWhlsReqdQf_1_CAN_Tx 30

	#define ComGroupSignal_isDrvrBrkTqAtWhlsReqdDrvrBrkTqAtWhlsReqdChks_1_CAN_Tx 31

	#define ComGroupSignal_isDrvrBrkTqAtWhlsReqdDrvrBrkTqAtWhlsReqdCntr_1_CAN_Tx 32

	#define ComGroupSignal_isLatCtrlReqSafeCntr_CAN_Tx 33

	#define ComGroupSignal_isLatCtrlModReqSafe_CAN_Tx 34

	#define ComGroupSignal_isSteerWhlHptcWarnReqSafe_CAN_Tx 35

	#define ComGroupSignal_isSteerTqReqSafe_CAN_Tx 36

	#define ComGroupSignal_isLatCtrlReqSafeChks_CAN_Tx 37

	#define ComGroupSignal_isVehMQly_1_CAN_Tx 38

	#define ComGroupSignal_isVehM_1_CAN_Tx 39

	#define ComGroupSignal_isVehMNomTrlrM_1_CAN_Tx 40

	#define ComGroupSignal_isWhlRotToothCntrFrntLe_1_CAN_Tx 41

	#define ComGroupSignal_isWhlRotToothCntrReLe_1_CAN_Tx 42

	#define ComGroupSignal_isWhlRotToothCntrFrntRi_1_CAN_Tx 43

	#define ComGroupSignal_isWhlRotToothCntrReRi_1_CAN_Tx 44

	#define ComGroupSignal_isHvacEvaprTFrntQf_CAN_Tx 45

	#define ComGroupSignal_isHvacEvaprTFrnt_CAN_Tx 46

	#define ComGroupSignal_isWhlSpdCircumlReLeQf_1_CAN_Tx 47

	#define ComGroupSignal_isWhlSpdCircumlReLe_1_CAN_Tx 48

	#define ComGroupSignal_isWhlSpdCircumlReRiQf_1_CAN_Tx 49

	#define ComGroupSignal_isWhlSpdCircumlReRi_1_CAN_Tx 50

	#define ComGroupSignal_isWhlSpdCircumlReWhlSpdCircumlReChks_1_CAN_Tx 51

	#define ComGroupSignal_isWhlSpdCircumlReWhlSpdCircumlReCntr_1_CAN_Tx 52

	#define ComGroupSignal_isBrkPedlPsd_1_CAN_Tx 53

	#define ComGroupSignal_isBrkPedlNotPsdSafe_1_CAN_Tx 54

	#define ComGroupSignal_isBrkPedlPsdCntr_1_CAN_Tx 55

	#define ComGroupSignal_isBrkPedlPsdChks_1_CAN_Tx 56

	#define ComGroupSignal_isBrkPedlPsdQf_1_CAN_Tx 57

	#define ComGroupSignal_isRoadIncln_1_CAN_Tx 58

	#define ComGroupSignal_isRoadInclnQf_1_CAN_Tx 59

	#define ComGroupSignal_isALgtStdFromWhlSpdSafeChks_1_CAN_Tx 60

	#define ComGroupSignal_isALgtStdFromWhlSpdSafeCntr_1_CAN_Tx 61

	#define ComGroupSignal_isALgtStdFromWhlSpdSafe_1_CAN_Tx 62

	#define ComGroupSignal_isALgtStdFromWhlSpdSafeQf_1_CAN_Tx 63

	#define ComGroupSignal_isWhlSpdCircumlFrntLeQf_1_CAN_Tx 64

	#define ComGroupSignal_isWhlSpdCircumlFrntLe_1_CAN_Tx 65

	#define ComGroupSignal_isWhlSpdCircumlFrntRiQf_1_CAN_Tx 66

	#define ComGroupSignal_isWhlSpdCircumlFrntWhlSpdCircumlFrntChks_1_CAN_Tx 67

	#define ComGroupSignal_isWhlSpdCircumlFrntWhlSpdCircumlFrntRi_1_CAN_Tx 68

	#define ComGroupSignal_isWhlSpdCircumlFrntWhlSpdCircumlFrntCntr_1_CAN_Tx 69

	#define ComGroupSignal_isLgtPosLimForJerkForCmftToPrpsn_CAN_Tx 70

	#define ComGroupSignal_isPrpsnActrReqdForCmft_CAN_Tx 71

	#define ComGroupSignal_isALgtReqForCmftToPrpsn_CAN_Tx 72

	#define ComGroupSignal_isLgtNegLimForJerkForCmftToPrpsn_CAN_Tx 73

	#define ComGroupSignal_isALgtLimForTrPwrForCmftToPrpsn_CAN_Tx 74

	#define ComGroupSignal_isALgtRespForTrPwrForCmftToPrpsn_CAN_Tx 75

	#define ComGroupSignal_isYawRate1_0_CAN_Tx 76

	#define ComGroupSignal_isRollRate1Qf1_0_CAN_Tx 77

	#define ComGroupSignal_isYawRate1Qf1_0_CAN_Tx 78

	#define ComGroupSignal_isAgDataRawSafeChks_0_CAN_Tx 79

	#define ComGroupSignal_isAgDataRawSafeCntr_0_CAN_Tx 80

	#define ComGroupSignal_isRollRate1_0_CAN_Tx 81

	#define ComGroupSignal_isParkAssiPinionAgReq_CAN_Tx 82

	#define ComGroupSignal_isParkAssiPinionAgReqChks_CAN_Tx 83

	#define ComGroupSignal_isParkAssiPinionAgReqCntr_CAN_Tx 84

	#define ComGroupSignal_isAsyALgtLimForTrPwrForCmft_CAN_Tx 85

	#define ComGroupSignal_isAsyALgtRespForTrPwrForCmft_CAN_Tx 86

	#define ComGroupSignal_isSteerLockDataReq4_CAN_Tx 87

	#define ComGroupSignal_isSteerLockDataReq6_CAN_Tx 88

	#define ComGroupSignal_isSteerLockDataReq3_CAN_Tx 89

	#define ComGroupSignal_isSteerLockDataReq2_CAN_Tx 90

	#define ComGroupSignal_isSteerLockDataReq1_CAN_Tx 91

	#define ComGroupSignal_isSteerLockDataReq0_CAN_Tx 92

	#define ComGroupSignal_isSteerLockDataReq5_CAN_Tx 93

	#define ComGroupSignal_isSteerLockReqCmd_CAN_Tx 94

	#define ComGroupSignal_isImobEngDataMgrReq0_CAN_Tx 95

	#define ComGroupSignal_isImobEngDataMgrReq6_CAN_Tx 96

	#define ComGroupSignal_isImobEngDataMgrReq1_CAN_Tx 97

	#define ComGroupSignal_isImobEngDataMgrReq5_CAN_Tx 98

	#define ComGroupSignal_isImobEngDataMgrReq2_CAN_Tx 99

	#define ComGroupSignal_isImobEngMgrReqCmd1_CAN_Tx 100

	#define ComGroupSignal_isImobEngDataMgrReq3_CAN_Tx 101

	#define ComGroupSignal_isImobEngDataMgrReq4_CAN_Tx 102

	#define ComGroupSignal_isImobBrkNrSerl1_CAN_Tx 103

	#define ComGroupSignal_isImobBrkNrSerl5_CAN_Tx 104

	#define ComGroupSignal_isImobBrkNrSerl0_CAN_Tx 105

	#define ComGroupSignal_isImobBrkNrSerl2_CAN_Tx 106

	#define ComGroupSignal_isImobBrkNrSerl4_CAN_Tx 107

	#define ComGroupSignal_isImobBrkNrSerl3_CAN_Tx 108

	#define ComGroupSignal_isCmptmtTFrnt_CAN_Tx 109

	#define ComGroupSignal_isFanForCmptmtTRunng_CAN_Tx 110

	#define ComGroupSignal_isCmptmtTFrntQf_CAN_Tx 111

	#define ComGroupSignal_isDay_CAN_Tx 112

	#define ComGroupSignal_isYr_CAN_Tx 113

	#define ComGroupSignal_isMins_CAN_Tx 114

	#define ComGroupSignal_isMth_CAN_Tx 115

	#define ComGroupSignal_isHr_CAN_Tx 116

	#define ComGroupSignal_isSec_CAN_Tx 117

	#define ComGroupSignal_isTiAndDateVld_CAN_Tx 118

	#define ComGroupSignal_isSteerMod_CAN_Tx 119

	#define ComGroupSignal_isSteerAsscLvl_CAN_Tx 120

	#define ComGroupSignal_isSteerSetgPen_CAN_Tx 121

	#define ComGroupSignal_isHmiDefrstElecReReq_CAN_Tx 122

	#define ComGroupSignal_isHmiDefrstElecFrntReq_CAN_Tx 123

	#define ComGroupSignal_isHmiDefrstElecForMirrReq_CAN_Tx 124

	#define ComGroupSignal_isVehBattUSysU_0_CAN_Tx 125

	#define ComGroupSignal_isVehBattUSysUQf_0_CAN_Tx 126

	#define ComGroupSignal_isPtDrvrSetgSts_CAN_Tx 127

	#define ComGroupSignal_isPtDrvrSetgPen_CAN_Tx 128

	#define ComGroupSignal_isLvlCtrlSetg_CAN_Tx 129

	#define ComGroupSignal_isSuspCtrlSetg_CAN_Tx 130

	#define ComGroupSignal_isSuspIdPen_CAN_Tx 131

	#define ComGroupSignal_isEngIdleEco1Sts_CAN_Tx 132

	#define ComGroupSignal_isEngIdleEco1Pen_CAN_Tx 133

	#define ComGroupSignal_isVinPosn1_CAN_Tx 134

	#define ComGroupSignal_isVinPosn2_CAN_Tx 135

	#define ComGroupSignal_isVinPosn5_CAN_Tx 136

	#define ComGroupSignal_isVinBlk_CAN_Tx 137

	#define ComGroupSignal_isVinPosn3_CAN_Tx 138

	#define ComGroupSignal_isVinPosn4_CAN_Tx 139

	#define ComGroupSignal_isVinPosn7_CAN_Tx 140

	#define ComGroupSignal_isVinPosn6_CAN_Tx 141

	#define ComGroupSignal_isAmbTIndcdUnit_0_CAN_Tx 142

	#define ComGroupSignal_isAmbTIndcdQf_0_CAN_Tx 143

	#define ComGroupSignal_isAmbTIndcd_0_CAN_Tx 144

	#define ComGroupSignal_isHmiSeatVentnForRowFirstLe_CAN_Tx 145

	#define ComGroupSignal_isHmiSeatHeatgForRowFirstRi_CAN_Tx 146

	#define ComGroupSignal_isHmiSeatHeatgForRowSecRi_CAN_Tx 147

	#define ComGroupSignal_isHmiSeatHeatgForRowSecLe_CAN_Tx 148

	#define ComGroupSignal_isHmiSeatVentnForRowFirstRi_CAN_Tx 149

	#define ComGroupSignal_isHmiSeatHeatgForRowFirstLe_CAN_Tx 150

	#define ComGroupSignal_isSpdRotlForWhlsAtAxleFrntCntr_CAN_Tx 151

	#define ComGroupSignal_isSpdRotlForWhlsAtAxleFrntChks_CAN_Tx 152

	#define ComGroupSignal_isSpdRotlForWhlsAtAxleFrnt_CAN_Tx 153

	#define ComGroupSignal_isEngRunngReqByVehModMgrClimate_CAN_Tx 154

	#define ComGroupSignal_isEngRunngReqByVehModMgrElectricalSystem_CAN_Tx 155

	#define ComGroupSignal_isEngRunngReqByVehModMgrChassie_CAN_Tx 156

	#define ComGroupSignal_isEngRunngReqByVehModMgrTrailerPrsnt_CAN_Tx 157

	#define ComGroupSignal_isVehSpdIndcdVal_CAN_Tx 158

	#define ComGroupSignal_isVehSpdIndcdUnit_CAN_Tx 159

	#define ComGroupSignal_isEscSt_1_CAN_Tx 160

	#define ComGroupSignal_isEscStChks_1_CAN_Tx 161

	#define ComGroupSignal_isEscStCntr_1_CAN_Tx 162

	#define ComGroupSignal_isFuLvlIndcdQly_CAN_Tx 163

	#define ComGroupSignal_isFuLvlIndcdVal_CAN_Tx 164

	#define ComGroupSignal_isFuLvlRawActvSideQly_CAN_Tx 165

	#define ComGroupSignal_isFuLvlRawActvSideVal_CAN_Tx 166

	#define ComGroupSignal_isFuLvlRawPasSideQly_CAN_Tx 167

	#define ComGroupSignal_isFuLvlRawPasSideVal_CAN_Tx 168

	#define ComGroupSignal_isLimForJerkPosNotExcdCntr_CAN_Tx 169

	#define ComGroupSignal_isLimForJerkPosNotExcdChks_CAN_Tx 170

	#define ComGroupSignal_isLimForJerkPosNotExcd_CAN_Tx 171

	#define ComGroupSignal_isVehMtnStCntr_1_CAN_Tx 172

	#define ComGroupSignal_isVehMtnStChks_1_CAN_Tx 173

	#define ComGroupSignal_isVehMtnStSafe_1_CAN_Tx 174

	#define ComGroupSignal_isVehModMngtGlbSafe1Chks_0_CAN_Tx 175

	#define ComGroupSignal_isCarModSts1_0_CAN_Tx 176

	#define ComGroupSignal_isVehModMngtGlbSafe1Cntr_0_CAN_Tx 177

	#define ComGroupSignal_isEgyLvlElecSubtyp_0_CAN_Tx 178

	#define ComGroupSignal_isPwrLvlElecSubtyp_0_CAN_Tx 179

	#define ComGroupSignal_isCarModSubtypWdCarModSubtyp_0_CAN_Tx 180

	#define ComGroupSignal_isUsgModSts_0_CAN_Tx 181

	#define ComGroupSignal_isPwrLvlElecMai_0_CAN_Tx 182

	#define ComGroupSignal_isEgyLvlElecMai_0_CAN_Tx 183

	#define ComGroupSignal_isFltEgyCnsWdSts_0_CAN_Tx 184

	#define ComGroupSignal_isActvnOfCrsEcoSts_CAN_Tx 185

	#define ComGroupSignal_isActvnOfCrsEcoPen_CAN_Tx 186

	#define ComGroupSignal_isDrvrPrsntQf_CAN_Tx 187

	#define ComGroupSignal_isDrvrPrsnt_CAN_Tx 188

	#define ComGroupSignal_isDrvrPrsntStsDrvrPrsntChks_CAN_Tx 189

	#define ComGroupSignal_isDrvrPrsntStsDrvrPrsntCntr_CAN_Tx 190

	#define ComGroupSignal_isEngStrtStopDrvModIndSetgPen_CAN_Tx 191

	#define ComGroupSignal_isEngStrtStopDrvModIndSetgSts_CAN_Tx 192

	#define ComGroupSignal_isDoorStsForDoorDrvrStsWithFacQly_CAN_Tx 193

	#define ComGroupSignal_isFacQlyForDoorDrvrStsWithFacQly_CAN_Tx 194

	#define ComGroupSignal_isAmbTRawQly_0_CAN_Tx 195

	#define ComGroupSignal_isAmbTRawVal_0_CAN_Tx 196

	#define ComGroupSignal_isBrkFricTqAtWhlFrntRiAct_1_CAN_Tx 197

	#define ComGroupSignal_isBrkFricTqAtWhlReLeAct_1_CAN_Tx 198

	#define ComGroupSignal_isBrkFricTqAtWhlReRiAct_1_CAN_Tx 199

	#define ComGroupSignal_isBrkFricTqAtWhlFrntLeAct_1_CAN_Tx 200

	#define ComGroupSignal_isWhlSpdCircumlReLeQf_2_CAN_Tx 201

	#define ComGroupSignal_isWhlSpdCircumlReLe_2_CAN_Tx 202

	#define ComGroupSignal_isWhlSpdCircumlReRiQf_2_CAN_Tx 203

	#define ComGroupSignal_isWhlSpdCircumlReRi_2_CAN_Tx 204

	#define ComGroupSignal_isWhlSpdCircumlReWhlSpdCircumlReChks_2_CAN_Tx 205

	#define ComGroupSignal_isWhlSpdCircumlReWhlSpdCircumlReCntr_2_CAN_Tx 206

	#define ComGroupSignal_isVehSpdLgtSafeCntr_2_CAN_Tx 207

	#define ComGroupSignal_isVehSpdLgtSafeChks_2_CAN_Tx 208

	#define ComGroupSignal_isVehSpdLgtSafe_2_CAN_Tx 209

	#define ComGroupSignal_isVehSpdLgtSafeQf_2_CAN_Tx 210

	#define ComGroupSignal_isBrkPedlPsd_2_CAN_Tx 211

	#define ComGroupSignal_isBrkPedlNotPsdSafe_2_CAN_Tx 212

	#define ComGroupSignal_isBrkPedlPsdCntr_2_CAN_Tx 213

	#define ComGroupSignal_isBrkPedlPsdChks_2_CAN_Tx 214

	#define ComGroupSignal_isBrkPedlPsdQf_2_CAN_Tx 215

	#define ComGroupSignal_isVehMtnStCntr_2_CAN_Tx 216

	#define ComGroupSignal_isVehMtnStChks_2_CAN_Tx 217

	#define ComGroupSignal_isVehMtnStSafe_2_CAN_Tx 218

	#define ComGroupSignal_isImobEngDataMgrReq24_CAN_Tx 219

	#define ComGroupSignal_isImobEngMgrReqCmd2_CAN_Tx 220

	#define ComGroupSignal_isImobEngDataMgrReq23_CAN_Tx 221

	#define ComGroupSignal_isImobEngDataMgrReq22_CAN_Tx 222

	#define ComGroupSignal_isImobEngDataMgrReq20_CAN_Tx 223

	#define ComGroupSignal_isImobEngDataMgrReq25_CAN_Tx 224

	#define ComGroupSignal_isImobEngDataMgrReq26_CAN_Tx 225

	#define ComGroupSignal_isImobEngDataMgrReq21_CAN_Tx 226

	#define ComGroupSignal_isAVert2Qf1_1_CAN_Tx 227

	#define ComGroupSignal_isALgt1_1_CAN_Tx 228

	#define ComGroupSignal_isALat1_1_CAN_Tx 229

	#define ComGroupSignal_isADataRawSafeChks_1_CAN_Tx 230

	#define ComGroupSignal_isALat1Qf1_1_CAN_Tx 231

	#define ComGroupSignal_isADataRawSafeCntr_1_CAN_Tx 232

	#define ComGroupSignal_isALgt1Qf1_1_CAN_Tx 233

	#define ComGroupSignal_isAVert2_1_CAN_Tx 234

	#define ComGroupSignal_isWhlSpdCircumlFrntLeQf_2_CAN_Tx 235

	#define ComGroupSignal_isWhlSpdCircumlFrntLe_2_CAN_Tx 236

	#define ComGroupSignal_isWhlSpdCircumlFrntRiQf_2_CAN_Tx 237

	#define ComGroupSignal_isWhlSpdCircumlFrntWhlSpdCircumlFrntChks_2_CAN_Tx 238

	#define ComGroupSignal_isWhlSpdCircumlFrntWhlSpdCircumlFrntRi_2_CAN_Tx 239

	#define ComGroupSignal_isWhlSpdCircumlFrntWhlSpdCircumlFrntCntr_2_CAN_Tx 240

	#define ComGroupSignal_isPtTqAtAxleReMinReqCntr_CAN_Tx 241

	#define ComGroupSignal_isPtTqAtAxleReMinReq_CAN_Tx 242

	#define ComGroupSignal_isPtTqAtAxleReMinReqChks_CAN_Tx 243

	#define ComGroupSignal_isBrkFricTqTotAtWhlsActBrkFricTqTotAtWhlsActCntr_1 244

	#define ComGroupSignal_isBrkFricTqTotAtWhlsActBrkFricTqTotAtWhlsActChks_1 245

	#define ComGroupSignal_isBrkFricTqTotAtWhlsActBrkFricTqTotAtWhlsAct_1 246

	#define ComGroupSignal_isLockgCenTrigSrc_CAN_Tx 247

	#define ComGroupSignal_isLockgCenStsLockSt_CAN_Tx 248

	#define ComGroupSignal_isLockgCenStsUpdEve_CAN_Tx 249

	#define ComGroupSignal_isYawRate1_1_CAN_Tx 250

	#define ComGroupSignal_isRollRate1Qf1_1_CAN_Tx 251

	#define ComGroupSignal_isYawRate1Qf1_1_CAN_Tx 252

	#define ComGroupSignal_isAgDataRawSafeChks_1_CAN_Tx 253

	#define ComGroupSignal_isAgDataRawSafeCntr_1_CAN_Tx 254

	#define ComGroupSignal_isRollRate1_1_CAN_Tx 255

	#define ComGroupSignal_isAmbTIndcdUnit_1_CAN_Tx 256

	#define ComGroupSignal_isAmbTIndcdQf_1_CAN_Tx 257

	#define ComGroupSignal_isAmbTIndcd_1_CAN_Tx 258

	#define ComGroupSignal_isLimForDecelNotExcd_CAN_Tx 259

	#define ComGroupSignal_isLimForDecelChks_CAN_Tx 260

	#define ComGroupSignal_isLimForDecelCntr_CAN_Tx 261

	#define ComGroupSignal_isVehModMngtGlbSafe1Chks_1_CAN_Tx 262

	#define ComGroupSignal_isCarModSts1_1_CAN_Tx 263

	#define ComGroupSignal_isVehModMngtGlbSafe1Cntr_1_CAN_Tx 264

	#define ComGroupSignal_isEgyLvlElecSubtyp_1_CAN_Tx 265

	#define ComGroupSignal_isPwrLvlElecSubtyp_1_CAN_Tx 266

	#define ComGroupSignal_isCarModSubtypWdCarModSubtyp_1_CAN_Tx 267

	#define ComGroupSignal_isUsgModSts_1_CAN_Tx 268

	#define ComGroupSignal_isPwrLvlElecMai_1_CAN_Tx 269

	#define ComGroupSignal_isEgyLvlElecMai_1_CAN_Tx 270

	#define ComGroupSignal_isFltEgyCnsWdSts_1_CAN_Tx 271

	#define ComGroupSignal_isImobEngDataMgrReq34_CAN_Tx 272

	#define ComGroupSignal_isImobEngMgrReqCmd3_CAN_Tx 273

	#define ComGroupSignal_isImobEngDataMgrReq32_CAN_Tx 274

	#define ComGroupSignal_isImobEngDataMgrReq35_CAN_Tx 275

	#define ComGroupSignal_isImobEngDataMgrReq36_CAN_Tx 276

	#define ComGroupSignal_isImobEngDataMgrReq31_CAN_Tx 277

	#define ComGroupSignal_isImobEngDataMgrReq30_CAN_Tx 278

	#define ComGroupSignal_isImobEngDataMgrReq33_CAN_Tx 279

	#define ComGroupSignal_isDrvrBrkTqAtWhlsReqd_2_CAN_Tx 280

	#define ComGroupSignal_isDrvrBrkTqAtWhlsReqdQf_2_CAN_Tx 281

	#define ComGroupSignal_isDrvrBrkTqAtWhlsReqdDrvrBrkTqAtWhlsReqdChks_2_CAN_Tx 282

	#define ComGroupSignal_isDrvrBrkTqAtWhlsReqdDrvrBrkTqAtWhlsReqdCntr_2_CAN_Tx 283

	#define ComGroupSignal_isEpbStsEpbStsCntr_1_CAN_Tx 284

	#define ComGroupSignal_isEpbStsEpbStsChks_1_CAN_Tx 285

	#define ComGroupSignal_isEpbStsEpbSts_1_CAN_Tx 286

	#define ComGroupSignal_isSteerWhlAgSafe_1_CAN_Tx 287

	#define ComGroupSignal_isSteerWhlSnsrQf_1_CAN_Tx 288

	#define ComGroupSignal_isSteerWhlSnsrSafeCntr_1_CAN_Tx 289

	#define ComGroupSignal_isSteerWhlAgSpdSafe_1_CAN_Tx 290

	#define ComGroupSignal_isSteerWhlSnsrSafeChks_1_CAN_Tx 291

	#define ComGroupSignal_isVehBattUSysU_1_CAN_Tx 292

	#define ComGroupSignal_isVehBattUSysUQf_1_CAN_Tx 293

	#define ComGroupSignal_isAmbTRawQly_1_CAN_Tx 294

	#define ComGroupSignal_isAmbTRawVal_1_CAN_Tx 295

	#define ComGroupSignal_isSteerErrReq_FR_Tx 296

	#define ComGroupSignal_isSteerErrReqCntr_FR_Tx 297

	#define ComGroupSignal_isSteerErrReqChks_FR_Tx 298

	#define ComGroupSignal_isWhlMotSysTqEstChks_FR_Tx 299

	#define ComGroupSignal_isWhlMotSysTqEst_FR_Tx 300

	#define ComGroupSignal_isWhlMotSysTqEstCntr_FR_Tx 301

	#define ComGroupSignal_isWhlMotSysTqEstQlyFac_FR_Tx 302

	#define ComGroupSignal_isWhlMotSysTqEstSpdLimn_FR_Tx 303

	#define ComGroupSignal_isEngNChks_FR_Tx 304

	#define ComGroupSignal_isEngN_FR_Tx 305

	#define ComGroupSignal_isEngNCntr_FR_Tx 306

	#define ComGroupSignal_isEngNSafeEngNGrdt_FR_Tx 307

	#define ComGroupSignal_isCluPedlPsdCluPedlPsdChks_FR_Tx 308

	#define ComGroupSignal_isCluPedlPsdCluPedlPsd_FR_Tx 309

	#define ComGroupSignal_isCluPedlPsdCluPedlPsdSts_FR_Tx 310

	#define ComGroupSignal_isCluPedlPsdCluPedlPsdCntr_FR_Tx 311

	#define ComGroupSignal_isDrvrSteerWhlHldGroupDrvrSteerWhlHldQly_FR_Tx 312

	#define ComGroupSignal_isDrvrSteerWhlHldGroupDrvrSteerWhlHld_FR_Tx 313

	#define ComGroupSignal_isPtTqAtAxleFrntAct_FR_Tx 314

	#define ComGroupSignal_isPtTqAtWhlFrntLeAct_FR_Tx 315

	#define ComGroupSignal_isPtTqAtWhlsFrntQly_FR_Tx 316

	#define ComGroupSignal_isPtTqAtWhlFrntRiAct_FR_Tx 317

	#define ComGroupSignal_isAccrPedlPsdAccrPedlPsdSts_FR_Tx 318

	#define ComGroupSignal_isAccrPedlPsdAccrPedlPsd_FR_Tx 319

	#define ComGroupSignal_isAccrPedlPsdAccrPedlPsdChks_FR_Tx 320

	#define ComGroupSignal_isAccrPedlPsdAccrPedlPsdCntr_FR_Tx 321

	#define ComGroupSignal_isVehVVehVCntr_FR_Tx 322

	#define ComGroupSignal_isVehVVehVChks_FR_Tx 323

	#define ComGroupSignal_isVehVVehVLgt_FR_Tx 324

	#define ComGroupSignal_isVehVVehVLat_FR_Tx 325

	#define ComGroupSignal_isVehVVehVLatQf_FR_Tx 326

	#define ComGroupSignal_isVehVVehVLgtQf_FR_Tx 327

	#define ComGroupSignal_isWhlSpdCircumlFrntLeQf_0_FR_Tx 328

	#define ComGroupSignal_isWhlSpdCircumlFrntLe_0_FR_Tx 329

	#define ComGroupSignal_isWhlSpdCircumlFrntRiQf_0_FR_Tx 330

	#define ComGroupSignal_isWhlSpdCircumlFrntWhlSpdCircumlFrntChks_0_FR_Tx 331

	#define ComGroupSignal_isWhlSpdCircumlFrntWhlSpdCircumlFrntRi_0_FR_Tx 332

	#define ComGroupSignal_isWhlSpdCircumlFrntWhlSpdCircumlFrntCntr_0_FR_Tx 333

	#define ComGroupSignal_isWhlSpdCircumlReLeQf_0_FR_Tx 334

	#define ComGroupSignal_isWhlSpdCircumlReLe_0_FR_Tx 335

	#define ComGroupSignal_isWhlSpdCircumlReRiQf_0_FR_Tx 336

	#define ComGroupSignal_isWhlSpdCircumlReRi_0_FR_Tx 337

	#define ComGroupSignal_isWhlSpdCircumlReWhlSpdCircumlReChks_0_FR_Tx 338

	#define ComGroupSignal_isWhlSpdCircumlReWhlSpdCircumlReCntr_0_FR_Tx 339

	#define ComGroupSignal_isPtCluTqPtCluTqQly_FR_Tx 340

	#define ComGroupSignal_isPtCluTqPtCluTq_FR_Tx 341

	#define ComGroupSignal_isPtCluTqPtCluTqDyn_FR_Tx 342

	#define ComGroupSignal_isBarForFuEco_FR_Tx 343

	#define ComGroupSignal_isGrdForFuEco_FR_Tx 344

	#define ComGroupSignal_isOvrdDetd1Cntr_FR_Tx 345

	#define ComGroupSignal_isOvrdDetd1_FR_Tx 346

	#define ComGroupSignal_isOvrdDetd1Chks_FR_Tx 347

	#define ComGroupSignal_isImobEngDataChk36_FR_Tx 348

	#define ComGroupSignal_isImobEngDataChk30_FR_Tx 349

	#define ComGroupSignal_isImobEngDataChk35_FR_Tx 350

	#define ComGroupSignal_isImobEngDataChk32_FR_Tx 351

	#define ComGroupSignal_isImobEngDataChk33_FR_Tx 352

	#define ComGroupSignal_isImobEngDataChk31_FR_Tx 353

	#define ComGroupSignal_isImobEngChkSts3_FR_Tx 354

	#define ComGroupSignal_isImobEngDataChk34_FR_Tx 355

	#define ComGroupSignal_isRoadIncln_0_FR_Tx 356

	#define ComGroupSignal_isRoadInclnQf_0_FR_Tx 357

	#define ComGroupSignal_isRollAgCmpRollAgCmpQly_FR_Tx 358

	#define ComGroupSignal_isRollAgCmpRollAgCmp_FR_Tx 359

	#define ComGroupSignal_isBrkHptcStsSafeCntr_FR_Tx 360

	#define ComGroupSignal_isBrkHptcDendSafe_FR_Tx 361

	#define ComGroupSignal_isBrkHptcEnaSafe_FR_Tx 362

	#define ComGroupSignal_isBrkHptcStsSafeChks_FR_Tx 363

	#define ComGroupSignal_isEscSt_0_FR_Tx 364

	#define ComGroupSignal_isEscStChks_0_FR_Tx 365

	#define ComGroupSignal_isEscStCntr_0_FR_Tx 366

	#define ComGroupSignal_isTrsmParkLockdChks_FR_Tx 367

	#define ComGroupSignal_isTrsmParkLockd_FR_Tx 368

	#define ComGroupSignal_isTrsmParkLockdCntr_FR_Tx 369

	#define ComGroupSignal_isAsySftyEnaDecelAckd_FR_Tx 370

	#define ComGroupSignal_isAsyBrkGainEnaAckd_FR_Tx 371

	#define ComGroupSignal_isHybErrIndcnReqTelltlBattTracFailr_FR_Tx 372

	#define ComGroupSignal_isHybErrIndcnReqTelltlBattTracCutOff_FR_Tx 373

	#define ComGroupSignal_isHybErrIndcnReqTelltlSysHybFailr_FR_Tx 374

	#define ComGroupSignal_isHybErrIndcnReqTelltlElecDrvFailr_FR_Tx 375

	#define ComGroupSignal_isImobEngDataChk5_FR_Tx 376

	#define ComGroupSignal_isImobEngDataChk6_FR_Tx 377

	#define ComGroupSignal_isImobEngDataChk1_FR_Tx 378

	#define ComGroupSignal_isImobEngDataChk3_FR_Tx 379

	#define ComGroupSignal_isImobEngDataChk4_FR_Tx 380

	#define ComGroupSignal_isImobEngDataChk0_FR_Tx 381

	#define ComGroupSignal_isImobEngDataChk2_FR_Tx 382

	#define ComGroupSignal_isImobEngChkSts1_FR_Tx 383

	#define ComGroupSignal_isImobEngDataChk22_FR_Tx 384

	#define ComGroupSignal_isImobEngDataChk23_FR_Tx 385

	#define ComGroupSignal_isImobEngDataChk24_FR_Tx 386

	#define ComGroupSignal_isImobEngDataChk26_FR_Tx 387

	#define ComGroupSignal_isImobEngChkSts2_FR_Tx 388

	#define ComGroupSignal_isImobEngDataChk20_FR_Tx 389

	#define ComGroupSignal_isImobEngDataChk25_FR_Tx 390

	#define ComGroupSignal_isImobEngDataChk21_FR_Tx 391

	#define ComGroupSignal_isBrkLiOnReqChks_FR_Tx 392

	#define ComGroupSignal_isBrkLiOnReqSts_FR_Tx 393

	#define ComGroupSignal_isBrkLiOnReqCntr_FR_Tx 394

	#define ComGroupSignal_isBrkAndAbsWarnIndcnReqCntr_FR_Tx 395

	#define ComGroupSignal_isBrkWarnIndcnReq_FR_Tx 396

	#define ComGroupSignal_isBrkAndAbsWarnIndcnReqChks_FR_Tx 397

	#define ComGroupSignal_isAbsWarnIndcnReq_FR_Tx 398

	#define ComGroupSignal_isVehMQly_0_FR_Tx 399

	#define ComGroupSignal_isVehM_0_FR_Tx 400

	#define ComGroupSignal_isVehMNomTrlrM_0_FR_Tx 401

	#define ComGroupSignal_isVehDynCtrlStsForBrkPrecActv_0_FR_Tx 402

	#define ComGroupSignal_isVehDynCtrlStsNotEna_0_FR_Tx 403

	#define ComGroupSignal_isVehDynCtrlStsDend_0_FR_Tx 404

	#define ComGroupSignal_isVehDynCtrlStsForBrkActv_0_FR_Tx 405

	#define ComGroupSignal_isVehDynCtrlStsForStandStillMgrForPark_0_FR_Tx 406

	#define ComGroupSignal_isVehDynCtrlStsCntr_0_FR_Tx 407

	#define ComGroupSignal_isVehDynCtrlStsChks_0_FR_Tx 408

	#define ComGroupSignal_isVehDynCtrlStsForWhlBrkWrm_0_FR_Tx 409

	#define ComGroupSignal_isOvrdDecelByDrvrOvrdDecelByDrvrCntr_FR_Tx 410

	#define ComGroupSignal_isOvrdDecelByDrvrOvrdDecelByDrvrChks_FR_Tx 411

	#define ComGroupSignal_isOvrdDecelByDrvrOvrdDecelByDrvr_FR_Tx 412

	#define ComGroupSignal_isFricEstimnFromVehDyn_FR_Tx 413

	#define ComGroupSignal_isFricEstimnFromVehDynQly_FR_Tx 414

	#define ComGroupSignal_isEpbLampReqChks_FR_Tx 415

	#define ComGroupSignal_isEpbLampReqCntr_FR_Tx 416

	#define ComGroupSignal_isEpbLampReq_FR_Tx 417

	#define ComGroupSignal_isSftySteerLockSts_FR_Tx 418

	#define ComGroupSignal_isSteerLockStsUnit_FR_Tx 419

	#define ComGroupSignal_isFltSteerLockSts_FR_Tx 420

	#define ComGroupSignal_isBoltSteerLockSts_FR_Tx 421

	#define ComGroupSignal_isEscWarnIndcnReqChks_FR_Tx 422

	#define ComGroupSignal_isEscWarnIndcnReq_FR_Tx 423

	#define ComGroupSignal_isEscWarnIndcnReqCntr_FR_Tx 424

	#define ComGroupSignal_isCrsSetSpdEcoCrsSetSpdEcoLo_FR_Tx 425

	#define ComGroupSignal_isCrsSetSpdEcoCrsSetSpdEcoHi_FR_Tx 426

	#define ComGroupSignal_isCoolgLoad_FR_Tx 427

	#define ComGroupSignal_isCoolgLimd_FR_Tx 428

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn2_FR_Tx 429

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn11_FR_Tx 430

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn8_FR_Tx 431

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn1_FR_Tx 432

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn13_FR_Tx 433

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn6_FR_Tx 434

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn14_FR_Tx 435

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn5_FR_Tx 436

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn3_FR_Tx 437

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn15_FR_Tx 438

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn7_FR_Tx 439

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn4_FR_Tx 440

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn10_FR_Tx 441

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn12_FR_Tx 442

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn9_FR_Tx 443

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn25_FR_Tx 444

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn26_FR_Tx 445

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn19_FR_Tx 446

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn27_FR_Tx 447

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn16_FR_Tx 448

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn17_FR_Tx 449

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn24_FR_Tx 450

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn22_FR_Tx 451

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn23_FR_Tx 452

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn21_FR_Tx 453

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn20_FR_Tx 454

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn18_FR_Tx 455

	#define ComGroupSignal_isEngT_FR_Tx 456

	#define ComGroupSignal_isEngTQf_FR_Tx 457

	#define ComGroupSignal_isSuspFailrStsSuspFailrStsChks_FR_Tx 458

	#define ComGroupSignal_isSuspFailrStsSuspFailrStsCntr_FR_Tx 459

	#define ComGroupSignal_isSuspFailrStsSuspFailrSts_FR_Tx 460

	#define ComGroupSignal_isSuspFailrStsSuspFailrStsTypQf_FR_Tx 461

	#define ComGroupSignal_isSteerLockDataChk2_FR_Tx 462

	#define ComGroupSignal_isSteerLockDataChk5_FR_Tx 463

	#define ComGroupSignal_isSteerLockDataChk0_FR_Tx 464

	#define ComGroupSignal_isSteerLockDataChk1_FR_Tx 465

	#define ComGroupSignal_isSteerLockDataChk4_FR_Tx 466

	#define ComGroupSignal_isSteerLockChkSts_FR_Tx 467

	#define ComGroupSignal_isSteerLockDataChk3_FR_Tx 468

	#define ComGroupSignal_isSteerLockDataChk6_FR_Tx 469

	#define ComGroupSignal_isBrkSysWarnIndcnReqBrkSysWarnIndcnReq_FR_Tx 470

	#define ComGroupSignal_isBrkSysWarnIndcnReqBrkSysWarnIndcnReqCntr_FR_Tx 471

	#define ComGroupSignal_isBrkSysWarnIndcnReqBrkSysWarnIndcnReqChks_FR_Tx 472

	#define ComGroupSignal_isTrsmLockChkData6_FR_Tx 473

	#define ComGroupSignal_isTrsmLockChkChk_FR_Tx 474

	#define ComGroupSignal_isTrsmLockChkData1_FR_Tx 475

	#define ComGroupSignal_isTrsmLockChkData3_FR_Tx 476

	#define ComGroupSignal_isTrsmLockChkData2_FR_Tx 477

	#define ComGroupSignal_isTrsmLockChkData4_FR_Tx 478

	#define ComGroupSignal_isTrsmLockChkData0_FR_Tx 479

	#define ComGroupSignal_isTrsmLockChkData5_FR_Tx 480

	#define ComGroupSignal_isBrkFricTqAtWhlFrntRiAct_0_FR_Tx 481

	#define ComGroupSignal_isBrkFricTqAtWhlReLeAct_0_FR_Tx 482

	#define ComGroupSignal_isBrkFricTqAtWhlReRiAct_0_FR_Tx 483

	#define ComGroupSignal_isBrkFricTqAtWhlFrntLeAct_0_FR_Tx 484

	#define ComGroupSignal_isPitchAgGlbQf_FR_Tx 485

	#define ComGroupSignal_isPitchAgGlbVal_FR_Tx 486

	#define ComGroupSignal_isRollAgGlbVal_FR_Tx 487

	#define ComGroupSignal_isRollAgGlbQf_FR_Tx 488

	#define ComGroupSignal_isBrkFricTqTotAtWhlsActBrkFricTqTotAtWhlsActCntr_0 489

	#define ComGroupSignal_isBrkFricTqTotAtWhlsActBrkFricTqTotAtWhlsActChks_0 490

	#define ComGroupSignal_isBrkFricTqTotAtWhlsActBrkFricTqTotAtWhlsAct_0 491

	#define ComGroupSignal_isBrkPedlPsd_0_FR_Tx 492

	#define ComGroupSignal_isBrkPedlNotPsdSafe_0_FR_Tx 493

	#define ComGroupSignal_isBrkPedlPsdCntr_0_FR_Tx 494

	#define ComGroupSignal_isBrkPedlPsdChks_0_FR_Tx 495

	#define ComGroupSignal_isBrkPedlPsdQf_0_FR_Tx 496

	#define ComGroupSignal_isVehMtnStCntr_0_FR_Tx 497

	#define ComGroupSignal_isVehMtnStChks_0_FR_Tx 498

	#define ComGroupSignal_isVehMtnStSafe_0_FR_Tx 499

	#define ComGroupSignal_isPinionSteerAgSpd1Qf_FR_Tx 500

	#define ComGroupSignal_isPinionSteerAgSpd1_FR_Tx 501

	#define ComGroupSignal_isSteerWhlTq_FR_Tx 502

	#define ComGroupSignal_isSteerWhlTqQf_FR_Tx 503

	#define ComGroupSignal_isVehSpdLgtSafeCntr_0_FR_Tx 504

	#define ComGroupSignal_isVehSpdLgtSafeChks_0_FR_Tx 505

	#define ComGroupSignal_isVehSpdLgtSafe_0_FR_Tx 506

	#define ComGroupSignal_isVehSpdLgtSafeQf_0_FR_Tx 507

	#define ComGroupSignal_isSteerWhlAgSafe_0_FR_Tx 508

	#define ComGroupSignal_isSteerWhlSnsrQf_0_FR_Tx 509

	#define ComGroupSignal_isSteerWhlSnsrSafeCntr_0_FR_Tx 510

	#define ComGroupSignal_isSteerWhlAgSpdSafe_0_FR_Tx 511

	#define ComGroupSignal_isSteerWhlSnsrSafeChks_0_FR_Tx 512

	#define ComGroupSignal_isWhlDirRotlReRi_FR_Tx 513

	#define ComGroupSignal_isWhlDirRotlReLe_FR_Tx 514

	#define ComGroupSignal_isSuspPosnVertAg_FR_Tx 515

	#define ComGroupSignal_isSuspPosnVertAgQf_FR_Tx 516

	#define ComGroupSignal_isEpbStsEpbStsCntr_0_FR_Tx 517

	#define ComGroupSignal_isEpbStsEpbStsChks_0_FR_Tx 518

	#define ComGroupSignal_isEpbStsEpbSts_0_FR_Tx 519

	#define ComGroupSignal_isLatCtrlModCfmdCntr_FR_Tx 520

	#define ComGroupSignal_isLatCtrlModCfmdChks_FR_Tx 521

	#define ComGroupSignal_isLatCtrlModCfmdLatCtrlMod_FR_Tx 522

	#define ComGroupSignal_isPinionSteerAg1Qf_FR_Tx 523

	#define ComGroupSignal_isPinionSteerAg1_FR_Tx 524

	#define ComGroupSignal_isGearTarIndcn_FR_Tx 525

	#define ComGroupSignal_isGearIndcn_FR_Tx 526

	#define ComGroupSignal_isGearShiftIndcn_FR_Tx 527

	#define ComGroupSignal_isDrvrBrkTqAtWhlsReqd_0_FR_Tx 528

	#define ComGroupSignal_isDrvrBrkTqAtWhlsReqdQf_0_FR_Tx 529

	#define ComGroupSignal_isDrvrBrkTqAtWhlsReqdDrvrBrkTqAtWhlsReqdChks_0_FR_Tx 530

	#define ComGroupSignal_isDrvrBrkTqAtWhlsReqdDrvrBrkTqAtWhlsReqdCntr_0_FR_Tx 531

	#define ComGroupSignal_isALgtStdFromWhlSpdSafeChks_0_FR_Tx 532

	#define ComGroupSignal_isALgtStdFromWhlSpdSafeCntr_0_FR_Tx 533

	#define ComGroupSignal_isALgtStdFromWhlSpdSafe_0_FR_Tx 534

	#define ComGroupSignal_isALgtStdFromWhlSpdSafeQf_0_FR_Tx 535

	#define ComGroupSignal_isWhlRotToothCntrFrntLe_0_FR_Tx 536

	#define ComGroupSignal_isWhlRotToothCntrReLe_0_FR_Tx 537

	#define ComGroupSignal_isWhlRotToothCntrFrntRi_0_FR_Tx 538

	#define ComGroupSignal_isWhlRotToothCntrReRi_0_FR_Tx 539

	#define ComGroupSignal_isPtTqReqPtTqMinReq 540

	#define ComGroupSignal_isPtTqReqPtTqReqCntr 541

	#define ComGroupSignal_isPtTqReqPtTqMaxReq 542

	#define ComGroupSignal_isPtTqReqPtTqReqChks 543

	#define ComGroupSignal_isPtTqMaxReqPtTqMaxReq 544

	#define ComGroupSignal_isPtTqMaxReqPtTqGrdtPosForMaxReq 545

	#define ComGroupSignal_isPtTqMaxReqPtTqGrdtNegForMaxReq 546

	#define ComGroupSignal_isPtTqMaxReqPtTqReqChks 547

	#define ComGroupSignal_isPtTqMaxReqPtTqReqCntr 548

	#define ComGroupSignal_isPtTqMinReqPtTqGrdtNegForMinReq 549

	#define ComGroupSignal_isPtTqMinReqPtTqReqChks 550

	#define ComGroupSignal_isPtTqMinReqPtTqGrdtPosForMinReq 551

	#define ComGroupSignal_isPtTqMinReqPtTqMinReq 552

	#define ComGroupSignal_isPtTqMinReqPtTqReqCntr 553

	#define ComGroupSignal_isTrsmLockMgrReqData4_CAN_Tx 554

	#define ComGroupSignal_isTrsmLockMgrReqData3_CAN_Tx 555

	#define ComGroupSignal_isTrsmLockMgrReqCmd_CAN_Tx 556

	#define ComGroupSignal_isTrsmLockMgrReqData6_CAN_Tx 557

	#define ComGroupSignal_isTrsmLockMgrReqData1_CAN_Tx 558

	#define ComGroupSignal_isTrsmLockMgrReqData0_CAN_Tx 559

	#define ComGroupSignal_isTrsmLockMgrReqData2_CAN_Tx 560

	#define ComGroupSignal_isTrsmLockMgrReqData5_CAN_Tx 561

	#define ComGroupSignal_isVehCfgPrmVal5_0_CAN_Tx 562

	#define ComGroupSignal_isVehCfgPrmBlk_0_CAN_Tx 563

	#define ComGroupSignal_isVehCfgPrmVal3_0_CAN_Tx 564

	#define ComGroupSignal_isVehCfgPrmVal2_0_CAN_Tx 565

	#define ComGroupSignal_isVehCfgPrmVal1_0_CAN_Tx 566

	#define ComGroupSignal_isVehCfgPrmVal7_0_CAN_Tx 567

	#define ComGroupSignal_isVehCfgPrmVal6_0_CAN_Tx 568

	#define ComGroupSignal_isVehCfgPrmVal4_0_CAN_Tx 569

	#define ComGroupSignal_isVehCfgPrmVal5_1_CAN_Tx 570

	#define ComGroupSignal_isVehCfgPrmBlk_1_CAN_Tx 571

	#define ComGroupSignal_isVehCfgPrmVal3_1_CAN_Tx 572

	#define ComGroupSignal_isVehCfgPrmVal2_1_CAN_Tx 573

	#define ComGroupSignal_isVehCfgPrmVal1_1_CAN_Tx 574

	#define ComGroupSignal_isVehCfgPrmVal7_1_CAN_Tx 575

	#define ComGroupSignal_isVehCfgPrmVal6_1_CAN_Tx 576

	#define ComGroupSignal_isVehCfgPrmVal4_1_CAN_Tx 577

	#define ComGroupSignal_isCCPFrameRespByte7_CAN_Tx 578

	#define ComGroupSignal_isCCPFrameRespByte0_CAN_Tx 579

	#define ComGroupSignal_isCCPFrameRespByte5_CAN_Tx 580

	#define ComGroupSignal_isCCPFrameRespByte1_CAN_Tx 581

	#define ComGroupSignal_isCCPFrameRespByte6_CAN_Tx 582

	#define ComGroupSignal_isCCPFrameRespByte2_CAN_Tx 583

	#define ComGroupSignal_isCCPFrameRespByte4_CAN_Tx 584

	#define ComGroupSignal_isCCPFrameRespByte3_CAN_Tx 585

#endif
#ifdef COM_RX_SIGNALGROUP
/* Rx GroupSignal ID*/

	#define ComGroupSignal_isSuspPosnVertReRiQf_CAN_Rx 0

	#define ComGroupSignal_isSuspPosnVertReRi_CAN_Rx 1

	#define ComGroupSignal_isSuspPosnVertFrntRiQf_CAN_Rx 2

	#define ComGroupSignal_isSuspPosnVertFrntRi_CAN_Rx 3

	#define ComGroupSignal_isPinionSteerAg1Qf_CAN_Rx 4

	#define ComGroupSignal_isPinionSteerAg1_CAN_Rx 5

	#define ComGroupSignal_isPinionSteerAgSpd1Qf_CAN_Rx 6

	#define ComGroupSignal_isPinionSteerAgSpd1_CAN_Rx 7

	#define ComGroupSignal_isSftySteerLockSts_CAN_Rx 8

	#define ComGroupSignal_isSteerLockStsUnit_CAN_Rx 9

	#define ComGroupSignal_isFltSteerLockSts_CAN_Rx 10

	#define ComGroupSignal_isBoltSteerLockSts_CAN_Rx 11

	#define ComGroupSignal_isSuspAVertFrntRi_CAN_Rx 12

	#define ComGroupSignal_isSuspAVertFrntRiQf_CAN_Rx 13

	#define ComGroupSignal_isSuspAVertReLe_CAN_Rx 14

	#define ComGroupSignal_isSuspAVertReLeQf_CAN_Rx 15

	#define ComGroupSignal_isSuspAVertFrntLe_CAN_Rx 16

	#define ComGroupSignal_isSuspAVertFrntLeQf_CAN_Rx 17

	#define ComGroupSignal_isSuspAVertReRiQf_CAN_Rx 18

	#define ComGroupSignal_isSuspAVertReRi_CAN_Rx 19

	#define ComGroupSignal_isPtTqAtAxleFrntAct_CAN_Rx 20

	#define ComGroupSignal_isPtTqAtWhlFrntLeAct_CAN_Rx 21

	#define ComGroupSignal_isPtTqAtWhlsFrntQly_CAN_Rx 22

	#define ComGroupSignal_isPtTqAtWhlFrntRiAct_CAN_Rx 23

	#define ComGroupSignal_isGearTarIndcn_CAN_Rx 24

	#define ComGroupSignal_isGearIndcn_CAN_Rx 25

	#define ComGroupSignal_isGearShiftIndcn_CAN_Rx 26

	#define ComGroupSignal_isAccrPedlPsdAccrPedlPsdSts_CAN_Rx 27

	#define ComGroupSignal_isAccrPedlPsdAccrPedlPsd_CAN_Rx 28

	#define ComGroupSignal_isAccrPedlPsdAccrPedlPsdChks_CAN_Rx 29

	#define ComGroupSignal_isAccrPedlPsdAccrPedlPsdCntr_CAN_Rx 30

	#define ComGroupSignal_isPtTqAtWhlReLeAct_CAN_Rx 31

	#define ComGroupSignal_isPtTqAtWhlReRiAct_CAN_Rx 32

	#define ComGroupSignal_isPtTqAtAxleReAct_CAN_Rx 33

	#define ComGroupSignal_isPtTqAtWhlsReQly_CAN_Rx 34

	#define ComGroupSignal_isSteerWhlTq_CAN_Rx 35

	#define ComGroupSignal_isSteerWhlTqQf_CAN_Rx 36

	#define ComGroupSignal_isLatCtrlModCfmdCntr_CAN_Rx 37

	#define ComGroupSignal_isLatCtrlModCfmdChks_CAN_Rx 38

	#define ComGroupSignal_isLatCtrlModCfmdLatCtrlMod_CAN_Rx 39

	#define ComGroupSignal_isOvrdDetd1Cntr_CAN_Rx 40

	#define ComGroupSignal_isOvrdDetd1_CAN_Rx 41

	#define ComGroupSignal_isOvrdDetd1Chks_CAN_Rx 42

	#define ComGroupSignal_isPtCmftLgtPosLimForJerk_CAN_Rx 43

	#define ComGroupSignal_isPtCmftLgtNegLimForJerk_CAN_Rx 44

	#define ComGroupSignal_isPtALgtReqForCmftEna_CAN_Rx 45

	#define ComGroupSignal_isPtALgtReqForCmft_CAN_Rx 46

	#define ComGroupSignal_isDtNotEngdFrnt_CAN_Rx 47

	#define ComGroupSignal_isDtNotEngdRe_CAN_Rx 48

	#define ComGroupSignal_isDtEngdRe_CAN_Rx 49

	#define ComGroupSignal_isDtEngdFrnt_CAN_Rx 50

	#define ComGroupSignal_isOvrdDecelByDrvrOvrdDecelByDrvrCntr_CAN_Rx 51

	#define ComGroupSignal_isOvrdDecelByDrvrOvrdDecelByDrvrChks_CAN_Rx 52

	#define ComGroupSignal_isOvrdDecelByDrvrOvrdDecelByDrvr_CAN_Rx 53

	#define ComGroupSignal_isEngNChks_CAN_Rx 54

	#define ComGroupSignal_isEngN_CAN_Rx 55

	#define ComGroupSignal_isEngNCntr_CAN_Rx 56

	#define ComGroupSignal_isEngNSafeEngNGrdt_CAN_Rx 57

	#define ComGroupSignal_isBarForFuEco_CAN_Rx 58

	#define ComGroupSignal_isGrdForFuEco_CAN_Rx 59

	#define ComGroupSignal_isSteerErrReq_CAN_Rx 60

	#define ComGroupSignal_isSteerErrReqCntr_CAN_Rx 61

	#define ComGroupSignal_isSteerErrReqChks_CAN_Rx 62

	#define ComGroupSignal_isDrvrSteerWhlHldGroupDrvrSteerWhlHldQly_CAN_Rx 63

	#define ComGroupSignal_isDrvrSteerWhlHldGroupDrvrSteerWhlHld_CAN_Rx 64

	#define ComGroupSignal_isImobEngDataChk5_CAN_Rx 65

	#define ComGroupSignal_isImobEngDataChk6_CAN_Rx 66

	#define ComGroupSignal_isImobEngDataChk1_CAN_Rx 67

	#define ComGroupSignal_isImobEngDataChk3_CAN_Rx 68

	#define ComGroupSignal_isImobEngDataChk4_CAN_Rx 69

	#define ComGroupSignal_isImobEngDataChk0_CAN_Rx 70

	#define ComGroupSignal_isImobEngDataChk2_CAN_Rx 71

	#define ComGroupSignal_isImobEngChkSts1_CAN_Rx 72

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn2_CAN_Rx 73

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn11_CAN_Rx 74

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn8_CAN_Rx 75

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn1_CAN_Rx 76

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn13_CAN_Rx 77

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn6_CAN_Rx 78

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn14_CAN_Rx 79

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn5_CAN_Rx 80

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn3_CAN_Rx 81

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn15_CAN_Rx 82

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn7_CAN_Rx 83

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn4_CAN_Rx 84

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn10_CAN_Rx 85

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn12_CAN_Rx 86

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn9_CAN_Rx 87

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn25_CAN_Rx 88

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn26_CAN_Rx 89

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn19_CAN_Rx 90

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn27_CAN_Rx 91

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn16_CAN_Rx 92

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn17_CAN_Rx 93

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn24_CAN_Rx 94

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn22_CAN_Rx 95

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn23_CAN_Rx 96

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn21_CAN_Rx 97

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn20_CAN_Rx 98

	#define ComGroupSignal_isEngFltIndcnEngFltIndcn18_CAN_Rx 99

	#define ComGroupSignal_isCoolgLoad_CAN_Rx 100

	#define ComGroupSignal_isCoolgLimd_CAN_Rx 101

	#define ComGroupSignal_isCrsSetSpdEcoCrsSetSpdEcoLo_CAN_Rx 102

	#define ComGroupSignal_isCrsSetSpdEcoCrsSetSpdEcoHi_CAN_Rx 103

	#define ComGroupSignal_isHybErrIndcnReqTelltlBattTracFailr_CAN_Rx 104

	#define ComGroupSignal_isHybErrIndcnReqTelltlBattTracCutOff_CAN_Rx 105

	#define ComGroupSignal_isHybErrIndcnReqTelltlSysHybFailr_CAN_Rx 106

	#define ComGroupSignal_isHybErrIndcnReqTelltlElecDrvFailr_CAN_Rx 107

	#define ComGroupSignal_isPtCluTqPtCluTqQly_CAN_Rx 108

	#define ComGroupSignal_isPtCluTqPtCluTq_CAN_Rx 109

	#define ComGroupSignal_isPtCluTqPtCluTqDyn_CAN_Rx 110

	#define ComGroupSignal_isImobEngDataChk36_CAN_Rx 111

	#define ComGroupSignal_isImobEngDataChk30_CAN_Rx 112

	#define ComGroupSignal_isImobEngDataChk35_CAN_Rx 113

	#define ComGroupSignal_isImobEngDataChk32_CAN_Rx 114

	#define ComGroupSignal_isImobEngDataChk33_CAN_Rx 115

	#define ComGroupSignal_isImobEngDataChk31_CAN_Rx 116

	#define ComGroupSignal_isImobEngChkSts3_CAN_Rx 117

	#define ComGroupSignal_isImobEngDataChk34_CAN_Rx 118

	#define ComGroupSignal_isTrsmNTrsmNInp_CAN_Rx 119

	#define ComGroupSignal_isTrsmNTrsmNCntr_CAN_Rx 120

	#define ComGroupSignal_isTrsmNTrsmNOutpOk_CAN_Rx 121

	#define ComGroupSignal_isTrsmNTrsmNChks_CAN_Rx 122

	#define ComGroupSignal_isTrsmNTrsmNInpOk_CAN_Rx 123

	#define ComGroupSignal_isTrsmNTrsmNOutp_CAN_Rx 124

	#define ComGroupSignal_isAsyLatReqGroupSafeCntr_FR_Rx 125

	#define ComGroupSignal_isAsyLatReqGroupSafeChks_FR_Rx 126

	#define ComGroupSignal_isAsyLatCtrlModReq_FR_Rx 127

	#define ComGroupSignal_isAsyALgtLimForTrPwrForCmft_FR_Rx 128

	#define ComGroupSignal_isAsyALgtRespForTrPwrForCmft_FR_Rx 129

	#define ComGroupSignal_isHvacEvaprTFrntQf_FR_Rx 130

	#define ComGroupSignal_isHvacEvaprTFrnt_FR_Rx 131

	#define ComGroupSignal_isVehModMngtGlbSafe1Chks_0_FR_Rx 132

	#define ComGroupSignal_isCarModSts1_0_FR_Rx 133

	#define ComGroupSignal_isVehModMngtGlbSafe1Cntr_0_FR_Rx 134

	#define ComGroupSignal_isEgyLvlElecSubtyp_0_FR_Rx 135

	#define ComGroupSignal_isPwrLvlElecSubtyp_0_FR_Rx 136

	#define ComGroupSignal_isCarModSubtypWdCarModSubtyp_0_FR_Rx 137

	#define ComGroupSignal_isUsgModSts_0_FR_Rx 138

	#define ComGroupSignal_isPwrLvlElecMai_0_FR_Rx 139

	#define ComGroupSignal_isEgyLvlElecMai_0_FR_Rx 140

	#define ComGroupSignal_isFltEgyCnsWdSts_0_FR_Rx 141

	#define ComGroupSignal_isLockgCenTrigSrc_FR_Rx 142

	#define ComGroupSignal_isLockgCenStsLockSt_FR_Rx 143

	#define ComGroupSignal_isLockgCenStsUpdEve_FR_Rx 144

	#define ComGroupSignal_isDoorStsForDoorDrvrStsWithFacQly_FR_Rx 145

	#define ComGroupSignal_isFacQlyForDoorDrvrStsWithFacQly_FR_Rx 146

	#define ComGroupSignal_isBrkPedlValBrkPedlVal_FR_Rx 147

	#define ComGroupSignal_isBrkPedlValBrkPedlValQf_FR_Rx 148

	#define ComGroupSignal_isDrvrPrsntQf_FR_Rx 149

	#define ComGroupSignal_isDrvrPrsnt_FR_Rx 150

	#define ComGroupSignal_isDrvrPrsntStsDrvrPrsntChks_FR_Rx 151

	#define ComGroupSignal_isDrvrPrsntStsDrvrPrsntCntr_FR_Rx 152

	#define ComGroupSignal_isSteerLockDataReq4_FR_Rx 153

	#define ComGroupSignal_isSteerLockDataReq6_FR_Rx 154

	#define ComGroupSignal_isSteerLockDataReq3_FR_Rx 155

	#define ComGroupSignal_isSteerLockDataReq2_FR_Rx 156

	#define ComGroupSignal_isSteerLockDataReq1_FR_Rx 157

	#define ComGroupSignal_isSteerLockDataReq0_FR_Rx 158

	#define ComGroupSignal_isSteerLockDataReq5_FR_Rx 159

	#define ComGroupSignal_isSteerLockReqCmd_FR_Rx 160

	#define ComGroupSignal_isEngRunngReqByVehModMgrClimate_FR_Rx 161

	#define ComGroupSignal_isEngRunngReqByVehModMgrElectricalSystem_FR_Rx 162

	#define ComGroupSignal_isEngRunngReqByVehModMgrChassie_FR_Rx 163

	#define ComGroupSignal_isEngRunngReqByVehModMgrTrailerPrsnt_FR_Rx 164

	#define ComGroupSignal_isImobEngDataMgrReq24_FR_Rx 165

	#define ComGroupSignal_isImobEngMgrReqCmd2_FR_Rx 166

	#define ComGroupSignal_isImobEngDataMgrReq23_FR_Rx 167

	#define ComGroupSignal_isImobEngDataMgrReq22_FR_Rx 168

	#define ComGroupSignal_isImobEngDataMgrReq20_FR_Rx 169

	#define ComGroupSignal_isImobEngDataMgrReq25_FR_Rx 170

	#define ComGroupSignal_isImobEngDataMgrReq26_FR_Rx 171

	#define ComGroupSignal_isImobEngDataMgrReq21_FR_Rx 172

	#define ComGroupSignal_isImobEngDataMgrReq0_FR_Rx 173

	#define ComGroupSignal_isImobEngDataMgrReq6_FR_Rx 174

	#define ComGroupSignal_isImobEngDataMgrReq1_FR_Rx 175

	#define ComGroupSignal_isImobEngDataMgrReq5_FR_Rx 176

	#define ComGroupSignal_isImobEngDataMgrReq2_FR_Rx 177

	#define ComGroupSignal_isImobEngMgrReqCmd1_FR_Rx 178

	#define ComGroupSignal_isImobEngDataMgrReq3_FR_Rx 179

	#define ComGroupSignal_isImobEngDataMgrReq4_FR_Rx 180

	#define ComGroupSignal_isImobEngDataMgrReq34_FR_Rx 181

	#define ComGroupSignal_isImobEngMgrReqCmd3_FR_Rx 182

	#define ComGroupSignal_isImobEngDataMgrReq32_FR_Rx 183

	#define ComGroupSignal_isImobEngDataMgrReq35_FR_Rx 184

	#define ComGroupSignal_isImobEngDataMgrReq36_FR_Rx 185

	#define ComGroupSignal_isImobEngDataMgrReq31_FR_Rx 186

	#define ComGroupSignal_isImobEngDataMgrReq30_FR_Rx 187

	#define ComGroupSignal_isImobEngDataMgrReq33_FR_Rx 188

	#define ComGroupSignal_isVehCfgPrmVal5_0_FR_Rx 189

	#define ComGroupSignal_isVehCfgPrmBlk_0_FR_Rx 190

	#define ComGroupSignal_isVehCfgPrmVal3_0_FR_Rx 191

	#define ComGroupSignal_isVehCfgPrmVal2_0_FR_Rx 192

	#define ComGroupSignal_isVehCfgPrmVal1_0_FR_Rx 193

	#define ComGroupSignal_isVehCfgPrmVal7_0_FR_Rx 194

	#define ComGroupSignal_isVehCfgPrmVal6_0_FR_Rx 195

	#define ComGroupSignal_isVehCfgPrmVal4_0_FR_Rx 196

	#define ComGroupSignal_isDay_FR_Rx 197

	#define ComGroupSignal_isYr_FR_Rx 198

	#define ComGroupSignal_isMins_FR_Rx 199

	#define ComGroupSignal_isMth_FR_Rx 200

	#define ComGroupSignal_isHr_FR_Rx 201

	#define ComGroupSignal_isSec_FR_Rx 202

	#define ComGroupSignal_isTiAndDateVld_FR_Rx 203

	#define ComGroupSignal_isAmbTRawQly_0_FR_Rx 204

	#define ComGroupSignal_isAmbTRawVal_0_FR_Rx 205

	#define ComGroupSignal_isVehSpdIndcdVal_FR_Rx 206

	#define ComGroupSignal_isVehSpdIndcdUnit_FR_Rx 207

	#define ComGroupSignal_isFuLvlRawActvSideQly_FR_Rx 208

	#define ComGroupSignal_isFuLvlRawActvSideVal_FR_Rx 209

	#define ComGroupSignal_isFuLvlRawPasSideQly_FR_Rx 210

	#define ComGroupSignal_isFuLvlRawPasSideVal_FR_Rx 211

	#define ComGroupSignal_isFuLvlIndcdQly_FR_Rx 212

	#define ComGroupSignal_isFuLvlIndcdVal_FR_Rx 213

	#define ComGroupSignal_isCmptmtTFrnt_FR_Rx 214

	#define ComGroupSignal_isFanForCmptmtTRunng_FR_Rx 215

	#define ComGroupSignal_isCmptmtTFrntQf_FR_Rx 216

	#define ComGroupSignal_isEngIdleEco1Sts_FR_Rx 217

	#define ComGroupSignal_isEngIdleEco1Pen_FR_Rx 218

	#define ComGroupSignal_isSteerMod_FR_Rx 219

	#define ComGroupSignal_isSteerAsscLvl_FR_Rx 220

	#define ComGroupSignal_isSteerSetgPen_FR_Rx 221

	#define ComGroupSignal_isPtDrvrSetgSts_FR_Rx 222

	#define ComGroupSignal_isPtDrvrSetgPen_FR_Rx 223

	#define ComGroupSignal_isHmiDefrstElecReReq_FR_Rx 224

	#define ComGroupSignal_isHmiDefrstElecFrntReq_FR_Rx 225

	#define ComGroupSignal_isHmiDefrstElecForMirrReq_FR_Rx 226

	#define ComGroupSignal_isHmiSeatVentnForRowFirstLe_FR_Rx 227

	#define ComGroupSignal_isHmiSeatHeatgForRowFirstRi_FR_Rx 228

	#define ComGroupSignal_isHmiSeatHeatgForRowSecRi_FR_Rx 229

	#define ComGroupSignal_isHmiSeatHeatgForRowSecLe_FR_Rx 230

	#define ComGroupSignal_isHmiSeatVentnForRowFirstRi_FR_Rx 231

	#define ComGroupSignal_isHmiSeatHeatgForRowFirstLe_FR_Rx 232

	#define ComGroupSignal_isEngStrtStopDrvModIndSetgPen_FR_Rx 233

	#define ComGroupSignal_isEngStrtStopDrvModIndSetgSts_FR_Rx 234

	#define ComGroupSignal_isActvnOfCrsEcoSts_FR_Rx 235

	#define ComGroupSignal_isActvnOfCrsEcoPen_FR_Rx 236

	#define ComGroupSignal_isVehBattUSysU_0_FR_Rx 237

	#define ComGroupSignal_isVehBattUSysUQf_0_FR_Rx 238

	#define ComGroupSignal_isVinPosn1_FR_Rx 239

	#define ComGroupSignal_isVinPosn2_FR_Rx 240

	#define ComGroupSignal_isVinPosn5_FR_Rx 241

	#define ComGroupSignal_isVinBlk_FR_Rx 242

	#define ComGroupSignal_isVinPosn3_FR_Rx 243

	#define ComGroupSignal_isVinPosn4_FR_Rx 244

	#define ComGroupSignal_isVinPosn7_FR_Rx 245

	#define ComGroupSignal_isVinPosn6_FR_Rx 246

	#define ComGroupSignal_isTrsmLockMgrReqData4_FR_Rx 247

	#define ComGroupSignal_isTrsmLockMgrReqData3_FR_Rx 248

	#define ComGroupSignal_isTrsmLockMgrReqCmd_FR_Rx 249

	#define ComGroupSignal_isTrsmLockMgrReqData6_FR_Rx 250

	#define ComGroupSignal_isTrsmLockMgrReqData1_FR_Rx 251

	#define ComGroupSignal_isTrsmLockMgrReqData0_FR_Rx 252

	#define ComGroupSignal_isTrsmLockMgrReqData2_FR_Rx 253

	#define ComGroupSignal_isTrsmLockMgrReqData5_FR_Rx 254

	#define ComGroupSignal_isAmbTIndcdUnit_0_FR_Rx 255

	#define ComGroupSignal_isAmbTIndcdQf_0_FR_Rx 256

	#define ComGroupSignal_isAmbTIndcd_0_FR_Rx 257

	#define ComGroupSignal_isVehDecelCtrlSetgNormSpt_FR_Rx 258

	#define ComGroupSignal_isVehDecelCtrlSetgPen_FR_Rx 259

	#define ComGroupSignal_isEscSptModReqdByDrvrPen_FR_Rx 260

	#define ComGroupSignal_isEscSptModReqdByDrvr_FR_Rx 261

	#define ComGroupSignal_isEpbEngStallApplySetgPen_FR_Rx 262

	#define ComGroupSignal_isEpbEngStallApplySetgSts_FR_Rx 263

	#define ComGroupSignal_isEpbApplyAutSetgPen_FR_Rx 264

	#define ComGroupSignal_isEpbApplyAutSetgSts_FR_Rx 265

	#define ComGroupSignal_isLvlCtrlSetg_FR_Rx 266

	#define ComGroupSignal_isSuspCtrlSetg_FR_Rx 267

	#define ComGroupSignal_isSuspIdPen_FR_Rx 268

	#define ComGroupSignal_isParkAssiPinionAgReq_FR_Rx 269

	#define ComGroupSignal_isParkAssiPinionAgReqChks_FR_Rx 270

	#define ComGroupSignal_isParkAssiPinionAgReqCntr_FR_Rx 271

	#define ComGroupSignal_isTrsmLockChkData6_CAN_Rx 272

	#define ComGroupSignal_isTrsmLockChkChk_CAN_Rx 273

	#define ComGroupSignal_isTrsmLockChkData1_CAN_Rx 274

	#define ComGroupSignal_isTrsmLockChkData3_CAN_Rx 275

	#define ComGroupSignal_isTrsmLockChkData2_CAN_Rx 276

	#define ComGroupSignal_isTrsmLockChkData4_CAN_Rx 277

	#define ComGroupSignal_isTrsmLockChkData0_CAN_Rx 278

	#define ComGroupSignal_isTrsmLockChkData5_CAN_Rx 279

	#define ComGroupSignal_isSteerWhlAgSafe_CAN_Rx 280

	#define ComGroupSignal_isSteerWhlSnsrQf_CAN_Rx 281

	#define ComGroupSignal_isSteerWhlSnsrSafeCntr_CAN_Rx 282

	#define ComGroupSignal_isSteerWhlAgSpdSafe_CAN_Rx 283

	#define ComGroupSignal_isSteerWhlSnsrSafeChks_CAN_Rx 284

	#define ComGroupSignal_isSuspPosnVertFrntLe_CAN_Rx 285

	#define ComGroupSignal_isSuspPosnVertFrntLeQf_CAN_Rx 286

	#define ComGroupSignal_isSuspPosnVertReLeQf_CAN_Rx 287

	#define ComGroupSignal_isSuspPosnVertReLe_CAN_Rx 288

	#define ComGroupSignal_isSuspFailrStsSuspFailrStsChks_CAN_Rx 289

	#define ComGroupSignal_isSuspFailrStsSuspFailrStsCntr_CAN_Rx 290

	#define ComGroupSignal_isSuspFailrStsSuspFailrSts_CAN_Rx 291

	#define ComGroupSignal_isSuspFailrStsSuspFailrStsTypQf_CAN_Rx 292

	#define ComGroupSignal_isSteerLockDataChk2_CAN_Rx 293

	#define ComGroupSignal_isSteerLockDataChk5_CAN_Rx 294

	#define ComGroupSignal_isSteerLockDataChk0_CAN_Rx 295

	#define ComGroupSignal_isSteerLockDataChk1_CAN_Rx 296

	#define ComGroupSignal_isSteerLockDataChk4_CAN_Rx 297

	#define ComGroupSignal_isSteerLockChkSts_CAN_Rx 298

	#define ComGroupSignal_isSteerLockDataChk3_CAN_Rx 299

	#define ComGroupSignal_isSteerLockDataChk6_CAN_Rx 300

	#define ComGroupSignal_isTrsmParkLockdChks_CAN_Rx 301

	#define ComGroupSignal_isTrsmParkLockd_CAN_Rx 302

	#define ComGroupSignal_isTrsmParkLockdCntr_CAN_Rx 303

	#define ComGroupSignal_isCluPedlPsdCluPedlPsdChks_CAN_Rx 304

	#define ComGroupSignal_isCluPedlPsdCluPedlPsd_CAN_Rx 305

	#define ComGroupSignal_isCluPedlPsdCluPedlPsdSts_CAN_Rx 306

	#define ComGroupSignal_isCluPedlPsdCluPedlPsdCntr_CAN_Rx 307

	#define ComGroupSignal_isEngT_CAN_Rx 308

	#define ComGroupSignal_isEngTQf_CAN_Rx 309

	#define ComGroupSignal_isVFCVectorTCMGrp1_CAN_Rx 310

	#define ComGroupSignal_isVFCVectorTCMGrp2_CAN_Rx 311

	#define ComGroupSignal_isVFCVectorTCMGrp3_CAN_Rx 312

	#define ComGroupSignal_isVFCVectorEGSMGrp3_CAN_Rx 313

	#define ComGroupSignal_isVFCVectorEGSMGrp1_CAN_Rx 314

	#define ComGroupSignal_isVFCVectorEGSMGrp2_CAN_Rx 315

	#define ComGroupSignal_isWhlMotSysTqEstChks_CAN_Rx 316

	#define ComGroupSignal_isWhlMotSysTqEst_CAN_Rx 317

	#define ComGroupSignal_isWhlMotSysTqEstCntr_CAN_Rx 318

	#define ComGroupSignal_isWhlMotSysTqEstQlyFac_CAN_Rx 319

	#define ComGroupSignal_isWhlMotSysTqEstSpdLimn_CAN_Rx 320

	#define ComGroupSignal_isImobEngDataChk22_CAN_Rx 321

	#define ComGroupSignal_isImobEngDataChk23_CAN_Rx 322

	#define ComGroupSignal_isImobEngDataChk24_CAN_Rx 323

	#define ComGroupSignal_isImobEngDataChk26_CAN_Rx 324

	#define ComGroupSignal_isImobEngChkSts2_CAN_Rx 325

	#define ComGroupSignal_isImobEngDataChk20_CAN_Rx 326

	#define ComGroupSignal_isImobEngDataChk25_CAN_Rx 327

	#define ComGroupSignal_isImobEngDataChk21_CAN_Rx 328

	#define ComGroupSignal_isCCPFrameReqByte4_CAN_Rx 329

	#define ComGroupSignal_isCCPFrameReqByte3_CAN_Rx 330

	#define ComGroupSignal_isCCPFrameReqByte1_CAN_Rx 331

	#define ComGroupSignal_isCCPFrameReqByte7_CAN_Rx 332

	#define ComGroupSignal_isCCPFrameReqByte2_CAN_Rx 333

	#define ComGroupSignal_isCCPFrameReqByte5_CAN_Rx 334

	#define ComGroupSignal_isCCPFrameReqByte0_CAN_Rx 335

	#define ComGroupSignal_isCCPFrameReqByte6_CAN_Rx 336

	#define ComGroupSignal_isPostImpctBrkgCfmdSafe1CrashSideRi_FR_Rx 337

	#define ComGroupSignal_isPostImpctBrkgCfmdSafe1PostImpctBrkgCfmd_FR_Rx 338

	#define ComGroupSignal_isPostImpctBrkgCfmdSafe1CrashRe_FR_Rx 339

	#define ComGroupSignal_isPostImpctBrkgCfmdSafe1CrashPed_FR_Rx 340

	#define ComGroupSignal_isPostImpctBrkgCfmdSafe1CrashOffroadA_FR_Rx 341

	#define ComGroupSignal_isPostImpctBrkgCfmdSafe1CrashFrnt_FR_Rx 342

	#define ComGroupSignal_isPostImpctBrkgCfmdSafe1CrashSideLe_FR_Rx 343

	#define ComGroupSignal_isPostImpctBrkgCfmdSafe1CrashOz_FR_Rx 344

	#define ComGroupSignal_isPostImpctBrkgCfmdSafe1CrashOffroadD_FR_Rx 345

	#define ComGroupSignal_isPostImpctBrkgCfmdSafe1Chks_FR_Rx 346

	#define ComGroupSignal_isPostImpctBrkgCfmdSafe1Cntr_FR_Rx 347

	#define ComGroupSignal_isPostImpctBrkgCfmdSafe1CrashRollovr_FR_Rx 348

	#define ComGroupSignal_isPostImpctBrkgCfmdSafe1CrashOffroadRT_FR_Rx 349

	#define ComGroupSignal_isPostImpctBrkgCfmdSafe1CrashLargeAnimal_FR_Rx 350

	#define ComGroupSignal_isPostImpctBrkgCfmdSafe1CrashOffroadRTsevere_FR_Rx 351

	#define ComGroupSignal_isSuspcPostImpctBrkg_FR_Rx 352

	#define ComGroupSignal_isMngtOfPostImpctBrkgChks_FR_Rx 353

	#define ComGroupSignal_isMngtOfPostImpctBrkgCntr_FR_Rx 354

	#define ComGroupSignal_isJIDByte0_FR_Rx 355

	#define ComGroupSignal_isJIDByte6_FR_Rx 356

	#define ComGroupSignal_isJIDByte1_FR_Rx 357

	#define ComGroupSignal_isJIDByte7_FR_Rx 358

	#define ComGroupSignal_isJIDByte4_FR_Rx 359

	#define ComGroupSignal_isJIDByte3_FR_Rx 360

	#define ComGroupSignal_isJIDByte5_FR_Rx 361

	#define ComGroupSignal_isJIDByte2_FR_Rx 362

	#define ComGroupSignal_isAsyCmftLgtNegLimForJerk_FR_Rx 363

	#define ComGroupSignal_isAsyALgtReqForCmft_FR_Rx 364

	#define ComGroupSignal_isAsyCmftLgtPosLimForJerk_FR_Rx 365

	#define ComGroupSignal_isAsyBrkGainMaxDecel_FR_Rx 366

	#define ComGroupSignal_isSftyGainGroupSafeChks_FR_Rx 367

	#define ComGroupSignal_isSftyGainGroupSafeCntr_FR_Rx 368

	#define ComGroupSignal_isAsyBrkGainEna_FR_Rx 369

	#define ComGroupSignal_isAsyBrkGainReq_FR_Rx 370

	#define ComGroupSignal_isBltLockStAtDrvrForDevErrSts2_FR_Rx 371

	#define ComGroupSignal_isBltLockStAtDrvrForBltLockSt1_FR_Rx 372

	#define ComGroupSignal_isBltLockStAtPassForBltLockSt1_FR_Rx 373

	#define ComGroupSignal_isBltLockStAtPassForBltLockSts_FR_Rx 374

	#define ComGroupSignal_isBltLockStAtRowThrdRiForBltLockSt1_FR_Rx 375

	#define ComGroupSignal_isBltLockStAtRowThrdRiForBltLockEquid_FR_Rx 376

	#define ComGroupSignal_isBltLockStAtRowThrdRiForBltLockSts_FR_Rx 377

	#define ComGroupSignal_isBltLockStAtRowSecRiForBltLockEquid_FR_Rx 378

	#define ComGroupSignal_isBltLockStAtRowSecRiForBltLockSt1_FR_Rx 379

	#define ComGroupSignal_isBltLockStAtRowSecRiForBltLockSts_FR_Rx 380

	#define ComGroupSignal_isBltLockStAtRowSecLeForBltLockSts_FR_Rx 381

	#define ComGroupSignal_isBltLockStAtRowSecLeForBltLockEquid_FR_Rx 382

	#define ComGroupSignal_isBltLockStAtRowSecLeForBltLockSt1_FR_Rx 383

	#define ComGroupSignal_isBltLockStAtRowThrdLeForBltLockEquid_FR_Rx 384

	#define ComGroupSignal_isBltLockStAtRowThrdLeForBltLockSts_FR_Rx 385

	#define ComGroupSignal_isBltLockStAtRowThrdLeForBltLockSt1_FR_Rx 386

	#define ComGroupSignal_isBltLockStAtRowSecMidForBltLockEquid_FR_Rx 387

	#define ComGroupSignal_isBltLockStAtRowSecMidForBltLockSts_FR_Rx 388

	#define ComGroupSignal_isBltLockStAtRowSecMidForBltLockSt1_FR_Rx 389

	#define ComGroupSignal_isAsySftyEnaDecel_FR_Rx 390

	#define ComGroupSignal_isAsySftyDecelReq_FR_Rx 391

	#define ComGroupSignal_isSftyDecelGroupSafeCntr_FR_Rx 392

	#define ComGroupSignal_isSftyDecelGroupSafeChks_FR_Rx 393

	#define ComGroupSignal_isBrkHptcWarnReqForAutDrv_FR_Rx 394

	#define ComGroupSignal_isBrkHptcWarnReqForAutDrvChks_FR_Rx 395

	#define ComGroupSignal_isBrkHptcWarnReqForAutDrvCntr_FR_Rx 396

	#define ComGroupSignal_isRscDataWithCmpSafeChks_FR_Rx 397

	#define ComGroupSignal_isRollRate1Qf2_FR_Rx 398

	#define ComGroupSignal_isRollRateGrdt_FR_Rx 399

	#define ComGroupSignal_isYawRateGrdt_FR_Rx 400

	#define ComGroupSignal_isRscDataWithCmpSafeCntr_FR_Rx 401

	#define ComGroupSignal_isRollRateWithCmp_FR_Rx 402

	#define ComGroupSignal_isYawRate1Qf3_FR_Rx 403

	#define ComGroupSignal_isAsyDataWithCmpSafeChks_FR_Rx 404

	#define ComGroupSignal_isALat1Qf2_FR_Rx 405

	#define ComGroupSignal_isALatWithCmp_FR_Rx 406

	#define ComGroupSignal_isYawRateWithCmp_FR_Rx 407

	#define ComGroupSignal_isALgt1Qf2_FR_Rx 408

	#define ComGroupSignal_isAsyDataWithCmpSafeCntr_FR_Rx 409

	#define ComGroupSignal_isGrdtOfALgt_FR_Rx 410

	#define ComGroupSignal_isYawRate1Qf2_FR_Rx 411

	#define ComGroupSignal_isYawRate1_0_FR_Rx 412

	#define ComGroupSignal_isRollRate1Qf1_0_FR_Rx 413

	#define ComGroupSignal_isYawRate1Qf1_0_FR_Rx 414

	#define ComGroupSignal_isAgDataRawSafeChks_0_FR_Rx 415

	#define ComGroupSignal_isAgDataRawSafeCntr_0_FR_Rx 416

	#define ComGroupSignal_isRollRate1_0_FR_Rx 417

	#define ComGroupSignal_isAVert2Qf1_0_FR_Rx 418

	#define ComGroupSignal_isALgt1_0_FR_Rx 419

	#define ComGroupSignal_isALat1_0_FR_Rx 420

	#define ComGroupSignal_isADataRawSafeChks_0_FR_Rx 421

	#define ComGroupSignal_isALat1Qf1_0_FR_Rx 422

	#define ComGroupSignal_isADataRawSafeCntr_0_FR_Rx 423

	#define ComGroupSignal_isALgt1Qf1_0_FR_Rx 424

	#define ComGroupSignal_isAVert2_0_FR_Rx 425

	#define ComGroupSignal_isDrvrGearShiftDirReq2DwnTipAut_CAN_Rx 426

	#define ComGroupSignal_isDrvrGearShiftDirReq2UpTipAut_CAN_Rx 427

	#define ComGroupSignal_isDrvrGearShiftDirReq2PosnAut_CAN_Rx 428

	#define ComGroupSignal_isDrvrGearShiftDirReq2Cntr_CAN_Rx 429

	#define ComGroupSignal_isDrvrGearShiftDirReq2Chks_CAN_Rx 430

	#define ComGroupSignal_isTrsmActrSnsrPosnTrsmActrSnsrPosn_CAN_Rx 431

	#define ComGroupSignal_isTrsmActrSnsrPosnCntr_CAN_Rx 432

	#define ComGroupSignal_isTrsmActrSnsrPosnChks_CAN_Rx 433

	#define ComGroupSignal_isSatltPosnStsPrm1InPosnFromSatlt_FR_Rx 434

	#define ComGroupSignal_isPrePosnDilInPosnFromSatlt_FR_Rx 435

	#define ComGroupSignal_isPosnVHozlInPosnFromSatlt_FR_Rx 436

	#define ComGroupSignal_isPosnVVertInPosnFromSatlt_FR_Rx 437

	#define ComGroupSignal_isTiForMinsInPosnFromSatlt_FR_Rx 438

	#define ComGroupSignal_isSatltSysNo6InUseInPosnFromSatlt_FR_Rx 439

	#define ComGroupSignal_isPosnLgtInPosnFromSatlt_FR_Rx 440

	#define ComGroupSignal_isSatltSysNo5InUseInPosnFromSatlt_FR_Rx 441

	#define ComGroupSignal_isNoOfSatltForSysNo1InPosnFromSatlt_FR_Rx 442

	#define ComGroupSignal_isTiForDayInPosnFromSatlt_FR_Rx 443

	#define ComGroupSignal_isPosnLatInPosnFromSatlt_FR_Rx 444

	#define ComGroupSignal_isPreVertDilInPosnFromSatlt_FR_Rx 445

	#define ComGroupSignal_isPreHozlDilInPosnFromSatlt_FR_Rx 446

	#define ComGroupSignal_isNoOfSatltForSysNo5InPosnFromSatlt_FR_Rx 447

	#define ComGroupSignal_isSatltSysNo4InUseInPosnFromSatlt_FR_Rx 448

	#define ComGroupSignal_isNoOfSatltForSysNo2InPosnFromSatlt_FR_Rx 449

	#define ComGroupSignal_isNoOfSatltForSysNo3InPosnFromSatlt_FR_Rx 450

	#define ComGroupSignal_isPosnDirInPosnFromSatlt_FR_Rx 451

	#define ComGroupSignal_isTiForYrInPosnFromSatlt_FR_Rx 452

	#define ComGroupSignal_isPosnAltiInPosnFromSatlt_FR_Rx 453

	#define ComGroupSignal_isNoOfSatltForSysNo6InPosnFromSatlt_FR_Rx 454

	#define ComGroupSignal_isNoOfSatltForSysNo4InPosnFromSatlt_FR_Rx 455

	#define ComGroupSignal_isTiForMthInPosnFromSatlt_FR_Rx 456

	#define ComGroupSignal_isSatltSysNo2InUseInPosnFromSatlt_FR_Rx 457

	#define ComGroupSignal_isSatltPosnStsPrm2InPosnFromSatlt_FR_Rx 458

	#define ComGroupSignal_isTiForHrInPosnFromSatlt_FR_Rx 459

	#define ComGroupSignal_isTiForSecInPosnFromSatlt_FR_Rx 460

	#define ComGroupSignal_isSatltSysNo3InUseInPosnFromSatlt_FR_Rx 461

	#define ComGroupSignal_isSatltPosnStsPrm3InPosnFromSatlt_FR_Rx 462

	#define ComGroupSignal_isSatltSysNo1InUseInPosnFromSatlt_FR_Rx 463

	#define ComGroupSignal_isPosnSpdInPosnFromSatlt_FR_Rx 464

	#define ComGroupSignal_isPreTiDilInPosnFromSatlt_FR_Rx 465

	#define ComGroupSignal_isListOfNodAvListOfNodAv4_FR_Rx 466

	#define ComGroupSignal_isListOfNodAvListOfNodAv5_FR_Rx 467

	#define ComGroupSignal_isListOfNodAvListOfNodAv7_FR_Rx 468

	#define ComGroupSignal_isListOfNodAvListOfNodAv8_FR_Rx 469

	#define ComGroupSignal_isListOfNodAvListOfNodAv3_FR_Rx 470

	#define ComGroupSignal_isListOfNodAvListOfNodAv2_FR_Rx 471

	#define ComGroupSignal_isListOfNodAvListOfNodAv6_FR_Rx 472

	#define ComGroupSignal_isListOfNodAvListOfNodAv1_FR_Rx 473

	#define ComGroupSignal_isAirPInAirSprgAirPInAirSprgRiRe 474

	#define ComGroupSignal_isAirPInAirSprgAirPInAirSprgQf 475

	#define ComGroupSignal_isAirPInAirSprgLoadLvlgCtrlEstimd 476

	#define ComGroupSignal_isAirPInAirSprgAirPInAirSprgRiFrnt 477

	#define ComGroupSignal_isAirPInAirSprgAirPInAirSprgLeRe 478

	#define ComGroupSignal_isAirPInAirSprgAirPInAirSprgLeFrnt 479

	#define ComGroupSignal_isSuspPosnVertRi1SuspPosnVertRiFrntQf 480

	#define ComGroupSignal_isSuspPosnVertRi1SuspPosnVertRiRe 481

	#define ComGroupSignal_isSuspPosnVertRi1SuspPosnVertRiReQf 482

	#define ComGroupSignal_isSuspPosnVertRi1SuspPosnVertRiChks 483

	#define ComGroupSignal_isSuspPosnVertRi1SuspPosnVertRiFrnt 484

#endif



/* START: Signal Group Ids */

/* Tx SignalGroup ID*/

	#define ComSignalGroup_igPtTqAtAxleFrntMinReqGroup_CAN_Tx 0

	#define ComSignalGroup_igPtTqAtAxleAddReqGroup_CAN_Tx 1

	#define ComSignalGroup_igVehDynCtrlStsForALgtCmft_1_CAN_Tx 2

	#define ComSignalGroup_igBltLockStAtDrvr_CAN_Tx 3

	#define ComSignalGroup_igADataRawSafe_0_CAN_Tx 4

	#define ComSignalGroup_igVehSpdLgtSafeGroup_1_CAN_Tx 5

	#define ComSignalGroup_igDrvrBrkTqAtWhlsReqdGroup_1_CAN_Tx 6

	#define ComSignalGroup_igLatCtrlReqSafeGroup_CAN_Tx 7

	#define ComSignalGroup_igVehMGroup_1_CAN_Tx 8

	#define ComSignalGroup_igWhlRotToothCntr_1_CAN_Tx 9

	#define ComSignalGroup_igHvacEvaprTFrntGroup_CAN_Tx 10

	#define ComSignalGroup_igWhlSpdCircumlRe_1_CAN_Tx 11

	#define ComSignalGroup_igBrkPedlPsdSafeGroup_1_CAN_Tx 12

	#define ComSignalGroup_igRoadInclnGroup_1_CAN_Tx 13

	#define ComSignalGroup_igALgtStdFromWhlSpdSafeGroup_1_CAN_Tx 14

	#define ComSignalGroup_igWhlSpdCircumlFrnt_1_CAN_Tx 15

	#define ComSignalGroup_igALgtReqForCmftToPrpsnGroup_CAN_Tx 16

	#define ComSignalGroup_igALgtRespAndLimToPrpsnGroup_CAN_Tx 17

	#define ComSignalGroup_igAgDataRawSafe_0_CAN_Tx 18

	#define ComSignalGroup_igParkAssiPinionAgReqGrp_CAN_Tx 19

	#define ComSignalGroup_igAsyALgtRespAndLim_CAN_Tx 20

	#define ComSignalGroup_igSteerLockReq_CAN_Tx 21

	#define ComSignalGroup_igImobEngMgrReq1_CAN_Tx 22

	#define ComSignalGroup_igImobBrkNrSerl_CAN_Tx 23

	#define ComSignalGroup_igCmptmtTFrntGroup_CAN_Tx 24

	#define ComSignalGroup_igTiAndDateIndcn_CAN_Tx 25

	#define ComSignalGroup_igSteerSetg_CAN_Tx 26

	#define ComSignalGroup_igHmiDefrstElecReq_CAN_Tx 27

	#define ComSignalGroup_igVehBattUGroup_0_CAN_Tx 28

	#define ComSignalGroup_igPtDrvrSetg_CAN_Tx 29

	#define ComSignalGroup_igSuspSetg_CAN_Tx 30

	#define ComSignalGroup_igEngIdleEco1_CAN_Tx 31

	#define ComSignalGroup_igVin_CAN_Tx 32

	#define ComSignalGroup_igAmbTIndcdWithUnit_0_CAN_Tx 33

	#define ComSignalGroup_igHmiSeatClima_CAN_Tx 34

	#define ComSignalGroup_igSpdRotlForWhlsAtAxleFrntSafeGroup_CAN_Tx 35

	#define ComSignalGroup_igEngRunngReqByVehModMgr_CAN_Tx 36

	#define ComSignalGroup_igVehSpdIndcd_CAN_Tx 37

	#define ComSignalGroup_igEscStGroup_1_CAN_Tx 38

	#define ComSignalGroup_igFuLvlIndcd_CAN_Tx 39

	#define ComSignalGroup_igFuLvlRawActvSide_CAN_Tx 40

	#define ComSignalGroup_igFuLvlRawPasSide_CAN_Tx 41

	#define ComSignalGroup_igLimForJerkPosNotExcdGroup_CAN_Tx 42

	#define ComSignalGroup_igVehMtnStSafeGroup_1_CAN_Tx 43

	#define ComSignalGroup_igVehModMngtGlbSafe1_0_CAN_Tx 44

	#define ComSignalGroup_igActvnOfCrsEco_CAN_Tx 45

	#define ComSignalGroup_igDrvrPrsntGroup_CAN_Tx 46

	#define ComSignalGroup_igEngStrtStopDrvModIndSetg_CAN_Tx 47

	#define ComSignalGroup_igDoorDrvrStsWithFacQly_CAN_Tx 48

	#define ComSignalGroup_igAmbTRaw_0_CAN_Tx 49

	#define ComSignalGroup_igBrkFricTqAtWhlAct_1_CAN_Tx 50

	#define ComSignalGroup_igWhlSpdCircumlRe_2_CAN_Tx 51

	#define ComSignalGroup_igVehSpdLgtSafeGroup_2_CAN_Tx 52

	#define ComSignalGroup_igBrkPedlPsdSafeGroup_2_CAN_Tx 53

	#define ComSignalGroup_igVehMtnStSafeGroup_2_CAN_Tx 54

	#define ComSignalGroup_igImobEngMgrReq2_CAN_Tx 55

	#define ComSignalGroup_igADataRawSafe_1_CAN_Tx 56

	#define ComSignalGroup_igWhlSpdCircumlFrnt_2_CAN_Tx 57

	#define ComSignalGroup_igPtTqAtAxleReMinReqGroup_CAN_Tx 58

	#define ComSignalGroup_igBrkFricTqTotAtWhlsAct_1_CAN_Tx 59

	#define ComSignalGroup_igLockgCenSts_CAN_Tx 60

	#define ComSignalGroup_igAgDataRawSafe_1_CAN_Tx 61

	#define ComSignalGroup_igAmbTIndcdWithUnit_1_CAN_Tx 62

	#define ComSignalGroup_igLimForDecel_CAN_Tx 63

	#define ComSignalGroup_igVehModMngtGlbSafe1_1_CAN_Tx 64

	#define ComSignalGroup_igImobEngMgrReq3_CAN_Tx 65

	#define ComSignalGroup_igDrvrBrkTqAtWhlsReqdGroup_2_CAN_Tx 66

	#define ComSignalGroup_igEpbSts_1_CAN_Tx 67

	#define ComSignalGroup_igSteerWhlSnsr_1_CAN_Tx 68

	#define ComSignalGroup_igVehBattUGroup_1_CAN_Tx 69

	#define ComSignalGroup_igAmbTRaw_1_CAN_Tx 70

	#define ComSignalGroup_igSteerErrReqSafe_FR_Tx 71

	#define ComSignalGroup_igWhlMotSysTqEstGroup_FR_Tx 72

	#define ComSignalGroup_igEngNSafe_FR_Tx 73

	#define ComSignalGroup_igCluPedlPsd_FR_Tx 74

	#define ComSignalGroup_igDrvrSteerWhlHldGroup_FR_Tx 75

	#define ComSignalGroup_igPtTqAtWhlFrntActGroup_FR_Tx 76

	#define ComSignalGroup_igAccrPedlPsd_FR_Tx 77

	#define ComSignalGroup_igVehV_FR_Tx 78

	#define ComSignalGroup_igWhlSpdCircumlFrnt_0_FR_Tx 79

	#define ComSignalGroup_igWhlSpdCircumlRe_0_FR_Tx 80

	#define ComSignalGroup_igPtCluTq_FR_Tx 81

	#define ComSignalGroup_igCchForFuEco_FR_Tx 82

	#define ComSignalGroup_igSteerOvrdStsForAutDrvSafe_FR_Tx 83

	#define ComSignalGroup_igImobEngChk3_FR_Tx 84

	#define ComSignalGroup_igRoadInclnGroup_0_FR_Tx 85

	#define ComSignalGroup_igRollAgCmp_FR_Tx 86

	#define ComSignalGroup_igBrkHptcStsSafeGroup_FR_Tx 87

	#define ComSignalGroup_igEscStGroup_0_FR_Tx 88

	#define ComSignalGroup_igTrsmParkLockdSafe_FR_Tx 89

	#define ComSignalGroup_igAsyBrkEnaAckd_FR_Tx 90

	#define ComSignalGroup_igHybErrIndcnReq_FR_Tx 91

	#define ComSignalGroup_igImobEngChk1_FR_Tx 92

	#define ComSignalGroup_igImobEngChk2_FR_Tx 93

	#define ComSignalGroup_igBrkLiOnReq_FR_Tx 94

	#define ComSignalGroup_igBrkAndAbsWarnIndcnReqGroup_FR_Tx 95

	#define ComSignalGroup_igVehMGroup_0_FR_Tx 96

	#define ComSignalGroup_igVehDynCtrlStsForALgtCmft_0_FR_Tx 97

	#define ComSignalGroup_igOvrdDecelByDrvr_FR_Tx 98

	#define ComSignalGroup_igFricEstimnFromVehDynGroup_FR_Tx 99

	#define ComSignalGroup_igEpbLampReqGroup_FR_Tx 100

	#define ComSignalGroup_igSteerLockSts_FR_Tx 101

	#define ComSignalGroup_igEscWarnIndcnReqGroup_FR_Tx 102

	#define ComSignalGroup_igCrsSetSpdEco_FR_Tx 103

	#define ComSignalGroup_igCoolgLoadGroup_FR_Tx 104

	#define ComSignalGroup_igEngFltIndcn_FR_Tx 105

	#define ComSignalGroup_igEngTGrp_FR_Tx 106

	#define ComSignalGroup_igSuspFailrSts_FR_Tx 107

	#define ComSignalGroup_igSteerLockChk_FR_Tx 108

	#define ComSignalGroup_igBrkSysWarnIndcnReq_FR_Tx 109

	#define ComSignalGroup_igTrsmLockChk_FR_Tx 110

	#define ComSignalGroup_igBrkFricTqAtWhlAct_0_FR_Tx 111

	#define ComSignalGroup_igPitchAgGlb_FR_Tx 112

	#define ComSignalGroup_igRollAgGlb_FR_Tx 113

	#define ComSignalGroup_igBrkFricTqTotAtWhlsAct_0_FR_Tx 114

	#define ComSignalGroup_igBrkPedlPsdSafeGroup_0_FR_Tx 115

	#define ComSignalGroup_igVehMtnStSafeGroup_0_FR_Tx 116

	#define ComSignalGroup_igPinionSteerAgSpd1Group_FR_Tx 117

	#define ComSignalGroup_igSteerWhlTqGroup_FR_Tx 118

	#define ComSignalGroup_igVehSpdLgtSafeGroup_0_FR_Tx 119

	#define ComSignalGroup_igSteerWhlSnsr_0_FR_Tx 120

	#define ComSignalGroup_igWhlDirRotlRe_FR_Tx 121

	#define ComSignalGroup_igSuspPosnVertAgGroup_FR_Tx 122

	#define ComSignalGroup_igEpbSts_0_FR_Tx 123

	#define ComSignalGroup_igLatCtrlModCfmd_FR_Tx 124

	#define ComSignalGroup_igPinionSteerAg1Group_FR_Tx 125

	#define ComSignalGroup_igGearIndcnRec_FR_Tx 126

	#define ComSignalGroup_igDrvrBrkTqAtWhlsReqdGroup_0_FR_Tx 127

	#define ComSignalGroup_igALgtStdFromWhlSpdSafeGroup_0_FR_Tx 128

	#define ComSignalGroup_igWhlRotToothCntr_0_FR_Tx 129

	#define ComSignalGroup_igPtTqReq_CAN_Tx 130

	#define ComSignalGroup_igPtTqMaxReq_CAN_Tx 131

	#define ComSignalGroup_igPtTqMinReq_CAN_Tx 132

	#define ComSignalGroup_igTrsmLockMgrReq_CAN_Tx 133

	#define ComSignalGroup_igVehCfgPrm_0_CAN_Tx 134

	#define ComSignalGroup_igVehCfgPrm_1_CAN_Tx 135

	#define ComSignalGroup_igCCPFrameResp_CAN_Tx 136

/* Rx SignalGroup ID*/

	#define ComSignalGroup_igSuspPosnVertRi_CAN_Rx 0

	#define ComSignalGroup_igPinionSteerAg1Group_CAN_Rx 1

	#define ComSignalGroup_igPinionSteerAgSpd1Group_CAN_Rx 2

	#define ComSignalGroup_igSteerLockSts_CAN_Rx 3

	#define ComSignalGroup_igSuspAVertFrntRiGroup_CAN_Rx 4

	#define ComSignalGroup_igSuspAVertReLeGroup_CAN_Rx 5

	#define ComSignalGroup_igSuspAVertFrntLeGroup_CAN_Rx 6

	#define ComSignalGroup_igSuspAVertReRiGroup_CAN_Rx 7

	#define ComSignalGroup_igPtTqAtWhlFrntActGroup_CAN_Rx 8

	#define ComSignalGroup_igGearIndcnRec_CAN_Rx 9

	#define ComSignalGroup_igAccrPedlPsd_CAN_Rx 10

	#define ComSignalGroup_igPtTqAtWhlReActGroup_CAN_Rx 11

	#define ComSignalGroup_igSteerWhlTqGroup_CAN_Rx 12

	#define ComSignalGroup_igLatCtrlModCfmd_CAN_Rx 13

	#define ComSignalGroup_igSteerOvrdStsForAutDrvSafe_CAN_Rx 14

	#define ComSignalGroup_igPtALgtReq_CAN_Rx 15

	#define ComSignalGroup_igDtEngdSt_CAN_Rx 16

	#define ComSignalGroup_igOvrdDecelByDrvr_CAN_Rx 17

	#define ComSignalGroup_igEngNSafe_CAN_Rx 18

	#define ComSignalGroup_igCchForFuEco_CAN_Rx 19

	#define ComSignalGroup_igSteerErrReqSafe_CAN_Rx 20

	#define ComSignalGroup_igDrvrSteerWhlHldGroup_CAN_Rx 21

	#define ComSignalGroup_igImobEngChk1_CAN_Rx 22

	#define ComSignalGroup_igEngFltIndcn_CAN_Rx 23

	#define ComSignalGroup_igCoolgLoadGroup_CAN_Rx 24

	#define ComSignalGroup_igCrsSetSpdEco_CAN_Rx 25

	#define ComSignalGroup_igHybErrIndcnReq_CAN_Rx 26

	#define ComSignalGroup_igPtCluTq_CAN_Rx 27

	#define ComSignalGroup_igImobEngChk3_CAN_Rx 28

	#define ComSignalGroup_igTrsmN_CAN_Rx 29

	#define ComSignalGroup_igAsyLatCtrlModReqGroup_FR_Rx 30

	#define ComSignalGroup_igAsyALgtRespAndLim_FR_Rx 31

	#define ComSignalGroup_igHvacEvaprTFrntGroup_FR_Rx 32

	#define ComSignalGroup_igVehModMngtGlbSafe1_0_FR_Rx 33

	#define ComSignalGroup_igLockgCenSts_FR_Rx 34

	#define ComSignalGroup_igDoorDrvrStsWithFacQly_FR_Rx 35

	#define ComSignalGroup_igBrkPedlVal_FR_Rx 36

	#define ComSignalGroup_igDrvrPrsntGroup_FR_Rx 37

	#define ComSignalGroup_igSteerLockReq_FR_Rx 38

	#define ComSignalGroup_igEngRunngReqByVehModMgr_FR_Rx 39

	#define ComSignalGroup_igImobEngMgrReq2_FR_Rx 40

	#define ComSignalGroup_igImobEngMgrReq1_FR_Rx 41

	#define ComSignalGroup_igImobEngMgrReq3_FR_Rx 42

	#define ComSignalGroup_igVehCfgPrm_0_FR_Rx 43

	#define ComSignalGroup_igTiAndDateIndcn_FR_Rx 44

	#define ComSignalGroup_igAmbTRaw_0_FR_Rx 45

	#define ComSignalGroup_igVehSpdIndcd_FR_Rx 46

	#define ComSignalGroup_igFuLvlRawActvSide_FR_Rx 47

	#define ComSignalGroup_igFuLvlRawPasSide_FR_Rx 48

	#define ComSignalGroup_igFuLvlIndcd_FR_Rx 49

	#define ComSignalGroup_igCmptmtTFrntGroup_FR_Rx 50

	#define ComSignalGroup_igEngIdleEco1_FR_Rx 51

	#define ComSignalGroup_igSteerSetg_FR_Rx 52

	#define ComSignalGroup_igPtDrvrSetg_FR_Rx 53

	#define ComSignalGroup_igHmiDefrstElecReq_FR_Rx 54

	#define ComSignalGroup_igHmiSeatClima_FR_Rx 55

	#define ComSignalGroup_igEngStrtStopDrvModIndSetg_FR_Rx 56

	#define ComSignalGroup_igActvnOfCrsEco_FR_Rx 57

	#define ComSignalGroup_igVehBattUGroup_0_FR_Rx 58

	#define ComSignalGroup_igVin_FR_Rx 59

	#define ComSignalGroup_igTrsmLockMgrReq_FR_Rx 60

	#define ComSignalGroup_igAmbTIndcdWithUnit_0_FR_Rx 61

	#define ComSignalGroup_igVehDecelCtrlSetg_FR_Rx 62

	#define ComSignalGroup_igEscSptModReqdByDrvrGroup_FR_Rx 63

	#define ComSignalGroup_igEpbEngStallApplySetg_FR_Rx 64

	#define ComSignalGroup_igEpbApplyAutSetg_FR_Rx 65

	#define ComSignalGroup_igSuspSetg_FR_Rx 66

	#define ComSignalGroup_igParkAssiPinionAgReqGrp_FR_Rx 67

	#define ComSignalGroup_igTrsmLockChk_CAN_Rx 68

	#define ComSignalGroup_igSteerWhlSnsr_CAN_Rx 69

	#define ComSignalGroup_igSuspPosnVertLe_CAN_Rx 70

	#define ComSignalGroup_igSuspFailrSts_CAN_Rx 71

	#define ComSignalGroup_igSteerLockChk_CAN_Rx 72

	#define ComSignalGroup_igTrsmParkLockdSafe_CAN_Rx 73

	#define ComSignalGroup_igCluPedlPsd_CAN_Rx 74

	#define ComSignalGroup_igEngTGrp_CAN_Rx 75

	#define ComSignalGroup_igVFCVectorTCM_CAN_Rx 76

	#define ComSignalGroup_igVFCVectorEGSM_CAN_Rx 77

	#define ComSignalGroup_igWhlMotSysTqEstGroup_CAN_Rx 78

	#define ComSignalGroup_igImobEngChk2_CAN_Rx 79

	#define ComSignalGroup_igCCPFrameReq_CAN_Rx 80

	#define ComSignalGroup_igPostImpctBrkgCfmdSafe1_FR_Rx 81

	#define ComSignalGroup_igMngtOfPostImpctBrkgSafe_FR_Rx 82

	#define ComSignalGroup_igJID_FR_Rx 83

	#define ComSignalGroup_igAsyALgtReqForCmftGroup_FR_Rx 84

	#define ComSignalGroup_igSftyGainGroupSafe_FR_Rx 85

	#define ComSignalGroup_igBltLockStAtDrvr_FR_Rx 86

	#define ComSignalGroup_igBltLockStAtPass_FR_Rx 87

	#define ComSignalGroup_igBltLockStAtRowThrdRi_FR_Rx 88

	#define ComSignalGroup_igBltLockStAtRowSecRi_FR_Rx 89

	#define ComSignalGroup_igBltLockStAtRowSecLe_FR_Rx 90

	#define ComSignalGroup_igBltLockStAtRowThrdLe_FR_Rx 91

	#define ComSignalGroup_igBltLockStAtRowSecMid_FR_Rx 92

	#define ComSignalGroup_igSftyDecelGroupSafe_FR_Rx 93

	#define ComSignalGroup_igBrkHptcWarnReqForAutDrvGroup_FR_Rx 94

	#define ComSignalGroup_igRscDataWithCmpSafe_FR_Rx 95

	#define ComSignalGroup_igAsyDataWithCmpSafe_FR_Rx 96

	#define ComSignalGroup_igAgDataRawSafe_0_FR_Rx 97

	#define ComSignalGroup_igADataRawSafe_0_FR_Rx 98

	#define ComSignalGroup_igDrvrGearShiftDirReq2_CAN_Rx 99

	#define ComSignalGroup_igTrsmActrSnsrPosn_CAN_Rx 100

	#define ComSignalGroup_igPosnFromSatlt_FR_Rx 101

	#define ComSignalGroup_igListOfNodAv_FR_Rx 102

	#define ComSignalGroup_igAirPInAirSprg_CAN_Rx 103

	#define ComSignalGroup_igSuspPosnVertRi1_CAN_Rx 104






/* END: Signal Group Ids   */

/* START: IPDU Ids */
/* Tx IPdus */
		#define ComConf_ComIPdu_VDDMChasSignalIPDU01 0
		#define ComConf_ComIPdu_VDDMChasSignalIPDU06 1
		#define ComConf_ComIPdu_VDDMChasSignalIPDU04 2
		#define ComConf_ComIPdu_VDDMChasSignalIPDU03 3
		#define ComConf_ComIPdu_VDDMChasSignalIPDU05 4
		#define ComConf_ComIPdu_VDDMChasSignalIPDU07 5
		#define ComConf_ComIPdu_VDDMChasSignalIPDU13 6
		#define ComConf_ComIPdu_VDDMChasSignalIPDU12 7
		#define ComConf_ComIPdu_VDDMChasSignalIPDU11 8
		#define ComConf_ComIPdu_VDDMChasSignalIPDU10 9
		#define ComConf_ComIPdu_VDDMChasSignalIPDU09 10
		#define ComConf_ComIPdu_VDDMChasSignalIPDU14 11
		#define ComConf_ComIPdu_VDDMChasSignalIPDU15 12
		#define ComConf_ComIPdu_VDDMChasSignalIPDU16 13
		#define ComConf_ComIPdu_VDDMChasSignalIPDU18 14
		#define ComConf_ComIPdu_VDDMChasSignalIPDU28 15
		#define ComConf_ComIPdu_VDDMChasSignalIPDU29 16
		#define ComConf_ComIPdu_VDDMChasSignalIPDU21 17
		#define ComConf_ComIPdu_VDDMChasSignalIPDU22 18
		#define ComConf_ComIPdu_VDDMChasSignalIPDU24 19
		#define ComConf_ComIPdu_VDDMChasSignalIPDU26 20
		#define ComConf_ComIPdu_VDDMChasSignalIPDU25 21
		#define ComConf_ComIPdu_VDDMChasSignalIPDU31 22
		#define ComConf_ComIPdu_VDDMChasSignalIPDU27 23
		#define ComConf_ComIPdu_VDDMChasSignalIPDU08 24
		#define ComConf_ComIPdu_VDDMChasSignalIPDU32 25
		#define ComConf_ComIPdu_VDDMChasSignalIPDU17 26
		#define ComConf_ComIPdu_VDDMChasSignalIPDU02 27
		#define ComConf_ComIPdu_VDDMChasSignalIPDU19 28
		#define ComConf_ComIPdu_VDDMChasSignalIPDU20 29
		#define ComConf_ComIPdu_VDDMChasSignalIPDU23 30
		#define ComConf_ComIPdu_VDDMPropSignalIPDU20 31
		#define ComConf_ComIPdu_VDDMPropSignalIPDU10 32
		#define ComConf_ComIPdu_VDDMPropSignalIPDU07 33
		#define ComConf_ComIPdu_VDDMPropSignalIPDU05 34
		#define ComConf_ComIPdu_VDDMPropSignalIPDU17 35
		#define ComConf_ComIPdu_VDDMPropSignalIPDU16 36
		#define ComConf_ComIPdu_VDDMPropSignalIPDU09 37
		#define ComConf_ComIPdu_VDDMPropSignalIPDU03 38
		#define ComConf_ComIPdu_VDDMPropSignalIPDU08 39
		#define ComConf_ComIPdu_VDDMPropSignalIPDU11 40
		#define ComConf_ComIPdu_VDDMPropSignalIPDU12 41
		#define ComConf_ComIPdu_VDDMPropSignalIPDU14 42
		#define ComConf_ComIPdu_VDDMPropSignalIPDU18 43
		#define ComConf_ComIPdu_VDDMPropSignalIPDU15 44
		#define ComConf_ComIPdu_VDDMPropSignalIPDU21 45
		#define ComConf_ComIPdu_VDDMPropSignalIPDU02 46
		#define ComConf_ComIPdu_VDDMPropSignalIPDU19 47
		#define ComConf_ComIPdu_VDDMBackBoneSignalIPdu03 48
		#define ComConf_ComIPdu_VDDMBackBoneSignalIPdu04 49
		#define ComConf_ComIPdu_VDDMBackBoneSignalIpdu05 50
		#define ComConf_ComIPdu_VDDMBackBoneSignalIpdu06 51
		#define ComConf_ComIPdu_VDDMBackBoneSignalIpdu07 52
		#define ComConf_ComIPdu_VDDMBackBoneSignalIpdu08 53
		#define ComConf_ComIPdu_VDDMBackBoneSignalIpdu09 54
		#define ComConf_ComIPdu_VDDMBackBoneSignalIpdu10 55
		#define ComConf_ComIPdu_VDDMBackBoneSignalIPdu01 56
		#define ComConf_ComIPdu_VDDMBackBoneSignalIPdu02 57
		#define ComConf_ComIPdu_VDDMChasSignalIPDU33 58
		#define ComConf_ComIPdu_VDDMChasSignalIPDU34 59
		#define ComConf_ComIPdu_VDDMChasSignalIPDU35 60
		#define ComConf_ComIPdu_VDDMPropSignalIPDU23 61
		#define ComConf_ComIPdu_VDDMChasSignalIPDU30 62
		#define ComConf_ComIPdu_VDDMPropSignalIPDU06 63
		#define ComConf_ComIPdu_VDDMPropSignalIPDU22 64
		#define ComConf_ComIPdu_CanNmUserDataChasCAN 65
		#define ComConf_ComIPdu_CanNmUserDataPropCAN 66
		#define ComConf_ComIPdu_FrNmUserDataFlexray 67
	/* Rx IPdus */
		#define ComConf_ComIPdu_SUMChasSignalIPDU01 0
		#define ComConf_ComIPdu_PSCMChasSignalIPDU01 1
		#define ComConf_ComIPdu_SCLChasSignalIPDU01 2
		#define ComConf_ComIPdu_SumChasSignalIPdu03 3
		#define ComConf_ComIPdu_ECMChasSignalIPDU03 4
		#define ComConf_ComIPdu_ECMChasSignalIPDU01 5
		#define ComConf_ComIPdu_ECMChasSignalIPDU04 6
		#define ComConf_ComIPdu_ECMChasSignalIPDU02 7
		#define ComConf_ComIPdu_ECMChasSignalIPDU05 8
		#define ComConf_ComIPdu_PSCMChasSignalIPDU02 9
		#define ComConf_ComIPdu_ECMChasSignalIPDU07 10
		#define ComConf_ComIPdu_ECMChasSignalIPDU06 11
		#define ComConf_ComIPdu_ECMChasSignalIPDU08 12
		#define ComConf_ComIPdu_ECMChasSignalIPDU09 13
		#define ComConf_ComIPdu_PSCMChasSignalIPDU03 14
		#define ComConf_ComIPdu_ECMChasSignalIPDU10 15
		#define ComConf_ComIPdu_EcmChasSignalIPdu11 16
		#define ComConf_ComIPdu_EcmChasSignalIPdu13 17
		#define ComConf_ComIPdu_EcmChasSignalIPdu12 18
		#define ComConf_ComIPdu_EcmChasSignalIPdu14 19
		#define ComConf_ComIPdu_EcmChasSignalIPdu18 20
		#define ComConf_ComIPdu_EcmChasSignalIPdu15 21
		#define ComConf_ComIPdu_EcmChasSignalIPdu17 22
		#define ComConf_ComIPdu_EcmChasSignalIPdu16 23
		#define ComConf_ComIPdu_EcmChasSignalIpdu19 24
		#define ComConf_ComIPdu_ObcPropSignalIPdu01 25
		#define ComConf_ComIPdu_DEMPropSignalIPDU01 26
		#define ComConf_ComIPdu_ECMPropSignalIPDU03 27
		#define ComConf_ComIPdu_ECMPropSignalIPDU05 28
		#define ComConf_ComIPdu_ESMPropSignalIPdu01 29
		#define ComConf_ComIPdu_BecmPropSignalIpdu05 30
		#define ComConf_ComIPdu_ECMPropSignalIPDU02 31
		#define ComConf_ComIPdu_IemPropSignalIPdu02 32
		#define ComConf_ComIPdu_IgmPropSignalIPdu01 33
		#define ComConf_ComIPdu_IgmPropSignalIPdu02 34
		#define ComConf_ComIPdu_IgmPropSignalIPdu04 35
		#define ComConf_ComIPdu_TCMPropSignalIPDU02 36
		#define ComConf_ComIPdu_TCMPropSignalIPDU05 37
		#define ComConf_ComIPdu_EcmPropSignalIPDU11 38
		#define ComConf_ComIPdu_ECMPropSignalIPDU00 39
		#define ComConf_ComIPdu_ASDMBackBoneSignalIPdu01 40
		#define ComConf_ComIPdu_ASDMBackBoneSignalIPdu02 41
		#define ComConf_ComIPdu_ASDMBackBoneSignalIPdu03 42
		#define ComConf_ComIPdu_CEMBackBoneSignalIpdu01 43
		#define ComConf_ComIPdu_CEMBackBoneSignalIpdu02 44
		#define ComConf_ComIPdu_CEMBackBoneSignalIpdu03 45
		#define ComConf_ComIPdu_CEMBackBoneSignalIpdu04 46
		#define ComConf_ComIPdu_CEMBackBoneSignalIpdu06 47
		#define ComConf_ComIPdu_CEMBackBoneSignalIpdu11 48
		#define ComConf_ComIPdu_DIMBackBoneSignalIPdu01 49
		#define ComConf_ComIPdu_DIMBackBoneSignalIPdu04 50
		#define ComConf_ComIPdu_DIMBackBoneSignalIPdu05 51
		#define ComConf_ComIPdu_IHUBackboneSignalIPdu01 52
		#define ComConf_ComIPdu_IHUBackBoneSignalIPdu07 53
		#define ComConf_ComIPdu_IHUBackBoneSignalIPdu02 54
		#define ComConf_ComIPdu_CEMBackBoneSignalIpdu07 55
		#define ComConf_ComIPdu_CEMBackBoneSignalIpdu05 56
		#define ComConf_ComIPdu_DIMBackBoneSignalIPdu02 57
		#define ComConf_ComIPdu_IHUBackBoneSignalIPdu06 58
		#define ComConf_ComIPdu_ASDMBackBoneSignalIPdu07 59
		#define ComConf_ComIPdu_PAMBackboneSignalIpdu01 60
		#define ComConf_ComIPdu_TCMPropSignalIPDU08 61
		#define ComConf_ComIPdu_IemPropSignalIPdu03 62
		#define ComConf_ComIPdu_IHUBackBoneSignalIPdu04 63
		#define ComConf_ComIPdu_ETCChasSignalIPDU01 64
		#define ComConf_ComIPdu_SASChasSignalIPDU1 65
		#define ComConf_ComIPdu_SUMChasSignalIPDU02 66
		#define ComConf_ComIPdu_SCLChasSignalIPDU02 67
		#define ComConf_ComIPdu_ETCPropSignalIPdu01 68
		#define ComConf_ComIPdu_EcmPropSignalIPDU10 69
		#define ComConf_ComIPdu_ECMPropSignalIPDU04 70
		#define ComConf_ComIPdu_EcmPropSignalIPDU08 71
		#define ComConf_ComIPdu_TCMVFCPropSignalIPDU 72
		#define ComConf_ComIPdu_EgsmVFCPropSignalIPDU 73
		#define ComConf_ComIPdu_ECMPropSignalIPDU01 74
		#define ComConf_ComIPdu_IemPropSignalIPdu01 75
		#define ComConf_ComIPdu_IemPropSignalIPdu04 76
		#define ComConf_ComIPdu_EtcPropSignalIPdu04 77
		#define ComConf_ComIPdu_ETCBackBonepSignalIPdu01 78
		#define ComConf_ComIPdu_SRSBackboneSignalIPdu03 79
		#define ComConf_ComIPdu_ASDMBackBoneSignalIPdu04 80
		#define ComConf_ComIPdu_SRSBackboneSignalIPdu01 81
		#define ComConf_ComIPdu_SRSBackboneSignalIPdu02 82
		#define ComConf_ComIPdu_ASDMBackBoneSignalIPdu05 83
		#define ComConf_ComIPdu_ASDMBackBoneSignalIPdu06 84
		#define ComConf_ComIPdu_VCMBackboneSignalIPdu00 85
		#define ComConf_ComIPdu_SRSBackBoneSignalIPdu04 86
		#define ComConf_ComIPdu_EgsmPropSignalIpdu01 87
		#define ComConf_ComIPdu_TACMPropSignalIPdu1 88
		#define ComConf_ComIPdu_EcmPropSignalIPDU12 89
		#define ComConf_ComIPdu_VCMBackboneSignalIPdu01 90
		#define ComConf_ComIPdu_CEMBackBoneSignalIpdu14 91
		#define ComConf_ComIPdu_MSG_ERAIndication_ChasCAN 92
		#define ComConf_ComIPdu_MSG_ERAIndication_PropCAN 93
		#define ComConf_ComIPdu_MSG_ERAIndication_Flexray 94
		#define ComConf_ComIPdu_MSG_EIRAIndicationRx_CAN 95
		#define ComConf_ComIPdu_MSG_EIRAIndicationRx_Flexray 96
		#define ComConf_ComIPdu_SumChasSignalIPdu05 97
		#define ComConf_ComIPdu_SumChasSignalIPdu04 98
		#define ComConf_ComIPdu_IHUBackBoneSignalIPdu08 99
/* END: IPDU Ids   */

/* START: IPDU Group Ids   */
/* IPduGroup ID*/
	#define ComIPduGroup_Rx 0
	#define ComIPduGroup_Tx 1
	#define ComIPduGroup_TxSPG_VDMflx_PNCDriving 2
	#define ComIPduGroup_TxSPG_VDMflx_PNCEntrance 3
	#define ComIPduGroup_TxSPG_VDMflx_PNCVisibility 4
	#define ComIPduGroup_TxSPG_VDMflx_PNCDriverInfo 5
	#define ComIPduGroup_TxSPG_VDMflx_PNCInfotainmentHMI 6
	#define ComIPduGroup_TxSPG_VDMflx 7
	#define ComIPduGroup_TxSPG_VDMflx_PNCStart 8
	#define ComIPduGroup_TxSPG_VDMflx_PNCGlobal 9
	#define ComIPduGroup_TxSPG_VDMflx_PNCTrailerCaravan 10
	#define ComIPduGroup_TxSPG_VDMflx_PNCPreClimatization 11
	#define ComIPduGroup_TxSPG_VDMflx_PNCLocking 12
	#define ComIPduGroup_TxSPG_VDMflx_PNCDriverInfoPoll 13
	#define ComIPduGroup_TxSPG_VDMflx_PNCGSD 14
	#define ComIPduGroup_TxSPG_VDMChassisCAN_PNCTrailerCaravan 15
	#define ComIPduGroup_TxSPG_VDMChassisCAN_PNCDriverInfoPoll 16
	#define ComIPduGroup_TxSPG_VDMChassisCAN_PNCEntrance 17
	#define ComIPduGroup_TxSPG_VDMChassisCAN_PNCVisibility 18
	#define ComIPduGroup_TxSPG_VDMChassisCAN_PNCPreClimatization 19
	#define ComIPduGroup_TxSPG_VDMChassisCAN 20
	#define ComIPduGroup_TxSPG_VDMChassisCAN_PNCGlobal 21
	#define ComIPduGroup_TxSPG_VDMChassisCAN_PNCInfotainmentHMI 22
	#define ComIPduGroup_TxSPG_VDMChassisCAN_PNCGSD 23
	#define ComIPduGroup_TxSPG_VDMChassisCAN_PNCLocking 24
	#define ComIPduGroup_TxSPG_VDMChassisCAN_PNCDriving 25
	#define ComIPduGroup_TxSPG_VDMChassisCAN_PNCDriverInfo 26
	#define ComIPduGroup_TxSPG_VDMChassisCAN_PNCStart 27
	#define ComIPduGroup_RxSPG_VDMPropulsionCAN_PNCDriverInfo 28
	#define ComIPduGroup_RxSPG_VDMPropulsionCAN 29
	#define ComIPduGroup_RxSPG_VDMPropulsionCAN_PNCStart 30
	#define ComIPduGroup_RxSPG_VDMPropulsionCAN_PNCLocking 31
	#define ComIPduGroup_RxSPG_VDMPropulsionCAN_PNCEntrance 32
	#define ComIPduGroup_RxSPG_VDMPropulsionCAN_PNCPreClimatization 33
	#define ComIPduGroup_RxSPG_VDMPropulsionCAN_PNCInfotainmentHMI 34
	#define ComIPduGroup_RxSPG_VDMPropulsionCAN_PNCDriverInfoPoll 35
	#define ComIPduGroup_RxSPG_VDMPropulsionCAN_PNCGlobal 36
	#define ComIPduGroup_RxSPG_VDMPropulsionCAN_PNCTrailerCaravan 37
	#define ComIPduGroup_RxSPG_VDMPropulsionCAN_PNCGSD 38
	#define ComIPduGroup_RxSPG_VDMPropulsionCAN_PNCDriving 39
	#define ComIPduGroup_TxSPG_VDMPropulsionCAN_PNCPreClimatization 40
	#define ComIPduGroup_TxSPG_VDMPropulsionCAN_PNCTrailerCaravan 41
	#define ComIPduGroup_TxSPG_VDMPropulsionCAN_PNCEntrance 42
	#define ComIPduGroup_TxSPG_VDMPropulsionCAN_PNCVisibility 43
	#define ComIPduGroup_TxSPG_VDMPropulsionCAN 44
	#define ComIPduGroup_TxSPG_VDMPropulsionCAN_PNCInfotainmentHMI 45
	#define ComIPduGroup_TxSPG_VDMPropulsionCAN_PNCGlobal 46
	#define ComIPduGroup_TxSPG_VDMPropulsionCAN_PNCDriverInfoPoll 47
	#define ComIPduGroup_TxSPG_VDMPropulsionCAN_PNCDriverInfo 48
	#define ComIPduGroup_TxSPG_VDMPropulsionCAN_PNCGSD 49
	#define ComIPduGroup_TxSPG_VDMPropulsionCAN_PNCStart 50
	#define ComIPduGroup_TxSPG_VDMPropulsionCAN_PNCDriving 51
	#define ComIPduGroup_TxSPG_VDMPropulsionCAN_PNCLocking 52
	#define ComIPduGroup_RxSPG_VDMflx_PNCStart 53
	#define ComIPduGroup_RxSPG_VDMflx_PNCTrailerCaravan 54
	#define ComIPduGroup_RxSPG_VDMflx_PNCPreClimatization 55
	#define ComIPduGroup_RxSPG_VDMflx_PNCDriving 56
	#define ComIPduGroup_RxSPG_VDMflx_PNCGlobal 57
	#define ComIPduGroup_RxSPG_VDMflx_PNCInfotainmentHMI 58
	#define ComIPduGroup_RxSPG_VDMflx_PNCVisibility 59
	#define ComIPduGroup_RxSPG_VDMflx_PNCGSD 60
	#define ComIPduGroup_RxSPG_VDMflx_PNCDriverInfo 61
	#define ComIPduGroup_RxSPG_VDMflx_PNCDriverInfoPoll 62
	#define ComIPduGroup_RxSPG_VDMflx 63
	#define ComIPduGroup_RxSPG_VDMflx_PNCEntrance 64
	#define ComIPduGroup_RxSPG_VDMflx_PNCLocking 65
	#define ComIPduGroup_RxSPG_VDMChassisCAN_PNCDriverInfo 66
	#define ComIPduGroup_RxSPG_VDMChassisCAN_PNCGSD 67
	#define ComIPduGroup_RxSPG_VDMChassisCAN_PNCPreClimatization 68
	#define ComIPduGroup_RxSPG_VDMChassisCAN_PNCLocking 69
	#define ComIPduGroup_RxSPG_VDMChassisCAN 70
	#define ComIPduGroup_RxSPG_VDMChassisCAN_PNCTrailerCaravan 71
	#define ComIPduGroup_RxSPG_VDMChassisCAN_PNCDriving 72
	#define ComIPduGroup_RxSPG_VDMChassisCAN_PNCGlobal 73
	#define ComIPduGroup_RxSPG_VDMChassisCAN_PNCStart 74
	#define ComIPduGroup_RxSPG_VDMChassisCAN_PNCInfotainmentHMI 75
	#define ComIPduGroup_RxSPG_VDMChassisCAN_PNCDriverInfoPoll 76


typedef struct
{
    uint32 Com_Num_Signals;
    uint32 Com_Num_SignalGrp;
    uint32 Com_Num_GrpSignals;
    uint32 Com_Num_Tx_Ipdu;
    uint32 Com_Num_Rx_Ipdu;
    uint32 Com_Num_FirstLevel_Ipdu_Grp;
    uint32 Com_Num_Total_Ipdu_Grp;
}Com_ConfigType;



/* START: I-PDU Buffers */
/* ComIPdu*/
#define COM_START_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU01[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU06[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU04[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU03[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU05[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU07[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU13[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU12[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU11[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU10[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU09[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU14[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU15[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU16[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU18[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU28[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU29[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU21[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU22[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU24[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU26[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU25[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU31[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU27[4];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU08[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU32[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU17[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU02[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU19[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU20[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU23[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMPropSignalIPDU20[4];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMPropSignalIPDU10[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMPropSignalIPDU07[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMPropSignalIPDU05[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMPropSignalIPDU17[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMPropSignalIPDU16[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMPropSignalIPDU09[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMPropSignalIPDU03[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMPropSignalIPDU08[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMPropSignalIPDU11[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMPropSignalIPDU12[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMPropSignalIPDU14[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMPropSignalIPDU18[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMPropSignalIPDU15[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMPropSignalIPDU21[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMPropSignalIPDU02[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMPropSignalIPDU19[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMBackBoneSignalIPdu03[32];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMBackBoneSignalIPdu04[32];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMBackBoneSignalIpdu05[32];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMBackBoneSignalIpdu06[32];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMBackBoneSignalIpdu07[32];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMBackBoneSignalIpdu08[32];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMBackBoneSignalIpdu09[32];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMBackBoneSignalIpdu10[32];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMBackBoneSignalIPdu01[32];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMBackBoneSignalIPdu02[32];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU33[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU34[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU35[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMPropSignalIPDU23[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMChasSignalIPDU30[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMPropSignalIPDU06[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_VDDMPropSignalIPDU22[8];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_CanNmUserDataChasCAN[6];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_CanNmUserDataPropCAN[6];
	

	
		extern VAR(uint8,COM_VAR) Com_IpduBuf_FrNmUserDataFlexray[6];
	

#define COM_STOP_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"
 	

#ifdef COM_TXDOUBLEBUFFER
#define COM_START_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU01[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU06[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU04[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU03[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU05[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU07[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU13[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU12[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU11[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU10[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU09[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU14[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU15[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU16[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU18[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU28[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU29[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU21[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU22[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU24[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU26[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU25[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU31[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU27[4] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU08[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU32[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU17[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU02[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU19[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU20[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU23[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMPropSignalIPDU20[4] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMPropSignalIPDU10[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMPropSignalIPDU07[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMPropSignalIPDU05[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMPropSignalIPDU17[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMPropSignalIPDU16[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMPropSignalIPDU09[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMPropSignalIPDU03[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMPropSignalIPDU08[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMPropSignalIPDU11[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMPropSignalIPDU12[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMPropSignalIPDU14[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMPropSignalIPDU18[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMPropSignalIPDU15[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMPropSignalIPDU21[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMPropSignalIPDU02[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMPropSignalIPDU19[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMBackBoneSignalIPdu03[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMBackBoneSignalIPdu04[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMBackBoneSignalIpdu05[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMBackBoneSignalIpdu06[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMBackBoneSignalIpdu07[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMBackBoneSignalIpdu08[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMBackBoneSignalIpdu09[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMBackBoneSignalIpdu10[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMBackBoneSignalIPdu01[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMBackBoneSignalIPdu02[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU33[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU34[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU35[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMPropSignalIPDU23[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMChasSignalIPDU30[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMPropSignalIPDU06[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VDDMPropSignalIPDU22[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_CanNmUserDataChasCAN[6] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_CanNmUserDataPropCAN[6] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_FrNmUserDataFlexray[6] ;
	

#define COM_STOP_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"
#endif

/* LocalBuffer for Rx Ipdus */
#define COM_START_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"
	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_SUMChasSignalIPDU01[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_PSCMChasSignalIPDU01[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_SCLChasSignalIPDU01[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_SumChasSignalIPdu03[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ECMChasSignalIPDU03[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ECMChasSignalIPDU01[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ECMChasSignalIPDU04[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ECMChasSignalIPDU02[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ECMChasSignalIPDU05[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_PSCMChasSignalIPDU02[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ECMChasSignalIPDU07[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ECMChasSignalIPDU06[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ECMChasSignalIPDU08[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ECMChasSignalIPDU09[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_PSCMChasSignalIPDU03[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ECMChasSignalIPDU10[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_EcmChasSignalIPdu11[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_EcmChasSignalIPdu13[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_EcmChasSignalIPdu12[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_EcmChasSignalIPdu14[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_EcmChasSignalIPdu18[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_EcmChasSignalIPdu15[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_EcmChasSignalIPdu17[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_EcmChasSignalIPdu16[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_EcmChasSignalIpdu19[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ObcPropSignalIPdu01[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_DEMPropSignalIPDU01[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ECMPropSignalIPDU03[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ECMPropSignalIPDU05[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ESMPropSignalIPdu01[4] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_BecmPropSignalIpdu05[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ECMPropSignalIPDU02[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_IemPropSignalIPdu02[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_IgmPropSignalIPdu01[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_IgmPropSignalIPdu02[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_IgmPropSignalIPdu04[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_TCMPropSignalIPDU02[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_TCMPropSignalIPDU05[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_EcmPropSignalIPDU11[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ECMPropSignalIPDU00[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ASDMBackBoneSignalIPdu01[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ASDMBackBoneSignalIPdu02[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ASDMBackBoneSignalIPdu03[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_CEMBackBoneSignalIpdu01[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_CEMBackBoneSignalIpdu02[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_CEMBackBoneSignalIpdu03[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_CEMBackBoneSignalIpdu04[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_CEMBackBoneSignalIpdu06[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_CEMBackBoneSignalIpdu11[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_DIMBackBoneSignalIPdu01[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_DIMBackBoneSignalIPdu04[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_DIMBackBoneSignalIPdu05[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_IHUBackboneSignalIPdu01[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_IHUBackBoneSignalIPdu07[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_IHUBackBoneSignalIPdu02[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_CEMBackBoneSignalIpdu07[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_CEMBackBoneSignalIpdu05[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_DIMBackBoneSignalIPdu02[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_IHUBackBoneSignalIPdu06[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ASDMBackBoneSignalIPdu07[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_PAMBackboneSignalIpdu01[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_TCMPropSignalIPDU08[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_IemPropSignalIPdu03[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_IHUBackBoneSignalIPdu04[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ETCChasSignalIPDU01[4] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_SASChasSignalIPDU1[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_SUMChasSignalIPDU02[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_SCLChasSignalIPDU02[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ETCPropSignalIPdu01[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_EcmPropSignalIPDU10[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ECMPropSignalIPDU04[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_EcmPropSignalIPDU08[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_TCMVFCPropSignalIPDU[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_EgsmVFCPropSignalIPDU[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ECMPropSignalIPDU01[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_IemPropSignalIPdu01[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_IemPropSignalIPdu04[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_EtcPropSignalIPdu04[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ETCBackBonepSignalIPdu01[2] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_SRSBackboneSignalIPdu03[24] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ASDMBackBoneSignalIPdu04[24] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_SRSBackboneSignalIPdu01[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_SRSBackboneSignalIPdu02[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ASDMBackBoneSignalIPdu05[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_ASDMBackBoneSignalIPdu06[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VCMBackboneSignalIPdu00[31] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_SRSBackBoneSignalIPdu04[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_EgsmPropSignalIpdu01[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_TACMPropSignalIPdu1[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_EcmPropSignalIPDU12[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_VCMBackboneSignalIPdu01[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_CEMBackBoneSignalIpdu14[32] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_MSG_ERAIndication_ChasCAN[2] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_MSG_ERAIndication_PropCAN[2] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_MSG_ERAIndication_Flexray[2] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_MSG_EIRAIndicationRx_CAN[2] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_MSG_EIRAIndicationRx_Flexray[2] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_SumChasSignalIPdu05[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_SumChasSignalIPdu04[8] ;
	

	
		extern VAR(uint8,COM_VAR) Com_LocalBuf_IHUBackBoneSignalIPdu08[32] ;
	

#define COM_STOP_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"
/* END: I-PDU Buffers */
/* Filter type */
#if defined (COM_F_MASKEDNEWEQUALSX) || defined(COM_F_MASKEDNEWDIFFERSX)
#define COM_START_SEC_CONST_UNSPECIFIED
#include "Com_MemMap.h"
extern  CONST(Com_MaskXType ,COM_CONST) Com_MaskX[1];
#define COM_STOP_SEC_CONST_UNSPECIFIED
#include "Com_MemMap.h"

#endif

#ifdef COM_F_MASKEDNEWDIFFERSOLD

#define COM_START_SEC_CONST_32
#include "Com_MemMap.h"
extern CONST(uint32 ,COM_CONST)  Com_Mask[1];
#define COM_STOP_SEC_CONST_32
#include "Com_MemMap.h"
#define COM_START_SEC_VAR_CLEARED_32
#include "Com_MemMap.h"
extern VAR(uint32,COM_VAR)  Com_F_OldVal[1];
#define COM_STOP_SEC_VAR_CLEARED_32
#include "Com_MemMap.h"

#endif

#if defined(COM_SigTriggeredOnChange) || defined(COM_SigGrpTriggeredOnChange)
#define COM_START_SEC_VAR_CLEARED_32
#include "Com_MemMap.h"
extern VAR(uint32,COM_VAR) Com_OldValTrigOnChng[1];
#define COM_STOP_SEC_VAR_CLEARED_32
#include "Com_MemMap.h"


#endif

#if defined(COM_F_NEWISWITHIN_POS) || defined(COM_F_NEWISOUTSIDE_POS)
#define COM_START_SEC_CONST_UNSPECIFIED
#include "Com_MemMap.h"
extern CONST(Com_POSMinMaxType ,COM_CONST) Com_POSMinMax[1];
#define COM_STOP_SEC_CONST_UNSPECIFIED
#include "Com_MemMap.h"

#endif

#if defined(COM_F_NEWISWITHIN_NEG) || defined(COM_F_NEWISOUTSIDE_NEG)
#define COM_START_SEC_CONST_UNSPECIFIED
#include "Com_MemMap.h"
extern CONST(Com_NEGMinMaxType ,COM_CONST) Com_NEGMinMax[1];
#define COM_STOP_SEC_CONST_UNSPECIFIED
#include "Com_MemMap.h"

#endif

#ifdef COM_F_ONEEVERYN
#define COM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Com_MemMap.h"
extern VAR(Com_OneEveryNType,COM_VAR) Com_OneEveryN[1];
#define COM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Com_MemMap.h"

#endif

#define Com_getfloat64InitValue(val) 0


/*Start: Signal Buffer -----> uint8/sint8/boolean/uint8[n]*/
#define COM_START_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"

extern VAR(uint8,COM_VAR) Com_SigType_u8[242];

#define COM_STOP_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"
/*End: Signal Buffer -----> uint8/sint8/boolean/uint8[n]*/

/*Start: Signal Buffer -----> uint16/sint16*/
#define COM_START_SEC_VAR_CLEARED_16
#include "Com_MemMap.h"

extern VAR(uint16,COM_VAR) Com_SigType_u16[59];

#define COM_STOP_SEC_VAR_CLEARED_16
#include "Com_MemMap.h"
/*End: Signal Buffer -----> uint16/sint16*/

/*Start: Signal Buffer -----> uint32/sint32*/
#define COM_START_SEC_VAR_CLEARED_32
#include "Com_MemMap.h"

extern VAR(uint32,COM_VAR) Com_SigType_u32[4];

#define COM_STOP_SEC_VAR_CLEARED_32
#include "Com_MemMap.h"
/*End: Signal Buffer -----> uint32/sint32*/

#ifdef COM_RXSIG_FLOAT64SUPP
#define COM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Com_MemMap.h"
extern VAR(float64,COM_VAR) Com_SigType_f64[];
#define COM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Com_MemMap.h"
#endif /* #ifdef COM_RXSIG_FLOAT64SUPP */


#ifdef COM_RX_SIGNALGROUP


/*Start: Rx Group Signal Buffer -----> uint8/sint8/boolean/uint8[n]*/
#define COM_START_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"
extern VAR(uint8,COM_VAR) Com_RxGrpSigType_u8[];
#define COM_STOP_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"
/*End: Rx Group Signal Buffer -----> uint8/sint8/boolean/uint8[n]*/

/*Start: Rx Group Signal Buffer -----> uint16/sint16*/
#define COM_START_SEC_VAR_CLEARED_16
#include "Com_MemMap.h"
extern VAR(uint16,COM_VAR) Com_RxGrpSigType_u16[];
#define COM_STOP_SEC_VAR_CLEARED_16
#include "Com_MemMap.h"
/*End:Rx Group Signal Buffer -----> uint16/sint16*/

/*Start: Rx Group Signal Buffer -----> uint32/sint32*/
#define COM_START_SEC_VAR_CLEARED_32
#include "Com_MemMap.h"
extern VAR(uint32,COM_VAR) Com_RxGrpSigType_u32[];
#define COM_STOP_SEC_VAR_CLEARED_32
#include "Com_MemMap.h"
/*End: Rx Group Signal Buffer -----> uint32/sint32*/

#ifdef COM_RXGRPSIG_FLOAT64SUPP
#define COM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Com_MemMap.h"
extern VAR(float64,COM_VAR) Com_RxGrpSigType_f64[];
#define COM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Com_MemMap.h"
#endif /* #ifdef COM_RXGRPSIG_FLOAT64SUPP */


/*Start:Rx Group Signal second Buffer -----> uint8/sint8/boolean/uint8[n]*/
#define COM_START_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"
extern VAR(uint8,COM_VAR) Com_SecondRxGrpSigType_u8[];
#define COM_STOP_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"
/*End: Rx Group Signal second Signal Buffer -----> uint8/sint8/boolean/uint8[n]*/

/*Start: Rx Group Signal second Signal Buffer -----> uint16/sint16*/
#define COM_START_SEC_VAR_CLEARED_16
#include "Com_MemMap.h"
extern VAR(uint16,COM_VAR) Com_SecondRxGrpSigType_u16[];
#define COM_STOP_SEC_VAR_CLEARED_16
#include "Com_MemMap.h"
/*End: Rx Group Signal second Signal Buffer -----> uint16/sint16*/

/*Start: Rx Group Signal second Signal Buffer -----> uint32/sint32*/
#define COM_START_SEC_VAR_CLEARED_32
#include "Com_MemMap.h"
extern VAR(uint32,COM_VAR) Com_SecondRxGrpSigType_u32[];
#define COM_STOP_SEC_VAR_CLEARED_32
#include "Com_MemMap.h"
/*End: Rx Group Signal second Signal Buffer -----> uint32/sint32*/

#ifdef COM_RXGRPSIG_FLOAT64SUPP
#define COM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Com_MemMap.h"
extern VAR(float64,COM_VAR) Com_SecondRxGrpSigType_f64[];
#define COM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Com_MemMap.h"
#endif /* #ifdef COM_RXGRPSIG_FLOAT64SUPP */
#endif /* #ifdef COM_RX_SIGNALGROUP*/

#ifdef COM_TX_SIGNALGROUP

/*Start: Tx group Signal Buffer -----> uint8/sint8/boolean/uint8[n]*/
#define COM_START_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"
extern VAR(uint8,COM_VAR) Com_TxGrpSigType_u8[];
#define COM_STOP_SEC_VAR_CLEARED_8
#include "Com_MemMap.h"
/*End: Tx group Signal Buffer -----> uint8/sint8/boolean/uint8[n]*/

/*Start: Tx group Signal Buffer -----> uint16/sint16*/
#define COM_START_SEC_VAR_CLEARED_16
#include "Com_MemMap.h"
extern VAR(uint16,COM_VAR) Com_TxGrpSigType_u16[];
#define COM_STOP_SEC_VAR_CLEARED_16
#include "Com_MemMap.h"
/*End: Tx group  Signal Buffer -----> uint16/sint16*/

/*Start: Tx group Signal Buffer -----> uint32/sint32*/
#define COM_START_SEC_VAR_CLEARED_32
#include "Com_MemMap.h"
extern VAR(uint32,COM_VAR) Com_TxGrpSigType_u32[];
#define COM_STOP_SEC_VAR_CLEARED_32
#include "Com_MemMap.h"
/*End: Tx group Signal Buffer -----> uint32/sint32*/

#ifdef COM_TXGRPSIG_FLOAT64SUPP
/*Start: Tx group Signal Buffer -----> float64 */
#define COM_START_SEC_VAR_CLEARED_UNSPECIFIED
#include "Com_MemMap.h"
extern VAR(float64,COM_VAR) Com_TxGrpSigType_f64[];
#define COM_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#include "Com_MemMap.h"
/*End: Tx group Signal Buffer -----> float64 */
#endif /* #ifdef COM_TXGRPSIG_FLOAT64SUPP */
#endif /* #ifdef COM_TX_SIGNALGROUP */
#endif   /* COM_CFG_H */
