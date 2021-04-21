/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:14:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Shaper.h"

/* Shaper/ */
void Shaper(
  /* RL_Input/, _L5/ */
  kcg_float32 RL_Input,
  /* _L14/, deltaT/ */
  kcg_float32 deltaT,
  /* Falling/, _L8/ */
  kcg_float32 Falling,
  /* Rising/, _L2/ */
  kcg_float32 Rising,
  outC_Shaper *outC)
{
  /* _L15/ */
  kcg_float32 _L15;
  /* _L10/ */
  kcg_float32 _L10;

  /* _L15= */
  if (outC->init) {
    outC->init = kcg_false;
    _L15 = RL_Input;
  }
  else {
    _L15 = outC->RL_Output;
  }
  _L10 = (RL_Input - _L15) / deltaT;
  /* _L13= */
  if (_L10 < Falling) {
    outC->RL_Output = _L15 + Falling * deltaT;
  }
  else /* _L11= */
  if (_L10 > Rising) {
    outC->RL_Output = _L15 + Rising * deltaT;
  }
  else {
    outC->RL_Output = RL_Input;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Shaper_init(outC_Shaper *outC)
{
  outC->init = kcg_true;
  outC->RL_Output = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Shaper_reset(outC_Shaper *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Shaper.c
** Generation date: 2020-06-09T13:14:51
*************************************************************$ */

