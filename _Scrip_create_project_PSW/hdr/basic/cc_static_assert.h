#ifndef CC_STATIC_ASSERT_H__
#define CC_STATIC_ASSERT_H__

/**
 * @ingroup RB_CBaseLib
 * @{
 *
 * \file
 * \brief Provide static_assert() for compile time assertion
 *
 * Provide compile time assertion macro #static_assert() from C11 and C++11 standards:
 *   - C11:   ISO/IEC 9899:2011
 *   - C++11: ISO/IEC 14882:2011
 *
 * \copyright
 * Robert Bosch GmbH reserves all rights even in the event of industrial property rights.
 * We reserve all rights of disposal such as copying and passing on to third parties.
 */


/**
\brief Compile time assertion

Compile time assertions are checked by the compiler at compile time if the given
expression can be evaluated at compile time.
Compared to preprocessor sanity checks with #if and #error also C constructs can be
used. Preprocessor can only use preprocessor constants.

C11 introduced the new keyword \c _Static_assert. The header \c assert.h contains the macro
\c static_assert which expands to \c _Static_assert.
C++11 introduced the new keyword \c static_assert.
So \c static_assert can be used as generic name for C and C++.

The implementation provided by this header realizes the C11 functional range. The C++ version can
also handle compile time assertion of templates.
.
\code

static_assert ( constant-expression , string-literal )

\endcode
.
The \c static_assert is a declaration. The constant expression shall compare unequal to 0.
Otherwise, the constraint is violated and the implementation shall produce a diagnostic message
that includes the text of the string literal.

\par Example:
.
The \c static_assert can be used inside of functions as well as outside of functions (file scope).\n
.
\n<b>Anywhere in a header file:</b>\n
.
\code

typedef struct
{
 uint32_t data1;
 uint8_t  data2;
}
MyData_t;

\endcode
.
\n<b>Anywhere in a C file which uses \c MyData_t with some constraint:</b>\n
.
\code

static_assert(sizeof(MyData_t) <= 5, "MyData_t has exceeded maximum size 5");

\endcode
.
.
@param expr static assertion which shall be checked, \c 0 (false) means static assertion
            has failed, any other value means static assertion has passed
@param msg  string-literal which is displayed in case of failed static assertion
*/


/* Note:
 * Only C11 _Static_assert functional range is supported.
 * C++11 static_assert is mapped to C11 _Static_assert
 */

/* formerly used for TI TMS470 4.4.x */
/* extern unsigned char cc_static_assert_failure[!!sizeof( struct { unsigned int cc_static_assertion_failed : ( ((expr) && (msg)[0]) ? 1 : -1); } ) ] */
#include "RB_CBaseLib_Config.h"

#if (CC_COMPILER_MSVS)

  /* Attention: check of msg for being a string literal is not done */
  #define _Static_assert(expr, msg) \
            extern unsigned char cc_static_assert_failure[!!(expr)]
            
  #ifdef __cplusplus
    #define static_assert _Static_assert
  #endif
  
#elif (CC_COMPILER_GHS)

  // build-in feature of GHS (at least) since 2013.5.5 (see manual: build_v800.pdf, chapter 15: Static Assertions)
  // --- no implementation necessary here ---
  
#elif (CC_COMPILER_GCC_VERSION_4_4_x)

  // Workaround seems not to be functional for g++, further analysis necessary
  // TODO: Temporary switched off _Static_assert()
  #ifdef __cplusplus
    // Temporary solution for g++:
    // Provide also an extern declaration to avoid a semicolon (given by user) alone on one line
    #define _Static_assert(expr, msg) \
              extern unsigned char cc_static_assert_failure[1] 
  #else
    /* Attention: check of msg for being a string literal is not done */
    #define _Static_assert(expr, msg) \
              extern unsigned char cc_static_assert_failure[!!sizeof( struct { unsigned int cc_static_assertion_failed : ( (expr) ? 1 : -1); } ) ]
  #endif
            
  #ifdef __cplusplus
    #define static_assert _Static_assert
  #endif

#else // e.g. GCC 4.6.x or QAC (see QAC Compiler personalities: *.p_c)

      /* No implementation required: used GCC version 4.6.2 (or greather) has _Static_assert build-in */
  
#endif



/** @} */
/* End ingroup RB_CBaseLib */

#endif /* End of multiple include protection */
