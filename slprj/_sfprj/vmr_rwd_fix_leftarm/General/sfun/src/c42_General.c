/* Include files */

#include <stddef.h>
#include "blas.h"
#include "General_sfun.h"
#include "c42_General.h"
#include <stdlib.h>
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "General_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c_with_debugger(S, sfGlobalDebugInstanceStruct);

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization);
static void chart_debug_initialize_data_addresses(SimStruct *S);

/* Type Definitions */

/* Named Constants */
#define c42_event_e_clk                (0)
#define c42_event_e_trial_over         (1)
#define CALL_EVENT                     (-1)
#define c42_IN_NO_ACTIVE_CHILD         ((uint8_T)0U)
#define c42_IN_Finished                ((uint8_T)1U)
#define c42_IN_InTrial                 ((uint8_T)2U)
#define c42_IN_PausedBetweenBlocks     ((uint8_T)3U)
#define c42_IN_PausedBetweenTrials     ((uint8_T)4U)
#define c42_IN_Ready                   ((uint8_T)5U)
#define c42_IN_Paused                  ((uint8_T)1U)
#define c42_IN_RepeatTrialLater        ((uint8_T)2U)
#define c42_IN_RepeatTrialNow          ((uint8_T)3U)
#define c42_IN_Running                 ((uint8_T)4U)
#define c42_IN_SkipTrial               ((uint8_T)5U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;

/* Function Declarations */
static void initialize_c42_General(SFc42_GeneralInstanceStruct *chartInstance);
static void initialize_params_c42_General(SFc42_GeneralInstanceStruct
  *chartInstance);
static void enable_c42_General(SFc42_GeneralInstanceStruct *chartInstance);
static void disable_c42_General(SFc42_GeneralInstanceStruct *chartInstance);
static void c42_update_debugger_state_c42_General(SFc42_GeneralInstanceStruct
  *chartInstance);
static void ext_mode_exec_c42_General(SFc42_GeneralInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c42_General(SFc42_GeneralInstanceStruct
  *chartInstance);
static void set_sim_state_c42_General(SFc42_GeneralInstanceStruct *chartInstance,
  const mxArray *c42_st);
static void c42_set_sim_state_side_effects_c42_General
  (SFc42_GeneralInstanceStruct *chartInstance);
static void finalize_c42_General(SFc42_GeneralInstanceStruct *chartInstance);
static void sf_gateway_c42_General(SFc42_GeneralInstanceStruct *chartInstance);
static void mdl_start_c42_General(SFc42_GeneralInstanceStruct *chartInstance);
static void c42_chartstep_c42_General(SFc42_GeneralInstanceStruct *chartInstance);
static void initSimStructsc42_General(SFc42_GeneralInstanceStruct *chartInstance);
static void c42_Ready(SFc42_GeneralInstanceStruct *chartInstance);
static void c42_PausedBetweenBlocks(SFc42_GeneralInstanceStruct *chartInstance);
static void c42_enter_atomic_InTrial(SFc42_GeneralInstanceStruct *chartInstance);
static void c42_enter_internal_InTrial(SFc42_GeneralInstanceStruct
  *chartInstance);
static void c42_InTrial(SFc42_GeneralInstanceStruct *chartInstance);
static void c42_exit_internal_InTrial(SFc42_GeneralInstanceStruct *chartInstance);
static void c42_Running(SFc42_GeneralInstanceStruct *chartInstance);
static void c42_Paused(SFc42_GeneralInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c42_machineNumber, uint32_T
  c42_chartNumber, uint32_T c42_instanceNumber);
static const mxArray *c42_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData);
static int8_T c42_emlrt_marshallIn(SFc42_GeneralInstanceStruct *chartInstance,
  const mxArray *c42_b_u, const emlrtMsgIdentifier *c42_parentId);
static void c42_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c42_mxArrayInData, const char_T *c42_varName, void *c42_outData);
static const mxArray *c42_b_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData);
static uint32_T c42_b_emlrt_marshallIn(SFc42_GeneralInstanceStruct
  *chartInstance, const mxArray *c42_b_e_exit_trialEventCounter, const char_T
  *c42_identifier);
static uint32_T c42_c_emlrt_marshallIn(SFc42_GeneralInstanceStruct
  *chartInstance, const mxArray *c42_b_u, const emlrtMsgIdentifier *c42_parentId);
static void c42_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c42_mxArrayInData, const char_T *c42_varName, void *c42_outData);
static const mxArray *c42_c_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData);
static int32_T c42_d_emlrt_marshallIn(SFc42_GeneralInstanceStruct *chartInstance,
  const mxArray *c42_b_u, const emlrtMsgIdentifier *c42_parentId);
static void c42_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c42_mxArrayInData, const char_T *c42_varName, void *c42_outData);
static const mxArray *c42_d_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData);
static uint8_T c42_e_emlrt_marshallIn(SFc42_GeneralInstanceStruct *chartInstance,
  const mxArray *c42_b_is_InTrial, const char_T *c42_identifier);
static uint8_T c42_f_emlrt_marshallIn(SFc42_GeneralInstanceStruct *chartInstance,
  const mxArray *c42_b_u, const emlrtMsgIdentifier *c42_parentId);
static void c42_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c42_mxArrayInData, const char_T *c42_varName, void *c42_outData);
static const mxArray *c42_e_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData);
static const mxArray *c42_f_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData);
static void c42_g_emlrt_marshallIn(SFc42_GeneralInstanceStruct *chartInstance,
  const mxArray *c42_b_trial_queue, const char_T *c42_identifier, real_T c42_y
  [499]);
static void c42_h_emlrt_marshallIn(SFc42_GeneralInstanceStruct *chartInstance,
  const mxArray *c42_b_u, const emlrtMsgIdentifier *c42_parentId, real_T c42_y
  [499]);
static void c42_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c42_mxArrayInData, const char_T *c42_varName, void *c42_outData);
static const mxArray *c42_g_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData);
static const mxArray *c42_h_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData);
static real_T c42_i_emlrt_marshallIn(SFc42_GeneralInstanceStruct *chartInstance,
  const mxArray *c42_b_repeat_last_trial, const char_T *c42_identifier);
static real_T c42_j_emlrt_marshallIn(SFc42_GeneralInstanceStruct *chartInstance,
  const mxArray *c42_b_u, const emlrtMsgIdentifier *c42_parentId);
static void c42_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c42_mxArrayInData, const char_T *c42_varName, void *c42_outData);
static const mxArray *c42_i_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData);
static void c42_k_emlrt_marshallIn(SFc42_GeneralInstanceStruct *chartInstance,
  const mxArray *c42_b_extra_trials, const char_T *c42_identifier, real_T c42_y
  [2]);
static void c42_l_emlrt_marshallIn(SFc42_GeneralInstanceStruct *chartInstance,
  const mxArray *c42_b_u, const emlrtMsgIdentifier *c42_parentId, real_T c42_y[2]);
static void c42_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c42_mxArrayInData, const char_T *c42_varName, void *c42_outData);
static boolean_T c42_m_emlrt_marshallIn(SFc42_GeneralInstanceStruct
  *chartInstance, const mxArray *c42_b_e_exit_trial, const char_T
  *c42_identifier);
static boolean_T c42_n_emlrt_marshallIn(SFc42_GeneralInstanceStruct
  *chartInstance, const mxArray *c42_b_u, const emlrtMsgIdentifier *c42_parentId);
static const mxArray *c42_o_emlrt_marshallIn(SFc42_GeneralInstanceStruct
  *chartInstance, const mxArray *c42_b_setSimStateSideEffectsInfo, const char_T *
  c42_identifier);
static const mxArray *c42_p_emlrt_marshallIn(SFc42_GeneralInstanceStruct
  *chartInstance, const mxArray *c42_b_u, const emlrtMsgIdentifier *c42_parentId);
static uint32_T c42__u32_d_(SFc42_GeneralInstanceStruct *chartInstance, real_T
  c42_b);
static int32_T c42__s32_d_(SFc42_GeneralInstanceStruct *chartInstance, real_T
  c42_b);
static int32_T c42__s32_u32_(SFc42_GeneralInstanceStruct *chartInstance,
  uint32_T c42_b);
static uint32_T c42__u32_minus__(SFc42_GeneralInstanceStruct *chartInstance,
  uint32_T c42_b, uint32_T c42_c);
static uint32_T c42__u32_s8_(SFc42_GeneralInstanceStruct *chartInstance, int8_T
  c42_b);
static uint32_T c42__u32_add__(SFc42_GeneralInstanceStruct *chartInstance,
  uint32_T c42_b, uint32_T c42_c);
static void init_dsm_address_info(SFc42_GeneralInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc42_GeneralInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c42_General(SFc42_GeneralInstanceStruct *chartInstance)
{
  int32_T c42_i0;
  int32_T c42_i1;
  int32_T c42_i2;
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc42_General(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c42_doSetSimStateSideEffects = 0U;
  chartInstance->c42_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c42_is_InTrial = c42_IN_NO_ACTIVE_CHILD;
  *chartInstance->c42_is_active_c42_General = 0U;
  *chartInstance->c42_is_c42_General = c42_IN_NO_ACTIVE_CHILD;
  for (c42_i0 = 0; c42_i0 < 499; c42_i0++) {
    (*chartInstance->c42_trial_queue)[c42_i0] = 0.0;
  }

  for (c42_i1 = 0; c42_i1 < 499; c42_i1++) {
    (*chartInstance->c42_repeat_list)[c42_i1] = 0.0;
  }

  *chartInstance->c42_repeat_list_length = 0U;
  *chartInstance->c42_i = 1U;
  *chartInstance->c42_swap_index = 0U;
  *chartInstance->c42_temp = 0U;
  *chartInstance->c42_trial_queue_length = 499U;
  *chartInstance->c42_trial_in_mini_block = 0U;
  *chartInstance->c42_EXAM = 1.0;
  *chartInstance->c42_BLOCK = 2.0;
  if (!(sf_get_output_port_reusable(chartInstance->S, 1) != 0)) {
    *chartInstance->c42_task_status = 0U;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 2) != 0)) {
    *chartInstance->c42_tp = 0U;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 3) != 0)) {
    *chartInstance->c42_block = 0U;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 4) != 0)) {
    *chartInstance->c42_trial_in_block = 0U;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 5) != 0)) {
    *chartInstance->c42_block_in_set = 0U;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 6) != 0)) {
    *chartInstance->c42_trial_in_set = 0U;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 7) != 0)) {
    *chartInstance->c42_repeat_last_trial = 0.0;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 8) != 0)) {
    for (c42_i2 = 0; c42_i2 < 2; c42_i2++) {
      (*chartInstance->c42_extra_trials)[c42_i2] = 0.0;
    }
  }

  *chartInstance->c42_e_exit_trialEventCounter = 0U;
  *chartInstance->c42_e_exit_trial = false;
}

static void initialize_params_c42_General(SFc42_GeneralInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void enable_c42_General(SFc42_GeneralInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c42_General(SFc42_GeneralInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c42_update_debugger_state_c42_General(SFc42_GeneralInstanceStruct
  *chartInstance)
{
  uint32_T c42_prevAniVal;
  c42_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (*chartInstance->c42_is_active_c42_General == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 35U, *chartInstance->c42_sfEvent);
  }

  if (*chartInstance->c42_is_c42_General == c42_IN_Ready) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c42_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c42_sfEvent);
  }

  if (*chartInstance->c42_is_c42_General == c42_IN_Finished) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c42_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c42_sfEvent);
  }

  if (*chartInstance->c42_is_c42_General == c42_IN_PausedBetweenBlocks) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c42_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c42_sfEvent);
  }

  if (*chartInstance->c42_is_c42_General == c42_IN_PausedBetweenTrials) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c42_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c42_sfEvent);
  }

  if (*chartInstance->c42_is_c42_General == c42_IN_InTrial) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c42_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c42_sfEvent);
  }

  if (*chartInstance->c42_is_InTrial == c42_IN_RepeatTrialLater) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c42_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c42_sfEvent);
  }

  if (*chartInstance->c42_is_InTrial == c42_IN_RepeatTrialNow) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c42_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c42_sfEvent);
  }

  if (*chartInstance->c42_is_InTrial == c42_IN_SkipTrial) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c42_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c42_sfEvent);
  }

  if (*chartInstance->c42_is_InTrial == c42_IN_Running) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c42_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c42_sfEvent);
  }

  if (*chartInstance->c42_is_InTrial == c42_IN_Paused) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c42_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c42_sfEvent);
  }

  _SFD_SET_ANIMATION(c42_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c42_General(SFc42_GeneralInstanceStruct *chartInstance)
{
  c42_update_debugger_state_c42_General(chartInstance);
}

static const mxArray *get_sim_state_c42_General(SFc42_GeneralInstanceStruct
  *chartInstance)
{
  const mxArray *c42_st;
  const mxArray *c42_y = NULL;
  uint32_T c42_hoistedGlobal;
  uint32_T c42_b_u;
  const mxArray *c42_b_y = NULL;
  uint32_T c42_b_hoistedGlobal;
  uint32_T c42_c_u;
  const mxArray *c42_c_y = NULL;
  const mxArray *c42_d_y = NULL;
  real_T c42_c_hoistedGlobal;
  real_T c42_d_u;
  const mxArray *c42_e_y = NULL;
  uint32_T c42_d_hoistedGlobal;
  uint32_T c42_e_u;
  const mxArray *c42_f_y = NULL;
  uint32_T c42_e_hoistedGlobal;
  uint32_T c42_f_u;
  const mxArray *c42_g_y = NULL;
  uint32_T c42_f_hoistedGlobal;
  uint32_T c42_g_u;
  const mxArray *c42_h_y = NULL;
  uint32_T c42_g_hoistedGlobal;
  uint32_T c42_h_u;
  const mxArray *c42_i_y = NULL;
  real_T c42_h_hoistedGlobal;
  real_T c42_i_u;
  const mxArray *c42_j_y = NULL;
  real_T c42_i_hoistedGlobal;
  real_T c42_j_u;
  const mxArray *c42_k_y = NULL;
  uint32_T c42_j_hoistedGlobal;
  uint32_T c42_k_u;
  const mxArray *c42_l_y = NULL;
  const mxArray *c42_m_y = NULL;
  uint32_T c42_k_hoistedGlobal;
  uint32_T c42_l_u;
  const mxArray *c42_n_y = NULL;
  uint32_T c42_l_hoistedGlobal;
  uint32_T c42_m_u;
  const mxArray *c42_o_y = NULL;
  uint32_T c42_m_hoistedGlobal;
  uint32_T c42_n_u;
  const mxArray *c42_p_y = NULL;
  uint32_T c42_n_hoistedGlobal;
  uint32_T c42_o_u;
  const mxArray *c42_q_y = NULL;
  const mxArray *c42_r_y = NULL;
  uint32_T c42_o_hoistedGlobal;
  uint32_T c42_p_u;
  const mxArray *c42_s_y = NULL;
  boolean_T c42_p_hoistedGlobal;
  boolean_T c42_q_u;
  const mxArray *c42_t_y = NULL;
  uint32_T c42_q_hoistedGlobal;
  uint32_T c42_r_u;
  const mxArray *c42_u_y = NULL;
  uint8_T c42_r_hoistedGlobal;
  uint8_T c42_s_u;
  const mxArray *c42_v_y = NULL;
  uint8_T c42_s_hoistedGlobal;
  uint8_T c42_t_u;
  const mxArray *c42_w_y = NULL;
  uint8_T c42_t_hoistedGlobal;
  uint8_T c42_u_u;
  const mxArray *c42_x_y = NULL;
  c42_st = NULL;
  c42_st = NULL;
  c42_y = NULL;
  sf_mex_assign(&c42_y, sf_mex_createcellmatrix(23, 1), false);
  c42_hoistedGlobal = *chartInstance->c42_block;
  c42_b_u = c42_hoistedGlobal;
  c42_b_y = NULL;
  sf_mex_assign(&c42_b_y, sf_mex_create("y", &c42_b_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c42_y, 0, c42_b_y);
  c42_b_hoistedGlobal = *chartInstance->c42_block_in_set;
  c42_c_u = c42_b_hoistedGlobal;
  c42_c_y = NULL;
  sf_mex_assign(&c42_c_y, sf_mex_create("y", &c42_c_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c42_y, 1, c42_c_y);
  c42_d_y = NULL;
  sf_mex_assign(&c42_d_y, sf_mex_create("y", *chartInstance->c42_extra_trials, 0,
    0U, 1U, 0U, 1, 2), false);
  sf_mex_setcell(c42_y, 2, c42_d_y);
  c42_c_hoistedGlobal = *chartInstance->c42_repeat_last_trial;
  c42_d_u = c42_c_hoistedGlobal;
  c42_e_y = NULL;
  sf_mex_assign(&c42_e_y, sf_mex_create("y", &c42_d_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c42_y, 3, c42_e_y);
  c42_d_hoistedGlobal = *chartInstance->c42_task_status;
  c42_e_u = c42_d_hoistedGlobal;
  c42_f_y = NULL;
  sf_mex_assign(&c42_f_y, sf_mex_create("y", &c42_e_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c42_y, 4, c42_f_y);
  c42_e_hoistedGlobal = *chartInstance->c42_tp;
  c42_f_u = c42_e_hoistedGlobal;
  c42_g_y = NULL;
  sf_mex_assign(&c42_g_y, sf_mex_create("y", &c42_f_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c42_y, 5, c42_g_y);
  c42_f_hoistedGlobal = *chartInstance->c42_trial_in_block;
  c42_g_u = c42_f_hoistedGlobal;
  c42_h_y = NULL;
  sf_mex_assign(&c42_h_y, sf_mex_create("y", &c42_g_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c42_y, 6, c42_h_y);
  c42_g_hoistedGlobal = *chartInstance->c42_trial_in_set;
  c42_h_u = c42_g_hoistedGlobal;
  c42_i_y = NULL;
  sf_mex_assign(&c42_i_y, sf_mex_create("y", &c42_h_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c42_y, 7, c42_i_y);
  c42_h_hoistedGlobal = *chartInstance->c42_BLOCK;
  c42_i_u = c42_h_hoistedGlobal;
  c42_j_y = NULL;
  sf_mex_assign(&c42_j_y, sf_mex_create("y", &c42_i_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c42_y, 8, c42_j_y);
  c42_i_hoistedGlobal = *chartInstance->c42_EXAM;
  c42_j_u = c42_i_hoistedGlobal;
  c42_k_y = NULL;
  sf_mex_assign(&c42_k_y, sf_mex_create("y", &c42_j_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c42_y, 9, c42_k_y);
  c42_j_hoistedGlobal = *chartInstance->c42_i;
  c42_k_u = c42_j_hoistedGlobal;
  c42_l_y = NULL;
  sf_mex_assign(&c42_l_y, sf_mex_create("y", &c42_k_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c42_y, 10, c42_l_y);
  c42_m_y = NULL;
  sf_mex_assign(&c42_m_y, sf_mex_create("y", *chartInstance->c42_repeat_list, 0,
    0U, 1U, 0U, 1, 499), false);
  sf_mex_setcell(c42_y, 11, c42_m_y);
  c42_k_hoistedGlobal = *chartInstance->c42_repeat_list_length;
  c42_l_u = c42_k_hoistedGlobal;
  c42_n_y = NULL;
  sf_mex_assign(&c42_n_y, sf_mex_create("y", &c42_l_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c42_y, 12, c42_n_y);
  c42_l_hoistedGlobal = *chartInstance->c42_swap_index;
  c42_m_u = c42_l_hoistedGlobal;
  c42_o_y = NULL;
  sf_mex_assign(&c42_o_y, sf_mex_create("y", &c42_m_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c42_y, 13, c42_o_y);
  c42_m_hoistedGlobal = *chartInstance->c42_temp;
  c42_n_u = c42_m_hoistedGlobal;
  c42_p_y = NULL;
  sf_mex_assign(&c42_p_y, sf_mex_create("y", &c42_n_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c42_y, 14, c42_p_y);
  c42_n_hoistedGlobal = *chartInstance->c42_trial_in_mini_block;
  c42_o_u = c42_n_hoistedGlobal;
  c42_q_y = NULL;
  sf_mex_assign(&c42_q_y, sf_mex_create("y", &c42_o_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c42_y, 15, c42_q_y);
  c42_r_y = NULL;
  sf_mex_assign(&c42_r_y, sf_mex_create("y", *chartInstance->c42_trial_queue, 0,
    0U, 1U, 0U, 1, 499), false);
  sf_mex_setcell(c42_y, 16, c42_r_y);
  c42_o_hoistedGlobal = *chartInstance->c42_trial_queue_length;
  c42_p_u = c42_o_hoistedGlobal;
  c42_s_y = NULL;
  sf_mex_assign(&c42_s_y, sf_mex_create("y", &c42_p_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c42_y, 17, c42_s_y);
  c42_p_hoistedGlobal = *chartInstance->c42_e_exit_trial;
  c42_q_u = c42_p_hoistedGlobal;
  c42_t_y = NULL;
  sf_mex_assign(&c42_t_y, sf_mex_create("y", &c42_q_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c42_y, 18, c42_t_y);
  c42_q_hoistedGlobal = *chartInstance->c42_e_exit_trialEventCounter;
  c42_r_u = c42_q_hoistedGlobal;
  c42_u_y = NULL;
  sf_mex_assign(&c42_u_y, sf_mex_create("y", &c42_r_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c42_y, 19, c42_u_y);
  c42_r_hoistedGlobal = *chartInstance->c42_is_active_c42_General;
  c42_s_u = c42_r_hoistedGlobal;
  c42_v_y = NULL;
  sf_mex_assign(&c42_v_y, sf_mex_create("y", &c42_s_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c42_y, 20, c42_v_y);
  c42_s_hoistedGlobal = *chartInstance->c42_is_c42_General;
  c42_t_u = c42_s_hoistedGlobal;
  c42_w_y = NULL;
  sf_mex_assign(&c42_w_y, sf_mex_create("y", &c42_t_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c42_y, 21, c42_w_y);
  c42_t_hoistedGlobal = *chartInstance->c42_is_InTrial;
  c42_u_u = c42_t_hoistedGlobal;
  c42_x_y = NULL;
  sf_mex_assign(&c42_x_y, sf_mex_create("y", &c42_u_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c42_y, 22, c42_x_y);
  sf_mex_assign(&c42_st, c42_y, false);
  return c42_st;
}

static void set_sim_state_c42_General(SFc42_GeneralInstanceStruct *chartInstance,
  const mxArray *c42_st)
{
  const mxArray *c42_b_u;
  real_T c42_dv0[2];
  int32_T c42_i3;
  real_T c42_dv1[499];
  int32_T c42_i4;
  real_T c42_dv2[499];
  int32_T c42_i5;
  c42_b_u = sf_mex_dup(c42_st);
  *chartInstance->c42_block = c42_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("block", c42_b_u, 0)), "block");
  *chartInstance->c42_block_in_set = c42_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("block_in_set", c42_b_u, 1)), "block_in_set");
  c42_k_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("extra_trials",
    c42_b_u, 2)), "extra_trials", c42_dv0);
  for (c42_i3 = 0; c42_i3 < 2; c42_i3++) {
    (*chartInstance->c42_extra_trials)[c42_i3] = c42_dv0[c42_i3];
  }

  *chartInstance->c42_repeat_last_trial = c42_i_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("repeat_last_trial", c42_b_u, 3)),
    "repeat_last_trial");
  *chartInstance->c42_task_status = c42_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("task_status", c42_b_u, 4)), "task_status");
  *chartInstance->c42_tp = c42_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("tp", c42_b_u, 5)), "tp");
  *chartInstance->c42_trial_in_block = c42_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("trial_in_block", c42_b_u, 6)), "trial_in_block");
  *chartInstance->c42_trial_in_set = c42_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("trial_in_set", c42_b_u, 7)), "trial_in_set");
  *chartInstance->c42_BLOCK = c42_i_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("BLOCK", c42_b_u, 8)), "BLOCK");
  *chartInstance->c42_EXAM = c42_i_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("EXAM", c42_b_u, 9)), "EXAM");
  *chartInstance->c42_i = c42_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("i", c42_b_u, 10)), "i");
  c42_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("repeat_list",
    c42_b_u, 11)), "repeat_list", c42_dv1);
  for (c42_i4 = 0; c42_i4 < 499; c42_i4++) {
    (*chartInstance->c42_repeat_list)[c42_i4] = c42_dv1[c42_i4];
  }

  *chartInstance->c42_repeat_list_length = c42_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("repeat_list_length", c42_b_u, 12)),
    "repeat_list_length");
  *chartInstance->c42_swap_index = c42_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("swap_index", c42_b_u, 13)), "swap_index");
  *chartInstance->c42_temp = c42_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("temp", c42_b_u, 14)), "temp");
  *chartInstance->c42_trial_in_mini_block = c42_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("trial_in_mini_block", c42_b_u, 15)),
    "trial_in_mini_block");
  c42_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("trial_queue",
    c42_b_u, 16)), "trial_queue", c42_dv2);
  for (c42_i5 = 0; c42_i5 < 499; c42_i5++) {
    (*chartInstance->c42_trial_queue)[c42_i5] = c42_dv2[c42_i5];
  }

  *chartInstance->c42_trial_queue_length = c42_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("trial_queue_length", c42_b_u, 17)),
    "trial_queue_length");
  *chartInstance->c42_e_exit_trial = c42_m_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("e_exit_trial", c42_b_u, 18)), "e_exit_trial");
  *chartInstance->c42_e_exit_trialEventCounter = c42_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("e_exit_trialEventCounter",
       c42_b_u, 19)), "e_exit_trialEventCounter");
  *chartInstance->c42_is_active_c42_General = c42_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_c42_General", c42_b_u,
       20)), "is_active_c42_General");
  *chartInstance->c42_is_c42_General = c42_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_c42_General", c42_b_u, 21)), "is_c42_General");
  *chartInstance->c42_is_InTrial = c42_e_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_InTrial", c42_b_u, 22)), "is_InTrial");
  sf_mex_assign(&chartInstance->c42_setSimStateSideEffectsInfo,
                c42_o_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "setSimStateSideEffectsInfo", c42_b_u, 23)), "setSimStateSideEffectsInfo"),
                true);
  sf_mex_destroy(&c42_b_u);
  chartInstance->c42_doSetSimStateSideEffects = 1U;
  c42_update_debugger_state_c42_General(chartInstance);
  sf_mex_destroy(&c42_st);
}

static void c42_set_sim_state_side_effects_c42_General
  (SFc42_GeneralInstanceStruct *chartInstance)
{
  if (chartInstance->c42_doSetSimStateSideEffects != 0) {
    chartInstance->c42_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c42_General(SFc42_GeneralInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c42_setSimStateSideEffectsInfo);
}

static void sf_gateway_c42_General(SFc42_GeneralInstanceStruct *chartInstance)
{
  int32_T c42_i6;
  int32_T c42_i7;
  int32_T c42_i8;
  int32_T c42_i9;
  int32_T c42_i10;
  int32_T c42_inputEventFiredFlag;
  c42_set_sim_state_side_effects_c42_General(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 35U, *chartInstance->c42_sfEvent);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c42_BLOCK, 2U, 1U, 0U,
                        *chartInstance->c42_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c42_EXAM, 3U, 1U, 0U,
                        *chartInstance->c42_sfEvent, false);
  for (c42_i6 = 0; c42_i6 < 2; c42_i6++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c42_extra_trials)[c42_i6], 30U, 1U,
                          0U, *chartInstance->c42_sfEvent, false);
  }

  _SFD_DATA_RANGE_CHECK(*chartInstance->c42_repeat_last_trial, 29U, 1U, 0U,
                        *chartInstance->c42_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_in_mini_block, 9U, 1U,
                        0U, *chartInstance->c42_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_queue_length, 11U, 1U,
                        0U, *chartInstance->c42_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c42_next_task_program_specified_block,
                        22U, 1U, 0U, *chartInstance->c42_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_temp, 8U, 1U, 0U,
                        *chartInstance->c42_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_swap_index, 7U, 1U, 0U,
                        *chartInstance->c42_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_i, 4U, 1U, 0U,
                        *chartInstance->c42_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_repeat_list_length, 6U, 1U,
                        0U, *chartInstance->c42_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)
                        *chartInstance->c42_task_protocol_block_sequence_length,
                        21U, 1U, 0U, *chartInstance->c42_sfEvent, false);
  for (c42_i7 = 0; c42_i7 < 2000; c42_i7++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c42_task_protocol_block_sequence)
                          [c42_i7], 20U, 1U, 0U, *chartInstance->c42_sfEvent,
                          false);
  }

  _SFD_DATA_RANGE_CHECK
    (*chartInstance->c42_use_task_protocol_block_sequence_flag, 19U, 1U, 0U,
     *chartInstance->c42_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_queue_max_length, 18U,
                        1U, 0U, *chartInstance->c42_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_max_block_definitions, 17U,
                        1U, 0U, *chartInstance->c42_sfEvent, false);
  for (c42_i8 = 0; c42_i8 < 25000; c42_i8++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c42_block_definitions)[c42_i8], 16U,
                          1U, 0U, *chartInstance->c42_sfEvent, false);
  }

  _SFD_DATA_RANGE_CHECK(*chartInstance->c42_seed, 15U, 1U, 0U,
                        *chartInstance->c42_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c42_pause_type, 14U, 1U, 0U,
                        *chartInstance->c42_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_run_command, 13U, 1U, 0U,
                        *chartInstance->c42_sfEvent, false);
  for (c42_i9 = 0; c42_i9 < 499; c42_i9++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c42_repeat_list)[c42_i9], 5U, 1U, 0U,
                          *chartInstance->c42_sfEvent, false);
  }

  for (c42_i10 = 0; c42_i10 < 499; c42_i10++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c42_trial_queue)[c42_i10], 10U, 1U,
                          0U, *chartInstance->c42_sfEvent, false);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_in_set, 28U, 1U, 0U,
                        *chartInstance->c42_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_block_in_set, 27U, 1U, 0U,
                        *chartInstance->c42_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_in_block, 26U, 1U, 0U,
                        *chartInstance->c42_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_block, 25U, 1U, 0U,
                        *chartInstance->c42_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_tp, 24U, 1U, 0U,
                        *chartInstance->c42_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_task_status, 23U, 1U, 0U,
                        *chartInstance->c42_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c42_repeat_trial_flag, 12U, 1U, 0U,
                        *chartInstance->c42_sfEvent, false);
  c42_inputEventFiredFlag = 0;
  if (*chartInstance->c42_e_clk != 0) {
    c42_inputEventFiredFlag = 1;
    *chartInstance->c42_sfEvent = c42_event_e_clk;
    _SFD_CE_CALL(EVENT_BEFORE_BROADCAST_TAG, c42_event_e_clk,
                 *chartInstance->c42_sfEvent);
    c42_chartstep_c42_General(chartInstance);
    _SFD_CE_CALL(EVENT_AFTER_BROADCAST_TAG, c42_event_e_clk,
                 *chartInstance->c42_sfEvent);
  }

  if (*chartInstance->c42_e_trial_over != 0) {
    c42_inputEventFiredFlag = 1;
    *chartInstance->c42_sfEvent = c42_event_e_trial_over;
    _SFD_CE_CALL(EVENT_BEFORE_BROADCAST_TAG, c42_event_e_trial_over,
                 *chartInstance->c42_sfEvent);
    c42_chartstep_c42_General(chartInstance);
    _SFD_CE_CALL(EVENT_AFTER_BROADCAST_TAG, c42_event_e_trial_over,
                 *chartInstance->c42_sfEvent);
  }

  if (c42_inputEventFiredFlag != 0) {
    if (*chartInstance->c42_e_exit_trialEventCounter > 0U) {
      *chartInstance->c42_e_exit_trial = !*chartInstance->c42_e_exit_trial;
      (*chartInstance->c42_e_exit_trialEventCounter)--;
    }
  }

  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_GeneralMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c42_General(SFc42_GeneralInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c42_chartstep_c42_General(SFc42_GeneralInstanceStruct *chartInstance)
{
  int32_T c42_i11;
  int32_T c42_i12;
  boolean_T c42_out;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 35U, *chartInstance->c42_sfEvent);
  if (*chartInstance->c42_is_active_c42_General == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 35U,
                 *chartInstance->c42_sfEvent);
    *chartInstance->c42_is_active_c42_General = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 35U, *chartInstance->c42_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 46U, *chartInstance->c42_sfEvent);
    *chartInstance->c42_is_c42_General = c42_IN_Ready;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c42_sfEvent);
    *chartInstance->c42_task_status = 1U;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_task_status, 23U, 4U, 9U, *
                          chartInstance->c42_sfEvent, false);
    *chartInstance->c42_tp = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_tp, 24U, 4U, 9U,
                          *chartInstance->c42_sfEvent, false);
    *chartInstance->c42_block = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_block, 25U, 4U, 9U,
                          *chartInstance->c42_sfEvent, false);
    *chartInstance->c42_trial_in_block = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_in_block, 26U, 4U,
                          9U, *chartInstance->c42_sfEvent, false);
    *chartInstance->c42_block_in_set = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_block_in_set, 27U, 4U, 9U,
                          *chartInstance->c42_sfEvent, false);
    *chartInstance->c42_trial_in_set = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_in_set, 28U, 4U, 9U,
                          *chartInstance->c42_sfEvent, false);
    *chartInstance->c42_trial_in_mini_block = 0U;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_in_mini_block, 9U,
                          4U, 9U, *chartInstance->c42_sfEvent, false);
    (*chartInstance->c42_extra_trials)[_SFD_ARRAY_BOUNDS_CHECK(30U, c42__s32_d_
      (chartInstance, *chartInstance->c42_EXAM - 1.0), 1, 2, 1, 0)] = 0.0;
    for (c42_i11 = 0; c42_i11 < 2; c42_i11++) {
      _SFD_DATA_RANGE_CHECK((*chartInstance->c42_extra_trials)[c42_i11], 30U, 4U,
                            9U, *chartInstance->c42_sfEvent, false);
    }

    (*chartInstance->c42_extra_trials)[_SFD_ARRAY_BOUNDS_CHECK(30U, c42__s32_d_
      (chartInstance, *chartInstance->c42_BLOCK - 1.0), 1, 2, 1, 0)] = 0.0;
    for (c42_i12 = 0; c42_i12 < 2; c42_i12++) {
      _SFD_DATA_RANGE_CHECK((*chartInstance->c42_extra_trials)[c42_i12], 30U, 4U,
                            9U, *chartInstance->c42_sfEvent, false);
    }
  } else {
    switch (*chartInstance->c42_is_c42_General) {
     case c42_IN_Finished:
      CV_CHART_EVAL(35, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                   *chartInstance->c42_sfEvent);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c42_sfEvent);
      break;

     case c42_IN_InTrial:
      CV_CHART_EVAL(35, 0, 2);
      c42_InTrial(chartInstance);
      break;

     case c42_IN_PausedBetweenBlocks:
      CV_CHART_EVAL(35, 0, 3);
      c42_PausedBetweenBlocks(chartInstance);
      break;

     case c42_IN_PausedBetweenTrials:
      CV_CHART_EVAL(35, 0, 4);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 20U,
                   *chartInstance->c42_sfEvent);
      c42_out = (CV_TRANSITION_EVAL(20U, (int32_T)_SFD_CCP_CALL(20U, 0,
        CV_RELATIONAL_EVAL(5U, 20U, 0, (real_T)*chartInstance->c42_run_command,
                           1.0, 0, 0U, *chartInstance->c42_run_command == 1) !=
        0U, *chartInstance->c42_sfEvent)) != 0);
      if (c42_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 20U, *chartInstance->c42_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c42_sfEvent);
        *chartInstance->c42_is_c42_General = c42_IN_InTrial;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c42_sfEvent);
        *chartInstance->c42_trial_in_set = c42__u32_add__(chartInstance,
          *chartInstance->c42_trial_in_set, c42__u32_s8_(chartInstance, 1));
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_in_set, 28U, 4U,
                              1U, *chartInstance->c42_sfEvent, false);
        *chartInstance->c42_trial_in_block = c42__u32_add__(chartInstance,
          *chartInstance->c42_trial_in_block, c42__u32_s8_(chartInstance, 1));
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_in_block, 26U,
                              4U, 1U, *chartInstance->c42_sfEvent, false);
        *chartInstance->c42_trial_in_mini_block = c42__u32_add__(chartInstance, *
          chartInstance->c42_trial_in_mini_block, c42__u32_s8_(chartInstance, 1));
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_in_mini_block,
                              9U, 4U, 1U, *chartInstance->c42_sfEvent, false);
        *chartInstance->c42_tp = c42__u32_d_(chartInstance,
          (*chartInstance->c42_trial_queue)[_SFD_ARRAY_BOUNDS_CHECK(10U,
          c42__s32_u32_(chartInstance, c42__u32_minus__(chartInstance,
          *chartInstance->c42_trial_in_mini_block, c42__u32_s8_(chartInstance, 1))),
          1, 499, 1, 0)]);
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_tp, 24U, 4U, 1U,
                              *chartInstance->c42_sfEvent, false);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 36U, *chartInstance->c42_sfEvent);
        *chartInstance->c42_is_InTrial = c42_IN_Running;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c42_sfEvent);
        *chartInstance->c42_task_status = 2U;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_task_status, 23U, 4U,
                              5U, *chartInstance->c42_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 8U,
                     *chartInstance->c42_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, *chartInstance->c42_sfEvent);
      break;

     case c42_IN_Ready:
      CV_CHART_EVAL(35, 0, 5);
      c42_Ready(chartInstance);
      break;

     default:
      CV_CHART_EVAL(35, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c42_is_c42_General = c42_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c42_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 35U, *chartInstance->c42_sfEvent);
}

static void initSimStructsc42_General(SFc42_GeneralInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c42_Ready(SFc42_GeneralInstanceStruct *chartInstance)
{
  boolean_T c42_out;
  boolean_T c42_b_out;
  boolean_T c42_b_temp;
  boolean_T c42_c_out;
  boolean_T c42_c_temp;
  boolean_T c42_d_out;
  boolean_T c42_d_temp;
  boolean_T c42_e_temp;
  boolean_T c42_e_out;
  int32_T c42_i13;
  boolean_T c42_f_temp;
  boolean_T c42_g_temp;
  real_T c42_d0;
  boolean_T c42_f_out;
  int32_T c42_i14;
  boolean_T c42_g_out;
  real_T c42_d1;
  boolean_T c42_h_out;
  boolean_T c42_i_out;
  int32_T c42_i15;
  int32_T c42_i16;
  boolean_T c42_j_out;
  boolean_T c42_k_out;
  int32_T exitg1;
  int32_T exitg2;
  int32_T exitg3;
  int32_T exitg4;
  boolean_T guard1 = false;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 29U,
               *chartInstance->c42_sfEvent);
  c42_out = (CV_TRANSITION_EVAL(29U, (int32_T)_SFD_CCP_CALL(29U, 0,
    CV_RELATIONAL_EVAL(5U, 29U, 0, (real_T)*chartInstance->c42_run_command, 1.0,
                       0, 0U, *chartInstance->c42_run_command == 1) != 0U,
    *chartInstance->c42_sfEvent)) != 0);
  if (c42_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 29U, *chartInstance->c42_sfEvent);
    srand(*chartInstance->c42_seed);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 17U, *chartInstance->c42_sfEvent);
    do {
      exitg1 = 0;
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 44U, *chartInstance->c42_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 39U,
                   *chartInstance->c42_sfEvent);
      c42_b_out = (CV_TRANSITION_EVAL(39U, (int32_T)_SFD_CCP_CALL(39U, 0,
        CV_RELATIONAL_EVAL(5U, 39U, 0,
                           *chartInstance->c42_use_task_protocol_block_sequence_flag,
                           1.0, -1, 0U,
                           *chartInstance->c42_use_task_protocol_block_sequence_flag
                           == 1.0) != 0U, *chartInstance->c42_sfEvent)) != 0);
      guard1 = false;
      if (c42_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 39U, *chartInstance->c42_sfEvent);
        *chartInstance->c42_i = 1U;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_i, 4U, 5U, 39U,
                              *chartInstance->c42_sfEvent, false);
        *chartInstance->c42_temp = c42__u32_d_(chartInstance,
          (*chartInstance->c42_task_protocol_block_sequence)[1000]);
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_temp, 8U, 5U, 39U,
                              *chartInstance->c42_sfEvent, false);
        do {
          exitg2 = 0;
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 16U, *chartInstance->c42_sfEvent);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 14U,
                       *chartInstance->c42_sfEvent);
          c42_b_temp = (_SFD_CCP_CALL(14U, 0, CV_RELATIONAL_EVAL(5U, 14U, 0,
            (real_T)*chartInstance->c42_temp, (real_T)
            *chartInstance->c42_block_in_set, 0, 3U, *chartInstance->c42_temp <=
            *chartInstance->c42_block_in_set) != 0U, *chartInstance->c42_sfEvent)
                        != 0);
          if (c42_b_temp) {
            c42_b_temp = (_SFD_CCP_CALL(14U, 1, CV_RELATIONAL_EVAL(5U, 14U, 1,
              (real_T)*chartInstance->c42_i, (real_T)
              *chartInstance->c42_task_protocol_block_sequence_length, 0, 2U,
              *chartInstance->c42_i <
              *chartInstance->c42_task_protocol_block_sequence_length) != 0U,
              *chartInstance->c42_sfEvent) != 0);
          }

          c42_c_out = (CV_TRANSITION_EVAL(14U, (int32_T)c42_b_temp) != 0);
          if (c42_c_out) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 14U, *chartInstance->c42_sfEvent);
            *chartInstance->c42_i = c42__u32_add__(chartInstance,
              *chartInstance->c42_i, c42__u32_s8_(chartInstance, 1));
            _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_i, 4U, 5U, 14U,
                                  *chartInstance->c42_sfEvent, false);
            *chartInstance->c42_temp = c42__u32_d_(chartInstance, (real_T)
              *chartInstance->c42_temp +
              (*chartInstance->c42_task_protocol_block_sequence)[1000 +
              _SFD_ARRAY_BOUNDS_CHECK(20U, c42__s32_u32_(chartInstance,
              c42__u32_minus__(chartInstance, *chartInstance->c42_i,
                               c42__u32_s8_(chartInstance, 1))), 1, 1000, 1, 0)]);
            _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_temp, 8U, 5U, 14U,
                                  *chartInstance->c42_sfEvent, false);
            _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
          } else {
            exitg2 = 1;
          }
        } while (exitg2 == 0);

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c42_sfEvent);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 31U,
                     *chartInstance->c42_sfEvent);
        c42_c_temp = (_SFD_CCP_CALL(31U, 0, CV_RELATIONAL_EVAL(5U, 31U, 0,
          (real_T)*chartInstance->c42_i, (real_T)
          *chartInstance->c42_task_protocol_block_sequence_length, 0, 0U,
          *chartInstance->c42_i ==
          *chartInstance->c42_task_protocol_block_sequence_length) != 0U,
          *chartInstance->c42_sfEvent) != 0);
        if (c42_c_temp) {
          c42_c_temp = (_SFD_CCP_CALL(31U, 1, CV_RELATIONAL_EVAL(5U, 31U, 1,
            (real_T)*chartInstance->c42_temp, (real_T)
            *chartInstance->c42_block_in_set, 0, 3U, *chartInstance->c42_temp <=
            *chartInstance->c42_block_in_set) != 0U, *chartInstance->c42_sfEvent)
                        != 0);
        }

        c42_d_out = (CV_TRANSITION_EVAL(31U, (int32_T)c42_c_temp) != 0);
        if (c42_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 31U, *chartInstance->c42_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c42_sfEvent);
          *chartInstance->c42_is_c42_General = c42_IN_Finished;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c42_sfEvent);
          *chartInstance->c42_task_status = 4U;
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_task_status, 23U, 4U,
                                0U, *chartInstance->c42_sfEvent, false);
          exitg1 = 1;
        } else {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 21U, *chartInstance->c42_sfEvent);
          *chartInstance->c42_block = c42__u32_d_(chartInstance,
            (*chartInstance->c42_task_protocol_block_sequence)
            [_SFD_ARRAY_BOUNDS_CHECK(20U, c42__s32_u32_(chartInstance,
            c42__u32_minus__(chartInstance, *chartInstance->c42_i, c42__u32_s8_
                             (chartInstance, 1))), 1, 1000, 1, 0)]);
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_block, 25U, 5U, 21U,
                                *chartInstance->c42_sfEvent, false);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c42_sfEvent);
          guard1 = true;
        }
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 13U,
                     *chartInstance->c42_sfEvent);
        c42_d_temp = (_SFD_CCP_CALL(13U, 0, CV_RELATIONAL_EVAL(5U, 13U, 0,
          *chartInstance->c42_use_task_protocol_block_sequence_flag, 0.0, -1, 0U,
          *chartInstance->c42_use_task_protocol_block_sequence_flag == 0.0) !=
          0U, *chartInstance->c42_sfEvent) != 0);
        if (c42_d_temp) {
          c42_e_temp = (_SFD_CCP_CALL(13U, 1, CV_RELATIONAL_EVAL(5U, 13U, 1,
            *chartInstance->c42_next_task_program_specified_block, 0.0, -1, 0U, *
            chartInstance->c42_next_task_program_specified_block == 0.0) != 0U, *
            chartInstance->c42_sfEvent) != 0);
          if (!c42_e_temp) {
            c42_e_temp = (_SFD_CCP_CALL(13U, 2, CV_RELATIONAL_EVAL(5U, 13U, 2,
              *chartInstance->c42_next_task_program_specified_block, (real_T)
              *chartInstance->c42_max_block_definitions, -1, 4U,
              *chartInstance->c42_next_task_program_specified_block > (real_T)
              *chartInstance->c42_max_block_definitions) != 0U,
              *chartInstance->c42_sfEvent) != 0);
          }

          c42_d_temp = c42_e_temp;
        }

        c42_e_out = (CV_TRANSITION_EVAL(13U, (int32_T)c42_d_temp) != 0);
        if (c42_e_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13U, *chartInstance->c42_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c42_sfEvent);
          *chartInstance->c42_is_c42_General = c42_IN_Finished;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c42_sfEvent);
          *chartInstance->c42_task_status = 4U;
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_task_status, 23U, 4U,
                                0U, *chartInstance->c42_sfEvent, false);
          exitg1 = 1;
        } else {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 28U, *chartInstance->c42_sfEvent);
          *chartInstance->c42_block = c42__u32_d_(chartInstance,
            *chartInstance->c42_next_task_program_specified_block);
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_block, 25U, 5U, 28U,
                                *chartInstance->c42_sfEvent, false);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 34U, *chartInstance->c42_sfEvent);
          guard1 = true;
        }
      }

      if (guard1 == true) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 38U, *chartInstance->c42_sfEvent);
        *chartInstance->c42_block_in_set = c42__u32_add__(chartInstance,
          *chartInstance->c42_block_in_set, c42__u32_s8_(chartInstance, 1));
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_block_in_set, 27U, 5U,
                              38U, *chartInstance->c42_sfEvent, false);
        *chartInstance->c42_i = 1U;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_i, 4U, 5U, 38U,
                              *chartInstance->c42_sfEvent, false);
        (*chartInstance->c42_extra_trials)[_SFD_ARRAY_BOUNDS_CHECK(30U,
          c42__s32_d_(chartInstance, *chartInstance->c42_BLOCK - 1.0), 1, 2, 1,
          0)] = 0.0;
        for (c42_i13 = 0; c42_i13 < 2; c42_i13++) {
          _SFD_DATA_RANGE_CHECK((*chartInstance->c42_extra_trials)[c42_i13], 30U,
                                5U, 38U, *chartInstance->c42_sfEvent, false);
        }

        do {
          exitg4 = 0;
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 25U, *chartInstance->c42_sfEvent);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                       *chartInstance->c42_sfEvent);
          c42_f_temp = (_SFD_CCP_CALL(5U, 0, CV_RELATIONAL_EVAL(5U, 5U, 0,
            (real_T)*chartInstance->c42_i, (real_T)
            *chartInstance->c42_trial_queue_max_length, 0, 3U,
            *chartInstance->c42_i <= *chartInstance->c42_trial_queue_max_length)
            != 0U, *chartInstance->c42_sfEvent) != 0);
          if (c42_f_temp) {
            c42_f_temp = (_SFD_CCP_CALL(5U, 1, CV_RELATIONAL_EVAL(5U, 5U, 1,
              (real_T)*chartInstance->c42_block, 0.0, 0, 4U,
              *chartInstance->c42_block > 0U) != 0U, *chartInstance->c42_sfEvent)
                          != 0);
          }

          c42_g_temp = c42_f_temp;
          if (c42_g_temp) {
            c42_d0 = (*chartInstance->c42_block_definitions)
              [_SFD_ARRAY_BOUNDS_CHECK(16U, c42__s32_u32_(chartInstance,
              c42__u32_minus__(chartInstance, *chartInstance->c42_block,
                               c42__u32_s8_(chartInstance, 1))), 1, 50, 1, 0) +
              50 * _SFD_ARRAY_BOUNDS_CHECK(16U, c42__s32_u32_(chartInstance,
              c42__u32_minus__(chartInstance, c42__u32_add__(chartInstance,
              *chartInstance->c42_i, c42__u32_s8_(chartInstance, 1)),
                               c42__u32_s8_(chartInstance, 1))), 1, 500, 2, 0)];
            c42_g_temp = (_SFD_CCP_CALL(5U, 2, CV_RELATIONAL_EVAL(5U, 5U, 2,
              c42_d0, 0.0, -1, 1U, c42_d0 != 0.0) != 0U,
              *chartInstance->c42_sfEvent) != 0);
          }

          c42_f_out = (CV_TRANSITION_EVAL(5U, (int32_T)c42_g_temp) != 0);
          if (c42_f_out) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, *chartInstance->c42_sfEvent);
            (*chartInstance->c42_trial_queue)[_SFD_ARRAY_BOUNDS_CHECK(10U,
              c42__s32_u32_(chartInstance, c42__u32_minus__(chartInstance,
              *chartInstance->c42_i, c42__u32_s8_(chartInstance, 1))), 1, 499, 1,
              0)] = (*chartInstance->c42_block_definitions)
              [_SFD_ARRAY_BOUNDS_CHECK(16U, c42__s32_u32_(chartInstance,
              c42__u32_minus__(chartInstance, *chartInstance->c42_block,
                               c42__u32_s8_(chartInstance, 1))), 1, 50, 1, 0) +
              50 * _SFD_ARRAY_BOUNDS_CHECK(16U, c42__s32_u32_(chartInstance,
              c42__u32_minus__(chartInstance, c42__u32_add__(chartInstance,
              *chartInstance->c42_i, c42__u32_s8_(chartInstance, 1)),
                               c42__u32_s8_(chartInstance, 1))), 1, 500, 2, 0)];
            for (c42_i14 = 0; c42_i14 < 499; c42_i14++) {
              _SFD_DATA_RANGE_CHECK((*chartInstance->c42_trial_queue)[c42_i14],
                                    10U, 5U, 5U, *chartInstance->c42_sfEvent,
                                    false);
            }

            *chartInstance->c42_i = c42__u32_add__(chartInstance,
              *chartInstance->c42_i, c42__u32_s8_(chartInstance, 1));
            _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_i, 4U, 5U, 5U,
                                  *chartInstance->c42_sfEvent, false);
            _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
          } else {
            exitg4 = 1;
          }
        } while (exitg4 == 0);

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 30U, *chartInstance->c42_sfEvent);
        *chartInstance->c42_trial_queue_length = c42__u32_minus__(chartInstance,
          *chartInstance->c42_i, c42__u32_s8_(chartInstance, 1));
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_queue_length,
                              11U, 5U, 30U, *chartInstance->c42_sfEvent, false);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 55U,
                     *chartInstance->c42_sfEvent);
        c42_g_out = (CV_TRANSITION_EVAL(55U, (int32_T)_SFD_CCP_CALL(55U, 0,
          CV_RELATIONAL_EVAL(5U, 55U, 0, (real_T)
                             *chartInstance->c42_trial_queue_length, 0.0, 0, 4U,
                             *chartInstance->c42_trial_queue_length > 0U) != 0U,
          *chartInstance->c42_sfEvent)) != 0);
        if (c42_g_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 55U, *chartInstance->c42_sfEvent);
          *chartInstance->c42_trial_in_block = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_in_block, 26U,
                                5U, 55U, *chartInstance->c42_sfEvent, false);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, *chartInstance->c42_sfEvent);
          *chartInstance->c42_trial_in_mini_block = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_in_mini_block,
                                9U, 5U, 6U, *chartInstance->c42_sfEvent, false);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                       *chartInstance->c42_sfEvent);
          c42_d1 = (*chartInstance->c42_block_definitions)
            [_SFD_ARRAY_BOUNDS_CHECK(16U, c42__s32_u32_(chartInstance,
            c42__u32_minus__(chartInstance, *chartInstance->c42_block,
                             c42__u32_s8_(chartInstance, 1))), 1, 50, 1, 0)];
          c42_h_out = (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7U, 0,
            CV_RELATIONAL_EVAL(5U, 7U, 0, c42_d1, 1.0, -1, 0U, c42_d1 == 1.0) !=
            0U, *chartInstance->c42_sfEvent)) != 0);
          if (c42_h_out) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, *chartInstance->c42_sfEvent);
            *chartInstance->c42_i = 1U;
            _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_i, 4U, 5U, 7U,
                                  *chartInstance->c42_sfEvent, false);
            do {
              exitg3 = 0;
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U,
                           *chartInstance->c42_sfEvent);
              _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 12U,
                           *chartInstance->c42_sfEvent);
              c42_i_out = (CV_TRANSITION_EVAL(12U, (int32_T)_SFD_CCP_CALL(12U, 0,
                CV_RELATIONAL_EVAL(5U, 12U, 0, (real_T)*chartInstance->c42_i,
                                   (real_T)
                                   *chartInstance->c42_trial_queue_length, 0, 3U,
                                   *chartInstance->c42_i <=
                                   *chartInstance->c42_trial_queue_length) != 0U,
                *chartInstance->c42_sfEvent)) != 0);
              if (c42_i_out) {
                _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12U,
                             *chartInstance->c42_sfEvent);
                *chartInstance->c42_swap_index = c42__u32_d_(chartInstance,
                  muDoubleScalarRem((real_T)rand(), (real_T)
                                    *chartInstance->c42_trial_queue_length) +
                  1.0);
                _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_swap_index, 7U,
                                      5U, 12U, *chartInstance->c42_sfEvent,
                                      false);
                *chartInstance->c42_temp = c42__u32_d_(chartInstance,
                  (*chartInstance->c42_trial_queue)[_SFD_ARRAY_BOUNDS_CHECK(10U,
                  c42__s32_u32_(chartInstance, c42__u32_minus__(chartInstance,
                  *chartInstance->c42_swap_index, c42__u32_s8_(chartInstance, 1))),
                  1, 499, 1, 0)]);
                _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_temp, 8U, 5U,
                                      12U, *chartInstance->c42_sfEvent, false);
                (*chartInstance->c42_trial_queue)[_SFD_ARRAY_BOUNDS_CHECK(10U,
                  c42__s32_u32_(chartInstance, c42__u32_minus__(chartInstance,
                  *chartInstance->c42_swap_index, c42__u32_s8_(chartInstance, 1))),
                  1, 499, 1, 0)] = (*chartInstance->c42_trial_queue)
                  [_SFD_ARRAY_BOUNDS_CHECK(10U, c42__s32_u32_(chartInstance,
                  c42__u32_minus__(chartInstance, *chartInstance->c42_i,
                                   c42__u32_s8_(chartInstance, 1))), 1, 499, 1,
                  0)];
                for (c42_i15 = 0; c42_i15 < 499; c42_i15++) {
                  _SFD_DATA_RANGE_CHECK((*chartInstance->c42_trial_queue)
                                        [c42_i15], 10U, 5U, 12U,
                                        *chartInstance->c42_sfEvent, false);
                }

                (*chartInstance->c42_trial_queue)[_SFD_ARRAY_BOUNDS_CHECK(10U,
                  c42__s32_u32_(chartInstance, c42__u32_minus__(chartInstance,
                  *chartInstance->c42_i, c42__u32_s8_(chartInstance, 1))), 1,
                  499, 1, 0)] = (real_T)*chartInstance->c42_temp;
                for (c42_i16 = 0; c42_i16 < 499; c42_i16++) {
                  _SFD_DATA_RANGE_CHECK((*chartInstance->c42_trial_queue)
                                        [c42_i16], 10U, 5U, 12U,
                                        *chartInstance->c42_sfEvent, false);
                }

                *chartInstance->c42_i = c42__u32_add__(chartInstance,
                  *chartInstance->c42_i, c42__u32_s8_(chartInstance, 1));
                _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_i, 4U, 5U, 12U,
                                      *chartInstance->c42_sfEvent, false);
                _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
              } else {
                exitg3 = 1;
              }
            } while (exitg3 == 0);

            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 56U, *chartInstance->c42_sfEvent);
          } else {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, *chartInstance->c42_sfEvent);
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, *chartInstance->c42_sfEvent);
          }

          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, *chartInstance->c42_sfEvent);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 57U,
                       *chartInstance->c42_sfEvent);
          c42_j_out = (CV_TRANSITION_EVAL(57U, (int32_T)_SFD_CCP_CALL(57U, 0,
            CV_RELATIONAL_EVAL(5U, 57U, 0, (real_T)
                               *chartInstance->c42_run_command, 1.0, 0, 1U,
                               *chartInstance->c42_run_command != 1) != 0U,
            *chartInstance->c42_sfEvent)) != 0);
          if (c42_j_out) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 57U, *chartInstance->c42_sfEvent);
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 58U, *chartInstance->c42_sfEvent);
            _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c42_sfEvent);
            *chartInstance->c42_is_c42_General = c42_IN_PausedBetweenTrials;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c42_sfEvent);
            *chartInstance->c42_task_status = 3U;
            _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_task_status, 23U,
                                  4U, 8U, *chartInstance->c42_sfEvent, false);
          } else {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 59U, *chartInstance->c42_sfEvent);
            _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c42_sfEvent);
            *chartInstance->c42_is_c42_General = c42_IN_InTrial;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c42_sfEvent);
            *chartInstance->c42_trial_in_set = c42__u32_add__(chartInstance,
              *chartInstance->c42_trial_in_set, c42__u32_s8_(chartInstance, 1));
            _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_in_set, 28U,
                                  4U, 1U, *chartInstance->c42_sfEvent, false);
            *chartInstance->c42_trial_in_block = c42__u32_add__(chartInstance,
              *chartInstance->c42_trial_in_block, c42__u32_s8_(chartInstance, 1));
            _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_in_block,
                                  26U, 4U, 1U, *chartInstance->c42_sfEvent,
                                  false);
            *chartInstance->c42_trial_in_mini_block = c42__u32_add__
              (chartInstance, *chartInstance->c42_trial_in_mini_block,
               c42__u32_s8_(chartInstance, 1));
            _SFD_DATA_RANGE_CHECK((real_T)
                                  *chartInstance->c42_trial_in_mini_block, 9U,
                                  4U, 1U, *chartInstance->c42_sfEvent, false);
            *chartInstance->c42_tp = c42__u32_d_(chartInstance,
              (*chartInstance->c42_trial_queue)[_SFD_ARRAY_BOUNDS_CHECK(10U,
              c42__s32_u32_(chartInstance, c42__u32_minus__(chartInstance,
              *chartInstance->c42_trial_in_mini_block, c42__u32_s8_
              (chartInstance, 1))), 1, 499, 1, 0)]);
            _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_tp, 24U, 4U, 1U,
                                  *chartInstance->c42_sfEvent, false);
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 36U, *chartInstance->c42_sfEvent);
            *chartInstance->c42_is_InTrial = c42_IN_Running;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c42_sfEvent);
            *chartInstance->c42_task_status = 2U;
            _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_task_status, 23U,
                                  4U, 5U, *chartInstance->c42_sfEvent, false);
          }

          exitg1 = 1;
        } else {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 54U, *chartInstance->c42_sfEvent);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 15U, *chartInstance->c42_sfEvent);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 24U,
                       *chartInstance->c42_sfEvent);
          c42_k_out = (CV_TRANSITION_EVAL(24U, (int32_T)_SFD_CCP_CALL(24U, 0,
            CV_RELATIONAL_EVAL(5U, 24U, 0, (real_T)
                               *chartInstance->c42_run_command, 1.0, 0, 0U,
                               *chartInstance->c42_run_command == 1) != 0U,
            *chartInstance->c42_sfEvent)) != 0);
          if (c42_k_out) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 24U, *chartInstance->c42_sfEvent);
            _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
          } else {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 22U, *chartInstance->c42_sfEvent);
            _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c42_sfEvent);
            *chartInstance->c42_is_c42_General = c42_IN_PausedBetweenBlocks;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c42_sfEvent);
            *chartInstance->c42_task_status = 3U;
            _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_task_status, 23U,
                                  4U, 7U, *chartInstance->c42_sfEvent, false);
            exitg1 = 1;
          }
        }
      }
    } while (exitg1 == 0);
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 9U,
                 *chartInstance->c42_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 9U, *chartInstance->c42_sfEvent);
}

static void c42_PausedBetweenBlocks(SFc42_GeneralInstanceStruct *chartInstance)
{
  boolean_T c42_out;
  boolean_T c42_b_out;
  boolean_T c42_b_temp;
  boolean_T c42_c_out;
  boolean_T c42_c_temp;
  boolean_T c42_d_out;
  boolean_T c42_d_temp;
  boolean_T c42_e_temp;
  boolean_T c42_e_out;
  int32_T c42_i17;
  boolean_T c42_f_temp;
  boolean_T c42_g_temp;
  real_T c42_d2;
  boolean_T c42_f_out;
  int32_T c42_i18;
  boolean_T c42_g_out;
  real_T c42_d3;
  boolean_T c42_h_out;
  boolean_T c42_i_out;
  int32_T c42_i19;
  int32_T c42_i20;
  boolean_T c42_j_out;
  boolean_T c42_k_out;
  int32_T exitg1;
  int32_T exitg2;
  int32_T exitg3;
  int32_T exitg4;
  boolean_T guard1 = false;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 23U,
               *chartInstance->c42_sfEvent);
  c42_out = (CV_TRANSITION_EVAL(23U, (int32_T)_SFD_CCP_CALL(23U, 0,
    CV_RELATIONAL_EVAL(5U, 23U, 0, (real_T)*chartInstance->c42_run_command, 1.0,
                       0, 0U, *chartInstance->c42_run_command == 1) != 0U,
    *chartInstance->c42_sfEvent)) != 0);
  if (c42_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 23U, *chartInstance->c42_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 17U, *chartInstance->c42_sfEvent);
    do {
      exitg1 = 0;
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 44U, *chartInstance->c42_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 39U,
                   *chartInstance->c42_sfEvent);
      c42_b_out = (CV_TRANSITION_EVAL(39U, (int32_T)_SFD_CCP_CALL(39U, 0,
        CV_RELATIONAL_EVAL(5U, 39U, 1,
                           *chartInstance->c42_use_task_protocol_block_sequence_flag,
                           1.0, -1, 0U,
                           *chartInstance->c42_use_task_protocol_block_sequence_flag
                           == 1.0) != 0U, *chartInstance->c42_sfEvent)) != 0);
      guard1 = false;
      if (c42_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 39U, *chartInstance->c42_sfEvent);
        *chartInstance->c42_i = 1U;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_i, 4U, 5U, 39U,
                              *chartInstance->c42_sfEvent, false);
        *chartInstance->c42_temp = c42__u32_d_(chartInstance,
          (*chartInstance->c42_task_protocol_block_sequence)[1000]);
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_temp, 8U, 5U, 39U,
                              *chartInstance->c42_sfEvent, false);
        do {
          exitg2 = 0;
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 16U, *chartInstance->c42_sfEvent);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 14U,
                       *chartInstance->c42_sfEvent);
          c42_b_temp = (_SFD_CCP_CALL(14U, 0, CV_RELATIONAL_EVAL(5U, 14U, 2,
            (real_T)*chartInstance->c42_temp, (real_T)
            *chartInstance->c42_block_in_set, 0, 3U, *chartInstance->c42_temp <=
            *chartInstance->c42_block_in_set) != 0U, *chartInstance->c42_sfEvent)
                        != 0);
          if (c42_b_temp) {
            c42_b_temp = (_SFD_CCP_CALL(14U, 1, CV_RELATIONAL_EVAL(5U, 14U, 3,
              (real_T)*chartInstance->c42_i, (real_T)
              *chartInstance->c42_task_protocol_block_sequence_length, 0, 2U,
              *chartInstance->c42_i <
              *chartInstance->c42_task_protocol_block_sequence_length) != 0U,
              *chartInstance->c42_sfEvent) != 0);
          }

          c42_c_out = (CV_TRANSITION_EVAL(14U, (int32_T)c42_b_temp) != 0);
          if (c42_c_out) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 14U, *chartInstance->c42_sfEvent);
            *chartInstance->c42_i = c42__u32_add__(chartInstance,
              *chartInstance->c42_i, c42__u32_s8_(chartInstance, 1));
            _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_i, 4U, 5U, 14U,
                                  *chartInstance->c42_sfEvent, false);
            *chartInstance->c42_temp = c42__u32_d_(chartInstance, (real_T)
              *chartInstance->c42_temp +
              (*chartInstance->c42_task_protocol_block_sequence)[1000 +
              _SFD_ARRAY_BOUNDS_CHECK(20U, c42__s32_u32_(chartInstance,
              c42__u32_minus__(chartInstance, *chartInstance->c42_i,
                               c42__u32_s8_(chartInstance, 1))), 1, 1000, 1, 0)]);
            _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_temp, 8U, 5U, 14U,
                                  *chartInstance->c42_sfEvent, false);
            _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
          } else {
            exitg2 = 1;
          }
        } while (exitg2 == 0);

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c42_sfEvent);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 31U,
                     *chartInstance->c42_sfEvent);
        c42_c_temp = (_SFD_CCP_CALL(31U, 0, CV_RELATIONAL_EVAL(5U, 31U, 2,
          (real_T)*chartInstance->c42_i, (real_T)
          *chartInstance->c42_task_protocol_block_sequence_length, 0, 0U,
          *chartInstance->c42_i ==
          *chartInstance->c42_task_protocol_block_sequence_length) != 0U,
          *chartInstance->c42_sfEvent) != 0);
        if (c42_c_temp) {
          c42_c_temp = (_SFD_CCP_CALL(31U, 1, CV_RELATIONAL_EVAL(5U, 31U, 3,
            (real_T)*chartInstance->c42_temp, (real_T)
            *chartInstance->c42_block_in_set, 0, 3U, *chartInstance->c42_temp <=
            *chartInstance->c42_block_in_set) != 0U, *chartInstance->c42_sfEvent)
                        != 0);
        }

        c42_d_out = (CV_TRANSITION_EVAL(31U, (int32_T)c42_c_temp) != 0);
        if (c42_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 31U, *chartInstance->c42_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c42_sfEvent);
          *chartInstance->c42_is_c42_General = c42_IN_Finished;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c42_sfEvent);
          *chartInstance->c42_task_status = 4U;
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_task_status, 23U, 4U,
                                0U, *chartInstance->c42_sfEvent, false);
          exitg1 = 1;
        } else {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 21U, *chartInstance->c42_sfEvent);
          *chartInstance->c42_block = c42__u32_d_(chartInstance,
            (*chartInstance->c42_task_protocol_block_sequence)
            [_SFD_ARRAY_BOUNDS_CHECK(20U, c42__s32_u32_(chartInstance,
            c42__u32_minus__(chartInstance, *chartInstance->c42_i, c42__u32_s8_
                             (chartInstance, 1))), 1, 1000, 1, 0)]);
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_block, 25U, 5U, 21U,
                                *chartInstance->c42_sfEvent, false);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c42_sfEvent);
          guard1 = true;
        }
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 13U,
                     *chartInstance->c42_sfEvent);
        c42_d_temp = (_SFD_CCP_CALL(13U, 0, CV_RELATIONAL_EVAL(5U, 13U, 3,
          *chartInstance->c42_use_task_protocol_block_sequence_flag, 0.0, -1, 0U,
          *chartInstance->c42_use_task_protocol_block_sequence_flag == 0.0) !=
          0U, *chartInstance->c42_sfEvent) != 0);
        if (c42_d_temp) {
          c42_e_temp = (_SFD_CCP_CALL(13U, 1, CV_RELATIONAL_EVAL(5U, 13U, 4,
            *chartInstance->c42_next_task_program_specified_block, 0.0, -1, 0U, *
            chartInstance->c42_next_task_program_specified_block == 0.0) != 0U, *
            chartInstance->c42_sfEvent) != 0);
          if (!c42_e_temp) {
            c42_e_temp = (_SFD_CCP_CALL(13U, 2, CV_RELATIONAL_EVAL(5U, 13U, 5,
              *chartInstance->c42_next_task_program_specified_block, (real_T)
              *chartInstance->c42_max_block_definitions, -1, 4U,
              *chartInstance->c42_next_task_program_specified_block > (real_T)
              *chartInstance->c42_max_block_definitions) != 0U,
              *chartInstance->c42_sfEvent) != 0);
          }

          c42_d_temp = c42_e_temp;
        }

        c42_e_out = (CV_TRANSITION_EVAL(13U, (int32_T)c42_d_temp) != 0);
        if (c42_e_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13U, *chartInstance->c42_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c42_sfEvent);
          *chartInstance->c42_is_c42_General = c42_IN_Finished;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c42_sfEvent);
          *chartInstance->c42_task_status = 4U;
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_task_status, 23U, 4U,
                                0U, *chartInstance->c42_sfEvent, false);
          exitg1 = 1;
        } else {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 28U, *chartInstance->c42_sfEvent);
          *chartInstance->c42_block = c42__u32_d_(chartInstance,
            *chartInstance->c42_next_task_program_specified_block);
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_block, 25U, 5U, 28U,
                                *chartInstance->c42_sfEvent, false);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 34U, *chartInstance->c42_sfEvent);
          guard1 = true;
        }
      }

      if (guard1 == true) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 38U, *chartInstance->c42_sfEvent);
        *chartInstance->c42_block_in_set = c42__u32_add__(chartInstance,
          *chartInstance->c42_block_in_set, c42__u32_s8_(chartInstance, 1));
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_block_in_set, 27U, 5U,
                              38U, *chartInstance->c42_sfEvent, false);
        *chartInstance->c42_i = 1U;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_i, 4U, 5U, 38U,
                              *chartInstance->c42_sfEvent, false);
        (*chartInstance->c42_extra_trials)[_SFD_ARRAY_BOUNDS_CHECK(30U,
          c42__s32_d_(chartInstance, *chartInstance->c42_BLOCK - 1.0), 1, 2, 1,
          0)] = 0.0;
        for (c42_i17 = 0; c42_i17 < 2; c42_i17++) {
          _SFD_DATA_RANGE_CHECK((*chartInstance->c42_extra_trials)[c42_i17], 30U,
                                5U, 38U, *chartInstance->c42_sfEvent, false);
        }

        do {
          exitg4 = 0;
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 25U, *chartInstance->c42_sfEvent);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                       *chartInstance->c42_sfEvent);
          c42_f_temp = (_SFD_CCP_CALL(5U, 0, CV_RELATIONAL_EVAL(5U, 5U, 3,
            (real_T)*chartInstance->c42_i, (real_T)
            *chartInstance->c42_trial_queue_max_length, 0, 3U,
            *chartInstance->c42_i <= *chartInstance->c42_trial_queue_max_length)
            != 0U, *chartInstance->c42_sfEvent) != 0);
          if (c42_f_temp) {
            c42_f_temp = (_SFD_CCP_CALL(5U, 1, CV_RELATIONAL_EVAL(5U, 5U, 4,
              (real_T)*chartInstance->c42_block, 0.0, 0, 4U,
              *chartInstance->c42_block > 0U) != 0U, *chartInstance->c42_sfEvent)
                          != 0);
          }

          c42_g_temp = c42_f_temp;
          if (c42_g_temp) {
            c42_d2 = (*chartInstance->c42_block_definitions)
              [_SFD_ARRAY_BOUNDS_CHECK(16U, c42__s32_u32_(chartInstance,
              c42__u32_minus__(chartInstance, *chartInstance->c42_block,
                               c42__u32_s8_(chartInstance, 1))), 1, 50, 1, 0) +
              50 * _SFD_ARRAY_BOUNDS_CHECK(16U, c42__s32_u32_(chartInstance,
              c42__u32_minus__(chartInstance, c42__u32_add__(chartInstance,
              *chartInstance->c42_i, c42__u32_s8_(chartInstance, 1)),
                               c42__u32_s8_(chartInstance, 1))), 1, 500, 2, 0)];
            c42_g_temp = (_SFD_CCP_CALL(5U, 2, CV_RELATIONAL_EVAL(5U, 5U, 5,
              c42_d2, 0.0, -1, 1U, c42_d2 != 0.0) != 0U,
              *chartInstance->c42_sfEvent) != 0);
          }

          c42_f_out = (CV_TRANSITION_EVAL(5U, (int32_T)c42_g_temp) != 0);
          if (c42_f_out) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, *chartInstance->c42_sfEvent);
            (*chartInstance->c42_trial_queue)[_SFD_ARRAY_BOUNDS_CHECK(10U,
              c42__s32_u32_(chartInstance, c42__u32_minus__(chartInstance,
              *chartInstance->c42_i, c42__u32_s8_(chartInstance, 1))), 1, 499, 1,
              0)] = (*chartInstance->c42_block_definitions)
              [_SFD_ARRAY_BOUNDS_CHECK(16U, c42__s32_u32_(chartInstance,
              c42__u32_minus__(chartInstance, *chartInstance->c42_block,
                               c42__u32_s8_(chartInstance, 1))), 1, 50, 1, 0) +
              50 * _SFD_ARRAY_BOUNDS_CHECK(16U, c42__s32_u32_(chartInstance,
              c42__u32_minus__(chartInstance, c42__u32_add__(chartInstance,
              *chartInstance->c42_i, c42__u32_s8_(chartInstance, 1)),
                               c42__u32_s8_(chartInstance, 1))), 1, 500, 2, 0)];
            for (c42_i18 = 0; c42_i18 < 499; c42_i18++) {
              _SFD_DATA_RANGE_CHECK((*chartInstance->c42_trial_queue)[c42_i18],
                                    10U, 5U, 5U, *chartInstance->c42_sfEvent,
                                    false);
            }

            *chartInstance->c42_i = c42__u32_add__(chartInstance,
              *chartInstance->c42_i, c42__u32_s8_(chartInstance, 1));
            _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_i, 4U, 5U, 5U,
                                  *chartInstance->c42_sfEvent, false);
            _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
          } else {
            exitg4 = 1;
          }
        } while (exitg4 == 0);

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 30U, *chartInstance->c42_sfEvent);
        *chartInstance->c42_trial_queue_length = c42__u32_minus__(chartInstance,
          *chartInstance->c42_i, c42__u32_s8_(chartInstance, 1));
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_queue_length,
                              11U, 5U, 30U, *chartInstance->c42_sfEvent, false);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 55U,
                     *chartInstance->c42_sfEvent);
        c42_g_out = (CV_TRANSITION_EVAL(55U, (int32_T)_SFD_CCP_CALL(55U, 0,
          CV_RELATIONAL_EVAL(5U, 55U, 1, (real_T)
                             *chartInstance->c42_trial_queue_length, 0.0, 0, 4U,
                             *chartInstance->c42_trial_queue_length > 0U) != 0U,
          *chartInstance->c42_sfEvent)) != 0);
        if (c42_g_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 55U, *chartInstance->c42_sfEvent);
          *chartInstance->c42_trial_in_block = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_in_block, 26U,
                                5U, 55U, *chartInstance->c42_sfEvent, false);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, *chartInstance->c42_sfEvent);
          *chartInstance->c42_trial_in_mini_block = 0U;
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_in_mini_block,
                                9U, 5U, 6U, *chartInstance->c42_sfEvent, false);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                       *chartInstance->c42_sfEvent);
          c42_d3 = (*chartInstance->c42_block_definitions)
            [_SFD_ARRAY_BOUNDS_CHECK(16U, c42__s32_u32_(chartInstance,
            c42__u32_minus__(chartInstance, *chartInstance->c42_block,
                             c42__u32_s8_(chartInstance, 1))), 1, 50, 1, 0)];
          c42_h_out = (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7U, 0,
            CV_RELATIONAL_EVAL(5U, 7U, 1, c42_d3, 1.0, -1, 0U, c42_d3 == 1.0) !=
            0U, *chartInstance->c42_sfEvent)) != 0);
          if (c42_h_out) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, *chartInstance->c42_sfEvent);
            *chartInstance->c42_i = 1U;
            _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_i, 4U, 5U, 7U,
                                  *chartInstance->c42_sfEvent, false);
            do {
              exitg3 = 0;
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U,
                           *chartInstance->c42_sfEvent);
              _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 12U,
                           *chartInstance->c42_sfEvent);
              c42_i_out = (CV_TRANSITION_EVAL(12U, (int32_T)_SFD_CCP_CALL(12U, 0,
                CV_RELATIONAL_EVAL(5U, 12U, 1, (real_T)*chartInstance->c42_i,
                                   (real_T)
                                   *chartInstance->c42_trial_queue_length, 0, 3U,
                                   *chartInstance->c42_i <=
                                   *chartInstance->c42_trial_queue_length) != 0U,
                *chartInstance->c42_sfEvent)) != 0);
              if (c42_i_out) {
                _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12U,
                             *chartInstance->c42_sfEvent);
                *chartInstance->c42_swap_index = c42__u32_d_(chartInstance,
                  muDoubleScalarRem((real_T)rand(), (real_T)
                                    *chartInstance->c42_trial_queue_length) +
                  1.0);
                _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_swap_index, 7U,
                                      5U, 12U, *chartInstance->c42_sfEvent,
                                      false);
                *chartInstance->c42_temp = c42__u32_d_(chartInstance,
                  (*chartInstance->c42_trial_queue)[_SFD_ARRAY_BOUNDS_CHECK(10U,
                  c42__s32_u32_(chartInstance, c42__u32_minus__(chartInstance,
                  *chartInstance->c42_swap_index, c42__u32_s8_(chartInstance, 1))),
                  1, 499, 1, 0)]);
                _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_temp, 8U, 5U,
                                      12U, *chartInstance->c42_sfEvent, false);
                (*chartInstance->c42_trial_queue)[_SFD_ARRAY_BOUNDS_CHECK(10U,
                  c42__s32_u32_(chartInstance, c42__u32_minus__(chartInstance,
                  *chartInstance->c42_swap_index, c42__u32_s8_(chartInstance, 1))),
                  1, 499, 1, 0)] = (*chartInstance->c42_trial_queue)
                  [_SFD_ARRAY_BOUNDS_CHECK(10U, c42__s32_u32_(chartInstance,
                  c42__u32_minus__(chartInstance, *chartInstance->c42_i,
                                   c42__u32_s8_(chartInstance, 1))), 1, 499, 1,
                  0)];
                for (c42_i19 = 0; c42_i19 < 499; c42_i19++) {
                  _SFD_DATA_RANGE_CHECK((*chartInstance->c42_trial_queue)
                                        [c42_i19], 10U, 5U, 12U,
                                        *chartInstance->c42_sfEvent, false);
                }

                (*chartInstance->c42_trial_queue)[_SFD_ARRAY_BOUNDS_CHECK(10U,
                  c42__s32_u32_(chartInstance, c42__u32_minus__(chartInstance,
                  *chartInstance->c42_i, c42__u32_s8_(chartInstance, 1))), 1,
                  499, 1, 0)] = (real_T)*chartInstance->c42_temp;
                for (c42_i20 = 0; c42_i20 < 499; c42_i20++) {
                  _SFD_DATA_RANGE_CHECK((*chartInstance->c42_trial_queue)
                                        [c42_i20], 10U, 5U, 12U,
                                        *chartInstance->c42_sfEvent, false);
                }

                *chartInstance->c42_i = c42__u32_add__(chartInstance,
                  *chartInstance->c42_i, c42__u32_s8_(chartInstance, 1));
                _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_i, 4U, 5U, 12U,
                                      *chartInstance->c42_sfEvent, false);
                _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
              } else {
                exitg3 = 1;
              }
            } while (exitg3 == 0);

            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 56U, *chartInstance->c42_sfEvent);
          } else {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, *chartInstance->c42_sfEvent);
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, *chartInstance->c42_sfEvent);
          }

          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, *chartInstance->c42_sfEvent);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 57U,
                       *chartInstance->c42_sfEvent);
          c42_j_out = (CV_TRANSITION_EVAL(57U, (int32_T)_SFD_CCP_CALL(57U, 0,
            CV_RELATIONAL_EVAL(5U, 57U, 1, (real_T)
                               *chartInstance->c42_run_command, 1.0, 0, 1U,
                               *chartInstance->c42_run_command != 1) != 0U,
            *chartInstance->c42_sfEvent)) != 0);
          if (c42_j_out) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 57U, *chartInstance->c42_sfEvent);
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 58U, *chartInstance->c42_sfEvent);
            _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c42_sfEvent);
            *chartInstance->c42_is_c42_General = c42_IN_PausedBetweenTrials;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c42_sfEvent);
            *chartInstance->c42_task_status = 3U;
            _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_task_status, 23U,
                                  4U, 8U, *chartInstance->c42_sfEvent, false);
          } else {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 59U, *chartInstance->c42_sfEvent);
            _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c42_sfEvent);
            *chartInstance->c42_is_c42_General = c42_IN_InTrial;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c42_sfEvent);
            *chartInstance->c42_trial_in_set = c42__u32_add__(chartInstance,
              *chartInstance->c42_trial_in_set, c42__u32_s8_(chartInstance, 1));
            _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_in_set, 28U,
                                  4U, 1U, *chartInstance->c42_sfEvent, false);
            *chartInstance->c42_trial_in_block = c42__u32_add__(chartInstance,
              *chartInstance->c42_trial_in_block, c42__u32_s8_(chartInstance, 1));
            _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_in_block,
                                  26U, 4U, 1U, *chartInstance->c42_sfEvent,
                                  false);
            *chartInstance->c42_trial_in_mini_block = c42__u32_add__
              (chartInstance, *chartInstance->c42_trial_in_mini_block,
               c42__u32_s8_(chartInstance, 1));
            _SFD_DATA_RANGE_CHECK((real_T)
                                  *chartInstance->c42_trial_in_mini_block, 9U,
                                  4U, 1U, *chartInstance->c42_sfEvent, false);
            *chartInstance->c42_tp = c42__u32_d_(chartInstance,
              (*chartInstance->c42_trial_queue)[_SFD_ARRAY_BOUNDS_CHECK(10U,
              c42__s32_u32_(chartInstance, c42__u32_minus__(chartInstance,
              *chartInstance->c42_trial_in_mini_block, c42__u32_s8_
              (chartInstance, 1))), 1, 499, 1, 0)]);
            _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_tp, 24U, 4U, 1U,
                                  *chartInstance->c42_sfEvent, false);
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 36U, *chartInstance->c42_sfEvent);
            *chartInstance->c42_is_InTrial = c42_IN_Running;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c42_sfEvent);
            *chartInstance->c42_task_status = 2U;
            _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_task_status, 23U,
                                  4U, 5U, *chartInstance->c42_sfEvent, false);
          }

          exitg1 = 1;
        } else {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 54U, *chartInstance->c42_sfEvent);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 15U, *chartInstance->c42_sfEvent);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 24U,
                       *chartInstance->c42_sfEvent);
          c42_k_out = (CV_TRANSITION_EVAL(24U, (int32_T)_SFD_CCP_CALL(24U, 0,
            CV_RELATIONAL_EVAL(5U, 24U, 1, (real_T)
                               *chartInstance->c42_run_command, 1.0, 0, 0U,
                               *chartInstance->c42_run_command == 1) != 0U,
            *chartInstance->c42_sfEvent)) != 0);
          if (c42_k_out) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 24U, *chartInstance->c42_sfEvent);
            _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
          } else {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 22U, *chartInstance->c42_sfEvent);
            _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c42_sfEvent);
            *chartInstance->c42_is_c42_General = c42_IN_PausedBetweenBlocks;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c42_sfEvent);
            *chartInstance->c42_task_status = 3U;
            _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_task_status, 23U,
                                  4U, 7U, *chartInstance->c42_sfEvent, false);
            exitg1 = 1;
          }
        }
      }
    } while (exitg1 == 0);
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 7U,
                 *chartInstance->c42_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, *chartInstance->c42_sfEvent);
}

static void c42_enter_atomic_InTrial(SFc42_GeneralInstanceStruct *chartInstance)
{
  *chartInstance->c42_trial_in_set = c42__u32_add__(chartInstance,
    *chartInstance->c42_trial_in_set, c42__u32_s8_(chartInstance, 1));
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_in_set, 28U, 4U, 1U,
                        *chartInstance->c42_sfEvent, false);
  *chartInstance->c42_trial_in_block = c42__u32_add__(chartInstance,
    *chartInstance->c42_trial_in_block, c42__u32_s8_(chartInstance, 1));
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_in_block, 26U, 4U, 1U,
                        *chartInstance->c42_sfEvent, false);
  *chartInstance->c42_trial_in_mini_block = c42__u32_add__(chartInstance,
    *chartInstance->c42_trial_in_mini_block, c42__u32_s8_(chartInstance, 1));
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_in_mini_block, 9U, 4U,
                        1U, *chartInstance->c42_sfEvent, false);
  *chartInstance->c42_tp = c42__u32_d_(chartInstance,
    (*chartInstance->c42_trial_queue)[_SFD_ARRAY_BOUNDS_CHECK(10U, c42__s32_u32_
    (chartInstance, c42__u32_minus__(chartInstance,
    *chartInstance->c42_trial_in_mini_block, c42__u32_s8_(chartInstance, 1))), 1,
    499, 1, 0)]);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_tp, 24U, 4U, 1U,
                        *chartInstance->c42_sfEvent, false);
}

static void c42_enter_internal_InTrial(SFc42_GeneralInstanceStruct
  *chartInstance)
{
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 36U, *chartInstance->c42_sfEvent);
  *chartInstance->c42_is_InTrial = c42_IN_Running;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c42_sfEvent);
  *chartInstance->c42_task_status = 2U;
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_task_status, 23U, 4U, 5U,
                        *chartInstance->c42_sfEvent, false);
}

static void c42_InTrial(SFc42_GeneralInstanceStruct *chartInstance)
{
  boolean_T c42_out;
  boolean_T c42_b_temp;
  boolean_T c42_b_out;
  boolean_T c42_c_temp;
  boolean_T c42_d_temp;
  boolean_T c42_c_out;
  int32_T c42_i21;
  int32_T c42_i22;
  int32_T c42_i23;
  boolean_T c42_d_out;
  boolean_T c42_e_out;
  int32_T c42_i24;
  int32_T c42_i25;
  int32_T c42_i26;
  int32_T c42_i27;
  boolean_T c42_f_out;
  boolean_T c42_g_out;
  boolean_T c42_e_temp;
  boolean_T c42_h_out;
  boolean_T c42_f_temp;
  boolean_T c42_i_out;
  boolean_T c42_g_temp;
  boolean_T c42_h_temp;
  boolean_T c42_j_out;
  int32_T c42_i28;
  boolean_T c42_i_temp;
  boolean_T c42_j_temp;
  real_T c42_d4;
  boolean_T c42_k_out;
  int32_T c42_i29;
  boolean_T c42_l_out;
  real_T c42_d5;
  boolean_T c42_m_out;
  boolean_T c42_n_out;
  int32_T c42_i30;
  int32_T c42_i31;
  boolean_T c42_o_out;
  boolean_T c42_p_out;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  int32_T exitg1;
  int32_T exitg2;
  int32_T exitg3;
  int32_T exitg4;
  boolean_T guard11 = false;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 26U,
               *chartInstance->c42_sfEvent);
  c42_out = (CV_TRANSITION_EVAL(26U, (int32_T)_SFD_CCP_CALL(26U, 0,
    *chartInstance->c42_sfEvent == c42_event_e_trial_over != 0U,
    *chartInstance->c42_sfEvent)) != 0);
  if (c42_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 26U, *chartInstance->c42_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 27U,
                 *chartInstance->c42_sfEvent);
    c42_b_temp = (_SFD_CCP_CALL(27U, 0, CV_RELATIONAL_EVAL(5U, 27U, 0, (real_T)
      *chartInstance->c42_run_command, 1.0, 0, 1U,
      *chartInstance->c42_run_command != 1) != 0U, *chartInstance->c42_sfEvent)
                  != 0);
    if (c42_b_temp) {
      c42_b_temp = (_SFD_CCP_CALL(27U, 1, CV_RELATIONAL_EVAL(5U, 27U, 1,
        *chartInstance->c42_pause_type, 3.0, -1, 0U,
        *chartInstance->c42_pause_type == 3.0) != 0U,
        *chartInstance->c42_sfEvent) != 0);
    }

    c42_b_out = (CV_TRANSITION_EVAL(27U, (int32_T)c42_b_temp) != 0);
    guard2 = false;
    if (c42_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 27U, *chartInstance->c42_sfEvent);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 48U, *chartInstance->c42_sfEvent);
      guard2 = true;
    } else {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 33U, *chartInstance->c42_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 32U,
                   *chartInstance->c42_sfEvent);
      c42_c_temp = (_SFD_CCP_CALL(32U, 0, CV_RELATIONAL_EVAL(5U, 32U, 0,
        *chartInstance->c42_repeat_trial_flag, 0.0, -1, 4U,
        *chartInstance->c42_repeat_trial_flag > 0.0) != 0U,
        *chartInstance->c42_sfEvent) != 0);
      if (c42_c_temp) {
        c42_d_temp = (_SFD_CCP_CALL(32U, 1, CV_RELATIONAL_EVAL(5U, 32U, 1,
          (real_T)*chartInstance->c42_run_command, 1.0, 0, 0U,
          *chartInstance->c42_run_command == 1) != 0U,
          *chartInstance->c42_sfEvent) != 0);
        if (!c42_d_temp) {
          c42_d_temp = (_SFD_CCP_CALL(32U, 2, CV_RELATIONAL_EVAL(5U, 32U, 2,
            *chartInstance->c42_pause_type, 0.0, -1, 0U,
            *chartInstance->c42_pause_type == 0.0) != 0U,
            *chartInstance->c42_sfEvent) != 0);
        }

        c42_c_temp = c42_d_temp;
      }

      c42_c_out = (CV_TRANSITION_EVAL(32U, (int32_T)c42_c_temp) != 0);
      if (c42_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 32U, *chartInstance->c42_sfEvent);
        (*chartInstance->c42_extra_trials)[_SFD_ARRAY_BOUNDS_CHECK(30U,
          c42__s32_d_(chartInstance, *chartInstance->c42_EXAM - 1.0), 1, 2, 1, 0)]
          = (*chartInstance->c42_extra_trials)[_SFD_ARRAY_BOUNDS_CHECK(30U,
          c42__s32_d_(chartInstance, *chartInstance->c42_EXAM - 1.0), 1, 2, 1, 0)]
          + 1.0;
        for (c42_i21 = 0; c42_i21 < 2; c42_i21++) {
          _SFD_DATA_RANGE_CHECK((*chartInstance->c42_extra_trials)[c42_i21], 30U,
                                5U, 32U, *chartInstance->c42_sfEvent, false);
        }

        (*chartInstance->c42_extra_trials)[_SFD_ARRAY_BOUNDS_CHECK(30U,
          c42__s32_d_(chartInstance, *chartInstance->c42_BLOCK - 1.0), 1, 2, 1,
          0)] = (*chartInstance->c42_extra_trials)[_SFD_ARRAY_BOUNDS_CHECK(30U,
          c42__s32_d_(chartInstance, *chartInstance->c42_BLOCK - 1.0), 1, 2, 1,
          0)] + 1.0;
        for (c42_i22 = 0; c42_i22 < 2; c42_i22++) {
          _SFD_DATA_RANGE_CHECK((*chartInstance->c42_extra_trials)[c42_i22], 30U,
                                5U, 32U, *chartInstance->c42_sfEvent, false);
        }

        guard2 = true;
      } else {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 49U, *chartInstance->c42_sfEvent);
        *chartInstance->c42_repeat_last_trial = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c42_repeat_last_trial, 29U, 5U,
                              49U, *chartInstance->c42_sfEvent, false);
      }
    }

    if (guard2 == true) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 47U, *chartInstance->c42_sfEvent);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 35U, *chartInstance->c42_sfEvent);
      *chartInstance->c42_repeat_list_length = c42__u32_add__(chartInstance,
        *chartInstance->c42_repeat_list_length, c42__u32_s8_(chartInstance, 1));
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_repeat_list_length, 6U,
                            5U, 35U, *chartInstance->c42_sfEvent, false);
      (*chartInstance->c42_repeat_list)[_SFD_ARRAY_BOUNDS_CHECK(5U,
        c42__s32_u32_(chartInstance, c42__u32_minus__(chartInstance,
        *chartInstance->c42_repeat_list_length, c42__u32_s8_(chartInstance, 1))),
        1, 499, 1, 0)] = (real_T)*chartInstance->c42_tp;
      for (c42_i23 = 0; c42_i23 < 499; c42_i23++) {
        _SFD_DATA_RANGE_CHECK((*chartInstance->c42_repeat_list)[c42_i23], 5U, 5U,
                              35U, *chartInstance->c42_sfEvent, false);
      }

      *chartInstance->c42_repeat_last_trial = 1.0;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c42_repeat_last_trial, 29U, 5U, 35U,
                            *chartInstance->c42_sfEvent, false);
    }

    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                 *chartInstance->c42_sfEvent);
    c42_d_out = (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4U, 0,
      CV_RELATIONAL_EVAL(5U, 4U, 0, (real_T)
                         *chartInstance->c42_trial_in_mini_block, (real_T)
                         *chartInstance->c42_trial_queue_length, 0, 5U,
                         *chartInstance->c42_trial_in_mini_block >=
                         *chartInstance->c42_trial_queue_length) != 0U,
      *chartInstance->c42_sfEvent)) != 0);
    if (c42_d_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, *chartInstance->c42_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U,
                   *chartInstance->c42_sfEvent);
      c42_e_out = (CV_TRANSITION_EVAL(0U, (int32_T)_SFD_CCP_CALL(0U, 0,
        CV_RELATIONAL_EVAL(5U, 0U, 0, (real_T)
                           *chartInstance->c42_repeat_list_length, 0.0, 0, 4U,
                           *chartInstance->c42_repeat_list_length > 0U) != 0U,
        *chartInstance->c42_sfEvent)) != 0);
      guard1 = false;
      if (c42_e_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, *chartInstance->c42_sfEvent);
        for (c42_i24 = 0; c42_i24 < 499; c42_i24++) {
          (*chartInstance->c42_trial_queue)[c42_i24] =
            (*chartInstance->c42_repeat_list)[c42_i24];
        }

        for (c42_i25 = 0; c42_i25 < 499; c42_i25++) {
          _SFD_DATA_RANGE_CHECK((*chartInstance->c42_trial_queue)[c42_i25], 10U,
                                5U, 0U, *chartInstance->c42_sfEvent, false);
        }

        *chartInstance->c42_trial_queue_length =
          *chartInstance->c42_repeat_list_length;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_queue_length,
                              11U, 5U, 0U, *chartInstance->c42_sfEvent, false);
        for (c42_i26 = 0; c42_i26 < 499; c42_i26++) {
          (*chartInstance->c42_repeat_list)[c42_i26] = 0.0;
        }

        for (c42_i27 = 0; c42_i27 < 499; c42_i27++) {
          _SFD_DATA_RANGE_CHECK((*chartInstance->c42_repeat_list)[c42_i27], 5U,
                                5U, 0U, *chartInstance->c42_sfEvent, false);
        }

        *chartInstance->c42_repeat_list_length = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_repeat_list_length, 6U,
                              5U, 0U, *chartInstance->c42_sfEvent, false);
        guard1 = true;
      } else {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 53U, *chartInstance->c42_sfEvent);
        do {
          exitg2 = 0;
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 15U, *chartInstance->c42_sfEvent);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 24U,
                       *chartInstance->c42_sfEvent);
          c42_f_out = (CV_TRANSITION_EVAL(24U, (int32_T)_SFD_CCP_CALL(24U, 0,
            CV_RELATIONAL_EVAL(5U, 24U, 2, (real_T)
                               *chartInstance->c42_run_command, 1.0, 0, 0U,
                               *chartInstance->c42_run_command == 1) != 0U,
            *chartInstance->c42_sfEvent)) != 0);
          if (c42_f_out) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 24U, *chartInstance->c42_sfEvent);
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 44U, *chartInstance->c42_sfEvent);
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 39U,
                         *chartInstance->c42_sfEvent);
            c42_g_out = (CV_TRANSITION_EVAL(39U, (int32_T)_SFD_CCP_CALL(39U, 0,
              CV_RELATIONAL_EVAL(5U, 39U, 2,
                                 *chartInstance->c42_use_task_protocol_block_sequence_flag,
                                 1.0, -1, 0U,
                                 *chartInstance->c42_use_task_protocol_block_sequence_flag
                                 == 1.0) != 0U, *chartInstance->c42_sfEvent)) !=
                         0);
            guard11 = false;
            if (c42_g_out) {
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 39U,
                           *chartInstance->c42_sfEvent);
              *chartInstance->c42_i = 1U;
              _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_i, 4U, 5U, 39U, *
                                    chartInstance->c42_sfEvent, false);
              *chartInstance->c42_temp = c42__u32_d_(chartInstance,
                (*chartInstance->c42_task_protocol_block_sequence)[1000]);
              _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_temp, 8U, 5U,
                                    39U, *chartInstance->c42_sfEvent, false);
              do {
                exitg3 = 0;
                _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 16U,
                             *chartInstance->c42_sfEvent);
                _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 14U,
                             *chartInstance->c42_sfEvent);
                c42_e_temp = (_SFD_CCP_CALL(14U, 0, CV_RELATIONAL_EVAL(5U, 14U,
                  4, (real_T)*chartInstance->c42_temp, (real_T)
                  *chartInstance->c42_block_in_set, 0, 3U,
                  *chartInstance->c42_temp <= *chartInstance->c42_block_in_set)
                  != 0U, *chartInstance->c42_sfEvent) != 0);
                if (c42_e_temp) {
                  c42_e_temp = (_SFD_CCP_CALL(14U, 1, CV_RELATIONAL_EVAL(5U, 14U,
                    5, (real_T)*chartInstance->c42_i, (real_T)
                    *chartInstance->c42_task_protocol_block_sequence_length, 0,
                    2U, *chartInstance->c42_i <
                    *chartInstance->c42_task_protocol_block_sequence_length) !=
                    0U, *chartInstance->c42_sfEvent) != 0);
                }

                c42_h_out = (CV_TRANSITION_EVAL(14U, (int32_T)c42_e_temp) != 0);
                if (c42_h_out) {
                  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 14U,
                               *chartInstance->c42_sfEvent);
                  *chartInstance->c42_i = c42__u32_add__(chartInstance,
                    *chartInstance->c42_i, c42__u32_s8_(chartInstance, 1));
                  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_i, 4U, 5U,
                                        14U, *chartInstance->c42_sfEvent, false);
                  *chartInstance->c42_temp = c42__u32_d_(chartInstance, (real_T)*
                    chartInstance->c42_temp +
                    (*chartInstance->c42_task_protocol_block_sequence)[1000 +
                    _SFD_ARRAY_BOUNDS_CHECK(20U, c42__s32_u32_(chartInstance,
                    c42__u32_minus__(chartInstance, *chartInstance->c42_i,
                                     c42__u32_s8_(chartInstance, 1))), 1, 1000,
                    1, 0)]);
                  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_temp, 8U, 5U,
                                        14U, *chartInstance->c42_sfEvent, false);
                  _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
                } else {
                  exitg3 = 1;
                }
              } while (exitg3 == 0);

              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U,
                           *chartInstance->c42_sfEvent);
              _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 31U,
                           *chartInstance->c42_sfEvent);
              c42_f_temp = (_SFD_CCP_CALL(31U, 0, CV_RELATIONAL_EVAL(5U, 31U, 4,
                (real_T)*chartInstance->c42_i, (real_T)
                *chartInstance->c42_task_protocol_block_sequence_length, 0, 0U, *
                chartInstance->c42_i ==
                *chartInstance->c42_task_protocol_block_sequence_length) != 0U, *
                chartInstance->c42_sfEvent) != 0);
              if (c42_f_temp) {
                c42_f_temp = (_SFD_CCP_CALL(31U, 1, CV_RELATIONAL_EVAL(5U, 31U,
                  5, (real_T)*chartInstance->c42_temp, (real_T)
                  *chartInstance->c42_block_in_set, 0, 3U,
                  *chartInstance->c42_temp <= *chartInstance->c42_block_in_set)
                  != 0U, *chartInstance->c42_sfEvent) != 0);
              }

              c42_i_out = (CV_TRANSITION_EVAL(31U, (int32_T)c42_f_temp) != 0);
              if (c42_i_out) {
                _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 31U,
                             *chartInstance->c42_sfEvent);
                c42_exit_internal_InTrial(chartInstance);
                _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c42_sfEvent);
                *chartInstance->c42_is_c42_General = c42_IN_Finished;
                _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c42_sfEvent);
                *chartInstance->c42_task_status = 4U;
                _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_task_status,
                                      23U, 4U, 0U, *chartInstance->c42_sfEvent,
                                      false);
                exitg2 = 1;
              } else {
                _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 21U,
                             *chartInstance->c42_sfEvent);
                *chartInstance->c42_block = c42__u32_d_(chartInstance,
                  (*chartInstance->c42_task_protocol_block_sequence)
                  [_SFD_ARRAY_BOUNDS_CHECK(20U, c42__s32_u32_(chartInstance,
                  c42__u32_minus__(chartInstance, *chartInstance->c42_i,
                                   c42__u32_s8_(chartInstance, 1))), 1, 1000, 1,
                  0)]);
                _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_block, 25U, 5U,
                                      21U, *chartInstance->c42_sfEvent, false);
                _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U,
                             *chartInstance->c42_sfEvent);
                guard11 = true;
              }
            } else {
              _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 13U,
                           *chartInstance->c42_sfEvent);
              c42_g_temp = (_SFD_CCP_CALL(13U, 0, CV_RELATIONAL_EVAL(5U, 13U, 6,
                *chartInstance->c42_use_task_protocol_block_sequence_flag, 0.0,
                -1, 0U,
                *chartInstance->c42_use_task_protocol_block_sequence_flag == 0.0)
                != 0U, *chartInstance->c42_sfEvent) != 0);
              if (c42_g_temp) {
                c42_h_temp = (_SFD_CCP_CALL(13U, 1, CV_RELATIONAL_EVAL(5U, 13U,
                  7, *chartInstance->c42_next_task_program_specified_block, 0.0,
                  -1, 0U, *chartInstance->c42_next_task_program_specified_block ==
                  0.0) != 0U, *chartInstance->c42_sfEvent) != 0);
                if (!c42_h_temp) {
                  c42_h_temp = (_SFD_CCP_CALL(13U, 2, CV_RELATIONAL_EVAL(5U, 13U,
                    8, *chartInstance->c42_next_task_program_specified_block,
                    (real_T)*chartInstance->c42_max_block_definitions, -1, 4U,
                    *chartInstance->c42_next_task_program_specified_block >
                    (real_T)*chartInstance->c42_max_block_definitions) != 0U,
                    *chartInstance->c42_sfEvent) != 0);
                }

                c42_g_temp = c42_h_temp;
              }

              c42_j_out = (CV_TRANSITION_EVAL(13U, (int32_T)c42_g_temp) != 0);
              if (c42_j_out) {
                _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13U,
                             *chartInstance->c42_sfEvent);
                c42_exit_internal_InTrial(chartInstance);
                _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c42_sfEvent);
                *chartInstance->c42_is_c42_General = c42_IN_Finished;
                _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c42_sfEvent);
                *chartInstance->c42_task_status = 4U;
                _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_task_status,
                                      23U, 4U, 0U, *chartInstance->c42_sfEvent,
                                      false);
                exitg2 = 1;
              } else {
                _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 28U,
                             *chartInstance->c42_sfEvent);
                *chartInstance->c42_block = c42__u32_d_(chartInstance,
                  *chartInstance->c42_next_task_program_specified_block);
                _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_block, 25U, 5U,
                                      28U, *chartInstance->c42_sfEvent, false);
                _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 34U,
                             *chartInstance->c42_sfEvent);
                guard11 = true;
              }
            }

            if (guard11 == true) {
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 38U,
                           *chartInstance->c42_sfEvent);
              *chartInstance->c42_block_in_set = c42__u32_add__(chartInstance,
                *chartInstance->c42_block_in_set, c42__u32_s8_(chartInstance, 1));
              _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_block_in_set,
                                    27U, 5U, 38U, *chartInstance->c42_sfEvent,
                                    false);
              *chartInstance->c42_i = 1U;
              _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_i, 4U, 5U, 38U, *
                                    chartInstance->c42_sfEvent, false);
              (*chartInstance->c42_extra_trials)[_SFD_ARRAY_BOUNDS_CHECK(30U,
                c42__s32_d_(chartInstance, *chartInstance->c42_BLOCK - 1.0), 1,
                2, 1, 0)] = 0.0;
              for (c42_i28 = 0; c42_i28 < 2; c42_i28++) {
                _SFD_DATA_RANGE_CHECK((*chartInstance->c42_extra_trials)[c42_i28],
                                      30U, 5U, 38U, *chartInstance->c42_sfEvent,
                                      false);
              }

              do {
                exitg4 = 0;
                _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 25U,
                             *chartInstance->c42_sfEvent);
                _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                             *chartInstance->c42_sfEvent);
                c42_i_temp = (_SFD_CCP_CALL(5U, 0, CV_RELATIONAL_EVAL(5U, 5U, 6,
                  (real_T)*chartInstance->c42_i, (real_T)
                  *chartInstance->c42_trial_queue_max_length, 0, 3U,
                  *chartInstance->c42_i <=
                  *chartInstance->c42_trial_queue_max_length) != 0U,
                  *chartInstance->c42_sfEvent) != 0);
                if (c42_i_temp) {
                  c42_i_temp = (_SFD_CCP_CALL(5U, 1, CV_RELATIONAL_EVAL(5U, 5U,
                    7, (real_T)*chartInstance->c42_block, 0.0, 0, 4U,
                    *chartInstance->c42_block > 0U) != 0U,
                    *chartInstance->c42_sfEvent) != 0);
                }

                c42_j_temp = c42_i_temp;
                if (c42_j_temp) {
                  c42_d4 = (*chartInstance->c42_block_definitions)
                    [_SFD_ARRAY_BOUNDS_CHECK(16U, c42__s32_u32_(chartInstance,
                    c42__u32_minus__(chartInstance, *chartInstance->c42_block,
                                     c42__u32_s8_(chartInstance, 1))), 1, 50, 1,
                    0) + 50 * _SFD_ARRAY_BOUNDS_CHECK(16U, c42__s32_u32_
                    (chartInstance, c42__u32_minus__(chartInstance,
                    c42__u32_add__(chartInstance, *chartInstance->c42_i,
                                   c42__u32_s8_(chartInstance, 1)), c42__u32_s8_
                    (chartInstance, 1))), 1, 500, 2, 0)];
                  c42_j_temp = (_SFD_CCP_CALL(5U, 2, CV_RELATIONAL_EVAL(5U, 5U,
                    8, c42_d4, 0.0, -1, 1U, c42_d4 != 0.0) != 0U,
                    *chartInstance->c42_sfEvent) != 0);
                }

                c42_k_out = (CV_TRANSITION_EVAL(5U, (int32_T)c42_j_temp) != 0);
                if (c42_k_out) {
                  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U,
                               *chartInstance->c42_sfEvent);
                  (*chartInstance->c42_trial_queue)[_SFD_ARRAY_BOUNDS_CHECK(10U,
                    c42__s32_u32_(chartInstance, c42__u32_minus__(chartInstance,
                    *chartInstance->c42_i, c42__u32_s8_(chartInstance, 1))), 1,
                    499, 1, 0)] = (*chartInstance->c42_block_definitions)
                    [_SFD_ARRAY_BOUNDS_CHECK(16U, c42__s32_u32_(chartInstance,
                    c42__u32_minus__(chartInstance, *chartInstance->c42_block,
                                     c42__u32_s8_(chartInstance, 1))), 1, 50, 1,
                    0) + 50 * _SFD_ARRAY_BOUNDS_CHECK(16U, c42__s32_u32_
                    (chartInstance, c42__u32_minus__(chartInstance,
                    c42__u32_add__(chartInstance, *chartInstance->c42_i,
                                   c42__u32_s8_(chartInstance, 1)), c42__u32_s8_
                    (chartInstance, 1))), 1, 500, 2, 0)];
                  for (c42_i29 = 0; c42_i29 < 499; c42_i29++) {
                    _SFD_DATA_RANGE_CHECK((*chartInstance->c42_trial_queue)
                                          [c42_i29], 10U, 5U, 5U,
                                          *chartInstance->c42_sfEvent, false);
                  }

                  *chartInstance->c42_i = c42__u32_add__(chartInstance,
                    *chartInstance->c42_i, c42__u32_s8_(chartInstance, 1));
                  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_i, 4U, 5U,
                                        5U, *chartInstance->c42_sfEvent, false);
                  _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
                } else {
                  exitg4 = 1;
                }
              } while (exitg4 == 0);

              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 30U,
                           *chartInstance->c42_sfEvent);
              *chartInstance->c42_trial_queue_length = c42__u32_minus__
                (chartInstance, *chartInstance->c42_i, c42__u32_s8_
                 (chartInstance, 1));
              _SFD_DATA_RANGE_CHECK((real_T)
                                    *chartInstance->c42_trial_queue_length, 11U,
                                    5U, 30U, *chartInstance->c42_sfEvent, false);
              _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 55U,
                           *chartInstance->c42_sfEvent);
              c42_l_out = (CV_TRANSITION_EVAL(55U, (int32_T)_SFD_CCP_CALL(55U, 0,
                CV_RELATIONAL_EVAL(5U, 55U, 2, (real_T)
                                   *chartInstance->c42_trial_queue_length, 0.0,
                                   0, 4U, *chartInstance->c42_trial_queue_length
                                   > 0U) != 0U, *chartInstance->c42_sfEvent)) !=
                           0);
              if (c42_l_out) {
                _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 55U,
                             *chartInstance->c42_sfEvent);
                *chartInstance->c42_trial_in_block = 0U;
                _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_in_block,
                                      26U, 5U, 55U, *chartInstance->c42_sfEvent,
                                      false);
                guard1 = true;
                exitg2 = 1;
              } else {
                _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 54U,
                             *chartInstance->c42_sfEvent);
                _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
              }
            }
          } else {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 22U, *chartInstance->c42_sfEvent);
            c42_exit_internal_InTrial(chartInstance);
            _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c42_sfEvent);
            *chartInstance->c42_is_c42_General = c42_IN_PausedBetweenBlocks;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c42_sfEvent);
            *chartInstance->c42_task_status = 3U;
            _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_task_status, 23U,
                                  4U, 7U, *chartInstance->c42_sfEvent, false);
            exitg2 = 1;
          }
        } while (exitg2 == 0);
      }

      if (guard1 == true) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, *chartInstance->c42_sfEvent);
        *chartInstance->c42_trial_in_mini_block = 0U;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_in_mini_block,
                              9U, 5U, 6U, *chartInstance->c42_sfEvent, false);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                     *chartInstance->c42_sfEvent);
        c42_d5 = (*chartInstance->c42_block_definitions)[_SFD_ARRAY_BOUNDS_CHECK
          (16U, c42__s32_u32_(chartInstance, c42__u32_minus__(chartInstance,
             *chartInstance->c42_block, c42__u32_s8_(chartInstance, 1))), 1, 50,
           1, 0)];
        c42_m_out = (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7U, 0,
          CV_RELATIONAL_EVAL(5U, 7U, 2, c42_d5, 1.0, -1, 0U, c42_d5 == 1.0) !=
          0U, *chartInstance->c42_sfEvent)) != 0);
        if (c42_m_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, *chartInstance->c42_sfEvent);
          *chartInstance->c42_i = 1U;
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_i, 4U, 5U, 7U,
                                *chartInstance->c42_sfEvent, false);
          do {
            exitg1 = 0;
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, *chartInstance->c42_sfEvent);
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 12U,
                         *chartInstance->c42_sfEvent);
            c42_n_out = (CV_TRANSITION_EVAL(12U, (int32_T)_SFD_CCP_CALL(12U, 0,
              CV_RELATIONAL_EVAL(5U, 12U, 2, (real_T)*chartInstance->c42_i,
                                 (real_T)*chartInstance->c42_trial_queue_length,
                                 0, 3U, *chartInstance->c42_i <=
                                 *chartInstance->c42_trial_queue_length) != 0U, *
              chartInstance->c42_sfEvent)) != 0);
            if (c42_n_out) {
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12U,
                           *chartInstance->c42_sfEvent);
              *chartInstance->c42_swap_index = c42__u32_d_(chartInstance,
                muDoubleScalarRem((real_T)rand(), (real_T)
                                  *chartInstance->c42_trial_queue_length) + 1.0);
              _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_swap_index, 7U,
                                    5U, 12U, *chartInstance->c42_sfEvent, false);
              *chartInstance->c42_temp = c42__u32_d_(chartInstance,
                (*chartInstance->c42_trial_queue)[_SFD_ARRAY_BOUNDS_CHECK(10U,
                c42__s32_u32_(chartInstance, c42__u32_minus__(chartInstance,
                *chartInstance->c42_swap_index, c42__u32_s8_(chartInstance, 1))),
                1, 499, 1, 0)]);
              _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_temp, 8U, 5U,
                                    12U, *chartInstance->c42_sfEvent, false);
              (*chartInstance->c42_trial_queue)[_SFD_ARRAY_BOUNDS_CHECK(10U,
                c42__s32_u32_(chartInstance, c42__u32_minus__(chartInstance,
                *chartInstance->c42_swap_index, c42__u32_s8_(chartInstance, 1))),
                1, 499, 1, 0)] = (*chartInstance->c42_trial_queue)
                [_SFD_ARRAY_BOUNDS_CHECK(10U, c42__s32_u32_(chartInstance,
                c42__u32_minus__(chartInstance, *chartInstance->c42_i,
                                 c42__u32_s8_(chartInstance, 1))), 1, 499, 1, 0)];
              for (c42_i30 = 0; c42_i30 < 499; c42_i30++) {
                _SFD_DATA_RANGE_CHECK((*chartInstance->c42_trial_queue)[c42_i30],
                                      10U, 5U, 12U, *chartInstance->c42_sfEvent,
                                      false);
              }

              (*chartInstance->c42_trial_queue)[_SFD_ARRAY_BOUNDS_CHECK(10U,
                c42__s32_u32_(chartInstance, c42__u32_minus__(chartInstance,
                *chartInstance->c42_i, c42__u32_s8_(chartInstance, 1))), 1, 499,
                1, 0)] = (real_T)*chartInstance->c42_temp;
              for (c42_i31 = 0; c42_i31 < 499; c42_i31++) {
                _SFD_DATA_RANGE_CHECK((*chartInstance->c42_trial_queue)[c42_i31],
                                      10U, 5U, 12U, *chartInstance->c42_sfEvent,
                                      false);
              }

              *chartInstance->c42_i = c42__u32_add__(chartInstance,
                *chartInstance->c42_i, c42__u32_s8_(chartInstance, 1));
              _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_i, 4U, 5U, 12U, *
                                    chartInstance->c42_sfEvent, false);
              _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
            } else {
              exitg1 = 1;
            }
          } while (exitg1 == 0);

          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 56U, *chartInstance->c42_sfEvent);
        } else {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, *chartInstance->c42_sfEvent);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, *chartInstance->c42_sfEvent);
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, *chartInstance->c42_sfEvent);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 57U,
                     *chartInstance->c42_sfEvent);
        c42_o_out = (CV_TRANSITION_EVAL(57U, (int32_T)_SFD_CCP_CALL(57U, 0,
          CV_RELATIONAL_EVAL(5U, 57U, 2, (real_T)*chartInstance->c42_run_command,
                             1.0, 0, 1U, *chartInstance->c42_run_command != 1)
          != 0U, *chartInstance->c42_sfEvent)) != 0);
        if (c42_o_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 57U, *chartInstance->c42_sfEvent);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 58U, *chartInstance->c42_sfEvent);
          c42_exit_internal_InTrial(chartInstance);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c42_sfEvent);
          *chartInstance->c42_is_c42_General = c42_IN_PausedBetweenTrials;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c42_sfEvent);
          *chartInstance->c42_task_status = 3U;
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_task_status, 23U, 4U,
                                8U, *chartInstance->c42_sfEvent, false);
        } else {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 59U, *chartInstance->c42_sfEvent);
          c42_exit_internal_InTrial(chartInstance);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c42_sfEvent);
          *chartInstance->c42_is_c42_General = c42_IN_InTrial;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c42_sfEvent);
          c42_enter_atomic_InTrial(chartInstance);
          c42_enter_internal_InTrial(chartInstance);
        }
      }
    } else {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c42_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 18U,
                   *chartInstance->c42_sfEvent);
      c42_p_out = (CV_TRANSITION_EVAL(18U, (int32_T)_SFD_CCP_CALL(18U, 0,
        CV_RELATIONAL_EVAL(5U, 18U, 0, (real_T)*chartInstance->c42_run_command,
                           1.0, 0, 0U, *chartInstance->c42_run_command == 1) !=
        0U, *chartInstance->c42_sfEvent)) != 0);
      if (c42_p_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 18U, *chartInstance->c42_sfEvent);
        c42_exit_internal_InTrial(chartInstance);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c42_sfEvent);
        *chartInstance->c42_is_c42_General = c42_IN_InTrial;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c42_sfEvent);
        c42_enter_atomic_InTrial(chartInstance);
        c42_enter_internal_InTrial(chartInstance);
      } else {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 19U, *chartInstance->c42_sfEvent);
        c42_exit_internal_InTrial(chartInstance);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c42_sfEvent);
        *chartInstance->c42_is_c42_General = c42_IN_PausedBetweenTrials;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c42_sfEvent);
        *chartInstance->c42_task_status = 3U;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_task_status, 23U, 4U,
                              8U, *chartInstance->c42_sfEvent, false);
      }
    }
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                 *chartInstance->c42_sfEvent);
    switch (*chartInstance->c42_is_InTrial) {
     case c42_IN_Paused:
      CV_STATE_EVAL(1, 0, 1);
      c42_Paused(chartInstance);
      break;

     case c42_IN_RepeatTrialLater:
      CV_STATE_EVAL(1, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                   *chartInstance->c42_sfEvent);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, *chartInstance->c42_sfEvent);
      break;

     case c42_IN_RepeatTrialNow:
      CV_STATE_EVAL(1, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                   *chartInstance->c42_sfEvent);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, *chartInstance->c42_sfEvent);
      break;

     case c42_IN_Running:
      CV_STATE_EVAL(1, 0, 4);
      c42_Running(chartInstance);
      break;

     case c42_IN_SkipTrial:
      CV_STATE_EVAL(1, 0, 5);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 6U,
                   *chartInstance->c42_sfEvent);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, *chartInstance->c42_sfEvent);
      break;

     default:
      CV_STATE_EVAL(1, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c42_is_InTrial = c42_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c42_sfEvent);
      break;
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c42_sfEvent);
}

static void c42_exit_internal_InTrial(SFc42_GeneralInstanceStruct *chartInstance)
{
  switch (*chartInstance->c42_is_InTrial) {
   case c42_IN_Paused:
    CV_STATE_EVAL(1, 1, 1);
    *chartInstance->c42_is_InTrial = c42_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c42_sfEvent);
    break;

   case c42_IN_RepeatTrialLater:
    CV_STATE_EVAL(1, 1, 2);
    *chartInstance->c42_is_InTrial = c42_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c42_sfEvent);
    break;

   case c42_IN_RepeatTrialNow:
    CV_STATE_EVAL(1, 1, 3);
    *chartInstance->c42_is_InTrial = c42_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c42_sfEvent);
    break;

   case c42_IN_Running:
    CV_STATE_EVAL(1, 1, 4);
    *chartInstance->c42_is_InTrial = c42_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c42_sfEvent);
    break;

   case c42_IN_SkipTrial:
    CV_STATE_EVAL(1, 1, 5);
    *chartInstance->c42_is_InTrial = c42_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c42_sfEvent);
    break;

   default:
    CV_STATE_EVAL(1, 1, 0);
    *chartInstance->c42_is_InTrial = c42_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c42_sfEvent);
    break;
  }
}

static void c42_Running(SFc42_GeneralInstanceStruct *chartInstance)
{
  boolean_T c42_b_temp;
  boolean_T c42_out;
  boolean_T c42_b_out;
  boolean_T c42_c_out;
  int32_T c42_i32;
  int32_T c42_i33;
  boolean_T c42_d_out;
  int32_T c42_i34;
  int32_T c42_i35;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 42U,
               *chartInstance->c42_sfEvent);
  c42_b_temp = (_SFD_CCP_CALL(42U, 0, CV_RELATIONAL_EVAL(5U, 42U, 0, (real_T)
    *chartInstance->c42_run_command, 1.0, 0, 1U, *chartInstance->c42_run_command
    != 1) != 0U, *chartInstance->c42_sfEvent) != 0);
  if (c42_b_temp) {
    c42_b_temp = (_SFD_CCP_CALL(42U, 1, CV_RELATIONAL_EVAL(5U, 42U, 1,
      *chartInstance->c42_pause_type, 0.0, -1, 4U,
      *chartInstance->c42_pause_type > 0.0) != 0U, *chartInstance->c42_sfEvent)
                  != 0);
  }

  c42_out = (CV_TRANSITION_EVAL(42U, (int32_T)c42_b_temp) != 0);
  if (c42_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 42U, *chartInstance->c42_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 41U,
                 *chartInstance->c42_sfEvent);
    c42_b_out = (CV_TRANSITION_EVAL(41U, (int32_T)_SFD_CCP_CALL(41U, 0,
      CV_RELATIONAL_EVAL(5U, 41U, 0, *chartInstance->c42_pause_type, 1.0, -1, 0U,
                         *chartInstance->c42_pause_type == 1.0) != 0U,
      *chartInstance->c42_sfEvent)) != 0);
    if (c42_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 41U, *chartInstance->c42_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c42_sfEvent);
      *chartInstance->c42_is_InTrial = c42_IN_SkipTrial;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c42_sfEvent);
      (*chartInstance->c42_e_exit_trialEventCounter)++;
    } else {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 50U, *chartInstance->c42_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 40U,
                   *chartInstance->c42_sfEvent);
      c42_c_out = (CV_TRANSITION_EVAL(40U, (int32_T)_SFD_CCP_CALL(40U, 0,
        CV_RELATIONAL_EVAL(5U, 40U, 0, *chartInstance->c42_pause_type, 2.0, -1,
                           0U, *chartInstance->c42_pause_type == 2.0) != 0U,
        *chartInstance->c42_sfEvent)) != 0);
      if (c42_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 40U, *chartInstance->c42_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c42_sfEvent);
        *chartInstance->c42_is_InTrial = c42_IN_RepeatTrialNow;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c42_sfEvent);
        *chartInstance->c42_trial_in_mini_block = c42__u32_minus__(chartInstance,
          *chartInstance->c42_trial_in_mini_block, c42__u32_s8_(chartInstance, 1));
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_trial_in_mini_block,
                              9U, 4U, 4U, *chartInstance->c42_sfEvent, false);
        (*chartInstance->c42_extra_trials)[_SFD_ARRAY_BOUNDS_CHECK(30U,
          c42__s32_d_(chartInstance, *chartInstance->c42_EXAM - 1.0), 1, 2, 1, 0)]
          = (*chartInstance->c42_extra_trials)[_SFD_ARRAY_BOUNDS_CHECK(30U,
          c42__s32_d_(chartInstance, *chartInstance->c42_EXAM - 1.0), 1, 2, 1, 0)]
          + 1.0;
        for (c42_i32 = 0; c42_i32 < 2; c42_i32++) {
          _SFD_DATA_RANGE_CHECK((*chartInstance->c42_extra_trials)[c42_i32], 30U,
                                4U, 4U, *chartInstance->c42_sfEvent, false);
        }

        (*chartInstance->c42_extra_trials)[_SFD_ARRAY_BOUNDS_CHECK(30U,
          c42__s32_d_(chartInstance, *chartInstance->c42_BLOCK - 1.0), 1, 2, 1,
          0)] = (*chartInstance->c42_extra_trials)[_SFD_ARRAY_BOUNDS_CHECK(30U,
          c42__s32_d_(chartInstance, *chartInstance->c42_BLOCK - 1.0), 1, 2, 1,
          0)] + 1.0;
        for (c42_i33 = 0; c42_i33 < 2; c42_i33++) {
          _SFD_DATA_RANGE_CHECK((*chartInstance->c42_extra_trials)[c42_i33], 30U,
                                4U, 4U, *chartInstance->c42_sfEvent, false);
        }

        (*chartInstance->c42_e_exit_trialEventCounter)++;
      } else {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 51U, *chartInstance->c42_sfEvent);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 37U,
                     *chartInstance->c42_sfEvent);
        c42_d_out = (CV_TRANSITION_EVAL(37U, (int32_T)_SFD_CCP_CALL(37U, 0,
          CV_RELATIONAL_EVAL(5U, 37U, 0, *chartInstance->c42_pause_type, 3.0, -1,
                             0U, *chartInstance->c42_pause_type == 3.0) != 0U,
          *chartInstance->c42_sfEvent)) != 0);
        if (c42_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 37U, *chartInstance->c42_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c42_sfEvent);
          *chartInstance->c42_is_InTrial = c42_IN_RepeatTrialLater;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c42_sfEvent);
          (*chartInstance->c42_extra_trials)[_SFD_ARRAY_BOUNDS_CHECK(30U,
            c42__s32_d_(chartInstance, *chartInstance->c42_EXAM - 1.0), 1, 2, 1,
            0)] = (*chartInstance->c42_extra_trials)[_SFD_ARRAY_BOUNDS_CHECK(30U,
            c42__s32_d_(chartInstance, *chartInstance->c42_EXAM - 1.0), 1, 2, 1,
            0)] + 1.0;
          for (c42_i34 = 0; c42_i34 < 2; c42_i34++) {
            _SFD_DATA_RANGE_CHECK((*chartInstance->c42_extra_trials)[c42_i34],
                                  30U, 4U, 3U, *chartInstance->c42_sfEvent,
                                  false);
          }

          (*chartInstance->c42_extra_trials)[_SFD_ARRAY_BOUNDS_CHECK(30U,
            c42__s32_d_(chartInstance, *chartInstance->c42_BLOCK - 1.0), 1, 2, 1,
            0)] = (*chartInstance->c42_extra_trials)[_SFD_ARRAY_BOUNDS_CHECK(30U,
            c42__s32_d_(chartInstance, *chartInstance->c42_BLOCK - 1.0), 1, 2, 1,
            0)] + 1.0;
          for (c42_i35 = 0; c42_i35 < 2; c42_i35++) {
            _SFD_DATA_RANGE_CHECK((*chartInstance->c42_extra_trials)[c42_i35],
                                  30U, 4U, 3U, *chartInstance->c42_sfEvent,
                                  false);
          }

          (*chartInstance->c42_e_exit_trialEventCounter)++;
        } else {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 52U, *chartInstance->c42_sfEvent);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 45U, *chartInstance->c42_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c42_sfEvent);
          *chartInstance->c42_is_InTrial = c42_IN_Paused;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c42_sfEvent);
          *chartInstance->c42_task_status = 3U;
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_task_status, 23U, 4U,
                                2U, *chartInstance->c42_sfEvent, false);
        }
      }
    }
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U,
                 *chartInstance->c42_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, *chartInstance->c42_sfEvent);
}

static void c42_Paused(SFc42_GeneralInstanceStruct *chartInstance)
{
  boolean_T c42_out;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 43U,
               *chartInstance->c42_sfEvent);
  c42_out = (CV_TRANSITION_EVAL(43U, (int32_T)_SFD_CCP_CALL(43U, 0,
    CV_RELATIONAL_EVAL(5U, 43U, 0, (real_T)*chartInstance->c42_run_command, 1.0,
                       0, 0U, *chartInstance->c42_run_command == 1) != 0U,
    *chartInstance->c42_sfEvent)) != 0);
  if (c42_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 43U, *chartInstance->c42_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c42_sfEvent);
    *chartInstance->c42_is_InTrial = c42_IN_Running;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c42_sfEvent);
    *chartInstance->c42_task_status = 2U;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c42_task_status, 23U, 4U, 5U, *
                          chartInstance->c42_sfEvent, false);
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                 *chartInstance->c42_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c42_sfEvent);
}

static void init_script_number_translation(uint32_T c42_machineNumber, uint32_T
  c42_chartNumber, uint32_T c42_instanceNumber)
{
  (void)c42_machineNumber;
  (void)c42_chartNumber;
  (void)c42_instanceNumber;
}

const mxArray *sf_c42_General_get_eml_resolved_functions_info(void)
{
  const mxArray *c42_nameCaptureInfo = NULL;
  c42_nameCaptureInfo = NULL;
  sf_mex_assign(&c42_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c42_nameCaptureInfo;
}

static const mxArray *c42_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData)
{
  const mxArray *c42_mxArrayOutData = NULL;
  int8_T c42_b_u;
  const mxArray *c42_y = NULL;
  SFc42_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc42_GeneralInstanceStruct *)chartInstanceVoid;
  c42_mxArrayOutData = NULL;
  c42_b_u = *(int8_T *)c42_inData;
  c42_y = NULL;
  sf_mex_assign(&c42_y, sf_mex_create("y", &c42_b_u, 2, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c42_mxArrayOutData, c42_y, false);
  return c42_mxArrayOutData;
}

static int8_T c42_emlrt_marshallIn(SFc42_GeneralInstanceStruct *chartInstance,
  const mxArray *c42_b_u, const emlrtMsgIdentifier *c42_parentId)
{
  int8_T c42_y;
  int8_T c42_i36;
  (void)chartInstance;
  sf_mex_import(c42_parentId, sf_mex_dup(c42_b_u), &c42_i36, 1, 2, 0U, 0, 0U, 0);
  c42_y = c42_i36;
  sf_mex_destroy(&c42_b_u);
  return c42_y;
}

static void c42_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c42_mxArrayInData, const char_T *c42_varName, void *c42_outData)
{
  const mxArray *c42_b_e_clk;
  const char_T *c42_identifier;
  emlrtMsgIdentifier c42_thisId;
  int8_T c42_y;
  SFc42_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc42_GeneralInstanceStruct *)chartInstanceVoid;
  c42_b_e_clk = sf_mex_dup(c42_mxArrayInData);
  c42_identifier = c42_varName;
  c42_thisId.fIdentifier = c42_identifier;
  c42_thisId.fParent = NULL;
  c42_y = c42_emlrt_marshallIn(chartInstance, sf_mex_dup(c42_b_e_clk),
    &c42_thisId);
  sf_mex_destroy(&c42_b_e_clk);
  *(int8_T *)c42_outData = c42_y;
  sf_mex_destroy(&c42_mxArrayInData);
}

static const mxArray *c42_b_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData)
{
  const mxArray *c42_mxArrayOutData = NULL;
  uint32_T c42_b_u;
  const mxArray *c42_y = NULL;
  SFc42_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc42_GeneralInstanceStruct *)chartInstanceVoid;
  c42_mxArrayOutData = NULL;
  c42_b_u = *(uint32_T *)c42_inData;
  c42_y = NULL;
  sf_mex_assign(&c42_y, sf_mex_create("y", &c42_b_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c42_mxArrayOutData, c42_y, false);
  return c42_mxArrayOutData;
}

static uint32_T c42_b_emlrt_marshallIn(SFc42_GeneralInstanceStruct
  *chartInstance, const mxArray *c42_b_e_exit_trialEventCounter, const char_T
  *c42_identifier)
{
  uint32_T c42_y;
  emlrtMsgIdentifier c42_thisId;
  c42_thisId.fIdentifier = c42_identifier;
  c42_thisId.fParent = NULL;
  c42_y = c42_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c42_b_e_exit_trialEventCounter), &c42_thisId);
  sf_mex_destroy(&c42_b_e_exit_trialEventCounter);
  return c42_y;
}

static uint32_T c42_c_emlrt_marshallIn(SFc42_GeneralInstanceStruct
  *chartInstance, const mxArray *c42_b_u, const emlrtMsgIdentifier *c42_parentId)
{
  uint32_T c42_y;
  uint32_T c42_u0;
  (void)chartInstance;
  sf_mex_import(c42_parentId, sf_mex_dup(c42_b_u), &c42_u0, 1, 7, 0U, 0, 0U, 0);
  c42_y = c42_u0;
  sf_mex_destroy(&c42_b_u);
  return c42_y;
}

static void c42_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c42_mxArrayInData, const char_T *c42_varName, void *c42_outData)
{
  const mxArray *c42_b_e_exit_trialEventCounter;
  const char_T *c42_identifier;
  emlrtMsgIdentifier c42_thisId;
  uint32_T c42_y;
  SFc42_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc42_GeneralInstanceStruct *)chartInstanceVoid;
  c42_b_e_exit_trialEventCounter = sf_mex_dup(c42_mxArrayInData);
  c42_identifier = c42_varName;
  c42_thisId.fIdentifier = c42_identifier;
  c42_thisId.fParent = NULL;
  c42_y = c42_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c42_b_e_exit_trialEventCounter), &c42_thisId);
  sf_mex_destroy(&c42_b_e_exit_trialEventCounter);
  *(uint32_T *)c42_outData = c42_y;
  sf_mex_destroy(&c42_mxArrayInData);
}

static const mxArray *c42_c_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData)
{
  const mxArray *c42_mxArrayOutData = NULL;
  int32_T c42_b_u;
  const mxArray *c42_y = NULL;
  SFc42_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc42_GeneralInstanceStruct *)chartInstanceVoid;
  c42_mxArrayOutData = NULL;
  c42_b_u = *(int32_T *)c42_inData;
  c42_y = NULL;
  sf_mex_assign(&c42_y, sf_mex_create("y", &c42_b_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c42_mxArrayOutData, c42_y, false);
  return c42_mxArrayOutData;
}

static int32_T c42_d_emlrt_marshallIn(SFc42_GeneralInstanceStruct *chartInstance,
  const mxArray *c42_b_u, const emlrtMsgIdentifier *c42_parentId)
{
  int32_T c42_y;
  int32_T c42_i37;
  (void)chartInstance;
  sf_mex_import(c42_parentId, sf_mex_dup(c42_b_u), &c42_i37, 1, 6, 0U, 0, 0U, 0);
  c42_y = c42_i37;
  sf_mex_destroy(&c42_b_u);
  return c42_y;
}

static void c42_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c42_mxArrayInData, const char_T *c42_varName, void *c42_outData)
{
  const mxArray *c42_b_sfEvent;
  const char_T *c42_identifier;
  emlrtMsgIdentifier c42_thisId;
  int32_T c42_y;
  SFc42_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc42_GeneralInstanceStruct *)chartInstanceVoid;
  c42_b_sfEvent = sf_mex_dup(c42_mxArrayInData);
  c42_identifier = c42_varName;
  c42_thisId.fIdentifier = c42_identifier;
  c42_thisId.fParent = NULL;
  c42_y = c42_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c42_b_sfEvent),
    &c42_thisId);
  sf_mex_destroy(&c42_b_sfEvent);
  *(int32_T *)c42_outData = c42_y;
  sf_mex_destroy(&c42_mxArrayInData);
}

static const mxArray *c42_d_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData)
{
  const mxArray *c42_mxArrayOutData = NULL;
  uint8_T c42_b_u;
  const mxArray *c42_y = NULL;
  SFc42_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc42_GeneralInstanceStruct *)chartInstanceVoid;
  c42_mxArrayOutData = NULL;
  c42_b_u = *(uint8_T *)c42_inData;
  c42_y = NULL;
  sf_mex_assign(&c42_y, sf_mex_create("y", &c42_b_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c42_mxArrayOutData, c42_y, false);
  return c42_mxArrayOutData;
}

static uint8_T c42_e_emlrt_marshallIn(SFc42_GeneralInstanceStruct *chartInstance,
  const mxArray *c42_b_is_InTrial, const char_T *c42_identifier)
{
  uint8_T c42_y;
  emlrtMsgIdentifier c42_thisId;
  c42_thisId.fIdentifier = c42_identifier;
  c42_thisId.fParent = NULL;
  c42_y = c42_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c42_b_is_InTrial),
    &c42_thisId);
  sf_mex_destroy(&c42_b_is_InTrial);
  return c42_y;
}

static uint8_T c42_f_emlrt_marshallIn(SFc42_GeneralInstanceStruct *chartInstance,
  const mxArray *c42_b_u, const emlrtMsgIdentifier *c42_parentId)
{
  uint8_T c42_y;
  uint8_T c42_u1;
  (void)chartInstance;
  sf_mex_import(c42_parentId, sf_mex_dup(c42_b_u), &c42_u1, 1, 3, 0U, 0, 0U, 0);
  c42_y = c42_u1;
  sf_mex_destroy(&c42_b_u);
  return c42_y;
}

static void c42_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c42_mxArrayInData, const char_T *c42_varName, void *c42_outData)
{
  const mxArray *c42_b_is_InTrial;
  const char_T *c42_identifier;
  emlrtMsgIdentifier c42_thisId;
  uint8_T c42_y;
  SFc42_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc42_GeneralInstanceStruct *)chartInstanceVoid;
  c42_b_is_InTrial = sf_mex_dup(c42_mxArrayInData);
  c42_identifier = c42_varName;
  c42_thisId.fIdentifier = c42_identifier;
  c42_thisId.fParent = NULL;
  c42_y = c42_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c42_b_is_InTrial),
    &c42_thisId);
  sf_mex_destroy(&c42_b_is_InTrial);
  *(uint8_T *)c42_outData = c42_y;
  sf_mex_destroy(&c42_mxArrayInData);
}

static const mxArray *c42_e_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData)
{
  const mxArray *c42_mxArrayOutData = NULL;
  real_T c42_b_u;
  const mxArray *c42_y = NULL;
  SFc42_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc42_GeneralInstanceStruct *)chartInstanceVoid;
  c42_mxArrayOutData = NULL;
  c42_b_u = *(real_T *)c42_inData;
  c42_y = NULL;
  sf_mex_assign(&c42_y, sf_mex_create("y", &c42_b_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c42_mxArrayOutData, c42_y, false);
  return c42_mxArrayOutData;
}

static const mxArray *c42_f_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData)
{
  const mxArray *c42_mxArrayOutData = NULL;
  int32_T c42_i38;
  real_T c42_b_u[499];
  const mxArray *c42_y = NULL;
  SFc42_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc42_GeneralInstanceStruct *)chartInstanceVoid;
  c42_mxArrayOutData = NULL;
  for (c42_i38 = 0; c42_i38 < 499; c42_i38++) {
    c42_b_u[c42_i38] = (*(real_T (*)[499])c42_inData)[c42_i38];
  }

  c42_y = NULL;
  sf_mex_assign(&c42_y, sf_mex_create("y", c42_b_u, 0, 0U, 1U, 0U, 1, 499),
                false);
  sf_mex_assign(&c42_mxArrayOutData, c42_y, false);
  return c42_mxArrayOutData;
}

static void c42_g_emlrt_marshallIn(SFc42_GeneralInstanceStruct *chartInstance,
  const mxArray *c42_b_trial_queue, const char_T *c42_identifier, real_T c42_y
  [499])
{
  emlrtMsgIdentifier c42_thisId;
  c42_thisId.fIdentifier = c42_identifier;
  c42_thisId.fParent = NULL;
  c42_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c42_b_trial_queue),
    &c42_thisId, c42_y);
  sf_mex_destroy(&c42_b_trial_queue);
}

static void c42_h_emlrt_marshallIn(SFc42_GeneralInstanceStruct *chartInstance,
  const mxArray *c42_b_u, const emlrtMsgIdentifier *c42_parentId, real_T c42_y
  [499])
{
  real_T c42_dv3[499];
  int32_T c42_i39;
  (void)chartInstance;
  sf_mex_import(c42_parentId, sf_mex_dup(c42_b_u), c42_dv3, 1, 0, 0U, 1, 0U, 1,
                499);
  for (c42_i39 = 0; c42_i39 < 499; c42_i39++) {
    c42_y[c42_i39] = c42_dv3[c42_i39];
  }

  sf_mex_destroy(&c42_b_u);
}

static void c42_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c42_mxArrayInData, const char_T *c42_varName, void *c42_outData)
{
  const mxArray *c42_b_trial_queue;
  const char_T *c42_identifier;
  emlrtMsgIdentifier c42_thisId;
  real_T c42_y[499];
  int32_T c42_i40;
  SFc42_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc42_GeneralInstanceStruct *)chartInstanceVoid;
  c42_b_trial_queue = sf_mex_dup(c42_mxArrayInData);
  c42_identifier = c42_varName;
  c42_thisId.fIdentifier = c42_identifier;
  c42_thisId.fParent = NULL;
  c42_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c42_b_trial_queue),
    &c42_thisId, c42_y);
  sf_mex_destroy(&c42_b_trial_queue);
  for (c42_i40 = 0; c42_i40 < 499; c42_i40++) {
    (*(real_T (*)[499])c42_outData)[c42_i40] = c42_y[c42_i40];
  }

  sf_mex_destroy(&c42_mxArrayInData);
}

static const mxArray *c42_g_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData)
{
  const mxArray *c42_mxArrayOutData = NULL;
  int32_T c42_i41;
  int32_T c42_i42;
  int32_T c42_i43;
  const mxArray *c42_y = NULL;
  SFc42_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc42_GeneralInstanceStruct *)chartInstanceVoid;
  c42_mxArrayOutData = NULL;
  c42_i41 = 0;
  for (c42_i42 = 0; c42_i42 < 500; c42_i42++) {
    for (c42_i43 = 0; c42_i43 < 50; c42_i43++) {
      chartInstance->c42_u[c42_i43 + c42_i41] = (*(real_T (*)[25000])c42_inData)
        [c42_i43 + c42_i41];
    }

    c42_i41 += 50;
  }

  c42_y = NULL;
  sf_mex_assign(&c42_y, sf_mex_create("y", chartInstance->c42_u, 0, 0U, 1U, 0U,
    2, 50, 500), false);
  sf_mex_assign(&c42_mxArrayOutData, c42_y, false);
  return c42_mxArrayOutData;
}

static const mxArray *c42_h_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData)
{
  const mxArray *c42_mxArrayOutData = NULL;
  int32_T c42_i44;
  int32_T c42_i45;
  int32_T c42_i46;
  real_T c42_b_u[2000];
  const mxArray *c42_y = NULL;
  SFc42_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc42_GeneralInstanceStruct *)chartInstanceVoid;
  c42_mxArrayOutData = NULL;
  c42_i44 = 0;
  for (c42_i45 = 0; c42_i45 < 2; c42_i45++) {
    for (c42_i46 = 0; c42_i46 < 1000; c42_i46++) {
      c42_b_u[c42_i46 + c42_i44] = (*(real_T (*)[2000])c42_inData)[c42_i46 +
        c42_i44];
    }

    c42_i44 += 1000;
  }

  c42_y = NULL;
  sf_mex_assign(&c42_y, sf_mex_create("y", c42_b_u, 0, 0U, 1U, 0U, 2, 1000, 2),
                false);
  sf_mex_assign(&c42_mxArrayOutData, c42_y, false);
  return c42_mxArrayOutData;
}

static real_T c42_i_emlrt_marshallIn(SFc42_GeneralInstanceStruct *chartInstance,
  const mxArray *c42_b_repeat_last_trial, const char_T *c42_identifier)
{
  real_T c42_y;
  emlrtMsgIdentifier c42_thisId;
  c42_thisId.fIdentifier = c42_identifier;
  c42_thisId.fParent = NULL;
  c42_y = c42_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c42_b_repeat_last_trial), &c42_thisId);
  sf_mex_destroy(&c42_b_repeat_last_trial);
  return c42_y;
}

static real_T c42_j_emlrt_marshallIn(SFc42_GeneralInstanceStruct *chartInstance,
  const mxArray *c42_b_u, const emlrtMsgIdentifier *c42_parentId)
{
  real_T c42_y;
  real_T c42_d6;
  (void)chartInstance;
  sf_mex_import(c42_parentId, sf_mex_dup(c42_b_u), &c42_d6, 1, 0, 0U, 0, 0U, 0);
  c42_y = c42_d6;
  sf_mex_destroy(&c42_b_u);
  return c42_y;
}

static void c42_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c42_mxArrayInData, const char_T *c42_varName, void *c42_outData)
{
  const mxArray *c42_b_repeat_last_trial;
  const char_T *c42_identifier;
  emlrtMsgIdentifier c42_thisId;
  real_T c42_y;
  SFc42_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc42_GeneralInstanceStruct *)chartInstanceVoid;
  c42_b_repeat_last_trial = sf_mex_dup(c42_mxArrayInData);
  c42_identifier = c42_varName;
  c42_thisId.fIdentifier = c42_identifier;
  c42_thisId.fParent = NULL;
  c42_y = c42_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c42_b_repeat_last_trial), &c42_thisId);
  sf_mex_destroy(&c42_b_repeat_last_trial);
  *(real_T *)c42_outData = c42_y;
  sf_mex_destroy(&c42_mxArrayInData);
}

static const mxArray *c42_i_sf_marshallOut(void *chartInstanceVoid, void
  *c42_inData)
{
  const mxArray *c42_mxArrayOutData = NULL;
  int32_T c42_i47;
  real_T c42_b_u[2];
  const mxArray *c42_y = NULL;
  SFc42_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc42_GeneralInstanceStruct *)chartInstanceVoid;
  c42_mxArrayOutData = NULL;
  for (c42_i47 = 0; c42_i47 < 2; c42_i47++) {
    c42_b_u[c42_i47] = (*(real_T (*)[2])c42_inData)[c42_i47];
  }

  c42_y = NULL;
  sf_mex_assign(&c42_y, sf_mex_create("y", c42_b_u, 0, 0U, 1U, 0U, 1, 2), false);
  sf_mex_assign(&c42_mxArrayOutData, c42_y, false);
  return c42_mxArrayOutData;
}

static void c42_k_emlrt_marshallIn(SFc42_GeneralInstanceStruct *chartInstance,
  const mxArray *c42_b_extra_trials, const char_T *c42_identifier, real_T c42_y
  [2])
{
  emlrtMsgIdentifier c42_thisId;
  c42_thisId.fIdentifier = c42_identifier;
  c42_thisId.fParent = NULL;
  c42_l_emlrt_marshallIn(chartInstance, sf_mex_dup(c42_b_extra_trials),
    &c42_thisId, c42_y);
  sf_mex_destroy(&c42_b_extra_trials);
}

static void c42_l_emlrt_marshallIn(SFc42_GeneralInstanceStruct *chartInstance,
  const mxArray *c42_b_u, const emlrtMsgIdentifier *c42_parentId, real_T c42_y[2])
{
  real_T c42_dv4[2];
  int32_T c42_i48;
  (void)chartInstance;
  sf_mex_import(c42_parentId, sf_mex_dup(c42_b_u), c42_dv4, 1, 0, 0U, 1, 0U, 1,
                2);
  for (c42_i48 = 0; c42_i48 < 2; c42_i48++) {
    c42_y[c42_i48] = c42_dv4[c42_i48];
  }

  sf_mex_destroy(&c42_b_u);
}

static void c42_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c42_mxArrayInData, const char_T *c42_varName, void *c42_outData)
{
  const mxArray *c42_b_extra_trials;
  const char_T *c42_identifier;
  emlrtMsgIdentifier c42_thisId;
  real_T c42_y[2];
  int32_T c42_i49;
  SFc42_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc42_GeneralInstanceStruct *)chartInstanceVoid;
  c42_b_extra_trials = sf_mex_dup(c42_mxArrayInData);
  c42_identifier = c42_varName;
  c42_thisId.fIdentifier = c42_identifier;
  c42_thisId.fParent = NULL;
  c42_l_emlrt_marshallIn(chartInstance, sf_mex_dup(c42_b_extra_trials),
    &c42_thisId, c42_y);
  sf_mex_destroy(&c42_b_extra_trials);
  for (c42_i49 = 0; c42_i49 < 2; c42_i49++) {
    (*(real_T (*)[2])c42_outData)[c42_i49] = c42_y[c42_i49];
  }

  sf_mex_destroy(&c42_mxArrayInData);
}

static boolean_T c42_m_emlrt_marshallIn(SFc42_GeneralInstanceStruct
  *chartInstance, const mxArray *c42_b_e_exit_trial, const char_T
  *c42_identifier)
{
  boolean_T c42_y;
  emlrtMsgIdentifier c42_thisId;
  c42_thisId.fIdentifier = c42_identifier;
  c42_thisId.fParent = NULL;
  c42_y = c42_n_emlrt_marshallIn(chartInstance, sf_mex_dup(c42_b_e_exit_trial),
    &c42_thisId);
  sf_mex_destroy(&c42_b_e_exit_trial);
  return c42_y;
}

static boolean_T c42_n_emlrt_marshallIn(SFc42_GeneralInstanceStruct
  *chartInstance, const mxArray *c42_b_u, const emlrtMsgIdentifier *c42_parentId)
{
  boolean_T c42_y;
  boolean_T c42_b0;
  (void)chartInstance;
  sf_mex_import(c42_parentId, sf_mex_dup(c42_b_u), &c42_b0, 1, 11, 0U, 0, 0U, 0);
  c42_y = c42_b0;
  sf_mex_destroy(&c42_b_u);
  return c42_y;
}

static const mxArray *c42_o_emlrt_marshallIn(SFc42_GeneralInstanceStruct
  *chartInstance, const mxArray *c42_b_setSimStateSideEffectsInfo, const char_T *
  c42_identifier)
{
  const mxArray *c42_y = NULL;
  emlrtMsgIdentifier c42_thisId;
  c42_y = NULL;
  c42_thisId.fIdentifier = c42_identifier;
  c42_thisId.fParent = NULL;
  sf_mex_assign(&c42_y, c42_p_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c42_b_setSimStateSideEffectsInfo), &c42_thisId), false);
  sf_mex_destroy(&c42_b_setSimStateSideEffectsInfo);
  return c42_y;
}

static const mxArray *c42_p_emlrt_marshallIn(SFc42_GeneralInstanceStruct
  *chartInstance, const mxArray *c42_b_u, const emlrtMsgIdentifier *c42_parentId)
{
  const mxArray *c42_y = NULL;
  (void)chartInstance;
  (void)c42_parentId;
  c42_y = NULL;
  sf_mex_assign(&c42_y, sf_mex_duplicatearraysafe(&c42_b_u), false);
  sf_mex_destroy(&c42_b_u);
  return c42_y;
}

static uint32_T c42__u32_d_(SFc42_GeneralInstanceStruct *chartInstance, real_T
  c42_b)
{
  uint32_T c42_a;
  c42_a = (uint32_T)c42_b;
  if ((c42_b < 0.0) || ((real_T)c42_a != muDoubleScalarFloor(c42_b))) {
    _SFD_OVERFLOW_DETECTION(SFDB_OVERFLOW, 1U, 0U, *chartInstance->c42_sfEvent,
      false);
  }

  return c42_a;
}

static int32_T c42__s32_d_(SFc42_GeneralInstanceStruct *chartInstance, real_T
  c42_b)
{
  int32_T c42_a;
  c42_a = (int32_T)c42_b;
  if ((real_T)c42_a != (c42_b < 0.0 ? muDoubleScalarCeil(c42_b) :
                        muDoubleScalarFloor(c42_b))) {
    _SFD_OVERFLOW_DETECTION(SFDB_OVERFLOW, 1U, 0U, *chartInstance->c42_sfEvent,
      false);
  }

  return c42_a;
}

static int32_T c42__s32_u32_(SFc42_GeneralInstanceStruct *chartInstance,
  uint32_T c42_b)
{
  int32_T c42_a;
  c42_a = (int32_T)c42_b;
  if (c42_a < 0) {
    _SFD_OVERFLOW_DETECTION(SFDB_OVERFLOW, 1U, 0U, *chartInstance->c42_sfEvent,
      false);
  }

  return c42_a;
}

static uint32_T c42__u32_minus__(SFc42_GeneralInstanceStruct *chartInstance,
  uint32_T c42_b, uint32_T c42_c)
{
  uint32_T c42_a;
  c42_a = c42_b - c42_c;
  if (c42_b < c42_c) {
    _SFD_OVERFLOW_DETECTION(SFDB_OVERFLOW, 1U, 0U, *chartInstance->c42_sfEvent,
      false);
  }

  return c42_a;
}

static uint32_T c42__u32_s8_(SFc42_GeneralInstanceStruct *chartInstance, int8_T
  c42_b)
{
  uint32_T c42_a;
  c42_a = (uint32_T)c42_b;
  if (c42_b < 0) {
    _SFD_OVERFLOW_DETECTION(SFDB_OVERFLOW, 1U, 0U, *chartInstance->c42_sfEvent,
      false);
  }

  return c42_a;
}

static uint32_T c42__u32_add__(SFc42_GeneralInstanceStruct *chartInstance,
  uint32_T c42_b, uint32_T c42_c)
{
  uint32_T c42_a;
  c42_a = c42_b + c42_c;
  if (c42_a < c42_b) {
    _SFD_OVERFLOW_DETECTION(SFDB_OVERFLOW, 1U, 0U, *chartInstance->c42_sfEvent,
      false);
  }

  return c42_a;
}

static void init_dsm_address_info(SFc42_GeneralInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc42_GeneralInstanceStruct *chartInstance)
{
  chartInstance->c42_e_clk = (int8_T *)(ssGetInputPortSignalPtrs_wrapper
    (chartInstance->S, 11))[0U];
  chartInstance->c42_e_trial_over = (int8_T *)(ssGetInputPortSignalPtrs_wrapper
    (chartInstance->S, 11))[1U];
  chartInstance->c42_e_exit_trial = (boolean_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 9);
  chartInstance->c42_e_exit_trialEventCounter = (uint32_T *)ssGetDWork_wrapper
    (chartInstance->S, 0);
  chartInstance->c42_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 1);
  chartInstance->c42_isStable = (boolean_T *)ssGetDWork_wrapper(chartInstance->S,
    2);
  chartInstance->c42_is_active_c42_General = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 3);
  chartInstance->c42_is_c42_General = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 4);
  chartInstance->c42_is_InTrial = (uint8_T *)ssGetDWork_wrapper(chartInstance->S,
    5);
  chartInstance->c42_repeat_trial_flag = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c42_task_status = (uint32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c42_tp = (uint32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c42_block = (uint32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c42_trial_in_block = (uint32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c42_block_in_set = (uint32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c42_trial_in_set = (uint32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c42_trial_queue = (real_T (*)[499])ssGetDWork_wrapper
    (chartInstance->S, 6);
  chartInstance->c42_repeat_list = (real_T (*)[499])ssGetDWork_wrapper
    (chartInstance->S, 7);
  chartInstance->c42_run_command = (uint8_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c42_pause_type = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c42_seed = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c42_block_definitions = (real_T (*)[25000])
    ssGetInputPortSignal_wrapper(chartInstance->S, 4);
  chartInstance->c42_max_block_definitions = (uint32_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 5);
  chartInstance->c42_trial_queue_max_length = (uint32_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 6);
  chartInstance->c42_use_task_protocol_block_sequence_flag = (real_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 7);
  chartInstance->c42_task_protocol_block_sequence = (real_T (*)[2000])
    ssGetInputPortSignal_wrapper(chartInstance->S, 8);
  chartInstance->c42_task_protocol_block_sequence_length = (uint32_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 9);
  chartInstance->c42_repeat_list_length = (uint32_T *)ssGetDWork_wrapper
    (chartInstance->S, 8);
  chartInstance->c42_i = (uint32_T *)ssGetDWork_wrapper(chartInstance->S, 9);
  chartInstance->c42_swap_index = (uint32_T *)ssGetDWork_wrapper
    (chartInstance->S, 10);
  chartInstance->c42_temp = (uint32_T *)ssGetDWork_wrapper(chartInstance->S, 11);
  chartInstance->c42_next_task_program_specified_block = (real_T *)
    ssGetInputPortSignal_wrapper(chartInstance->S, 10);
  chartInstance->c42_trial_queue_length = (uint32_T *)ssGetDWork_wrapper
    (chartInstance->S, 12);
  chartInstance->c42_trial_in_mini_block = (uint32_T *)ssGetDWork_wrapper
    (chartInstance->S, 13);
  chartInstance->c42_repeat_last_trial = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 7);
  chartInstance->c42_extra_trials = (real_T (*)[2])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 8);
  chartInstance->c42_EXAM = (real_T *)ssGetDWork_wrapper(chartInstance->S, 14);
  chartInstance->c42_BLOCK = (real_T *)ssGetDWork_wrapper(chartInstance->S, 15);
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
void sf_c42_General_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2984886890U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4208500886U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(55563908U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2046125850U);
}

mxArray* sf_c42_General_get_post_codegen_info(void);
mxArray *sf_c42_General_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("Gl5OpmQeCCz3vnYWkY9EyC");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,11,3,dataFields);

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
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(3));
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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(50);
      pr[1] = (double)(500);
      mxSetField(mxData,4,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,5,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(7));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,5,"type",mxType);
    }

    mxSetField(mxData,5,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,6,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(7));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,6,"type",mxType);
    }

    mxSetField(mxData,6,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,7,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,7,"type",mxType);
    }

    mxSetField(mxData,7,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1000);
      pr[1] = (double)(2);
      mxSetField(mxData,8,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,8,"type",mxType);
    }

    mxSetField(mxData,8,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,9,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(7));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,9,"type",mxType);
    }

    mxSetField(mxData,9,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,10,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,10,"type",mxType);
    }

    mxSetField(mxData,10,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,8,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(7));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(7));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(7));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,3,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(7));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,4,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(7));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,4,"type",mxType);
    }

    mxSetField(mxData,4,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,5,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(7));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,5,"type",mxType);
    }

    mxSetField(mxData,5,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,6,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,6,"type",mxType);
    }

    mxSetField(mxData,6,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(2);
      pr[1] = (double)(1);
      mxSetField(mxData,7,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,7,"type",mxType);
    }

    mxSetField(mxData,7,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo = sf_c42_General_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c42_General_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c42_General_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("early");
  mxArray *fallbackReason = mxCreateString("ext_mode");
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

mxArray *sf_c42_General_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c42_General_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c42_General(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[108],T\"block\",},{M[1],M[110],T\"block_in_set\",},{M[1],M[134],T\"extra_trials\",},{M[1],M[133],T\"repeat_last_trial\",},{M[1],M[106],T\"task_status\",},{M[1],M[107],T\"tp\",},{M[1],M[109],T\"trial_in_block\",},{M[1],M[111],T\"trial_in_set\",},{M[3],M[136],T\"BLOCK\",},{M[3],M[135],T\"EXAM\",}}",
    "100 S1x10'type','srcId','name','auxInfo'{{M[3],M[124],T\"i\",},{M[3],M[113],T\"repeat_list\",},{M[3],M[123],T\"repeat_list_length\",},{M[3],M[125],T\"swap_index\",},{M[3],M[126],T\"temp\",},{M[3],M[129],T\"trial_in_mini_block\",},{M[3],M[112],T\"trial_queue\",},{M[3],M[128],T\"trial_queue_length\",},{M[6],M[132],T\"e_exit_trial\",},{M[7],M[132],T\"e_exit_trialEventCounter\",}}",
    "100 S1x3'type','srcId','name','auxInfo'{{M[8],M[0],T\"is_active_c42_General\",},{M[9],M[0],T\"is_c42_General\",},{M[9],M[8],T\"is_InTrial\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 23, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c42_General_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc42_GeneralInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc42_GeneralInstanceStruct *) chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _GeneralMachineNumber_,
           42,
           10,
           60,
           0,
           29,
           3,
           0,
           0,
           0,
           0,
           &(chartInstance->chartNumber),
           &(chartInstance->instanceNumber),
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_GeneralMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_GeneralMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _GeneralMachineNumber_,
            chartInstance->chartNumber,
            3,
            3,
            3);
          _SFD_SET_DATA_PROPS(2,0,0,0,"BLOCK");
          _SFD_SET_DATA_PROPS(3,0,0,0,"EXAM");
          _SFD_SET_DATA_PROPS(4,0,0,0,"i");
          _SFD_SET_DATA_PROPS(5,0,0,0,"repeat_list");
          _SFD_SET_DATA_PROPS(6,0,0,0,"repeat_list_length");
          _SFD_SET_DATA_PROPS(7,0,0,0,"swap_index");
          _SFD_SET_DATA_PROPS(8,0,0,0,"temp");
          _SFD_SET_DATA_PROPS(9,0,0,0,"trial_in_mini_block");
          _SFD_SET_DATA_PROPS(10,0,0,0,"trial_queue");
          _SFD_SET_DATA_PROPS(11,0,0,0,"trial_queue_length");
          _SFD_SET_DATA_PROPS(12,1,1,0,"repeat_trial_flag");
          _SFD_SET_DATA_PROPS(13,1,1,0,"run_command");
          _SFD_SET_DATA_PROPS(14,1,1,0,"pause_type");
          _SFD_SET_DATA_PROPS(15,1,1,0,"seed");
          _SFD_SET_DATA_PROPS(16,1,1,0,"block_definitions");
          _SFD_SET_DATA_PROPS(17,1,1,0,"max_block_definitions");
          _SFD_SET_DATA_PROPS(18,1,1,0,"trial_queue_max_length");
          _SFD_SET_DATA_PROPS(19,1,1,0,"use_task_protocol_block_sequence_flag");
          _SFD_SET_DATA_PROPS(20,1,1,0,"task_protocol_block_sequence");
          _SFD_SET_DATA_PROPS(21,1,1,0,"task_protocol_block_sequence_length");
          _SFD_SET_DATA_PROPS(22,1,1,0,"next_task_program_specified_block");
          _SFD_SET_DATA_PROPS(23,2,0,1,"task_status");
          _SFD_SET_DATA_PROPS(24,2,0,1,"tp");
          _SFD_SET_DATA_PROPS(25,2,0,1,"block");
          _SFD_SET_DATA_PROPS(26,2,0,1,"trial_in_block");
          _SFD_SET_DATA_PROPS(27,2,0,1,"block_in_set");
          _SFD_SET_DATA_PROPS(28,2,0,1,"trial_in_set");
          _SFD_SET_DATA_PROPS(29,2,0,1,"repeat_last_trial");
          _SFD_SET_DATA_PROPS(30,2,0,1,"extra_trials");
          _SFD_EVENT_SCOPE(0,1);
          _SFD_EVENT_SCOPE(1,1);
          _SFD_EVENT_SCOPE(2,2);
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_STATE_INFO(6,0,0);
          _SFD_STATE_INFO(7,0,0);
          _SFD_STATE_INFO(8,0,0);
          _SFD_STATE_INFO(9,0,0);
          _SFD_CH_SUBSTATE_COUNT(5);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,7);
          _SFD_CH_SUBSTATE_INDEX(3,8);
          _SFD_CH_SUBSTATE_INDEX(4,9);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,5);
          _SFD_ST_SUBSTATE_INDEX(1,0,2);
          _SFD_ST_SUBSTATE_INDEX(1,1,3);
          _SFD_ST_SUBSTATE_INDEX(1,2,4);
          _SFD_ST_SUBSTATE_INDEX(1,3,5);
          _SFD_ST_SUBSTATE_INDEX(1,4,6);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(7,0);
          _SFD_ST_SUBSTATE_COUNT(8,0);
          _SFD_ST_SUBSTATE_COUNT(9,0);
        }

        _SFD_CV_INIT_CHART(5,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,5,1,1,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(2,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(3,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(4,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(5,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(6,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(7,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(8,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(9,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(46,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 118, 170, 218 };

          static unsigned int sEndGuardMap[] = { 160, 208, 275 };

          static int sPostFixPredicateTree[] = { 0, 1, 2, -2, -3 };

          _SFD_CV_INIT_TRANS(13,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),5,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 118, 170, 218, 118,
            170, 218, 118, 170, 218 };

          static unsigned int sEndRelationalopMap[] = { 160, 208, 275, 160, 208,
            275, 160, 208, 275 };

          static int sRelationalopEps[] = { -1, -1, -1, -1, -1, -1, -1, -1, -1 };

          static int sRelationalopType[] = { 0, 0, 4, 0, 0, 4, 0, 0, 4, 0, 0, 4,
            0, 0, 4, 0, 0, 4, 0, 0, 4, 0, 0, 4, 0, 0, 4, 0, 0, 4, 0, 0, 4, 0, 0,
            4, 0, 0, 4, 0, 0, 4, 0, 0, 4 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(13,9,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 86, 130 };

          static unsigned int sEndGuardMap[] = { 126, 150 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(31,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 86, 130, 86, 130, 86,
            130 };

          static unsigned int sEndRelationalopMap[] = { 126, 150, 126, 150, 126,
            150 };

          static int sRelationalopEps[] = { 0, 0, 0, 0, 0, 0 };

          static int sRelationalopType[] = { 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3,
            0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3, 0, 3 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(31,6,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(29,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 17 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 0, 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(29,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(17,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(44,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 52 };

          static unsigned int sEndGuardMap[] = { 94 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(39,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 52, 52, 52 };

          static unsigned int sEndRelationalopMap[] = { 94, 94, 94 };

          static int sRelationalopEps[] = { -1, -1, -1 };

          static int sRelationalopType[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(39,3,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 30 };

          static unsigned int sEndGuardMap[] = { 21, 69 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(14,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1, 30, 1, 30, 1, 30 };

          static unsigned int sEndRelationalopMap[] = { 21, 69, 21, 69, 21, 69 };

          static int sRelationalopEps[] = { 0, 0, 0, 0, 0, 0 };

          static int sRelationalopType[] = { 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2,
            3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(14,6,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(23,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 17 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 0, 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(23,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(24,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1, 1, 1 };

          static unsigned int sEndRelationalopMap[] = { 17, 17, 17 };

          static int sRelationalopEps[] = { 0, 0, 0 };

          static int sRelationalopType[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(24,3,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(28,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(16,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(22,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(15,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(21,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(34,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(2,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(38,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 71, 102, 115 };

          static unsigned int sEndGuardMap[] = { 98, 111, 149 };

          static int sPostFixPredicateTree[] = { 0, 1, -3, 2, -3 };

          _SFD_CV_INIT_TRANS(5,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),5,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 71, 102, 115, 71, 102,
            115, 71, 102, 115 };

          static unsigned int sEndRelationalopMap[] = { 98, 111, 149, 98, 111,
            149, 98, 111, 149 };

          static int sRelationalopEps[] = { 0, 0, -1, 0, 0, -1, 0, 0, -1 };

          static int sRelationalopType[] = { 3, 4, 1, 3, 4, 1, 3, 4, 1, 3, 4, 1,
            3, 4, 1, 3, 4, 1, 3, 4, 1, 3, 4, 1, 3, 4, 1, 3, 4, 1, 3, 4, 1, 3, 4,
            1, 3, 4, 1, 3, 4, 1, 3, 4, 1 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(5,9,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(25,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(30,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(54,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(53,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 23 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(55,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1, 1, 1 };

          static unsigned int sEndRelationalopMap[] = { 23, 23, 23 };

          static int sRelationalopEps[] = { 0, 0, 0 };

          static int sRelationalopType[] = { 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
            4, 4, 4 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(55,3,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 113 };

          static unsigned int sEndGuardMap[] = { 135 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(0,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 113 };

          static unsigned int sEndRelationalopMap[] = { 135 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 4, 4, 4, 4, 4 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(0,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 42 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 42 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 5, 5, 5, 5, 5 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(4,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(6,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(8,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 62 };

          static unsigned int sEndGuardMap[] = { 94 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 62, 62, 62 };

          static unsigned int sEndRelationalopMap[] = { 94, 94, 94 };

          static int sRelationalopEps[] = { -1, -1, -1 };

          static int sRelationalopType[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(7,3,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(9,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(11,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(56,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 45 };

          static unsigned int sEndGuardMap[] = { 68 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(12,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 45, 45, 45 };

          static unsigned int sEndRelationalopMap[] = { 68, 68, 68 };

          static int sRelationalopEps[] = { 0, 0, 0 };

          static int sRelationalopType[] = { 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
            3, 3, 3 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(12,3,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(10,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(19,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(20,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 17 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 0, 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(20,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(58,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(35,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(3,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(47,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(49,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(18,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 17 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 0, 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(18,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 169, 200, 220 };

          static unsigned int sEndGuardMap[] = { 190, 216, 235 };

          static int sPostFixPredicateTree[] = { 0, 1, 2, -2, -3 };

          _SFD_CV_INIT_TRANS(32,3,&(sStartGuardMap[0]),&(sEndGuardMap[0]),5,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 169, 200, 220 };

          static unsigned int sEndRelationalopMap[] = { 190, 216, 235 };

          static int sRelationalopEps[] = { -1, 0, -1 };

          static int sRelationalopType[] = { 4, 0, 0, 4, 0, 0, 4, 0, 0, 4, 0, 0,
            4, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(32,3,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(48,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(33,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(57,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1, 1, 1 };

          static unsigned int sEndRelationalopMap[] = { 17, 17, 17 };

          static int sRelationalopEps[] = { 0, 0, 0 };

          static int sRelationalopType[] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
            1, 1, 1 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(57,3,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(59,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 217, 237 };

          static unsigned int sEndGuardMap[] = { 233, 252 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(27,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 217, 237 };

          static unsigned int sEndRelationalopMap[] = { 233, 252 };

          static int sRelationalopEps[] = { 0, -1 };

          static int sRelationalopType[] = { 1, 0, 1, 0, 1, 0, 1, 0, 1, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(27,2,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(26,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(41,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 16 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0, 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(41,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(40,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 16 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0, 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(40,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 16 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(37,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 16 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0, 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(37,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(36,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1, 21 };

          static unsigned int sEndGuardMap[] = { 17, 35 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(42,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1, 21 };

          static unsigned int sEndRelationalopMap[] = { 17, 35 };

          static int sRelationalopEps[] = { 0, -1 };

          static int sRelationalopType[] = { 1, 4, 1, 4, 1, 4, 1, 4, 1, 4 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(42,2,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(50,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(51,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(52,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(43,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 17 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 0, 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(43,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(45,0,NULL,NULL,0,NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c42_e_sf_marshallOut,(MexInFcnForType)
          c42_f_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c42_e_sf_marshallOut,(MexInFcnForType)
          c42_f_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c42_b_sf_marshallOut,(MexInFcnForType)
          c42_b_sf_marshallIn);

        {
          unsigned int dimVector[1];
          dimVector[0]= 499;
          _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c42_f_sf_marshallOut,(MexInFcnForType)
            c42_e_sf_marshallIn);
        }

        _SFD_SET_DATA_COMPILED_PROPS(6,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c42_b_sf_marshallOut,(MexInFcnForType)
          c42_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(7,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c42_b_sf_marshallOut,(MexInFcnForType)
          c42_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c42_b_sf_marshallOut,(MexInFcnForType)
          c42_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c42_b_sf_marshallOut,(MexInFcnForType)
          c42_b_sf_marshallIn);

        {
          unsigned int dimVector[1];
          dimVector[0]= 499;
          _SFD_SET_DATA_COMPILED_PROPS(10,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c42_f_sf_marshallOut,(MexInFcnForType)
            c42_e_sf_marshallIn);
        }

        _SFD_SET_DATA_COMPILED_PROPS(11,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c42_b_sf_marshallOut,(MexInFcnForType)
          c42_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c42_e_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(13,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c42_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(14,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c42_e_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(15,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c42_e_sf_marshallOut,(MexInFcnForType)NULL);

        {
          unsigned int dimVector[2];
          dimVector[0]= 50;
          dimVector[1]= 500;
          _SFD_SET_DATA_COMPILED_PROPS(16,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c42_g_sf_marshallOut,(MexInFcnForType)NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(17,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c42_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(18,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c42_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(19,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c42_e_sf_marshallOut,(MexInFcnForType)NULL);

        {
          unsigned int dimVector[2];
          dimVector[0]= 1000;
          dimVector[1]= 2;
          _SFD_SET_DATA_COMPILED_PROPS(20,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c42_h_sf_marshallOut,(MexInFcnForType)NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(21,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c42_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(22,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c42_e_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(23,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c42_b_sf_marshallOut,(MexInFcnForType)
          c42_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(24,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c42_b_sf_marshallOut,(MexInFcnForType)
          c42_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(25,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c42_b_sf_marshallOut,(MexInFcnForType)
          c42_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(26,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c42_b_sf_marshallOut,(MexInFcnForType)
          c42_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(27,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c42_b_sf_marshallOut,(MexInFcnForType)
          c42_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(28,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c42_b_sf_marshallOut,(MexInFcnForType)
          c42_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(29,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c42_e_sf_marshallOut,(MexInFcnForType)
          c42_f_sf_marshallIn);

        {
          unsigned int dimVector[1];
          dimVector[0]= 2;
          _SFD_SET_DATA_COMPILED_PROPS(30,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c42_i_sf_marshallOut,(MexInFcnForType)
            c42_g_sf_marshallIn);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _GeneralMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc42_GeneralInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc42_GeneralInstanceStruct *) chartInfo->chartInstance;
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(12U, chartInstance->c42_repeat_trial_flag);
        _SFD_SET_DATA_VALUE_PTR(23U, chartInstance->c42_task_status);
        _SFD_SET_DATA_VALUE_PTR(24U, chartInstance->c42_tp);
        _SFD_SET_DATA_VALUE_PTR(25U, chartInstance->c42_block);
        _SFD_SET_DATA_VALUE_PTR(26U, chartInstance->c42_trial_in_block);
        _SFD_SET_DATA_VALUE_PTR(27U, chartInstance->c42_block_in_set);
        _SFD_SET_DATA_VALUE_PTR(28U, chartInstance->c42_trial_in_set);
        _SFD_SET_DATA_VALUE_PTR(10U, *chartInstance->c42_trial_queue);
        _SFD_SET_DATA_VALUE_PTR(5U, *chartInstance->c42_repeat_list);
        _SFD_SET_DATA_VALUE_PTR(13U, chartInstance->c42_run_command);
        _SFD_SET_DATA_VALUE_PTR(14U, chartInstance->c42_pause_type);
        _SFD_SET_DATA_VALUE_PTR(15U, chartInstance->c42_seed);
        _SFD_SET_DATA_VALUE_PTR(16U, *chartInstance->c42_block_definitions);
        _SFD_SET_DATA_VALUE_PTR(17U, chartInstance->c42_max_block_definitions);
        _SFD_SET_DATA_VALUE_PTR(18U, chartInstance->c42_trial_queue_max_length);
        _SFD_SET_DATA_VALUE_PTR(19U,
          chartInstance->c42_use_task_protocol_block_sequence_flag);
        _SFD_SET_DATA_VALUE_PTR(20U,
          *chartInstance->c42_task_protocol_block_sequence);
        _SFD_SET_DATA_VALUE_PTR(21U,
          chartInstance->c42_task_protocol_block_sequence_length);
        _SFD_SET_DATA_VALUE_PTR(6U, chartInstance->c42_repeat_list_length);
        _SFD_SET_DATA_VALUE_PTR(4U, chartInstance->c42_i);
        _SFD_SET_DATA_VALUE_PTR(7U, chartInstance->c42_swap_index);
        _SFD_SET_DATA_VALUE_PTR(8U, chartInstance->c42_temp);
        _SFD_SET_DATA_VALUE_PTR(22U,
          chartInstance->c42_next_task_program_specified_block);
        _SFD_SET_DATA_VALUE_PTR(11U, chartInstance->c42_trial_queue_length);
        _SFD_SET_DATA_VALUE_PTR(9U, chartInstance->c42_trial_in_mini_block);
        _SFD_SET_DATA_VALUE_PTR(29U, chartInstance->c42_repeat_last_trial);
        _SFD_SET_DATA_VALUE_PTR(30U, *chartInstance->c42_extra_trials);
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c42_EXAM);
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c42_BLOCK);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sXhSZxT7UekhsG4knAy3ATE";
}

static void sf_check_dwork_consistency(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    const uint32_T *sfunDWorkChecksum = sf_get_sfun_dwork_checksum();
    mxArray *infoStruct = load_General_optimization_info();
    mxArray* mxRTWDWorkChecksum = sf_get_dwork_info_from_mat_file(S,
      sf_get_instance_specialization(), infoStruct, 42, "dworkChecksum");
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

static void sf_opaque_initialize_c42_General(void *chartInstanceVar)
{
  sf_check_dwork_consistency(((SFc42_GeneralInstanceStruct*) chartInstanceVar)
    ->S);
  chart_debug_initialization(((SFc42_GeneralInstanceStruct*) chartInstanceVar)
    ->S,0);
  initialize_params_c42_General((SFc42_GeneralInstanceStruct*) chartInstanceVar);
  initialize_c42_General((SFc42_GeneralInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c42_General(void *chartInstanceVar)
{
  enable_c42_General((SFc42_GeneralInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c42_General(void *chartInstanceVar)
{
  disable_c42_General((SFc42_GeneralInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c42_General(void *chartInstanceVar)
{
  sf_gateway_c42_General((SFc42_GeneralInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c42_General(void *chartInstanceVar)
{
  ext_mode_exec_c42_General((SFc42_GeneralInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c42_General(SimStruct* S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  return get_sim_state_c42_General((SFc42_GeneralInstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c42_General(SimStruct* S, const mxArray *st)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  set_sim_state_c42_General((SFc42_GeneralInstanceStruct*)
    chartInfo->chartInstance, st);
}

static void sf_opaque_terminate_c42_General(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc42_GeneralInstanceStruct*) chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_General_optimization_info();
    }

    finalize_c42_General((SFc42_GeneralInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (crtInfo != NULL) {
      utFree(crtInfo);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc42_General((SFc42_GeneralInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c42_General(SimStruct *S)
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
    initialize_params_c42_General((SFc42_GeneralInstanceStruct*)
      (chartInfo->chartInstance));
  }
}

mxArray *sf_c42_General_get_testpoint_info(void)
{
  return NULL;
}

static void sf_set_sfun_dwork_info(SimStruct *S)
{
  const char *dworkEncStr[] = {
    "100 S1x10'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size'{{T\"uint32\",,,,,,,M[0],M[]},{T\"int32\",,,,,,,M[0],M[]},{T\"boolean\",,,,,,,M[0],M[]},{T\"uint8\",,,,,,,M[0],M[]},{T\"uint8\",,,,,,,M[0],M[]},{T\"uint8\",,,,,,,M[0],M[]},{T\"double\",,,,,,,M[0],M[499]},{T\"double\",,,,,,,M[0],M[499]},{T\"uint32\",,,,,,,M[0],M[]},{T\"uint32\",,,,,,,M[0],M[]}}",
    "100 S1x6'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size'{{T\"uint32\",,,,,,,M[0],M[]},{T\"uint32\",,,,,,,M[0],M[]},{T\"uint32\",,,,,,,M[0],M[]},{T\"uint32\",,,,,,,M[0],M[]},{T\"double\",,,,,,,M[0],M[]},{T\"double\",,,,,,,M[0],M[]}}"
  };

  sf_set_encoded_dwork_info(S, dworkEncStr, 16, 10);
}

static uint32_T* sf_get_sfun_dwork_checksum()
{
  static uint32_T checksum[4] = { 2140351174U, 2384824428U, 1301823514U,
    920397130U };

  return checksum;
}

static void mdlSetWorkWidths_c42_General(SimStruct *S)
{
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_General_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      42);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,42,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,42);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 6, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 7, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 8, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 9, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 10, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,42,11);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,42,9);
    }

    ssSetInputPortOptimOpts(S, 11, SS_REUSABLE_AND_LOCAL);

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=9; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 11; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,42);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1025101440U));
  ssSetChecksum1(S,(1315133519U));
  ssSetChecksum2(S,(1445541853U));
  ssSetChecksum3(S,(3620201201U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c42_General(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c42_General(SimStruct *S)
{
  SFc42_GeneralInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc42_GeneralInstanceStruct *)utMalloc(sizeof
    (SFc42_GeneralInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc42_GeneralInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c42_General;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c42_General;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c42_General;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c42_General;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c42_General;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c42_General;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c42_General;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c42_General;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c42_General;
  chartInstance->chartInfo.mdlStart = mdlStart_c42_General;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c42_General;
  chartInstance->chartInfo.extModeExec = sf_opaque_ext_mode_exec_c42_General;
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

void c42_General_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c42_General(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c42_General(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c42_General(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c42_General_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
