/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:14:02
*************************************************************$ */
#ifndef _Command_H_
#define _Command_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_float32 /* InterruptorConductionTime/, _L1/ */ InterruptorConductionTime;
  kcg_float32 /* InterruptorLockingTime/, _L2/ */ InterruptorLockingTime;
} inC_Command;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float32 /* Alpha/, _L4/ */ Alpha;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Command;

/* ===========  node initialization and cycle functions  =========== */
/* Command/ */
extern void Command(inC_Command *inC, outC_Command *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Command_reset(outC_Command *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Command_init(outC_Command *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Command_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command.h
** Generation date: 2020-06-09T13:14:02
*************************************************************$ */

