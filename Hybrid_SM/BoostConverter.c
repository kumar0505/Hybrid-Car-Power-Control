/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:17:57
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BoostConverter.h"

/* BoostConverter/ */
kcg_float32 BoostConverter(
  /* InterruptorConductionTime/, _L1/ */
  kcg_float32 InterruptorConductionTime,
  /* InterruptorLockingTime/, _L2/ */
  kcg_float32 InterruptorLockingTime,
  /* Vin/, _L8/ */
  kcg_float32 Vin,
  /* BatteryUsed/, _L10/ */
  kcg_bool BatteryUsed)
{
  /* _L4/ */
  kcg_float32 _L4;
  /* Vout/, _L9/ */
  kcg_float32 Vout;

  _L4 = kcg_lit_float32(1.0) - /* _L3=(Command#1)/ */
    Command(InterruptorConductionTime, InterruptorLockingTime);
  /* _L9= */
  if (BatteryUsed) {
    Vout = Vin / _L4;
  }
  else {
    Vout = _L4 * Vin;
  }
  return Vout;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** BoostConverter.c
** Generation date: 2020-06-09T13:17:57
*************************************************************$ */

