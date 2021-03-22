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
 * $Namespace_:\Comp\Standard$
 * $Class_____:H$
 * $Name______:Std_Types$
 * $Variant___:AR40.1.0.0$
 * $Revision__:0$
 **********************************************************************************************************************
</BASDKey>*/

/* STD014 */
#ifndef STD_TYPES_H
#define STD_TYPES_H


/*
 **********************************************************************************************************************
 * Based on AUTOSAR_SWS_StandardTypes.pdf; Document Version 1.3.0; AR4.0; Rev 1 (is still the same in Rev 2)
 **********************************************************************************************************************
 */

/*
 **********************************************************************************************************************
 * Includes
 **********************************************************************************************************************
 */

/* STD001, STD016: */
#include "Platform_Types.h"
#include "Compiler.h"

/*
 **********************************************************************************************************************
 * Types and Defines
 **********************************************************************************************************************
 */

/* No special module ID is defined for Std_Types header. STD_TYPES is chosen. */
#define STD_TYPES_VENDOR_ID 6
#define STD_TYPES_SW_MAJOR_VERSION 1
#define STD_TYPES_SW_MINOR_VERSION 0
#define STD_TYPES_SW_PATCH_VERSION 0
#define STD_TYPES_AR_RELEASE_MAJOR_VERSION 4
#define STD_TYPES_AR_RELEASE_MINOR_VERSION 0
#define STD_TYPES_AR_RELEASE_REVISION_VERSION 1

/* STD006: Because E_OK is already defined within OSEK, the symbol E_OK has to be shared. To avoid name clashes     */
/* and redefinition problems, the symbols have to be defined in the following way (approved within implementation): */
#ifndef STATUSTYPEDEFINED
    #define STATUSTYPEDEFINED
    #define E_OK 0x00      /* No error occurs            */
    typedef unsigned char StatusType; /* OSEK compliance */
#endif
#define E_NOT_OK   0x01    /* An error occurs            */

/* STD007: */
#define STD_HIGH   0x01    /* Physical state 5V or 3.3V  */
#define STD_LOW    0x00    /* Physical state 0V          */

/* STD013: */
#define STD_ACTIVE 0x01    /* Logical state active       */
#define STD_IDLE   0x00    /* Logical state idle         */

/* STD010: */
#define STD_ON     0x01    /* On state                   */
#define STD_OFF    0x00    /* Off state                  */


/* STD005: Standard Return Type */
/* This type can be used as standard API return type which is shared between the RTE and the BSW modules. */
typedef uint8 Std_ReturnType;


/* STD015: Standard Version Info Type */
/* This type shall be used to request the version of a BSW module using the <Module name>_GetVersionInfo()function. */
typedef struct
{
    uint16 vendorID;
    uint16 moduleID;
    uint8 sw_major_version;
    uint8 sw_minor_version;
    uint8 sw_patch_version;
} Std_VersionInfoType;

/* STD014 */
/* STD_TYPES_H */
#endif
