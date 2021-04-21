/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:16:45
*************************************************************$ */
#ifndef _ThreePhaseConverter_H_
#define _ThreePhaseConverter_H_

#include "kcg_types.h"
#include "ModCount.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* K1/ */ K1;
  kcg_bool /* K2/ */ K2;
  kcg_bool /* K3/ */ K3;
  kcg_bool /* notK1/ */ notK1;
  kcg_bool /* notK2/ */ notK2;
  kcg_bool /* notK3/ */ notK3;
  kcg_float32 /* V12/, _L20/ */ V12;
  kcg_float32 /* V23/, _L26/ */ V23;
  kcg_float32 /* V31/, _L38/ */ V31;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ModCount /* _L1=(ModCount#1)/ */ Context_ModCount_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_ThreePhaseConverter;

/* ===========  node initialization and cycle functions  =========== */
/* ThreePhaseConverter/ */
extern void ThreePhaseConverter(
  /* Vac/, _L13/, _L28/, _L36/ */
  kcg_float32 Vac,
  outC_ThreePhaseConverter *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ThreePhaseConverter_reset(outC_ThreePhaseConverter *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ThreePhaseConverter_init(outC_ThreePhaseConverter *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ThreePhaseConverter_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ThreePhaseConverter.h
** Generation date: 2020-06-09T13:16:45
*************************************************************$ */

