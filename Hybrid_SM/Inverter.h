/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:17:57
*************************************************************$ */
#ifndef _Inverter_H_
#define _Inverter_H_

#include "kcg_types.h"
#include "ThreePhaseConverter.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float32 /* V3/, _L24/ */ V3;
  kcg_float32 /* V2/, _L21/ */ V2;
  kcg_float32 /* V1/, _L22/ */ V1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ThreePhaseConverter /* _L11=(ThreePhaseConverter#2)/ */ Context_ThreePhaseConverter_2;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Inverter;

/* ===========  node initialization and cycle functions  =========== */
/* Inverter/ */
extern void Inverter(/* Vac/, _L29/ */ kcg_float32 Vac, outC_Inverter *outC);

extern void Inverter_reset(outC_Inverter *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void Inverter_init(outC_Inverter *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Inverter_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Inverter.h
** Generation date: 2020-06-09T13:17:57
*************************************************************$ */

