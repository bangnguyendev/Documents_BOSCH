/*<BASDKey>
 **********************************************************************************************************************
 *
 * COPYRIGHT RESERVED, Robert Bosch GmbH, 2013. All rights reserved.
 * The reproduction, distribution and utilization of this document as well as the communication of its contents to
 * others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
 * All rights reserved in the event of the grant of a patent, utility model or design.
 *
 **********************************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Domain____:BASD$
 * $Namespace_:\Comp\Platform$
 * $Class_____:H$
 * $Name______:Platform_Types$
 * $Variant___:AR40.1.0.0$
 * $Revision__:0$
 **********************************************************************************************************************
</BASDKey>*/


#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H

/*
 **********************************************************************************************************************
 * Based on AUTOSAR_SWS_PlatformTypes.pdf; Document Version 2.4.0; AR4.0; Rev 2
 **********************************************************************************************************************
 */

#include <stdint.h>
 
/*
 **********************************************************************************************************************
 * Types and Defines
 **********************************************************************************************************************
 */

/* File version information */
#define PLATFORM_VENDOR_ID 6
#define PLATFORM_MODULE_ID 199
#define PLATFORM_SW_MAJOR_VERSION 2
#define PLATFORM_SW_MINOR_VERSION 0
#define PLATFORM_SW_PATCH_VERSION 0
#define PLATFORM_AR_RELEASE_MAJOR_VERSION 4
#define PLATFORM_AR_RELEASE_MINOR_VERSION 0
#define PLATFORM_AR_RELEASE_REVISION_VERSION 2


/* PLATFORM045: CPU register type width */
#define CPU_TYPE_8        8
#define CPU_TYPE_16       16
#define CPU_TYPE_32       32

/* PLATFORM048: Bit order definition */
#define MSB_FIRST 0
#define LSB_FIRST 1

/* PLATFORM050, PLATFORM051: Byte order definition */
#define HIGH_BYTE_FIRST   0             /* Big endian byte ordering     */
#define LOW_BYTE_FIRST    1             /* Little endian byte ordering  */


/* PLATFORM044: CPU Type: */
#define CPU_TYPE          CPU_TYPE_32

/* PLATFORM039, PLATFORM046, PLATFORM050, PLATFORM051: Byte Ordering (Memory) */
#define CPU_BYTE_ORDER    LOW_BYTE_FIRST

/* PLATFORM038, PLATFORM043: Bit Ordering (Register) (Not to be used in SW!) */
#define CPU_BIT_ORDER     LSB_FIRST

/* Standard Symbols for TRUE and FALSE */
/* PLATFORM054, PLATFORM055, PLATFORM056: Only to be used in conjunction with the boolean type */
#ifndef TRUE
    #define TRUE 1
#endif

#ifndef FALSE
    #define FALSE 0
#endif


/* Standard Integer Data Types */
/* --------------------------- */
/* PLATFORM016: */
typedef int8_t     sint8;          /*        -128 .. +127          */
/* PLATFORM013: */
typedef uint8_t    uint8;          /*           0 .. 255           */
/* PLATFORM017: */
typedef int16_t    sint16;         /*      -32768 .. +32767        */
/* PLATFORM014: */
typedef uint16_t   uint16;         /*           0 .. 65535         */
/* PLATFORM018: */
typedef int32_t    sint32;         /* -2147483648 .. +2147483647   */
/* PLATFORM015: */
typedef uint32_t   uint32;         /*           0 .. 4294967295    */

/* Standard Float Data Types */
/* ------------------------- */
/* PLATFORM041: */
typedef float   float32;
/* PLATFORM042: */
typedef double  float64;


/* Boolean Data Type */
/* ----------------- */
/* PLATFORM060: */
typedef unsigned char   boolean;

/* Optimized Integer Data Types */
/* ---------------------------- */
/* PLATFORM023: */
typedef int_fast8_t     sint8_least;    /* At least 7 bit + 1 bit sign  */
/* PLATFORM020: */
typedef uint_fast8_t    uint8_least;    /* At least 8 bit               */
/* PLATFORM024: */
typedef int_fast16_t    sint16_least;   /* At least 15 bit + 1 bit sign */
/* PLATFORM021: */
typedef uint_fast16_t   uint16_least;   /* At least 16 bit              */
/* PLATFORM025: */
typedef int_fast32_t    sint32_least;   /* At least 31 bit + 1 bit sign */
/* PLATFORM022: */
typedef uint_fast32_t   uint32_least;   /* At least 32 bit              */


/* PLATFORM_TYPES_H */
#endif
