/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:12:46
*************************************************************$ */
#ifndef _BoostConverter_H_
#define _BoostConverter_H_

#include "kcg_types.h"
#include "Command.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_float32 /* InterruptorConductionTime/, _L1/ */ InterruptorConductionTime;
  kcg_float32 /* InterruptorLockingTime/, _L2/ */ InterruptorLockingTime;
  kcg_float32 /* Vin/, _L8/ */ Vin;
  kcg_bool /* BatteryUsed/, _L10/ */ BatteryUsed;
} inC_BoostConverter;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float32 /* Vout/, _L9/ */ Vout;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_BoostConverter;

/* ===========  node initialization and cycle functions  =========== */
/* BoostConverter/ */
extern void BoostConverter(inC_BoostConverter *inC, outC_BoostConverter *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void BoostConverter_reset(outC_BoostConverter *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void BoostConverter_init(outC_BoostConverter *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _BoostConverter_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** BoostConverter.h
** Generation date: 2020-06-09T13:12:46
*************************************************************$ */

