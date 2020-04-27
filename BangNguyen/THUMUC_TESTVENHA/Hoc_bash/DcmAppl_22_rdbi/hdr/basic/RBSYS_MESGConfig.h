#ifndef RBSYS_MESGCONFIG_H__
#define RBSYS_MESGCONFIG_H__

/**
 * @ingroup RBSYS
 * @{
 *
 * \file
 * \brief Configuration of RBSYS MESG concept only (part of RBCMHSW)
 *
 * Provides configuration of parameters, constants and function switches for MESG concept only.
 *
 * \copyright
 * Robert Bosch GmbH reserves all rights even in the event of industrial property rights.
 * We reserve all rights of disposal such as copying and passing on to third parties.
 */


/** Includes for MESG concept must be ensured by following rule set:
 *  RBSYS_LocksImpl.h (RBSYS) <- RBCMHSW_Locks.h (CMHSW level-n) <- RBSYS_MESGConfig.h (CMHSW level 0) <- MESGExplicit.h (RBSYS) <- RBCMHSW_Global.h (CMHSW Global)*/
#include "RBCMHSW_Locks.h"                /* for RBSYS_*LOCK */



/** Map special case message lock to special fast lock */
#define RBMESG_SchM_Enter_Mesg      RBSYS_ENTER_COMMON_LOCK_SYSFAST
/** Map special case message lock to special fast lock */
#define RBMESG_SchM_Exit_Mesg       RBSYS_EXIT_COMMON_LOCK_SYSFAST



/** @} */
/* End ingroup RBSYS */

#endif /* End of multiple include protection */

