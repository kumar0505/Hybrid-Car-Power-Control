/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:17:57
*************************************************************$ */
#ifndef _HybridCar_SM_H_
#define _HybridCar_SM_H_

#include "kcg_types.h"
#include "BatteryLevel.h"
#include "DynamicControl.h"
#include "ElectronicPower.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_float32 /* Breaking_Input/, _L15/ */ Breaking_Input;
  kcg_float32 /* Accelarator_Input/, _L25/ */ Accelarator_Input;
  kcg_float32 /* PriviousSpeed/, _L19/ */ PriviousSpeed;
  kcg_float32 /* Vb/, _L27/ */ Vb;
  kcg_bool /* Contact/ */ Contact;
} inC_HybridCar_SM;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* PetrolEngine/ */ PetrolEngine;
  kcg_bool /* ElectricEngine/ */ ElectricEngine;
  kcg_float32 /* Acc/, _L16/ */ Acc;
  kcg_float32 /* Deacc/, _L17/ */ Deacc;
  kcg_float32 /* Cur_Speed/, _L18/ */ Cur_Speed;
  kcg_float32 /* Battery_Level/, _L26/ */ Battery_Level;
  kcg_float32 /* Vmot1/ */ Vmot1;
  kcg_float32 /* Vmot2/ */ Vmot2;
  kcg_float32 /* Vmot3/ */ Vmot3;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_PowerManagement /* PowerManagement: */ PowerManagement_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_BatteryLevel /* _L26=(BatteryLevel#1)/ */ Context_BatteryLevel_1;
  outC_ElectronicPower /* PowerManagement:Start_Off_State:_L1=(ElectronicPower#4)/ */ Context_ElectronicPower_4;
  outC_ElectronicPower /* PowerManagement:Low_Acc_Or_Speed:_L1=(ElectronicPower#1)/ */ Context_ElectronicPower_1;
  outC_ElectronicPower /* PowerManagement:Breaking_And_Regenrative_State:_L1=(ElectronicPower#2)/ */ Context_ElectronicPower_2;
  outC_ElectronicPower /* PowerManagement:High_Acc_Or_Speed:_L1=(ElectronicPower#3)/ */ Context_ElectronicPower_3;
  outC_DynamicControl /* _L16=(DynamicControl#3)/ */ Context_DynamicControl_3;
  /* ----------------- no clocks of observable data ------------------ */
} outC_HybridCar_SM;

/* ===========  node initialization and cycle functions  =========== */
/* HybridCar_SM/ */
extern void HybridCar_SM(inC_HybridCar_SM *inC, outC_HybridCar_SM *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void HybridCar_SM_reset(outC_HybridCar_SM *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void HybridCar_SM_init(outC_HybridCar_SM *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _HybridCar_SM_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** HybridCar_SM.h
** Generation date: 2020-06-09T13:17:57
*************************************************************$ */

