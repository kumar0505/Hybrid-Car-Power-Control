/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:16:45
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Inverter.h"

/* Inverter/ */
void Inverter(/* Vac/, _L29/ */ kcg_float32 Vac, outC_Inverter *outC)
{
  /* _L11=(ThreePhaseConverter#2)/ */
  ThreePhaseConverter(Vac, &outC->Context_ThreePhaseConverter_2);
  outC->V3 = (outC->Context_ThreePhaseConverter_2.V31 -
      outC->Context_ThreePhaseConverter_2.V23) / kcg_lit_float32(3.0);
  outC->V1 = (outC->Context_ThreePhaseConverter_2.V12 -
      outC->Context_ThreePhaseConverter_2.V31) / kcg_lit_float32(3.0);
  outC->V2 = (outC->Context_ThreePhaseConverter_2.V23 -
      outC->Context_ThreePhaseConverter_2.V12) / kcg_lit_float32(3.0);
}

#ifndef KCG_USER_DEFINED_INIT
void Inverter_init(outC_Inverter *outC)
{
  outC->V1 = kcg_lit_float32(0.0);
  outC->V2 = kcg_lit_float32(0.0);
  outC->V3 = kcg_lit_float32(0.0);
  /* _L11=(ThreePhaseConverter#2)/ */
  ThreePhaseConverter_init(&outC->Context_ThreePhaseConverter_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Inverter_reset(outC_Inverter *outC)
{
  /* _L11=(ThreePhaseConverter#2)/ */
  ThreePhaseConverter_reset(&outC->Context_ThreePhaseConverter_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Inverter.c
** Generation date: 2020-06-09T13:16:45
*************************************************************$ */

