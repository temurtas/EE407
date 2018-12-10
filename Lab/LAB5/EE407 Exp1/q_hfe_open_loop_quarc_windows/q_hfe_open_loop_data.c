/*
 * q_hfe_open_loop_data.c
 *
 * Real-Time Workshop code generation for Simulink model "q_hfe_open_loop.mdl".
 *
 * Model Version              : 1.85
 * Real-Time Workshop version : 7.4  (R2009b)  29-Jun-2009
 * C source code generated on : Thu Dec 03 14:05:54 2015
 *
 * Target selection: quarc_windows.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "q_hfe_open_loop.h"
#include "q_hfe_open_loop_private.h"

/* Block parameters (auto storage) */
Parameters_q_hfe_open_loop q_hfe_open_loop_P = {
  0.0,                                 /* Expression: set_other_outputs_at_start
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: set_other_outputs_at_switch_in
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: set_other_outputs_at_terminate
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: set_other_outputs_at_switch_out
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  10.0,                                /* Expression: analog_input_maximums
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  -10.0,                               /* Expression: analog_input_minimums
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  10.0,                                /* Expression: analog_output_maximums
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  -10.0,                               /* Expression: analog_output_minimums
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: initial_analog_outputs
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: final_analog_outputs
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: watchdog_analog_outputs
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  2.4305934065934067E+004,             /* Expression: pwm_frequency
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: pwm_leading_deadband
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: pwm_trailing_deadband
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: initial_pwm_outputs
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: final_pwm_outputs
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0.0,                                 /* Expression: watchdog_pwm_outputs
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  1063.8,                              /* Expression: K_TACH
                                        * Referenced by: '<S2>/Fan Calib (RPM//V)'
                                        */
  20.0,                                /* Expression: K_TEMP
                                        * Referenced by: '<S2>/T1 Calib (degC//V)'
                                        */
  20.0,                                /* Expression: K_TEMP
                                        * Referenced by: '<S2>/T2 Calib (degC//V)'
                                        */
  20.0,                                /* Expression: K_TEMP
                                        * Referenced by: '<S2>/T3 Calib (degC//V)'
                                        */
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<Root>/Vh (V)'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Vh (V)'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<Root>/Vh (V)'
                                        */
  5.0,                                 /* Expression: 5
                                        * Referenced by: '<Root>/Heater  Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Heater  Saturation'
                                        */
  4.0,                                 /* Expression: 4
                                        * Referenced by: '<Root>/Vb (V)'
                                        */
  6.0,                                 /* Expression: 6
                                        * Referenced by: '<Root>/Blower  Saturation'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Blower  Saturation'
                                        */
  -6.0,                                /* Expression: -6
                                        * Referenced by: '<S2>/Bias'
                                        */
  299.0,                               /* Expression: const
                                        * Referenced by: '<S1>/Constant'
                                        */

  /*  Computed Parameter: HILInitialize_CKChannels
   * Referenced by: '<S2>/HIL Initialize'
   */
  { 0, 1, 2 },
  1,                                   /* Computed Parameter: HILInitialize_DOWatchdog
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_EIInitial
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POModes
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POConfiguration
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POAlignment
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_POPolarity
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILReadAnalogTimebase_Clock
                                        * Referenced by: '<S2>/HIL Read Analog Timebase'
                                        */

  /*  Computed Parameter: HILInitialize_AIChannels
   * Referenced by: '<S2>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },

  /*  Computed Parameter: HILInitialize_AOChannels
   * Referenced by: '<S2>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },

  /*  Computed Parameter: HILInitialize_EIChannels
   * Referenced by: '<S2>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },
  4U,                                  /* Computed Parameter: HILInitialize_EIQuadrature
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */

  /*  Computed Parameter: HILInitialize_POChannels
   * Referenced by: '<S2>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },

  /*  Computed Parameter: HILReadAnalogTimebase_Channels
   * Referenced by: '<S2>/HIL Read Analog Timebase'
   */
  { 0U, 1U, 2U, 3U },
  100U,                                /* Computed Parameter: HILReadAnalogTimebase_SamplesIn
                                        * Referenced by: '<S2>/HIL Read Analog Timebase'
                                        */

  /*  Computed Parameter: HILWriteAnalog1_Channels
   * Referenced by: '<S2>/HIL Write Analog1'
   */
  { 0U, 1U },
  1U,                                  /* Computed Parameter: HeatingData_Decimation
                                        * Referenced by: '<Root>/Heating Data'
                                        */
  3,                                   /* Computed Parameter: ShowMessageonHost_MsgIcon
                                        * Referenced by: '<S3>/Show Message on Host'
                                        */

  /*  Expression: file_name_argument
   * Referenced by: '<Root>/Heating Data'
   */
  { 100U, 97U, 116U, 97U, 95U, 111U, 112U, 101U, 110U, 95U, 108U, 111U, 111U,
    112U, 46U, 109U, 97U, 116U, 0U },

  /*  Expression: variable_name_argument
   * Referenced by: '<Root>/Heating Data'
   */
  { 100U, 97U, 116U, 97U, 95U, 104U, 102U, 101U, 95U, 111U, 108U, 0U },
  1U,                                  /* Computed Parameter: HeatingData_FileFormat
                                        * Referenced by: '<Root>/Heating Data'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_Active
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_CKPStart
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_CKPEnter
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_AIPStart
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AIPEnter
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_AOPStart
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AOPEnter
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_AOStart
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AOEnter
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_AOTerminate
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AOExit
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_AOReset
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_DOPStart
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_DOPEnter
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_DOStart
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_DOEnter
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_DOTerminate
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_DOExit
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_DOReset
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_EIPStart
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_EIPEnter
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_EIStart
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_EIEnter
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_POPStart
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POPEnter
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_POStart
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POEnter
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_POTerminate
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POExit
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_POReset
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  0,                                   /* Computed Parameter: HILInitialize_OOReset
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_DOInitial
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILInitialize_DOFinal
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  1,                                   /* Computed Parameter: HILReadAnalogTimebase_Active
                                        * Referenced by: '<S2>/HIL Read Analog Timebase'
                                        */
  0                                    /* Computed Parameter: HILWriteAnalog1_Active
                                        * Referenced by: '<S2>/HIL Write Analog1'
                                        */
};
