/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:17:57
*************************************************************$ */
#ifndef _ModCount_H_
#define _ModCount_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  _2_int /* Count/ */ Count;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_int8 /* _L5/ */ _L5;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_ModCount;

/* ===========  node initialization and cycle functions  =========== */
/* ModCount/ */
extern void ModCount(outC_ModCount *outC);

extern void ModCount_reset(outC_ModCount *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void ModCount_init(outC_ModCount *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ModCount_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ModCount.h
** Generation date: 2020-06-09T13:17:57
*************************************************************$ */

