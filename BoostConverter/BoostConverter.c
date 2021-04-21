/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:12:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BoostConverter.h"

/* BoostConverter/ */
void BoostConverter(inC_BoostConverter *inC, outC_BoostConverter *outC)
{
  /* _L4/ */
  kcg_float32 _L4;

  _L4 = kcg_lit_float32(1.0) - /* _L3=(Command#1)/ */
    Command(inC->InterruptorConductionTime, inC->InterruptorLockingTime);
  /* _L9= */
  if (inC->BatteryUsed) {
    outC->Vout = inC->Vin / _L4;
  }
  else {
    outC->Vout = _L4 * inC->Vin;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void BoostConverter_init(outC_BoostConverter *outC)
{
  outC->Vout = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void BoostConverter_reset(outC_BoostConverter *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** BoostConverter.c
** Generation date: 2020-06-09T13:12:46
*************************************************************$ */

