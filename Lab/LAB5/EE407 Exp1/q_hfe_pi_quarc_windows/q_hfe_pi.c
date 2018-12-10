/*
 * q_hfe_pi.c
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

#include "q_hfe_pi.h"
#include "q_hfe_pi_private.h"
#include <stdio.h>
#include "q_hfe_pi_dt.h"

/* Block signals (auto storage) */
BlockIO_q_hfe_pi q_hfe_pi_B;

/* Continuous states */
ContinuousStates_q_hfe_pi q_hfe_pi_X;

/* Block states (auto storage) */
D_Work_q_hfe_pi q_hfe_pi_DWork;

/* Real-time model */
RT_MODEL_q_hfe_pi q_hfe_pi_M_;
RT_MODEL_q_hfe_pi *q_hfe_pi_M = &q_hfe_pi_M_;

/*
 * This function updates continuous states using the ODE1 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE1_IntgData *id = (ODE1_IntgData *)rtsiGetSolverData(si);
  real_T *f0 = id->f[0];
  int_T i;
  int_T nXc = 1;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  rtsiSetdX(si, f0);
  q_hfe_pi_derivatives();
  rtsiSetT(si, tnew);
  for (i = 0; i < nXc; i++) {
    *x += h * f0[i];
    x++;
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model output function */
void q_hfe_pi_output(int_T tid)
{
  /* local block i/o variables */
  real_T rtb_HILReadAnalogTimebase_o1;
  real_T rtb_HILReadAnalogTimebase_o2;
  real_T rtb_HILReadAnalogTimebase_o3;
  real_T rtb_Bias;
  real_T rtb_Sum3;
  if (rtmIsMajorTimeStep(q_hfe_pi_M)) {
    /* set solver stop time */
    if (!(q_hfe_pi_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&q_hfe_pi_M->solverInfo,
                            ((q_hfe_pi_M->Timing.clockTickH0 + 1) *
        q_hfe_pi_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&q_hfe_pi_M->solverInfo,
                            ((q_hfe_pi_M->Timing.clockTick0 + 1) *
        q_hfe_pi_M->Timing.stepSize0 + q_hfe_pi_M->Timing.clockTickH0 *
        q_hfe_pi_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(q_hfe_pi_M)) {
    q_hfe_pi_M->Timing.t[0] = rtsiGetT(&q_hfe_pi_M->solverInfo);
  }

  {
    real_T rtb_SliderGain_g;
    if (rtmIsMajorTimeStep(q_hfe_pi_M)) {
      /* S-Function (hil_read_analog_timebase_block): '<S1>/HIL Read Analog Timebase' */

      /* S-Function Block: q_hfe_pi/Heatflow/HIL Read Analog Timebase (hil_read_analog_timebase_block) */
      {
        t_error result;
        result = hil_task_read_analog(q_hfe_pi_DWork.HILReadAnalogTimebase_Task,
          1, &q_hfe_pi_DWork.HILReadAnalogTimebase_Buffer[0]);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(q_hfe_pi_M, _rt_error_message);
        }

        rtb_HILReadAnalogTimebase_o1 =
          q_hfe_pi_DWork.HILReadAnalogTimebase_Buffer[0];
        rtb_HILReadAnalogTimebase_o2 =
          q_hfe_pi_DWork.HILReadAnalogTimebase_Buffer[1];
        rtb_HILReadAnalogTimebase_o3 =
          q_hfe_pi_DWork.HILReadAnalogTimebase_Buffer[2];
        rtb_Bias = q_hfe_pi_DWork.HILReadAnalogTimebase_Buffer[3];
      }
    }

    /* SignalGenerator: '<Root>/Signal Generator' */
    {
      real_T phase = q_hfe_pi_P.SignalGenerator_Frequency*q_hfe_pi_M->Timing.t[0];
      phase = phase-floor(phase);
      rtb_Sum3 = ( phase >= 0.5 ) ?
        q_hfe_pi_P.SignalGenerator_Amplitude :
        -q_hfe_pi_P.SignalGenerator_Amplitude;
    }

    /* Sum: '<Root>/Sum1' incorporates:
     *  Constant: '<Root>/Offset (deg C)'
     *  Gain: '<Root>/Amplitude  (deg C)'
     */
    q_hfe_pi_B.Sum1 = q_hfe_pi_P.AmplitudedegC_Gain * rtb_Sum3 +
      q_hfe_pi_P.OffsetdegC_Value;
    if (rtmIsMajorTimeStep(q_hfe_pi_M)) {
      /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
       *  Constant: '<Root>/Choose Sensor'
       *  Gain: '<S1>/T1 Calib (degC//V)'
       *  Gain: '<S1>/T2 Calib (degC//V)'
       *  Gain: '<S1>/T3 Calib (degC//V)'
       */
      switch ((int32_T)q_hfe_pi_P.ChooseSensor_Value) {
       case 1:
        q_hfe_pi_B.MultiportSwitch = q_hfe_pi_P.T1CalibdegCV_Gain *
          rtb_HILReadAnalogTimebase_o1;
        break;

       case 2:
        q_hfe_pi_B.MultiportSwitch = q_hfe_pi_P.T2CalibdegCV_Gain *
          rtb_HILReadAnalogTimebase_o2;
        break;

       default:
        q_hfe_pi_B.MultiportSwitch = q_hfe_pi_P.T3CalibdegCV_Gain *
          rtb_HILReadAnalogTimebase_o3;
        break;
      }
    }

    /* Gain: '<S5>/Slider Gain' incorporates:
     *  Gain: '<S3>/Slider Gain'
     *  Sum: '<S2>/Sum'
     */
    rtb_SliderGain_g = (q_hfe_pi_P.SliderGain_Gain * q_hfe_pi_B.Sum1 -
                        q_hfe_pi_B.MultiportSwitch) *
      q_hfe_pi_P.SliderGain_Gain_o;

    /* Integrator: '<S2>/Integrator'
     *
     * Regarding '<S2>/Integrator':
     *  Limited Integrator
     */
    if (q_hfe_pi_X.Integrator_CSTATE >= q_hfe_pi_P.Integrator_UpperSat ) {
      q_hfe_pi_X.Integrator_CSTATE = q_hfe_pi_P.Integrator_UpperSat;
    } else if (q_hfe_pi_X.Integrator_CSTATE <= q_hfe_pi_P.Integrator_LowerSat )
    {
      q_hfe_pi_X.Integrator_CSTATE = q_hfe_pi_P.Integrator_LowerSat;
    }

    rtb_Sum3 = q_hfe_pi_X.Integrator_CSTATE;

    /* Sum: '<S2>/Sum3' */
    rtb_Sum3 += rtb_SliderGain_g;

    /* Saturate: '<Root>/Heater  Saturation' */
    q_hfe_pi_B.HeaterSaturation = rt_SATURATE(rtb_Sum3,
      q_hfe_pi_P.HeaterSaturation_LowerSat, q_hfe_pi_P.HeaterSaturation_UpperSat);
    if (rtmIsMajorTimeStep(q_hfe_pi_M)) {
      /* Saturate: '<Root>/Blower  Saturation' incorporates:
       *  Constant: '<Root>/Vb (V)'
       */
      q_hfe_pi_B.BlowerSaturation = rt_SATURATE(q_hfe_pi_P.VbV_Value,
        q_hfe_pi_P.BlowerSaturation_LowerSat,
        q_hfe_pi_P.BlowerSaturation_UpperSat);

      /* Bias: '<S1>/Bias' */
      rtb_Bias = q_hfe_pi_B.BlowerSaturation + q_hfe_pi_P.Bias_Bias;

      /* S-Function (hil_write_analog_block): '<S1>/HIL Write Analog1' */

      /* S-Function Block: q_hfe_pi/Heatflow/HIL Write Analog1 (hil_write_analog_block) */
      {
        t_error result;
        q_hfe_pi_DWork.HILWriteAnalog1_Buffer[0] = q_hfe_pi_B.HeaterSaturation;
        q_hfe_pi_DWork.HILWriteAnalog1_Buffer[1] = rtb_Bias;
        result = hil_write_analog(q_hfe_pi_DWork.HILInitialize_Card,
          q_hfe_pi_P.HILWriteAnalog1_Channels, 2,
          &q_hfe_pi_DWork.HILWriteAnalog1_Buffer[0]);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(q_hfe_pi_M, _rt_error_message);
        }
      }
    }

    /* Gain: '<S4>/Slider Gain' incorporates:
     *  Sum: '<S2>/Sum1'
     */
    q_hfe_pi_B.SliderGain = (q_hfe_pi_B.Sum1 - q_hfe_pi_B.MultiportSwitch) *
      q_hfe_pi_P.SliderGain_Gain_k;
  }

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model update function */
void q_hfe_pi_update(int_T tid)
{
  if (rtmIsMajorTimeStep(q_hfe_pi_M)) {
    rt_ertODEUpdateContinuousStates(&q_hfe_pi_M->solverInfo);
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++q_hfe_pi_M->Timing.clockTick0))
    ++q_hfe_pi_M->Timing.clockTickH0;
  q_hfe_pi_M->Timing.t[0] = rtsiGetSolverStopTime(&q_hfe_pi_M->solverInfo);
  if (rtmIsMajorTimeStep(q_hfe_pi_M)) {
    /* Update absolute timer for sample time: [0.01s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++q_hfe_pi_M->Timing.clockTick1))
      ++q_hfe_pi_M->Timing.clockTickH1;
    q_hfe_pi_M->Timing.t[1] = q_hfe_pi_M->Timing.clockTick1 *
      q_hfe_pi_M->Timing.stepSize1 + q_hfe_pi_M->Timing.clockTickH1 *
      q_hfe_pi_M->Timing.stepSize1 * 4294967296.0;
  }

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Derivatives for root system: '<Root>' */
void q_hfe_pi_derivatives(void)
{
  /* Derivatives for Integrator: '<S2>/Integrator' */
  {
    boolean_T lsat;
    boolean_T usat;
    lsat = ( q_hfe_pi_X.Integrator_CSTATE <= q_hfe_pi_P.Integrator_LowerSat );
    usat = ( q_hfe_pi_X.Integrator_CSTATE >= q_hfe_pi_P.Integrator_UpperSat );
    if ((!lsat && !usat) ||
        (lsat && (q_hfe_pi_B.SliderGain > 0)) ||
        (usat && (q_hfe_pi_B.SliderGain < 0)) ) {
      ((StateDerivatives_q_hfe_pi *) q_hfe_pi_M->ModelData.derivs)
        ->Integrator_CSTATE = q_hfe_pi_B.SliderGain;
    } else {
      /* in saturation */
      ((StateDerivatives_q_hfe_pi *) q_hfe_pi_M->ModelData.derivs)
        ->Integrator_CSTATE = 0.0;
    }
  }
}

/* Model initialize function */
void q_hfe_pi_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)q_hfe_pi_M,0,
                sizeof(RT_MODEL_q_hfe_pi));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&q_hfe_pi_M->solverInfo,
                          &q_hfe_pi_M->Timing.simTimeStep);
    rtsiSetTPtr(&q_hfe_pi_M->solverInfo, &rtmGetTPtr(q_hfe_pi_M));
    rtsiSetStepSizePtr(&q_hfe_pi_M->solverInfo, &q_hfe_pi_M->Timing.stepSize0);
    rtsiSetdXPtr(&q_hfe_pi_M->solverInfo, &q_hfe_pi_M->ModelData.derivs);
    rtsiSetContStatesPtr(&q_hfe_pi_M->solverInfo,
                         &q_hfe_pi_M->ModelData.contStates);
    rtsiSetNumContStatesPtr(&q_hfe_pi_M->solverInfo,
      &q_hfe_pi_M->Sizes.numContStates);
    rtsiSetErrorStatusPtr(&q_hfe_pi_M->solverInfo, (&rtmGetErrorStatus
      (q_hfe_pi_M)));
    rtsiSetRTModelPtr(&q_hfe_pi_M->solverInfo, q_hfe_pi_M);
  }

  rtsiSetSimTimeStep(&q_hfe_pi_M->solverInfo, MAJOR_TIME_STEP);
  q_hfe_pi_M->ModelData.intgData.f[0] = q_hfe_pi_M->ModelData.odeF[0];
  q_hfe_pi_M->ModelData.contStates = ((real_T *) &q_hfe_pi_X);
  rtsiSetSolverData(&q_hfe_pi_M->solverInfo, (void *)
                    &q_hfe_pi_M->ModelData.intgData);
  rtsiSetSolverName(&q_hfe_pi_M->solverInfo,"ode1");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = q_hfe_pi_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    q_hfe_pi_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    q_hfe_pi_M->Timing.sampleTimes = (&q_hfe_pi_M->Timing.sampleTimesArray[0]);
    q_hfe_pi_M->Timing.offsetTimes = (&q_hfe_pi_M->Timing.offsetTimesArray[0]);

    /* task periods */
    q_hfe_pi_M->Timing.sampleTimes[0] = (0.0);
    q_hfe_pi_M->Timing.sampleTimes[1] = (0.01);

    /* task offsets */
    q_hfe_pi_M->Timing.offsetTimes[0] = (0.0);
    q_hfe_pi_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(q_hfe_pi_M, &q_hfe_pi_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = q_hfe_pi_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    q_hfe_pi_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(q_hfe_pi_M, -1);
  q_hfe_pi_M->Timing.stepSize0 = 0.01;
  q_hfe_pi_M->Timing.stepSize1 = 0.01;

  /* external mode info */
  q_hfe_pi_M->Sizes.checksums[0] = (602939379U);
  q_hfe_pi_M->Sizes.checksums[1] = (1843566179U);
  q_hfe_pi_M->Sizes.checksums[2] = (1550868070U);
  q_hfe_pi_M->Sizes.checksums[3] = (3574212096U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[4];
    q_hfe_pi_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(q_hfe_pi_M->extModeInfo,
      &q_hfe_pi_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(q_hfe_pi_M->extModeInfo, q_hfe_pi_M->Sizes.checksums);
    rteiSetTPtr(q_hfe_pi_M->extModeInfo, rtmGetTPtr(q_hfe_pi_M));
  }

  q_hfe_pi_M->solverInfoPtr = (&q_hfe_pi_M->solverInfo);
  q_hfe_pi_M->Timing.stepSize = (0.01);
  rtsiSetFixedStepSize(&q_hfe_pi_M->solverInfo, 0.01);
  rtsiSetSolverMode(&q_hfe_pi_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  q_hfe_pi_M->ModelData.blockIO = ((void *) &q_hfe_pi_B);

  {
    q_hfe_pi_B.Sum1 = 0.0;
    q_hfe_pi_B.MultiportSwitch = 0.0;
    q_hfe_pi_B.HeaterSaturation = 0.0;
    q_hfe_pi_B.BlowerSaturation = 0.0;
    q_hfe_pi_B.SliderGain = 0.0;
  }

  /* parameters */
  q_hfe_pi_M->ModelData.defaultParam = ((real_T *) &q_hfe_pi_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &q_hfe_pi_X;
    q_hfe_pi_M->ModelData.contStates = (x);
    (void) memset((void *)&q_hfe_pi_X,0,
                  sizeof(ContinuousStates_q_hfe_pi));
  }

  /* states (dwork) */
  q_hfe_pi_M->Work.dwork = ((void *) &q_hfe_pi_DWork);
  (void) memset((void *)&q_hfe_pi_DWork, 0,
                sizeof(D_Work_q_hfe_pi));

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      q_hfe_pi_DWork.HILInitialize_AIMinimums[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      q_hfe_pi_DWork.HILInitialize_AIMaximums[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      q_hfe_pi_DWork.HILInitialize_AOMinimums[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      q_hfe_pi_DWork.HILInitialize_AOMaximums[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      q_hfe_pi_DWork.HILInitialize_AOVoltages[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      q_hfe_pi_DWork.HILInitialize_FilterFrequency[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      q_hfe_pi_DWork.HILInitialize_POSortedFreqs[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      q_hfe_pi_DWork.HILInitialize_POValues[i] = 0.0;
    }
  }

  q_hfe_pi_DWork.HILReadAnalogTimebase_Buffer[0] = 0.0;
  q_hfe_pi_DWork.HILReadAnalogTimebase_Buffer[1] = 0.0;
  q_hfe_pi_DWork.HILReadAnalogTimebase_Buffer[2] = 0.0;
  q_hfe_pi_DWork.HILReadAnalogTimebase_Buffer[3] = 0.0;
  q_hfe_pi_DWork.HILWriteAnalog1_Buffer[0] = 0.0;
  q_hfe_pi_DWork.HILWriteAnalog1_Buffer[1] = 0.0;

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo,0,
                  sizeof(dtInfo));
    q_hfe_pi_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 16;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.B = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }
}

/* Model terminate function */
void q_hfe_pi_terminate(void)
{
  /* Terminate for S-Function (hil_initialize_block): '<S1>/HIL Initialize' */

  /* S-Function Block: q_hfe_pi/Heatflow/HIL Initialize (hil_initialize_block) */
  {
    t_boolean is_switching;
    t_int result;
    hil_task_stop_all(q_hfe_pi_DWork.HILInitialize_Card);
    hil_task_delete_all(q_hfe_pi_DWork.HILInitialize_Card);
    hil_monitor_stop_all(q_hfe_pi_DWork.HILInitialize_Card);
    hil_monitor_delete_all(q_hfe_pi_DWork.HILInitialize_Card);
    is_switching = false;
    if ((q_hfe_pi_P.HILInitialize_AOTerminate && !is_switching) ||
        (q_hfe_pi_P.HILInitialize_AOExit && is_switching)) {
      {
        int_T i1;
        real_T *dw_AOVoltages = &q_hfe_pi_DWork.HILInitialize_AOVoltages[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AOVoltages[i1] = q_hfe_pi_P.HILInitialize_AOFinal;
        }
      }

      result = hil_write_analog(q_hfe_pi_DWork.HILInitialize_Card,
        &q_hfe_pi_P.HILInitialize_AOChannels[0], 8U,
        &q_hfe_pi_DWork.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_hfe_pi_M, _rt_error_message);
      }
    }

    if ((q_hfe_pi_P.HILInitialize_POTerminate && !is_switching) ||
        (q_hfe_pi_P.HILInitialize_POExit && is_switching)) {
      {
        int_T i1;
        real_T *dw_POValues = &q_hfe_pi_DWork.HILInitialize_POValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POValues[i1] = q_hfe_pi_P.HILInitialize_POFinal;
        }
      }

      result = hil_write_pwm(q_hfe_pi_DWork.HILInitialize_Card,
        &q_hfe_pi_P.HILInitialize_POChannels[0], 8U,
        &q_hfe_pi_DWork.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_hfe_pi_M, _rt_error_message);
      }
    }

    hil_close(q_hfe_pi_DWork.HILInitialize_Card);
    q_hfe_pi_DWork.HILInitialize_Card = NULL;
  }
}

/*========================================================================*
 * Start of GRT compatible call interface                                 *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  q_hfe_pi_output(tid);
}

void MdlUpdate(int_T tid)
{
  q_hfe_pi_update(tid);
}

void MdlInitializeSizes(void)
{
  q_hfe_pi_M->Sizes.numContStates = (1);/* Number of continuous states */
  q_hfe_pi_M->Sizes.numY = (0);        /* Number of model outputs */
  q_hfe_pi_M->Sizes.numU = (0);        /* Number of model inputs */
  q_hfe_pi_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  q_hfe_pi_M->Sizes.numSampTimes = (2);/* Number of sample times */
  q_hfe_pi_M->Sizes.numBlocks = (28);  /* Number of blocks */
  q_hfe_pi_M->Sizes.numBlockIO = (5);  /* Number of block outputs */
  q_hfe_pi_M->Sizes.numBlockPrms = (122);/* Sum of parameter "widths" */
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
  /* InitializeConditions for Integrator: '<S2>/Integrator' */
  q_hfe_pi_X.Integrator_CSTATE = q_hfe_pi_P.Integrator_IC;
}

void MdlStart(void)
{
  /* Start for S-Function (hil_initialize_block): '<S1>/HIL Initialize' */

  /* S-Function Block: q_hfe_pi/Heatflow/HIL Initialize (hil_initialize_block) */
  {
    t_int result;
    t_boolean is_switching;
    result = hil_open("q8_usb", "0", &q_hfe_pi_DWork.HILInitialize_Card);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(q_hfe_pi_M, _rt_error_message);
      return;
    }

    is_switching = false;
    result = hil_set_card_specific_options(q_hfe_pi_DWork.HILInitialize_Card,
      "update_rate=normal", 19);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(q_hfe_pi_M, _rt_error_message);
      return;
    }

    result = hil_watchdog_clear(q_hfe_pi_DWork.HILInitialize_Card);
    if (result < 0 && result != -QERR_HIL_WATCHDOG_CLEAR) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(q_hfe_pi_M, _rt_error_message);
      return;
    }

    if ((q_hfe_pi_P.HILInitialize_AIPStart && !is_switching) ||
        (q_hfe_pi_P.HILInitialize_AIPEnter && is_switching)) {
      {
        int_T i1;
        real_T *dw_AIMinimums = &q_hfe_pi_DWork.HILInitialize_AIMinimums[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AIMinimums[i1] = q_hfe_pi_P.HILInitialize_AILow;
        }
      }

      {
        int_T i1;
        real_T *dw_AIMaximums = &q_hfe_pi_DWork.HILInitialize_AIMaximums[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AIMaximums[i1] = q_hfe_pi_P.HILInitialize_AIHigh;
        }
      }

      result = hil_set_analog_input_ranges(q_hfe_pi_DWork.HILInitialize_Card,
        &q_hfe_pi_P.HILInitialize_AIChannels[0], 8U,
        &q_hfe_pi_DWork.HILInitialize_AIMinimums[0],
        &q_hfe_pi_DWork.HILInitialize_AIMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_hfe_pi_M, _rt_error_message);
        return;
      }
    }

    if ((q_hfe_pi_P.HILInitialize_AOPStart && !is_switching) ||
        (q_hfe_pi_P.HILInitialize_AOPEnter && is_switching)) {
      {
        int_T i1;
        real_T *dw_AOMinimums = &q_hfe_pi_DWork.HILInitialize_AOMinimums[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AOMinimums[i1] = q_hfe_pi_P.HILInitialize_AOLow;
        }
      }

      {
        int_T i1;
        real_T *dw_AOMaximums = &q_hfe_pi_DWork.HILInitialize_AOMaximums[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AOMaximums[i1] = q_hfe_pi_P.HILInitialize_AOHigh;
        }
      }

      result = hil_set_analog_output_ranges(q_hfe_pi_DWork.HILInitialize_Card,
        &q_hfe_pi_P.HILInitialize_AOChannels[0], 8U,
        &q_hfe_pi_DWork.HILInitialize_AOMinimums[0],
        &q_hfe_pi_DWork.HILInitialize_AOMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_hfe_pi_M, _rt_error_message);
        return;
      }
    }

    if ((q_hfe_pi_P.HILInitialize_AOStart && !is_switching) ||
        (q_hfe_pi_P.HILInitialize_AOEnter && is_switching)) {
      {
        int_T i1;
        real_T *dw_AOVoltages = &q_hfe_pi_DWork.HILInitialize_AOVoltages[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AOVoltages[i1] = q_hfe_pi_P.HILInitialize_AOInitial;
        }
      }

      result = hil_write_analog(q_hfe_pi_DWork.HILInitialize_Card,
        &q_hfe_pi_P.HILInitialize_AOChannels[0], 8U,
        &q_hfe_pi_DWork.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_hfe_pi_M, _rt_error_message);
        return;
      }
    }

    if (q_hfe_pi_P.HILInitialize_AOReset) {
      {
        int_T i1;
        real_T *dw_AOVoltages = &q_hfe_pi_DWork.HILInitialize_AOVoltages[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AOVoltages[i1] = q_hfe_pi_P.HILInitialize_AOWatchdog;
        }
      }

      result = hil_watchdog_set_analog_expiration_state
        (q_hfe_pi_DWork.HILInitialize_Card,
         &q_hfe_pi_P.HILInitialize_AOChannels[0], 8U,
         &q_hfe_pi_DWork.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_hfe_pi_M, _rt_error_message);
        return;
      }
    }

    if ((q_hfe_pi_P.HILInitialize_EIPStart && !is_switching) ||
        (q_hfe_pi_P.HILInitialize_EIPEnter && is_switching)) {
      {
        int_T i1;
        int32_T *dw_QuadratureModes =
          &q_hfe_pi_DWork.HILInitialize_QuadratureModes[0];
        for (i1=0; i1 < 8; i1++) {
          dw_QuadratureModes[i1] = q_hfe_pi_P.HILInitialize_EIQuadrature;
        }
      }

      result = hil_set_encoder_quadrature_mode(q_hfe_pi_DWork.HILInitialize_Card,
        &q_hfe_pi_P.HILInitialize_EIChannels[0], 8U, (t_encoder_quadrature_mode *)
        &q_hfe_pi_DWork.HILInitialize_QuadratureModes[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_hfe_pi_M, _rt_error_message);
        return;
      }
    }

    if ((q_hfe_pi_P.HILInitialize_EIStart && !is_switching) ||
        (q_hfe_pi_P.HILInitialize_EIEnter && is_switching)) {
      {
        int_T i1;
        int32_T *dw_InitialEICounts =
          &q_hfe_pi_DWork.HILInitialize_InitialEICounts[0];
        for (i1=0; i1 < 8; i1++) {
          dw_InitialEICounts[i1] = q_hfe_pi_P.HILInitialize_EIInitial;
        }
      }

      result = hil_set_encoder_counts(q_hfe_pi_DWork.HILInitialize_Card,
        &q_hfe_pi_P.HILInitialize_EIChannels[0], 8U,
        &q_hfe_pi_DWork.HILInitialize_InitialEICounts[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_hfe_pi_M, _rt_error_message);
        return;
      }
    }

    if ((q_hfe_pi_P.HILInitialize_POPStart && !is_switching) ||
        (q_hfe_pi_P.HILInitialize_POPEnter && is_switching)) {
      uint32_T num_duty_cycle_modes = 0;
      uint32_T num_frequency_modes = 0;

      {
        int_T i1;
        int32_T *dw_POModeValues = &q_hfe_pi_DWork.HILInitialize_POModeValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POModeValues[i1] = q_hfe_pi_P.HILInitialize_POModes;
        }
      }

      result = hil_set_pwm_mode(q_hfe_pi_DWork.HILInitialize_Card,
        &q_hfe_pi_P.HILInitialize_POChannels[0], 8U, (t_pwm_mode *)
        &q_hfe_pi_DWork.HILInitialize_POModeValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_hfe_pi_M, _rt_error_message);
        return;
      }

      {
        int_T i1;
        const uint32_T *p_HILInitialize_POChannels =
          &q_hfe_pi_P.HILInitialize_POChannels[0];
        int32_T *dw_POModeValues = &q_hfe_pi_DWork.HILInitialize_POModeValues[0];
        for (i1=0; i1 < 8; i1++) {
          if (dw_POModeValues[i1] == PWM_DUTY_CYCLE_MODE || dw_POModeValues[i1] ==
              PWM_ONE_SHOT_MODE || dw_POModeValues[i1] == PWM_TIME_MODE) {
            q_hfe_pi_DWork.HILInitialize_POSortedChans[num_duty_cycle_modes] =
              (p_HILInitialize_POChannels[i1]);
            q_hfe_pi_DWork.HILInitialize_POSortedFreqs[num_duty_cycle_modes] =
              q_hfe_pi_P.HILInitialize_POFrequency;
            num_duty_cycle_modes++;
          } else {
            q_hfe_pi_DWork.HILInitialize_POSortedChans[7U - num_frequency_modes]
              = (p_HILInitialize_POChannels[i1]);
            q_hfe_pi_DWork.HILInitialize_POSortedFreqs[7U - num_frequency_modes]
              = q_hfe_pi_P.HILInitialize_POFrequency;
            num_frequency_modes++;
          }
        }
      }

      if (num_duty_cycle_modes > 0) {
        result = hil_set_pwm_frequency(q_hfe_pi_DWork.HILInitialize_Card,
          &q_hfe_pi_DWork.HILInitialize_POSortedChans[0], num_duty_cycle_modes,
          &q_hfe_pi_DWork.HILInitialize_POSortedFreqs[0]);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(q_hfe_pi_M, _rt_error_message);
          return;
        }
      }

      if (num_frequency_modes > 0) {
        result = hil_set_pwm_duty_cycle(q_hfe_pi_DWork.HILInitialize_Card,
          &q_hfe_pi_DWork.HILInitialize_POSortedChans[num_duty_cycle_modes],
          num_frequency_modes,
          &q_hfe_pi_DWork.HILInitialize_POSortedFreqs[num_duty_cycle_modes]);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(q_hfe_pi_M, _rt_error_message);
          return;
        }
      }

      {
        int_T i1;
        int32_T *dw_POModeValues = &q_hfe_pi_DWork.HILInitialize_POModeValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POModeValues[i1] = q_hfe_pi_P.HILInitialize_POConfiguration;
        }
      }

      {
        int_T i1;
        int32_T *dw_POAlignValues = &q_hfe_pi_DWork.HILInitialize_POAlignValues
          [0];
        for (i1=0; i1 < 8; i1++) {
          dw_POAlignValues[i1] = q_hfe_pi_P.HILInitialize_POAlignment;
        }
      }

      {
        int_T i1;
        int32_T *dw_POPolarityVals =
          &q_hfe_pi_DWork.HILInitialize_POPolarityVals[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POPolarityVals[i1] = q_hfe_pi_P.HILInitialize_POPolarity;
        }
      }

      result = hil_set_pwm_configuration(q_hfe_pi_DWork.HILInitialize_Card,
        &q_hfe_pi_P.HILInitialize_POChannels[0], 8U,
        (t_pwm_configuration *) &q_hfe_pi_DWork.HILInitialize_POModeValues[0],
        (t_pwm_alignment *) &q_hfe_pi_DWork.HILInitialize_POAlignValues[0],
        (t_pwm_polarity *) &q_hfe_pi_DWork.HILInitialize_POPolarityVals[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_hfe_pi_M, _rt_error_message);
        return;
      }

      {
        int_T i1;
        real_T *dw_POSortedFreqs = &q_hfe_pi_DWork.HILInitialize_POSortedFreqs[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POSortedFreqs[i1] = q_hfe_pi_P.HILInitialize_POLeading;
        }
      }

      {
        int_T i1;
        real_T *dw_POValues = &q_hfe_pi_DWork.HILInitialize_POValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POValues[i1] = q_hfe_pi_P.HILInitialize_POTrailing;
        }
      }

      result = hil_set_pwm_deadband(q_hfe_pi_DWork.HILInitialize_Card,
        &q_hfe_pi_P.HILInitialize_POChannels[0], 8U,
        &q_hfe_pi_DWork.HILInitialize_POSortedFreqs[0],
        &q_hfe_pi_DWork.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_hfe_pi_M, _rt_error_message);
        return;
      }
    }

    if ((q_hfe_pi_P.HILInitialize_POStart && !is_switching) ||
        (q_hfe_pi_P.HILInitialize_POEnter && is_switching)) {
      {
        int_T i1;
        real_T *dw_POValues = &q_hfe_pi_DWork.HILInitialize_POValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POValues[i1] = q_hfe_pi_P.HILInitialize_POInitial;
        }
      }

      result = hil_write_pwm(q_hfe_pi_DWork.HILInitialize_Card,
        &q_hfe_pi_P.HILInitialize_POChannels[0], 8U,
        &q_hfe_pi_DWork.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_hfe_pi_M, _rt_error_message);
        return;
      }
    }

    if (q_hfe_pi_P.HILInitialize_POReset) {
      {
        int_T i1;
        real_T *dw_POValues = &q_hfe_pi_DWork.HILInitialize_POValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POValues[i1] = q_hfe_pi_P.HILInitialize_POWatchdog;
        }
      }

      result = hil_watchdog_set_pwm_expiration_state
        (q_hfe_pi_DWork.HILInitialize_Card,
         &q_hfe_pi_P.HILInitialize_POChannels[0], 8U,
         &q_hfe_pi_DWork.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_hfe_pi_M, _rt_error_message);
        return;
      }
    }
  }

  /* Start for S-Function (hil_read_analog_timebase_block): '<S1>/HIL Read Analog Timebase' */

  /* S-Function Block: q_hfe_pi/Heatflow/HIL Read Analog Timebase (hil_read_analog_timebase_block) */
  {
    t_error result;
    result = hil_task_create_analog_reader(q_hfe_pi_DWork.HILInitialize_Card,
      q_hfe_pi_P.HILReadAnalogTimebase_SamplesIn,
      q_hfe_pi_P.HILReadAnalogTimebase_Channels, 4,
      &q_hfe_pi_DWork.HILReadAnalogTimebase_Task);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(q_hfe_pi_M, _rt_error_message);
    }
  }

  MdlInitialize();
}

void MdlTerminate(void)
{
  q_hfe_pi_terminate();
}

RT_MODEL_q_hfe_pi *q_hfe_pi(void)
{
  q_hfe_pi_initialize(1);
  return q_hfe_pi_M;
}

/*========================================================================*
 * End of GRT compatible call interface                                   *
 *========================================================================*/
