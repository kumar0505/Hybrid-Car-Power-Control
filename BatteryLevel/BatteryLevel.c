/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:11:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BatteryLevel.h"

/* BatteryLevel/ */
void BatteryLevel(inC_BatteryLevel *inC, outC_BatteryLevel *outC)
{
  /* _L2/, _L5/ */
  kcg_float32 _L5;

  /* _L2=, _L5= */
  if (outC->init) {
    outC->init = kcg_false;
    _L5 = inC->Vb;
  }
  else {
    _L5 = outC->BatteryLevel;
  }
  /* _L7= */
  if (inC->BU) {
    outC->BatteryLevel = _L5 - _L5 * kcg_lit_float32(0.01);
  }
  else {
    outC->BatteryLevel = _L5 + kcg_lit_float32(0.01) * inC->Vboost;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void BatteryLevel_init(outC_BatteryLevel *outC)
{
  outC->init = kcg_true;
  outC->BatteryLevel = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void BatteryLevel_reset(outC_BatteryLevel *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** BatteryLevel.c
** Generation date: 2020-06-09T13:11:42
*************************************************************$ */

