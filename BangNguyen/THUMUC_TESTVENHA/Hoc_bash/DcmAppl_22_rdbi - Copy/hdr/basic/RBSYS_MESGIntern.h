#ifndef RBSYS_MESGINTERN_H__
#define RBSYS_MESGINTERN_H__

/**
 * @ingroup RBSYS
 * @{
 *
 * \file
 * \brief Message concept: Internal macros for explicit send and receive
 *
 * 'Detailed description of this module, several lines/paragraphes'
 *
 * \copyright
 * Robert Bosch GmbH reserves all rights even in the event of industrial property rights.
 * We reserve all rights of disposal such as copying and passing on to third parties.
 */


/* no other includes allowed --> see RBSYS_MESGConfig.h */
#include "cc_assert.h" // for static_assert()

#define RBMESG_SchM_Enter_Mesg() /*dead in unit-test*/
#define RBMESG_SchM_Exit_Mesg() /*dead in unit-test*/

/* ROM Optimized Send and Receives */
#define RBMESG_SendMsg_ROMOpti(MESGOrigname, Local) \
   if (sizeof (MESGCopyMechan##MESGOrigname) == 1)\
   {\
      RBMESG_##MESGOrigname=(Local);\
   }\
   else\
   {\
      RBMESG_SchM_Enter_Mesg();\
      RBMESG_##MESGOrigname=(Local);\
      RBMESG_SchM_Exit_Mesg();\
   }

#define RBMESG_RcvMsg_ROMOpti(Local, MESGOrigname)\
  if (sizeof (MESGCopyMechan##MESGOrigname) == 1)\
  {\
    (Local)=RBMESG_##MESGOrigname;\
  }\
  else\
  {\
    RBMESG_SchM_Enter_Mesg();\
    (Local)=RBMESG_##MESGOrigname;\
    RBMESG_SchM_Exit_Mesg();\
  }


#define RBMESG_GROUP_LOCK_intern     {\
                                     uint32 l_tmpVarToEnsureThatIntsAreLockedDuringMesgCopy_UL = 0; \
                                     RBMESG_SchM_Enter_Mesg();


#define RBMESG_GROUP_UNLOCK_intern   RBMESG_SchM_Exit_Mesg(); \
                                     }


#define RBMESG_SendMESG_GROUP_intern(MSGname,local)   if (l_tmpVarToEnsureThatIntsAreLockedDuringMesgCopy_UL) {} \
                                                       RBMESG_##MSGname=(local);

#define RBMESG_RcvMESG_GROUP_intern(local,MSGname)    if (l_tmpVarToEnsureThatIntsAreLockedDuringMesgCopy_UL) {} \
                                                       (local)=RBMESG_##MSGname;





/* Define Messagetype. Define a further type called MSEGCopy to give info for Send/Rec macro on how to handle the message type: */
/* unsigned char is 1 byte:   Elementary data type: copy without intlock */
/* int is 4 bytes:   Struct or double: copy with INTLock */
#define RBMESG_DefineMESGType_u8_intern(Msgname)           typedef uint8    RBMESG_Type_##Msgname; typedef unsigned char MESGCopyMechan##Msgname
#define RBMESG_DefineMESGType_s8_intern(Msgname)           typedef sint8    RBMESG_Type_##Msgname; typedef unsigned char MESGCopyMechan##Msgname
#define RBMESG_DefineMESGType_u16_intern(Msgname)          typedef uint16   RBMESG_Type_##Msgname; typedef unsigned char MESGCopyMechan##Msgname
#define RBMESG_DefineMESGType_s16_intern(Msgname)          typedef sint16   RBMESG_Type_##Msgname; typedef unsigned char MESGCopyMechan##Msgname
#define RBMESG_DefineMESGType_u32_intern(Msgname)          typedef uint32   RBMESG_Type_##Msgname; typedef unsigned char MESGCopyMechan##Msgname
#define RBMESG_DefineMESGType_s32_intern(Msgname)          typedef sint32   RBMESG_Type_##Msgname; typedef unsigned char MESGCopyMechan##Msgname
#define RBMESG_DefineMESGType_EN_intern(Msgname, datatype) typedef datatype RBMESG_Type_##Msgname; typedef unsigned char MESGCopyMechan##Msgname
#define RBMESG_DefineMESGType_ST_intern(Msgname, datatype) typedef datatype RBMESG_Type_##Msgname; typedef int MESGCopyMechan##Msgname


/* old ASAP data types */
#define RBMESG_DefineMESGType_B_intern(Msgname)  typedef BOOL RBMESG_Type_##Msgname;  typedef unsigned char MESGCopyMechan##Msgname
#define RBMESG_DefineMESGType_C_intern(Msgname)  typedef CHAR RBMESG_Type_##Msgname;  typedef unsigned char MESGCopyMechan##Msgname
#define RBMESG_DefineMESGType_UB_intern(Msgname) typedef UBYTE RBMESG_Type_##Msgname; typedef unsigned char MESGCopyMechan##Msgname
#define RBMESG_DefineMESGType_SB_intern(Msgname) typedef SBYTE RBMESG_Type_##Msgname; typedef unsigned char MESGCopyMechan##Msgname
#define RBMESG_DefineMESGType_UW_intern(Msgname) typedef UWORD RBMESG_Type_##Msgname; typedef unsigned char MESGCopyMechan##Msgname
#define RBMESG_DefineMESGType_SW_intern(Msgname) typedef SWORD RBMESG_Type_##Msgname; typedef unsigned char MESGCopyMechan##Msgname
#define RBMESG_DefineMESGType_UL_intern(Msgname) typedef ULONG RBMESG_Type_##Msgname; typedef unsigned char MESGCopyMechan##Msgname
#define RBMESG_DefineMESGType_SL_intern(Msgname) typedef SLONG RBMESG_Type_##Msgname; typedef unsigned char MESGCopyMechan##Msgname



/* Definition and declaration: A message must be volatile */
#define RBMESG_DefineMESG_intern(Msgname)   volatile RBMESG_Type_##Msgname RBMESG_##Msgname
#define RBMESG_DeclareMESG_intern(Msgname)  extern volatile RBMESG_Type_##Msgname RBMESG_##Msgname

/* Comfort macros to access variables */
#define RBMESG_DefineMESGDef_intern(Msgname) RBMESG_Type_##Msgname l_##Msgname
#define RBMESG_RcvMESGDef_intern(Msgname)    RBMESG_RcvMESG(l_##Msgname, Msgname)
#define RBMESG_SendMESGDef_intern(Msgname)   RBMESG_SendMESG(Msgname, l_##Msgname)

/* get the message type of message */
#define RBMESG_MESGType_intern(Msgname)      RBMESG_Type_##Msgname

/* Get pointer to message location */
#define RBMESG_MESGPointer_intern(Msgname)   (&RBMESG_##Msgname)

/* Get size of a message */
#define RBMESG_MESGSize_intern(Msgname)      (sizeof(RBMESG_##Msgname))

#define RBMESG_TO_STRING(x) #x

/* efficient read access to atomic structure members */

#define RBMESG_RcvMESG_StMemberIntern(local,global,datatype)\
{\
  static_assert((sizeof(local)==sizeof(datatype)) && (sizeof(RBMESG_##global)==sizeof(datatype)),\
                 "Message data sizes not matching: " RBMESG_TO_STRING(local) " and " RBMESG_TO_STRING(global));\
  /* now just a pure assignment: The API is only for elementary data types */\
  (local)=RBMESG_##global;\
}


/** @} */
/* End ingroup RBSYS */

#endif /* End of multiple include protection */
