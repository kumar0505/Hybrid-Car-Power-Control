/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:14:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Limiter.h"

/* Limiter/ */
kcg_float32 Limiter(
  /* LUS_Input/, _L4/ */
  kcg_float32 LUS_Input,
  /* HighLimit/, _L1/ */
  kcg_float32 HighLimit,
  /* LowLimit/, _L5/ */
  kcg_float32 LowLimit)
{
  /* LUS_Output/, _L2/ */
  kcg_float32 LUS_Output;

  /* _L2= */
  if (LUS_Input >= HighLimit) {
    LUS_Output = HighLimit;
  }
  else /* _L6= */
  if (LUS_Input <= LowLimit) {
    LUS_Output = LowLimit;
  }
  else {
    LUS_Output = LUS_Input;
  }
  return LUS_Output;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Limiter.c
** Generation date: 2020-06-09T13:14:51
*************************************************************$ */

