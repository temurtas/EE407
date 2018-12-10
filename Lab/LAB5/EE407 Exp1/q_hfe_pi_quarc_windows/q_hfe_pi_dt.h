/*
 * q_hfe_pi_dt.h
 *
 * Real-Time Workshop code generation for Simulink model "q_hfe_pi.mdl".
 *
 * Model Version              : 1.69
 * Real-Time Workshop version : 7.4  (R2009b)  29-Jun-2009
 * C source code generated on : Thu Dec 03 15:25:02 2015
 *
 * Target selection: quarc_windows.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(t_task),
  sizeof(t_card)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "t_task",
  "t_card"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&q_hfe_pi_B.Sum1), 0, 0, 5 }
  ,

  { (char_T *)(&q_hfe_pi_DWork.HILInitialize_AIMinimums[0]), 0, 0, 70 },

  { (char_T *)(&q_hfe_pi_DWork.HILWriteAnalog1_PWORK), 11, 0, 3 },

  { (char_T *)(&q_hfe_pi_DWork.HILInitialize_ClockModes[0]), 6, 0, 43 },

  { (char_T *)(&q_hfe_pi_DWork.HILInitialize_POSortedChans[0]), 7, 0, 8 },

  { (char_T *)(&q_hfe_pi_DWork.HILReadAnalogTimebase_Task), 14, 0, 1 },

  { (char_T *)(&q_hfe_pi_DWork.HILInitialize_Card), 15, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  7U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&q_hfe_pi_P.HILInitialize_OOStart), 0, 0, 37 },

  { (char_T *)(&q_hfe_pi_P.HILInitialize_CKChannels[0]), 6, 0, 10 },

  { (char_T *)(&q_hfe_pi_P.HILInitialize_AIChannels[0]), 7, 0, 40 },

  { (char_T *)(&q_hfe_pi_P.HILInitialize_Active), 8, 0, 35 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  4U,
  rtPTransitions
};

/* [EOF] q_hfe_pi_dt.h */
