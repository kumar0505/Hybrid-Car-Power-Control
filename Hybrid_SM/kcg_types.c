/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:17:57
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_array_float32_4
kcg_bool kcg_comp_array_float32_4(
  array_float32_4 *kcg_c1,
  array_float32_4 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_float32_4 */

#ifdef kcg_use_array_float32_3
kcg_bool kcg_comp_array_float32_3(
  array_float32_3 *kcg_c1,
  array_float32_3 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_float32_3 */

#ifdef kcg_use_array_float32_5
kcg_bool kcg_comp_array_float32_5(
  array_float32_5 *kcg_c1,
  array_float32_5 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_float32_5 */

#ifdef kcg_use_array_float32_2
kcg_bool kcg_comp_array_float32_2(
  array_float32_2 *kcg_c1,
  array_float32_2 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 2; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_float32_2 */

#ifdef kcg_use_struct_3648
kcg_bool kcg_comp_struct_3648(struct_3648 *kcg_c1, struct_3648 *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_float32_2(&kcg_c1->items, &kcg_c2->items);
  kcg_equ = kcg_equ & (kcg_c1->idx == kcg_c2->idx);
  return kcg_equ;
}
#endif /* kcg_use_struct_3648 */

#ifdef kcg_use_struct_3654
kcg_bool kcg_comp_struct_3654(struct_3654 *kcg_c1, struct_3654 *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_float32_3(&kcg_c1->items, &kcg_c2->items);
  kcg_equ = kcg_equ & (kcg_c1->idx == kcg_c2->idx);
  return kcg_equ;
}
#endif /* kcg_use_struct_3654 */

#ifdef kcg_use_struct_3664
kcg_bool kcg_comp_struct_3664(struct_3664 *kcg_c1, struct_3664 *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_float32_4(&kcg_c1->items, &kcg_c2->items);
  kcg_equ = kcg_equ & (kcg_c1->idx == kcg_c2->idx);
  return kcg_equ;
}
#endif /* kcg_use_struct_3664 */

#ifdef kcg_use_struct_3674
kcg_bool kcg_comp_struct_3674(struct_3674 *kcg_c1, struct_3674 *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_float32_5(&kcg_c1->items, &kcg_c2->items);
  kcg_equ = kcg_equ & (kcg_c1->idx == kcg_c2->idx);
  return kcg_equ;
}
#endif /* kcg_use_struct_3674 */

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** kcg_types.c
** Generation date: 2020-06-09T13:17:57
*************************************************************$ */

