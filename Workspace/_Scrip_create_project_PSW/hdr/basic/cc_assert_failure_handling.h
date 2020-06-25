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
/* File name     : cc_assert_failure_handling.h                               */
/* -------------------------------------------------------------------------- */
/* Description   : Declaration of failure handling function for assert.       */
/* Note          :                                                            */
/* -------------------------------------------------------------------------- */
/* [FILE_BASIC_INFO_END]                                                      */
/******************************************************************************/
/* [FILE_CHANGE_ENTRIES]                                                      */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.1                                                        */
/* Checked in by : frg2abt                                                    */
/* Check in date : 12.02.2009 16:18:36                                        */
/*                 02/12/2009 16:18:36                                        */
/* Changes       : Takeover of changes to mainpath                            */
/* Reasons       :                                                            */
/*                                                                            */
/* CSCRM00137085 : 1.) Avoid to heavy compiler optimization, additional debug */
/*                 data for failed assertion analysis                         */
/*                 2.) assert handling from C standard library does not ...   */
/*               : CSCRM00137083 : Extension of assert handling               */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.0.0.1                                                    */
/* Checked in by : shh2abt                                                    */
/* Check in date : 06.02.2009 13:01:42                                        */
/*                 02/06/2009 13:01:42                                        */
/* Changes       : 1.) Added line no. to cc_assert_handle_failure             */
/*                 2.) assert implementation for simulation targets           */
/* Reasons       : 1.) Avoid to heavy compiler optimization, additional debug */
/*                 data for failed assertion analysis                         */
/*                 2.) assert handling from C standard library does not work  */
/*                 for RTRT (HSW)                                             */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.0                                                        */
/* Checked in by : a_shx2abt                                                  */
/* Check in date : 14.02.2008 18:31:08                                        */
/*                 02/14/2008 18:31:08                                        */
/* Changes       : Initial revision                                           */
/* Reasons       : CSCRM00075799                                              */
/* -------------------------------------------------------------------------- */
/* [FILE_CHANGE_ENTRIES_END]                                                  */
/* -------------------------------------------------------------------------- */
/* [HISTORY_END]                                                              */
/******************************************************************************/
/* [HISTORY_GENERATOR_V1_END]                                                 */
/******************************************************************************/
#ifndef __CC_ASSERT_FAILURE_HANDLING_H
#define __CC_ASSERT_FAILURE_HANDLING_H

/* FIXME: The previous violates ANSI by defining an identifier starting
   with underscores.  Without it, the current GenProDB cannot deal with
   it. Replace as soon as possible. */


/* Since at least RTRT for HSW is made to believe it is
   a TMS470 compiler, the distinction between different compilers does
   not work. Temporarily, we provide the hack in cc_compilation_target.h.
 */
#include "CC_COMPILATION_TARGET.H"


#if CC_COMPILER_IS_TMS470

  /**
   * \brief Handle a failed assertion
   *
   * The following function, provided by someone else, will be
   * called when an assertion fails.
   */
  void cc_assert_handle_failure(
      const void* const address, /**< address (program counter) of failed assertion */
      const int line             /**< source code line number of failed assertion */
    );

#else

  /**
   * \brief Handle a failed assertion
   *
   * The following function, provided by someone else, will be
   * called when an assertion fails.
   */
  void cc_assert_handle_failure(
      const char* expr, /**< assertion expression which failed */
      const char* file, /**< source file name of failed assertion */
      const int   line  /**< source code line number of failed assertion */
    );

#endif


#endif
