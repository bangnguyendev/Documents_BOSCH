#ifndef RBMESG_EXPLICIT_H__
#define RBMESG_EXPLICIT_H__

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
//#include "RBSYS_MESGConfig.h"
#include "RBSYS_MESGIntern.h"



/* Message Locks: no function calls may be made inside LOCK/UNLOCK to prevent deadlock situations in MCore systems */
#define RBMESG_LOCK       RBMESG_SchM_Enter_Mesg();
#define RBMESG_UNLOCK     RBMESG_SchM_Exit_Mesg();


/* Pseudoobject Member access */
#define RBMESG_MEMBER_intern(x,y) x##_##y


/* Interface: all macros are redefined to internal ones to force macro expansion of all parameters */
#define RBMESG_SendMESG(MSGname,local)              RBMESG_SendMsg_ROMOpti(MSGname,local)
#define RBMESG_RcvMESG(local,MSGname)               RBMESG_RcvMsg_ROMOpti(local,MSGname)



/* Type definition */
#define RBMESG_DefineMESGType_u8(Msgname)           RBMESG_DefineMESGType_u8_intern(Msgname)
#define RBMESG_DefineMESGType_s8(Msgname)           RBMESG_DefineMESGType_s8_intern(Msgname)
#define RBMESG_DefineMESGType_u16(Msgname)          RBMESG_DefineMESGType_u16_intern(Msgname)
#define RBMESG_DefineMESGType_s16(Msgname)          RBMESG_DefineMESGType_s16_intern(Msgname)
#define RBMESG_DefineMESGType_u32(Msgname)          RBMESG_DefineMESGType_u32_intern(Msgname)
#define RBMESG_DefineMESGType_s32(Msgname)          RBMESG_DefineMESGType_s32_intern(Msgname)
#define RBMESG_DefineMESGType_ST(Msgname, datatype) RBMESG_DefineMESGType_ST_intern(Msgname, datatype)
#define RBMESG_DefineMESGType_EN(Msgname, datatype) RBMESG_DefineMESGType_EN_intern(Msgname, datatype)

/* old ASAP data types supported for compatibility reasons */
#define RBMESG_DefineMESGType_B(Msgname)            RBMESG_DefineMESGType_B_intern(Msgname)
#define RBMESG_DefineMESGType_C(Msgname)            RBMESG_DefineMESGType_C_intern(Msgname)
#define RBMESG_DefineMESGType_UB(Msgname)           RBMESG_DefineMESGType_UB_intern(Msgname)
#define RBMESG_DefineMESGType_SB(Msgname)           RBMESG_DefineMESGType_SB_intern(Msgname)
#define RBMESG_DefineMESGType_UW(Msgname)           RBMESG_DefineMESGType_UW_intern(Msgname)
#define RBMESG_DefineMESGType_SW(Msgname)           RBMESG_DefineMESGType_SW_intern(Msgname)
#define RBMESG_DefineMESGType_UL(Msgname)           RBMESG_DefineMESGType_UL_intern(Msgname)
#define RBMESG_DefineMESGType_SL(Msgname)           RBMESG_DefineMESGType_SL_intern(Msgname)



#define RBMESG_MESGType(Msgname)                    RBMESG_MESGType_intern(Msgname)

/* Message definition and declaration */
#define RBMESG_DefineMESG(Msgname)                  RBMESG_DefineMESG_intern(Msgname)
#define RBMESG_DeclareMESG(Msgname)                 RBMESG_DeclareMESG_intern(Msgname)

/* Default macros: work on l_Msgname */
#define RBMESG_DefineMESGDef(Msgname)               RBMESG_DefineMESGDef_intern(Msgname)
#define RBMESG_SendMESGDef(Msgname)                 RBMESG_SendMESGDef_intern(Msgname)
#define RBMESG_RcvMESGDef(Msgname)                  RBMESG_RcvMESGDef_intern(Msgname)

#define RBMESG_MEMBER(x,y)                          RBMESG_MEMBER_intern(x,y)

/* A message access via pointer is not safe for mutual exclusion, so consistency has to be explicitly ensured by design */
#define RBMESG_MESGPointer(Msgname)                 RBMESG_MESGPointer_intern(Msgname)

/* Get size of a Message in bytes */
#define RBMESG_MESGSize(Msgname)                    RBMESG_MESGSize_intern(Msgname)


/* message access functions, optimized for groups of messages
   Send/Rcv access only in-between explicit RBMESG_GROUP_LOCK/_UNLOCK allowed:
      RBMESG_GROUP_LOCK
      RcvMESG_GROUP(l_myVar1, MESG_myVar1);
      RcvMESG_GROUP(l_myVar2, MESG_myVar2);
      SendMESG_GROUP(MESG_myVar3, l_myVar3);
      RBMESG_GROUP_UNLOCK
*/

/*Important: no function calls may be made inside MESG_GROUP lock/unlock to avoid deadlocks in MCore systems */
#define RBMESG_GROUP_LOCK                           RBMESG_GROUP_LOCK_intern
#define RBMESG_GROUP_UNLOCK                         RBMESG_GROUP_UNLOCK_intern
#define RBMESG_SendMESG_GROUP(Msgname,local)        RBMESG_SendMESG_GROUP_intern(Msgname,local)
#define RBMESG_RcvMESG_GROUP(local,Msgname)         RBMESG_RcvMESG_GROUP_intern(local,Msgname)




/* efficient read access to atomic structure members
   The API is only for elementary data types */
#define RBMESG_RcvMESG_StMemberu8(local,MESGnameWithMember)     RBMESG_RcvMESG_StMemberIntern(local,MESGnameWithMember,uint8_t)
#define RBMESG_RcvMESG_StMembers8(local,MESGnameWithMember)     RBMESG_RcvMESG_StMemberIntern(local,MESGnameWithMember,int8_t)
#define RBMESG_RcvMESG_StMemberu16(local,MESGnameWithMember)    RBMESG_RcvMESG_StMemberIntern(local,MESGnameWithMember,uint16_t)
#define RBMESG_RcvMESG_StMembers16(local,MESGnameWithMember)    RBMESG_RcvMESG_StMemberIntern(local,MESGnameWithMember,int16_t)
#define RBMESG_RcvMESG_StMemberu32(local,MESGnameWithMember)    RBMESG_RcvMESG_StMemberIntern(local,MESGnameWithMember,uint32_t)
#define RBMESG_RcvMESG_StMembers32(local,MESGnameWithMember)    RBMESG_RcvMESG_StMemberIntern(local,MESGnameWithMember,int32_t)


/* a fix size check on an enum is not possible because enums (with EABI compiler) are of smallest possible size considering the range */
#define RBMESG_RcvMESG_StMemberEN(local,MESGnameWithMember)     RBMESG_RcvMESG_StMemberIntern(local,MESGnameWithMember,local)



#define RBMESG_RcvMESG_StMemberB(local,MESGnameWithMember)      RBMESG_RcvMESG_StMemberIntern(local,MESGnameWithMember,BOOL)
#define RBMESG_RcvMESG_StMemberC(local,MESGnameWithMember)      RBMESG_RcvMESG_StMemberIntern(local,MESGnameWithMember,CHAR)
#define RBMESG_RcvMESG_StMemberUB(local,MESGnameWithMember)     RBMESG_RcvMESG_StMemberIntern(local,MESGnameWithMember,UBYTE)
#define RBMESG_RcvMESG_StMemberSB(local,MESGnameWithMember)     RBMESG_RcvMESG_StMemberIntern(local,MESGnameWithMember,SBYTE)
#define RBMESG_RcvMESG_StMemberUW(local,MESGnameWithMember)     RBMESG_RcvMESG_StMemberIntern(local,MESGnameWithMember,UWORD)
#define RBMESG_RcvMESG_StMemberSW(local,MESGnameWithMember)     RBMESG_RcvMESG_StMemberIntern(local,MESGnameWithMember,SWORD)
#define RBMESG_RcvMESG_StMemberUL(local,MESGnameWithMember)     RBMESG_RcvMESG_StMemberIntern(local,MESGnameWithMember,ULONG)
#define RBMESG_RcvMESG_StMemberSL(local,MESGnameWithMember)     RBMESG_RcvMESG_StMemberIntern(local,MESGnameWithMember,SLONG)



/** @} */
/* End ingroup RBSYS */

#endif /* End of multiple include protection */
