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
/* File name     : cc_limits.h                                                */
/* -------------------------------------------------------------------------- */
/* Description   : C base library, implementation defined limits as defined   */
/*                 in C standard header <stdint.h>                            */
/* Note          :                                                            */
/* -------------------------------------------------------------------------- */
/* [FILE_BASIC_INFO_END]                                                      */
/******************************************************************************/
/* [FILE_CHANGE_ENTRIES]                                                      */
/* -------------------------------------------------------------------------- */
/* Revision      : 2.1                                                        */
/* Checked in by : yig2si                                                     */
/* Check in date : 01.12.2011 15:18:32                                        */
/*                 12/01/2011 15:18:32                                        */
/* Changes       : Added Modificationf for QA/C 7.2                           */
/*                 Added usage of new MTC-Defines (defining used compiller)   */
/* Reasons       : Introduction of QA/C 7.2                                   */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2.1.5                                                    */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 21.07.2008 15:31:33                                        */
/*                 07/21/2008 15:31:33                                        */
/* Changes       : Fixed typo                                                 */
/* Reasons       : Did not  compile with typo                                 */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2.1.4                                                    */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 21.07.2008 15:05:00                                        */
/*                 07/21/2008 15:05:00                                        */
/* Changes       : Changed to cc_compilation_target.h                         */
/* Reasons       : Refactoring, because the distinction would otherwise be    */
/*                 implemented redundantly in a growing number of other       */
/*                 modules                                                    */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2.1.3                                                    */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 21.07.2008 15:03:55                                        */
/*                 07/21/2008 15:03:55                                        */
/* Changes       : Changed to cc_compilation_target.h                         */
/* Reasons       : Refactoring, because the distinction would otherwise be    */
/*                 implemented redundantly in a growing number of other       */
/*                 modules                                                    */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2.1.2                                                    */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 25.10.2007 09:47:58                                        */
/*                 10/25/2007 09:47:58                                        */
/* Changes       : Rearranged conditions.                                     */
/* Reasons       : Cannot reliably decide between different compilers         */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2.1.1                                                    */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 24.10.2007 11:07:25                                        */
/*                 10/24/2007 11:07:25                                        */
/* Changes       : Removed distinction for different compilers (portability   */
/*                 measure).                                                  */
/* Reasons       : The macros for differentiating between compilers have been */
/*                 used for other purposes and cannot be trusted (legacy).    */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2.1.0                                                    */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 13.09.2007 11:00:50                                        */
/*                 09/13/2007 11:00:50                                        */
/* Changes       : Instrumentation for c base lib integration test            */
/* Reasons       : c base lib integration test                                */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2                                                        */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 23.08.2007 18:18:13                                        */
/*                 08/23/2007 18:18:13                                        */
/* Changes       : Include standard header                                    */
/*                 adjust include protection to play with MTC                 */
/* Reasons       : Replacing previous revision (which worked for old and new  */
/*                 compiler but was not portable)                             */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.1                                                        */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 04.07.2007 17:12:54                                        */
/*                 07/04/2007 17:12:54                                        */
/* Changes       : Corrected assumptions for integers                         */
/* Reasons       : Previous revision was wrong                                */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.0                                                        */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 16.05.2007 08:52:48                                        */
/*                 05/16/2007 08:52:48                                        */
/* Changes       : Initial revision                                           */
/* Reasons       :                                                            */
/* -------------------------------------------------------------------------- */
/* [FILE_CHANGE_ENTRIES_END]                                                  */
/* -------------------------------------------------------------------------- */
/* [HISTORY_END]                                                              */
/******************************************************************************/
/* [HISTORY_GENERATOR_V1_END]                                                 */
/******************************************************************************/

/** \file 
 * These definitions are replacements for the ANSI C header <limits.h>. 
 * Not all macros are supported.  See the documentation in 
 * c_baselib_manual.doc.
 *
 * There is nothing that can be tested.
 */

#ifndef __CC_LIMITS_H_
#define __CC_LIMITS_H_



/* FIXME: The previous violates ANSI by defining an identifier starting
   with underscores.  Without it, the current GenProDB cannot deal with
   it. Replace by the following as soon as possible. */



/* FIXME: It was decided that instead of including the TI headers, an
   implementation specificatlly for the TMS470 is to be provided (cue: 
   message 195 as error or warning). This is locked and needs to be
   replaced by the TI headers or verification means have to be defined.

   Since at least RTRT for HSW and QAC are made to believe they are
   a TMS470 compiler, the distinction between different compilers does 
   not work. Temporarily in order to get BL 50 out, we provide an
   80% hack.
 */
#  include "CC_COMPILATION_TARGET.H"
#  if CC_ABLE_TO_INCLUDE_STD_HEADERS || defined(QAC)
#    include <limits.h>

#    if CC_COMPILER_IS_VISUAL_C_6_0
       /* MSVC does not have long long but we use it. */
#      define LLONG_MIN (-LLONG_MAX - 1)
#      define LLONG_MAX 0x7fffffffffffffffLL
#      define ULLONG_MAX 0xffffffffffffffffULL
#    endif

#  else     
     /* So this is probably TMS470 or something else, including QAC */

#    define CHAR_BIT 8

#    define SCHAR_MIN (-SCHAR_MAX - 1)
#    define SCHAR_MAX 0x7f
#    define UCHAR_MAX 0xff

#    define CHAR_MIN 0
#    define CHAR_MAX UCHAR_MAX

#    define SHRT_MIN (-SHRT_MAX - 1)
#    define SHRT_MAX 0x7fff
#    define USHRT_MAX 0xffff

#    define INT_MIN (-INT_MAX - 1)
#    define INT_MAX 0x7fffffff
#    define UINT_MAX 0xffffffffU

#    define LONG_MIN (-LONG_MAX - 1)
#    define LONG_MAX 0x7fffffff
#    define ULONG_MAX 0xffffffffU

#    define LLONG_MIN (-LLONG_MAX - 1)
#    define LLONG_MAX 0x7fffffffffffffffLL
#    define ULLONG_MAX 0xffffffffffffffffULL

#  endif

#endif

