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
/* File name     : SYS_IntlockSupport_COMMON.h                                */
/* -------------------------------------------------------------------------- */
/* Description   : SYS internal interrupt manipulations                       */
/* Note          :                                                            */
/* -------------------------------------------------------------------------- */
/* [FILE_BASIC_INFO_END]                                                      */
/******************************************************************************/
/* [FILE_CHANGE_ENTRIES]                                                      */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.5.1.0                                                    */
/* Checked in by : ie83abt                                                    */
/* Check in date : 16.01.2012 12:58:44                                        */
/*                 01/16/2012 12:58:44                                        */
/* Changes       : changes after review                                       */
/* Reasons       : development for call of TP callbacks                       */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.5                                                        */
/* Checked in by : zlm2si                                                     */
/* Check in date : 04.04.2008 12:15:56                                        */
/*                 04/04/2008 12:15:56                                        */
/* Changes       : Moved intlock measurement reset call to internal header    */
/* Reasons       : Called at the end of init task only                        */
/*                                                                            */
/* CSCRM00087666 : Intlock measurement                                        */
/*               : CSCRM00018894 : Controller configuration for starting up   */
/*                 the system                                                 */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.4                                                        */
/* Checked in by : zlm2si                                                     */
/* Check in date : 15.06.2007 18:12:41                                        */
/*                 06/15/2007 18:12:41                                        */
/* Changes       : Prepared A bit function for serval E                       */
/* Reasons       :                                                            */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2                                                        */
/* Checked in by : a_vav2si                                                   */
/* Check in date : 30.01.2006 18:07:44                                        */
/*                 01/30/2006 18:07:44                                        */
/* Changes       : Introduced Enable_FIQ function                             */
/* Reasons       : To enable FIQ interrupts before OS start up for ESM Module */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.1                                                        */
/* Checked in by : zlm2si                                                     */
/* Check in date : 10.11.2005 20:17:48                                        */
/*                 11/10/2005 20:17:48                                        */
/* Changes       : Implemented SYS internal INTLOCKS without time measurement */
/*                 overhead for certain use cases                             */
/* Reasons       :                                                            */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.0                                                        */
/* Checked in by : zlm2si                                                     */
/* Check in date : 04.11.2005 20:02:02                                        */
/*                 11/04/2005 20:02:02                                        */
/* Changes       : Added counter manipulation                                 */
/* Reasons       : support intlock in interrupts                              */
/* -------------------------------------------------------------------------- */
/* [FILE_CHANGE_ENTRIES_END]                                                  */
/* -------------------------------------------------------------------------- */
/* [HISTORY_END]                                                              */
/******************************************************************************/
/* [HISTORY_GENERATOR_V1_END]                                                 */
/******************************************************************************/
/****************************************************************************/
/* Multiple include protection. Define symbol like following pattern:       */
/* __<Name of header LOGICAL in CAPITALS>_                                  */
#ifndef __SYS_INTLOCKSUPPORT_COMMON_H_
#define __SYS_INTLOCKSUPPORT_COMMON_H_
/*                                                                          */
/****************************************************************************/
/*                                                                          */
/* HSW - Hardware Related Software                                          */
/*                                                                          */
/****************************************************************************/
/* Only printed attributes can be applied to this module type.              */
/* Delete inappropriate attribute lines below.                              */
/* If more than one leave only one entry per line.                          */
/* SYSTEM_INFO:                                                             */
/*                                                                          */
/* PSW                                                                      */
/* TMS470                                                                   */
/*                                                                          */
/* SYSTEM_INFO_END:                                                         */
/****************************************************************************/


#include SYS09_CONFIG_COMMON_H

/* Write here all switch settings which are defined at this time.           */
/*                                                                          */
/* SUPPORTED_SWITCH_SETTINGS:                                               */

/* FS_SYSIntlockTimeMeas_ON, FS_SYSIntlockTimeMeas_OFF                      */
 
/* SUPPORTED_SWITCH_SETTINGS_END:                                           */



#if (FS_SYSIntlockTimeMeas == FS_SYSIntlockTimeMeas_ON)
  extern ULONG g_SYSlongestINTLockAdr_UL;
  extern ULONG g_SYSlongestINTLockTime_UL;

  /* Reset longest interrupt lock time measurement */
  static inline void FUN_SYSResetIRQMeas_V(void)
  {
    g_SYSlongestINTLockAdr_UL=0;
    g_SYSlongestINTLockTime_UL=0;
  }
#else
  #define FUN_SYSResetIRQMeas_V()
#endif


extern ULONG g_InterruptLockCtr_UL;

static inline void FUN_IncrIntLockCtr_V(void)
{
  g_InterruptLockCtr_UL++;
}
static inline void FUN_DecrIntLockCtr_V(void)
{
  g_InterruptLockCtr_UL--;
}

static inline uint32_t FUN_IsIntLockActive(void)
{
  return (g_InterruptLockCtr_UL != 0);
}

static inline void FUN_ResetIntLockCtr_V(void)
{
    g_InterruptLockCtr_UL = 0;
}

/* Suspend interrupts consider nesting, no locktime check no sanity check on counters, for SYS internal use only */
void FUN_SYSInternSuspIRQs_V(void);

/* Resume interrupts consider nesting, no locktime check no sanity check on counters, for SYS internal use only */
void FUN_SYSInternResIRQs_V(void);

/* Enable FIQ Interrupt */
void FUN_SYSEnableFIQ_V(void);

/* clearing the A bit on Serval-E */
void FUN_SYS_CPUEnableImpreciseAborts_V(void);



/****************************************************************************/
/* End of multiple include protection                                       */
#endif
/*                                                                          */
/****************************************************************************/

