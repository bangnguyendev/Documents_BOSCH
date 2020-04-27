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
 * $Class_____:H_TPL$
 * $Name______:Rte_NvM_Type$
 * $Variant___:AR40.1.3.0$
 * $Revision__:0$
 **********************************************************************************************************************
</BASDKey>*/

#ifndef RTE_NvM_TYPE_H
#define RTE_NvM_TYPE_H

/*
 **********************************************************************************************************************
 * Includes
 **********************************************************************************************************************
*/

#include "Std_Types.h"

/*
 **********************************************************************************************************************
 * Type definitions (RTE generator would put this into Rte_Type.h)
 **********************************************************************************************************************
*/

// TRACE[NVM471] Type for block IDs
typedef uint16 NvM_BlockIdType;

// TRACE[NVM083] Type for asynchronous request results
typedef uint8 NvM_RequestResultType;

/*
 **********************************************************************************************************************
 * Defines/Macros (RTE generator would put this into Rte_NvM_Type.h)
 **********************************************************************************************************************
*/

// TRACE[NVM470] Request results
#define NVM_REQ_OK                  0       // Last asynchronous read/write/control request finished successfully
#define NVM_REQ_NOT_OK              1       // Last asynchronous read/write/control request finished unsuccessfully
#define NVM_REQ_PENDING             2       // An asynchronous read/write/control request is currently pending
#define NVM_REQ_INTEGRITY_FAILED    3       // Data integrity failure for last read operation
#define NVM_REQ_BLOCK_SKIPPED       4       // Referenced block skipped in NvM_ReadAll or NvM_WriteAll
#define NVM_REQ_NV_INVALIDATED      5       // The reference block is invalidated
#define NVM_REQ_CANCELED            6       // Multi-block write request is canceled
#define NVM_REQ_REDUNDANCY_FAILED   7       // The required redundancy of the referenced NV block is lost
#define NVM_REQ_RESTORED_FROM_ROM   8       // The referenced NV block has been restored from ROM

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
