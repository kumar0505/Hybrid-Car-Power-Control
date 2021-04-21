/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:16:45
*************************************************************$ */
#ifndef _Rectifier_H_
#define _Rectifier_H_

#include "kcg_types.h"
#include "Max3_math_float32.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float32 /* Vs/, _L15/ */ Vs;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  struct_2010 /* _L6= */ fby_3;
  struct_2004 /* _L7= */ fby_4;
  struct_2030 /* _L4= */ fby_1;
  struct_2020 /* _L5= */ fby_2;
  kcg_bool init;
  kcg_float32 /* _L3/ */ _L3;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Rectifier;

/* ===========  node initialization and cycle functions  =========== */
/* Rectifier/ */
extern void Rectifier(
  /* V1/, _L1/ */
  kcg_float32 V1,
  /* V2/, _L2/ */
  kcg_float32 V2,
  /* V3/ */
  kcg_float32 V3,
  outC_Rectifier *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Rectifier_reset(outC_Rectifier *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Rectifier_init(outC_Rectifier *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Rectifier_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Rectifier.h
** Generation date: 2020-06-09T13:16:45
*************************************************************$ */

