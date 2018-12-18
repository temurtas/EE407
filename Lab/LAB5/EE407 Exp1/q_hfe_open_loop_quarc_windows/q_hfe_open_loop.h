/*
 * q_hfe_open_loop.h
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
#ifndef RTW_HEADER_q_hfe_open_loop_h_
#define RTW_HEADER_q_hfe_open_loop_h_
#ifndef q_hfe_open_loop_COMMON_INCLUDES_
# define q_hfe_open_loop_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "dt_info.h"
#include "ext_work.h"
#include "hil.h"
#include "quanser_messages.h"
#include "quanser_extern.h"
#include "rt_SATURATE.h"
#include "rt_nonfinite.h"
#endif                                 /* q_hfe_open_loop_COMMON_INCLUDES_ */

#include "q_hfe_open_loop_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->ModelData.blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->ModelData.blkStateChange = (val))
#endif

#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->ModelData.blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->ModelData.blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->ModelData.constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->ModelData.constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ()
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ()
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->ModelData.defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->ModelData.defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ()
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ()
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ()
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ()
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ()
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ()
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ()
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ()
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ()
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->ModelData.prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->ModelData.prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ()
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ()
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->Work.dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->Work.dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ()
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ()
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->ModelData.inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->ModelData.inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->ModelData.outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->ModelData.outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->ModelData.zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->ModelData.zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->Work.dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->Work.dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTime
# define rtmGetVarNextHitTime(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTime
# define rtmSetVarNextHitTime(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define q_hfe_open_loop_rtModel        RT_MODEL_q_hfe_open_loop

/* Block signals (auto storage) */
typedef struct {
  real_T FanCalibRPMV;                 /* '<S2>/Fan Calib (RPM//V)' */
  real_T T1CalibdegCV;                 /* '<S2>/T1 Calib (degC//V)' */
  real_T T2CalibdegCV;                 /* '<S2>/T2 Calib (degC//V)' */
  real_T T3CalibdegCV;                 /* '<S2>/T3 Calib (degC//V)' */
  real_T HeaterSaturation;             /* '<Root>/Heater  Saturation' */
  real_T BlowerSaturation;             /* '<Root>/Blower  Saturation' */
  real_T DataTypeConversion[5];        /* '<Root>/Data Type Conversion' */
  uint8_T Compare;                     /* '<S1>/Compare' */
  boolean_T Compare_e;                 /* '<S4>/Compare' */
} BlockIO_q_hfe_open_loop;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T HILInitialize_AIMinimums[8];  /* '<S2>/HIL Initialize' */
  real_T HILInitialize_AIMaximums[8];  /* '<S2>/HIL Initialize' */
  real_T HILInitialize_AOMinimums[8];  /* '<S2>/HIL Initialize' */
  real_T HILInitialize_AOMaximums[8];  /* '<S2>/HIL Initialize' */
  real_T HILInitialize_AOVoltages[8];  /* '<S2>/HIL Initialize' */
  real_T HILInitialize_FilterFrequency[8];/* '<S2>/HIL Initialize' */
  real_T HILInitialize_POSortedFreqs[8];/* '<S2>/HIL Initialize' */
  real_T HILInitialize_POValues[8];    /* '<S2>/HIL Initialize' */
  real_T HILReadAnalogTimebase_Buffer[4];/* '<S2>/HIL Read Analog Timebase' */
  real_T HILWriteAnalog1_Buffer[2];    /* '<S2>/HIL Write Analog1' */
  void *HILWriteAnalog1_PWORK;         /* '<S2>/HIL Write Analog1' */
  struct {
    void *LoggedData;
  } FanSpeedrpm_PWORK;                 /* '<Root>/Fan Speed (rpm)' */

  void *HeatingData_PWORK;             /* '<Root>/Heating Data' */
  struct {
    void *LoggedData;
  } InputVoltageV_PWORK;               /* '<Root>/Input Voltage (V)' */

  struct {
    void *LoggedData;
  } TempdegC_PWORK;                    /* '<Root>/Temp (deg C)' */

  int32_T HILInitialize_ClockModes[3]; /* '<S2>/HIL Initialize' */
  int32_T HILInitialize_QuadratureModes[8];/* '<S2>/HIL Initialize' */
  int32_T HILInitialize_InitialEICounts[8];/* '<S2>/HIL Initialize' */
  int32_T HILInitialize_POModeValues[8];/* '<S2>/HIL Initialize' */
  int32_T HILInitialize_POAlignValues[8];/* '<S2>/HIL Initialize' */
  int32_T HILInitialize_POPolarityVals[8];/* '<S2>/HIL Initialize' */
  uint32_T HILInitialize_POSortedChans[8];/* '<S2>/HIL Initialize' */
  t_task HILReadAnalogTimebase_Task;   /* '<S2>/HIL Read Analog Timebase' */
  t_card HILInitialize_Card;           /* '<S2>/HIL Initialize' */
  int_T HeatingData_IWORK[3];          /* '<Root>/Heating Data' */
} D_Work_q_hfe_open_loop;

/* Backward compatible GRT Identifiers */
#define rtB                            q_hfe_open_loop_B
#define BlockIO                        BlockIO_q_hfe_open_loop
#define rtXdot                         q_hfe_open_loop_Xdot
#define StateDerivatives               StateDerivatives_q_hfe_open_loo
#define tXdis                          q_hfe_open_loop_Xdis
#define StateDisabled                  StateDisabled_q_hfe_open_loop
#define rtP                            q_hfe_open_loop_P
#define Parameters                     Parameters_q_hfe_open_loop
#define rtDWork                        q_hfe_open_loop_DWork
#define D_Work                         D_Work_q_hfe_open_loop

/* Parameters (auto storage) */
struct Parameters_q_hfe_open_loop_ {
  real_T HILInitialize_OOStart;        /* Expression: set_other_outputs_at_start
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  real_T HILInitialize_OOEnter;        /* Expression: set_other_outputs_at_switch_in
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  real_T HILInitialize_OOTerminate;    /* Expression: set_other_outputs_at_terminate
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  real_T HILInitialize_OOExit;         /* Expression: set_other_outputs_at_switch_out
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  real_T HILInitialize_AIHigh;         /* Expression: analog_input_maximums
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  real_T HILInitialize_AILow;          /* Expression: analog_input_minimums
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  real_T HILInitialize_AOHigh;         /* Expression: analog_output_maximums
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  real_T HILInitialize_AOLow;          /* Expression: analog_output_minimums
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  real_T HILInitialize_AOInitial;      /* Expression: initial_analog_outputs
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  real_T HILInitialize_AOFinal;        /* Expression: final_analog_outputs
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  real_T HILInitialize_AOWatchdog;     /* Expression: watchdog_analog_outputs
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  real_T HILInitialize_POFrequency;    /* Expression: pwm_frequency
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  real_T HILInitialize_POLeading;      /* Expression: pwm_leading_deadband
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  real_T HILInitialize_POTrailing;     /* Expression: pwm_trailing_deadband
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  real_T HILInitialize_POInitial;      /* Expression: initial_pwm_outputs
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  real_T HILInitialize_POFinal;        /* Expression: final_pwm_outputs
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  real_T HILInitialize_POWatchdog;     /* Expression: watchdog_pwm_outputs
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  real_T FanCalibRPMV_Gain;            /* Expression: K_TACH
                                        * Referenced by: '<S2>/Fan Calib (RPM//V)'
                                        */
  real_T T1CalibdegCV_Gain;            /* Expression: K_TEMP
                                        * Referenced by: '<S2>/T1 Calib (degC//V)'
                                        */
  real_T T2CalibdegCV_Gain;            /* Expression: K_TEMP
                                        * Referenced by: '<S2>/T2 Calib (degC//V)'
                                        */
  real_T T3CalibdegCV_Gain;            /* Expression: K_TEMP
                                        * Referenced by: '<S2>/T3 Calib (degC//V)'
                                        */
  real_T VhV_Time;                     /* Expression: 5
                                        * Referenced by: '<Root>/Vh (V)'
                                        */
  real_T VhV_Y0;                       /* Expression: 0
                                        * Referenced by: '<Root>/Vh (V)'
                                        */
  real_T VhV_YFinal;                   /* Expression: 4
                                        * Referenced by: '<Root>/Vh (V)'
                                        */
  real_T HeaterSaturation_UpperSat;    /* Expression: 5
                                        * Referenced by: '<Root>/Heater  Saturation'
                                        */
  real_T HeaterSaturation_LowerSat;    /* Expression: 0
                                        * Referenced by: '<Root>/Heater  Saturation'
                                        */
  real_T VbV_Value;                    /* Expression: 4
                                        * Referenced by: '<Root>/Vb (V)'
                                        */
  real_T BlowerSaturation_UpperSat;    /* Expression: 6
                                        * Referenced by: '<Root>/Blower  Saturation'
                                        */
  real_T BlowerSaturation_LowerSat;    /* Expression: 0
                                        * Referenced by: '<Root>/Blower  Saturation'
                                        */
  real_T Bias_Bias;                    /* Expression: -6
                                        * Referenced by: '<S2>/Bias'
                                        */
  real_T Constant_Value;               /* Expression: const
                                        * Referenced by: '<S1>/Constant'
                                        */
  int32_T HILInitialize_CKChannels[3]; /* Computed Parameter: HILInitialize_CKChannels
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  int32_T HILInitialize_DOWatchdog;    /* Computed Parameter: HILInitialize_DOWatchdog
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  int32_T HILInitialize_EIInitial;     /* Computed Parameter: HILInitialize_EIInitial
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  int32_T HILInitialize_POModes;       /* Computed Parameter: HILInitialize_POModes
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  int32_T HILInitialize_POConfiguration;/* Computed Parameter: HILInitialize_POConfiguration
                                         * Referenced by: '<S2>/HIL Initialize'
                                         */
  int32_T HILInitialize_POAlignment;   /* Computed Parameter: HILInitialize_POAlignment
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  int32_T HILInitialize_POPolarity;    /* Computed Parameter: HILInitialize_POPolarity
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  int32_T HILReadAnalogTimebase_Clock; /* Computed Parameter: HILReadAnalogTimebase_Clock
                                        * Referenced by: '<S2>/HIL Read Analog Timebase'
                                        */
  uint32_T HILInitialize_AIChannels[8];/* Computed Parameter: HILInitialize_AIChannels
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  uint32_T HILInitialize_AOChannels[8];/* Computed Parameter: HILInitialize_AOChannels
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  uint32_T HILInitialize_EIChannels[8];/* Computed Parameter: HILInitialize_EIChannels
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  uint32_T HILInitialize_EIQuadrature; /* Computed Parameter: HILInitialize_EIQuadrature
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  uint32_T HILInitialize_POChannels[8];/* Computed Parameter: HILInitialize_POChannels
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  uint32_T HILReadAnalogTimebase_Channels[4];/* Computed Parameter: HILReadAnalogTimebase_Channels
                                              * Referenced by: '<S2>/HIL Read Analog Timebase'
                                              */
  uint32_T HILReadAnalogTimebase_SamplesIn;/* Computed Parameter: HILReadAnalogTimebase_SamplesIn
                                            * Referenced by: '<S2>/HIL Read Analog Timebase'
                                            */
  uint32_T HILWriteAnalog1_Channels[2];/* Computed Parameter: HILWriteAnalog1_Channels
                                        * Referenced by: '<S2>/HIL Write Analog1'
                                        */
  uint32_T HeatingData_Decimation;     /* Computed Parameter: HeatingData_Decimation
                                        * Referenced by: '<Root>/Heating Data'
                                        */
  int8_T ShowMessageonHost_MsgIcon;    /* Computed Parameter: ShowMessageonHost_MsgIcon
                                        * Referenced by: '<S3>/Show Message on Host'
                                        */
  uint8_T HeatingData_file_name[19];   /* Expression: file_name_argument
                                        * Referenced by: '<Root>/Heating Data'
                                        */
  uint8_T HeatingData_VarName[12];     /* Expression: variable_name_argument
                                        * Referenced by: '<Root>/Heating Data'
                                        */
  uint8_T HeatingData_FileFormat;      /* Computed Parameter: HeatingData_FileFormat
                                        * Referenced by: '<Root>/Heating Data'
                                        */
  boolean_T HILInitialize_Active;      /* Computed Parameter: HILInitialize_Active
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_CKPStart;    /* Computed Parameter: HILInitialize_CKPStart
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_CKPEnter;    /* Computed Parameter: HILInitialize_CKPEnter
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AIPStart;    /* Computed Parameter: HILInitialize_AIPStart
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AIPEnter;    /* Computed Parameter: HILInitialize_AIPEnter
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOPStart;    /* Computed Parameter: HILInitialize_AOPStart
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOPEnter;    /* Computed Parameter: HILInitialize_AOPEnter
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOStart;     /* Computed Parameter: HILInitialize_AOStart
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOEnter;     /* Computed Parameter: HILInitialize_AOEnter
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOTerminate; /* Computed Parameter: HILInitialize_AOTerminate
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOExit;      /* Computed Parameter: HILInitialize_AOExit
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOReset;     /* Computed Parameter: HILInitialize_AOReset
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOPStart;    /* Computed Parameter: HILInitialize_DOPStart
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOPEnter;    /* Computed Parameter: HILInitialize_DOPEnter
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOStart;     /* Computed Parameter: HILInitialize_DOStart
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOEnter;     /* Computed Parameter: HILInitialize_DOEnter
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOTerminate; /* Computed Parameter: HILInitialize_DOTerminate
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOExit;      /* Computed Parameter: HILInitialize_DOExit
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOReset;     /* Computed Parameter: HILInitialize_DOReset
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIPStart;    /* Computed Parameter: HILInitialize_EIPStart
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIPEnter;    /* Computed Parameter: HILInitialize_EIPEnter
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIStart;     /* Computed Parameter: HILInitialize_EIStart
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIEnter;     /* Computed Parameter: HILInitialize_EIEnter
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POPStart;    /* Computed Parameter: HILInitialize_POPStart
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POPEnter;    /* Computed Parameter: HILInitialize_POPEnter
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POStart;     /* Computed Parameter: HILInitialize_POStart
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POEnter;     /* Computed Parameter: HILInitialize_POEnter
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POTerminate; /* Computed Parameter: HILInitialize_POTerminate
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POExit;      /* Computed Parameter: HILInitialize_POExit
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POReset;     /* Computed Parameter: HILInitialize_POReset
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_OOReset;     /* Computed Parameter: HILInitialize_OOReset
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOInitial;   /* Computed Parameter: HILInitialize_DOInitial
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOFinal;     /* Computed Parameter: HILInitialize_DOFinal
                                        * Referenced by: '<S2>/HIL Initialize'
                                        */
  boolean_T HILReadAnalogTimebase_Active;/* Computed Parameter: HILReadAnalogTimebase_Active
                                          * Referenced by: '<S2>/HIL Read Analog Timebase'
                                          */
  boolean_T HILWriteAnalog1_Active;    /* Computed Parameter: HILWriteAnalog1_Active
                                        * Referenced by: '<S2>/HIL Write Analog1'
                                        */
};

/* Real-time Model Data Structure */
struct RT_MODEL_q_hfe_open_loop {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    void *blockIO;
    const void *constBlockIO;
    real_T *defaultParam;
    ZCSigState *prevZCSigState;
    real_T *contStates;
    real_T *derivs;
    real_T *zcSignalValues;
    void *inputs;
    void *outputs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;

  /*
   * Work:
   * The following substructure contains information regarding
   * the work vectors in the model.
   */
  struct {
    void *dwork;
  } Work;
};

/* Block parameters (auto storage) */
extern Parameters_q_hfe_open_loop q_hfe_open_loop_P;

/* Block signals (auto storage) */
extern BlockIO_q_hfe_open_loop q_hfe_open_loop_B;

/* Block states (auto storage) */
extern D_Work_q_hfe_open_loop q_hfe_open_loop_DWork;

/* Model entry point functions */
extern void q_hfe_open_loop_initialize(boolean_T firstTime);
extern void q_hfe_open_loop_output(int_T tid);
extern void q_hfe_open_loop_update(int_T tid);
extern void q_hfe_open_loop_terminate(void);

/* Real-time Model object */
extern RT_MODEL_q_hfe_open_loop *q_hfe_open_loop_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : q_hfe_open_loop
 * '<S1>'   : q_hfe_open_loop/Compare To Constant
 * '<S2>'   : q_hfe_open_loop/Heatflow
 * '<S3>'   : q_hfe_open_loop/Stop with Message
 * '<S4>'   : q_hfe_open_loop/Stop with Message/Compare
 */
#endif                                 /* RTW_HEADER_q_hfe_open_loop_h_ */