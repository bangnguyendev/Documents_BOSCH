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
/* File name     : cc_string.h                                                */
/* -------------------------------------------------------------------------- */
/* Description   : C base library for memory operations according to the      */
/*                 standard header <string.h>.                                */
/* Note          :                                                            */
/* -------------------------------------------------------------------------- */
/* [FILE_BASIC_INFO_END]                                                      */
/******************************************************************************/
/* [FILE_CHANGE_ENTRIES]                                                      */
/* -------------------------------------------------------------------------- */
/* Revision      : 2.1.74.1                                                   */
/* Checked in by : aup4kor                                                    */
/* Check in date : 26.12.2012 12:28:19                                        */
/*                 12/26/2012 12:28:19                                        */
/* Changes       : Modified the file inclusions as "cc_compilation_target.h"  */
/*                 and "cc_stddef.h"                                          */
/* Reasons       : to remove compilation error in BSW NOV Build               */
/* -------------------------------------------------------------------------- */
/* Revision      : 2.1.74.0                                                   */
/* Checked in by : shh2abt                                                    */
/* Check in date : 04.06.2012 08:06:16                                        */
/*                 06/04/2012 08:06:16                                        */
/* Changes       : Standard header string.h is not available for AESIM on     */
/*                 linux                                                      */
/* Reasons       : CSCRM00405148: HSWSim/AESim simulation support             */
/* -------------------------------------------------------------------------- */
/* Revision      : 2.1                                                        */
/* Checked in by : yig2si                                                     */
/* Check in date : 01.12.2011 15:19:42                                        */
/*                 12/01/2011 15:19:42                                        */
/* Changes       : Added Modificationf for QA/C 7.2                           */
/*                 Added usage of new MTC-Defines (defining used compiller)   */
/* Reasons       : Introduction of QA/C 7.2                                   */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.3.1.5                                                    */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 21.07.2008 15:31:59                                        */
/*                 07/21/2008 15:31:59                                        */
/* Changes       : Fixed typo                                                 */
/* Reasons       : Did not  compile with typo                                 */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.3.1.4                                                    */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 21.07.2008 15:08:40                                        */
/*                 07/21/2008 15:08:40                                        */
/* Changes       : Changed to cc_compilation_target.h                         */
/* Reasons       : Refactoring, because the distinction would otherwise be    */
/*                 implemented redundantly in a growing number of other       */
/*                 modules                                                    */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.3.1.3                                                    */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 13.02.2008 13:33:27                                        */
/*                 02/13/2008 13:33:27                                        */
/* Changes       : Corrected type in non-ECU-mode                             */
/* Reasons       : previous revision was buggy and failed to compile in       */
/*                 simulation modes                                           */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.3.1.2                                                    */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 25.10.2007 09:48:52                                        */
/*                 10/25/2007 09:48:52                                        */
/* Changes       : Rearranged tests for different build chains                */
/* Reasons       : Distinction between different compilers does not work      */
/*                 reliably                                                   */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.3.1.1                                                    */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 24.10.2007 11:08:48                                        */
/*                 10/24/2007 11:08:48                                        */
/* Changes       : Removed distinction for different compilers (portability   */
/*                 measure).                                                  */
/* Reasons       : The macros for differentiating between compilers have been */
/*                 used for other purposes and cannot be trusted (legacy).    */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.3.1.0                                                    */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 13.09.2007 11:01:34                                        */
/*                 09/13/2007 11:01:34                                        */
/* Changes       : Instrumentation for c base lib integration test            */
/* Reasons       : c base lib integration test                                */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.3                                                        */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 23.08.2007 18:19:18                                        */
/*                 08/23/2007 18:19:18                                        */
/* Changes       : Include standard header                                    */
/*                 adjust include protection to play with MTC                 */
/* Reasons       : Replacing previous revision (which worked for old and new  */
/*                 compiler but was not portable)                             */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2                                                        */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 04.07.2007 17:13:37                                        */
/*                 07/04/2007 17:13:37                                        */
/* Changes       : Corrected assumptions for integers                         */
/* Reasons       : Previous revision was wrong                                */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.1                                                        */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 21.05.2007 18:05:23                                        */
/*                 05/21/2007 18:05:23                                        */
/* Changes       : Added inclusion of stddef.h to satisfy the specification   */
/* Reasons       : Review feedback                                            */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.0                                                        */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 16.05.2007 12:02:22                                        */
/*                 05/16/2007 12:02:22                                        */
/* Changes       : Initial revision                                           */
/* Reasons       :                                                            */
/* -------------------------------------------------------------------------- */
/* [FILE_CHANGE_ENTRIES_END]                                                  */
/* -------------------------------------------------------------------------- */
/* [HISTORY_END]                                                              */
/******************************************************************************/
/* [HISTORY_GENERATOR_V1_END]                                                 */
/******************************************************************************/


#ifndef __CC_STRING_H_
#  define __CC_STRING_H_

/* FIXME: The previous violates ANSI by defining an identifier starting
   with underscores.  Without it, the current GenProDB cannot deal with
   it. Replace it by the following as soon as possible. */


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
#  if (CC_ABLE_TO_INCLUDE_STD_HEADERS && !( defined(AESIM) && defined(IS_GCC_X86_64_LINUX_COMPILER) ) ) \
      || defined(QAC)
#    include <string.h>
#  else
     /* So this is probably TMS470 or something else, including QAC */

     /* For NULL and size_t */
#    include "cc_stddef.h"

     void *memcpy(void *, const void *, size_t);
     void *memset(void *, int, size_t);
     /* Memcmp is defined inline or extern depending on settings that I
        do not control. Guess: making it always external is OK
        temporarily.
      */
     int memcmp(const void *, const void *, size_t);

#  endif

#endif
