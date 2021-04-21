/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:14:51
*************************************************************$ */
#ifndef _DynamicControl_H_
#define _DynamicControl_H_

#include "kcg_types.h"
#include "Limiter.h"
#include "Shaper.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_float32 /* Breaking_Input/, _L3/ */ Breaking_Input;
  kcg_float32 /* Accelarator_Input/, _L4/ */ Accelarator_Input;
  kcg_float32 /* PriviousSpeed/, _L32/ */ PriviousSpeed;
} inC_DynamicControl;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float32 /* Accelaration/, _L7/ */ Accelaration;
  kcg_float32 /* Deaccelaration/, _L8/ */ Deaccelaration;
  kcg_float32 /* CurrentSpeed/, _L48/ */ CurrentSpeed;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Shaper /* _L30=(Shaper#3)/ */ Context_Shaper_3;
  outC_Shaper /* _L31=(Shaper#4)/ */ Context_Shaper_4;
  /* ----------------- no clocks of observable data ------------------ */
} outC_DynamicControl;

/* ===========  node initialization and cycle functions  =========== */
/* DynamicControl/ */
extern void DynamicControl(inC_DynamicControl *inC, outC_DynamicControl *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void DynamicControl_reset(outC_DynamicControl *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void DynamicControl_init(outC_DynamicControl *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _DynamicControl_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** DynamicControl.h
** Generation date: 2020-06-09T13:14:51
*************************************************************$ */

