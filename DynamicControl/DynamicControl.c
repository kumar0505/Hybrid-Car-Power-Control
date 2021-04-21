/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:14:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DynamicControl.h"

/* DynamicControl/ */
void DynamicControl(inC_DynamicControl *inC, outC_DynamicControl *outC)
{
  kcg_float32 tmp;
  kcg_float32 tmp1;

  /* _L46=, _L47= */
  if (outC->init) {
    tmp = kcg_lit_float32(0.);
    outC->init = kcg_false;
    tmp1 = kcg_lit_float32(0.);
  }
  else {
    tmp = inC->Breaking_Input;
    tmp1 = inC->Accelarator_Input;
  }
  /* _L31=(Shaper#4)/ */
  Shaper(
    /* _L6=(Limiter#2)/ */ Limiter(tmp, kcg_lit_float32(60.), kcg_lit_float32(0.)),
    kcg_lit_float32(1.),
    kcg_lit_float32(-5.),
    kcg_lit_float32(5.),
    &outC->Context_Shaper_4);
  outC->Deaccelaration = outC->Context_Shaper_4.RL_Output * kcg_lit_float32(0.5);
  /* _L30=(Shaper#3)/ */
  Shaper(
    /* _L5=(Limiter#1)/ */ Limiter(tmp1, kcg_lit_float32(60.), kcg_lit_float32(0.)),
    kcg_lit_float32(1.),
    kcg_lit_float32(-5.),
    kcg_lit_float32(5.),
    &outC->Context_Shaper_3);
  outC->Accelaration = outC->Context_Shaper_3.RL_Output * kcg_lit_float32(0.5);
  outC->CurrentSpeed = /* _L48=(Limiter#3)/ */
    Limiter(
      (outC->Accelaration - outC->Deaccelaration) * Gain + inC->PriviousSpeed,
      kcg_lit_float32(360.),
      kcg_lit_float32(0.));
}

#ifndef KCG_USER_DEFINED_INIT
void DynamicControl_init(outC_DynamicControl *outC)
{
  outC->init = kcg_true;
  outC->CurrentSpeed = kcg_lit_float32(0.0);
  outC->Deaccelaration = kcg_lit_float32(0.0);
  outC->Accelaration = kcg_lit_float32(0.0);
  /* _L30=(Shaper#3)/ */ Shaper_init(&outC->Context_Shaper_3);
  /* _L31=(Shaper#4)/ */ Shaper_init(&outC->Context_Shaper_4);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void DynamicControl_reset(outC_DynamicControl *outC)
{
  outC->init = kcg_true;
  /* _L30=(Shaper#3)/ */ Shaper_reset(&outC->Context_Shaper_3);
  /* _L31=(Shaper#4)/ */ Shaper_reset(&outC->Context_Shaper_4);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** DynamicControl.c
** Generation date: 2020-06-09T13:14:51
*************************************************************$ */

