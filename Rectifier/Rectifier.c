/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:22:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Rectifier.h"

/* Rectifier/ */
void Rectifier(inC_Rectifier *inC, outC_Rectifier *outC)
{
  kcg_size idx;
  /* _L4/, _L7/ */
  kcg_float32 _L4;
  /* _L5/, _L6/ */
  kcg_float32 _L5;
  /* @1/I1/, @1/_L1/, _L9/ */
  kcg_float32 _L9;
  /* @1/I2/, @1/_L2/, _L10/ */
  kcg_float32 _L10;

  /* _L4=, _L5=, _L6=, _L7= */
  if (outC->init) {
    /* _L6= */
    for (idx = 0; idx < 3; idx++) {
      outC->fby_3.items[idx] = kcg_lit_float32(0.);
    }
    outC->fby_3.idx = 0;
    /* _L7= */
    for (idx = 0; idx < 2; idx++) {
      outC->fby_4.items[idx] = kcg_lit_float32(0.);
    }
    outC->fby_4.idx = 0;
    /* _L4= */
    for (idx = 0; idx < 5; idx++) {
      outC->fby_1.items[idx] = kcg_lit_float32(0.);
    }
    outC->fby_1.idx = 0;
    outC->init = kcg_false;
    /* _L5= */
    for (idx = 0; idx < 4; idx++) {
      outC->fby_2.items[idx] = kcg_lit_float32(0.);
    }
    outC->fby_2.idx = 0;
  }
  _L5 = outC->fby_3.items[outC->fby_3.idx];
  outC->fby_3.items[outC->fby_3.idx] = inC->V1;
  outC->fby_3.idx = (outC->fby_3.idx + 1) % 3;
  _L4 = outC->fby_4.items[outC->fby_4.idx];
  outC->fby_4.items[outC->fby_4.idx] = inC->V2;
  outC->fby_4.idx = (outC->fby_4.idx + 1) % 2;
  _L10 = /* _L10=(math::Max3#2)/ */ Max3_math_float32(_L5, _L4, outC->_L3);
  _L4 = outC->fby_1.items[outC->fby_1.idx];
  outC->fby_1.items[outC->fby_1.idx] = inC->V2;
  outC->fby_1.idx = (outC->fby_1.idx + 1) % 5;
  _L5 = outC->fby_2.items[outC->fby_2.idx];
  outC->fby_2.items[outC->fby_2.idx] = inC->V3;
  outC->fby_2.idx = (outC->fby_2.idx + 1) % 4;
  _L9 = /* _L9=(math::Max3#1)/ */ Max3_math_float32(inC->V1, _L4, _L5);
  /* @1/_L4= */
  if (_L9 >= _L10) {
    outC->Vs = _L9 * kcg_lit_float32(3.0) * kcg_lit_float32(2.4495) /
      (kcg_lit_float32(2.0) * kcg_lit_float32(3.14));
  }
  else {
    outC->Vs = _L10 * kcg_lit_float32(3.0) * kcg_lit_float32(2.4495) /
      (kcg_lit_float32(2.0) * kcg_lit_float32(3.14));
  }
  outC->_L3 = inC->V3;
}

#ifndef KCG_USER_DEFINED_INIT
void Rectifier_init(outC_Rectifier *outC)
{
  kcg_size idx;

  outC->init = kcg_true;
  outC->fby_2.idx = 0;
  for (idx = 0; idx < 4; idx++) {
    outC->fby_2.items[idx] = kcg_lit_float32(0.0);
  }
  outC->fby_1.idx = 0;
  for (idx = 0; idx < 5; idx++) {
    outC->fby_1.items[idx] = kcg_lit_float32(0.0);
  }
  outC->fby_4.idx = 0;
  for (idx = 0; idx < 2; idx++) {
    outC->fby_4.items[idx] = kcg_lit_float32(0.0);
  }
  outC->fby_3.idx = 0;
  for (idx = 0; idx < 3; idx++) {
    outC->fby_3.items[idx] = kcg_lit_float32(0.0);
  }
  outC->Vs = kcg_lit_float32(0.0);
  outC->_L3 = kcg_lit_float32(0.);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Rectifier_reset(outC_Rectifier *outC)
{
  outC->init = kcg_true;
  outC->_L3 = kcg_lit_float32(0.);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Rectifier/
  @1: (math::Max#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Rectifier.c
** Generation date: 2020-06-09T13:22:15
*************************************************************$ */

