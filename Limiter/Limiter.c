/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:20:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Limiter.h"

/* Limiter/ */
void Limiter(inC_Limiter *inC, outC_Limiter *outC)
{
  /* _L2= */
  if (inC->LUS_Input >= inC->HighLimit) {
    outC->LUS_Output = inC->HighLimit;
  }
  else /* _L6= */
  if (inC->LUS_Input <= inC->LowLimit) {
    outC->LUS_Output = inC->LowLimit;
  }
  else {
    outC->LUS_Output = inC->LUS_Input;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Limiter_init(outC_Limiter *outC)
{
  outC->LUS_Output = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Limiter_reset(outC_Limiter *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Limiter.c
** Generation date: 2020-06-09T13:20:42
*************************************************************$ */

