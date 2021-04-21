/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:25:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ThreePhaseConverter.h"

/* ThreePhaseConverter/ */
void ThreePhaseConverter(
  inC_ThreePhaseConverter *inC,
  outC_ThreePhaseConverter *outC)
{
  kcg_float32 tmp;
  kcg_float32 tmp1;
  /* PhaseCalculator:else: */
  kcg_bool else_clock_PhaseCalculator;
  /* PhaseCalculator:else:else:else: */
  kcg_bool else_clock_else_else_PhaseCalculator;
  /* PhaseCalculator:else:else:else:else: */
  kcg_bool else_clock_else_else_else_PhaseCalculator;
  /* PhaseCalculator:else:else: */
  kcg_bool else_clock_else_PhaseCalculator;
  /* PhaseCalculator: */
  kcg_bool PhaseCalculator_clock;
  /* Count/, _L2/ */
  _2_int Count;

  /* _L1=(ModCount#1)/ */ ModCount(&outC->Context_ModCount_1);
  /* _L2= */
  if (outC->init) {
    outC->init = kcg_false;
    Count = kcg_lit_int8(0);
  }
  else {
    Count = outC->Context_ModCount_1.Count;
  }
  PhaseCalculator_clock = Count == kcg_lit_int8(0);
  /* PhaseCalculator: */
  if (PhaseCalculator_clock) {
    outC->K1 = T;
    outC->notK3 = F;
    outC->notK1 = F;
    outC->K3 = T;
    outC->notK2 = T;
    outC->K2 = F;
  }
  else {
    else_clock_PhaseCalculator = Count == kcg_lit_int8(1);
    /* PhaseCalculator:else: */
    if (else_clock_PhaseCalculator) {
      outC->K1 = T;
      outC->notK3 = T;
      outC->notK1 = F;
      outC->K3 = F;
      outC->notK2 = T;
      outC->K2 = F;
    }
    else {
      else_clock_else_PhaseCalculator = Count == kcg_lit_int8(2);
      /* PhaseCalculator:else:else: */
      if (else_clock_else_PhaseCalculator) {
        outC->K1 = T;
        outC->notK3 = F;
        outC->notK1 = F;
        outC->K3 = F;
        outC->notK2 = F;
        outC->K2 = T;
      }
      else {
        else_clock_else_else_PhaseCalculator = Count == kcg_lit_int8(3);
        /* PhaseCalculator:else:else:else: */
        if (else_clock_else_else_PhaseCalculator) {
          outC->K1 = F;
          outC->notK3 = T;
          outC->notK1 = T;
          outC->K3 = F;
          outC->notK2 = F;
          outC->K2 = T;
        }
        else {
          else_clock_else_else_else_PhaseCalculator = Count == kcg_lit_int8(4);
          /* PhaseCalculator:else:else:else:else: */
          if (else_clock_else_else_else_PhaseCalculator) {
            outC->K1 = F;
            outC->notK3 = F;
            outC->notK1 = T;
            outC->K3 = T;
            outC->notK2 = F;
            outC->K2 = T;
          }
          else {
            outC->K1 = F;
            outC->notK3 = F;
            outC->notK1 = T;
            outC->K3 = T;
            outC->notK2 = F;
            outC->K2 = F;
          }
        }
      }
    }
  }
  /* _L35= */
  if (outC->K3 & outC->notK1) {
    tmp = inC->Vac;
  }
  else {
    tmp = kcg_lit_float32(0.0);
  }
  /* _L32= */
  if (outC->notK3 & outC->K1) {
    tmp1 = - inC->Vac;
  }
  else {
    tmp1 = - kcg_lit_float32(0.0);
  }
  outC->V31 = tmp + tmp1;
  /* _L29= */
  if (outC->K2 & outC->notK3) {
    tmp = inC->Vac;
  }
  else {
    tmp = kcg_lit_float32(0.0);
  }
  /* _L21= */
  if (outC->notK2 & outC->K3) {
    tmp1 = - inC->Vac;
  }
  else {
    tmp1 = - kcg_lit_float32(0.0);
  }
  outC->V23 = tmp + tmp1;
  /* _L12= */
  if (outC->K1 & outC->notK2) {
    tmp = inC->Vac;
  }
  else {
    tmp = kcg_lit_float32(0.0);
  }
  /* _L16= */
  if (outC->notK1 & outC->K2) {
    tmp1 = - inC->Vac;
  }
  else {
    tmp1 = - kcg_lit_float32(0.0);
  }
  outC->V12 = tmp + tmp1;
}

#ifndef KCG_USER_DEFINED_INIT
void ThreePhaseConverter_init(outC_ThreePhaseConverter *outC)
{
  outC->K1 = kcg_true;
  outC->K2 = kcg_true;
  outC->K3 = kcg_true;
  outC->notK1 = kcg_true;
  outC->notK2 = kcg_true;
  outC->notK3 = kcg_true;
  outC->init = kcg_true;
  outC->V31 = kcg_lit_float32(0.0);
  outC->V23 = kcg_lit_float32(0.0);
  outC->V12 = kcg_lit_float32(0.0);
  /* _L1=(ModCount#1)/ */ ModCount_init(&outC->Context_ModCount_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ThreePhaseConverter_reset(outC_ThreePhaseConverter *outC)
{
  outC->init = kcg_true;
  /* _L1=(ModCount#1)/ */ ModCount_reset(&outC->Context_ModCount_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ThreePhaseConverter.c
** Generation date: 2020-06-09T13:25:07
*************************************************************$ */

