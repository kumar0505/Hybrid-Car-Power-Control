/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:16:45
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Max3_math_float32.h"

/* math::Max3/ */
kcg_float32 Max3_math_float32(
  /* I1/, _L1/ */
  kcg_float32 I1_float32,
  /* I2/, _L2/ */
  kcg_float32 I2_float32,
  /* I3/, _L3/ */
  kcg_float32 I3_float32)
{
  /* Ma3_Output/, _L8/ */
  kcg_float32 Ma3_Output_float32;

  /* _L8= */
  if ((I1_float32 >= I2_float32) & (I1_float32 >= I3_float32)) {
    Ma3_Output_float32 = I1_float32;
  }
  else /* _L9= */
  if (I2_float32 >= I3_float32) {
    Ma3_Output_float32 = I2_float32;
  }
  else {
    Ma3_Output_float32 = I3_float32;
  }
  return Ma3_Output_float32;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Max3_math_float32.c
** Generation date: 2020-06-09T13:16:45
*************************************************************$ */

