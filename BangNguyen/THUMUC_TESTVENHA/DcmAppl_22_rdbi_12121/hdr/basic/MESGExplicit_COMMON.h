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
/* File name     : MESGExplicit_COMMON.h                                      */
/* -------------------------------------------------------------------------- */
/* Description   : Macros for explicit macro based message exchange           */
/*                 New for EVO09                                              */
/* Note          :                                                            */
/* -------------------------------------------------------------------------- */
/* [FILE_BASIC_INFO_END]                                                      */
/******************************************************************************/
/* [FILE_CHANGE_ENTRIES]                                                      */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.11                                                       */
/* Checked in by : hcc2si                                                     */
/* Check in date : 16.06.2010 14:32:52                                        */
/*                 06/16/2010 14:32:52                                        */
/* Changes       : removed qac devs                                           */
/* Reasons       : new rule set                                               */
/*                                                                            */
/* CSCRM00226277 : [HSW] Reworking of Local Deviations for QAC in the code    */
/*               : CSCRM00221381 : [HSW] Fix QAC findings and Reworking of    */
/*                 Local Deviations for QAC in the code                       */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.10                                                       */
/* Checked in by : shh2abt                                                    */
/* Check in date : 23.07.2008 14:23:51                                        */
/*                 07/23/2008 14:23:51                                        */
/* Changes       : Added macro to get size of a message                       */
/* Reasons       : Size is required for TSI Services                          */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.9                                                        */
/* Checked in by : zlm2si                                                     */
/* Check in date : 23.10.2007 15:04:12                                        */
/*                 10/23/2007 15:04:12                                        */
/* Changes       : Added new datatypes from baselib for messages              */
/* Reasons       : New datatypes from updated coding rules                    */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.8                                                        */
/* Checked in by : zlm2si                                                     */
/* Check in date : 08.08.2007 18:15:09                                        */
/*                 08/08/2007 18:15:09                                        */
/* Changes       : Prepared efficient message struct member reception         */
/* Reasons       : Efficiency                                                 */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.7                                                        */
/* Checked in by : mwh2si                                                     */
/* Check in date : 26.06.2007 13:30:14                                        */
/*                 06/26/2007 13:30:14                                        */
/* Changes       : - adaptation for QAC/MISRA compliance                      */
/*                                                                            */
/*                 - changes are hexfile invariant                            */
/* Reasons       : - CSCRM00013710                                            */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.6                                                        */
/* Checked in by : zlm2si                                                     */
/* Check in date : 13.06.2007 20:37:24                                        */
/*                 06/13/2007 20:37:24                                        */
/* Changes       : Support of message pointer macro                           */
/* Reasons       : DNC need this                                              */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.5                                                        */
/* Checked in by : hcc2si                                                     */
/* Check in date : 06.03.2007 16:18:07                                        */
/*                 03/06/2007 16:18:07                                        */
/* Changes       : added new message access functions, optimized for groups   */
/*                 of messages                                                */
/* Reasons       : optimization                                               */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.4                                                        */
/* Checked in by : zlm2si                                                     */
/* Check in date : 05.09.2006 09:58:43                                        */
/*                 09/05/2006 09:58:43                                        */
/* Changes       : Added datatype for ENUMs                                   */
/* Reasons       :                                                            */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.3                                                        */
/* Checked in by : mwh2si                                                     */
/* Check in date : 02.08.2006 13:51:53                                        */
/*                 08/02/2006 13:51:53                                        */
/* Changes       : - replaced C++ comments for C-comments                     */
/*                                                                            */
/*                 is rawhex invariant                                        */
/* Reasons       : - QAC 6.2 compliance                                       */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2                                                        */
/* Checked in by : zlm2si                                                     */
/* Check in date : 28.04.2006 18:19:59                                        */
/*                 04/28/2006 18:19:59                                        */
/* Changes       : Fixed some misra warnings in Messages                      */
/* Reasons       :                                                            */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.1                                                        */
/* Checked in by : zlm2si                                                     */
/* Check in date : 10.11.2005 20:17:32                                        */
/*                 11/10/2005 20:17:32                                        */
/* Changes       : Implemented SYS internal INTLOCKS without time measurement */
/*                 overhead for certain use cases                             */
/* Reasons       :                                                            */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.0                                                        */
/* Checked in by : zlm2si                                                     */
/* Check in date : 12.10.2005 16:04:38                                        */
/*                 10/12/2005 16:04:38                                        */
/* Changes       : Changed header include concept for h                       */
/* Reasons       : No visibility in header name                               */
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

#ifndef __MESGEXPLICIT_COMMON_H_
#define __MESGEXPLICIT_COMMON_H_


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

/* Include internal realization of Messages */
#include SYS_MESGINTERN_COMMON_H
#include SYSINTLOCKS_COMMON_H


/* SUPPORTED_SWITCH_SETTINGS:                                               */
/* SUPPORTED_SWITCH_SETTINGS_END:                                           */


/* Message Lock is just mapped to counting interrupt locks */
#define MESG_LOCK   FUN_SYSSuspendIRQs_V();
#define MESG_UNLOCK FUN_SYSResumeIRQs_V();


/* Pseudoobject Member access */
#define MEMBER_intern(x,y) x##_##y


/* Interface: all macros are redefined to internal ones to force macro expansion of all parameters */
/* #define SendMESG(MSGname,local)            SendMsg_RunTOpti(MSGname,local) */
/* #define RcvMESG(local,MSGname)             RcvMsg_RunTOpti(local,MSGname) */
#define SendMESG(MSGname,local)            SendMsg_ROMOpti(MSGname,local)
#define RcvMESG(local,MSGname)             RcvMsg_ROMOpti(local,MSGname)


/* Type definition */
#define DefineMESGType_B(Msgname)          DefineMESGType_B_intern(Msgname)  
#define DefineMESGType_C(Msgname)          DefineMESGType_C_intern(Msgname)  
#define DefineMESGType_UB(Msgname)         DefineMESGType_UB_intern(Msgname) 
#define DefineMESGType_SB(Msgname)         DefineMESGType_SB_intern(Msgname) 
#define DefineMESGType_UW(Msgname)         DefineMESGType_UW_intern(Msgname) 
#define DefineMESGType_SW(Msgname)         DefineMESGType_SW_intern(Msgname) 
#define DefineMESGType_UL(Msgname)         DefineMESGType_UL_intern(Msgname) 
#define DefineMESGType_SL(Msgname)         DefineMESGType_SL_intern(Msgname) 
#define DefineMESGType_ST(Msgname, datatype) DefineMESGType_ST_intern(Msgname, datatype)
#define DefineMESGType_EN(Msgname, datatype) DefineMESGType_EN_intern(Msgname, datatype) 
/* New datatypes from baselib */
#define DefineMESGType_u8(Msgname)         DefineMESGType_u8_intern(Msgname)
#define DefineMESGType_s8(Msgname)         DefineMESGType_s8_intern(Msgname)
#define DefineMESGType_u16(Msgname)        DefineMESGType_u16_intern(Msgname)
#define DefineMESGType_s16(Msgname)        DefineMESGType_s16_intern(Msgname)
#define DefineMESGType_u32(Msgname)        DefineMESGType_u32_intern(Msgname)
#define DefineMESGType_s32(Msgname)        DefineMESGType_s32_intern(Msgname)


#define MESGType(Msgname)                  MESGType_intern(Msgname)

/* Message definition and declaration */
#define DefineMESG(Msgname)                DefineMESG_intern(Msgname)
#define DeclareMESG(Msgname)               DeclareMESG_intern(Msgname)

/* Default macros: work on l_Msgname */
#define DefineMESGDef(Msgname)             DefineMESGDef_intern(Msgname)
#define SendMESGDef(Msgname)               SendMESGDef_intern(Msgname)
#define RcvMESGDef(Msgname)                RcvMESGDef_intern(Msgname)

#define MEMBER(x,y)                        MEMBER_intern(x,y)

/* A message access via pointer is not safe for mutual exclusion, so constsitency has to be explicitly ensured by design */
#define MESGPointer(Msgname)               MESGPointer_intern(Msgname)

/* Get size of a Message in bytes */
#define MESGSize(Msgname)                  MESGSize_intern(Msgname)


/* message access functions, optimized for groups of messages 
   Send/Rcv access only in-between explicit MESG_GROUP_LOCK/_UNLOCK allowed:
      MESG_GROUP_LOCK
      RcvMESG_GROUP(l_myVar1, MESG_myVar1);
      RcvMESG_GROUP(l_myVar2, MESG_myVar2);
      SendMESG_GROUP(MESG_myVar3, l_myVar3);
      MESG_GROUP_UNLOCK
*/
#define MESG_GROUP_LOCK                     MESG_GROUP_LOCK_intern
#define MESG_GROUP_UNLOCK                   MESG_GROUP_UNLOCK_intern
#define SendMESG_GROUP(Msgname,local)       SendMESG_GROUP_intern(Msgname,local)
#define RcvMESG_GROUP(local,Msgname)        RcvMESG_GROUP_intern(local,Msgname)  




/* efficient read access to atomic structure members 
   The API is only for elementary data types */
#define RcvMESG_StMemberB(local,MESGnameWithMember)      RcvMESG_StMemberIntern(local,MESGnameWithMember,BOOL)
#define RcvMESG_StMemberC(local,MESGnameWithMember)      RcvMESG_StMemberIntern(local,MESGnameWithMember,CHAR)
#define RcvMESG_StMemberUB(local,MESGnameWithMember)     RcvMESG_StMemberIntern(local,MESGnameWithMember,UBYTE)
#define RcvMESG_StMemberSB(local,MESGnameWithMember)     RcvMESG_StMemberIntern(local,MESGnameWithMember,SBYTE)
#define RcvMESG_StMemberUW(local,MESGnameWithMember)     RcvMESG_StMemberIntern(local,MESGnameWithMember,UWORD)
#define RcvMESG_StMemberSW(local,MESGnameWithMember)     RcvMESG_StMemberIntern(local,MESGnameWithMember,SWORD)
#define RcvMESG_StMemberUL(local,MESGnameWithMember)     RcvMESG_StMemberIntern(local,MESGnameWithMember,ULONG)
#define RcvMESG_StMemberSL(local,MESGnameWithMember)     RcvMESG_StMemberIntern(local,MESGnameWithMember,SLONG)

/* New datatypes from baselib */
#define RcvMESG_StMemberu8(local,MESGnameWithMember)     RcvMESG_StMemberIntern(local,MESGnameWithMember,uint8_t)
#define RcvMESG_StMembers8(local,MESGnameWithMember)     RcvMESG_StMemberIntern(local,MESGnameWithMember,int8_t)
#define RcvMESG_StMemberu16(local,MESGnameWithMember)    RcvMESG_StMemberIntern(local,MESGnameWithMember,uint16_t)
#define RcvMESG_StMembers16(local,MESGnameWithMember)    RcvMESG_StMemberIntern(local,MESGnameWithMember,int16_t)
#define RcvMESG_StMemberu32(local,MESGnameWithMember)    RcvMESG_StMemberIntern(local,MESGnameWithMember,uint32_t)
#define RcvMESG_StMembers32(local,MESGnameWithMember)    RcvMESG_StMemberIntern(local,MESGnameWithMember,int32_t)


/* a fix size check on an enum is not possible because enums (with EABI compiler) are of smallest possible size considering the range */
#define RcvMESG_StMemberEN(local,MESGnameWithMember)     RcvMESGStMemberIntern(local,MESGnameWithMember,local)


/* End of multiple include protection                                       */
#endif
/*                                                                          */
/****************************************************************************/

