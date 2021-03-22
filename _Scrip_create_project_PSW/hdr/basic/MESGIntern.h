#ifndef MESGINTERN_H__
#define MESGINTERN_H__

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


/* ROM Optimized Send and Receives */
#define SendMsg_ROMOpti(MESGOrigname, Local) \
   if (sizeof (MESGCopyMechan##MESGOrigname) == 1)\
   {\
      MESG_##MESGOrigname=(Local);\
   }\
   else\
   {\
      RBMESG_SchM_Enter_Mesg();\
      MESG_##MESGOrigname=(Local);\
      RBMESG_SchM_Exit_Mesg();\
   }

#define RcvMsg_ROMOpti(Local, MESGOrigname)\
  if (sizeof (MESGCopyMechan##MESGOrigname) == 1)\
  {\
    (Local)=MESG_##MESGOrigname;\
  }\
  else\
  {\
    RBMESG_SchM_Enter_Mesg();\
    (Local)=MESG_##MESGOrigname;\
    RBMESG_SchM_Exit_Mesg();\
  }


#define MESG_GROUP_LOCK_intern     {                                                                \
                                   uint32 l_tmpVarToEnsureThatIntsAreLockedDuringMesgCopy_UL = 0; \
                                   RBMESG_SchM_Enter_Mesg();


#define MESG_GROUP_UNLOCK_intern   RBMESG_SchM_Exit_Mesg(); \
                                   }


#define SendMESG_GROUP_intern(MSGname,local)   if (l_tmpVarToEnsureThatIntsAreLockedDuringMesgCopy_UL) {} \
                                               MESG_##MSGname=(local);

#define RcvMESG_GROUP_intern(local,MSGname)    if (l_tmpVarToEnsureThatIntsAreLockedDuringMesgCopy_UL) {} \
                                               (local)=MESG_##MSGname;





/* Define Messagetype. Define a further type called MSEGCopy to give info for Send/Rec macro on how to handle the meassage type: */
/* unsigned char is 1 byte:   Elementary data type: copy without intlock */
/* int is 4 bytes:   Struct or double: copy with INTLock */
#define DefineMESGType_u8_intern(Msgname)  typedef uint8  MESGType_##Msgname;typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_s8_intern(Msgname)  typedef sint8   MESGType_##Msgname;typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_u16_intern(Msgname) typedef uint16 MESGType_##Msgname;typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_s16_intern(Msgname) typedef sint16  MESGType_##Msgname;typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_u32_intern(Msgname) typedef uint32 MESGType_##Msgname;typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_s32_intern(Msgname) typedef sint32  MESGType_##Msgname;typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_EN_intern(Msgname, datatype) typedef datatype MESGType_##Msgname;typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_ST_intern(Msgname, datatype) typedef datatype MESGType_##Msgname;typedef int MESGCopyMechan##Msgname


/* old ASAP data types */
#define DefineMESGType_B_intern(Msgname)  typedef BOOL MESGType_##Msgname;  typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_C_intern(Msgname)  typedef CHAR MESGType_##Msgname;  typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_UB_intern(Msgname) typedef UBYTE MESGType_##Msgname; typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_SB_intern(Msgname) typedef SBYTE MESGType_##Msgname; typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_UW_intern(Msgname) typedef UWORD MESGType_##Msgname; typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_SW_intern(Msgname) typedef SWORD MESGType_##Msgname; typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_UL_intern(Msgname) typedef ULONG MESGType_##Msgname; typedef unsigned char MESGCopyMechan##Msgname
#define DefineMESGType_SL_intern(Msgname) typedef SLONG MESGType_##Msgname; typedef unsigned char MESGCopyMechan##Msgname



/* Definition and declaration: A message must be volatile */
#define DefineMESG_intern(Msgname)   volatile MESGType_##Msgname MESG_##Msgname
#define DeclareMESG_intern(Msgname)  extern volatile MESGType_##Msgname MESG_##Msgname

/* Comfort macros to access variables */
#define DefineMESGDef_intern(Msgname) MESGType_##Msgname l_##Msgname
#define RcvMESGDef_intern(Msgname)    RcvMESG(l_##Msgname, Msgname)
#define SendMESGDef_intern(Msgname)   SendMESG(Msgname, l_##Msgname)

/* get the message type of message */
#define MESGType_intern(Msgname)      MESGType_##Msgname

/* Get pointer to message location */
#define MESGPointer_intern(Msgname)   (&MESG_##Msgname)

/* Get size of a message */
#define MESGSize_intern(Msgname)      (sizeof(MESG_##Msgname))

#define MESG_TO_STRING(x) #x

/* efficient read access to atomic structure members */

#define RcvMESG_StMemberIntern(local,global,datatype)\
{\
  static_assert((sizeof(local)==sizeof(datatype)) && (sizeof(MESG_##global)==sizeof(datatype)),\
                 "Message data sizes not matching: " MESG_TO_STRING(local) " and " MESG_TO_STRING(global));\
  /* now just a pure assignment: The API is only for elementary data types */\
  (local)=MESG_##global;\
}


/** @} */
/* End ingroup RBSYS */

#endif /* End of multiple include protection */
