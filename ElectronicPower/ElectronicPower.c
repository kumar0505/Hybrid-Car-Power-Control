/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:16:45
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ElectronicPower.h"

/* ElectronicPower/ */
void ElectronicPower(inC_ElectronicPower *inC, outC_ElectronicPower *outC)
{
  kcg_float32 tmp;

  /* _L4=(Rectifier#1)/ */
  Rectifier(inC->V1, inC->V2, inC->V3, &outC->Context_Rectifier_1);
  /* _L2= */
  if (inC->BatteryUsed) {
    tmp = inC->Vbattery;
  }
  else {
    tmp = outC->Context_Rectifier_1.Vs;
  }
  outC->VBoost = /* _L8=(BoostConverter#1)/ */
    BoostConverter(
      kcg_lit_float32(20.),
      kcg_lit_float32(80.),
      tmp,
      inC->BatteryUsed);
  /* _L32= */
  if (inC->BatteryUsed) {
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


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ElectronicPower_reset(outC_ElectronicPower *outC)
{
  /* _L29=(Inverter#1)/ */ Inverter_reset(&outC->Context_Inverter_1);
  /* _L4=(Rectifier#1)/ */ Rectifier_reset(&outC->Context_Rectifier_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ElectronicPower.c
** Generation date: 2020-06-09T13:16:45
*************************************************************$ */

