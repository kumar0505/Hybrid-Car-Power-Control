/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:16:45
*************************************************************$ */
#ifndef _BoostConverter_H_
#define _BoostConverter_H_

#include "kcg_types.h"
#include "Command.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* BoostConverter/ */
extern kcg_float32 BoostConverter(
  /* InterruptorConductionTime/, _L1/ */
  kcg_float32 InterruptorConductionTime,
  /* InterruptorLockingTime/, _L2/ */
  kcg_float32 InterruptorLockingTime,
  /* Vin/, _L8/ */
  kcg_float32 Vin,
  /* BatteryUsed/, _L10/ */
  kcg_bool BatteryUsed);



#endif /* _BoostConverter_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** BoostConverter.h
** Generation date: 2020-06-09T13:16:45
*************************************************************$ */

