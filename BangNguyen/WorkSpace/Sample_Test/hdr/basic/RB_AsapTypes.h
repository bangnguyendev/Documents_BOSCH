#ifndef RB_ASAPTYPES_H__
#define RB_ASAPTYPES_H__

/**
 * @ingroup RB_CBaseLib
 * @{
 *
 * \file
 * \brief ASAP data types
 *
 * Necessary for transition of data from C to Ascet and back.
 *
 * \copyright
 * Robert Bosch GmbH reserves all rights even in the event of industrial property rights.
 * We reserve all rights of disposal such as copying and passing on to third parties.
 */

 
#include "cc_stdint.h" 
#include "cc_limits.h"


// ASAP data types are matching with ESP8 data types (TODO: to be checked!)

typedef uint8_t BOOL;
typedef BOOL B;

typedef uint8_t CHAR;
typedef CHAR C;

typedef uint8_t UBYTE;
typedef UBYTE UB;
#define UBYTE_MAX UINT8_MAX

typedef int8_t SBYTE;
typedef SBYTE SB;
#define SBYTE_MIN INT8_MIN
#define SBYTE_MAX INT8_MAX

typedef uint16_t UWORD;
typedef UWORD UW;
#define UWORD_MAX UINT16_MAX

typedef int16_t SWORD;
typedef SWORD SW;
#define SWORD_MIN INT16_MIN
#define SWORD_MAX INT16_MAX

// In ESP8, ULONG was an unsigned long, whereas here it is an unsigned it!
typedef uint32_t ULONG;
typedef ULONG UL;
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
#define SLONG_MIN INT32_MIN
#define SLONG_MAX INT32_MAX


/** @} */
/* End ingroup RB_CBaseLib */

#endif /* End of multiple include protection */
