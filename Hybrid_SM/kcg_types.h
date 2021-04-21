/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/Hybrid_Car/KCG/config.txt
** Generation date: 2020-06-09T13:17:57
*************************************************************$ */
#ifndef _KCG_TYPES_H_
#define _KCG_TYPES_H_

#include "stddef.h"

#define KCG_MAPW_CPY

#include "./user_macros.h"

#ifndef kcg_char
#define kcg_char kcg_char
typedef char kcg_char;
#endif /* kcg_char */

#ifndef kcg_bool
#define kcg_bool kcg_bool
typedef unsigned char kcg_bool;
#endif /* kcg_bool */

#ifndef kcg_float32
#define kcg_float32 kcg_float32
typedef float kcg_float32;
#endif /* kcg_float32 */

#ifndef kcg_float64
#define kcg_float64 kcg_float64
typedef double kcg_float64;
#endif /* kcg_float64 */

#ifndef kcg_size
#define kcg_size kcg_size
typedef ptrdiff_t kcg_size;
#endif /* kcg_size */

#ifndef kcg_uint64
#define kcg_uint64 kcg_uint64
typedef unsigned long long kcg_uint64;
#endif /* kcg_uint64 */

#ifndef kcg_uint32
#define kcg_uint32 kcg_uint32
typedef unsigned long kcg_uint32;
#endif /* kcg_uint32 */

#ifndef kcg_uint16
#define kcg_uint16 kcg_uint16
typedef unsigned short kcg_uint16;
#endif /* kcg_uint16 */

#ifndef kcg_uint8
#define kcg_uint8 kcg_uint8
typedef unsigned char kcg_uint8;
#endif /* kcg_uint8 */

#ifndef kcg_int64
#define kcg_int64 kcg_int64
typedef signed long long kcg_int64;
#endif /* kcg_int64 */

#ifndef kcg_int32
#define kcg_int32 kcg_int32
typedef signed long kcg_int32;
#endif /* kcg_int32 */

#ifndef kcg_int16
#define kcg_int16 kcg_int16
typedef signed short kcg_int16;
#endif /* kcg_int16 */

#ifndef kcg_int8
#define kcg_int8 kcg_int8
typedef signed char kcg_int8;
#endif /* kcg_int8 */

#ifndef kcg_lit_float32
#define kcg_lit_float32(kcg_C1) ((kcg_float32) (kcg_C1))
#endif /* kcg_lit_float32 */

#ifndef kcg_lit_float64
#define kcg_lit_float64(kcg_C1) ((kcg_float64) (kcg_C1))
#endif /* kcg_lit_float64 */

#ifndef kcg_lit_size
#define kcg_lit_size(kcg_C1) ((kcg_size) (kcg_C1))
#endif /* kcg_lit_size */

#ifndef kcg_lit_uint64
#define kcg_lit_uint64(kcg_C1) ((kcg_uint64) (kcg_C1))
#endif /* kcg_lit_uint64 */

#ifndef kcg_lit_uint32
#define kcg_lit_uint32(kcg_C1) ((kcg_uint32) (kcg_C1))
#endif /* kcg_lit_uint32 */

#ifndef kcg_lit_uint16
#define kcg_lit_uint16(kcg_C1) ((kcg_uint16) (kcg_C1))
#endif /* kcg_lit_uint16 */

#ifndef kcg_lit_uint8
#define kcg_lit_uint8(kcg_C1) ((kcg_uint8) (kcg_C1))
#endif /* kcg_lit_uint8 */

#ifndef kcg_lit_int64
#define kcg_lit_int64(kcg_C1) ((kcg_int64) (kcg_C1))
#endif /* kcg_lit_int64 */

#ifndef kcg_lit_int32
#define kcg_lit_int32(kcg_C1) ((kcg_int32) (kcg_C1))
#endif /* kcg_lit_int32 */

#ifndef kcg_lit_int16
#define kcg_lit_int16(kcg_C1) ((kcg_int16) (kcg_C1))
#endif /* kcg_lit_int16 */

#ifndef kcg_lit_int8
#define kcg_lit_int8(kcg_C1) ((kcg_int8) (kcg_C1))
#endif /* kcg_lit_int8 */

#ifndef kcg_false
#define kcg_false ((kcg_bool) 0)
#endif /* kcg_false */

#ifndef kcg_true
#define kcg_true ((kcg_bool) 1)
#endif /* kcg_true */

#ifndef kcg_lsl_uint64
#define kcg_lsl_uint64(kcg_C1, kcg_C2)                                        \
  ((kcg_uint64) ((kcg_C1) << (kcg_C2)) & 0xffffffffffffffff)
#endif /* kcg_lsl_uint64 */

#ifndef kcg_lsl_uint32
#define kcg_lsl_uint32(kcg_C1, kcg_C2)                                        \
  ((kcg_uint32) ((kcg_C1) << (kcg_C2)) & 0xffffffff)
#endif /* kcg_lsl_uint32 */

#ifndef kcg_lsl_uint16
#define kcg_lsl_uint16(kcg_C1, kcg_C2)                                        \
  ((kcg_uint16) ((kcg_C1) << (kcg_C2)) & 0xffff)
#endif /* kcg_lsl_uint16 */

#ifndef kcg_lsl_uint8
#define kcg_lsl_uint8(kcg_C1, kcg_C2)                                         \
  ((kcg_uint8) ((kcg_C1) << (kcg_C2)) & 0xff)
#endif /* kcg_lsl_uint8 */

#ifndef kcg_lnot_uint64
#define kcg_lnot_uint64(kcg_C1) ((kcg_C1) ^ 0xffffffffffffffff)
#endif /* kcg_lnot_uint64 */

#ifndef kcg_lnot_uint32
#define kcg_lnot_uint32(kcg_C1) ((kcg_C1) ^ 0xffffffff)
#endif /* kcg_lnot_uint32 */

#ifndef kcg_lnot_uint16
#define kcg_lnot_uint16(kcg_C1) ((kcg_C1) ^ 0xffff)
#endif /* kcg_lnot_uint16 */

#ifndef kcg_lnot_uint8
#define kcg_lnot_uint8(kcg_C1) ((kcg_C1) ^ 0xff)
#endif /* kcg_lnot_uint8 */

#ifndef kcg_assign
#include "kcg_assign.h"
#endif /* kcg_assign */

#ifndef kcg_assign_struct
#define kcg_assign_struct kcg_assign
#endif /* kcg_assign_struct */

#ifndef kcg_assign_array
#define kcg_assign_array kcg_assign
#endif /* kcg_assign_array */

/* HybridCar_SM/PowerManagement: */
typedef enum kcg_tag_SSM_TR_PowerManagement {
  SSM_TR_no_trans_PowerManagement,
  SSM_TR_Start_Off_State_Low_Acc_Or_Speed_1_Start_Off_State_PowerManagement,
  SSM_TR_Start_Off_State_High_Acc_Or_Speed_2_Start_Off_State_PowerManagement,
  SSM_TR_Low_Acc_Or_Speed_High_Acc_Or_Speed_1_Low_Acc_Or_Speed_PowerManagement,
  SSM_TR_Low_Acc_Or_Speed_Breaking_And_Regenrative_State_2_Low_Acc_Or_Speed_PowerManagement,
  SSM_TR_Low_Acc_Or_Speed_Start_Off_State_3_Low_Acc_Or_Speed_PowerManagement,
  SSM_TR_Breaking_And_Regenrative_State_Start_Off_State_1_Breaking_And_Regenrative_State_PowerManagement,
  _3_SSM_TR_Breaking_And_Regenrative_State_High_Acc_Or_Speed_2_Breaking_And_Regenrative_State_PowerManagement,
  _4_SSM_TR_Breaking_And_Regenrative_State_Low_Acc_Or_Speed_3_Breaking_And_Regenrative_State_PowerManagement,
  SSM_TR_High_Acc_Or_Speed_Low_Acc_Or_Speed_1_High_Acc_Or_Speed_PowerManagement,
  SSM_TR_High_Acc_Or_Speed_Breaking_And_Regenrative_State_2_High_Acc_Or_Speed_PowerManagement,
  SSM_TR_High_Acc_Or_Speed_Start_Off_State_3_High_Acc_Or_Speed_PowerManagement
} SSM_TR_PowerManagement;
/* HybridCar_SM/PowerManagement: */
typedef enum kcg_tag_SSM_ST_PowerManagement {
  SSM_st_Start_Off_State_PowerManagement,
  SSM_st_Low_Acc_Or_Speed_PowerManagement,
  SSM_st_Breaking_And_Regenrative_State_PowerManagement,
  SSM_st_High_Acc_Or_Speed_PowerManagement
} SSM_ST_PowerManagement;
typedef kcg_float32 array_float32_2[2];

typedef kcg_float32 array_float32_5[5];

typedef kcg_float32 array_float32_3[3];

typedef kcg_float32 array_float32_4[4];

typedef struct kcg_tag_struct_3674 {
  kcg_size idx;
  array_float32_5 items;
} struct_3674;

typedef struct kcg_tag_struct_3664 {
  kcg_size idx;
  array_float32_4 items;
} struct_3664;

typedef struct kcg_tag_struct_3654 {
  kcg_size idx;
  array_float32_3 items;
} struct_3654;

typedef struct kcg_tag_struct_3648 {
  kcg_size idx;
  array_float32_2 items;
} struct_3648;

/* int/ */
typedef kcg_int8 _2_int;

#ifndef kcg_copy_struct_3648
#define kcg_copy_struct_3648(kcg_C1, kcg_C2)                                  \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_3648)))
#endif /* kcg_copy_struct_3648 */

#ifndef kcg_copy_struct_3654
#define kcg_copy_struct_3654(kcg_C1, kcg_C2)                                  \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_3654)))
#endif /* kcg_copy_struct_3654 */

#ifndef kcg_copy_struct_3664
#define kcg_copy_struct_3664(kcg_C1, kcg_C2)                                  \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_3664)))
#endif /* kcg_copy_struct_3664 */

#ifndef kcg_copy_struct_3674
#define kcg_copy_struct_3674(kcg_C1, kcg_C2)                                  \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_3674)))
#endif /* kcg_copy_struct_3674 */

#ifndef kcg_copy_array_float32_4
#define kcg_copy_array_float32_4(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_float32_4)))
#endif /* kcg_copy_array_float32_4 */

#ifndef kcg_copy_array_float32_3
#define kcg_copy_array_float32_3(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_float32_3)))
#endif /* kcg_copy_array_float32_3 */

#ifndef kcg_copy_array_float32_5
#define kcg_copy_array_float32_5(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_float32_5)))
#endif /* kcg_copy_array_float32_5 */

#ifndef kcg_copy_array_float32_2
#define kcg_copy_array_float32_2(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_float32_2)))
#endif /* kcg_copy_array_float32_2 */

#ifdef kcg_use_struct_3648
#ifndef kcg_comp_struct_3648
extern kcg_bool kcg_comp_struct_3648(struct_3648 *kcg_c1, struct_3648 *kcg_c2);
#endif /* kcg_comp_struct_3648 */
#endif /* kcg_use_struct_3648 */

#ifdef kcg_use_struct_3654
#ifndef kcg_comp_struct_3654
extern kcg_bool kcg_comp_struct_3654(struct_3654 *kcg_c1, struct_3654 *kcg_c2);
#endif /* kcg_comp_struct_3654 */
#endif /* kcg_use_struct_3654 */

#ifdef kcg_use_struct_3664
#ifndef kcg_comp_struct_3664
extern kcg_bool kcg_comp_struct_3664(struct_3664 *kcg_c1, struct_3664 *kcg_c2);
#endif /* kcg_comp_struct_3664 */
#endif /* kcg_use_struct_3664 */

#ifdef kcg_use_struct_3674
#ifndef kcg_comp_struct_3674
extern kcg_bool kcg_comp_struct_3674(struct_3674 *kcg_c1, struct_3674 *kcg_c2);
#endif /* kcg_comp_struct_3674 */
#endif /* kcg_use_struct_3674 */

#ifdef kcg_use_array_float32_4
#ifndef kcg_comp_array_float32_4
extern kcg_bool kcg_comp_array_float32_4(
  array_float32_4 *kcg_c1,
  array_float32_4 *kcg_c2);
#endif /* kcg_comp_array_float32_4 */
#endif /* kcg_use_array_float32_4 */

#ifdef kcg_use_array_float32_3
#ifndef kcg_comp_array_float32_3
extern kcg_bool kcg_comp_array_float32_3(
  array_float32_3 *kcg_c1,
  array_float32_3 *kcg_c2);
#endif /* kcg_comp_array_float32_3 */
#endif /* kcg_use_array_float32_3 */

#ifdef kcg_use_array_float32_5
#ifndef kcg_comp_array_float32_5
extern kcg_bool kcg_comp_array_float32_5(
  array_float32_5 *kcg_c1,
  array_float32_5 *kcg_c2);
#endif /* kcg_comp_array_float32_5 */
#endif /* kcg_use_array_float32_5 */

#ifdef kcg_use_array_float32_2
#ifndef kcg_comp_array_float32_2
extern kcg_bool kcg_comp_array_float32_2(
  array_float32_2 *kcg_c1,
  array_float32_2 *kcg_c2);
#endif /* kcg_comp_array_float32_2 */
#endif /* kcg_use_array_float32_2 */

#endif /* _KCG_TYPES_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** kcg_types.h
** Generation date: 2020-06-09T13:17:57
*************************************************************$ */

