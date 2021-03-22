#ifndef RBSYS_TASKINFO_H__
#define RBSYS_TASKINFO_H__

/**
 * @ingroup RBSYS
 * @{
 *
 * \file
 * \brief Task counter and constants
 *
 * 'Detailed description of this module, several lines/paragraphes'
 *
 * \copyright
 * Robert Bosch GmbH reserves all rights even in the event of industrial property rights.
 * We reserve all rights of disposal such as copying and passing on to third parties.
 */


//#include "RBSYS_Config.h"


/* used interfaces */


/* Taskcounters */
/*
DefineMESGType_u32(MESG_Task1msCnt_UL);    
DefineMESGType_u32(MESG_TaskBaseCtrlx1Cnt_UL); 
DefineMESGType_u32(MESG_TaskBaseCtrlx1LowCnt_UL); 
DefineMESGType_u32(MESG_TaskBaseCtrlx2Cnt_UL); 
DefineMESGType_u32(MESG_TaskBaseCtrlx4Cnt_UL); 
DefineMESGType_u32(MESG_TaskBaseCtrlx8Cnt_UL); 
DefineMESGType_u32(MESG_TaskBaseCtrlx24Cnt_UL);

DeclareMESG(MESG_Task1msCnt_UL);
DeclareMESG(MESG_TaskBaseCtrlx1Cnt_UL);
DeclareMESG(MESG_TaskBaseCtrlx1LowCnt_UL);
DeclareMESG(MESG_TaskBaseCtrlx2Cnt_UL);
DeclareMESG(MESG_TaskBaseCtrlx4Cnt_UL);
DeclareMESG(MESG_TaskBaseCtrlx8Cnt_UL);
DeclareMESG(MESG_TaskBaseCtrlx24Cnt_UL);
*/

/** Configuration of Base Control task */
#define C_BaseCtrlTaskms_UL   5

/* Export the Message Cycle Times */
#define C_BaseCtrlTaskCycx1_UL  ((unsigned)(C_BaseCtrlTaskms_UL))
#define C_BaseCtrlTaskCycx2_UL  ((unsigned)(2*C_BaseCtrlTaskms_UL))
#define C_BaseCtrlTaskCycx4_UL  ((unsigned)(4*C_BaseCtrlTaskms_UL))
#define C_BaseCtrlTaskCycx8_UL  ((unsigned)(8*C_BaseCtrlTaskms_UL))
#define C_BaseCtrlTaskCycx24_UL ((unsigned)(24*C_BaseCtrlTaskms_UL))



/** @} */
/* End ingroup RBSYS */

#endif /* End of multiple include protection */
