/* Include files */

#include <stddef.h>
#include "blas.h"
#include "vmr_rwd_fix_leftarm_sfun.h"
#include "c11_vmr_rwd_fix_leftarm.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "vmr_rwd_fix_leftarm_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c_with_debugger(S, sfGlobalDebugInstanceStruct);

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization);
static void chart_debug_initialize_data_addresses(SimStruct *S);

/* Type Definitions */

/* Named Constants */
#define c11_event_e_clk                (0)
#define CALL_EVENT                     (-1)
#define c11_IN_NO_ACTIVE_CHILD         ((uint8_T)0U)
#define c11_IN_EnableState             ((uint8_T)1U)
#define c11_IN_Init                    ((uint8_T)2U)
#define c11_IN_RampDown                ((uint8_T)3U)
#define c11_IN_RampUp                  ((uint8_T)4U)
#define c11_IN_ResetController         ((uint8_T)5U)
#define c11_IN_AutoMoveToPos           ((uint8_T)1U)
#define c11_IN_GetDesiredXY            ((uint8_T)1U)
#define c11_IN_HoldAtDesiredXY         ((uint8_T)2U)
#define c11_IN_MovingToDesiredXY       ((uint8_T)3U)
#define c11_const_pi                   (3.14159265358979)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;

/* Function Declarations */
static void initialize_c11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void initialize_params_c11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void enable_c11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void disable_c11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void c11_update_debugger_state_c11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void ext_mode_exec_c11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void set_sim_state_c11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance, const mxArray *c11_st);
static void c11_set_sim_state_side_effects_c11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void finalize_c11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void sf_gateway_c11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void mdl_start_c11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void c11_chartstep_c11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void initSimStructsc11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void c11_EnableState(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance);
static void c11_exit_internal_EnableState
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void c11_enter_atomic_GetDesiredXY
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void c11_enter_atomic_RampUp(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance);
static void c11_enter_atomic_RampDown(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c11_machineNumber, uint32_T
  c11_chartNumber, uint32_T c11_instanceNumber);
static const mxArray *c11_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData);
static int8_T c11_emlrt_marshallIn(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId);
static void c11_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c11_mxArrayInData, const char_T *c11_varName, void *c11_outData);
static const mxArray *c11_b_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData);
static uint32_T c11_b_emlrt_marshallIn(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c11_b_reset_controllerEventCounter, const
  char_T *c11_identifier);
static uint32_T c11_c_emlrt_marshallIn(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId);
static void c11_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c11_mxArrayInData, const char_T *c11_varName, void *c11_outData);
static const mxArray *c11_c_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData);
static int32_T c11_d_emlrt_marshallIn(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId);
static void c11_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c11_mxArrayInData, const char_T *c11_varName, void *c11_outData);
static const mxArray *c11_d_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData);
static uint8_T c11_e_emlrt_marshallIn(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c11_b_is_EnableState, const char_T
  *c11_identifier);
static uint8_T c11_f_emlrt_marshallIn(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId);
static void c11_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c11_mxArrayInData, const char_T *c11_varName, void *c11_outData);
static const mxArray *c11_e_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData);
static const mxArray *c11_f_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData);
static const mxArray *c11_g_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData);
static const mxArray *c11_h_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData);
static const mxArray *c11_i_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData);
static real_T c11_g_emlrt_marshallIn(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c11_b_force_scale, const char_T *c11_identifier);
static real_T c11_h_emlrt_marshallIn(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId);
static void c11_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c11_mxArrayInData, const char_T *c11_varName, void *c11_outData);
static void c11_i_emlrt_marshallIn(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c11_b_virtual_pos, const char_T *c11_identifier,
  real_T c11_y[2]);
static void c11_j_emlrt_marshallIn(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId,
  real_T c11_y[2]);
static void c11_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c11_mxArrayInData, const char_T *c11_varName, void *c11_outData);
static boolean_T c11_k_emlrt_marshallIn(SFc11_vmr_rwd_fix_leftarmInstanceStruct *
  chartInstance, const mxArray *c11_b_updatepos, const char_T *c11_identifier);
static boolean_T c11_l_emlrt_marshallIn(SFc11_vmr_rwd_fix_leftarmInstanceStruct *
  chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId);
static void c11_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c11_mxArrayInData, const char_T *c11_varName, void *c11_outData);
static const mxArray *c11_m_emlrt_marshallIn
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance, const mxArray
   *c11_b_setSimStateSideEffectsInfo, const char_T *c11_identifier);
static const mxArray *c11_n_emlrt_marshallIn
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance, const mxArray *c11_u,
   const emlrtMsgIdentifier *c11_parentId);
static void init_dsm_address_info(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  int32_T c11_i0;
  int32_T c11_i1;
  int32_T c11_i2;
  int32_T c11_i3;
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc11_vmr_rwd_fix_leftarm(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c11_doSetSimStateSideEffects = 0U;
  chartInstance->c11_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c11_is_EnableState = c11_IN_NO_ACTIVE_CHILD;
  *chartInstance->c11_is_AutoMoveToPos = c11_IN_NO_ACTIVE_CHILD;
  *chartInstance->c11_temporalCounter_i1 = 0U;
  *chartInstance->c11_temporalCounter_i1 = 0U;
  *chartInstance->c11_is_active_c11_vmr_rwd_fix_leftarm = 0U;
  *chartInstance->c11_is_c11_vmr_rwd_fix_leftarm = c11_IN_NO_ACTIVE_CHILD;
  *chartInstance->c11_tickCount = 0.0;
  for (c11_i0 = 0; c11_i0 < 2; c11_i0++) {
    (*chartInstance->c11_StartPos)[c11_i0] = 0.0;
  }

  for (c11_i1 = 0; c11_i1 < 2; c11_i1++) {
    (*chartInstance->c11_TgtPos)[c11_i1] = 0.0;
  }

  *chartInstance->c11_updatepos = false;
  for (c11_i2 = 0; c11_i2 < 2; c11_i2++) {
    (*chartInstance->c11_CurHandPos)[c11_i2] = 0.0;
  }

  *chartInstance->c11_ramp_time = 0.0;
  *chartInstance->c11_scale_increment = 0.0;
  *chartInstance->c11_tick = 0.0;
  *chartInstance->c11_trajectory_shape = 0.0;
  chartInstance->c11_pi = 3.14159265358979;
  if (!(sf_get_output_port_reusable(chartInstance->S, 1) != 0)) {
    *chartInstance->c11_force_scale = 0.0;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 2) != 0)) {
    for (c11_i3 = 0; c11_i3 < 2; c11_i3++) {
      (*chartInstance->c11_virtual_pos)[c11_i3] = 0.0;
    }
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 3) != 0)) {
    *chartInstance->c11_state = 0.0;
  }

  *chartInstance->c11_reset_controllerEventCounter = 0U;
  *chartInstance->c11_reset_controller = false;
}

static void initialize_params_c11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c11_update_debugger_state_c11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  uint32_T c11_prevAniVal;
  c11_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (*chartInstance->c11_is_active_c11_vmr_rwd_fix_leftarm == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 10U, *chartInstance->c11_sfEvent);
  }

  if (*chartInstance->c11_is_c11_vmr_rwd_fix_leftarm == c11_IN_EnableState) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c11_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c11_sfEvent);
  }

  if (*chartInstance->c11_is_EnableState == c11_IN_AutoMoveToPos) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c11_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c11_sfEvent);
  }

  if (*chartInstance->c11_is_AutoMoveToPos == c11_IN_MovingToDesiredXY) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c11_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c11_sfEvent);
  }

  if (*chartInstance->c11_is_AutoMoveToPos == c11_IN_GetDesiredXY) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c11_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c11_sfEvent);
  }

  if (*chartInstance->c11_is_AutoMoveToPos == c11_IN_HoldAtDesiredXY) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c11_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c11_sfEvent);
  }

  if (*chartInstance->c11_is_c11_vmr_rwd_fix_leftarm == c11_IN_Init) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c11_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c11_sfEvent);
  }

  if (*chartInstance->c11_is_c11_vmr_rwd_fix_leftarm == c11_IN_RampUp) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c11_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c11_sfEvent);
  }

  if (*chartInstance->c11_is_c11_vmr_rwd_fix_leftarm == c11_IN_ResetController)
  {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c11_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c11_sfEvent);
  }

  if (*chartInstance->c11_is_c11_vmr_rwd_fix_leftarm == c11_IN_RampDown) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c11_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c11_sfEvent);
  }

  _SFD_SET_ANIMATION(c11_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  c11_update_debugger_state_c11_vmr_rwd_fix_leftarm(chartInstance);
}

static const mxArray *get_sim_state_c11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  const mxArray *c11_st;
  const mxArray *c11_y = NULL;
  real_T c11_hoistedGlobal;
  real_T c11_u;
  const mxArray *c11_b_y = NULL;
  real_T c11_b_hoistedGlobal;
  real_T c11_b_u;
  const mxArray *c11_c_y = NULL;
  const mxArray *c11_d_y = NULL;
  const mxArray *c11_e_y = NULL;
  const mxArray *c11_f_y = NULL;
  const mxArray *c11_g_y = NULL;
  real_T c11_c_hoistedGlobal;
  real_T c11_c_u;
  const mxArray *c11_h_y = NULL;
  real_T c11_d_hoistedGlobal;
  real_T c11_d_u;
  const mxArray *c11_i_y = NULL;
  real_T c11_e_hoistedGlobal;
  real_T c11_e_u;
  const mxArray *c11_j_y = NULL;
  real_T c11_f_hoistedGlobal;
  real_T c11_f_u;
  const mxArray *c11_k_y = NULL;
  real_T c11_g_hoistedGlobal;
  real_T c11_g_u;
  const mxArray *c11_l_y = NULL;
  boolean_T c11_h_hoistedGlobal;
  boolean_T c11_h_u;
  const mxArray *c11_m_y = NULL;
  boolean_T c11_i_hoistedGlobal;
  boolean_T c11_i_u;
  const mxArray *c11_n_y = NULL;
  uint32_T c11_j_hoistedGlobal;
  uint32_T c11_j_u;
  const mxArray *c11_o_y = NULL;
  uint8_T c11_k_hoistedGlobal;
  uint8_T c11_k_u;
  const mxArray *c11_p_y = NULL;
  uint8_T c11_l_hoistedGlobal;
  uint8_T c11_l_u;
  const mxArray *c11_q_y = NULL;
  uint8_T c11_m_hoistedGlobal;
  uint8_T c11_m_u;
  const mxArray *c11_r_y = NULL;
  uint8_T c11_n_hoistedGlobal;
  uint8_T c11_n_u;
  const mxArray *c11_s_y = NULL;
  uint32_T c11_o_hoistedGlobal;
  uint32_T c11_o_u;
  const mxArray *c11_t_y = NULL;
  c11_st = NULL;
  c11_st = NULL;
  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_createcellmatrix(19, 1), false);
  c11_hoistedGlobal = *chartInstance->c11_force_scale;
  c11_u = c11_hoistedGlobal;
  c11_b_y = NULL;
  sf_mex_assign(&c11_b_y, sf_mex_create("y", &c11_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c11_y, 0, c11_b_y);
  c11_b_hoistedGlobal = *chartInstance->c11_state;
  c11_b_u = c11_b_hoistedGlobal;
  c11_c_y = NULL;
  sf_mex_assign(&c11_c_y, sf_mex_create("y", &c11_b_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c11_y, 1, c11_c_y);
  c11_d_y = NULL;
  sf_mex_assign(&c11_d_y, sf_mex_create("y", *chartInstance->c11_virtual_pos, 0,
    0U, 1U, 0U, 1, 2), false);
  sf_mex_setcell(c11_y, 2, c11_d_y);
  c11_e_y = NULL;
  sf_mex_assign(&c11_e_y, sf_mex_create("y", *chartInstance->c11_CurHandPos, 0,
    0U, 1U, 0U, 1, 2), false);
  sf_mex_setcell(c11_y, 3, c11_e_y);
  c11_f_y = NULL;
  sf_mex_assign(&c11_f_y, sf_mex_create("y", *chartInstance->c11_StartPos, 0, 0U,
    1U, 0U, 1, 2), false);
  sf_mex_setcell(c11_y, 4, c11_f_y);
  c11_g_y = NULL;
  sf_mex_assign(&c11_g_y, sf_mex_create("y", *chartInstance->c11_TgtPos, 0, 0U,
    1U, 0U, 1, 2), false);
  sf_mex_setcell(c11_y, 5, c11_g_y);
  c11_c_hoistedGlobal = *chartInstance->c11_ramp_time;
  c11_c_u = c11_c_hoistedGlobal;
  c11_h_y = NULL;
  sf_mex_assign(&c11_h_y, sf_mex_create("y", &c11_c_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c11_y, 6, c11_h_y);
  c11_d_hoistedGlobal = *chartInstance->c11_scale_increment;
  c11_d_u = c11_d_hoistedGlobal;
  c11_i_y = NULL;
  sf_mex_assign(&c11_i_y, sf_mex_create("y", &c11_d_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c11_y, 7, c11_i_y);
  c11_e_hoistedGlobal = *chartInstance->c11_tick;
  c11_e_u = c11_e_hoistedGlobal;
  c11_j_y = NULL;
  sf_mex_assign(&c11_j_y, sf_mex_create("y", &c11_e_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c11_y, 8, c11_j_y);
  c11_f_hoistedGlobal = *chartInstance->c11_tickCount;
  c11_f_u = c11_f_hoistedGlobal;
  c11_k_y = NULL;
  sf_mex_assign(&c11_k_y, sf_mex_create("y", &c11_f_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c11_y, 9, c11_k_y);
  c11_g_hoistedGlobal = *chartInstance->c11_trajectory_shape;
  c11_g_u = c11_g_hoistedGlobal;
  c11_l_y = NULL;
  sf_mex_assign(&c11_l_y, sf_mex_create("y", &c11_g_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c11_y, 10, c11_l_y);
  c11_h_hoistedGlobal = *chartInstance->c11_updatepos;
  c11_h_u = c11_h_hoistedGlobal;
  c11_m_y = NULL;
  sf_mex_assign(&c11_m_y, sf_mex_create("y", &c11_h_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c11_y, 11, c11_m_y);
  c11_i_hoistedGlobal = *chartInstance->c11_reset_controller;
  c11_i_u = c11_i_hoistedGlobal;
  c11_n_y = NULL;
  sf_mex_assign(&c11_n_y, sf_mex_create("y", &c11_i_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c11_y, 12, c11_n_y);
  c11_j_hoistedGlobal = *chartInstance->c11_reset_controllerEventCounter;
  c11_j_u = c11_j_hoistedGlobal;
  c11_o_y = NULL;
  sf_mex_assign(&c11_o_y, sf_mex_create("y", &c11_j_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c11_y, 13, c11_o_y);
  c11_k_hoistedGlobal = *chartInstance->c11_is_active_c11_vmr_rwd_fix_leftarm;
  c11_k_u = c11_k_hoistedGlobal;
  c11_p_y = NULL;
  sf_mex_assign(&c11_p_y, sf_mex_create("y", &c11_k_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c11_y, 14, c11_p_y);
  c11_l_hoistedGlobal = *chartInstance->c11_is_c11_vmr_rwd_fix_leftarm;
  c11_l_u = c11_l_hoistedGlobal;
  c11_q_y = NULL;
  sf_mex_assign(&c11_q_y, sf_mex_create("y", &c11_l_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c11_y, 15, c11_q_y);
  c11_m_hoistedGlobal = *chartInstance->c11_is_EnableState;
  c11_m_u = c11_m_hoistedGlobal;
  c11_r_y = NULL;
  sf_mex_assign(&c11_r_y, sf_mex_create("y", &c11_m_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c11_y, 16, c11_r_y);
  c11_n_hoistedGlobal = *chartInstance->c11_is_AutoMoveToPos;
  c11_n_u = c11_n_hoistedGlobal;
  c11_s_y = NULL;
  sf_mex_assign(&c11_s_y, sf_mex_create("y", &c11_n_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c11_y, 17, c11_s_y);
  c11_o_hoistedGlobal = *chartInstance->c11_temporalCounter_i1;
  c11_o_u = c11_o_hoistedGlobal;
  c11_t_y = NULL;
  sf_mex_assign(&c11_t_y, sf_mex_create("y", &c11_o_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c11_y, 18, c11_t_y);
  sf_mex_assign(&c11_st, c11_y, false);
  return c11_st;
}

static void set_sim_state_c11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance, const mxArray *c11_st)
{
  const mxArray *c11_u;
  real_T c11_dv0[2];
  int32_T c11_i4;
  real_T c11_dv1[2];
  int32_T c11_i5;
  real_T c11_dv2[2];
  int32_T c11_i6;
  real_T c11_dv3[2];
  int32_T c11_i7;
  c11_u = sf_mex_dup(c11_st);
  *chartInstance->c11_force_scale = c11_g_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("force_scale", c11_u, 0)), "force_scale");
  *chartInstance->c11_state = c11_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("state", c11_u, 1)), "state");
  c11_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("virtual_pos",
    c11_u, 2)), "virtual_pos", c11_dv0);
  for (c11_i4 = 0; c11_i4 < 2; c11_i4++) {
    (*chartInstance->c11_virtual_pos)[c11_i4] = c11_dv0[c11_i4];
  }

  c11_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("CurHandPos",
    c11_u, 3)), "CurHandPos", c11_dv1);
  for (c11_i5 = 0; c11_i5 < 2; c11_i5++) {
    (*chartInstance->c11_CurHandPos)[c11_i5] = c11_dv1[c11_i5];
  }

  c11_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("StartPos",
    c11_u, 4)), "StartPos", c11_dv2);
  for (c11_i6 = 0; c11_i6 < 2; c11_i6++) {
    (*chartInstance->c11_StartPos)[c11_i6] = c11_dv2[c11_i6];
  }

  c11_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("TgtPos",
    c11_u, 5)), "TgtPos", c11_dv3);
  for (c11_i7 = 0; c11_i7 < 2; c11_i7++) {
    (*chartInstance->c11_TgtPos)[c11_i7] = c11_dv3[c11_i7];
  }

  *chartInstance->c11_ramp_time = c11_g_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("ramp_time", c11_u, 6)), "ramp_time");
  *chartInstance->c11_scale_increment = c11_g_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("scale_increment", c11_u, 7)), "scale_increment");
  *chartInstance->c11_tick = c11_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("tick", c11_u, 8)), "tick");
  *chartInstance->c11_tickCount = c11_g_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("tickCount", c11_u, 9)), "tickCount");
  *chartInstance->c11_trajectory_shape = c11_g_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("trajectory_shape", c11_u, 10)),
    "trajectory_shape");
  *chartInstance->c11_updatepos = c11_k_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("updatepos", c11_u, 11)), "updatepos");
  *chartInstance->c11_reset_controller = c11_k_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("reset_controller", c11_u, 12)),
    "reset_controller");
  *chartInstance->c11_reset_controllerEventCounter = c11_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("reset_controllerEventCounter",
       c11_u, 13)), "reset_controllerEventCounter");
  *chartInstance->c11_is_active_c11_vmr_rwd_fix_leftarm = c11_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(
       "is_active_c11_vmr_rwd_fix_leftarm", c11_u, 14)),
     "is_active_c11_vmr_rwd_fix_leftarm");
  *chartInstance->c11_is_c11_vmr_rwd_fix_leftarm = c11_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_c11_vmr_rwd_fix_leftarm",
       c11_u, 15)), "is_c11_vmr_rwd_fix_leftarm");
  *chartInstance->c11_is_EnableState = c11_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_EnableState", c11_u, 16)), "is_EnableState");
  *chartInstance->c11_is_AutoMoveToPos = c11_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_AutoMoveToPos", c11_u, 17)),
    "is_AutoMoveToPos");
  *chartInstance->c11_temporalCounter_i1 = c11_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("temporalCounter_i1", c11_u, 18)),
    "temporalCounter_i1");
  sf_mex_assign(&chartInstance->c11_setSimStateSideEffectsInfo,
                c11_m_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "setSimStateSideEffectsInfo", c11_u, 19)), "setSimStateSideEffectsInfo"),
                true);
  sf_mex_destroy(&c11_u);
  chartInstance->c11_doSetSimStateSideEffects = 1U;
  c11_update_debugger_state_c11_vmr_rwd_fix_leftarm(chartInstance);
  sf_mex_destroy(&c11_st);
}

static void c11_set_sim_state_side_effects_c11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  if (chartInstance->c11_doSetSimStateSideEffects != 0) {
    if (*chartInstance->c11_is_AutoMoveToPos == c11_IN_GetDesiredXY) {
      if (sf_mex_sub(chartInstance->c11_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 4) == 0.0) {
        *chartInstance->c11_temporalCounter_i1 = 0U;
      }
    }

    if (*chartInstance->c11_is_AutoMoveToPos == c11_IN_MovingToDesiredXY) {
      if (sf_mex_sub(chartInstance->c11_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 6) == 0.0) {
        *chartInstance->c11_temporalCounter_i1 = 0U;
      }
    }

    chartInstance->c11_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c11_setSimStateSideEffectsInfo);
}

static void sf_gateway_c11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  int32_T c11_i8;
  int32_T c11_i9;
  int32_T c11_i10;
  int32_T c11_i11;
  int32_T c11_i12;
  int32_T c11_i13;
  int32_T c11_i14;
  c11_set_sim_state_side_effects_c11_vmr_rwd_fix_leftarm(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 10U, *chartInstance->c11_sfEvent);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c11_state, 63U, 1U, 0U,
                        *chartInstance->c11_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(chartInstance->c11_pi, 64U, 1U, 0U,
                        *chartInstance->c11_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c11_trajectory_shape, 55U, 1U, 0U,
                        *chartInstance->c11_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c11_tick, 53U, 1U, 0U,
                        *chartInstance->c11_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c11_scale_increment, 52U, 1U, 0U,
                        *chartInstance->c11_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c11_ramp_time, 51U, 1U, 0U,
                        *chartInstance->c11_sfEvent, false);
  for (c11_i8 = 0; c11_i8 < 2; c11_i8++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c11_CurHandPos)[c11_i8], 48U, 1U, 0U,
                          *chartInstance->c11_sfEvent, false);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c11_updatepos, 56U, 1U, 0U,
                        *chartInstance->c11_sfEvent, false);
  for (c11_i9 = 0; c11_i9 < 2; c11_i9++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c11_TgtPos)[c11_i9], 50U, 1U, 0U,
                          *chartInstance->c11_sfEvent, false);
  }

  for (c11_i10 = 0; c11_i10 < 2; c11_i10++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c11_StartPos)[c11_i10], 49U, 1U, 0U, *
                          chartInstance->c11_sfEvent, false);
  }

  _SFD_DATA_RANGE_CHECK(*chartInstance->c11_tickCount, 54U, 1U, 0U,
                        *chartInstance->c11_sfEvent, false);
  for (c11_i11 = 0; c11_i11 < 2; c11_i11++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c11_virtual_pos)[c11_i11], 62U, 1U,
                          0U, *chartInstance->c11_sfEvent, false);
  }

  _SFD_DATA_RANGE_CHECK(*chartInstance->c11_force_scale, 61U, 1U, 0U,
                        *chartInstance->c11_sfEvent, false);
  for (c11_i12 = 0; c11_i12 < 50; c11_i12++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c11_TaskwideParams)[c11_i12], 60U, 1U,
                          0U, *chartInstance->c11_sfEvent, false);
  }

  for (c11_i13 = 0; c11_i13 < 2; c11_i13++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c11_HandPos)[c11_i13], 59U, 1U, 0U,
                          *chartInstance->c11_sfEvent, false);
  }

  for (c11_i14 = 0; c11_i14 < 2; c11_i14++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c11_DesiredPos)[c11_i14], 58U, 1U, 0U,
                          *chartInstance->c11_sfEvent, false);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c11_enable_controller, 57U, 1U,
                        0U, *chartInstance->c11_sfEvent, false);
  if (*chartInstance->c11_temporalCounter_i1 < MAX_uint32_T) {
    (*chartInstance->c11_temporalCounter_i1)++;
  }

  *chartInstance->c11_sfEvent = c11_event_e_clk;
  _SFD_CE_CALL(EVENT_BEFORE_BROADCAST_TAG, c11_event_e_clk,
               *chartInstance->c11_sfEvent);
  c11_chartstep_c11_vmr_rwd_fix_leftarm(chartInstance);
  _SFD_CE_CALL(EVENT_AFTER_BROADCAST_TAG, c11_event_e_clk,
               *chartInstance->c11_sfEvent);
  if (*chartInstance->c11_reset_controllerEventCounter > 0U) {
    *chartInstance->c11_reset_controller = !*chartInstance->c11_reset_controller;
    (*chartInstance->c11_reset_controllerEventCounter)--;
  }

  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_vmr_rwd_fix_leftarmMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c11_chartstep_c11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  boolean_T c11_out;
  int32_T c11_i15;
  int32_T c11_i16;
  boolean_T c11_b_out;
  boolean_T c11_c_out;
  boolean_T c11_d_out;
  boolean_T c11_e_out;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 10U, *chartInstance->c11_sfEvent);
  if (*chartInstance->c11_is_active_c11_vmr_rwd_fix_leftarm == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 10U,
                 *chartInstance->c11_sfEvent);
    *chartInstance->c11_is_active_c11_vmr_rwd_fix_leftarm = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 10U, *chartInstance->c11_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, *chartInstance->c11_sfEvent);
    *chartInstance->c11_is_c11_vmr_rwd_fix_leftarm = c11_IN_Init;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c11_sfEvent);
    *chartInstance->c11_ramp_time = (*chartInstance->c11_TaskwideParams)[13];
    _SFD_DATA_RANGE_CHECK(*chartInstance->c11_ramp_time, 51U, 4U, 5U,
                          *chartInstance->c11_sfEvent, false);
    *chartInstance->c11_scale_increment = 1.0 / *chartInstance->c11_ramp_time;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c11_scale_increment, 52U, 4U, 5U,
                          *chartInstance->c11_sfEvent, false);
    *chartInstance->c11_force_scale = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c11_force_scale, 61U, 4U, 5U,
                          *chartInstance->c11_sfEvent, false);
    *chartInstance->c11_state = 1.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c11_state, 63U, 4U, 5U,
                          *chartInstance->c11_sfEvent, false);
  } else {
    switch (*chartInstance->c11_is_c11_vmr_rwd_fix_leftarm) {
     case c11_IN_EnableState:
      CV_CHART_EVAL(10, 0, 1);
      c11_EnableState(chartInstance);
      break;

     case c11_IN_Init:
      CV_CHART_EVAL(10, 0, 2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   *chartInstance->c11_sfEvent);
      c11_out = (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0,
        CV_RELATIONAL_EVAL(5U, 1U, 0, (real_T)
                           *chartInstance->c11_enable_controller, 1.0, 0, 0U,
                           (int32_T)*chartInstance->c11_enable_controller) != 0U,
        *chartInstance->c11_sfEvent)) != 0);
      if (c11_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c11_sfEvent);
        *chartInstance->c11_is_c11_vmr_rwd_fix_leftarm = c11_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c11_sfEvent);
        _SFD_CT_CALL(TRANSITION_BEFORE_TRANS_ACTION_TAG, 1U,
                     *chartInstance->c11_sfEvent);
        *chartInstance->c11_force_scale = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c11_force_scale, 61U, 5U, 1U,
                              *chartInstance->c11_sfEvent, false);
        *chartInstance->c11_is_c11_vmr_rwd_fix_leftarm = c11_IN_ResetController;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c11_sfEvent);
        (*chartInstance->c11_reset_controllerEventCounter)++;
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U,
                     *chartInstance->c11_sfEvent);
        (*chartInstance->c11_CurHandPos)[0] = (*chartInstance->c11_HandPos)[0];
        for (c11_i15 = 0; c11_i15 < 2; c11_i15++) {
          _SFD_DATA_RANGE_CHECK((*chartInstance->c11_CurHandPos)[c11_i15], 48U,
                                4U, 5U, *chartInstance->c11_sfEvent, false);
        }

        (*chartInstance->c11_CurHandPos)[1] = (*chartInstance->c11_HandPos)[1];
        for (c11_i16 = 0; c11_i16 < 2; c11_i16++) {
          _SFD_DATA_RANGE_CHECK((*chartInstance->c11_CurHandPos)[c11_i16], 48U,
                                4U, 5U, *chartInstance->c11_sfEvent, false);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, *chartInstance->c11_sfEvent);
      break;

     case c11_IN_RampDown:
      CV_CHART_EVAL(10, 0, 3);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                   *chartInstance->c11_sfEvent);
      c11_b_out = (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3U, 0,
        CV_RELATIONAL_EVAL(5U, 3U, 0, (real_T)
                           *chartInstance->c11_enable_controller, 1.0, 0, 0U,
                           (int32_T)*chartInstance->c11_enable_controller) != 0U,
        *chartInstance->c11_sfEvent)) != 0);
      if (c11_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c11_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c11_sfEvent);
        *chartInstance->c11_is_c11_vmr_rwd_fix_leftarm = c11_IN_RampUp;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c11_sfEvent);
        c11_enter_atomic_RampUp(chartInstance);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U,
                     *chartInstance->c11_sfEvent);
        c11_c_out = (CV_TRANSITION_EVAL(10U, (int32_T)_SFD_CCP_CALL(10U, 0,
          CV_RELATIONAL_EVAL(5U, 10U, 0, *chartInstance->c11_force_scale, 0.0,
                             -1, 2U, *chartInstance->c11_force_scale < 0.0) !=
          0U, *chartInstance->c11_sfEvent)) != 0);
        if (c11_c_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, *chartInstance->c11_sfEvent);
          *chartInstance->c11_is_c11_vmr_rwd_fix_leftarm =
            c11_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c11_sfEvent);
          _SFD_CT_CALL(TRANSITION_BEFORE_TRANS_ACTION_TAG, 10U,
                       *chartInstance->c11_sfEvent);
          *chartInstance->c11_force_scale = 0.0;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c11_force_scale, 61U, 5U, 10U,
                                *chartInstance->c11_sfEvent, false);
          *chartInstance->c11_is_c11_vmr_rwd_fix_leftarm = c11_IN_Init;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c11_sfEvent);
          *chartInstance->c11_ramp_time = (*chartInstance->c11_TaskwideParams)
            [13];
          _SFD_DATA_RANGE_CHECK(*chartInstance->c11_ramp_time, 51U, 4U, 5U,
                                *chartInstance->c11_sfEvent, false);
          *chartInstance->c11_scale_increment = 1.0 /
            *chartInstance->c11_ramp_time;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c11_scale_increment, 52U, 4U, 5U,
                                *chartInstance->c11_sfEvent, false);
          *chartInstance->c11_force_scale = 0.0;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c11_force_scale, 61U, 4U, 5U,
                                *chartInstance->c11_sfEvent, false);
          *chartInstance->c11_state = 1.0;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c11_state, 63U, 4U, 5U,
                                *chartInstance->c11_sfEvent, false);
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 6U,
                       *chartInstance->c11_sfEvent);
          if (*chartInstance->c11_sfEvent == c11_event_e_clk) {
            CV_STATE_EVAL(6, 0, 2);
            *chartInstance->c11_force_scale -=
              *chartInstance->c11_scale_increment;
            _SFD_DATA_RANGE_CHECK(*chartInstance->c11_force_scale, 61U, 4U, 6U, *
                                  chartInstance->c11_sfEvent, false);
          } else {
            CV_STATE_EVAL(6, 0, 1);
          }
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, *chartInstance->c11_sfEvent);
      break;

     case c11_IN_RampUp:
      CV_CHART_EVAL(10, 0, 4);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   *chartInstance->c11_sfEvent);
      c11_d_out = (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2U, 0,
        CV_RELATIONAL_EVAL(5U, 2U, 0, (real_T)
                           *chartInstance->c11_enable_controller, 0.0, 0, 0U,
                           !*chartInstance->c11_enable_controller) != 0U,
        *chartInstance->c11_sfEvent)) != 0);
      if (c11_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c11_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c11_sfEvent);
        *chartInstance->c11_is_c11_vmr_rwd_fix_leftarm = c11_IN_RampDown;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c11_sfEvent);
        c11_enter_atomic_RampDown(chartInstance);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                     *chartInstance->c11_sfEvent);
        c11_e_out = (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4U, 0,
          CV_RELATIONAL_EVAL(5U, 4U, 0, *chartInstance->c11_force_scale, 1.0, -1,
                             5U, *chartInstance->c11_force_scale >= 1.0) != 0U, *
          chartInstance->c11_sfEvent)) != 0);
        if (c11_e_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, *chartInstance->c11_sfEvent);
          *chartInstance->c11_is_c11_vmr_rwd_fix_leftarm =
            c11_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c11_sfEvent);
          _SFD_CT_CALL(TRANSITION_BEFORE_TRANS_ACTION_TAG, 4U,
                       *chartInstance->c11_sfEvent);
          *chartInstance->c11_force_scale = 1.0;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c11_force_scale, 61U, 5U, 4U,
                                *chartInstance->c11_sfEvent, false);
          *chartInstance->c11_is_c11_vmr_rwd_fix_leftarm = c11_IN_EnableState;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c11_sfEvent);
          *chartInstance->c11_is_EnableState = c11_IN_AutoMoveToPos;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c11_sfEvent);
          *chartInstance->c11_is_AutoMoveToPos = c11_IN_GetDesiredXY;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c11_sfEvent);
          *chartInstance->c11_temporalCounter_i1 = 0U;
          c11_enter_atomic_GetDesiredXY(chartInstance);
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 7U,
                       *chartInstance->c11_sfEvent);
          if (*chartInstance->c11_sfEvent == c11_event_e_clk) {
            CV_STATE_EVAL(7, 0, 2);
            *chartInstance->c11_force_scale +=
              *chartInstance->c11_scale_increment;
            _SFD_DATA_RANGE_CHECK(*chartInstance->c11_force_scale, 61U, 4U, 7U, *
                                  chartInstance->c11_sfEvent, false);
          } else {
            CV_STATE_EVAL(7, 0, 1);
          }
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, *chartInstance->c11_sfEvent);
      break;

     case c11_IN_ResetController:
      CV_CHART_EVAL(10, 0, 5);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, *chartInstance->c11_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c11_sfEvent);
      *chartInstance->c11_is_c11_vmr_rwd_fix_leftarm = c11_IN_RampUp;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c11_sfEvent);
      c11_enter_atomic_RampUp(chartInstance);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, *chartInstance->c11_sfEvent);
      break;

     default:
      CV_CHART_EVAL(10, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c11_is_c11_vmr_rwd_fix_leftarm = c11_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c11_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 10U, *chartInstance->c11_sfEvent);
}

static void initSimStructsc11_vmr_rwd_fix_leftarm
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c11_EnableState(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance)
{
  boolean_T c11_out;
  boolean_T c11_temp;
  boolean_T c11_b_out;
  boolean_T c11_c_out;
  boolean_T c11_b0;
  boolean_T c11_b_temp;
  uint32_T c11_u0;
  boolean_T c11_d_out;
  int32_T c11_i17;
  int32_T c11_i18;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U, *chartInstance->c11_sfEvent);
  c11_out = (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5U, 0,
    CV_RELATIONAL_EVAL(5U, 5U, 0, (real_T)*chartInstance->c11_enable_controller,
                       0.0, 0, 0U, !*chartInstance->c11_enable_controller) != 0U,
    *chartInstance->c11_sfEvent)) != 0);
  if (c11_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, *chartInstance->c11_sfEvent);
    c11_exit_internal_EnableState(chartInstance);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c11_sfEvent);
    *chartInstance->c11_is_c11_vmr_rwd_fix_leftarm = c11_IN_RampDown;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c11_sfEvent);
    c11_enter_atomic_RampDown(chartInstance);
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                 *chartInstance->c11_sfEvent);
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                 *chartInstance->c11_sfEvent);
    switch (*chartInstance->c11_is_AutoMoveToPos) {
     case c11_IN_GetDesiredXY:
      CV_STATE_EVAL(1, 0, 1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                   *chartInstance->c11_sfEvent);
      c11_temp = (_SFD_CCP_CALL(6U, 0, *chartInstance->c11_sfEvent ==
        c11_event_e_clk != 0U, *chartInstance->c11_sfEvent) != 0);
      if (c11_temp) {
        c11_temp = (_SFD_CCP_CALL(6U, 1, *chartInstance->c11_temporalCounter_i1 >=
          1U != 0U, *chartInstance->c11_sfEvent) != 0);
      }

      c11_b_out = (CV_TRANSITION_EVAL(6U, (int32_T)c11_temp) != 0);
      if (c11_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, *chartInstance->c11_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c11_sfEvent);
        *chartInstance->c11_is_AutoMoveToPos = c11_IN_MovingToDesiredXY;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c11_sfEvent);
        *chartInstance->c11_temporalCounter_i1 = 0U;
        *chartInstance->c11_tickCount = (*chartInstance->c11_TaskwideParams)[14];
        _SFD_DATA_RANGE_CHECK(*chartInstance->c11_tickCount, 54U, 4U, 4U,
                              *chartInstance->c11_sfEvent, false);
        *chartInstance->c11_state = 11.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c11_state, 63U, 4U, 4U,
                              *chartInstance->c11_sfEvent, false);
        *chartInstance->c11_tick = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c11_tick, 53U, 4U, 4U,
                              *chartInstance->c11_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                     *chartInstance->c11_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c11_sfEvent);
      break;

     case c11_IN_HoldAtDesiredXY:
      CV_STATE_EVAL(1, 0, 2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                   *chartInstance->c11_sfEvent);
      c11_c_out = (CV_TRANSITION_EVAL(8U, (int32_T)_SFD_CCP_CALL(8U, 0,
        CV_RELATIONAL_EVAL(5U, 8U, 0, (real_T)*chartInstance->c11_updatepos, 1.0,
                           0, 0U, (int32_T)*chartInstance->c11_updatepos) != 0U,
        *chartInstance->c11_sfEvent)) != 0);
      if (c11_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, *chartInstance->c11_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c11_sfEvent);
        *chartInstance->c11_is_AutoMoveToPos = c11_IN_GetDesiredXY;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c11_sfEvent);
        *chartInstance->c11_temporalCounter_i1 = 0U;
        c11_enter_atomic_GetDesiredXY(chartInstance);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                     *chartInstance->c11_sfEvent);
        if (*chartInstance->c11_sfEvent == c11_event_e_clk) {
          CV_STATE_EVAL(3, 0, 2);
          *chartInstance->c11_updatepos = ((muDoubleScalarAbs
            ((*chartInstance->c11_TgtPos)[0] - (*chartInstance->c11_DesiredPos)
             [0]) > 0.01) || (muDoubleScalarAbs((*chartInstance->c11_TgtPos)[1]
            - (*chartInstance->c11_DesiredPos)[1]) > 0.01));
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c11_updatepos, 56U, 4U,
                                3U, *chartInstance->c11_sfEvent, false);
          c11_b0 = *chartInstance->c11_updatepos;
          sf_mex_printf("%s =\\n", "updatepos");
          sf_mex_call_debug(sfGlobalDebugInstanceStruct, "disp", 0U, 1U, 3,
                            c11_b0);
        } else {
          CV_STATE_EVAL(3, 0, 1);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, *chartInstance->c11_sfEvent);
      break;

     case c11_IN_MovingToDesiredXY:
      CV_STATE_EVAL(1, 0, 3);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                   *chartInstance->c11_sfEvent);
      c11_b_temp = (_SFD_CCP_CALL(7U, 0, *chartInstance->c11_sfEvent ==
        c11_event_e_clk != 0U, *chartInstance->c11_sfEvent) != 0);
      if (c11_b_temp) {
        c11_u0 = _SFD_TRANS_TEMPORAL_THRESHOLD((uint32_T)
          *chartInstance->c11_tickCount, 32U, 7U);
        c11_b_temp = (_SFD_CCP_CALL(7U, 1,
          *chartInstance->c11_temporalCounter_i1 >= c11_u0 != 0U,
          *chartInstance->c11_sfEvent) != 0);
      }

      c11_d_out = (CV_TRANSITION_EVAL(7U, (int32_T)c11_b_temp) != 0);
      if (c11_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, *chartInstance->c11_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c11_sfEvent);
        *chartInstance->c11_is_AutoMoveToPos = c11_IN_HoldAtDesiredXY;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c11_sfEvent);
        *chartInstance->c11_state = 12.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c11_state, 63U, 4U, 3U,
                              *chartInstance->c11_sfEvent, false);
        *chartInstance->c11_updatepos = false;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c11_updatepos, 56U, 4U, 3U,
                              *chartInstance->c11_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                     *chartInstance->c11_sfEvent);
        if (*chartInstance->c11_sfEvent == c11_event_e_clk) {
          CV_STATE_EVAL(4, 0, 2);
          (*chartInstance->c11_tick)++;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c11_tick, 53U, 4U, 4U,
                                *chartInstance->c11_sfEvent, false);
          *chartInstance->c11_trajectory_shape = *chartInstance->c11_tick /
            *chartInstance->c11_tickCount - muDoubleScalarSin(6.28318530717958 *
            *chartInstance->c11_tick / *chartInstance->c11_tickCount) /
            6.28318530717958;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c11_trajectory_shape, 55U, 4U,
                                4U, *chartInstance->c11_sfEvent, false);
          (*chartInstance->c11_virtual_pos)[0] = (*chartInstance->c11_StartPos)
            [0] + ((*chartInstance->c11_TgtPos)[0] -
                   (*chartInstance->c11_StartPos)[0]) *
            *chartInstance->c11_trajectory_shape;
          for (c11_i17 = 0; c11_i17 < 2; c11_i17++) {
            _SFD_DATA_RANGE_CHECK((*chartInstance->c11_virtual_pos)[c11_i17],
                                  62U, 4U, 4U, *chartInstance->c11_sfEvent,
                                  false);
          }

          (*chartInstance->c11_virtual_pos)[1] = (*chartInstance->c11_StartPos)
            [1] + ((*chartInstance->c11_TgtPos)[1] -
                   (*chartInstance->c11_StartPos)[1]) *
            *chartInstance->c11_trajectory_shape;
          for (c11_i18 = 0; c11_i18 < 2; c11_i18++) {
            _SFD_DATA_RANGE_CHECK((*chartInstance->c11_virtual_pos)[c11_i18],
                                  62U, 4U, 4U, *chartInstance->c11_sfEvent,
                                  false);
          }
        } else {
          CV_STATE_EVAL(4, 0, 1);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, *chartInstance->c11_sfEvent);
      break;

     default:
      CV_STATE_EVAL(1, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c11_is_AutoMoveToPos = c11_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c11_sfEvent);
      break;
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c11_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c11_sfEvent);
}

static void c11_exit_internal_EnableState
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  switch (*chartInstance->c11_is_AutoMoveToPos) {
   case c11_IN_GetDesiredXY:
    CV_STATE_EVAL(1, 1, 1);
    *chartInstance->c11_is_AutoMoveToPos = c11_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c11_sfEvent);
    break;

   case c11_IN_HoldAtDesiredXY:
    CV_STATE_EVAL(1, 1, 2);
    *chartInstance->c11_is_AutoMoveToPos = c11_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c11_sfEvent);
    break;

   case c11_IN_MovingToDesiredXY:
    CV_STATE_EVAL(1, 1, 3);
    *chartInstance->c11_is_AutoMoveToPos = c11_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c11_sfEvent);
    break;

   default:
    CV_STATE_EVAL(1, 1, 0);
    *chartInstance->c11_is_AutoMoveToPos = c11_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c11_sfEvent);
    break;
  }

  *chartInstance->c11_is_EnableState = c11_IN_NO_ACTIVE_CHILD;
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c11_sfEvent);
}

static void c11_enter_atomic_GetDesiredXY
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  int32_T c11_i19;
  int32_T c11_i20;
  int32_T c11_i21;
  int32_T c11_i22;
  (*chartInstance->c11_TgtPos)[0] = (*chartInstance->c11_DesiredPos)[0];
  for (c11_i19 = 0; c11_i19 < 2; c11_i19++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c11_TgtPos)[c11_i19], 50U, 4U, 2U,
                          *chartInstance->c11_sfEvent, false);
  }

  (*chartInstance->c11_TgtPos)[1] = (*chartInstance->c11_DesiredPos)[1];
  for (c11_i20 = 0; c11_i20 < 2; c11_i20++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c11_TgtPos)[c11_i20], 50U, 4U, 2U,
                          *chartInstance->c11_sfEvent, false);
  }

  (*chartInstance->c11_StartPos)[0] = (*chartInstance->c11_HandPos)[0];
  for (c11_i21 = 0; c11_i21 < 2; c11_i21++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c11_StartPos)[c11_i21], 49U, 4U, 2U, *
                          chartInstance->c11_sfEvent, false);
  }

  (*chartInstance->c11_StartPos)[1] = (*chartInstance->c11_HandPos)[1];
  for (c11_i22 = 0; c11_i22 < 2; c11_i22++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c11_StartPos)[c11_i22], 49U, 4U, 2U, *
                          chartInstance->c11_sfEvent, false);
  }

  *chartInstance->c11_updatepos = false;
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c11_updatepos, 56U, 4U, 2U,
                        *chartInstance->c11_sfEvent, false);
  *chartInstance->c11_state = 10.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c11_state, 63U, 4U, 2U,
                        *chartInstance->c11_sfEvent, false);
}

static void c11_enter_atomic_RampUp(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance)
{
  int32_T c11_i23;
  int32_T c11_i24;
  int32_T c11_i25;
  int32_T c11_i26;
  (*chartInstance->c11_CurHandPos)[0] = (*chartInstance->c11_HandPos)[0];
  for (c11_i23 = 0; c11_i23 < 2; c11_i23++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c11_CurHandPos)[c11_i23], 48U, 4U, 7U,
                          *chartInstance->c11_sfEvent, false);
  }

  (*chartInstance->c11_CurHandPos)[1] = (*chartInstance->c11_HandPos)[1];
  for (c11_i24 = 0; c11_i24 < 2; c11_i24++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c11_CurHandPos)[c11_i24], 48U, 4U, 7U,
                          *chartInstance->c11_sfEvent, false);
  }

  (*chartInstance->c11_virtual_pos)[0] = (*chartInstance->c11_HandPos)[0];
  for (c11_i25 = 0; c11_i25 < 2; c11_i25++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c11_virtual_pos)[c11_i25], 62U, 4U,
                          7U, *chartInstance->c11_sfEvent, false);
  }

  (*chartInstance->c11_virtual_pos)[1] = (*chartInstance->c11_HandPos)[1];
  for (c11_i26 = 0; c11_i26 < 2; c11_i26++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c11_virtual_pos)[c11_i26], 62U, 4U,
                          7U, *chartInstance->c11_sfEvent, false);
  }

  *chartInstance->c11_state = 2.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c11_state, 63U, 4U, 7U,
                        *chartInstance->c11_sfEvent, false);
  *chartInstance->c11_force_scale = 0.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c11_force_scale, 61U, 4U, 7U,
                        *chartInstance->c11_sfEvent, false);
}

static void c11_enter_atomic_RampDown(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance)
{
  int32_T c11_i27;
  int32_T c11_i28;
  int32_T c11_i29;
  int32_T c11_i30;
  real_T c11_d0;
  (*chartInstance->c11_CurHandPos)[0] = (*chartInstance->c11_HandPos)[0];
  for (c11_i27 = 0; c11_i27 < 2; c11_i27++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c11_CurHandPos)[c11_i27], 48U, 4U, 6U,
                          *chartInstance->c11_sfEvent, false);
  }

  (*chartInstance->c11_CurHandPos)[1] = (*chartInstance->c11_HandPos)[1];
  for (c11_i28 = 0; c11_i28 < 2; c11_i28++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c11_CurHandPos)[c11_i28], 48U, 4U, 6U,
                          *chartInstance->c11_sfEvent, false);
  }

  (*chartInstance->c11_virtual_pos)[0] = (*chartInstance->c11_CurHandPos)[0];
  for (c11_i29 = 0; c11_i29 < 2; c11_i29++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c11_virtual_pos)[c11_i29], 62U, 4U,
                          6U, *chartInstance->c11_sfEvent, false);
  }

  (*chartInstance->c11_virtual_pos)[1] = (*chartInstance->c11_CurHandPos)[1];
  for (c11_i30 = 0; c11_i30 < 2; c11_i30++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c11_virtual_pos)[c11_i30], 62U, 4U,
                          6U, *chartInstance->c11_sfEvent, false);
  }

  *chartInstance->c11_state = 30.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c11_state, 63U, 4U, 6U,
                        *chartInstance->c11_sfEvent, false);
  c11_d0 = *chartInstance->c11_state;
  sf_mex_printf("%s =\\n", "state");
  sf_mex_call_debug(sfGlobalDebugInstanceStruct, "disp", 0U, 1U, 6, c11_d0);
}

static void init_script_number_translation(uint32_T c11_machineNumber, uint32_T
  c11_chartNumber, uint32_T c11_instanceNumber)
{
  (void)c11_machineNumber;
  (void)c11_chartNumber;
  (void)c11_instanceNumber;
}

const mxArray *sf_c11_vmr_rwd_fix_leftarm_get_eml_resolved_functions_info(void)
{
  const mxArray *c11_nameCaptureInfo = NULL;
  c11_nameCaptureInfo = NULL;
  sf_mex_assign(&c11_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c11_nameCaptureInfo;
}

static const mxArray *c11_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData)
{
  const mxArray *c11_mxArrayOutData = NULL;
  int8_T c11_u;
  const mxArray *c11_y = NULL;
  SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc11_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c11_mxArrayOutData = NULL;
  c11_u = *(int8_T *)c11_inData;
  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_create("y", &c11_u, 2, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c11_mxArrayOutData, c11_y, false);
  return c11_mxArrayOutData;
}

static int8_T c11_emlrt_marshallIn(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId)
{
  int8_T c11_y;
  int8_T c11_i31;
  (void)chartInstance;
  sf_mex_import(c11_parentId, sf_mex_dup(c11_u), &c11_i31, 1, 2, 0U, 0, 0U, 0);
  c11_y = c11_i31;
  sf_mex_destroy(&c11_u);
  return c11_y;
}

static void c11_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c11_mxArrayInData, const char_T *c11_varName, void *c11_outData)
{
  const mxArray *c11_b_e_clk;
  const char_T *c11_identifier;
  emlrtMsgIdentifier c11_thisId;
  int8_T c11_y;
  SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc11_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c11_b_e_clk = sf_mex_dup(c11_mxArrayInData);
  c11_identifier = c11_varName;
  c11_thisId.fIdentifier = c11_identifier;
  c11_thisId.fParent = NULL;
  c11_y = c11_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_b_e_clk),
    &c11_thisId);
  sf_mex_destroy(&c11_b_e_clk);
  *(int8_T *)c11_outData = c11_y;
  sf_mex_destroy(&c11_mxArrayInData);
}

static const mxArray *c11_b_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData)
{
  const mxArray *c11_mxArrayOutData = NULL;
  uint32_T c11_u;
  const mxArray *c11_y = NULL;
  SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc11_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c11_mxArrayOutData = NULL;
  c11_u = *(uint32_T *)c11_inData;
  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_create("y", &c11_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c11_mxArrayOutData, c11_y, false);
  return c11_mxArrayOutData;
}

static uint32_T c11_b_emlrt_marshallIn(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c11_b_reset_controllerEventCounter, const
  char_T *c11_identifier)
{
  uint32_T c11_y;
  emlrtMsgIdentifier c11_thisId;
  c11_thisId.fIdentifier = c11_identifier;
  c11_thisId.fParent = NULL;
  c11_y = c11_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c11_b_reset_controllerEventCounter), &c11_thisId);
  sf_mex_destroy(&c11_b_reset_controllerEventCounter);
  return c11_y;
}

static uint32_T c11_c_emlrt_marshallIn(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId)
{
  uint32_T c11_y;
  uint32_T c11_u1;
  (void)chartInstance;
  sf_mex_import(c11_parentId, sf_mex_dup(c11_u), &c11_u1, 1, 7, 0U, 0, 0U, 0);
  c11_y = c11_u1;
  sf_mex_destroy(&c11_u);
  return c11_y;
}

static void c11_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c11_mxArrayInData, const char_T *c11_varName, void *c11_outData)
{
  const mxArray *c11_b_reset_controllerEventCounter;
  const char_T *c11_identifier;
  emlrtMsgIdentifier c11_thisId;
  uint32_T c11_y;
  SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc11_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c11_b_reset_controllerEventCounter = sf_mex_dup(c11_mxArrayInData);
  c11_identifier = c11_varName;
  c11_thisId.fIdentifier = c11_identifier;
  c11_thisId.fParent = NULL;
  c11_y = c11_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c11_b_reset_controllerEventCounter), &c11_thisId);
  sf_mex_destroy(&c11_b_reset_controllerEventCounter);
  *(uint32_T *)c11_outData = c11_y;
  sf_mex_destroy(&c11_mxArrayInData);
}

static const mxArray *c11_c_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData)
{
  const mxArray *c11_mxArrayOutData = NULL;
  int32_T c11_u;
  const mxArray *c11_y = NULL;
  SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc11_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c11_mxArrayOutData = NULL;
  c11_u = *(int32_T *)c11_inData;
  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_create("y", &c11_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c11_mxArrayOutData, c11_y, false);
  return c11_mxArrayOutData;
}

static int32_T c11_d_emlrt_marshallIn(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId)
{
  int32_T c11_y;
  int32_T c11_i32;
  (void)chartInstance;
  sf_mex_import(c11_parentId, sf_mex_dup(c11_u), &c11_i32, 1, 6, 0U, 0, 0U, 0);
  c11_y = c11_i32;
  sf_mex_destroy(&c11_u);
  return c11_y;
}

static void c11_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c11_mxArrayInData, const char_T *c11_varName, void *c11_outData)
{
  const mxArray *c11_b_sfEvent;
  const char_T *c11_identifier;
  emlrtMsgIdentifier c11_thisId;
  int32_T c11_y;
  SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc11_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c11_b_sfEvent = sf_mex_dup(c11_mxArrayInData);
  c11_identifier = c11_varName;
  c11_thisId.fIdentifier = c11_identifier;
  c11_thisId.fParent = NULL;
  c11_y = c11_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_b_sfEvent),
    &c11_thisId);
  sf_mex_destroy(&c11_b_sfEvent);
  *(int32_T *)c11_outData = c11_y;
  sf_mex_destroy(&c11_mxArrayInData);
}

static const mxArray *c11_d_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData)
{
  const mxArray *c11_mxArrayOutData = NULL;
  uint8_T c11_u;
  const mxArray *c11_y = NULL;
  SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc11_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c11_mxArrayOutData = NULL;
  c11_u = *(uint8_T *)c11_inData;
  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_create("y", &c11_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c11_mxArrayOutData, c11_y, false);
  return c11_mxArrayOutData;
}

static uint8_T c11_e_emlrt_marshallIn(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c11_b_is_EnableState, const char_T
  *c11_identifier)
{
  uint8_T c11_y;
  emlrtMsgIdentifier c11_thisId;
  c11_thisId.fIdentifier = c11_identifier;
  c11_thisId.fParent = NULL;
  c11_y = c11_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_b_is_EnableState),
    &c11_thisId);
  sf_mex_destroy(&c11_b_is_EnableState);
  return c11_y;
}

static uint8_T c11_f_emlrt_marshallIn(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId)
{
  uint8_T c11_y;
  uint8_T c11_u2;
  (void)chartInstance;
  sf_mex_import(c11_parentId, sf_mex_dup(c11_u), &c11_u2, 1, 3, 0U, 0, 0U, 0);
  c11_y = c11_u2;
  sf_mex_destroy(&c11_u);
  return c11_y;
}

static void c11_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c11_mxArrayInData, const char_T *c11_varName, void *c11_outData)
{
  const mxArray *c11_b_is_EnableState;
  const char_T *c11_identifier;
  emlrtMsgIdentifier c11_thisId;
  uint8_T c11_y;
  SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc11_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c11_b_is_EnableState = sf_mex_dup(c11_mxArrayInData);
  c11_identifier = c11_varName;
  c11_thisId.fIdentifier = c11_identifier;
  c11_thisId.fParent = NULL;
  c11_y = c11_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_b_is_EnableState),
    &c11_thisId);
  sf_mex_destroy(&c11_b_is_EnableState);
  *(uint8_T *)c11_outData = c11_y;
  sf_mex_destroy(&c11_mxArrayInData);
}

static const mxArray *c11_e_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData)
{
  const mxArray *c11_mxArrayOutData = NULL;
  boolean_T c11_u;
  const mxArray *c11_y = NULL;
  SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc11_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c11_mxArrayOutData = NULL;
  c11_u = *(boolean_T *)c11_inData;
  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_create("y", &c11_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c11_mxArrayOutData, c11_y, false);
  return c11_mxArrayOutData;
}

static const mxArray *c11_f_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData)
{
  const mxArray *c11_mxArrayOutData = NULL;
  int32_T c11_i33;
  real_T c11_u[2];
  const mxArray *c11_y = NULL;
  SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc11_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c11_mxArrayOutData = NULL;
  for (c11_i33 = 0; c11_i33 < 2; c11_i33++) {
    c11_u[c11_i33] = (*(real_T (*)[2])c11_inData)[c11_i33];
  }

  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_create("y", c11_u, 0, 0U, 1U, 0U, 1, 2), false);
  sf_mex_assign(&c11_mxArrayOutData, c11_y, false);
  return c11_mxArrayOutData;
}

static const mxArray *c11_g_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData)
{
  const mxArray *c11_mxArrayOutData = NULL;
  int32_T c11_i34;
  real_T c11_u[2];
  const mxArray *c11_y = NULL;
  SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc11_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c11_mxArrayOutData = NULL;
  for (c11_i34 = 0; c11_i34 < 2; c11_i34++) {
    c11_u[c11_i34] = (*(real_T (*)[2])c11_inData)[c11_i34];
  }

  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_create("y", c11_u, 0, 0U, 1U, 0U, 2, 1, 2), false);
  sf_mex_assign(&c11_mxArrayOutData, c11_y, false);
  return c11_mxArrayOutData;
}

static const mxArray *c11_h_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData)
{
  const mxArray *c11_mxArrayOutData = NULL;
  int32_T c11_i35;
  real_T c11_u[50];
  const mxArray *c11_y = NULL;
  SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc11_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c11_mxArrayOutData = NULL;
  for (c11_i35 = 0; c11_i35 < 50; c11_i35++) {
    c11_u[c11_i35] = (*(real_T (*)[50])c11_inData)[c11_i35];
  }

  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_create("y", c11_u, 0, 0U, 1U, 0U, 1, 50), false);
  sf_mex_assign(&c11_mxArrayOutData, c11_y, false);
  return c11_mxArrayOutData;
}

static const mxArray *c11_i_sf_marshallOut(void *chartInstanceVoid, void
  *c11_inData)
{
  const mxArray *c11_mxArrayOutData = NULL;
  real_T c11_u;
  const mxArray *c11_y = NULL;
  SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc11_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c11_mxArrayOutData = NULL;
  c11_u = *(real_T *)c11_inData;
  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_create("y", &c11_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c11_mxArrayOutData, c11_y, false);
  return c11_mxArrayOutData;
}

static real_T c11_g_emlrt_marshallIn(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c11_b_force_scale, const char_T *c11_identifier)
{
  real_T c11_y;
  emlrtMsgIdentifier c11_thisId;
  c11_thisId.fIdentifier = c11_identifier;
  c11_thisId.fParent = NULL;
  c11_y = c11_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_b_force_scale),
    &c11_thisId);
  sf_mex_destroy(&c11_b_force_scale);
  return c11_y;
}

static real_T c11_h_emlrt_marshallIn(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId)
{
  real_T c11_y;
  real_T c11_d1;
  (void)chartInstance;
  sf_mex_import(c11_parentId, sf_mex_dup(c11_u), &c11_d1, 1, 0, 0U, 0, 0U, 0);
  c11_y = c11_d1;
  sf_mex_destroy(&c11_u);
  return c11_y;
}

static void c11_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c11_mxArrayInData, const char_T *c11_varName, void *c11_outData)
{
  const mxArray *c11_b_force_scale;
  const char_T *c11_identifier;
  emlrtMsgIdentifier c11_thisId;
  real_T c11_y;
  SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc11_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c11_b_force_scale = sf_mex_dup(c11_mxArrayInData);
  c11_identifier = c11_varName;
  c11_thisId.fIdentifier = c11_identifier;
  c11_thisId.fParent = NULL;
  c11_y = c11_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_b_force_scale),
    &c11_thisId);
  sf_mex_destroy(&c11_b_force_scale);
  *(real_T *)c11_outData = c11_y;
  sf_mex_destroy(&c11_mxArrayInData);
}

static void c11_i_emlrt_marshallIn(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c11_b_virtual_pos, const char_T *c11_identifier,
  real_T c11_y[2])
{
  emlrtMsgIdentifier c11_thisId;
  c11_thisId.fIdentifier = c11_identifier;
  c11_thisId.fParent = NULL;
  c11_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_b_virtual_pos),
    &c11_thisId, c11_y);
  sf_mex_destroy(&c11_b_virtual_pos);
}

static void c11_j_emlrt_marshallIn(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId,
  real_T c11_y[2])
{
  real_T c11_dv4[2];
  int32_T c11_i36;
  (void)chartInstance;
  sf_mex_import(c11_parentId, sf_mex_dup(c11_u), c11_dv4, 1, 0, 0U, 1, 0U, 1, 2);
  for (c11_i36 = 0; c11_i36 < 2; c11_i36++) {
    c11_y[c11_i36] = c11_dv4[c11_i36];
  }

  sf_mex_destroy(&c11_u);
}

static void c11_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c11_mxArrayInData, const char_T *c11_varName, void *c11_outData)
{
  const mxArray *c11_b_virtual_pos;
  const char_T *c11_identifier;
  emlrtMsgIdentifier c11_thisId;
  real_T c11_y[2];
  int32_T c11_i37;
  SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc11_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c11_b_virtual_pos = sf_mex_dup(c11_mxArrayInData);
  c11_identifier = c11_varName;
  c11_thisId.fIdentifier = c11_identifier;
  c11_thisId.fParent = NULL;
  c11_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_b_virtual_pos),
    &c11_thisId, c11_y);
  sf_mex_destroy(&c11_b_virtual_pos);
  for (c11_i37 = 0; c11_i37 < 2; c11_i37++) {
    (*(real_T (*)[2])c11_outData)[c11_i37] = c11_y[c11_i37];
  }

  sf_mex_destroy(&c11_mxArrayInData);
}

static boolean_T c11_k_emlrt_marshallIn(SFc11_vmr_rwd_fix_leftarmInstanceStruct *
  chartInstance, const mxArray *c11_b_updatepos, const char_T *c11_identifier)
{
  boolean_T c11_y;
  emlrtMsgIdentifier c11_thisId;
  c11_thisId.fIdentifier = c11_identifier;
  c11_thisId.fParent = NULL;
  c11_y = c11_l_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_b_updatepos),
    &c11_thisId);
  sf_mex_destroy(&c11_b_updatepos);
  return c11_y;
}

static boolean_T c11_l_emlrt_marshallIn(SFc11_vmr_rwd_fix_leftarmInstanceStruct *
  chartInstance, const mxArray *c11_u, const emlrtMsgIdentifier *c11_parentId)
{
  boolean_T c11_y;
  boolean_T c11_b1;
  (void)chartInstance;
  sf_mex_import(c11_parentId, sf_mex_dup(c11_u), &c11_b1, 1, 11, 0U, 0, 0U, 0);
  c11_y = c11_b1;
  sf_mex_destroy(&c11_u);
  return c11_y;
}

static void c11_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c11_mxArrayInData, const char_T *c11_varName, void *c11_outData)
{
  const mxArray *c11_b_updatepos;
  const char_T *c11_identifier;
  emlrtMsgIdentifier c11_thisId;
  boolean_T c11_y;
  SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc11_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c11_b_updatepos = sf_mex_dup(c11_mxArrayInData);
  c11_identifier = c11_varName;
  c11_thisId.fIdentifier = c11_identifier;
  c11_thisId.fParent = NULL;
  c11_y = c11_l_emlrt_marshallIn(chartInstance, sf_mex_dup(c11_b_updatepos),
    &c11_thisId);
  sf_mex_destroy(&c11_b_updatepos);
  *(boolean_T *)c11_outData = c11_y;
  sf_mex_destroy(&c11_mxArrayInData);
}

static const mxArray *c11_m_emlrt_marshallIn
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance, const mxArray
   *c11_b_setSimStateSideEffectsInfo, const char_T *c11_identifier)
{
  const mxArray *c11_y = NULL;
  emlrtMsgIdentifier c11_thisId;
  c11_y = NULL;
  c11_thisId.fIdentifier = c11_identifier;
  c11_thisId.fParent = NULL;
  sf_mex_assign(&c11_y, c11_n_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c11_b_setSimStateSideEffectsInfo), &c11_thisId), false);
  sf_mex_destroy(&c11_b_setSimStateSideEffectsInfo);
  return c11_y;
}

static const mxArray *c11_n_emlrt_marshallIn
  (SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance, const mxArray *c11_u,
   const emlrtMsgIdentifier *c11_parentId)
{
  const mxArray *c11_y = NULL;
  (void)chartInstance;
  (void)c11_parentId;
  c11_y = NULL;
  sf_mex_assign(&c11_y, sf_mex_duplicatearraysafe(&c11_u), false);
  sf_mex_destroy(&c11_u);
  return c11_y;
}

static void init_dsm_address_info(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc11_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance)
{
  chartInstance->c11_e_clk = (int8_T *)(ssGetInputPortSignalPtrs_wrapper
    (chartInstance->S, 4))[0U];
  chartInstance->c11_reset_controller = (boolean_T *)
    ssGetOutputPortSignal_wrapper(chartInstance->S, 4);
  chartInstance->c11_reset_controllerEventCounter = (uint32_T *)
    ssGetDWork_wrapper(chartInstance->S, 0);
  chartInstance->c11_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 1);
  chartInstance->c11_isStable = (boolean_T *)ssGetDWork_wrapper(chartInstance->S,
    2);
  chartInstance->c11_is_active_c11_vmr_rwd_fix_leftarm = (uint8_T *)
    ssGetDWork_wrapper(chartInstance->S, 3);
  chartInstance->c11_is_c11_vmr_rwd_fix_leftarm = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 4);
  chartInstance->c11_is_EnableState = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 5);
  chartInstance->c11_is_AutoMoveToPos = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 6);
  chartInstance->c11_enable_controller = (boolean_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 0);
  chartInstance->c11_DesiredPos = (real_T (*)[2])ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c11_HandPos = (real_T (*)[2])ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c11_TaskwideParams = (real_T (*)[50])
    ssGetInputPortSignal_wrapper(chartInstance->S, 3);
  chartInstance->c11_force_scale = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c11_virtual_pos = (real_T (*)[2])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c11_tickCount = (real_T *)ssGetDWork_wrapper(chartInstance->S,
    7);
  chartInstance->c11_StartPos = (real_T (*)[2])ssGetDWork_wrapper
    (chartInstance->S, 8);
  chartInstance->c11_TgtPos = (real_T (*)[2])ssGetDWork_wrapper(chartInstance->S,
    9);
  chartInstance->c11_updatepos = (boolean_T *)ssGetDWork_wrapper
    (chartInstance->S, 10);
  chartInstance->c11_CurHandPos = (real_T (*)[2])ssGetDWork_wrapper
    (chartInstance->S, 11);
  chartInstance->c11_ramp_time = (real_T *)ssGetDWork_wrapper(chartInstance->S,
    12);
  chartInstance->c11_scale_increment = (real_T *)ssGetDWork_wrapper
    (chartInstance->S, 13);
  chartInstance->c11_tick = (real_T *)ssGetDWork_wrapper(chartInstance->S, 14);
  chartInstance->c11_trajectory_shape = (real_T *)ssGetDWork_wrapper
    (chartInstance->S, 15);
  chartInstance->c11_state = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c11_temporalCounter_i1 = (uint32_T *)ssGetDWork_wrapper
    (chartInstance->S, 16);
}

/* SFunction Glue Code */
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

static uint32_T* sf_get_sfun_dwork_checksum(void);
void sf_c11_vmr_rwd_fix_leftarm_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(118187226U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1796742637U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(960253513U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1805974309U);
}

mxArray* sf_c11_vmr_rwd_fix_leftarm_get_post_codegen_info(void);
mxArray *sf_c11_vmr_rwd_fix_leftarm_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("HpEURzlyt3lxudsOpLI3tB");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,4,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(2);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(2);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(50);
      pr[1] = (double)(1);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,3,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(2);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo =
      sf_c11_vmr_rwd_fix_leftarm_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c11_vmr_rwd_fix_leftarm_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c11_vmr_rwd_fix_leftarm_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("early");
  mxArray *fallbackReason = mxCreateString("machine_data");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c11_vmr_rwd_fix_leftarm_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c11_vmr_rwd_fix_leftarm_get_post_codegen_info(void)
{
  const char* fieldNames[] = { "exportedFunctionsUsedByThisChart",
    "exportedFunctionsChecksum" };

  mwSize dims[2] = { 1, 1 };

  mxArray* mxPostCodegenInfo = mxCreateStructArray(2, dims, sizeof(fieldNames)/
    sizeof(fieldNames[0]), fieldNames);

  {
    mxArray* mxExportedFunctionsChecksum = mxCreateString("");
    mwSize exp_dims[2] = { 0, 1 };

    mxArray* mxExportedFunctionsUsedByThisChart = mxCreateCellArray(2, exp_dims);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsUsedByThisChart",
               mxExportedFunctionsUsedByThisChart);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsChecksum",
               mxExportedFunctionsChecksum);
  }

  return mxPostCodegenInfo;
}

static const mxArray *sf_get_sim_state_info_c11_vmr_rwd_fix_leftarm(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[17],T\"force_scale\",},{M[1],M[55],T\"state\",},{M[1],M[23],T\"virtual_pos\",},{M[3],M[45],T\"CurHandPos\",},{M[3],M[29],T\"StartPos\",},{M[3],M[30],T\"TgtPos\",},{M[3],M[46],T\"ramp_time\",},{M[3],M[47],T\"scale_increment\",},{M[3],M[48],T\"tick\",},{M[3],M[28],T\"tickCount\",}}",
    "100 S1x9'type','srcId','name','auxInfo'{{M[3],M[49],T\"trajectory_shape\",},{M[3],M[32],T\"updatepos\",},{M[6],M[54],T\"reset_controller\",},{M[7],M[54],T\"reset_controllerEventCounter\",},{M[8],M[0],T\"is_active_c11_vmr_rwd_fix_leftarm\",},{M[9],M[0],T\"is_c11_vmr_rwd_fix_leftarm\",},{M[9],M[8],T\"is_EnableState\",},{M[9],M[19],T\"is_AutoMoveToPos\",},{M[11],M[11],T\"temporalCounter_i1\",S'et','os','ct'{{T\"ev\",M1x2[21 22],M[1]}}}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 19, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c11_vmr_rwd_fix_leftarm_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc11_vmr_rwd_fix_leftarmInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _vmr_rwd_fix_leftarmMachineNumber_,
           11,
           9,
           11,
           0,
           17,
           2,
           0,
           0,
           0,
           0,
           &(chartInstance->chartNumber),
           &(chartInstance->instanceNumber),
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_vmr_rwd_fix_leftarmMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_vmr_rwd_fix_leftarmMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _vmr_rwd_fix_leftarmMachineNumber_,
            chartInstance->chartNumber,
            2,
            2,
            2);
          _SFD_SET_DATA_PROPS(48,0,0,0,"CurHandPos");
          _SFD_SET_DATA_PROPS(49,0,0,0,"StartPos");
          _SFD_SET_DATA_PROPS(50,0,0,0,"TgtPos");
          _SFD_SET_DATA_PROPS(51,0,0,0,"ramp_time");
          _SFD_SET_DATA_PROPS(52,0,0,0,"scale_increment");
          _SFD_SET_DATA_PROPS(53,0,0,0,"tick");
          _SFD_SET_DATA_PROPS(54,0,0,0,"tickCount");
          _SFD_SET_DATA_PROPS(55,0,0,0,"trajectory_shape");
          _SFD_SET_DATA_PROPS(56,0,0,0,"updatepos");
          _SFD_SET_DATA_PROPS(57,1,1,0,"enable_controller");
          _SFD_SET_DATA_PROPS(58,1,1,0,"DesiredPos");
          _SFD_SET_DATA_PROPS(59,1,1,0,"HandPos");
          _SFD_SET_DATA_PROPS(60,1,1,0,"TaskwideParams");
          _SFD_SET_DATA_PROPS(61,2,0,1,"force_scale");
          _SFD_SET_DATA_PROPS(62,2,0,1,"virtual_pos");
          _SFD_SET_DATA_PROPS(63,2,0,1,"state");
          _SFD_SET_DATA_PROPS(64,7,0,0,"pi");
          _SFD_EVENT_SCOPE(0,1);
          _SFD_EVENT_SCOPE(1,2);
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_STATE_INFO(6,0,0);
          _SFD_STATE_INFO(7,0,0);
          _SFD_STATE_INFO(8,0,0);
          _SFD_CH_SUBSTATE_COUNT(5);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,5);
          _SFD_CH_SUBSTATE_INDEX(2,6);
          _SFD_CH_SUBSTATE_INDEX(3,7);
          _SFD_CH_SUBSTATE_INDEX(4,8);
          _SFD_ST_SUBSTATE_COUNT(0,1);
          _SFD_ST_SUBSTATE_INDEX(0,0,1);
          _SFD_ST_SUBSTATE_COUNT(1,3);
          _SFD_ST_SUBSTATE_INDEX(1,0,2);
          _SFD_ST_SUBSTATE_INDEX(1,1,3);
          _SFD_ST_SUBSTATE_INDEX(1,2,4);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(7,0);
          _SFD_ST_SUBSTATE_COUNT(8,0);
        }

        _SFD_CV_INIT_CHART(5,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,1,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,3,1,1,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(2,0,0,0,0,0,NULL,NULL);
        }

        {
          static unsigned int sStartDecMap[] = { 88 };

          static unsigned int sEndDecMap[] = { 93 };

          _SFD_CV_INIT_STATE(3,0,0,0,0,1,&(sStartDecMap[0]),&(sEndDecMap[0]));
        }

        {
          static unsigned int sStartDecMap[] = { 100 };

          static unsigned int sEndDecMap[] = { 105 };

          _SFD_CV_INIT_STATE(4,0,0,0,0,1,&(sStartDecMap[0]),&(sEndDecMap[0]));
        }

        {
          _SFD_CV_INIT_STATE(5,0,0,0,0,0,NULL,NULL);
        }

        {
          static unsigned int sStartDecMap[] = { 186 };

          static unsigned int sEndDecMap[] = { 191 };

          _SFD_CV_INIT_STATE(6,0,0,0,0,1,&(sStartDecMap[0]),&(sEndDecMap[0]));
        }

        {
          static unsigned int sStartDecMap[] = { 193 };

          static unsigned int sEndDecMap[] = { 198 };

          _SFD_CV_INIT_STATE(7,0,0,0,0,1,&(sStartDecMap[0]),&(sEndDecMap[0]));
        }

        {
          _SFD_CV_INIT_STATE(8,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 33 };

          static unsigned int sEndGuardMap[] = { 55 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 33 };

          static unsigned int sEndRelationalopMap[] = { 55 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(1,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(9,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 17 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 5, 5, 5, 5 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(4,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(10,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 15 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 2, 2, 2, 2 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(10,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 23 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 23 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(3,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 23 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 23 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(2,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 23 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 23 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(5,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 9, 0 };

          static unsigned int sEndGuardMap[] = { 14, 15 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(6,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(8,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 15 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(8,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 17, 0 };

          static unsigned int sEndGuardMap[] = { 22, 23 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(7,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 2;
          _SFD_SET_DATA_COMPILED_PROPS(48,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c11_f_sf_marshallOut,(MexInFcnForType)
            c11_f_sf_marshallIn);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 2;
          _SFD_SET_DATA_COMPILED_PROPS(49,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c11_f_sf_marshallOut,(MexInFcnForType)
            c11_f_sf_marshallIn);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 2;
          _SFD_SET_DATA_COMPILED_PROPS(50,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c11_f_sf_marshallOut,(MexInFcnForType)
            c11_f_sf_marshallIn);
        }

        _SFD_SET_DATA_COMPILED_PROPS(51,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c11_i_sf_marshallOut,(MexInFcnForType)
          c11_e_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(52,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c11_i_sf_marshallOut,(MexInFcnForType)
          c11_e_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(53,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c11_i_sf_marshallOut,(MexInFcnForType)
          c11_e_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(54,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c11_i_sf_marshallOut,(MexInFcnForType)
          c11_e_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(55,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c11_i_sf_marshallOut,(MexInFcnForType)
          c11_e_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(56,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c11_e_sf_marshallOut,(MexInFcnForType)
          c11_g_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(57,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c11_e_sf_marshallOut,(MexInFcnForType)NULL);

        {
          unsigned int dimVector[1];
          dimVector[0]= 2;
          _SFD_SET_DATA_COMPILED_PROPS(58,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c11_f_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[2];
          dimVector[0]= 1;
          dimVector[1]= 2;
          _SFD_SET_DATA_COMPILED_PROPS(59,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c11_g_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 50;
          _SFD_SET_DATA_COMPILED_PROPS(60,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c11_h_sf_marshallOut,(MexInFcnForType)NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(61,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c11_i_sf_marshallOut,(MexInFcnForType)
          c11_e_sf_marshallIn);

        {
          unsigned int dimVector[1];
          dimVector[0]= 2;
          _SFD_SET_DATA_COMPILED_PROPS(62,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c11_f_sf_marshallOut,(MexInFcnForType)
            c11_f_sf_marshallIn);
        }

        _SFD_SET_DATA_COMPILED_PROPS(63,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c11_i_sf_marshallOut,(MexInFcnForType)
          c11_e_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(64,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c11_i_sf_marshallOut,(MexInFcnForType)NULL);
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _vmr_rwd_fix_leftarmMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc11_vmr_rwd_fix_leftarmInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(57U, chartInstance->c11_enable_controller);
        _SFD_SET_DATA_VALUE_PTR(58U, *chartInstance->c11_DesiredPos);
        _SFD_SET_DATA_VALUE_PTR(59U, *chartInstance->c11_HandPos);
        _SFD_SET_DATA_VALUE_PTR(60U, *chartInstance->c11_TaskwideParams);
        _SFD_SET_DATA_VALUE_PTR(61U, chartInstance->c11_force_scale);
        _SFD_SET_DATA_VALUE_PTR(62U, *chartInstance->c11_virtual_pos);
        _SFD_SET_DATA_VALUE_PTR(54U, chartInstance->c11_tickCount);
        _SFD_SET_DATA_VALUE_PTR(49U, *chartInstance->c11_StartPos);
        _SFD_SET_DATA_VALUE_PTR(50U, *chartInstance->c11_TgtPos);
        _SFD_SET_DATA_VALUE_PTR(56U, chartInstance->c11_updatepos);
        _SFD_SET_DATA_VALUE_PTR(48U, *chartInstance->c11_CurHandPos);
        _SFD_SET_DATA_VALUE_PTR(51U, chartInstance->c11_ramp_time);
        _SFD_SET_DATA_VALUE_PTR(52U, chartInstance->c11_scale_increment);
        _SFD_SET_DATA_VALUE_PTR(53U, chartInstance->c11_tick);
        _SFD_SET_DATA_VALUE_PTR(55U, chartInstance->c11_trajectory_shape);
        _SFD_SET_DATA_VALUE_PTR(64U, &chartInstance->c11_pi);
        _SFD_SET_DATA_VALUE_PTR(63U, chartInstance->c11_state);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sR2QQcHpESA3HrCwidTjbeB";
}

static void sf_check_dwork_consistency(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    const uint32_T *sfunDWorkChecksum = sf_get_sfun_dwork_checksum();
    mxArray *infoStruct = load_vmr_rwd_fix_leftarm_optimization_info();
    mxArray* mxRTWDWorkChecksum = sf_get_dwork_info_from_mat_file(S,
      sf_get_instance_specialization(), infoStruct, 11, "dworkChecksum");
    if (mxRTWDWorkChecksum != NULL) {
      double *pr = mxGetPr(mxRTWDWorkChecksum);
      if ((uint32_T)pr[0] != sfunDWorkChecksum[0] ||
          (uint32_T)pr[1] != sfunDWorkChecksum[1] ||
          (uint32_T)pr[2] != sfunDWorkChecksum[2] ||
          (uint32_T)pr[3] != sfunDWorkChecksum[3]) {
        sf_mex_error_message("Code generation and simulation targets registered different sets of persistent variables for the block. "
                             "External or Rapid Accelerator mode simulation requires code generation and simulation targets to "
                             "register the same set of persistent variables for this block. "
                             "This discrepancy is typically caused by MATLAB functions that have different code paths for "
                             "simulation and code generation targets where these code paths define different sets of persistent variables. "
                             "Please identify these code paths in the offending block and rewrite the MATLAB code so that "
                             "the set of persistent variables is the same between simulation and code generation.");
      }
    }
  }
}

static void sf_opaque_initialize_c11_vmr_rwd_fix_leftarm(void *chartInstanceVar)
{
  sf_check_dwork_consistency(((SFc11_vmr_rwd_fix_leftarmInstanceStruct*)
    chartInstanceVar)->S);
  chart_debug_initialization(((SFc11_vmr_rwd_fix_leftarmInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c11_vmr_rwd_fix_leftarm
    ((SFc11_vmr_rwd_fix_leftarmInstanceStruct*) chartInstanceVar);
  initialize_c11_vmr_rwd_fix_leftarm((SFc11_vmr_rwd_fix_leftarmInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c11_vmr_rwd_fix_leftarm(void *chartInstanceVar)
{
  enable_c11_vmr_rwd_fix_leftarm((SFc11_vmr_rwd_fix_leftarmInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c11_vmr_rwd_fix_leftarm(void *chartInstanceVar)
{
  disable_c11_vmr_rwd_fix_leftarm((SFc11_vmr_rwd_fix_leftarmInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c11_vmr_rwd_fix_leftarm(void *chartInstanceVar)
{
  sf_gateway_c11_vmr_rwd_fix_leftarm((SFc11_vmr_rwd_fix_leftarmInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c11_vmr_rwd_fix_leftarm(void
  *chartInstanceVar)
{
  ext_mode_exec_c11_vmr_rwd_fix_leftarm((SFc11_vmr_rwd_fix_leftarmInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c11_vmr_rwd_fix_leftarm(SimStruct*
  S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  return get_sim_state_c11_vmr_rwd_fix_leftarm
    ((SFc11_vmr_rwd_fix_leftarmInstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c11_vmr_rwd_fix_leftarm(SimStruct* S, const
  mxArray *st)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  set_sim_state_c11_vmr_rwd_fix_leftarm((SFc11_vmr_rwd_fix_leftarmInstanceStruct*)
    chartInfo->chartInstance, st);
}

static void sf_opaque_terminate_c11_vmr_rwd_fix_leftarm(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc11_vmr_rwd_fix_leftarmInstanceStruct*) chartInstanceVar
      )->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_vmr_rwd_fix_leftarm_optimization_info();
    }

    finalize_c11_vmr_rwd_fix_leftarm((SFc11_vmr_rwd_fix_leftarmInstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (crtInfo != NULL) {
      utFree(crtInfo);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc11_vmr_rwd_fix_leftarm((SFc11_vmr_rwd_fix_leftarmInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c11_vmr_rwd_fix_leftarm(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    initialize_params_c11_vmr_rwd_fix_leftarm
      ((SFc11_vmr_rwd_fix_leftarmInstanceStruct*)(chartInfo->chartInstance));
  }
}

mxArray *sf_c11_vmr_rwd_fix_leftarm_get_testpoint_info(void)
{
  return NULL;
}

static void sf_set_sfun_dwork_info(SimStruct *S)
{
  const char *dworkEncStr[] = {
    "100 S1x10'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size'{{T\"uint32\",,,,,,,M[0],M[]},{T\"int32\",,,,,,,M[0],M[]},{T\"boolean\",,,,,,,M[0],M[]},{T\"uint8\",,,,,,,M[0],M[]},{T\"uint8\",,,,,,,M[0],M[]},{T\"uint8\",,,,,,,M[0],M[]},{T\"uint8\",,,,,,,M[0],M[]},{T\"double\",,,,,,,M[0],M[]},{T\"double\",,,,,,,M[0],M[2]},{T\"double\",,,,,,,M[0],M[2]}}",
    "100 S1x7'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size'{{T\"boolean\",,,,,,,M[0],M[]},{T\"double\",,,,,,,M[0],M[2]},{T\"double\",,,,,,,M[0],M[]},{T\"double\",,,,,,,M[0],M[]},{T\"double\",,,,,,,M[0],M[]},{T\"double\",,,,,,,M[0],M[]},{T\"uint32\",,,,,,,M[0],M[]}}"
  };

  sf_set_encoded_dwork_info(S, dworkEncStr, 17, 10);
}

static uint32_T* sf_get_sfun_dwork_checksum()
{
  static uint32_T checksum[4] = { 4236568857U, 240126300U, 2695608371U,
    730819796U };

  return checksum;
}

static void mdlSetWorkWidths_c11_vmr_rwd_fix_leftarm(SimStruct *S)
{
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_vmr_rwd_fix_leftarm_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      11);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,11,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,11);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,11,4);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,11,4);
    }

    ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=4; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 4; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,11);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2171813606U));
  ssSetChecksum1(S,(1693590596U));
  ssSetChecksum2(S,(277433176U));
  ssSetChecksum3(S,(3731376809U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c11_vmr_rwd_fix_leftarm(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c11_vmr_rwd_fix_leftarm(SimStruct *S)
{
  SFc11_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc11_vmr_rwd_fix_leftarmInstanceStruct *)utMalloc(sizeof
    (SFc11_vmr_rwd_fix_leftarmInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc11_vmr_rwd_fix_leftarmInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c11_vmr_rwd_fix_leftarm;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c11_vmr_rwd_fix_leftarm;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c11_vmr_rwd_fix_leftarm;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c11_vmr_rwd_fix_leftarm;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c11_vmr_rwd_fix_leftarm;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c11_vmr_rwd_fix_leftarm;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c11_vmr_rwd_fix_leftarm;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c11_vmr_rwd_fix_leftarm;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c11_vmr_rwd_fix_leftarm;
  chartInstance->chartInfo.mdlStart = mdlStart_c11_vmr_rwd_fix_leftarm;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c11_vmr_rwd_fix_leftarm;
  chartInstance->chartInfo.extModeExec =
    sf_opaque_ext_mode_exec_c11_vmr_rwd_fix_leftarm;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.debugInstance = sfGlobalDebugInstanceStruct;
  chartInstance->S = S;
  crtInfo->isEnhancedMooreMachine = 0;
  crtInfo->checksum = SF_RUNTIME_INFO_CHECKSUM;
  crtInfo->fCheckOverflow = sf_runtime_overflow_check_is_on(S);
  crtInfo->instanceInfo = (&(chartInstance->chartInfo));
  crtInfo->isJITEnabled = false;
  crtInfo->compiledInfo = NULL;
  ssSetUserData(S,(void *)(crtInfo));  /* register the chart instance with simstruct */
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  chart_debug_initialization(S,1);
}

void c11_vmr_rwd_fix_leftarm_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c11_vmr_rwd_fix_leftarm(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c11_vmr_rwd_fix_leftarm(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c11_vmr_rwd_fix_leftarm(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c11_vmr_rwd_fix_leftarm_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
