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
/* File name     : cc_compilation_target.h                                    */
/* -------------------------------------------------------------------------- */
/* Description   : Concentrates all logic concerning which build target is    */
/*                 active and which compiler and library should be used in    */
/*                 the code in this case.                                     */
/* Note          :                                                            */
/* -------------------------------------------------------------------------- */
/* [FILE_BASIC_INFO_END]                                                      */
/******************************************************************************/
/* [FILE_CHANGE_ENTRIES]                                                      */
/* -------------------------------------------------------------------------- */
/* Revision      : 2.2                                                        */
/* Checked in by : yig2si                                                     */
/* Check in date : 13.07.2012 07:37:53                                        */
/*                 07/13/2012 07:37:53                                        */
/* Changes       : Changed condition for simmullation flags according to HSWs */
/*                 feedback.                                                  */
/*                 Added new define "CC_COMPILER_IS_DSIM_GNU" to summarize    */
/*                 all defines related to simmulations without Visual Studio. */
/* Reasons       : Feedback from HSW and NetSim. COde was not compilling for  */
/*                 some combinations of compillers and simmulation methodes   */
/*                 (real target build was not effected).                      */
/* -------------------------------------------------------------------------- */
/* Revision      : 2.1.74.0                                                   */
/* Checked in by : shh2abt                                                    */
/* Check in date : 04.06.2012 08:09:38                                        */
/*                 06/04/2012 08:09:38                                        */
/* Changes       : Added AESIM and HSWSIM as further simulation targets       */
/* Reasons       : CSCRM00405148: HSWSim/AESim simulation support             */
/* -------------------------------------------------------------------------- */
/* Revision      : 2.1                                                        */
/* Checked in by : krb2si                                                     */
/* Check in date : 01.02.2012 10:40:17                                        */
/*                 02/01/2012 10:40:17                                        */
/* Changes       : the following direct assignments were replaced by          */
/*                 assigning value 0 or 1 depending on existence of second    */
/*                 macro                                                      */
/*                 CC_ABLE_TO_INCLUDE_STD_HEADERS to IS_TMS470_COMPILER       */
/*                 CC_COMPILER_IS_VISUAL_C_6_0 to IS_VS6_COMPILER             */
/*                 CC_COMPILER_IS_TMS470 to IS_TMS470_COMPILER                */
/*                 CC_LINKER_IS_TMS470  to IS_TMS470_COMPILER                 */
/* Reasons       : violation of CC Coding Rule 58 : do not use undefined      */
/*                 preprocessor symbols for conditional compiling.            */
/* -------------------------------------------------------------------------- */
/* Revision      : 2.0                                                        */
/* Checked in by : yig2si                                                     */
/* Check in date : 07.06.2011 08:02:41                                        */
/*                 06/07/2011 08:02:41                                        */
/* Changes       : Integrated the usage of the new Defines for the used       */
/*                 compiller provided by MTC 9.8.                             */
/* Reasons       : Avilability of the new defines makes a simplification of   */
/*                 the file possible                                          */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.1.1.2                                                    */
/* Checked in by : frg2abt                                                    */
/* Check in date : 17.02.2009 17:17:59                                        */
/*                 02/17/2009 17:17:59                                        */
/* Changes       : Missing include protection added                           */
/* Reasons       : Review finding in revision 1.1.1.0                         */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.1.1.1                                                    */
/* Checked in by : frg2abt                                                    */
/* Check in date : 12.02.2009 16:24:54                                        */
/*                 02/12/2009 16:24:54                                        */
/* Changes       : Takeover of changes to 1.1.1 mainpath + correction         */
/*                 according to change request                                */
/* Reasons       :                                                            */
/*                                                                            */
/* CSCRM00137085 : 1.) Avoid to heavy compiler optimization, additional debug */
/*                 data for failed assertion analysis                         */
/*                 2.) assert handling from C standard library does not ...   */
/*               : CSCRM00137083 : Extension of assert handling               */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.1.1.0.0.1                                                */
/* Checked in by : shh2abt                                                    */
/* Check in date : 06.02.2009 13:02:27                                        */
/*                 02/06/2009 13:02:27                                        */
/* Changes       : 1.) Added line no. to cc_assert_handle_failure             */
/*                 2.) assert implementation for simulation targets           */
/* Reasons       : 1.) Avoid to heavy compiler optimization, additional debug */
/*                 data for failed assertion analysis                         */
/*                 2.) assert handling from C standard library does not work  */
/*                 for RTRT (HSW)                                             */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.1.1.0                                                    */
/* Checked in by : frg2abt                                                    */
/* Check in date : 25.11.2008 11:09:36                                        */
/*                 11/25/2008 11:09:36                                        */
/* Changes       : \file line in introductory comment                         */
/* Reasons       : Doxygen syntax                                             */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.1                                                        */
/* Checked in by : frg2abt                                                    */
/* Check in date : 22.07.2008 10:27:27                                        */
/*                 07/22/2008 10:27:27                                        */
/* Changes       : Definition of CC_WE_ARE_ON_KNOWN_SIMULATION_TARGET         */
/*                 reformulated                                               */
/* Reasons       : Compatibility with Visual C/C++ 6.0                        */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.0                                                        */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 21.07.2008 15:03:17                                        */
/*                 07/21/2008 15:03:17                                        */
/* Changes       : Changed to cc_compilation_target.h                         */
/* Reasons       : Refactoring, because the distinction would otherwise be    */
/*                 implemented redundantly in a growing number of other       */
/*                 modules                                                    */
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
#ifndef __CC_COMPILATION_TARGET_H_
#define __CC_COMPILATION_TARGET_H_


/** \file cc_compilation_target.h
 *
 * This file concentrates all decisions about which compiler or
 * linker is used and about whether we can include C standard library
 * headers or not.
 */


/** This macro expands to true if any of the known simulation targets
 * has been set.  At the time of writing (July 2008), all simulation
 * targets are compiled with Visual C, even though sometimes the
 * TMS470 preprocessor is used.  Also, since we only use Visual C and
 * TMS470 at the moment, except for QAC and Polyspace, we use the
 * complement as an indication of that we are on the TMS470 within our
 * build tool chain.
 */
#if  ((defined(DNCSIM))       \
   || (defined(HSWRTRT))      \
   || (defined(AESIM))        \
   || (defined(HSWSIM))       \
   || (defined(DSW_ONLY))     \
   || (defined(NTSIMULATION)))
#  define CC_WE_ARE_ON_KNOWN_SIMULATION_TARGET 1
#else
#  define CC_WE_ARE_ON_KNOWN_SIMULATION_TARGET 0
#endif


/* Is this setting target (e.g. DSW_ONLY) or compiler dependent? */
#if(    defined(DNCSIM) \
     || ( defined(NTSIMULATION)  &&  !defined(DSW_ONLY) ) \
     || defined(HSWSIM) \
     || ( defined(AESIM) && defined(IS_GNU_COMPILER) ) \
   )
#  define CC_ABLE_TO_INCLUDE_STD_ASSERT 1
#else
#  define CC_ABLE_TO_INCLUDE_STD_ASSERT 0
#endif

#if  (defined (IS_GNU_COMPILER) || defined (IS_RTRT_GNU_COMPILER))
#define CC_COMPILER_IS_DSIM_GNU
#endif

/** Can we include and link the standard C headers that come with the
 * C implementation?  We cannot include them for the TMS470 in our
 * build tool chain for political reasons (supported function switch
 * settings).  */
#if defined(IS_TMS470_COMPILER)
  #define CC_ABLE_TO_INCLUDE_STD_HEADERS 0
#else
  #define CC_ABLE_TO_INCLUDE_STD_HEADERS 1
#endif

/** Do we compile on a Visual C 6.0 environment? This is relevant
 * since Visual C 6.0 does not support long long (but __int64) and so
 * on.*/
#if defined (IS_VS6_COMPILER)
  #define CC_COMPILER_IS_VISUAL_C_6_0 1
#else
  #define CC_COMPILER_IS_VISUAL_C_6_0 0
#endif
/** Do we compile on a TMS470? This is relevant since TMS470 supports
 * __curpc for assert. */
#if defined(IS_TMS470_COMPILER)
  #define CC_COMPILER_IS_TMS470 1
#else
  #define CC_COMPILER_IS_TMS470 0
#endif
/** Do we link on a TMS470? This is relevant since TMS470 does not
 * throw an error when a function is undefined, and the only function
 * call is in unreachable code.  This is used for compile-time sanity
 * checks.
 * CC_LINKER_IS_TMS470 seems not to be needed since IS_TMS470_COMPILER
 * was established. Might be to remove in the future*/
#define CC_LINKER_IS_TMS470 CC_COMPILER_IS_TMS470


#endif /* include protection */
