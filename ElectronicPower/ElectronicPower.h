/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:16:45
*************************************************************$ */
#ifndef _ElectronicPower_H_
#define _ElectronicPower_H_

#include "kcg_types.h"
#include "BoostConverter.h"
#include "Inverter.h"
#include "Rectifier.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_float32 /* Vbattery/, _L1/ */ Vbattery;
  kcg_float32 /* V1/, _L5/ */ V1;
  kcg_float32 /* V2/, _L6/ */ V2;
  kcg_float32 /* V3/, _L7/ */ V3;
  kcg_bool /* BU/, BatteryUsed/, _L12/, _L33/, _L9/ */ BatteryUsed;
} inC_ElectronicPower;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float32 /* Vmot1/, _L31/ */ Vmot1;
  kcg_float32 /* Vmot2/, _L30/ */ Vmot2;
  kcg_float32 /* Vmot3/, _L29/ */ Vmot3;
  kcg_float32 /* VBoost/, _L8/ */ VBoost;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Inverter /* _L29=(Inverter#1)/ */ Context_Inverter_1;
  outC_Rectifier /* _L4=(Rectifier#1)/ */ Context_Rectifier_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_ElectronicPower;

/* ===========  node initialization and cycle functions  =========== */
/* ElectronicPower/ */
extern void ElectronicPower(
  inC_ElectronicPower *inC,
  outC_ElectronicPower *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ElectronicPower_reset(outC_ElectronicPower *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ElectronicPower_init(outC_ElectronicPower *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ElectronicPower_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ElectronicPower.h
** Generation date: 2020-06-09T13:16:45
*************************************************************$ */

