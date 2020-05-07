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
/* File name     : cc_stdint.h                                                */
/* -------------------------------------------------------------------------- */
/* Description   : C base library for fixed-width integer types according to  */
/*                 the standard C header <stdint.h>                           */
/* Note          :                                                            */
/* -------------------------------------------------------------------------- */
/* [FILE_BASIC_INFO_END]                                                      */
/******************************************************************************/
/* [FILE_CHANGE_ENTRIES]                                                      */
/* -------------------------------------------------------------------------- */
/* Revision      : 2.4.2.3.74.0                                               */
/* Checked in by : shh2abt                                                    */
/* Check in date : 04.06.2012 08:08:31                                        */
/*                 06/04/2012 08:08:31                                        */
/* Changes       : Activated C99 data types also for GNU GCC compiler         */
/* Reasons       : CSCRM00405148: HSWSim/AESim simulation support             */
/* -------------------------------------------------------------------------- */
/* Revision      : 2.4.2.3                                                    */
/* Checked in by : yig2si                                                     */
/* Check in date : 08.05.2012 10:46:21                                        */
/*                 05/08/2012 10:46:21                                        */
/* Changes       : Added missing definition of uint64 defines for Visual      */
/*                 Studio2008 and 2010.                                       */
/* Reasons       : Missing definition of uint64 defines for Visual Studio2008 */
/*                 and 2010.                                                  */
/* -------------------------------------------------------------------------- */
/* Revision      : 2.4.2.2                                                    */
/* Checked in by : yig2si                                                     */
/* Check in date : 05.04.2012 14:21:39                                        */
/*                 04/05/2012 14:21:39                                        */
/* Changes       : Defined uint32 back to int.                                */
/*                 PSW is now running on uint32 on int.                       */
/*                 ASW is now running on uint32 on long. (defined by ASCET.h) */
/*                 Situation is now the same as with ASCET5.                  */
/*                                                                            */
/*                 Siumlation (OMCL) again will not work.                     */
/*                 Distinguish must be done in ASCET.h.                       */
/* Reasons       : By the introduction of ASCET6 a cc_stdbool was introduced. */
/*                 This introduced the C_Baselib to ASCET.h making a uniform  */
/*                 definition of all types (including uint32) necessary.      */
/*                                                                            */
/*                 As feedback from HSW this leads to additional resource     */
/*                 consupmtion since fro the unifrom decission the larger     */
/*                 type was used.                                             */
/*                                                                            */
/*                 This change is reverted with versions of the ASCET.h       */
/*                 derived from this template.                                */
/*                                                                            */
/*                 This also enforces ASCET.h ot bring now its own definition */
/*                 of bool and consider the specific problems with the        */
/*                 Simulation (OMCL)                                          */
/* -------------------------------------------------------------------------- */
/* Revision      : 2.4.2.1                                                    */
/* Checked in by : yig2si                                                     */
/* Check in date : 14.03.2012 11:39:33                                        */
/*                 03/14/2012 11:39:33                                        */
/* Changes       : Solved type definition collision in DSW_ONLY build         */
/* Reasons       : Type definition collision in DSW_ONLY build                */
/* -------------------------------------------------------------------------- */
/* Revision      : 2.4.2.0                                                    */
/* Checked in by : yig2si                                                     */
/* Check in date : 13.03.2012 09:23:18                                        */
/*                 03/13/2012 09:23:18                                        */
/* Changes       : Changed the Kollision of the type definitions in the       */
/*                 DNCSIM-Build                                               */
/* Reasons       : DNC-Build did not work                                     */
/* -------------------------------------------------------------------------- */
/* Revision      : 2.4                                                        */
/* Checked in by : krb2si                                                     */
/* Check in date : 31.01.2012 15:54:15                                        */
/*                 01/31/2012 15:54:15                                        */
/* Changes       : For QAC run define the types uint64_t and int64_t          */
/* Reasons       : syntax errors during QAC run                               */
/*                                                                            */
/* CSCRM00385491 : Adaptation of C_Baselib for QAC analysis run               */
/*               : CSCRM00385490 : QAC analysis throws syntax errors          */
/* -------------------------------------------------------------------------- */
/* Revision      : 2.3                                                        */
/* Checked in by : yig2si                                                     */
/* Check in date : 17.01.2012 08:41:08                                        */
/*                 01/17/2012 08:41:08                                        */
/* Changes       : Corrected feedback on 2.2                                  */
/* Reasons       : Problems with HSWRTRT                                      */
/* -------------------------------------------------------------------------- */
/* Revision      : 2.2                                                        */
/* Checked in by : yig2si                                                     */
/* Check in date : 16.01.2012 16:27:20                                        */
/*                 01/16/2012 16:27:20                                        */
/* Changes       : Added Guard for HSWRTRT-Test                               */
/* Reasons       : uint64 and int64 was not defined in HSW-RTRT-Test, which   */
/*                 lead to fail of release test in HSW                        */
/* -------------------------------------------------------------------------- */
/* Revision      : 2.1                                                        */
/* Checked in by : yig2si                                                     */
/* Check in date : 01.12.2011 15:19:25                                        */
/*                 12/01/2011 15:19:25                                        */
/* Changes       : Added Modificationf for QA/C 7.2                           */
/*                 Added usage of new MTC-Defines (defining used compiller)   */
/* Reasons       : Introduction of QA/C 7.2                                   */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.4                                                        */
/* Checked in by : yig2si                                                     */
/* Check in date : 07.06.2011 08:04:54                                        */
/*                 06/07/2011 08:04:54                                        */
/* Changes       : Usage of the new Defines for the used compiller provided   */
/*                 by MTC 9.8.                                                */
/* Reasons       : Avilability of the new defines makes a simplification of   */
/*                 the file possible                                          */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.3                                                        */
/* Checked in by : yig2si                                                     */
/* Check in date : 26.04.2011 10:49:50                                        */
/*                 04/26/2011 10:49:50                                        */
/* Changes       : change defintion for uint 32 to make is equal to the one   */
/*                 used in the simulation                                     */
/* Reasons       : problems to get the simulation to run                      */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2.1.6                                                    */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 21.07.2008 15:31:50                                        */
/*                 07/21/2008 15:31:50                                        */
/* Changes       : Fixed typo                                                 */
/* Reasons       : Did not  compile with typo                                 */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2.1.5                                                    */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 21.07.2008 15:08:16                                        */
/*                 07/21/2008 15:08:16                                        */
/* Changes       : Changed to cc_compilation_target.h                         */
/* Reasons       : Refactoring, because the distinction would otherwise be    */
/*                 implemented redundantly in a growing number of other       */
/*                 modules                                                    */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2.1.4                                                    */
/* Checked in by : hmt2si                                                     */
/* Check in date : 30.10.2007 09:53:53                                        */
/*                 10/30/2007 09:53:53                                        */
/* Changes       : added QAC deviation for long long types                    */
/* Reasons       : MISRA Warnings                                             */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2.1.3                                                    */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 24.10.2007 13:15:05                                        */
/*                 10/24/2007 13:15:05                                        */
/* Changes       : Added defined(DSW_ONLY) as a condition for assuming        */
/*                 Microsoft Visual C rather than TMS470                      */
/* Reasons       : Enable PC simulation for DSW                               */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2.1.2                                                    */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 24.10.2007 11:07:58                                        */
/*                 10/24/2007 11:07:58                                        */
/* Changes       : Removed distinction for different compilers (portability   */
/*                 measure).                                                  */
/* Reasons       : The macros for differentiating between compilers have been */
/*                 used for other purposes and cannot be trusted (legacy).    */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2.1.1                                                    */
/* Checked in by : nap2abt                                                    */
/* Check in date : 22.10.2007 14:55:26                                        */
/*                 10/22/2007 14:55:26                                        */
/* Changes       : Support for Simulation (DNSIM) as Microsoft Visual Studio  */
/*                 ver 6.0 does not provide stdint.h header file.             */
/* Reasons       :                                                            */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2.1.0                                                    */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 13.09.2007 11:01:18                                        */
/*                 09/13/2007 11:01:18                                        */
/* Changes       : Instrumentation for c base lib integration test            */
/* Reasons       : c base lib integration test                                */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2                                                        */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 23.08.2007 18:18:48                                        */
/*                 08/23/2007 18:18:48                                        */
/* Changes       : Include standard header                                    */
/*                 adjust include protection to play with MTC                 */
/* Reasons       : Replacing previous revision (which worked for old and new  */
/*                 compiler but was not portable)                             */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.1                                                        */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 04.07.2007 17:13:23                                        */
/*                 07/04/2007 17:13:23                                        */
/* Changes       : Corrected assumptions for integers                         */
/* Reasons       : Previous revision was wrong                                */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.0                                                        */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 16.05.2007 08:58:31                                        */
/*                 05/16/2007 08:58:31                                        */
/* Changes       : Initial revision                                           */
/* Reasons       :                                                            */
/* -------------------------------------------------------------------------- */
/* [FILE_CHANGE_ENTRIES_END]                                                  */
/* -------------------------------------------------------------------------- */
/* [HISTORY_END]                                                              */
/******************************************************************************/
/* [HISTORY_GENERATOR_V1_END]                                                 */
/******************************************************************************/


#ifndef __CC_STDINT_H_
#define __CC_STDINT_H_

/* FIXME: The previous violates ANSI by defining an identifier starting
   with underscores.  Without it, the current GenProDB cannot deal with
   it. Replace it with the following as soon as possible. */


/* FIXME: It was decided that instead of including the TI headers, an
   implementation specificatlly for the TMS470 is to be provided (cue: 
   message 195 as error or warning). This is locked and needs to be
   replaced by the TI headers or verification means have to be defined.

   Since at least RTRT for HSW and QAC are made to believe they are
   a TMS470 compiler, the distinction between different compilers does 
   not work.  Temporarily in order to get BL50 out, we provide 
   hand-coded implementations making the distinctions known from the 
   old CM_Basetypes_COMMON.h.
 */


/* Which simulation targets are using GNU compiler except DNCSIM and DSW_ONLY?
   Do not believe this is correct */
/* #  if (defined(IS_GNU_COMPILER) || defined(IS_RTRT_GNU_COMPILER)) && !(defined(DNCSIM)||defined(DSW_ONLY)) */
/* for GNU compilers this types are build in
 * Exception: For DNC/DSW build also a gnu compiler is used where this types are not build in.
 */
/* #  else */

   typedef   signed char    int8_t;
   typedef unsigned char   uint8_t;
   typedef          short  int16_t;
   typedef unsigned short uint16_t;
   typedef   signed int    int32_t;
   typedef unsigned int   uint32_t;


/* #  endif */


   /* 64 bit integers are different on TMS470 and MSVC. Since we cannot 
      distinguish between TMS470 and MSVC (because MSVC is sometimes made
      to believe it is a TMS470) we distinguish using macros that are set
      by the people that use the MSVC compiler.
    */

/* ---------------------------------------------------------------------- */
/* QAC|DEV 0011: Use of 64 Bit unsigned type                              */
/* ---------------------------------------------------------------------- */
#ifdef QAC
#pragma PRQA_MESSAGES_OFF 1027, 580
#endif



#if defined(IS_VS6_COMPILER) || defined(IS_VS2008_COMPILER) || defined(IS_VS2010_COMPILER) || defined(HSWRTRT)
   typedef          __int64  int64_t;
   typedef unsigned __int64 uint64_t;
#else
#  if defined(IS_TMS470_COMPILER) || defined(IS_GNU_COMPILER) || defined(IS_GCC_X86_64_LINUX_COMPILER) || defined(QAC)
     typedef          long long  int64_t;
     typedef unsigned long long uint64_t;
#  endif
#endif



#ifdef QAC
#pragma PRQA_MESSAGES_ON 1027, 580
#endif

   /* I have removed the casts for the macros since they prevented
      the useage of these macros in #if expressions.  See 
      Bugzilla 13254 [TI SR# 1-590385053].
    */

#  define  INT8_MAX   127
#  define  INT8_MIN   (-INT8_MAX-1)
#  define UINT8_MAX   255

#  define  INT16_MAX  32767
#  define  INT16_MIN  (-INT16_MAX-1)
#  define UINT16_MAX  65535

#  define  INT32_MAX  2147483647
#  define  INT32_MIN  (-INT32_MAX-1)
#  define UINT32_MAX  4294967295U

#  define  INT64_MAX  9223372036854775807
#  define  INT64_MIN  (-INT64_MAX-1)
#  define UINT64_MAX  18446744073709551615ULL


#endif
