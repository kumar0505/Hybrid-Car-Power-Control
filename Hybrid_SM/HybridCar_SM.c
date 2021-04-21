/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:17:57
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "HybridCar_SM.h"

/* HybridCar_SM/ */
void HybridCar_SM(inC_HybridCar_SM *inC, outC_HybridCar_SM *outC)
{
  kcg_float32 tmp;
  kcg_bool tmp1;
  /* PowerManagement:Start_Off_State:<2> */
  kcg_bool tr_2_guard_Start_Off_State_PowerManagement;
  /* PowerManagement:Low_Acc_Or_Speed:<3> */
  kcg_bool tr_3_guard_Low_Acc_Or_Speed_PowerManagement;
  /* PowerManagement:Low_Acc_Or_Speed:<2> */
  kcg_bool tr_2_guard_Low_Acc_Or_Speed_PowerManagement;
  /* PowerManagement:Low_Acc_Or_Speed:<1> */
  kcg_bool tr_1_guard_Low_Acc_Or_Speed_PowerManagement;
  /* PowerManagement:Breaking_And_Regenrative_State:<3> */
  kcg_bool tr_3_guard_Breaking_And_Regenrative_State_PowerManagement;
  /* PowerManagement:Breaking_And_Regenrative_State:<2> */
  kcg_bool tr_2_guard_Breaking_And_Regenrative_State_PowerManagement;
  /* PowerManagement:Breaking_And_Regenrative_State:<1> */
  kcg_bool tr_1_guard_Breaking_And_Regenrative_State_PowerManagement;
  /* PowerManagement:High_Acc_Or_Speed:<3> */
  kcg_bool tr_3_guard_High_Acc_Or_Speed_PowerManagement;
  /* PowerManagement:High_Acc_Or_Speed:<2> */
  kcg_bool tr_2_guard_High_Acc_Or_Speed_PowerManagement;
  /* PowerManagement: */
  SSM_ST_PowerManagement PowerManagement_state_act;
  /* PowerManagement: */
  kcg_bool PowerManagement_reset_act;

  /* _L16=(DynamicControl#3)/ */
  DynamicControl(
    inC->Breaking_Input,
    inC->Accelarator_Input,
    inC->PriviousSpeed,
    &outC->Context_DynamicControl_3);
  outC->Acc = outC->Context_DynamicControl_3.Accelaration;
  outC->Deacc = outC->Context_DynamicControl_3.Deaccelaration;
  outC->Cur_Speed = outC->Context_DynamicControl_3.CurrentSpeed;
  /* PowerManagement: */
  switch (outC->PowerManagement_state_nxt) {
    case SSM_st_High_Acc_Or_Speed_PowerManagement :
      tr_3_guard_High_Acc_Or_Speed_PowerManagement = !inC->Contact;
      tr_2_guard_High_Acc_Or_Speed_PowerManagement = (outC->Deacc >
          kcg_lit_float32(0.)) & inC->Contact;
      tmp1 = ((outC->Acc < kcg_lit_float32(15.0)) | (outC->Cur_Speed <
            kcg_lit_float32(180.))) & inC->Contact & (outC->Deacc ==
          kcg_lit_float32(0.));
      if (tmp1) {
        PowerManagement_state_act = SSM_st_Low_Acc_Or_Speed_PowerManagement;
      }
      else if (tr_2_guard_High_Acc_Or_Speed_PowerManagement) {
        PowerManagement_state_act =
          SSM_st_Breaking_And_Regenrative_State_PowerManagement;
      }
      else if (tr_3_guard_High_Acc_Or_Speed_PowerManagement) {
        PowerManagement_state_act = SSM_st_Start_Off_State_PowerManagement;
      }
      else {
        PowerManagement_state_act = SSM_st_High_Acc_Or_Speed_PowerManagement;
      }
      PowerManagement_reset_act = tmp1 |
        (tr_2_guard_High_Acc_Or_Speed_PowerManagement |
          tr_3_guard_High_Acc_Or_Speed_PowerManagement);
      break;
    case SSM_st_Breaking_And_Regenrative_State_PowerManagement :
      tr_3_guard_Breaking_And_Regenrative_State_PowerManagement = ((outC->Acc <
            kcg_lit_float32(15.0)) | (outC->Cur_Speed < kcg_lit_float32(
              180.))) & inC->Contact & (outC->Deacc == kcg_lit_float32(0.));
      tr_2_guard_Breaking_And_Regenrative_State_PowerManagement = ((outC->Acc >
            kcg_lit_float32(15.0)) | (outC->Cur_Speed > kcg_lit_float32(
              180.))) & inC->Contact & (outC->Deacc == kcg_lit_float32(0.));
      tr_1_guard_Breaking_And_Regenrative_State_PowerManagement = !inC->Contact;
      if (tr_1_guard_Breaking_And_Regenrative_State_PowerManagement) {
        PowerManagement_state_act = SSM_st_Start_Off_State_PowerManagement;
      }
      else if (tr_2_guard_Breaking_And_Regenrative_State_PowerManagement) {
        PowerManagement_state_act = SSM_st_High_Acc_Or_Speed_PowerManagement;
      }
      else if (tr_3_guard_Breaking_And_Regenrative_State_PowerManagement) {
        PowerManagement_state_act = SSM_st_Low_Acc_Or_Speed_PowerManagement;
      }
      else {
        PowerManagement_state_act =
          SSM_st_Breaking_And_Regenrative_State_PowerManagement;
      }
      PowerManagement_reset_act =
        tr_1_guard_Breaking_And_Regenrative_State_PowerManagement |
        (tr_2_guard_Breaking_And_Regenrative_State_PowerManagement |
          tr_3_guard_Breaking_And_Regenrative_State_PowerManagement);
      break;
    case SSM_st_Low_Acc_Or_Speed_PowerManagement :
      tr_3_guard_Low_Acc_Or_Speed_PowerManagement = !inC->Contact;
      tr_2_guard_Low_Acc_Or_Speed_PowerManagement = (outC->Deacc >
          kcg_lit_float32(0.)) & inC->Contact;
      tr_1_guard_Low_Acc_Or_Speed_PowerManagement = ((outC->Acc >
            kcg_lit_float32(15.0)) | (outC->Cur_Speed > kcg_lit_float32(
              180.))) & inC->Contact & (outC->Deacc == kcg_lit_float32(0.));
      if (tr_1_guard_Low_Acc_Or_Speed_PowerManagement) {
        PowerManagement_state_act = SSM_st_High_Acc_Or_Speed_PowerManagement;
      }
      else if (tr_2_guard_Low_Acc_Or_Speed_PowerManagement) {
        PowerManagement_state_act =
          SSM_st_Breaking_And_Regenrative_State_PowerManagement;
      }
      else if (tr_3_guard_Low_Acc_Or_Speed_PowerManagement) {
        PowerManagement_state_act = SSM_st_Start_Off_State_PowerManagement;
      }
      else {
        PowerManagement_state_act = SSM_st_Low_Acc_Or_Speed_PowerManagement;
      }
      PowerManagement_reset_act = tr_1_guard_Low_Acc_Or_Speed_PowerManagement |
        (tr_2_guard_Low_Acc_Or_Speed_PowerManagement |
          tr_3_guard_Low_Acc_Or_Speed_PowerManagement);
      break;
    case SSM_st_Start_Off_State_PowerManagement :
      tr_2_guard_Start_Off_State_PowerManagement = ((outC->Acc >
            kcg_lit_float32(15.0)) | (outC->Cur_Speed > kcg_lit_float32(
              180.))) & inC->Contact;
      if (inC->Contact) {
        PowerManagement_state_act = SSM_st_Low_Acc_Or_Speed_PowerManagement;
      }
      else if (tr_2_guard_Start_Off_State_PowerManagement) {
        PowerManagement_state_act = SSM_st_High_Acc_Or_Speed_PowerManagement;
      }
      else {
        PowerManagement_state_act = SSM_st_Start_Off_State_PowerManagement;
      }
      PowerManagement_reset_act = inC->Contact |
        tr_2_guard_Start_Off_State_PowerManagement;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* PowerManagement: */
  switch (PowerManagement_state_act) {
    case SSM_st_High_Acc_Or_Speed_PowerManagement :
      tmp1 = kcg_false;
      if (PowerManagement_reset_act) {
        /* PowerManagement:High_Acc_Or_Speed:_L1=(ElectronicPower#3)/ */
        ElectronicPower_reset(&outC->Context_ElectronicPower_3);
      }
      /* PowerManagement:High_Acc_Or_Speed:_L1=(ElectronicPower#3)/ */
      ElectronicPower(
        inC->Vb,
        kcg_lit_float32(230.0),
        kcg_lit_float32(230.0),
        kcg_lit_float32(230.0),
        kcg_false,
        &outC->Context_ElectronicPower_3);
      tmp = outC->Context_ElectronicPower_3.VBoost;
      outC->ElectricEngine = kcg_true;
      outC->PetrolEngine = kcg_true;
      outC->Vmot1 = outC->Context_ElectronicPower_3.Vmot1;
      outC->Vmot2 = outC->Context_ElectronicPower_3.Vmot2;
      outC->Vmot3 = outC->Context_ElectronicPower_3.Vmot3;
      outC->PowerManagement_state_nxt = SSM_st_High_Acc_Or_Speed_PowerManagement;
      break;
    case SSM_st_Breaking_And_Regenrative_State_PowerManagement :
      tmp1 = kcg_false;
      if (PowerManagement_reset_act) {
        /* PowerManagement:Breaking_And_Regenrative_State:_L1=(ElectronicPower#2)/ */
        ElectronicPower_reset(&outC->Context_ElectronicPower_2);
      }
      /* PowerManagement:Breaking_And_Regenrative_State:_L1=(ElectronicPower#2)/ */
      ElectronicPower(
        inC->Vb,
        kcg_lit_float32(230.0),
        kcg_lit_float32(230.0),
        kcg_lit_float32(230.0),
        kcg_false,
        &outC->Context_ElectronicPower_2);
      tmp = outC->Context_ElectronicPower_2.VBoost;
      outC->ElectricEngine = kcg_true;
      outC->PetrolEngine = kcg_false;
      outC->Vmot1 = outC->Context_ElectronicPower_2.Vmot1;
      outC->Vmot2 = outC->Context_ElectronicPower_2.Vmot2;
      outC->Vmot3 = outC->Context_ElectronicPower_2.Vmot3;
      outC->PowerManagement_state_nxt =
        SSM_st_Breaking_And_Regenrative_State_PowerManagement;
      break;
    case SSM_st_Low_Acc_Or_Speed_PowerManagement :
      tmp1 = kcg_true;
      if (PowerManagement_reset_act) {
        /* PowerManagement:Low_Acc_Or_Speed:_L1=(ElectronicPower#1)/ */
        ElectronicPower_reset(&outC->Context_ElectronicPower_1);
      }
      /* PowerManagement:Low_Acc_Or_Speed:_L1=(ElectronicPower#1)/ */
      ElectronicPower(
        inC->Vb,
        kcg_lit_float32(0.0),
        kcg_lit_float32(0.0),
        kcg_lit_float32(0.0),
        kcg_true,
        &outC->Context_ElectronicPower_1);
      tmp = outC->Context_ElectronicPower_1.VBoost;
      outC->ElectricEngine = kcg_true;
      outC->PetrolEngine = kcg_false;
      outC->Vmot1 = outC->Context_ElectronicPower_1.Vmot1;
      outC->Vmot2 = outC->Context_ElectronicPower_1.Vmot2;
      outC->Vmot3 = outC->Context_ElectronicPower_1.Vmot3;
      outC->PowerManagement_state_nxt = SSM_st_Low_Acc_Or_Speed_PowerManagement;
      break;
    case SSM_st_Start_Off_State_PowerManagement :
      tmp1 = kcg_false;
      if (PowerManagement_reset_act) {
        /* PowerManagement:Start_Off_State:_L1=(ElectronicPower#4)/ */
        ElectronicPower_reset(&outC->Context_ElectronicPower_4);
      }
      /* PowerManagement:Start_Off_State:_L1=(ElectronicPower#4)/ */
      ElectronicPower(
        inC->Vb,
        kcg_lit_float32(0.0),
        kcg_lit_float32(0.0),
        kcg_lit_float32(0.0),
        kcg_false,
        &outC->Context_ElectronicPower_4);
      tmp = outC->Context_ElectronicPower_4.VBoost;
      outC->ElectricEngine = kcg_false;
      outC->PetrolEngine = kcg_false;
      outC->Vmot1 = outC->Context_ElectronicPower_4.Vmot1;
      outC->Vmot2 = outC->Context_ElectronicPower_4.Vmot2;
      outC->Vmot3 = outC->Context_ElectronicPower_4.Vmot3;
      outC->PowerManagement_state_nxt = SSM_st_Start_Off_State_PowerManagement;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* _L26=(BatteryLevel#1)/ */
  BatteryLevel(tmp, inC->Vb, tmp1, &outC->Context_BatteryLevel_1);
  outC->Battery_Level = outC->Context_BatteryLevel_1.BatteryLevel;
}

#ifndef KCG_USER_DEFINED_INIT
void HybridCar_SM_init(outC_HybridCar_SM *outC)
{
  outC->PetrolEngine = kcg_true;
  outC->ElectricEngine = kcg_true;
  outC->Vmot3 = kcg_lit_float32(0.0);
  outC->Vmot2 = kcg_lit_float32(0.0);
  outC->Vmot1 = kcg_lit_float32(0.0);
  outC->Battery_Level = kcg_lit_float32(0.0);
  outC->Cur_Speed = kcg_lit_float32(0.0);
  outC->Deacc = kcg_lit_float32(0.0);
  outC->Acc = kcg_lit_float32(0.0);
  /* _L26=(BatteryLevel#1)/ */ BatteryLevel_init(&outC->Context_BatteryLevel_1);
  /* PowerManagement:Start_Off_State:_L1=(ElectronicPower#4)/ */
  ElectronicPower_init(&outC->Context_ElectronicPower_4);
  /* PowerManagement:Low_Acc_Or_Speed:_L1=(ElectronicPower#1)/ */
  ElectronicPower_init(&outC->Context_ElectronicPower_1);
  /* PowerManagement:Breaking_And_Regenrative_State:_L1=(ElectronicPower#2)/ */
  ElectronicPower_init(&outC->Context_ElectronicPower_2);
  /* PowerManagement:High_Acc_Or_Speed:_L1=(ElectronicPower#3)/ */
  ElectronicPower_init(&outC->Context_ElectronicPower_3);
  /* _L16=(DynamicControl#3)/ */
  DynamicControl_init(&outC->Context_DynamicControl_3);
  outC->PowerManagement_state_nxt = SSM_st_Start_Off_State_PowerManagement;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void HybridCar_SM_reset(outC_HybridCar_SM *outC)
{
  /* _L26=(BatteryLevel#1)/ */ BatteryLevel_reset(&outC->Context_BatteryLevel_1);
  /* PowerManagement:Start_Off_State:_L1=(ElectronicPower#4)/ */
  ElectronicPower_reset(&outC->Context_ElectronicPower_4);
  /* PowerManagement:Low_Acc_Or_Speed:_L1=(ElectronicPower#1)/ */
  ElectronicPower_reset(&outC->Context_ElectronicPower_1);
  /* PowerManagement:Breaking_And_Regenrative_State:_L1=(ElectronicPower#2)/ */
  ElectronicPower_reset(&outC->Context_ElectronicPower_2);
  /* PowerManagement:High_Acc_Or_Speed:_L1=(ElectronicPower#3)/ */
  ElectronicPower_reset(&outC->Context_ElectronicPower_3);
  /* _L16=(DynamicControl#3)/ */
  DynamicControl_reset(&outC->Context_DynamicControl_3);
  outC->PowerManagement_state_nxt = SSM_st_Start_Off_State_PowerManagement;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** HybridCar_SM.c
** Generation date: 2020-06-09T13:17:57
*************************************************************$ */

