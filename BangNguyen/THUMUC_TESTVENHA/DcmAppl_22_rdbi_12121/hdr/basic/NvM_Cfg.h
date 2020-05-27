/*<BASDKey>
 **********************************************************************************************************************
 *
 * COPYRIGHT RESERVED, 2011 Robert Bosch GmbH. All rights reserved.
 * The reproduction, distribution and utilization of this document as well as the communication of its contents to
 * others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
 * All rights reserved in the event of the grant of a patent, utility model or design.
 *
 **********************************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Domain____:BASD$
 * $Namespace_:\Comp\NvM$
 * $Class_____:HT$
 * $Name______:NvM_Cfg$
 * $Variant___:AR40.7_2015-11$
 * $Revision__:0$
 **********************************************************************************************************************
</BASDKey>*/

// TRACE[NVM552] Header file specifying NvM pre-compile time configuration parameters

#ifndef NVM_CFG_H
#define NVM_CFG_H

/*
 **********************************************************************************************************************
 * Defines/Macros
 **********************************************************************************************************************
*/

// ---------------------------------------------------------------------------------------------------------------------
// TRACE[NVM028_Conf] Defines for common options (in the same order as in the ParamDef)
// ---------------------------------------------------------------------------------------------------------------------

// TRACE[NVM491_Conf] Enables/disables some APIs which are related to NvM API configuration classes
#define NVM_API_CONFIG_CLASS (NVM_API_CONFIG_CLASS_3)

// TRACE[BSW_SWS_AR4_0_R2_NVRAMManager_Ext-2803] Enables/disables the notification of BswM about the current status of the multiblock job
#define NVM_BSWM_MULTI_BLOCK_JOB_STATUS_INFORMATION (0u)

// TRACE[NVM492_Conf] ID representing the currently configured block layout
#define NVM_COMPILED_CONFIG_ID (61u)

// TRACE[NVM493_Conf] Maximum number of bytes which shall be processed within one cycle of job processing
#define NVM_CRC_NUM_OF_BYTES (1u)

// The parameter NvMDatasetSelectionBits is not supported in this implementation of NvM

// TRACE[NVM495_Conf] Enables/disables development error detection
#define NVM_DEV_ERROR_DETECT (1u)

// TRACE[NVM496_Conf] Enables/disables switching memory drivers to fast mode during performing NvM_ReadAll/NvM_WriteAll
#define NVM_DRV_MODE_SWITCH (0u)

// TRACE[NVM497_Conf] Enables/disables the dynamic configuration management handling by the NvM_ReadAll request
#define NVM_DYNAMIC_CONFIGURATION (1u)

// TRACE[NVM498_Conf] Enables/disables job prioritization handling
#define NVM_JOB_PRIORITIZATION (0u)

// TRACE[NVM540_Conf] Defines the cycle time in seconds of the periodic calling of NvM main function
#define NVM_MAIN_FUNCTION_CYCLE_TIME (0u)

// TRACE[NVM500_Conf] Callback routine indicating termination of each asynchronous multi block requests
#define NVM_MULTI_BLOCK_CALLBACK (NvM_IntegrationCode_MultiBlockCallback)

// TRACE[NVM501_Conf] Enables/disables polling mode in NvM (disables/enables callback functions for lower layers)
#define NVM_POLLING_MODE (1u)

// TRACE[BSW_SWS_AR4_0_R2_NVRAMManager_Ext-2945] Enables/disables the auxiliary service interface
#define NVM_RB_AUX_INTERFACE (1u)

// TRACE[BSW_SWS_AR4_0_R2_NVRAMManager_Ext-2746] Version of the generated ARXML file(s)
#define NVM_RB_GEN_ARXML_VERSION (NVM_GEN_ARXML_VERSION_402)

// TRACE[BSW_SWS_AR4_0_R2_NVRAMManager_Ext-2893] Enables/disables the initialization of blocks
#define NVM_RB_INIT_AT_LAYOUT_CHANGE (0u)

// TRACE[BSW_SWS_AR4_0_R2_NVRAMManager_Ext-2843] Callback routine indicating termination of any NvM job
#define NVM_RB_OBSERVER_CALLBACK (MultiblockObserverCallback)

// RAM (re-)intialization definitions
#define NVM_RB_RAM_INIT_CHECK   (NVM_RB_RAM_INIT_CHECK_NONE) // TRACE[BSW_SWS_AR4_0_R2_NVRAMManager_Ext-2786] Defines the behavior of NvM module when saved RAM zone is lost
#define NVM_RB_RAM_INIT_CHECK_NONE  (0u) // NvM blocks RAM status bits are initialized with default values. Saved RAM zone is considered lost.
#define NVM_RB_RAM_INIT_CHECK_QUICK (1u) // NvM blocks RAM status bits are not initialized. Only blocks with INVLAID RAM bit have their RAM blocks filled in with Nv data during NvM_ReadAll.

// TRACE[BSW_SWS_AR4_0_R2_NVRAMManager_Ext-2787] Enables/disables enhanced configuration
#define NVM_RB_REMOVE_NON_RESISTANT_BLOCKS (1u)

// TRACE[NVM518_Conf] Number of retries for mirror operations before postponing the current job
#define NVM_REPEAT_MIRROR_OPERATIONS (0u)

// TRACE[NVM502_Conf] Enables/disables the NvM_SetRamBlockStatus API
#define NVM_SET_RAM_BLOCK_STATUS_API (1u)

// TRACE[NVM503_Conf] Number of queue entries for the immediate priority job queue
#define NVM_SIZE_IMMEDIATE_JOB_QUEUE (1u)

// TRACE[NVM504_Conf] Number of queue entries for the standard job queue
#define NVM_SIZE_STANDARD_JOB_QUEUE (119u)

// TRACE[NVM505_Conf] Enables/disables the NvM_GetVersionInfo API
#define NVM_VERSION_INFO_API (0u)

// ---------------------------------------------------------------------------------------------------------------------
// TRACE[BSW_SWS_AR4_0_R2_NVRAMManager_Ext-2914] Names of overloaded API functions
// ---------------------------------------------------------------------------------------------------------------------



// ---------------------------------------------------------------------------------------------------------------------
// TRACE[NVM481_Conf] IDs for all configured blocks
// ---------------------------------------------------------------------------------------------------------------------

#define NvMConf_NvMBlockDescriptor_NvM_MultiBlock (0u)
#define NvMConf_NvMBlockDescriptor_NvM_ConfigId (1u)
#define NvMConf_NvMBlockDescriptor_ADRCounter (2u)
#define NvMConf_NvMBlockDescriptor_APBMOTPostrunMon (3u)
#define NvMConf_NvMBlockDescriptor_ApbBrkPadAdjDist (4u)
#define NvMConf_NvMBlockDescriptor_ApbClutchEngPoint (5u)
#define NvMConf_NvMBlockDescriptor_ApbPbcVariantItem (6u)
#define NvMConf_NvMBlockDescriptor_AvhAutoApply (7u)
#define NvMConf_NvMBlockDescriptor_AxsOffset (8u)
#define NvMConf_NvMBlockDescriptor_AysOffset (9u)
#define NvMConf_NvMBlockDescriptor_DCOM_RealTiresCircumference (10u)
#define NvMConf_NvMBlockDescriptor_EePlantBarcodeECU (11u)
#define NvMConf_NvMBlockDescriptor_EePlantBarcodeSinglePCPECU (12u)
#define NvMConf_NvMBlockDescriptor_EePlantEOLCounter (13u)
#define NvMConf_NvMBlockDescriptor_EePlantEPSWNumbers (14u)
#define NvMConf_NvMBlockDescriptor_EePlantFDocECU (15u)
#define NvMConf_NvMBlockDescriptor_EePlantFDocHU (16u)
#define NvMConf_NvMBlockDescriptor_EePlantPFKECU (17u)
#define NvMConf_NvMBlockDescriptor_EePlantPlantProcessDataECU (18u)
#define NvMConf_NvMBlockDescriptor_EePlantProductionControlHU (19u)
#define NvMConf_NvMBlockDescriptor_EePlantProductionDateECU (20u)
#define NvMConf_NvMBlockDescriptor_EePlantProductionInfoHU (21u)
#define NvMConf_NvMBlockDescriptor_EePlantTTNrHU (22u)
#define NvMConf_NvMBlockDescriptor_EnablingDevMsgs (23u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_COUNTERS (24u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_MANAGEMENT_DATA (25u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_0 (26u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_1 (27u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_2 (28u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_3 (29u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_4 (30u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_5 (31u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_6 (32u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_7 (33u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_8 (34u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_9 (35u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_DCOM_Backupconfigurationinformation (36u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_DCOM_DiagnosticVersion (37u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_DCOM_ECUInstallationDateDataIdentifier (38u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_DCOM_EOLStatus (39u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_DCOM_FillingInStatus (40u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_DCOM_GeelySparePartNumber (41u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_DCOM_ProgrammingAttempCounter (42u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_DCOM_ProgrammingCounter (43u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_DCOM_ProgrammingOrConfigurationDate (44u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_DCOM_RepairShopCodeOrTesterSerialNumber (45u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_DCOM_SecAccessAttCntr (46u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_DCOM_SystemNameOrEngineType (47u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_DCOM_VehicleManufacturerECUSoftwareVersionNumber (48u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_DCOM_VehicleName (49u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_DCOM_VehicleNetworkConfiguration (50u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_DCOM_vehicleIdentificationNumber (51u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_DEM_GENERIC_NV_DATA (52u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_0 (53u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_1 (54u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_2 (55u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_3 (56u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_4 (57u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_5 (58u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_6 (59u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_7 (60u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_8 (61u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_9 (62u)
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVT_STATUSBYTE_633 (63u)
#define NvMConf_NvMBlockDescriptor_NvM_MemStackTestBlock_4Bytes (64u)
#define NvMConf_NvMBlockDescriptor_PBCActDataL0 (65u)
#define NvMConf_NvMBlockDescriptor_PBCActDataL1 (66u)
#define NvMConf_NvMBlockDescriptor_PBCActDataL2 (67u)
#define NvMConf_NvMBlockDescriptor_PBCActDataR0 (68u)
#define NvMConf_NvMBlockDescriptor_PBCActDataR1 (69u)
#define NvMConf_NvMBlockDescriptor_PBCActDataR2 (70u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_01 (71u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_02 (72u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_03 (73u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_04 (74u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_05 (75u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_06 (76u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_07 (77u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_08 (78u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_09 (79u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_10 (80u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_11 (81u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_12 (82u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_13 (83u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_14 (84u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_15 (85u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_16 (86u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_17 (87u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_18 (88u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_19 (89u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_20 (90u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_21 (91u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_22 (92u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_23 (93u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_24 (94u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_25 (95u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_26 (96u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_27 (97u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_28 (98u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_29 (99u)
#define NvMConf_NvMBlockDescriptor_PBCStatData_30 (100u)
#define NvMConf_NvMBlockDescriptor_PsOffset_MC1 (101u)
#define NvMConf_NvMBlockDescriptor_RBVAR_NvmBlockId_8 (102u)
#define NvMConf_NvMBlockDescriptor_SCMImpactCounter (103u)
#define NvMConf_NvMBlockDescriptor_SCMStart1SnapShot (104u)
#define NvMConf_NvMBlockDescriptor_SCMStart2SnapShot (105u)
#define NvMConf_NvMBlockDescriptor_SCMStop1SnapShot (106u)
#define NvMConf_NvMBlockDescriptor_SCMStop2SnapShot (107u)
#define NvMConf_NvMBlockDescriptor_SasOffset (108u)
#define NvMConf_NvMBlockDescriptor_TDisc (109u)
#define NvMConf_NvMBlockDescriptor_TtcFactor (110u)
#define NvMConf_NvMBlockDescriptor_TtcFactorDiff (111u)
#define NvMConf_NvMBlockDescriptor_VolAccuMax_BC1 (112u)
#define NvMConf_NvMBlockDescriptor_VolAccuMax_BC2 (113u)
#define NvMConf_NvMBlockDescriptor_WssDynamicDFA (114u)
#define NvMConf_NvMBlockDescriptor_XcpResumeModeMemory (115u)
#define NvMConf_NvMBlockDescriptor_XcpResumeModeMemoryTL (116u)
#define NvMConf_NvMBlockDescriptor_YrsOffset (117u)
#define NvMConf_NvMBlockDescriptor_YrsSensitivity (118u)
#define NvMConf_NvMBlockDescriptor_ePSWFinalizationFlag (119u)


// ---------------------------------------------------------------------------------------------------------------------
// TRACE[BSW_SWS_AR4_0_R2_NVRAMManager_Ext-2801] Lengths of all configured blocks as define
// ---------------------------------------------------------------------------------------------------------------------

#define NVM_CFG_NV_BLOCK_LENGTH_NvM_MultiBlock (1u)
#define NVM_CFG_NV_BLOCK_LENGTH_NvM_ConfigId (2u)
#define NVM_CFG_NV_BLOCK_LENGTH_ADRCounter (2u)
#define NVM_CFG_NV_BLOCK_LENGTH_APBMOTPostrunMon (1u)
#define NVM_CFG_NV_BLOCK_LENGTH_ApbBrkPadAdjDist (4u)
#define NVM_CFG_NV_BLOCK_LENGTH_ApbClutchEngPoint (1u)
#define NVM_CFG_NV_BLOCK_LENGTH_ApbPbcVariantItem (64u)
#define NVM_CFG_NV_BLOCK_LENGTH_AvhAutoApply (1u)
#define NVM_CFG_NV_BLOCK_LENGTH_AxsOffset (4u)
#define NVM_CFG_NV_BLOCK_LENGTH_AysOffset (2u)
#define NVM_CFG_NV_BLOCK_LENGTH_DCOM_RealTiresCircumference (2u)
#define NVM_CFG_NV_BLOCK_LENGTH_EePlantBarcodeECU (29u)
#define NVM_CFG_NV_BLOCK_LENGTH_EePlantBarcodeSinglePCPECU (29u)
#define NVM_CFG_NV_BLOCK_LENGTH_EePlantEOLCounter (2u)
#define NVM_CFG_NV_BLOCK_LENGTH_EePlantEPSWNumbers (18u)
#define NVM_CFG_NV_BLOCK_LENGTH_EePlantFDocECU (31u)
#define NVM_CFG_NV_BLOCK_LENGTH_EePlantFDocHU (20u)
#define NVM_CFG_NV_BLOCK_LENGTH_EePlantPFKECU (10u)
#define NVM_CFG_NV_BLOCK_LENGTH_EePlantPlantProcessDataECU (20u)
#define NVM_CFG_NV_BLOCK_LENGTH_EePlantProductionControlHU (20u)
#define NVM_CFG_NV_BLOCK_LENGTH_EePlantProductionDateECU (6u)
#define NVM_CFG_NV_BLOCK_LENGTH_EePlantProductionInfoHU (16u)
#define NVM_CFG_NV_BLOCK_LENGTH_EePlantTTNrHU (12u)
#define NVM_CFG_NV_BLOCK_LENGTH_EnablingDevMsgs (4u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_BFM_COUNTERS (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_BFM_MANAGEMENT_DATA (36u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_BFM_RECORD_0 (40u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_BFM_RECORD_1 (40u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_BFM_RECORD_2 (40u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_BFM_RECORD_3 (40u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_BFM_RECORD_4 (40u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_BFM_RECORD_5 (40u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_BFM_RECORD_6 (40u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_BFM_RECORD_7 (40u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_BFM_RECORD_8 (40u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_BFM_RECORD_9 (40u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_DCOM_Backupconfigurationinformation (64u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_DCOM_DiagnosticVersion (4u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_DCOM_ECUInstallationDateDataIdentifier (4u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_DCOM_EOLStatus (1u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_DCOM_FillingInStatus (1u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_DCOM_GeelySparePartNumber (10u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_DCOM_ProgrammingAttempCounter (1u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_DCOM_ProgrammingCounter (1u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_DCOM_ProgrammingOrConfigurationDate (4u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_DCOM_RepairShopCodeOrTesterSerialNumber (16u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_DCOM_SecAccessAttCntr (1u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_DCOM_SystemNameOrEngineType (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_DCOM_VehicleManufacturerECUSoftwareVersionNumber (16u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_DCOM_VehicleName (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_DCOM_VehicleNetworkConfiguration (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_DCOM_vehicleIdentificationNumber (17u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_DEM_GENERIC_NV_DATA (16u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_EVMEM_LOC_0 (24u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_EVMEM_LOC_1 (24u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_EVMEM_LOC_2 (24u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_EVMEM_LOC_3 (24u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_EVMEM_LOC_4 (24u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_EVMEM_LOC_5 (24u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_EVMEM_LOC_6 (24u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_EVMEM_LOC_7 (24u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_EVMEM_LOC_8 (24u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_EVMEM_LOC_9 (24u)
#define NVM_CFG_NV_BLOCK_LENGTH_NVM_ID_EVT_STATUSBYTE_633 (633u)
#define NVM_CFG_NV_BLOCK_LENGTH_NvM_MemStackTestBlock_4Bytes (4u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCActDataL0 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCActDataL1 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCActDataL2 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCActDataR0 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCActDataR1 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCActDataR2 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_01 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_02 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_03 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_04 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_05 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_06 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_07 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_08 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_09 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_10 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_11 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_12 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_13 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_14 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_15 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_16 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_17 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_18 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_19 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_20 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_21 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_22 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_23 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_24 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_25 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_26 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_27 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_28 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_29 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PBCStatData_30 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_PsOffset_MC1 (2u)
#define NVM_CFG_NV_BLOCK_LENGTH_RBVAR_NvmBlockId_8 (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_SCMImpactCounter (2u)
#define NVM_CFG_NV_BLOCK_LENGTH_SCMStart1SnapShot (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_SCMStart2SnapShot (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_SCMStop1SnapShot (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_SCMStop2SnapShot (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_SasOffset (2u)
#define NVM_CFG_NV_BLOCK_LENGTH_TDisc (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_TtcFactor (8u)
#define NVM_CFG_NV_BLOCK_LENGTH_TtcFactorDiff (2u)
#define NVM_CFG_NV_BLOCK_LENGTH_VolAccuMax_BC1 (2u)
#define NVM_CFG_NV_BLOCK_LENGTH_VolAccuMax_BC2 (2u)
#define NVM_CFG_NV_BLOCK_LENGTH_WssDynamicDFA (1u)
#define NVM_CFG_NV_BLOCK_LENGTH_XcpResumeModeMemory (512u)
#define NVM_CFG_NV_BLOCK_LENGTH_XcpResumeModeMemoryTL (72u)
#define NVM_CFG_NV_BLOCK_LENGTH_YrsOffset (2u)
#define NVM_CFG_NV_BLOCK_LENGTH_YrsSensitivity (2u)
#define NVM_CFG_NV_BLOCK_LENGTH_ePSWFinalizationFlag (1u)


// ---------------------------------------------------------------------------------------------------------------------
// Miscellaneous other definitions
// ---------------------------------------------------------------------------------------------------------------------

// RAM Mirror definitions
#define NVM_PRV_HAS_RAM_MIRROR  STD_ON
#define NVM_PRV_SIZE_RAM_MIRROR (633u)


// TRACE[BSW_SWS_AR4_0_R2_NVRAMManager_Ext-2870] The implementation of the maintenance operation is done as if this feature was configurable
#define NVM_PRV_MAINTAIN_REDUNDANT_BLOCKS (STD_ON) // Enables/disables the maintenance of redundant blocks (internal definition)

// TRACE[BSW_SWS_AR4_0_R2_NVRAMManager_Ext-2849] ID of the last NvM user block
#define NVM_CFG_LAST_USER_BLOCK (119u)

// Additional internal helper definitions
#define NVM_PRV_FIRST_USED_BLOCK  (1u)
#define NVM_PRV_NR_BLOCKS_CFG     (120u)
#define NVM_PRV_NR_BLOCKS_ADMIN   (121u)
#define NVM_PRV_NR_PERSISTENT_IDS (119u)

#endif

/*<BASDKey>
**********************************************************************************************************************
* $History__:$
**********************************************************************************************************************
</BASDKey>*/

/*<BASDKey>
**********************************************************************************************************************
* End of header file: $Name___:$
**********************************************************************************************************************
</BASDKey>*/
