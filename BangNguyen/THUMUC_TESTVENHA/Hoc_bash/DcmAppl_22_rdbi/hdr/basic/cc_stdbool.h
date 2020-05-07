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
/* File name     : cc_stdbool.h                                               */
/* -------------------------------------------------------------------------- */
/* Description   : This header substitudes stdbool.h in the C Standard        */
/*                 Library for the C programming language contains four       */
/*                 macros.       stdbool.h was introduced in C99 and defined  */
/*                 in IEEE Std 1003.1-2001                                    */
/* Note          :                                                            */
/* -------------------------------------------------------------------------- */
/* [FILE_BASIC_INFO_END]                                                      */
/******************************************************************************/
/* [FILE_CHANGE_ENTRIES]                                                      */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.7                                                        */
/* Checked in by : krb2si                                                     */
/* Check in date : 31.01.2012 15:53:40                                        */
/*                 01/31/2012 15:53:40                                        */
/* Changes       : For QAC run do not include stdbool.h but define the bool   */
/*                 types                                                      */
/* Reasons       : QAC tool does not come with a standard header stdbool.h    */
/*                                                                            */
/* CSCRM00385491 : Adaptation of C_Baselib for QAC analysis run               */
/*               : CSCRM00385490 : QAC analysis throws syntax errors          */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.6                                                        */
/* Checked in by : yig2si                                                     */
/* Check in date : 01.12.2011 15:18:49                                        */
/*                 12/01/2011 15:18:49                                        */
/* Changes       : Added Modificationf for QA/C 7.2                           */
/*                 Added usage of new MTC-Defines (defining used compiller)   */
/* Reasons       : Introduction of QA/C 7.2                                   */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.5                                                        */
/* Checked in by : yig2si                                                     */
/* Check in date : 16.08.2011 14:00:50                                        */
/*                 08/16/2011 14:00:50                                        */
/* Changes       : Resolved Findings from Review of version 3.0               */
/* Reasons       : Findings of version 3.0                                    */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.4                                                        */
/* Checked in by : yig2si                                                     */
/* Check in date : 07.06.2011 08:04:22                                        */
/*                 06/07/2011 08:04:22                                        */
/* Changes       : Usage of the new Defines for the used compiller provided   */
/*                 by MTC 9.8.                                                */
/* Reasons       : Avilability of the new defines makes a simplification of   */
/*                 the file possible                                          */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.3                                                        */
/* Checked in by : yig2si                                                     */
/* Check in date : 27.04.2011 13:55:39                                        */
/*                 04/27/2011 13:55:39                                        */
/* Changes       : Beautified test for compillerswitches                      */
/* Reasons       : Code Quallity                                              */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2                                                        */
/* Checked in by : yig2si                                                     */
/* Check in date : 26.04.2011 10:47:55                                        */
/*                 04/26/2011 10:47:55                                        */
/* Changes       : added unique definition for "long" in simulation and real  */
/*                 target                                                     */
/*                 added exclusion of definition for bool in simulations      */
/*                 (since this is s build in type in visual stuido)           */
/* Reasons       : Problems to get the simulations to run                     */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.1                                                        */
/* Checked in by : yig2si                                                     */
/* Check in date : 26.08.2010 08:04:35                                        */
/*                 08/26/2010 08:04:35                                        */
/* Changes       : Fixed wrong definition of false                            */
/* Reasons       : Bugfix                                                     */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.0                                                        */
/* Checked in by : yig2si                                                     */
/* Check in date : 05.08.2010 15:25:58                                        */
/*                 08/05/2010 15:25:58                                        */
/* Changes       : Initial Version                                            */
/* Reasons       : Datatype "bool" is required for compilation in combination */
/*                 with the usage of ASCET6                                   */
/* -------------------------------------------------------------------------- */
/* [FILE_CHANGE_ENTRIES_END]                                                  */
/* -------------------------------------------------------------------------- */
/* [HISTORY_END]                                                              */
/******************************************************************************/
/* [HISTORY_GENERATOR_V1_END]                                                 */
/******************************************************************************/
/***********************************************************************/
/*                                                                     */
/* This header substitudes stdbool.h in the C Standard Library for     */
/* the C programming language contains four macros.                    */
/* stdbool.h was introduced in C99 and defined in IEEE Std 1003.1-2001 */
/* KEEP IN MIND: our bool does not exaclty behave as the bool of the   */
/* stdbool.h (our bool can be set to a value different than 0 or 1)    */
/*                                                                     */
/***********************************************************************/

#ifndef __CC_STDBOOL_H_
#define __CC_STDBOOL_H_
#include "Std_Types.h"

/* FIXME: The previous violates ANSI by defining an identifier starting
   with underscores.  Without it, the current GenProDB cannot deal with
   it. Replace it with the following as soon as possible.
 */

/* FIXME: It was decided that instead of including the TI headers, an
   implementation specifically for the TMS470 is to be provided (cue:
   message 195 as error or warning). This is locked and needs to be
   replaced by the TI headers or verification means have to be defined.

   Since at least RTRT for HSW and QAC are made to believe they are
   a TMS470 compiler, the distinction between different compilers does
   not work. Temporarily in order to get BL 50 out, we provide an
   80% hack.
 */
#  include CC_COMPILATION_TARGET_H
#  if CC_ABLE_TO_INCLUDE_STD_HEADERS && (!defined(QAC))
#    if ( defined(IS_VS6_COMPILER) || defined(IS_VS2008_COMPILER)  || defined(IS_VS2010_COMPILER))
#        /*Nothing to include VS has bool as built in type*/
#    else
#       include <stdbool.h>
#    endif
#  else
     /* TMS470 and others (including QAC) without
      *            a)stdbool abilable
      *            b)bool as build in type */

     /* we define bool as uint8 and not as _Bool as in the standard (C99) because  */
     /* ASCET handles bool as uint8, so we can save resources.                     */


/* -------------------------------------------------------------------------- */
/* QAC|DEV 0113: Redefinition of macros from stdbool.h                        */
/* -------------------------------------------------------------------------- */
/* The QA/C tool does not provide a stdbool.h, and for TI compiler we also    */
/* do not use the stdbool.h, we have ourselfs to define the following macros: */
/* bool, true, false, __bool_true_false_are_defined                           */
/* This rises the QA/C warning 4600                                           */
/* -------------------------------------------------------------------------- */
#	ifdef QAC
#		pragma PRQA_MESSAGES_OFF 4600
#	endif


#    define bool uint8

#    define true 1
#    define false 0
#    define __bool_true_false_are_defined 1

#	ifdef QAC
#		pragma PRQA_MESSAGES_ON 4600
#	endif


#  endif

#endif
