/* Include files */

#include <stddef.h>
#include "blas.h"
#include "vmr_rwd_fix_leftarm_sfun.h"
#include "c1_vmr_rwd_fix_leftarm.h"
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
#define c1_event_e_clk                 (0)
#define c1_event_e_ExitTrialNow        (1)
#define c1_event_e_cntl_btn            (2)
#define CALL_EVENT                     (-1)
#define c1_IN_NO_ACTIVE_CHILD          ((uint8_T)0U)
#define c1_IN_EndInstructPause         ((uint8_T)1U)
#define c1_IN_Ending                   ((uint8_T)2U)
#define c1_IN_InitStartTarget          ((uint8_T)3U)
#define c1_IN_Initialize               ((uint8_T)4U)
#define c1_IN_InstructWaitState        ((uint8_T)5U)
#define c1_IN_Inter_Trial_Hold         ((uint8_T)6U)
#define c1_IN_Inter_Trial_State        ((uint8_T)7U)
#define c1_IN_Main_Trial               ((uint8_T)8U)
#define c1_IN_MoveHandAway             ((uint8_T)9U)
#define c1_IN_ReturnToStart            ((uint8_T)10U)
#define c1_IN_ReturnToStart1           ((uint8_T)11U)
#define c1_IN_ShowInstructState        ((uint8_T)12U)
#define c1_IN_ShowScoreState           ((uint8_T)13U)
#define c1_IN_DoReward                 ((uint8_T)1U)
#define c1_IN_EndOfTrial               ((uint8_T)2U)
#define c1_IN_Hit2ndTarget             ((uint8_T)3U)
#define c1_IN_Miss2ndTarget            ((uint8_T)4U)
#define c1_IN_NeutralReward            ((uint8_T)5U)
#define c1_IN_NoReward                 ((uint8_T)6U)
#define c1_IN_Show2ndTarget            ((uint8_T)7U)
#define c1_IN_StartTargetOn            ((uint8_T)8U)
#define c1_IN_StayAtFirstTarget        ((uint8_T)9U)
#define c1_IN_TooSlowState             ((uint8_T)10U)
#define c1_IN_WaitForSound             ((uint8_T)11U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;

/* Function Declarations */
static void initialize_c1_vmr_rwd_fix_leftarm
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void initialize_params_c1_vmr_rwd_fix_leftarm
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void enable_c1_vmr_rwd_fix_leftarm(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance);
static void disable_c1_vmr_rwd_fix_leftarm
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void c1_update_debugger_state_c1_vmr_rwd_fix_leftarm
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void ext_mode_exec_c1_vmr_rwd_fix_leftarm
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c1_vmr_rwd_fix_leftarm
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void set_sim_state_c1_vmr_rwd_fix_leftarm
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance, const mxArray *c1_st);
static void c1_set_sim_state_side_effects_c1_vmr_rwd_fix_leftarm
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void finalize_c1_vmr_rwd_fix_leftarm
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void sf_gateway_c1_vmr_rwd_fix_leftarm
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void mdl_start_c1_vmr_rwd_fix_leftarm
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void c1_chartstep_c1_vmr_rwd_fix_leftarm
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void initSimStructsc1_vmr_rwd_fix_leftarm
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void c1_Initialize(SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void c1_InitStartTarget(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance);
static void c1_Main_Trial(SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void c1_exit_internal_Main_Trial(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance);
static void c1_enter_atomic_StartTargetOn(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance);
static void c1_StartTargetOn(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance);
static void c1_StayAtFirstTarget(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance);
static void c1_Show2ndTarget(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance);
static void c1_TooSlowState(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance);
static void c1_enter_atomic_NeutralReward(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance);
static void c1_Ending(SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void c1_EndInstructPause(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance);
static void c1_InstructWaitState(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance);
static void c1_enter_atomic_ShowInstructState
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void c1_enter_atomic_Inter_Trial_State
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance);
static void c1_Inter_Trial_Hold(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance);
static void c1_WaitForSound(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber, uint32_T c1_instanceNumber);
static const mxArray *c1_sf_marshallOut(void *chartInstanceVoid, void *c1_inData);
static uint32_T c1_emlrt_marshallIn(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c1_b_e_ApplyNewRotationEventCounter, const
  char_T *c1_identifier);
static uint32_T c1_b_emlrt_marshallIn(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static const mxArray *c1_b_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static int8_T c1_c_emlrt_marshallIn(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static const mxArray *c1_c_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static int32_T c1_d_emlrt_marshallIn(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c1_b_sfEvent, const char_T *c1_identifier);
static int32_T c1_e_emlrt_marshallIn(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static const mxArray *c1_d_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static uint8_T c1_f_emlrt_marshallIn(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c1_b_is_Main_Trial, const char_T *c1_identifier);
static uint8_T c1_g_emlrt_marshallIn(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static const mxArray *c1_e_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static boolean_T c1_h_emlrt_marshallIn(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c1_b_logging_enable, const char_T
  *c1_identifier);
static boolean_T c1_i_emlrt_marshallIn(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static const mxArray *c1_f_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static real_T c1_j_emlrt_marshallIn(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c1_b_event_code, const char_T *c1_identifier);
static real_T c1_k_emlrt_marshallIn(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData);
static const mxArray *c1_g_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static const mxArray *c1_h_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static const mxArray *c1_i_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static const mxArray *c1_j_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static const mxArray *c1_k_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData);
static const mxArray *c1_l_emlrt_marshallIn
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance, const mxArray
   *c1_b_setSimStateSideEffectsInfo, const char_T *c1_identifier);
static const mxArray *c1_m_emlrt_marshallIn
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance, const mxArray *c1_u,
   const emlrtMsgIdentifier *c1_parentId);
static int32_T c1__s32_d_(SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance,
  real_T c1_b);
static int32_T c1__s32_add__(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, int32_T c1_b, int32_T c1_c);
static void init_dsm_address_info(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c1_vmr_rwd_fix_leftarm
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc1_vmr_rwd_fix_leftarm(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c1_doSetSimStateSideEffects = 0U;
  chartInstance->c1_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c1_temporalCounter_i1 = 0U;
  *chartInstance->c1_temporalCounter_i1 = 0U;
  *chartInstance->c1_temporalCounter_i1 = 0U;
  *chartInstance->c1_temporalCounter_i1 = 0U;
  *chartInstance->c1_temporalCounter_i1 = 0U;
  *chartInstance->c1_is_Main_Trial = c1_IN_NO_ACTIVE_CHILD;
  *chartInstance->c1_temporalCounter_i1 = 0U;
  *chartInstance->c1_temporalCounter_i1 = 0U;
  *chartInstance->c1_temporalCounter_i1 = 0U;
  *chartInstance->c1_temporalCounter_i1 = 0U;
  *chartInstance->c1_temporalCounter_i1 = 0U;
  *chartInstance->c1_is_active_c1_vmr_rwd_fix_leftarm = 0U;
  *chartInstance->c1_is_c1_vmr_rwd_fix_leftarm = c1_IN_NO_ACTIVE_CHILD;
  *chartInstance->c1_tickCount = 0.0;
  *chartInstance->c1_reward_type = 0.0;
  *chartInstance->c1_dist = 0.0;
  *chartInstance->c1_tick = 0.0;
  if (!(sf_get_output_port_reusable(chartInstance->S, 1) != 0)) {
    *chartInstance->c1_logging_enable = false;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 2) != 0)) {
    *chartInstance->c1_event_code = 0.0;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 3) != 0)) {
    *chartInstance->c1_targetA_row = 0.0;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 4) != 0)) {
    *chartInstance->c1_targetA_state = 0.0;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 5) != 0)) {
    *chartInstance->c1_targetB_row = 0.0;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 6) != 0)) {
    *chartInstance->c1_targetB_state = 0.0;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 7) != 0)) {
    *chartInstance->c1_reward_state = 0.0;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 8) != 0)) {
    *chartInstance->c1_score = 0;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 9) != 0)) {
    *chartInstance->c1_reward = 0;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 10) != 0)) {
    *chartInstance->c1_fdbk_text = 0;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 11) != 0)) {
    *chartInstance->c1_instruct_num = 0.0;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 12) != 0)) {
    *chartInstance->c1_tone = 0.0;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 13) != 0)) {
    *chartInstance->c1_rotation_on = 0.0;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 14) != 0)) {
    *chartInstance->c1_handvis_state = 0.0;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 15) != 0)) {
    *chartInstance->c1_do_clamp = 0.0;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 16) != 0)) {
    *chartInstance->c1_robot_enable_controller = false;
  }

  *chartInstance->c1_e_ApplyNewRotationEventCounter = 0U;
  *chartInstance->c1_e_ApplyNewRotation = false;
  *chartInstance->c1_e_Trial_EndEventCounter = 0U;
  *chartInstance->c1_e_Trial_End = false;
}

static void initialize_params_c1_vmr_rwd_fix_leftarm
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  real_T c1_d0;
  sf_mex_import_named("E_SHOW_INSTRUCT", sf_mex_get_sfun_param(chartInstance->S,
    0, 0), &c1_d0, 0, 0, 0U, 0, 0U, 0);
  chartInstance->c1_E_SHOW_INSTRUCT = c1_d0;
}

static void enable_c1_vmr_rwd_fix_leftarm(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c1_vmr_rwd_fix_leftarm
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c1_update_debugger_state_c1_vmr_rwd_fix_leftarm
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  uint32_T c1_prevAniVal;
  c1_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (*chartInstance->c1_is_active_c1_vmr_rwd_fix_leftarm == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 0U, *chartInstance->c1_sfEvent);
  }

  if (*chartInstance->c1_is_c1_vmr_rwd_fix_leftarm == c1_IN_MoveHandAway) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 19U, *chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 19U, *chartInstance->c1_sfEvent);
  }

  if (*chartInstance->c1_is_c1_vmr_rwd_fix_leftarm == c1_IN_Initialize) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c1_sfEvent);
  }

  if (*chartInstance->c1_is_c1_vmr_rwd_fix_leftarm == c1_IN_InitStartTarget) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c1_sfEvent);
  }

  if (*chartInstance->c1_is_c1_vmr_rwd_fix_leftarm == c1_IN_Main_Trial) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c1_sfEvent);
  }

  if (*chartInstance->c1_is_Main_Trial == c1_IN_StartTargetOn) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 15U, *chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 15U, *chartInstance->c1_sfEvent);
  }

  if (*chartInstance->c1_is_Main_Trial == c1_IN_StayAtFirstTarget) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 16U, *chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 16U, *chartInstance->c1_sfEvent);
  }

  if (*chartInstance->c1_is_Main_Trial == c1_IN_Show2ndTarget) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 14U, *chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c1_sfEvent);
  }

  if (*chartInstance->c1_is_Main_Trial == c1_IN_Hit2ndTarget) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c1_sfEvent);
  }

  if (*chartInstance->c1_is_Main_Trial == c1_IN_Miss2ndTarget) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, *chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c1_sfEvent);
  }

  if (*chartInstance->c1_is_Main_Trial == c1_IN_TooSlowState) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 17U, *chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 17U, *chartInstance->c1_sfEvent);
  }

  if (*chartInstance->c1_is_Main_Trial == c1_IN_DoReward) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c1_sfEvent);
  }

  if (*chartInstance->c1_is_Main_Trial == c1_IN_NeutralReward) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 12U, *chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, *chartInstance->c1_sfEvent);
  }

  if (*chartInstance->c1_is_Main_Trial == c1_IN_NoReward) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 13U, *chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, *chartInstance->c1_sfEvent);
  }

  if (*chartInstance->c1_is_Main_Trial == c1_IN_EndOfTrial) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c1_sfEvent);
  }

  if (*chartInstance->c1_is_c1_vmr_rwd_fix_leftarm == c1_IN_Ending) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c1_sfEvent);
  }

  if (*chartInstance->c1_is_c1_vmr_rwd_fix_leftarm == c1_IN_EndInstructPause) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c1_sfEvent);
  }

  if (*chartInstance->c1_is_c1_vmr_rwd_fix_leftarm == c1_IN_ReturnToStart1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 21U, *chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 21U, *chartInstance->c1_sfEvent);
  }

  if (*chartInstance->c1_is_c1_vmr_rwd_fix_leftarm == c1_IN_InstructWaitState) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c1_sfEvent);
  }

  if (*chartInstance->c1_is_c1_vmr_rwd_fix_leftarm == c1_IN_ShowScoreState) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 23U, *chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 23U, *chartInstance->c1_sfEvent);
  }

  if (*chartInstance->c1_is_c1_vmr_rwd_fix_leftarm == c1_IN_ShowInstructState) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 22U, *chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 22U, *chartInstance->c1_sfEvent);
  }

  if (*chartInstance->c1_is_c1_vmr_rwd_fix_leftarm == c1_IN_Inter_Trial_State) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c1_sfEvent);
  }

  if (*chartInstance->c1_is_c1_vmr_rwd_fix_leftarm == c1_IN_ReturnToStart) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 20U, *chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 20U, *chartInstance->c1_sfEvent);
  }

  if (*chartInstance->c1_is_c1_vmr_rwd_fix_leftarm == c1_IN_Inter_Trial_Hold) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c1_sfEvent);
  }

  if (*chartInstance->c1_is_Main_Trial == c1_IN_WaitForSound) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 18U, *chartInstance->c1_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 18U, *chartInstance->c1_sfEvent);
  }

  _SFD_SET_ANIMATION(c1_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c1_vmr_rwd_fix_leftarm
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  c1_update_debugger_state_c1_vmr_rwd_fix_leftarm(chartInstance);
}

static const mxArray *get_sim_state_c1_vmr_rwd_fix_leftarm
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  const mxArray *c1_st;
  const mxArray *c1_y = NULL;
  real_T c1_hoistedGlobal;
  real_T c1_u;
  const mxArray *c1_b_y = NULL;
  real_T c1_b_hoistedGlobal;
  real_T c1_b_u;
  const mxArray *c1_c_y = NULL;
  int32_T c1_c_hoistedGlobal;
  int32_T c1_c_u;
  const mxArray *c1_d_y = NULL;
  real_T c1_d_hoistedGlobal;
  real_T c1_d_u;
  const mxArray *c1_e_y = NULL;
  real_T c1_e_hoistedGlobal;
  real_T c1_e_u;
  const mxArray *c1_f_y = NULL;
  boolean_T c1_f_hoistedGlobal;
  boolean_T c1_f_u;
  const mxArray *c1_g_y = NULL;
  int32_T c1_g_hoistedGlobal;
  int32_T c1_g_u;
  const mxArray *c1_h_y = NULL;
  real_T c1_h_hoistedGlobal;
  real_T c1_h_u;
  const mxArray *c1_i_y = NULL;
  boolean_T c1_i_hoistedGlobal;
  boolean_T c1_i_u;
  const mxArray *c1_j_y = NULL;
  real_T c1_j_hoistedGlobal;
  real_T c1_j_u;
  const mxArray *c1_k_y = NULL;
  int32_T c1_k_hoistedGlobal;
  int32_T c1_k_u;
  const mxArray *c1_l_y = NULL;
  real_T c1_l_hoistedGlobal;
  real_T c1_l_u;
  const mxArray *c1_m_y = NULL;
  real_T c1_m_hoistedGlobal;
  real_T c1_m_u;
  const mxArray *c1_n_y = NULL;
  real_T c1_n_hoistedGlobal;
  real_T c1_n_u;
  const mxArray *c1_o_y = NULL;
  real_T c1_o_hoistedGlobal;
  real_T c1_o_u;
  const mxArray *c1_p_y = NULL;
  real_T c1_p_hoistedGlobal;
  real_T c1_p_u;
  const mxArray *c1_q_y = NULL;
  real_T c1_q_hoistedGlobal;
  real_T c1_q_u;
  const mxArray *c1_r_y = NULL;
  real_T c1_r_hoistedGlobal;
  real_T c1_r_u;
  const mxArray *c1_s_y = NULL;
  real_T c1_s_hoistedGlobal;
  real_T c1_s_u;
  const mxArray *c1_t_y = NULL;
  real_T c1_t_hoistedGlobal;
  real_T c1_t_u;
  const mxArray *c1_u_y = NULL;
  boolean_T c1_u_hoistedGlobal;
  boolean_T c1_u_u;
  const mxArray *c1_v_y = NULL;
  boolean_T c1_v_hoistedGlobal;
  boolean_T c1_v_u;
  const mxArray *c1_w_y = NULL;
  uint32_T c1_w_hoistedGlobal;
  uint32_T c1_w_u;
  const mxArray *c1_x_y = NULL;
  uint32_T c1_x_hoistedGlobal;
  uint32_T c1_x_u;
  const mxArray *c1_y_y = NULL;
  uint8_T c1_y_hoistedGlobal;
  uint8_T c1_y_u;
  const mxArray *c1_ab_y = NULL;
  uint8_T c1_ab_hoistedGlobal;
  uint8_T c1_ab_u;
  const mxArray *c1_bb_y = NULL;
  uint8_T c1_bb_hoistedGlobal;
  uint8_T c1_bb_u;
  const mxArray *c1_cb_y = NULL;
  uint32_T c1_cb_hoistedGlobal;
  uint32_T c1_cb_u;
  const mxArray *c1_db_y = NULL;
  c1_st = NULL;
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellmatrix(28, 1), false);
  c1_hoistedGlobal = *chartInstance->c1_do_clamp;
  c1_u = c1_hoistedGlobal;
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 0, c1_b_y);
  c1_b_hoistedGlobal = *chartInstance->c1_event_code;
  c1_b_u = c1_b_hoistedGlobal;
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", &c1_b_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 1, c1_c_y);
  c1_c_hoistedGlobal = *chartInstance->c1_fdbk_text;
  c1_c_u = c1_c_hoistedGlobal;
  c1_d_y = NULL;
  sf_mex_assign(&c1_d_y, sf_mex_create("y", &c1_c_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 2, c1_d_y);
  c1_d_hoistedGlobal = *chartInstance->c1_handvis_state;
  c1_d_u = c1_d_hoistedGlobal;
  c1_e_y = NULL;
  sf_mex_assign(&c1_e_y, sf_mex_create("y", &c1_d_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 3, c1_e_y);
  c1_e_hoistedGlobal = *chartInstance->c1_instruct_num;
  c1_e_u = c1_e_hoistedGlobal;
  c1_f_y = NULL;
  sf_mex_assign(&c1_f_y, sf_mex_create("y", &c1_e_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 4, c1_f_y);
  c1_f_hoistedGlobal = *chartInstance->c1_logging_enable;
  c1_f_u = c1_f_hoistedGlobal;
  c1_g_y = NULL;
  sf_mex_assign(&c1_g_y, sf_mex_create("y", &c1_f_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 5, c1_g_y);
  c1_g_hoistedGlobal = *chartInstance->c1_reward;
  c1_g_u = c1_g_hoistedGlobal;
  c1_h_y = NULL;
  sf_mex_assign(&c1_h_y, sf_mex_create("y", &c1_g_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 6, c1_h_y);
  c1_h_hoistedGlobal = *chartInstance->c1_reward_state;
  c1_h_u = c1_h_hoistedGlobal;
  c1_i_y = NULL;
  sf_mex_assign(&c1_i_y, sf_mex_create("y", &c1_h_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 7, c1_i_y);
  c1_i_hoistedGlobal = *chartInstance->c1_robot_enable_controller;
  c1_i_u = c1_i_hoistedGlobal;
  c1_j_y = NULL;
  sf_mex_assign(&c1_j_y, sf_mex_create("y", &c1_i_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 8, c1_j_y);
  c1_j_hoistedGlobal = *chartInstance->c1_rotation_on;
  c1_j_u = c1_j_hoistedGlobal;
  c1_k_y = NULL;
  sf_mex_assign(&c1_k_y, sf_mex_create("y", &c1_j_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 9, c1_k_y);
  c1_k_hoistedGlobal = *chartInstance->c1_score;
  c1_k_u = c1_k_hoistedGlobal;
  c1_l_y = NULL;
  sf_mex_assign(&c1_l_y, sf_mex_create("y", &c1_k_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 10, c1_l_y);
  c1_l_hoistedGlobal = *chartInstance->c1_targetA_row;
  c1_l_u = c1_l_hoistedGlobal;
  c1_m_y = NULL;
  sf_mex_assign(&c1_m_y, sf_mex_create("y", &c1_l_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 11, c1_m_y);
  c1_m_hoistedGlobal = *chartInstance->c1_targetA_state;
  c1_m_u = c1_m_hoistedGlobal;
  c1_n_y = NULL;
  sf_mex_assign(&c1_n_y, sf_mex_create("y", &c1_m_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 12, c1_n_y);
  c1_n_hoistedGlobal = *chartInstance->c1_targetB_row;
  c1_n_u = c1_n_hoistedGlobal;
  c1_o_y = NULL;
  sf_mex_assign(&c1_o_y, sf_mex_create("y", &c1_n_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 13, c1_o_y);
  c1_o_hoistedGlobal = *chartInstance->c1_targetB_state;
  c1_o_u = c1_o_hoistedGlobal;
  c1_p_y = NULL;
  sf_mex_assign(&c1_p_y, sf_mex_create("y", &c1_o_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 14, c1_p_y);
  c1_p_hoistedGlobal = *chartInstance->c1_tone;
  c1_p_u = c1_p_hoistedGlobal;
  c1_q_y = NULL;
  sf_mex_assign(&c1_q_y, sf_mex_create("y", &c1_p_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 15, c1_q_y);
  c1_q_hoistedGlobal = *chartInstance->c1_dist;
  c1_q_u = c1_q_hoistedGlobal;
  c1_r_y = NULL;
  sf_mex_assign(&c1_r_y, sf_mex_create("y", &c1_q_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 16, c1_r_y);
  c1_r_hoistedGlobal = *chartInstance->c1_reward_type;
  c1_r_u = c1_r_hoistedGlobal;
  c1_s_y = NULL;
  sf_mex_assign(&c1_s_y, sf_mex_create("y", &c1_r_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 17, c1_s_y);
  c1_s_hoistedGlobal = *chartInstance->c1_tick;
  c1_s_u = c1_s_hoistedGlobal;
  c1_t_y = NULL;
  sf_mex_assign(&c1_t_y, sf_mex_create("y", &c1_s_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 18, c1_t_y);
  c1_t_hoistedGlobal = *chartInstance->c1_tickCount;
  c1_t_u = c1_t_hoistedGlobal;
  c1_u_y = NULL;
  sf_mex_assign(&c1_u_y, sf_mex_create("y", &c1_t_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 19, c1_u_y);
  c1_u_hoistedGlobal = *chartInstance->c1_e_ApplyNewRotation;
  c1_u_u = c1_u_hoistedGlobal;
  c1_v_y = NULL;
  sf_mex_assign(&c1_v_y, sf_mex_create("y", &c1_u_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 20, c1_v_y);
  c1_v_hoistedGlobal = *chartInstance->c1_e_Trial_End;
  c1_v_u = c1_v_hoistedGlobal;
  c1_w_y = NULL;
  sf_mex_assign(&c1_w_y, sf_mex_create("y", &c1_v_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 21, c1_w_y);
  c1_w_hoistedGlobal = *chartInstance->c1_e_ApplyNewRotationEventCounter;
  c1_w_u = c1_w_hoistedGlobal;
  c1_x_y = NULL;
  sf_mex_assign(&c1_x_y, sf_mex_create("y", &c1_w_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 22, c1_x_y);
  c1_x_hoistedGlobal = *chartInstance->c1_e_Trial_EndEventCounter;
  c1_x_u = c1_x_hoistedGlobal;
  c1_y_y = NULL;
  sf_mex_assign(&c1_y_y, sf_mex_create("y", &c1_x_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 23, c1_y_y);
  c1_y_hoistedGlobal = *chartInstance->c1_is_active_c1_vmr_rwd_fix_leftarm;
  c1_y_u = c1_y_hoistedGlobal;
  c1_ab_y = NULL;
  sf_mex_assign(&c1_ab_y, sf_mex_create("y", &c1_y_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 24, c1_ab_y);
  c1_ab_hoistedGlobal = *chartInstance->c1_is_c1_vmr_rwd_fix_leftarm;
  c1_ab_u = c1_ab_hoistedGlobal;
  c1_bb_y = NULL;
  sf_mex_assign(&c1_bb_y, sf_mex_create("y", &c1_ab_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 25, c1_bb_y);
  c1_bb_hoistedGlobal = *chartInstance->c1_is_Main_Trial;
  c1_bb_u = c1_bb_hoistedGlobal;
  c1_cb_y = NULL;
  sf_mex_assign(&c1_cb_y, sf_mex_create("y", &c1_bb_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 26, c1_cb_y);
  c1_cb_hoistedGlobal = *chartInstance->c1_temporalCounter_i1;
  c1_cb_u = c1_cb_hoistedGlobal;
  c1_db_y = NULL;
  sf_mex_assign(&c1_db_y, sf_mex_create("y", &c1_cb_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 27, c1_db_y);
  sf_mex_assign(&c1_st, c1_y, false);
  return c1_st;
}

static void set_sim_state_c1_vmr_rwd_fix_leftarm
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance, const mxArray *c1_st)
{
  const mxArray *c1_u;
  c1_u = sf_mex_dup(c1_st);
  *chartInstance->c1_do_clamp = c1_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("do_clamp", c1_u, 0)), "do_clamp");
  *chartInstance->c1_event_code = c1_j_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("event_code", c1_u, 1)), "event_code");
  *chartInstance->c1_fdbk_text = c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("fdbk_text", c1_u, 2)), "fdbk_text");
  *chartInstance->c1_handvis_state = c1_j_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("handvis_state", c1_u, 3)), "handvis_state");
  *chartInstance->c1_instruct_num = c1_j_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("instruct_num", c1_u, 4)), "instruct_num");
  *chartInstance->c1_logging_enable = c1_h_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("logging_enable", c1_u, 5)), "logging_enable");
  *chartInstance->c1_reward = c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("reward", c1_u, 6)), "reward");
  *chartInstance->c1_reward_state = c1_j_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("reward_state", c1_u, 7)), "reward_state");
  *chartInstance->c1_robot_enable_controller = c1_h_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("robot_enable_controller", c1_u, 8)),
     "robot_enable_controller");
  *chartInstance->c1_rotation_on = c1_j_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("rotation_on", c1_u, 9)), "rotation_on");
  *chartInstance->c1_score = c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("score", c1_u, 10)), "score");
  *chartInstance->c1_targetA_row = c1_j_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("targetA_row", c1_u, 11)), "targetA_row");
  *chartInstance->c1_targetA_state = c1_j_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("targetA_state", c1_u, 12)), "targetA_state");
  *chartInstance->c1_targetB_row = c1_j_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("targetB_row", c1_u, 13)), "targetB_row");
  *chartInstance->c1_targetB_state = c1_j_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("targetB_state", c1_u, 14)), "targetB_state");
  *chartInstance->c1_tone = c1_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("tone", c1_u, 15)), "tone");
  *chartInstance->c1_dist = c1_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("dist", c1_u, 16)), "dist");
  *chartInstance->c1_reward_type = c1_j_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("reward_type", c1_u, 17)), "reward_type");
  *chartInstance->c1_tick = c1_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("tick", c1_u, 18)), "tick");
  *chartInstance->c1_tickCount = c1_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("tickCount", c1_u, 19)), "tickCount");
  *chartInstance->c1_e_ApplyNewRotation = c1_h_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("e_ApplyNewRotation", c1_u, 20)),
    "e_ApplyNewRotation");
  *chartInstance->c1_e_Trial_End = c1_h_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("e_Trial_End", c1_u, 21)), "e_Trial_End");
  *chartInstance->c1_e_ApplyNewRotationEventCounter = c1_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("e_ApplyNewRotationEventCounter",
       c1_u, 22)), "e_ApplyNewRotationEventCounter");
  *chartInstance->c1_e_Trial_EndEventCounter = c1_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("e_Trial_EndEventCounter", c1_u, 23)),
    "e_Trial_EndEventCounter");
  *chartInstance->c1_is_active_c1_vmr_rwd_fix_leftarm = c1_f_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_c1_vmr_rwd_fix_leftarm",
       c1_u, 24)), "is_active_c1_vmr_rwd_fix_leftarm");
  *chartInstance->c1_is_c1_vmr_rwd_fix_leftarm = c1_f_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_c1_vmr_rwd_fix_leftarm", c1_u,
       25)), "is_c1_vmr_rwd_fix_leftarm");
  *chartInstance->c1_is_Main_Trial = c1_f_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_Main_Trial", c1_u, 26)), "is_Main_Trial");
  *chartInstance->c1_temporalCounter_i1 = c1_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("temporalCounter_i1", c1_u, 27)),
    "temporalCounter_i1");
  sf_mex_assign(&chartInstance->c1_setSimStateSideEffectsInfo,
                c1_l_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "setSimStateSideEffectsInfo", c1_u, 28)), "setSimStateSideEffectsInfo"),
                true);
  sf_mex_destroy(&c1_u);
  chartInstance->c1_doSetSimStateSideEffects = 1U;
  c1_update_debugger_state_c1_vmr_rwd_fix_leftarm(chartInstance);
  sf_mex_destroy(&c1_st);
}

static void c1_set_sim_state_side_effects_c1_vmr_rwd_fix_leftarm
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  if (chartInstance->c1_doSetSimStateSideEffects != 0) {
    if (*chartInstance->c1_is_c1_vmr_rwd_fix_leftarm == c1_IN_EndInstructPause)
    {
      if (sf_mex_sub(chartInstance->c1_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 2) == 0.0) {
        *chartInstance->c1_temporalCounter_i1 = 0U;
      }
    }

    if (*chartInstance->c1_is_c1_vmr_rwd_fix_leftarm == c1_IN_Ending) {
      if (sf_mex_sub(chartInstance->c1_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 3) == 0.0) {
        *chartInstance->c1_temporalCounter_i1 = 0U;
      }
    }

    if (*chartInstance->c1_is_c1_vmr_rwd_fix_leftarm == c1_IN_Initialize) {
      if (sf_mex_sub(chartInstance->c1_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 5) == 0.0) {
        *chartInstance->c1_temporalCounter_i1 = 0U;
      }
    }

    if (*chartInstance->c1_is_c1_vmr_rwd_fix_leftarm == c1_IN_Inter_Trial_Hold)
    {
      if (sf_mex_sub(chartInstance->c1_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 7) == 0.0) {
        *chartInstance->c1_temporalCounter_i1 = 0U;
      }
    }

    if (*chartInstance->c1_is_c1_vmr_rwd_fix_leftarm == c1_IN_Inter_Trial_State)
    {
      if (sf_mex_sub(chartInstance->c1_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 8) == 0.0) {
        *chartInstance->c1_temporalCounter_i1 = 0U;
      }
    }

    if (*chartInstance->c1_is_Main_Trial == c1_IN_StayAtFirstTarget) {
      if (sf_mex_sub(chartInstance->c1_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 18) == 0.0) {
        *chartInstance->c1_temporalCounter_i1 = 0U;
      }
    }

    if (*chartInstance->c1_is_c1_vmr_rwd_fix_leftarm == c1_IN_MoveHandAway) {
      if (sf_mex_sub(chartInstance->c1_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 21) == 0.0) {
        *chartInstance->c1_temporalCounter_i1 = 0U;
      }
    }

    if (*chartInstance->c1_is_c1_vmr_rwd_fix_leftarm == c1_IN_ReturnToStart) {
      if (sf_mex_sub(chartInstance->c1_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 22) == 0.0) {
        *chartInstance->c1_temporalCounter_i1 = 0U;
      }
    }

    if (*chartInstance->c1_is_c1_vmr_rwd_fix_leftarm == c1_IN_ReturnToStart1) {
      if (sf_mex_sub(chartInstance->c1_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 23) == 0.0) {
        *chartInstance->c1_temporalCounter_i1 = 0U;
      }
    }

    if (*chartInstance->c1_is_c1_vmr_rwd_fix_leftarm == c1_IN_ShowScoreState) {
      if (sf_mex_sub(chartInstance->c1_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 25) == 0.0) {
        *chartInstance->c1_temporalCounter_i1 = 0U;
      }
    }

    chartInstance->c1_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c1_vmr_rwd_fix_leftarm
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c1_setSimStateSideEffectsInfo);
}

static void sf_gateway_c1_vmr_rwd_fix_leftarm
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  int32_T c1_i0;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_inputEventFiredFlag;
  c1_set_sim_state_side_effects_c1_vmr_rwd_fix_leftarm(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 0U, *chartInstance->c1_sfEvent);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_soundON, 57U, 1U, 0U,
                        *chartInstance->c1_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c1_robot_enable_controller, 73U,
                        1U, 0U, *chartInstance->c1_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(chartInstance->c1_E_SHOW_INSTRUCT, 74U, 1U, 0U,
                        *chartInstance->c1_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_do_clamp, 72U, 1U, 0U,
                        *chartInstance->c1_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_handvis_state, 71U, 1U, 0U,
                        *chartInstance->c1_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_tick, 50U, 1U, 0U,
                        *chartInstance->c1_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_dist, 48U, 1U, 0U,
                        *chartInstance->c1_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_rotation_on, 70U, 1U, 0U,
                        *chartInstance->c1_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_reward_type, 49U, 1U, 0U,
                        *chartInstance->c1_sfEvent, false);
  for (c1_i0 = 0; c1_i0 < 1024; c1_i0++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c1_TargetDistance)[c1_i0], 56U, 1U,
                          0U, *chartInstance->c1_sfEvent, false);
  }

  for (c1_i1 = 0; c1_i1 < 32; c1_i1++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c1_DistFromTarget)[c1_i1], 55U, 1U,
                          0U, *chartInstance->c1_sfEvent, false);
  }

  for (c1_i2 = 0; c1_i2 < 32; c1_i2++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c1_HandInTarget)[c1_i2], 54U, 1U, 0U,
                          *chartInstance->c1_sfEvent, false);
  }

  for (c1_i3 = 0; c1_i3 < 50; c1_i3++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c1_TaskwideParams)[c1_i3], 53U, 1U,
                          0U, *chartInstance->c1_sfEvent, false);
  }

  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_tone, 69U, 1U, 0U,
                        *chartInstance->c1_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_instruct_num, 68U, 1U, 0U,
                        *chartInstance->c1_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c1_fdbk_text, 67U, 1U, 0U,
                        *chartInstance->c1_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c1_reward, 66U, 1U, 0U,
                        *chartInstance->c1_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c1_score, 65U, 1U, 0U,
                        *chartInstance->c1_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_reward_state, 64U, 1U, 0U,
                        *chartInstance->c1_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_tickCount, 51U, 1U, 0U,
                        *chartInstance->c1_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_targetB_state, 63U, 1U, 0U,
                        *chartInstance->c1_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_targetB_row, 62U, 1U, 0U,
                        *chartInstance->c1_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_targetA_state, 61U, 1U, 0U,
                        *chartInstance->c1_sfEvent, false);
  _SFD_DATA_RANGE_CHECK_MIN_MAX(*chartInstance->c1_targetA_row, 60U, 1U, 0U,
    *chartInstance->c1_sfEvent, false, 1.0, 32.0);
  for (c1_i4 = 0; c1_i4 < 50; c1_i4++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c1_Trial_Protocol)[c1_i4], 52U, 1U,
                          0U, *chartInstance->c1_sfEvent, false);
  }

  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_event_code, 59U, 1U, 0U,
                        *chartInstance->c1_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c1_logging_enable, 58U, 1U, 0U, *
                        chartInstance->c1_sfEvent, false);
  c1_inputEventFiredFlag = 0;
  if (*chartInstance->c1_e_clk == 1) {
    c1_inputEventFiredFlag = 1;
    if (*chartInstance->c1_temporalCounter_i1 < MAX_uint32_T) {
      (*chartInstance->c1_temporalCounter_i1)++;
    }

    *chartInstance->c1_sfEvent = c1_event_e_clk;
    _SFD_CE_CALL(EVENT_BEFORE_BROADCAST_TAG, c1_event_e_clk,
                 *chartInstance->c1_sfEvent);
    c1_chartstep_c1_vmr_rwd_fix_leftarm(chartInstance);
    _SFD_CE_CALL(EVENT_AFTER_BROADCAST_TAG, c1_event_e_clk,
                 *chartInstance->c1_sfEvent);
  }

  if (*chartInstance->c1_e_ExitTrialNow != 0) {
    c1_inputEventFiredFlag = 1;
    *chartInstance->c1_sfEvent = c1_event_e_ExitTrialNow;
    _SFD_CE_CALL(EVENT_BEFORE_BROADCAST_TAG, c1_event_e_ExitTrialNow,
                 *chartInstance->c1_sfEvent);
    c1_chartstep_c1_vmr_rwd_fix_leftarm(chartInstance);
    _SFD_CE_CALL(EVENT_AFTER_BROADCAST_TAG, c1_event_e_ExitTrialNow,
                 *chartInstance->c1_sfEvent);
  }

  if (*chartInstance->c1_e_cntl_btn != 0) {
    c1_inputEventFiredFlag = 1;
    *chartInstance->c1_sfEvent = c1_event_e_cntl_btn;
    _SFD_CE_CALL(EVENT_BEFORE_BROADCAST_TAG, c1_event_e_cntl_btn,
                 *chartInstance->c1_sfEvent);
    c1_chartstep_c1_vmr_rwd_fix_leftarm(chartInstance);
    _SFD_CE_CALL(EVENT_AFTER_BROADCAST_TAG, c1_event_e_cntl_btn,
                 *chartInstance->c1_sfEvent);
  }

  if (c1_inputEventFiredFlag != 0) {
    if (*chartInstance->c1_e_ApplyNewRotationEventCounter > 0U) {
      *chartInstance->c1_e_ApplyNewRotation =
        !*chartInstance->c1_e_ApplyNewRotation;
      (*chartInstance->c1_e_ApplyNewRotationEventCounter)--;
    }
  }

  if (c1_inputEventFiredFlag != 0) {
    if (*chartInstance->c1_e_Trial_EndEventCounter > 0U) {
      *chartInstance->c1_e_Trial_End = !*chartInstance->c1_e_Trial_End;
      (*chartInstance->c1_e_Trial_EndEventCounter)--;
    }
  }

  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_vmr_rwd_fix_leftarmMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c1_vmr_rwd_fix_leftarm
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_chartstep_c1_vmr_rwd_fix_leftarm
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  boolean_T c1_temp;
  boolean_T c1_out;
  real_T c1_d1;
  boolean_T c1_b_out;
  real_T c1_d2;
  boolean_T c1_c_out;
  real_T c1_d3;
  boolean_T c1_d_out;
  boolean_T c1_b_temp;
  uint32_T c1_u0;
  boolean_T c1_e_out;
  real_T c1_d4;
  boolean_T c1_f_out;
  real_T c1_d5;
  boolean_T c1_g_out;
  boolean_T c1_c_temp;
  uint32_T c1_u1;
  boolean_T c1_h_out;
  boolean_T c1_d_temp;
  boolean_T c1_i_out;
  boolean_T c1_e_temp;
  uint32_T c1_u2;
  boolean_T c1_j_out;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 0U, *chartInstance->c1_sfEvent);
  if (*chartInstance->c1_is_active_c1_vmr_rwd_fix_leftarm == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 0U, *chartInstance->c1_sfEvent);
    *chartInstance->c1_is_active_c1_vmr_rwd_fix_leftarm = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c1_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, *chartInstance->c1_sfEvent);
    *chartInstance->c1_is_c1_vmr_rwd_fix_leftarm = c1_IN_Initialize;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c1_sfEvent);
    *chartInstance->c1_temporalCounter_i1 = 0U;
    *chartInstance->c1_targetA_state = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_targetA_state, 61U, 4U, 3U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_targetB_state = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_targetB_state, 63U, 4U, 3U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_reward_state = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_reward_state, 64U, 4U, 3U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_score = 0;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c1_score, 65U, 4U, 3U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_rotation_on = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_rotation_on, 70U, 4U, 3U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_handvis_state = 1.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_handvis_state, 71U, 4U, 3U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_reward_type = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_reward_type, 49U, 4U, 3U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_instruct_num = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_instruct_num, 68U, 4U, 3U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_fdbk_text = 0;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c1_fdbk_text, 67U, 4U, 3U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_robot_enable_controller = false;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c1_robot_enable_controller,
                          73U, 4U, 3U, *chartInstance->c1_sfEvent, false);
  } else {
    switch (*chartInstance->c1_is_c1_vmr_rwd_fix_leftarm) {
     case c1_IN_EndInstructPause:
      CV_CHART_EVAL(0, 0, 1);
      c1_EndInstructPause(chartInstance);
      break;

     case c1_IN_Ending:
      CV_CHART_EVAL(0, 0, 2);
      c1_Ending(chartInstance);
      break;

     case c1_IN_InitStartTarget:
      CV_CHART_EVAL(0, 0, 3);
      c1_InitStartTarget(chartInstance);
      break;

     case c1_IN_Initialize:
      CV_CHART_EVAL(0, 0, 4);
      c1_Initialize(chartInstance);
      break;

     case c1_IN_InstructWaitState:
      CV_CHART_EVAL(0, 0, 5);
      c1_InstructWaitState(chartInstance);
      break;

     case c1_IN_Inter_Trial_Hold:
      CV_CHART_EVAL(0, 0, 6);
      c1_Inter_Trial_Hold(chartInstance);
      break;

     case c1_IN_Inter_Trial_State:
      CV_CHART_EVAL(0, 0, 7);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 18U,
                   *chartInstance->c1_sfEvent);
      c1_temp = (_SFD_CCP_CALL(18U, 0, *chartInstance->c1_sfEvent ==
                  c1_event_e_clk != 0U, *chartInstance->c1_sfEvent) != 0);
      if (c1_temp) {
        c1_temp = (_SFD_CCP_CALL(18U, 1, *chartInstance->c1_temporalCounter_i1 >=
                    1U != 0U, *chartInstance->c1_sfEvent) != 0);
      }

      c1_out = (CV_TRANSITION_EVAL(18U, (int32_T)c1_temp) != 0);
      guard2 = false;
      if (c1_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 18U, *chartInstance->c1_sfEvent);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 17U,
                     *chartInstance->c1_sfEvent);
        c1_d1 = (*chartInstance->c1_Trial_Protocol)[11];
        c1_b_out = (CV_TRANSITION_EVAL(17U, (int32_T)_SFD_CCP_CALL(17U, 0,
          CV_RELATIONAL_EVAL(5U, 17U, 0, c1_d1, 0.0, -1, 0U, c1_d1 == 0.0) != 0U,
          *chartInstance->c1_sfEvent)) != 0);
        if (c1_b_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 17U, *chartInstance->c1_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c1_sfEvent);
          *chartInstance->c1_is_c1_vmr_rwd_fix_leftarm = c1_IN_ReturnToStart1;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 21U, *chartInstance->c1_sfEvent);
          *chartInstance->c1_temporalCounter_i1 = 0U;
          *chartInstance->c1_targetA_state = 1.0;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c1_targetA_state, 61U, 4U, 21U, *
                                chartInstance->c1_sfEvent, false);
          *chartInstance->c1_handvis_state = 1.0;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c1_handvis_state, 71U, 4U, 21U, *
                                chartInstance->c1_sfEvent, false);
          *chartInstance->c1_reward_state = 0.0;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c1_reward_state, 64U, 4U, 21U,
                                *chartInstance->c1_sfEvent, false);
          *chartInstance->c1_instruct_num = 0.0;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c1_instruct_num, 68U, 4U, 21U,
                                *chartInstance->c1_sfEvent, false);
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 19U,
                       *chartInstance->c1_sfEvent);
          c1_d2 = (*chartInstance->c1_Trial_Protocol)[11];
          c1_c_out = (CV_TRANSITION_EVAL(19U, (int32_T)_SFD_CCP_CALL(19U, 0,
            CV_RELATIONAL_EVAL(5U, 19U, 0, c1_d2, -1.0, -1, 0U, c1_d2 == -1.0)
            != 0U, *chartInstance->c1_sfEvent)) != 0);
          if (c1_c_out) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 19U, *chartInstance->c1_sfEvent);
            _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c1_sfEvent);
            *chartInstance->c1_is_c1_vmr_rwd_fix_leftarm = c1_IN_ShowScoreState;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 23U, *chartInstance->c1_sfEvent);
            *chartInstance->c1_temporalCounter_i1 = 0U;
            *chartInstance->c1_event_code = m_m_const_E_SHOW_SCORE;
            _SFD_DATA_RANGE_CHECK(*chartInstance->c1_event_code, 59U, 4U, 23U,
                                  *chartInstance->c1_sfEvent, false);
            *chartInstance->c1_targetA_state = 0.0;
            _SFD_DATA_RANGE_CHECK(*chartInstance->c1_targetA_state, 61U, 4U, 23U,
                                  *chartInstance->c1_sfEvent, false);
            *chartInstance->c1_targetB_state = 0.0;
            _SFD_DATA_RANGE_CHECK(*chartInstance->c1_targetB_state, 63U, 4U, 23U,
                                  *chartInstance->c1_sfEvent, false);
            *chartInstance->c1_handvis_state = 1.0;
            _SFD_DATA_RANGE_CHECK(*chartInstance->c1_handvis_state, 71U, 4U, 23U,
                                  *chartInstance->c1_sfEvent, false);
            *chartInstance->c1_reward_state = 2.0;
            _SFD_DATA_RANGE_CHECK(*chartInstance->c1_reward_state, 64U, 4U, 23U,
                                  *chartInstance->c1_sfEvent, false);
            *chartInstance->c1_tickCount = (*chartInstance->c1_TaskwideParams)[7];
            _SFD_DATA_RANGE_CHECK(*chartInstance->c1_tickCount, 51U, 4U, 23U,
                                  *chartInstance->c1_sfEvent, false);
          } else {
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 25U,
                         *chartInstance->c1_sfEvent);
            c1_d3 = (*chartInstance->c1_Trial_Protocol)[11];
            c1_d_out = (CV_TRANSITION_EVAL(25U, (int32_T)_SFD_CCP_CALL(25U, 0,
              CV_RELATIONAL_EVAL(5U, 25U, 0, c1_d3, 0.0, -1, 4U, c1_d3 > 0.0) !=
              0U, *chartInstance->c1_sfEvent)) != 0);
            if (c1_d_out) {
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 25U,
                           *chartInstance->c1_sfEvent);
              _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c1_sfEvent);
              *chartInstance->c1_is_c1_vmr_rwd_fix_leftarm =
                c1_IN_ShowInstructState;
              _SFD_CS_CALL(STATE_ACTIVE_TAG, 22U, *chartInstance->c1_sfEvent);
              c1_enter_atomic_ShowInstructState(chartInstance);
            } else {
              guard2 = true;
            }
          }
        }
      } else {
        guard2 = true;
      }

      if (guard2 == true) {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 6U,
                     *chartInstance->c1_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, *chartInstance->c1_sfEvent);
      break;

     case c1_IN_Main_Trial:
      CV_CHART_EVAL(0, 0, 8);
      c1_Main_Trial(chartInstance);
      break;

     case c1_IN_MoveHandAway:
      CV_CHART_EVAL(0, 0, 9);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 33U,
                   *chartInstance->c1_sfEvent);
      c1_b_temp = (_SFD_CCP_CALL(33U, 0, *chartInstance->c1_sfEvent ==
        c1_event_e_clk != 0U, *chartInstance->c1_sfEvent) != 0);
      if (c1_b_temp) {
        c1_u0 = _SFD_TRANS_TEMPORAL_THRESHOLD((uint32_T)
          *chartInstance->c1_tickCount, 32U, 33U);
        c1_b_temp = (_SFD_CCP_CALL(33U, 1, *chartInstance->c1_temporalCounter_i1
          >= c1_u0 != 0U, *chartInstance->c1_sfEvent) != 0);
      }

      c1_e_out = (CV_TRANSITION_EVAL(33U, (int32_T)c1_b_temp) != 0);
      guard1 = false;
      if (c1_e_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 33U, *chartInstance->c1_sfEvent);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U,
                     *chartInstance->c1_sfEvent);
        c1_d4 = (*chartInstance->c1_Trial_Protocol)[11];
        c1_f_out = (CV_TRANSITION_EVAL(10U, (int32_T)_SFD_CCP_CALL(10U, 0,
          CV_RELATIONAL_EVAL(5U, 10U, 0, c1_d4, 0.0, -1, 3U, c1_d4 <= 0.0) != 0U,
          *chartInstance->c1_sfEvent)) != 0);
        if (c1_f_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, *chartInstance->c1_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 19U, *chartInstance->c1_sfEvent);
          *chartInstance->c1_is_c1_vmr_rwd_fix_leftarm = c1_IN_Main_Trial;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c1_sfEvent);
          *chartInstance->c1_is_Main_Trial = c1_IN_StartTargetOn;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 15U, *chartInstance->c1_sfEvent);
          c1_enter_atomic_StartTargetOn(chartInstance);
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 28U,
                       *chartInstance->c1_sfEvent);
          c1_d5 = (*chartInstance->c1_Trial_Protocol)[11];
          c1_g_out = (CV_TRANSITION_EVAL(28U, (int32_T)_SFD_CCP_CALL(28U, 0,
            CV_RELATIONAL_EVAL(5U, 28U, 0, c1_d5, 0.0, -1, 4U, c1_d5 > 0.0) !=
            0U, *chartInstance->c1_sfEvent)) != 0);
          if (c1_g_out) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 28U, *chartInstance->c1_sfEvent);
            _SFD_CS_CALL(STATE_INACTIVE_TAG, 19U, *chartInstance->c1_sfEvent);
            *chartInstance->c1_is_c1_vmr_rwd_fix_leftarm =
              c1_IN_ShowInstructState;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 22U, *chartInstance->c1_sfEvent);
            c1_enter_atomic_ShowInstructState(chartInstance);
          } else {
            guard1 = true;
          }
        }
      } else {
        guard1 = true;
      }

      if (guard1 == true) {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 19U,
                     *chartInstance->c1_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 19U, *chartInstance->c1_sfEvent);
      break;

     case c1_IN_ReturnToStart:
      CV_CHART_EVAL(0, 0, 10);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 29U,
                   *chartInstance->c1_sfEvent);
      c1_c_temp = (_SFD_CCP_CALL(29U, 0, *chartInstance->c1_sfEvent ==
        c1_event_e_clk != 0U, *chartInstance->c1_sfEvent) != 0);
      if (c1_c_temp) {
        c1_u1 = _SFD_TRANS_TEMPORAL_THRESHOLD((uint32_T)
          *chartInstance->c1_tickCount, 32U, 29U);
        c1_c_temp = (_SFD_CCP_CALL(29U, 1, *chartInstance->c1_temporalCounter_i1
          >= c1_u1 != 0U, *chartInstance->c1_sfEvent) != 0);
      }

      c1_h_out = (CV_TRANSITION_EVAL(29U, (int32_T)c1_c_temp) != 0);
      if (c1_h_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 29U, *chartInstance->c1_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 20U, *chartInstance->c1_sfEvent);
        *chartInstance->c1_is_c1_vmr_rwd_fix_leftarm = c1_IN_Inter_Trial_State;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c1_sfEvent);
        *chartInstance->c1_temporalCounter_i1 = 0U;
        c1_enter_atomic_Inter_Trial_State(chartInstance);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 20U,
                     *chartInstance->c1_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 20U, *chartInstance->c1_sfEvent);
      break;

     case c1_IN_ReturnToStart1:
      CV_CHART_EVAL(0, 0, 11);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                   *chartInstance->c1_sfEvent);
      c1_d_temp = (_SFD_CCP_CALL(7U, 0, *chartInstance->c1_sfEvent ==
        c1_event_e_clk != 0U, *chartInstance->c1_sfEvent) != 0);
      if (c1_d_temp) {
        c1_d_temp = (_SFD_CCP_CALL(7U, 1, *chartInstance->c1_temporalCounter_i1 >=
          1U != 0U, *chartInstance->c1_sfEvent) != 0);
      }

      c1_i_out = (CV_TRANSITION_EVAL(7U, (int32_T)c1_d_temp) != 0);
      if (c1_i_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, *chartInstance->c1_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 21U, *chartInstance->c1_sfEvent);
        *chartInstance->c1_is_c1_vmr_rwd_fix_leftarm = c1_IN_Main_Trial;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c1_sfEvent);
        *chartInstance->c1_is_Main_Trial = c1_IN_StartTargetOn;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 15U, *chartInstance->c1_sfEvent);
        c1_enter_atomic_StartTargetOn(chartInstance);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 21U,
                     *chartInstance->c1_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 21U, *chartInstance->c1_sfEvent);
      break;

     case c1_IN_ShowInstructState:
      CV_CHART_EVAL(0, 0, 12);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 26U, *chartInstance->c1_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 22U, *chartInstance->c1_sfEvent);
      *chartInstance->c1_is_c1_vmr_rwd_fix_leftarm = c1_IN_InstructWaitState;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c1_sfEvent);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 22U, *chartInstance->c1_sfEvent);
      break;

     case c1_IN_ShowScoreState:
      CV_CHART_EVAL(0, 0, 13);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 20U,
                   *chartInstance->c1_sfEvent);
      c1_e_temp = (_SFD_CCP_CALL(20U, 0, *chartInstance->c1_sfEvent ==
        c1_event_e_clk != 0U, *chartInstance->c1_sfEvent) != 0);
      if (c1_e_temp) {
        c1_u2 = _SFD_TRANS_TEMPORAL_THRESHOLD((uint32_T)
          *chartInstance->c1_tickCount, 32U, 20U);
        c1_e_temp = (_SFD_CCP_CALL(20U, 1, *chartInstance->c1_temporalCounter_i1
          >= c1_u2 != 0U, *chartInstance->c1_sfEvent) != 0);
      }

      c1_j_out = (CV_TRANSITION_EVAL(20U, (int32_T)c1_e_temp) != 0);
      if (c1_j_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 20U, *chartInstance->c1_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 23U, *chartInstance->c1_sfEvent);
        *chartInstance->c1_is_c1_vmr_rwd_fix_leftarm = c1_IN_Ending;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c1_sfEvent);
        *chartInstance->c1_temporalCounter_i1 = 0U;
        (*chartInstance->c1_e_Trial_EndEventCounter)++;
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 23U,
                     *chartInstance->c1_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 23U, *chartInstance->c1_sfEvent);
      break;

     default:
      CV_CHART_EVAL(0, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c1_is_c1_vmr_rwd_fix_leftarm = c1_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c1_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c1_sfEvent);
}

static void initSimStructsc1_vmr_rwd_fix_leftarm
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_Initialize(SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  boolean_T c1_temp;
  boolean_T c1_out;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 32U, *chartInstance->c1_sfEvent);
  c1_temp = (_SFD_CCP_CALL(32U, 0, *chartInstance->c1_sfEvent == c1_event_e_clk
              != 0U, *chartInstance->c1_sfEvent) != 0);
  if (c1_temp) {
    c1_temp = (_SFD_CCP_CALL(32U, 1, *chartInstance->c1_temporalCounter_i1 >= 1U
                != 0U, *chartInstance->c1_sfEvent) != 0);
  }

  c1_out = (CV_TRANSITION_EVAL(32U, (int32_T)c1_temp) != 0);
  if (c1_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 32U, *chartInstance->c1_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c1_sfEvent);
    *chartInstance->c1_is_c1_vmr_rwd_fix_leftarm = c1_IN_InitStartTarget;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c1_sfEvent);
    *chartInstance->c1_targetA_row = (*chartInstance->c1_Trial_Protocol)[0];
    _SFD_DATA_RANGE_CHECK_MIN_MAX(*chartInstance->c1_targetA_row, 60U, 4U, 2U,
      *chartInstance->c1_sfEvent, false, 1.0, 32.0);
    *chartInstance->c1_targetA_state = 1.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_targetA_state, 61U, 4U, 2U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_handvis_state = 1.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_handvis_state, 71U, 4U, 2U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_rotation_on = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_rotation_on, 70U, 4U, 2U,
                          *chartInstance->c1_sfEvent, false);
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U, *chartInstance->c1_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, *chartInstance->c1_sfEvent);
}

static void c1_InitStartTarget(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance)
{
  real_T c1_d6;
  boolean_T c1_temp;
  real_T c1_d7;
  boolean_T c1_out;
  real_T c1_d8;
  boolean_T c1_b_out;
  real_T c1_d9;
  boolean_T c1_c_out;
  real_T c1_d10;
  boolean_T c1_d_out;
  boolean_T guard1 = false;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 34U, *chartInstance->c1_sfEvent);
  c1_d6 = (*chartInstance->c1_HandInTarget)[_SFD_ARRAY_BOUNDS_CHECK(54U,
    c1__s32_d_(chartInstance, *chartInstance->c1_targetA_row - 1.0), 1, 32, 1, 0)];
  c1_temp = (_SFD_CCP_CALL(34U, 0, CV_RELATIONAL_EVAL(5U, 34U, 0, c1_d6, 1.0, -1,
    0U, c1_d6 == 1.0) != 0U, *chartInstance->c1_sfEvent) != 0);
  if (c1_temp) {
    c1_d7 = (*chartInstance->c1_TaskwideParams)[12];
    c1_temp = (_SFD_CCP_CALL(34U, 1, CV_RELATIONAL_EVAL(5U, 34U, 1, c1_d7, 1.0,
      -1, 0U, c1_d7 == 1.0) != 0U, *chartInstance->c1_sfEvent) != 0);
  }

  c1_out = (CV_TRANSITION_EVAL(34U, (int32_T)c1_temp) != 0);
  if (c1_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 34U, *chartInstance->c1_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c1_sfEvent);
    *chartInstance->c1_is_c1_vmr_rwd_fix_leftarm = c1_IN_MoveHandAway;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 19U, *chartInstance->c1_sfEvent);
    *chartInstance->c1_temporalCounter_i1 = 0U;
    *chartInstance->c1_robot_enable_controller = true;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c1_robot_enable_controller,
                          73U, 4U, 19U, *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_tickCount = (*chartInstance->c1_TaskwideParams)[13];
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_tickCount, 51U, 4U, 19U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_tickCount += (*chartInstance->c1_TaskwideParams)[14];
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_tickCount, 51U, 4U, 19U,
                          *chartInstance->c1_sfEvent, false);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 35U,
                 *chartInstance->c1_sfEvent);
    c1_d8 = (*chartInstance->c1_TaskwideParams)[12];
    c1_b_out = (CV_TRANSITION_EVAL(35U, (int32_T)_SFD_CCP_CALL(35U, 0,
      CV_RELATIONAL_EVAL(5U, 35U, 0, c1_d8, 1.0, -1, 1U, c1_d8 != 1.0) != 0U,
      *chartInstance->c1_sfEvent)) != 0);
    guard1 = false;
    if (c1_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 35U, *chartInstance->c1_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U,
                   *chartInstance->c1_sfEvent);
      c1_d9 = (*chartInstance->c1_Trial_Protocol)[11];
      c1_c_out = (CV_TRANSITION_EVAL(10U, (int32_T)_SFD_CCP_CALL(10U, 0,
        CV_RELATIONAL_EVAL(5U, 10U, 1, c1_d9, 0.0, -1, 3U, c1_d9 <= 0.0) != 0U, *
        chartInstance->c1_sfEvent)) != 0);
      if (c1_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, *chartInstance->c1_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c1_sfEvent);
        *chartInstance->c1_is_c1_vmr_rwd_fix_leftarm = c1_IN_Main_Trial;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c1_sfEvent);
        *chartInstance->c1_is_Main_Trial = c1_IN_StartTargetOn;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 15U, *chartInstance->c1_sfEvent);
        c1_enter_atomic_StartTargetOn(chartInstance);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 28U,
                     *chartInstance->c1_sfEvent);
        c1_d10 = (*chartInstance->c1_Trial_Protocol)[11];
        c1_d_out = (CV_TRANSITION_EVAL(28U, (int32_T)_SFD_CCP_CALL(28U, 0,
          CV_RELATIONAL_EVAL(5U, 28U, 1, c1_d10, 0.0, -1, 4U, c1_d10 > 0.0) !=
          0U, *chartInstance->c1_sfEvent)) != 0);
        if (c1_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 28U, *chartInstance->c1_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c1_sfEvent);
          *chartInstance->c1_is_c1_vmr_rwd_fix_leftarm = c1_IN_ShowInstructState;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 22U, *chartInstance->c1_sfEvent);
          c1_enter_atomic_ShowInstructState(chartInstance);
        } else {
          guard1 = true;
        }
      }
    } else {
      guard1 = true;
    }

    if (guard1 == true) {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   *chartInstance->c1_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c1_sfEvent);
}

static void c1_Main_Trial(SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  boolean_T c1_out;
  boolean_T c1_b_out;
  boolean_T c1_c_out;
  boolean_T c1_d_out;
  boolean_T c1_e_out;
  boolean_T c1_temp;
  boolean_T c1_f_out;
  boolean_T c1_g_out;
  boolean_T c1_h_out;
  boolean_T c1_i_out;
  boolean_T guard1 = false;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U, *chartInstance->c1_sfEvent);
  c1_out = (CV_TRANSITION_EVAL(8U, (int32_T)_SFD_CCP_CALL(8U, 0,
              *chartInstance->c1_sfEvent == c1_event_e_ExitTrialNow != 0U,
              *chartInstance->c1_sfEvent)) != 0);
  guard1 = false;
  if (c1_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, *chartInstance->c1_sfEvent);
    c1_exit_internal_Main_Trial(chartInstance);
    *chartInstance->c1_is_c1_vmr_rwd_fix_leftarm = c1_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c1_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_TRANS_ACTION_TAG, 8U,
                 *chartInstance->c1_sfEvent);
    *chartInstance->c1_tickCount = 1.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_tickCount, 51U, 5U, 8U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_is_c1_vmr_rwd_fix_leftarm = c1_IN_Inter_Trial_State;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c1_sfEvent);
    *chartInstance->c1_temporalCounter_i1 = 0U;
    c1_enter_atomic_Inter_Trial_State(chartInstance);
    guard1 = true;
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 7U, *chartInstance->c1_sfEvent);
    switch (*chartInstance->c1_is_Main_Trial) {
     case c1_IN_DoReward:
      CV_STATE_EVAL(7, 0, 1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                   *chartInstance->c1_sfEvent);
      c1_b_out = (CV_TRANSITION_EVAL(6U, (int32_T)_SFD_CCP_CALL(6U, 0,
        CV_RELATIONAL_EVAL(5U, 6U, 0, *chartInstance->c1_tick,
                           *chartInstance->c1_tickCount, -1, 5U,
                           *chartInstance->c1_tick >=
                           *chartInstance->c1_tickCount) != 0U,
        *chartInstance->c1_sfEvent)) != 0);
      if (c1_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, *chartInstance->c1_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c1_sfEvent);
        *chartInstance->c1_is_Main_Trial = c1_IN_EndOfTrial;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c1_sfEvent);
        *chartInstance->c1_targetB_state = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c1_targetB_state, 63U, 4U, 9U,
                              *chartInstance->c1_sfEvent, false);
        *chartInstance->c1_handvis_state = 2.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c1_handvis_state, 71U, 4U, 9U,
                              *chartInstance->c1_sfEvent, false);
        *chartInstance->c1_do_clamp = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c1_do_clamp, 72U, 4U, 9U,
                              *chartInstance->c1_sfEvent, false);
        *chartInstance->c1_rotation_on = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c1_rotation_on, 70U, 4U, 9U,
                              *chartInstance->c1_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 8U,
                     *chartInstance->c1_sfEvent);
        if (*chartInstance->c1_sfEvent == c1_event_e_clk) {
          CV_STATE_EVAL(8, 0, 2);
          (*chartInstance->c1_tick)++;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c1_tick, 50U, 4U, 8U,
                                *chartInstance->c1_sfEvent, false);
        } else {
          CV_STATE_EVAL(8, 0, 1);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, *chartInstance->c1_sfEvent);
      guard1 = true;
      break;

     case c1_IN_EndOfTrial:
      CV_STATE_EVAL(7, 0, 2);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c1_sfEvent);
      *chartInstance->c1_is_Main_Trial = c1_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c1_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c1_sfEvent);
      *chartInstance->c1_is_c1_vmr_rwd_fix_leftarm = c1_IN_Inter_Trial_Hold;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c1_sfEvent);
      *chartInstance->c1_temporalCounter_i1 = 0U;
      *chartInstance->c1_tickCount = (*chartInstance->c1_Trial_Protocol)[5];
      _SFD_DATA_RANGE_CHECK(*chartInstance->c1_tickCount, 51U, 4U, 5U,
                            *chartInstance->c1_sfEvent, false);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 9U, *chartInstance->c1_sfEvent);
      if (*chartInstance->c1_is_c1_vmr_rwd_fix_leftarm != c1_IN_Main_Trial) {
      } else {
        guard1 = true;
      }
      break;

     case c1_IN_Hit2ndTarget:
      CV_STATE_EVAL(7, 0, 3);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 24U,
                   *chartInstance->c1_sfEvent);
      c1_c_out = (CV_TRANSITION_EVAL(24U, (int32_T)_SFD_CCP_CALL(24U, 0,
        CV_RELATIONAL_EVAL(5U, 24U, 0, *chartInstance->c1_reward_type, 2.0, -1,
                           0U, *chartInstance->c1_reward_type == 2.0) != 0U,
        *chartInstance->c1_sfEvent)) != 0);
      if (c1_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 24U, *chartInstance->c1_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c1_sfEvent);
        *chartInstance->c1_is_Main_Trial = c1_IN_NeutralReward;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 12U, *chartInstance->c1_sfEvent);
        c1_enter_atomic_NeutralReward(chartInstance);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 16U,
                     *chartInstance->c1_sfEvent);
        c1_d_out = (CV_TRANSITION_EVAL(16U, (int32_T)_SFD_CCP_CALL(16U, 0,
          CV_RELATIONAL_EVAL(5U, 16U, 0, *chartInstance->c1_reward_type, 0.0, -1,
                             0U, *chartInstance->c1_reward_type == 0.0) != 0U,
          *chartInstance->c1_sfEvent)) != 0);
        if (c1_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 16U, *chartInstance->c1_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c1_sfEvent);
          *chartInstance->c1_is_Main_Trial = c1_IN_NoReward;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 13U, *chartInstance->c1_sfEvent);
          *chartInstance->c1_handvis_state = 0.0;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c1_handvis_state, 71U, 4U, 13U, *
                                chartInstance->c1_sfEvent, false);
          *chartInstance->c1_fdbk_text = 0;
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c1_fdbk_text, 67U, 4U,
                                13U, *chartInstance->c1_sfEvent, false);
          *chartInstance->c1_rotation_on = 0.0;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c1_rotation_on, 70U, 4U, 13U,
                                *chartInstance->c1_sfEvent, false);
        } else {
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 15U,
                       *chartInstance->c1_sfEvent);
          c1_e_out = (CV_TRANSITION_EVAL(15U, (int32_T)_SFD_CCP_CALL(15U, 0,
            CV_RELATIONAL_EVAL(5U, 15U, 0, *chartInstance->c1_reward_type, 1.0,
                               -1, 0U, *chartInstance->c1_reward_type == 1.0) !=
            0U, *chartInstance->c1_sfEvent)) != 0);
          if (c1_e_out) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 15U, *chartInstance->c1_sfEvent);
            _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c1_sfEvent);
            *chartInstance->c1_is_Main_Trial = c1_IN_DoReward;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c1_sfEvent);
            *chartInstance->c1_event_code = m_m_const_E_REWARD;
            _SFD_DATA_RANGE_CHECK(*chartInstance->c1_event_code, 59U, 4U, 8U,
                                  *chartInstance->c1_sfEvent, false);
            *chartInstance->c1_targetB_state = 2.0;
            _SFD_DATA_RANGE_CHECK(*chartInstance->c1_targetB_state, 63U, 4U, 8U,
                                  *chartInstance->c1_sfEvent, false);
            *chartInstance->c1_reward_state = 1.0;
            _SFD_DATA_RANGE_CHECK(*chartInstance->c1_reward_state, 64U, 4U, 8U, *
                                  chartInstance->c1_sfEvent, false);
            *chartInstance->c1_reward = c1__s32_d_(chartInstance,
              (*chartInstance->c1_TaskwideParams)[1]);
            _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c1_reward, 66U, 4U, 8U,
                                  *chartInstance->c1_sfEvent, false);
            *chartInstance->c1_score = c1__s32_add__(chartInstance,
              *chartInstance->c1_score, *chartInstance->c1_reward);
            _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c1_score, 65U, 4U, 8U,
                                  *chartInstance->c1_sfEvent, false);
            *chartInstance->c1_fdbk_text = 0;
            _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c1_fdbk_text, 67U, 4U,
                                  8U, *chartInstance->c1_sfEvent, false);
            *chartInstance->c1_tone = 1.0;
            _SFD_DATA_RANGE_CHECK(*chartInstance->c1_tone, 69U, 4U, 8U,
                                  *chartInstance->c1_sfEvent, false);
            *chartInstance->c1_handvis_state = 0.0;
            _SFD_DATA_RANGE_CHECK(*chartInstance->c1_handvis_state, 71U, 4U, 8U,
                                  *chartInstance->c1_sfEvent, false);
            *chartInstance->c1_rotation_on = 0.0;
            _SFD_DATA_RANGE_CHECK(*chartInstance->c1_rotation_on, 70U, 4U, 8U,
                                  *chartInstance->c1_sfEvent, false);
          } else {
            _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 10U,
                         *chartInstance->c1_sfEvent);
          }
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 10U, *chartInstance->c1_sfEvent);
      guard1 = true;
      break;

     case c1_IN_Miss2ndTarget:
      CV_STATE_EVAL(7, 0, 4);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 11U,
                   *chartInstance->c1_sfEvent);
      c1_temp = (_SFD_CCP_CALL(11U, 0, CV_RELATIONAL_EVAL(5U, 11U, 0,
        *chartInstance->c1_reward_type, 2.0, -1, 1U,
        *chartInstance->c1_reward_type != 2.0) != 0U, *chartInstance->c1_sfEvent)
                 != 0);
      if (c1_temp) {
        c1_temp = (_SFD_CCP_CALL(11U, 1, CV_RELATIONAL_EVAL(5U, 11U, 1,
          *chartInstance->c1_tick, *chartInstance->c1_tickCount, -1, 5U,
          *chartInstance->c1_tick >= *chartInstance->c1_tickCount) != 0U,
                    *chartInstance->c1_sfEvent) != 0);
      }

      c1_f_out = (CV_TRANSITION_EVAL(11U, (int32_T)c1_temp) != 0);
      if (c1_f_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, *chartInstance->c1_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c1_sfEvent);
        *chartInstance->c1_is_Main_Trial = c1_IN_EndOfTrial;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c1_sfEvent);
        *chartInstance->c1_targetB_state = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c1_targetB_state, 63U, 4U, 9U,
                              *chartInstance->c1_sfEvent, false);
        *chartInstance->c1_handvis_state = 2.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c1_handvis_state, 71U, 4U, 9U,
                              *chartInstance->c1_sfEvent, false);
        *chartInstance->c1_do_clamp = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c1_do_clamp, 72U, 4U, 9U,
                              *chartInstance->c1_sfEvent, false);
        *chartInstance->c1_rotation_on = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c1_rotation_on, 70U, 4U, 9U,
                              *chartInstance->c1_sfEvent, false);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 22U,
                     *chartInstance->c1_sfEvent);
        c1_g_out = (CV_TRANSITION_EVAL(22U, (int32_T)_SFD_CCP_CALL(22U, 0,
          CV_RELATIONAL_EVAL(5U, 22U, 0, *chartInstance->c1_reward_type, 2.0, -1,
                             0U, *chartInstance->c1_reward_type == 2.0) != 0U,
          *chartInstance->c1_sfEvent)) != 0);
        if (c1_g_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 22U, *chartInstance->c1_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c1_sfEvent);
          *chartInstance->c1_is_Main_Trial = c1_IN_NeutralReward;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 12U, *chartInstance->c1_sfEvent);
          c1_enter_atomic_NeutralReward(chartInstance);
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 11U,
                       *chartInstance->c1_sfEvent);
          if (*chartInstance->c1_sfEvent == c1_event_e_clk) {
            CV_STATE_EVAL(11, 0, 2);
            (*chartInstance->c1_tick)++;
            _SFD_DATA_RANGE_CHECK(*chartInstance->c1_tick, 50U, 4U, 11U,
                                  *chartInstance->c1_sfEvent, false);
          } else {
            CV_STATE_EVAL(11, 0, 1);
          }
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 11U, *chartInstance->c1_sfEvent);
      guard1 = true;
      break;

     case c1_IN_NeutralReward:
      CV_STATE_EVAL(7, 0, 5);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 23U,
                   *chartInstance->c1_sfEvent);
      c1_h_out = (CV_TRANSITION_EVAL(23U, (int32_T)_SFD_CCP_CALL(23U, 0,
        CV_RELATIONAL_EVAL(5U, 23U, 0, *chartInstance->c1_tick,
                           *chartInstance->c1_tickCount, -1, 5U,
                           *chartInstance->c1_tick >=
                           *chartInstance->c1_tickCount) != 0U,
        *chartInstance->c1_sfEvent)) != 0);
      if (c1_h_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 23U, *chartInstance->c1_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, *chartInstance->c1_sfEvent);
        *chartInstance->c1_is_Main_Trial = c1_IN_EndOfTrial;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c1_sfEvent);
        *chartInstance->c1_targetB_state = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c1_targetB_state, 63U, 4U, 9U,
                              *chartInstance->c1_sfEvent, false);
        *chartInstance->c1_handvis_state = 2.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c1_handvis_state, 71U, 4U, 9U,
                              *chartInstance->c1_sfEvent, false);
        *chartInstance->c1_do_clamp = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c1_do_clamp, 72U, 4U, 9U,
                              *chartInstance->c1_sfEvent, false);
        *chartInstance->c1_rotation_on = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c1_rotation_on, 70U, 4U, 9U,
                              *chartInstance->c1_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 12U,
                     *chartInstance->c1_sfEvent);
        if (*chartInstance->c1_sfEvent == c1_event_e_clk) {
          CV_STATE_EVAL(12, 0, 2);
          (*chartInstance->c1_tick)++;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c1_tick, 50U, 4U, 12U,
                                *chartInstance->c1_sfEvent, false);
        } else {
          CV_STATE_EVAL(12, 0, 1);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 12U, *chartInstance->c1_sfEvent);
      guard1 = true;
      break;

     case c1_IN_NoReward:
      CV_STATE_EVAL(7, 0, 6);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 14U,
                   *chartInstance->c1_sfEvent);
      c1_i_out = (CV_TRANSITION_EVAL(14U, (int32_T)_SFD_CCP_CALL(14U, 0,
        CV_RELATIONAL_EVAL(5U, 14U, 0, *chartInstance->c1_tick,
                           *chartInstance->c1_tickCount, -1, 5U,
                           *chartInstance->c1_tick >=
                           *chartInstance->c1_tickCount) != 0U,
        *chartInstance->c1_sfEvent)) != 0);
      if (c1_i_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 14U, *chartInstance->c1_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, *chartInstance->c1_sfEvent);
        *chartInstance->c1_is_Main_Trial = c1_IN_EndOfTrial;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c1_sfEvent);
        *chartInstance->c1_targetB_state = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c1_targetB_state, 63U, 4U, 9U,
                              *chartInstance->c1_sfEvent, false);
        *chartInstance->c1_handvis_state = 2.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c1_handvis_state, 71U, 4U, 9U,
                              *chartInstance->c1_sfEvent, false);
        *chartInstance->c1_do_clamp = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c1_do_clamp, 72U, 4U, 9U,
                              *chartInstance->c1_sfEvent, false);
        *chartInstance->c1_rotation_on = 0.0;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c1_rotation_on, 70U, 4U, 9U,
                              *chartInstance->c1_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 13U,
                     *chartInstance->c1_sfEvent);
        if (*chartInstance->c1_sfEvent == c1_event_e_clk) {
          CV_STATE_EVAL(13, 0, 2);
          (*chartInstance->c1_tick)++;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c1_tick, 50U, 4U, 13U,
                                *chartInstance->c1_sfEvent, false);
        } else {
          CV_STATE_EVAL(13, 0, 1);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 13U, *chartInstance->c1_sfEvent);
      guard1 = true;
      break;

     case c1_IN_Show2ndTarget:
      CV_STATE_EVAL(7, 0, 7);
      c1_Show2ndTarget(chartInstance);
      guard1 = true;
      break;

     case c1_IN_StartTargetOn:
      CV_STATE_EVAL(7, 0, 8);
      c1_StartTargetOn(chartInstance);
      guard1 = true;
      break;

     case c1_IN_StayAtFirstTarget:
      CV_STATE_EVAL(7, 0, 9);
      c1_StayAtFirstTarget(chartInstance);
      guard1 = true;
      break;

     case c1_IN_TooSlowState:
      CV_STATE_EVAL(7, 0, 10);
      c1_TooSlowState(chartInstance);
      guard1 = true;
      break;

     case c1_IN_WaitForSound:
      CV_STATE_EVAL(7, 0, 11);
      c1_WaitForSound(chartInstance);
      guard1 = true;
      break;

     default:
      CV_STATE_EVAL(7, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c1_is_Main_Trial = c1_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c1_sfEvent);
      guard1 = true;
      break;
    }
  }

  if (guard1 == true) {
    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, *chartInstance->c1_sfEvent);
  }
}

static void c1_exit_internal_Main_Trial(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance)
{
  switch (*chartInstance->c1_is_Main_Trial) {
   case c1_IN_DoReward:
    CV_STATE_EVAL(7, 1, 1);
    *chartInstance->c1_is_Main_Trial = c1_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c1_sfEvent);
    break;

   case c1_IN_EndOfTrial:
    CV_STATE_EVAL(7, 1, 2);
    *chartInstance->c1_is_Main_Trial = c1_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c1_sfEvent);
    break;

   case c1_IN_Hit2ndTarget:
    CV_STATE_EVAL(7, 1, 3);
    *chartInstance->c1_is_Main_Trial = c1_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c1_sfEvent);
    break;

   case c1_IN_Miss2ndTarget:
    CV_STATE_EVAL(7, 1, 4);
    *chartInstance->c1_is_Main_Trial = c1_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c1_sfEvent);
    break;

   case c1_IN_NeutralReward:
    CV_STATE_EVAL(7, 1, 5);
    *chartInstance->c1_is_Main_Trial = c1_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, *chartInstance->c1_sfEvent);
    break;

   case c1_IN_NoReward:
    CV_STATE_EVAL(7, 1, 6);
    *chartInstance->c1_is_Main_Trial = c1_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, *chartInstance->c1_sfEvent);
    break;

   case c1_IN_Show2ndTarget:
    CV_STATE_EVAL(7, 1, 7);
    *chartInstance->c1_is_Main_Trial = c1_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c1_sfEvent);
    break;

   case c1_IN_StartTargetOn:
    CV_STATE_EVAL(7, 1, 8);
    *chartInstance->c1_is_Main_Trial = c1_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 15U, *chartInstance->c1_sfEvent);
    break;

   case c1_IN_StayAtFirstTarget:
    CV_STATE_EVAL(7, 1, 9);
    *chartInstance->c1_is_Main_Trial = c1_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 16U, *chartInstance->c1_sfEvent);
    break;

   case c1_IN_TooSlowState:
    CV_STATE_EVAL(7, 1, 10);
    *chartInstance->c1_is_Main_Trial = c1_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 17U, *chartInstance->c1_sfEvent);
    break;

   case c1_IN_WaitForSound:
    CV_STATE_EVAL(7, 1, 11);
    *chartInstance->c1_is_Main_Trial = c1_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 18U, *chartInstance->c1_sfEvent);
    break;

   default:
    CV_STATE_EVAL(7, 1, 0);
    *chartInstance->c1_is_Main_Trial = c1_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c1_sfEvent);
    break;
  }
}

static void c1_enter_atomic_StartTargetOn(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance)
{
  *chartInstance->c1_targetA_row = (*chartInstance->c1_Trial_Protocol)[0];
  _SFD_DATA_RANGE_CHECK_MIN_MAX(*chartInstance->c1_targetA_row, 60U, 4U, 15U,
    *chartInstance->c1_sfEvent, false, 1.0, 32.0);
  *chartInstance->c1_targetA_state = 1.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_targetA_state, 61U, 4U, 15U,
                        *chartInstance->c1_sfEvent, false);
  *chartInstance->c1_handvis_state = 1.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_handvis_state, 71U, 4U, 15U,
                        *chartInstance->c1_sfEvent, false);
  *chartInstance->c1_rotation_on = 0.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_rotation_on, 70U, 4U, 15U,
                        *chartInstance->c1_sfEvent, false);
  *chartInstance->c1_logging_enable = true;
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c1_logging_enable, 58U, 4U, 15U,
                        *chartInstance->c1_sfEvent, false);
  *chartInstance->c1_reward_type = (*chartInstance->c1_Trial_Protocol)[10];
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_reward_type, 49U, 4U, 15U,
                        *chartInstance->c1_sfEvent, false);
  *chartInstance->c1_tone = 0.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_tone, 69U, 4U, 15U,
                        *chartInstance->c1_sfEvent, false);
}

static void c1_StartTargetOn(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance)
{
  real_T c1_d11;
  boolean_T c1_out;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U, *chartInstance->c1_sfEvent);
  c1_d11 = (*chartInstance->c1_HandInTarget)[_SFD_ARRAY_BOUNDS_CHECK(54U,
    c1__s32_d_(chartInstance, *chartInstance->c1_targetA_row - 1.0), 1, 32, 1, 0)];
  c1_out = (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2U, 0,
              CV_RELATIONAL_EVAL(5U, 2U, 0, c1_d11, 1.0, -1, 0U, c1_d11 == 1.0)
              != 0U, *chartInstance->c1_sfEvent)) != 0);
  if (c1_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c1_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 15U, *chartInstance->c1_sfEvent);
    *chartInstance->c1_is_Main_Trial = c1_IN_StayAtFirstTarget;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 16U, *chartInstance->c1_sfEvent);
    *chartInstance->c1_temporalCounter_i1 = 0U;
    *chartInstance->c1_event_code = m_m_const_E_STAY_CENTER;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_event_code, 59U, 4U, 16U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_tickCount = (*chartInstance->c1_Trial_Protocol)[3];
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_tickCount, 51U, 4U, 16U,
                          *chartInstance->c1_sfEvent, false);
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 15U,
                 *chartInstance->c1_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 15U, *chartInstance->c1_sfEvent);
}

static void c1_StayAtFirstTarget(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance)
{
  boolean_T c1_temp;
  uint32_T c1_u3;
  boolean_T c1_out;
  real_T c1_d12;
  boolean_T c1_b_out;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U, *chartInstance->c1_sfEvent);
  c1_temp = (_SFD_CCP_CALL(0U, 0, CV_RELATIONAL_EVAL(5U, 0U, 0, (real_T)
    *chartInstance->c1_sfEvent, (real_T)c1_event_e_clk, 0, 0U,
    *chartInstance->c1_sfEvent == c1_event_e_clk) != 0U,
              *chartInstance->c1_sfEvent) != 0);
  if (c1_temp) {
    c1_u3 = _SFD_TRANS_TEMPORAL_THRESHOLD((uint32_T)*chartInstance->c1_tickCount,
      32U, 0U);
    c1_temp = (_SFD_CCP_CALL(0U, 1, *chartInstance->c1_temporalCounter_i1 >=
                c1_u3 != 0U, *chartInstance->c1_sfEvent) != 0);
  }

  c1_out = (CV_TRANSITION_EVAL(0U, (int32_T)c1_temp) != 0);
  if (c1_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, *chartInstance->c1_sfEvent);
    *chartInstance->c1_is_Main_Trial = c1_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 16U, *chartInstance->c1_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_TRANS_ACTION_TAG, 0U,
                 *chartInstance->c1_sfEvent);
    *chartInstance->c1_rotation_on = (*chartInstance->c1_Trial_Protocol)[6];
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_rotation_on, 70U, 5U, 0U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_handvis_state = (*chartInstance->c1_Trial_Protocol)[8];
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_handvis_state, 71U, 5U, 0U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_do_clamp = (*chartInstance->c1_Trial_Protocol)[9];
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_do_clamp, 72U, 5U, 0U,
                          *chartInstance->c1_sfEvent, false);
    sf_mex_printf("%s\\n", "e_ApplyNewRotation");
    (*chartInstance->c1_e_ApplyNewRotationEventCounter)++;
    *chartInstance->c1_is_Main_Trial = c1_IN_WaitForSound;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 18U, *chartInstance->c1_sfEvent);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U,
                 *chartInstance->c1_sfEvent);
    c1_d12 = (*chartInstance->c1_HandInTarget)[_SFD_ARRAY_BOUNDS_CHECK(54U,
      c1__s32_d_(chartInstance, *chartInstance->c1_targetA_row - 1.0), 1, 32, 1,
      0)];
    c1_b_out = (CV_TRANSITION_EVAL(9U, (int32_T)_SFD_CCP_CALL(9U, 0,
      CV_RELATIONAL_EVAL(5U, 9U, 0, c1_d12, 0.0, -1, 0U, c1_d12 == 0.0) != 0U,
      *chartInstance->c1_sfEvent)) != 0);
    if (c1_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, *chartInstance->c1_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 16U, *chartInstance->c1_sfEvent);
      *chartInstance->c1_is_Main_Trial = c1_IN_StartTargetOn;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 15U, *chartInstance->c1_sfEvent);
      c1_enter_atomic_StartTargetOn(chartInstance);
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 16U,
                   *chartInstance->c1_sfEvent);
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 16U, *chartInstance->c1_sfEvent);
}

static void c1_Show2ndTarget(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance)
{
  boolean_T c1_out;
  real_T c1_d13;
  boolean_T c1_b_out;
  real_T c1_d14;
  boolean_T c1_c_out;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U, *chartInstance->c1_sfEvent);
  c1_out = (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5U, 0,
              CV_RELATIONAL_EVAL(5U, 5U, 0, *chartInstance->c1_tick,
    *chartInstance->c1_tickCount, -1, 5U, *chartInstance->c1_tick >=
    *chartInstance->c1_tickCount) != 0U, *chartInstance->c1_sfEvent)) != 0);
  if (c1_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, *chartInstance->c1_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c1_sfEvent);
    *chartInstance->c1_is_Main_Trial = c1_IN_TooSlowState;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 17U, *chartInstance->c1_sfEvent);
    *chartInstance->c1_fdbk_text = -1;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c1_fdbk_text, 67U, 4U, 17U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_targetA_state = 2.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_targetA_state, 61U, 4U, 17U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_rotation_on = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_rotation_on, 70U, 4U, 17U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_handvis_state = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_handvis_state, 71U, 4U, 17U,
                          *chartInstance->c1_sfEvent, false);
  } else {
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 12U,
                 *chartInstance->c1_sfEvent);
    c1_d13 = (*chartInstance->c1_DistFromTarget)[_SFD_ARRAY_BOUNDS_CHECK(55U,
      c1__s32_d_(chartInstance, *chartInstance->c1_targetA_row - 1.0), 1, 32, 1,
      0)];
    c1_b_out = (CV_TRANSITION_EVAL(12U, (int32_T)_SFD_CCP_CALL(12U, 0,
      CV_RELATIONAL_EVAL(5U, 12U, 0, c1_d13, *chartInstance->c1_dist, -1, 5U,
                         c1_d13 >= *chartInstance->c1_dist) != 0U,
      *chartInstance->c1_sfEvent)) != 0);
    if (c1_b_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12U, *chartInstance->c1_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c1_sfEvent);
      *chartInstance->c1_is_Main_Trial = c1_IN_Miss2ndTarget;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, *chartInstance->c1_sfEvent);
      *chartInstance->c1_event_code = m_m_const_E_MISS_TARGET;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c1_event_code, 59U, 4U, 11U,
                            *chartInstance->c1_sfEvent, false);
      *chartInstance->c1_targetB_state = 0.0;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c1_targetB_state, 63U, 4U, 11U,
                            *chartInstance->c1_sfEvent, false);
      *chartInstance->c1_reward_state = 0.0;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c1_reward_state, 64U, 4U, 11U,
                            *chartInstance->c1_sfEvent, false);
      *chartInstance->c1_handvis_state = 0.0;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c1_handvis_state, 71U, 4U, 11U,
                            *chartInstance->c1_sfEvent, false);
      *chartInstance->c1_rotation_on = 0.0;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c1_rotation_on, 70U, 4U, 11U,
                            *chartInstance->c1_sfEvent, false);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   *chartInstance->c1_sfEvent);
      c1_d14 = (*chartInstance->c1_HandInTarget)[_SFD_ARRAY_BOUNDS_CHECK(54U,
        c1__s32_d_(chartInstance, *chartInstance->c1_targetB_row - 1.0), 1, 32,
        1, 0)];
      c1_c_out = (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0,
        CV_RELATIONAL_EVAL(5U, 1U, 0, c1_d14, 1.0, -1, 0U, c1_d14 == 1.0) != 0U,
        *chartInstance->c1_sfEvent)) != 0);
      if (c1_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c1_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 14U, *chartInstance->c1_sfEvent);
        *chartInstance->c1_is_Main_Trial = c1_IN_Hit2ndTarget;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c1_sfEvent);
        *chartInstance->c1_event_code = m_m_const_E_HIT_TARGET;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c1_event_code, 59U, 4U, 10U,
                              *chartInstance->c1_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 14U,
                     *chartInstance->c1_sfEvent);
        if (*chartInstance->c1_sfEvent == c1_event_e_clk) {
          CV_STATE_EVAL(14, 0, 2);
          (*chartInstance->c1_tick)++;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c1_tick, 50U, 4U, 14U,
                                *chartInstance->c1_sfEvent, false);
        } else {
          CV_STATE_EVAL(14, 0, 1);
        }
      }
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 14U, *chartInstance->c1_sfEvent);
}

static void c1_TooSlowState(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance)
{
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 27U, *chartInstance->c1_sfEvent);
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 17U, *chartInstance->c1_sfEvent);
  *chartInstance->c1_is_Main_Trial = c1_IN_EndOfTrial;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c1_sfEvent);
  *chartInstance->c1_targetB_state = 0.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_targetB_state, 63U, 4U, 9U,
                        *chartInstance->c1_sfEvent, false);
  *chartInstance->c1_handvis_state = 2.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_handvis_state, 71U, 4U, 9U,
                        *chartInstance->c1_sfEvent, false);
  *chartInstance->c1_do_clamp = 0.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_do_clamp, 72U, 4U, 9U,
                        *chartInstance->c1_sfEvent, false);
  *chartInstance->c1_rotation_on = 0.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_rotation_on, 70U, 4U, 9U,
                        *chartInstance->c1_sfEvent, false);
  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 17U, *chartInstance->c1_sfEvent);
}

static void c1_enter_atomic_NeutralReward(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance)
{
  *chartInstance->c1_event_code = m_m_const_E_NEUTRAL_FDBK;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_event_code, 59U, 4U, 12U,
                        *chartInstance->c1_sfEvent, false);
  *chartInstance->c1_handvis_state = 0.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_handvis_state, 71U, 4U, 12U,
                        *chartInstance->c1_sfEvent, false);
  *chartInstance->c1_reward_state = 0.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_reward_state, 64U, 4U, 12U,
                        *chartInstance->c1_sfEvent, false);
  *chartInstance->c1_fdbk_text = 0;
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c1_fdbk_text, 67U, 4U, 12U,
                        *chartInstance->c1_sfEvent, false);
  *chartInstance->c1_rotation_on = 0.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_rotation_on, 70U, 4U, 12U,
                        *chartInstance->c1_sfEvent, false);
  *chartInstance->c1_tone = 2.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_tone, 69U, 4U, 12U,
                        *chartInstance->c1_sfEvent, false);
}

static void c1_Ending(SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  boolean_T c1_temp;
  boolean_T c1_out;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 21U, *chartInstance->c1_sfEvent);
  c1_temp = (_SFD_CCP_CALL(21U, 0, *chartInstance->c1_sfEvent == c1_event_e_clk
              != 0U, *chartInstance->c1_sfEvent) != 0);
  if (c1_temp) {
    c1_temp = (_SFD_CCP_CALL(21U, 1, *chartInstance->c1_temporalCounter_i1 >= 1U
                != 0U, *chartInstance->c1_sfEvent) != 0);
  }

  c1_out = (CV_TRANSITION_EVAL(21U, (int32_T)c1_temp) != 0);
  if (c1_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 21U, *chartInstance->c1_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c1_sfEvent);
    *chartInstance->c1_is_c1_vmr_rwd_fix_leftarm = c1_IN_EndInstructPause;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c1_sfEvent);
    *chartInstance->c1_temporalCounter_i1 = 0U;
    *chartInstance->c1_instruct_num = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_instruct_num, 68U, 4U, 0U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_handvis_state = 1.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_handvis_state, 71U, 4U, 0U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_targetA_state = 1.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_targetA_state, 61U, 4U, 0U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_tickCount = 800.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_tickCount, 51U, 4U, 0U,
                          *chartInstance->c1_sfEvent, false);
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U, *chartInstance->c1_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c1_sfEvent);
}

static void c1_EndInstructPause(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance)
{
  boolean_T c1_temp;
  uint32_T c1_u4;
  boolean_T c1_out;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 31U, *chartInstance->c1_sfEvent);
  c1_temp = (_SFD_CCP_CALL(31U, 0, *chartInstance->c1_sfEvent == c1_event_e_clk
              != 0U, *chartInstance->c1_sfEvent) != 0);
  if (c1_temp) {
    c1_u4 = _SFD_TRANS_TEMPORAL_THRESHOLD((uint32_T)*chartInstance->c1_tickCount,
      32U, 31U);
    c1_temp = (_SFD_CCP_CALL(31U, 1, *chartInstance->c1_temporalCounter_i1 >=
                c1_u4 != 0U, *chartInstance->c1_sfEvent) != 0);
  }

  c1_out = (CV_TRANSITION_EVAL(31U, (int32_T)c1_temp) != 0);
  if (c1_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 31U, *chartInstance->c1_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c1_sfEvent);
    *chartInstance->c1_is_c1_vmr_rwd_fix_leftarm = c1_IN_ReturnToStart1;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 21U, *chartInstance->c1_sfEvent);
    *chartInstance->c1_temporalCounter_i1 = 0U;
    *chartInstance->c1_targetA_state = 1.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_targetA_state, 61U, 4U, 21U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_handvis_state = 1.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_handvis_state, 71U, 4U, 21U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_reward_state = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_reward_state, 64U, 4U, 21U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_instruct_num = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_instruct_num, 68U, 4U, 21U,
                          *chartInstance->c1_sfEvent, false);
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U, *chartInstance->c1_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c1_sfEvent);
}

static void c1_InstructWaitState(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance)
{
  boolean_T c1_out;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 30U, *chartInstance->c1_sfEvent);
  c1_out = (CV_TRANSITION_EVAL(30U, (int32_T)_SFD_CCP_CALL(30U, 0,
              *chartInstance->c1_sfEvent == c1_event_e_cntl_btn != 0U,
              *chartInstance->c1_sfEvent)) != 0);
  if (c1_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 30U, *chartInstance->c1_sfEvent);
    *chartInstance->c1_is_c1_vmr_rwd_fix_leftarm = c1_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c1_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_TRANS_ACTION_TAG, 30U,
                 *chartInstance->c1_sfEvent);
    *chartInstance->c1_event_code = 22.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_event_code, 59U, 5U, 30U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_is_c1_vmr_rwd_fix_leftarm = c1_IN_Ending;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c1_sfEvent);
    *chartInstance->c1_temporalCounter_i1 = 0U;
    (*chartInstance->c1_e_Trial_EndEventCounter)++;
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U, *chartInstance->c1_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, *chartInstance->c1_sfEvent);
}

static void c1_enter_atomic_ShowInstructState
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  *chartInstance->c1_event_code = chartInstance->c1_E_SHOW_INSTRUCT;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_event_code, 59U, 4U, 22U,
                        *chartInstance->c1_sfEvent, false);
  *chartInstance->c1_targetA_state = 0.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_targetA_state, 61U, 4U, 22U,
                        *chartInstance->c1_sfEvent, false);
  *chartInstance->c1_targetB_state = 0.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_targetB_state, 63U, 4U, 22U,
                        *chartInstance->c1_sfEvent, false);
  *chartInstance->c1_handvis_state = 0.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_handvis_state, 71U, 4U, 22U,
                        *chartInstance->c1_sfEvent, false);
  *chartInstance->c1_reward_state = 0.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_reward_state, 64U, 4U, 22U,
                        *chartInstance->c1_sfEvent, false);
  *chartInstance->c1_instruct_num = (*chartInstance->c1_Trial_Protocol)[11];
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_instruct_num, 68U, 4U, 22U,
                        *chartInstance->c1_sfEvent, false);
  *chartInstance->c1_tickCount = (*chartInstance->c1_TaskwideParams)[8];
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_tickCount, 51U, 4U, 22U,
                        *chartInstance->c1_sfEvent, false);
}

static void c1_enter_atomic_Inter_Trial_State
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance)
{
  (*chartInstance->c1_e_Trial_EndEventCounter)++;
  *chartInstance->c1_event_code = 0.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_event_code, 59U, 4U, 6U,
                        *chartInstance->c1_sfEvent, false);
  *chartInstance->c1_targetA_state = 1.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_targetA_state, 61U, 4U, 6U,
                        *chartInstance->c1_sfEvent, false);
  *chartInstance->c1_targetB_state = 0.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_targetB_state, 63U, 4U, 6U,
                        *chartInstance->c1_sfEvent, false);
  *chartInstance->c1_rotation_on = 0.0;
  _SFD_DATA_RANGE_CHECK(*chartInstance->c1_rotation_on, 70U, 4U, 6U,
                        *chartInstance->c1_sfEvent, false);
  *chartInstance->c1_fdbk_text = 0;
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c1_fdbk_text, 67U, 4U, 6U,
                        *chartInstance->c1_sfEvent, false);
}

static void c1_Inter_Trial_Hold(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance)
{
  real_T c1_d15;
  real_T c1_d16;
  boolean_T c1_temp;
  uint32_T c1_u5;
  boolean_T c1_out;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 13U, *chartInstance->c1_sfEvent);
  c1_d15 = (*chartInstance->c1_DistFromTarget)[_SFD_ARRAY_BOUNDS_CHECK(55U,
    c1__s32_d_(chartInstance, *chartInstance->c1_targetA_row - 1.0), 1, 32, 1, 0)];
  c1_d16 = (*chartInstance->c1_TaskwideParams)[5];
  c1_temp = (_SFD_CCP_CALL(13U, 0, CV_RELATIONAL_EVAL(5U, 13U, 0, c1_d15, c1_d16,
    -1, 3U, c1_d15 <= c1_d16) != 0U, *chartInstance->c1_sfEvent) != 0);
  if (c1_temp) {
    c1_u5 = _SFD_TRANS_TEMPORAL_THRESHOLD((uint32_T)*chartInstance->c1_tickCount,
      32U, 13U);
    c1_temp = (_SFD_CCP_CALL(13U, 1, *chartInstance->c1_temporalCounter_i1 >=
                c1_u5 != 0U, *chartInstance->c1_sfEvent) != 0);
  }

  c1_out = (CV_TRANSITION_EVAL(13U, (int32_T)c1_temp) != 0);
  if (c1_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13U, *chartInstance->c1_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c1_sfEvent);
    *chartInstance->c1_is_c1_vmr_rwd_fix_leftarm = c1_IN_ReturnToStart;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 20U, *chartInstance->c1_sfEvent);
    *chartInstance->c1_temporalCounter_i1 = 0U;
    *chartInstance->c1_handvis_state = 1.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_handvis_state, 71U, 4U, 20U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_reward_state = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_reward_state, 64U, 4U, 20U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_instruct_num = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_instruct_num, 68U, 4U, 20U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_tickCount = 50.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_tickCount, 51U, 4U, 20U,
                          *chartInstance->c1_sfEvent, false);
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U, *chartInstance->c1_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, *chartInstance->c1_sfEvent);
}

static void c1_WaitForSound(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance)
{
  boolean_T c1_out;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 36U, *chartInstance->c1_sfEvent);
  c1_out = (CV_TRANSITION_EVAL(36U, (int32_T)_SFD_CCP_CALL(36U, 0,
              CV_RELATIONAL_EVAL(5U, 36U, 0, *chartInstance->c1_soundON, 0.0, -1,
    0U, *chartInstance->c1_soundON == 0.0) != 0U, *chartInstance->c1_sfEvent))
            != 0);
  if (c1_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 36U, *chartInstance->c1_sfEvent);
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 18U, *chartInstance->c1_sfEvent);
    *chartInstance->c1_is_Main_Trial = c1_IN_Show2ndTarget;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 14U, *chartInstance->c1_sfEvent);
    *chartInstance->c1_event_code = m_m_const_E_TARGET_ON;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_event_code, 59U, 4U, 14U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_targetB_row = (*chartInstance->c1_Trial_Protocol)[1];
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_targetB_row, 62U, 4U, 14U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_targetB_state = 1.0 + 2.0 * (real_T)
      ((*chartInstance->c1_rotation_on > 0.0) || (*chartInstance->c1_do_clamp >
        0.0));
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_targetB_state, 63U, 4U, 14U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_tickCount = (*chartInstance->c1_Trial_Protocol)[4];
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_tickCount, 51U, 4U, 14U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_tick = 0.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_tick, 50U, 4U, 14U,
                          *chartInstance->c1_sfEvent, false);
    *chartInstance->c1_dist = (*chartInstance->c1_TargetDistance)[32];
    _SFD_DATA_RANGE_CHECK(*chartInstance->c1_dist, 48U, 4U, 14U,
                          *chartInstance->c1_sfEvent, false);
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 18U,
                 *chartInstance->c1_sfEvent);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 18U, *chartInstance->c1_sfEvent);
}

static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber, uint32_T c1_instanceNumber)
{
  (void)c1_machineNumber;
  (void)c1_chartNumber;
  (void)c1_instanceNumber;
}

const mxArray *sf_c1_vmr_rwd_fix_leftarm_get_eml_resolved_functions_info(void)
{
  const mxArray *c1_nameCaptureInfo = NULL;
  c1_nameCaptureInfo = NULL;
  sf_mex_assign(&c1_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c1_nameCaptureInfo;
}

static const mxArray *c1_sf_marshallOut(void *chartInstanceVoid, void *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  uint32_T c1_u;
  const mxArray *c1_y = NULL;
  SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc1_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_u = *(uint32_T *)c1_inData;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static uint32_T c1_emlrt_marshallIn(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c1_b_e_ApplyNewRotationEventCounter, const
  char_T *c1_identifier)
{
  uint32_T c1_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_b_e_ApplyNewRotationEventCounter), &c1_thisId);
  sf_mex_destroy(&c1_b_e_ApplyNewRotationEventCounter);
  return c1_y;
}

static uint32_T c1_b_emlrt_marshallIn(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint32_T c1_y;
  uint32_T c1_u6;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_u6, 1, 7, 0U, 0, 0U, 0);
  c1_y = c1_u6;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_b_e_ApplyNewRotationEventCounter;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  uint32_T c1_y;
  SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc1_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c1_b_e_ApplyNewRotationEventCounter = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_b_e_ApplyNewRotationEventCounter), &c1_thisId);
  sf_mex_destroy(&c1_b_e_ApplyNewRotationEventCounter);
  *(uint32_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

static const mxArray *c1_b_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  int8_T c1_u;
  const mxArray *c1_y = NULL;
  SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc1_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_u = *(int8_T *)c1_inData;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 2, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static int8_T c1_c_emlrt_marshallIn(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  int8_T c1_y;
  int8_T c1_i5;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_i5, 1, 2, 0U, 0, 0U, 0);
  c1_y = c1_i5;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_b_e_clk;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  int8_T c1_y;
  SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc1_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c1_b_e_clk = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_e_clk), &c1_thisId);
  sf_mex_destroy(&c1_b_e_clk);
  *(int8_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

static const mxArray *c1_c_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  int32_T c1_u;
  const mxArray *c1_y = NULL;
  SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc1_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_u = *(int32_T *)c1_inData;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static int32_T c1_d_emlrt_marshallIn(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c1_b_sfEvent, const char_T *c1_identifier)
{
  int32_T c1_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_sfEvent),
    &c1_thisId);
  sf_mex_destroy(&c1_b_sfEvent);
  return c1_y;
}

static int32_T c1_e_emlrt_marshallIn(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  int32_T c1_y;
  int32_T c1_i6;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_i6, 1, 6, 0U, 0, 0U, 0);
  c1_y = c1_i6;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_b_sfEvent;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  int32_T c1_y;
  SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc1_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c1_b_sfEvent = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_sfEvent),
    &c1_thisId);
  sf_mex_destroy(&c1_b_sfEvent);
  *(int32_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

static const mxArray *c1_d_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  uint8_T c1_u;
  const mxArray *c1_y = NULL;
  SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc1_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_u = *(uint8_T *)c1_inData;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static uint8_T c1_f_emlrt_marshallIn(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c1_b_is_Main_Trial, const char_T *c1_identifier)
{
  uint8_T c1_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_is_Main_Trial),
    &c1_thisId);
  sf_mex_destroy(&c1_b_is_Main_Trial);
  return c1_y;
}

static uint8_T c1_g_emlrt_marshallIn(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint8_T c1_y;
  uint8_T c1_u7;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_u7, 1, 3, 0U, 0, 0U, 0);
  c1_y = c1_u7;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_b_is_Main_Trial;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  uint8_T c1_y;
  SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc1_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c1_b_is_Main_Trial = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_is_Main_Trial),
    &c1_thisId);
  sf_mex_destroy(&c1_b_is_Main_Trial);
  *(uint8_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

static const mxArray *c1_e_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  boolean_T c1_u;
  const mxArray *c1_y = NULL;
  SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc1_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_u = *(boolean_T *)c1_inData;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 11, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static boolean_T c1_h_emlrt_marshallIn(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c1_b_logging_enable, const char_T
  *c1_identifier)
{
  boolean_T c1_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_i_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_logging_enable),
    &c1_thisId);
  sf_mex_destroy(&c1_b_logging_enable);
  return c1_y;
}

static boolean_T c1_i_emlrt_marshallIn(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  boolean_T c1_y;
  boolean_T c1_b0;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b0, 1, 11, 0U, 0, 0U, 0);
  c1_y = c1_b0;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_b_logging_enable;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  boolean_T c1_y;
  SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc1_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c1_b_logging_enable = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_i_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_logging_enable),
    &c1_thisId);
  sf_mex_destroy(&c1_b_logging_enable);
  *(boolean_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

static const mxArray *c1_f_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  real_T c1_u;
  const mxArray *c1_y = NULL;
  SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc1_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_u = *(real_T *)c1_inData;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static real_T c1_j_emlrt_marshallIn(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c1_b_event_code, const char_T *c1_identifier)
{
  real_T c1_y;
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_k_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_event_code),
    &c1_thisId);
  sf_mex_destroy(&c1_b_event_code);
  return c1_y;
}

static real_T c1_k_emlrt_marshallIn(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  real_T c1_y;
  real_T c1_d17;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_d17, 1, 0, 0U, 0, 0U, 0);
  c1_y = c1_d17;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c1_mxArrayInData, const char_T *c1_varName, void *c1_outData)
{
  const mxArray *c1_b_event_code;
  const char_T *c1_identifier;
  emlrtMsgIdentifier c1_thisId;
  real_T c1_y;
  SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc1_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c1_b_event_code = sf_mex_dup(c1_mxArrayInData);
  c1_identifier = c1_varName;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  c1_y = c1_k_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_event_code),
    &c1_thisId);
  sf_mex_destroy(&c1_b_event_code);
  *(real_T *)c1_outData = c1_y;
  sf_mex_destroy(&c1_mxArrayInData);
}

static const mxArray *c1_g_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  int32_T c1_i7;
  real_T c1_u[50];
  const mxArray *c1_y = NULL;
  SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc1_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  for (c1_i7 = 0; c1_i7 < 50; c1_i7++) {
    c1_u[c1_i7] = (*(real_T (*)[50])c1_inData)[c1_i7];
  }

  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_u, 0, 0U, 1U, 0U, 2, 1, 50), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static const mxArray *c1_h_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  int32_T c1_i8;
  real_T c1_u[50];
  const mxArray *c1_y = NULL;
  SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc1_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  for (c1_i8 = 0; c1_i8 < 50; c1_i8++) {
    c1_u[c1_i8] = (*(real_T (*)[50])c1_inData)[c1_i8];
  }

  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_u, 0, 0U, 1U, 0U, 1, 50), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static const mxArray *c1_i_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  int32_T c1_i9;
  real_T c1_u[32];
  const mxArray *c1_y = NULL;
  SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc1_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  for (c1_i9 = 0; c1_i9 < 32; c1_i9++) {
    c1_u[c1_i9] = (*(real_T (*)[32])c1_inData)[c1_i9];
  }

  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_u, 0, 0U, 1U, 0U, 2, 32, 1), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static const mxArray *c1_j_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  int32_T c1_i10;
  real_T c1_u[32];
  const mxArray *c1_y = NULL;
  SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc1_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  for (c1_i10 = 0; c1_i10 < 32; c1_i10++) {
    c1_u[c1_i10] = (*(real_T (*)[32])c1_inData)[c1_i10];
  }

  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_u, 0, 0U, 1U, 0U, 1, 32), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static const mxArray *c1_k_sf_marshallOut(void *chartInstanceVoid, void
  *c1_inData)
{
  const mxArray *c1_mxArrayOutData = NULL;
  int32_T c1_i11;
  int32_T c1_i12;
  int32_T c1_i13;
  real_T c1_u[1024];
  const mxArray *c1_y = NULL;
  SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  chartInstance = (SFc1_vmr_rwd_fix_leftarmInstanceStruct *)chartInstanceVoid;
  c1_mxArrayOutData = NULL;
  c1_i11 = 0;
  for (c1_i12 = 0; c1_i12 < 32; c1_i12++) {
    for (c1_i13 = 0; c1_i13 < 32; c1_i13++) {
      c1_u[c1_i13 + c1_i11] = (*(real_T (*)[1024])c1_inData)[c1_i13 + c1_i11];
    }

    c1_i11 += 32;
  }

  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", c1_u, 0, 0U, 1U, 0U, 2, 32, 32), false);
  sf_mex_assign(&c1_mxArrayOutData, c1_y, false);
  return c1_mxArrayOutData;
}

static const mxArray *c1_l_emlrt_marshallIn
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance, const mxArray
   *c1_b_setSimStateSideEffectsInfo, const char_T *c1_identifier)
{
  const mxArray *c1_y = NULL;
  emlrtMsgIdentifier c1_thisId;
  c1_y = NULL;
  c1_thisId.fIdentifier = c1_identifier;
  c1_thisId.fParent = NULL;
  sf_mex_assign(&c1_y, c1_m_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_b_setSimStateSideEffectsInfo), &c1_thisId), false);
  sf_mex_destroy(&c1_b_setSimStateSideEffectsInfo);
  return c1_y;
}

static const mxArray *c1_m_emlrt_marshallIn
  (SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance, const mxArray *c1_u,
   const emlrtMsgIdentifier *c1_parentId)
{
  const mxArray *c1_y = NULL;
  (void)chartInstance;
  (void)c1_parentId;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_duplicatearraysafe(&c1_u), false);
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static int32_T c1__s32_d_(SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance,
  real_T c1_b)
{
  int32_T c1_a;
  c1_a = (int32_T)c1_b;
  if ((real_T)c1_a != (c1_b < 0.0 ? muDoubleScalarCeil(c1_b) :
                       muDoubleScalarFloor(c1_b))) {
    _SFD_OVERFLOW_DETECTION(SFDB_OVERFLOW, 1U, 0U, *chartInstance->c1_sfEvent,
      false);
  }

  return c1_a;
}

static int32_T c1__s32_add__(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance, int32_T c1_b, int32_T c1_c)
{
  int32_T c1_a;
  c1_a = c1_b + c1_c;
  if (((c1_a ^ c1_b) & (c1_a ^ c1_c)) < 0) {
    _SFD_OVERFLOW_DETECTION(SFDB_OVERFLOW, 1U, 0U, *chartInstance->c1_sfEvent,
      false);
  }

  return c1_a;
}

static void init_dsm_address_info(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc1_vmr_rwd_fix_leftarmInstanceStruct
  *chartInstance)
{
  chartInstance->c1_e_ApplyNewRotation = (boolean_T *)
    ssGetOutputPortSignal_wrapper(chartInstance->S, 17);
  chartInstance->c1_e_clk = (int8_T *)(ssGetInputPortSignalPtrs_wrapper
    (chartInstance->S, 6))[0U];
  chartInstance->c1_e_ExitTrialNow = (int8_T *)(ssGetInputPortSignalPtrs_wrapper
    (chartInstance->S, 6))[1U];
  chartInstance->c1_e_Trial_End = (boolean_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 18);
  chartInstance->c1_e_cntl_btn = (int8_T *)(ssGetInputPortSignalPtrs_wrapper
    (chartInstance->S, 6))[2U];
  chartInstance->c1_e_ApplyNewRotationEventCounter = (uint32_T *)
    ssGetDWork_wrapper(chartInstance->S, 0);
  chartInstance->c1_e_Trial_EndEventCounter = (uint32_T *)ssGetDWork_wrapper
    (chartInstance->S, 1);
  chartInstance->c1_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 2);
  chartInstance->c1_isStable = (boolean_T *)ssGetDWork_wrapper(chartInstance->S,
    3);
  chartInstance->c1_is_active_c1_vmr_rwd_fix_leftarm = (uint8_T *)
    ssGetDWork_wrapper(chartInstance->S, 4);
  chartInstance->c1_is_c1_vmr_rwd_fix_leftarm = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 5);
  chartInstance->c1_is_Main_Trial = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 6);
  chartInstance->c1_logging_enable = (boolean_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c1_event_code = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c1_Trial_Protocol = (real_T (*)[50])
    ssGetInputPortSignal_wrapper(chartInstance->S, 0);
  chartInstance->c1_targetA_row = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c1_targetA_state = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c1_targetB_row = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c1_targetB_state = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c1_tickCount = (real_T *)ssGetDWork_wrapper(chartInstance->S, 7);
  chartInstance->c1_reward_state = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 7);
  chartInstance->c1_score = (int32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 8);
  chartInstance->c1_reward = (int32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 9);
  chartInstance->c1_fdbk_text = (int32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 10);
  chartInstance->c1_instruct_num = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 11);
  chartInstance->c1_tone = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 12);
  chartInstance->c1_TaskwideParams = (real_T (*)[50])
    ssGetInputPortSignal_wrapper(chartInstance->S, 1);
  chartInstance->c1_HandInTarget = (real_T (*)[32])ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c1_DistFromTarget = (real_T (*)[32])
    ssGetInputPortSignal_wrapper(chartInstance->S, 3);
  chartInstance->c1_TargetDistance = (real_T (*)[1024])
    ssGetInputPortSignal_wrapper(chartInstance->S, 4);
  chartInstance->c1_reward_type = (real_T *)ssGetDWork_wrapper(chartInstance->S,
    8);
  chartInstance->c1_rotation_on = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 13);
  chartInstance->c1_dist = (real_T *)ssGetDWork_wrapper(chartInstance->S, 9);
  chartInstance->c1_tick = (real_T *)ssGetDWork_wrapper(chartInstance->S, 10);
  chartInstance->c1_handvis_state = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 14);
  chartInstance->c1_do_clamp = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 15);
  chartInstance->c1_robot_enable_controller = (boolean_T *)
    ssGetOutputPortSignal_wrapper(chartInstance->S, 16);
  chartInstance->c1_soundON = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c1_temporalCounter_i1 = (uint32_T *)ssGetDWork_wrapper
    (chartInstance->S, 11);
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
void sf_c1_vmr_rwd_fix_leftarm_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2496583001U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2017688282U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(4191023821U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1892915533U);
}

mxArray* sf_c1_vmr_rwd_fix_leftarm_get_post_codegen_info(void);
mxArray *sf_c1_vmr_rwd_fix_leftarm_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("xzD95NrOAVQJdRbpSDDpjG");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,6,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(50);
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
      pr[0] = (double)(50);
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
      pr[0] = (double)(32);
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
      pr[0] = (double)(32);
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
      pr[0] = (double)(32);
      pr[1] = (double)(32);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,5,"type",mxType);
    }

    mxSetField(mxData,5,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

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
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxData);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,16,3,dataFields);

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
      pr[0] = (double)(1);
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
      pr[0] = (double)(1);
      pr[1] = (double)(1);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,7,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(8));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,7,"type",mxType);
    }

    mxSetField(mxData,7,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,8,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(8));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(8));
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

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,11,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,11,"type",mxType);
    }

    mxSetField(mxData,11,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,12,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,12,"type",mxType);
    }

    mxSetField(mxData,12,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,13,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,13,"type",mxType);
    }

    mxSetField(mxData,13,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,14,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,14,"type",mxType);
    }

    mxSetField(mxData,14,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,15,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(1));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,15,"type",mxType);
    }

    mxSetField(mxData,15,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo = sf_c1_vmr_rwd_fix_leftarm_get_post_codegen_info
      ();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c1_vmr_rwd_fix_leftarm_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c1_vmr_rwd_fix_leftarm_jit_fallback_info(void)
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

mxArray *sf_c1_vmr_rwd_fix_leftarm_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c1_vmr_rwd_fix_leftarm_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c1_vmr_rwd_fix_leftarm(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[83],T\"do_clamp\",},{M[1],M[108],T\"event_code\",},{M[1],M[98],T\"fdbk_text\",},{M[1],M[61],T\"handvis_state\",},{M[1],M[93],T\"instruct_num\",},{M[1],M[20],T\"logging_enable\",},{M[1],M[49],T\"reward\",},{M[1],M[47],T\"reward_state\",},{M[1],M[115],T\"robot_enable_controller\",},{M[1],M[62],T\"rotation_on\",}}",
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[48],T\"score\",},{M[1],M[25],T\"targetA_row\",},{M[1],M[26],T\"targetA_state\",},{M[1],M[27],T\"targetB_row\",},{M[1],M[28],T\"targetB_state\",},{M[1],M[122],T\"tone\",},{M[3],M[59],T\"dist\",},{M[3],M[84],T\"reward_type\",},{M[3],M[60],T\"tick\",},{M[3],M[29],T\"tickCount\",}}",
    "100 S1x8'type','srcId','name','auxInfo'{{M[6],M[43],T\"e_ApplyNewRotation\",},{M[6],M[46],T\"e_Trial_End\",},{M[7],M[43],T\"e_ApplyNewRotationEventCounter\",},{M[7],M[46],T\"e_Trial_EndEventCounter\",},{M[8],M[0],T\"is_active_c1_vmr_rwd_fix_leftarm\",},{M[9],M[0],T\"is_c1_vmr_rwd_fix_leftarm\",},{M[9],M[8],T\"is_Main_Trial\",},{M[11],M[44],T\"temporalCounter_i1\",S'et','os','ct'{{T\"ev\",M1x10[4 116 7 102 77 72 110 5 63 73],M[1]}}}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 28, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_vmr_rwd_fix_leftarm_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc1_vmr_rwd_fix_leftarmInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _vmr_rwd_fix_leftarmMachineNumber_,
           1,
           24,
           37,
           0,
           27,
           5,
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
            5,
            5,
            5);
          _SFD_SET_DATA_PROPS(48,0,0,0,"dist");
          _SFD_SET_DATA_PROPS(49,0,0,0,"reward_type");
          _SFD_SET_DATA_PROPS(50,0,0,0,"tick");
          _SFD_SET_DATA_PROPS(51,0,0,0,"tickCount");
          _SFD_SET_DATA_PROPS(52,1,1,0,"Trial_Protocol");
          _SFD_SET_DATA_PROPS(53,1,1,0,"TaskwideParams");
          _SFD_SET_DATA_PROPS(54,1,1,0,"HandInTarget");
          _SFD_SET_DATA_PROPS(55,1,1,0,"DistFromTarget");
          _SFD_SET_DATA_PROPS(56,1,1,0,"TargetDistance");
          _SFD_SET_DATA_PROPS(57,1,1,0,"soundON");
          _SFD_SET_DATA_PROPS(58,2,0,1,"logging_enable");
          _SFD_SET_DATA_PROPS(59,2,0,1,"event_code");
          _SFD_SET_DATA_PROPS(60,2,0,1,"targetA_row");
          _SFD_SET_DATA_PROPS(61,2,0,1,"targetA_state");
          _SFD_SET_DATA_PROPS(62,2,0,1,"targetB_row");
          _SFD_SET_DATA_PROPS(63,2,0,1,"targetB_state");
          _SFD_SET_DATA_PROPS(64,2,0,1,"reward_state");
          _SFD_SET_DATA_PROPS(65,2,0,1,"score");
          _SFD_SET_DATA_PROPS(66,2,0,1,"reward");
          _SFD_SET_DATA_PROPS(67,2,0,1,"fdbk_text");
          _SFD_SET_DATA_PROPS(68,2,0,1,"instruct_num");
          _SFD_SET_DATA_PROPS(69,2,0,1,"tone");
          _SFD_SET_DATA_PROPS(70,2,0,1,"rotation_on");
          _SFD_SET_DATA_PROPS(71,2,0,1,"handvis_state");
          _SFD_SET_DATA_PROPS(72,2,0,1,"do_clamp");
          _SFD_SET_DATA_PROPS(73,2,0,1,"robot_enable_controller");
          _SFD_SET_DATA_PROPS(74,10,0,0,"E_SHOW_INSTRUCT");
          _SFD_EVENT_SCOPE(0,1);
          _SFD_EVENT_SCOPE(1,1);
          _SFD_EVENT_SCOPE(2,1);
          _SFD_EVENT_SCOPE(3,2);
          _SFD_EVENT_SCOPE(4,2);
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
          _SFD_STATE_INFO(10,0,0);
          _SFD_STATE_INFO(11,0,0);
          _SFD_STATE_INFO(12,0,0);
          _SFD_STATE_INFO(13,0,0);
          _SFD_STATE_INFO(14,0,0);
          _SFD_STATE_INFO(15,0,0);
          _SFD_STATE_INFO(16,0,0);
          _SFD_STATE_INFO(17,0,0);
          _SFD_STATE_INFO(18,0,0);
          _SFD_STATE_INFO(19,0,0);
          _SFD_STATE_INFO(20,0,0);
          _SFD_STATE_INFO(21,0,0);
          _SFD_STATE_INFO(22,0,0);
          _SFD_STATE_INFO(23,0,0);
          _SFD_CH_SUBSTATE_COUNT(13);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_CH_SUBSTATE_INDEX(4,4);
          _SFD_CH_SUBSTATE_INDEX(5,5);
          _SFD_CH_SUBSTATE_INDEX(6,6);
          _SFD_CH_SUBSTATE_INDEX(7,7);
          _SFD_CH_SUBSTATE_INDEX(8,19);
          _SFD_CH_SUBSTATE_INDEX(9,20);
          _SFD_CH_SUBSTATE_INDEX(10,21);
          _SFD_CH_SUBSTATE_INDEX(11,22);
          _SFD_CH_SUBSTATE_INDEX(12,23);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(7,11);
          _SFD_ST_SUBSTATE_INDEX(7,0,8);
          _SFD_ST_SUBSTATE_INDEX(7,1,9);
          _SFD_ST_SUBSTATE_INDEX(7,2,10);
          _SFD_ST_SUBSTATE_INDEX(7,3,11);
          _SFD_ST_SUBSTATE_INDEX(7,4,12);
          _SFD_ST_SUBSTATE_INDEX(7,5,13);
          _SFD_ST_SUBSTATE_INDEX(7,6,14);
          _SFD_ST_SUBSTATE_INDEX(7,7,15);
          _SFD_ST_SUBSTATE_INDEX(7,8,16);
          _SFD_ST_SUBSTATE_INDEX(7,9,17);
          _SFD_ST_SUBSTATE_INDEX(7,10,18);
          _SFD_ST_SUBSTATE_COUNT(8,0);
          _SFD_ST_SUBSTATE_COUNT(9,0);
          _SFD_ST_SUBSTATE_COUNT(10,0);
          _SFD_ST_SUBSTATE_COUNT(11,0);
          _SFD_ST_SUBSTATE_COUNT(12,0);
          _SFD_ST_SUBSTATE_COUNT(13,0);
          _SFD_ST_SUBSTATE_COUNT(14,0);
          _SFD_ST_SUBSTATE_COUNT(15,0);
          _SFD_ST_SUBSTATE_COUNT(16,0);
          _SFD_ST_SUBSTATE_COUNT(17,0);
          _SFD_ST_SUBSTATE_COUNT(18,0);
          _SFD_ST_SUBSTATE_COUNT(19,0);
          _SFD_ST_SUBSTATE_COUNT(20,0);
          _SFD_ST_SUBSTATE_COUNT(21,0);
          _SFD_ST_SUBSTATE_COUNT(22,0);
          _SFD_ST_SUBSTATE_COUNT(23,0);
        }

        _SFD_CV_INIT_CHART(13,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
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
          _SFD_CV_INIT_STATE(7,11,1,1,0,0,NULL,NULL);
        }

        {
          static unsigned int sStartDecMap[] = { 195 };

          static unsigned int sEndDecMap[] = { 200 };

          _SFD_CV_INIT_STATE(8,0,0,0,0,1,&(sStartDecMap[0]),&(sEndDecMap[0]));
        }

        {
          _SFD_CV_INIT_STATE(9,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(10,0,0,0,0,0,NULL,NULL);
        }

        {
          static unsigned int sStartDecMap[] = { 173 };

          static unsigned int sEndDecMap[] = { 178 };

          _SFD_CV_INIT_STATE(11,0,0,0,0,1,&(sStartDecMap[0]),&(sEndDecMap[0]));
        }

        {
          static unsigned int sStartDecMap[] = { 233 };

          static unsigned int sEndDecMap[] = { 238 };

          _SFD_CV_INIT_STATE(12,0,0,0,0,1,&(sStartDecMap[0]),&(sEndDecMap[0]));
        }

        {
          static unsigned int sStartDecMap[] = { 86 };

          static unsigned int sEndDecMap[] = { 91 };

          _SFD_CV_INIT_STATE(13,0,0,0,0,1,&(sStartDecMap[0]),&(sEndDecMap[0]));
        }

        {
          static unsigned int sStartDecMap[] = { 369 };

          static unsigned int sEndDecMap[] = { 374 };

          _SFD_CV_INIT_STATE(14,0,0,0,0,1,&(sStartDecMap[0]),&(sEndDecMap[0]));
        }

        {
          _SFD_CV_INIT_STATE(15,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(16,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(17,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(18,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(19,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(20,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(21,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(22,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(23,0,0,0,0,0,NULL,NULL);
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 33 };

          static unsigned int sEndGuardMap[] = { 29, 68 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(34,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1, 33 };

          static unsigned int sEndRelationalopMap[] = { 29, 68 };

          static int sRelationalopEps[] = { -1, -1 };

          static int sRelationalopType[] = { 0, 0, 0, 0, 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(34,2,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(4,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 16, 0 };

          static unsigned int sEndGuardMap[] = { 21, 22 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(33,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 8, 0 };

          static unsigned int sEndGuardMap[] = { 13, 14 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(32,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 36 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(35,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 36 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 1, 1, 1, 1 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(35,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 39 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(10,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1, 1 };

          static unsigned int sEndRelationalopMap[] = { 39, 39 };

          static int sRelationalopEps[] = { -1, -1 };

          static int sRelationalopType[] = { 3, 3, 3, 3, 3, 3, 3, 3 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(10,2,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 43 };

          static unsigned int sEndGuardMap[] = { 80 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(28,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 43, 43 };

          static unsigned int sEndRelationalopMap[] = { 80, 80 };

          static int sRelationalopEps[] = { -1, -1 };

          static int sRelationalopType[] = { 4, 4, 4, 4, 4, 4, 4, 4 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(28,2,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 9, 0 };

          static unsigned int sEndGuardMap[] = { 14, 15 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(7,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 8, 0 };

          static unsigned int sEndGuardMap[] = { 13, 14 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(21,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 10 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(30,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 16, 0 };

          static unsigned int sEndGuardMap[] = { 21, 22 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(20,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 16, 0 };

          static unsigned int sEndGuardMap[] = { 21, 22 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(31,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(26,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 39 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(17,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 39 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(17,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 40 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(19,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 40 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(19,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 38 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(25,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 38 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 4, 4, 4, 4 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(25,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 8, 0 };

          static unsigned int sEndGuardMap[] = { 13, 14 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(18,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 14 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(8,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 16, 0 };

          static unsigned int sEndGuardMap[] = { 21, 22 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(29,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 2, 62 };

          static unsigned int sEndGuardMap[] = { 58, 84 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(13,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 2 };

          static unsigned int sEndRelationalopMap[] = { 58 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 3, 3, 3, 3 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(13,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(3,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 29 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 29 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(2,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 29 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(9,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 29 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(9,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 17, 0 };

          static unsigned int sEndGuardMap[] = { 22, 23 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(0,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 17 };

          static unsigned int sEndRelationalopMap[] = { 22 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(0,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 13 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(36,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 13 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(36,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 18 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 5, 5, 5, 5 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(5,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 36 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(12,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 36 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 5, 5, 5, 5 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(12,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 29 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 29 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(1,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(15,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 17 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(15,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(16,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 17 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(16,1,&(sStartRelationalopMap[0]),
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
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 17 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(24,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(22,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 17 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(22,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(27,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 27, 47 };

          static unsigned int sEndGuardMap[] = { 43, 64 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(11,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 27, 47 };

          static unsigned int sEndRelationalopMap[] = { 43, 64 };

          static int sRelationalopEps[] = { -1, -1 };

          static int sRelationalopType[] = { 1, 5, 1, 5, 1, 5, 1, 5 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(11,2,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 27 };

          static unsigned int sEndGuardMap[] = { 44 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(14,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 27 };

          static unsigned int sEndRelationalopMap[] = { 44 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 5, 5, 5, 5 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(14,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 27 };

          static unsigned int sEndGuardMap[] = { 44 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(23,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 27 };

          static unsigned int sEndRelationalopMap[] = { 44 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 5, 5, 5, 5 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(23,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 27 };

          static unsigned int sEndGuardMap[] = { 44 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(6,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 27 };

          static unsigned int sEndRelationalopMap[] = { 44 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 5, 5, 5, 5 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(6,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_SET_DATA_COMPILED_PROPS(48,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_f_sf_marshallOut,(MexInFcnForType)c1_f_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(49,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_f_sf_marshallOut,(MexInFcnForType)c1_f_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(50,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_f_sf_marshallOut,(MexInFcnForType)c1_f_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(51,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_f_sf_marshallOut,(MexInFcnForType)c1_f_sf_marshallIn);

        {
          unsigned int dimVector[2];
          dimVector[0]= 1;
          dimVector[1]= 50;
          _SFD_SET_DATA_COMPILED_PROPS(52,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_g_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 50;
          _SFD_SET_DATA_COMPILED_PROPS(53,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_h_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[2];
          dimVector[0]= 32;
          dimVector[1]= 1;
          _SFD_SET_DATA_COMPILED_PROPS(54,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_i_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 32;
          _SFD_SET_DATA_COMPILED_PROPS(55,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_j_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[2];
          dimVector[0]= 32;
          dimVector[1]= 32;
          _SFD_SET_DATA_COMPILED_PROPS(56,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c1_k_sf_marshallOut,(MexInFcnForType)NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(57,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_f_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(58,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_e_sf_marshallOut,(MexInFcnForType)c1_e_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(59,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_f_sf_marshallOut,(MexInFcnForType)c1_f_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(60,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_f_sf_marshallOut,(MexInFcnForType)c1_f_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(61,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_f_sf_marshallOut,(MexInFcnForType)c1_f_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(62,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_f_sf_marshallOut,(MexInFcnForType)c1_f_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(63,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_f_sf_marshallOut,(MexInFcnForType)c1_f_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(64,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_f_sf_marshallOut,(MexInFcnForType)c1_f_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(65,SF_INT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_c_sf_marshallOut,(MexInFcnForType)c1_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(66,SF_INT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_c_sf_marshallOut,(MexInFcnForType)c1_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(67,SF_INT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_c_sf_marshallOut,(MexInFcnForType)c1_c_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(68,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_f_sf_marshallOut,(MexInFcnForType)c1_f_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(69,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_f_sf_marshallOut,(MexInFcnForType)c1_f_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(70,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_f_sf_marshallOut,(MexInFcnForType)c1_f_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(71,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_f_sf_marshallOut,(MexInFcnForType)c1_f_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(72,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_f_sf_marshallOut,(MexInFcnForType)c1_f_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(73,SF_UINT8,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_e_sf_marshallOut,(MexInFcnForType)c1_e_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(74,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c1_f_sf_marshallOut,(MexInFcnForType)c1_f_sf_marshallIn);
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
    SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc1_vmr_rwd_fix_leftarmInstanceStruct *)
      chartInfo->chartInstance;
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(58U, chartInstance->c1_logging_enable);
        _SFD_SET_DATA_VALUE_PTR(59U, chartInstance->c1_event_code);
        _SFD_SET_DATA_VALUE_PTR(52U, *chartInstance->c1_Trial_Protocol);
        _SFD_SET_DATA_VALUE_PTR(60U, chartInstance->c1_targetA_row);
        _SFD_SET_DATA_VALUE_PTR(61U, chartInstance->c1_targetA_state);
        _SFD_SET_DATA_VALUE_PTR(62U, chartInstance->c1_targetB_row);
        _SFD_SET_DATA_VALUE_PTR(63U, chartInstance->c1_targetB_state);
        _SFD_SET_DATA_VALUE_PTR(51U, chartInstance->c1_tickCount);
        _SFD_SET_DATA_VALUE_PTR(64U, chartInstance->c1_reward_state);
        _SFD_SET_DATA_VALUE_PTR(65U, chartInstance->c1_score);
        _SFD_SET_DATA_VALUE_PTR(66U, chartInstance->c1_reward);
        _SFD_SET_DATA_VALUE_PTR(67U, chartInstance->c1_fdbk_text);
        _SFD_SET_DATA_VALUE_PTR(68U, chartInstance->c1_instruct_num);
        _SFD_SET_DATA_VALUE_PTR(69U, chartInstance->c1_tone);
        _SFD_SET_DATA_VALUE_PTR(53U, *chartInstance->c1_TaskwideParams);
        _SFD_SET_DATA_VALUE_PTR(54U, *chartInstance->c1_HandInTarget);
        _SFD_SET_DATA_VALUE_PTR(55U, *chartInstance->c1_DistFromTarget);
        _SFD_SET_DATA_VALUE_PTR(56U, *chartInstance->c1_TargetDistance);
        _SFD_SET_DATA_VALUE_PTR(49U, chartInstance->c1_reward_type);
        _SFD_SET_DATA_VALUE_PTR(70U, chartInstance->c1_rotation_on);
        _SFD_SET_DATA_VALUE_PTR(48U, chartInstance->c1_dist);
        _SFD_SET_DATA_VALUE_PTR(50U, chartInstance->c1_tick);
        _SFD_SET_DATA_VALUE_PTR(71U, chartInstance->c1_handvis_state);
        _SFD_SET_DATA_VALUE_PTR(72U, chartInstance->c1_do_clamp);
        _SFD_SET_DATA_VALUE_PTR(74U, &chartInstance->c1_E_SHOW_INSTRUCT);
        _SFD_SET_DATA_VALUE_PTR(73U, chartInstance->c1_robot_enable_controller);
        _SFD_SET_DATA_VALUE_PTR(57U, chartInstance->c1_soundON);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sY0hE8wUWDGXIXEzIXfnA5F";
}

static void sf_check_dwork_consistency(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    const uint32_T *sfunDWorkChecksum = sf_get_sfun_dwork_checksum();
    mxArray *infoStruct = load_vmr_rwd_fix_leftarm_optimization_info();
    mxArray* mxRTWDWorkChecksum = sf_get_dwork_info_from_mat_file(S,
      sf_get_instance_specialization(), infoStruct, 1, "dworkChecksum");
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

static void sf_opaque_initialize_c1_vmr_rwd_fix_leftarm(void *chartInstanceVar)
{
  sf_check_dwork_consistency(((SFc1_vmr_rwd_fix_leftarmInstanceStruct*)
    chartInstanceVar)->S);
  chart_debug_initialization(((SFc1_vmr_rwd_fix_leftarmInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c1_vmr_rwd_fix_leftarm
    ((SFc1_vmr_rwd_fix_leftarmInstanceStruct*) chartInstanceVar);
  initialize_c1_vmr_rwd_fix_leftarm((SFc1_vmr_rwd_fix_leftarmInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c1_vmr_rwd_fix_leftarm(void *chartInstanceVar)
{
  enable_c1_vmr_rwd_fix_leftarm((SFc1_vmr_rwd_fix_leftarmInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c1_vmr_rwd_fix_leftarm(void *chartInstanceVar)
{
  disable_c1_vmr_rwd_fix_leftarm((SFc1_vmr_rwd_fix_leftarmInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c1_vmr_rwd_fix_leftarm(void *chartInstanceVar)
{
  sf_gateway_c1_vmr_rwd_fix_leftarm((SFc1_vmr_rwd_fix_leftarmInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c1_vmr_rwd_fix_leftarm(void
  *chartInstanceVar)
{
  ext_mode_exec_c1_vmr_rwd_fix_leftarm((SFc1_vmr_rwd_fix_leftarmInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c1_vmr_rwd_fix_leftarm(SimStruct*
  S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  return get_sim_state_c1_vmr_rwd_fix_leftarm
    ((SFc1_vmr_rwd_fix_leftarmInstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c1_vmr_rwd_fix_leftarm(SimStruct* S, const
  mxArray *st)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  set_sim_state_c1_vmr_rwd_fix_leftarm((SFc1_vmr_rwd_fix_leftarmInstanceStruct*)
    chartInfo->chartInstance, st);
}

static void sf_opaque_terminate_c1_vmr_rwd_fix_leftarm(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_vmr_rwd_fix_leftarmInstanceStruct*) chartInstanceVar
      )->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_vmr_rwd_fix_leftarm_optimization_info();
    }

    finalize_c1_vmr_rwd_fix_leftarm((SFc1_vmr_rwd_fix_leftarmInstanceStruct*)
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
  initSimStructsc1_vmr_rwd_fix_leftarm((SFc1_vmr_rwd_fix_leftarmInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_vmr_rwd_fix_leftarm(SimStruct *S)
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
    initialize_params_c1_vmr_rwd_fix_leftarm
      ((SFc1_vmr_rwd_fix_leftarmInstanceStruct*)(chartInfo->chartInstance));
  }
}

mxArray *sf_c1_vmr_rwd_fix_leftarm_get_testpoint_info(void)
{
  return NULL;
}

static void sf_set_sfun_dwork_info(SimStruct *S)
{
  const char *dworkEncStr[] = {
    "100 S1x10'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size'{{T\"uint32\",,,,,,,M[0],M[]},{T\"uint32\",,,,,,,M[0],M[]},{T\"int32\",,,,,,,M[0],M[]},{T\"boolean\",,,,,,,M[0],M[]},{T\"uint8\",,,,,,,M[0],M[]},{T\"uint8\",,,,,,,M[0],M[]},{T\"uint8\",,,,,,,M[0],M[]},{T\"double\",,,,,,,M[0],M[]},{T\"double\",,,,,,,M[0],M[]},{T\"double\",,,,,,,M[0],M[]}}",
    "100 S1x2'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size'{{T\"double\",,,,,,,M[0],M[]},{T\"uint32\",,,,,,,M[0],M[]}}"
  };

  sf_set_encoded_dwork_info(S, dworkEncStr, 12, 10);
}

static uint32_T* sf_get_sfun_dwork_checksum()
{
  static uint32_T checksum[4] = { 232553802U, 1918701185U, 2821055680U,
    220649755U };

  return checksum;
}

static void mdlSetWorkWidths_c1_vmr_rwd_fix_leftarm(SimStruct *S)
{
  /* Actual parameters from chart:
     E_SHOW_INSTRUCT
   */
  const char_T *rtParamNames[] = { "E_SHOW_INSTRUCT" };

  ssSetNumRunTimeParams(S,ssGetSFcnParamsCount(S));

  /* registration for E_SHOW_INSTRUCT*/
  ssRegDlgParamAsRunTimeParam(S, 0, 0, rtParamNames[0], SS_DOUBLE);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_vmr_rwd_fix_leftarm_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,1);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,1,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,1);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,1,6);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,1,18);
    }

    ssSetInputPortOptimOpts(S, 6, SS_REUSABLE_AND_LOCAL);

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=18; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 6; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,1);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2206009114U));
  ssSetChecksum1(S,(2889786480U));
  ssSetChecksum2(S,(4118564751U));
  ssSetChecksum3(S,(3093415097U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c1_vmr_rwd_fix_leftarm(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c1_vmr_rwd_fix_leftarm(SimStruct *S)
{
  SFc1_vmr_rwd_fix_leftarmInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc1_vmr_rwd_fix_leftarmInstanceStruct *)utMalloc(sizeof
    (SFc1_vmr_rwd_fix_leftarmInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc1_vmr_rwd_fix_leftarmInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c1_vmr_rwd_fix_leftarm;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c1_vmr_rwd_fix_leftarm;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c1_vmr_rwd_fix_leftarm;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c1_vmr_rwd_fix_leftarm;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c1_vmr_rwd_fix_leftarm;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c1_vmr_rwd_fix_leftarm;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c1_vmr_rwd_fix_leftarm;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c1_vmr_rwd_fix_leftarm;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_vmr_rwd_fix_leftarm;
  chartInstance->chartInfo.mdlStart = mdlStart_c1_vmr_rwd_fix_leftarm;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c1_vmr_rwd_fix_leftarm;
  chartInstance->chartInfo.extModeExec =
    sf_opaque_ext_mode_exec_c1_vmr_rwd_fix_leftarm;
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

void c1_vmr_rwd_fix_leftarm_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c1_vmr_rwd_fix_leftarm(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_vmr_rwd_fix_leftarm(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_vmr_rwd_fix_leftarm(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_vmr_rwd_fix_leftarm_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
