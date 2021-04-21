/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:17:57
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ElectronicPower.h"

/* ElectronicPower/ */
void ElectronicPower(
  /* Vbattery/, _L1/ */
  kcg_float32 Vbattery,
  /* V1/, _L5/ */
  kcg_float32 V1,
  /* V2/, _L6/ */
  kcg_float32 V2,
  /* V3/, _L7/ */
  kcg_float32 V3,
  /* BU/, BatteryUsed/, _L12/, _L33/, _L9/ */
  kcg_bool BatteryUsed,
  outC_ElectronicPower *outC)
{
  kcg_float32 tmp;

  /* _L4=(Rectifier#1)/ */ Rectifier(V1, V2, V3, &outC->Context_Rectifier_1);
  /* _L2= */
  if (BatteryUsed) {
    tmp = Vbattery;
  }
  else {
    tmp = outC->Context_Rectifier_1.Vs;
  }
  outC->VBoost = /* _L8=(BoostConverter#1)/ */
    BoostConverter(
      kcg_lit_float32(20.),
      kcg_lit_float32(80.),
      tmp,
      BatteryUsed);
  /* _L32= */
  if (BatteryUsed) {
    tmp = outC->VBoost;
  }
  else {
    tmp = kcg_lit_float32(0.0);
  }
  /* _L29=(Inverter#1)/ */ Inverter(tmp, &outC->Context_Inverter_1);
  outC->Vmot3 = outC->Context_Inverter_1.V3;
  outC->Vmot2 = outC->Context_Inverter_1.V2;
  outC->Vmot1 = outC->Context_Inverter_1.V1;
}

#ifndef KCG_USER_DEFINED_INIT
void ElectronicPower_init(outC_ElectronicPower *outC)
{
  outC->VBoost = kcg_lit_float32(0.0);
  outC->Vmot3 = kcg_lit_float32(0.0);
  outC->Vmot2 = kcg_lit_float32(0.0);
  outC->Vmot1 = kcg_lit_float32(0.0);
  /* _L29=(Inverter#1)/ */ Inverter_init(&outC->Context_Inverter_1);
  /* _L4=(Rectifier#1)/ */ Rectifier_init(&outC->Context_Rectifier_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void ElectronicPower_reset(outC_ElectronicPower *outC)
{
  /* _L29=(Inverter#1)/ */ Inverter_reset(&outC->Context_Inverter_1);
  /* _L4=(Rectifier#1)/ */ Rectifier_reset(&outC->Context_Rectifier_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ElectronicPower.c
** Generation date: 2020-06-09T13:17:57
*************************************************************$ */

