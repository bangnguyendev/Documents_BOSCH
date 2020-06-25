/*
 * include.h
 *
 *  Created on: 28.05.2015
 *      Author: tdi1hc
 *
 */

#ifndef INCLUDEALL_H_
#define INCLUDEALL_H_

/* includes for basics (defines, macros...) */
//#include "cc_compilation_target.h"
#include "compiler_cfg.h"
#include "compiler.h"
// compiler.h is including cc_string.h

/* includes for basics (typedefs...) */
#include "cc_stdint.h"
#include "platform_types.h"  // must included after cc_stdint.h
#include "cc_esp8_legacy.h"
#include "Std_Types.h"

/* includes for message variables */
#include "SYSINTLOCKS_legacy.h"
#include "MESGExplicit.h"
#include "MESGIntern.h"

/* includes for message variables */
#include "RBMESG_Explicit.h"
#include "RBSYS_MESGIntern.h"
#include "RBSYS_MESGConfig.h"

#include "Rte_Type.h"
#include "Rte_DataHandleType.h"
#include "Com_Cfg.h"
#include "Dem_Cfg_EventId.h"
#include "Rte_NvM_Type.h"
#include "NvM_Cfg.h"
#include "RB_Serialize_Impl.h"
#include "DNCIF_Formula.h"

/* Add from here only required specific h-includes */
#include "stubs.h"

#endif /* INCLUDEALL_H_ */
