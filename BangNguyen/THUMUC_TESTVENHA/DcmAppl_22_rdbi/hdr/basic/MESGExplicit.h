#ifndef MESGEXPLICIT_H__
#define MESGEXPLICIT_H__

/**
 * @ingroup RBSYS
 * @{
 *
 * \file
 * \brief Message concept: API for explicit send and receive
 *
 * 'Detailed description of this module, several lines/paragraphes'
 *
 * \copyright
 * Robert Bosch GmbH reserves all rights even in the event of industrial property rights.
 * We reserve all rights of disposal such as copying and passing on to third parties.
 */


/* no other includes allowed --> see RBSYS_MESGConfig.h */
#include "RBSYS_MESGConfig.h"
#include "MESGIntern.h"



/* Message Locks: no function calls may be made inside LOCK/UNLOCK to prevent deadlock situations in MCore systems */
#define MESG_LOCK       RBMESG_SchM_Enter_Mesg();
#define MESG_UNLOCK     RBMESG_SchM_Exit_Mesg();


/* Pseudoobject Member access */
#define MEMBER_intern(x,y) x##_##y


/* Interface: all macros are redefined to internal ones to force macro expansion of all parameters */
#define SendMESG(MSGname,local)            SendMsg_ROMOpti(MSGname,local)
#define RcvMESG(local,MSGname)             RcvMsg_ROMOpti(local,MSGname)



/* Type definition */
#define DefineMESGType_u8(Msgname)           DefineMESGType_u8_intern(Msgname)
#define DefineMESGType_s8(Msgname)           DefineMESGType_s8_intern(Msgname)
#define DefineMESGType_u16(Msgname)          DefineMESGType_u16_intern(Msgname)
#define DefineMESGType_s16(Msgname)          DefineMESGType_s16_intern(Msgname)
#define DefineMESGType_u32(Msgname)          DefineMESGType_u32_intern(Msgname)
#define DefineMESGType_s32(Msgname)          DefineMESGType_s32_intern(Msgname)
#define DefineMESGType_ST(Msgname, datatype) DefineMESGType_ST_intern(Msgname, datatype)
#define DefineMESGType_EN(Msgname, datatype) DefineMESGType_EN_intern(Msgname, datatype)

/* old ASAP data types supported for compatibility reasons */
#define DefineMESGType_B(Msgname)            DefineMESGType_B_intern(Msgname)
#define DefineMESGType_C(Msgname)            DefineMESGType_C_intern(Msgname)
#define DefineMESGType_UB(Msgname)           DefineMESGType_UB_intern(Msgname)
#define DefineMESGType_SB(Msgname)           DefineMESGType_SB_intern(Msgname)
#define DefineMESGType_UW(Msgname)           DefineMESGType_UW_intern(Msgname)
#define DefineMESGType_SW(Msgname)           DefineMESGType_SW_intern(Msgname)
#define DefineMESGType_UL(Msgname)           DefineMESGType_UL_intern(Msgname)
#define DefineMESGType_SL(Msgname)           DefineMESGType_SL_intern(Msgname)



#define MESGType(Msgname)                  MESGType_intern(Msgname)

/* Message definition and declaration */
#define DefineMESG(Msgname)                DefineMESG_intern(Msgname)
#define DeclareMESG(Msgname)               DeclareMESG_intern(Msgname)

/* Default macros: work on l_Msgname */
#define DefineMESGDef(Msgname)             DefineMESGDef_intern(Msgname)
#define SendMESGDef(Msgname)               SendMESGDef_intern(Msgname)
#define RcvMESGDef(Msgname)                RcvMESGDef_intern(Msgname)

#define MEMBER(x,y)                        MEMBER_intern(x,y)

/* A message access via pointer is not safe for mutual exclusion, so consistency has to be explicitly ensured by design */
#define MESGPointer(Msgname)               MESGPointer_intern(Msgname)

/* Get size of a Message in bytes */
#define MESGSize(Msgname)                  MESGSize_intern(Msgname)


/* message access functions, optimized for groups of messages
   Send/Rcv access only in-between explicit RBMESG_GROUP_LOCK/_UNLOCK allowed:
      RBMESG_GROUP_LOCK
      RcvMESG_GROUP(l_myVar1, MESG_myVar1);
      RcvMESG_GROUP(l_myVar2, MESG_myVar2);
      SendMESG_GROUP(MESG_myVar3, l_myVar3);
      RBMESG_GROUP_UNLOCK
*/

/*Important: no function calls may be made inside MESG_GROUP lock/unlock to avoid deadlocks in MCore systems */
#define MESG_GROUP_LOCK                     MESG_GROUP_LOCK_intern
#define MESG_GROUP_UNLOCK                   MESG_GROUP_UNLOCK_intern
#define SendMESG_GROUP(Msgname,local)       SendMESG_GROUP_intern(Msgname,local)
#define RcvMESG_GROUP(local,Msgname)        RcvMESG_GROUP_intern(local,Msgname)




/* efficient read access to atomic structure members
   The API is only for elementary data types */
#define RcvMESG_StMemberu8(local,MESGnameWithMember)     RcvMESG_StMemberIntern(local,MESGnameWithMember,uint8)
#define RcvMESG_StMembers8(local,MESGnameWithMember)     RcvMESG_StMemberIntern(local,MESGnameWithMember,sint8)
#define RcvMESG_StMemberu16(local,MESGnameWithMember)    RcvMESG_StMemberIntern(local,MESGnameWithMember,uint16)
#define RcvMESG_StMembers16(local,MESGnameWithMember)    RcvMESG_StMemberIntern(local,MESGnameWithMember,sint16)
#define RcvMESG_StMemberu32(local,MESGnameWithMember)    RcvMESG_StMemberIntern(local,MESGnameWithMember,uint32)
#define RcvMESG_StMembers32(local,MESGnameWithMember)    RcvMESG_StMemberIntern(local,MESGnameWithMember,sint32)


/* a fix size check on an enum is not possible because enums (with EABI compiler) are of smallest possible size considering the range */
#define RcvMESG_StMemberEN(local,MESGnameWithMember)     RcvMESG_StMemberIntern(local,MESGnameWithMember,local)



#define RcvMESG_StMemberB(local,MESGnameWithMember)      RcvMESG_StMemberIntern(local,MESGnameWithMember,BOOL)
#define RcvMESG_StMemberC(local,MESGnameWithMember)      RcvMESG_StMemberIntern(local,MESGnameWithMember,CHAR)
#define RcvMESG_StMemberUB(local,MESGnameWithMember)     RcvMESG_StMemberIntern(local,MESGnameWithMember,UBYTE)
#define RcvMESG_StMemberSB(local,MESGnameWithMember)     RcvMESG_StMemberIntern(local,MESGnameWithMember,SBYTE)
#define RcvMESG_StMemberUW(local,MESGnameWithMember)     RcvMESG_StMemberIntern(local,MESGnameWithMember,UWORD)
#define RcvMESG_StMemberSW(local,MESGnameWithMember)     RcvMESG_StMemberIntern(local,MESGnameWithMember,SWORD)
#define RcvMESG_StMemberUL(local,MESGnameWithMember)     RcvMESG_StMemberIntern(local,MESGnameWithMember,ULONG)
#define RcvMESG_StMemberSL(local,MESGnameWithMember)     RcvMESG_StMemberIntern(local,MESGnameWithMember,SLONG)



/** @} */
/* End ingroup RBSYS */

#endif /* End of multiple include protection */
