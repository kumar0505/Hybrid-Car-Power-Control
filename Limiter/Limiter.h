/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:20:42
*************************************************************$ */
#ifndef _Limiter_H_
#define _Limiter_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_float32 /* LUS_Input/, _L4/ */ LUS_Input;
  kcg_float32 /* HighLimit/, _L1/ */ HighLimit;
  kcg_float32 /* LowLimit/, _L5/ */ LowLimit;
} inC_Limiter;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float32 /* LUS_Output/, _L2/ */ LUS_Output;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Limiter;

/* ===========  node initialization and cycle functions  =========== */
/* Limiter/ */
extern void Limiter(inC_Limiter *inC, outC_Limiter *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Limiter_reset(outC_Limiter *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Limiter_init(outC_Limiter *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Limiter_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Limiter.h
** Generation date: 2020-06-09T13:20:42
*************************************************************$ */

