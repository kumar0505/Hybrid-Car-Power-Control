/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:24:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Shaper.h"

/* Shaper/ */
void Shaper(inC_Shaper *inC, outC_Shaper *outC)
{
  /* _L15/ */
  kcg_float32 _L15;
  /* _L10/ */
  kcg_float32 _L10;

  /* _L15= */
  if (outC->init) {
    outC->init = kcg_false;
    _L15 = inC->RL_Input;
  }
  else {
    _L15 = outC->RL_Output;
  }
  _L10 = (inC->RL_Input - _L15) / inC->deltaT;
  /* _L13= */
  if (_L10 < inC->Falling) {
    outC->RL_Output = _L15 + inC->Falling * inC->deltaT;
  }
  else /* _L11= */
  if (_L10 > inC->Rising) {
    outC->RL_Output = _L15 + inC->Rising * inC->deltaT;
  }
  else {
    outC->RL_Output = inC->RL_Input;
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
** Generation date: 2020-06-09T13:24:00
*************************************************************$ */

