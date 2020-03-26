/*
 * vmr_rwd_fix_leftarm_types.h
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

#ifndef RTW_HEADER_vmr_rwd_fix_leftarm_types_h_
#define RTW_HEADER_vmr_rwd_fix_leftarm_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"

/* Custom Type definition for MATLAB Function: '<S128>/converter' */
#include <stddef.h>

/* Custom Type definition for MATLAB Function: '<S209>/Robot_data_builder' */
#ifndef struct_sbr0BdzAW6GQX2fQakj4o6C
#define struct_sbr0BdzAW6GQX2fQakj4o6C

struct sbr0BdzAW6GQX2fQakj4o6C
{
  real_T shoPos[5];
  real_T elbPos[5];
  real_T shoVel[5];
  real_T elbVel[5];
  real_T shoAcc;
  real_T elbAcc;
  real_T bHasSecondary;
};

#endif                                 /*struct_sbr0BdzAW6GQX2fQakj4o6C*/

#ifndef typedef_sbr0BdzAW6GQX2fQakj4o6C_vmr_rwd_fix_leftarm_T
#define typedef_sbr0BdzAW6GQX2fQakj4o6C_vmr_rwd_fix_leftarm_T

typedef struct sbr0BdzAW6GQX2fQakj4o6C
  sbr0BdzAW6GQX2fQakj4o6C_vmr_rwd_fix_leftarm_T;

#endif                                 /*typedef_sbr0BdzAW6GQX2fQakj4o6C_vmr_rwd_fix_leftarm_T*/

/* Custom Type definition for MATLAB Function: '<S209>/filter_velocities' */
#ifndef struct_shSrZ99dE4twa6ELJRaXlMD
#define struct_shSrZ99dE4twa6ELJRaXlMD

struct shSrZ99dE4twa6ELJRaXlMD
{
  real_T shoVel[3];
  real_T elbVel[3];
  real_T shoVelFilt[3];
  real_T elbVelFilt[3];
  real_T servoCounter[3];
};

#endif                                 /*struct_shSrZ99dE4twa6ELJRaXlMD*/

#ifndef typedef_shSrZ99dE4twa6ELJRaXlMD_vmr_rwd_fix_leftarm_T
#define typedef_shSrZ99dE4twa6ELJRaXlMD_vmr_rwd_fix_leftarm_T

typedef struct shSrZ99dE4twa6ELJRaXlMD
  shSrZ99dE4twa6ELJRaXlMD_vmr_rwd_fix_leftarm_T;

#endif                                 /*typedef_shSrZ99dE4twa6ELJRaXlMD_vmr_rwd_fix_leftarm_T*/

/* Parameters (auto storage) */
typedef struct P_vmr_rwd_fix_leftarm_T_ P_vmr_rwd_fix_leftarm_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_vmr_rwd_fix_leftarm_T RT_MODEL_vmr_rwd_fix_leftarm_T;

#endif                                 /* RTW_HEADER_vmr_rwd_fix_leftarm_types_h_ */
