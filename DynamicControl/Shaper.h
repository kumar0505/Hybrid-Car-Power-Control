/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:14:51
*************************************************************$ */
#ifndef _Shaper_H_
#define _Shaper_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float32 /* RL_Output/, _L13/ */ RL_Output;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Shaper;

/* ===========  node initialization and cycle functions  =========== */
/* Shaper/ */
extern void Shaper(
  /* RL_Input/, _L5/ */
  kcg_float32 RL_Input,
  /* _L14/, deltaT/ */
  kcg_float32 deltaT,
  /* Falling/, _L8/ */
  kcg_float32 Falling,
  /* Rising/, _L2/ */
  kcg_float32 Rising,
  outC_Shaper *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Shaper_reset(outC_Shaper *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Shaper_init(outC_Shaper *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Shaper_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Shaper.h
** Generation date: 2020-06-09T13:14:51
*************************************************************$ */

