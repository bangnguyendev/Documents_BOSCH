#ifndef CC_ASSERT_H__
#define CC_ASSERT_H__
#endif /* End of multiple include protection */
/* -------------------------------------------------------------------------- */
/* QAC|DEV 0110: No include protection possible for "assert" header           */
/* -------------------------------------------------------------------------- */
/* This file cannot be protected by include protection.  Otherwise            */
/* it would not be possible to switch assert on and off.                      */
/* To cheat the QA/C tool a pseudo include protection is used.                */
/* -------------------------------------------------------------------------- */
#ifdef __QAC__
  #pragma PRQA_MESSAGES_OFF 883
#endif

/**
 * @ingroup RB_CBaseLib
 * @{
 *
 * \file
 * \brief Definition of assert
 *
 * ANSI C compliant definition of assert() macro.
 *
 * \copyright
 * Robert Bosch GmbH reserves all rights even in the event of industrial property rights.
 * We reserve all rights of disposal such as copying and passing on to third parties.
 */

#include "RB_CBaseLib_Config.h"

#if CC_INCLUDE_STD_ASSERT || (defined __QAC__)
  #include <assert.h>
#else

/* TODO: move to own file and adapt to Greenhills compiler */
#if 0
#  if CC_COMPILER_IS_TMS470

#    ifndef __CC_ASSERT_H_CURPC_
#      define __CC_ASSERT_H_CURPC_

       /* Build-in TMS470 compiler functionality: get current
        * program counter */
       void* __curpc(void);
#    endif

#  endif
#endif /* #if 0 */

#  undef assert

// GHS is non C99 mode does not know __func__, but knowns __FUNCTION__
#ifndef __func__
  #define __func__ __FUNCTION__
#endif

#  ifdef NDEBUG
#    define assert(ignore) ((void)0)
#  else

#    include "cc_assert_failure_handling.h"

#    if CC_ASSERT_FAILURE_HANDLING_WITH_PROGRAM_COUNTER

#      define assert(expr) \
              ((void)((expr)||(cc_assert_handle_failure(__curpc(),__LINE__), 0)))
#    else

#      define assert(expr) \
              ((void)((expr)||(cc_assert_handle_failure(#expr,__FILE__,__func__,__LINE__), 0)))
#    endif

#  endif

#endif


/* Some of our compilers have not yet the feature static-assert build-in */
#include "cc_static_assert.h"

#ifndef __cplusplus
  /* C++ keyword is static_assert, C keyword is _Static_assert */
  /* C11 standard describes to have static_assert as macro in assert.h which expands to _Static_assert */
  #undef  static_assert
  #define static_assert _Static_assert
#endif


#ifdef __QAC__
  #pragma PRQA_MESSAGES_ON 883
#endif


/** @} */
/* End ingroup RB_CBaseLib */
