/*
 * vmr_rwd_fix_leftarm.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "vmr_rwd_fix_leftarm".
 *
 * Model version              : 1.2563
 * Simulink Coder version : 8.8.1 (R2015aSP1) 04-Sep-2015
 * C source code generated on : Mon Feb 18 15:24:51 2019
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_vmr_rwd_fix_leftarm_h_
#define RTW_HEADER_vmr_rwd_fix_leftarm_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#include "rtw_modelmap.h"
#ifndef vmr_rwd_fix_leftarm_COMMON_INCLUDES_
# define vmr_rwd_fix_leftarm_COMMON_INCLUDES_
#include <xpcimports.h>
#include <xpcdatatypes.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#include "stddef.h"
#include "stdlib.h"
#include "xpcethercatutils.h"
#include "xpctarget.h"
#include "BKINethercat.h"
#include "io_config_xml_1.h"
#include "io_config_xml_0.h"
#endif                                 /* vmr_rwd_fix_leftarm_COMMON_INCLUDES_ */

#include "vmr_rwd_fix_leftarm_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "vmr_rwd_fix_leftarm_FeedFwdArm.h"
#include "vmr_rwd_fix_leftarm_Keepalive.h"
#include "vmr_rwd_fix_leftarm_NetworkTransferSubsystem.h"
#include "vmr_rwd_fix_leftarm_PVC_core.h"
#include "vmr_rwd_fix_leftarm_PollForcePlates.h"
#include "vmr_rwd_fix_leftarm_PollKINARM.h"
#include "vmr_rwd_fix_leftarm_PreviewTargetsSubsystem.h"
#include "vmr_rwd_fix_leftarm_Receive_Gaze.h"
#include "vmr_rwd_fix_leftarm_TaskExecutionControlSubsystem.h"
#include "vmr_rwd_fix_leftarm_applyloads.h"
#include "rt_zcfcn.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"

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
# define rtmGetDataMapInfo(rtm)        ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ((rtm)->DataMapInfo = (val))
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
# define rtmGetNonInlinedSFcns(rtm)    ((rtm)->NonInlinedSFcns)
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ((rtm)->NonInlinedSFcns = (val))
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

#ifndef rtmGetNumPeriodicContStates
# define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
# define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
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
# define rtmGetPerTaskSampleHits(rtm)  ((rtm)->Timing.RateInteraction)
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ((rtm)->Timing.RateInteraction = (val))
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

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->ModelData.periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->ModelData.periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->ModelData.periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->ModelData.periodicContStateRanges = (val))
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
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ((rtm)->rtwLogInfo = (val))
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
# define rtmGetRootDWork(rtm)          ((rtm)->ModelData.dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->ModelData.dwork = (val))
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
# define rtmGetTaskCounters(rtm)       ((rtm)->Timing.TaskCounters)
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ((rtm)->Timing.TaskCounters = (val))
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
# define rtmGetDWork(rtm, idx)         ((rtm)->ModelData.dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->ModelData.dwork[idx] = (val))
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

#ifndef rtmGetVarNextHitTimeList
# define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
# define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) ((tid) <= 1)
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
# define rtmIsSampleHit(rtm, sti, tid) (((rtm)->Timing.sampleTimeTaskIDPtr[sti] == (tid)))
#endif

#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
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

#ifndef rtmTaskCounter
# define rtmTaskCounter(rtm, idx)      ((rtm)->Timing.TaskCounters.TID[(idx)])
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
#define rtModel_vmr_rwd_fix_leftarm    RT_MODEL_vmr_rwd_fix_leftarm_T

/* Definition for use in the target main file */
#define vmr_rwd_fix_leftarm_rtModel    RT_MODEL_vmr_rwd_fix_leftarm_T

/* user code (top of export header file) */
#include "xpcdatatypes.h"

/* Block signals for system '<S258>/MATLAB Function' */
typedef struct {
  real_T is_right_arm;                 /* '<S258>/MATLAB Function' */
  real_T isExo;                        /* '<S258>/MATLAB Function' */
  real_T has_high_res_encoders;        /* '<S258>/MATLAB Function' */
} B_MATLABFunction_vmr_rwd_fix_leftarm_T;

/* Block signals for system '<S261>/Embedded MATLAB Function' */
typedef struct {
  real_T VCODE[70];                    /* '<S261>/Embedded MATLAB Function' */
} B_EmbeddedMATLABFunction_vmr_rwd_fix_leftarm_T;

/* Block signals for system '<S9>/Ramp_Up_Down' */
typedef struct {
  real_T scaling;                      /* '<S9>/Ramp_Up_Down' */
  int8_T e_clk;                        /* '<S9>/Ramp_Up_Down' */
} B_Ramp_Up_Down_vmr_rwd_fix_leftarm_T;

/* Block states (auto storage) for system '<S9>/Ramp_Up_Down' */
typedef struct {
  real_T tick;                         /* '<S9>/Ramp_Up_Down' */
  real_T tickCount;                    /* '<S9>/Ramp_Up_Down' */
  int32_T sfEvent;                     /* '<S9>/Ramp_Up_Down' */
  uint32_T temporalCounter_i1;         /* '<S9>/Ramp_Up_Down' */
  int8_T Ramp_Up_Down_SubsysRanBC;     /* '<S9>/Ramp_Up_Down' */
  uint8_T is_active_c39_KINARM_loads;  /* '<S9>/Ramp_Up_Down' */
  uint8_T is_c39_KINARM_loads;         /* '<S9>/Ramp_Up_Down' */
  uint8_T is_Ramp_Up_Main;             /* '<S9>/Ramp_Up_Down' */
  boolean_T isStable;                  /* '<S9>/Ramp_Up_Down' */
} DW_Ramp_Up_Down_vmr_rwd_fix_leftarm_T;

/* Zero-crossing (trigger) state for system '<S9>/Ramp_Up_Down' */
typedef struct {
  ZCSigState Ramp_Up_Down_Trig_ZCE;    /* '<S9>/Ramp_Up_Down' */
} ZCE_Ramp_Up_Down_vmr_rwd_fix_leftarm_T;

/* Block signals (auto storage) */
typedef struct {
  real_T BlockDefinitions[25000];      /* '<S5>/Block Definitions' */
  real_T data_data[3781];
  boolean_T x[24950];
  real_T BlockSequence[2000];          /* '<S5>/Block Sequence' */
  real_T Xdif[1024];
  real_T Ydif[1024];
  real_T b[1024];
  real_T RunCommandReceive_o2;         /* '<S267>/Run Command Receive' */
  real_T DataTypeConversion;           /* '<S267>/Data Type Conversion' */
  real_T PauseType;                    /* '<S5>/Pause Type' */
  real_T Convert18;                    /* '<S5>/Convert18' */
  real_T UseTaskProtocolBlockSequenceFlag;/* '<S5>/Use Task Protocol Block Sequence Flag' */
  real_T NextBlock;                    /* '<S5>/Next Block' */
  real_T Convert16;                    /* '<S5>/Convert16' */
  real_T Convert17;                    /* '<S5>/Convert17' */
  real_T MinMax;                       /* '<S5>/MinMax' */
  real_T DataTypeConversion2;          /* '<S267>/Data Type Conversion2' */
  real_T TPSelector[50];               /* '<S5>/TP Selector' */
  real_T Convert1[5000];               /* '<S5>/Convert1' */
  real_T Convert10[2];                 /* '<S5>/Convert10' */
  real_T Convert11[10];                /* '<S5>/Convert11' */
  real_T Convert12;                    /* '<S5>/Convert12' */
  real_T Convert13[3];                 /* '<S5>/Convert13' */
  real_T Convert14[2];                 /* '<S5>/Convert14' */
  real_T Convert15;                    /* '<S5>/Convert15' */
  real_T Convert7;                     /* '<S5>/Convert7' */
  real_T Convert8;                     /* '<S5>/Convert8' */
  real_T Convert9[2];                  /* '<S5>/Convert9' */
  real_T LoadTable[400];               /* '<S5>/Load Table' */
  real_T Taskwideparam[50];            /* '<S5>/Task wide param' */
  real_T frame_of_reference_center[2]; /* '<S5>/frame_of_reference_center' */
  real_T LibraryPatchVersion;          /* '<S5>/Library Patch Version' */
  real_T LibraryVersion;               /* '<S5>/Library Version' */
  real_T TaskVersion;                  /* '<S5>/Task Version' */
  real_T xPCVersion;                   /* '<S5>/xPC Version' */
  real_T dlmbuildtime;                 /* '<S5>/dlm build time' */
  real_T Timestamp;                    /* '<S29>/Timestamp' */
  real_T conv;                         /* '<S29>/conv' */
  real_T RunStatus;                    /* '<S29>/Run Status' */
  real_T RateTransition10;             /* '<S29>/Rate Transition10' */
  real_T Memory[4];                    /* '<Root>/Memory' */
  real_T Memory_n[4];                  /* '<S2>/Memory' */
  real_T Memory_e;                     /* '<S13>/Memory' */
  real_T Gain;                         /* '<S13>/Gain' */
  real_T Dominant_Arm;                 /* '<S10>/Dominant_Arm' */
  real_T Array_Selector1[2];           /* '<S10>/Array_Selector1' */
  real_T ArraySelector[32];            /* '<S10>/Array Selector' */
  real_T Dominant_Arm_j;               /* '<S8>/Dominant_Arm' */
  real_T Hand_Pos[6];                  /* '<S8>/Hand_Pos' */
  real_T MultiportSwitch[2];           /* '<S8>/Multiport Switch' */
  real_T Memory1;                      /* '<Root>/Memory1' */
  real_T LoggingEnable;                /* '<S29>/Logging Enable' */
  real_T RateTransition9;              /* '<S29>/Rate Transition9' */
  real_T CurrentTPIndex;               /* '<S29>/Current TP Index' */
  real_T RateTransition8;              /* '<S29>/Rate Transition8' */
  real_T CurrentBlockIndex;            /* '<S29>/Current Block Index' */
  real_T RateTransition7;              /* '<S29>/Rate Transition7' */
  real_T CurrentTrialNumberinBlock;    /* '<S29>/Current Trial Number in Block' */
  real_T RateTransition6;              /* '<S29>/Rate Transition6' */
  real_T CurrentBlockNumberinSet;      /* '<S29>/Current Block Number in Set' */
  real_T RateTransition5;              /* '<S29>/Rate Transition5' */
  real_T CurrentTrialNumberinSet;      /* '<S29>/Current Trial Number in Set' */
  real_T RateTransition4;              /* '<S29>/Rate Transition4' */
  real_T LastFrameSent1;               /* '<S29>/Last Frame Sent1' */
  real_T RateTransition12;             /* '<S29>/Rate Transition12' */
  real_T Selector[25];                 /* '<S20>/Selector' */
  real_T MatrixConcatenation1[55];     /* '<S20>/Matrix Concatenation1' */
  real_T Selector_b[25];               /* '<S21>/Selector' */
  real_T MatrixConcatenation1_i[55];   /* '<S21>/Matrix Concatenation1' */
  real_T Selector_a[25];               /* '<S264>/Selector' */
  real_T DataTypeConversion_j;         /* '<S4>/Data Type Conversion' */
  real_T MatrixConcatenation1_o[55];   /* '<S264>/Matrix Concatenation1' */
  real_T Add;                          /* '<S3>/Add' */
  real_T Selector_e[25];               /* '<S261>/Selector' */
  real_T Abs;                          /* '<S3>/Abs' */
  real_T Sign;                         /* '<S3>/Sign' */
  real_T MatrixConcatenation1_e[55];   /* '<S261>/Matrix Concatenation1' */
  real_T Memory1_m;                    /* '<S24>/Memory1' */
  real_T Memory_d[50];                 /* '<S24>/Memory' */
  real_T Selector_ec[25];              /* '<S330>/Selector' */
  real_T MatrixConcatenation1_n[55];   /* '<S330>/Matrix Concatenation1' */
  real_T Reshape[70];                  /* '<S6>/Reshape' */
  real_T Reshape1[70];                 /* '<S6>/Reshape1' */
  real_T MatrixConcatenation[140];     /* '<S6>/Matrix Concatenation' */
  real_T Subtract;                     /* '<S24>/Subtract' */
  real_T Selector_l[50];               /* '<S331>/Selector' */
  real_T MatrixConcatenation1_n0[55];  /* '<S331>/Matrix Concatenation1' */
  real_T Selector_p[25];               /* '<S329>/Selector' */
  real_T MatrixConcatenation1_l[55];   /* '<S329>/Matrix Concatenation1' */
  real_T Switch[140];                  /* '<S24>/Switch' */
  real_T Selector_j[25];               /* '<S310>/Selector' */
  real_T DataTypeConversion_c;         /* '<S22>/Data Type Conversion' */
  real_T MatrixConcatenation1_d[55];   /* '<S310>/Matrix Concatenation1' */
  real_T Switch_o[2];                  /* '<S22>/Switch' */
  real_T DataTypeConversion2_d;        /* '<S22>/Data Type Conversion2' */
  real_T MatrixConcatenation_b[490];   /* '<Root>/Matrix Concatenation' */
  real_T RateTransition2[490];         /* '<S13>/Rate Transition2' */
  real_T MatrixConcatenate[1120];      /* '<S13>/Matrix Concatenate' */
  real_T Convert;                      /* '<S13>/Convert' */
  real_T LastFrameSent;                /* '<S29>/Last Frame Sent' */
  real_T RateTransition3;              /* '<S29>/Rate Transition3' */
  real_T Receive_o2;                   /* '<S13>/Receive' */
  real_T Convert1_m;                   /* '<S13>/Convert1' */
  real_T LastFrameAcknowledged;        /* '<S29>/Last Frame Acknowledged' */
  real_T RateTransition2_e;            /* '<S29>/Rate Transition2' */
  real_T ButtonStatus;                 /* '<S29>/Button Status' */
  real_T RateTransition1;              /* '<S29>/Rate Transition1' */
  real_T Servoupdatecount;             /* '<S29>/Servo update count' */
  real_T RateTransition;               /* '<S29>/Rate Transition' */
  real_T TaskControlButton;            /* '<S29>/Task Control Button' */
  real_T RateTransition11;             /* '<S29>/Rate Transition11' */
  real_T RateTransition1_i[16];        /* '<S2>/Rate Transition1' */
  real_T TmpRTBAtNumberofEventCodesOutport1;/* '<S27>/Number of Event Codes' */
  real_T EventCodes;                   /* '<S27>/Event Codes' */
  real_T RateTransition2_ea[2];        /* '<S2>/Rate Transition2' */
  real_T KinarmDataWidth;              /* '<S28>/Kinarm Data Width' */
  real_T RateTransition_k[40];         /* '<S28>/Rate Transition' */
  real_T RateTransition2_er[13];       /* '<S28>/Rate Transition2' */
  real_T RateTransition3_n[14];        /* '<S28>/Rate Transition3' */
  real_T touint1;                      /* '<S28>/touint1' */
  real_T ArmKinematics[68];            /* '<S28>/Arm Kinematics' */
  real_T Subtract_h;                   /* '<S25>/Subtract' */
  real_T AnalogDataWidth;              /* '<S25>/Analog Data Width' */
  real_T RateTransition_c;             /* '<S25>/Rate Transition' */
  real_T VectorConcatenate1[2];        /* '<Root>/Vector Concatenate1' */
  real_T AnalogData[2];                /* '<S25>/Analog Data' */
  real_T RateTransition1_c[2];         /* '<S25>/Rate Transition1' */
  real_T CustomData1[10];              /* '<S26>/Custom Data1' */
  real_T RateTransition_b[4];          /* '<S26>/Rate Transition' */
  real_T RateTransition1_b;            /* '<S26>/Rate Transition1' */
  real_T RateTransition2_eo;           /* '<S26>/Rate Transition2' */
  real_T RateTransition_d[18];         /* '<S2>/Rate Transition' */
  real_T Subtract_g;                   /* '<S27>/Subtract' */
  real_T NumberofEventCodes;           /* '<S27>/Number of Event Codes' */
  real_T RateTransition1_c2[2];        /* '<S308>/Rate Transition1' */
  real_T RateTransition2_m[2];         /* '<S308>/Rate Transition2' */
  real_T RateTransition4_n[2];         /* '<S308>/Rate Transition4' */
  real_T DataTypeConversion_p[12];     /* '<S308>/Data Type Conversion' */
  real_T isEP;                         /* '<S322>/Switch' */
  real_T isHumanExo;                   /* '<S322>/Switch' */
  real_T isUTSExo;                     /* '<S322>/Switch' */
  real_T HasSecondaryEnc;              /* '<S322>/Switch' */
  real_T Sum[4];                       /* '<S308>/Sum' */
  real_T Product2[4];                  /* '<S22>/Product2' */
  real_T Switch_i;                     /* '<S9>/Switch' */
  real_T up_durationms;                /* '<S9>/up_duration(ms)' */
  real_T down_durationms;              /* '<S9>/down_duration(ms)' */
  real_T DataTypeConversion_a;         /* '<S9>/Data Type Conversion' */
  real_T Product[2];                   /* '<S9>/Product' */
  real_T DataTypeConversion1;          /* '<S9>/Data Type Conversion1' */
  real_T Product1[2];                  /* '<S9>/Product1' */
  real_T Switch1;                      /* '<S286>/Switch1' */
  real_T AddTorques[4];                /* '<S2>/AddTorques' */
  real_T Memory1_p;                    /* '<S2>/Memory1' */
  real_T ArmOrientation;               /* '<S2>/Memory2' */
  real_T M1orientation;                /* '<S2>/Memory2' */
  real_T M2Orientation;                /* '<S2>/Memory2' */
  real_T M1GearRatio;                  /* '<S2>/Memory2' */
  real_T M2GearRatio;                  /* '<S2>/Memory2' */
  real_T torqueconstant;               /* '<S2>/Memory2' */
  real_T ArmOrientation_c;             /* '<S2>/Memory2' */
  real_T M1orientation_f;              /* '<S2>/Memory2' */
  real_T M2Orientation_c;              /* '<S2>/Memory2' */
  real_T M1GearRatio_h;                /* '<S2>/Memory2' */
  real_T M2GearRatio_d;                /* '<S2>/Memory2' */
  real_T torqueconstant_m;             /* '<S2>/Memory2' */
  real_T isEP_o;                       /* '<S2>/Memory2' */
  real_T isHumanExo_f;                 /* '<S2>/Memory2' */
  real_T isNHPExo;                     /* '<S2>/Memory2' */
  real_T isClassicExo;                 /* '<S2>/Memory2' */
  real_T isUTSExo_o;                   /* '<S2>/Memory2' */
  real_T isPMAC;                       /* '<S2>/Memory2' */
  real_T isECAT;                       /* '<S2>/Memory2' */
  real_T robotRevision;                /* '<S2>/Memory2' */
  real_T HasSecondaryEnc_a;            /* '<S2>/Memory2' */
  real_T robottype;                    /* '<S2>/Memory2' */
  real_T robotversion;                 /* '<S2>/Memory2' */
  real_T isEP_k;                       /* '<S2>/Memory2' */
  real_T isHumanExo_p;                 /* '<S2>/Memory2' */
  real_T isNHPExo_n;                   /* '<S2>/Memory2' */
  real_T isClassicExo_g;               /* '<S2>/Memory2' */
  real_T isUTSExo_o3;                  /* '<S2>/Memory2' */
  real_T isPMAC_n;                     /* '<S2>/Memory2' */
  real_T isECAT_b;                     /* '<S2>/Memory2' */
  real_T robotRevision_k;              /* '<S2>/Memory2' */
  real_T HasSecondaryEnc_d;            /* '<S2>/Memory2' */
  real_T robottype_c;                  /* '<S2>/Memory2' */
  real_T robotversion_i;               /* '<S2>/Memory2' */
  real_T readstatus[8];                /* '<S2>/read status' */
  real_T robot_count;                  /* '<S38>/arm_count' */
  real_T has_force_plate_1;            /* '<S38>/fp1_present' */
  real_T has_force_plate_2;            /* '<S38>/fp2_present' */
  real_T has_gaze_tracker;             /* '<S38>/gaze_tracker_present' */
  real_T has_robot_lift;               /* '<S38>/robot_lift_present' */
  real_T RateTransition1_d;            /* '<S300>/Rate Transition1' */
  real_T RateTransition2_j;            /* '<S300>/Rate Transition2' */
  real_T SFunctionBuilder_o2;          /* '<S300>/S-Function Builder' */
  real_T SFunctionBuilder_o3[5];       /* '<S300>/S-Function Builder' */
  real_T Hand_Pos_j[6];                /* '<S10>/Hand_Pos' */
  real_T MultiportSwitch_p[2];         /* '<S10>/Multiport Switch' */
  real_T Switch2[4];                   /* '<S24>/Switch2' */
  real_T Reshape_k[4];                 /* '<Root>/Reshape' */
  real_T Selector2[70];                /* '<Root>/Selector2' */
  real_T RateTransition3_h;            /* '<S308>/Rate Transition3' */
  real_T RateTransition6_a[150];       /* '<S308>/Rate Transition6' */
  real_T TmpRTBAtconvert_to_segment_anglesInport3[2];
  real_T TmpRTBAtxy_to_segment_angles_EXOInport3[2];
  real_T Switch_ir[2];                 /* '<S312>/Switch' */
  real_T TSamp[2];                     /* '<S316>/TSamp' */
  real_T Uk1[2];                       /* '<S316>/UD' */
  real_T Diff[2];                      /* '<S316>/Diff' */
  real_T Switch1_o[2];                 /* '<S312>/Switch1' */
  real_T TSamp_d[2];                   /* '<S317>/TSamp' */
  real_T Uk1_d[2];                     /* '<S317>/UD' */
  real_T Diff_p[2];                    /* '<S317>/Diff' */
  real_T VectorConcatenate[5];         /* '<Root>/Vector Concatenate' */
  real_T Constant;                     /* '<Root>/Constant' */
  real_T CLAMP_COLClampStateintegerFlagtoclampvisualfeedbacknone;/* '<S290>/CLAMP_COL;Clamp State;integer;Flag to clamp visual feedback;;;none;;' */
  real_T DELAY_POSTTRIAL_COLPostTrial_Delayintegertimebetweentrialsmsnon;/* '<S290>/DELAY_POSTTRIAL_COL;Post-Trial_Delay;integer;time between trials (ms);;;none;;' */
  real_T DISPLAY_TRIAL_COLFlagforadisplayonlytrialintegerFlagtotransitio;/* '<S290>/DISPLAY_TRIAL_COL;Flag for a display-only trial;integer;Flag to transition to a display-only trial (show instructions or cumulative score);;;none;;' */
  real_T DO_REWARD_COLDoRewardintegerFlagtoindicatewhethertoproviderewar;/* '<S290>/DO_REWARD_COL;Do Reward;integer;Flag to indicate whether to provide reward, neutral tone, or nothing on this trial;;;none;;' */
  real_T END_TARGET_COLEnd_TargettargetSecondtargettoappearduringatriali;/* '<S290>/END_TARGET_COL;End_Target;target;Second target to appear during a trial (i.e. reach to this target from 1st target);;;none;;' */
  real_T HAND_VIS_COLHandVisibleintegerFlagtoshutoffthehandforaftereffec;/* '<S290>/HAND_VIS_COL;Hand Visible;integer;Flag to shut off the hand for aftereffect trials;;;none;;' */
  real_T MAXREACHTIME_COLMaxReachTimeintegermaximumtimeallowedforsucessf;/* '<S290>/MAXREACHTIME_COL;MaxReachTime;integer;maximum time allowed for sucessful reach (ms);;;none;;' */
  real_T ROTATIONRotationintegerRotationdegreesCCWabsoluteorincrementald;/* '<S290>/ROTATION;Rotation;integer;Rotation (degrees CCW) (absolute or incremental, depending on Rotate_Type));;;none;;' */
  real_T ROTATION_CENTERRotate_CentertargetTargettouseforrotationcenteri;/* '<S290>/ROTATION_CENTER;Rotate_Center;target;Target to use for rotation center (i.e. visual rotation occurs about the position defined by this target);;;none;;' */
  real_T ROTATION_TYPERotate_Typeinteger0norotation1rotatespecifiedamoun;/* '<S290>/ROTATION_TYPE;Rotate_Type;integer;0 -> no rotation, 1 -> rotate specified amount, 2 -> change rotation by specified amount;;;none;;' */
  real_T START_TARGET_COLStart_TargettargetFirsttargettoappearduringatri;/* '<S290>/START_TARGET_COL;Start_Target;target;First target to appear during a trial;;;none;;' */
  real_T WAIT_AT_START_COL1st_Target_WaitintegerRequiredholdtimeatstartt;/* '<S290>/WAIT_AT_START_COL;1st_Target_Wait;integer;Required hold time at start target (ms);;;none;;' */
  real_T INSTRUCT_PAUSE_BTNInstructResumeResumetaskexecutionafterinstruc;/* '<S291>/INSTRUCT_PAUSE_BTN;Instruct-Resume;;Resume task execution after instruction display;18;22;none;;' */
  real_T E_HIT_TARGETTarget_HitSubjecthasinterceptedthetargetnone;/* '<S292>/E_HIT_TARGET;Target_Hit;;Subject has intercepted the target;;;none;;' */
  real_T E_MISS_TARGETTarget_MissSubjectshotpastthetargetwithouthittingi;/* '<S292>/E_MISS_TARGET;Target_Miss;;Subject shot past the target without hitting it;;;none;;' */
  real_T E_NEUTRAL_FDBKNFB_Trial_EndSubjecthashitorexceededthetargetonan;/* '<S292>/E_NEUTRAL_FDBK;NFB_Trial_End;;Subject has hit or exceeded the target on a no-feedback trial;;;none;;' */
  real_T E_NO_EVENTnaThisevent_codedoesnotsaveaneventinthedatafileitjust;/* '<S292>/E_NO_EVENT;n|a;;This event_code does not save an event in the data file, it just clears the event;;;none;;' */
  real_T E_REWARDReward_OnRewardisgivennone;/* '<S292>/E_REWARD;Reward_On;;Reward is given;;;none;;' */
  real_T E_SHOW_INSTRUCTShowInstructionsTrialshowsinstructionsnone;/* '<S292>/E_SHOW_INSTRUCT;Show Instructions;;Trial shows instructions ;;;none;;' */
  real_T E_SHOW_SCOREShow_Cum_ScoreDisplaycumulativescorenone;/* '<S292>/E_SHOW_SCORE;Show_Cum_Score;;Display cumulative score;;;none;;' */
  real_T E_STAY_CENTERStay_CenterSubjecthasreachedthecentertargetandmust;/* '<S292>/E_STAY_CENTER;Stay_Center;;Subject has reached the center target and must hold;;;none;;' */
  real_T E_TARGET_ONTarget_OnTargetONstartwaitingforsubjecttoleavecentre;/* '<S292>/E_TARGET_ON;Target_On;;Target ON, start waiting for subject to leave centre target;;;none;;' */
  real_T COLORColorcolourColornone;    /* '<S293>/COLOR;Color;colour;Color;;;none;;' */
  real_T HITCOLORHitColorcolourColorwhenthetargetishitnone;/* '<S293>/HITCOLOR;Hit Color;colour;Color when the target is hit;;;none;;' */
  real_T LABELLabeltextlabelDefaultlabeltextnone;/* '<S293>/LABEL;Label text;label;Default label text;;;none;;' */
  real_T LABEL_HEIGHTLabelHeightfloatHeightofthelabelnone;/* '<S293>/LABEL_HEIGHT;Label Height;float;Height of the label;;;none;;' */
  real_T LOGICAL_RADIUSLogicalradiusfloatLogicalRadiusnone;/* '<S293>/LOGICAL_RADIUS;Logical radius;float;Logical Radius;;;none;;' */
  real_T ROTATED_COLORRotatedColorcolourTargetcolorforrotatedtrialsnone;/* '<S293>/ROTATED_COLOR;Rotated Color;colour;Target color for rotated trials ;;;none;;' */
  real_T STROKE_COLORStrokeColorcolourStrokecolorforreturnringnone;/* '<S293>/STROKE_COLOR;Stroke Color;colour;Stroke color, for return ring;;;none;;' */
  real_T STROKE_WIDTHStrokeWidthfloatStrokewidthforreturnringnone;/* '<S293>/STROKE_WIDTH;Stroke Width;float;Stroke width, for return ring;;;none;;' */
  real_T col_xXfloatXPositioncmofthetargetrelativetolocal00none;/* '<S293>/col_x;X;float;X Position (cm) of the target relative to  local (0,0);;;none;;' */
  real_T col_yYfloatYPositioncmofthetargetrelativetolocal00none;/* '<S293>/col_y;Y;float;Y Position (cm) of the target relative to  local (0,0);;;none;;' */
  real_T VISUAL_RADIUSVisualradiusfloatDisplayRadiusnone;/* '<S293>/VISUAL_RADIUS;Visual radius;float;Display Radius;;;none;;' */
  real_T INSTRUCTIONS;                 /* '<S294>/INSTRUCTIONS=' */
  real_T LOAD_FOREITHER;               /* '<S294>/LOAD_FOR=EITHER' */
  real_T K_FIX_LEFTHANDFixLeftHandFlagintegerFlagtoholdtheenabletherobot;/* '<S295>/K_FIX_LEFTHAND;Fix Left Hand Flag;integer;Flag to hold the enable the robot to hold the left (nondominant) hand in place;;;none;;' */
  real_T K_INSTRUCT_TIMEDisplayInstructionsHoldTimeintegerTimetodisplayi;/* '<S295>/K_INSTRUCT_TIME;Display Instructions Hold Time;integer;Time to display instructions to the screen;;;none;;' */
  real_T K_LEFTHAND_TGTLefthandtargetintegerTargetdefiningthelocationwhe;/* '<S295>/K_LEFTHAND_TGT;Left hand target;integer;Target defining the location where the left hand is to be fixed;;;none;;' */
  real_T K_RETURN_RING_ROWReturnRingTgtTblRowintegerRowofthetargettablet;/* '<S295>/K_RETURN_RING_ROW;ReturnRing TgtTbl Row;integer;Row of the target table to use for feedback on return to start;;;none;;' */
  real_T K_REWARD_VALRewardValuecentsintegerAmountofrewardofferedoneacht;/* '<S295>/K_REWARD_VAL;Reward Value (cents);integer;Amount of reward offered on each trial, in cents;;;none;;' */
  real_T K_ROBOT_MOVE_TIMERobotMoveTimeintegerTimetherobotwillmovetothen;/* '<S295>/K_ROBOT_MOVE_TIME;Robot Move Time;integer;Time the robot will move to the new position;;;none;;' */
  real_T K_ROBOT_RAMP_TIMERobotRampTimeintegerTimetherobotwillrampupandd;/* '<S295>/K_ROBOT_RAMP_TIME;Robot Ramp Time;integer;Time the robot will ramp up and down;;;none;;' */
  real_T K_SCORETEXT_ROWScoreTextTgtTblRowintegerRowofthetargettabletous;/* '<S295>/K_SCORETEXT_ROW;Score Text TgtTbl Row;integer;Row of the target table to use for score text display;;;none;;' */
  real_T K_SCORE_TIMEDisplayScoreHoldTimeintegerTimetodisplaythecumulati;/* '<S295>/K_SCORE_TIME;Display Score Hold Time ;integer;Time to display the cumulative score (e.g., at the end of the session);;;none;;' */
  real_T K_TONE_HIT_DURATIONHittonedurationintegerDurationofthefeedbackt;/* '<S295>/K_TONE_HIT_DURATION;Hit tone duration;integer;Duration of the feedback tone when the target is hit;;;none;;' */
  real_T K_TONE_HIT_FREQUENCYHittonefrequencyintegerFrequencyofthefeedba;/* '<S295>/K_TONE_HIT_FREQUENCY;Hit tone frequency;integer;Frequency of the feedback tone when the target is hit;;;none;;' */
  real_T K_TONE_NEUTRAL_DURATIONNeutraltonedurationintegerDurationofthen;/* '<S295>/K_TONE_NEUTRAL_DURATION;Neutral tone duration;integer;Duration of the neutral feedback tone indicating end of trial;;;none;;' */
  real_T K_TONE_NEUTRAL_FREQUENCYNeutraltonefrequencyintegerFrequencyoft;/* '<S295>/K_TONE_NEUTRAL_FREQUENCY;Neutral tone frequency;integer;Frequency of the neutral feedback tone indicating end of trial;;;none;;' */
  real_T K_UNUSEDUnusedintegerNotcurrentlyusednone;/* '<S295>/K_UNUSED;Unused;integer;Not currently used;;;none;;' */
  real_T K_VIS_RADVisibleRadiusfloatRadiusfromthestarttargetthatthehandw;/* '<S295>/K_VIS_RAD;Visible Radius;float;Radius from the start target that the hand will always be visible (m);;;none;;' */
  real_T rotation;                     /* '<S332>/Embedded MATLAB Function' */
  real_T VCODE[140];                   /* '<S331>/Embedded MATLAB Function' */
  real_T VCODE_e[70];                  /* '<S330>/Embedded MATLAB Function' */
  real_T cursstate;                    /* '<S24>/MATLAB Function1' */
  real_T fbswitch;                     /* '<S24>/MATLAB Function1' */
  real_T ringstate;                    /* '<S24>/MATLAB Function1' */
  real_T VCODE_n[140];                 /* '<S24>/MATLAB Function' */
  real_T VCODES[140];                  /* '<S24>/Embedded MATLAB Function1' */
  real_T CursorPos[4];                 /* '<S24>/Embedded MATLAB Function1' */
  real_T CursorPos_p[4];               /* '<S24>/Embedded MATLAB Function' */
  real_T VCODES_k[140];                /* '<S24>/Embedded MATLAB Function' */
  real_T Switch1_ot[140];              /* '<S24>/Switch1' */
  real_T event_code;                   /* '<Root>/Trial_Control' */
  real_T targetA_row;                  /* '<Root>/Trial_Control' */
  real_T targetA_state;                /* '<Root>/Trial_Control' */
  real_T targetB_row;                  /* '<Root>/Trial_Control' */
  real_T targetB_state;                /* '<Root>/Trial_Control' */
  real_T reward_state;                 /* '<Root>/Trial_Control' */
  real_T instruct_num;                 /* '<Root>/Trial_Control' */
  real_T tone;                         /* '<Root>/Trial_Control' */
  real_T rotation_on;                  /* '<Root>/Trial_Control' */
  real_T handvis_state;                /* '<Root>/Trial_Control' */
  real_T do_clamp;                     /* '<Root>/Trial_Control' */
  real_T VCODE_o[70];                  /* '<S310>/Embedded MATLAB Function' */
  real_T VCODE_MOD[70];                /* '<S22>/MATLAB Function1' */
  real_T armIdx;                       /* '<S322>/arm switch' */
  real_T filteredVals[4];              /* '<S313>/filter' */
  real_T constants[3];                 /* '<S313>/consts' */
  real_T SEGMENT_ANG[2];               /* '<S312>/xy_to_segment_angles_EXO' */
  real_T SEGMENT_ANG_m[2];             /* '<S312>/convert_to_segment_angles' */
  real_T TmpSignalConversionAtSFunctionInport7[2];/* '<S308>/FF_FB_Position_Controller' */
  real_T TmpSignalConversionAtSFunctionInport8[2];/* '<S308>/FF_FB_Position_Controller' */
  real_T TmpSignalConversionAtSFunctionInport9[2];/* '<S308>/FF_FB_Position_Controller' */
  real_T TmpSignalConversionAtSFunctionInport10[2];/* '<S308>/FF_FB_Position_Controller' */
  real_T TorqueFB[4];                  /* '<S308>/FF_FB_Position_Controller' */
  real_T TorqueFF[4];                  /* '<S308>/FF_FB_Position_Controller' */
  real_T force_scale;                  /* '<S22>/Chart' */
  real_T virtual_pos[2];               /* '<S22>/Chart' */
  real_T state;                        /* '<S22>/Chart' */
  real_T Convert_j;                    /* '<S302>/Convert' */
  real_T RateTransition1_p;            /* '<S302>/Rate Transition1' */
  real_T vis_cmd_len;                  /* '<S302>/Pack VCodeFrame2' */
  real_T vis_cmd_cropped;              /* '<S302>/Pack VCodeFrame2' */
  real_T vcode_err_id;                 /* '<S302>/Pack VCodeFrame2' */
  real_T last_frame_ack;               /* '<S13>/MATLAB Function' */
  real_T last_perm_ack;                /* '<S13>/MATLAB Function' */
  real_T delay;                        /* '<S300>/MATLAB Function' */
  real_T output;                       /* '<S12>/Play sound over and over' */
  real_T soundON;                      /* '<S12>/Play sound over and over' */
  real_T hand;                         /* '<S10>/Embedded MATLAB WhichHand' */
  real_T cursor;                       /* '<S10>/Embedded MATLAB WhichHand' */
  real_T TmpSignalConversionAtSFunctionInport3[4];/* '<S10>/Embedded MATLAB InsideTarget' */
  real_T intarget[128];                /* '<S10>/Embedded MATLAB InsideTarget' */
  real_T Arm1[2];                      /* '<S10>/Arm1' */
  real_T Arm2[2];                      /* '<S10>/Arm2' */
  real_T TmpSignalConversionAtSFunctionInport3_o[2];/* '<S286>/clip_motor_torque' */
  real_T clipped_torques[4];           /* '<S286>/clip_motor_torque' */
  real_T y[4];                         /* '<S9>/Torque_Cap' */
  real_T out[4];                       /* '<S9>/Remove_NaNs_and_Inf1' */
  real_T TmpSignalConversionAtSFunctionInport1[4];/* '<S9>/Remove_NaNs_and_Inf' */
  real_T out_e[4];                     /* '<S9>/Remove_NaNs_and_Inf' */
  real_T hand_k;                       /* '<S8>/Embedded MATLAB WhichHand' */
  real_T distance[32];                 /* '<S8>/Embedded MATLAB InsideTarget' */
  real_T Arm1_j[2];                    /* '<S8>/Arm1' */
  real_T Arm2_c[2];                    /* '<S8>/Arm2' */
  real_T distance_e[1024];             /* '<S7>/Embedded MATLAB InsideTarget' */
  real_T VCODES_out[140];              /* '<S6>/FeedFwdArm' */
  real_T total_trials;                 /* '<S269>/Count trials' */
  real_T trials_in_block;              /* '<S269>/Count trials' */
  real_T total_blocks;                 /* '<S269>/Count trials' */
  real_T Delay1;                       /* '<S268>/Delay1' */
  real_T Product3;                     /* '<S268>/Product3' */
  real_T TaskClock;                    /* '<S268>/Task Clock' */
  real_T Product_i;                    /* '<S268>/Product' */
  real_T DataTypeConversion_g;         /* '<S268>/Data Type Conversion' */
  real_T Product2_n;                   /* '<S268>/Product2' */
  real_T DataTypeConversion2_n;        /* '<S268>/Data Type Conversion2' */
  real_T Selector_n[50];               /* '<S268>/Selector' */
  real_T Selector1[500];               /* '<S268>/Selector1' */
  real_T Selector2_l[1000];            /* '<S268>/Selector2' */
  real_T repeat_last_trial;            /* '<S268>/Task Execution Control Machine' */
  real_T extra_trials[2];              /* '<S268>/Task Execution Control Machine' */
  real_T value;                        /* '<S267>/Hold_to_1Khz' */
  real_T y_b;                          /* '<S267>/Embedded MATLAB Function' */
  real_T z;                            /* '<S267>/Embedded MATLAB Function' */
  real_T Concatenation1[10];           /* '<S266>/Concatenation1' */
  real_T target_vector[352];           /* '<S266>/Create Target Vector' */
  real_T target_vector_length;         /* '<S266>/Create Target Vector' */
  real_T VCODE_l[70];                  /* '<S264>/Embedded MATLAB Function' */
  real_T VCODE_mod[70];                /* '<S4>/MATLAB Function' */
  real_T TmpSignalConversionAtSFunctionInport1_f[4];/* '<S37>/delta' */
  real_T TmpSignalConversionAtSFunctionInport2[4];/* '<S37>/delta' */
  real_T deltas[4];                    /* '<S37>/delta' */
  real_T Product_m[4];                 /* '<S251>/Product' */
  real_T DataStoreRead[14];            /* '<S250>/Data Store Read' */
  real_T DataTypeConversion3[4];       /* '<S34>/Data Type Conversion3' */
  real_T DataTypeConversion4;          /* '<S34>/Data Type Conversion4' */
  real_T DataTypeConversion5;          /* '<S34>/Data Type Conversion5' */
  real_T Convert1_p;                   /* '<S34>/Convert1' */
  real_T DataTypeConversion_i;         /* '<S34>/Data Type Conversion' */
  real_T Convert19[3];                 /* '<S34>/Convert19' */
  real_T DataTypeConversion1_l[3];     /* '<S34>/Data Type Conversion1' */
  real_T TmpRTBAtconverttoseconds2Inport1[3];/* '<S34>/Data Type Conversion1' */
  real_T TmpRTBAtconverttoseconds2Inport2;/* '<S34>/Create timestamp' */
  real_T Convert2[3];                  /* '<S34>/Convert2' */
  real_T Convert3;                     /* '<S34>/Convert3' */
  real_T Gain_b[3];                    /* '<S34>/Gain' */
  real_T Convert4[3];                  /* '<S34>/Convert4' */
  real_T RateTransition_kg[3];         /* '<S34>/Rate Transition' */
  real_T Receive_o2_j;                 /* '<S34>/Receive' */
  real_T event_data_out[3];            /* '<S34>/convert to seconds2' */
  real_T gazeXYCalculated[2];          /* '<S34>/Embedded MATLAB Function1' */
  real_T pupil_area_GLOBAL;            /* '<S34>/Embedded MATLAB Function1' */
  real_T gaze_unit_vector_GLOBAL[3];   /* '<S34>/Embedded MATLAB Function1' */
  real_T pupil_GLOBAL[3];              /* '<S34>/Embedded MATLAB Function1' */
  real_T timestamp_out;                /* '<S34>/Create timestamp' */
  real_T start_time_out;               /* '<S34>/Create timestamp' */
  real_T DataTypeConversion_h;         /* '<S63>/Data Type Conversion' */
  real_T systemtype;                   /* '<S33>/system type' */
  real_T convert[8];                   /* '<S63>/convert' */
  real_T ReadHasFT[2];                 /* '<S33>/Read HasFT' */
  real_T ArmOrientation_b;             /* '<S229>/Arm Orientation' */
  real_T M1orientation_h;              /* '<S229>/Arm Motor1 Orientation' */
  real_T M2Orientation_l;              /* '<S229>/Arm Motor2 Orientation' */
  real_T M1GearRatio_b;                /* '<S229>/Arm Motor1 Gear Ratio' */
  real_T M2GearRatio_p;                /* '<S229>/Arm Motor2 Gear Ratio' */
  real_T HasSecondaryEnc_n;            /* '<S229>/Arm Secondary Encoders' */
  real_T ArmOrientation_l;             /* '<S230>/Arm Orientation' */
  real_T M1orientation_n;              /* '<S230>/Arm Motor1 Orientation' */
  real_T M2Orientation_cw;             /* '<S230>/Arm Motor2 Orientation' */
  real_T M1GearRatio_k;                /* '<S230>/Arm Motor1 Gear Ratio' */
  real_T M2GearRatio_l;                /* '<S230>/Arm Motor2 Gear Ratio' */
  real_T HasSecondaryEnc_f;            /* '<S230>/Arm Secondary Encoders' */
  real_T shoulderangleoffset;          /* '<S229>/Arm Shoulder Angle Offset' */
  real_T elbowangleoffset;             /* '<S229>/Arm Elbow Angle Offset' */
  real_T ShoulderX;                    /* '<S229>/Arm Shoulder X' */
  real_T ShoulderY;                    /* '<S229>/Arm Shoulder Y' */
  real_T L1;                           /* '<S229>/Arm L1' */
  real_T L2;                           /* '<S229>/Arm L2' */
  real_T Pointeroffset;                /* '<S229>/Arm Pointer Offset' */
  real_T L3Error;                      /* '<S229>/Arm L3 Error' */
  real_T robottype_e;                  /* '<S229>/Arm robot type' */
  real_T torqueconstant_g;             /* '<S229>/Arm Torque Constant' */
  real_T robotversion_g;               /* '<S229>/Arm robot version' */
  real_T shoulderangleoffset_b;        /* '<S230>/Arm Shoulder Angle Offset' */
  real_T elbowangleoffset_a;           /* '<S230>/Arm Elbow Angle Offset' */
  real_T ShoulderX_a;                  /* '<S230>/Arm Shoulder X' */
  real_T ShoulderY_b;                  /* '<S230>/Arm Shoulder Y' */
  real_T L1_c;                         /* '<S230>/Arm L1' */
  real_T L2_f;                         /* '<S230>/Arm L2' */
  real_T Pointeroffset_b;              /* '<S230>/Arm Pointer Offset' */
  real_T L3Error_f;                    /* '<S230>/Arm L3 Error' */
  real_T robottype_cs;                 /* '<S230>/Arm robot type' */
  real_T torqueconstant_i;             /* '<S230>/Arm Torque Constant' */
  real_T robotversion_f;               /* '<S230>/Arm robot version' */
  real_T Statusread1[2];               /* '<S229>/Status read1' */
  real_T Statusread1_m[2];             /* '<S230>/Status read1' */
  real_T Selector_c[50];               /* '<S72>/Selector' */
  real_T Selector1_m[50];              /* '<S72>/Selector1' */
  real_T Selector2_o[50];              /* '<S72>/Selector2' */
  real_T Selector1_a[6];               /* '<S73>/Selector1' */
  real_T Selector2_i[6];               /* '<S73>/Selector2' */
  real_T active_arm;                   /* '<S72>/splitKINDataGeneral' */
  real_T delayEstimates[4];            /* '<S72>/splitKINDataGeneral' */
  real_T servoCounter;                 /* '<S72>/splitKINDataGeneral' */
  real_T calibrationButtonBits;        /* '<S72>/splitKINDataGeneral' */
  real_T handFF;                       /* '<S72>/splitKINDataGeneral' */
  real_T handFF_Dex;                   /* '<S72>/splitKINDataGeneral' */
  real_T handFBArm;                    /* '<S72>/splitKINDataGeneral' */
  real_T handFBRadius;                 /* '<S72>/splitKINDataGeneral' */
  real_T handFBControl;                /* '<S72>/splitKINDataGeneral' */
  real_T handFBColor;                  /* '<S72>/splitKINDataGeneral' */
  real_T hasGaze;                      /* '<S72>/splitKINDataGeneral' */
  real_T gazeFB;                       /* '<S72>/splitKINDataGeneral' */
  real_T gazeLocation[2];              /* '<S72>/splitKINDataGeneral' */
  real_T gazeTimestamp;                /* '<S72>/splitKINDataGeneral' */
  real_T gazePupilArea;                /* '<S72>/splitKINDataGeneral' */
  real_T gazeEvent[3];                 /* '<S72>/splitKINDataGeneral' */
  real_T gazeVector[3];                /* '<S72>/splitKINDataGeneral' */
  real_T gazePupilLoc[3];              /* '<S72>/splitKINDataGeneral' */
  real_T link_lengths[2];              /* '<S72>/splitKINData arm2' */
  real_T pointer_offset;               /* '<S72>/splitKINData arm2' */
  real_T shoulder_loc[2];              /* '<S72>/splitKINData arm2' */
  real_T arm_orientation;              /* '<S72>/splitKINData arm2' */
  real_T shoulder_ang;                 /* '<S72>/splitKINData arm2' */
  real_T elbow_ang;                    /* '<S72>/splitKINData arm2' */
  real_T shoulder_velocity;            /* '<S72>/splitKINData arm2' */
  real_T elbow_velocity;               /* '<S72>/splitKINData arm2' */
  real_T shoulder_acceleration;        /* '<S72>/splitKINData arm2' */
  real_T elbow_acceleration;           /* '<S72>/splitKINData arm2' */
  real_T joint_torque_cmd[2];          /* '<S72>/splitKINData arm2' */
  real_T motor_torque_cmd[2];          /* '<S72>/splitKINData arm2' */
  real_T link_angle[2];                /* '<S72>/splitKINData arm2' */
  real_T link_velocity[2];             /* '<S72>/splitKINData arm2' */
  real_T link_acceleration[2];         /* '<S72>/splitKINData arm2' */
  real_T hand_position[2];             /* '<S72>/splitKINData arm2' */
  real_T hand_velocity[2];             /* '<S72>/splitKINData arm2' */
  real_T hand_acceleration[2];         /* '<S72>/splitKINData arm2' */
  real_T motor_status;                 /* '<S72>/splitKINData arm2' */
  real_T force_sensor_force_uvw[3];    /* '<S72>/splitKINData arm2' */
  real_T force_sensor_torque_uvw[3];   /* '<S72>/splitKINData arm2' */
  real_T force_sensor_force_xyz[3];    /* '<S72>/splitKINData arm2' */
  real_T force_sensor_torque_xyz[3];   /* '<S72>/splitKINData arm2' */
  real_T force_sensor_timestamp;       /* '<S72>/splitKINData arm2' */
  real_T link_lengths_o[2];            /* '<S72>/splitKINData arm1' */
  real_T pointer_offset_k;             /* '<S72>/splitKINData arm1' */
  real_T shoulder_loc_o[2];            /* '<S72>/splitKINData arm1' */
  real_T arm_orientation_o;            /* '<S72>/splitKINData arm1' */
  real_T shoulder_ang_h;               /* '<S72>/splitKINData arm1' */
  real_T elbow_ang_k;                  /* '<S72>/splitKINData arm1' */
  real_T shoulder_velocity_k;          /* '<S72>/splitKINData arm1' */
  real_T elbow_velocity_j;             /* '<S72>/splitKINData arm1' */
  real_T shoulder_acceleration_c;      /* '<S72>/splitKINData arm1' */
  real_T elbow_acceleration_j;         /* '<S72>/splitKINData arm1' */
  real_T joint_torque_cmd_k[2];        /* '<S72>/splitKINData arm1' */
  real_T motor_torque_cmd_b[2];        /* '<S72>/splitKINData arm1' */
  real_T link_angle_b[2];              /* '<S72>/splitKINData arm1' */
  real_T link_velocity_k[2];           /* '<S72>/splitKINData arm1' */
  real_T link_acceleration_c[2];       /* '<S72>/splitKINData arm1' */
  real_T hand_position_g[2];           /* '<S72>/splitKINData arm1' */
  real_T hand_velocity_p[2];           /* '<S72>/splitKINData arm1' */
  real_T hand_acceleration_e[2];       /* '<S72>/splitKINData arm1' */
  real_T motor_status_c;               /* '<S72>/splitKINData arm1' */
  real_T force_sensor_force_uvw_g[3];  /* '<S72>/splitKINData arm1' */
  real_T force_sensor_torque_uvw_d[3]; /* '<S72>/splitKINData arm1' */
  real_T force_sensor_force_xyz_g[3];  /* '<S72>/splitKINData arm1' */
  real_T force_sensor_torque_xyz_g[3]; /* '<S72>/splitKINData arm1' */
  real_T force_sensor_timestamp_k;     /* '<S72>/splitKINData arm1' */
  real_T Read[16];                     /* '<S69>/Read' */
  real_T ReadHW[24];                   /* '<S69>/Read HW' */
  real_T ReadKinematics[20];           /* '<S69>/Read Kinematics' */
  real_T DelayRead[4];                 /* '<S69>/Delay Read' */
  real_T Primaryread[12];              /* '<S69>/Primary read' */
  real_T torquefeedback1[8];           /* '<S69>/torque feedback1' */
  real_T ErrMsgs[20];                  /* '<S69>/ErrMsgs' */
  real_T newMessage[6];                /* '<S69>/record errors' */
  real_T sentMessageCount;             /* '<S69>/record errors' */
  real_T TmpSignalConversionAtSFunctionInport3_e[14];/* '<S69>/Create KINARM Data Array' */
  real_T TmpSignalConversionAtSFunctionInport10_l[7];/* '<S69>/Create KINARM Data Array' */
  real_T TmpSignalConversionAtSFunctionInport12[14];/* '<S69>/Create KINARM Data Array' */
  real_T kinarm_data[150];             /* '<S69>/Create KINARM Data Array' */
  real_T primary_encoder_data_out[12]; /* '<S69>/Create KINARM Data Array' */
  real_T DataStore[16];                /* '<S83>/Data Store' */
  real_T DataStore1[24];               /* '<S83>/Data Store1' */
  real_T DataTypeConversion3_l[4];     /* '<S83>/Data Type Conversion3' */
  real_T TmpSignalConversionAtSFunctionInport2_l[4];/* '<S83>/update calibrations' */
  real_T TmpSignalConversionAtSFunctionInport4[2];/* '<S83>/update calibrations' */
  real_T calibrationsOut[16];          /* '<S83>/update calibrations' */
  real_T TmpSignalConversionAtSFunctionInport2_b[2];/* '<S83>/update HW settings' */
  real_T TmpSignalConversionAtSFunctionInport3_h[2];/* '<S83>/update HW settings' */
  real_T TmpSignalConversionAtSFunctionInport4_i[2];/* '<S83>/update HW settings' */
  real_T settingsOut[24];              /* '<S83>/update HW settings' */
  real_T outMem[20];                   /* '<S83>/robottype1' */
  real_T TmpSignalConversionAtSFunctionInport1_p[4];/* '<S83>/create kinematics' */
  real_T TmpSignalConversionAtSFunctionInport2_bj[4];/* '<S83>/create kinematics' */
  real_T TmpSignalConversionAtSFunctionInport3_g[4];/* '<S83>/create kinematics' */
  real_T TmpSignalConversionAtSFunctionInport4_b[2];/* '<S83>/create kinematics' */
  real_T TmpSignalConversionAtSFunctionInport6[2];/* '<S83>/create kinematics' */
  real_T TmpSignalConversionAtSFunctionInport8_p[2];/* '<S83>/create kinematics' */
  real_T kinematicsOut[20];            /* '<S83>/create kinematics' */
  real_T kinematicsOutPrimary[12];     /* '<S83>/create kinematics' */
  real_T delays[4];                    /* '<S83>/create kinematics' */
  real_T outVals[20];                  /* '<S193>/rebuild' */
  real_T TmpSignalConversionAtSFunctionInport1_l[4];/* '<S193>/filter_velocities' */
  real_T filteredVels[4];              /* '<S193>/filter_velocities' */
  real_T Receive_o2_o;                 /* '<S222>/Receive' */
  real_T DataTypeConversion_k[2];      /* '<S222>/Data Type Conversion' */
  real_T DataTypeConversion1_a[2];     /* '<S222>/Data Type Conversion1' */
  real_T DataTypeConversion2_i;        /* '<S222>/Data Type Conversion2' */
  real_T kinematics[20];               /* '<S222>/MATLAB Function' */
  real_T primary[12];                  /* '<S222>/MATLAB Function' */
  real_T UnitDelay;                    /* '<S211>/Unit Delay' */
  real_T DPRAMReadValue;               /* '<S211>/DPRAM Read Value' */
  real_T UnitDelay1;                   /* '<S211>/Unit Delay1' */
  real_T Conversion1[6];               /* '<S209>/Conversion1' */
  real_T Conversion2[6];               /* '<S209>/Conversion2' */
  real_T Conversion7[4];               /* '<S209>/Conversion7' */
  real_T DataTypeConversion3_d[10];    /* '<S209>/Data Type Conversion3' */
  real_T DataTypeConversion4_g[10];    /* '<S209>/Data Type Conversion4' */
  real_T robot1DataOut[10];            /* '<S209>/filter_velocities' */
  real_T robot2DataOut[10];            /* '<S209>/filter_velocities' */
  real_T robot1DataOut_p[10];          /* '<S209>/Robot_data_builder' */
  real_T robot2DataOut_g[10];          /* '<S209>/Robot_data_builder' */
  real_T robot1PrimaryEncDataOut[6];   /* '<S209>/Robot_data_builder' */
  real_T robot2PrimaryEncDataOut[6];   /* '<S209>/Robot_data_builder' */
  real_T force_scale_b;                /* '<S209>/Monitor_status' */
  real_T DataTypeConversion1_j;        /* '<S216>/Data Type Conversion1' */
  real_T Uk1_o;                        /* '<S204>/Delay Input1' */
  real_T ReceivefromRobot1ForceSensor_o2;/* '<S201>/Receive from Robot 1 Force Sensor' */
  real_T Switch_p[7];                  /* '<S201>/Switch' */
  real_T Uk1_p;                        /* '<S208>/Delay Input1' */
  real_T ReceivefromRobot2ForceSensor_o2;/* '<S202>/Receive from Robot 2 Force Sensor' */
  real_T Switch1_b[7];                 /* '<S202>/Switch1' */
  real_T DataTypeConversion1_g[6];     /* '<S202>/Data Type Conversion1' */
  real_T DataTypeConversion_e[6];      /* '<S201>/Data Type Conversion' */
  real_T intAddresses[24];             /* '<S63>/sdo_addrs' */
  real_T floatAddresses[24];           /* '<S63>/sdo_addrs' */
  real_T errVals[12];                  /* '<S63>/latch_errors' */
  real_T DCErrVals[12];                /* '<S63>/latch_errors' */
  real_T Memory_m;                     /* '<S136>/Memory' */
  real_T Memory_i;                     /* '<S137>/Memory' */
  real_T Memory1_e;                    /* '<S145>/Memory1' */
  real_T Memory2;                      /* '<S145>/Memory2' */
  real_T offsetrads;                   /* '<S154>/L2 select' */
  real_T encorient;                    /* '<S154>/L2 select1' */
  real_T L2select2;                    /* '<S154>/L2 select2' */
  real_T L2select3;                    /* '<S154>/L2 select3' */
  real_T L2select4;                    /* '<S154>/L2 select4' */
  real_T R2_maxContinuousTorque[2];    /* '<S75>/Memory2' */
  real_T L2select5;                    /* '<S154>/L2 select5' */
  real_T R2_constantsReady;            /* '<S75>/Memory3' */
  real_T L2select;                     /* '<S167>/L2 select' */
  real_T L2select1;                    /* '<S167>/L2 select1' */
  real_T L2select2_p;                  /* '<S167>/L2 select2' */
  real_T L2select3_c;                  /* '<S167>/L2 select3' */
  real_T L2select4_b;                  /* '<S167>/L2 select4' */
  real_T L2select5_a;                  /* '<S167>/L2 select5' */
  real_T R2M1_LinkAngle;               /* '<S75>/Signal Conversion' */
  real_T R2M2_LinkAngle;               /* '<S75>/Signal Conversion' */
  real_T R2M2_PrimaryLinkAngle;        /* '<S75>/Signal Conversion' */
  real_T R2M2_PrimaryLinkVelocity;     /* '<S75>/Signal Conversion' */
  real_T R2M2_RecordedTorque;          /* '<S75>/Signal Conversion' */
  real_T R2M2_digitalInputs[2];        /* '<S75>/Signal Conversion' */
  real_T R2M2_digitalDiagnostics;      /* '<S75>/Signal Conversion' */
  real_T R2M2_EMCY_codes[5];           /* '<S75>/Signal Conversion' */
  real_T R2M1_PrimaryLinkAngle;        /* '<S75>/Signal Conversion' */
  real_T R2M1_PrimaryLinkVelocity;     /* '<S75>/Signal Conversion' */
  real_T R2M1_RecordedTorque;          /* '<S75>/Signal Conversion' */
  real_T R2M1_digitalInputs[2];        /* '<S75>/Signal Conversion' */
  real_T R2M1_digitalDiagnostics;      /* '<S75>/Signal Conversion' */
  real_T R2_calibrationButton;         /* '<S75>/Signal Conversion' */
  real_T R2M1_EMCY_codes[5];           /* '<S75>/Signal Conversion' */
  real_T R2_RobotType;                 /* '<S75>/Signal Conversion1' */
  real_T R2_absAngleOffset[2];         /* '<S75>/Signal Conversion1' */
  real_T R2_LinkLength[2];             /* '<S75>/Signal Conversion1' */
  real_T R2_L2CalibPinOffset;          /* '<S75>/Signal Conversion1' */
  real_T R2_maxContinuousTorque_e[2];  /* '<S75>/Signal Conversion1' */
  real_T R2_gearRatios[2];             /* '<S75>/Signal Conversion1' */
  real_T R2_isCalibrated;              /* '<S75>/Signal Conversion1' */
  real_T R2_OffsetRads[2];             /* '<S75>/Signal Conversion1' */
  real_T R2_OffsetRadsPrimary[2];      /* '<S75>/Signal Conversion1' */
  real_T R2_RobotRevision;             /* '<S75>/Signal Conversion1' */
  real_T R2_constantsReady_j;          /* '<S75>/Signal Conversion1' */
  real_T R2_hasSecondary;              /* '<S75>/Signal Conversion1' */
  real_T R2_hasFT;                     /* '<S75>/Signal Conversion1' */
  real_T R2_robotOrientation;          /* '<S75>/Signal Conversion1' */
  real_T R2_motorOrientation[2];       /* '<S75>/Signal Conversion1' */
  real_T R2_encOrientation[2];         /* '<S75>/Signal Conversion1' */
  real_T R2_encodercounts[2];          /* '<S75>/Signal Conversion1' */
  real_T R2_FTSensorAngleOffset;       /* '<S75>/Signal Conversion1' */
  real_T R2_calibPinAngle[2];          /* '<S75>/Signal Conversion1' */
  real_T RateTransition1_ds;           /* '<S145>/Rate Transition1' */
  real_T RateTransition2_jr;           /* '<S145>/Rate Transition2' */
  real_T encoderCounts[2];             /* '<S75>/split out constants' */
  real_T FTSensorOffset;               /* '<S75>/split out constants' */
  real_T calibPinAngles[2];            /* '<S75>/split out constants' */
  real_T absAngOffsets[2];             /* '<S75>/split out constants' */
  real_T linkLengths[2];               /* '<S75>/split out constants' */
  real_T L2CalibPinOffset;             /* '<S75>/split out constants' */
  real_T continuousTorques[2];         /* '<S75>/split out constants' */
  real_T gearRatios[2];                /* '<S75>/split out constants' */
  real_T isCalibrated;                 /* '<S75>/split out constants' */
  real_T offsetRads[2];                /* '<S75>/split out constants' */
  real_T offsetRadsPrimary[2];         /* '<S75>/split out constants' */
  real_T robotRevision_o;              /* '<S75>/split out constants' */
  real_T constantsReady;               /* '<S75>/split out constants' */
  real_T DataTypeConversion_iq;        /* '<S186>/Data Type Conversion' */
  real_T writeData[5];                 /* '<S143>/writeData' */
  real_T status;                       /* '<S143>/status' */
  real_T readAddr[3];                  /* '<S142>/readAddr' */
  real_T Memory_ip;                    /* '<S142>/Memory' */
  real_T convert_l;                    /* '<S142>/convert' */
  real_T convert1;                     /* '<S142>/convert1' */
  real_T status_e;                     /* '<S142>/status' */
  real_T DataTypeConversion_d;         /* '<S180>/Data Type Conversion' */
  real_T LinkAngle;                    /* '<S167>/countsToRads' */
  real_T PrimaryLinkAngle;             /* '<S167>/countsToRads' */
  real_T PrimaryLinkVel;               /* '<S167>/countsToRads' */
  real_T torque;                       /* '<S167>/countsToRads' */
  real_T digitalInputs[2];             /* '<S167>/countsToRads' */
  real_T digitalDiagnostics;           /* '<S167>/countsToRads' */
  real_T DataTypeConversion_ju;        /* '<S166>/Data Type Conversion' */
  real_T driveID;                      /* '<S166>/driveID' */
  real_T DataTypeConversion2_g[2];     /* '<S170>/Data Type Conversion2' */
  real_T DataTypeConversion_i1[2];     /* '<S171>/Data Type Conversion' */
  real_T Memory_l;                     /* '<S172>/Memory' */
  real_T DataTypeConversion1_c;        /* '<S172>/Data Type Conversion1' */
  real_T isPermFaulted;                /* '<S137>/Control GDC Whistle State' */
  real_T A2M2Convert[5];               /* '<S163>/A2M2Convert' */
  real_T LinkAngle_l;                  /* '<S154>/countsToRads' */
  real_T PrimaryLinkAngle_f;           /* '<S154>/countsToRads' */
  real_T PrimaryLinkVel_i;             /* '<S154>/countsToRads' */
  real_T torque_f;                     /* '<S154>/countsToRads' */
  real_T digitalInputs_m[2];           /* '<S154>/countsToRads' */
  real_T digitalDiagnostics_c;         /* '<S154>/countsToRads' */
  real_T calibrationButton;            /* '<S154>/countsToRads' */
  real_T DataTypeConversion_b;         /* '<S153>/Data Type Conversion' */
  real_T driveID_n;                    /* '<S153>/driveID' */
  real_T DataTypeConversion2_nh[2];    /* '<S157>/Data Type Conversion2' */
  real_T DataTypeConversion_pr[2];     /* '<S158>/Data Type Conversion' */
  real_T Memory_g;                     /* '<S159>/Memory' */
  real_T DataTypeConversion1_k;        /* '<S159>/Data Type Conversion1' */
  real_T A2M1Convert[5];               /* '<S150>/A2M1Convert' */
  real_T Memory_j;                     /* '<S84>/Memory' */
  real_T Memory_f;                     /* '<S85>/Memory' */
  real_T Memory1_o;                    /* '<S93>/Memory1' */
  real_T Memory2_n;                    /* '<S93>/Memory2' */
  real_T L2select_i;                   /* '<S102>/L2 select' */
  real_T L2select1_h;                  /* '<S102>/L2 select1' */
  real_T L2select2_o;                  /* '<S102>/L2 select2' */
  real_T L2select3_cn;                 /* '<S102>/L2 select3' */
  real_T L2select4_o;                  /* '<S102>/L2 select4' */
  real_T R1_maxContinuousTorque[2];    /* '<S74>/Memory2' */
  real_T L2select5_c;                  /* '<S102>/L2 select5' */
  real_T R1_constantsReady;            /* '<S74>/Memory3' */
  real_T L2select_e;                   /* '<S115>/L2 select' */
  real_T L2select1_hf;                 /* '<S115>/L2 select1' */
  real_T L2select2_d;                  /* '<S115>/L2 select2' */
  real_T L2select3_p;                  /* '<S115>/L2 select3' */
  real_T L2select4_g;                  /* '<S115>/L2 select4' */
  real_T L2select5_f;                  /* '<S115>/L2 select5' */
  real_T R1M1_LinkAngle;               /* '<S74>/Signal Conversion' */
  real_T R1M2_LinkAngle;               /* '<S74>/Signal Conversion' */
  real_T R1M2_PrimaryLinkAngle;        /* '<S74>/Signal Conversion' */
  real_T R1M2_PrimaryLinkVelocity;     /* '<S74>/Signal Conversion' */
  real_T R1M2_RecordedTorque;          /* '<S74>/Signal Conversion' */
  real_T R1M2_digitalInputs[2];        /* '<S74>/Signal Conversion' */
  real_T R1M2_digitalDiagnostics;      /* '<S74>/Signal Conversion' */
  real_T R1M2_EMCY_codes[5];           /* '<S74>/Signal Conversion' */
  real_T R1M1_PrimaryLinkAngle;        /* '<S74>/Signal Conversion' */
  real_T R1M1_PrimaryLinkVelocity;     /* '<S74>/Signal Conversion' */
  real_T R1M1_RecordedTorque;          /* '<S74>/Signal Conversion' */
  real_T R1M1_digitalInputs[2];        /* '<S74>/Signal Conversion' */
  real_T R1M1_digitalDiagnostics;      /* '<S74>/Signal Conversion' */
  real_T R1_calibrationButton;         /* '<S74>/Signal Conversion' */
  real_T R1M1_EMCY_codes[5];           /* '<S74>/Signal Conversion' */
  real_T R1_RobotType;                 /* '<S74>/Signal Conversion1' */
  real_T R1_absAngleOffset[2];         /* '<S74>/Signal Conversion1' */
  real_T R1_LinkLength[2];             /* '<S74>/Signal Conversion1' */
  real_T R1_L2CalibPinOffset;          /* '<S74>/Signal Conversion1' */
  real_T R1_maxContinuousTorque_d[2];  /* '<S74>/Signal Conversion1' */
  real_T R1_gearRatios[2];             /* '<S74>/Signal Conversion1' */
  real_T R1_isCalibrated;              /* '<S74>/Signal Conversion1' */
  real_T R1_OffsetRads[2];             /* '<S74>/Signal Conversion1' */
  real_T R1_OffsetRadsPrimary[2];      /* '<S74>/Signal Conversion1' */
  real_T R1_RobotRevision;             /* '<S74>/Signal Conversion1' */
  real_T R1_constantsReady_p;          /* '<S74>/Signal Conversion1' */
  real_T R1_hasSecondary;              /* '<S74>/Signal Conversion1' */
  real_T R1_hasFT;                     /* '<S74>/Signal Conversion1' */
  real_T R1_robotOrientation;          /* '<S74>/Signal Conversion1' */
  real_T R1_motorOrientation[2];       /* '<S74>/Signal Conversion1' */
  real_T R1_encOrientation[2];         /* '<S74>/Signal Conversion1' */
  real_T R1_encodercounts[2];          /* '<S74>/Signal Conversion1' */
  real_T R1_FTSensorAngleOffset;       /* '<S74>/Signal Conversion1' */
  real_T R1_calibPinAngle[2];          /* '<S74>/Signal Conversion1' */
  real_T RateTransition1_dsj;          /* '<S93>/Rate Transition1' */
  real_T RateTransition2_d;            /* '<S93>/Rate Transition2' */
  real_T encoderCounts_h[2];           /* '<S74>/split out constants' */
  real_T FTSensorOffset_j;             /* '<S74>/split out constants' */
  real_T calibPinAngles_m[2];          /* '<S74>/split out constants' */
  real_T absAngOffsets_c[2];           /* '<S74>/split out constants' */
  real_T linkLengths_j[2];             /* '<S74>/split out constants' */
  real_T L2CalibPinOffset_c;           /* '<S74>/split out constants' */
  real_T continuousTorques_j[2];       /* '<S74>/split out constants' */
  real_T gearRatios_p[2];              /* '<S74>/split out constants' */
  real_T isCalibrated_p;               /* '<S74>/split out constants' */
  real_T offsetRads_f[2];              /* '<S74>/split out constants' */
  real_T offsetRadsPrimary_h[2];       /* '<S74>/split out constants' */
  real_T robotRevision_n;              /* '<S74>/split out constants' */
  real_T constantsReady_j;             /* '<S74>/split out constants' */
  real_T DataTypeConversion_f;         /* '<S134>/Data Type Conversion' */
  real_T writeData_e[5];               /* '<S91>/writeData' */
  real_T status_n;                     /* '<S91>/status' */
  real_T readAddr_p[3];                /* '<S90>/readAddr' */
  real_T Memory_ns;                    /* '<S90>/Memory' */
  real_T convert_b;                    /* '<S90>/convert' */
  real_T convert1_f;                   /* '<S90>/convert1' */
  real_T status_d;                     /* '<S90>/status' */
  real_T DataTypeConversion_ba;        /* '<S128>/Data Type Conversion' */
  real_T LinkAngle_g;                  /* '<S115>/countsToRads' */
  real_T PrimaryLinkAngle_b;           /* '<S115>/countsToRads' */
  real_T PrimaryLinkVel_d;             /* '<S115>/countsToRads' */
  real_T torque_g;                     /* '<S115>/countsToRads' */
  real_T digitalInputs_h[2];           /* '<S115>/countsToRads' */
  real_T digitalDiagnostics_a;         /* '<S115>/countsToRads' */
  real_T DataTypeConversion_kb;        /* '<S114>/Data Type Conversion' */
  real_T driveID_a;                    /* '<S114>/driveID' */
  real_T DataTypeConversion2_dj[2];    /* '<S118>/Data Type Conversion2' */
  real_T DataTypeConversion_m[2];      /* '<S119>/Data Type Conversion' */
  real_T Memory_dt;                    /* '<S120>/Memory' */
  real_T DataTypeConversion1_i;        /* '<S120>/Data Type Conversion1' */
  real_T emcyValPump[3];               /* '<S114>/Read EMCY' */
  real_T A1M2Convert[5];               /* '<S111>/A1M2Convert' */
  real_T LinkAngle_c;                  /* '<S102>/countsToRads' */
  real_T PrimaryLinkAngle_m;           /* '<S102>/countsToRads' */
  real_T PrimaryLinkVel_m;             /* '<S102>/countsToRads' */
  real_T torque_d;                     /* '<S102>/countsToRads' */
  real_T digitalInputs_e[2];           /* '<S102>/countsToRads' */
  real_T digitalDiagnostics_e;         /* '<S102>/countsToRads' */
  real_T calibrationButton_e;          /* '<S102>/countsToRads' */
  real_T DataTypeConversion_c3;        /* '<S101>/Data Type Conversion' */
  real_T driveID_n2;                   /* '<S101>/driveID' */
  real_T DataTypeConversion2_j[2];     /* '<S105>/Data Type Conversion2' */
  real_T DataTypeConversion_hm[2];     /* '<S106>/Data Type Conversion' */
  real_T Memory_dp;                    /* '<S107>/Memory' */
  real_T DataTypeConversion1_av;       /* '<S107>/Data Type Conversion1' */
  real_T emcyValPump_g[3];             /* '<S101>/Read EMCY' */
  real_T isPermFaulted_i;              /* '<S84>/Control GDC Whistle State' */
  real_T A1M1Convert[5];               /* '<S98>/A1M1Convert' */
  real_T RateTransition_g;             /* '<S32>/Rate Transition' */
  real_T RateTransition1_h;            /* '<S32>/Rate Transition1' */
  real_T Convert19_e[14];              /* '<S32>/Convert19' */
  real_T Receive1_o2;                  /* '<S58>/Receive1' */
  real_T forces[3];                    /* '<S58>/parse packet 1' */
  real_T moments[3];                   /* '<S58>/parse packet 1' */
  real_T timer;                        /* '<S58>/parse packet 1' */
  real_T Receive_o2_m;                 /* '<S57>/Receive' */
  real_T forces_g[3];                  /* '<S57>/parse packet 1' */
  real_T moments_p[3];                 /* '<S57>/parse packet 1' */
  real_T timer_c;                      /* '<S57>/parse packet 1' */
  real_T trigger;                      /* '<S49>/Memory2' */
  real_T RateTransition2_js[3];        /* '<S49>/Rate Transition2' */
  real_T Pckt_Recd;                    /* '<S49>/UDP Receive' */
  real_T Pckt_Recd2;                   /* '<S49>/UDP Receive' */
  real_T doublereads;                  /* '<S49>/UDP Receive' */
  real_T UDPReceive_o6;                /* '<S49>/UDP Receive' */
  real_T TmpRTBAtforcestrobeOutport1;  /* '<S31>/force strobe' */
  real_T TaskClock_a;                  /* '<S31>/Task Clock' */
  real_T queue_size;                   /* '<S31>/Queue Size' */
  real_T timeouts;                     /* '<S31>/Total Timeouts' */
  real_T RqstUDPReset;                 /* '<S49>/Rate Transition1' */
  real_T UDPResets;                    /* '<S49>/UDP Receive Port Reset' */
  real_T UDPReceivePortReset_o2[3];    /* '<S49>/UDP Receive Port Reset' */
  real_T strobe_out;                   /* '<S31>/force strobe' */
  real_T resetUDP;                     /* '<S31>/Send Control Machine' */
  real_T queue_size_e;                 /* '<S31>/Send Control Machine' */
  real_T total_timeouts;               /* '<S31>/Send Control Machine' */
  real_T UnitDelay_h;                  /* '<S52>/Unit Delay' */
  real_T Sum_j;                        /* '<S52>/Sum' */
  real_T Width;                        /* '<S47>/Width' */
  real_T IdealFramesPerPacket;         /* '<S47>/Ideal Frames Per Packet' */
  real_T MinMax_k;                     /* '<S47>/MinMax' */
  real_T MathFunction;                 /* '<S47>/Math Function' */
  real_T Subtract_o;                   /* '<S47>/Subtract' */
  real_T Product_l;                    /* '<S47>/Product' */
  real_T dd_out[2];                    /* '<S41>/MATLAB Function' */
  real32_T DataTypeConversion6[4];     /* '<S251>/Data Type Conversion6' */
  real32_T DataTypeConversion_a1[6];   /* '<S251>/Data Type Conversion' */
  real32_T DataTypeConversion1_cq[6];  /* '<S251>/Data Type Conversion1' */
  real32_T pupilX[2];                  /* '<S34>/S-Function' */
  real32_T pupilY[2];                  /* '<S34>/S-Function' */
  real32_T HREFX[2];                   /* '<S34>/S-Function' */
  real32_T HREFY[2];                   /* '<S34>/S-Function' */
  real32_T pupilarea[2];               /* '<S34>/S-Function' */
  real32_T screengazeX[2];             /* '<S34>/S-Function' */
  real32_T screengazeY[2];             /* '<S34>/S-Function' */
  real32_T resolutionX;                /* '<S34>/S-Function' */
  real32_T resolutionY;                /* '<S34>/S-Function' */
  real32_T Reshape_i[8];               /* '<S34>/Reshape' */
  real32_T SelectorLeftEye[4];         /* '<S34>/Selector - Left Eye' */
  real32_T Unpack_o1[2];               /* '<S222>/Unpack' */
  real32_T Unpack_o2[2];               /* '<S222>/Unpack' */
  real32_T DataTypeConversion_a5[10];  /* '<S209>/Data Type Conversion' */
  real32_T DataTypeConversion1_i1[10]; /* '<S209>/Data Type Conversion1' */
  real32_T DataTypeConversion2_h;      /* '<S209>/Data Type Conversion2' */
  real32_T SFunction_o1[10];           /* '<S209>/S-Function' */
  real32_T SFunction_o2[10];           /* '<S209>/S-Function' */
  real32_T SFunction_o4[4];            /* '<S209>/S-Function' */
  real32_T SFunction_o5[6];            /* '<S209>/S-Function' */
  real32_T SFunction_o6[6];            /* '<S209>/S-Function' */
  real32_T SFunction_o10;              /* '<S209>/S-Function' */
  real32_T y_j;                        /* '<S211>/TypeCast' */
  real32_T DataTypeConversion1_o;      /* '<S218>/Data Type Conversion1' */
  real32_T Read_h;                     /* '<S216>/Read' */
  real32_T DataTypeConversion2_k;      /* '<S31>/Data Type Conversion2' */
  real32_T TmpRTBAtSendControlMachineInport1[400];/* '<S31>/Data Packing Subsystem' */
  real32_T Unpack;                     /* '<S49>/Unpack' */
  real32_T data_out[410];              /* '<S31>/Send Control Machine' */
  real32_T DataTypeConversion_p1[108]; /* '<S47>/Data Type Conversion' */
  real32_T t2[108];                    /* '<S47>/t-2' */
  real32_T t1[108];                    /* '<S47>/t-1' */
  real32_T TmpSignalConversionAtSelectorInport1[724];
  real32_T Selector_eu[400];           /* '<S47>/Selector' */
  int32_T Abs_c;                       /* '<S4>/Abs' */
  int32_T Switch_h;                    /* '<S4>/Switch' */
  int32_T score;                       /* '<Root>/Trial_Control' */
  int32_T reward;                      /* '<Root>/Trial_Control' */
  int32_T fdbk_text;                   /* '<Root>/Trial_Control' */
  int32_T vis_cmd[6810];               /* '<S302>/Pack VCodeFrame2' */
  int32_T convert_bp;                  /* '<S34>/convert' */
  int32_T len_out;                     /* '<S34>/clean_packet' */
  int32_T BKINEtherCATinit1_o1[6];     /* '<S63>/BKIN EtherCATinit1' */
  int32_T BKINEtherCATinit1_o2;        /* '<S63>/BKIN EtherCATinit1' */
  int32_T BKINEtherCATinit1_o3;        /* '<S63>/BKIN EtherCATinit1' */
  int32_T BKINEtherCATinit_o1[6];      /* '<S63>/BKIN EtherCATinit' */
  int32_T BKINEtherCATinit_o2;         /* '<S63>/BKIN EtherCATinit' */
  int32_T BKINEtherCATinit_o3;         /* '<S63>/BKIN EtherCATinit' */
  int32_T Switch_m[8];                 /* '<S63>/Switch' */
  int32_T Unpack_o2_o[6];              /* '<S201>/Unpack' */
  int32_T ByteReversal[6];             /* '<S201>/Byte Reversal' */
  int32_T Unpack1_o2[6];               /* '<S202>/Unpack1' */
  int32_T ByteReversal_o[6];           /* '<S202>/Byte Reversal' */
  int32_T errVal;                      /* '<S79>/split init' */
  int32_T masterState;                 /* '<S79>/split init' */
  int32_T DCErrVal;                    /* '<S79>/split init' */
  int32_T MasterToNetworkClkDiff;      /* '<S79>/split init' */
  int32_T DCInitState;                 /* '<S79>/split init' */
  int32_T NetworkToSlaveClkDiff;       /* '<S79>/split init' */
  int32_T readTrigger;                 /* '<S75>/readTrigger' */
  int32_T Memory_p;                    /* '<S145>/Memory' */
  int32_T RateTransition_bx;           /* '<S145>/Rate Transition' */
  int32_T BKINEtherCATAsyncSDOUpload1_o2;/* '<S186>/BKIN EtherCAT Async SDO Upload1' */
  int32_T Memory_lf;                   /* '<S143>/Memory' */
  int32_T DataTypeConversion2_p;       /* '<S143>/Data Type Conversion2' */
  int32_T DataTypeConversion1_aq;      /* '<S143>/Data Type Conversion1' */
  int32_T BKINEtherCATAsyncSDODownload;/* '<S143>/BKIN EtherCAT Async SDO Download' */
  int32_T DataTypeConversion1_k2;      /* '<S142>/Data Type Conversion1' */
  int32_T DataTypeConversion2_m;       /* '<S142>/Data Type Conversion2' */
  int32_T BKINEtherCATAsyncSDOUpload1_o2_a;/* '<S180>/BKIN EtherCAT Async SDO Upload1' */
  int32_T Memory_pb;                   /* '<S140>/Memory' */
  int32_T Memory1_et[2];               /* '<S140>/Memory1' */
  int32_T BKINEtherCATAsyncSDODownload_g;/* '<S140>/BKIN EtherCAT Async SDO Download' */
  int32_T BKINEtherCATAsyncSDOUpload_o1;/* '<S140>/BKIN EtherCAT Async SDO Upload' */
  int32_T BKINEtherCATAsyncSDOUpload_o2;/* '<S140>/BKIN EtherCAT Async SDO Upload' */
  int32_T Memory_h;                    /* '<S139>/Memory' */
  int32_T Memory1_f[2];                /* '<S139>/Memory1' */
  int32_T BKINEtherCATAsyncSDODownload_g0;/* '<S139>/BKIN EtherCAT Async SDO Download' */
  int32_T BKINEtherCATAsyncSDOUpload_o1_k;/* '<S139>/BKIN EtherCAT Async SDO Upload' */
  int32_T BKINEtherCATAsyncSDOUpload_o2_o;/* '<S139>/BKIN EtherCAT Async SDO Upload' */
  int32_T Memory_f3[2];                /* '<S171>/Memory' */
  int32_T DataTypeConversion_dc;       /* '<S170>/Data Type Conversion' */
  int32_T BKINEtherCATAsyncSDOUpload_o2_i;/* '<S170>/BKIN EtherCAT Async SDO Upload' */
  int32_T BKINEtherCATAsyncSDOUpload_o1_f;/* '<S171>/BKIN EtherCAT Async SDO Upload' */
  int32_T BKINEtherCATAsyncSDOUpload_o2_j;/* '<S171>/BKIN EtherCAT Async SDO Upload' */
  int32_T RateTransition_i[2];         /* '<S171>/Rate Transition' */
  int32_T DataTypeConversion_dh;       /* '<S172>/Data Type Conversion' */
  int32_T BKINEtherCATAsyncSDODownload_gy;/* '<S172>/BKIN EtherCAT Async SDO Download' */
  int32_T positionprimary;             /* '<S163>/BKIN PDO Receive ElmoDrive' */
  int32_T positionsecondary;           /* '<S163>/BKIN PDO Receive ElmoDrive' */
  int32_T velocityprimary;             /* '<S163>/BKIN PDO Receive ElmoDrive' */
  int32_T digitalinput;                /* '<S163>/BKIN PDO Receive ElmoDrive' */
  int32_T DataTypeConversion_bv;       /* '<S163>/Data Type Conversion' */
  int32_T Memory_a[2];                 /* '<S158>/Memory' */
  int32_T DataTypeConversion_b3;       /* '<S157>/Data Type Conversion' */
  int32_T BKINEtherCATAsyncSDOUpload_o2_c;/* '<S157>/BKIN EtherCAT Async SDO Upload' */
  int32_T BKINEtherCATAsyncSDOUpload_o1_d;/* '<S158>/BKIN EtherCAT Async SDO Upload' */
  int32_T BKINEtherCATAsyncSDOUpload_o2_p;/* '<S158>/BKIN EtherCAT Async SDO Upload' */
  int32_T RateTransition_k4[2];        /* '<S158>/Rate Transition' */
  int32_T DataTypeConversion_ek;       /* '<S159>/Data Type Conversion' */
  int32_T BKINEtherCATAsyncSDODownload_c;/* '<S159>/BKIN EtherCAT Async SDO Download' */
  int32_T primaryposition;             /* '<S150>/BKIN PDO Receive ElmoDrive' */
  int32_T secondaryposition;           /* '<S150>/BKIN PDO Receive ElmoDrive' */
  int32_T primaryvelocity;             /* '<S150>/BKIN PDO Receive ElmoDrive' */
  int32_T digitalinput_d;              /* '<S150>/BKIN PDO Receive ElmoDrive' */
  int32_T DataTypeConversion_et;       /* '<S150>/Data Type Conversion' */
  int32_T readTrigger_k;               /* '<S74>/readTrigger' */
  int32_T Memory_d3;                   /* '<S93>/Memory' */
  int32_T RateTransition_bs;           /* '<S93>/Rate Transition' */
  int32_T BKINEtherCATAsyncSDOUpload1_o2_g;/* '<S134>/BKIN EtherCAT Async SDO Upload1' */
  int32_T Memory_nf;                   /* '<S91>/Memory' */
  int32_T DataTypeConversion2_b;       /* '<S91>/Data Type Conversion2' */
  int32_T DataTypeConversion1_d;       /* '<S91>/Data Type Conversion1' */
  int32_T BKINEtherCATAsyncSDODownload_f;/* '<S91>/BKIN EtherCAT Async SDO Download' */
  int32_T DataTypeConversion1_dx;      /* '<S90>/Data Type Conversion1' */
  int32_T DataTypeConversion2_l;       /* '<S90>/Data Type Conversion2' */
  int32_T BKINEtherCATAsyncSDOUpload1_o2_i;/* '<S128>/BKIN EtherCAT Async SDO Upload1' */
  int32_T Memory_n0;                   /* '<S88>/Memory' */
  int32_T Memory1_n[2];                /* '<S88>/Memory1' */
  int32_T BKINEtherCATAsyncSDODownload_ce;/* '<S88>/BKIN EtherCAT Async SDO Download' */
  int32_T BKINEtherCATAsyncSDOUpload_o1_dq;/* '<S88>/BKIN EtherCAT Async SDO Upload' */
  int32_T BKINEtherCATAsyncSDOUpload_o2_m;/* '<S88>/BKIN EtherCAT Async SDO Upload' */
  int32_T Memory_c;                    /* '<S87>/Memory' */
  int32_T Memory1_b[2];                /* '<S87>/Memory1' */
  int32_T BKINEtherCATAsyncSDODownload_i;/* '<S87>/BKIN EtherCAT Async SDO Download' */
  int32_T BKINEtherCATAsyncSDOUpload_o1_p;/* '<S87>/BKIN EtherCAT Async SDO Upload' */
  int32_T BKINEtherCATAsyncSDOUpload_o2_a;/* '<S87>/BKIN EtherCAT Async SDO Upload' */
  int32_T Memory_k[2];                 /* '<S119>/Memory' */
  int32_T DataTypeConversion_n;        /* '<S118>/Data Type Conversion' */
  int32_T BKINEtherCATAsyncSDOUpload_o2_d;/* '<S118>/BKIN EtherCAT Async SDO Upload' */
  int32_T BKINEtherCATAsyncSDOUpload_o1_n;/* '<S119>/BKIN EtherCAT Async SDO Upload' */
  int32_T BKINEtherCATAsyncSDOUpload_o2_k;/* '<S119>/BKIN EtherCAT Async SDO Upload' */
  int32_T RateTransition_o[2];         /* '<S119>/Rate Transition' */
  int32_T DataTypeConversion_gy;       /* '<S120>/Data Type Conversion' */
  int32_T BKINEtherCATAsyncSDODownload_a;/* '<S120>/BKIN EtherCAT Async SDO Download' */
  int32_T triggerCountRead;            /* '<S114>/Read EMCY' */
  int32_T emcyReadTrigger[2];          /* '<S114>/Read EMCY' */
  int32_T countOverwriteTrigger;       /* '<S114>/Read EMCY' */
  int32_T primaryposition_e;           /* '<S111>/BKIN PDO Receive ElmoDrive' */
  int32_T secondaryposition_d;         /* '<S111>/BKIN PDO Receive ElmoDrive' */
  int32_T primaryvelocity_p;           /* '<S111>/BKIN PDO Receive ElmoDrive' */
  int32_T digitalinputs;               /* '<S111>/BKIN PDO Receive ElmoDrive' */
  int32_T DataTypeConversion_em;       /* '<S111>/Data Type Conversion' */
  int32_T Memory_ne[2];                /* '<S106>/Memory' */
  int32_T DataTypeConversion_je;       /* '<S105>/Data Type Conversion' */
  int32_T BKINEtherCATAsyncSDOUpload_o2_db;/* '<S105>/BKIN EtherCAT Async SDO Upload' */
  int32_T BKINEtherCATAsyncSDOUpload_o1_h;/* '<S106>/BKIN EtherCAT Async SDO Upload' */
  int32_T BKINEtherCATAsyncSDOUpload_o2_di;/* '<S106>/BKIN EtherCAT Async SDO Upload' */
  int32_T RateTransition_cg[2];        /* '<S106>/Rate Transition' */
  int32_T DataTypeConversion_mf;       /* '<S107>/Data Type Conversion' */
  int32_T BKINEtherCATAsyncSDODownload_n;/* '<S107>/BKIN EtherCAT Async SDO Download' */
  int32_T triggerCountRead_n;          /* '<S101>/Read EMCY' */
  int32_T emcyReadTrigger_e[2];        /* '<S101>/Read EMCY' */
  int32_T countOverwriteTrigger_n;     /* '<S101>/Read EMCY' */
  int32_T primaryposition_l;           /* '<S98>/BKIN PDO Receive ElmoDrive' */
  int32_T secondaryposition_n;         /* '<S98>/BKIN PDO Receive ElmoDrive' */
  int32_T primaryvelocity_d;           /* '<S98>/BKIN PDO Receive ElmoDrive' */
  int32_T digitalinputs_j;             /* '<S98>/BKIN PDO Receive ElmoDrive' */
  int32_T DataTypeConversion1_j1;      /* '<S98>/Data Type Conversion1' */
  uint32_T Convert19_b;                /* '<S5>/Convert19' */
  uint32_T Convert20;                  /* '<S5>/Convert20' */
  uint32_T Convert21;                  /* '<S5>/Convert21' */
  uint32_T Convert22;                  /* '<S5>/Convert22' */
  uint32_T Convert23;                  /* '<S5>/Convert23' */
  uint32_T Convert24;                  /* '<S5>/Convert24' */
  uint32_T total_trials_in_exam;       /* '<S269>/Data Type Conversion' */
  uint32_T total_trials_in_block;      /* '<S269>/Data Type Conversion1' */
  uint32_T total_blocks_in_exam;       /* '<S269>/Data Type Conversion2' */
  uint32_T Output;                     /* '<S43>/Output' */
  uint32_T Unpack_c;                   /* '<S13>/Unpack' */
  uint32_T touint[6];                  /* '<S28>/touint' */
  uint32_T RateTransition1_n;          /* '<S28>/Rate Transition1' */
  uint32_T FixPtSum1;                  /* '<S45>/FixPt Sum1' */
  uint32_T FixPtSwitch;                /* '<S46>/FixPt Switch' */
  uint32_T readDigitaldiag[4];         /* '<S2>/read Digital diag' */
  uint32_T frame_number;               /* '<S302>/Pack VCodeFrame2' */
  uint32_T Width_j;                    /* '<S268>/Width' */
  uint32_T Subtract_p;                 /* '<S268>/Subtract' */
  uint32_T Width2;                     /* '<S268>/Width2' */
  uint32_T task_status;                /* '<S268>/Task Execution Control Machine' */
  uint32_T tp;                         /* '<S268>/Task Execution Control Machine' */
  uint32_T block;                      /* '<S268>/Task Execution Control Machine' */
  uint32_T trial_in_block;             /* '<S268>/Task Execution Control Machine' */
  uint32_T block_in_set;               /* '<S268>/Task Execution Control Machine' */
  uint32_T trial_in_set;               /* '<S268>/Task Execution Control Machine' */
  uint32_T SFunction_o1_n;             /* '<S34>/S-Function' */
  uint32_T SFunction_o18[3];           /* '<S34>/S-Function' */
  uint32_T TmpRTBAtconverttoseconds2Inport3;
  uint32_T Output_a;                   /* '<S77>/Output' */
  uint32_T FixPtSum1_e;                /* '<S188>/FixPt Sum1' */
  uint32_T FixPtSwitch_m;              /* '<S189>/FixPt Switch' */
  uint32_T ServoRead;                  /* '<S69>/Servo Read' */
  uint32_T DataStoreRead_l;            /* '<S69>/Data Store Read' */
  uint32_T Statusread1_e[8];           /* '<S69>/Status read1' */
  uint32_T Output_h;                   /* '<S234>/Output' */
  uint32_T FixPtSum1_o;                /* '<S239>/FixPt Sum1' */
  uint32_T FixPtSwitch_h;              /* '<S240>/FixPt Switch' */
  uint32_T DataTypeConversion_nq[6];   /* '<S69>/Data Type Conversion' */
  uint32_T Statusread[7];              /* '<S69>/Status read' */
  uint32_T statusInts[4];              /* '<S69>/bitpack' */
  uint32_T outStatus[7];               /* '<S210>/update status format' */
  uint32_T DataTypeConversion1_ju[2];  /* '<S83>/Data Type Conversion1' */
  uint32_T DataTypeConversion_jq[8];   /* '<S83>/Data Type Conversion' */
  uint32_T DataTypeConversion4_j[4];   /* '<S83>/Data Type Conversion4' */
  uint32_T DataTypeConversion2_ir;     /* '<S83>/Data Type Conversion2' */
  uint32_T servoCounterOut;            /* '<S83>/create servo counter' */
  uint32_T TmpSignalConversionAtSFunctionInport5[4];/* '<S83>/create kinematics' */
  uint32_T bitField;                   /* '<S83>/convert to bit field' */
  uint32_T Output_e;                   /* '<S225>/Output' */
  uint32_T FixPtSum1_n;                /* '<S227>/FixPt Sum1' */
  uint32_T FixPtSwitch_d;              /* '<S228>/FixPt Switch' */
  uint32_T Constant_k;                 /* '<S222>/Constant' */
  uint32_T Constant1[7];               /* '<S222>/Constant1' */
  uint32_T SFunction_o3[2];            /* '<S209>/S-Function' */
  uint32_T SFunction_o7;               /* '<S209>/S-Function' */
  uint32_T SFunction_o8;               /* '<S209>/S-Function' */
  uint32_T SFunction_o9[3];            /* '<S209>/S-Function' */
  uint32_T DataTypeConversion_l;       /* '<S211>/Data Type Conversion' */
  uint32_T Convert2_n[3];              /* '<S209>/Convert2' */
  uint32_T MinMax_b;                   /* '<S209>/MinMax' */
  uint32_T MinMax1;                    /* '<S209>/MinMax1' */
  uint32_T DataTypeConversion_dd;      /* '<S218>/Data Type Conversion' */
  uint32_T DataTypeConversion_pj;      /* '<S216>/Data Type Conversion' */
  uint32_T DataTypeConversion2_pm;     /* '<S216>/Data Type Conversion2' */
  uint32_T Unpack_o1_m[3];             /* '<S201>/Unpack' */
  uint32_T ByteReversal1[3];           /* '<S201>/Byte Reversal1' */
  uint32_T Unpack1_o1[3];              /* '<S202>/Unpack1' */
  uint32_T ByteReversal1_f[3];         /* '<S202>/Byte Reversal1' */
  uint32_T ByteReversal_g;             /* '<S207>/Byte Reversal' */
  uint32_T ByteReversal2;              /* '<S205>/Byte Reversal2' */
  uint32_T drive1;                     /* '<S78>/update digital outputs' */
  uint32_T drive2;                     /* '<S78>/update digital outputs' */
  uint32_T drive3;                     /* '<S78>/update digital outputs' */
  uint32_T drive4;                     /* '<S78>/update digital outputs' */
  uint32_T R2M2_CurrentLimitEnabled;   /* '<S75>/Signal Conversion' */
  uint32_T R2M1_CurrentLimitEnabled;   /* '<S75>/Signal Conversion' */
  uint32_T BKINEtherCATAsyncSDOUpload1_o1;/* '<S186>/BKIN EtherCAT Async SDO Upload1' */
  uint32_T BKINEtherCATAsyncSDOUpload1_o1_f;/* '<S180>/BKIN EtherCAT Async SDO Upload1' */
  uint32_T Memory_kg[2];               /* '<S170>/Memory' */
  uint32_T BKINEtherCATAsyncSDOUpload_o1_m;/* '<S170>/BKIN EtherCAT Async SDO Upload' */
  uint32_T DataTypeConversion1_of;     /* '<S170>/Data Type Conversion1' */
  uint32_T RateTransition_gy[2];       /* '<S170>/Rate Transition' */
  uint32_T motorStatus;                /* '<S137>/Control GDC Whistle State' */
  uint32_T statusregister;             /* '<S163>/BKIN PDO Receive ElmoDrive' */
  uint32_T Memory_c1[2];               /* '<S157>/Memory' */
  uint32_T BKINEtherCATAsyncSDOUpload_o1_l;/* '<S157>/BKIN EtherCAT Async SDO Upload' */
  uint32_T DataTypeConversion1_ij;     /* '<S157>/Data Type Conversion1' */
  uint32_T RateTransition_l[2];        /* '<S157>/Rate Transition' */
  uint32_T statusregister_i;           /* '<S150>/BKIN PDO Receive ElmoDrive' */
  uint32_T R1M2_CurrentLimitEnabled;   /* '<S74>/Signal Conversion' */
  uint32_T R1M1_CurrentLimitEnabled;   /* '<S74>/Signal Conversion' */
  uint32_T BKINEtherCATAsyncSDOUpload1_o1_l;/* '<S134>/BKIN EtherCAT Async SDO Upload1' */
  uint32_T BKINEtherCATAsyncSDOUpload1_o1_p;/* '<S128>/BKIN EtherCAT Async SDO Upload1' */
  uint32_T Memory_d4[2];               /* '<S118>/Memory' */
  uint32_T BKINEtherCATAsyncSDOUpload_o1_ln;/* '<S118>/BKIN EtherCAT Async SDO Upload' */
  uint32_T DataTypeConversion1_ke;     /* '<S118>/Data Type Conversion1' */
  uint32_T RateTransition_m[2];        /* '<S118>/Rate Transition' */
  uint32_T statusregister_c;           /* '<S111>/BKIN PDO Receive ElmoDrive' */
  uint32_T Memory_pr[2];               /* '<S105>/Memory' */
  uint32_T BKINEtherCATAsyncSDOUpload_o1_b;/* '<S105>/BKIN EtherCAT Async SDO Upload' */
  uint32_T DataTypeConversion1_jd;     /* '<S105>/Data Type Conversion1' */
  uint32_T RateTransition_e[2];        /* '<S105>/Rate Transition' */
  uint32_T motorStatus_f;              /* '<S84>/Control GDC Whistle State' */
  uint32_T statusregister_c4;          /* '<S98>/BKIN PDO Receive ElmoDrive' */
  uint32_T DataTypeConversion_cb;      /* '<S49>/Data Type Conversion' */
  uint32_T max_packet_id;              /* '<S31>/max_packet_id' */
  uint32_T Output_n;                   /* '<S53>/Output' */
  uint32_T FixPtSum1_eh;               /* '<S55>/FixPt Sum1' */
  uint32_T FixPtSwitch_dp;             /* '<S56>/FixPt Switch' */
  uint32_T TmpSignalConversionAtSFunctionInport1_m[2];/* '<S41>/MATLAB Function' */
  uint32_T bitfield;                   /* '<S28>/bitfield' */
  int16_T ecatTorques[4];              /* '<S250>/convert torques' */
  int16_T SAMPE_TYPE;                  /* '<S34>/S-Function' */
  int16_T htype;                       /* '<S34>/S-Function' */
  int16_T hdata[8];                    /* '<S34>/S-Function' */
  int16_T torque_k;                    /* '<S163>/BKIN PDO Receive ElmoDrive' */
  int16_T torque_g5;                   /* '<S150>/BKIN PDO Receive ElmoDrive' */
  int16_T torque_h;                    /* '<S111>/BKIN PDO Receive ElmoDrive' */
  int16_T torque_ky;                   /* '<S98>/BKIN PDO Receive ElmoDrive' */
  uint16_T ContentFlags;               /* '<S34>/S-Function' */
  uint16_T statusflags;                /* '<S34>/S-Function' */
  uint16_T extrainput;                 /* '<S34>/S-Function' */
  uint16_T buttons;                    /* '<S34>/S-Function' */
  uint16_T Output_b;                   /* '<S215>/Output' */
  uint16_T FixPtSum1_ea;               /* '<S219>/FixPt Sum1' */
  uint16_T FixPtSwitch_j;              /* '<S220>/FixPt Switch' */
  uint16_T ByteReversal1_a;            /* '<S207>/Byte Reversal1' */
  uint16_T Switch_g;                   /* '<S207>/Switch' */
  uint16_T ByteReversal2_g;            /* '<S207>/Byte Reversal2' */
  uint16_T ByteReversal1_m;            /* '<S205>/Byte Reversal1' */
  uint16_T Switch_n;                   /* '<S205>/Switch' */
  uint16_T ByteReversal_n;             /* '<S205>/Byte Reversal' */
  uint16_T ControlWord;                /* '<S137>/Control GDC Whistle State' */
  uint16_T statusword;                 /* '<S163>/BKIN PDO Receive ElmoDrive' */
  uint16_T Statusword;                 /* '<S150>/BKIN PDO Receive ElmoDrive' */
  uint16_T Statusword_b;               /* '<S111>/BKIN PDO Receive ElmoDrive' */
  uint16_T ControlWord_o;              /* '<S84>/Control GDC Whistle State' */
  uint16_T Statusword_k;               /* '<S98>/BKIN PDO Receive ElmoDrive' */
  int8_T inputevents[3];               /* '<Root>/Trial_Control' */
  int8_T e_clk;                        /* '<S22>/Chart' */
  int8_T inputevents_h[2];             /* '<S268>/Task Execution Control Machine' */
  int8_T TorqueMode;                   /* '<S75>/Torque Mode' */
  int8_T actualmodeofoperation;        /* '<S163>/BKIN PDO Receive ElmoDrive' */
  int8_T actualmodeofoperation_j;      /* '<S150>/BKIN PDO Receive ElmoDrive' */
  int8_T TorqueMode_i;                 /* '<S74>/Torque Mode' */
  int8_T actualmodeofoperation_a;      /* '<S111>/BKIN PDO Receive ElmoDrive' */
  int8_T actualmodeofoperation_g;      /* '<S98>/BKIN PDO Receive ElmoDrive' */
  int8_T inputevents_o[3];             /* '<S31>/Send Control Machine' */
  uint8_T RunCommandReceive_o1;        /* '<S267>/Run Command Receive' */
  uint8_T DataTypeConversion1_gw;      /* '<S267>/Data Type Conversion1' */
  uint8_T Compare;                     /* '<S44>/Compare' */
  uint8_T Product_g;                   /* '<S29>/Product' */
  uint8_T Receive_o1[4];               /* '<S13>/Receive' */
  uint8_T SFunctionBuilder_o1[27240];  /* '<S300>/S-Function Builder' */
  uint8_T FixPtRelationalOperator;     /* '<S315>/FixPt Relational Operator' */
  uint8_T Compare_o;                   /* '<S274>/Compare' */
  uint8_T Receive_o1_i[512];           /* '<S34>/Receive' */
  uint8_T pack_out[512];               /* '<S34>/clean_packet' */
  uint8_T Compare_i;                   /* '<S76>/Compare' */
  uint8_T Receive_o1_n[16];            /* '<S222>/Receive' */
  uint8_T FixPtRelationalOperator_l;   /* '<S204>/FixPt Relational Operator' */
  uint8_T ReceivefromRobot1ForceSensor_o1[36];/* '<S201>/Receive from Robot 1 Force Sensor' */
  uint8_T FixPtRelationalOperator_i;   /* '<S208>/FixPt Relational Operator' */
  uint8_T ReceivefromRobot2ForceSensor_o1[36];/* '<S202>/Receive from Robot 2 Force Sensor' */
  uint8_T Pack[8];                     /* '<S207>/Pack' */
  uint8_T Pack_f[8];                   /* '<S205>/Pack' */
  uint8_T Convert1_c[34];              /* '<S32>/Convert1' */
  uint8_T TmpRTBAtConvert1Outport1[34];/* '<S32>/Convert1' */
  uint8_T Receive1_o1[64];             /* '<S58>/Receive1' */
  uint8_T Receive_o1_k[64];            /* '<S57>/Receive' */
  uint8_T Data[21];                    /* '<S49>/UDP Receive' */
  uint8_T Data2[21];                   /* '<S49>/UDP Receive' */
  uint8_T Pack_i[1640];                /* '<S50>/Pack' */
  uint8_T Pack_g[40];                  /* '<S30>/Pack' */
  boolean_T Convert25;                 /* '<S5>/Convert25' */
  boolean_T Compare_j;                 /* '<S1>/Compare' */
  boolean_T LogicalOperator;           /* '<S4>/Logical Operator' */
  boolean_T Memory2_a;                 /* '<S24>/Memory2' */
  boolean_T LogicalOperator_p;         /* '<S22>/Logical Operator' */
  boolean_T Uk1_e;                     /* '<S315>/Delay Input1' */
  boolean_T RateTransition5_o;         /* '<S308>/Rate Transition5' */
  boolean_T logging_enable;            /* '<Root>/Trial_Control' */
  boolean_T robot_enable_controller;   /* '<Root>/Trial_Control' */
  boolean_T e_ApplyNewRotation;        /* '<Root>/Trial_Control' */
  boolean_T e_Trial_End;               /* '<Root>/Trial_Control' */
  boolean_T reset_controller;          /* '<S22>/Chart' */
  boolean_T Delay;                     /* '<S268>/Delay' */
  boolean_T DataTypeConversion1_m;     /* '<S268>/Data Type Conversion1' */
  boolean_T e_exit_trial;              /* '<S268>/Task Execution Control Machine' */
  boolean_T Compare_b;                 /* '<S252>/Compare' */
  boolean_T Compare_l;                 /* '<S253>/Compare' */
  boolean_T Compare_n;                 /* '<S70>/Compare' */
  boolean_T Compare_a;                 /* '<S224>/Compare' */
  boolean_T Compare_c;                 /* '<S71>/Compare' */
  boolean_T motorEnableState;          /* '<S63>/setState' */
  boolean_T Compare_oe;                /* '<S151>/Compare' */
  boolean_T Compare_oo;                /* '<S164>/Compare' */
  boolean_T Compare_g;                 /* '<S99>/Compare' */
  boolean_T Compare_h;                 /* '<S112>/Compare' */
  boolean_T TmpRTBAtforcestrobeInport1;/* '<S31>/Data Packing Subsystem' */
  boolean_T RelationalOperator;        /* '<S47>/Relational Operator' */
  B_EmbeddedMATLABFunction_vmr_rwd_fix_leftarm_T sf_EmbeddedMATLABFunction_k;/* '<S329>/Embedded MATLAB Function' */
  B_EmbeddedMATLABFunction_vmr_rwd_fix_leftarm_T sf_EmbeddedMATLABFunction_p;/* '<S21>/Embedded MATLAB Function' */
  B_EmbeddedMATLABFunction_vmr_rwd_fix_leftarm_T sf_EmbeddedMATLABFunction_l;/* '<S20>/Embedded MATLAB Function' */
  B_Ramp_Up_Down_vmr_rwd_fix_leftarm_T sf_Ramp_Up_Down1;/* '<S9>/Ramp_Up_Down1' */
  B_Ramp_Up_Down_vmr_rwd_fix_leftarm_T sf_Ramp_Up_Down;/* '<S9>/Ramp_Up_Down' */
  B_EmbeddedMATLABFunction_vmr_rwd_fix_leftarm_T sf_EmbeddedMATLABFunction_h;/* '<S261>/Embedded MATLAB Function' */
  B_MATLABFunction_vmr_rwd_fix_leftarm_T sf_MATLABFunction1_m;/* '<S258>/MATLAB Function1' */
  B_MATLABFunction_vmr_rwd_fix_leftarm_T sf_MATLABFunction_o;/* '<S258>/MATLAB Function' */
  B_split_primary_vmr_rwd_fix_leftarm_T sf_split_primary1;/* '<S73>/split_primary1' */
  B_split_primary_vmr_rwd_fix_leftarm_T sf_split_primary;/* '<S73>/split_primary' */
  B_decoderobot_vmr_rwd_fix_leftarm_T sf_decoderobot_p;/* '<S230>/decode robot' */
  B_decoderobot_vmr_rwd_fix_leftarm_T sf_decoderobot;/* '<S229>/decode robot' */
  B_Createtimestamp_vmr_rwd_fix_leftarm_T sf_Createtimestamp_b;/* '<S202>/Create timestamp' */
  B_Createtimestamp_vmr_rwd_fix_leftarm_T sf_Createtimestamp;/* '<S201>/Create timestamp' */
  B_splitoutconstants1_vmr_rwd_fix_leftarm_T sf_splitoutconstants1_o;/* '<S75>/split out constants1' */
  B_size_vmr_rwd_fix_leftarm_T sf_size1_e;/* '<S75>/size1' */
  B_size_vmr_rwd_fix_leftarm_T sf_size_d;/* '<S75>/size' */
  B_converter_vmr_rwd_fix_leftarm_T sf_converter_jl;/* '<S186>/converter' */
  B_forceEnableDisable_vmr_rwd_fix_leftarm_T sf_forceEnableDisable_k;/* '<S75>/forceEnableDisable' */
  B_convert_vmr_rwd_fix_leftarm_T sf_convert_i;/* '<S143>/convert' */
  B_SDOwritemachine_vmr_rwd_fix_leftarm_T sf_SDOwritemachine_j;/* '<S143>/SDO write machine' */
  B_values_vmr_rwd_fix_leftarm_T sf_values_n;/* '<S142>/values' */
  B_SDOreadmachine_vmr_rwd_fix_leftarm_n_T sf_SDOreadmachine_g;/* '<S142>/SDO read machine' */
  B_converter_vmr_rwd_fix_leftarm_T sf_converter_j;/* '<S180>/converter' */
  B_SDOreadmachine_vmr_rwd_fix_leftarm_T sf_SDOreadmachine_h;/* '<S75>/SDO read machine' */
  B_setupvalues_vmr_rwd_fix_leftarm_T sf_setupvalues_g;/* '<S140>/set-up values' */
  B_AbsEncodermachine_vmr_rwd_fix_leftarm_T sf_AbsEncodermachine_k;/* '<S140>/AbsEncoder machine' */
  B_setupvalues_vmr_rwd_fix_leftarm_T sf_setupvalues_k;/* '<S139>/set-up values' */
  B_AbsEncodermachine_vmr_rwd_fix_leftarm_T sf_AbsEncodermachine_i;/* '<S139>/AbsEncoder machine' */
  B_FindRobottype_vmr_rwd_fix_leftarm_T sf_FindRobottype_d;/* '<S75>/Find Robot type' */
  B_faultmonitor1_vmr_rwd_fix_leftarm_T sf_faultmonitor1_h;/* '<S166>/fault monitor1' */
  B_faultmonitor_vmr_rwd_fix_leftarm_T sf_faultmonitor_i;/* '<S166>/fault monitor' */
  B_ReadEMCY_vmr_rwd_fix_leftarm_T sf_ReadEMCY_p;/* '<S166>/Read EMCY' */
  B_parsestatusregister_vmr_rwd_fix_leftarm_T sf_parsestatusregister1_fq;/* '<S163>/parse status register1' */
  B_faultmonitor1_vmr_rwd_fix_leftarm_T sf_faultmonitor1_c;/* '<S153>/fault monitor1' */
  B_faultmonitor_vmr_rwd_fix_leftarm_T sf_faultmonitor_f;/* '<S153>/fault monitor' */
  B_ReadEMCY_vmr_rwd_fix_leftarm_T sf_ReadEMCY_i;/* '<S153>/Read EMCY' */
  B_ControlGDCWhistleState_vmr_rwd_fix_leftarm_T sf_ControlGDCWhistleState_p;/* '<S136>/Control GDC Whistle State' */
  B_parsestatusregister_vmr_rwd_fix_leftarm_T sf_parsestatusregister1_f;/* '<S150>/parse status register1' */
  B_splitoutconstants1_vmr_rwd_fix_leftarm_T sf_splitoutconstants1;/* '<S74>/split out constants1' */
  B_size_vmr_rwd_fix_leftarm_T sf_size1;/* '<S74>/size1' */
  B_size_vmr_rwd_fix_leftarm_T sf_size;/* '<S74>/size' */
  B_converter_vmr_rwd_fix_leftarm_T sf_converter_p;/* '<S134>/converter' */
  B_forceEnableDisable_vmr_rwd_fix_leftarm_T sf_forceEnableDisable;/* '<S74>/forceEnableDisable' */
  B_convert_vmr_rwd_fix_leftarm_T sf_convert;/* '<S91>/convert' */
  B_SDOwritemachine_vmr_rwd_fix_leftarm_T sf_SDOwritemachine;/* '<S91>/SDO write machine' */
  B_values_vmr_rwd_fix_leftarm_T sf_values;/* '<S90>/values' */
  B_SDOreadmachine_vmr_rwd_fix_leftarm_n_T sf_SDOreadmachine_p;/* '<S90>/SDO read machine' */
  B_converter_vmr_rwd_fix_leftarm_T sf_converter;/* '<S128>/converter' */
  B_SDOreadmachine_vmr_rwd_fix_leftarm_T sf_SDOreadmachine;/* '<S74>/SDO read machine' */
  B_setupvalues_vmr_rwd_fix_leftarm_T sf_setupvalues_p;/* '<S88>/set-up values' */
  B_AbsEncodermachine_vmr_rwd_fix_leftarm_T sf_AbsEncodermachine_b;/* '<S88>/AbsEncoder machine' */
  B_setupvalues_vmr_rwd_fix_leftarm_T sf_setupvalues;/* '<S87>/set-up values' */
  B_AbsEncodermachine_vmr_rwd_fix_leftarm_T sf_AbsEncodermachine;/* '<S87>/AbsEncoder machine' */
  B_FindRobottype_vmr_rwd_fix_leftarm_T sf_FindRobottype;/* '<S74>/Find Robot type' */
  B_faultmonitor1_vmr_rwd_fix_leftarm_T sf_faultmonitor1_l;/* '<S114>/fault monitor1' */
  B_faultmonitor_vmr_rwd_fix_leftarm_T sf_faultmonitor_k;/* '<S114>/fault monitor' */
  B_ControlGDCWhistleState_vmr_rwd_fix_leftarm_T sf_ControlGDCWhistleState_f;/* '<S85>/Control GDC Whistle State' */
  B_parsestatusregister_vmr_rwd_fix_leftarm_T sf_parsestatusregister1;/* '<S111>/parse status register1' */
  B_faultmonitor1_vmr_rwd_fix_leftarm_T sf_faultmonitor1;/* '<S101>/fault monitor1' */
  B_faultmonitor_vmr_rwd_fix_leftarm_T sf_faultmonitor;/* '<S101>/fault monitor' */
  B_parsestatusregister_vmr_rwd_fix_leftarm_T sf_parsestatusregister;/* '<S98>/parse status register' */
} B_vmr_rwd_fix_leftarm_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  sbr0BdzAW6GQX2fQakj4o6C_vmr_rwd_fix_leftarm_T robot1Struct;/* '<S209>/Robot_data_builder' */
  sbr0BdzAW6GQX2fQakj4o6C_vmr_rwd_fix_leftarm_T robot2Struct;/* '<S209>/Robot_data_builder' */
  sbr0BdzAW6GQX2fQakj4o6C_vmr_rwd_fix_leftarm_T robot1StructPrimary;/* '<S209>/Robot_data_builder' */
  sbr0BdzAW6GQX2fQakj4o6C_vmr_rwd_fix_leftarm_T robot2StructPrimary;/* '<S209>/Robot_data_builder' */
  shSrZ99dE4twa6ELJRaXlMD_vmr_rwd_fix_leftarm_T robot1Struct_a;/* '<S209>/filter_velocities' */
  shSrZ99dE4twa6ELJRaXlMD_vmr_rwd_fix_leftarm_T robot2Struct_o;/* '<S209>/filter_velocities' */
  real_T UD_DSTATE[2];                 /* '<S316>/UD' */
  real_T UD_DSTATE_n[2];               /* '<S317>/UD' */
  real_T UnitDelay_DSTATE;             /* '<S211>/Unit Delay' */
  real_T UnitDelay1_DSTATE;            /* '<S211>/Unit Delay1' */
  real_T DelayInput1_DSTATE;           /* '<S204>/Delay Input1' */
  real_T DelayInput1_DSTATE_n;         /* '<S208>/Delay Input1' */
  real_T UnitDelay_DSTATE_a;           /* '<S52>/Unit Delay' */
  real_T Memory_PreviousInput[4];      /* '<Root>/Memory' */
  real_T Memory_PreviousInput_h[4];    /* '<S2>/Memory' */
  real_T Memory_PreviousInput_a;       /* '<S13>/Memory' */
  real_T Memory1_PreviousInput;        /* '<Root>/Memory1' */
  real_T Memory1_PreviousInput_g;      /* '<S24>/Memory1' */
  real_T Memory_PreviousInput_j[50];   /* '<S24>/Memory' */
  real_T TmpRTBAtNumberofEventCodesOutport1_Buffer0;/* synthesized block */
  real_T RateTransition2_Buffer0;      /* '<S26>/Rate Transition2' */
  real_T RateTransition1_Buffer0[2];   /* '<S308>/Rate Transition1' */
  real_T RateTransition2_Buffer0_i[2]; /* '<S308>/Rate Transition2' */
  real_T RateTransition4_Buffer0[2];   /* '<S308>/Rate Transition4' */
  real_T Memory1_PreviousInput_i;      /* '<S2>/Memory1' */
  real_T Memory2_1_PreviousInput;      /* '<S2>/Memory2' */
  real_T Memory2_2_PreviousInput;      /* '<S2>/Memory2' */
  real_T Memory2_3_PreviousInput;      /* '<S2>/Memory2' */
  real_T Memory2_4_PreviousInput;      /* '<S2>/Memory2' */
  real_T Memory2_5_PreviousInput;      /* '<S2>/Memory2' */
  real_T Memory2_9_PreviousInput;      /* '<S2>/Memory2' */
  real_T Memory2_18_PreviousInput;     /* '<S2>/Memory2' */
  real_T Memory2_19_PreviousInput;     /* '<S2>/Memory2' */
  real_T Memory2_20_PreviousInput;     /* '<S2>/Memory2' */
  real_T Memory2_21_PreviousInput;     /* '<S2>/Memory2' */
  real_T Memory2_22_PreviousInput;     /* '<S2>/Memory2' */
  real_T Memory2_26_PreviousInput;     /* '<S2>/Memory2' */
  real_T Memory2_10_PreviousInput;     /* '<S2>/Memory2' */
  real_T Memory2_11_PreviousInput;     /* '<S2>/Memory2' */
  real_T Memory2_12_PreviousInput;     /* '<S2>/Memory2' */
  real_T Memory2_13_PreviousInput;     /* '<S2>/Memory2' */
  real_T Memory2_14_PreviousInput;     /* '<S2>/Memory2' */
  real_T Memory2_15_PreviousInput;     /* '<S2>/Memory2' */
  real_T Memory2_16_PreviousInput;     /* '<S2>/Memory2' */
  real_T Memory2_17_PreviousInput;     /* '<S2>/Memory2' */
  real_T Memory2_23_PreviousInput;     /* '<S2>/Memory2' */
  real_T Memory2_24_PreviousInput;     /* '<S2>/Memory2' */
  real_T Memory2_25_PreviousInput;     /* '<S2>/Memory2' */
  real_T Memory2_27_PreviousInput;     /* '<S2>/Memory2' */
  real_T Memory2_28_PreviousInput;     /* '<S2>/Memory2' */
  real_T Memory2_29_PreviousInput;     /* '<S2>/Memory2' */
  real_T Memory2_30_PreviousInput;     /* '<S2>/Memory2' */
  real_T Memory2_31_PreviousInput;     /* '<S2>/Memory2' */
  real_T Memory2_32_PreviousInput;     /* '<S2>/Memory2' */
  real_T Memory2_33_PreviousInput;     /* '<S2>/Memory2' */
  real_T Memory2_34_PreviousInput;     /* '<S2>/Memory2' */
  real_T Memory2_6_PreviousInput;      /* '<S2>/Memory2' */
  real_T Memory2_7_PreviousInput;      /* '<S2>/Memory2' */
  real_T Memory2_8_PreviousInput;      /* '<S2>/Memory2' */
  real_T ECATStatus[8];                /* '<S2>/ECAT Status' */
  real_T ECATHardware[14];             /* '<S2>/ECAT hardware' */
  real_T rotation_memory;              /* '<S332>/Embedded MATLAB Function' */
  real_T tickCount;                    /* '<Root>/Trial_Control' */
  real_T reward_type;                  /* '<Root>/Trial_Control' */
  real_T dist;                         /* '<Root>/Trial_Control' */
  real_T tick;                         /* '<Root>/Trial_Control' */
  real_T rawVelocities[12];            /* '<S313>/filter' */
  real_T filtVelocities[12];           /* '<S313>/filter' */
  real_T tickCount_m;                  /* '<S22>/Chart' */
  real_T StartPos[2];                  /* '<S22>/Chart' */
  real_T TgtPos[2];                    /* '<S22>/Chart' */
  real_T CurHandPos[2];                /* '<S22>/Chart' */
  real_T ramp_time;                    /* '<S22>/Chart' */
  real_T scale_increment;              /* '<S22>/Chart' */
  real_T tick_d;                       /* '<S22>/Chart' */
  real_T trajectory_shape;             /* '<S22>/Chart' */
  real_T RateTransition1_Buffer0_h;    /* '<S302>/Rate Transition1' */
  real_T last_valid_frame_ack;         /* '<S13>/MATLAB Function' */
  real_T last_perm_frame_ack;          /* '<S13>/MATLAB Function' */
  real_T t;                            /* '<S12>/Play sound over and over' */
  real_T last_tone_state;              /* '<S12>/Play sound over and over' */
  real_T trials_per_block[50];         /* '<S269>/Count trials' */
  real_T total_trials_saved;           /* '<S269>/Count trials' */
  real_T total_blocks_saved;           /* '<S269>/Count trials' */
  real_T Delay1_PreviousInput;         /* '<S268>/Delay1' */
  real_T Subtract_DWORK1;              /* '<S268>/Subtract' */
  real_T trial_queue[499];             /* '<S268>/Task Execution Control Machine' */
  real_T repeat_list[499];             /* '<S268>/Task Execution Control Machine' */
  real_T EXAM;                         /* '<S268>/Task Execution Control Machine' */
  real_T BLOCK;                        /* '<S268>/Task Execution Control Machine' */
  real_T held_value[8];                /* '<S267>/Hold_to_1Khz' */
  real_T u;                            /* '<S267>/Embedded MATLAB Function' */
  real_T v;                            /* '<S267>/Embedded MATLAB Function' */
  real_T RateTransition_Buffer0[3];    /* '<S34>/Rate Transition' */
  real_T start_time;                   /* '<S34>/Create timestamp' */
  real_T last_time;                    /* '<S34>/Create timestamp' */
  real_T BKINEtherCATinit1_DWORK2;     /* '<S63>/BKIN EtherCATinit1' */
  real_T BKINEtherCATinit1_DWORK4;     /* '<S63>/BKIN EtherCATinit1' */
  real_T BKINEtherCATinit_DWORK2;      /* '<S63>/BKIN EtherCATinit' */
  real_T BKINEtherCATinit_DWORK4;      /* '<S63>/BKIN EtherCATinit' */
  real_T ECATErrMsgs[20];              /* '<S33>/ECAT Err Msgs' */
  real_T ECATExtraData[8];             /* '<S33>/ECATTorque feedback' */
  real_T HardwareSettings[24];         /* '<S33>/HW Settings' */
  real_T Kinematics[20];               /* '<S33>/Kinematics' */
  real_T PrimaryEncoderData[12];       /* '<S33>/PrimaryEnc' */
  real_T RobotCalibrations[16];        /* '<S33>/Robot Calib' */
  real_T RobotRevision[2];             /* '<S33>/RobotRevision' */
  real_T DelayEstimates[4];            /* '<S33>/delays' */
  real_T ArmForceSensors[2];           /* '<S33>/has FT sensors' */
  real_T lastECATMessages[20];         /* '<S69>/record errors' */
  real_T outCount;                     /* '<S69>/record errors' */
  real_T memoryBuffer[300];            /* '<S69>/record errors' */
  real_T waitingMsgCount;              /* '<S69>/record errors' */
  real_T sentCount;                    /* '<S69>/record errors' */
  real_T secondaryPosData_data[400];   /* '<S83>/create kinematics' */
  real_T secondaryVelData_data[400];   /* '<S83>/create kinematics' */
  real_T primaryVelData_data[400];     /* '<S83>/create kinematics' */
  real_T primaryVelDataFiltered_data[400];/* '<S83>/create kinematics' */
  real_T rawVelocities_g[12];          /* '<S193>/filter_velocities' */
  real_T filtVelocities_f[12];         /* '<S193>/filter_velocities' */
  real_T r1Sho[4];                     /* '<S222>/MATLAB Function' */
  real_T r1Elb[4];                     /* '<S222>/MATLAB Function' */
  real_T r2Sho[4];                     /* '<S222>/MATLAB Function' */
  real_T r2Elb[4];                     /* '<S222>/MATLAB Function' */
  real_T last_tick[4];                 /* '<S222>/MATLAB Function' */
  real_T servoValuesR1[5];             /* '<S209>/Robot_data_builder' */
  real_T servoValuesR2[5];             /* '<S209>/Robot_data_builder' */
  real_T no_update_count;              /* '<S209>/Monitor_status' */
  real_T latchedErrors[12];            /* '<S63>/latch_errors' */
  real_T latchedDCErrors[12];          /* '<S63>/latch_errors' */
  real_T Memory_PreviousInput_l;       /* '<S136>/Memory' */
  real_T Memory_PreviousInput_hp;      /* '<S137>/Memory' */
  real_T Memory1_PreviousInput_c;      /* '<S145>/Memory1' */
  real_T Memory2_PreviousInput;        /* '<S145>/Memory2' */
  real_T Memory2_PreviousInput_n[2];   /* '<S75>/Memory2' */
  real_T Memory3_PreviousInput;        /* '<S75>/Memory3' */
  real_T Memory_PreviousInput_f;       /* '<S142>/Memory' */
  real_T Memory_PreviousInput_m;       /* '<S172>/Memory' */
  real_T permFaulted;                  /* '<S137>/Control GDC Whistle State' */
  real_T countFaultSteps;              /* '<S137>/Control GDC Whistle State' */
  real_T frameCounter;                 /* '<S137>/Control GDC Whistle State' */
  real_T Memory_PreviousInput_p;       /* '<S159>/Memory' */
  real_T Memory_PreviousInput_g;       /* '<S84>/Memory' */
  real_T Memory_PreviousInput_pv;      /* '<S85>/Memory' */
  real_T Memory1_PreviousInput_ip;     /* '<S93>/Memory1' */
  real_T Memory2_PreviousInput_p;      /* '<S93>/Memory2' */
  real_T Memory2_PreviousInput_i[2];   /* '<S74>/Memory2' */
  real_T Memory3_PreviousInput_l;      /* '<S74>/Memory3' */
  real_T Memory_PreviousInput_d;       /* '<S90>/Memory' */
  real_T Memory_PreviousInput_h3;      /* '<S120>/Memory' */
  real_T currReadIdx;                  /* '<S114>/Read EMCY' */
  real_T valuesToRead;                 /* '<S114>/Read EMCY' */
  real_T Memory_PreviousInput_lw;      /* '<S107>/Memory' */
  real_T currReadIdx_j;                /* '<S101>/Read EMCY' */
  real_T valuesToRead_b;               /* '<S101>/Read EMCY' */
  real_T permFaulted_l;                /* '<S84>/Control GDC Whistle State' */
  real_T countFaultSteps_d;            /* '<S84>/Control GDC Whistle State' */
  real_T frameCounter_e;               /* '<S84>/Control GDC Whistle State' */
  real_T Memory2_PreviousInput_a;      /* '<S49>/Memory2' */
  real_T RateTransition2_Buffer0_p[3]; /* '<S49>/Rate Transition2' */
  real_T TmpRTBAtforcestrobeOutport1_Buffer0;/* synthesized block */
  real_T counter;                      /* '<S31>/force strobe' */
  real_T packet_queue_sz;              /* '<S31>/Send Control Machine' */
  real_T outstanding_packet_index;     /* '<S31>/Send Control Machine' */
  real_T PCI6229DA_RWORK[6];           /* '<S12>/PCI-6229 DA' */
  void *RunCommandReceive_PWORK;       /* '<S267>/Run Command Receive' */
  void *Receive_PWORK;                 /* '<S13>/Receive' */
  void *Send_PWORK;                    /* '<S13>/Send' */
  void *SFunction1_PWORK;              /* '<S251>/S-Function1' */
  void *Receive_PWORK_o;               /* '<S34>/Receive' */
  void *Receive_PWORK_n;               /* '<S222>/Receive' */
  void *SFunction_PWORK;               /* '<S209>/S-Function' */
  void *Write_PWORK;                   /* '<S211>/Write' */
  void *Write_PWORK_i;                 /* '<S218>/Write' */
  void *Read_PWORK;                    /* '<S216>/Read' */
  void *ReceivefromRobot1ForceSensor_PWORK;/* '<S201>/Receive from Robot 1 Force Sensor' */
  void *ReceivefromRobot2ForceSensor_PWORK;/* '<S202>/Receive from Robot 2 Force Sensor' */
  void *Send_PWORK_h;                  /* '<S207>/Send' */
  void *Send_PWORK_f;                  /* '<S205>/Send' */
  void *BKINPDOReceiveElmoDrive_PWORK; /* '<S163>/BKIN PDO Receive ElmoDrive' */
  void *BKINPDOReceiveElmoDrive_PWORK_d;/* '<S150>/BKIN PDO Receive ElmoDrive' */
  void *BKINPDOReceiveElmoDrive_PWORK_b;/* '<S111>/BKIN PDO Receive ElmoDrive' */
  void *BKINPDOReceiveElmoDrive_PWORK_i;/* '<S98>/BKIN PDO Receive ElmoDrive' */
  void *Send1_PWORK;                   /* '<S60>/Send1' */
  void *Send_PWORK_l;                  /* '<S59>/Send' */
  void *Receive1_PWORK;                /* '<S58>/Receive1' */
  void *Receive_PWORK_l;               /* '<S57>/Receive' */
  void *UDPReceive_PWORK;              /* '<S49>/UDP Receive' */
  void *UDPReceivePortReset_PWORK;     /* '<S49>/UDP Receive Port Reset' */
  void *Send_PWORK_hr;                 /* '<S50>/Send' */
  void *Send_PWORK_p;                  /* '<S30>/Send' */
  uint32_T Output_DSTATE;              /* '<S43>/Output' */
  uint32_T Output_DSTATE_c;            /* '<S77>/Output' */
  uint32_T Output_DSTATE_p;            /* '<S234>/Output' */
  uint32_T Output_DSTATE_h;            /* '<S225>/Output' */
  uint32_T Output_DSTATE_h5;           /* '<S53>/Output' */
  real32_T TmpRTBAtSendControlMachineInport1_Buffer0[400];/* synthesized block */
  real32_T packet_queue[20500000];     /* '<S31>/Send Control Machine' */
  real32_T t2_PreviousInput[108];      /* '<S47>/t-2' */
  real32_T t1_PreviousInput[108];      /* '<S47>/t-1' */
  int32_T sfEvent;                     /* '<Root>/Trial_Control' */
  int32_T sfEvent_o;                   /* '<S22>/Chart' */
  int32_T clockTickCounter;            /* '<S268>/Task Clock' */
  int32_T sfEvent_m;                   /* '<S268>/Task Execution Control Machine' */
  int32_T BKINEtherCATinit1_DWORK1;    /* '<S63>/BKIN EtherCATinit1' */
  int32_T BKINEtherCATinit_DWORK1;     /* '<S63>/BKIN EtherCATinit' */
  int32_T sfEvent_n;                   /* '<S33>/control read write' */
  int32_T secondaryPosData_sizes[2];   /* '<S83>/create kinematics' */
  int32_T secondaryVelData_sizes[2];   /* '<S83>/create kinematics' */
  int32_T primaryVelData_sizes[2];     /* '<S83>/create kinematics' */
  int32_T primaryVelDataFiltered_sizes[2];/* '<S83>/create kinematics' */
  int32_T Memory_PreviousInput_b;      /* '<S145>/Memory' */
  int32_T Memory_PreviousInput_do;     /* '<S143>/Memory' */
  int32_T Memory_PreviousInput_o;      /* '<S140>/Memory' */
  int32_T Memory1_PreviousInput_l[2];  /* '<S140>/Memory1' */
  int32_T Memory_PreviousInput_c;      /* '<S139>/Memory' */
  int32_T Memory1_PreviousInput_io[2]; /* '<S139>/Memory1' */
  int32_T Memory_PreviousInput_de[2];  /* '<S171>/Memory' */
  int32_T Memory_PreviousInput_dg[2];  /* '<S158>/Memory' */
  int32_T Memory_PreviousInput_pn;     /* '<S93>/Memory' */
  int32_T Memory_PreviousInput_ay;     /* '<S91>/Memory' */
  int32_T Memory_PreviousInput_i;      /* '<S88>/Memory' */
  int32_T Memory1_PreviousInput_a[2];  /* '<S88>/Memory1' */
  int32_T Memory_PreviousInput_hw;     /* '<S87>/Memory' */
  int32_T Memory1_PreviousInput_g2[2]; /* '<S87>/Memory1' */
  int32_T Memory_PreviousInput_id[2];  /* '<S119>/Memory' */
  int32_T sfEvent_e;                   /* '<S114>/Read EMCY' */
  int32_T Memory_PreviousInput_he[2];  /* '<S106>/Memory' */
  int32_T sfEvent_p;                   /* '<S101>/Read EMCY' */
  int32_T clockTickCounter_e;          /* '<S31>/Task Clock' */
  int32_T sfEvent_mm;                  /* '<S31>/Send Control Machine' */
  int32_T i;                           /* '<S31>/Send Control Machine' */
  int32_T j;                           /* '<S31>/Send Control Machine' */
  uint32_T ECATDigDiagnostic[4];       /* '<S2>/ECAT Dig Diagnostic' */
  uint32_T e_ApplyNewRotationEventCounter;/* '<Root>/Trial_Control' */
  uint32_T e_Trial_EndEventCounter;    /* '<Root>/Trial_Control' */
  uint32_T temporalCounter_i1;         /* '<Root>/Trial_Control' */
  uint32_T reset_controllerEventCounter;/* '<S22>/Chart' */
  uint32_T temporalCounter_i1_o;       /* '<S22>/Chart' */
  uint32_T frame_count;                /* '<S302>/Pack VCodeFrame2' */
  uint32_T e_exit_trialEventCounter;   /* '<S268>/Task Execution Control Machine' */
  uint32_T repeat_list_length;         /* '<S268>/Task Execution Control Machine' */
  uint32_T i_l;                        /* '<S268>/Task Execution Control Machine' */
  uint32_T swap_index;                 /* '<S268>/Task Execution Control Machine' */
  uint32_T temp;                       /* '<S268>/Task Execution Control Machine' */
  uint32_T trial_queue_length;         /* '<S268>/Task Execution Control Machine' */
  uint32_T trial_in_mini_block;        /* '<S268>/Task Execution Control Machine' */
  uint32_T last_timestamp;             /* '<S34>/convert to seconds2' */
  uint32_T ECATDigitalInput[8];        /* '<S33>/ECAT Digital in' */
  uint32_T ServoUpdate;                /* '<S33>/ServoUpdate' */
  uint32_T SystemStatus[7];            /* '<S33>/System status' */
  uint32_T CalibrationButton;          /* '<S33>/calib button' */
  uint32_T servoCounter;               /* '<S83>/create servo counter' */
  uint32_T last_servo_counter;         /* '<S209>/Monitor_status' */
  uint32_T enteredOpStep;              /* '<S63>/latch_errors' */
  uint32_T Memory_PreviousInput_ml[2]; /* '<S170>/Memory' */
  uint32_T lastEStopState;             /* '<S137>/Control GDC Whistle State' */
  uint32_T Memory_PreviousInput_cn[2]; /* '<S157>/Memory' */
  uint32_T Memory_PreviousInput_n[2];  /* '<S118>/Memory' */
  uint32_T Memory_PreviousInput_nh[2]; /* '<S105>/Memory' */
  uint32_T lastEStopState_n;           /* '<S84>/Control GDC Whistle State' */
  uint32_T queue_tail;                 /* '<S31>/Send Control Machine' */
  uint32_T packet_index;               /* '<S31>/Send Control Machine' */
  uint32_T queue_head;                 /* '<S31>/Send Control Machine' */
  int_T ICH7_IWORK[5];                 /* '<S5>/ICH7' */
  int_T RunCommandReceive_IWORK[2];    /* '<S267>/Run Command Receive' */
  int_T Receive_IWORK[2];              /* '<S13>/Receive' */
  int_T Send_IWORK[2];                 /* '<S13>/Send' */
  struct {
    int_T AcquireOK;
  } SFunction_IWORK;                   /* '<S14>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_a;                 /* '<S15>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_m;                 /* '<S16>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_mo;                /* '<S17>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_h;                 /* '<S18>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_j;                 /* '<S19>/S-Function' */

  int_T PCI6229DA_IWORK[41];           /* '<S12>/PCI-6229 DA' */
  struct {
    int_T AcquireOK;
  } SFunction_IWORK_c;                 /* '<S297>/S-Function' */

  int_T BKINEtherCATPDOTransmit1_IWORK[23];/* '<S254>/BKIN EtherCAT PDO Transmit 1' */
  int_T BKINEtherCATPDOTransmit2_IWORK[23];/* '<S254>/BKIN EtherCAT PDO Transmit 2' */
  int_T BKINEtherCATPDOTransmit1_IWORK_c[23];/* '<S255>/BKIN EtherCAT PDO Transmit 1' */
  int_T BKINEtherCATPDOTransmit2_IWORK_g[23];/* '<S255>/BKIN EtherCAT PDO Transmit 2' */
  int_T Receive_IWORK_n[2];            /* '<S34>/Receive' */
  int_T BKINEtherCATPDOTransmit_IWORK[23];/* '<S78>/BKIN EtherCAT PDO Transmit ' */
  int_T BKINEtherCATPDOTransmit1_IWORK_m[23];/* '<S78>/BKIN EtherCAT PDO Transmit 1' */
  int_T BKINEtherCATPDOTransmit2_IWORK_d[23];/* '<S78>/BKIN EtherCAT PDO Transmit 2' */
  int_T BKINEtherCATPDOTransmit3_IWORK[23];/* '<S78>/BKIN EtherCAT PDO Transmit 3' */
  int_T Receive_IWORK_f[2];            /* '<S222>/Receive' */
  int_T ReceivefromRobot1ForceSensor_IWORK[2];/* '<S201>/Receive from Robot 1 Force Sensor' */
  int_T ReceivefromRobot2ForceSensor_IWORK[2];/* '<S202>/Receive from Robot 2 Force Sensor' */
  int_T Send_IWORK_l[2];               /* '<S207>/Send' */
  int_T Send_IWORK_d[2];               /* '<S205>/Send' */
  int_T BKINEtherCATPDOTransmit_IWORK_p[23];/* '<S75>/BKIN EtherCAT PDO Transmit ' */
  int_T BKINEtherCATPDOTransmit1_IWORK_p[23];/* '<S75>/BKIN EtherCAT PDO Transmit 1' */
  int_T BKINEtherCATPDOTransmit_IWORK_m[23];/* '<S136>/BKIN EtherCAT PDO Transmit ' */
  int_T BKINEtherCATPDOTransmit_IWORK_h[23];/* '<S137>/BKIN EtherCAT PDO Transmit ' */
  int_T BKINEtherCATAsyncSDOUpload1_IWORK[10];/* '<S186>/BKIN EtherCAT Async SDO Upload1' */
  int_T BKINEtherCATAsyncSDODownload_IWORK[9];/* '<S143>/BKIN EtherCAT Async SDO Download' */
  int_T BKINEtherCATAsyncSDOUpload1_IWORK_h[10];/* '<S180>/BKIN EtherCAT Async SDO Upload1' */
  int_T BKINEtherCATAsyncSDODownload_IWORK_k[9];/* '<S140>/BKIN EtherCAT Async SDO Download' */
  int_T BKINEtherCATAsyncSDOUpload_IWORK[10];/* '<S140>/BKIN EtherCAT Async SDO Upload' */
  int_T BKINEtherCATAsyncSDODownload_IWORK_m[9];/* '<S139>/BKIN EtherCAT Async SDO Download' */
  int_T BKINEtherCATAsyncSDOUpload_IWORK_o[10];/* '<S139>/BKIN EtherCAT Async SDO Upload' */
  int_T BKINEtherCATAsyncSDOUpload_IWORK_d[10];/* '<S170>/BKIN EtherCAT Async SDO Upload' */
  int_T BKINEtherCATAsyncSDOUpload_IWORK_p[10];/* '<S171>/BKIN EtherCAT Async SDO Upload' */
  int_T BKINEtherCATAsyncSDODownload_IWORK_a[9];/* '<S172>/BKIN EtherCAT Async SDO Download' */
  int_T BKINPDOReceiveElmoDrive_IWORK[7];/* '<S163>/BKIN PDO Receive ElmoDrive' */
  int_T BKINEtherCATAsyncSDOUpload_IWORK_n[10];/* '<S157>/BKIN EtherCAT Async SDO Upload' */
  int_T BKINEtherCATAsyncSDOUpload_IWORK_i[10];/* '<S158>/BKIN EtherCAT Async SDO Upload' */
  int_T BKINEtherCATAsyncSDODownload_IWORK_o[9];/* '<S159>/BKIN EtherCAT Async SDO Download' */
  int_T BKINPDOReceiveElmoDrive_IWORK_c[7];/* '<S150>/BKIN PDO Receive ElmoDrive' */
  int_T BKINEtherCATPDOTransmit_IWORK_f[23];/* '<S74>/BKIN EtherCAT PDO Transmit ' */
  int_T BKINEtherCATPDOTransmit1_IWORK_j[23];/* '<S74>/BKIN EtherCAT PDO Transmit 1' */
  int_T BKINEtherCATPDOTransmit_IWORK_a[23];/* '<S84>/BKIN EtherCAT PDO Transmit ' */
  int_T BKINEtherCATPDOTransmit_IWORK_p5[23];/* '<S85>/BKIN EtherCAT PDO Transmit ' */
  int_T BKINEtherCATAsyncSDOUpload1_IWORK_p[10];/* '<S134>/BKIN EtherCAT Async SDO Upload1' */
  int_T BKINEtherCATAsyncSDODownload_IWORK_e[9];/* '<S91>/BKIN EtherCAT Async SDO Download' */
  int_T BKINEtherCATAsyncSDOUpload1_IWORK_a[10];/* '<S128>/BKIN EtherCAT Async SDO Upload1' */
  int_T BKINEtherCATAsyncSDODownload_IWORK_a0[9];/* '<S88>/BKIN EtherCAT Async SDO Download' */
  int_T BKINEtherCATAsyncSDOUpload_IWORK_f[10];/* '<S88>/BKIN EtherCAT Async SDO Upload' */
  int_T BKINEtherCATAsyncSDODownload_IWORK_j[9];/* '<S87>/BKIN EtherCAT Async SDO Download' */
  int_T BKINEtherCATAsyncSDOUpload_IWORK_h[10];/* '<S87>/BKIN EtherCAT Async SDO Upload' */
  int_T BKINEtherCATAsyncSDOUpload_IWORK_j[10];/* '<S118>/BKIN EtherCAT Async SDO Upload' */
  int_T BKINEtherCATAsyncSDOUpload_IWORK_a[10];/* '<S119>/BKIN EtherCAT Async SDO Upload' */
  int_T BKINEtherCATAsyncSDODownload_IWORK_g[9];/* '<S120>/BKIN EtherCAT Async SDO Download' */
  int_T BKINPDOReceiveElmoDrive_IWORK_ct[7];/* '<S111>/BKIN PDO Receive ElmoDrive' */
  int_T BKINEtherCATAsyncSDOUpload_IWORK_hj[10];/* '<S105>/BKIN EtherCAT Async SDO Upload' */
  int_T BKINEtherCATAsyncSDOUpload_IWORK_b[10];/* '<S106>/BKIN EtherCAT Async SDO Upload' */
  int_T BKINEtherCATAsyncSDODownload_IWORK_g1[9];/* '<S107>/BKIN EtherCAT Async SDO Download' */
  int_T BKINPDOReceiveElmoDrive_IWORK_f[7];/* '<S98>/BKIN PDO Receive ElmoDrive' */
  int_T Send1_IWORK[2];                /* '<S60>/Send1' */
  int_T Send_IWORK_dv[2];              /* '<S59>/Send' */
  int_T Receive1_IWORK[2];             /* '<S58>/Receive1' */
  int_T Receive_IWORK_d[2];            /* '<S57>/Receive' */
  int_T UDPReceive_IWORK[3];           /* '<S49>/UDP Receive' */
  int_T UDPReceivePortReset_IWORK[4];  /* '<S49>/UDP Receive Port Reset' */
  int_T Send_IWORK_e[2];               /* '<S50>/Send' */
  int_T Send_IWORK_p[2];               /* '<S30>/Send' */
  uint16_T Output_DSTATE_k;            /* '<S215>/Output' */
  uint16_T temporalCounter_i2;         /* '<S31>/Send Control Machine' */
  boolean_T DelayInput1_DSTATE_m;      /* '<S315>/Delay Input1' */
  int8_T Trial_Control_SubsysRanBC;    /* '<Root>/Trial_Control' */
  int8_T TriggeredSubsystem_SubsysRanBC;/* '<S24>/Triggered Subsystem' */
  int8_T Chart_SubsysRanBC;            /* '<S22>/Chart' */
  int8_T TaskExecutionControlMachine_SubsysRanBC;/* '<S268>/Task Execution Control Machine' */
  int8_T EtherCATApplyLoads_SubsysRanBC;/* '<S36>/EtherCAT Apply Loads' */
  int8_T applypmacloads_SubsysRanBC;   /* '<S36>/apply pmac loads' */
  int8_T Arm1_SubsysRanBC;             /* '<S63>/Arm 1' */
  int8_T Arm2_SubsysRanBC;             /* '<S63>/Arm 2' */
  int8_T Datareceive_SubsysRanBC;      /* '<S66>/Data receive' */
  int8_T read_pmac_SubsysRanBC;        /* '<S65>/read_pmac' */
  int8_T Datawrite_SubsysRanBC;        /* '<S66>/Data write' */
  int8_T update_SubsysRanBC;           /* '<S63>/update' */
  int8_T updatesettings_SubsysRanBC;   /* '<S65>/update settings' */
  int8_T createKINData_SubsysRanBC;    /* '<S33>/createKINData' */
  int8_T updateconstantssubsystem_SubsysRanBC;/* '<S67>/update constants subsystem' */
  int8_T ReadDPRAM_SubsysRanBC;        /* '<S211>/Read DPRAM' */
  int8_T WriteDPRAM_SubsysRanBC;       /* '<S211>/Write DPRAM' */
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S201>/If Action Subsystem' */
  int8_T DataTransferStartSubsystem_SubsysRanBC;/* '<S202>/Data Transfer Start Subsystem' */
  int8_T M1AbsEncCalibration_SubsysRanBC;/* '<S75>/M1 AbsEnc Calibration' */
  int8_T M2AbsEncCalibration_SubsysRanBC;/* '<S75>/M2 AbsEnc Calibration' */
  int8_T M1AbsEncCalibration_SubsysRanBC_h;/* '<S74>/M1 AbsEnc Calibration' */
  int8_T M2AbsEncCalibration_SubsysRanBC_h;/* '<S74>/M2 AbsEnc Calibration' */
  int8_T sendpoll1_SubsysRanBC;        /* '<S32>/send poll 1' */
  int8_T sendpoll2_SubsysRanBC;        /* '<S32>/send poll 2' */
  int8_T plate1_SubsysRanBC;           /* '<S32>/plate1' */
  int8_T plate2_SubsysRanBC;           /* '<S32>/plate2' */
  int8_T SendControlMachine_SubsysRanBC;/* '<S31>/Send Control Machine' */
  int8_T UDPSendSubsystem_SubsysRanBC; /* '<S31>/UDP Send Subsystem' */
  uint8_T is_active_c1_vmr_rwd_fix_leftarm;/* '<Root>/Trial_Control' */
  uint8_T is_c1_vmr_rwd_fix_leftarm;   /* '<Root>/Trial_Control' */
  uint8_T is_Main_Trial;               /* '<Root>/Trial_Control' */
  uint8_T is_active_c11_vmr_rwd_fix_leftarm;/* '<S22>/Chart' */
  uint8_T is_c11_vmr_rwd_fix_leftarm;  /* '<S22>/Chart' */
  uint8_T is_EnableState;              /* '<S22>/Chart' */
  uint8_T is_AutoMoveToPos;            /* '<S22>/Chart' */
  uint8_T is_active_c42_General;       /* '<S268>/Task Execution Control Machine' */
  uint8_T is_c42_General;              /* '<S268>/Task Execution Control Machine' */
  uint8_T is_InTrial;                  /* '<S268>/Task Execution Control Machine' */
  uint8_T is_active_c38_General;       /* '<S33>/control read write' */
  uint8_T is_c38_General;              /* '<S33>/control read write' */
  uint8_T prevRunStatus;               /* '<S78>/update digital outputs' */
  uint8_T is_active_c101_ethercat;     /* '<S114>/Read EMCY' */
  uint8_T is_c101_ethercat;            /* '<S114>/Read EMCY' */
  uint8_T is_active_c99_ethercat;      /* '<S101>/Read EMCY' */
  uint8_T is_c99_ethercat;             /* '<S101>/Read EMCY' */
  uint8_T is_active_c8_General;        /* '<S31>/Send Control Machine' */
  uint8_T is_UpdatePacketQueue;        /* '<S31>/Send Control Machine' */
  uint8_T is_active_UpdatePacketQueue; /* '<S31>/Send Control Machine' */
  uint8_T is_SendControlMachine;       /* '<S31>/Send Control Machine' */
  uint8_T is_active_SendControlMachine;/* '<S31>/Send Control Machine' */
  uint8_T is_Fixed;                    /* '<S31>/Send Control Machine' */
  uint8_T is_FixMonitor;               /* '<S31>/Send Control Machine' */
  uint8_T is_active_FixMonitor;        /* '<S31>/Send Control Machine' */
  uint8_T temporalCounter_i1_oy;       /* '<S31>/Send Control Machine' */
  uint8_T temporalCounter_i3;          /* '<S31>/Send Control Machine' */
  boolean_T Memory2_PreviousInput_o;   /* '<S24>/Memory2' */
  boolean_T isStable;                  /* '<Root>/Trial_Control' */
  boolean_T isStable_h;                /* '<S22>/Chart' */
  boolean_T updatepos;                 /* '<S22>/Chart' */
  boolean_T trials_per_block_not_empty;/* '<S269>/Count trials' */
  boolean_T Delay_PreviousInput;       /* '<S268>/Delay' */
  boolean_T isStable_h3;               /* '<S268>/Task Execution Control Machine' */
  boolean_T BKINEtherCATinit1_DWORK3;  /* '<S63>/BKIN EtherCATinit1' */
  boolean_T BKINEtherCATinit_DWORK3;   /* '<S63>/BKIN EtherCATinit' */
  boolean_T isStable_d;                /* '<S33>/control read write' */
  boolean_T lastECATMessages_not_empty;/* '<S69>/record errors' */
  boolean_T servoCounter_not_empty;    /* '<S83>/create servo counter' */
  boolean_T secondaryPosData_not_empty;/* '<S83>/create kinematics' */
  boolean_T permFaulted_not_empty;     /* '<S137>/Control GDC Whistle State' */
  boolean_T isStable_dj;               /* '<S114>/Read EMCY' */
  boolean_T isStable_n;                /* '<S101>/Read EMCY' */
  boolean_T permFaulted_not_empty_n;   /* '<S84>/Control GDC Whistle State' */
  boolean_T TmpRTBAtforcestrobeInport1_Buffer0;/* synthesized block */
  boolean_T isStable_nq;               /* '<S31>/Send Control Machine' */
  boolean_T Arm1_MODE;                 /* '<S63>/Arm 1' */
  boolean_T Arm2_MODE;                 /* '<S63>/Arm 2' */
  boolean_T M1AbsEncCalibration_MODE;  /* '<S75>/M1 AbsEnc Calibration' */
  boolean_T M2AbsEncCalibration_MODE;  /* '<S75>/M2 AbsEnc Calibration' */
  boolean_T M1AbsEncCalibration_MODE_i;/* '<S74>/M1 AbsEnc Calibration' */
  boolean_T M2AbsEncCalibration_MODE_a;/* '<S74>/M2 AbsEnc Calibration' */
  DW_Ramp_Up_Down_vmr_rwd_fix_leftarm_T sf_Ramp_Up_Down1;/* '<S9>/Ramp_Up_Down1' */
  DW_Ramp_Up_Down_vmr_rwd_fix_leftarm_T sf_Ramp_Up_Down;/* '<S9>/Ramp_Up_Down' */
  DW_Createtimestamp_vmr_rwd_fix_leftarm_T sf_Createtimestamp_b;/* '<S202>/Create timestamp' */
  DW_Createtimestamp_vmr_rwd_fix_leftarm_T sf_Createtimestamp;/* '<S201>/Create timestamp' */
  DW_forceEnableDisable_vmr_rwd_fix_leftarm_T sf_forceEnableDisable_k;/* '<S75>/forceEnableDisable' */
  DW_SDOwritemachine_vmr_rwd_fix_leftarm_T sf_SDOwritemachine_j;/* '<S143>/SDO write machine' */
  DW_SDOreadmachine_vmr_rwd_fix_leftarm_m_T sf_SDOreadmachine_g;/* '<S142>/SDO read machine' */
  DW_SDOreadmachine_vmr_rwd_fix_leftarm_T sf_SDOreadmachine_h;/* '<S75>/SDO read machine' */
  DW_AbsEncodermachine_vmr_rwd_fix_leftarm_T sf_AbsEncodermachine_k;/* '<S140>/AbsEncoder machine' */
  DW_AbsEncodermachine_vmr_rwd_fix_leftarm_T sf_AbsEncodermachine_i;/* '<S139>/AbsEncoder machine' */
  DW_faultmonitor1_vmr_rwd_fix_leftarm_T sf_faultmonitor1_h;/* '<S166>/fault monitor1' */
  DW_faultmonitor_vmr_rwd_fix_leftarm_T sf_faultmonitor_i;/* '<S166>/fault monitor' */
  DW_ReadEMCY_vmr_rwd_fix_leftarm_T sf_ReadEMCY_p;/* '<S166>/Read EMCY' */
  DW_faultmonitor1_vmr_rwd_fix_leftarm_T sf_faultmonitor1_c;/* '<S153>/fault monitor1' */
  DW_faultmonitor_vmr_rwd_fix_leftarm_T sf_faultmonitor_f;/* '<S153>/fault monitor' */
  DW_ReadEMCY_vmr_rwd_fix_leftarm_T sf_ReadEMCY_i;/* '<S153>/Read EMCY' */
  DW_ControlGDCWhistleState_vmr_rwd_fix_leftarm_T sf_ControlGDCWhistleState_p;/* '<S136>/Control GDC Whistle State' */
  DW_forceEnableDisable_vmr_rwd_fix_leftarm_T sf_forceEnableDisable;/* '<S74>/forceEnableDisable' */
  DW_SDOwritemachine_vmr_rwd_fix_leftarm_T sf_SDOwritemachine;/* '<S91>/SDO write machine' */
  DW_SDOreadmachine_vmr_rwd_fix_leftarm_m_T sf_SDOreadmachine_p;/* '<S90>/SDO read machine' */
  DW_SDOreadmachine_vmr_rwd_fix_leftarm_T sf_SDOreadmachine;/* '<S74>/SDO read machine' */
  DW_AbsEncodermachine_vmr_rwd_fix_leftarm_T sf_AbsEncodermachine_b;/* '<S88>/AbsEncoder machine' */
  DW_AbsEncodermachine_vmr_rwd_fix_leftarm_T sf_AbsEncodermachine;/* '<S87>/AbsEncoder machine' */
  DW_faultmonitor1_vmr_rwd_fix_leftarm_T sf_faultmonitor1_l;/* '<S114>/fault monitor1' */
  DW_faultmonitor_vmr_rwd_fix_leftarm_T sf_faultmonitor_k;/* '<S114>/fault monitor' */
  DW_ControlGDCWhistleState_vmr_rwd_fix_leftarm_T sf_ControlGDCWhistleState_f;/* '<S85>/Control GDC Whistle State' */
  DW_faultmonitor1_vmr_rwd_fix_leftarm_T sf_faultmonitor1;/* '<S101>/fault monitor1' */
  DW_faultmonitor_vmr_rwd_fix_leftarm_T sf_faultmonitor;/* '<S101>/fault monitor' */
} DW_vmr_rwd_fix_leftarm_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState TriggeredSubsystem_Trig_ZCE;/* '<S24>/Triggered Subsystem' */
  ZCSigState Trial_Control_Trig_ZCE[3];/* '<Root>/Trial_Control' */
  ZCSigState Chart_Trig_ZCE;           /* '<S22>/Chart' */
  ZCE_Ramp_Up_Down_vmr_rwd_fix_leftarm_T sf_Ramp_Up_Down1;/* '<S9>/Ramp_Up_Down' */
  ZCE_Ramp_Up_Down_vmr_rwd_fix_leftarm_T sf_Ramp_Up_Down;/* '<S9>/Ramp_Up_Down' */
  ZCSigState TaskExecutionControlMachine_Trig_ZCE[2];/* '<S268>/Task Execution Control Machine' */
  ZCSigState SendControlMachine_Trig_ZCE[3];/* '<S31>/Send Control Machine' */
} PrevZCX_vmr_rwd_fix_leftarm_T;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T Width;                  /* '<S29>/Width' */
  const real_T Width_d;                /* '<S28>/Width' */
  const real_T Width_a;                /* '<S25>/Width' */
  const real_T Width_g;                /* '<S26>/Width' */
  const real_T Width_c;                /* '<S27>/Width' */
  const uint32_T Width1;               /* '<S268>/Width1' */
} ConstB_vmr_rwd_fix_leftarm_T;

/* Backward compatible GRT Identifiers */
#define rtB                            vmr_rwd_fix_leftarm_B
#define BlockIO                        B_vmr_rwd_fix_leftarm_T
#define rtP                            vmr_rwd_fix_leftarm_P
#define Parameters                     P_vmr_rwd_fix_leftarm_T
#define rtDWork                        vmr_rwd_fix_leftarm_DW
#define D_Work                         DW_vmr_rwd_fix_leftarm_T
#define tConstBlockIOType              ConstB_vmr_rwd_fix_leftarm_T
#define rtC                            vmr_rwd_fix_leftarm_ConstB
#define rtPrevZCSigState               vmr_rwd_fix_leftarm_PrevZCX
#define PrevZCSigStates                PrevZCX_vmr_rwd_fix_leftarm_T

/* Parameters (auto storage) */
struct P_vmr_rwd_fix_leftarm_T_ {
  real_T DiscreteDerivative_ICPrevScaledInput;/* Mask Parameter: DiscreteDerivative_ICPrevScaledInput
                                               * Referenced by: '<S316>/UD'
                                               */
  real_T DiscreteDerivative1_ICPrevScaledInput;/* Mask Parameter: DiscreteDerivative1_ICPrevScaledInput
                                                * Referenced by: '<S317>/UD'
                                                */
  real_T KINARM_Exo_Position_Controller_KINARM_Type;/* Mask Parameter: KINARM_Exo_Position_Controller_KINARM_Type
                                                     * Referenced by: '<S308>/Constant2'
                                                     */
  real_T GUIControl_Lcols;             /* Mask Parameter: GUIControl_Lcols
                                        * Referenced by: '<S266>/L_cols'
                                        */
  real_T GUIControl_Vcols;             /* Mask Parameter: GUIControl_Vcols
                                        * Referenced by: '<S266>/V_cols'
                                        */
  real_T GUIControl_XYcols[2];         /* Mask Parameter: GUIControl_XYcols
                                        * Referenced by: '<S266>/XY_cols'
                                        */
  real_T KINARM_Exo_Position_Controller_angles_or_XY;/* Mask Parameter: KINARM_Exo_Position_Controller_angles_or_XY
                                                      * Referenced by: '<S308>/coordinate_system_option'
                                                      */
  real_T KINARM_HandFeedbackInTarget_attribcol1;/* Mask Parameter: KINARM_HandFeedbackInTarget_attribcol1
                                                 * Referenced by: '<S10>/attribcol1'
                                                 */
  real_T Show_Target_attribcol1[4];    /* Mask Parameter: Show_Target_attribcol1
                                        * Referenced by: '<S20>/state1_indices'
                                        */
  real_T Show_Target1_attribcol1[4];   /* Mask Parameter: Show_Target1_attribcol1
                                        * Referenced by: '<S21>/state1_indices'
                                        */
  real_T Show_Target_With_Label_attribcol1[9];/* Mask Parameter: Show_Target_With_Label_attribcol1
                                               * Referenced by: '<S264>/state1_indices'
                                               */
  real_T Show_Target1_attribcol1_n[6]; /* Mask Parameter: Show_Target1_attribcol1_n
                                        * Referenced by: '<S261>/state1_indices'
                                        */
  real_T Show_Target1_attribcol1_j[4]; /* Mask Parameter: Show_Target1_attribcol1_j
                                        * Referenced by: '<S330>/state1_indices'
                                        */
  real_T Show_Target2_attribcol1[4];   /* Mask Parameter: Show_Target2_attribcol1
                                        * Referenced by: '<S331>/state1_indices'
                                        */
  real_T Show_Target_attribcol1_p[4];  /* Mask Parameter: Show_Target_attribcol1_p
                                        * Referenced by: '<S329>/state1_indices'
                                        */
  real_T Show_Target_attribcol1_f[4];  /* Mask Parameter: Show_Target_attribcol1_f
                                        * Referenced by: '<S310>/state1_indices'
                                        */
  real_T Show_Target_attribcol2[4];    /* Mask Parameter: Show_Target_attribcol2
                                        * Referenced by: '<S20>/state2_indices'
                                        */
  real_T Show_Target1_attribcol2[4];   /* Mask Parameter: Show_Target1_attribcol2
                                        * Referenced by: '<S21>/state2_indices'
                                        */
  real_T Show_Target1_attribcol3[4];   /* Mask Parameter: Show_Target1_attribcol3
                                        * Referenced by: '<S21>/state3_indices'
                                        */
  real_T isecat_const;                 /* Mask Parameter: isecat_const
                                        * Referenced by: '<S70>/Constant'
                                        */
  real_T ispmac1_const;                /* Mask Parameter: ispmac1_const
                                        * Referenced by: '<S224>/Constant'
                                        */
  real_T ispmac_const;                 /* Mask Parameter: ispmac_const
                                        * Referenced by: '<S71>/Constant'
                                        */
  real_T isecat_const_a;               /* Mask Parameter: isecat_const_a
                                        * Referenced by: '<S252>/Constant'
                                        */
  real_T isecat1_const;                /* Mask Parameter: isecat1_const
                                        * Referenced by: '<S253>/Constant'
                                        */
  real_T CompareToConstant_const;      /* Mask Parameter: CompareToConstant_const
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T KINARM_Exo_Apply_Loads_down_duration;/* Mask Parameter: KINARM_Exo_Apply_Loads_down_duration
                                               * Referenced by: '<S9>/down_duration(ms)'
                                               */
  real_T Hand_Feedback_feedback_cntl_src;/* Mask Parameter: Hand_Feedback_feedback_cntl_src
                                          * Referenced by: '<S6>/block_settings'
                                          */
  real_T KINARM_Exo_Position_Controller_inertias_for_FF;/* Mask Parameter: KINARM_Exo_Position_Controller_inertias_for_FF
                                                         * Referenced by: '<S308>/inertia_option'
                                                         */
  real_T KINARM_Exo_Apply_Loads_limit_motors;/* Mask Parameter: KINARM_Exo_Apply_Loads_limit_motors
                                              * Referenced by:
                                              *   '<S9>/Torque Limit1'
                                              *   '<S286>/Torque Limit4'
                                              */
  real_T KINARM_Exo_Apply_Loads_max_torque;/* Mask Parameter: KINARM_Exo_Apply_Loads_max_torque
                                            * Referenced by:
                                            *   '<S9>/Torque Limit'
                                            *   '<S286>/Torque Limit3'
                                            */
  real_T KINARM_HandFeedbackInTarget_num_states;/* Mask Parameter: KINARM_HandFeedbackInTarget_num_states
                                                 * Referenced by: '<S10>/num_states'
                                                 */
  real_T Show_Target_num_states;       /* Mask Parameter: Show_Target_num_states
                                        * Referenced by: '<S20>/num_states'
                                        */
  real_T Show_Target1_num_states;      /* Mask Parameter: Show_Target1_num_states
                                        * Referenced by: '<S21>/num_states'
                                        */
  real_T Show_Target_With_Label_num_states;/* Mask Parameter: Show_Target_With_Label_num_states
                                            * Referenced by: '<S264>/num_states'
                                            */
  real_T Show_Target1_num_states_m;    /* Mask Parameter: Show_Target1_num_states_m
                                        * Referenced by: '<S261>/num_states'
                                        */
  real_T Show_Target1_num_states_e;    /* Mask Parameter: Show_Target1_num_states_e
                                        * Referenced by: '<S330>/num_states'
                                        */
  real_T Show_Target2_num_states;      /* Mask Parameter: Show_Target2_num_states
                                        * Referenced by: '<S331>/num_states'
                                        */
  real_T Show_Target_num_states_c;     /* Mask Parameter: Show_Target_num_states_c
                                        * Referenced by: '<S329>/num_states'
                                        */
  real_T Show_Target_num_states_f;     /* Mask Parameter: Show_Target_num_states_f
                                        * Referenced by: '<S310>/num_states'
                                        */
  real_T Show_Target_opacity;          /* Mask Parameter: Show_Target_opacity
                                        * Referenced by: '<S20>/Opacity'
                                        */
  real_T Show_Target1_opacity;         /* Mask Parameter: Show_Target1_opacity
                                        * Referenced by: '<S21>/Opacity'
                                        */
  real_T Show_Target_With_Label_opacity;/* Mask Parameter: Show_Target_With_Label_opacity
                                         * Referenced by: '<S264>/Opacity'
                                         */
  real_T Show_Target1_opacity_e;       /* Mask Parameter: Show_Target1_opacity_e
                                        * Referenced by: '<S261>/Opacity'
                                        */
  real_T Show_Target1_opacity_g;       /* Mask Parameter: Show_Target1_opacity_g
                                        * Referenced by: '<S330>/Opacity'
                                        */
  real_T Show_Target2_opacity;         /* Mask Parameter: Show_Target2_opacity
                                        * Referenced by: '<S331>/Opacity'
                                        */
  real_T Show_Target_opacity_j;        /* Mask Parameter: Show_Target_opacity_j
                                        * Referenced by: '<S329>/Opacity'
                                        */
  real_T Show_Target_opacity_b;        /* Mask Parameter: Show_Target_opacity_b
                                        * Referenced by: '<S310>/Opacity'
                                        */
  real_T Show_Target_target_display;   /* Mask Parameter: Show_Target_target_display
                                        * Referenced by: '<S20>/Target_Display'
                                        */
  real_T Show_Target1_target_display;  /* Mask Parameter: Show_Target1_target_display
                                        * Referenced by: '<S21>/Target_Display'
                                        */
  real_T Show_Target_With_Label_target_display;/* Mask Parameter: Show_Target_With_Label_target_display
                                                * Referenced by: '<S264>/Target_Display'
                                                */
  real_T Show_Target1_target_display_k;/* Mask Parameter: Show_Target1_target_display_k
                                        * Referenced by: '<S261>/Target_Display'
                                        */
  real_T Show_Target1_target_display_j;/* Mask Parameter: Show_Target1_target_display_j
                                        * Referenced by: '<S330>/Target_Display'
                                        */
  real_T Show_Target2_target_display;  /* Mask Parameter: Show_Target2_target_display
                                        * Referenced by: '<S331>/Target_Display'
                                        */
  real_T Show_Target_target_display_d; /* Mask Parameter: Show_Target_target_display_d
                                        * Referenced by: '<S329>/Target_Display'
                                        */
  real_T Show_Target_target_display_a; /* Mask Parameter: Show_Target_target_display_a
                                        * Referenced by: '<S310>/Target_Display'
                                        */
  real_T KINARM_HandFeedbackInTarget_target_type;/* Mask Parameter: KINARM_HandFeedbackInTarget_target_type
                                                  * Referenced by: '<S10>/Target_Type'
                                                  */
  real_T Show_Target_target_type;      /* Mask Parameter: Show_Target_target_type
                                        * Referenced by: '<S20>/Target_Type'
                                        */
  real_T Show_Target1_target_type;     /* Mask Parameter: Show_Target1_target_type
                                        * Referenced by: '<S21>/Target_Type'
                                        */
  real_T Show_Target_With_Label_target_type;/* Mask Parameter: Show_Target_With_Label_target_type
                                             * Referenced by: '<S264>/Target_Type'
                                             */
  real_T Show_Target1_target_type_l;   /* Mask Parameter: Show_Target1_target_type_l
                                        * Referenced by: '<S261>/Target_Type'
                                        */
  real_T Show_Target1_target_type_b;   /* Mask Parameter: Show_Target1_target_type_b
                                        * Referenced by: '<S330>/Target_Type'
                                        */
  real_T Show_Target2_target_type;     /* Mask Parameter: Show_Target2_target_type
                                        * Referenced by: '<S331>/Target_Type'
                                        */
  real_T Show_Target_target_type_e;    /* Mask Parameter: Show_Target_target_type_e
                                        * Referenced by: '<S329>/Target_Type'
                                        */
  real_T Show_Target_target_type_f;    /* Mask Parameter: Show_Target_target_type_f
                                        * Referenced by: '<S310>/Target_Type'
                                        */
  real_T KINARM_Exo_Apply_Loads_up_duration;/* Mask Parameter: KINARM_Exo_Apply_Loads_up_duration
                                             * Referenced by: '<S9>/up_duration(ms)'
                                             */
  real_T KINARM_Exo_Position_Controller_use_dom_hand;/* Mask Parameter: KINARM_Exo_Position_Controller_use_dom_hand
                                                      * Referenced by: '<S308>/use dominant hand'
                                                      */
  real_T KINARM_HandFeedbackInTarget_use_dominant_hand;/* Mask Parameter: KINARM_HandFeedbackInTarget_use_dominant_hand
                                                        * Referenced by: '<S10>/Use_Dominant_Hand?'
                                                        */
  real_T KINARM_DistanceFromTarget_use_dominant_hand;/* Mask Parameter: KINARM_DistanceFromTarget_use_dominant_hand
                                                      * Referenced by: '<S8>/Use_Dominant_Hand?'
                                                      */
  real_T Process_Video_CMD_video_delay;/* Mask Parameter: Process_Video_CMD_video_delay
                                        * Referenced by: '<S13>/Constant'
                                        */
  real_T DetectChange_vinit;           /* Mask Parameter: DetectChange_vinit
                                        * Referenced by: '<S204>/Delay Input1'
                                        */
  real_T DetectChange_vinit_n;         /* Mask Parameter: DetectChange_vinit_n
                                        * Referenced by: '<S208>/Delay Input1'
                                        */
  int32_T CompareToConstant_const_m;   /* Mask Parameter: CompareToConstant_const_m
                                        * Referenced by: '<S99>/Constant'
                                        */
  int32_T Compare_const;               /* Mask Parameter: Compare_const
                                        * Referenced by: '<S112>/Constant'
                                        */
  int32_T Compare_const_b;             /* Mask Parameter: Compare_const_b
                                        * Referenced by: '<S151>/Constant'
                                        */
  int32_T Compare_const_h;             /* Mask Parameter: Compare_const_h
                                        * Referenced by: '<S164>/Constant'
                                        */
  uint32_T WrapToZero_Threshold;       /* Mask Parameter: WrapToZero_Threshold
                                        * Referenced by: '<S56>/FixPt Switch'
                                        */
  uint32_T WrapToZero_Threshold_k;     /* Mask Parameter: WrapToZero_Threshold_k
                                        * Referenced by: '<S228>/FixPt Switch'
                                        */
  uint32_T WrapToZero_Threshold_o;     /* Mask Parameter: WrapToZero_Threshold_o
                                        * Referenced by: '<S240>/FixPt Switch'
                                        */
  uint32_T WrapToZero_Threshold_e;     /* Mask Parameter: WrapToZero_Threshold_e
                                        * Referenced by: '<S189>/FixPt Switch'
                                        */
  uint32_T WrapToZero_Threshold_c;     /* Mask Parameter: WrapToZero_Threshold_c
                                        * Referenced by: '<S46>/FixPt Switch'
                                        */
  uint32_T Compare_const_j;            /* Mask Parameter: Compare_const_j
                                        * Referenced by: '<S76>/Constant'
                                        */
  uint32_T CompareToConstant_const_b;  /* Mask Parameter: CompareToConstant_const_b
                                        * Referenced by: '<S274>/Constant'
                                        */
  uint32_T IfRunning_const;            /* Mask Parameter: IfRunning_const
                                        * Referenced by: '<S44>/Constant'
                                        */
  uint16_T WrapToZero_Threshold_d;     /* Mask Parameter: WrapToZero_Threshold_d
                                        * Referenced by: '<S220>/FixPt Switch'
                                        */
  boolean_T DetectIncrease_vinit;      /* Mask Parameter: DetectIncrease_vinit
                                        * Referenced by: '<S315>/Delay Input1'
                                        */
  real_T const_Value[5];               /* Expression: [1 1 1 1 1]
                                        * Referenced by: '<S30>/const'
                                        */
  real_T Send_P1_Size[2];              /* Computed Parameter: Send_P1_Size
                                        * Referenced by: '<S30>/Send'
                                        */
  real_T Send_P1[11];                  /* Computed Parameter: Send_P1
                                        * Referenced by: '<S30>/Send'
                                        */
  real_T Send_P2_Size[2];              /* Computed Parameter: Send_P2_Size
                                        * Referenced by: '<S30>/Send'
                                        */
  real_T Send_P2;                      /* Expression: ipPort
                                        * Referenced by: '<S30>/Send'
                                        */
  real_T Send_P3_Size[2];              /* Computed Parameter: Send_P3_Size
                                        * Referenced by: '<S30>/Send'
                                        */
  real_T Send_P3;                      /* Expression: localPort
                                        * Referenced by: '<S30>/Send'
                                        */
  real_T Send_P4_Size[2];              /* Computed Parameter: Send_P4_Size
                                        * Referenced by: '<S30>/Send'
                                        */
  real_T Send_P4;                      /* Expression: sampletime
                                        * Referenced by: '<S30>/Send'
                                        */
  real_T Send_P5_Size[2];              /* Computed Parameter: Send_P5_Size
                                        * Referenced by: '<S30>/Send'
                                        */
  real_T Send_P5;                      /* Expression: vblLen
                                        * Referenced by: '<S30>/Send'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S47>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S52>/Constant'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S52>/Unit Delay'
                                        */
  real_T MaxFramesPerPacket_Value;     /* Expression: 3
                                        * Referenced by: '<S47>/Max Frames Per Packet'
                                        */
  real_T Send_P1_Size_b[2];            /* Computed Parameter: Send_P1_Size_b
                                        * Referenced by: '<S50>/Send'
                                        */
  real_T Send_P1_f[11];                /* Computed Parameter: Send_P1_f
                                        * Referenced by: '<S50>/Send'
                                        */
  real_T Send_P2_Size_i[2];            /* Computed Parameter: Send_P2_Size_i
                                        * Referenced by: '<S50>/Send'
                                        */
  real_T Send_P2_g;                    /* Expression: ipPort
                                        * Referenced by: '<S50>/Send'
                                        */
  real_T Send_P3_Size_g[2];            /* Computed Parameter: Send_P3_Size_g
                                        * Referenced by: '<S50>/Send'
                                        */
  real_T Send_P3_j;                    /* Expression: localPort
                                        * Referenced by: '<S50>/Send'
                                        */
  real_T Send_P4_Size_l[2];            /* Computed Parameter: Send_P4_Size_l
                                        * Referenced by: '<S50>/Send'
                                        */
  real_T Send_P4_k;                    /* Expression: sampletime
                                        * Referenced by: '<S50>/Send'
                                        */
  real_T Send_P5_Size_e[2];            /* Computed Parameter: Send_P5_Size_e
                                        * Referenced by: '<S50>/Send'
                                        */
  real_T Send_P5_k;                    /* Expression: vblLen
                                        * Referenced by: '<S50>/Send'
                                        */
  real_T runID_Value;                  /* Expression: 0
                                        * Referenced by: '<S31>/runID'
                                        */
  real_T Memory2_X0;                   /* Expression: 0
                                        * Referenced by: '<S49>/Memory2'
                                        */
  real_T RateTransition2_X0;           /* Expression: 0
                                        * Referenced by: '<S49>/Rate Transition2'
                                        */
  real_T UDPReceive_P1_Size[2];        /* Computed Parameter: UDPReceive_P1_Size
                                        * Referenced by: '<S49>/UDP Receive'
                                        */
  real_T UDPReceive_P1[15];            /* Computed Parameter: UDPReceive_P1
                                        * Referenced by: '<S49>/UDP Receive'
                                        */
  real_T UDPReceive_P2_Size[2];        /* Computed Parameter: UDPReceive_P2_Size
                                        * Referenced by: '<S49>/UDP Receive'
                                        */
  real_T UDPReceive_P2;                /* Expression: ipPort
                                        * Referenced by: '<S49>/UDP Receive'
                                        */
  real_T UDPReceive_P3_Size[2];        /* Computed Parameter: UDPReceive_P3_Size
                                        * Referenced by: '<S49>/UDP Receive'
                                        */
  real_T UDPReceive_P3;                /* Expression: width
                                        * Referenced by: '<S49>/UDP Receive'
                                        */
  real_T UDPReceive_P4_Size[2];        /* Computed Parameter: UDPReceive_P4_Size
                                        * Referenced by: '<S49>/UDP Receive'
                                        */
  real_T UDPReceive_P4;                /* Expression: sampletime
                                        * Referenced by: '<S49>/UDP Receive'
                                        */
  real_T UDPReceive_P5_Size[2];        /* Computed Parameter: UDPReceive_P5_Size
                                        * Referenced by: '<S49>/UDP Receive'
                                        */
  real_T UDPReceive_P5;                /* Expression: vblLen
                                        * Referenced by: '<S49>/UDP Receive'
                                        */
  real_T TmpRTBAtforcestrobeOutport1_X0;/* Expression: 0
                                         * Referenced by: synthesized block
                                         */
  real_T TaskClock_Amp;                /* Expression: 1
                                        * Referenced by: '<S31>/Task Clock'
                                        */
  real_T TaskClock_Period;             /* Computed Parameter: TaskClock_Period
                                        * Referenced by: '<S31>/Task Clock'
                                        */
  real_T TaskClock_Duty;               /* Computed Parameter: TaskClock_Duty
                                        * Referenced by: '<S31>/Task Clock'
                                        */
  real_T TaskClock_PhaseDelay;         /* Expression: 0
                                        * Referenced by: '<S31>/Task Clock'
                                        */
  real_T UDPReceivePortReset_P1_Size[2];/* Computed Parameter: UDPReceivePortReset_P1_Size
                                         * Referenced by: '<S49>/UDP Receive Port Reset'
                                         */
  real_T UDPReceivePortReset_P1[11];   /* Computed Parameter: UDPReceivePortReset_P1
                                        * Referenced by: '<S49>/UDP Receive Port Reset'
                                        */
  real_T UDPReceivePortReset_P2_Size[2];/* Computed Parameter: UDPReceivePortReset_P2_Size
                                         * Referenced by: '<S49>/UDP Receive Port Reset'
                                         */
  real_T UDPReceivePortReset_P2;       /* Expression: ipPort
                                        * Referenced by: '<S49>/UDP Receive Port Reset'
                                        */
  real_T UDPReceivePortReset_P3_Size[2];/* Computed Parameter: UDPReceivePortReset_P3_Size
                                         * Referenced by: '<S49>/UDP Receive Port Reset'
                                         */
  real_T UDPReceivePortReset_P3;       /* Expression: width
                                        * Referenced by: '<S49>/UDP Receive Port Reset'
                                        */
  real_T UDPReceivePortReset_P4_Size[2];/* Computed Parameter: UDPReceivePortReset_P4_Size
                                         * Referenced by: '<S49>/UDP Receive Port Reset'
                                         */
  real_T UDPReceivePortReset_P4;       /* Expression: sampletime
                                        * Referenced by: '<S49>/UDP Receive Port Reset'
                                        */
  real_T UDPReceivePortReset_P5_Size[2];/* Computed Parameter: UDPReceivePortReset_P5_Size
                                         * Referenced by: '<S49>/UDP Receive Port Reset'
                                         */
  real_T UDPReceivePortReset_P5;       /* Expression: vblLen
                                        * Referenced by: '<S49>/UDP Receive Port Reset'
                                        */
  real_T Receive_P1_Size[2];           /* Computed Parameter: Receive_P1_Size
                                        * Referenced by: '<S57>/Receive'
                                        */
  real_T Receive_P1[13];               /* Computed Parameter: Receive_P1
                                        * Referenced by: '<S57>/Receive'
                                        */
  real_T Receive_P2_Size[2];           /* Computed Parameter: Receive_P2_Size
                                        * Referenced by: '<S57>/Receive'
                                        */
  real_T Receive_P2;                   /* Expression: ipPort
                                        * Referenced by: '<S57>/Receive'
                                        */
  real_T Receive_P3_Size[2];           /* Computed Parameter: Receive_P3_Size
                                        * Referenced by: '<S57>/Receive'
                                        */
  real_T Receive_P3;                   /* Expression: width
                                        * Referenced by: '<S57>/Receive'
                                        */
  real_T Receive_P4_Size[2];           /* Computed Parameter: Receive_P4_Size
                                        * Referenced by: '<S57>/Receive'
                                        */
  real_T Receive_P4;                   /* Expression: sampletime
                                        * Referenced by: '<S57>/Receive'
                                        */
  real_T Receive_P5_Size[2];           /* Computed Parameter: Receive_P5_Size
                                        * Referenced by: '<S57>/Receive'
                                        */
  real_T Receive_P5;                   /* Expression: vblLen
                                        * Referenced by: '<S57>/Receive'
                                        */
  real_T Receive1_P1_Size[2];          /* Computed Parameter: Receive1_P1_Size
                                        * Referenced by: '<S58>/Receive1'
                                        */
  real_T Receive1_P1[13];              /* Computed Parameter: Receive1_P1
                                        * Referenced by: '<S58>/Receive1'
                                        */
  real_T Receive1_P2_Size[2];          /* Computed Parameter: Receive1_P2_Size
                                        * Referenced by: '<S58>/Receive1'
                                        */
  real_T Receive1_P2;                  /* Expression: ipPort
                                        * Referenced by: '<S58>/Receive1'
                                        */
  real_T Receive1_P3_Size[2];          /* Computed Parameter: Receive1_P3_Size
                                        * Referenced by: '<S58>/Receive1'
                                        */
  real_T Receive1_P3;                  /* Expression: width
                                        * Referenced by: '<S58>/Receive1'
                                        */
  real_T Receive1_P4_Size[2];          /* Computed Parameter: Receive1_P4_Size
                                        * Referenced by: '<S58>/Receive1'
                                        */
  real_T Receive1_P4;                  /* Expression: sampletime
                                        * Referenced by: '<S58>/Receive1'
                                        */
  real_T Receive1_P5_Size[2];          /* Computed Parameter: Receive1_P5_Size
                                        * Referenced by: '<S58>/Receive1'
                                        */
  real_T Receive1_P5;                  /* Expression: vblLen
                                        * Referenced by: '<S58>/Receive1'
                                        */
  real_T Send_P1_Size_i[2];            /* Computed Parameter: Send_P1_Size_i
                                        * Referenced by: '<S59>/Send'
                                        */
  real_T Send_P1_e[13];                /* Computed Parameter: Send_P1_e
                                        * Referenced by: '<S59>/Send'
                                        */
  real_T Send_P2_Size_l[2];            /* Computed Parameter: Send_P2_Size_l
                                        * Referenced by: '<S59>/Send'
                                        */
  real_T Send_P2_e;                    /* Expression: ipPort
                                        * Referenced by: '<S59>/Send'
                                        */
  real_T Send_P3_Size_a[2];            /* Computed Parameter: Send_P3_Size_a
                                        * Referenced by: '<S59>/Send'
                                        */
  real_T Send_P3_p;                    /* Expression: localPort
                                        * Referenced by: '<S59>/Send'
                                        */
  real_T Send_P4_Size_h[2];            /* Computed Parameter: Send_P4_Size_h
                                        * Referenced by: '<S59>/Send'
                                        */
  real_T Send_P4_k1;                   /* Expression: sampletime
                                        * Referenced by: '<S59>/Send'
                                        */
  real_T Send_P5_Size_es[2];           /* Computed Parameter: Send_P5_Size_es
                                        * Referenced by: '<S59>/Send'
                                        */
  real_T Send_P5_n;                    /* Expression: vblLen
                                        * Referenced by: '<S59>/Send'
                                        */
  real_T Send1_P1_Size[2];             /* Computed Parameter: Send1_P1_Size
                                        * Referenced by: '<S60>/Send1'
                                        */
  real_T Send1_P1[13];                 /* Computed Parameter: Send1_P1
                                        * Referenced by: '<S60>/Send1'
                                        */
  real_T Send1_P2_Size[2];             /* Computed Parameter: Send1_P2_Size
                                        * Referenced by: '<S60>/Send1'
                                        */
  real_T Send1_P2;                     /* Expression: ipPort
                                        * Referenced by: '<S60>/Send1'
                                        */
  real_T Send1_P3_Size[2];             /* Computed Parameter: Send1_P3_Size
                                        * Referenced by: '<S60>/Send1'
                                        */
  real_T Send1_P3;                     /* Expression: localPort
                                        * Referenced by: '<S60>/Send1'
                                        */
  real_T Send1_P4_Size[2];             /* Computed Parameter: Send1_P4_Size
                                        * Referenced by: '<S60>/Send1'
                                        */
  real_T Send1_P4;                     /* Expression: sampletime
                                        * Referenced by: '<S60>/Send1'
                                        */
  real_T Send1_P5_Size[2];             /* Computed Parameter: Send1_P5_Size
                                        * Referenced by: '<S60>/Send1'
                                        */
  real_T Send1_P5;                     /* Expression: vblLen
                                        * Referenced by: '<S60>/Send1'
                                        */
  real_T enable_plate1_Value;          /* Expression: 0
                                        * Referenced by: '<S32>/enable_plate1'
                                        */
  real_T enable_plate2_Value;          /* Expression: 0
                                        * Referenced by: '<S32>/enable_plate2'
                                        */
  real_T gain_Value;                   /* Expression: 256
                                        * Referenced by: '<S32>/gain'
                                        */
  real_T calibration_matrix1_Value[48];/* Expression: zeros(6,8)
                                        * Referenced by: '<S32>/calibration_matrix1'
                                        */
  real_T ain_slope1_Value;             /* Expression: -1
                                        * Referenced by: '<S32>/ain_slope1'
                                        */
  real_T ain_offset1_Value;            /* Expression: -1
                                        * Referenced by: '<S32>/ain_offset1'
                                        */
  real_T orientation1_Value;           /* Expression: 0
                                        * Referenced by: '<S32>/orientation1'
                                        */
  real_T zero_voltage_Value;           /* Expression: 0
                                        * Referenced by: '<S32>/zero_voltage'
                                        */
  real_T calibration_matrix2_Value[48];/* Expression: zeros(6,8)
                                        * Referenced by: '<S32>/calibration_matrix2'
                                        */
  real_T ain_slope2_Value;             /* Expression: -1
                                        * Referenced by: '<S32>/ain_slope2'
                                        */
  real_T ain_offset2_Value;            /* Expression: -1
                                        * Referenced by: '<S32>/ain_offset2'
                                        */
  real_T orientation2_Value;           /* Expression: 0
                                        * Referenced by: '<S32>/orientation2'
                                        */
  real_T BKINPDOReceiveElmoDrive_P1_Size[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P1_Size
                                             * Referenced by: '<S98>/BKIN PDO Receive ElmoDrive'
                                             */
  real_T BKINPDOReceiveElmoDrive_P1[39];/* Computed Parameter: BKINPDOReceiveElmoDrive_P1
                                         * Referenced by: '<S98>/BKIN PDO Receive ElmoDrive'
                                         */
  real_T BKINPDOReceiveElmoDrive_P2_Size[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P2_Size
                                             * Referenced by: '<S98>/BKIN PDO Receive ElmoDrive'
                                             */
  real_T BKINPDOReceiveElmoDrive_P2;   /* Expression: sig_offset
                                        * Referenced by: '<S98>/BKIN PDO Receive ElmoDrive'
                                        */
  real_T BKINPDOReceiveElmoDrive_P3_Size[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P3_Size
                                             * Referenced by: '<S98>/BKIN PDO Receive ElmoDrive'
                                             */
  real_T BKINPDOReceiveElmoDrive_P3;   /* Expression: sig_type
                                        * Referenced by: '<S98>/BKIN PDO Receive ElmoDrive'
                                        */
  real_T BKINPDOReceiveElmoDrive_P4_Size[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P4_Size
                                             * Referenced by: '<S98>/BKIN PDO Receive ElmoDrive'
                                             */
  real_T BKINPDOReceiveElmoDrive_P4;   /* Expression: type_size
                                        * Referenced by: '<S98>/BKIN PDO Receive ElmoDrive'
                                        */
  real_T BKINPDOReceiveElmoDrive_P5_Size[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P5_Size
                                             * Referenced by: '<S98>/BKIN PDO Receive ElmoDrive'
                                             */
  real_T BKINPDOReceiveElmoDrive_P5;   /* Expression: sig_dim
                                        * Referenced by: '<S98>/BKIN PDO Receive ElmoDrive'
                                        */
  real_T BKINPDOReceiveElmoDrive_P6_Size[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P6_Size
                                             * Referenced by: '<S98>/BKIN PDO Receive ElmoDrive'
                                             */
  real_T BKINPDOReceiveElmoDrive_P6;   /* Expression: device_id
                                        * Referenced by: '<S98>/BKIN PDO Receive ElmoDrive'
                                        */
  real_T BKINPDOReceiveElmoDrive_P7_Size[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P7_Size
                                             * Referenced by: '<S98>/BKIN PDO Receive ElmoDrive'
                                             */
  real_T BKINPDOReceiveElmoDrive_P7;   /* Expression: sample_time
                                        * Referenced by: '<S98>/BKIN PDO Receive ElmoDrive'
                                        */
  real_T driveID_Value;                /* Expression: 1
                                        * Referenced by: '<S101>/driveID'
                                        */
  real_T Memory_X0;                    /* Expression: 0
                                        * Referenced by: '<S107>/Memory'
                                        */
  real_T BKINPDOReceiveElmoDrive_P1_Size_i[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P1_Size_i
                                               * Referenced by: '<S111>/BKIN PDO Receive ElmoDrive'
                                               */
  real_T BKINPDOReceiveElmoDrive_P1_o[39];/* Computed Parameter: BKINPDOReceiveElmoDrive_P1_o
                                           * Referenced by: '<S111>/BKIN PDO Receive ElmoDrive'
                                           */
  real_T BKINPDOReceiveElmoDrive_P2_Size_d[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P2_Size_d
                                               * Referenced by: '<S111>/BKIN PDO Receive ElmoDrive'
                                               */
  real_T BKINPDOReceiveElmoDrive_P2_f; /* Expression: sig_offset
                                        * Referenced by: '<S111>/BKIN PDO Receive ElmoDrive'
                                        */
  real_T BKINPDOReceiveElmoDrive_P3_Size_g[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P3_Size_g
                                               * Referenced by: '<S111>/BKIN PDO Receive ElmoDrive'
                                               */
  real_T BKINPDOReceiveElmoDrive_P3_n; /* Expression: sig_type
                                        * Referenced by: '<S111>/BKIN PDO Receive ElmoDrive'
                                        */
  real_T BKINPDOReceiveElmoDrive_P4_Size_p[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P4_Size_p
                                               * Referenced by: '<S111>/BKIN PDO Receive ElmoDrive'
                                               */
  real_T BKINPDOReceiveElmoDrive_P4_d; /* Expression: type_size
                                        * Referenced by: '<S111>/BKIN PDO Receive ElmoDrive'
                                        */
  real_T BKINPDOReceiveElmoDrive_P5_Size_n[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P5_Size_n
                                               * Referenced by: '<S111>/BKIN PDO Receive ElmoDrive'
                                               */
  real_T BKINPDOReceiveElmoDrive_P5_b; /* Expression: sig_dim
                                        * Referenced by: '<S111>/BKIN PDO Receive ElmoDrive'
                                        */
  real_T BKINPDOReceiveElmoDrive_P6_Size_o[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P6_Size_o
                                               * Referenced by: '<S111>/BKIN PDO Receive ElmoDrive'
                                               */
  real_T BKINPDOReceiveElmoDrive_P6_m; /* Expression: device_id
                                        * Referenced by: '<S111>/BKIN PDO Receive ElmoDrive'
                                        */
  real_T BKINPDOReceiveElmoDrive_P7_Size_o[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P7_Size_o
                                               * Referenced by: '<S111>/BKIN PDO Receive ElmoDrive'
                                               */
  real_T BKINPDOReceiveElmoDrive_P7_d; /* Expression: sample_time
                                        * Referenced by: '<S111>/BKIN PDO Receive ElmoDrive'
                                        */
  real_T driveID_Value_c;              /* Expression: 2
                                        * Referenced by: '<S114>/driveID'
                                        */
  real_T Memory_X0_a;                  /* Expression: 0
                                        * Referenced by: '<S120>/Memory'
                                        */
  real_T readAddr_Value[3];            /* Expression: [0, 0, 0]
                                        * Referenced by: '<S90>/readAddr'
                                        */
  real_T Memory_X0_j;                  /* Expression: 0
                                        * Referenced by: '<S90>/Memory'
                                        */
  real_T writeData_Value[5];           /* Expression: [0, 0, 0, 0, 0]
                                        * Referenced by: '<S91>/writeData'
                                        */
  real_T BKINEtherCATPDOTransmit_P1_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P1_Size
                                             * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit '
                                             */
  real_T BKINEtherCATPDOTransmit_P1[48];/* Computed Parameter: BKINEtherCATPDOTransmit_P1
                                         * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit '
                                         */
  real_T BKINEtherCATPDOTransmit_P2_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P2_Size
                                             * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit '
                                             */
  real_T BKINEtherCATPDOTransmit_P2;   /* Expression: sig_offset
                                        * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P3_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P3_Size
                                             * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit '
                                             */
  real_T BKINEtherCATPDOTransmit_P3;   /* Expression: sig_type
                                        * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P4_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P4_Size
                                             * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit '
                                             */
  real_T BKINEtherCATPDOTransmit_P4;   /* Expression: type_size
                                        * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P5_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P5_Size
                                             * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit '
                                             */
  real_T BKINEtherCATPDOTransmit_P5;   /* Expression: sig_dim
                                        * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P6_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P6_Size
                                             * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit '
                                             */
  real_T BKINEtherCATPDOTransmit_P6;   /* Expression: device_id
                                        * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P7_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P7_Size
                                             * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit '
                                             */
  real_T BKINEtherCATPDOTransmit_P7;   /* Expression: sample_time
                                        * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit1_P1_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P1_Size
                                              * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit 1'
                                              */
  real_T BKINEtherCATPDOTransmit1_P1[48];/* Computed Parameter: BKINEtherCATPDOTransmit1_P1
                                          * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit 1'
                                          */
  real_T BKINEtherCATPDOTransmit1_P2_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P2_Size
                                              * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit 1'
                                              */
  real_T BKINEtherCATPDOTransmit1_P2;  /* Expression: sig_offset
                                        * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T BKINEtherCATPDOTransmit1_P3_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P3_Size
                                              * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit 1'
                                              */
  real_T BKINEtherCATPDOTransmit1_P3;  /* Expression: sig_type
                                        * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T BKINEtherCATPDOTransmit1_P4_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P4_Size
                                              * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit 1'
                                              */
  real_T BKINEtherCATPDOTransmit1_P4;  /* Expression: type_size
                                        * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T BKINEtherCATPDOTransmit1_P5_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P5_Size
                                              * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit 1'
                                              */
  real_T BKINEtherCATPDOTransmit1_P5;  /* Expression: sig_dim
                                        * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T BKINEtherCATPDOTransmit1_P6_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P6_Size
                                              * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit 1'
                                              */
  real_T BKINEtherCATPDOTransmit1_P6;  /* Expression: device_id
                                        * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T BKINEtherCATPDOTransmit1_P7_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P7_Size
                                              * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit 1'
                                              */
  real_T BKINEtherCATPDOTransmit1_P7;  /* Expression: sample_time
                                        * Referenced by: '<S74>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T enableMotors_Value;           /* Expression: 1
                                        * Referenced by: '<S74>/enableMotors'
                                        */
  real_T Memory_X0_f;                  /* Expression: 0
                                        * Referenced by: '<S84>/Memory'
                                        */
  real_T Memory_X0_jg;                 /* Expression: 0
                                        * Referenced by: '<S85>/Memory'
                                        */
  real_T BKINEtherCATPDOTransmit_P1_Size_f[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P1_Size_f
                                               * Referenced by: '<S84>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P1_d[41];/* Computed Parameter: BKINEtherCATPDOTransmit_P1_d
                                           * Referenced by: '<S84>/BKIN EtherCAT PDO Transmit '
                                           */
  real_T BKINEtherCATPDOTransmit_P2_Size_e[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P2_Size_e
                                               * Referenced by: '<S84>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P2_c; /* Expression: sig_offset
                                        * Referenced by: '<S84>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P3_Size_i[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P3_Size_i
                                               * Referenced by: '<S84>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P3_g; /* Expression: sig_type
                                        * Referenced by: '<S84>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P4_Size_l[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P4_Size_l
                                               * Referenced by: '<S84>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P4_n; /* Expression: type_size
                                        * Referenced by: '<S84>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P5_Size_i[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P5_Size_i
                                               * Referenced by: '<S84>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P5_e; /* Expression: sig_dim
                                        * Referenced by: '<S84>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P6_Size_i[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P6_Size_i
                                               * Referenced by: '<S84>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P6_n; /* Expression: device_id
                                        * Referenced by: '<S84>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P7_Size_g[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P7_Size_g
                                               * Referenced by: '<S84>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P7_b; /* Expression: sample_time
                                        * Referenced by: '<S84>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T MotorIdx_Value;               /* Expression: 1
                                        * Referenced by: '<S84>/MotorIdx'
                                        */
  real_T Memory1_X0;                   /* Expression: 0
                                        * Referenced by: '<S93>/Memory1'
                                        */
  real_T Memory2_X0_k;                 /* Expression: 0
                                        * Referenced by: '<S93>/Memory2'
                                        */
  real_T Memory2_X0_i;                 /* Expression: 0
                                        * Referenced by: '<S74>/Memory2'
                                        */
  real_T Memory3_X0;                   /* Expression: 0
                                        * Referenced by: '<S74>/Memory3'
                                        */
  real_T BKINEtherCATPDOTransmit_P1_Size_o[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P1_Size_o
                                               * Referenced by: '<S85>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P1_i[41];/* Computed Parameter: BKINEtherCATPDOTransmit_P1_i
                                           * Referenced by: '<S85>/BKIN EtherCAT PDO Transmit '
                                           */
  real_T BKINEtherCATPDOTransmit_P2_Size_g[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P2_Size_g
                                               * Referenced by: '<S85>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P2_n; /* Expression: sig_offset
                                        * Referenced by: '<S85>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P3_Size_n[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P3_Size_n
                                               * Referenced by: '<S85>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P3_l; /* Expression: sig_type
                                        * Referenced by: '<S85>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P4_Size_k[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P4_Size_k
                                               * Referenced by: '<S85>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P4_m; /* Expression: type_size
                                        * Referenced by: '<S85>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P5_Size_n[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P5_Size_n
                                               * Referenced by: '<S85>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P5_d; /* Expression: sig_dim
                                        * Referenced by: '<S85>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P6_Size_j[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P6_Size_j
                                               * Referenced by: '<S85>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P6_o; /* Expression: device_id
                                        * Referenced by: '<S85>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P7_Size_i[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P7_Size_i
                                               * Referenced by: '<S85>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P7_l; /* Expression: sample_time
                                        * Referenced by: '<S85>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T MotorIdx_Value_n;             /* Expression: 2
                                        * Referenced by: '<S85>/MotorIdx'
                                        */
  real_T enableCalibration_Value;      /* Expression: 0
                                        * Referenced by: '<S74>/enableCalibration'
                                        */
  real_T BKINPDOReceiveElmoDrive_P1_Size_g[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P1_Size_g
                                               * Referenced by: '<S150>/BKIN PDO Receive ElmoDrive'
                                               */
  real_T BKINPDOReceiveElmoDrive_P1_l[39];/* Computed Parameter: BKINPDOReceiveElmoDrive_P1_l
                                           * Referenced by: '<S150>/BKIN PDO Receive ElmoDrive'
                                           */
  real_T BKINPDOReceiveElmoDrive_P2_Size_p[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P2_Size_p
                                               * Referenced by: '<S150>/BKIN PDO Receive ElmoDrive'
                                               */
  real_T BKINPDOReceiveElmoDrive_P2_c; /* Expression: sig_offset
                                        * Referenced by: '<S150>/BKIN PDO Receive ElmoDrive'
                                        */
  real_T BKINPDOReceiveElmoDrive_P3_Size_c[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P3_Size_c
                                               * Referenced by: '<S150>/BKIN PDO Receive ElmoDrive'
                                               */
  real_T BKINPDOReceiveElmoDrive_P3_i; /* Expression: sig_type
                                        * Referenced by: '<S150>/BKIN PDO Receive ElmoDrive'
                                        */
  real_T BKINPDOReceiveElmoDrive_P4_Size_n[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P4_Size_n
                                               * Referenced by: '<S150>/BKIN PDO Receive ElmoDrive'
                                               */
  real_T BKINPDOReceiveElmoDrive_P4_m; /* Expression: type_size
                                        * Referenced by: '<S150>/BKIN PDO Receive ElmoDrive'
                                        */
  real_T BKINPDOReceiveElmoDrive_P5_Size_d[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P5_Size_d
                                               * Referenced by: '<S150>/BKIN PDO Receive ElmoDrive'
                                               */
  real_T BKINPDOReceiveElmoDrive_P5_g; /* Expression: sig_dim
                                        * Referenced by: '<S150>/BKIN PDO Receive ElmoDrive'
                                        */
  real_T BKINPDOReceiveElmoDrive_P6_Size_g[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P6_Size_g
                                               * Referenced by: '<S150>/BKIN PDO Receive ElmoDrive'
                                               */
  real_T BKINPDOReceiveElmoDrive_P6_e; /* Expression: device_id
                                        * Referenced by: '<S150>/BKIN PDO Receive ElmoDrive'
                                        */
  real_T BKINPDOReceiveElmoDrive_P7_Size_n[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P7_Size_n
                                               * Referenced by: '<S150>/BKIN PDO Receive ElmoDrive'
                                               */
  real_T BKINPDOReceiveElmoDrive_P7_n; /* Expression: sample_time
                                        * Referenced by: '<S150>/BKIN PDO Receive ElmoDrive'
                                        */
  real_T driveID_Value_i;              /* Expression: 3
                                        * Referenced by: '<S153>/driveID'
                                        */
  real_T Memory_X0_n;                  /* Expression: 0
                                        * Referenced by: '<S159>/Memory'
                                        */
  real_T BKINPDOReceiveElmoDrive_P1_Size_e[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P1_Size_e
                                               * Referenced by: '<S163>/BKIN PDO Receive ElmoDrive'
                                               */
  real_T BKINPDOReceiveElmoDrive_P1_h[39];/* Computed Parameter: BKINPDOReceiveElmoDrive_P1_h
                                           * Referenced by: '<S163>/BKIN PDO Receive ElmoDrive'
                                           */
  real_T BKINPDOReceiveElmoDrive_P2_Size_m[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P2_Size_m
                                               * Referenced by: '<S163>/BKIN PDO Receive ElmoDrive'
                                               */
  real_T BKINPDOReceiveElmoDrive_P2_h; /* Expression: sig_offset
                                        * Referenced by: '<S163>/BKIN PDO Receive ElmoDrive'
                                        */
  real_T BKINPDOReceiveElmoDrive_P3_Size_k[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P3_Size_k
                                               * Referenced by: '<S163>/BKIN PDO Receive ElmoDrive'
                                               */
  real_T BKINPDOReceiveElmoDrive_P3_k; /* Expression: sig_type
                                        * Referenced by: '<S163>/BKIN PDO Receive ElmoDrive'
                                        */
  real_T BKINPDOReceiveElmoDrive_P4_Size_j[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P4_Size_j
                                               * Referenced by: '<S163>/BKIN PDO Receive ElmoDrive'
                                               */
  real_T BKINPDOReceiveElmoDrive_P4_g; /* Expression: type_size
                                        * Referenced by: '<S163>/BKIN PDO Receive ElmoDrive'
                                        */
  real_T BKINPDOReceiveElmoDrive_P5_Size_o[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P5_Size_o
                                               * Referenced by: '<S163>/BKIN PDO Receive ElmoDrive'
                                               */
  real_T BKINPDOReceiveElmoDrive_P5_n; /* Expression: sig_dim
                                        * Referenced by: '<S163>/BKIN PDO Receive ElmoDrive'
                                        */
  real_T BKINPDOReceiveElmoDrive_P6_Size_n[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P6_Size_n
                                               * Referenced by: '<S163>/BKIN PDO Receive ElmoDrive'
                                               */
  real_T BKINPDOReceiveElmoDrive_P6_n; /* Expression: device_id
                                        * Referenced by: '<S163>/BKIN PDO Receive ElmoDrive'
                                        */
  real_T BKINPDOReceiveElmoDrive_P7_Size_c[2];/* Computed Parameter: BKINPDOReceiveElmoDrive_P7_Size_c
                                               * Referenced by: '<S163>/BKIN PDO Receive ElmoDrive'
                                               */
  real_T BKINPDOReceiveElmoDrive_P7_l; /* Expression: sample_time
                                        * Referenced by: '<S163>/BKIN PDO Receive ElmoDrive'
                                        */
  real_T driveID_Value_p;              /* Expression: 4
                                        * Referenced by: '<S166>/driveID'
                                        */
  real_T Memory_X0_o;                  /* Expression: 0
                                        * Referenced by: '<S172>/Memory'
                                        */
  real_T readAddr_Value_b[3];          /* Expression: [0, 0, 0]
                                        * Referenced by: '<S142>/readAddr'
                                        */
  real_T Memory_X0_i;                  /* Expression: 0
                                        * Referenced by: '<S142>/Memory'
                                        */
  real_T writeData_Value_f[5];         /* Expression: [0, 0, 0, 0, 0]
                                        * Referenced by: '<S143>/writeData'
                                        */
  real_T BKINEtherCATPDOTransmit_P1_Size_f1[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P1_Size_f1
                                                * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit '
                                                */
  real_T BKINEtherCATPDOTransmit_P1_o[48];/* Computed Parameter: BKINEtherCATPDOTransmit_P1_o
                                           * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit '
                                           */
  real_T BKINEtherCATPDOTransmit_P2_Size_o[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P2_Size_o
                                               * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P2_m; /* Expression: sig_offset
                                        * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P3_Size_o[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P3_Size_o
                                               * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P3_n; /* Expression: sig_type
                                        * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P4_Size_a[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P4_Size_a
                                               * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P4_l; /* Expression: type_size
                                        * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P5_Size_e[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P5_Size_e
                                               * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P5_g; /* Expression: sig_dim
                                        * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P6_Size_l[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P6_Size_l
                                               * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P6_d; /* Expression: device_id
                                        * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P7_Size_d[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P7_Size_d
                                               * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P7_o; /* Expression: sample_time
                                        * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit1_P1_Size_l[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P1_Size_l
                                                * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit 1'
                                                */
  real_T BKINEtherCATPDOTransmit1_P1_b[48];/* Computed Parameter: BKINEtherCATPDOTransmit1_P1_b
                                            * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit 1'
                                            */
  real_T BKINEtherCATPDOTransmit1_P2_Size_m[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P2_Size_m
                                                * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit 1'
                                                */
  real_T BKINEtherCATPDOTransmit1_P2_a;/* Expression: sig_offset
                                        * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T BKINEtherCATPDOTransmit1_P3_Size_a[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P3_Size_a
                                                * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit 1'
                                                */
  real_T BKINEtherCATPDOTransmit1_P3_m;/* Expression: sig_type
                                        * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T BKINEtherCATPDOTransmit1_P4_Size_l[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P4_Size_l
                                                * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit 1'
                                                */
  real_T BKINEtherCATPDOTransmit1_P4_e;/* Expression: type_size
                                        * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T BKINEtherCATPDOTransmit1_P5_Size_i[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P5_Size_i
                                                * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit 1'
                                                */
  real_T BKINEtherCATPDOTransmit1_P5_a;/* Expression: sig_dim
                                        * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T BKINEtherCATPDOTransmit1_P6_Size_h[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P6_Size_h
                                                * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit 1'
                                                */
  real_T BKINEtherCATPDOTransmit1_P6_j;/* Expression: device_id
                                        * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T BKINEtherCATPDOTransmit1_P7_Size_i[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P7_Size_i
                                                * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit 1'
                                                */
  real_T BKINEtherCATPDOTransmit1_P7_n;/* Expression: sample_time
                                        * Referenced by: '<S75>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T enableMotors_Value_c;         /* Expression: 1
                                        * Referenced by: '<S75>/enableMotors'
                                        */
  real_T Memory_X0_g;                  /* Expression: 0
                                        * Referenced by: '<S136>/Memory'
                                        */
  real_T Memory_X0_fo;                 /* Expression: 0
                                        * Referenced by: '<S137>/Memory'
                                        */
  real_T BKINEtherCATPDOTransmit_P1_Size_od[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P1_Size_od
                                                * Referenced by: '<S136>/BKIN EtherCAT PDO Transmit '
                                                */
  real_T BKINEtherCATPDOTransmit_P1_k[41];/* Computed Parameter: BKINEtherCATPDOTransmit_P1_k
                                           * Referenced by: '<S136>/BKIN EtherCAT PDO Transmit '
                                           */
  real_T BKINEtherCATPDOTransmit_P2_Size_m[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P2_Size_m
                                               * Referenced by: '<S136>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P2_no;/* Expression: sig_offset
                                        * Referenced by: '<S136>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P3_Size_g[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P3_Size_g
                                               * Referenced by: '<S136>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P3_gf;/* Expression: sig_type
                                        * Referenced by: '<S136>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P4_Size_f[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P4_Size_f
                                               * Referenced by: '<S136>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P4_d; /* Expression: type_size
                                        * Referenced by: '<S136>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P5_Size_f[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P5_Size_f
                                               * Referenced by: '<S136>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P5_eg;/* Expression: sig_dim
                                        * Referenced by: '<S136>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P6_Size_g[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P6_Size_g
                                               * Referenced by: '<S136>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P6_l; /* Expression: device_id
                                        * Referenced by: '<S136>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P7_Size_h[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P7_Size_h
                                               * Referenced by: '<S136>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P7_m; /* Expression: sample_time
                                        * Referenced by: '<S136>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T MotorIdx_Value_d;             /* Expression: 1
                                        * Referenced by: '<S136>/MotorIdx'
                                        */
  real_T Memory1_X0_f;                 /* Expression: 0
                                        * Referenced by: '<S145>/Memory1'
                                        */
  real_T Memory2_X0_e;                 /* Expression: 0
                                        * Referenced by: '<S145>/Memory2'
                                        */
  real_T Memory2_X0_o;                 /* Expression: 0
                                        * Referenced by: '<S75>/Memory2'
                                        */
  real_T Memory3_X0_i;                 /* Expression: 0
                                        * Referenced by: '<S75>/Memory3'
                                        */
  real_T BKINEtherCATPDOTransmit_P1_Size_e[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P1_Size_e
                                               * Referenced by: '<S137>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P1_ib[41];/* Computed Parameter: BKINEtherCATPDOTransmit_P1_ib
                                            * Referenced by: '<S137>/BKIN EtherCAT PDO Transmit '
                                            */
  real_T BKINEtherCATPDOTransmit_P2_Size_mb[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P2_Size_mb
                                                * Referenced by: '<S137>/BKIN EtherCAT PDO Transmit '
                                                */
  real_T BKINEtherCATPDOTransmit_P2_g; /* Expression: sig_offset
                                        * Referenced by: '<S137>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P3_Size_h[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P3_Size_h
                                               * Referenced by: '<S137>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P3_e; /* Expression: sig_type
                                        * Referenced by: '<S137>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P4_Size_m[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P4_Size_m
                                               * Referenced by: '<S137>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P4_g; /* Expression: type_size
                                        * Referenced by: '<S137>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P5_Size_iz[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P5_Size_iz
                                                * Referenced by: '<S137>/BKIN EtherCAT PDO Transmit '
                                                */
  real_T BKINEtherCATPDOTransmit_P5_f; /* Expression: sig_dim
                                        * Referenced by: '<S137>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P6_Size_c[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P6_Size_c
                                               * Referenced by: '<S137>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P6_di;/* Expression: device_id
                                        * Referenced by: '<S137>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P7_Size_j[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P7_Size_j
                                               * Referenced by: '<S137>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P7_c; /* Expression: sample_time
                                        * Referenced by: '<S137>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T MotorIdx_Value_n1;            /* Expression: 2
                                        * Referenced by: '<S137>/MotorIdx'
                                        */
  real_T enableCalibration_Value_h;    /* Expression: 0
                                        * Referenced by: '<S75>/enableCalibration'
                                        */
  real_T Constant_Value_o[7];          /* Expression: zeros(1, 7);
                                        * Referenced by: '<S201>/Constant'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S205>/Switch'
                                        */
  real_T Send_P1_Size_b4[2];           /* Computed Parameter: Send_P1_Size_b4
                                        * Referenced by: '<S205>/Send'
                                        */
  real_T Send_P1_c[12];                /* Computed Parameter: Send_P1_c
                                        * Referenced by: '<S205>/Send'
                                        */
  real_T Send_P2_Size_b[2];            /* Computed Parameter: Send_P2_Size_b
                                        * Referenced by: '<S205>/Send'
                                        */
  real_T Send_P2_o;                    /* Expression: ipPort
                                        * Referenced by: '<S205>/Send'
                                        */
  real_T Send_P3_Size_d[2];            /* Computed Parameter: Send_P3_Size_d
                                        * Referenced by: '<S205>/Send'
                                        */
  real_T Send_P3_d;                    /* Expression: localPort
                                        * Referenced by: '<S205>/Send'
                                        */
  real_T Send_P4_Size_lq[2];           /* Computed Parameter: Send_P4_Size_lq
                                        * Referenced by: '<S205>/Send'
                                        */
  real_T Send_P4_o;                    /* Expression: sampletime
                                        * Referenced by: '<S205>/Send'
                                        */
  real_T Send_P5_Size_j[2];            /* Computed Parameter: Send_P5_Size_j
                                        * Referenced by: '<S205>/Send'
                                        */
  real_T Send_P5_m;                    /* Expression: vblLen
                                        * Referenced by: '<S205>/Send'
                                        */
  real_T Constant1_Value_a[7];         /* Expression: zeros(1, 7);
                                        * Referenced by: '<S202>/Constant1'
                                        */
  real_T Switch_Threshold_j;           /* Expression: 0
                                        * Referenced by: '<S207>/Switch'
                                        */
  real_T Send_P1_Size_c[2];            /* Computed Parameter: Send_P1_Size_c
                                        * Referenced by: '<S207>/Send'
                                        */
  real_T Send_P1_i[12];                /* Computed Parameter: Send_P1_i
                                        * Referenced by: '<S207>/Send'
                                        */
  real_T Send_P2_Size_m[2];            /* Computed Parameter: Send_P2_Size_m
                                        * Referenced by: '<S207>/Send'
                                        */
  real_T Send_P2_m;                    /* Expression: ipPort
                                        * Referenced by: '<S207>/Send'
                                        */
  real_T Send_P3_Size_p[2];            /* Computed Parameter: Send_P3_Size_p
                                        * Referenced by: '<S207>/Send'
                                        */
  real_T Send_P3_a;                    /* Expression: localPort
                                        * Referenced by: '<S207>/Send'
                                        */
  real_T Send_P4_Size_hn[2];           /* Computed Parameter: Send_P4_Size_hn
                                        * Referenced by: '<S207>/Send'
                                        */
  real_T Send_P4_b;                    /* Expression: sampletime
                                        * Referenced by: '<S207>/Send'
                                        */
  real_T Send_P5_Size_f[2];            /* Computed Parameter: Send_P5_Size_f
                                        * Referenced by: '<S207>/Send'
                                        */
  real_T Send_P5_o;                    /* Expression: vblLen
                                        * Referenced by: '<S207>/Send'
                                        */
  real_T ReceivefromRobot1ForceSensor_P1_Size[2];/* Computed Parameter: ReceivefromRobot1ForceSensor_P1_Size
                                                  * Referenced by: '<S201>/Receive from Robot 1 Force Sensor'
                                                  */
  real_T ReceivefromRobot1ForceSensor_P1[12];/* Computed Parameter: ReceivefromRobot1ForceSensor_P1
                                              * Referenced by: '<S201>/Receive from Robot 1 Force Sensor'
                                              */
  real_T ReceivefromRobot1ForceSensor_P2_Size[2];/* Computed Parameter: ReceivefromRobot1ForceSensor_P2_Size
                                                  * Referenced by: '<S201>/Receive from Robot 1 Force Sensor'
                                                  */
  real_T ReceivefromRobot1ForceSensor_P2;/* Expression: ipPort
                                          * Referenced by: '<S201>/Receive from Robot 1 Force Sensor'
                                          */
  real_T ReceivefromRobot1ForceSensor_P3_Size[2];/* Computed Parameter: ReceivefromRobot1ForceSensor_P3_Size
                                                  * Referenced by: '<S201>/Receive from Robot 1 Force Sensor'
                                                  */
  real_T ReceivefromRobot1ForceSensor_P3;/* Expression: width
                                          * Referenced by: '<S201>/Receive from Robot 1 Force Sensor'
                                          */
  real_T ReceivefromRobot1ForceSensor_P4_Size[2];/* Computed Parameter: ReceivefromRobot1ForceSensor_P4_Size
                                                  * Referenced by: '<S201>/Receive from Robot 1 Force Sensor'
                                                  */
  real_T ReceivefromRobot1ForceSensor_P4;/* Expression: sampletime
                                          * Referenced by: '<S201>/Receive from Robot 1 Force Sensor'
                                          */
  real_T ReceivefromRobot1ForceSensor_P5_Size[2];/* Computed Parameter: ReceivefromRobot1ForceSensor_P5_Size
                                                  * Referenced by: '<S201>/Receive from Robot 1 Force Sensor'
                                                  */
  real_T ReceivefromRobot1ForceSensor_P5;/* Expression: vblLen
                                          * Referenced by: '<S201>/Receive from Robot 1 Force Sensor'
                                          */
  real_T Switch_Threshold_m;           /* Expression: 0
                                        * Referenced by: '<S201>/Switch'
                                        */
  real_T ReceivefromRobot2ForceSensor_P1_Size[2];/* Computed Parameter: ReceivefromRobot2ForceSensor_P1_Size
                                                  * Referenced by: '<S202>/Receive from Robot 2 Force Sensor'
                                                  */
  real_T ReceivefromRobot2ForceSensor_P1[12];/* Computed Parameter: ReceivefromRobot2ForceSensor_P1
                                              * Referenced by: '<S202>/Receive from Robot 2 Force Sensor'
                                              */
  real_T ReceivefromRobot2ForceSensor_P2_Size[2];/* Computed Parameter: ReceivefromRobot2ForceSensor_P2_Size
                                                  * Referenced by: '<S202>/Receive from Robot 2 Force Sensor'
                                                  */
  real_T ReceivefromRobot2ForceSensor_P2;/* Expression: ipPort
                                          * Referenced by: '<S202>/Receive from Robot 2 Force Sensor'
                                          */
  real_T ReceivefromRobot2ForceSensor_P3_Size[2];/* Computed Parameter: ReceivefromRobot2ForceSensor_P3_Size
                                                  * Referenced by: '<S202>/Receive from Robot 2 Force Sensor'
                                                  */
  real_T ReceivefromRobot2ForceSensor_P3;/* Expression: width
                                          * Referenced by: '<S202>/Receive from Robot 2 Force Sensor'
                                          */
  real_T ReceivefromRobot2ForceSensor_P4_Size[2];/* Computed Parameter: ReceivefromRobot2ForceSensor_P4_Size
                                                  * Referenced by: '<S202>/Receive from Robot 2 Force Sensor'
                                                  */
  real_T ReceivefromRobot2ForceSensor_P4;/* Expression: sampletime
                                          * Referenced by: '<S202>/Receive from Robot 2 Force Sensor'
                                          */
  real_T ReceivefromRobot2ForceSensor_P5_Size[2];/* Computed Parameter: ReceivefromRobot2ForceSensor_P5_Size
                                                  * Referenced by: '<S202>/Receive from Robot 2 Force Sensor'
                                                  */
  real_T ReceivefromRobot2ForceSensor_P5;/* Expression: vblLen
                                          * Referenced by: '<S202>/Receive from Robot 2 Force Sensor'
                                          */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S202>/Switch1'
                                        */
  real_T stepduration_Value;           /* Expression: BKIN_STEP_TIME
                                        * Referenced by: '<S209>/step duration'
                                        */
  real_T DPRAMWatchDogoffset_Value;    /* Expression: 627
                                        * Referenced by: '<S211>/DPRAM WatchDog offset'
                                        */
  real_T DPRAMReadOffset_Value;        /* Expression: 534
                                        * Referenced by: '<S211>/DPRAM Read Offset'
                                        */
  real_T UnitDelay_InitialCondition_p; /* Expression: 0
                                        * Referenced by: '<S211>/Unit Delay'
                                        */
  real_T ReadSwitch_Value;             /* Expression: 0
                                        * Referenced by: '<S211>/Read Switch'
                                        */
  real_T ReadasUInt32_Value;           /* Expression: 0
                                        * Referenced by: '<S211>/Read as UInt32'
                                        */
  real_T DPRAMReadValue_Gain;          /* Expression: 1
                                        * Referenced by: '<S211>/DPRAM Read Value'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S211>/Unit Delay1'
                                        */
  real_T WriteSwitch_Value;            /* Expression: 0
                                        * Referenced by: '<S211>/Write Switch'
                                        */
  real_T DPRAMWriteOffset_Value;       /* Expression: 534
                                        * Referenced by: '<S211>/DPRAM Write Offset'
                                        */
  real_T DPRAMWriteValue_Value;        /* Expression: 1
                                        * Referenced by: '<S211>/DPRAM Write Value'
                                        */
  real_T robot_count_Value;            /* Expression: 1.0
                                        * Referenced by: '<S209>/robot_count'
                                        */
  real_T MATLABFunction_BKIN_STEP_TIME;/* Expression: BKIN_STEP_TIME
                                        * Referenced by: '<S222>/MATLAB Function'
                                        */
  real_T Receive_P1_Size_b[2];         /* Computed Parameter: Receive_P1_Size_b
                                        * Referenced by: '<S222>/Receive'
                                        */
  real_T Receive_P1_m[11];             /* Computed Parameter: Receive_P1_m
                                        * Referenced by: '<S222>/Receive'
                                        */
  real_T Receive_P2_Size_j[2];         /* Computed Parameter: Receive_P2_Size_j
                                        * Referenced by: '<S222>/Receive'
                                        */
  real_T Receive_P2_k;                 /* Expression: ipPort
                                        * Referenced by: '<S222>/Receive'
                                        */
  real_T Receive_P3_Size_k[2];         /* Computed Parameter: Receive_P3_Size_k
                                        * Referenced by: '<S222>/Receive'
                                        */
  real_T Receive_P3_e;                 /* Expression: width
                                        * Referenced by: '<S222>/Receive'
                                        */
  real_T Receive_P4_Size_o[2];         /* Computed Parameter: Receive_P4_Size_o
                                        * Referenced by: '<S222>/Receive'
                                        */
  real_T Receive_P4_h;                 /* Expression: sampletime
                                        * Referenced by: '<S222>/Receive'
                                        */
  real_T Receive_P5_Size_g[2];         /* Computed Parameter: Receive_P5_Size_g
                                        * Referenced by: '<S222>/Receive'
                                        */
  real_T Receive_P5_i;                 /* Expression: vblLen
                                        * Referenced by: '<S222>/Receive'
                                        */
  real_T ArmForceSensors_Value[2];     /* Expression: [0 0]
                                        * Referenced by: '<S231>/Arm Force Sensors'
                                        */
  real_T Constant_Value_l[4];          /* Expression: zeros(4, 1)
                                        * Referenced by: '<S223>/Constant'
                                        */
  real_T Constant_Value_d;             /* Expression: BKIN_STEP_TIME
                                        * Referenced by: '<S83>/Constant'
                                        */
  real_T ndorderbutterworth4Khz10hzcutoff_Value[3];/* Expression: [1.639178228e+04, -0.9780305085, 1.9777864838]
                                                    * Referenced by: '<S193>/2nd order butterworth, 4Khz, 10hz cutoff'
                                                    */
  real_T HandFeedbackStatus_Value;     /* Expression: 3
                                        * Referenced by: '<S237>/Hand Feedback Status'
                                        */
  real_T HandFeedbackSource_Value;     /* Expression: 0
                                        * Referenced by: '<S237>/Hand Feedback Source'
                                        */
  real_T HandFeedbackRadius_Value;     /* Expression: 0.005
                                        * Referenced by: '<S237>/Hand Feedback Radius'
                                        */
  real_T HandFeedbackColour_Value;     /* Expression: 16777215
                                        * Referenced by: '<S237>/Hand Feedback Colour'
                                        */
  real_T HandFeedbackFeedForward_Value;/* Expression: .05
                                        * Referenced by: '<S237>/Hand Feedback Feed Forward'
                                        */
  real_T GazeFeedbackStatus_Value;     /* Expression: 0
                                        * Referenced by: '<S237>/Gaze Feedback Status'
                                        */
  real_T DominantArm_Value;            /* Expression: 1
                                        * Referenced by: '<S69>/Dominant Arm'
                                        */
  real_T steptime_Value;               /* Expression: BKIN_STEP_TIME
                                        * Referenced by: '<S69>/step time'
                                        */
  real_T exopartnums_Value[6];         /* Expression: [13595, 13387, 0, 0, 0, 0]
                                        * Referenced by: '<S63>/exo part nums'
                                        */
  real_T eppartnums_Value[6];          /* Expression: [10212, 10213 ,0, 0,0,0]
                                        * Referenced by: '<S63>/ep part nums'
                                        */
  real_T nhppartnums_Value[6];         /* Expression: [0, 0 ,0,0,0,0]
                                        * Referenced by: '<S63>/nhp part nums'
                                        */
  real_T forceprimaryonly_Value;       /* Expression: 0
                                        * Referenced by: '<S63>/force primary only'
                                        */
  real_T maxerrorstofault_Value;       /* Expression: 40
                                        * Referenced by: '<S63>/max errors to fault'
                                        */
  real_T systemtype_Value;             /* Expression: 1
                                        * Referenced by: '<S33>/system type'
                                        */
  real_T BKINEtherCATPDOTransmit_P1_Size_n[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P1_Size_n
                                               * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P1_h[46];/* Computed Parameter: BKINEtherCATPDOTransmit_P1_h
                                           * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit '
                                           */
  real_T BKINEtherCATPDOTransmit_P2_Size_b[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P2_Size_b
                                               * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P2_i; /* Expression: sig_offset
                                        * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P3_Size_b[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P3_Size_b
                                               * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P3_k; /* Expression: sig_type
                                        * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P4_Size_fk[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P4_Size_fk
                                                * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit '
                                                */
  real_T BKINEtherCATPDOTransmit_P4_dw;/* Expression: type_size
                                        * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P5_Size_g[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P5_Size_g
                                               * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P5_n; /* Expression: sig_dim
                                        * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P6_Size_k[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P6_Size_k
                                               * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit '
                                               */
  real_T BKINEtherCATPDOTransmit_P6_oc;/* Expression: device_id
                                        * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit_P7_Size_gy[2];/* Computed Parameter: BKINEtherCATPDOTransmit_P7_Size_gy
                                                * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit '
                                                */
  real_T BKINEtherCATPDOTransmit_P7_bj;/* Expression: sample_time
                                        * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit '
                                        */
  real_T BKINEtherCATPDOTransmit1_P1_Size_b[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P1_Size_b
                                                * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 1'
                                                */
  real_T BKINEtherCATPDOTransmit1_P1_j[46];/* Computed Parameter: BKINEtherCATPDOTransmit1_P1_j
                                            * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 1'
                                            */
  real_T BKINEtherCATPDOTransmit1_P2_Size_p[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P2_Size_p
                                                * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 1'
                                                */
  real_T BKINEtherCATPDOTransmit1_P2_i;/* Expression: sig_offset
                                        * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T BKINEtherCATPDOTransmit1_P3_Size_g[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P3_Size_g
                                                * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 1'
                                                */
  real_T BKINEtherCATPDOTransmit1_P3_e;/* Expression: sig_type
                                        * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T BKINEtherCATPDOTransmit1_P4_Size_c[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P4_Size_c
                                                * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 1'
                                                */
  real_T BKINEtherCATPDOTransmit1_P4_j;/* Expression: type_size
                                        * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T BKINEtherCATPDOTransmit1_P5_Size_m[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P5_Size_m
                                                * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 1'
                                                */
  real_T BKINEtherCATPDOTransmit1_P5_c;/* Expression: sig_dim
                                        * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T BKINEtherCATPDOTransmit1_P6_Size_p[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P6_Size_p
                                                * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 1'
                                                */
  real_T BKINEtherCATPDOTransmit1_P6_m;/* Expression: device_id
                                        * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T BKINEtherCATPDOTransmit1_P7_Size_f[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P7_Size_f
                                                * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 1'
                                                */
  real_T BKINEtherCATPDOTransmit1_P7_h;/* Expression: sample_time
                                        * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T BKINEtherCATPDOTransmit2_P1_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit2_P1_Size
                                              * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 2'
                                              */
  real_T BKINEtherCATPDOTransmit2_P1[46];/* Computed Parameter: BKINEtherCATPDOTransmit2_P1
                                          * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 2'
                                          */
  real_T BKINEtherCATPDOTransmit2_P2_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit2_P2_Size
                                              * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 2'
                                              */
  real_T BKINEtherCATPDOTransmit2_P2;  /* Expression: sig_offset
                                        * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 2'
                                        */
  real_T BKINEtherCATPDOTransmit2_P3_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit2_P3_Size
                                              * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 2'
                                              */
  real_T BKINEtherCATPDOTransmit2_P3;  /* Expression: sig_type
                                        * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 2'
                                        */
  real_T BKINEtherCATPDOTransmit2_P4_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit2_P4_Size
                                              * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 2'
                                              */
  real_T BKINEtherCATPDOTransmit2_P4;  /* Expression: type_size
                                        * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 2'
                                        */
  real_T BKINEtherCATPDOTransmit2_P5_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit2_P5_Size
                                              * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 2'
                                              */
  real_T BKINEtherCATPDOTransmit2_P5;  /* Expression: sig_dim
                                        * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 2'
                                        */
  real_T BKINEtherCATPDOTransmit2_P6_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit2_P6_Size
                                              * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 2'
                                              */
  real_T BKINEtherCATPDOTransmit2_P6;  /* Expression: device_id
                                        * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 2'
                                        */
  real_T BKINEtherCATPDOTransmit2_P7_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit2_P7_Size
                                              * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 2'
                                              */
  real_T BKINEtherCATPDOTransmit2_P7;  /* Expression: sample_time
                                        * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 2'
                                        */
  real_T BKINEtherCATPDOTransmit3_P1_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit3_P1_Size
                                              * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 3'
                                              */
  real_T BKINEtherCATPDOTransmit3_P1[46];/* Computed Parameter: BKINEtherCATPDOTransmit3_P1
                                          * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 3'
                                          */
  real_T BKINEtherCATPDOTransmit3_P2_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit3_P2_Size
                                              * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 3'
                                              */
  real_T BKINEtherCATPDOTransmit3_P2;  /* Expression: sig_offset
                                        * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 3'
                                        */
  real_T BKINEtherCATPDOTransmit3_P3_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit3_P3_Size
                                              * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 3'
                                              */
  real_T BKINEtherCATPDOTransmit3_P3;  /* Expression: sig_type
                                        * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 3'
                                        */
  real_T BKINEtherCATPDOTransmit3_P4_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit3_P4_Size
                                              * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 3'
                                              */
  real_T BKINEtherCATPDOTransmit3_P4;  /* Expression: type_size
                                        * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 3'
                                        */
  real_T BKINEtherCATPDOTransmit3_P5_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit3_P5_Size
                                              * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 3'
                                              */
  real_T BKINEtherCATPDOTransmit3_P5;  /* Expression: sig_dim
                                        * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 3'
                                        */
  real_T BKINEtherCATPDOTransmit3_P6_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit3_P6_Size
                                              * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 3'
                                              */
  real_T BKINEtherCATPDOTransmit3_P6;  /* Expression: device_id
                                        * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 3'
                                        */
  real_T BKINEtherCATPDOTransmit3_P7_Size[2];/* Computed Parameter: BKINEtherCATPDOTransmit3_P7_Size
                                              * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 3'
                                              */
  real_T BKINEtherCATPDOTransmit3_P7;  /* Expression: sample_time
                                        * Referenced by: '<S78>/BKIN EtherCAT PDO Transmit 3'
                                        */
  real_T ArmOrientation_Value;         /* Expression: 1.0
                                        * Referenced by: '<S229>/Arm Orientation'
                                        */
  real_T ArmMotor1Orientation_Value;   /* Expression: -1.0
                                        * Referenced by: '<S229>/Arm Motor1 Orientation'
                                        */
  real_T ArmMotor2Orientation_Value;   /* Expression: -1.0
                                        * Referenced by: '<S229>/Arm Motor2 Orientation'
                                        */
  real_T ArmMotor1GearRatio_Value;     /* Expression: 4.0
                                        * Referenced by: '<S229>/Arm Motor1 Gear Ratio'
                                        */
  real_T ArmMotor2GearRatio_Value;     /* Expression: 4.0
                                        * Referenced by: '<S229>/Arm Motor2 Gear Ratio'
                                        */
  real_T ArmSecondaryEncoders_Value;   /* Expression: 0.0
                                        * Referenced by: '<S229>/Arm Secondary Encoders'
                                        */
  real_T ArmEncoderOrientation1_Value; /* Expression: 1
                                        * Referenced by: '<S229>/Arm Encoder Orientation 1'
                                        */
  real_T ArmEncoderOrientation2_Value; /* Expression: 1
                                        * Referenced by: '<S229>/Arm Encoder Orientation 2'
                                        */
  real_T Armprimaryencodercounts_Value;/* Expression: 20000
                                        * Referenced by: '<S229>/Arm primary encoder counts'
                                        */
  real_T Armsecondaryencodercounts_Value;/* Expression: 655360
                                          * Referenced by: '<S229>/Arm secondary encoder counts'
                                          */
  real_T ArmOrientation_Value_p;       /* Expression: 1.0
                                        * Referenced by: '<S230>/Arm Orientation'
                                        */
  real_T ArmMotor1Orientation_Value_a; /* Expression: -1.0
                                        * Referenced by: '<S230>/Arm Motor1 Orientation'
                                        */
  real_T ArmMotor2Orientation_Value_a; /* Expression: -1.0
                                        * Referenced by: '<S230>/Arm Motor2 Orientation'
                                        */
  real_T ArmMotor1GearRatio_Value_b;   /* Expression: 4.0
                                        * Referenced by: '<S230>/Arm Motor1 Gear Ratio'
                                        */
  real_T ArmMotor2GearRatio_Value_a;   /* Expression: 4.0
                                        * Referenced by: '<S230>/Arm Motor2 Gear Ratio'
                                        */
  real_T ArmSecondaryEncoders_Value_h; /* Expression: 0.0
                                        * Referenced by: '<S230>/Arm Secondary Encoders'
                                        */
  real_T ArmEncoderOrientation1_Value_f;/* Expression: 1
                                         * Referenced by: '<S230>/Arm Encoder Orientation 1'
                                         */
  real_T ArmEncoderOrientation2_Value_i;/* Expression: 1
                                         * Referenced by: '<S230>/Arm Encoder Orientation 2'
                                         */
  real_T Armprimaryencodercounts_Value_j;/* Expression: 20000
                                          * Referenced by: '<S230>/Arm primary encoder counts'
                                          */
  real_T Armsecondaryencodercounts_Value_i;/* Expression: 655360
                                            * Referenced by: '<S230>/Arm secondary encoder counts'
                                            */
  real_T ArmShoulderAngleOffset_Value; /* Expression: 0.0
                                        * Referenced by: '<S229>/Arm Shoulder Angle Offset'
                                        */
  real_T ArmElbowAngleOffset_Value;    /* Expression: 0.0
                                        * Referenced by: '<S229>/Arm Elbow Angle Offset'
                                        */
  real_T ArmShoulderX_Value;           /* Expression: 0.0
                                        * Referenced by: '<S229>/Arm Shoulder X'
                                        */
  real_T ArmShoulderY_Value;           /* Expression: 0.0
                                        * Referenced by: '<S229>/Arm Shoulder Y'
                                        */
  real_T ArmL1_Value;                  /* Expression: 0.0
                                        * Referenced by: '<S229>/Arm L1'
                                        */
  real_T ArmL2_Value;                  /* Expression: 0.0
                                        * Referenced by: '<S229>/Arm L2'
                                        */
  real_T ArmPointerOffset_Value;       /* Expression: 0.0
                                        * Referenced by: '<S229>/Arm Pointer Offset'
                                        */
  real_T ArmL3Error_Value;             /* Expression: 0.0
                                        * Referenced by: '<S229>/Arm L3 Error'
                                        */
  real_T Armrobottype_Value;           /* Expression: 0.0
                                        * Referenced by: '<S229>/Arm robot type'
                                        */
  real_T ArmTorqueConstant_Value;      /* Expression: 3.3
                                        * Referenced by: '<S229>/Arm Torque Constant'
                                        */
  real_T ArmL5_Value;                  /* Expression: 0.0
                                        * Referenced by: '<S229>/Arm L5'
                                        */
  real_T ArmL2L5Angle_Value;           /* Expression: 0.0
                                        * Referenced by: '<S229>/Arm L2 L5 Angle'
                                        */
  real_T ArmForceSensorAngleOffset_Value;/* Expression: 0.0
                                          * Referenced by: '<S229>/Arm Force Sensor Angle Offset'
                                          */
  real_T Armrobotversion_Value;        /* Expression: 1
                                        * Referenced by: '<S229>/Arm robot version'
                                        */
  real_T ArmShoulderAngleOffset_Value_l;/* Expression: 0.0
                                         * Referenced by: '<S230>/Arm Shoulder Angle Offset'
                                         */
  real_T ArmElbowAngleOffset_Value_n;  /* Expression: 0.0
                                        * Referenced by: '<S230>/Arm Elbow Angle Offset'
                                        */
  real_T ArmShoulderX_Value_j;         /* Expression: 0.0
                                        * Referenced by: '<S230>/Arm Shoulder X'
                                        */
  real_T ArmShoulderY_Value_p;         /* Expression: 0.0
                                        * Referenced by: '<S230>/Arm Shoulder Y'
                                        */
  real_T ArmL1_Value_c;                /* Expression: 0.0
                                        * Referenced by: '<S230>/Arm L1'
                                        */
  real_T ArmL2_Value_i;                /* Expression: 0.0
                                        * Referenced by: '<S230>/Arm L2'
                                        */
  real_T ArmPointerOffset_Value_b;     /* Expression: 0.0
                                        * Referenced by: '<S230>/Arm Pointer Offset'
                                        */
  real_T ArmL3Error_Value_l;           /* Expression: 0.0
                                        * Referenced by: '<S230>/Arm L3 Error'
                                        */
  real_T Armrobottype_Value_m;         /* Expression: 0.0
                                        * Referenced by: '<S230>/Arm robot type'
                                        */
  real_T ArmTorqueConstant_Value_a;    /* Expression: 3.3
                                        * Referenced by: '<S230>/Arm Torque Constant'
                                        */
  real_T ArmL5_Value_m;                /* Expression: 0.0
                                        * Referenced by: '<S230>/Arm L5'
                                        */
  real_T ArmL2L5Angle_Value_g;         /* Expression: 0.0
                                        * Referenced by: '<S230>/Arm L2 L5 Angle'
                                        */
  real_T ArmForceSensorAngleOffset_Value_c;/* Expression: 0.0
                                            * Referenced by: '<S230>/Arm Force Sensor Angle Offset'
                                            */
  real_T Armrobotversion_Value_b;      /* Expression: 1
                                        * Referenced by: '<S230>/Arm robot version'
                                        */
  real_T updateconstants_Value;        /* Expression: 1
                                        * Referenced by: '<S67>/update constants'
                                        */
  real_T ECATErrMsgs_InitialValue[20]; /* Expression: zeros(4, 5)
                                        * Referenced by: '<S33>/ECAT Err Msgs'
                                        */
  real_T ECATTorquefeedback_InitialValue[8];/* Expression: [0, 0, 0, 0, 0, 0, 0, 0]
                                             * Referenced by: '<S33>/ECATTorque feedback'
                                             */
  real_T HWSettings_InitialValue[24];  /* Expression: zeros(24, 1)
                                        * Referenced by: '<S33>/HW Settings'
                                        */
  real_T Kinematics_InitialValue[20];  /* Expression: zeros(20, 1)
                                        * Referenced by: '<S33>/Kinematics'
                                        */
  real_T PrimaryEnc_InitialValue[12];  /* Expression: zeros(12, 1)
                                        * Referenced by: '<S33>/PrimaryEnc'
                                        */
  real_T RobotCalib_InitialValue[16];  /* Expression: zeros(16, 1)
                                        * Referenced by: '<S33>/Robot Calib'
                                        */
  real_T RobotRevision_InitialValue[2];/* Expression: [1, 1]
                                        * Referenced by: '<S33>/RobotRevision'
                                        */
  real_T delays_InitialValue[4];       /* Expression: zeros(4, 1)
                                        * Referenced by: '<S33>/delays'
                                        */
  real_T hasFTsensors_InitialValue[2]; /* Expression: [0, 0]
                                        * Referenced by: '<S33>/has FT sensors'
                                        */
  real_T ELTrackingAvailable_Value;    /* Expression: 1
                                        * Referenced by: '<S34>/EL Tracking Available'
                                        */
  real_T ELCameraAngle_Value[2];       /* Expression: [47, -10]
                                        * Referenced by: '<S34>/EL Camera Angle'
                                        */
  real_T ELCameraPosition_Value[3];    /* Expression: [0.10, 0.35, -0.15]
                                        * Referenced by: '<S34>/EL Camera Position'
                                        */
  real_T ELCameraFocalLength_Value;    /* Expression: 0.017
                                        * Referenced by: '<S34>/EL Camera Focal Length'
                                        */
  real_T Gain_Gain;                    /* Expression: -1
                                        * Referenced by: '<S34>/Gain'
                                        */
  real_T RateTransition_X0;            /* Expression: 0
                                        * Referenced by: '<S34>/Rate Transition'
                                        */
  real_T Receive_P1_Size_o[2];         /* Computed Parameter: Receive_P1_Size_o
                                        * Referenced by: '<S34>/Receive'
                                        */
  real_T Receive_P1_i[7];              /* Computed Parameter: Receive_P1_i
                                        * Referenced by: '<S34>/Receive'
                                        */
  real_T Receive_P2_Size_e[2];         /* Computed Parameter: Receive_P2_Size_e
                                        * Referenced by: '<S34>/Receive'
                                        */
  real_T Receive_P2_i;                 /* Expression: ipPort
                                        * Referenced by: '<S34>/Receive'
                                        */
  real_T Receive_P3_Size_ky[2];        /* Computed Parameter: Receive_P3_Size_ky
                                        * Referenced by: '<S34>/Receive'
                                        */
  real_T Receive_P3_l;                 /* Expression: width
                                        * Referenced by: '<S34>/Receive'
                                        */
  real_T Receive_P4_Size_f[2];         /* Computed Parameter: Receive_P4_Size_f
                                        * Referenced by: '<S34>/Receive'
                                        */
  real_T Receive_P4_g;                 /* Expression: sampletime
                                        * Referenced by: '<S34>/Receive'
                                        */
  real_T Receive_P5_Size_k[2];         /* Computed Parameter: Receive_P5_Size_k
                                        * Referenced by: '<S34>/Receive'
                                        */
  real_T Receive_P5_a;                 /* Expression: vblLen
                                        * Referenced by: '<S34>/Receive'
                                        */
  real_T BKINEtherCATPDOTransmit1_P1_Size_m[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P1_Size_m
                                                * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 1'
                                                */
  real_T BKINEtherCATPDOTransmit1_P1_d[42];/* Computed Parameter: BKINEtherCATPDOTransmit1_P1_d
                                            * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 1'
                                            */
  real_T BKINEtherCATPDOTransmit1_P2_Size_g[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P2_Size_g
                                                * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 1'
                                                */
  real_T BKINEtherCATPDOTransmit1_P2_e;/* Expression: sig_offset
                                        * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T BKINEtherCATPDOTransmit1_P3_Size_e[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P3_Size_e
                                                * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 1'
                                                */
  real_T BKINEtherCATPDOTransmit1_P3_n;/* Expression: sig_type
                                        * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T BKINEtherCATPDOTransmit1_P4_Size_i[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P4_Size_i
                                                * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 1'
                                                */
  real_T BKINEtherCATPDOTransmit1_P4_f;/* Expression: type_size
                                        * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T BKINEtherCATPDOTransmit1_P5_Size_l[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P5_Size_l
                                                * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 1'
                                                */
  real_T BKINEtherCATPDOTransmit1_P5_e;/* Expression: sig_dim
                                        * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T BKINEtherCATPDOTransmit1_P6_Size_d[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P6_Size_d
                                                * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 1'
                                                */
  real_T BKINEtherCATPDOTransmit1_P6_jb;/* Expression: device_id
                                         * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 1'
                                         */
  real_T BKINEtherCATPDOTransmit1_P7_Size_a[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P7_Size_a
                                                * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 1'
                                                */
  real_T BKINEtherCATPDOTransmit1_P7_i;/* Expression: sample_time
                                        * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T BKINEtherCATPDOTransmit2_P1_Size_m[2];/* Computed Parameter: BKINEtherCATPDOTransmit2_P1_Size_m
                                                * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 2'
                                                */
  real_T BKINEtherCATPDOTransmit2_P1_d[42];/* Computed Parameter: BKINEtherCATPDOTransmit2_P1_d
                                            * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 2'
                                            */
  real_T BKINEtherCATPDOTransmit2_P2_Size_m[2];/* Computed Parameter: BKINEtherCATPDOTransmit2_P2_Size_m
                                                * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 2'
                                                */
  real_T BKINEtherCATPDOTransmit2_P2_m;/* Expression: sig_offset
                                        * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 2'
                                        */
  real_T BKINEtherCATPDOTransmit2_P3_Size_e[2];/* Computed Parameter: BKINEtherCATPDOTransmit2_P3_Size_e
                                                * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 2'
                                                */
  real_T BKINEtherCATPDOTransmit2_P3_a;/* Expression: sig_type
                                        * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 2'
                                        */
  real_T BKINEtherCATPDOTransmit2_P4_Size_e[2];/* Computed Parameter: BKINEtherCATPDOTransmit2_P4_Size_e
                                                * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 2'
                                                */
  real_T BKINEtherCATPDOTransmit2_P4_m;/* Expression: type_size
                                        * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 2'
                                        */
  real_T BKINEtherCATPDOTransmit2_P5_Size_o[2];/* Computed Parameter: BKINEtherCATPDOTransmit2_P5_Size_o
                                                * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 2'
                                                */
  real_T BKINEtherCATPDOTransmit2_P5_f;/* Expression: sig_dim
                                        * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 2'
                                        */
  real_T BKINEtherCATPDOTransmit2_P6_Size_g[2];/* Computed Parameter: BKINEtherCATPDOTransmit2_P6_Size_g
                                                * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 2'
                                                */
  real_T BKINEtherCATPDOTransmit2_P6_m;/* Expression: device_id
                                        * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 2'
                                        */
  real_T BKINEtherCATPDOTransmit2_P7_Size_j[2];/* Computed Parameter: BKINEtherCATPDOTransmit2_P7_Size_j
                                                * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 2'
                                                */
  real_T BKINEtherCATPDOTransmit2_P7_f;/* Expression: sample_time
                                        * Referenced by: '<S254>/BKIN EtherCAT PDO Transmit 2'
                                        */
  real_T BKINEtherCATPDOTransmit1_P1_Size_d[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P1_Size_d
                                                * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 1'
                                                */
  real_T BKINEtherCATPDOTransmit1_P1_h[42];/* Computed Parameter: BKINEtherCATPDOTransmit1_P1_h
                                            * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 1'
                                            */
  real_T BKINEtherCATPDOTransmit1_P2_Size_o[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P2_Size_o
                                                * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 1'
                                                */
  real_T BKINEtherCATPDOTransmit1_P2_k;/* Expression: sig_offset
                                        * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T BKINEtherCATPDOTransmit1_P3_Size_f[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P3_Size_f
                                                * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 1'
                                                */
  real_T BKINEtherCATPDOTransmit1_P3_p;/* Expression: sig_type
                                        * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T BKINEtherCATPDOTransmit1_P4_Size_d[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P4_Size_d
                                                * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 1'
                                                */
  real_T BKINEtherCATPDOTransmit1_P4_k;/* Expression: type_size
                                        * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T BKINEtherCATPDOTransmit1_P5_Size_io[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P5_Size_io
                                                 * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 1'
                                                 */
  real_T BKINEtherCATPDOTransmit1_P5_g;/* Expression: sig_dim
                                        * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T BKINEtherCATPDOTransmit1_P6_Size_ht[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P6_Size_ht
                                                 * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 1'
                                                 */
  real_T BKINEtherCATPDOTransmit1_P6_jg;/* Expression: device_id
                                         * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 1'
                                         */
  real_T BKINEtherCATPDOTransmit1_P7_Size_d[2];/* Computed Parameter: BKINEtherCATPDOTransmit1_P7_Size_d
                                                * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 1'
                                                */
  real_T BKINEtherCATPDOTransmit1_P7_m;/* Expression: sample_time
                                        * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 1'
                                        */
  real_T BKINEtherCATPDOTransmit2_P1_Size_f[2];/* Computed Parameter: BKINEtherCATPDOTransmit2_P1_Size_f
                                                * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 2'
                                                */
  real_T BKINEtherCATPDOTransmit2_P1_p[42];/* Computed Parameter: BKINEtherCATPDOTransmit2_P1_p
                                            * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 2'
                                            */
  real_T BKINEtherCATPDOTransmit2_P2_Size_j[2];/* Computed Parameter: BKINEtherCATPDOTransmit2_P2_Size_j
                                                * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 2'
                                                */
  real_T BKINEtherCATPDOTransmit2_P2_j;/* Expression: sig_offset
                                        * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 2'
                                        */
  real_T BKINEtherCATPDOTransmit2_P3_Size_p[2];/* Computed Parameter: BKINEtherCATPDOTransmit2_P3_Size_p
                                                * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 2'
                                                */
  real_T BKINEtherCATPDOTransmit2_P3_f;/* Expression: sig_type
                                        * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 2'
                                        */
  real_T BKINEtherCATPDOTransmit2_P4_Size_p[2];/* Computed Parameter: BKINEtherCATPDOTransmit2_P4_Size_p
                                                * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 2'
                                                */
  real_T BKINEtherCATPDOTransmit2_P4_j;/* Expression: type_size
                                        * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 2'
                                        */
  real_T BKINEtherCATPDOTransmit2_P5_Size_h[2];/* Computed Parameter: BKINEtherCATPDOTransmit2_P5_Size_h
                                                * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 2'
                                                */
  real_T BKINEtherCATPDOTransmit2_P5_m;/* Expression: sig_dim
                                        * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 2'
                                        */
  real_T BKINEtherCATPDOTransmit2_P6_Size_a[2];/* Computed Parameter: BKINEtherCATPDOTransmit2_P6_Size_a
                                                * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 2'
                                                */
  real_T BKINEtherCATPDOTransmit2_P6_h;/* Expression: device_id
                                        * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 2'
                                        */
  real_T BKINEtherCATPDOTransmit2_P7_Size_o[2];/* Computed Parameter: BKINEtherCATPDOTransmit2_P7_Size_o
                                                * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 2'
                                                */
  real_T BKINEtherCATPDOTransmit2_P7_a;/* Expression: sample_time
                                        * Referenced by: '<S255>/BKIN EtherCAT PDO Transmit 2'
                                        */
  real_T indices_padding_Value[8];     /* Expression: indices_padding
                                        * Referenced by: '<S266>/indices_padding'
                                        */
  real_T Target_Type_Value;            /* Expression: Target_Type
                                        * Referenced by: '<S266>/Target_Type'
                                        */
  real_T Hold_to_1Khz_BKIN_STEP_TIME;  /* Expression: BKIN_STEP_TIME
                                        * Referenced by: '<S267>/Hold_to_1Khz'
                                        */
  real_T Delay1_X0;                    /* Expression: 0
                                        * Referenced by: '<S268>/Delay1'
                                        */
  real_T Constant_Value_o1;            /* Expression: 1
                                        * Referenced by: '<S268>/Constant'
                                        */
  real_T TaskClock_Amp_m;              /* Expression: 1
                                        * Referenced by: '<S268>/Task Clock'
                                        */
  real_T TaskClock_Period_n;           /* Computed Parameter: TaskClock_Period_n
                                        * Referenced by: '<S268>/Task Clock'
                                        */
  real_T TaskClock_Duty_e;             /* Computed Parameter: TaskClock_Duty_e
                                        * Referenced by: '<S268>/Task Clock'
                                        */
  real_T TaskClock_PhaseDelay_b;       /* Expression: 0
                                        * Referenced by: '<S268>/Task Clock'
                                        */
  real_T TorqueLimit2_Value;           /* Expression: -1
                                        * Referenced by: '<S9>/Torque Limit2'
                                        */
  real_T TorqueLimit5_Value;           /* Expression: -1
                                        * Referenced by: '<S286>/Torque Limit5'
                                        */
  real_T RateTransition1_X0;           /* Expression: 0
                                        * Referenced by: '<S302>/Rate Transition1'
                                        */
  real_T Constant_Value_m[2];          /* Expression: [0 0]
                                        * Referenced by: '<S312>/Constant'
                                        */
  real_T Trial_Control_E_SHOW_INSTRUCT;/* Expression: E_SHOW_INSTRUCT
                                        * Referenced by: '<Root>/Trial_Control'
                                        */
  real_T Switch1_Threshold_n;          /* Expression: .5
                                        * Referenced by: '<S24>/Switch1'
                                        */
  real_T BlockDefinitions_Value[25000];/* Expression: zeros(50, 500);
                                        * Referenced by: '<S5>/Block Definitions'
                                        */
  real_T BlockSequence_Value[2000];    /* Expression: zeros(1000, 2);
                                        * Referenced by: '<S5>/Block Sequence'
                                        */
  real_T Constant_Value_h;             /* Expression: 1
                                        * Referenced by: '<S5>/Constant'
                                        */
  real_T UseRepeatTrialFlag_Value;     /* Expression: 0
                                        * Referenced by: '<S5>/Use Repeat Trial Flag'
                                        */
  real_T RunCommandReceive_P1_Size[2]; /* Computed Parameter: RunCommandReceive_P1_Size
                                        * Referenced by: '<S267>/Run Command Receive'
                                        */
  real_T RunCommandReceive_P1[7];      /* Computed Parameter: RunCommandReceive_P1
                                        * Referenced by: '<S267>/Run Command Receive'
                                        */
  real_T RunCommandReceive_P2_Size[2]; /* Computed Parameter: RunCommandReceive_P2_Size
                                        * Referenced by: '<S267>/Run Command Receive'
                                        */
  real_T RunCommandReceive_P2;         /* Expression: ipPort
                                        * Referenced by: '<S267>/Run Command Receive'
                                        */
  real_T RunCommandReceive_P3_Size[2]; /* Computed Parameter: RunCommandReceive_P3_Size
                                        * Referenced by: '<S267>/Run Command Receive'
                                        */
  real_T RunCommandReceive_P3;         /* Expression: width
                                        * Referenced by: '<S267>/Run Command Receive'
                                        */
  real_T RunCommandReceive_P4_Size[2]; /* Computed Parameter: RunCommandReceive_P4_Size
                                        * Referenced by: '<S267>/Run Command Receive'
                                        */
  real_T RunCommandReceive_P4;         /* Expression: sampletime
                                        * Referenced by: '<S267>/Run Command Receive'
                                        */
  real_T RunCommandReceive_P5_Size[2]; /* Computed Parameter: RunCommandReceive_P5_Size
                                        * Referenced by: '<S267>/Run Command Receive'
                                        */
  real_T RunCommandReceive_P5;         /* Expression: vblLen
                                        * Referenced by: '<S267>/Run Command Receive'
                                        */
  real_T PauseType_Value;              /* Expression: 0
                                        * Referenced by: '<S5>/Pause Type'
                                        */
  real_T Seed_Value;                   /* Expression: 0
                                        * Referenced by: '<S5>/Seed'
                                        */
  real_T UseTaskProtocolBlockSequenceFlag_Value;/* Expression: 1
                                                 * Referenced by: '<S5>/Use Task Protocol Block Sequence Flag'
                                                 */
  real_T NextBlock_Value;              /* Expression: 0
                                        * Referenced by: '<S5>/Next Block'
                                        */
  real_T RunTaskClockFlag_Value;       /* Expression: 1
                                        * Referenced by: '<S5>/Run Task Clock Flag'
                                        */
  real_T Repeat_Trial_Flag_Value;      /* Expression: 0
                                        * Referenced by: '<S5>/Repeat_Trial_Flag'
                                        */
  real_T TPTable_Value[5000];          /* Expression: zeros(tp_table_rows, 50);
                                        * Referenced by: '<S5>/TP Table'
                                        */
  real_T TargetLabels_Value[5000];     /* Expression: zeros(100, 50);
                                        * Referenced by: '<S5>/Target Labels'
                                        */
  real_T DisplaySizepels_Value[2];     /* Expression: [0, 0]
                                        * Referenced by: '<S5>/Display Size (pels)'
                                        */
  real_T DockingPoints_Value[10];      /* Expression: zeros(5, 2);
                                        * Referenced by: '<S5>/Docking Points'
                                        */
  real_T ELCameraFocalLength_Value_b;  /* Expression: 0
                                        * Referenced by: '<S5>/EL Camera Focal Length'
                                        */
  real_T ELCameraPosition_Value_k[3];  /* Expression: [0, 0, 0]
                                        * Referenced by: '<S5>/EL Camera Position'
                                        */
  real_T ELCameraAngle_Value_h[2];     /* Expression: [0, 0]
                                        * Referenced by: '<S5>/EL Camera Angle'
                                        */
  real_T ELTrackingAvailable_Value_a;  /* Expression: 0
                                        * Referenced by: '<S5>/EL Tracking Available'
                                        */
  real_T SubjectHeight_Value;          /* Expression: 0
                                        * Referenced by: '<S5>/Subject Height'
                                        */
  real_T SubjectWeight_Value;          /* Expression: 0
                                        * Referenced by: '<S5>/Subject Weight'
                                        */
  real_T DisplaySizem_Value[2];        /* Expression: [0.0, 0.0]
                                        * Referenced by: '<S5>/Display Size (m)'
                                        */
  real_T TargetTable_Value[800];       /* Expression: zeros(target_table_rows, 25);
                                        * Referenced by: '<S5>/Target Table'
                                        */
  real_T LoadTable_Value[400];         /* Expression: zeros(load_table_rows, 20);
                                        * Referenced by: '<S5>/Load Table'
                                        */
  real_T Taskwideparam_Value[50];      /* Expression: zeros(50, 1);
                                        * Referenced by: '<S5>/Task wide param'
                                        */
  real_T frame_of_reference_center_Value[2];/* Expression: [0, 0]
                                             * Referenced by: '<S5>/frame_of_reference_center'
                                             */
  real_T LibraryPatchVersion_Value;    /* Expression: 1
                                        * Referenced by: '<S5>/Library Patch Version'
                                        */
  real_T LibraryVersion_Value;         /* Expression: 3.7
                                        * Referenced by: '<S5>/Library Version'
                                        */
  real_T TaskVersion_Value;            /* Expression: 1
                                        * Referenced by: '<S5>/Task Version'
                                        */
  real_T xPCVersion_Value;             /* Expression: 6.2
                                        * Referenced by: '<S5>/xPC Version'
                                        */
  real_T dlmbuildtime_Value;           /* Expression: 737474.64176759264
                                        * Referenced by: '<S5>/dlm build time'
                                        */
  real_T packet_version_Value;         /* Expression: -1
                                        * Referenced by: '<S29>/packet_version'
                                        */
  real_T Memory_X0_gn;                 /* Expression: 0
                                        * Referenced by: '<Root>/Memory'
                                        */
  real_T Memory_X0_gv;                 /* Expression: 0
                                        * Referenced by: '<S2>/Memory'
                                        */
  real_T ZeroDigOut_Value[4];          /* Expression: [0 0 0 0]
                                        * Referenced by: '<S2>/ZeroDigOut'
                                        */
  real_T Memory_X0_h;                  /* Expression: 0
                                        * Referenced by: '<S13>/Memory'
                                        */
  real_T Gain_Gain_m;                  /* Expression: 0.001
                                        * Referenced by: '<S13>/Gain'
                                        */
  real_T attribcol2_Value;             /* Expression: attribcol2
                                        * Referenced by: '<S10>/attribcol2'
                                        */
  real_T attribcol3_Value;             /* Expression: attribcol3
                                        * Referenced by: '<S10>/attribcol3'
                                        */
  real_T attribcol4_Value;             /* Expression: attribcol4
                                        * Referenced by: '<S10>/attribcol4'
                                        */
  real_T SelectedStates_Value;         /* Expression: [1]
                                        * Referenced by: '<S10>/Selected States'
                                        */
  real_T Memory1_X0_i;                 /* Expression: 0
                                        * Referenced by: '<Root>/Memory1'
                                        */
  real_T xpos_index_Value;             /* Expression: 1
                                        * Referenced by: '<S20>/xpos_index'
                                        */
  real_T ypos_index_Value;             /* Expression: 2
                                        * Referenced by: '<S20>/ypos_index'
                                        */
  real_T state3_indices_Value[4];      /* Expression: attribcol3
                                        * Referenced by: '<S20>/state3_indices'
                                        */
  real_T state4_indices_Value[4];      /* Expression: attribcol4
                                        * Referenced by: '<S20>/state4_indices'
                                        */
  real_T state5_indices_Value[4];      /* Expression: attribcol5
                                        * Referenced by: '<S20>/state5_indices'
                                        */
  real_T padder_Value[35];             /* Expression: stateindices_padding
                                        * Referenced by: '<S20>/padder'
                                        */
  real_T xpos_index_Value_b;           /* Expression: 1
                                        * Referenced by: '<S21>/xpos_index'
                                        */
  real_T ypos_index_Value_j;           /* Expression: 2
                                        * Referenced by: '<S21>/ypos_index'
                                        */
  real_T state4_indices_Value_d[4];    /* Expression: attribcol4
                                        * Referenced by: '<S21>/state4_indices'
                                        */
  real_T state5_indices_Value_c[4];    /* Expression: attribcol5
                                        * Referenced by: '<S21>/state5_indices'
                                        */
  real_T padder_Value_o[35];           /* Expression: stateindices_padding
                                        * Referenced by: '<S21>/padder'
                                        */
  real_T xpos_index_Value_k;           /* Expression: 1
                                        * Referenced by: '<S264>/xpos_index'
                                        */
  real_T ypos_index_Value_ju;          /* Expression: 2
                                        * Referenced by: '<S264>/ypos_index'
                                        */
  real_T state2_indices_Value[9];      /* Expression: attribcol2
                                        * Referenced by: '<S264>/state2_indices'
                                        */
  real_T state3_indices_Value_f[9];    /* Expression: attribcol3
                                        * Referenced by: '<S264>/state3_indices'
                                        */
  real_T state4_indices_Value_c[9];    /* Expression: attribcol4
                                        * Referenced by: '<S264>/state4_indices'
                                        */
  real_T state5_indices_Value_j[9];    /* Expression: attribcol5
                                        * Referenced by: '<S264>/state5_indices'
                                        */
  real_T padder_Value_e[10];           /* Expression: stateindices_padding
                                        * Referenced by: '<S264>/padder'
                                        */
  real_T Switch_Threshold_n;           /* Expression: 1.5
                                        * Referenced by: '<S4>/Switch'
                                        */
  real_T Constant_Value_k;             /* Expression: 25
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T xpos_index_Value_m;           /* Expression: 1
                                        * Referenced by: '<S261>/xpos_index'
                                        */
  real_T ypos_index_Value_l;           /* Expression: 2
                                        * Referenced by: '<S261>/ypos_index'
                                        */
  real_T state2_indices_Value_a[6];    /* Expression: attribcol2
                                        * Referenced by: '<S261>/state2_indices'
                                        */
  real_T state3_indices_Value_m[6];    /* Expression: attribcol3
                                        * Referenced by: '<S261>/state3_indices'
                                        */
  real_T state4_indices_Value_c2[6];   /* Expression: attribcol4
                                        * Referenced by: '<S261>/state4_indices'
                                        */
  real_T state5_indices_Value_p[6];    /* Expression: attribcol5
                                        * Referenced by: '<S261>/state5_indices'
                                        */
  real_T padder_Value_i[25];           /* Expression: stateindices_padding
                                        * Referenced by: '<S261>/padder'
                                        */
  real_T Memory1_X0_c;                 /* Expression: 0
                                        * Referenced by: '<S24>/Memory1'
                                        */
  real_T Memory_X0_fw;                 /* Expression: 0
                                        * Referenced by: '<S24>/Memory'
                                        */
  real_T Constant1_Value_c;            /* Expression: 0
                                        * Referenced by: '<S24>/Constant1'
                                        */
  real_T xpos_index_Value_n;           /* Expression: 1
                                        * Referenced by: '<S330>/xpos_index'
                                        */
  real_T ypos_index_Value_f;           /* Expression: 2
                                        * Referenced by: '<S330>/ypos_index'
                                        */
  real_T state2_indices_Value_h[4];    /* Expression: attribcol2
                                        * Referenced by: '<S330>/state2_indices'
                                        */
  real_T state3_indices_Value_e[4];    /* Expression: attribcol3
                                        * Referenced by: '<S330>/state3_indices'
                                        */
  real_T state4_indices_Value_h[4];    /* Expression: attribcol4
                                        * Referenced by: '<S330>/state4_indices'
                                        */
  real_T state5_indices_Value_n[4];    /* Expression: attribcol5
                                        * Referenced by: '<S330>/state5_indices'
                                        */
  real_T padder_Value_p[35];           /* Expression: stateindices_padding
                                        * Referenced by: '<S330>/padder'
                                        */
  real_T Assess_arm_VCODE_Value[70];   /* Expression: [1:70]
                                        * Referenced by: '<S6>/Assess_arm_VCODE'
                                        */
  real_T Contralateral_arm_VCODE_Value[70];/* Expression: [71:140]
                                            * Referenced by: '<S6>/Contralateral_arm_VCODE'
                                            */
  real_T feedback_status_Value;        /* Expression: 1
                                        * Referenced by: '<S6>/feedback_status'
                                        */
  real_T Constant_Value_e;             /* Expression: 1
                                        * Referenced by: '<S24>/Constant'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<S24>/Constant2'
                                        */
  real_T xpos_index_Value_nf;          /* Expression: 1
                                        * Referenced by: '<S331>/xpos_index'
                                        */
  real_T ypos_index_Value_b;           /* Expression: 2
                                        * Referenced by: '<S331>/ypos_index'
                                        */
  real_T state2_indices_Value_af[4];   /* Expression: attribcol2
                                        * Referenced by: '<S331>/state2_indices'
                                        */
  real_T state3_indices_Value_k[4];    /* Expression: attribcol3
                                        * Referenced by: '<S331>/state3_indices'
                                        */
  real_T state4_indices_Value_l[4];    /* Expression: attribcol4
                                        * Referenced by: '<S331>/state4_indices'
                                        */
  real_T state5_indices_Value_g[4];    /* Expression: attribcol5
                                        * Referenced by: '<S331>/state5_indices'
                                        */
  real_T padder_Value_a[35];           /* Expression: stateindices_padding
                                        * Referenced by: '<S331>/padder'
                                        */
  real_T xpos_index_Value_a;           /* Expression: 1
                                        * Referenced by: '<S329>/xpos_index'
                                        */
  real_T ypos_index_Value_d;           /* Expression: 2
                                        * Referenced by: '<S329>/ypos_index'
                                        */
  real_T state2_indices_Value_c[4];    /* Expression: attribcol2
                                        * Referenced by: '<S329>/state2_indices'
                                        */
  real_T state3_indices_Value_o[4];    /* Expression: attribcol3
                                        * Referenced by: '<S329>/state3_indices'
                                        */
  real_T state4_indices_Value_a[4];    /* Expression: attribcol4
                                        * Referenced by: '<S329>/state4_indices'
                                        */
  real_T state5_indices_Value_nf[4];   /* Expression: attribcol5
                                        * Referenced by: '<S329>/state5_indices'
                                        */
  real_T padder_Value_n[35];           /* Expression: stateindices_padding
                                        * Referenced by: '<S329>/padder'
                                        */
  real_T Switch_Threshold_e;           /* Expression: 0.5
                                        * Referenced by: '<S24>/Switch'
                                        */
  real_T xpos_index_Value_no;          /* Expression: 1
                                        * Referenced by: '<S310>/xpos_index'
                                        */
  real_T ypos_index_Value_e;           /* Expression: 2
                                        * Referenced by: '<S310>/ypos_index'
                                        */
  real_T state2_indices_Value_c4[4];   /* Expression: attribcol2
                                        * Referenced by: '<S310>/state2_indices'
                                        */
  real_T state3_indices_Value_n[4];    /* Expression: attribcol3
                                        * Referenced by: '<S310>/state3_indices'
                                        */
  real_T state4_indices_Value_g[4];    /* Expression: attribcol4
                                        * Referenced by: '<S310>/state4_indices'
                                        */
  real_T state5_indices_Value_m[4];    /* Expression: attribcol5
                                        * Referenced by: '<S310>/state5_indices'
                                        */
  real_T padder_Value_n3[35];          /* Expression: stateindices_padding
                                        * Referenced by: '<S310>/padder'
                                        */
  real_T Switch_Threshold_k;           /* Expression: 1.5
                                        * Referenced by: '<S22>/Switch'
                                        */
  real_T GUI_VCODE_Value[630];         /* Expression: zeros(70, 9);
                                        * Referenced by: '<S13>/GUI_VCODE'
                                        */
  real_T Receive_P1_Size_l[2];         /* Computed Parameter: Receive_P1_Size_l
                                        * Referenced by: '<S13>/Receive'
                                        */
  real_T Receive_P1_j[11];             /* Computed Parameter: Receive_P1_j
                                        * Referenced by: '<S13>/Receive'
                                        */
  real_T Receive_P2_Size_c[2];         /* Computed Parameter: Receive_P2_Size_c
                                        * Referenced by: '<S13>/Receive'
                                        */
  real_T Receive_P2_ka;                /* Expression: ipPort
                                        * Referenced by: '<S13>/Receive'
                                        */
  real_T Receive_P3_Size_f[2];         /* Computed Parameter: Receive_P3_Size_f
                                        * Referenced by: '<S13>/Receive'
                                        */
  real_T Receive_P3_k;                 /* Expression: width
                                        * Referenced by: '<S13>/Receive'
                                        */
  real_T Receive_P4_Size_h[2];         /* Computed Parameter: Receive_P4_Size_h
                                        * Referenced by: '<S13>/Receive'
                                        */
  real_T Receive_P4_l;                 /* Expression: sampletime
                                        * Referenced by: '<S13>/Receive'
                                        */
  real_T Receive_P5_Size_i[2];         /* Computed Parameter: Receive_P5_Size_i
                                        * Referenced by: '<S13>/Receive'
                                        */
  real_T Receive_P5_m;                 /* Expression: vblLen
                                        * Referenced by: '<S13>/Receive'
                                        */
  real_T TmpRTBAtNumberofEventCodesOutport1_X0;/* Expression: 0
                                                * Referenced by: synthesized block
                                                */
  real_T NotLoggingAnalogInputs_Value; /* Expression: 0
                                        * Referenced by: '<S25>/Not Logging Analog Inputs'
                                        */
  real_T custom_version_Value;         /* Expression: 7
                                        * Referenced by: '<S26>/custom_version'
                                        */
  real_T seconds_remaining_Value;      /* Expression: -1
                                        * Referenced by: '<S2>/seconds_remaining'
                                        */
  real_T RateTransition2_X0_o;         /* Expression: 0
                                        * Referenced by: '<S26>/Rate Transition2'
                                        */
  real_T NotLoggingEventCodes_Value;   /* Expression: 0
                                        * Referenced by: '<S27>/Not Logging Event Codes'
                                        */
  real_T RateTransition1_X0_l;         /* Expression: 0
                                        * Referenced by: '<S308>/Rate Transition1'
                                        */
  real_T RateTransition2_X0_m;         /* Expression: 0
                                        * Referenced by: '<S308>/Rate Transition2'
                                        */
  real_T RateTransition4_X0;           /* Expression: 0
                                        * Referenced by: '<S308>/Rate Transition4'
                                        */
  real_T Constant_Value_n;             /* Expression: BKIN_STEP_TIME
                                        * Referenced by: '<S313>/Constant'
                                        */
  real_T Switch_1_Threshold;           /* Expression: 2
                                        * Referenced by: '<S322>/Switch'
                                        */
  real_T Switch_2_Threshold;           /* Expression: 2
                                        * Referenced by: '<S322>/Switch'
                                        */
  real_T Switch_3_Threshold;           /* Expression: 2
                                        * Referenced by: '<S322>/Switch'
                                        */
  real_T Switch_4_Threshold;           /* Expression: 2
                                        * Referenced by: '<S322>/Switch'
                                        */
  real_T Switch_Threshold_h;           /* Expression: 1
                                        * Referenced by: '<S9>/Switch'
                                        */
  real_T Switch1_Threshold_nq;         /* Expression: 1
                                        * Referenced by: '<S286>/Switch1'
                                        */
  real_T ZeroEPTorque_Value[4];        /* Expression: [0 0 0 0]
                                        * Referenced by: '<S2>/ZeroEPTorque'
                                        */
  real_T Memory1_X0_b;                 /* Expression: 0
                                        * Referenced by: '<S2>/Memory1'
                                        */
  real_T Memory2_1_X0;                 /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_2_X0;                 /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_3_X0;                 /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_4_X0;                 /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_5_X0;                 /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_9_X0;                 /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_18_X0;                /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_19_X0;                /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_20_X0;                /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_21_X0;                /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_22_X0;                /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_26_X0;                /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_10_X0;                /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_11_X0;                /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_12_X0;                /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_13_X0;                /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_14_X0;                /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_15_X0;                /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_16_X0;                /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_17_X0;                /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_23_X0;                /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_24_X0;                /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_25_X0;                /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_27_X0;                /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_28_X0;                /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_29_X0;                /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_30_X0;                /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_31_X0;                /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_32_X0;                /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_33_X0;                /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_34_X0;                /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_6_X0;                 /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_7_X0;                 /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T Memory2_8_X0;                 /* Expression: 0
                                        * Referenced by: '<S2>/Memory2'
                                        */
  real_T arm_count_Value;              /* Expression: 0
                                        * Referenced by: '<S38>/arm_count'
                                        */
  real_T fp1_present_Value;            /* Expression: 0
                                        * Referenced by: '<S38>/fp1_present'
                                        */
  real_T fp2_present_Value;            /* Expression: 0
                                        * Referenced by: '<S38>/fp2_present'
                                        */
  real_T gaze_tracker_present_Value;   /* Expression: 0
                                        * Referenced by: '<S38>/gaze_tracker_present'
                                        */
  real_T robot_lift_present_Value;     /* Expression: 0
                                        * Referenced by: '<S38>/robot_lift_present'
                                        */
  real_T ECATStatus_InitialValue[8];   /* Expression: zeros(1,8)
                                        * Referenced by: '<S2>/ECAT Status'
                                        */
  real_T ECAThardware_InitialValue[14];/* Expression: zeros(1,14)
                                        * Referenced by: '<S2>/ECAT hardware'
                                        */
  real_T u0hz_Value;                   /* Expression: 2
                                        * Referenced by: '<S300>/500 hz'
                                        */
  real_T Send_P1_Size_g[2];            /* Computed Parameter: Send_P1_Size_g
                                        * Referenced by: '<S13>/Send'
                                        */
  real_T Send_P1_h[11];                /* Computed Parameter: Send_P1_h
                                        * Referenced by: '<S13>/Send'
                                        */
  real_T Send_P2_Size_f[2];            /* Computed Parameter: Send_P2_Size_f
                                        * Referenced by: '<S13>/Send'
                                        */
  real_T Send_P2_mm;                   /* Expression: ipPort
                                        * Referenced by: '<S13>/Send'
                                        */
  real_T Send_P3_Size_ar[2];           /* Computed Parameter: Send_P3_Size_ar
                                        * Referenced by: '<S13>/Send'
                                        */
  real_T Send_P3_k;                    /* Expression: localPort
                                        * Referenced by: '<S13>/Send'
                                        */
  real_T Send_P4_Size_d[2];            /* Computed Parameter: Send_P4_Size_d
                                        * Referenced by: '<S13>/Send'
                                        */
  real_T Send_P4_m;                    /* Expression: sampletime
                                        * Referenced by: '<S13>/Send'
                                        */
  real_T Send_P5_Size_k[2];            /* Computed Parameter: Send_P5_Size_k
                                        * Referenced by: '<S13>/Send'
                                        */
  real_T Send_P5_p;                    /* Expression: vblLen
                                        * Referenced by: '<S13>/Send'
                                        */
  real_T Constant1_Value_i[3781];      /* Expression: soundDataFromFile
                                        * Referenced by: '<S298>/Constant1'
                                        */
  real_T Constant1_Value_cs[400];      /* Expression: soundDataFromFile
                                        * Referenced by: '<S299>/Constant1'
                                        */
  real_T PCI6229DA_P1_Size[2];         /* Computed Parameter: PCI6229DA_P1_Size
                                        * Referenced by: '<S12>/PCI-6229 DA'
                                        */
  real_T PCI6229DA_P1;                 /* Expression: channel
                                        * Referenced by: '<S12>/PCI-6229 DA'
                                        */
  real_T PCI6229DA_P2_Size[2];         /* Computed Parameter: PCI6229DA_P2_Size
                                        * Referenced by: '<S12>/PCI-6229 DA'
                                        */
  real_T PCI6229DA_P2;                 /* Expression: range
                                        * Referenced by: '<S12>/PCI-6229 DA'
                                        */
  real_T PCI6229DA_P3_Size[2];         /* Computed Parameter: PCI6229DA_P3_Size
                                        * Referenced by: '<S12>/PCI-6229 DA'
                                        */
  real_T PCI6229DA_P3;                 /* Expression: reset
                                        * Referenced by: '<S12>/PCI-6229 DA'
                                        */
  real_T PCI6229DA_P4_Size[2];         /* Computed Parameter: PCI6229DA_P4_Size
                                        * Referenced by: '<S12>/PCI-6229 DA'
                                        */
  real_T PCI6229DA_P4;                 /* Expression: initValue
                                        * Referenced by: '<S12>/PCI-6229 DA'
                                        */
  real_T PCI6229DA_P5_Size[2];         /* Computed Parameter: PCI6229DA_P5_Size
                                        * Referenced by: '<S12>/PCI-6229 DA'
                                        */
  real_T PCI6229DA_P5;                 /* Expression: sampletime
                                        * Referenced by: '<S12>/PCI-6229 DA'
                                        */
  real_T PCI6229DA_P6_Size[2];         /* Computed Parameter: PCI6229DA_P6_Size
                                        * Referenced by: '<S12>/PCI-6229 DA'
                                        */
  real_T PCI6229DA_P6;                 /* Expression: slot
                                        * Referenced by: '<S12>/PCI-6229 DA'
                                        */
  real_T PCI6229DA_P7_Size[2];         /* Computed Parameter: PCI6229DA_P7_Size
                                        * Referenced by: '<S12>/PCI-6229 DA'
                                        */
  real_T PCI6229DA_P7;                 /* Expression: boardType
                                        * Referenced by: '<S12>/PCI-6229 DA'
                                        */
  real_T Switch2_Threshold;            /* Expression: .5
                                        * Referenced by: '<S24>/Switch2'
                                        */
  real_T Switch_Threshold_a;           /* Expression: 1.5
                                        * Referenced by: '<S312>/Switch'
                                        */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S316>/TSamp'
                                        */
  real_T TSamp_WtEt_o;                 /* Computed Parameter: TSamp_WtEt_o
                                        * Referenced by: '<S317>/TSamp'
                                        */
  real_T Constant_Value_i;             /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T CLAMP_COLClampStateintegerFlagtoclampvisualfeedbacknone_Value;/* Expression: 10
                                                                      * Referenced by: '<S290>/CLAMP_COL;Clamp State;integer;Flag to clamp visual feedback;;;none;;'
                                                                      */
  real_T DELAY_POSTTRIAL_COLPostTrial_Delayintegertimebetweentrialsmsnon;/* Expression: 6
                                                                      * Referenced by: '<S290>/DELAY_POSTTRIAL_COL;Post-Trial_Delay;integer;time between trials (ms);;;none;;'
                                                                      */
  real_T DISPLAY_TRIAL_COLFlagforadisplayonlytrialintegerFlagtotransitio;/* Expression: 12
                                                                      * Referenced by: '<S290>/DISPLAY_TRIAL_COL;Flag for a display-only trial;integer;Flag to transition to a display-only trial (show instructions or cumulative score);;;none;;'
                                                                      */
  real_T DO_REWARD_COLDoRewardintegerFlagtoindicatewhethertoproviderewar;/* Expression: 11
                                                                      * Referenced by: '<S290>/DO_REWARD_COL;Do Reward;integer;Flag to indicate whether to provide reward, neutral tone, or nothing on this trial;;;none;;'
                                                                      */
  real_T END_TARGET_COLEnd_TargettargetSecondtargettoappearduringatriali;/* Expression: 2
                                                                      * Referenced by: '<S290>/END_TARGET_COL;End_Target;target;Second target to appear during a trial (i.e. reach to this target from 1st target);;;none;;'
                                                                      */
  real_T HAND_VIS_COLHandVisibleintegerFlagtoshutoffthehandforaftereffec;/* Expression: 9
                                                                      * Referenced by: '<S290>/HAND_VIS_COL;Hand Visible;integer;Flag to shut off the hand for aftereffect trials;;;none;;'
                                                                      */
  real_T MAXREACHTIME_COLMaxReachTimeintegermaximumtimeallowedforsucessf;/* Expression: 5
                                                                      * Referenced by: '<S290>/MAXREACHTIME_COL;MaxReachTime;integer;maximum time allowed for sucessful reach (ms);;;none;;'
                                                                      */
  real_T ROTATIONRotationintegerRotationdegreesCCWabsoluteorincrementald;/* Expression: 8
                                                                      * Referenced by: '<S290>/ROTATION;Rotation;integer;Rotation (degrees CCW) (absolute or incremental, depending on Rotate_Type));;;none;;'
                                                                      */
  real_T ROTATION_CENTERRotate_CentertargetTargettouseforrotationcenteri;/* Expression: 3
                                                                      * Referenced by: '<S290>/ROTATION_CENTER;Rotate_Center;target;Target to use for rotation center (i.e. visual rotation occurs about the position defined by this target);;;none;;'
                                                                      */
  real_T ROTATION_TYPERotate_Typeinteger0norotation1rotatespecifiedamoun;/* Expression: 7
                                                                      * Referenced by: '<S290>/ROTATION_TYPE;Rotate_Type;integer;0 -> no rotation, 1 -> rotate specified amount, 2 -> change rotation by specified amount;;;none;;'
                                                                      */
  real_T START_TARGET_COLStart_TargettargetFirsttargettoappearduringatri;/* Expression: 1
                                                                      * Referenced by: '<S290>/START_TARGET_COL;Start_Target;target;First target to appear during a trial;;;none;;'
                                                                      */
  real_T WAIT_AT_START_COL1st_Target_WaitintegerRequiredholdtimeatstartt;/* Expression: 4
                                                                      * Referenced by: '<S290>/WAIT_AT_START_COL;1st_Target_Wait;integer;Required hold time at start target (ms);;;none;;'
                                                                      */
  real_T INSTRUCT_PAUSE_BTNInstructResumeResumetaskexecutionafterinstruc;/* Expression: 2
                                                                      * Referenced by: '<S291>/INSTRUCT_PAUSE_BTN;Instruct-Resume;;Resume task execution after instruction display;18;22;none;;'
                                                                      */
  real_T E_HIT_TARGETTarget_HitSubjecthasinterceptedthetargetnone_Value;/* Expression: 5
                                                                      * Referenced by: '<S292>/E_HIT_TARGET;Target_Hit;;Subject has intercepted the target;;;none;;'
                                                                      */
  real_T E_MISS_TARGETTarget_MissSubjectshotpastthetargetwithouthittingi;/* Expression: 9
                                                                      * Referenced by: '<S292>/E_MISS_TARGET;Target_Miss;;Subject shot past the target without hitting it;;;none;;'
                                                                      */
  real_T E_NEUTRAL_FDBKNFB_Trial_EndSubjecthashitorexceededthetargetonan;/* Expression: 10
                                                                      * Referenced by: '<S292>/E_NEUTRAL_FDBK;NFB_Trial_End;;Subject has hit or exceeded the target on a no-feedback trial;;;none;;'
                                                                      */
  real_T E_NO_EVENTnaThisevent_codedoesnotsaveaneventinthedatafileitjust;/* Expression: 0
                                                                      * Referenced by: '<S292>/E_NO_EVENT;n|a;;This event_code does not save an event in the data file, it just clears the event;;;none;;'
                                                                      */
  real_T E_REWARDReward_OnRewardisgivennone_Value;/* Expression: 6
                                                   * Referenced by: '<S292>/E_REWARD;Reward_On;;Reward is given;;;none;;'
                                                   */
  real_T E_SHOW_INSTRUCTShowInstructionsTrialshowsinstructionsnone_Value;/* Expression: 18
                                                                      * Referenced by: '<S292>/E_SHOW_INSTRUCT;Show Instructions;;Trial shows instructions ;;;none;;'
                                                                      */
  real_T E_SHOW_SCOREShow_Cum_ScoreDisplaycumulativescorenone_Value;/* Expression: 17
                                                                     * Referenced by: '<S292>/E_SHOW_SCORE;Show_Cum_Score;;Display cumulative score;;;none;;'
                                                                     */
  real_T E_STAY_CENTERStay_CenterSubjecthasreachedthecentertargetandmust;/* Expression: 2
                                                                      * Referenced by: '<S292>/E_STAY_CENTER;Stay_Center;;Subject has reached the center target and must hold;;;none;;'
                                                                      */
  real_T E_TARGET_ONTarget_OnTargetONstartwaitingforsubjecttoleavecentre;/* Expression: 3
                                                                      * Referenced by: '<S292>/E_TARGET_ON;Target_On;;Target ON, start waiting for subject to leave centre target;;;none;;'
                                                                      */
  real_T COLORColorcolourColornone_Value;/* Expression: 5
                                          * Referenced by: '<S293>/COLOR;Color;colour;Color;;;none;;'
                                          */
  real_T HITCOLORHitColorcolourColorwhenthetargetishitnone_Value;/* Expression: 6
                                                                  * Referenced by: '<S293>/HITCOLOR;Hit Color;colour;Color when the target is hit;;;none;;'
                                                                  */
  real_T LABELLabeltextlabelDefaultlabeltextnone_Value;/* Expression: 7
                                                        * Referenced by: '<S293>/LABEL;Label text;label;Default label text;;;none;;'
                                                        */
  real_T LABEL_HEIGHTLabelHeightfloatHeightofthelabelnone_Value;/* Expression: 8
                                                                 * Referenced by: '<S293>/LABEL_HEIGHT;Label Height;float;Height of the label;;;none;;'
                                                                 */
  real_T LOGICAL_RADIUSLogicalradiusfloatLogicalRadiusnone_Value;/* Expression: 4
                                                                  * Referenced by: '<S293>/LOGICAL_RADIUS;Logical radius;float;Logical Radius;;;none;;'
                                                                  */
  real_T ROTATED_COLORRotatedColorcolourTargetcolorforrotatedtrialsnone_;/* Expression: 11
                                                                      * Referenced by: '<S293>/ROTATED_COLOR;Rotated Color;colour;Target color for rotated trials ;;;none;;'
                                                                      */
  real_T STROKE_COLORStrokeColorcolourStrokecolorforreturnringnone_Value;/* Expression: 10
                                                                      * Referenced by: '<S293>/STROKE_COLOR;Stroke Color;colour;Stroke color, for return ring;;;none;;'
                                                                      */
  real_T STROKE_WIDTHStrokeWidthfloatStrokewidthforreturnringnone_Value;/* Expression: 9
                                                                      * Referenced by: '<S293>/STROKE_WIDTH;Stroke Width;float;Stroke width, for return ring;;;none;;'
                                                                      */
  real_T col_xXfloatXPositioncmofthetargetrelativetolocal00none_Value;/* Expression: 1
                                                                      * Referenced by: '<S293>/col_x;X;float;X Position (cm) of the target relative to  local (0,0);;;none;;'
                                                                      */
  real_T col_yYfloatYPositioncmofthetargetrelativetolocal00none_Value;/* Expression: 2
                                                                      * Referenced by: '<S293>/col_y;Y;float;Y Position (cm) of the target relative to  local (0,0);;;none;;'
                                                                      */
  real_T VISUAL_RADIUSVisualradiusfloatDisplayRadiusnone_Value;/* Expression: 3
                                                                * Referenced by: '<S293>/VISUAL_RADIUS;Visual radius;float;Display Radius;;;none;;'
                                                                */
  real_T INSTRUCTIONS_Value;           /* Expression: 1
                                        * Referenced by: '<S294>/INSTRUCTIONS='
                                        */
  real_T LOAD_FOREITHER_Value;         /* Expression: 2
                                        * Referenced by: '<S294>/LOAD_FOR=EITHER'
                                        */
  real_T K_FIX_LEFTHANDFixLeftHandFlagintegerFlagtoholdtheenabletherobot;/* Expression: 13
                                                                      * Referenced by: '<S295>/K_FIX_LEFTHAND;Fix Left Hand Flag;integer;Flag to hold the enable the robot to hold the left (nondominant) hand in place;;;none;;'
                                                                      */
  real_T K_INSTRUCT_TIMEDisplayInstructionsHoldTimeintegerTimetodisplayi;/* Expression: 9
                                                                      * Referenced by: '<S295>/K_INSTRUCT_TIME;Display Instructions Hold Time;integer;Time to display instructions to the screen;;;none;;'
                                                                      */
  real_T K_LEFTHAND_TGTLefthandtargetintegerTargetdefiningthelocationwhe;/* Expression: 12
                                                                      * Referenced by: '<S295>/K_LEFTHAND_TGT;Left hand target;integer;Target defining the location where the left hand is to be fixed;;;none;;'
                                                                      */
  real_T K_RETURN_RING_ROWReturnRingTgtTblRowintegerRowofthetargettablet;/* Expression: 7
                                                                      * Referenced by: '<S295>/K_RETURN_RING_ROW;ReturnRing TgtTbl Row;integer;Row of the target table to use for feedback on return to start;;;none;;'
                                                                      */
  real_T K_REWARD_VALRewardValuecentsintegerAmountofrewardofferedoneacht;/* Expression: 2
                                                                      * Referenced by: '<S295>/K_REWARD_VAL;Reward Value (cents);integer;Amount of reward offered on each trial, in cents;;;none;;'
                                                                      */
  real_T K_ROBOT_MOVE_TIMERobotMoveTimeintegerTimetherobotwillmovetothen;/* Expression: 15
                                                                      * Referenced by: '<S295>/K_ROBOT_MOVE_TIME;Robot Move Time;integer;Time the robot will move to the new position;;;none;;'
                                                                      */
  real_T K_ROBOT_RAMP_TIMERobotRampTimeintegerTimetherobotwillrampupandd;/* Expression: 14
                                                                      * Referenced by: '<S295>/K_ROBOT_RAMP_TIME;Robot Ramp Time;integer;Time the robot will ramp up and down;;;none;;'
                                                                      */
  real_T K_SCORETEXT_ROWScoreTextTgtTblRowintegerRowofthetargettabletous;/* Expression: 1
                                                                      * Referenced by: '<S295>/K_SCORETEXT_ROW;Score Text TgtTbl Row;integer;Row of the target table to use for score text display;;;none;;'
                                                                      */
  real_T K_SCORE_TIMEDisplayScoreHoldTimeintegerTimetodisplaythecumulati;/* Expression: 8
                                                                      * Referenced by: '<S295>/K_SCORE_TIME;Display Score Hold Time ;integer;Time to display the cumulative score (e.g., at the end of the session);;;none;;'
                                                                      */
  real_T K_TONE_HIT_DURATIONHittonedurationintegerDurationofthefeedbackt;/* Expression: 4
                                                                      * Referenced by: '<S295>/K_TONE_HIT_DURATION;Hit tone duration;integer;Duration of the feedback tone when the target is hit;;;none;;'
                                                                      */
  real_T K_TONE_HIT_FREQUENCYHittonefrequencyintegerFrequencyofthefeedba;/* Expression: 5
                                                                      * Referenced by: '<S295>/K_TONE_HIT_FREQUENCY;Hit tone frequency;integer;Frequency of the feedback tone when the target is hit;;;none;;'
                                                                      */
  real_T K_TONE_NEUTRAL_DURATIONNeutraltonedurationintegerDurationofthen;/* Expression: 10
                                                                      * Referenced by: '<S295>/K_TONE_NEUTRAL_DURATION;Neutral tone duration;integer;Duration of the neutral feedback tone indicating end of trial;;;none;;'
                                                                      */
  real_T K_TONE_NEUTRAL_FREQUENCYNeutraltonefrequencyintegerFrequencyoft;/* Expression: 11
                                                                      * Referenced by: '<S295>/K_TONE_NEUTRAL_FREQUENCY;Neutral tone frequency;integer;Frequency of the neutral feedback tone indicating end of trial;;;none;;'
                                                                      */
  real_T K_UNUSEDUnusedintegerNotcurrentlyusednone_Value;/* Expression: 3
                                                          * Referenced by: '<S295>/K_UNUSED;Unused;integer;Not currently used;;;none;;'
                                                          */
  real_T K_VIS_RADVisibleRadiusfloatRadiusfromthestarttargetthatthehandw;/* Expression: 6
                                                                      * Referenced by: '<S295>/K_VIS_RAD;Visible Radius;float;Radius from the start target that the hand will always be visible (m);;;none;;'
                                                                      */
  real32_T Constant_Value_g[400];      /* Computed Parameter: Constant_Value_g
                                        * Referenced by: '<S47>/Constant'
                                        */
  real32_T t2_X0;                      /* Computed Parameter: t2_X0
                                        * Referenced by: '<S47>/t-2'
                                        */
  real32_T t1_X0;                      /* Computed Parameter: t1_X0
                                        * Referenced by: '<S47>/t-1'
                                        */
  real32_T TmpRTBAtSendControlMachineInport1_X0;/* Computed Parameter: TmpRTBAtSendControlMachineInport1_X0
                                                 * Referenced by: synthesized block
                                                 */
  int32_T request_packet_Value[34];    /* Expression: zeros(1, 34, 'int32')
                                        * Referenced by: '<S32>/request_packet'
                                        */
  int32_T Memory_X0_m;                 /* Computed Parameter: Memory_X0_m
                                        * Referenced by: '<S106>/Memory'
                                        */
  int32_T Constant_Value_g0;           /* Computed Parameter: Constant_Value_g0
                                        * Referenced by: '<S105>/Constant'
                                        */
  int32_T Constant1_Value_h;           /* Computed Parameter: Constant1_Value_h
                                        * Referenced by: '<S105>/Constant1'
                                        */
  int32_T Constant_Value_nd;           /* Computed Parameter: Constant_Value_nd
                                        * Referenced by: '<S106>/Constant'
                                        */
  int32_T Constant1_Value_e;           /* Computed Parameter: Constant1_Value_e
                                        * Referenced by: '<S107>/Constant1'
                                        */
  int32_T Memory_X0_fd;                /* Computed Parameter: Memory_X0_fd
                                        * Referenced by: '<S119>/Memory'
                                        */
  int32_T Constant_Value_gd;           /* Computed Parameter: Constant_Value_gd
                                        * Referenced by: '<S118>/Constant'
                                        */
  int32_T Constant1_Value_h4;          /* Computed Parameter: Constant1_Value_h4
                                        * Referenced by: '<S118>/Constant1'
                                        */
  int32_T Constant_Value_iv;           /* Computed Parameter: Constant_Value_iv
                                        * Referenced by: '<S119>/Constant'
                                        */
  int32_T Constant1_Value_m;           /* Computed Parameter: Constant1_Value_m
                                        * Referenced by: '<S120>/Constant1'
                                        */
  int32_T Memory_X0_e;                 /* Computed Parameter: Memory_X0_e
                                        * Referenced by: '<S87>/Memory'
                                        */
  int32_T Memory1_X0_h;                /* Computed Parameter: Memory1_X0_h
                                        * Referenced by: '<S87>/Memory1'
                                        */
  int32_T Memory_X0_gr;                /* Computed Parameter: Memory_X0_gr
                                        * Referenced by: '<S88>/Memory'
                                        */
  int32_T Memory1_X0_p;                /* Computed Parameter: Memory1_X0_p
                                        * Referenced by: '<S88>/Memory1'
                                        */
  int32_T Memory_X0_hk;                /* Computed Parameter: Memory_X0_hk
                                        * Referenced by: '<S91>/Memory'
                                        */
  int32_T readTrigger_Value;           /* Computed Parameter: readTrigger_Value
                                        * Referenced by: '<S74>/readTrigger'
                                        */
  int32_T Memory_X0_hu;                /* Computed Parameter: Memory_X0_hu
                                        * Referenced by: '<S93>/Memory'
                                        */
  int32_T Memory_X0_n5;                /* Computed Parameter: Memory_X0_n5
                                        * Referenced by: '<S158>/Memory'
                                        */
  int32_T Constant_Value_lk;           /* Computed Parameter: Constant_Value_lk
                                        * Referenced by: '<S157>/Constant'
                                        */
  int32_T Constant1_Value_o;           /* Computed Parameter: Constant1_Value_o
                                        * Referenced by: '<S157>/Constant1'
                                        */
  int32_T Constant_Value_kv;           /* Computed Parameter: Constant_Value_kv
                                        * Referenced by: '<S158>/Constant'
                                        */
  int32_T Constant1_Value_g;           /* Computed Parameter: Constant1_Value_g
                                        * Referenced by: '<S159>/Constant1'
                                        */
  int32_T Memory_X0_ic;                /* Computed Parameter: Memory_X0_ic
                                        * Referenced by: '<S171>/Memory'
                                        */
  int32_T Constant_Value_ik;           /* Computed Parameter: Constant_Value_ik
                                        * Referenced by: '<S170>/Constant'
                                        */
  int32_T Constant1_Value_j;           /* Computed Parameter: Constant1_Value_j
                                        * Referenced by: '<S170>/Constant1'
                                        */
  int32_T Constant_Value_ly;           /* Computed Parameter: Constant_Value_ly
                                        * Referenced by: '<S171>/Constant'
                                        */
  int32_T Constant1_Value_ol;          /* Computed Parameter: Constant1_Value_ol
                                        * Referenced by: '<S172>/Constant1'
                                        */
  int32_T Memory_X0_nj;                /* Computed Parameter: Memory_X0_nj
                                        * Referenced by: '<S139>/Memory'
                                        */
  int32_T Memory1_X0_hb;               /* Computed Parameter: Memory1_X0_hb
                                        * Referenced by: '<S139>/Memory1'
                                        */
  int32_T Memory_X0_id;                /* Computed Parameter: Memory_X0_id
                                        * Referenced by: '<S140>/Memory'
                                        */
  int32_T Memory1_X0_a;                /* Computed Parameter: Memory1_X0_a
                                        * Referenced by: '<S140>/Memory1'
                                        */
  int32_T Memory_X0_c;                 /* Computed Parameter: Memory_X0_c
                                        * Referenced by: '<S143>/Memory'
                                        */
  int32_T readTrigger_Value_l;         /* Computed Parameter: readTrigger_Value_l
                                        * Referenced by: '<S75>/readTrigger'
                                        */
  int32_T Memory_X0_ge;                /* Computed Parameter: Memory_X0_ge
                                        * Referenced by: '<S145>/Memory'
                                        */
  int32_T activation_Value[2];         /* Computed Parameter: activation_Value
                                        * Referenced by: '<S63>/activation'
                                        */
  int32_T PCIBusSlot_Value[2];         /* Computed Parameter: PCIBusSlot_Value
                                        * Referenced by: '<S63>/PCI Bus Slot'
                                        */
  int32_T Switch_Threshold_b;          /* Computed Parameter: Switch_Threshold_b
                                        * Referenced by: '<S63>/Switch'
                                        */
  uint32_T total_packets_sent_Y0;      /* Computed Parameter: total_packets_sent_Y0
                                        * Referenced by: '<S50>/total_packets_sent'
                                        */
  uint32_T FixPtConstant_Value;        /* Computed Parameter: FixPtConstant_Value
                                        * Referenced by: '<S55>/FixPt Constant'
                                        */
  uint32_T Output_InitialCondition;    /* Computed Parameter: Output_InitialCondition
                                        * Referenced by: '<S53>/Output'
                                        */
  uint32_T Constant_Value_f;           /* Computed Parameter: Constant_Value_f
                                        * Referenced by: '<S56>/Constant'
                                        */
  uint32_T max_packet_id_Value;        /* Computed Parameter: max_packet_id_Value
                                        * Referenced by: '<S31>/max_packet_id'
                                        */
  uint32_T Memory_X0_o2;               /* Computed Parameter: Memory_X0_o2
                                        * Referenced by: '<S105>/Memory'
                                        */
  uint32_T Constant_Value_p;           /* Computed Parameter: Constant_Value_p
                                        * Referenced by: '<S107>/Constant'
                                        */
  uint32_T Memory_X0_hp;               /* Computed Parameter: Memory_X0_hp
                                        * Referenced by: '<S118>/Memory'
                                        */
  uint32_T Constant_Value_nx;          /* Computed Parameter: Constant_Value_nx
                                        * Referenced by: '<S120>/Constant'
                                        */
  uint32_T Memory_X0_co;               /* Computed Parameter: Memory_X0_co
                                        * Referenced by: '<S157>/Memory'
                                        */
  uint32_T Constant_Value_c;           /* Computed Parameter: Constant_Value_c
                                        * Referenced by: '<S159>/Constant'
                                        */
  uint32_T Memory_X0_er;               /* Computed Parameter: Memory_X0_er
                                        * Referenced by: '<S170>/Memory'
                                        */
  uint32_T Constant_Value_pq;          /* Computed Parameter: Constant_Value_pq
                                        * Referenced by: '<S172>/Constant'
                                        */
  uint32_T Constant1_Value_c3;         /* Computed Parameter: Constant1_Value_c3
                                        * Referenced by: '<S205>/Constant1'
                                        */
  uint32_T Constant1_Value_me;         /* Computed Parameter: Constant1_Value_me
                                        * Referenced by: '<S207>/Constant1'
                                        */
  uint32_T servocounter_Y0;            /* Computed Parameter: servocounter_Y0
                                        * Referenced by: '<S222>/servo counter'
                                        */
  uint32_T EPcalibrationbtn_Y0;        /* Expression: uint32(0)
                                        * Referenced by: '<S222>/EP calibration btn'
                                        */
  uint32_T Statusbits_Y0[7];           /* Expression: zeros(7,1, 'uint32')
                                        * Referenced by: '<S222>/Status bits'
                                        */
  uint32_T FixPtConstant_Value_j;      /* Computed Parameter: FixPtConstant_Value_j
                                        * Referenced by: '<S227>/FixPt Constant'
                                        */
  uint32_T Output_InitialCondition_p;  /* Computed Parameter: Output_InitialCondition_p
                                        * Referenced by: '<S225>/Output'
                                        */
  uint32_T Constant_Value_dz;          /* Computed Parameter: Constant_Value_dz
                                        * Referenced by: '<S228>/Constant'
                                        */
  uint32_T Constant_Value_di;          /* Computed Parameter: Constant_Value_di
                                        * Referenced by: '<S222>/Constant'
                                        */
  uint32_T Constant1_Value_gt[7];      /* Computed Parameter: Constant1_Value_gt
                                        * Referenced by: '<S222>/Constant1'
                                        */
  uint32_T Constant1_Value_k;          /* Computed Parameter: Constant1_Value_k
                                        * Referenced by: '<S83>/Constant1'
                                        */
  uint32_T FixPtConstant_Value_n;      /* Computed Parameter: FixPtConstant_Value_n
                                        * Referenced by: '<S239>/FixPt Constant'
                                        */
  uint32_T Output_InitialCondition_b;  /* Computed Parameter: Output_InitialCondition_b
                                        * Referenced by: '<S234>/Output'
                                        */
  uint32_T Constant_Value_mf;          /* Computed Parameter: Constant_Value_mf
                                        * Referenced by: '<S240>/Constant'
                                        */
  uint32_T Output_InitialCondition_pe; /* Computed Parameter: Output_InitialCondition_pe
                                        * Referenced by: '<S77>/Output'
                                        */
  uint32_T FixPtConstant_Value_m;      /* Computed Parameter: FixPtConstant_Value_m
                                        * Referenced by: '<S188>/FixPt Constant'
                                        */
  uint32_T Constant_Value_kn;          /* Computed Parameter: Constant_Value_kn
                                        * Referenced by: '<S189>/Constant'
                                        */
  uint32_T ECATDigitalin_InitialValue[8];/* Computed Parameter: ECATDigitalin_InitialValue
                                          * Referenced by: '<S33>/ECAT Digital in'
                                          */
  uint32_T ServoUpdate_InitialValue;   /* Computed Parameter: ServoUpdate_InitialValue
                                        * Referenced by: '<S33>/ServoUpdate'
                                        */
  uint32_T Systemstatus_InitialValue[7];/* Computed Parameter: Systemstatus_InitialValue
                                         * Referenced by: '<S33>/System status'
                                         */
  uint32_T calibbutton_InitialValue;   /* Computed Parameter: calibbutton_InitialValue
                                        * Referenced by: '<S33>/calib button'
                                        */
  uint32_T Output_InitialCondition_a;  /* Computed Parameter: Output_InitialCondition_a
                                        * Referenced by: '<S43>/Output'
                                        */
  uint32_T FixPtConstant_Value_g;      /* Computed Parameter: FixPtConstant_Value_g
                                        * Referenced by: '<S45>/FixPt Constant'
                                        */
  uint32_T Constant_Value_cq;          /* Computed Parameter: Constant_Value_cq
                                        * Referenced by: '<S46>/Constant'
                                        */
  uint32_T ECATDigDiagnostic_InitialValue[4];/* Computed Parameter: ECATDigDiagnostic_InitialValue
                                              * Referenced by: '<S2>/ECAT Dig Diagnostic'
                                              */
  uint16_T Constant2_Value_k;          /* Computed Parameter: Constant2_Value_k
                                        * Referenced by: '<S205>/Constant2'
                                        */
  uint16_T Constant3_Value;            /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S205>/Constant3'
                                        */
  uint16_T Constant_Value_md;          /* Computed Parameter: Constant_Value_md
                                        * Referenced by: '<S205>/Constant'
                                        */
  uint16_T Constant2_Value_o;          /* Computed Parameter: Constant2_Value_o
                                        * Referenced by: '<S207>/Constant2'
                                        */
  uint16_T Constant3_Value_k;          /* Computed Parameter: Constant3_Value_k
                                        * Referenced by: '<S207>/Constant3'
                                        */
  uint16_T Constant_Value_cn;          /* Computed Parameter: Constant_Value_cn
                                        * Referenced by: '<S207>/Constant'
                                        */
  uint16_T Output_InitialCondition_bg; /* Computed Parameter: Output_InitialCondition_bg
                                        * Referenced by: '<S215>/Output'
                                        */
  uint16_T FixPtConstant_Value_c;      /* Computed Parameter: FixPtConstant_Value_c
                                        * Referenced by: '<S219>/FixPt Constant'
                                        */
  uint16_T Constant_Value_j;           /* Computed Parameter: Constant_Value_j
                                        * Referenced by: '<S220>/Constant'
                                        */
  int8_T TorqueMode_Value;             /* Computed Parameter: TorqueMode_Value
                                        * Referenced by: '<S74>/Torque Mode'
                                        */
  int8_T TorqueMode_Value_k;           /* Computed Parameter: TorqueMode_Value_k
                                        * Referenced by: '<S75>/Torque Mode'
                                        */
  uint8_T Switch1_Threshold_h;         /* Computed Parameter: Switch1_Threshold_h
                                        * Referenced by: '<S312>/Switch1'
                                        */
  boolean_T TmpRTBAtforcestrobeInport1_X0;/* Computed Parameter: TmpRTBAtforcestrobeInport1_X0
                                           * Referenced by: synthesized block
                                           */
  boolean_T Delay_X0;                  /* Computed Parameter: Delay_X0
                                        * Referenced by: '<S268>/Delay'
                                        */
  boolean_T Memory2_X0_l;              /* Computed Parameter: Memory2_X0_l
                                        * Referenced by: '<S24>/Memory2'
                                        */
  boolean_T Constant1_Value_p;         /* Computed Parameter: Constant1_Value_p
                                        * Referenced by: '<Root>/Constant1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_vmr_rwd_fix_leftarm_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[6];
    SimStruct childSFunctions[45];
    SimStruct *childSFunctionPtrs[45];
    struct _ssBlkInfo2 blkInfo2[45];
    struct _ssSFcnModelMethods2 methods2[45];
    struct _ssSFcnModelMethods3 methods3[45];
    struct _ssStatesInfo2 statesInfo2[45];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      struct _ssPortOutputs outputPortInfo[6];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssPortOutputs outputPortInfo[2];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[2];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[2];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn6;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn7;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[8];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn8;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[8];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn9;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn10;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn11;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn12;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn13;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[8];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn14;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[8];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn15;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn16;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn17;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn18;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn19;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn20;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn21;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[2];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn22;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[2];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn23;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[2];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn24;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn25;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      real_T const *UPtrs0[10];
      real_T const *UPtrs1[10];
      real_T const *UPtrs2[1];
      struct _ssPortOutputs outputPortInfo[10];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn26;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      real_T const *UPtrs0[1];
      real_T const *UPtrs1[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn27;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[2];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn28;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn29;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn30;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn31;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn32;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      real_T const *UPtrs0[512];
      real_T const *UPtrs1[1];
      struct _ssPortOutputs outputPortInfo[18];
    } Sfcn33;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[2];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn34;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn35;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn36;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn37;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn38;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[3];
      real_T const *UPtrs0[4];
      real_T const *UPtrs1[6];
      real_T const *UPtrs2[6];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn39;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn40;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[2];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn41;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[2];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn42;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[2];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn43;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      real_T const *UPtrs0[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn44;
  } NonInlinedSFcns;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
  } DataMapInfo;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    void *blockIO;
    const void *constBlockIO;
    void *defaultParam;
    ZCSigState *prevZCSigState;
    real_T *contStates;
    int_T *periodicContStateIndices;
    real_T *periodicContStateRanges;
    real_T *derivs;
    void *zcSignalValues;
    void *inputs;
    void *outputs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
    void *dwork;
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
    int_T numPeriodicContStates;
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
    uint32_T clockTick2;
    uint32_T clockTickH2;
    time_T stepSize2;
    uint32_T clockTick3;
    uint32_T clockTickH3;
    time_T stepSize3;
    uint32_T clockTick4;
    uint32_T clockTickH4;
    time_T stepSize4;
    uint32_T clockTick5;
    uint32_T clockTickH5;
    time_T stepSize5;
    struct {
      uint16_T TID[6];
    } TaskCounters;

    struct {
      boolean_T TID1_2;
      boolean_T TID1_3;
      boolean_T TID1_4;
      boolean_T TID2_3;
    } RateInteraction;

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
    time_T sampleTimesArray[6];
    time_T offsetTimesArray[6];
    int_T sampleTimeTaskIDArray[6];
    int_T sampleHitArray[6];
    int_T perTaskSampleHitsArray[36];
    time_T tArray[6];
  } Timing;
};

/* Block parameters (auto storage) */
extern P_vmr_rwd_fix_leftarm_T vmr_rwd_fix_leftarm_P;

/* Block signals (auto storage) */
extern B_vmr_rwd_fix_leftarm_T vmr_rwd_fix_leftarm_B;

/* Block states (auto storage) */
extern DW_vmr_rwd_fix_leftarm_T vmr_rwd_fix_leftarm_DW;
extern const ConstB_vmr_rwd_fix_leftarm_T vmr_rwd_fix_leftarm_ConstB;/* constant block i/o */

/* External function called from main */
extern time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
  ;

/* External data declarations for dependent source files */

/* Zero-crossing (trigger) state */
extern PrevZCX_vmr_rwd_fix_leftarm_T vmr_rwd_fix_leftarm_PrevZCX;

/*====================*
 * External functions *
 *====================*/
extern vmr_rwd_fix_leftarm_rtModel *vmr_rwd_fix_leftarm(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_vmr_rwd_fix_leftarm_T *const vmr_rwd_fix_leftarm_M;

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
 * '<Root>' : 'vmr_rwd_fix_leftarm'
 * '<S1>'   : 'vmr_rwd_fix_leftarm/Compare To Constant'
 * '<S2>'   : 'vmr_rwd_fix_leftarm/DataLogging'
 * '<S3>'   : 'vmr_rwd_fix_leftarm/DisplayInstruct'
 * '<S4>'   : 'vmr_rwd_fix_leftarm/DisplayText'
 * '<S5>'   : 'vmr_rwd_fix_leftarm/GUI Control'
 * '<S6>'   : 'vmr_rwd_fix_leftarm/Hand_Feedback'
 * '<S7>'   : 'vmr_rwd_fix_leftarm/KINARM_DistanceBetweenTargets'
 * '<S8>'   : 'vmr_rwd_fix_leftarm/KINARM_DistanceFromTarget'
 * '<S9>'   : 'vmr_rwd_fix_leftarm/KINARM_Exo_Apply_Loads'
 * '<S10>'  : 'vmr_rwd_fix_leftarm/KINARM_HandFeedbackInTarget'
 * '<S11>'  : 'vmr_rwd_fix_leftarm/Parameter Table Defn'
 * '<S12>'  : 'vmr_rwd_fix_leftarm/Play Sound'
 * '<S13>'  : 'vmr_rwd_fix_leftarm/Process_Video_CMD'
 * '<S14>'  : 'vmr_rwd_fix_leftarm/Scope 1'
 * '<S15>'  : 'vmr_rwd_fix_leftarm/Scope 2'
 * '<S16>'  : 'vmr_rwd_fix_leftarm/Scope 3'
 * '<S17>'  : 'vmr_rwd_fix_leftarm/Scope 4'
 * '<S18>'  : 'vmr_rwd_fix_leftarm/Scope 5'
 * '<S19>'  : 'vmr_rwd_fix_leftarm/Scope 6'
 * '<S20>'  : 'vmr_rwd_fix_leftarm/Show_Target'
 * '<S21>'  : 'vmr_rwd_fix_leftarm/Show_Target1'
 * '<S22>'  : 'vmr_rwd_fix_leftarm/Subsystem'
 * '<S23>'  : 'vmr_rwd_fix_leftarm/Trial_Control'
 * '<S24>'  : 'vmr_rwd_fix_leftarm/Visual_Rotation'
 * '<S25>'  : 'vmr_rwd_fix_leftarm/DataLogging/Create Analog Inputs Subsystem'
 * '<S26>'  : 'vmr_rwd_fix_leftarm/DataLogging/Create Custom Data Subsystem'
 * '<S27>'  : 'vmr_rwd_fix_leftarm/DataLogging/Create Event Codes Subsystem'
 * '<S28>'  : 'vmr_rwd_fix_leftarm/DataLogging/Create KINARM Data Subsystem'
 * '<S29>'  : 'vmr_rwd_fix_leftarm/DataLogging/Create Task State Subsystem'
 * '<S30>'  : 'vmr_rwd_fix_leftarm/DataLogging/Keep alive'
 * '<S31>'  : 'vmr_rwd_fix_leftarm/DataLogging/Network Transfer Subsystem'
 * '<S32>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll Force Plates'
 * '<S33>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM'
 * '<S34>'  : 'vmr_rwd_fix_leftarm/DataLogging/Receive_Gaze'
 * '<S35>'  : 'vmr_rwd_fix_leftarm/DataLogging/Terminators for Gotos'
 * '<S36>'  : 'vmr_rwd_fix_leftarm/DataLogging/apply loads'
 * '<S37>'  : 'vmr_rwd_fix_leftarm/DataLogging/compare encoders'
 * '<S38>'  : 'vmr_rwd_fix_leftarm/DataLogging/create_lab_info'
 * '<S39>'  : 'vmr_rwd_fix_leftarm/DataLogging/Create KINARM Data Subsystem/bitfield'
 * '<S40>'  : 'vmr_rwd_fix_leftarm/DataLogging/Create KINARM Data Subsystem/gaze_data'
 * '<S41>'  : 'vmr_rwd_fix_leftarm/DataLogging/Create KINARM Data Subsystem/select KINData'
 * '<S42>'  : 'vmr_rwd_fix_leftarm/DataLogging/Create KINARM Data Subsystem/select KINData/MATLAB Function'
 * '<S43>'  : 'vmr_rwd_fix_leftarm/DataLogging/Create Task State Subsystem/Counter Free-Running'
 * '<S44>'  : 'vmr_rwd_fix_leftarm/DataLogging/Create Task State Subsystem/If Running'
 * '<S45>'  : 'vmr_rwd_fix_leftarm/DataLogging/Create Task State Subsystem/Counter Free-Running/Increment Real World'
 * '<S46>'  : 'vmr_rwd_fix_leftarm/DataLogging/Create Task State Subsystem/Counter Free-Running/Wrap To Zero'
 * '<S47>'  : 'vmr_rwd_fix_leftarm/DataLogging/Network Transfer Subsystem/Data Packing Subsystem'
 * '<S48>'  : 'vmr_rwd_fix_leftarm/DataLogging/Network Transfer Subsystem/Send Control Machine'
 * '<S49>'  : 'vmr_rwd_fix_leftarm/DataLogging/Network Transfer Subsystem/UDP Receiver'
 * '<S50>'  : 'vmr_rwd_fix_leftarm/DataLogging/Network Transfer Subsystem/UDP Send Subsystem'
 * '<S51>'  : 'vmr_rwd_fix_leftarm/DataLogging/Network Transfer Subsystem/force strobe'
 * '<S52>'  : 'vmr_rwd_fix_leftarm/DataLogging/Network Transfer Subsystem/Data Packing Subsystem/Counter'
 * '<S53>'  : 'vmr_rwd_fix_leftarm/DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Counter Free-Running'
 * '<S54>'  : 'vmr_rwd_fix_leftarm/DataLogging/Network Transfer Subsystem/UDP Send Subsystem/MATLAB Function'
 * '<S55>'  : 'vmr_rwd_fix_leftarm/DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Counter Free-Running/Increment Real World'
 * '<S56>'  : 'vmr_rwd_fix_leftarm/DataLogging/Network Transfer Subsystem/UDP Send Subsystem/Counter Free-Running/Wrap To Zero'
 * '<S57>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll Force Plates/plate1'
 * '<S58>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll Force Plates/plate2'
 * '<S59>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll Force Plates/send poll 1'
 * '<S60>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll Force Plates/send poll 2'
 * '<S61>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll Force Plates/plate1/parse packet 1'
 * '<S62>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll Force Plates/plate2/parse packet 1'
 * '<S63>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem'
 * '<S64>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/Force Sensor Control'
 * '<S65>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/PMAC Subsystem'
 * '<S66>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/bkin_internal_testing'
 * '<S67>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/constants'
 * '<S68>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/control read write'
 * '<S69>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/createKINData'
 * '<S70>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/isecat'
 * '<S71>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/ispmac'
 * '<S72>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/make KINData bus'
 * '<S73>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/split_primary'
 * '<S74>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1'
 * '<S75>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2'
 * '<S76>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Compare'
 * '<S77>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Counter Free-Running'
 * '<S78>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output'
 * '<S79>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Init to Bus'
 * '<S80>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/latch_errors'
 * '<S81>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/sdo_addrs'
 * '<S82>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/setState'
 * '<S83>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/update'
 * '<S84>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1'
 * '<S85>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2'
 * '<S86>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/Find Robot type'
 * '<S87>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration'
 * '<S88>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration'
 * '<S89>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO read machine'
 * '<S90>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading'
 * '<S91>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO writing'
 * '<S92>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/forceEnableDisable'
 * '<S93>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem'
 * '<S94>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/size'
 * '<S95>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/size1'
 * '<S96>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants'
 * '<S97>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/split out constants1'
 * '<S98>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs'
 * '<S99>'  : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/Compare To Constant'
 * '<S100>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/Control GDC Whistle State'
 * '<S101>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump'
 * '<S102>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem'
 * '<S103>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/A1M1 PDOs/parse status register'
 * '<S104>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY'
 * '<S105>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Count'
 * '<S106>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/Read EMCY Value'
 * '<S107>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/clear errors'
 * '<S108>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/fault monitor'
 * '<S109>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/EMCY Message pump/fault monitor1'
 * '<S110>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M1/PDO to Angles Subsystem/countsToRads'
 * '<S111>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs'
 * '<S112>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/Compare'
 * '<S113>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/Control GDC Whistle State'
 * '<S114>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump'
 * '<S115>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/PDO to Angles Subsystem'
 * '<S116>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/A1M2 PDOs/parse status register1'
 * '<S117>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY'
 * '<S118>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Count'
 * '<S119>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/Read EMCY Value'
 * '<S120>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/clear errors'
 * '<S121>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/fault monitor'
 * '<S122>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/EMCY Message pump/fault monitor1'
 * '<S123>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/A1M2/PDO to Angles Subsystem/countsToRads'
 * '<S124>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/AbsEncoder machine'
 * '<S125>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M1 AbsEnc Calibration/set-up values'
 * '<S126>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/AbsEncoder machine'
 * '<S127>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/M2 AbsEnc Calibration/set-up values'
 * '<S128>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/Read Drive 1 SDO'
 * '<S129>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/SDO read machine'
 * '<S130>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/values'
 * '<S131>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO reading/Read Drive 1 SDO/converter'
 * '<S132>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO writing/SDO write machine'
 * '<S133>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/SDO writing/convert'
 * '<S134>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Read Drive 1 SDO'
 * '<S135>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 1/int subsystem/Read Drive 1 SDO/converter'
 * '<S136>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1'
 * '<S137>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2'
 * '<S138>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/Find Robot type'
 * '<S139>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration'
 * '<S140>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration'
 * '<S141>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO read machine'
 * '<S142>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading'
 * '<S143>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO writing'
 * '<S144>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/forceEnableDisable'
 * '<S145>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem'
 * '<S146>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/size'
 * '<S147>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/size1'
 * '<S148>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants'
 * '<S149>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/split out constants1'
 * '<S150>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs'
 * '<S151>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/Compare'
 * '<S152>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/Control GDC Whistle State'
 * '<S153>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump'
 * '<S154>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem'
 * '<S155>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/A2M1 PDOs/parse status register1'
 * '<S156>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY'
 * '<S157>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Count'
 * '<S158>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/Read EMCY Value'
 * '<S159>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/clear errors'
 * '<S160>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/fault monitor'
 * '<S161>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/EMCY Message pump/fault monitor1'
 * '<S162>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M1/PDO to Angles Subsystem/countsToRads'
 * '<S163>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs'
 * '<S164>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/Compare'
 * '<S165>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/Control GDC Whistle State'
 * '<S166>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump'
 * '<S167>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/PDO to Angles Subsystem'
 * '<S168>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/A2M2 PDOs/parse status register1'
 * '<S169>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY'
 * '<S170>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Count'
 * '<S171>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/Read EMCY Value'
 * '<S172>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/clear errors'
 * '<S173>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/fault monitor'
 * '<S174>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/EMCY Message pump/fault monitor1'
 * '<S175>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/A2M2/PDO to Angles Subsystem/countsToRads'
 * '<S176>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/AbsEncoder machine'
 * '<S177>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M1 AbsEnc Calibration/set-up values'
 * '<S178>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/AbsEncoder machine'
 * '<S179>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/M2 AbsEnc Calibration/set-up values'
 * '<S180>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/Read Drive 3 SDO'
 * '<S181>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/SDO read machine'
 * '<S182>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/values'
 * '<S183>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO reading/Read Drive 3 SDO/converter'
 * '<S184>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO writing/SDO write machine'
 * '<S185>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/SDO writing/convert'
 * '<S186>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Read Drive 3 SDO'
 * '<S187>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Arm 2/int subsystem/Read Drive 3 SDO/converter'
 * '<S188>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Counter Free-Running/Increment Real World'
 * '<S189>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Counter Free-Running/Wrap To Zero'
 * '<S190>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Digital output/update digital outputs'
 * '<S191>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/Init to Bus/split init'
 * '<S192>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/update/convert to bit field'
 * '<S193>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/update/create filtered velocities'
 * '<S194>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/update/create kinematics'
 * '<S195>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/update/create servo counter'
 * '<S196>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/update/robottype1'
 * '<S197>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/update/update HW settings'
 * '<S198>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/update/update calibrations'
 * '<S199>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/update/create filtered velocities/filter_velocities'
 * '<S200>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/EtherCAT Subsystem/update/create filtered velocities/rebuild'
 * '<S201>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem'
 * '<S202>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem'
 * '<S203>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Create timestamp'
 * '<S204>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/Detect Change'
 * '<S205>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 1 Subsystem/If Action Subsystem'
 * '<S206>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Create timestamp'
 * '<S207>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Data Transfer Start Subsystem'
 * '<S208>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/Force Sensor Control/Force Sensor 2 Subsystem/Detect Change'
 * '<S209>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/PMAC Subsystem/read_pmac'
 * '<S210>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/PMAC Subsystem/update settings'
 * '<S211>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem'
 * '<S212>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Monitor_status'
 * '<S213>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/Robot_data_builder'
 * '<S214>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/filter_velocities'
 * '<S215>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Counter Free-Running'
 * '<S216>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Read DPRAM'
 * '<S217>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/TypeCast'
 * '<S218>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Write DPRAM'
 * '<S219>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Counter Free-Running/Increment Real World'
 * '<S220>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/PMAC Subsystem/read_pmac/DPRAM Access Subsystem/Counter Free-Running/Wrap To Zero'
 * '<S221>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/PMAC Subsystem/update settings/update status format'
 * '<S222>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/bkin_internal_testing/Data receive'
 * '<S223>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/bkin_internal_testing/Data write'
 * '<S224>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/bkin_internal_testing/ispmac1'
 * '<S225>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Counter Free-Running'
 * '<S226>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/bkin_internal_testing/Data receive/MATLAB Function'
 * '<S227>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Counter Free-Running/Increment Real World'
 * '<S228>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/bkin_internal_testing/Data receive/Counter Free-Running/Wrap To Zero'
 * '<S229>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/constants/arm1'
 * '<S230>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/constants/arm2'
 * '<S231>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/constants/update constants subsystem'
 * '<S232>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/constants/arm1/decode robot'
 * '<S233>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/constants/arm2/decode robot'
 * '<S234>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/createKINData/Counter Free-Running'
 * '<S235>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/createKINData/Create KINARM Data Array'
 * '<S236>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/createKINData/bitpack'
 * '<S237>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/createKINData/hand feedback'
 * '<S238>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/createKINData/record errors'
 * '<S239>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/createKINData/Counter Free-Running/Increment Real World'
 * '<S240>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/createKINData/Counter Free-Running/Wrap To Zero'
 * '<S241>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/make KINData bus/splitKINData arm1'
 * '<S242>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/make KINData bus/splitKINData arm2'
 * '<S243>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/make KINData bus/splitKINDataGeneral'
 * '<S244>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/split_primary/split_primary'
 * '<S245>' : 'vmr_rwd_fix_leftarm/DataLogging/Poll KINARM/split_primary/split_primary1'
 * '<S246>' : 'vmr_rwd_fix_leftarm/DataLogging/Receive_Gaze/Create timestamp'
 * '<S247>' : 'vmr_rwd_fix_leftarm/DataLogging/Receive_Gaze/Embedded MATLAB Function1'
 * '<S248>' : 'vmr_rwd_fix_leftarm/DataLogging/Receive_Gaze/clean_packet'
 * '<S249>' : 'vmr_rwd_fix_leftarm/DataLogging/Receive_Gaze/convert to seconds2'
 * '<S250>' : 'vmr_rwd_fix_leftarm/DataLogging/apply loads/EtherCAT Apply Loads'
 * '<S251>' : 'vmr_rwd_fix_leftarm/DataLogging/apply loads/apply pmac loads'
 * '<S252>' : 'vmr_rwd_fix_leftarm/DataLogging/apply loads/isecat'
 * '<S253>' : 'vmr_rwd_fix_leftarm/DataLogging/apply loads/isecat1'
 * '<S254>' : 'vmr_rwd_fix_leftarm/DataLogging/apply loads/EtherCAT Apply Loads/A1 Apply torques'
 * '<S255>' : 'vmr_rwd_fix_leftarm/DataLogging/apply loads/EtherCAT Apply Loads/A2 Apply torques'
 * '<S256>' : 'vmr_rwd_fix_leftarm/DataLogging/apply loads/EtherCAT Apply Loads/convert torques'
 * '<S257>' : 'vmr_rwd_fix_leftarm/DataLogging/compare encoders/delta'
 * '<S258>' : 'vmr_rwd_fix_leftarm/DataLogging/create_lab_info/Subsystem'
 * '<S259>' : 'vmr_rwd_fix_leftarm/DataLogging/create_lab_info/Subsystem/MATLAB Function'
 * '<S260>' : 'vmr_rwd_fix_leftarm/DataLogging/create_lab_info/Subsystem/MATLAB Function1'
 * '<S261>' : 'vmr_rwd_fix_leftarm/DisplayInstruct/Show_Target1'
 * '<S262>' : 'vmr_rwd_fix_leftarm/DisplayInstruct/Show_Target1/Embedded MATLAB Function'
 * '<S263>' : 'vmr_rwd_fix_leftarm/DisplayText/MATLAB Function'
 * '<S264>' : 'vmr_rwd_fix_leftarm/DisplayText/Show_Target_With_Label'
 * '<S265>' : 'vmr_rwd_fix_leftarm/DisplayText/Show_Target_With_Label/Embedded MATLAB Function'
 * '<S266>' : 'vmr_rwd_fix_leftarm/GUI Control/Preview Targets Subsystem'
 * '<S267>' : 'vmr_rwd_fix_leftarm/GUI Control/Run Command Subsystem'
 * '<S268>' : 'vmr_rwd_fix_leftarm/GUI Control/Task Execution Control Subsystem'
 * '<S269>' : 'vmr_rwd_fix_leftarm/GUI Control/Task_progress'
 * '<S270>' : 'vmr_rwd_fix_leftarm/GUI Control/Unused Gotos Subsystem'
 * '<S271>' : 'vmr_rwd_fix_leftarm/GUI Control/Preview Targets Subsystem/Create Target Vector'
 * '<S272>' : 'vmr_rwd_fix_leftarm/GUI Control/Run Command Subsystem/Embedded MATLAB Function'
 * '<S273>' : 'vmr_rwd_fix_leftarm/GUI Control/Run Command Subsystem/Hold_to_1Khz'
 * '<S274>' : 'vmr_rwd_fix_leftarm/GUI Control/Task Execution Control Subsystem/Compare To Constant'
 * '<S275>' : 'vmr_rwd_fix_leftarm/GUI Control/Task Execution Control Subsystem/Task Execution Control Machine'
 * '<S276>' : 'vmr_rwd_fix_leftarm/GUI Control/Task_progress/Count trials'
 * '<S277>' : 'vmr_rwd_fix_leftarm/Hand_Feedback/FeedFwdArm'
 * '<S278>' : 'vmr_rwd_fix_leftarm/KINARM_DistanceBetweenTargets/Embedded MATLAB InsideTarget'
 * '<S279>' : 'vmr_rwd_fix_leftarm/KINARM_DistanceFromTarget/Embedded MATLAB InsideTarget'
 * '<S280>' : 'vmr_rwd_fix_leftarm/KINARM_DistanceFromTarget/Embedded MATLAB WhichHand'
 * '<S281>' : 'vmr_rwd_fix_leftarm/KINARM_Exo_Apply_Loads/Ramp_Up_Down'
 * '<S282>' : 'vmr_rwd_fix_leftarm/KINARM_Exo_Apply_Loads/Ramp_Up_Down1'
 * '<S283>' : 'vmr_rwd_fix_leftarm/KINARM_Exo_Apply_Loads/Remove_NaNs_and_Inf'
 * '<S284>' : 'vmr_rwd_fix_leftarm/KINARM_Exo_Apply_Loads/Remove_NaNs_and_Inf1'
 * '<S285>' : 'vmr_rwd_fix_leftarm/KINARM_Exo_Apply_Loads/Torque_Cap'
 * '<S286>' : 'vmr_rwd_fix_leftarm/KINARM_Exo_Apply_Loads/clip motor torques'
 * '<S287>' : 'vmr_rwd_fix_leftarm/KINARM_Exo_Apply_Loads/clip motor torques/clip_motor_torque'
 * '<S288>' : 'vmr_rwd_fix_leftarm/KINARM_HandFeedbackInTarget/Embedded MATLAB InsideTarget'
 * '<S289>' : 'vmr_rwd_fix_leftarm/KINARM_HandFeedbackInTarget/Embedded MATLAB WhichHand'
 * '<S290>' : 'vmr_rwd_fix_leftarm/Parameter Table Defn/TP_table'
 * '<S291>' : 'vmr_rwd_fix_leftarm/Parameter Table Defn/buttons'
 * '<S292>' : 'vmr_rwd_fix_leftarm/Parameter Table Defn/events'
 * '<S293>' : 'vmr_rwd_fix_leftarm/Parameter Table Defn/target_table'
 * '<S294>' : 'vmr_rwd_fix_leftarm/Parameter Table Defn/task_definition'
 * '<S295>' : 'vmr_rwd_fix_leftarm/Parameter Table Defn/task_wide'
 * '<S296>' : 'vmr_rwd_fix_leftarm/Play Sound/Play sound over and over'
 * '<S297>' : 'vmr_rwd_fix_leftarm/Play Sound/Scope '
 * '<S298>' : 'vmr_rwd_fix_leftarm/Play Sound/Subsystem2'
 * '<S299>' : 'vmr_rwd_fix_leftarm/Play Sound/Subsystem4'
 * '<S300>' : 'vmr_rwd_fix_leftarm/Process_Video_CMD/Add_requested_Delay'
 * '<S301>' : 'vmr_rwd_fix_leftarm/Process_Video_CMD/MATLAB Function'
 * '<S302>' : 'vmr_rwd_fix_leftarm/Process_Video_CMD/PVC_core'
 * '<S303>' : 'vmr_rwd_fix_leftarm/Process_Video_CMD/Add_requested_Delay/MATLAB Function'
 * '<S304>' : 'vmr_rwd_fix_leftarm/Process_Video_CMD/PVC_core/Pack VCodeFrame2'
 * '<S305>' : 'vmr_rwd_fix_leftarm/Show_Target/Embedded MATLAB Function'
 * '<S306>' : 'vmr_rwd_fix_leftarm/Show_Target1/Embedded MATLAB Function'
 * '<S307>' : 'vmr_rwd_fix_leftarm/Subsystem/Chart'
 * '<S308>' : 'vmr_rwd_fix_leftarm/Subsystem/KINARM_Exo_Position_Controller'
 * '<S309>' : 'vmr_rwd_fix_leftarm/Subsystem/MATLAB Function1'
 * '<S310>' : 'vmr_rwd_fix_leftarm/Subsystem/Show_Target'
 * '<S311>' : 'vmr_rwd_fix_leftarm/Subsystem/KINARM_Exo_Position_Controller/FF_FB_Position_Controller'
 * '<S312>' : 'vmr_rwd_fix_leftarm/Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO'
 * '<S313>' : 'vmr_rwd_fix_leftarm/Subsystem/KINARM_Exo_Position_Controller/KINARM filter'
 * '<S314>' : 'vmr_rwd_fix_leftarm/Subsystem/KINARM_Exo_Position_Controller/Subsystem'
 * '<S315>' : 'vmr_rwd_fix_leftarm/Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Detect Increase'
 * '<S316>' : 'vmr_rwd_fix_leftarm/Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Discrete Derivative'
 * '<S317>' : 'vmr_rwd_fix_leftarm/Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/Discrete Derivative1'
 * '<S318>' : 'vmr_rwd_fix_leftarm/Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/convert_to_segment_angles'
 * '<S319>' : 'vmr_rwd_fix_leftarm/Subsystem/KINARM_Exo_Position_Controller/Get_kinematics_EXO/xy_to_segment_angles_EXO'
 * '<S320>' : 'vmr_rwd_fix_leftarm/Subsystem/KINARM_Exo_Position_Controller/KINARM filter/consts'
 * '<S321>' : 'vmr_rwd_fix_leftarm/Subsystem/KINARM_Exo_Position_Controller/KINARM filter/filter'
 * '<S322>' : 'vmr_rwd_fix_leftarm/Subsystem/KINARM_Exo_Position_Controller/KINARM filter/get robot info'
 * '<S323>' : 'vmr_rwd_fix_leftarm/Subsystem/KINARM_Exo_Position_Controller/KINARM filter/get robot info/arm switch'
 * '<S324>' : 'vmr_rwd_fix_leftarm/Subsystem/Show_Target/Embedded MATLAB Function'
 * '<S325>' : 'vmr_rwd_fix_leftarm/Visual_Rotation/Embedded MATLAB Function'
 * '<S326>' : 'vmr_rwd_fix_leftarm/Visual_Rotation/Embedded MATLAB Function1'
 * '<S327>' : 'vmr_rwd_fix_leftarm/Visual_Rotation/MATLAB Function'
 * '<S328>' : 'vmr_rwd_fix_leftarm/Visual_Rotation/MATLAB Function1'
 * '<S329>' : 'vmr_rwd_fix_leftarm/Visual_Rotation/Show_Target'
 * '<S330>' : 'vmr_rwd_fix_leftarm/Visual_Rotation/Show_Target1'
 * '<S331>' : 'vmr_rwd_fix_leftarm/Visual_Rotation/Show_Target2'
 * '<S332>' : 'vmr_rwd_fix_leftarm/Visual_Rotation/Triggered Subsystem'
 * '<S333>' : 'vmr_rwd_fix_leftarm/Visual_Rotation/Show_Target/Embedded MATLAB Function'
 * '<S334>' : 'vmr_rwd_fix_leftarm/Visual_Rotation/Show_Target1/Embedded MATLAB Function'
 * '<S335>' : 'vmr_rwd_fix_leftarm/Visual_Rotation/Show_Target2/Embedded MATLAB Function'
 * '<S336>' : 'vmr_rwd_fix_leftarm/Visual_Rotation/Triggered Subsystem/Embedded MATLAB Function'
 */
#endif                                 /* RTW_HEADER_vmr_rwd_fix_leftarm_h_ */
