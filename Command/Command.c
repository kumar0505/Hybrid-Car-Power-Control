/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:14:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Command.h"

/* Command/ */
void Command(inC_Command *inC, outC_Command *outC)
{
  outC->Alpha = inC->InterruptorConductionTime /
    (inC->InterruptorConductionTime + inC->InterruptorLockingTime);
}

#ifndef KCG_USER_DEFINED_INIT
void Command_init(outC_Command *outC)
{
  outC->Alpha = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Command_reset(outC_Command *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command.c
** Generation date: 2020-06-09T13:14:02
*************************************************************$ */

