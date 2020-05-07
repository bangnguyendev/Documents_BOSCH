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
/* File name     : ASCET.h                                                    */
/* -------------------------------------------------------------------------- */
/* Description   : Header file for ASCET 5.x sources.                         */
/*                 Replacement of header files:                               */
/*                 - a_basdef.h                                               */
/*                 - a_sgdef.h                                                */
/*                 - ASW_PSWInterfaceHeader_COMMON.cfg                        */
/* Note          :                                                            */
/* -------------------------------------------------------------------------- */
/* [FILE_BASIC_INFO_END]                                                      */
/******************************************************************************/
/* [FILE_CHANGE_ENTRIES]                                                      */
/* -------------------------------------------------------------------------- */
/* Revision      : 9.10.3.0                                                   */
/* Checked in by : yig2si                                                     */
/* Check in date : 03.02.2012 12:02:43                                        */
/*                 02/03/2012 12:02:43                                        */
/* Changes       : Solved double declaration of integer types                 */
/* Reasons       : Changes in C_Baselib                                       */
/*                                                                            */
/* CSCRM00413905 : Gen10: IZP study SW - CSW Integration                      */
/*               : CSCRM00413901 : Collective requests for all IZP study SW   */
/*                 changes                                                    */
/* CSCRM00421304 : [ESP9CP] Prepare project for generation of OOL simulation  */
/*                 file                                                       */
/*               : CSCRM00421301 : [ESP9CP] Prepare project for generation of */
/*                 OOL simulation file                                        */
/* CSCRM00470010 : CSMosar09CSW configuration template for application        */
/*                 baseline 12.1                                              */
/*               : CSCRM00470009 : CSMosar09CSW configuration template for    */
/*                 application baseline 12.1                                  */
/* -------------------------------------------------------------------------- */
/* Revision      : 9.10                                                       */
/* Checked in by : yig2si                                                     */
/* Check in date : 25.02.2011 09:58:19                                        */
/*                 02/25/2011 09:58:19                                        */
/* Changes       : Added inclusion of CC_STDBOOL_H                            */
/*                 Merged Version 9.9 with Version 9.6.3.0                    */
/* Reasons       : Task:CSCRM00247196                                         */
/*                                                                            */
/* CSCRM00247196 : CSMosar09AswMainstream migration ASCET 5 to ASCET 6        */
/*               : CSCRM00247195 : CSMosar09AswMainstream migration ASCET 5   */
/*                 to ASCET 6                                                 */
/* CSCRM00337924 : [ESPhev] Integration of Developement Baseline 50hev: CM    */
/*                 configuration CSW                                          */
/*               : CSCRM00337653 : [ESPhev] Integration of Developement       */
/*                 Baseline 50hev for the Mainstream Project                  */
/* CSCRM00340268 : CSW Updates for DNC MP Update 10.8                         */
/*               : CSCRM00340267 : CSW Integration for DNC MP Update 10.8     */
/* CSCRM00344992 : Generate CSMosar09CSW configuration template               */
/*               : CSCRM00344981 : Generate CSMosar09CSW configuration        */
/*                 template                                                   */
/* -------------------------------------------------------------------------- */
/* Revision      : 9.9                                                        */
/* Checked in by : st82abt                                                    */
/* Check in date : 26.11.2010 11:36:03                                        */
/*                 11/26/2010 11:36:03                                        */
/* Changes       : New typedef 'bool' is introduced                           */
/* Reasons       : Bug#36396: CSW Compilation error: identifier "bool" is     */
/*                 undefined in ASCET6 code                                   */
/* -------------------------------------------------------------------------- */
/* Revision      : 9.8                                                        */
/* Checked in by : st82abt                                                    */
/* Check in date : 21.04.2010 13:48:22                                        */
/*                 04/21/2010 13:48:22                                        */
/* Changes       : - CC_ASSERT_H is included                                  */
/*                 - typedef for 'long long' is replaced with 'int64_t'       */
/* Reasons       : Bug#20630: a_intpol.c: Support for OMCL                    */
/* -------------------------------------------------------------------------- */
/* Revision      : 9.7                                                        */
/* Checked in by : st82abt                                                    */
/* Check in date : 20.04.2010 16:15:54                                        */
/*                 04/20/2010 16:15:54                                        */
/* Changes       : a) Following Macros are redefined                          */
/*                     - ASD_CHTBL_PTR                                        */
/*                     - ASD_CHTBL_REF                                        */
/*                  b) CharTable functions' interface is changed              */
/* Reasons       : Bug#20630: a_intpol.c: Support for OMCL                    */
/*                 Bug#30836: Change of Xsize datatype in ASCET generated     */
/*                 code                                                       */
/*                 Bug#31918: a_intpol.c: Enhancements                        */
/* -------------------------------------------------------------------------- */
/* Revision      : 9.6                                                        */
/* Checked in by : st82abt                                                    */
/* Check in date : 21.05.2009 07:34:55                                        */
/*                 05/21/2009 07:34:55                                        */
/* Changes       : Synchronized the prototypes for all CharTable functions    */
/* Reasons       : Bug#23869: synchronize chartable function prototypes       */
/*                                                                            */
/* CSCRM00151423 : [MTC] runtime optimization of a_intpol.c                   */
/*               : CSCRM00150734 : [MTC] runtime optimization of a_intpol.c   */
/* CSCRM00191804 : ASW Mainpath update for BL8                                */
/*               : CSCRM00191800 : ASW Mainpath update for BL8                */
/* CSCRM00195049 : [ASW] Integrate a_intpol.c 5.9 and ASCET.h 9.6             */
/*               : CSCRM00195045 : [ASW] Integrate a_intpol.c 5.9 and ASCET.h */
/*                 9.6                                                        */
/* CSCRM00200522 : [MTC] runtime optimization of a_intpol.c                   */
/*               : CSCRM00200514 : [MTC] runtime optimization of a_intpol.c   */
/* CSCRM00201683 : CSW integration BL35 WE2 for ESP9CB and ESP9CE projects    */
/*               : CSCRM00201681 : CSW integration BL35 WE2 for ESP9CB and    */
/*                 ESP9CE projects                                            */
/* CSCRM00207934 : Compatibility to NCV project                               */
/*               : CSCRM00207929 : Update Ascet.h und a_intpol.c              */
/* CSCRM00210658 : [ESP9CB C4] Unit integration for CSMosar09CSWMainstream    */
/*                 BL39                                                       */
/*               : CSCRM00205146 : Unit integration for                       */
/*                 CSMosar09CSWMainstream BL39                                */
/* CSCRM00221872 : CSW: Adaption of MFA changes (MFA BL14.0.1.0-MFA BL16.1)   */
/*               : CSCRM00221857 : Adaption of MFA changes (MFA               */
/*                 BL14.0.1.0-MFA BL16.1)                                     */
/* CSCRM00230590 : ASW_C: Adapt changes from W222 Hev BL6                     */
/*               : CSCRM00230576 : Adapt changes from W222 Hev BL6            */
/* -------------------------------------------------------------------------- */
/* Revision      : 9.5.1.0                                                    */
/* Checked in by : st82abt                                                    */
/* Check in date : 19.05.2009 10:21:14                                        */
/*                 05/19/2009 10:21:14                                        */
/* Changes       : Removed the following prototype:                           */
/*                                                                            */
/*                 uint32 Calc_Result(uint32, uint32, uint32);                */
/*                 uint32 Calc_Result32(uint32, uint32, uint32);              */
/*                 uint32 MultiplyTwoNumbersAndThenDivide(uint32, uint32,     */
/*                 uint32);                                                   */
/*                 uint32 DivideTwoNumbers(uint32, uint32, uint32);           */
/* Reasons       : Bug#23455: update ascet.h to trunk (Comment#1)             */
/* -------------------------------------------------------------------------- */
/* Revision      : 9.5                                                        */
/* Checked in by : st82abt                                                    */
/* Check in date : 19.05.2009 10:18:07                                        */
/*                 05/19/2009 10:18:07                                        */
/* Changes       : Removed the following prototype:                           */
/*                                                                            */
/*                 void DisableAllInterrupts(void);                           */
/*                 void EnableAllInterrupts(void);                            */
/* Reasons       : Bug#23455: update ascet.h to trunk                         */
/*                                                                            */
/* CSCRM00176055 : Compliance to new CC Coding rules                          */
/*               : CSCRM00176050 : CSW Integration of BL13                    */
/* CSCRM00204103 : Create Build environment for W222 Flex                     */
/*               : CSCRM00204040 : Flex-SW BL01: Integrate PSW                */
/* -------------------------------------------------------------------------- */
/* Revision      : 9.4.1.0.1.2                                                */
/* Checked in by : st82abt                                                    */
/* Check in date : 22.10.2008 14:16:53                                        */
/*                 10/22/2008 14:16:53                                        */
/* Changes       : #define ASD_CHTBL_PTR(X) (void *)&(X)                      */
/*                 changed to                                                 */
/*                 #define ASD_CHTBL_PTR(X) ((void *)&(X))                    */
/*                                                                            */
/*                 and                                                        */
/*                 #define ASD_CHTBL_REF(X) (void *)(X)                       */
/*                 changed to                                                 */
/*                 #define ASD_CHTBL_REF(X) ((void *)(X))                     */
/* Reasons       : Bug#20104: Misra Warnings von Generated Code               */
/* -------------------------------------------------------------------------- */
/* Revision      : 9.4.1.0.1.1                                                */
/* Checked in by : zer2abt                                                    */
/* Check in date : 12.08.2008 16:52:37                                        */
/*                 08/12/2008 16:52:37                                        */
/* Changes       :                                                            */
/* Reasons       :                                                            */
/*                                                                            */
/* CSCRM00098350 : software quality issue                                     */
/*               : CSCRM00098338 : Eliminate MISRA findings in Opel Meriva    */
/*                 MY10 BL09.02                                               */
/* -------------------------------------------------------------------------- */
/* Revision      : 9.4.1.0.1.0                                                */
/* Checked in by : nga2si                                                     */
/* Check in date : 12.02.2008 13:32:38                                        */
/*                 02/12/2008 13:32:38                                        */
/* Changes       : add:                                                       */
/*                 #include CM_CSWGLOBAL_PROJECT_SWI                          */
/*                 #include CM_CSWTARGETDEPENDENT_PROJECT_SWD                 */
/*                 #include CM_CSWBUILDDEPENDENT_PROJECT_SWD                  */
/* Reasons       : missing headers added                                      */
/*                 Update for ASW 15.2                                        */
/* -------------------------------------------------------------------------- */
/* Revision      : 9.4.1.0                                                    */
/* Checked in by : asm2si                                                     */
/* Check in date : 18.12.2007 10:35:59                                        */
/*                 12/18/2007 10:35:59                                        */
/* Changes       : ASW need DisableAllInterrupts, EnableAllInterrupts         */
/* Reasons       : B2 Endurance Test                                          */
/*                                                                            */
/*                 RB_ABS9_CB_SW_A90S_54062                                   */
/*                 CSCRM00063358                                              */
/*                                                                            */
/* CSCRM00081127 : newest Gen9 ASW BL 20 (CSMosar Evo07 ASW + Gen9 ASW BL8/9  */
/*                 = ASW BL 20)                                               */
/*               : CSCRM00081124 : update to ASW BL20 for BL02                */
/* CSCRM00189336 : Uebernahme aktuelle Plattformentwicklung                   */
/*               : CSCRM00189330 : NCV3: ASW Update auf Application           */
/*                 Mainstream 9.2                                             */
/* -------------------------------------------------------------------------- */
/* Revision      : 9.4                                                        */
/* Checked in by : ze82si                                                     */
/* Check in date : 26.11.2007 11:29:28                                        */
/*                 11/26/2007 11:29:28                                        */
/* Changes       : include guards added around macros                         */
/* Reasons       : compilation errors                                         */
/*                                                                            */
/* CSCRM00110486 : Uebernahme aus dem Hauptpfad BS23.4                        */
/*               : CSCRM00110430 : Create inital ASW                          */
/* -------------------------------------------------------------------------- */
/* Revision      : 9.3                                                        */
/* Checked in by : rij2abt                                                    */
/* Check in date : 16.10.2007 14:07:12                                        */
/*                 10/16/2007 14:07:12                                        */
/* Changes       : added definition of Ascet used macros for integer type     */
/*                 limits:                                                    */
/*                                                                            */
/*                  SINT8_MAX,  SINT8_MIN,   UINT8_MIN,  UINT8_MAX            */
/*                 SINT16_MAX, SINT16_MIN, UINT16_MIN, UINT16_MAX             */
/*                 SINT32_MAX, SINT32_MIN, UINT32_MIN, UINT32_MAX             */
/* Reasons       : RollOut of Ascet v 5.2.1 for ECU-CodeGeneration            */
/*                                                                            */
/*                 see Bugzilla #13580: Ascet 5.2.1: a_limits.h and limits.h  */
/*                 neccessary                                                 */
/* -------------------------------------------------------------------------- */
/* Revision      : 9.2                                                        */
/* Checked in by : st82abt                                                    */
/* Check in date : 15.09.2007 07:41:09                                        */
/*                 09/15/2007 07:41:09                                        */
/* Changes       : Function prototype is changed                              */
/* Reasons       : New multiplication algorithm is used in a_intpol.c (5.x)   */
/* -------------------------------------------------------------------------- */
/* Revision      : 9.1                                                        */
/* Checked in by : thu2si                                                     */
/* Check in date : 31.07.2007 11:24:32                                        */
/*                 07/31/2007 11:24:32                                        */
/* Changes       : substituted std_type.h and a_intpol.h by the necessary     */
/*                 content of this files                                      */
/* Reasons       : include only a single ASCET.h header to CSW for all ASCET  */
/*                 generated code, for several reasons:                       */
/*                 1) more comfortable                                        */
/*                 2) headers might not be availabel in Gen9 SW               */
/* -------------------------------------------------------------------------- */
/* Revision      : 9.0                                                        */
/* Checked in by : ze82si                                                     */
/* Check in date : 16.07.2007 09:33:31                                        */
/*                 07/16/2007 09:33:31                                        */
/* Changes       : Header file for ASCET 5.x sources.                         */
/*                 Replacement of header files:                               */
/*                 - a_basdef.h                                               */
/*                 - a_sgdef.h                                                */
/*                 - ASW_PSWInterfaceHeader_COMMON.cfg                        */
/* Reasons       : see Bugzilla#7429, Bugzilla#11739                          */
/*                                                                            */
/*                                                                            */
/*                 8.x versions => Gen8                                       */
/*                 9.x versions => Gen9                                       */
/* -------------------------------------------------------------------------- */
/* Revision      : 8.0                                                        */
/* Checked in by : ze82si                                                     */
/* Check in date : 16.07.2007 09:11:34                                        */
/*                 07/16/2007 09:11:34                                        */
/* Changes       : Header file for ASCET 5.x sources.                         */
/*                 Replacement of header files:                               */
/*                 - a_basdef.h                                               */
/*                 - a_sgdef.h                                                */
/*                 - ASW_PSWInterfaceHeader_COMMON.cfg                        */
/* Reasons       : see Bugzilla#7429                                          */
/*                                                                            */
/*                 8.x versions => Gen8                                       */
/*                 9.x versions => Gen9                                       */
/* -------------------------------------------------------------------------- */
/* [FILE_CHANGE_ENTRIES_END]                                                  */
/* -------------------------------------------------------------------------- */
/* [HISTORY_END]                                                              */
/******************************************************************************/
/* [HISTORY_GENERATOR_V1_END]                                                 */
/******************************************************************************/
#ifndef __ASCET_H_
#define __ASCET_H_

#include <CM_Settings_PRJ.CFG>
#include CM_CSWGLOBAL_PROJECT_SWI
#include CM_CSWTARGETDEPENDENT_PROJECT_SWD
#include CM_CSWBUILDDEPENDENT_PROJECT_SWD
#include CM_BASETYPES_COMMON_H
#include MESGEXPLICIT_COMMON_H
#include CC_ASSERT_H
#include <std_types.h>
#include CC_STDBOOL_H

/* start --- std_type.h refugees  todo:move to std_types or to there included files*/
typedef unsigned char  bit;
typedef unsigned char  bit8;
typedef unsigned short bit16;
typedef unsigned long  bit32;

typedef double         real;
typedef float          real32;
typedef double         real64;
/* end --- std_type.h refugees */



#define ASD_CHTBL_PTR(X)	((void *)&(X))
#define ASD_CHTBL_REF(X)	((void *)(X))

/* start -- #include "a_intpol.h" */
/* obsolete if intpol_lw.lib is not used any more.*/

sint8 CharTable1_getAt_s8s8 (const void *KL, sint8 x);

sint16 CharTable1_getAt_s8s16 (const void *KL, sint8 x);

sint32 CharTable1_getAt_s8s32 (const void *KL, sint8 x);

uint8 CharTable1_getAt_s8u8 (const void *KL, sint8 x);

uint16 CharTable1_getAt_s8u16 (const void *KL, sint8 x);

uint32 CharTable1_getAt_s8u32 (const void *KL, sint8 x);

sint8 CharTable1_getAt_s16s8 (const void *KL, sint16 x);

sint16 CharTable1_getAt_s16s16 (const void *KL, sint16 x);

sint32 CharTable1_getAt_s16s32 (const void *KL, sint16 x);

uint8 CharTable1_getAt_s16u8 (const void *KL, sint16 x);

uint16 CharTable1_getAt_s16u16 (const void *KL, sint16 x);

uint32 CharTable1_getAt_s16u32 (const void *KL, sint16 x);

sint8 CharTable1_getAt_s32s8 (const void *KL, sint32 x);

sint16 CharTable1_getAt_s32s16 (const void *KL, sint32 x);

sint32 CharTable1_getAt_s32s32 (const void *KL, sint32 x);

uint8 CharTable1_getAt_s32u8 (const void *KL, sint32 x);

uint16 CharTable1_getAt_s32u16 (const void *KL, sint32 x);

uint32 CharTable1_getAt_s32u32 (const void *KL, sint32 x);

sint8 CharTable1_getAt_u8s8 (const void *KL, uint8 x);

sint16 CharTable1_getAt_u8s16 (const void *KL, uint8 x);

sint32 CharTable1_getAt_u8s32 (const void *KL, uint8 x);

uint8 CharTable1_getAt_u8u8 (const void *KL, uint8 x);

uint16 CharTable1_getAt_u8u16 (const void *KL, uint8 x);

uint32 CharTable1_getAt_u8u32 (const void *KL, uint8 x);

sint8 CharTable1_getAt_u16s8 (const void *KL, uint16 x);

sint16 CharTable1_getAt_u16s16 (const void *KL, uint16 x);

sint32 CharTable1_getAt_u16s32 (const void *KL, uint16 x);

uint8 CharTable1_getAt_u16u8 (const void *KL, uint16 x);

uint16 CharTable1_getAt_u16u16 (const void *KL, uint16 x);

uint32 CharTable1_getAt_u16u32 (const void *KL, uint16 x);

sint8 CharTable1_getAt_u32s8 (const void *KL, uint32 x);

sint16 CharTable1_getAt_u32s16 (const void *KL, uint32 x);

sint32 CharTable1_getAt_u32s32 (const void *KL, uint32 x);

uint8 CharTable1_getAt_u32u8 (const void *KL, uint32 x);

uint16 CharTable1_getAt_u32u16 (const void *KL, uint32 x);

uint32 CharTable1_getAt_u32u32 (const void *KL, uint32 x);

real32 CharTable1_getAt_r32r32 (const void *KL, real32 x);

real64 CharTable1_getAt_r64r64 (const void *KL, real64 x);

uint8 CharTable2_getAt_u8u8u8 (const void *KL, uint8 x, uint8 y);

sint8 CharTable2_getAt_u8u8s8 (const void *KL, uint8 x, uint8 y);

uint16 CharTable2_getAt_u8u8u16 (const void *KL, uint8 x, uint8 y);

sint16 CharTable2_getAt_u8u8s16 (const void *KL, uint8 x, uint8 y);

uint8 CharTable2_getAt_u8s8u8 (const void *KL, uint8 x, sint8 y);

sint8 CharTable2_getAt_u8s8s8 (const void *KL, uint8 x, sint8 y);

uint16 CharTable2_getAt_u8s8u16 (const void *KL, uint8 x, sint8 y);

sint16 CharTable2_getAt_u8s8s16 (const void *KL, uint8 x, sint8 y);

uint8 CharTable2_getAt_u8u16u8 (const void *KL, uint8 x, uint16 y);

sint8 CharTable2_getAt_u8u16s8 (const void *KL, uint8 x, uint16 y);

uint16 CharTable2_getAt_u8u16u16 (const void *KL, uint8 x, uint16 y);

sint16 CharTable2_getAt_u8u16s16 (const void *KL, uint8 x, uint16 y);

uint8 CharTable2_getAt_u8s16u8 (const void *KL, uint8 x, sint16 y);

sint8 CharTable2_getAt_u8s16s8 (const void *KL, uint8 x, sint16 y);

uint16 CharTable2_getAt_u8s16u16 (const void *KL, uint8 x, sint16 y);

sint16 CharTable2_getAt_u8s16s16 (const void *KL, uint8 x, sint16 y);

uint8 CharTable2_getAt_s8u8u8 (const void *KL, sint8 x, uint8 y);

sint8 CharTable2_getAt_s8u8s8 (const void *KL, sint8 x, uint8 y);

uint16 CharTable2_getAt_s8u8u16 (const void *KL, sint8 x, uint8 y);

sint16 CharTable2_getAt_s8u8s16 (const void *KL, sint8 x, uint8 y);

uint8 CharTable2_getAt_s8s8u8 (const void *KL, sint8 x, sint8 y);

sint8 CharTable2_getAt_s8s8s8 (const void *KL, sint8 x, sint8 y);

uint16 CharTable2_getAt_s8s8u16 (const void *KL, sint8 x, sint8 y);

sint16 CharTable2_getAt_s8s8s16 (const void *KL, sint8 x, sint8 y);

uint8 CharTable2_getAt_s8u16u8 (const void *KL, sint8 x, uint16 y);

sint8 CharTable2_getAt_s8u16s8 (const void *KL, sint8 x, uint16 y);

uint16 CharTable2_getAt_s8u16u16 (const void *KL, sint8 x, uint16 y);

sint16 CharTable2_getAt_s8u16s16 (const void *KL, sint8 x, uint16 y);

uint8 CharTable2_getAt_s8s16u8 (const void *KL, sint8 x, sint16 y);

sint8 CharTable2_getAt_s8s16s8 (const void *KL, sint8 x, sint16 y);

uint16 CharTable2_getAt_s8s16u16 (const void *KL, sint8 x, sint16 y);

sint16 CharTable2_getAt_s8s16s16 (const void *KL, sint8 x, sint16 y);

uint8 CharTable2_getAt_u16u8u8 (const void *KL, uint16 x, uint8 y);

sint8 CharTable2_getAt_u16u8s8 (const void *KL, uint16 x, uint8 y);

uint16 CharTable2_getAt_u16u8u16 (const void *KL, uint16 x, uint8 y);

sint16 CharTable2_getAt_u16u8s16 (const void *KL, uint16 x, uint8 y);

uint8 CharTable2_getAt_u16s8u8 (const void *KL, uint16 x, sint8 y);

sint8 CharTable2_getAt_u16s8s8 (const void *KL, uint16 x, sint8 y);

uint16 CharTable2_getAt_u16s8u16 (const void *KL, uint16 x, sint8 y);

sint16 CharTable2_getAt_u16s8s16 (const void *KL, uint16 x, sint8 y);

uint8 CharTable2_getAt_u16u16u8 (const void *KL, uint16 x, uint16 y);

sint8 CharTable2_getAt_u16u16s8 (const void *KL, uint16 x, uint16 y);

uint16 CharTable2_getAt_u16u16u16 (const void *KL, uint16 x, uint16 y);

sint16 CharTable2_getAt_u16u16s16 (const void *KL, uint16 x, uint16 y);

uint8 CharTable2_getAt_u16s16u8 (const void *KL, uint16 x, sint16 y);

sint8 CharTable2_getAt_u16s16s8 (const void *KL, uint16 x, sint16 y);

uint16 CharTable2_getAt_u16s16u16 (const void *KL, uint16 x, sint16 y);

sint16 CharTable2_getAt_u16s16s16 (const void *KL, uint16 x, sint16 y);

uint8 CharTable2_getAt_s16u8u8 (const void *KL, sint16 x, uint8 y);

sint8 CharTable2_getAt_s16u8s8 (const void *KL, sint16 x, uint8 y);

uint16 CharTable2_getAt_s16u8u16 (const void *KL, sint16 x, uint8 y);

sint16 CharTable2_getAt_s16u8s16 (const void *KL, sint16 x, uint8 y);

uint8 CharTable2_getAt_s16s8u8 (const void *KL, sint16 x, sint8 y);

sint8 CharTable2_getAt_s16s8s8 (const void *KL, sint16 x, sint8 y);

uint16 CharTable2_getAt_s16s8u16 (const void *KL, sint16 x, sint8 y);

sint16 CharTable2_getAt_s16s8s16 (const void *KL, sint16 x, sint8 y);

uint8 CharTable2_getAt_s16u16u8 (const void *KL, sint16 x, uint16 y);

sint8 CharTable2_getAt_s16u16s8 (const void *KL, sint16 x, uint16 y);

uint16 CharTable2_getAt_s16u16u16 (const void *KL, sint16 x, uint16 y);

sint16 CharTable2_getAt_s16u16s16 (const void *KL, sint16 x, uint16 y);

uint8 CharTable2_getAt_s16s16u8 (const void *KL, sint16 x, sint16 y);

sint8 CharTable2_getAt_s16s16s8 (const void *KL, sint16 x, sint16 y);

uint16 CharTable2_getAt_s16s16u16 (const void *KL, sint16 x, sint16 y);

sint16 CharTable2_getAt_s16s16s16 (const void *KL, sint16 x, sint16 y);

uint16 CharTable2_getAt_u16s32u16 (const void *KL, uint16 x, sint32 y);

uint32 CharTable2_getAt_u16u16u32 (const void *KL, uint16 x, uint16 y);

real32 CharTable2_getAt_r32r32r32 (const void *KL, real32 x, real32 y);

/* end -- #include "a_intpol.h" */
/* obsolete if intpol_lw.lib is not used any more.*/


/* start -- #include "a_limits.h" */
/* definition of type limit macros*/


#ifndef SINT8_MAX
#define SINT8_MAX 0x7f
#endif

#ifndef SINT8_MIN
#define SINT8_MIN (-SINT8_MAX - 1)
#endif

#ifndef UINT8_MIN
#define UINT8_MIN (0)
#endif

#ifndef UINT8_MAX
#define UINT8_MAX 0xff
#endif

#ifndef SINT16_MAX
#define SINT16_MAX 0x7fff
#endif

#ifndef SINT16_MIN
#define SINT16_MIN (-SINT16_MAX - 1)
#endif

#ifndef UINT16_MIN
#define UINT16_MIN (0)
#endif

#ifndef UINT16_MAX
#define UINT16_MAX 0xffff
#endif

#ifndef SINT32_MAX
#define SINT32_MAX 0x7fffffff
#endif

#ifndef SINT32_MIN
#define SINT32_MIN (-SINT32_MAX - 1)
#endif

#ifndef UINT32_MIN
#define UINT32_MIN (0)
#endif

#ifndef UINT32_MAX
#define UINT32_MAX 0xffffffff
#endif

/* end --- #include "a_limits.h" */

#endif /* __ASCET_H_ */
