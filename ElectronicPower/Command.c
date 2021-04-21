/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:16:45
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Command.h"

/* Command/ */
kcg_float32 Command(
  /* InterruptorConductionTime/, _L1/ */
  kcg_float32 InterruptorConductionTime,
  /* InterruptorLockingTime/, _L2/ */
  kcg_float32 InterruptorLockingTime)
{
  /* Alpha/, _L4/ */
  kcg_float32 Alpha;

  Alpha = InterruptorConductionTime / (InterruptorConductionTime +
      InterruptorLockingTime);
  return Alpha;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command.c
** Generation date: 2020-06-09T13:16:45
*************************************************************$ */

