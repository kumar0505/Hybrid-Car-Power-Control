/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:11:42
*************************************************************$ */
#ifndef _BatteryLevel_H_
#define _BatteryLevel_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_float32 /* Vboost/, _L3/ */ Vboost;
  kcg_float32 /* Vb/ */ Vb;
  kcg_bool /* BU/, _L13/ */ BU;
} inC_BatteryLevel;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float32 /* BatteryLevel/, _L7/ */ BatteryLevel;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_BatteryLevel;

/* ===========  node initialization and cycle functions  =========== */
/* BatteryLevel/ */
extern void BatteryLevel(inC_BatteryLevel *inC, outC_BatteryLevel *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void BatteryLevel_reset(outC_BatteryLevel *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void BatteryLevel_init(outC_BatteryLevel *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _BatteryLevel_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** BatteryLevel.h
** Generation date: 2020-06-09T13:11:42
*************************************************************$ */

