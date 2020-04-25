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
/* File name     : cc_stddef.h                                                */
/* -------------------------------------------------------------------------- */
/* Description   : C base library for definition of ptrdiff_t, size_t, NULL,  */
/*                 and offsetof according to the standard C header            */
/*                 <stddef.h>.                                                */
/* Note          :                                                            */
/* -------------------------------------------------------------------------- */
/* [FILE_BASIC_INFO_END]                                                      */
/******************************************************************************/
/* [FILE_CHANGE_ENTRIES]                                                      */
/* -------------------------------------------------------------------------- */
/* Revision      : 2.2                                                        */
/* Checked in by : aup4kor                                                    */
/* Check in date : 26.12.2012 12:29:36                                        */
/*                 12/26/2012 12:29:36                                        */
/* Changes       : Modified file inclusion as "cc_compilation_target.h"       */
/* Reasons       : to remove compilation error in BSW NOV Build               */
/* -------------------------------------------------------------------------- */
/* Revision      : 2.1                                                        */
/* Checked in by : yig2si                                                     */
/* Check in date : 01.12.2011 15:19:08                                        */
/*                 12/01/2011 15:19:08                                        */
/* Changes       : Added Modificationf for QA/C 7.2                           */
/*                 Added usage of new MTC-Defines (defining used compiller)   */
/* Reasons       : Introduction of QA/C 7.2                                   */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2.1.10                                                   */
/* Checked in by : frg2abt                                                    */
/* Check in date : 24.10.2008 16:06:17                                        */
/*                 10/24/2008 16:06:17                                        */
/* Changes       : Suppressed QAC warning against usage of __INTADR__ in      */
/*                 TMS470 compiler specific implementation of offsetof macro  */
/* Reasons       : QAC compatibility                                          */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2.1.9                                                    */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 21.07.2008 15:31:42                                        */
/*                 07/21/2008 15:31:42                                        */
/* Changes       : Fixed typo                                                 */
/* Reasons       : Did not  compile with typo                                 */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2.1.8                                                    */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 21.07.2008 15:06:56                                        */
/*                 07/21/2008 15:06:56                                        */
/* Changes       : Changed to cc_compilation_target.h                         */
/* Reasons       : Refactoring, because the distinction would otherwise be    */
/*                 implemented redundantly in a growing number of other       */
/*                 modules                                                    */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2.1.7                                                    */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 13.02.2008 15:49:57                                        */
/*                 02/13/2008 15:49:57                                        */
/* Changes       : Comment                                                    */
/* Reasons       : Reflect changes in QAC compiler personality and makebox    */
/*                 scripting for QAC                                          */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2.1.6                                                    */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 13.02.2008 13:32:23                                        */
/*                 02/13/2008 13:32:23                                        */
/* Changes       : Removed #ifdef QAC around definition of size_t and         */
/*                 ptrdiff_t                                                  */
/* Reasons       : QAC reported errors for definitions that used these types  */
/*                 (e.g. prototype of memcpy)                                 */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2.1.5                                                    */
/* Checked in by : hmt2si                                                     */
/* Check in date : 30.10.2007 09:52:38                                        */
/*                 10/30/2007 09:52:38                                        */
/* Changes       : added QAC deviation for macro offsetof                     */
/* Reasons       : MISRA Warnings                                             */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2.1.4                                                    */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 25.10.2007 09:48:43                                        */
/*                 10/25/2007 09:48:43                                        */
/* Changes       : Rearranged tests for different build chains                */
/* Reasons       : Distinction between different compilers does not work      */
/*                 reliably                                                   */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2.1.3                                                    */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 24.10.2007 13:24:53                                        */
/*                 10/24/2007 13:24:53                                        */
/* Changes       : Corrected bug in switches around ptrdiff_t                 */
/* Reasons       : Was wrong                                                  */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2.1.2                                                    */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 24.10.2007 13:13:44                                        */
/*                 10/24/2007 13:13:44                                        */
/* Changes       : Put ptrdiff_t and size_t under #ifdef QAC                  */
/* Reasons       : The Makebox invocation of QAC bails out when it discovers  */
/*                 a syntax error (the gui still works perfectly well), and a */
/*                 difference in the defined and the assumed ptrdiff_t is     */
/*                 regarded as a syntax error                                 */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2.1.1                                                    */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 24.10.2007 11:07:47                                        */
/*                 10/24/2007 11:07:47                                        */
/* Changes       : Removed distinction for different compilers (portability   */
/*                 measure).                                                  */
/* Reasons       : The macros for differentiating between compilers have been */
/*                 used for other purposes and cannot be trusted (legacy).    */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2.1.0                                                    */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 13.09.2007 11:01:05                                        */
/*                 09/13/2007 11:01:05                                        */
/* Changes       : Instrumentation for c base lib integration test            */
/* Reasons       : c base lib integration test                                */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2                                                        */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 23.08.2007 18:18:34                                        */
/*                 08/23/2007 18:18:34                                        */
/* Changes       : Include standard header                                    */
/*                 adjust include protection to play with MTC                 */
/* Reasons       : Replacing previous revision (which worked for old and new  */
/*                 compiler but was not portable)                             */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.1                                                        */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 04.07.2007 17:13:09                                        */
/*                 07/04/2007 17:13:09                                        */
/* Changes       : Corrected assumptions for integers                         */
/* Reasons       : Previous revision was wrong                                */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.0                                                        */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 16.05.2007 08:55:37                                        */
/*                 05/16/2007 08:55:37                                        */
/* Changes       : Initial revision                                           */
/* Reasons       :                                                            */
/* -------------------------------------------------------------------------- */
/* [FILE_CHANGE_ENTRIES_END]                                                  */
/* -------------------------------------------------------------------------- */
/* [HISTORY_END]                                                              */
/******************************************************************************/
/* [HISTORY_GENERATOR_V1_END]                                                 */
/******************************************************************************/

#ifndef __CC_STDDEF_H_
#define __CC_STDDEF_H_


/* FIXME: The previous violates ANSI by defining an identifier starting
   with underscores.  Without it, the current GenProDB cannot deal with
   it. Replace it with the following as soon as possible. 
 */

/* #ifndef CC_GUARD_CC_STDDEF_H */
/* #define CC_GUARD_CC_STDDEF_H */



/* FIXME: It was decided that instead of including the TI headers, an
   implementation specificatlly for the TMS470 is to be provided (cue: 
   message 195 as error or warning). This is locked and needs to be
   replaced by the TI headers or verification means have to be defined.

   Since at least RTRT for HSW and QAC are made to believe they are
   a TMS470 compiler, the distinction between different compilers does 
   not work. Temporarily in order to get BL 50 out, we provide an
   80% hack.
 */
#  include "cc_compilation_target.h"
#  if CC_ABLE_TO_INCLUDE_STD_HEADERS || defined(QAC)
#    include <stddef.h>
#  else
     /* So this is probably TMS470 or something else, including QAC */

     typedef  int ptrdiff_t;
     typedef  unsigned size_t;


#	 ifdef NULL

     	 enum nulltest{testmember=1/(NULL==0)};
     	 /*since NULL allready is defined we need to test weather it also i defined as 0
     	  *or as another MACRO, that finally is defined as 0
     	  *The test above stopps the compiller (compiller error) if NULL is defined different from 0
     	  */
#	 else

#  		define NULL 0

#	 endif


#    define offsetof(_type, _member) \
               ((size_t)__INTADDR__(&(((_type *)0)->_member)))


#  endif

#endif
