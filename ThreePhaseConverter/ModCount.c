/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:25:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ModCount.h"

/* ModCount/ */
void ModCount(outC_ModCount *outC)
{
  outC->Count = (kcg_lit_int8(1) + outC->_L5) % kcg_lit_int8(6);
  outC->_L5 = outC->Count;
}

#ifndef KCG_USER_DEFINED_INIT
void ModCount_init(outC_ModCount *outC)
{
  outC->Count = kcg_lit_int8(0);
  outC->_L5 = kcg_lit_int8(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ModCount_reset(outC_ModCount *outC)
{
  outC->_L5 = kcg_lit_int8(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ModCount.c
** Generation date: 2020-06-09T13:25:07
*************************************************************$ */

