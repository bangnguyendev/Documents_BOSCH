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
/* File name     : SYS_MESGIntern_COMMON.h                                    */
/* -------------------------------------------------------------------------- */
/* Description   : Internal realization of direct explicit message concept    */
/* Note          :                                                            */
/* -------------------------------------------------------------------------- */
/* [FILE_BASIC_INFO_END]                                                      */
/******************************************************************************/
/* [FILE_CHANGE_ENTRIES]                                                      */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.14                                                       */
/* Checked in by : hcc2si                                                     */
/* Check in date : 10.08.2010 11:30:28                                        */
/*                 08/10/2010 11:30:28                                        */
/* Changes       : Misra changes                                              */
/* Reasons       :                                                            */
/*                                                                            */
/* CSCRM00247415 : Use Parantheses as required by the coding rules            */
/*               : CSCRM00246142 : Use Parantheses as required by the coding  */
/*                 rules                                                      */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.13                                                       */
/* Checked in by : hcc2si                                                     */
/* Check in date : 16.06.2010 14:34:37                                        */
/*                 06/16/2010 14:34:37                                        */
/* Changes       : removed qac devs                                           */
/* Reasons       : new rule set                                               */
/*                                                                            */
/* CSCRM00226277 : [HSW] Reworking of Local Deviations for QAC in the code    */
/*               : CSCRM00221381 : [HSW] Fix QAC findings and Reworking of    */
/*                 Local Deviations for QAC in the code                       */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.12                                                       */
/* Checked in by : shh2abt                                                    */
/* Check in date : 23.07.2008 14:24:20                                        */
/*                 07/23/2008 14:24:20                                        */
/* Changes       : Added macro to get size of a message                       */
/* Reasons       : Size is required for TSI Services                          */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.11                                                       */
/* Checked in by : zlm2si                                                     */
/* Check in date : 23.10.2007 15:03:47                                        */
/*                 10/23/2007 15:03:47                                        */
/* Changes       : Added new datatypes from baselib for messages              */
/* Reasons       : New datatypes from updated coding rules                    */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.10                                                       */
/* Checked in by : hcc2si                                                     */
/* Check in date : 13.08.2007 15:27:20                                        */
/*                 08/13/2007 15:27:20                                        */
/* Changes       : corrected message struct member reception                  */
/* Reasons       :                                                            */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.9                                                        */
/* Checked in by : zlm2si                                                     */
/* Check in date : 08.08.2007 18:16:43                                        */
/*                 08/08/2007 18:16:43                                        */
/* Changes       : Prepared efficient message struct member reception         */
/* Reasons       : Efficiency                                                 */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.8                                                        */
/* Checked in by : mwh2si                                                     */
/* Check in date : 26.06.2007 13:30:00                                        */
/*                 06/26/2007 13:30:00                                        */
/* Changes       : - adaptation for QAC/MISRA compliance                      */
/*                                                                            */
/*                 - changes are hexfile invariant                            */
/* Reasons       : - CSCRM00013710                                            */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.7                                                        */
/* Checked in by : zlm2si                                                     */
/* Check in date : 13.06.2007 20:37:59                                        */
/*                 06/13/2007 20:37:59                                        */
/* Changes       : Support of message pointer macro                           */
/* Reasons       : DNC need this                                              */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.6                                                        */
/* Checked in by : hcc2si                                                     */
/* Check in date : 06.03.2007 16:18:33                                        */
/*                 03/06/2007 16:18:33                                        */
/* Changes       : added new message access functions, optimized for groups   */
/*                 of messages                                                */
/* Reasons       : optimization                                               */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.5                                                        */
/* Checked in by : shh2abt                                                    */
/* Check in date : 16.02.2007 16:09:10                                        */
/*                 02/16/2007 16:09:10                                        */
/* Changes       : Replaced MESGType by MESGType_                             */
/* Reasons       : MISRA warning: rekursive macro                             */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.4                                                        */
/* Checked in by : zlm2si                                                     */
/* Check in date : 28.04.2006 18:20:22                                        */
/*                 04/28/2006 18:20:22                                        */
/* Changes       : Fixed some misra warnings in Messages                      */
/* Reasons       :                                                            */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.3                                                        */
/* Checked in by : zlm2si                                                     */
/* Check in date : 21.04.2006 15:54:45                                        */
/*                 04/21/2006 15:54:45                                        */
/* Changes       : Changed char data type                                     */
/* Reasons       : Misra warnings                                             */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2                                                        */
/* Checked in by : zlm2si                                                     */
/* Check in date : 10.11.2005 20:18:00                                        */
/*                 11/10/2005 20:18:00                                        */
/* Changes       : Implemented SYS internal INTLOCKS without time measurement */
/*                 overhead for certain use cases                             */
/* Reasons       :                                                            */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.1                                                        */
/* Checked in by : zlm2si                                                     */
/* Check in date : 12.10.2005 16:05:37                                        */
/*                 10/12/2005 16:05:37                                        */
/* Changes       : Changed header include concept for h                       */
/* Reasons       : No visibility in header name                               */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.0                                                        */
/* Checked in by : zlm2si                                                     */
/* Check in date : 09.09.2005 11:49:04                                        */
/*                 09/09/2005 11:49:04                                        */
/* Changes       : New                                                        */
/* Reasons       :                                                            */
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

#ifndef __SYS_MESGINTERN_COMMON_H_
#define __SYS_MESGINTERN_COMMON_H_


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

/* Interupts locks for messages */
#include SYS_INTLOCKSUPPORT_COMMON_H

/* SUPPORTED_SWITCH_SETTINGS:                                               */
/* SUPPORTED_SWITCH_SETTINGS_END:                                           */





/* ROM Optimized Send and Receives */
#define SendMsg_ROMOpti(MESGOrigname, Local) \
   if (sizeof (MESGCopyMechan##MESGOrigname) == 1)\
   {\
      MESG_##MESGOrigname=(Local);\
   }\
   else\
   {\
      FUN_SYSInternSuspIRQs_V();\
      MESG_##MESGOrigname=(Local);\
      FUN_SYSInternResIRQs_V();\
   }

#define RcvMsg_ROMOpti(Local, MESGOrigname)\
  if (sizeof (MESGCopyMechan##MESGOrigname) == 1)\
  {\
    (Local)=MESG_##MESGOrigname;\
  }\
  else\
  {\
    FUN_SYSInternSuspIRQs_V();\
    (Local)=MESG_##MESGOrigname;\
    FUN_SYSInternResIRQs_V();\
  }

/* Runtime Optimized: In case structs are well aligned and 1,2 or 4 bytes: no INTLOCK needed */
#define SendMsg_RunTOpti(MESGOrigname, Local)\
   if (sizeof (MESGCopyMechan##MESGOrigname) == 1)\
   {\
      MESG_##MESGOrigname=(Local);\
   }\
   else\
   {\
      if (sizeof (MESG_##MESGOrigname)!=sizeof(Local)) MsgSizeSystemError_V();\
	   if ((sizeof (MESG_##MESGOrigname) == 2)&&((((UL)&MESG_##MESGOrigname) & 1u)==0u)&&((((UL)&(Local)) & 1u)==0u))\
	   {\
	      *(volatile short*)&MESG_##MESGOrigname=(*(short*)&(Local));\
      }\
	   else if ((sizeof (MESG_##MESGOrigname) == 4)&&((((UL)&MESG_##MESGOrigname) & 3u)==0u)&&((((UL)&(Local)) & 3u)==0u))\
	   {\
         *(volatile long*)&MESG_##MESGOrigname=(*(long*)&(Local));\
      }\
	   else\
	   {\
         FUN_SYSInternSuspIRQs_V();\
         MESG_##MESGOrigname=(Local);\
         FUN_SYSInternResIRQs_V();\
      }\
   }

#define RcvMsg_RunTOpti(Local, MESGOrigname)\
   if (sizeof (MESGCopyMechan##MESGOrigname) == 1)\
   {\
     (Local)=MESG_##MESGOrigname;\
   }\
   else\
   {\
      if (sizeof (MESG_##MESGOrigname)!=sizeof(Local)) MsgSizeSystemError_V();\
	   if ((sizeof (MESG_##MESGOrigname) == 2)&&((((UL)&MESG_##MESGOrigname) & 1u)==0u)&&((((UL)&(Local)) & 1u)==0u))\
	   {\
	      *(short*)&(Local)=(*(volatile short*)&MESG_##MESGOrigname);\
      }\
	   else if ((sizeof (MESG_##MESGOrigname) == 4)&&((((UL)&MESG_##MESGOrigname) & 3u)==0u)&&((((UL)&(Local)) & 3u)==0u))\
	   {\
         *(long*)&(Local)=(*(volatile long*)&MESG_##MESGOrigname);\
      }\
	   else\
	   {\
         FUN_SYSInternSuspIRQs_V();\
         (Local)=MESG_##MESGOrigname;\
         FUN_SYSInternResIRQs_V();\
      }\
   }



#define MESG_GROUP_LOCK_intern    {ULONG l_tmpVarToEnsureThatIntsAreLockedDuringMesgCopy_UL = 0; \
                                   FUN_SYSInternSuspIRQs_V(); 


#define MESG_GROUP_UNLOCK_intern   FUN_SYSInternResIRQs_V(); \
                                   }


#define SendMESG_GROUP_intern(MSGname,local)   if (l_tmpVarToEnsureThatIntsAreLockedDuringMesgCopy_UL) {} \
                                               MESG_##MSGname=(local);

#define RcvMESG_GROUP_intern(local,MSGname)    if (l_tmpVarToEnsureThatIntsAreLockedDuringMesgCopy_UL) {} \
                                               (local)=MESG_##MSGname;





/* Define Messagetype. Define a further type called MSEGCopy to give info for Send/Rec macro on how to handle the meassage type: */
/* unsigned char is 1 byte:   Elementary data type: copy without intlock */
/* int is 4 bytes:   Struct or double: copy with INTLock */
#define DefineMESGType_B_intern(Msgname) typedef BOOL MESGType_##Msgname;typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_C_intern(Msgname) typedef CHAR MESGType_##Msgname;typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_UB_intern(Msgname) typedef UBYTE MESGType_##Msgname;typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_SB_intern(Msgname) typedef SBYTE MESGType_##Msgname;typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_UW_intern(Msgname) typedef UWORD MESGType_##Msgname;typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_SW_intern(Msgname) typedef SWORD MESGType_##Msgname;typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_UL_intern(Msgname) typedef ULONG MESGType_##Msgname;typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_SL_intern(Msgname) typedef SLONG MESGType_##Msgname;typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_EN_intern(Msgname, datatype) typedef datatype MESGType_##Msgname;typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_ST_intern(Msgname, datatype) typedef datatype MESGType_##Msgname;typedef int MESGCopyMechan##Msgname


/* New datatypes from baselib */
#define DefineMESGType_u8_intern(Msgname)  typedef uint8_t  MESGType_##Msgname;typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_s8_intern(Msgname)  typedef int8_t   MESGType_##Msgname;typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_u16_intern(Msgname) typedef uint16_t MESGType_##Msgname;typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_s16_intern(Msgname) typedef int16_t  MESGType_##Msgname;typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_u32_intern(Msgname) typedef uint32_t MESGType_##Msgname;typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_s32_intern(Msgname) typedef int32_t  MESGType_##Msgname;typedef unsigned char MESGCopyMechan##Msgname



/* Definition and declaration: A message must be volatile */
#define DefineMESG_intern(Msgname) volatile MESGType_##Msgname MESG_##Msgname
#define DeclareMESG_intern(Msgname)  extern volatile MESGType_##Msgname MESG_##Msgname

/* Comfort macros to access variables */
#define DefineMESGDef_intern(Msgname) MESGType_##Msgname l_##Msgname
#define RcvMESGDef_intern(Msgname)    RcvMESG(l_##Msgname, Msgname)
#define SendMESGDef_intern(Msgname)   SendMESG(Msgname, l_##Msgname)

/* get the messagetype of message */
#define MESGType_intern(Msgname) MESGType_##Msgname

/* Get Pointer to Message location */
#define MESGPointer_intern(Msgname)   (&MESG_##Msgname)

/* Get size of a Message */
#define MESGSize_intern(Msgname)      (sizeof(MESG_##Msgname))


/* efficient read access to atomic structure members */

#define RcvMESG_StMemberIntern(local,global,datatype)\
{\
  if ((sizeof(local)!=sizeof(datatype)) || (sizeof(MESG_##global)!=sizeof(datatype)))\
  {\
      /* this function does not exists and indicates an error with sizes at message send or receive */\
      MsgSizeSystemError_V();\
  }\
  /* now just a pure assignment: The API is only for elementary data types */\
  (local)=MESG_##global;\
}


/* This function must not exists and indicates an error */
void MsgSizeSystemError_V(void);







/* End of multiple include protection                                       */
#endif
/*                                                                          */
/****************************************************************************/

