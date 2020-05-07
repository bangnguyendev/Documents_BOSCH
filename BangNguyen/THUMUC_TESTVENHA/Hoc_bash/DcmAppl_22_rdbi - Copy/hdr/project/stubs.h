/*****************************************************************************/
/*                       Stub header for test project                        */
/*****************************************************************************/
/*
 *    Filename:       stub.h
 *    Author:         rkh1hc
 *    Generated on:   07-Apr-2017
 */
 /*****************************************************************************/


#ifndef STUBS_H_
#define STUBS_H_

#include "include.h"
/*macro bounds value to min and max*/
#define RBFS_CEVT_NO 0
#define RBFS_CEVT_YES 1
#define RBFS_CEVT  RBFS_CEVT_YES

#define MAX_f(a, b) (((a) > (b))?(a):(b))
#define NETBOUND(temp,min,max)   \
{                                \
  if ((temp) <= (min)) {(temp) = (min);}; \
  if ((temp) >= (max)) {(temp) = (max);}; \
}
#define RBFS_BUILDCONFIG  !RBFS_BUILDCONFIG_IB2BSW
#define DidECUCoreAssemPartNumber         0xF12A
#define DidECUSoftwarePartNumber          0xF12E

#define C_ECUCoreAssemPartLen_UW          0x7

#define C_ECUSoftwarePartNumLen_UW        0xF

#define DidEcuSerialNumber                0xF18C
#define DidECUCompletePartNumber          0xEDA0
#define DidAppDiagDataPartNumber          0xF120
#define DidECUDeliveryAssemPartNumber     0xF12B

#define C_ECUDeliveryAssemPartNumLen_UW             0x7
#define C_ECUSoftwarePartNumLen_Geely_UW            0x9
#define C_ECUDeliveryAssemPartNumLen_Geely_UW       0x8
#define C_ECUCoreAssemPartLen_Geely_UW              0x8

#define C_AppDiagPartNumLen_UW                      0x8
#define C_AppDiagPartNumLen_UW_n                    0x7
#define C_ECUSerialNumLen_UW                        0x4

#define C_AppDiagPartNumLen_Geely_UW                0x8

#define C_DcmAppl_Bootloader_Software_Version_Number 0x7
#define DCM_VENDOR_ID                   6u
#define DCM_MODULE_ID                   0x35u
#define DCM_INSTANCE_ID                 0x00u
#define DCM_AR_RELEASE_MAJOR_VERSION   4u
#define DCM_AR_RELEASE_MINOR_VERSION    0u
#define DCM_AR_RELEASE_REVISION_VERSION 2u
#define DCM_SW_MAJOR_VERSION            8u
#define DCM_SW_MINOR_VERSION            0u
#define DCM_SW_PATCH_VERSION            0u
#define DCM_PRV_FUNCTIONAL_REQUEST          1u
#define DCM_PRV_PHYSICAL_REQUEST            0u
#define DCM_PRV_MAXNUM_OF_CONFIG            8u
#define COM_MODULE_ID                                                   50u
#define COM_VENDOR_ID                                                   6u
 #define COM_AR_RELEASE_MAJOR_VERSION                                    4u
 #define COM_AR_RELEASE_MINOR_VERSION                                    2u
 #define COM_AR_RELEASE_REVISION_VERSION                                 2u
 #define COM_SW_MAJOR_VERSION                                            3u
 #define COM_SW_MINOR_VERSION                                            0u
 #define COM_SW_PATCH_VERSION                                            0u
#define CAN_INSTANCE_ID      (0UL)


/* The standard common published information */
#define CAN_MODULE_ID        (80)
#define CAN_VENDOR_ID        (6)
/* CAN SW SPECIFICATION VERSION */
#define CAN_SW_MAJOR_VERSION (6)
#define CAN_SW_MINOR_VERSION (0)
#define CAN_SW_PATCH_VERSION (0)
/* AUTOSAR SPECIFICATION VERSION */
#define CAN_AR_RELEASE_MAJOR_VERSION (4)
#define CAN_AR_RELEASE_MINOR_VERSION (2)
#define CAN_AR_RELEASE_REVISION_VERSION (2)

/* Reset Value */
#define CAN_RESET_VALUE     (0)
#define NMBuffersize_ChasCAN 10 /* This shall be in sync with NVM blocks. ((10) * NM State bufer) = 50 in NVM */
#define NMBuffersize_Flexray 10 /* This shall be in sync with NVM blocks. ((10) * NM State bufer) = 50 in NVM */
#define DemConf_DemEventParameter_Scl_Invalid_CCP 0
#define DemConf_DemEventParameter_Scl_Inconsistent_Incompatible_CCP 0
#define NvMConf_NvMBlockDescriptor_QCMBuffer 0
#define DCM_E_PENDING               10u
#define NvMConf_NvMBlockDescriptor_QCM_Actv_Deactv 0
#define RB_ASSERT_SWITCH_SETTINGS(a, ...)
#define RBFS_AnalogData  RBFS_AnalogData_ON

#define RBLCF_BB_NUMBER_SIZE                    (5u)
#define RBLCF_MTC_CONFIGURATION_SIZE            (3u)
#define RBLCF_SCM_VERSIONID_SIZE               (23u)
#define RBLCF_DATE_SIZE                        (11u)
#define RBLCF_TIME_SIZE                         (9u)
#define RBLCF_APPLICATION_TOOL_SIZE             (8u)
#define RBLCF_APPLICATION_DATE_SIZE            (10u)
#define RBLCF_APPLICATION_TIME_SIZE             (8u)
#define RBLCF_ENGINEER_SIZE                     (8u)
#define RBLCF_LOGISTICNUMBER_SIZE               (5u)
#define RBLCF_CUSTOMERDATA_SIZE                (32u)
#define RBLCF_SUPPLIERID_SIZE                   (3u)

#define RBLCF_HEXINFOTYPE_STD                 (0x01u)
#define RBLCF_HEXINFOTYPE_FSW                 (0x11u)
#define RBLCF_HEXINFOTYPE_CAL_NO_EOL          (0x21u)
#define RBLCF_HEXINFOTYPE_CAL_EOL             (0x31u)
#define RBLCF_HEXINFOTYPE_COMPLETE            (0x41u)

#define RBLCF_HEXFILE_VALID                      (1u)
#define RBLCF_HEXFILE_INVALID                    (0u)
#define ecy_hsm_CSAI_SUCCESS                        (0u)

#define ecy_HSM_STARTUP_DELAY        1000u
#define RBLCF_HEXBLOCK_STRUCTURE_ID            (0x1u)
#ifndef ecy_hsm_CSAI_DECLSPEC
    #define ecy_hsm_CSAI_DECLSPEC extern
#endif
#ifndef ecy_hsm_CSAI_CALL
    #define ecy_hsm_CSAI_CALL
#endif
typedef uint32                  ecy_hsm_Csai_ErrorT;            /**< CSAI Error Return Type     */
typedef uint32                  ecy_hsm_Csai_HandleT;           /**< CSAI Generic Handle Type   */
typedef ecy_hsm_Csai_HandleT    ecy_hsm_Csai_SessionHandleT;    /**< CSAI Session Handle Type   */
typedef ecy_hsm_Csai_HandleT    ecy_hsm_Csai_KeyHandleT;        /**< CSAI Key Handle Type, encodes the session owning the key and
                                                       some information by which the key can be identified           */
typedef ecy_hsm_Csai_HandleT    ecy_hsm_Csai_CertHandleT;    /**< CSAI Cert Handle Type   */
/**< @details The lower sixteen bits of the keyhandle hold the byte offset into the RAM keystore at which the
       key is stored.
     The upper sixteen bits holds the session index, corresponding to hSession     */
typedef ecy_hsm_Csai_HandleT    ecy_hsm_Csai_JobHandleT;        /**< CSAI Job Handle Type       */


typedef ecy_hsm_Csai_HandleT    ecy_hsm_Csai_SessionHandleT;    /**< CSAI Session Handle Type   */
typedef ecy_hsm_Csai_HandleT    ecy_hsm_Csai_KeyHandleT;
ecy_hsm_CSAI_DECLSPEC ecy_hsm_Csai_ErrorT
ecy_hsm_CSAI_CALL ecy_hsm_Csai_She_GetStatus( ecy_hsm_Csai_SessionHandleT hSession,
                              uint8* pStatus );
typedef ecy_hsm_Csai_HandleT    ecy_hsm_Csai_JobHandleT;

uint16 C_F12E_PUB[100];
uint16 C_F1AE_PUB[100];
uint16 C_F120_PUB[100];
uint16 C_F1A0_PUB[100];

sint16 RBPSC_PositionTarget;
sint16 RBPSC_SpeedTarget;
sint16 RBPSC_TorqueTarget;

 sint16 PSC_PositionLimMin;
 sint16 PSC_PositionLimMax;
 sint16 PSC_SpeedLimMin;
 sint16 PSC_SpeedLimMax;
float32 PSC_SpeedActualUnfilt;
sint16 RBPSC_SpeedActual;               /* Resolution: 8bit = 1.0rad/s, 1bit = 0.125rad/s */
sint16 RBPSC_TorqueActual;

float32 PSC_AccActual;





typedef enum ecy_hsm_Csai_KeyIdTag
{

    ecy_hsm_CSAI_KEYID_AES_KEY_start = 0x0u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_BASE_0 = 0x0u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_1 = 0x1u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_2 = 0x2u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_3 = 0x3u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_4 = 0x4u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_5 = 0x5u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_6 = 0x6u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_7 = 0x7u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_8 = 0x8u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_9 = 0x9u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_10 = 0xAu,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_11 = 0xBu,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_12 = 0xCu,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_13 = 0xDu,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_14 = 0xEu,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_15 = 0xFu,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_16 = 0x10u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_17 = 0x11u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_18 = 0x12u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_19 = 0x13u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_20 = 0x14u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_21 = 0x15u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_22 = 0x16u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_23 = 0x17u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_24 = 0x18u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_25 = 0x19u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_26 = 0x1Au,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_27 = 0x1Bu,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_28 = 0x1Cu,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_29 = 0x1Du,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_30 = 0x1Eu,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_31 = 0x1Fu,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_32 = 0x20u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_33 = 0x21u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_34 = 0x22u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_35 = 0x23u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_36 = 0x24u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_37 = 0x25u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_38 = 0x26u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_39 = 0x27u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_40 = 0x28u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_41 = 0x29u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_42 = 0x2Au,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_43 = 0x2Bu,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_44 = 0x2Cu,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_45 = 0x2Du,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_46 = 0x2Eu,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_47 = 0x2Fu,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_48 = 0x30u,
    ecy_hsm_CSAI_KEYID_AES_KEY_DYNAMIC_CFG_CRYPTO_AES_KEY_SECOC_INST_49 = 0x31u,
    ecy_hsm_CSAI_KEYID_AES_KEY_end,

    ecy_hsm_CSAI_KEYID_RSA_KEY_start = 0x100u,
    ecy_hsm_CSAI_KEYID_RSA_KEY_STATIC_CFG_CRYPTO_RSA_KEY_1_BASE_0 = 0x100u,
    ecy_hsm_CSAI_KEYID_RSA_KEY_STATIC_CFG_CRYPTO_RSA_KEY_1_INST_1 = 0x101u,
    ecy_hsm_CSAI_KEYID_RSA_KEY_DYNAMIC_CFG_CRYPTO_RSA_KEY_2_BASE_0 = 0x102u,
    ecy_hsm_CSAI_KEYID_RSA_KEY_DYNAMIC_CFG_CRYPTO_RSA_KEY_2_INST_1 = 0x103u,
    ecy_hsm_CSAI_KEYID_RSA_KEY_DYNAMIC_CFG_CRYPTO_RSA_KEY_0_BASE_0 = 0x104u,
    ecy_hsm_CSAI_KEYID_RSA_KEY_DYNAMIC_CFG_CRYPTO_RSA_KEY_0_INST_1 = 0x105u,
    ecy_hsm_CSAI_KEYID_RSA_KEY_DYNAMIC_CFG_CRYPTO_RSA_KEY_0_INST_2 = 0x106u,
    ecy_hsm_CSAI_KEYID_RSA_KEY_DYNAMIC_CFG_CRYPTO_RSA_KEY_0 = 0x107u,
    ecy_hsm_CSAI_KEYID_RSA_KEY_end,

    ecy_hsm_CSAI_KEYID_ECC_KEY_start = 0x200u,
    ecy_hsm_CSAI_KEYID_ECC_KEY_DYNAMIC_CFG_CRYPTO_ECC_KEY_0_BASE_0 = 0x200u,
    ecy_hsm_CSAI_KEYID_ECC_KEY_DYNAMIC_CFG_CRYPTO_ECC_KEY_0_INST_1 = 0x201u,
    ecy_hsm_CSAI_KEYID_ECC_KEY_DYNAMIC_CFG_CRYPTO_ECC_KEY_0_INST_2 = 0x202u,
    ecy_hsm_CSAI_KEYID_ECC_KEY_STATIC_CFG_CRYPTO_ECC_KEY_0 = 0x203u,
    ecy_hsm_CSAI_KEYID_ECC_KEY_DYNAMIC_CFG_CRYPTO_ECC_KEY_1_PublicKey = 0x204u,
    ecy_hsm_CSAI_KEYID_ECC_KEY_DYNAMIC_CFG_CRYPTO_ECC_KEY_1_PrivateKey = 0x205u,
    ecy_hsm_CSAI_KEYID_ECC_KEY_end,

    ecy_hsm_CSAI_KEYID_CERT_start = 0x300u,
    ecy_hsm_CSAI_KEYID_CERT_STATIC_CFG_CERT_0_BASE_0 = 0x300u,
    ecy_hsm_CSAI_KEYID_CERT_STATIC_CFG_CERT_0_INST_1 = 0x301u,
    ecy_hsm_CSAI_KEYID_CERT_STATIC_CFG_CERT_0_INST_2 = 0x302u,
    ecy_hsm_CSAI_KEYID_CERT_STATIC_CFG_CERT_0_INST_3 = 0x303u,
    ecy_hsm_CSAI_KEYID_CERT_STATIC_CFG_CERT_0_INST_4 = 0x304u,
    ecy_hsm_CSAI_KEYID_CERT_STATIC_CFG_CERT_0_INST_5 = 0x305u,
    ecy_hsm_CSAI_KEYID_CERT_STATIC_CFG_CERT_0_INST_6 = 0x306u,
    ecy_hsm_CSAI_KEYID_CERT_STATIC_CFG_CERT_0_INST_7 = 0x307u,
    ecy_hsm_CSAI_KEYID_CERT_STATIC_CFG_CERT_0_INST_8 = 0x308u,
    ecy_hsm_CSAI_KEYID_CERT_DYNAMIC_CFG_CERT_1_BASE_0 = 0x309u,
    ecy_hsm_CSAI_KEYID_CERT_DYNAMIC_CFG_CERT_1_INST_1 = 0x30Au,
    ecy_hsm_CSAI_KEYID_CERT_DYNAMIC_CFG_CERT_1_INST_2 = 0x30Bu,
    ecy_hsm_CSAI_KEYID_CERT_end,

    ecy_hsm_CSAI_KEYID_OID_start = 0x400u,
    ecy_hsm_CSAI_KEYID_OID_STATIC_CFG_OID_0_BASE_0 = 0x400u,
    ecy_hsm_CSAI_KEYID_OID_STATIC_CFG_OID_0_INST_1 = 0x401u,
    ecy_hsm_CSAI_KEYID_OID_STATIC_CFG_OID_0_INST_2 = 0x402u,
    ecy_hsm_CSAI_KEYID_OID_STATIC_CFG_OID_0_INST_3 = 0x403u,
    ecy_hsm_CSAI_KEYID_OID_STATIC_CFG_OID_0_INST_4 = 0x404u,
    ecy_hsm_CSAI_KEYID_OID_STATIC_CFG_OID_0_INST_5 = 0x405u,
    ecy_hsm_CSAI_KEYID_OID_STATIC_CFG_OID_0_INST_6 = 0x406u,
    ecy_hsm_CSAI_KEYID_OID_STATIC_CFG_OID_0_INST_7 = 0x407u,
    ecy_hsm_CSAI_KEYID_OID_STATIC_CFG_OID_0_INST_8 = 0x408u,
    ecy_hsm_CSAI_KEYID_OID_STATIC_CFG_OID_0_INST_9 = 0x409u,
    ecy_hsm_CSAI_KEYID_OID_end,

    ecy_hsm_CSAI_KEYID_SECRET_DATA_start = 0x500u,
    ecy_hsm_CSAI_KEYID_SECRET_DATA_DYNAMIC_CFG_SECRET_DATA_0 = 0x500u,
    ecy_hsm_CSAI_KEYID_SECRET_DATA_DYNAMIC_CFG_SECRET_DATA_1 = 0x501u,
    ecy_hsm_CSAI_KEYID_SECRET_DATA_DYNAMIC_CFG_SECRET_DATA_2 = 0x502u,
    ecy_hsm_CSAI_KEYID_SECRET_DATA_DYNAMIC_CFG_SECRET_DATA_3 = 0x503u,
    ecy_hsm_CSAI_KEYID_SECRET_DATA_end,

    ecy_hsm_CSAI_KEYID_INT_DATA_start = 0x600u,
    ecy_hsm_CSAI_KEYID_INT_DATA_STATIC_CFG_INT_DATA_0 = 0x600u,
    ecy_hsm_CSAI_KEYID_INT_DATA_DYNAMIC_CFG_INT_DATA_TRUSTED_BOOT_REF = 0x601u,
    ecy_hsm_CSAI_KEYID_INT_DATA_DYNAMIC_CFG_LIFE_CYCLE_STATE = 0x602u,
    ecy_hsm_CSAI_KEYID_INT_DATA_DYNAMIC_CFG_PASSWORDS = 0x603u,
    ecy_hsm_CSAI_KEYID_INT_DATA_DYNAMIC_CFG_SERIALNUMBER = 0x604u,
    ecy_hsm_CSAI_KEYID_INT_DATA_DYNAMIC_CFG_HSM_UPDATE_PASSWORD = 0x605u,
    ecy_hsm_CSAI_KEYID_INT_DATA_STATIC_CFG_HSM_SUSPEND_TIME = 0x606u,
    ecy_hsm_CSAI_KEYID_INT_DATA_DYNAMIC_CFG_SECACC_NONCE = 0x607u,
    ecy_hsm_CSAI_KEYID_INT_DATA_STATIC_CFG_SECURE_DEBUG_NONCE_CNTRL = 0x608u,
    ecy_hsm_CSAI_KEYID_INT_DATA_STATIC_CFG_SECURE_DEBUG_USE_CASE = 0x609u,
    ecy_hsm_CSAI_KEYID_INT_DATA_STATIC_CFG_SECURE_DEBUG_CHALLENGE_LEN = 0x60Au,
    ecy_hsm_CSAI_KEYID_INT_DATA_end,
    ecy_hsm_CSAI_SHE_KEYID_RESERVED = 0x7FFFFFFFu           /**< Ensure full 32 bits are used for the enum         */

} ecy_hsm_Csai_KeyIdT;
typedef struct
{
  uint8 BlockStructureID;
  uint8 StatusMTC;                  // initialized to invalid - valid status could only be set by MTC
  uint8 StatusSW;                   // initialized to invalid - valid status could only be set by MTC
  uint8 StatusET;                   // initialized to valid
  uint8 BBNumber[RBLCF_BB_NUMBER_SIZE];
  uint8 MTCConfiguration[RBLCF_MTC_CONFIGURATION_SIZE];
  uint8 SCM_ID;
  uint8 SCM_VersionID[RBLCF_SCM_VERSIONID_SIZE];

} RBLCF_StdHexInfoStruct_t;
typedef struct
{
  uint8   BlockStructureID;
  uint8   AlgorithmID;
  uint8   ChecksumSegmentation;
  uint8   reserved;
  uint32* SeparatorRef;
  uint32  Checksum1;
  uint32  Checksum2;
} RBLCF_StdCheckStruct_t;

typedef struct
{
  uint8   BlockStructureID;
  uint8   SupplierID[RBLCF_SUPPLIERID_SIZE];
  uint32  DeviceID;
  uint32  HexBlockSize;
  uint8   HexBlockType;
  uint8   reserved[3];
  RBLCF_StdCheckStruct_t * CheckStructRef;
  RBLCF_StdHexInfoStruct_t * HexInfoStructRef;
  uint32* SignatureRef;
  uint32* BlockInterfaceRef;

} RBLCF_HexBlockStruct_t;
typedef struct
{
  uint32 HexBlockStartAdr;                      // start address of current HexBlock
  RBLCF_HexBlockStruct_t* HexBlockRef;    // pointer to HexBlock structure
  RBLCF_StdHexInfoStruct_t* HexInfoRef;   // pointer to HexInfo structure
  RBLCF_StdCheckStruct_t* CheckRef;       // pointer to Check structure
  boolean hasNext;                              // successor of this HexBlock available


} RBLCF_HexBlockLayout_t;

typedef struct
{
  RBLCF_StdHexInfoStruct_t StdHexInfoStructRef;              /* inheritance standard hexinfo structure -> must be always the first element */
  uint8 Date[RBLCF_DATE_SIZE];
  uint8 Time[RBLCF_TIME_SIZE];

} RBLCF_FSWHexInfoStruct_t;
typedef enum /*TOOL_SCAN*/
{
    RBPSC_Off = 0,
    RBPSC_Torque,
    RBPSC_Speed,
    RBPSC_Position,
    RBPSC_3PhaseShortStrong,
    RBPSC_Motor_Stop
} RBPSC_AswControlType_t;

/** Define HSM operational modes */
typedef enum HSM_ModeTag
{
  /** The HSM has not been started */
  HSM_MODE_NOT_STARTED        = 1u,
  /** The HSM has booted but not is yet in either full bootloader or application mode */
  HSM_MODE_BOOTING            = 2u,
  /** The HSM is running in bootloader mode */
  HSM_MODE_BOOTLOADER         = 3u,
  /** The HSM is running in core application (normal) mode */
  HSM_MODE_CORE_APP           = 4u,
  /** The HSM mode is invalid */
  HSM_MODE_INVALID            = 5u,
  /** The HSM is running in core application (stopped) mode */
  HSM_MODE_CORE_APP_STOPPED   = 6u,
  /** The HSM is running in suspended mode */
  HSM_MODE_SUSPENDED          = 7u,
  /** Reserved value. Ensures enum is 32-bit wide. */
  HSM_MODE_RESERVED           = 0x7FFFFFFFu
} HSM_ModeT;

/** Define known session modes */
typedef enum ecy_hsm_CSAI_SessionModeTag
{
  ecy_hsm_CSAI_SESSION_MODE_NON_BLOCKING = 1u,

  ecy_hsm_CSAI_SESSION_MODE_BLOCKING = 2u,
  /**< Value defined to use memory size of uint32 for enums */
  ecy_hsm_CSAI_SESSION_MODE_RESERVED = 0x7fffffffu
} ecy_hsm_Csai_SessionModeT;
typedef enum /*TOOL_SCAN*/
{
    RBPSC_NotInitialized,
    RBPSC_Invalid,
    RBPSC_OffsetCorrected,
    RBPSC_NotOffsetCorrected
} RBPSC_MotorPositionQualifier_t;
typedef enum rcy_hsm_Csai_JobPriorityTag
{
  ecy_hsm_CSAI_PRIO_BACKGROUND            = 0u,       /**< HSM background scheduling priority.            */
  ecy_hsm_CSAI_PRIO_LOW                   = 1u,       /**< HSM low scheduling priority.                   */
  ecy_hsm_CSAI_PRIO_MEDIUM                = 2u,       /**< HSM medium scheduling priority                 */
  ecy_hsm_CSAI_PRIO_HIGH                  = 3u,       /**< HSM high scheduling priority                   */
  /* Only define safety priority for host if it is enabled. It is always defined for HSM */
#if (CYCURHSM_CONFIG_WITH_SAFETY_CHECK == ENABLED) || (ESC_SUPPORT_SAFETY_IN_HSM == ENABLED)
  ecy_hsm_CSAI_PRIO_SAFETY                = 4u,       /**< HSM safety scheduling priority                 */
#else
  /**< Safety priority (mapped to PRIO_HIGH) */
  ecy_hsm_CSAI_PRIO_SAFETY                = ecy_hsm_CSAI_PRIO_HIGH,
#endif
  /* If new higher priorities are added, note that the higher priority should be defined in CSAI_PRIO_MAX_HOST_TASK */
  ecy_hsm_CSAI_PRIO_UNCHANGED             = 5u,       /**< Same priority as last operation scheduled      */
  ecy_hsm_CSAI_JOBPRIORITY_RESERVED = 0x7fffffffu     /**< Value defined to use memory size of uint32 for enums */
} ecy_hsm_Csai_JobPriorityT;
typedef struct
{
    boolean ComScl_RawSignal_isVehModMngtGlbSafe1FltEgyCnsWdSts_0_b;
    uint8 ComScl_RawSignal_isVehModMngtGlbSafe1CarModSts1_0_u8;
    uint8 ComScl_RawSignal_isVehModMngtGlbSafe1CarModSubtypWdCarModSubtyp_0_u8;
    uint8 ComScl_RawSignal_isVehModMngtGlbSafe1Cntr_0_u8;
    uint8 ComScl_RawSignal_isVehModMngtGlbSafe1EgyLvlElecSubtyp_0_u8;
    uint8 ComScl_RawSignal_isVehModMngtGlbSafe1PwrLvlElecSubtyp_0_u8;
    uint8 ComScl_RawSignal_isVehModMngtGlbSafe1UsgModSts_0_u8;
    uint8 ComScl_RawSignal_isVehModMngtGlbSafe1PwrLvlElecMai_0_u8;
    uint8 ComScl_RawSignal_isVehModMngtGlbSafe1EgyLvlElecMai_0_u8;
    uint8 ComScl_RawSignal_isVehModMngtGlbSafe1Chks_0_u8;
} ComScl_RawSigGrp_igVehModMngtGlbSafe1_0_st;
extern ComScl_RawSigGrp_igVehModMngtGlbSafe1_0_st ComScl_RawSigGrp_igVehModMngtGlbSafe1_0;
ComScl_RawSigGrp_igVehModMngtGlbSafe1_0_st ComScl_RawSigGrp_igVehModMngtGlbSafe1_0;
typedef struct   /*TOOL_SCAN*/
{
   UBYTE NMState_UB;
   uint32 CarTiGlbforNM_UB;
} NMStatebuffer_ST;
NMStatebuffer_ST g_NMStatebufferFlexray_PST [NMBuffersize_Flexray];

typedef struct
{
    uint8 ComScl_RawSignal_isVehBattUSysUQf_u8;
    uint8 ComScl_RawSignal_isVehBattUSysU_u8;
} ComScl_RawSigGrp_igVehBattU_st;
extern ComScl_RawSigGrp_igVehBattU_st ComScl_RawSigGrp_igVehBattU;
#define NMBuffersize_ADReduCAN 10  /* This shall be in sync with NVM blocks. ((10) * NM State bufer) = 50 in NVM */
NMStatebuffer_ST g_NMStatebufferADReduCAN_PST [NMBuffersize_ADReduCAN];
NMStatebuffer_ST g_NMStatebufferChasCAN_PST [NMBuffersize_ChasCAN];
ComScl_RawSigGrp_igVehBattU_st ComScl_RawSigGrp_igVehBattU;
typedef enum _VehicleSpeedQualifier_N /*TOOL_SCAN*/
{
  C_VehicleSpeedQualifier_NotInitialized_N = 0,
  C_VehicleSpeedQualifier_Normal_N,
  C_VehicleSpeedQualifier_Faulty_N,
  C_VehicleSpeedQualifier_DifferentCalculated_N,
  C_VehicleSpeedQualifier_ReducedMonitored_N,
  C_VehicleSpeedQualifier_NotCalculated_N,
  C_VehicleSpeedQualifier_InvalidUnderVoltage_N
} VehicleSpeedQualifier_N;

typedef struct _VehicleSpeedExport_ST
{
  UWORD                   VehicleSpeed_UW;
  VehicleSpeedQualifier_N Qualifier_N;
} VehicleSpeedExport_ST;
typedef struct
{
  UBYTE Index[31];

}VarCodeInvalidPrameterType_ST;
typedef enum _pForceBlendingPotentialQualifier_N /*TOOL_SCAN*/
{
  C_pForceBlendingPotentialQualifier_NotInitialized_N = 0,
  C_pForceBlendingPotentialQualifier_Normal_N,
  C_pForceBlendingPotentialQualifier_Faulty_N
} pForceBlendingPotentialQualifier_N;

typedef struct _pForceBlendingPotential_ST
{
  UBYTE                              pForceBlendingPotential_UB;
  pForceBlendingPotentialQualifier_N Qualifier_N;
} pForceBlendingPotential_ST;
typedef enum _sOutputRodDriverQualifier_N /*TOOL_SCAN*/
{
  C_sOutputRodDriverQualifier_NotInitialized_N = 0,
  C_sOutputRodDriverQualifier_Normal_N,
  C_sOutputRodDriverQualifier_Faulty_N
} sOutputRodDriverQualifier_N;


typedef struct _sOutputRodDrvr_ST
{
  SWORD                       sOutputRodDriver_SW;
  sOutputRodDriverQualifier_N Qualifier_N;
} sOutputRodDrvr_ST;
typedef enum _sOutputRodActQualifier_N /*TOOL_SCAN*/
{
  C_sOutputRodActQualifier_NotInitialized_N = 0,
  C_sOutputRodActQualifier_Normal_N,
  C_sOutputRodActQualifier_Faulty_N
} sOutputRodActQualifier_N;

typedef struct _sOutputRod_Act_ST
{
  SWORD                    sOutputRodAct_SW;
  sOutputRodActQualifier_N Qualifier_N;
} sOutputRod_Act_ST;
typedef enum _ExtReqQualifier_N /*TOOL_SCAN*/
{
  C_ExtReqQualifier_NotInitialized_N = 0,
  C_ExtReqQualifier_NotAvailable_N,
  C_ExtReqQualifier_Available_N,
  C_ExtReqQualifier_Active_N,
  C_ExtReqQualifier_ActiveRestricted_N
} ExtReqQualifier_N;

typedef struct _ExtReq_ST
{
  BOOL              Active_B;
  ExtReqQualifier_N Qualifier_N;
} ExtReq_ST;
typedef enum _pRunoutQualifier_N /*TOOL_SCAN*/
{
  C_pRunoutQualifier_NotInitialized_N = 0,
  C_pRunoutQualifier_Normal_N,
  C_pRunoutQualifier_Faulty_N
} pRunoutQualifier_N;
typedef struct
{
    uint8 ComScl_RawSignal_isVehCfgPrmCCPBytePosn6_u8;
    uint8 ComScl_RawSignal_isVehCfgPrmBlkIDBytePosn1_u8;
    uint8 ComScl_RawSignal_isVehCfgPrmCCPBytePosn4_u8;
    uint8 ComScl_RawSignal_isVehCfgPrmCCPBytePosn3_u8;
    uint8 ComScl_RawSignal_isVehCfgPrmCCPBytePosn2_u8;
    uint8 ComScl_RawSignal_isVehCfgPrmCCPBytePosn8_u8;
    uint8 ComScl_RawSignal_isVehCfgPrmCCPBytePosn7_u8;
    uint8 ComScl_RawSignal_isVehCfgPrmCCPBytePosn5_u8;
} ComScl_RawSigGrp_igVehCfgPrm_st;
extern ComScl_RawSigGrp_igVehCfgPrm_st ComScl_RawSigGrp_igVehCfgPrm;
typedef struct _pRunout_ST
{
  UBYTE              pRunout_UB;
  pRunoutQualifier_N Qualifier_N;
} pRunout_ST;
ComScl_RawSigGrp_igVehCfgPrm_st ComScl_RawSigGrp_igVehCfgPrm;
typedef enum _e_iBstatus_Diagnosis /*TOOL_SCAN*/
{
  C_Off_N = 0,
  C_Init_N,
  C_Failure_N,
  C_Diagnosis_N,
  C_ActiveGoodCheck_N,
  C_Ready_N,
  C_Actuated_N
} e_iBstatus_Diagnosis;
typedef enum _iBStatus_state_N /*TOOL_SCAN*/
{
  C_iBoosterstate_NotInitialized_or_StartupPhase_N = 0,
  C_iBoosterstate_Failure_N,
  C_iBoosterstate_Diagnosis_N,
  C_iBoosterstate_UNDEFINED_1_N,
  C_iBoosterstate_StandAlone_N,
  C_iBoosterstate_Reduced_N,
  C_iBoosterstate_PostRun_Reduced_N,
  C_iBoosterstate_Ready_N
} iBStatus_state_N;




DefineMESGType_ST(NMSG_VehicleSpeed_ST, VehicleSpeedExport_ST);
DefineMESG(NMSG_VehicleSpeed_ST);
DefineMESGType_ST(NMSG_ExtReq_XMT_ST, ExtReq_ST);
DefineMESG(NMSG_ExtReq_XMT_ST);
DefineMESGType_ST(NMSG_pRunoutXMT_ST, pRunout_ST);
DefineMESG(NMSG_pRunoutXMT_ST);

extern FUNC( uint16, PDUR_CODE ) PduR_GetConfigurationId( void );
int value_min;
int value;
int value_max;


uint16 RBWauVolt_getKL15Voltage(void);
RBMESG_DefineMESGType_B(iB_BrkLightActive_B);
RBMESG_DefineMESG(iB_BrkLightActive_B);
RBMESG_DefineMESGType_B(DriverOnPedal_B);
RBMESG_DefineMESG(DriverOnPedal_B);
RBMESG_DefineMESGType_B(iB_ready_for_actuation_B);
RBMESG_DefineMESG(iB_ready_for_actuation_B);
RBMESG_DefineMESGType_B(iB_ready_for_actuation_B);
RBMESG_DefineMESG(iB_ready_for_actuation_B);
RBMESG_DefineMESGType_EN(iB_status_N, e_iBstatus_Diagnosis);
RBMESG_DefineMESG(iB_status_N);
RBMESG_DefineMESGType_u16(RBMESG_UBBFiltered);
RBMESG_DefineMESG(RBMESG_UBBFiltered);
RBMESG_DefineMESGType_u16(RBMESG_UB6Filtered);
RBMESG_DefineMESG(RBMESG_UB6Filtered);

RBMESG_DefineMESGType_SW(RBMESG_BLMTemperatureB6_Ch1_s16);
RBMESG_DefineMESG(RBMESG_BLMTemperatureB6_Ch1_s16);
// DATAINTERFACE removed (Epic 153219)

RBMESG_DefineMESGType_SW(RBMESG_BLMTemperatureB6_Ch2_s16);
RBMESG_DefineMESG(RBMESG_BLMTemperatureB6_Ch2_s16);
// DATAINTERFACE removed (Epic 153219)

RBMESG_DefineMESG(RBMESG_BLMTemperatureB6_Ch1_s16);
RBMESG_DefineMESG(RBMESG_BLMTemperatureB6_Ch2_s16);

DefineMESGType_SW(RBVSI_pMC_calibrated);
DefineMESG(RBVSI_pMC_calibrated);
DefineMESGType_SW(RBVSA_OutputRodActual);
DefineMESG(RBVSA_OutputRodActual);
RBMESG_DefineMESGType_s16(RBVSI_InputRodStrokeCalc);
RBMESG_DefineMESG(RBVSI_InputRodStrokeCalc);
DefineMESGType_EN(RBVSA_OutputRodActualQualifier, sOutputRodActQualifier_N);
DefineMESG(RBVSA_OutputRodActualQualifier);
DefineMESGType_SW(RBAPO_ActuatorPosition);
DefineMESG(RBAPO_ActuatorPosition);
DefineMESGType_EN(RBAPO_ActuatorPositionQualifier, RBPSC_MotorPositionQualifier_t);
DefineMESG(RBAPO_ActuatorPositionQualifier);

RBMESG_DefineMESGType_u8(NVM_QCMResult_Valid);
RBMESG_DefineMESG(NVM_QCMResult_Valid);
RBMESG_DefineMESGType_u8(QCMStsFlag_Persistent_UB);
RBMESG_DefineMESG(QCMStsFlag_Persistent_UB);

/*-------------------------------------*/
/* QCMStsFlag_Current_UB */
/*-------------------------------------*/
RBMESG_DefineMESGType_u8(QCMStsFlag_Current_UB);
RBMESG_DefineMESG(QCMStsFlag_Current_UB);

/*-------------------------------------*/
/* NVM_QCMResult_Valid */
/*-------------------------------------*/
RBMESG_DefineMESGType_u8(NVM_QCMResult_Valid);
RBMESG_DefineMESG(NVM_QCMResult_Valid);

/*-------------------------------------*/
/* NMSG_QCMStsFlag_B */
/*-------------------------------------*/
RBMESG_DefineMESGType_B(NMSG_QCMStsFlag_B);
RBMESG_DefineMESG(NMSG_QCMStsFlag_B);

/*-------------------------------------*/
/* NMSG_OBD_CCP_Status_B */
/*-------------------------------------*/
RBMESG_DefineMESGType_B(NMSG_OBD_CCP_Status_B);
RBMESG_DefineMESG(NMSG_OBD_CCP_Status_B);
DefineMESGType_ST(NMSG_sOutputRod_Act_ST, sOutputRod_Act_ST);
DefineMESG(NMSG_sOutputRod_Act_ST);
DefineMESGType_ST(NMSG_sOutputRodDrvr_ST, sOutputRodDrvr_ST);
DefineMESG(NMSG_sOutputRodDrvr_ST);
DefineMESGType_ST(NMSG_pForceBlendingPotentialXMT_ST, pForceBlendingPotential_ST);
DefineMESG(NMSG_pForceBlendingPotentialXMT_ST);
DefineMESGType_EN(NMSG_iBStatusXMT_N, iBStatus_state_N);
DefineMESG(NMSG_iBStatusXMT_N);
DefineMESGType_ST(NMSG_GCC_InvalidParametersArray_ST, VarCodeInvalidPrameterType_ST);
DefineMESG(NMSG_GCC_InvalidParametersArray_ST);
RBMESG_DefineMESGType_SW(RBMESG_LiPS2Signal_S16);
RBMESG_DefineMESG(RBMESG_LiPS2Signal_S16);
DefineMESGType_UL(NMSG_DstTrvlDMst_RCV_UL);
DefineMESG(NMSG_DstTrvlDMst_RCV_UL);
DefineMESGType_UL(NMSG_DstTrvlDMst_RCV_UL);
DefineMESG(NMSG_DstTrvlDMst_RCV_UL);
DefineMESGType_UL(NMSG_DcmPNCStatus_u32);
DefineMESG(NMSG_DcmPNCStatus_u32);

DefineMESGType_UL(NMSG_CarTiGlb_UL);
DefineMESG(NMSG_CarTiGlb_UL);

DefineMESGType_UL(NMSG_CarTiGlb_UL);
DefineMESG(NMSG_CarTiGlb_UL);

DefineMESGType_UL(NMSG_CarTiGlb_UL);
DefineMESG(NMSG_CarTiGlb_UL);

Dem_EventIdType g_Dem_EventId_u16;
Dem_EventStatusType g_Dem_EventStatus_u8;
uint32 g_debug0_u32;
uint32 g_debug1_u32;

typedef struct
{
    Dem_EventIdType EventId;
    Dem_EventStatusType EventStatus;
    uint32 debug0;
    uint32 debug1;
}RBBandgap_Request_st;

//RBBandgap_Request_st g_RBBandgap_Requests_st[10];
RBBandgap_Request_st g_RBBandgap_Requests_st;

extern Std_ReturnType BOUND(value_min, value, value_max);
extern Std_ReturnType Dem_GetEventFailed (Dem_EventIdType EventId, Dem_EventStatusType *EventStatus_p);

extern  FUNC( uint16, PDUR_CODE ) PduR_GetConfigurationId( void );

extern uint16 RBWauVolt_getKL15Voltage(void);
extern uint16 RBLiPS_GetSupplyVoltage_u16(void);

#endif /* STUBS_H_ */

