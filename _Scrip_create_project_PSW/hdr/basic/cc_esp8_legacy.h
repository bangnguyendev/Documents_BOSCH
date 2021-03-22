/******************************************************************************/
/* [HISTORY_GENERATOR_V1]                                                     */
/******************************************************************************/
/* THIS IS TOOL GENERATED DATA, DO NOT CHANGE !!!                             */
/******************************************************************************/
/* [COPYRIGHT]                                                                */
/* Robert Bosch GmbH reserves all rights even in the event of industrial      */
/* property rights. We reserve all rights of disposal such as copying and     */
/* passing on to third parties.                                               */
/* [COPYRIGHT_END]                                                            */
/******************************************************************************/
/* [HISTORY]                                                                  */
/* -------------------------------------------------------------------------- */
/* [FILE_BASIC_INFO]                                                          */
/* -------------------------------------------------------------------------- */
/* File name     : cc_esp8_legacy.h                                           */
/* -------------------------------------------------------------------------- */
/* Description   : C base library, keywords and type definitions needed for   */
/*                 legacy ESP8 code                                           */
/* Note          :                                                            */
/* -------------------------------------------------------------------------- */
/* [FILE_BASIC_INFO_END]                                                      */
/******************************************************************************/
/* [FILE_CHANGE_ENTRIES]                                                      */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.6                                                        */
/* Checked in by : yig2si                                                     */
/* Check in date : 01.12.2011 15:17:23                                        */
/*                 12/01/2011 15:17:23                                        */
/* Changes       : Added Modificationf for QA/C 7.2                           */
/* Reasons       : Introduction of QA/C 7.2                                   */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.5                                                        */
/* Checked in by : zlm2si                                                     */
/* Check in date : 14.05.2008 16:39:04                                        */
/*                 05/14/2008 16:39:04                                        */
/* Changes       : Removed CONSTafter mainstream group replaced CONST with    */
/*                 const                                                      */
/* Reasons       : conflicting with AutoSAR CONST definition. CSCRM00080163   */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.4                                                        */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 31.01.2008 16:09:02                                        */
/*                 01/31/2008 16:09:02                                        */
/* Changes       : Removed sanity check because of preprocessor macro rules   */
/*                 checked by tools                                           */
/* Reasons       : Compiler error                                             */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.3                                                        */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 31.01.2008 10:42:48                                        */
/*                 01/31/2008 10:42:48                                        */
/* Changes       : Add sanity check for ULONG_MAX                             */
/*                 Define local types (LUBYTE) to be uint32_t or int32_t      */
/* Reasons       : correctness                                                */
/*                 consistency with definition of ULONG/SLONG                 */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2                                                        */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 23.08.2007 18:12:32                                        */
/*                 08/23/2007 18:12:32                                        */
/* Changes       : Added limits                                               */
/*                 Adjusted to Qac                                            */
/* Reasons       : Review findings                                            */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.1                                                        */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 21.05.2007 18:04:02                                        */
/*                 05/21/2007 18:04:02                                        */
/* Changes       : SLONG, ULONG, TRUE defined as in ESP8                      */
/* Reasons       : Review feedback                                            */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.0                                                        */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 16.05.2007 08:49:02                                        */
/*                 05/16/2007 08:49:02                                        */
/* Changes       : Initial revision                                           */
/* Reasons       :                                                            */
/* -------------------------------------------------------------------------- */
/* [FILE_CHANGE_ENTRIES_END]                                                  */
/* -------------------------------------------------------------------------- */
/* [HISTORY_END]                                                              */
/******************************************************************************/
/* [HISTORY_GENERATOR_V1_END]                                                 */
/******************************************************************************/

/* FIXME: The following violates ANSI by defining an identifier starting
   with underscores.  Without it, the current GenProDB cannot deal with
   it. */
#ifndef __CC_ESP8_LEGACY_H_
#define __CC_ESP8_LEGACY_H_
/* #ifndef CC_GUARD_CC_ESP8_LEGACY_H */
/* #define CC_GUARD_CC_ESP8_LEGACY_H */

/****************************************************************************/
/* SYSTEM_INFO:                                                             */
/* SYSTEM_INFO_END:                                                         */
/****************************************************************************/


#include "CC_STDINT.H"
#include "CC_LIMITS.H"
#include "CC_STDDEF.H"


/* ESP8 keyword redefinitions. Do not use for new code. */

/* ----------------------------------------------------------------------- */
/* QAC|DEV 0072: keywords in macros                                        */
/* ----------------------------------------------------------------------- */
/* ----------------------------------------------------------------------- */
/* QAC|DEV 0073: types in macros                                           */
/* ----------------------------------------------------------------------- */

#ifdef QAC
   #pragma PRQA_MESSAGES_OFF 3413
   #pragma PRQA_MESSAGES_OFF 3460
   #pragma PRQA_MESSAGES_OFF 3461
#endif

/* NULL provided by <stddef.h> imported via "cc_stddef.h" */
#define INLINE inline
#define ASM(a) asm(a)
#define SIGNED signed

#define EXTCONST extern const
#define EXTERN extern
#define EXTFUNC extern
#define EXTVOL extern volatile
#define LOCFUNC static
#define STATIC static


/* ESP8 fixed-width and other types. Do not use for new code */

typedef uint8_t BOOL;
typedef BOOL B;
typedef BOOL *PBOOL;
typedef const BOOL* const CPCBOOL;

typedef uint8_t CHAR;
typedef CHAR C;
typedef CHAR *PCHAR;
typedef const CHAR* const CPCCHAR;

typedef uint8_t UBYTE;
typedef UBYTE UB;
typedef UBYTE *PUBYTE;
typedef const UBYTE* const CPCUBYTE;
#define UBYTE_MAX UINT8_MAX

typedef int8_t SBYTE;
typedef SBYTE SB;
typedef SBYTE *PSBYTE;
typedef const SBYTE* const CPCSBYTE;
#define SBYTE_MIN INT8_MIN
#define SBYTE_MAX INT8_MAX

typedef uint16_t UWORD;
typedef UWORD UW;
typedef UWORD *PUWORD;
typedef const UWORD* const CPCUWORD;
#define UWORD_MAX UINT16_MAX

typedef int16_t SWORD;
typedef SWORD SW;
typedef SWORD *PSWORD;
typedef const SWORD* const CPCSWORD;
#define SWORD_MIN INT16_MIN
#define SWORD_MAX INT16_MAX

/* In ESP8, ULONG was an unsigned long, whereas here it may
 * either be an unsigned int or an unsigned long.  I have 
 * finally chosen to use uint32_t and accept that the 
 * effective definition might change because of the 
 * following reasons: (i) We want to keep this file for some 
 * time, and this will not be portable if we use unsigned 
 * long. (ii) If there are problems with the transition from 
 * long to int then we would rather deal with them now than 
 * in a years time when no-one is aware of the fact that 
 * we have changed this.
 */
typedef uint32_t ULONG;
typedef ULONG UL;
typedef ULONG *PULONG;
typedef const ULONG* const CPCULONG;
/* ULONG_MAX already defined by <limits.h>, but with different
   semantics (unsigned long is *at least* 32 bits long, whereas
   ULONG is defined to be exactly 32 bits. Today, our compilers
   all have 32 bit longs.  This might change, however. */ 

/* The following check leads to a scanner error and aborts the 
 * build.  FIXME: Switch it on as soon as possible. */

/* #if ULONG_MAX != UINT32_MAX */
/* #  error Specification of ESP8 limit for ULONG violated */
/* #endif */

typedef int32_t SLONG;
typedef SLONG SL;
typedef SLONG *PSLONG;
typedef const SLONG* const CPCSLONG;
#define SLONG_MIN INT32_MIN
#define SLONG_MAX INT32_MAX


/* The intuitively more correct typedef void VOID; does not 
 * work in C++. 
 */
#define VOID void
typedef VOID V;
typedef VOID *PVOID;
typedef const VOID* const CPCVOID;

typedef float FLOAT;
typedef FLOAT F;
typedef FLOAT *PFLOAT;
typedef const FLOAT* const CPCFLOAT;

typedef double DOUBLE;
typedef DOUBLE D;
typedef DOUBLE *PDOUBLE;
typedef const DOUBLE* const CPCDOUBLE;


/* The local types were longs in ESP8 but I have chosen to 
 * make them (u)int32_t here here because of the same reasons that I 
 * have used uint32_t for U/SLONG above. */
typedef uint32_t LBOOL;
typedef LBOOL LB;

typedef uint32_t LUBYTE;
typedef LUBYTE LUB;

typedef int32_t LSBYTE;
typedef LSBYTE LSB;

typedef uint32_t LUWORD;
typedef LUWORD LUW;

typedef int32_t LSWORD;
typedef LSWORD LSW;

typedef uint32_t LULONG;
typedef LULONG LUL;

typedef int32_t LSLONG;
typedef LSLONG LSL;


/* ESP8: definition of TRUE and FALSE. */

/** Expands to 1, can be used as the value in a return statement
 * to document that the return value is meant to represent the 
 * truth value. Do NOT use this constant to test for truth of
 * a logical expression, i.e. do NOT write 
 *    if (expression == TRUE)... 
 * Instead write 
 *    if (expression)... 
 */
#define TRUE (!FALSE)

/** Expands to 0, can be used as the value in a return statement
 * to document that the return value is meant to represent the 
 * falsity value. Do NOT use this constant to test for falsity of
 * a logical expression, i.e. do NOT write 
 *    if (expression == FALSE)... 
 * Instead write 
 *    if (!expression)... .
 */
#define FALSE 0


#ifdef QAC
   #pragma PRQA_MESSAGES_ON 3413
   #pragma PRQA_MESSAGES_ON 3460
   #pragma PRQA_MESSAGES_ON 3461
#endif


#endif
