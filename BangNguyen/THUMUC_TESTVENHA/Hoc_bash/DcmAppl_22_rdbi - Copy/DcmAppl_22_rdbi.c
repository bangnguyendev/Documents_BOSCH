
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
#include "DNCIF09_IB_ESP_INTERFACE_IBOOSTER.h"
#include "rba_NET_CarConfiguration.h"
//#include "RB_Volvo_DcomNet_IF.h"
#include "RBNMhistory.h"
#include "RBVSI_ControlMain_IF.h"
#include "VAR09_GCCC_STATEMACHINE_CEVT.h"
#include "ASWIF_Formula_Project.h"
#include "DNCIF_CommonConfig_IB2.h"

#include <math.h>
#include <float.h>
#include "RBPSC_MathLib.h"
#include "RBPSC_RPSCalc.h"

//for FEE0 DID
#include "RBLCF_Hexblocks_Structs.h"
#include "Platform_Types.h"

//for DID D002
#include "RBWauVoltread.h"
#include "RBSUPPLYNBS_Config.h"
#include "RBWauVoltread_PhyCalc.h"

//for DID FD01
#include "RBSUPPLYNBS_EnvData.h"
#include "RBBLM_Temp_CswItf.h"
#include "RBPSC_RPSCALC_IF.h"
#include "RBPSC_CONTROLMAIN.h"
#include "RBVSI_AscetASW_Interface.h"
//E103

#include "rba_NET_CarConfiguration.h"
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


/* interface for ESP - iB signals */
#include "DNCIF09_IB_ESP_INTERFACE_IBOOSTER.h"


// for DID FD00
#include "DNCIF_Global.h"
#include "RBAPLCUST_Global.h"
#include "partnumber.h"

#if ( RBFS_StatusInformation == RBFS_StatusInformation_ON)
#include "RBSMM_Requester_Cfg.h"
#endif

/* Inclusions for Public key checksum DID D03A */
#if(RBFS_HardwareSecurityModule == RBFS_HardwareSecurityModule_Supported)
//#include "ecy_hsm_csai_shecompat.h"
// *#include "ecy_hsm_csai_types.h"
#include "ecy_hsm_csai_session.h"
#include "ecy_hsm_csai_job.h"
#include "ecy_hsm_she.h"
#include "ecy_hsm_csai_keys.h"
#include "ecy_hsm_csai_cert.h"
#include "ecy_hsm_csai_misc.h"
#include "ecy_hsm_csai_data.h"
#include "ecy_hsm_csai_lifecycle.h"
#include "ecy_hsm_ipcdrv.h"
#endif

#include "RBAPLCUST_Global.h"
#include "RBAPLOBD_Global.h"

#if(RBFS_HardwareSecurityModule == RBFS_HardwareSecurityModule_Supported)
static ecy_hsm_Csai_ErrorT Public_Checksum_Read_RdbiErrCodeOpenSession;
static ecy_hsm_Csai_ErrorT Public_Checksum_Read_Success;
static ecy_hsm_Csai_SessionHandleT Public_Checksum_Read_RdbihSession;
static uint32 Public_Checksum_Read_RdbiStorageTag_u32;
static uint32 secureDataCnt;
static unsigned char securePublicKeyChecksumData[32];
static ecy_hsm_Csai_JobHandleT  Public_Checksum_Read_RdbihJob;
#endif

/* D09A */
uint8 g_QCMActive_Read;
uint8 g_flag1 = 0;
uint8 g_flag2 = 0;
UBYTE g_QCMActDeact_UB[1];

RB_ASSERT_SWITCH_SETTINGS(RBFS_StatusInformation,
                          RBFS_StatusInformation_ON,
                          RBFS_StatusInformation_OFF);


//For PBL Partnumber skumar
#include "NET_PBCfg_SoftwarePartNumber.h"
UBYTE C_F12E_MERGE[] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
UBYTE C_F1AE_MERGE[] = {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};

uint32 ComScl_RawSignal_isBkpOfDstTrvld_RX_u32;

//void getECUserialNumber(void);
void PRC_DCOM_GetEcuSerial_V(void);
static uint8 gs_invalidCcpCounter = 0;

uint8 ECUSerialNumber[4];
/*[[MEASUREMENT*/
/*NAME=ECUSerialNumber[0]*/
/*DATA_TYPE=UINT*/
/*COMMENT= latest state*/
/*FORMULA=NF_IDENTITY*/
/*MINBORDER=0*/
/*MAXBORDER=255*/
/*MTEVENT=c_MT_Default_Task_x1*/
/*]]MEASUREMENT*/


/*[[MEASUREMENT*/
/*NAME=ECUSerialNumber[1]*/
/*DATA_TYPE=UINT*/
/*COMMENT= latest state*/
/*FORMULA=NF_IDENTITY*/
/*MINBORDER=0*/
/*MAXBORDER=255*/
/*MTEVENT=c_MT_Default_Task_x1*/
/*]]MEASUREMENT*/

/*[[MEASUREMENT*/
/*NAME=ECUSerialNumber[2]*/
/*DATA_TYPE=UINT*/
/*COMMENT= latest state*/
/*FORMULA=NF_IDENTITY*/
/*MINBORDER=0*/
/*MAXBORDER=255*/
/*MTEVENT=c_MT_Default_Task_x1*/
/*]]MEASUREMENT*/


/*[[MEASUREMENT*/
/*NAME=ECUSerialNumber[3]*/
/*DATA_TYPE=UINT*/
/*COMMENT= latest state*/
/*FORMULA=NF_IDENTITY*/
/*MINBORDER=0*/
/*MAXBORDER=255*/
/*MTEVENT=c_MT_Default_Task_x1*/
/*]]MEASUREMENT*/


//CEVT part numbers read from in PDM
uint8 g_EcuSerialNum_Read[4];

uint8 g_ECUDeliveryAssemPartNum_Read[7];
uint8 g_ECUCoreAssemPartNum_Read[7];

uint8 g_ECUDeliveryAssemPartNum_Geely_Read[8];
uint8 g_ECUCoreAssemPartNum_Geely_Read[8];

static uint16 gs_RBMESG_UBBFiltered;
/*[[MEASUREMENT*/
/*NAME=gs_RBMESG_UBBFiltered*/
/*MODEL_NAME=gs_RBMESG_UBBFiltered*/
/*DATA_TYPE=UWORD*/
/*COMMENT=Received value*/
/*FORMULA=NF_VOLTAGE_1V_256bit*/
/*MINBORDER=0.0*/
/*MAXBORDER=21.0*/
/*MTEVENT=c_MT_Default_Task_x1*/
/*]]MEASUREMENT*/

static uint8 gs_RBMESG_UBBFilteredAFterConv;
/*[[MEASUREMENT*/
/*NAME=gs_RBMESG_UBBFilteredAFterConv*/
/*MODEL_NAME=gs_RBMESG_UBBFilteredAFterConv*/
/*DATA_TYPE=UBYTE*/
/*COMMENT=Received value*/
/*FORMULA=NF_VOLTAGE_1V_256bit*/
/*MINBORDER=0.0*/
/*MAXBORDER=21.0*/
/*MTEVENT=c_MT_Default_Task_x1*/
/*]]MEASUREMENT*/


/*
 * NET INTERFACE VARIABLES
 * -----------------------
 * Note:
 * Before iBG2_BL6, MESG variables were used to read NET info.
 * But from iBG2_BL6 onwards, regular global variables are used.
 *
 */

//extern rba_ComScl_RawSigGrp_ig_VDDM_Rx_VehModMngtGlbSafe1_S rba_ComScl_RawSigGrp_ig_VDDM_Rx_VehModMngtGlbSafe1;
//extern uint32 ComScl_RawSignal_CarTiGlb_RX_u32;
//extern rba_ComScl_RawSigGrp_ig_VDDM_Rx_VehBattUSysU_S rba_ComScl_RawSigGrp_ig_VDDM_Rx_VehBattUSysU;
//extern uint32 ComScl_RawSignal_BkpOfDstTrvld_RX_u32;

/*CCP*/
extern uint8 Scl_CarCfgPrm01NvmRamMirr;
extern uint8 Scl_CarCfgPrm17NvmRamMirr;
extern uint8 Scl_CarCfgPrm150NvmRamMirr;
extern uint8 Scl_CarCfgPrm267NvmRamMirr;
/*Private functions*/
static void RBAPLCUST_getCCP(uint16 CCPNum_u16, uint8* pBuffer);

FUNC(Std_ReturnType,DCM_APPL_CODE) DCOM_NvM_GetErrorStatus(NvM_RequestResultType ReadResultValue);

FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_EcuSoftwarePartNumber_0xF12e (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
    uint8 temp_u8;
	uint8 idx_u8 = 0;

#if((RBFS_BUILDCONFIG != RBFS_BUILDCONFIG_IB2BSW) && (RBFS_BUILDCONFIG != RBFS_BUILDCONFIG_IB2BSWD3) && (RBFS_BUILDCONFIG != RBFS_BUILDCONFIG_EI7000xHSWSim))

#if(RBFS_uC == RBFS_uC_RenesasD5onD5ED)
        for (temp_u8 = 0; temp_u8 < C_ECUSoftwarePartNumLen_UW; temp_u8++)
        {
            Data[temp_u8] = C_F12E_PUB[temp_u8];

        }
#endif

#if ((RBFS_uC  == RBFS_uC_RenesasD3)|| (RBFS_uC  == RBFS_uC_RenesasD4))
        for (temp_u8 = 0; temp_u8 < 8; temp_u8++)
        {
            Data[temp_u8] = C_F12E_PUB[temp_u8];
			C_F12E_MERGE[temp_u8] = C_F12E_PUB[temp_u8];
        }
/*
		for (temp_u8 = 8; temp_u8 < C_ECUSoftwarePartNumLen_UW; temp_u8++)
        {
			Data[temp_u8] = C_F12ESwcePartNo_PUB[idx_u8];
			C_F12E_MERGE[temp_u8] = C_F12ESwcePartNo_PUB[idx_u8];
			++idx_u8;
		}
		*/

#endif
#endif
    return (E_OK);

}
FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_ECUCoreAssemPartNumber_0xF12a (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{

    uint8 temp_u8;



        for (temp_u8 = 0; temp_u8 < C_ECUCoreAssemPartLen_UW; temp_u8++)
        {
            Data[temp_u8] = g_ECUCoreAssemPartNum_Read[temp_u8];

        }



    return (E_OK);
}
FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_EcuDeliveryAssemblyPart_0xF12b (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
    uint8 temp_u8;



        for (temp_u8 = 0; temp_u8 < C_ECUDeliveryAssemPartNumLen_UW; temp_u8++)
        {
            Data[temp_u8] = g_ECUDeliveryAssemPartNum_Read[temp_u8];

        }



    return (E_OK);

}
FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_EcuSoftwarePartNumber_Geely_0xF1AE (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
    uint8 temp_u8;
	uint8 idx_u8 = 0;


#if (RBFS_CEVT == RBFS_CEVT_YES )
	#if((RBFS_BUILDCONFIG != RBFS_BUILDCONFIG_IB2BSW) && (RBFS_BUILDCONFIG != RBFS_BUILDCONFIG_IB2BSWD3) && (RBFS_BUILDCONFIG != RBFS_BUILDCONFIG_EI7000xHSWSim))
       #if(RBFS_uC == RBFS_uC_RenesasD5onD5ED)
       for (temp_u8 = 0; temp_u8 < C_ECUSoftwarePartNumLen_Geely_UW; temp_u8++)
       {
            Data[temp_u8] = C_F1AE_PUB[temp_u8];
	        C_F1AE_MERGE[temp_u8] = C_F1AE_PUB[temp_u8];
       }
       #endif
       #if ((RBFS_uC  == RBFS_uC_RenesasD3)||(RBFS_uC  == RBFS_uC_RenesasD4))
       for (temp_u8 = 0; temp_u8 < 9; temp_u8++)
	   {
	       Data[temp_u8] = C_F1AE_PUB[temp_u8];
		   C_F1AE_MERGE[temp_u8] = C_F1AE_PUB[temp_u8];
	   }
	   /*
	   for (temp_u8 = 9; temp_u8 < C_ECUSoftwarePartNumLen_Geely_UW; temp_u8++)
	   {
	   		Data[temp_u8] = C_F1AESwcePartNo_PUB[idx_u8];
			C_F1AE_MERGE[temp_u8] = C_F1AESwcePartNo_PUB[idx_u8];
			++idx_u8;
		}
		*/
	   #endif
		#endif
        return (E_OK);
#endif

   #if (RBFS_CEVT == RBFS_CEVT_NO )
    //*ErrorCode = DCM_E_REQUESTOUTOFRANGE;
    return (E_NOT_OK);
    #endif

}
FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_EcuDeliveryAssemblyPart_Geely_0xF1AB (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
	#if (RBFS_CEVT == RBFS_CEVT_YES )
    uint8 temp_u8;

        for (temp_u8 = 0; temp_u8 < C_ECUDeliveryAssemPartNumLen_Geely_UW; temp_u8++)
        {
            Data[temp_u8] = g_ECUDeliveryAssemPartNum_Geely_Read[temp_u8];

        }

    return (E_OK);
    #endif
	#if (RBFS_CEVT == RBFS_CEVT_NO )
	//*ErrorCode = DCM_E_REQUESTOUTOFRANGE;
	return (E_NOT_OK);
    #endif
}
FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_ECUCoreAssemPartNumber_Geely_0xF1AA (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
	#if (RBFS_CEVT == RBFS_CEVT_YES )
    uint8 temp_u8;


        for (temp_u8 = 0; temp_u8 < C_ECUCoreAssemPartLen_Geely_UW; temp_u8++)
        {
            Data[temp_u8] = g_ECUCoreAssemPartNum_Geely_Read[temp_u8];

        }

    return (E_OK);
	#endif

	#if (RBFS_CEVT == RBFS_CEVT_NO )
	//*ErrorCode = DCM_E_REQUESTOUTOFRANGE;
	return (E_NOT_OK);
    #endif
}


FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_CompleteSoftPartNumb_0xEDA0 (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
    uint8 temp_u8;
    uint8 Pos_u8;

    Pos_u8 = 0;

#if((RBFS_BUILDCONFIG != RBFS_BUILDCONFIG_IB2BSW) && (RBFS_BUILDCONFIG != RBFS_BUILDCONFIG_IB2BSWD3) && (RBFS_BUILDCONFIG != RBFS_BUILDCONFIG_EI7000xHSWSim))
      /* For F120 */
      Data[Pos_u8] = 0xF1;
      Pos_u8++;
      Data[Pos_u8] = 0x20;
      Pos_u8++;

      for (temp_u8 = 0; temp_u8 < C_AppDiagPartNumLen_UW_n; temp_u8++)
      {
          Data[Pos_u8] = C_F120_PUB[temp_u8];
          Pos_u8++;
      }

      /* For F12A */
      Data[Pos_u8] = 0xF1;
      Pos_u8++;
      Data[Pos_u8] = 0x2A;
      Pos_u8++;

      for (temp_u8 = 0; temp_u8 < C_ECUCoreAssemPartLen_UW; temp_u8++)
      {
          Data[Pos_u8] = g_ECUCoreAssemPartNum_Read[temp_u8];
          Pos_u8++;
      }

      /* For F12B */
      Data[Pos_u8] = 0xF1;
      Pos_u8++;
      Data[Pos_u8] = 0x2B;
      Pos_u8++;

      for (temp_u8 = 0; temp_u8 < C_ECUDeliveryAssemPartNumLen_UW; temp_u8++)
      {
          Data[Pos_u8] = g_ECUDeliveryAssemPartNum_Read[temp_u8];
          Pos_u8++;
      }

      /* For F18C */
      Data[Pos_u8] = 0xF1;
      Pos_u8++;
      Data[Pos_u8] = 0x8C;
      Pos_u8++;
//getECUserialNumber();
      for (temp_u8 = 0; temp_u8 < C_ECUSerialNumLen_UW; temp_u8++)
      {
          Data[Pos_u8] = ECUSerialNumber[temp_u8];
          Pos_u8++;
      }

      /* For F12E */
      Data[Pos_u8] = 0xF1;
      Pos_u8++;
      Data[Pos_u8] = 0x2E;
      Pos_u8++;

      for (temp_u8 = 0; temp_u8 < C_ECUSoftwarePartNumLen_UW; temp_u8++)
      {
          Data[Pos_u8] = C_F12E_PUB[temp_u8];
          Pos_u8++;
      }
#endif

    return (E_OK);

}

FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_AppDiagDataPartNumber_0xF120(P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{

    uint8 temp_u8;
#if((RBFS_BUILDCONFIG != RBFS_BUILDCONFIG_IB2BSW) && (RBFS_BUILDCONFIG != RBFS_BUILDCONFIG_IB2BSWD3) && (RBFS_BUILDCONFIG != RBFS_BUILDCONFIG_EI7000xHSWSim))


        for (temp_u8 = 0; temp_u8 < C_AppDiagPartNumLen_UW; temp_u8++)
        {
            Data[temp_u8] = C_F120_PUB[temp_u8];

        }

#endif

    return (E_OK);
}


FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_ReadEcuSerialNumber_0xF18C (VAR(Dcm_OpStatusType,AUTOMATIC) OpStatus,P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
    uint8 temp_u8;


    //getECUserialNumber();
     for (temp_u8 = 0; temp_u8 < 4; temp_u8++)
        {
             Data[temp_u8] = ECUSerialNumber[temp_u8];

        }


       return (E_OK);
}

FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_AppDiagDataPartNumber_Geely_0xF1A0 (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{

    uint8 temp_u8;
#if (RBFS_CEVT == RBFS_CEVT_YES )
	#if((RBFS_BUILDCONFIG != RBFS_BUILDCONFIG_IB2BSW) && (RBFS_BUILDCONFIG != RBFS_BUILDCONFIG_IB2BSWD3) && (RBFS_BUILDCONFIG != RBFS_BUILDCONFIG_EI7000xHSWSim))

        for (temp_u8 = 0; temp_u8 < C_AppDiagPartNumLen_Geely_UW; temp_u8++)
        {
            Data[temp_u8] = C_F1A0_PUB[temp_u8];

        }
	#endif
    return (E_OK);
#endif

#if (RBFS_CEVT == RBFS_CEVT_NO )
    //*ErrorCode = DCM_E_REQUESTOUTOFRANGE;
    return (E_NOT_OK);
    #endif

}



FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_CompleteSoftPartNumb_Geely_0xED20 (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
    uint8 temp_u8;
    uint8 Pos_u8;

    Pos_u8 = 0;

     #if (RBFS_CEVT == RBFS_CEVT_YES )
#if((RBFS_BUILDCONFIG != RBFS_BUILDCONFIG_IB2BSW) && (RBFS_BUILDCONFIG != RBFS_BUILDCONFIG_IB2BSWD3) && (RBFS_BUILDCONFIG != RBFS_BUILDCONFIG_EI7000xHSWSim))
      /* For F1A0 */
      Data[Pos_u8] = 0xF1;
      Pos_u8++;
      Data[Pos_u8] = 0xA0;
      Pos_u8++;

      for (temp_u8 = 0; temp_u8 < C_AppDiagPartNumLen_UW; temp_u8++)
      {
          Data[Pos_u8] = C_F1A0_PUB[temp_u8];
          Pos_u8++;
      }

      /* For F1AA */
      Data[Pos_u8] = 0xF1;
      Pos_u8++;
      Data[Pos_u8] = 0xAA;
      Pos_u8++;

      for (temp_u8 = 0; temp_u8 < C_ECUCoreAssemPartLen_Geely_UW; temp_u8++)
      {
          Data[Pos_u8] = g_ECUCoreAssemPartNum_Geely_Read[temp_u8];
          Pos_u8++;
      }

      /* For F1AB */
      Data[Pos_u8] = 0xF1;
      Pos_u8++;
      Data[Pos_u8] = 0xAB;
      Pos_u8++;

      for (temp_u8 = 0; temp_u8 < C_ECUDeliveryAssemPartNumLen_Geely_UW; temp_u8++)
      {
          Data[Pos_u8] = g_ECUDeliveryAssemPartNum_Geely_Read[temp_u8];
          Pos_u8++;
      }

      /* For F18C */
      Data[Pos_u8] = 0xF1;
      Pos_u8++;
      Data[Pos_u8] = 0x8C;
      Pos_u8++;
//getECUserialNumber();
      for (temp_u8 = 0; temp_u8 < C_ECUSerialNumLen_UW; temp_u8++)
      {
          Data[Pos_u8] = ECUSerialNumber[temp_u8];
          Pos_u8++;
      }

      /* For F1AE */
      Data[Pos_u8] = 0xF1;
      Pos_u8++;
      Data[Pos_u8] = 0xAE;
      Pos_u8++;

      for (temp_u8 = 0; temp_u8 < C_ECUSoftwarePartNumLen_Geely_UW; temp_u8++)
      {
          Data[Pos_u8] = C_F1AE_PUB[temp_u8];
          Pos_u8++;
      }
#endif
    return (E_OK);

#endif

#if (RBFS_CEVT == RBFS_CEVT_NO )
    //*ErrorCode = DCM_E_REQUESTOUTOFRANGE;
    return (E_NOT_OK);
    #endif

}

//DD0A usage mode
//accepting data from NET
FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_UsageMode (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
            uint8 UsageMode;
            UsageMode = ((uint8)(ComScl_RawSigGrp_igVehModMngtGlbSafe1_0.ComScl_RawSignal_isVehModMngtGlbSafe1UsgModSts_0_u8));

            Data[0] = (uint8)(UsageMode & 0xFF);

            return (E_OK);
}



//F126
FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_Autosar_BSW_Cluster_Version_0xF126 (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
    Data[0] = 0x00;                                         /* DIAG_CLUSTER_VENDOR_ID LB*/
    Data[1] = (uint8)(DCM_VENDOR_ID);                       /* DIAG_CLUSTER_VENDOR_ID UB*/
    Data[2] = (uint8)(DCM_SW_MAJOR_VERSION);                /* DIAG_CLUSTER_SW_MAJOR_VERSION */
    Data[3] = (uint8)(DCM_SW_MINOR_VERSION);                /* DIAG_CLUSTER_SW_MINOR_VERSION */
    Data[4] = (uint8)(DCM_SW_PATCH_VERSION);                /*DIAG_CLUSTER_SW_PATCH_VERSION*/
    Data[5] = (uint8)(DCM_AR_RELEASE_MAJOR_VERSION);        /* DIAG_CLUSTER_AR_RELEASE_MAJOR_VERSION */
    Data[6] = (uint8)(DCM_AR_RELEASE_MINOR_VERSION);        /* DIAG_CLUSTER_AR_RELEASE_MINOR_VERSION*/
    Data[7] = (uint8)(DCM_AR_RELEASE_REVISION_VERSION);     /*DIAG_CLUSTER_AR_RELEASE_REVISION_VERSION*/
    Data[8] = 0x00;                                         /*DIAG_CLUSTER_VCC_DEM_VERSION*/
    Data[9] = 0x00;                                         /*DIAG_CLUSTER_VCC_DCM_VERSION*/
    Data[10] = 0x00;                                        /*DIAG_CLUSTER_VCC_FIM_VERSION*/
    Data[11] = 0x00;                                        /*MODEMGMT_CLUSTER_VENDOR_ID*/
    Data[12] = 0x00;                                        /*MODEMGMT_CLUSTER_VENDOR_ID*/
    Data[13] = 0x00;                                        /*MODEMGMT_CLUSTER_SW_MAJOR_VERSION*/
    Data[14] = 0x00;                                        /*MODEMGMT_CLUSTER_SW_MINOR_VERSION*/
    Data[15] = 0x00;                                        /*MODEMGMT_CLUSTER_SW_PATCH_VERSION*/
    Data[16] = 0x00;                                        /*MODEMGMT_CLUSTER_AR_RELEASE_MAJOR_VERSION*/
    Data[17] = 0x00;                                        /*MODEMGMT_CLUSTER_AR_RELEASE_MINOR_VERSION*/
    Data[18] = 0x00;                                        /*MODEMGMT_CLUSTER_AR_RELEASE_REVISION_VERSION*/
    Data[19] = 0x00;                                        /*COM_CLUSTER_VENDOR_ID*/
    Data[20] = (uint8)(COM_VENDOR_ID);                      /*COM_CLUSTER_VENDOR_ID*/
    Data[21] = (uint8)(COM_SW_MAJOR_VERSION);               /*COM_CLUSTER_SW_MAJOR_VERSION*/
    Data[22] = (uint8)(COM_SW_MINOR_VERSION);               /*COM_CLUSTER_SW_MINOR_VERSION*/
    Data[23] = (uint8)(COM_SW_PATCH_VERSION);               /*COM_CLUSTER_SW_PATCH_VERSION*/
    Data[24] = (uint8)(COM_AR_RELEASE_MAJOR_VERSION);       /*COM_CLUSTER_AR_RELEASE_MAJOR_VERSION*/
    Data[25] = (uint8)(COM_AR_RELEASE_MINOR_VERSION);       /*COM_CLUSTER_AR_RELEASE_MINOR_VERSION*/
    Data[26] = (uint8)(COM_AR_RELEASE_REVISION_VERSION);    /*COM_CLUSTER_AR_RELEASE_REVISION_VERSION*/
    Data[27] = 0x00;                                        /*CAN_CLUSTER_VENDOR_ID*/
    Data[28] = (uint8)(CAN_VENDOR_ID);                      /*CAN_CLUSTER_VENDOR_ID*/
    Data[29] = (uint8)(CAN_SW_MAJOR_VERSION);               /*CAN_CLUSTER_SW_MAJOR_VERSION*/
    Data[30] = (uint8)(CAN_SW_MINOR_VERSION);               /*CAN_CLUSTER_SW_MINOR_VERSION*/
    Data[31] = (uint8)(CAN_SW_PATCH_VERSION);               /*CAN_CLUSTER_SW_PATCH_VERSION*/
    Data[32] = (uint8)(CAN_AR_RELEASE_MAJOR_VERSION);       /*CAN_CLUSTER_AR_RELEASE_MAJOR_VERSION*/
    Data[33] = (uint8)(CAN_AR_RELEASE_MINOR_VERSION);       /*CAN_CLUSTER_AR_RELEASE_MINOR_VERSION*/
    Data[34] = (uint8)(CAN_AR_RELEASE_REVISION_VERSION);       /*CAN_CLUSTER_AR_RELEASE_REVISION_VERSION*/
    Data[35] = 0x00;                                        /*FLEXRAY_CLUSTER_VENDOR_ID*/
    Data[36] = 0x00;//(uint8)(FR_VENDOR_ID);                       /*FLEXRAY_CLUSTER_VENDOR_ID*/
    Data[37] = 0x00;//(uint8)(FR_SW_MAJOR_VERSION);                /*FLEXRAY_CLUSTER_SW_MAJOR_VERSION*/
    Data[38] = 0x00;//(uint8)(FR_SW_MINOR_VERSION);                /*FLEXRAY_CLUSTER_SW_MINOR_VERSION*/
    Data[39] = 0x00;//(uint8)(FR_SW_PATCH_VERSION);                /*FLEXRAY_CLUSTER_SW_PATCH_VERSION*/
    Data[40] = 0x00;//(uint8)(FR_AR_RELEASE_MAJOR_VERSION);        /*FLEXRAY_CLUSTER_AR_RELEASE_MAJOR_VERSION*/
    Data[41] = 0x00;//(uint8)(FR_AR_RELEASE_MINOR_VERSION);        /*FLEXRAY_CLUSTER_AR_RELEASE_MINOR_VERSION*/
    Data[42] = 0x00;//(uint8)(FR_AR_RELEASE_REVISION_VERSION);     /*FLEXRAY_CLUSTER_AR_RELEASE_REVISION_VERSION*/
    Data[43] = 0x00;                                        /*LIN_CLUSTER_VENDOR_ID*/
    Data[44] = 0x00;                                        /*LIN_CLUSTER_VENDOR_ID*/
    Data[45] = 0x00;                                        /*LIN_CLUSTER_SW_MAJOR_VERSION*/
    Data[46] = 0x00;                                        /*LIN_CLUSTER_SW_MINOR_VERSION*/
    Data[47] = 0x00;                                        /*LIN_CLUSTER_SW_PATCH_VERSION*/
    Data[48] = 0x00;                                        /*LIN_CLUSTER_AR_RELEASE_MAJOR_VERSION*/
    Data[49] = 0x00;                                        /*LIN_CLUSTER_AR_RELEASE_MINOR_VERSION*/
    Data[50] = 0x00;                                        /*LIN_CLUSTER_AR_RELEASE_REVISION_VERSION*/
    return (E_OK);
}

//Network management history
//0xD200
FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_NMHistory_FR_Buffer_0xD200 (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
	/* Conversion of time to get output in ms includes a factor of ((1/100) * 1000 * 0.1)= 1 [ 1/100 - DCOM RESOLUTION, 1000 - CONVERSION FACTOR FOR ms , 0.1 - net resolution] */
	Data[0] = g_NMStatebufferFlexray_PST[0].NMState_UB;
	Data[1] = (uint8)((g_NMStatebufferFlexray_PST[0].CarTiGlbforNM_UB  ) >> 24);
	Data[2] = (uint8)((g_NMStatebufferFlexray_PST[0].CarTiGlbforNM_UB  ) >> 16);
	Data[3] = (uint8)((g_NMStatebufferFlexray_PST[0].CarTiGlbforNM_UB  ) >> 8);
	Data[4] = (uint8)((g_NMStatebufferFlexray_PST[0].CarTiGlbforNM_UB  ) & 0xFF);
	Data[5] = g_NMStatebufferFlexray_PST[1].NMState_UB;
	Data[6] = (uint8)((g_NMStatebufferFlexray_PST[1].CarTiGlbforNM_UB  ) >> 24);
	Data[7] = (uint8)((g_NMStatebufferFlexray_PST[1].CarTiGlbforNM_UB  )  >> 16);
	Data[8] = (uint8)((g_NMStatebufferFlexray_PST[1].CarTiGlbforNM_UB  )  >> 8);
	Data[9] = (uint8)((g_NMStatebufferFlexray_PST[1].CarTiGlbforNM_UB  )  & 0xFF);
	Data[10] = g_NMStatebufferFlexray_PST[2].NMState_UB;
	Data[11] = (uint8)((g_NMStatebufferFlexray_PST[2].CarTiGlbforNM_UB  )  >> 24);
	Data[12] = (uint8)((g_NMStatebufferFlexray_PST[2].CarTiGlbforNM_UB  )  >> 16);
	Data[13] = (uint8)((g_NMStatebufferFlexray_PST[2].CarTiGlbforNM_UB  )  >> 8);
	Data[14] = (uint8)((g_NMStatebufferFlexray_PST[2].CarTiGlbforNM_UB  )  & 0xFF);
	Data[15] = g_NMStatebufferFlexray_PST[3].NMState_UB;
	Data[16] = (uint8)((g_NMStatebufferFlexray_PST[3].CarTiGlbforNM_UB  )  >> 24);
	Data[17] = (uint8)((g_NMStatebufferFlexray_PST[3].CarTiGlbforNM_UB  ) >> 16);
	Data[18] = (uint8)((g_NMStatebufferFlexray_PST[3].CarTiGlbforNM_UB  )  >> 8);
	Data[19] = (uint8)((g_NMStatebufferFlexray_PST[3].CarTiGlbforNM_UB  )  & 0xFF);
	Data[20] = g_NMStatebufferFlexray_PST[4].NMState_UB;
	Data[21] = (uint8)((g_NMStatebufferFlexray_PST[4].CarTiGlbforNM_UB  )  >> 24);
	Data[22] = (uint8)((g_NMStatebufferFlexray_PST[4].CarTiGlbforNM_UB  )  >> 16);
	Data[23] = (uint8)((g_NMStatebufferFlexray_PST[4].CarTiGlbforNM_UB  )  >> 8);
	Data[24] = (uint8)((g_NMStatebufferFlexray_PST[4].CarTiGlbforNM_UB  )  & 0xFF);
	Data[25] = g_NMStatebufferFlexray_PST[5].NMState_UB;
	Data[26] = (uint8)((g_NMStatebufferFlexray_PST[5].CarTiGlbforNM_UB  )  >> 24);
	Data[27] = (uint8)((g_NMStatebufferFlexray_PST[5].CarTiGlbforNM_UB  )  >> 16);
	Data[28] = (uint8)((g_NMStatebufferFlexray_PST[5].CarTiGlbforNM_UB  )  >> 8);
	Data[29] = (uint8)((g_NMStatebufferFlexray_PST[5].CarTiGlbforNM_UB  ) & 0xFF);
	Data[30] = g_NMStatebufferFlexray_PST[6].NMState_UB;
	Data[31] = (uint8)((g_NMStatebufferFlexray_PST[6].CarTiGlbforNM_UB  )  >> 24);
	Data[32] = (uint8)((g_NMStatebufferFlexray_PST[6].CarTiGlbforNM_UB  )  >> 16);
	Data[33] = (uint8)((g_NMStatebufferFlexray_PST[6].CarTiGlbforNM_UB  )  >> 8);
	Data[34] = (uint8)((g_NMStatebufferFlexray_PST[6].CarTiGlbforNM_UB  )  & 0xFF);
	Data[35] = g_NMStatebufferFlexray_PST[7].NMState_UB;
	Data[36] = (uint8)((g_NMStatebufferFlexray_PST[7].CarTiGlbforNM_UB  )  >> 24);
	Data[37] = (uint8)((g_NMStatebufferFlexray_PST[7].CarTiGlbforNM_UB  )  >> 16);
	Data[38] = (uint8)((g_NMStatebufferFlexray_PST[7].CarTiGlbforNM_UB  )  >> 8);
	Data[39] = (uint8)((g_NMStatebufferFlexray_PST[7].CarTiGlbforNM_UB  )  & 0xFF);
	Data[40] = g_NMStatebufferFlexray_PST[8].NMState_UB;
	Data[41] = (uint8)((g_NMStatebufferFlexray_PST[8].CarTiGlbforNM_UB  )  >> 24);
	Data[42] = (uint8)((g_NMStatebufferFlexray_PST[8].CarTiGlbforNM_UB  )  >> 16);
	Data[43] = (uint8)((g_NMStatebufferFlexray_PST[8].CarTiGlbforNM_UB  )  >> 8);
	Data[44] = (uint8)((g_NMStatebufferFlexray_PST[8].CarTiGlbforNM_UB  )  & 0xFF);
	Data[45] = g_NMStatebufferFlexray_PST[9].NMState_UB;
	Data[46] = (uint8)((g_NMStatebufferFlexray_PST[9].CarTiGlbforNM_UB  )  >> 24);
	Data[47] = (uint8)((g_NMStatebufferFlexray_PST[9].CarTiGlbforNM_UB  )  >> 16);
	Data[48] = (uint8)((g_NMStatebufferFlexray_PST[9].CarTiGlbforNM_UB  )  >> 8);
	Data[49] = (uint8)((g_NMStatebufferFlexray_PST[9].CarTiGlbforNM_UB  )  & 0xFF);
	return (E_OK);


}

//Network management history
//0xD210
FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_NetworkManagementHistory_0xD210 (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
   /* Conversion of time to get output in ms includes a factor of ((1/100) * 1000 * 0.1)= 1 [ 1/100 - DCOM RESOLUTION, 1000 - CONVERSION FACTOR FOR ms , 0.1 - net resolution] */
        Data[0] = g_NMStatebufferChasCAN_PST[0].NMState_UB;
        Data[1] = (uint8)((g_NMStatebufferChasCAN_PST[0].CarTiGlbforNM_UB  ) >> 24);
        Data[2] = (uint8)((g_NMStatebufferChasCAN_PST[0].CarTiGlbforNM_UB  ) >> 16);
        Data[3] = (uint8)((g_NMStatebufferChasCAN_PST[0].CarTiGlbforNM_UB  ) >> 8);
        Data[4] = (uint8)((g_NMStatebufferChasCAN_PST[0].CarTiGlbforNM_UB  ) & 0xFF);
        Data[5] = g_NMStatebufferChasCAN_PST[1].NMState_UB;
        Data[6] = (uint8)((g_NMStatebufferChasCAN_PST[1].CarTiGlbforNM_UB  ) >> 24);
        Data[7] = (uint8)((g_NMStatebufferChasCAN_PST[1].CarTiGlbforNM_UB  ) >> 16);
        Data[8] = (uint8)((g_NMStatebufferChasCAN_PST[1].CarTiGlbforNM_UB  ) >> 8);
        Data[9] = (uint8)((g_NMStatebufferChasCAN_PST[1].CarTiGlbforNM_UB  ) & 0xFF);
        Data[10] = g_NMStatebufferChasCAN_PST[2].NMState_UB;
        Data[11] = (uint8)((g_NMStatebufferChasCAN_PST[2].CarTiGlbforNM_UB  ) >> 24);
        Data[12] = (uint8)((g_NMStatebufferChasCAN_PST[2].CarTiGlbforNM_UB  ) >> 16);
        Data[13] = (uint8)((g_NMStatebufferChasCAN_PST[2].CarTiGlbforNM_UB  ) >> 8);
        Data[14] = (uint8)((g_NMStatebufferChasCAN_PST[2].CarTiGlbforNM_UB  ) & 0xFF);
        Data[15] = g_NMStatebufferChasCAN_PST[3].NMState_UB;
        Data[16] = (uint8)((g_NMStatebufferChasCAN_PST[3].CarTiGlbforNM_UB  ) >> 24);
        Data[17] = (uint8)((g_NMStatebufferChasCAN_PST[3].CarTiGlbforNM_UB  ) >> 16);
        Data[18] = (uint8)((g_NMStatebufferChasCAN_PST[3].CarTiGlbforNM_UB  ) >> 8);
        Data[19] = (uint8)((g_NMStatebufferChasCAN_PST[3].CarTiGlbforNM_UB  ) & 0xFF);
        Data[20] = g_NMStatebufferChasCAN_PST[4].NMState_UB;
        Data[21] = (uint8)((g_NMStatebufferChasCAN_PST[4].CarTiGlbforNM_UB  ) >> 24);
        Data[22] = (uint8)((g_NMStatebufferChasCAN_PST[4].CarTiGlbforNM_UB  ) >> 16);
        Data[23] = (uint8)((g_NMStatebufferChasCAN_PST[4].CarTiGlbforNM_UB  ) >> 8);
        Data[24] = (uint8)((g_NMStatebufferChasCAN_PST[4].CarTiGlbforNM_UB  ) & 0xFF);
        Data[25] = g_NMStatebufferChasCAN_PST[5].NMState_UB;
        Data[26] = (uint8)((g_NMStatebufferChasCAN_PST[5].CarTiGlbforNM_UB  ) >> 24);
        Data[27] = (uint8)((g_NMStatebufferChasCAN_PST[5].CarTiGlbforNM_UB  ) >> 16);
        Data[28] = (uint8)((g_NMStatebufferChasCAN_PST[5].CarTiGlbforNM_UB  ) >> 8);
        Data[29] = (uint8)((g_NMStatebufferChasCAN_PST[5].CarTiGlbforNM_UB  ) & 0xFF);
        Data[30] = g_NMStatebufferChasCAN_PST[6].NMState_UB;
        Data[31] = (uint8)((g_NMStatebufferChasCAN_PST[6].CarTiGlbforNM_UB  ) >> 24);
        Data[32] = (uint8)((g_NMStatebufferChasCAN_PST[6].CarTiGlbforNM_UB  ) >> 16);
        Data[33] = (uint8)((g_NMStatebufferChasCAN_PST[6].CarTiGlbforNM_UB  ) >> 8);
        Data[34] = (uint8)((g_NMStatebufferChasCAN_PST[6].CarTiGlbforNM_UB  ) & 0xFF);
        Data[35] = g_NMStatebufferChasCAN_PST[7].NMState_UB;
        Data[36] = (uint8)((g_NMStatebufferChasCAN_PST[7].CarTiGlbforNM_UB  ) >> 24);
        Data[37] = (uint8)((g_NMStatebufferChasCAN_PST[7].CarTiGlbforNM_UB  ) >> 16);
        Data[38] = (uint8)((g_NMStatebufferChasCAN_PST[7].CarTiGlbforNM_UB  ) >> 8);
        Data[39] = (uint8)((g_NMStatebufferChasCAN_PST[7].CarTiGlbforNM_UB  ) & 0xFF);
        Data[40] = g_NMStatebufferChasCAN_PST[8].NMState_UB;
        Data[41] = (uint8)((g_NMStatebufferChasCAN_PST[8].CarTiGlbforNM_UB  ) >> 24);
        Data[42] = (uint8)((g_NMStatebufferChasCAN_PST[8].CarTiGlbforNM_UB  ) >> 16);
        Data[43] = (uint8)((g_NMStatebufferChasCAN_PST[8].CarTiGlbforNM_UB  ) >> 8);
        Data[44] = (uint8)((g_NMStatebufferChasCAN_PST[8].CarTiGlbforNM_UB  ) & 0xFF);
        Data[45] = g_NMStatebufferChasCAN_PST[9].NMState_UB;
        Data[46] = (uint8)((g_NMStatebufferChasCAN_PST[9].CarTiGlbforNM_UB  ) >> 24);
        Data[47] = (uint8)((g_NMStatebufferChasCAN_PST[9].CarTiGlbforNM_UB  ) >> 16);
        Data[48] = (uint8)((g_NMStatebufferChasCAN_PST[9].CarTiGlbforNM_UB  ) >> 8);
        Data[49] = (uint8)((g_NMStatebufferChasCAN_PST[9].CarTiGlbforNM_UB  ) & 0xFF);

        return (E_OK);
}

#if(RBFS_Variant == RBFS_Variant_L3)
FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_NetworkManagementHistory_0xD239 (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
   /* Conversion of time to get output in ms includes a factor of ((1/100) * 1000 * 0.1)= 1 [ 1/100 - DCOM RESOLUTION, 1000 - CONVERSION FACTOR FOR ms , 0.1 - net resolution] */
        Data[0] = g_NMStatebufferADReduCAN_PST[0].NMState_UB;
        Data[1] = (uint8)((g_NMStatebufferADReduCAN_PST[0].CarTiGlbforNM_UB  ) >> 24);
        Data[2] = (uint8)((g_NMStatebufferADReduCAN_PST[0].CarTiGlbforNM_UB  ) >> 16);
        Data[3] = (uint8)((g_NMStatebufferADReduCAN_PST[0].CarTiGlbforNM_UB  ) >> 8);
        Data[4] = (uint8)((g_NMStatebufferADReduCAN_PST[0].CarTiGlbforNM_UB  ) & 0xFF);
        Data[5] = g_NMStatebufferADReduCAN_PST[1].NMState_UB;
        Data[6] = (uint8)((g_NMStatebufferADReduCAN_PST[1].CarTiGlbforNM_UB  ) >> 24);
        Data[7] = (uint8)((g_NMStatebufferADReduCAN_PST[1].CarTiGlbforNM_UB  ) >> 16);
        Data[8] = (uint8)((g_NMStatebufferADReduCAN_PST[1].CarTiGlbforNM_UB  ) >> 8);
        Data[9] = (uint8)((g_NMStatebufferADReduCAN_PST[1].CarTiGlbforNM_UB  ) & 0xFF);
        Data[10] = g_NMStatebufferADReduCAN_PST[2].NMState_UB;
        Data[11] = (uint8)((g_NMStatebufferADReduCAN_PST[2].CarTiGlbforNM_UB  ) >> 24);
        Data[12] = (uint8)((g_NMStatebufferADReduCAN_PST[2].CarTiGlbforNM_UB  ) >> 16);
        Data[13] = (uint8)((g_NMStatebufferADReduCAN_PST[2].CarTiGlbforNM_UB  ) >> 8);
        Data[14] = (uint8)((g_NMStatebufferADReduCAN_PST[2].CarTiGlbforNM_UB  ) & 0xFF);
        Data[15] = g_NMStatebufferADReduCAN_PST[3].NMState_UB;
        Data[16] = (uint8)((g_NMStatebufferADReduCAN_PST[3].CarTiGlbforNM_UB  ) >> 24);
        Data[17] = (uint8)((g_NMStatebufferADReduCAN_PST[3].CarTiGlbforNM_UB  ) >> 16);
        Data[18] = (uint8)((g_NMStatebufferADReduCAN_PST[3].CarTiGlbforNM_UB  ) >> 8);
        Data[19] = (uint8)((g_NMStatebufferADReduCAN_PST[3].CarTiGlbforNM_UB  ) & 0xFF);
        Data[20] = g_NMStatebufferADReduCAN_PST[4].NMState_UB;
        Data[21] = (uint8)((g_NMStatebufferADReduCAN_PST[4].CarTiGlbforNM_UB  ) >> 24);
        Data[22] = (uint8)((g_NMStatebufferADReduCAN_PST[4].CarTiGlbforNM_UB  ) >> 16);
        Data[23] = (uint8)((g_NMStatebufferADReduCAN_PST[4].CarTiGlbforNM_UB  ) >> 8);
        Data[24] = (uint8)((g_NMStatebufferADReduCAN_PST[4].CarTiGlbforNM_UB  ) & 0xFF);
        Data[25] = g_NMStatebufferADReduCAN_PST[5].NMState_UB;
        Data[26] = (uint8)((g_NMStatebufferADReduCAN_PST[5].CarTiGlbforNM_UB  ) >> 24);
        Data[27] = (uint8)((g_NMStatebufferADReduCAN_PST[5].CarTiGlbforNM_UB  ) >> 16);
        Data[28] = (uint8)((g_NMStatebufferADReduCAN_PST[5].CarTiGlbforNM_UB  ) >> 8);
        Data[29] = (uint8)((g_NMStatebufferADReduCAN_PST[5].CarTiGlbforNM_UB  ) & 0xFF);
        Data[30] = g_NMStatebufferADReduCAN_PST[6].NMState_UB;
        Data[31] = (uint8)((g_NMStatebufferADReduCAN_PST[6].CarTiGlbforNM_UB  ) >> 24);
        Data[32] = (uint8)((g_NMStatebufferADReduCAN_PST[6].CarTiGlbforNM_UB  ) >> 16);
        Data[33] = (uint8)((g_NMStatebufferADReduCAN_PST[6].CarTiGlbforNM_UB  ) >> 8);
        Data[34] = (uint8)((g_NMStatebufferADReduCAN_PST[6].CarTiGlbforNM_UB  ) & 0xFF);
        Data[35] = g_NMStatebufferADReduCAN_PST[7].NMState_UB;
        Data[36] = (uint8)((g_NMStatebufferADReduCAN_PST[7].CarTiGlbforNM_UB  ) >> 24);
        Data[37] = (uint8)((g_NMStatebufferADReduCAN_PST[7].CarTiGlbforNM_UB  ) >> 16);
        Data[38] = (uint8)((g_NMStatebufferADReduCAN_PST[7].CarTiGlbforNM_UB  ) >> 8);
        Data[39] = (uint8)((g_NMStatebufferADReduCAN_PST[7].CarTiGlbforNM_UB  ) & 0xFF);
        Data[40] = g_NMStatebufferADReduCAN_PST[8].NMState_UB;
        Data[41] = (uint8)((g_NMStatebufferADReduCAN_PST[8].CarTiGlbforNM_UB  ) >> 24);
        Data[42] = (uint8)((g_NMStatebufferADReduCAN_PST[8].CarTiGlbforNM_UB  ) >> 16);
        Data[43] = (uint8)((g_NMStatebufferADReduCAN_PST[8].CarTiGlbforNM_UB  ) >> 8);
        Data[44] = (uint8)((g_NMStatebufferADReduCAN_PST[8].CarTiGlbforNM_UB  ) & 0xFF);
        Data[45] = g_NMStatebufferADReduCAN_PST[9].NMState_UB;
        Data[46] = (uint8)((g_NMStatebufferADReduCAN_PST[9].CarTiGlbforNM_UB  ) >> 24);
        Data[47] = (uint8)((g_NMStatebufferADReduCAN_PST[9].CarTiGlbforNM_UB  ) >> 16);
        Data[48] = (uint8)((g_NMStatebufferADReduCAN_PST[9].CarTiGlbforNM_UB  ) >> 8);
        Data[49] = (uint8)((g_NMStatebufferADReduCAN_PST[9].CarTiGlbforNM_UB  ) & 0xFF);

        return (E_OK);
}
#endif
//Routing Table Configuration Identification
//DID 0xD220
FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_RoutingTableConfigurationIdentification_0xD220 (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
   	uint32 temp_configid;
	uint32 temp_u8;

	temp_configid = PduR_GetConfigurationId();
	//temp_configid = (temp_configid * 0.25);
	//temp_configid = (temp_u8/1000);
	BOUND(temp_configid, 0, 65535);

	Data[0] = (uint8) (temp_configid >> 8);
	Data[1] = (uint8) (temp_configid & 0xFF);

	return (E_OK);
}

/* DID 0xDD02 */
//accepting data from ASW
FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_Vehiclebattery_Voltage_0xDD02 (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{

        /* declare local power supply voltage variable */
            uint8  ECUvoltage = 0;
            //the value received will be 10timesthe voltage in volts
            //for ex: if volatge in 8.5 V, you will get 85
           //the range is 0volts to 63.75volts
            //0 corresponds to 0x00 and 63.75 corresponds to 0xFF
            //hence 1v =(255)/63.75 = 0x04
            ECUvoltage  = (ComScl_RawSigGrp_igVehBattU.ComScl_RawSignal_isVehBattUSysU_u8* 4)/10;

            NETBOUND(ECUvoltage, 0x00, 0xFF);
            Data[0] = ECUvoltage;

            return (E_OK);


}
/* DID 0xD002 */
FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_SupplyVoltage_0xD002 (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
 uint16 l_getKL15Voltage = 0;

 l_getKL15Voltage = RBWauVolt_getKL15Voltage();

/*Received message is uint16 and has internal quantisation of 1/256 V.
the message needs a factor of 1/1000 */

 l_getKL15Voltage = ((l_getKL15Voltage * 1000)/256);
Data[0] = (uint8)(l_getKL15Voltage >> 8);
Data[1] = (uint8)(l_getKL15Voltage & 0xFF);

return (E_OK);
}

/* DID 0x2B35*/
FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_BrakePedalPosition_0x2B35 (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
        int16_t InputRodStrokeCalc = 0;
/*Interface from ASW */

        RBMESG_DefineMESGDef(RBVSI_InputRodStrokeCalc);
        RBMESG_RcvMESGDef(RBVSI_InputRodStrokeCalc);

		InputRodStrokeCalc = ((l_RBVSI_InputRodStrokeCalc* 25)/512);

        Data[0] = (uint8)(InputRodStrokeCalc >> 8);
        Data[1] = (uint8)(InputRodStrokeCalc & 0xFF);

return (E_OK);
}

/* DID 0xDD00 */
FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_GlobalRealTime (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
	uint32 GlobalRealTime;
	uint32 temp = 0;
	DefineMESGDef(NMSG_CarTiGlb_UL);
	RcvMESGDef(NMSG_CarTiGlb_UL);

	/* Dcom resolution*/
	//temp = (uint32)(l_NMSG_CarTiGlb_UL*600);
	/* To convert it into minutes */
	//GlobalRealTime = ((uint32)(((temp * 0.01667)*0.1)));

	temp = (uint32)(l_NMSG_CarTiGlb_UL*0.016666667);
	GlobalRealTime = ((uint32)(temp * 600));

	Data[0] = (uint8)(GlobalRealTime >> 24);
	Data[1] = (uint8)(GlobalRealTime >> 16);
	Data[2] = (uint8)(GlobalRealTime >> 8);
	Data[3] = (uint8)(GlobalRealTime & 0xFF);

	return (E_OK);
}

/* DID 0xDD0B */
FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_PartialNetworkCluster_0xDD0B (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
    uint32 PNC = 0;
    DefineMESGDef(NMSG_DcmPNCStatus_u32);
    RcvMESGDef(NMSG_DcmPNCStatus_u32);

    PNC = (uint32)(l_NMSG_DcmPNCStatus_u32);
     Data[0] = (uint8)(PNC >> 24);
     Data[1] = (uint8)(PNC >> 16);
	 Data[2] = (uint8)(PNC >> 8);
    return (E_OK);
}

/* DID 0xDD01 */
FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_TotalDistance (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{

    uint32 TotalDistance;

	DefineMESGDef(NMSG_DstTrvlDMst_RCV_UL);
	RcvMESGDef(NMSG_DstTrvlDMst_RCV_UL);


	/* To convert it into minutes */
	TotalDistance = ((uint32)(l_NMSG_DstTrvlDMst_RCV_UL));

	Data[0] = (uint8)(TotalDistance >> 16);
	Data[1] = (uint8)(TotalDistance >> 8);
	Data[2] = (uint8)(TotalDistance & 0xFF);

            return (E_OK);
}
//0xDD0C
FUNC(Std_ReturnType,DCM_APPL_CODE)DcmAppl_ElPowerLevel_0xDD0C(P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{

	uint8 Temp_ElecPwrLvl;

	 DefineMESGDef(NMSG_VehicleSpeed_ST);
	 RcvMESGDef(NMSG_VehicleSpeed_ST);

    	if((ComScl_RawSigGrp_igVehModMngtGlbSafe1_0.ComScl_RawSignal_isVehModMngtGlbSafe1PwrLvlElecMai_0_u8 == 2)&& (l_NMSG_VehicleSpeed_ST.VehicleSpeed_UW == 0))
    	{
    		Temp_ElecPwrLvl = 0x20;
    	}
    	else if((ComScl_RawSigGrp_igVehModMngtGlbSafe1_0.ComScl_RawSignal_isVehModMngtGlbSafe1PwrLvlElecMai_0_u8 == 2) && (l_NMSG_VehicleSpeed_ST.VehicleSpeed_UW < 125))//125
    	{
    		Temp_ElecPwrLvl = 0x21;
    	}
    	else if((ComScl_RawSigGrp_igVehModMngtGlbSafe1_0.ComScl_RawSignal_isVehModMngtGlbSafe1PwrLvlElecMai_0_u8== 2)&& (l_NMSG_VehicleSpeed_ST.VehicleSpeed_UW > 125) && (l_NMSG_VehicleSpeed_ST.VehicleSpeed_UW < 267))//125, 267
    	{
    		Temp_ElecPwrLvl = 0x22;
    	}
    	else if((ComScl_RawSigGrp_igVehModMngtGlbSafe1_0.ComScl_RawSignal_isVehModMngtGlbSafe1PwrLvlElecMai_0_u8 == 2) && (l_NMSG_VehicleSpeed_ST.VehicleSpeed_UW > 267) && (l_NMSG_VehicleSpeed_ST.VehicleSpeed_UW < 534))//267, 534
    	{
    		Temp_ElecPwrLvl = 0x23;
    	}
    	else if((ComScl_RawSigGrp_igVehModMngtGlbSafe1_0.ComScl_RawSignal_isVehModMngtGlbSafe1PwrLvlElecMai_0_u8 == 2) && (l_NMSG_VehicleSpeed_ST.VehicleSpeed_UW > 534))//534
    	{
    		Temp_ElecPwrLvl = 0x24;
    	}
    	else
    	{
    		Temp_ElecPwrLvl = 0x0F;
    	}

	Data[0] = Temp_ElecPwrLvl;
    return(E_OK);
}

FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_ECU_powerSupply_0xD111 (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{

    RBMESG_RcvMESG(gs_RBMESG_UBBFiltered, RBMESG_UBBFiltered);
    /*Convert it and Bind it to Diag Output Resolution*/
    //Out Range = 0 to 255, RBMESG_UBBFiltered = 0 to 21. Hence, scale by 10.
    gs_RBMESG_UBBFilteredAFterConv = (uint8)((gs_RBMESG_UBBFiltered * 10)>>8);
    Data[0] = gs_RBMESG_UBBFilteredAFterConv;

    return (E_OK);
}

FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_PWM_InputSignal_0xD112 (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
    uint16 LiPS2Signal;

    RBMESG_DefineMESGDef(RBMESG_LiPS2Signal_S16);
    RBMESG_RcvMESGDef(RBMESG_LiPS2Signal_S16);

    /*1bit = 1 /16384 (14Bit)*/
    LiPS2Signal = ((uint16)(l_RBMESG_LiPS2Signal_S16));

    //msb is data[0] and lsb data[1]

    Data[0] = (uint8)(LiPS2Signal >> 8);
    Data[1] = (uint8)(LiPS2Signal & 0xFF);
    return (E_OK);
}

FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_InternalSensorSignal_0xD113 (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
    uint16 BLMTemperatureCh1;
    uint16 BLMTemperatureCh2;

    RBMESG_DefineMESGDef(RBMESG_BLMTemperatureB6_Ch1_s16);
    RBMESG_DefineMESGDef(RBMESG_BLMTemperatureB6_Ch2_s16);

    RBMESG_RcvMESGDef(RBMESG_BLMTemperatureB6_Ch1_s16);
    RBMESG_RcvMESGDef(RBMESG_BLMTemperatureB6_Ch2_s16);

    /*1 Bit = 1/64 degree Celsius */
    BLMTemperatureCh1 = ((uint16)(l_RBMESG_BLMTemperatureB6_Ch1_s16));
    BLMTemperatureCh2 = ((uint16)(l_RBMESG_BLMTemperatureB6_Ch2_s16));

    /*msb is data[0] and lsb data[3]*/

    Data[0] = (uint8)(BLMTemperatureCh1 >> 24);
    Data[1] = (uint8)(BLMTemperatureCh1 >> 16);
    Data[2] = (uint8)(BLMTemperatureCh2 >> 8);
    Data[3] = (uint8)(BLMTemperatureCh2 & 0xFF);

    return (E_OK);
}


FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_carMode_0xD134 (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
    /*Get the Data from NET and Send*/
    Data[0] = (uint8) ComScl_RawSigGrp_igVehModMngtGlbSafe1_0.ComScl_RawSignal_isVehModMngtGlbSafe1CarModSts1_0_u8;

    return (E_OK);
}

FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_faultyCarConfigParameters_0xE103 (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
        uint8 length_u8 ;
	    boolean FailedState;
        boolean FailedState1;
		Std_ReturnType l_std_Return_FORCE_LAMP_TO_RED1;
		Std_ReturnType l_std_Return_FORCE_LAMP_TO_RED2;

        uint8 NoOfFaultyParm = 0;

        VarCodeInvalidPrameterType_ST l_GCC_InvalidParametersArray_ST;

        RcvMESG(l_GCC_InvalidParametersArray_ST,NMSG_GCC_InvalidParametersArray_ST);

		NoOfFaultyParm = l_GCC_InvalidParametersArray_ST.Index[0];

        l_std_Return_FORCE_LAMP_TO_RED1 = Dem_GetEventFailed(DemConf_DemEventParameter_Scl_Invalid_CCP, &FailedState);
		l_std_Return_FORCE_LAMP_TO_RED2 = Dem_GetEventFailed(DemConf_DemEventParameter_Scl_Inconsistent_Incompatible_CCP, &FailedState1);

       if((l_std_Return_FORCE_LAMP_TO_RED1 == 0) && (l_std_Return_FORCE_LAMP_TO_RED2 == 0))
       {
		if((FailedState == 0) && (FailedState1 == 0))
		{
			for(length_u8 = 1; length_u8 < 31; length_u8 ++ )
			{
				l_GCC_InvalidParametersArray_ST.Index[length_u8] = 0;
			}
				return (E_OK);
		}
		else
		{
			if(NoOfFaultyParm> 10)
			{
				NoOfFaultyParm = 10;
			}
			Data[0] = NoOfFaultyParm;

			for(length_u8 = 1; length_u8 < 31; length_u8 ++ )
			{
				Data[length_u8] = l_GCC_InvalidParametersArray_ST.Index[length_u8];
			}
				return (E_OK);
		}
	   }
	   else
	   {
		   return (E_NOT_OK);
	   }
}

FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_iBstatus (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
    uint8 l_ASW_iBstatus_UB = 0;
    RcvMESG(l_ASW_iBstatus_UB, NMSG_iBStatusXMT_N);
    Data[0] = (uint8)l_ASW_iBstatus_UB;
    return (E_OK);
}

//changed by sony
FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_forceBlendingPotential (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{

    //DefineMESGDef(NMSG_pForceBlendingPotentialXMT_ST);
    //RcvMESGDef(NMSG_pForceBlendingPotentialXMT_ST);
    pForceBlendingPotential_ST l_SCL_pForceBlendingPotential_ST;
     RcvMESG(l_SCL_pForceBlendingPotential_ST, NMSG_pForceBlendingPotentialXMT_ST);
    Data[0] = (uint8)l_SCL_pForceBlendingPotential_ST.pForceBlendingPotential_UB;
    return (E_OK);
}
//changed by sony
FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_outputRodDriver (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{

   // DefineMESGDef(NMSG_sOutputRodDrvr_ST);
   // RcvMESGDef(NMSG_sOutputRodDrvr_ST);
    sOutputRodDrvr_ST l_SCL_sOutputRodDrvr_ST;
    RcvMESG(l_SCL_sOutputRodDrvr_ST, NMSG_sOutputRodDrvr_ST);
    Data[1] = (uint8)(l_SCL_sOutputRodDrvr_ST.sOutputRodDriver_SW & 0x00FF);
    Data[0] = (uint8)((l_SCL_sOutputRodDrvr_ST.sOutputRodDriver_SW & 0xFF00)>>8);
    return (E_OK);
}
//changed by sony
FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_outputRodAct (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
    //DefineMESGDef(NMSG_sOutputRod_Act_ST);
    //RcvMESGDef(NMSG_sOutputRod_Act_ST);
    sOutputRod_Act_ST l_SCL_sOutputRod_Act_ST;
    RcvMESG(l_SCL_sOutputRod_Act_ST, NMSG_sOutputRod_Act_ST);
    Data[1] = (uint8)(l_SCL_sOutputRod_Act_ST.sOutputRodAct_SW & 0x00FF);
    Data[0] = (uint8)((l_SCL_sOutputRod_Act_ST.sOutputRodAct_SW & 0xFF00)>>8);
    return (E_OK);
}

FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_extReqStatus (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{

    DefineMESGDef(NMSG_ExtReq_XMT_ST);
    RcvMESGDef(NMSG_ExtReq_XMT_ST);

    Data[0] = (uint8)l_NMSG_ExtReq_XMT_ST.Qualifier_N;
    return (E_OK);
}

FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_extReqPrio (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
    //DefineMESGDef(NMSG_ExtReq_XMT_ST);
   // RcvMESGDef(NMSG_ExtReq_XMT_ST);
    ExtReq_ST l_NMSG_ExtReq_XMT_ST;
    RcvMESG(l_NMSG_ExtReq_XMT_ST, NMSG_ExtReq_XMT_ST);

    Data[0] = (uint8)l_NMSG_ExtReq_XMT_ST.Active_B;
    return (E_OK);
}

FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_runout (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{

    DefineMESGDef(NMSG_pRunoutXMT_ST);
    RcvMESGDef(NMSG_pRunoutXMT_ST);

    Data[0] = (uint8)l_NMSG_pRunoutXMT_ST.pRunout_UB;
    return (E_OK);
}

static void RBAPLCUST_getCCP(uint16 CCPNum_u16,  uint8* pBuffer)
{

	 uint8 l_bufferIndex = 0;

	    /*
	     *
	     * The logic is this:
	     * If the CCP parameter is faulty(i.e., !=0) then increment the counter and add the value to the buffer.
	     *
	     *
	     */

	    /*TODO: Ask NET guys to implement CCP in an array so that we can simply loop through each element with and run the if statement*/

	  pBuffer[0] = gs_invalidCcpCounter;
	    switch(CCPNum_u16)
	    {


	        case 1: /*CCP #1*/
	            /*Range Check*/
	            if ((ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn2_u8< 0x01) || (ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn2_u8 > 0x03))
	    {
	        pBuffer[0] = gs_invalidCcpCounter++;
	        pBuffer[++l_bufferIndex] = 0x00;
	        pBuffer[++l_bufferIndex] = 0x01;
	        pBuffer[++l_bufferIndex] = (uint8)ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn2_u8;

	    }
	            break;
	        case 3: /*CCP #17*/
	                    /*Range Check*/
	                    if ((ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn4_u8 < 0x04) || (ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn4_u8 > 0x06))
	                    {
	                        pBuffer[0]= gs_invalidCcpCounter++;
	            pBuffer[++l_bufferIndex] = 0x00;
	            pBuffer[++l_bufferIndex] = 0x11;
	            pBuffer[++l_bufferIndex] = (uint8)ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn4_u8;

	    }

	                    break;
	        case 22: /*CCP #150*/
	                 /*Range Check*/
	                 if ((ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn4_u8 < 0x0A) || (ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn4_u8 > 0x0C))
	                     {
	                     pBuffer[0]= gs_invalidCcpCounter++;

	            pBuffer[++l_bufferIndex] = 0x00;
	            pBuffer[++l_bufferIndex] = 0x96;
	            pBuffer[++l_bufferIndex] = (uint8)ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn4_u8;

	    }
	                 break;
	        case 39: /*CCP #267*/
	                   /*Range Check*/
	                   if ((ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn2_u8 < 0x04) || (ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn2_u8 > 0x06))
	                   {
	                       pBuffer[0]= gs_invalidCcpCounter++;
	            pBuffer[++l_bufferIndex] = 0x01;
	            pBuffer[++l_bufferIndex] = 0x0B;
	            pBuffer[++l_bufferIndex] = (uint8)ComScl_RawSigGrp_igVehCfgPrm.ComScl_RawSignal_isVehCfgPrmCCPBytePosn2_u8;

	    }
	                   break;


	default:
	       pBuffer[0] = 0;
	    break;
		}
}

FUNC(Std_ReturnType,DCM_APPL_CODE) DCOM_NvM_GetErrorStatus(NvM_RequestResultType ReadResultValue)
{
	VAR(Std_ReturnType,AUTOMATIC) ReturnValue;

	if((ReadResultValue == NVM_REQ_CANCELED)||(ReadResultValue == NVM_REQ_REDUNDANCY_FAILED)||\
					 (ReadResultValue == NVM_REQ_BLOCK_SKIPPED)|| (ReadResultValue == NVM_REQ_RESTORED_FROM_ROM)||(ReadResultValue == NVM_REQ_NOT_OK)||(ReadResultValue == NVM_REQ_INTEGRITY_FAILED) ||(ReadResultValue == NVM_REQ_NV_INVALIDATED))
	{
		ReturnValue = TRUE;
	}
	else
	{
		ReturnValue = FALSE;
	}

	return(ReturnValue);
}

/* D005 : High Quiescent Current Fault Identification Data */
FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_HighQuiescent_0xD005 (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
	Std_ReturnType QCM_NvmRet_t;
	static uint8 QCM_Buffer[50];
	uint8 i;
	uint8 reverse = 0;
	uint8 temp;
	VAR(Std_ReturnType,AUTOMATIC)   dataRetReadFunc_u8;
	VAR(Std_ReturnType,AUTOMATIC)   GetErrorStatusRetrunValue;
	NvM_RequestResultType ReadResult;
	static	boolean StatusFlag_b = FALSE;
		RBMESG_DefineMESGDef(QCMStsFlag_Persistent_UB);

		RBMESG_RcvMESGDef(QCMStsFlag_Persistent_UB);


	if(StatusFlag_b == FALSE)
	{
		QCM_NvmRet_t = NvM_ReadBlock(NvMConf_NvMBlockDescriptor_QCMBuffer, (void*)&QCM_Buffer);
		printf("QCM_Buffer %d \n",QCM_Buffer[9]);
		printf("QCM_Buffer %d \n",QCM_Buffer[19]);
		printf("QCM_Buffer %d \n",QCM_Buffer[29]);
		printf("QCM_Buffer %d \n",QCM_Buffer[39]);
		printf("QCM_Buffer %d \n",QCM_Buffer[49]);

		if(QCM_NvmRet_t != E_OK)
		{
			StatusFlag_b = FALSE;
		}
		else
		{
			StatusFlag_b = TRUE;
		}

		dataRetReadFunc_u8 = DCM_E_PENDING;
	}
	else
	{
		GetErrorStatusRetrunValue = NvM_GetErrorStatus(NvMConf_NvMBlockDescriptor_QCMBuffer, &ReadResult);

		if ((GetErrorStatusRetrunValue == E_OK) && (ReadResult != NVM_REQ_PENDING))
		{
			if ((DCOM_NvM_GetErrorStatus(ReadResult)))
			{
				StatusFlag_b = FALSE;
				dataRetReadFunc_u8 = E_NOT_OK;
			}
			else
			{
				/* Global Real Time 1 */
				for(i=0; i<4; i++)
				{
					Data[i] = QCM_Buffer[i];
				}

				/* Activation Global Time 1 */
				for(i=4; i<8; i++)
				{
					Data[i] = QCM_Buffer[i];
				}

				/* Recorded Usage Mode 1 */
				Data[8] = QCM_Buffer[8];

				/* ActyLvlSlp | CAN2Active | FlexrayActive | WKPbyCANorFR | WKPbyKL15 */

				temp = QCM_Buffer[9];

				for (i = 0; i < 8; i++)
				{
					if(temp & (1 << i))
					{
						reverse |= (1 << ((8 - 1) - i));
					}
				}

				Data[9] = reverse;


				/* Global Real Time 2 */
				for(i=10; i<14; i++)
				{
					Data[i] = QCM_Buffer[i];
				}

				/* Activation Global Time 2 */
				for(i=14; i<18; i++)
				{
					Data[i] = QCM_Buffer[i];
				}

				/* Recorded Usage Mode 2 */
				Data[18] = QCM_Buffer[18];


				reverse = 0;
				/* ActyLvlSlp | CAN2Active | FlexrayActive | WKPbyCANorFR | WKPbyKL15 */

				temp = QCM_Buffer[19];

				for (i = 0; i < 8; i++)
				{
					if(temp & (1 << i))
					{
						reverse |= (1 << ((8 - 1) - i));
					}
				}

				Data[19] = reverse;

				/* Global Real Time 3 */
				for(i=20; i<24; i++)
				{
					Data[i] = QCM_Buffer[i];
				}

				/* Activation Global Time 3 */
				for(i=24; i<28; i++)
				{
					Data[i] = QCM_Buffer[i];
				}

				/* Recorded Usage Mode 3 */
				Data[28] = QCM_Buffer[28];


				reverse = 0;
				/* ActyLvlSlp | CAN2Active | FlexrayActive | WKPbyCANorFR | WKPbyKL15 */

				temp = QCM_Buffer[29];

				for (i = 0; i < 8; i++)
				{
					if(temp & (1 << i))
					{
						reverse |= (1 << ((8 - 1) - i));
					}
				}

				Data[29] = reverse;

				/* Global Real Time 4 */
				for(i=30; i<34; i++)
				{
					Data[i] = QCM_Buffer[i];
				}

				/* Activation Global Time 4 */
				for(i=34; i<38; i++)
				{
					Data[i] = QCM_Buffer[i];
				}

				/* Recorded Usage Mode 4 */
				Data[38] = QCM_Buffer[38];


				reverse = 0;
				/* ActyLvlSlp | CAN2Active | FlexrayActive | WKPbyCANorFR | WKPbyKL15 */

				temp = QCM_Buffer[39];

				for (i = 0; i < 8; i++)
				{
					if(temp & (1 << i))
					{
						reverse |= (1 << ((8 - 1) - i));
					}
				}

				Data[39] = reverse;

				/* Global Real Time 5*/
				for(i=40; i<44; i++)
				{
					Data[i] = QCM_Buffer[i];
				}

				/* Activation Global Time 5 */
				for(i=44; i<48; i++)
				{
					Data[i] = QCM_Buffer[i];
				}

				/* Recorded Usage Mode 5 */
				Data[48] = QCM_Buffer[48];


				reverse = 0;
				/* ActyLvlSlp | CAN2Active | FlexrayActive | WKPbyCANorFR | WKPbyKL15 */

				temp = QCM_Buffer[49];

				for (i = 0; i < 8; i++)
				{
					if(temp & (1 << i))
					{
						reverse |= (1 << ((8 - 1) - i));
					}
				}

				Data[49] = reverse;

				StatusFlag_b = FALSE;
				dataRetReadFunc_u8 = E_OK;
			}
		}
		else
		{
			StatusFlag_b = TRUE;
			dataRetReadFunc_u8 = DCM_E_PENDING;
		}
	}
	return(dataRetReadFunc_u8);
}


FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_ReadQCMActDeact_D09A (VAR(Dcm_OpStatusType,AUTOMATIC) OpStatus,P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
	 VAR(Std_ReturnType,AUTOMATIC)   dataRetReadFunc_u8;
	VAR(Std_ReturnType, AUTOMATIC) dataNvmReadBlockRetVal_u8;
	NvM_RequestResultType dataRequestResult_u8;
	static	boolean s_Status_b=FALSE;

	RBMESG_DefineMESGDef(QCMStsFlag_Persistent_UB);
	RBMESG_DefineMESGDef(NVM_QCMResult_Valid);
	RBMESG_RcvMESGDef(QCMStsFlag_Persistent_UB);
	RBMESG_RcvMESGDef(NVM_QCMResult_Valid);

	if(s_Status_b == FALSE)
	{
		/* Reading the Assembly process byte data from the NVM */
		dataNvmReadBlockRetVal_u8 = NvM_ReadBlock(NvMConf_NvMBlockDescriptor_QCM_Actv_Deactv,(void*)&g_QCMActDeact_UB[0]);

		if(dataNvmReadBlockRetVal_u8 != E_OK)
		{
			s_Status_b = FALSE;
		}
		else
		{
			s_Status_b = TRUE;
		}

		dataRetReadFunc_u8 = DCM_E_PENDING;
	}
	else
	{
		if ((NvM_GetErrorStatus(NvMConf_NvMBlockDescriptor_QCM_Actv_Deactv,&dataRequestResult_u8) == E_OK ) && (dataRequestResult_u8 != NVM_REQ_PENDING))
		{
			if((dataRequestResult_u8 == NVM_REQ_CANCELED)||(dataRequestResult_u8 == NVM_REQ_REDUNDANCY_FAILED)||\
					(dataRequestResult_u8 == NVM_REQ_BLOCK_SKIPPED)|| (dataRequestResult_u8 == NVM_REQ_RESTORED_FROM_ROM)||(dataRequestResult_u8 == NVM_REQ_NOT_OK)||(dataRequestResult_u8 == NVM_REQ_INTEGRITY_FAILED) ||(dataRequestResult_u8 == NVM_REQ_NV_INVALIDATED))
			{

				s_Status_b = FALSE;
				dataRetReadFunc_u8 = E_NOT_OK;
			}
			else
			{
				Data[0] = g_QCMActDeact_UB[0];
				s_Status_b = FALSE;
				dataRetReadFunc_u8 = E_OK;
			}
		}
		else
		{
			s_Status_b = TRUE;
			dataRetReadFunc_u8 = DCM_E_PENDING;
		}
	}

	return (dataRetReadFunc_u8);
}


//ECU serial number
void PRC_DCOM_GetEcuSerial_V(void)
{

     uint8 temp_result[8]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
	 uint8 temp_result_1[8]={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
	 uint16 l_RollingCounterMax = 13439;
     uint8 l_DayMax =31;
     uint8 l_MonthMax=12;
     uint8 l_YearMax=10;
     uint8 l_PlantMax=2;
     uint32 l_SerialNumber_Decimal;
	 uint32 l_SerialNumberMax_Decimal = 99986159;
	Std_ReturnType EcuSerialNumber_NvmRet_t = E_OK;
	static uint8 EcuSerialNumber_NvmBuffer[29];
	sint8 cntr=0;

    uint8 Month_Byte[2]={0x00,0x00};
    uint8 Year_ASCII;
    uint8 Plant_Byte[3]={0x00,0x00,0x00};
	uint8 Plant_Anp[3]={0x00, 0x08,0x05};
	uint8 Day_Byte[2]= {0x00,0x00};
	uint8 Boundary_Flag = 0;

    uint8 Month_Decimal;
    uint8 Year_Decimal;
    uint8 Plant_Decimal;
	uint8 Day_Decimal;
	uint32 RollingCounter_Decimal= 0;

	uint32 RollingCounter_Output = 0;
    uint32 Month_Output;
    uint32 Year_Output;
    uint32 Plant_Output;
	uint32 Day_Output;
	uint8 RollingCounter_byte[5] ={0x00,0x00,0x00,0x00,0x00};

	NvM_RequestResultType ReadResult;
    uint8 g_flag;
    uint8 l_Read_Counter = 0;
    uint8 l_Read_Status_Counter = 0;

	NvM_GetErrorStatus(NvMConf_NvMBlockDescriptor_EePlantBarcodeECU, &ReadResult);

           if(ReadResult != NVM_REQ_PENDING)
           {
		     if(ReadResult == NVM_REQ_OK)
             {
				g_flag = 0x02;

			 }
			 else if(ReadResult == NVM_REQ_BLOCK_SKIPPED)
             {
				g_flag = 0x02;

			 }

		   }
		   else if(ReadResult == NVM_REQ_PENDING)
		   {
				g_flag = 0x01;
		   }

     if((g_flag != 0x01)&& (l_Read_Counter != 0x11 ))
   {

	EcuSerialNumber_NvmRet_t = NvM_ReadBlock(NvMConf_NvMBlockDescriptor_EePlantBarcodeECU, (void*)&EcuSerialNumber_NvmBuffer);
	l_Read_Status_Counter++;
   }

	Plant_Byte[0] = EcuSerialNumber_NvmBuffer[0] - 0x30;
	Plant_Byte[1] = EcuSerialNumber_NvmBuffer[1] - 0x30;
	Plant_Byte[2] = EcuSerialNumber_NvmBuffer[2] - 0x30;

	if( Plant_Byte[0]== Plant_Anp[0] && Plant_Byte[1]== Plant_Anp[1] && Plant_Byte[2]== Plant_Anp[2])
	{
		Plant_Decimal = 0;
	}
	else
	{
		Plant_Decimal = 1;
	}

	Year_Decimal = EcuSerialNumber_NvmBuffer[14] - 0x30 ;

	Month_Byte[0] = EcuSerialNumber_NvmBuffer[15] - 0x30;
	Month_Byte[1] = EcuSerialNumber_NvmBuffer[16] - 0x30;
    Month_Decimal = Month_Byte[0]*10 + Month_Byte[1] - 1 ;

	if(Month_Decimal >= l_MonthMax )
	{
		Boundary_Flag = 1;
	}

	Day_Byte[0] = EcuSerialNumber_NvmBuffer[17] - 0x30;
	Day_Byte[1] = EcuSerialNumber_NvmBuffer[18] - 0x30;
	Day_Decimal = Day_Byte[0] *10 + Day_Byte[1] - 1 ;

	if(Day_Decimal >= l_DayMax)
	{
		Boundary_Flag = 1;
	}

    RollingCounter_byte[0] = EcuSerialNumber_NvmBuffer[8] - 0x30;
	RollingCounter_byte[1] = EcuSerialNumber_NvmBuffer[9] - 0x30 ;
	RollingCounter_byte[2] = EcuSerialNumber_NvmBuffer[10] - 0x30;
	RollingCounter_byte[3] = EcuSerialNumber_NvmBuffer[11] - 0x30;
	RollingCounter_byte[4] = EcuSerialNumber_NvmBuffer[12] - 0x30;

		for( cntr = 0 ; cntr < 5 ; cntr++)
	{
		RollingCounter_Decimal =(RollingCounter_Decimal * 10) + RollingCounter_byte[cntr] ;
	}

     RollingCounter_Decimal=RollingCounter_Decimal+1;
    //RollingCounter_Output_g = RollingCounter_Decimal;

	if(RollingCounter_Decimal >= l_RollingCounterMax)
	{
		RollingCounter_Output = RollingCounter_Decimal % l_RollingCounterMax;
			RollingCounter_Output = RollingCounter_Output+1;

	}
	else
	{
		RollingCounter_Output = RollingCounter_Decimal;
	}

	//RollingCounter_Output = RollingCounter_Output+1;

	if ( Boundary_Flag != 1 && g_flag == 0x02 && EcuSerialNumber_NvmRet_t == E_OK)
	{

	Plant_Output = Plant_Decimal * l_YearMax * l_MonthMax * l_DayMax * l_RollingCounterMax;
	Year_Output = Year_Decimal * l_MonthMax * l_DayMax * l_RollingCounterMax;
	Month_Output = Month_Decimal*l_DayMax*l_RollingCounterMax;
    Day_Output = Day_Decimal*l_RollingCounterMax;
	l_SerialNumber_Decimal = Plant_Output+ Year_Output+ Month_Output+ Day_Output+ RollingCounter_Output;

/* 	l_SerialNumber_Decimal_g = l_SerialNumber_Decimal; */
	/* Month_Output = Month_Output_g;
    Day_Output_g = Day_Output;
	Plant_Output_g = Plant_Output;
	Year_Output_g = Year_Output; */

	if (l_SerialNumber_Decimal > 0 && l_SerialNumber_Decimal <= l_SerialNumberMax_Decimal)
	{

	for (cntr=7 ; cntr >= 0; cntr--)
	{
		temp_result[cntr]= l_SerialNumber_Decimal %10;
		l_SerialNumber_Decimal = l_SerialNumber_Decimal/10;
	}

	}

	temp_result[0] = (temp_result[0]<<4)| temp_result[1];
	temp_result[1] = (temp_result[2]<<4)| temp_result[3];
	temp_result[2] = (temp_result[4]<<4)| temp_result[5];
	temp_result[3] = (temp_result[6]<<4)| temp_result[7];

	}
	else
	{
		temp_result[0] = 0xFF;
		temp_result[1] = 0xFF;
		temp_result[2] = 0xFF;
		temp_result[3] = 0xFF;

	}


	for (cntr = 0; cntr < 4; cntr++)
	{
	ECUSerialNumber[cntr] =  temp_result[cntr];
	//g_EcuSerialNum_Read[cntr] = ECUSerialNumber[cntr];
	}


//if(l_Read_Status_Counter > 2 )*/
if(EcuSerialNumber_NvmRet_t == E_OK)
	{
			l_Read_Counter = 0x11;

	}


}
// fd01

 FUNC(Std_ReturnType,DCM_APPL_CODE)DcmAppl_AnalogueData_0xFD01(P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{

	 uint16 l_LiPS_GetSupplyVolatge;
	// sint32 l_actual_torque;
	 //sint16 l_actual_torque_temp;

#if((RBFS_AnalogData == RBFS_AnalogData_ON) || (RBFS_AnalogData == RBFS_AnalogData_ON))
	#include "RBSUPPLYNBS_EnvData.h"
    #include "RBBLM_Temp_CswItf.h"
    #include "RBLIPS_CSWINTERFACE.h"
    #include "RBPSC_RPSCALC_IF.h"
    #include "RBPSC_CONTROLMAIN.h"
	#include "RBSUPPLYNBS_Voltages.h"
#endif

/* Assert supported configurations: switches, parameters, constants, ... */
 RB_ASSERT_SWITCH_SETTINGS(RBFS_AnalogData,
						  RBFS_AnalogData_ON,
						  RBFS_AnalogData_OFF);

	 DefineMESGDef(RBAPO_ActuatorPositionQualifier);
	 DefineMESGDef(RBAPO_ActuatorPosition);
	 DefineMESGDef(RBVSA_OutputRodActualQualifier);
	 RBMESG_DefineMESGDef(RBVSI_InputRodStrokeCalc);
	 DefineMESGDef(RBVSA_OutputRodActual);
	 DefineMESGDef(RBVSI_pMC_calibrated);
	 RBMESG_DefineMESGDef(RBMESG_BLMTemperatureB6_Ch1_s16);
	 RBMESG_DefineMESGDef(RBMESG_BLMTemperatureB6_Ch2_s16);
	 RBMESG_DefineMESGDef(RBMESG_UBBFiltered);
	 RBMESG_DefineMESGDef(RBMESG_UB6Filtered);

	 RcvMESGDef (RBAPO_ActuatorPositionQualifier);
	 RcvMESGDef (RBAPO_ActuatorPosition);
	 RcvMESGDef (RBVSA_OutputRodActualQualifier);
	 RBMESG_RcvMESGDef(RBVSI_InputRodStrokeCalc);
	 RcvMESGDef (RBVSA_OutputRodActual);
	 RcvMESGDef (RBVSI_pMC_calibrated);
	 RBMESG_RcvMESGDef (RBMESG_BLMTemperatureB6_Ch1_s16);
	 RBMESG_RcvMESGDef (RBMESG_BLMTemperatureB6_Ch2_s16);
	 RBMESG_RcvMESGDef (RBMESG_UBBFiltered);
	 RBMESG_RcvMESGDef (RBMESG_UB6Filtered);

	 l_LiPS_GetSupplyVolatge = (RBLiPS_GetSupplyVoltage_u16());

	 //l_actual_torque_temp = (sint16)(RBPSC_TorqueActual / (float)NF_Torque_Nm_P2048);

	// l_actual_torque = (sint32)(l_actual_torque_temp * 5000);

	 /*Read the status of Qualifier spindle position information*/
if((l_RBAPO_ActuatorPositionQualifier == RBPSC_NotInitialized) || (l_RBAPO_ActuatorPositionQualifier == RBPSC_Invalid))
{
	 Data[0]= 0x00;
}
else if(l_RBAPO_ActuatorPositionQualifier == RBPSC_OffsetCorrected)
{
	 Data[0]= 0x01;
}
else if(l_RBAPO_ActuatorPositionQualifier == RBPSC_NotOffsetCorrected)
{
	 Data[0]= 0x02;
}

	/*Read the status of Spindle position information*/
     Data[1]= (uint8_t)(l_RBAPO_ActuatorPosition >> 8);
	 Data[2]= (uint8_t)(l_RBAPO_ActuatorPosition);

	/*Read the status of Qualifier output and input rod position information*/
	 Data[3]= (uint8_t)(l_RBVSA_OutputRodActualQualifier);


	 /*Read the status of Input rod position information*/
	 Data[4]= (uint8_t)(l_RBVSI_InputRodStrokeCalc >> 8);
	 Data[5]= (uint8_t)(l_RBVSI_InputRodStrokeCalc);

	 /*Read the status of Output rod position information*/
	 Data[6]= (uint8_t)(l_RBVSA_OutputRodActual >> 8);
	 Data[7]= (uint8_t)(l_RBVSA_OutputRodActual);

	 /*Read the status of Target motor speed */
	 Data[8]= (uint8_t)(RBPSC_SpeedTarget >> 8);
	 Data[9]= (uint8_t)(RBPSC_SpeedTarget);

	 /*Read the status of Actual motor speed */
	 Data[10]= (uint8_t)(RBPSC_SpeedActual >> 8);
	 Data[11]= (uint8_t)(RBPSC_SpeedActual);

	 /*Read the status of Target Motor Torque */
	 Data[12]= (uint8_t)(RBPSC_TorqueTarget >> 8);
	 Data[13]= (uint8_t)(RBPSC_TorqueTarget);

	 /*Read the status of Actual Motor Torque */
	 Data[14]= (uint8_t)(RBPSC_TorqueActual >> 8);
	 Data[15]= (uint8_t)(RBPSC_TorqueActual);

	 /*Read the status of Calibrated pressure sensor signal of Master Cylinder */
	 Data[16]= (uint8_t)(l_RBVSI_pMC_calibrated >> 8);
	 Data[17]= (uint8_t)(l_RBVSI_pMC_calibrated);

	 /*Read the status of BLM temperature information - channel 1 */
	 Data[18]= (uint8_t)(l_RBMESG_BLMTemperatureB6_Ch1_s16 >> 8);
	 Data[19]= (uint8_t)(l_RBMESG_BLMTemperatureB6_Ch1_s16);

	 /*Read the status of BLM temperature information - channel 2 */
	 Data[20]= (uint8_t)(l_RBMESG_BLMTemperatureB6_Ch2_s16 >> 8);
	 Data[21]= (uint8_t)(l_RBMESG_BLMTemperatureB6_Ch2_s16);

	 /*Read the status of Filtered supply voltage of UBB  */
	 Data[22]= (uint8_t)(l_RBMESG_UBBFiltered >> 8);
	 Data[23]= (uint8_t)(l_RBMESG_UBBFiltered);

	 /*Read the status of Filtered supply voltage of UB6  */
	 Data[24]= (uint8_t)(l_RBMESG_UB6Filtered >> 8);
	 Data[25]= (uint8_t)(l_RBMESG_UB6Filtered);

	 /*Read the status of Power Supply signal of the LiPS */
	 Data[26]= (uint8_t)(l_LiPS_GetSupplyVolatge >> 8);
	 Data[27]= (uint8_t)(l_LiPS_GetSupplyVolatge);

    return (E_OK);
}
// FD00
FUNC(Std_ReturnType,DCM_APPL_CODE)DcmAppl_iB_Status_Information_0xFD00 (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
    VAR(Std_ReturnType,AUTOMATIC) retVal = E_NOT_OK;

    #if ( RBFS_StatusInformation == RBFS_StatusInformation_ON)
	#include "ASWIF_iBoosterInterfaces.h"
	#include "ASWIF_CommonConfig.h"

         uint8 l_WakeupinfoHWPin;

         RBMESG_DefineMESGDef(iB_status_N);
         RBMESG_DefineMESGDef(iB_ready_for_actuation_B);
         RBMESG_DefineMESGDef(DriverOnPedal_B);
         RBMESG_DefineMESGDef(iB_BrkLightActive_B);
        // DefineMESGDef(NMSG_IgnitionOnRCV_B);
         //RBMESG_DefineMESGDef(RBMLI_ThermalLimitation);

         RBMESG_RcvMESGDef(iB_status_N);
         RBMESG_RcvMESGDef(iB_ready_for_actuation_B);
         RBMESG_RcvMESGDef(DriverOnPedal_B);
         RBMESG_RcvMESGDef(iB_BrkLightActive_B);
         //RcvMESGDef(NMSG_IgnitionOnRCV_B);
         //RBMESG_RcvMESGDef (RBMLI_ThermalLimitation);

        /* if(RBSMM_Requester__getRequestedSystemMode (SMM_Requester_WAU)== C_SMM_NORMAL_N )
         {
             l_WakeupinfoHWPin = TRUE;
         }
         else
         {
             l_WakeupinfoHWPin = FALSE;
         }*/

        /*Read the status information of ibooster */


		if(l_iB_status_N == 0 )
		{
			Data[0]= 0x00;
		}
		else if(l_iB_status_N == 1)
		{
			Data[0]= 0x01;
		}
		else if(l_iB_status_N == 2)
		{
			Data[0]= 0x02;
		}
		else if(l_iB_status_N == 3)
		{
			Data[0]= 0x03;
		}
		else if((l_iB_status_N == 5) || (l_iB_status_N == 4))
		{
			Data[0]= 0x04;
		}
		else if(l_iB_status_N == 6)
		{
			Data[0]= 0x05;
		}
        Data[1]= (l_iB_ready_for_actuation_B & 0x01);
        Data[2]= (l_DriverOnPedal_B & 0x01);
        Data[3]= (l_iB_BrkLightActive_B & 0x01);

        retVal = E_OK;

        return retVal;
    #else
        return retVal;
    #endif
}

//Fee0
FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_Supplier_Software_Version_0xFEE0 (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{

    /* Bosch SW BB Number 5 bytes */
  //  memcpy((uint8_t*)&Data[0], (uint8_t*)&RBLCF_FSW01_HexInfoStruct.StdHexInfoStructRef.BBNumber, 5 );
    /* Separator "-" */
   // Data[5] = 0x5F;
    /* Bosch SW MTC Config 3 bytes */
  //  memcpy((uint8_t*)&Data[6], (uint8_t*)&RBLCF_FSW01_HexInfoStruct.StdHexInfoStructRef.MTCConfiguration, 3 );
    /* Bosch SW Date 11 bytes including the separator "-" */
   // memcpy((uint8_t*)&Data[9], (uint8_t*)&RBLCF_FSW01_HexInfoStruct.Date, 11 );
    /* Bosch SW Time 9 bytes including the separator "-" */
   /*  memcpy((uint8_t*)&Data[20], (uint8_t*)&RBLCF_FSW01_HexInfoStruct.Time, 9 );

    return (E_OK);*/

	RBLCF_HexBlockLayout_t myHexBlock;
	uint8 Size;
	uint8 TempData[100];
	uint8 i=0;
	uint8 j=0;
            RBLCF_GetFirstHexBlock(&myHexBlock);
            while (myHexBlock.hasNext) {
                if((myHexBlock.HexInfoRef->BlockStructureID == RBLCF_HEXINFOTYPE_FSW)
                 ||(myHexBlock.HexInfoRef->BlockStructureID == RBLCF_HEXINFOTYPE_COMPLETE)){
                    //we have found an FSW or Complete block - we take the data from that block
                    break;
                }
                RBLCF_GetNextHexBlock(&myHexBlock);

			}

			Size = (sizeof((((RBLCF_StdHexInfoStruct_t*)0)->BBNumber[0])) * RBLCF_BB_NUMBER_SIZE)
                                    + (sizeof((((RBLCF_StdHexInfoStruct_t*)0)->MTCConfiguration[0])) * RBLCF_MTC_CONFIGURATION_SIZE)
                                    + sizeof(((RBLCF_StdHexInfoStruct_t*)0)->SCM_ID)
                                    + (sizeof((((RBLCF_StdHexInfoStruct_t*)0)->SCM_VersionID[0])) * RBLCF_SCM_VERSIONID_SIZE)
                                    + (sizeof((((RBLCF_FSWHexInfoStruct_t*)0)->Date[0])) * RBLCF_DATE_SIZE)
									+ (sizeof((((RBLCF_FSWHexInfoStruct_t*)0)->Time[0])) * RBLCF_TIME_SIZE);


									memcpy(&(TempData[0]), myHexBlock.HexInfoRef->BBNumber, (Size) );

	/* Bosch SW BB Number 5 bytes */
	//memcpy(&Data[0], myHexBlock.HexInfoRef->BBNumber, 5 );

									for(i=0;  i<5; i++)
									{
									Data[i] = TempData[i];
									}
	/* Separator "-" */
	Data[5] = 0x5F;
	/* Bosch SW MTC Config 3 bytes */

	//memcpy(&Data[6], myHexBlock.HexInfoRef->MTCConfiguration, 3 );
									j=6;
									for(i=5;  i<8; i++)
									{
									Data[j] = TempData[i];
									j++;
									}

	/* Bosch SW Date 11 bytes including the separator "-" */

	//memcpy(&Data[9], myHexBlock.HexInfoRef->Date[0], 11 );
									j=9;
									for(i=32;  i<43; i++)
									{
									Data[j] = TempData[i];
									j++;
									}
	/* Bosch SW Time 9 bytes including the separator "-" */

	//memcpy(&Data[20], myHexBlock.HexInfoRef->Time[0], 9 );
									j=20;
									for(i=43;  i<52; i++)
									{
									Data[j] = TempData[i];
									j++;
									}

	return (E_OK);
}

/* Publick Key Checksum DID D03A */
#if(RBFS_HardwareSecurityModule == RBFS_HardwareSecurityModule_Supported)
FUNC(Std_ReturnType,DCM_APPL_CODE) DcmAppl_swAuthPublicKeyCheckSum_0xD03A (P2VAR(uint8,AUTOMATIC,DCM_INTERN_DATA) Data)
{
	/* Open a session */
	Public_Checksum_Read_RdbiErrCodeOpenSession = ecy_hsm_Csai_OpenSession(ecy_hsm_CSAI_SESSION_MODE_NON_BLOCKING, ecy_hsm_CSAI_PRIO_LOW, &Public_Checksum_Read_RdbihSession);

	if(ecy_hsm_CSAI_SUCCESS == Public_Checksum_Read_RdbiErrCodeOpenSession)
	{
		Public_Checksum_Read_RdbiStorageTag_u32 = ecy_hsm_CSAI_KEYID_SECRET_DATA_DYNAMIC_CFG_SECRET_DATA_2;
		Public_Checksum_Read_Success = ecy_hsm_Csai_ReadData(Public_Checksum_Read_RdbihSession, ecy_hsm_CSAI_PRIO_LOW, Public_Checksum_Read_RdbiStorageTag_u32,
									   &securePublicKeyChecksumData[0], (uint32)sizeof(securePublicKeyChecksumData), &secureDataCnt, &Public_Checksum_Read_RdbihJob)
									   ;
		if(ecy_hsm_CSAI_SUCCESS == Public_Checksum_Read_Success)
		{
			Data[0] = (uint8)securePublicKeyChecksumData[0];
			Data[1] = (uint8)securePublicKeyChecksumData[1];
			Data[2] = (uint8)securePublicKeyChecksumData[2];
			Data[3] = (uint8)securePublicKeyChecksumData[3];
			Data[4] = (uint8)securePublicKeyChecksumData[4];
			Data[5] = (uint8)securePublicKeyChecksumData[5];
			Data[6] = (uint8)securePublicKeyChecksumData[6];
			Data[7] = (uint8)securePublicKeyChecksumData[7];
			Data[8] = (uint8)securePublicKeyChecksumData[8];
			Data[9] = (uint8)securePublicKeyChecksumData[9];
			Data[10] = (uint8)securePublicKeyChecksumData[10];
			Data[11] = (uint8)securePublicKeyChecksumData[11];
			Data[12] = (uint8)securePublicKeyChecksumData[12];
			Data[13] = (uint8)securePublicKeyChecksumData[13];
			Data[14] = (uint8)securePublicKeyChecksumData[14];
			Data[15] = (uint8)securePublicKeyChecksumData[15];
			Data[16] = (uint8)securePublicKeyChecksumData[16];
			Data[17] = (uint8)securePublicKeyChecksumData[17];
			Data[18] = (uint8)securePublicKeyChecksumData[18];
			Data[19] = (uint8)securePublicKeyChecksumData[19];
			Data[20] = (uint8)securePublicKeyChecksumData[20];
			Data[21] = (uint8)securePublicKeyChecksumData[21];
			Data[22] = (uint8)securePublicKeyChecksumData[22];
			Data[23] = (uint8)securePublicKeyChecksumData[23];
			Data[24] = (uint8)securePublicKeyChecksumData[24];
			Data[25] = (uint8)securePublicKeyChecksumData[25];
			Data[26] = (uint8)securePublicKeyChecksumData[26];
			Data[27] = (uint8)securePublicKeyChecksumData[27];
			Data[28] = (uint8)securePublicKeyChecksumData[28];
			Data[29] = (uint8)securePublicKeyChecksumData[29];
			Data[30] = (uint8)securePublicKeyChecksumData[30];
			Data[31] = (uint8)securePublicKeyChecksumData[31];

			return (E_OK);
		}
		else
		{
			return (E_NOT_OK);
		}

	}
	else
	{
		return (E_NOT_OK);
	}

}
#endif
