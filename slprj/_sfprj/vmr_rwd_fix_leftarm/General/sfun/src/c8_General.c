/* Include files */

#include <stddef.h>
#include "blas.h"
#include "General_sfun.h"
#include "c8_General.h"
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
#define c8_event_e_data_ready_strobe   (1)
#define c8_event_e_clk                 (2)
#define c8_event_e_fast_clk            (3)
#define c8_event_e_reset_UDP           (0)
#define CALL_EVENT                     (-1)
#define c8_IN_NO_ACTIVE_CHILD          ((uint8_T)0U)
#define c8_IN_AddPacketToQueue         ((uint8_T)1U)
#define c8_IN_Fixed                    ((uint8_T)1U)
#define c8_IN_ResetUDPPort             ((uint8_T)2U)
#define c8_IN_Idle                     ((uint8_T)1U)
#define c8_IN_SendPacket               ((uint8_T)2U)
#define c8_IN_Fix                      ((uint8_T)1U)
#define c8_IN_NoFix                    ((uint8_T)2U)
#define c8_const_KINEMATIC_LEN         (400.0)
#define c8_const_FULL_PACKET_SIZE      (410.0)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;

/* Function Declarations */
static void initialize_c8_General(SFc8_GeneralInstanceStruct *chartInstance);
static void initialize_params_c8_General(SFc8_GeneralInstanceStruct
  *chartInstance);
static void enable_c8_General(SFc8_GeneralInstanceStruct *chartInstance);
static void disable_c8_General(SFc8_GeneralInstanceStruct *chartInstance);
static void c8_update_debugger_state_c8_General(SFc8_GeneralInstanceStruct
  *chartInstance);
static void ext_mode_exec_c8_General(SFc8_GeneralInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c8_General(SFc8_GeneralInstanceStruct
  *chartInstance);
static void set_sim_state_c8_General(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_st);
static void c8_set_sim_state_side_effects_c8_General(SFc8_GeneralInstanceStruct *
  chartInstance);
static void finalize_c8_General(SFc8_GeneralInstanceStruct *chartInstance);
static void sf_gateway_c8_General(SFc8_GeneralInstanceStruct *chartInstance);
static void mdl_start_c8_General(SFc8_GeneralInstanceStruct *chartInstance);
static void c8_c8_General(SFc8_GeneralInstanceStruct *chartInstance);
static void initSimStructsc8_General(SFc8_GeneralInstanceStruct *chartInstance);
static void c8_SendControlMachine(SFc8_GeneralInstanceStruct *chartInstance);
static void c8_Fixed(SFc8_GeneralInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c8_machineNumber, uint32_T
  c8_chartNumber, uint32_T c8_instanceNumber);
static const mxArray *c8_sf_marshallOut(void *chartInstanceVoid, void *c8_inData);
static int8_T c8_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_u, const emlrtMsgIdentifier *c8_parentId);
static void c8_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c8_mxArrayInData, const char_T *c8_varName, void *c8_outData);
static const mxArray *c8_b_sf_marshallOut(void *chartInstanceVoid, void
  *c8_inData);
static int32_T c8_b_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_sfEvent, const char_T *c8_identifier);
static int32_T c8_c_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_u, const emlrtMsgIdentifier *c8_parentId);
static void c8_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c8_mxArrayInData, const char_T *c8_varName, void *c8_outData);
static const mxArray *c8_c_sf_marshallOut(void *chartInstanceVoid, void
  *c8_inData);
static uint8_T c8_d_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_is_UpdatePacketQueue, const char_T *c8_identifier);
static uint8_T c8_e_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_u, const emlrtMsgIdentifier *c8_parentId);
static void c8_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c8_mxArrayInData, const char_T *c8_varName, void *c8_outData);
static const mxArray *c8_d_sf_marshallOut(void *chartInstanceVoid, void
  *c8_inData);
static real_T c8_f_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_resetUDP, const char_T *c8_identifier);
static real_T c8_g_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_u, const emlrtMsgIdentifier *c8_parentId);
static void c8_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c8_mxArrayInData, const char_T *c8_varName, void *c8_outData);
static const mxArray *c8_e_sf_marshallOut(void *chartInstanceVoid, void
  *c8_inData);
static void c8_h_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_data_out, const char_T *c8_identifier, real32_T c8_b_y[410]);
static void c8_i_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_u, const emlrtMsgIdentifier *c8_parentId, real32_T c8_b_y
  [410]);
static void c8_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c8_mxArrayInData, const char_T *c8_varName, void *c8_outData);
static const mxArray *c8_f_sf_marshallOut(void *chartInstanceVoid, void
  *c8_inData);
static const mxArray *c8_g_sf_marshallOut(void *chartInstanceVoid, void
  *c8_inData);
static uint32_T c8_j_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_queue_tail, const char_T *c8_identifier);
static uint32_T c8_k_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_u, const emlrtMsgIdentifier *c8_parentId);
static void c8_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c8_mxArrayInData, const char_T *c8_varName, void *c8_outData);
static const mxArray *c8_h_sf_marshallOut(void *chartInstanceVoid, void
  *c8_inData);
static const mxArray *c8_i_sf_marshallOut(void *chartInstanceVoid, void
  *c8_inData);
static void c8_l_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_packet_queue, const char_T *c8_identifier, real32_T
  c8_b_y[20500000]);
static void c8_m_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_u, const emlrtMsgIdentifier *c8_parentId, real32_T c8_b_y
  [20500000]);
static void c8_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c8_mxArrayInData, const char_T *c8_varName, void *c8_outData);
static uint16_T c8_n_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_temporalCounter_i2, const char_T *c8_identifier);
static uint16_T c8_o_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_u, const emlrtMsgIdentifier *c8_parentId);
static const mxArray *c8_p_emlrt_marshallIn(SFc8_GeneralInstanceStruct
  *chartInstance, const mxArray *c8_b_setSimStateSideEffectsInfo, const char_T
  *c8_identifier);
static const mxArray *c8_q_emlrt_marshallIn(SFc8_GeneralInstanceStruct
  *chartInstance, const mxArray *c8_b_u, const emlrtMsgIdentifier *c8_parentId);
static uint8_T c8__u8_s32_(SFc8_GeneralInstanceStruct *chartInstance, int32_T
  c8_b);
static uint16_T c8__u16_s32_(SFc8_GeneralInstanceStruct *chartInstance, int32_T
  c8_b);
static uint32_T c8__u32_d_(SFc8_GeneralInstanceStruct *chartInstance, real_T
  c8_b);
static uint32_T c8__u32_minus__(SFc8_GeneralInstanceStruct *chartInstance,
  uint32_T c8_b, uint32_T c8_c);
static uint32_T c8__u32_add__(SFc8_GeneralInstanceStruct *chartInstance,
  uint32_T c8_b, uint32_T c8_c);
static uint32_T c8__u32_s8_(SFc8_GeneralInstanceStruct *chartInstance, int8_T
  c8_b);
static void init_dsm_address_info(SFc8_GeneralInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc8_GeneralInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c8_General(SFc8_GeneralInstanceStruct *chartInstance)
{
  int32_T c8_i0;
  int32_T c8_i1;
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc8_General(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c8_doSetSimStateSideEffects = 0U;
  chartInstance->c8_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c8_is_active_FixMonitor = 0U;
  *chartInstance->c8_is_FixMonitor = c8_IN_NO_ACTIVE_CHILD;
  *chartInstance->c8_temporalCounter_i2 = 0U;
  *chartInstance->c8_is_active_SendControlMachine = 0U;
  *chartInstance->c8_is_SendControlMachine = c8_IN_NO_ACTIVE_CHILD;
  *chartInstance->c8_is_Fixed = c8_IN_NO_ACTIVE_CHILD;
  *chartInstance->c8_temporalCounter_i1 = 0U;
  *chartInstance->c8_temporalCounter_i3 = 0U;
  *chartInstance->c8_is_active_UpdatePacketQueue = 0U;
  *chartInstance->c8_is_UpdatePacketQueue = c8_IN_NO_ACTIVE_CHILD;
  *chartInstance->c8_is_active_c8_General = 0U;
  *chartInstance->c8_queue_tail = 0U;
  *chartInstance->c8_packet_index = 0U;
  for (c8_i0 = 0; c8_i0 < 20500000; c8_i0++) {
    (*chartInstance->c8_packet_queue)[c8_i0] = 0.0F;
  }

  *chartInstance->c8_packet_queue_sz = 50000.0;
  *chartInstance->c8_i = 0;
  *chartInstance->c8_j = 0;
  *chartInstance->c8_outstanding_packet_index = 0.0;
  *chartInstance->c8_queue_head = 0U;
  chartInstance->c8_KINEMATIC_LEN = 400.0;
  chartInstance->c8_FULL_PACKET_SIZE = 410.0;
  if (!(sf_get_output_port_reusable(chartInstance->S, 1) != 0)) {
    *chartInstance->c8_resetUDP = 0.0;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 2) != 0)) {
    for (c8_i1 = 0; c8_i1 < 410; c8_i1++) {
      (*chartInstance->c8_data_out)[c8_i1] = 0.0F;
    }
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 3) != 0)) {
    *chartInstance->c8_queue_size = 0.0;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 4) != 0)) {
    *chartInstance->c8_total_timeouts = 0.0;
  }
}

static void initialize_params_c8_General(SFc8_GeneralInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void enable_c8_General(SFc8_GeneralInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  sf_call_output_fcn_enable(chartInstance->S, 0, "e_send", 0);
}

static void disable_c8_General(SFc8_GeneralInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  sf_call_output_fcn_disable(chartInstance->S, 0, "e_send", 0);
}

static void c8_update_debugger_state_c8_General(SFc8_GeneralInstanceStruct
  *chartInstance)
{
  uint32_T c8_prevAniVal;
  c8_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (*chartInstance->c8_is_active_c8_General == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 5U, *chartInstance->c8_sfEvent);
  }

  if (*chartInstance->c8_is_active_UpdatePacketQueue == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c8_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c8_sfEvent);
  }

  if (*chartInstance->c8_is_UpdatePacketQueue == c8_IN_AddPacketToQueue) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c8_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c8_sfEvent);
  }

  if (*chartInstance->c8_is_active_SendControlMachine == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c8_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c8_sfEvent);
  }

  if (*chartInstance->c8_is_SendControlMachine == c8_IN_Fixed) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c8_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c8_sfEvent);
  }

  if (*chartInstance->c8_is_Fixed == c8_IN_Idle) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c8_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c8_sfEvent);
  }

  if (*chartInstance->c8_is_Fixed == c8_IN_SendPacket) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c8_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c8_sfEvent);
  }

  if (*chartInstance->c8_is_SendControlMachine == c8_IN_ResetUDPPort) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c8_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c8_sfEvent);
  }

  if (*chartInstance->c8_is_active_FixMonitor == 1U) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c8_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c8_sfEvent);
  }

  if (*chartInstance->c8_is_FixMonitor == c8_IN_Fix) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c8_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c8_sfEvent);
  }

  if (*chartInstance->c8_is_FixMonitor == c8_IN_NoFix) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c8_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c8_sfEvent);
  }

  _SFD_SET_ANIMATION(c8_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c8_General(SFc8_GeneralInstanceStruct *chartInstance)
{
  c8_update_debugger_state_c8_General(chartInstance);
}

static const mxArray *get_sim_state_c8_General(SFc8_GeneralInstanceStruct
  *chartInstance)
{
  const mxArray *c8_st;
  const mxArray *c8_b_y = NULL;
  const mxArray *c8_c_y = NULL;
  real_T c8_hoistedGlobal;
  real_T c8_b_u;
  const mxArray *c8_d_y = NULL;
  real_T c8_b_hoistedGlobal;
  real_T c8_c_u;
  const mxArray *c8_e_y = NULL;
  real_T c8_c_hoistedGlobal;
  real_T c8_d_u;
  const mxArray *c8_f_y = NULL;
  int32_T c8_d_hoistedGlobal;
  int32_T c8_e_u;
  const mxArray *c8_g_y = NULL;
  int32_T c8_e_hoistedGlobal;
  int32_T c8_f_u;
  const mxArray *c8_h_y = NULL;
  real_T c8_f_hoistedGlobal;
  real_T c8_g_u;
  const mxArray *c8_i_y = NULL;
  uint32_T c8_g_hoistedGlobal;
  uint32_T c8_h_u;
  const mxArray *c8_j_y = NULL;
  const mxArray *c8_k_y = NULL;
  real_T c8_h_hoistedGlobal;
  real_T c8_i_u;
  const mxArray *c8_l_y = NULL;
  uint32_T c8_i_hoistedGlobal;
  uint32_T c8_j_u;
  const mxArray *c8_m_y = NULL;
  uint32_T c8_j_hoistedGlobal;
  uint32_T c8_k_u;
  const mxArray *c8_n_y = NULL;
  uint8_T c8_k_hoistedGlobal;
  uint8_T c8_l_u;
  const mxArray *c8_o_y = NULL;
  uint8_T c8_l_hoistedGlobal;
  uint8_T c8_m_u;
  const mxArray *c8_p_y = NULL;
  uint8_T c8_m_hoistedGlobal;
  uint8_T c8_n_u;
  const mxArray *c8_q_y = NULL;
  uint8_T c8_n_hoistedGlobal;
  uint8_T c8_o_u;
  const mxArray *c8_r_y = NULL;
  uint8_T c8_o_hoistedGlobal;
  uint8_T c8_p_u;
  const mxArray *c8_s_y = NULL;
  uint8_T c8_p_hoistedGlobal;
  uint8_T c8_q_u;
  const mxArray *c8_t_y = NULL;
  uint8_T c8_q_hoistedGlobal;
  uint8_T c8_r_u;
  const mxArray *c8_u_y = NULL;
  uint8_T c8_r_hoistedGlobal;
  uint8_T c8_s_u;
  const mxArray *c8_v_y = NULL;
  uint16_T c8_s_hoistedGlobal;
  uint16_T c8_t_u;
  const mxArray *c8_w_y = NULL;
  uint8_T c8_t_hoistedGlobal;
  uint8_T c8_u_u;
  const mxArray *c8_x_y = NULL;
  uint8_T c8_u_hoistedGlobal;
  uint8_T c8_v_u;
  const mxArray *c8_y_y = NULL;
  c8_st = NULL;
  c8_st = NULL;
  c8_b_y = NULL;
  sf_mex_assign(&c8_b_y, sf_mex_createcellmatrix(23, 1), false);
  c8_c_y = NULL;
  sf_mex_assign(&c8_c_y, sf_mex_create("y", *chartInstance->c8_data_out, 1, 0U,
    1U, 0U, 1, 410), false);
  sf_mex_setcell(c8_b_y, 0, c8_c_y);
  c8_hoistedGlobal = *chartInstance->c8_queue_size;
  c8_b_u = c8_hoistedGlobal;
  c8_d_y = NULL;
  sf_mex_assign(&c8_d_y, sf_mex_create("y", &c8_b_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c8_b_y, 1, c8_d_y);
  c8_b_hoistedGlobal = *chartInstance->c8_resetUDP;
  c8_c_u = c8_b_hoistedGlobal;
  c8_e_y = NULL;
  sf_mex_assign(&c8_e_y, sf_mex_create("y", &c8_c_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c8_b_y, 2, c8_e_y);
  c8_c_hoistedGlobal = *chartInstance->c8_total_timeouts;
  c8_d_u = c8_c_hoistedGlobal;
  c8_f_y = NULL;
  sf_mex_assign(&c8_f_y, sf_mex_create("y", &c8_d_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c8_b_y, 3, c8_f_y);
  c8_d_hoistedGlobal = *chartInstance->c8_i;
  c8_e_u = c8_d_hoistedGlobal;
  c8_g_y = NULL;
  sf_mex_assign(&c8_g_y, sf_mex_create("y", &c8_e_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c8_b_y, 4, c8_g_y);
  c8_e_hoistedGlobal = *chartInstance->c8_j;
  c8_f_u = c8_e_hoistedGlobal;
  c8_h_y = NULL;
  sf_mex_assign(&c8_h_y, sf_mex_create("y", &c8_f_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c8_b_y, 5, c8_h_y);
  c8_f_hoistedGlobal = *chartInstance->c8_outstanding_packet_index;
  c8_g_u = c8_f_hoistedGlobal;
  c8_i_y = NULL;
  sf_mex_assign(&c8_i_y, sf_mex_create("y", &c8_g_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c8_b_y, 6, c8_i_y);
  c8_g_hoistedGlobal = *chartInstance->c8_packet_index;
  c8_h_u = c8_g_hoistedGlobal;
  c8_j_y = NULL;
  sf_mex_assign(&c8_j_y, sf_mex_create("y", &c8_h_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c8_b_y, 7, c8_j_y);
  c8_k_y = NULL;
  sf_mex_assign(&c8_k_y, sf_mex_create("y", *chartInstance->c8_packet_queue, 1,
    0U, 1U, 0U, 2, 410, 50000), false);
  sf_mex_setcell(c8_b_y, 8, c8_k_y);
  c8_h_hoistedGlobal = *chartInstance->c8_packet_queue_sz;
  c8_i_u = c8_h_hoistedGlobal;
  c8_l_y = NULL;
  sf_mex_assign(&c8_l_y, sf_mex_create("y", &c8_i_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c8_b_y, 9, c8_l_y);
  c8_i_hoistedGlobal = *chartInstance->c8_queue_head;
  c8_j_u = c8_i_hoistedGlobal;
  c8_m_y = NULL;
  sf_mex_assign(&c8_m_y, sf_mex_create("y", &c8_j_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c8_b_y, 10, c8_m_y);
  c8_j_hoistedGlobal = *chartInstance->c8_queue_tail;
  c8_k_u = c8_j_hoistedGlobal;
  c8_n_y = NULL;
  sf_mex_assign(&c8_n_y, sf_mex_create("y", &c8_k_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c8_b_y, 11, c8_n_y);
  c8_k_hoistedGlobal = *chartInstance->c8_is_active_c8_General;
  c8_l_u = c8_k_hoistedGlobal;
  c8_o_y = NULL;
  sf_mex_assign(&c8_o_y, sf_mex_create("y", &c8_l_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c8_b_y, 12, c8_o_y);
  c8_l_hoistedGlobal = *chartInstance->c8_is_active_SendControlMachine;
  c8_m_u = c8_l_hoistedGlobal;
  c8_p_y = NULL;
  sf_mex_assign(&c8_p_y, sf_mex_create("y", &c8_m_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c8_b_y, 13, c8_p_y);
  c8_m_hoistedGlobal = *chartInstance->c8_is_active_UpdatePacketQueue;
  c8_n_u = c8_m_hoistedGlobal;
  c8_q_y = NULL;
  sf_mex_assign(&c8_q_y, sf_mex_create("y", &c8_n_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c8_b_y, 14, c8_q_y);
  c8_n_hoistedGlobal = *chartInstance->c8_is_active_FixMonitor;
  c8_o_u = c8_n_hoistedGlobal;
  c8_r_y = NULL;
  sf_mex_assign(&c8_r_y, sf_mex_create("y", &c8_o_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c8_b_y, 15, c8_r_y);
  c8_o_hoistedGlobal = *chartInstance->c8_is_SendControlMachine;
  c8_p_u = c8_o_hoistedGlobal;
  c8_s_y = NULL;
  sf_mex_assign(&c8_s_y, sf_mex_create("y", &c8_p_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c8_b_y, 16, c8_s_y);
  c8_p_hoistedGlobal = *chartInstance->c8_is_UpdatePacketQueue;
  c8_q_u = c8_p_hoistedGlobal;
  c8_t_y = NULL;
  sf_mex_assign(&c8_t_y, sf_mex_create("y", &c8_q_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c8_b_y, 17, c8_t_y);
  c8_q_hoistedGlobal = *chartInstance->c8_is_FixMonitor;
  c8_r_u = c8_q_hoistedGlobal;
  c8_u_y = NULL;
  sf_mex_assign(&c8_u_y, sf_mex_create("y", &c8_r_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c8_b_y, 18, c8_u_y);
  c8_r_hoistedGlobal = *chartInstance->c8_is_Fixed;
  c8_s_u = c8_r_hoistedGlobal;
  c8_v_y = NULL;
  sf_mex_assign(&c8_v_y, sf_mex_create("y", &c8_s_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c8_b_y, 19, c8_v_y);
  c8_s_hoistedGlobal = *chartInstance->c8_temporalCounter_i2;
  c8_t_u = c8_s_hoistedGlobal;
  c8_w_y = NULL;
  sf_mex_assign(&c8_w_y, sf_mex_create("y", &c8_t_u, 5, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c8_b_y, 20, c8_w_y);
  c8_t_hoistedGlobal = *chartInstance->c8_temporalCounter_i1;
  c8_u_u = c8_t_hoistedGlobal;
  c8_x_y = NULL;
  sf_mex_assign(&c8_x_y, sf_mex_create("y", &c8_u_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c8_b_y, 21, c8_x_y);
  c8_u_hoistedGlobal = *chartInstance->c8_temporalCounter_i3;
  c8_v_u = c8_u_hoistedGlobal;
  c8_y_y = NULL;
  sf_mex_assign(&c8_y_y, sf_mex_create("y", &c8_v_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c8_b_y, 22, c8_y_y);
  sf_mex_assign(&c8_st, c8_b_y, false);
  return c8_st;
}

static void set_sim_state_c8_General(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_st)
{
  const mxArray *c8_b_u;
  real32_T c8_fv0[410];
  int32_T c8_i2;
  int32_T c8_i3;
  c8_b_u = sf_mex_dup(c8_st);
  c8_h_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("data_out",
    c8_b_u, 0)), "data_out", c8_fv0);
  for (c8_i2 = 0; c8_i2 < 410; c8_i2++) {
    (*chartInstance->c8_data_out)[c8_i2] = c8_fv0[c8_i2];
  }

  *chartInstance->c8_queue_size = c8_f_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("queue_size", c8_b_u, 1)), "queue_size");
  *chartInstance->c8_resetUDP = c8_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("resetUDP", c8_b_u, 2)), "resetUDP");
  *chartInstance->c8_total_timeouts = c8_f_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("total_timeouts", c8_b_u, 3)), "total_timeouts");
  *chartInstance->c8_i = c8_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("i", c8_b_u, 4)), "i");
  *chartInstance->c8_j = c8_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("j", c8_b_u, 5)), "j");
  *chartInstance->c8_outstanding_packet_index = c8_f_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("outstanding_packet_index", c8_b_u,
       6)), "outstanding_packet_index");
  *chartInstance->c8_packet_index = c8_j_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("packet_index", c8_b_u, 7)), "packet_index");
  c8_l_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("packet_queue",
    c8_b_u, 8)), "packet_queue", chartInstance->c8_fv1);
  for (c8_i3 = 0; c8_i3 < 20500000; c8_i3++) {
    (*chartInstance->c8_packet_queue)[c8_i3] = chartInstance->c8_fv1[c8_i3];
  }

  *chartInstance->c8_packet_queue_sz = c8_f_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("packet_queue_sz", c8_b_u, 9)), "packet_queue_sz");
  *chartInstance->c8_queue_head = c8_j_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("queue_head", c8_b_u, 10)), "queue_head");
  *chartInstance->c8_queue_tail = c8_j_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("queue_tail", c8_b_u, 11)), "queue_tail");
  *chartInstance->c8_is_active_c8_General = c8_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_c8_General", c8_b_u, 12)),
    "is_active_c8_General");
  *chartInstance->c8_is_active_SendControlMachine = c8_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_SendControlMachine",
       c8_b_u, 13)), "is_active_SendControlMachine");
  *chartInstance->c8_is_active_UpdatePacketQueue = c8_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_UpdatePacketQueue",
       c8_b_u, 14)), "is_active_UpdatePacketQueue");
  *chartInstance->c8_is_active_FixMonitor = c8_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_active_FixMonitor", c8_b_u, 15)),
    "is_active_FixMonitor");
  *chartInstance->c8_is_SendControlMachine = c8_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_SendControlMachine", c8_b_u, 16)),
    "is_SendControlMachine");
  *chartInstance->c8_is_UpdatePacketQueue = c8_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_UpdatePacketQueue", c8_b_u, 17)),
    "is_UpdatePacketQueue");
  *chartInstance->c8_is_FixMonitor = c8_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_FixMonitor", c8_b_u, 18)), "is_FixMonitor");
  *chartInstance->c8_is_Fixed = c8_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("is_Fixed", c8_b_u, 19)), "is_Fixed");
  *chartInstance->c8_temporalCounter_i2 = c8_n_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("temporalCounter_i2", c8_b_u, 20)),
    "temporalCounter_i2");
  *chartInstance->c8_temporalCounter_i1 = c8_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("temporalCounter_i1", c8_b_u, 21)),
    "temporalCounter_i1");
  *chartInstance->c8_temporalCounter_i3 = c8_d_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("temporalCounter_i3", c8_b_u, 22)),
    "temporalCounter_i3");
  sf_mex_assign(&chartInstance->c8_setSimStateSideEffectsInfo,
                c8_p_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "setSimStateSideEffectsInfo", c8_b_u, 23)), "setSimStateSideEffectsInfo"),
                true);
  sf_mex_destroy(&c8_b_u);
  chartInstance->c8_doSetSimStateSideEffects = 1U;
  c8_update_debugger_state_c8_General(chartInstance);
  sf_mex_destroy(&c8_st);
}

static void c8_set_sim_state_side_effects_c8_General(SFc8_GeneralInstanceStruct *
  chartInstance)
{
  if (chartInstance->c8_doSetSimStateSideEffects != 0) {
    if (*chartInstance->c8_is_Fixed == c8_IN_SendPacket) {
      if (sf_mex_sub(chartInstance->c8_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 7) == 0.0) {
        *chartInstance->c8_temporalCounter_i1 = 0U;
      }
    }

    if (*chartInstance->c8_is_SendControlMachine == c8_IN_ResetUDPPort) {
      if (sf_mex_sub(chartInstance->c8_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 8) == 0.0) {
        *chartInstance->c8_temporalCounter_i3 = 0U;
      }
    }

    if (*chartInstance->c8_is_FixMonitor == c8_IN_Fix) {
      if (sf_mex_sub(chartInstance->c8_setSimStateSideEffectsInfo,
                     "setSimStateSideEffectsInfo", 1, 10) == 0.0) {
        *chartInstance->c8_temporalCounter_i2 = 0U;
      }
    }

    chartInstance->c8_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c8_General(SFc8_GeneralInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c8_setSimStateSideEffectsInfo);
}

static void sf_gateway_c8_General(SFc8_GeneralInstanceStruct *chartInstance)
{
  int32_T c8_i4;
  int32_T c8_i5;
  int32_T c8_i6;
  c8_set_sim_state_side_effects_c8_General(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 5U, *chartInstance->c8_sfEvent);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c8_is_exam_running, 14U, 1U, 0U,
                        *chartInstance->c8_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c8_queue_head, 8U, 1U, 0U,
                        *chartInstance->c8_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c8_outstanding_packet_index, 4U, 1U, 0U,
                        *chartInstance->c8_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(chartInstance->c8_FULL_PACKET_SIZE, 19U, 1U, 0U,
                        *chartInstance->c8_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(chartInstance->c8_KINEMATIC_LEN, 20U, 1U, 0U,
                        *chartInstance->c8_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c8_j, 3U, 1U, 0U,
                        *chartInstance->c8_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c8_i, 2U, 1U, 0U,
                        *chartInstance->c8_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c8_packet_queue_sz, 7U, 1U, 0U,
                        *chartInstance->c8_sfEvent, false);
  for (c8_i4 = 0; c8_i4 < 20500000; c8_i4++) {
    _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c8_packet_queue)[c8_i4], 6U,
                          1U, 0U, *chartInstance->c8_sfEvent, false);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c8_runID, 13U, 1U, 0U,
                        *chartInstance->c8_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c8_max_packet_id, 12U, 1U, 0U,
                        *chartInstance->c8_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c8_ack_packet_index, 11U, 1U, 0U,
                        *chartInstance->c8_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c8_packet_index, 5U, 1U, 0U,
                        *chartInstance->c8_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c8_total_timeouts, 18U, 1U, 0U,
                        *chartInstance->c8_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c8_queue_size, 17U, 1U, 0U,
                        *chartInstance->c8_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c8_queue_tail, 9U, 1U, 0U,
                        *chartInstance->c8_sfEvent, false);
  for (c8_i5 = 0; c8_i5 < 400; c8_i5++) {
    _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c8_data_in)[c8_i5], 10U, 1U,
                          0U, *chartInstance->c8_sfEvent, false);
  }

  for (c8_i6 = 0; c8_i6 < 410; c8_i6++) {
    _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c8_data_out)[c8_i6], 16U, 1U,
                          0U, *chartInstance->c8_sfEvent, false);
  }

  _SFD_DATA_RANGE_CHECK(*chartInstance->c8_resetUDP, 15U, 1U, 0U,
                        *chartInstance->c8_sfEvent, false);
  if (*chartInstance->c8_e_data_ready_strobe == 1) {
    *chartInstance->c8_sfEvent = c8_event_e_data_ready_strobe;
    _SFD_CE_CALL(EVENT_BEFORE_BROADCAST_TAG, c8_event_e_data_ready_strobe,
                 *chartInstance->c8_sfEvent);
    c8_c8_General(chartInstance);
    _SFD_CE_CALL(EVENT_AFTER_BROADCAST_TAG, c8_event_e_data_ready_strobe,
                 *chartInstance->c8_sfEvent);
  }

  if (*chartInstance->c8_e_clk == 1) {
    if (*chartInstance->c8_temporalCounter_i1 < 15U) {
      *chartInstance->c8_temporalCounter_i1 = c8__u8_s32_(chartInstance,
        *chartInstance->c8_temporalCounter_i1 + 1);
    }

    if (*chartInstance->c8_temporalCounter_i2 < 1023U) {
      *chartInstance->c8_temporalCounter_i2 = c8__u16_s32_(chartInstance,
        *chartInstance->c8_temporalCounter_i2 + 1);
    }

    *chartInstance->c8_sfEvent = c8_event_e_clk;
    _SFD_CE_CALL(EVENT_BEFORE_BROADCAST_TAG, c8_event_e_clk,
                 *chartInstance->c8_sfEvent);
    c8_c8_General(chartInstance);
    _SFD_CE_CALL(EVENT_AFTER_BROADCAST_TAG, c8_event_e_clk,
                 *chartInstance->c8_sfEvent);
  }

  if (*chartInstance->c8_e_fast_clk != 0) {
    if (*chartInstance->c8_temporalCounter_i3 < 3U) {
      *chartInstance->c8_temporalCounter_i3 = c8__u8_s32_(chartInstance,
        *chartInstance->c8_temporalCounter_i3 + 1);
    }

    *chartInstance->c8_sfEvent = c8_event_e_fast_clk;
    _SFD_CE_CALL(EVENT_BEFORE_BROADCAST_TAG, c8_event_e_fast_clk,
                 *chartInstance->c8_sfEvent);
    c8_c8_General(chartInstance);
    _SFD_CE_CALL(EVENT_AFTER_BROADCAST_TAG, c8_event_e_fast_clk,
                 *chartInstance->c8_sfEvent);
  }

  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_GeneralMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c8_General(SFc8_GeneralInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c8_c8_General(SFc8_GeneralInstanceStruct *chartInstance)
{
  boolean_T c8_out;
  int32_T c8_i7;
  int32_T c8_i8;
  boolean_T c8_b_out;
  boolean_T c8_c_out;
  boolean_T c8_d_out;
  boolean_T c8_e_out;
  boolean_T c8_temp;
  boolean_T c8_f_out;
  boolean_T c8_g_out;
  int32_T c8_previousEvent;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 5U, *chartInstance->c8_sfEvent);
  if (*chartInstance->c8_is_active_c8_General == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 5U, *chartInstance->c8_sfEvent);
    *chartInstance->c8_is_active_c8_General = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, *chartInstance->c8_sfEvent);
    *chartInstance->c8_is_active_UpdatePacketQueue = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c8_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, *chartInstance->c8_sfEvent);
    *chartInstance->c8_is_UpdatePacketQueue = c8_IN_AddPacketToQueue;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c8_sfEvent);
    *chartInstance->c8_is_active_SendControlMachine = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c8_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 14U, *chartInstance->c8_sfEvent);
    if (*chartInstance->c8_is_SendControlMachine == c8_IN_Fixed) {
    } else {
      *chartInstance->c8_is_SendControlMachine = c8_IN_Fixed;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c8_sfEvent);
      *chartInstance->c8_resetUDP = 0.0;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c8_resetUDP, 15U, 4U, 4U,
                            *chartInstance->c8_sfEvent, false);
    }

    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 16U, *chartInstance->c8_sfEvent);
    if (*chartInstance->c8_is_Fixed == c8_IN_Idle) {
    } else {
      *chartInstance->c8_is_Fixed = c8_IN_Idle;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c8_sfEvent);
    }

    *chartInstance->c8_is_active_FixMonitor = 1U;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c8_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13U, *chartInstance->c8_sfEvent);
    *chartInstance->c8_is_FixMonitor = c8_IN_NoFix;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c8_sfEvent);
  } else {
    if (*chartInstance->c8_is_active_UpdatePacketQueue == 0U) {
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 9U,
                   *chartInstance->c8_sfEvent);
      if (*chartInstance->c8_is_UpdatePacketQueue != c8_IN_AddPacketToQueue) {
      } else {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, *chartInstance->c8_sfEvent);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U,
                     *chartInstance->c8_sfEvent);
        c8_out = (CV_TRANSITION_EVAL(9U, (int32_T)_SFD_CCP_CALL(9U, 0,
                    *chartInstance->c8_sfEvent == c8_event_e_data_ready_strobe
                    != 0U, *chartInstance->c8_sfEvent)) != 0);
        if (c8_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, *chartInstance->c8_sfEvent);
          *chartInstance->c8_packet_index = c8__u32_add__(chartInstance,
            *chartInstance->c8_packet_index, c8__u32_s8_(chartInstance, 1));
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c8_packet_index, 5U, 5U,
                                9U, *chartInstance->c8_sfEvent, false);
          (*chartInstance->c8_packet_queue)[2 + 410 * _SFD_ARRAY_BOUNDS_CHECK(6U,
            (int32_T)*chartInstance->c8_queue_head, 0, 49999, 2, 0)] = (real32_T)*
            chartInstance->c8_packet_index;
          for (c8_i7 = 0; c8_i7 < 20500000; c8_i7++) {
            _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c8_packet_queue)
                                  [c8_i7], 6U, 5U, 9U,
                                  *chartInstance->c8_sfEvent, false);
          }

          (*chartInstance->c8_packet_queue)[1 + 410 * _SFD_ARRAY_BOUNDS_CHECK(6U,
            (int32_T)*chartInstance->c8_queue_head, 0, 49999, 2, 0)] = -12.0F;
          for (c8_i8 = 0; c8_i8 < 20500000; c8_i8++) {
            _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c8_packet_queue)
                                  [c8_i8], 6U, 5U, 9U,
                                  *chartInstance->c8_sfEvent, false);
          }

          recordPacket(&(*chartInstance->c8_packet_queue)
                       [_SFD_ARRAY_BOUNDS_CHECK(6U, *chartInstance->c8_j, 0, 409,
            1, 0) + 410 * _SFD_ARRAY_BOUNDS_CHECK(6U, (int32_T)
            *chartInstance->c8_queue_head, 0, 49999, 2, 0)],
                       c8_const_FULL_PACKET_SIZE, *chartInstance->c8_data_in,
                       c8_const_KINEMATIC_LEN);
          *chartInstance->c8_queue_head = c8__u32_d_(chartInstance,
            muDoubleScalarRem((real_T)c8__u32_add__(chartInstance,
            *chartInstance->c8_queue_head, c8__u32_s8_(chartInstance, 1)),
                              *chartInstance->c8_packet_queue_sz));
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c8_queue_head, 8U, 5U,
                                9U, *chartInstance->c8_sfEvent, false);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                       *chartInstance->c8_sfEvent);
          c8_b_out = (CV_TRANSITION_EVAL(8U, (int32_T)_SFD_CCP_CALL(8U, 0,
            CV_RELATIONAL_EVAL(5U, 8U, 0, (real_T)
                               *chartInstance->c8_packet_index, (real_T)
                               *chartInstance->c8_max_packet_id, 0, 0U,
                               *chartInstance->c8_packet_index ==
                               *chartInstance->c8_max_packet_id) != 0U,
            *chartInstance->c8_sfEvent)) != 0);
          if (c8_b_out) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, *chartInstance->c8_sfEvent);
            *chartInstance->c8_packet_index = 0U;
            _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c8_packet_index, 5U,
                                  5U, 8U, *chartInstance->c8_sfEvent, false);
          } else {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, *chartInstance->c8_sfEvent);
          }

          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                       *chartInstance->c8_sfEvent);
          c8_c_out = (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5U, 0,
            CV_RELATIONAL_EVAL(5U, 5U, 0, (real_T)*chartInstance->c8_queue_head,
                               (real_T)*chartInstance->c8_queue_tail, 0, 0U,
                               *chartInstance->c8_queue_head ==
                               *chartInstance->c8_queue_tail) != 0U,
            *chartInstance->c8_sfEvent)) != 0);
          if (c8_c_out) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, *chartInstance->c8_sfEvent);
            *chartInstance->c8_queue_tail = c8__u32_d_(chartInstance,
              muDoubleScalarRem((real_T)c8__u32_add__(chartInstance,
              *chartInstance->c8_queue_tail, c8__u32_s8_(chartInstance, 1)),
                                *chartInstance->c8_packet_queue_sz));
            _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c8_queue_tail, 9U, 5U,
                                  5U, *chartInstance->c8_sfEvent, false);
          } else {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, *chartInstance->c8_sfEvent);
          }

          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, *chartInstance->c8_sfEvent);
          _SFD_CS_CALL(FUNCTION_ACTIVE_TAG, 8U, *chartInstance->c8_sfEvent);
          _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 8U,
                       *chartInstance->c8_sfEvent);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c8_sfEvent);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                       *chartInstance->c8_sfEvent);
          c8_d_out = (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2U, 0,
            CV_RELATIONAL_EVAL(5U, 2U, 0, (real_T)*chartInstance->c8_queue_head,
                               (real_T)*chartInstance->c8_queue_tail, 0, 2U,
                               *chartInstance->c8_queue_head <
                               *chartInstance->c8_queue_tail) != 0U,
            *chartInstance->c8_sfEvent)) != 0);
          if (c8_d_out) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c8_sfEvent);
            *chartInstance->c8_queue_size = ((real_T)
              *chartInstance->c8_queue_head + *chartInstance->c8_packet_queue_sz)
              - (real_T)*chartInstance->c8_queue_tail;
            _SFD_DATA_RANGE_CHECK(*chartInstance->c8_queue_size, 17U, 5U, 2U,
                                  *chartInstance->c8_sfEvent, false);
          } else {
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                         *chartInstance->c8_sfEvent);
            c8_e_out = (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3U, 0,
              CV_RELATIONAL_EVAL(5U, 3U, 0, (real_T)
                                 *chartInstance->c8_queue_head, (real_T)
                                 *chartInstance->c8_queue_tail, 0, 5U,
                                 *chartInstance->c8_queue_head >=
                                 *chartInstance->c8_queue_tail) != 0U,
              *chartInstance->c8_sfEvent)) != 0);
            if (c8_e_out) {
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c8_sfEvent);
              *chartInstance->c8_queue_size = (real_T)c8__u32_minus__
                (chartInstance, *chartInstance->c8_queue_head,
                 *chartInstance->c8_queue_tail);
              _SFD_DATA_RANGE_CHECK(*chartInstance->c8_queue_size, 17U, 5U, 3U, *
                                    chartInstance->c8_sfEvent, false);
            }
          }

          _SFD_SYMBOL_SCOPE_POP();
          _SFD_CS_CALL(FUNCTION_INACTIVE_TAG, 8U, *chartInstance->c8_sfEvent);
          _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, *chartInstance->c8_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c8_sfEvent);
          *chartInstance->c8_is_UpdatePacketQueue = c8_IN_AddPacketToQueue;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c8_sfEvent);
        } else {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, *chartInstance->c8_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c8_sfEvent);
          *chartInstance->c8_is_UpdatePacketQueue = c8_IN_AddPacketToQueue;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c8_sfEvent);
        }

        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 10U, *chartInstance->c8_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 9U, *chartInstance->c8_sfEvent);
    }

    if (*chartInstance->c8_is_active_SendControlMachine == 0U) {
    } else {
      c8_SendControlMachine(chartInstance);
    }

    if (*chartInstance->c8_is_active_FixMonitor == 0U) {
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                   *chartInstance->c8_sfEvent);
      switch (*chartInstance->c8_is_FixMonitor) {
       case c8_IN_Fix:
        CV_STATE_EVAL(0, 0, 1);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 15U,
                     *chartInstance->c8_sfEvent);
        c8_temp = (_SFD_CCP_CALL(15U, 0, *chartInstance->c8_sfEvent ==
                    c8_event_e_fast_clk != 0U, *chartInstance->c8_sfEvent) != 0);
        if (c8_temp) {
          c8_temp = (_SFD_CCP_CALL(15U, 1, *chartInstance->c8_temporalCounter_i2
                      >= 1000 != 0U, *chartInstance->c8_sfEvent) != 0);
        }

        c8_f_out = (CV_TRANSITION_EVAL(15U, (int32_T)c8_temp) != 0);
        if (c8_f_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 15U, *chartInstance->c8_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c8_sfEvent);
          *chartInstance->c8_is_FixMonitor = c8_IN_NoFix;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c8_sfEvent);
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                       *chartInstance->c8_sfEvent);
        }

        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c8_sfEvent);
        break;

       case c8_IN_NoFix:
        CV_STATE_EVAL(0, 0, 2);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 12U,
                     *chartInstance->c8_sfEvent);
        c8_g_out = (CV_TRANSITION_EVAL(12U, (int32_T)_SFD_CCP_CALL(12U, 0,
          CV_RELATIONAL_EVAL(5U, 12U, 0, *chartInstance->c8_queue_size, 2500.0,
                             -1, 4U, *chartInstance->c8_queue_size > 2500.0) !=
          0U, *chartInstance->c8_sfEvent)) != 0);
        if (c8_g_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12U, *chartInstance->c8_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c8_sfEvent);
          *chartInstance->c8_is_FixMonitor = c8_IN_Fix;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c8_sfEvent);
          *chartInstance->c8_temporalCounter_i2 = 0U;
          c8_previousEvent = *chartInstance->c8_sfEvent;
          *chartInstance->c8_sfEvent = c8_event_e_reset_UDP;
          _SFD_CE_CALL(EVENT_BEFORE_BROADCAST_TAG, c8_event_e_reset_UDP,
                       *chartInstance->c8_sfEvent);
          if (*chartInstance->c8_is_active_SendControlMachine == 0U) {
          } else {
            c8_SendControlMachine(chartInstance);
          }

          _SFD_CE_CALL(EVENT_AFTER_BROADCAST_TAG, c8_event_e_reset_UDP,
                       *chartInstance->c8_sfEvent);
          *chartInstance->c8_sfEvent = c8_previousEvent;
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                       *chartInstance->c8_sfEvent);
        }

        _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c8_sfEvent);
        break;

       default:
        CV_STATE_EVAL(0, 0, 0);

        /* Unreachable state, for coverage only */
        *chartInstance->c8_is_FixMonitor = c8_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c8_sfEvent);
        break;
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c8_sfEvent);
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, *chartInstance->c8_sfEvent);
}

static void initSimStructsc8_General(SFc8_GeneralInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c8_SendControlMachine(SFc8_GeneralInstanceStruct *chartInstance)
{
  boolean_T c8_temp;
  boolean_T c8_out;
  _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U, *chartInstance->c8_sfEvent);
  switch (*chartInstance->c8_is_SendControlMachine) {
   case c8_IN_Fixed:
    CV_STATE_EVAL(3, 0, 1);
    c8_Fixed(chartInstance);
    break;

   case c8_IN_ResetUDPPort:
    CV_STATE_EVAL(3, 0, 2);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 27U,
                 *chartInstance->c8_sfEvent);
    c8_temp = (_SFD_CCP_CALL(27U, 0, *chartInstance->c8_sfEvent ==
                c8_event_e_fast_clk != 0U, *chartInstance->c8_sfEvent) != 0);
    if (c8_temp) {
      c8_temp = (_SFD_CCP_CALL(27U, 1, *chartInstance->c8_temporalCounter_i3 >=
                  2 != 0U, *chartInstance->c8_sfEvent) != 0);
    }

    c8_out = (CV_TRANSITION_EVAL(27U, (int32_T)c8_temp) != 0);
    if (c8_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 27U, *chartInstance->c8_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c8_sfEvent);
      *chartInstance->c8_is_SendControlMachine = c8_IN_Fixed;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c8_sfEvent);
      *chartInstance->c8_resetUDP = 0.0;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c8_resetUDP, 15U, 4U, 4U,
                            *chartInstance->c8_sfEvent, false);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 16U, *chartInstance->c8_sfEvent);
      if (*chartInstance->c8_is_Fixed == c8_IN_Idle) {
      } else {
        *chartInstance->c8_is_Fixed = c8_IN_Idle;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c8_sfEvent);
      }
    } else {
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 7U,
                   *chartInstance->c8_sfEvent);
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, *chartInstance->c8_sfEvent);
    break;

   default:
    CV_STATE_EVAL(3, 0, 0);

    /* Unreachable state, for coverage only */
    *chartInstance->c8_is_SendControlMachine = c8_IN_NO_ACTIVE_CHILD;
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c8_sfEvent);
    break;
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, *chartInstance->c8_sfEvent);
}

static void c8_Fixed(SFc8_GeneralInstanceStruct *chartInstance)
{
  boolean_T c8_out;
  boolean_T c8_temp;
  boolean_T c8_b_out;
  boolean_T c8_b_temp;
  boolean_T c8_c_out;
  boolean_T c8_d_out;
  boolean_T c8_c_temp;
  boolean_T c8_e_out;
  boolean_T c8_f_out;
  boolean_T c8_g_out;
  boolean_T guard1 = false;
  _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 26U, *chartInstance->c8_sfEvent);
  c8_out = (CV_TRANSITION_EVAL(26U, (int32_T)_SFD_CCP_CALL(26U, 0,
              *chartInstance->c8_sfEvent == c8_event_e_reset_UDP != 0U,
              *chartInstance->c8_sfEvent)) != 0);
  if (c8_out) {
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 26U, *chartInstance->c8_sfEvent);
    switch (*chartInstance->c8_is_Fixed) {
     case c8_IN_Idle:
      CV_STATE_EVAL(4, 1, 1);
      *chartInstance->c8_is_Fixed = c8_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c8_sfEvent);
      break;

     case c8_IN_SendPacket:
      CV_STATE_EVAL(4, 1, 2);
      *chartInstance->c8_is_Fixed = c8_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c8_sfEvent);
      break;

     default:
      CV_STATE_EVAL(4, 1, 0);
      *chartInstance->c8_is_Fixed = c8_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c8_sfEvent);
      break;
    }

    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c8_sfEvent);
    *chartInstance->c8_is_SendControlMachine = c8_IN_ResetUDPPort;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c8_sfEvent);
    *chartInstance->c8_temporalCounter_i3 = 0U;
    *chartInstance->c8_resetUDP = 1.0;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c8_resetUDP, 15U, 4U, 7U,
                          *chartInstance->c8_sfEvent, false);
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U, *chartInstance->c8_sfEvent);
    switch (*chartInstance->c8_is_Fixed) {
     case c8_IN_Idle:
      CV_STATE_EVAL(4, 0, 1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 21U,
                   *chartInstance->c8_sfEvent);
      c8_temp = (_SFD_CCP_CALL(21U, 0, *chartInstance->c8_sfEvent ==
                  c8_event_e_fast_clk != 0U, *chartInstance->c8_sfEvent) != 0);
      if (c8_temp) {
        c8_temp = (_SFD_CCP_CALL(21U, 1, CV_RELATIONAL_EVAL(5U, 21U, 0, (real_T)*
          chartInstance->c8_queue_head, (real_T)*chartInstance->c8_queue_tail, 0,
          1U, *chartInstance->c8_queue_head != *chartInstance->c8_queue_tail) !=
                    0U, *chartInstance->c8_sfEvent) != 0);
      }

      c8_b_out = (CV_TRANSITION_EVAL(21U, (int32_T)c8_temp) != 0);
      if (c8_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 21U, *chartInstance->c8_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c8_sfEvent);
        *chartInstance->c8_is_Fixed = c8_IN_SendPacket;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c8_sfEvent);
        *chartInstance->c8_temporalCounter_i1 = 0U;
        buildOutputPacket(*chartInstance->c8_data_out,
                          &(*chartInstance->c8_packet_queue)[410 *
                          _SFD_ARRAY_BOUNDS_CHECK(6U, (int32_T)
          *chartInstance->c8_queue_tail, 0, 49999, 2, 0)],
                          c8_const_FULL_PACKET_SIZE,
                          *chartInstance->c8_queue_size,
                          *chartInstance->c8_total_timeouts,
                          *chartInstance->c8_runID);
        *chartInstance->c8_outstanding_packet_index =
          (*chartInstance->c8_data_out)[2];
        _SFD_DATA_RANGE_CHECK(*chartInstance->c8_outstanding_packet_index, 4U,
                              4U, 6U, *chartInstance->c8_sfEvent, false);
        sf_call_output_fcn_call(chartInstance->S, 0, "e_send", 0);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U,
                     *chartInstance->c8_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, *chartInstance->c8_sfEvent);
      break;

     case c8_IN_SendPacket:
      CV_STATE_EVAL(4, 0, 2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 23U,
                   *chartInstance->c8_sfEvent);
      c8_b_temp = (_SFD_CCP_CALL(23U, 0, *chartInstance->c8_sfEvent ==
        c8_event_e_fast_clk != 0U, *chartInstance->c8_sfEvent) != 0);
      if (c8_b_temp) {
        c8_b_temp = (_SFD_CCP_CALL(23U, 1, *chartInstance->c8_temporalCounter_i1
          >= 10 != 0U, *chartInstance->c8_sfEvent) != 0);
      }

      c8_c_out = (CV_TRANSITION_EVAL(23U, (int32_T)c8_b_temp) != 0);
      if (c8_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 23U, *chartInstance->c8_sfEvent);
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 25U, *chartInstance->c8_sfEvent);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 28U,
                     *chartInstance->c8_sfEvent);
        c8_d_out = (CV_TRANSITION_EVAL(28U, (int32_T)_SFD_CCP_CALL(28U, 0,
          CV_RELATIONAL_EVAL(5U, 28U, 0, *chartInstance->c8_is_exam_running, 0.0,
                             -1, 0U, *chartInstance->c8_is_exam_running == 0.0)
          != 0U, *chartInstance->c8_sfEvent)) != 0);
        if (c8_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 28U, *chartInstance->c8_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c8_sfEvent);
          *chartInstance->c8_is_Fixed = c8_IN_SendPacket;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c8_sfEvent);
          *chartInstance->c8_temporalCounter_i1 = 0U;
          buildOutputPacket(*chartInstance->c8_data_out,
                            &(*chartInstance->c8_packet_queue)[410 *
                            _SFD_ARRAY_BOUNDS_CHECK(6U, (int32_T)
            *chartInstance->c8_queue_tail, 0, 49999, 2, 0)],
                            c8_const_FULL_PACKET_SIZE,
                            *chartInstance->c8_queue_size,
                            *chartInstance->c8_total_timeouts,
                            *chartInstance->c8_runID);
          *chartInstance->c8_outstanding_packet_index =
            (*chartInstance->c8_data_out)[2];
          _SFD_DATA_RANGE_CHECK(*chartInstance->c8_outstanding_packet_index, 4U,
                                4U, 6U, *chartInstance->c8_sfEvent, false);
          sf_call_output_fcn_call(chartInstance->S, 0, "e_send", 0);
        } else {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 29U, *chartInstance->c8_sfEvent);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 24U, *chartInstance->c8_sfEvent);
          (*chartInstance->c8_total_timeouts)++;
          _SFD_DATA_RANGE_CHECK(*chartInstance->c8_total_timeouts, 18U, 5U, 24U,
                                *chartInstance->c8_sfEvent, false);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c8_sfEvent);
          *chartInstance->c8_is_Fixed = c8_IN_SendPacket;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c8_sfEvent);
          *chartInstance->c8_temporalCounter_i1 = 0U;
          buildOutputPacket(*chartInstance->c8_data_out,
                            &(*chartInstance->c8_packet_queue)[410 *
                            _SFD_ARRAY_BOUNDS_CHECK(6U, (int32_T)
            *chartInstance->c8_queue_tail, 0, 49999, 2, 0)],
                            c8_const_FULL_PACKET_SIZE,
                            *chartInstance->c8_queue_size,
                            *chartInstance->c8_total_timeouts,
                            *chartInstance->c8_runID);
          *chartInstance->c8_outstanding_packet_index =
            (*chartInstance->c8_data_out)[2];
          _SFD_DATA_RANGE_CHECK(*chartInstance->c8_outstanding_packet_index, 4U,
                                4U, 6U, *chartInstance->c8_sfEvent, false);
          sf_call_output_fcn_call(chartInstance->S, 0, "e_send", 0);
        }
      } else {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 22U, *chartInstance->c8_sfEvent);
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 20U,
                     *chartInstance->c8_sfEvent);
        c8_c_temp = (_SFD_CCP_CALL(20U, 0, *chartInstance->c8_sfEvent ==
          c8_event_e_fast_clk != 0U, *chartInstance->c8_sfEvent) != 0);
        if (c8_c_temp) {
          c8_c_temp = (_SFD_CCP_CALL(20U, 1, CV_RELATIONAL_EVAL(5U, 20U, 0,
            (real_T)*chartInstance->c8_ack_packet_index,
            *chartInstance->c8_outstanding_packet_index, -1, 0U, (real_T)
            *chartInstance->c8_ack_packet_index ==
            *chartInstance->c8_outstanding_packet_index) != 0U,
            *chartInstance->c8_sfEvent) != 0);
        }

        c8_e_out = (CV_TRANSITION_EVAL(20U, (int32_T)c8_c_temp) != 0);
        guard1 = false;
        if (c8_e_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 20U, *chartInstance->c8_sfEvent);
          *chartInstance->c8_queue_tail = c8__u32_d_(chartInstance,
            muDoubleScalarRem((real_T)c8__u32_add__(chartInstance,
            *chartInstance->c8_queue_tail, c8__u32_s8_(chartInstance, 1)),
                              *chartInstance->c8_packet_queue_sz));
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c8_queue_tail, 9U, 5U,
                                20U, *chartInstance->c8_sfEvent, false);
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 18U, *chartInstance->c8_sfEvent);
          _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 17U,
                       *chartInstance->c8_sfEvent);
          c8_f_out = (CV_TRANSITION_EVAL(17U, (int32_T)_SFD_CCP_CALL(17U, 0,
            CV_RELATIONAL_EVAL(5U, 17U, 0, (real_T)*chartInstance->c8_queue_head,
                               (real_T)*chartInstance->c8_queue_tail, 0, 0U,
                               *chartInstance->c8_queue_head ==
                               *chartInstance->c8_queue_tail) != 0U,
            *chartInstance->c8_sfEvent)) != 0);
          if (c8_f_out) {
            _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 17U, *chartInstance->c8_sfEvent);
            _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c8_sfEvent);
            *chartInstance->c8_is_Fixed = c8_IN_Idle;
            _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c8_sfEvent);
          } else {
            _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 19U,
                         *chartInstance->c8_sfEvent);
            c8_g_out = (CV_TRANSITION_EVAL(19U, (int32_T)_SFD_CCP_CALL(19U, 0,
              CV_RELATIONAL_EVAL(5U, 19U, 0, (real_T)
                                 *chartInstance->c8_queue_head, (real_T)
                                 *chartInstance->c8_queue_tail, 0, 1U,
                                 *chartInstance->c8_queue_head !=
                                 *chartInstance->c8_queue_tail) != 0U,
              *chartInstance->c8_sfEvent)) != 0);
            if (c8_g_out) {
              _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 19U,
                           *chartInstance->c8_sfEvent);
              _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c8_sfEvent);
              *chartInstance->c8_is_Fixed = c8_IN_SendPacket;
              _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c8_sfEvent);
              *chartInstance->c8_temporalCounter_i1 = 0U;
              buildOutputPacket(*chartInstance->c8_data_out,
                                &(*chartInstance->c8_packet_queue)[410 *
                                _SFD_ARRAY_BOUNDS_CHECK(6U, (int32_T)
                *chartInstance->c8_queue_tail, 0, 49999, 2, 0)],
                                c8_const_FULL_PACKET_SIZE,
                                *chartInstance->c8_queue_size,
                                *chartInstance->c8_total_timeouts,
                                *chartInstance->c8_runID);
              *chartInstance->c8_outstanding_packet_index =
                (*chartInstance->c8_data_out)[2];
              _SFD_DATA_RANGE_CHECK(*chartInstance->c8_outstanding_packet_index,
                                    4U, 4U, 6U, *chartInstance->c8_sfEvent,
                                    false);
              sf_call_output_fcn_call(chartInstance->S, 0, "e_send", 0);
            } else {
              guard1 = true;
            }
          }
        } else {
          guard1 = true;
        }

        if (guard1 == true) {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 6U,
                       *chartInstance->c8_sfEvent);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, *chartInstance->c8_sfEvent);
      break;

     default:
      CV_STATE_EVAL(4, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c8_is_Fixed = c8_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c8_sfEvent);
      break;
    }
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, *chartInstance->c8_sfEvent);
}

static void init_script_number_translation(uint32_T c8_machineNumber, uint32_T
  c8_chartNumber, uint32_T c8_instanceNumber)
{
  (void)c8_machineNumber;
  (void)c8_chartNumber;
  (void)c8_instanceNumber;
}

const mxArray *sf_c8_General_get_eml_resolved_functions_info(void)
{
  const mxArray *c8_nameCaptureInfo = NULL;
  c8_nameCaptureInfo = NULL;
  sf_mex_assign(&c8_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c8_nameCaptureInfo;
}

static const mxArray *c8_sf_marshallOut(void *chartInstanceVoid, void *c8_inData)
{
  const mxArray *c8_mxArrayOutData = NULL;
  int8_T c8_b_u;
  const mxArray *c8_b_y = NULL;
  SFc8_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc8_GeneralInstanceStruct *)chartInstanceVoid;
  c8_mxArrayOutData = NULL;
  c8_b_u = *(int8_T *)c8_inData;
  c8_b_y = NULL;
  sf_mex_assign(&c8_b_y, sf_mex_create("y", &c8_b_u, 2, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c8_mxArrayOutData, c8_b_y, false);
  return c8_mxArrayOutData;
}

static int8_T c8_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_u, const emlrtMsgIdentifier *c8_parentId)
{
  int8_T c8_b_y;
  int8_T c8_i9;
  (void)chartInstance;
  sf_mex_import(c8_parentId, sf_mex_dup(c8_b_u), &c8_i9, 1, 2, 0U, 0, 0U, 0);
  c8_b_y = c8_i9;
  sf_mex_destroy(&c8_b_u);
  return c8_b_y;
}

static void c8_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c8_mxArrayInData, const char_T *c8_varName, void *c8_outData)
{
  const mxArray *c8_b_e_data_ready_strobe;
  const char_T *c8_identifier;
  emlrtMsgIdentifier c8_thisId;
  int8_T c8_b_y;
  SFc8_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc8_GeneralInstanceStruct *)chartInstanceVoid;
  c8_b_e_data_ready_strobe = sf_mex_dup(c8_mxArrayInData);
  c8_identifier = c8_varName;
  c8_thisId.fIdentifier = c8_identifier;
  c8_thisId.fParent = NULL;
  c8_b_y = c8_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c8_b_e_data_ready_strobe), &c8_thisId);
  sf_mex_destroy(&c8_b_e_data_ready_strobe);
  *(int8_T *)c8_outData = c8_b_y;
  sf_mex_destroy(&c8_mxArrayInData);
}

static const mxArray *c8_b_sf_marshallOut(void *chartInstanceVoid, void
  *c8_inData)
{
  const mxArray *c8_mxArrayOutData = NULL;
  int32_T c8_b_u;
  const mxArray *c8_b_y = NULL;
  SFc8_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc8_GeneralInstanceStruct *)chartInstanceVoid;
  c8_mxArrayOutData = NULL;
  c8_b_u = *(int32_T *)c8_inData;
  c8_b_y = NULL;
  sf_mex_assign(&c8_b_y, sf_mex_create("y", &c8_b_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c8_mxArrayOutData, c8_b_y, false);
  return c8_mxArrayOutData;
}

static int32_T c8_b_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_sfEvent, const char_T *c8_identifier)
{
  int32_T c8_b_y;
  emlrtMsgIdentifier c8_thisId;
  c8_thisId.fIdentifier = c8_identifier;
  c8_thisId.fParent = NULL;
  c8_b_y = c8_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_b_sfEvent),
    &c8_thisId);
  sf_mex_destroy(&c8_b_sfEvent);
  return c8_b_y;
}

static int32_T c8_c_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_u, const emlrtMsgIdentifier *c8_parentId)
{
  int32_T c8_b_y;
  int32_T c8_i10;
  (void)chartInstance;
  sf_mex_import(c8_parentId, sf_mex_dup(c8_b_u), &c8_i10, 1, 6, 0U, 0, 0U, 0);
  c8_b_y = c8_i10;
  sf_mex_destroy(&c8_b_u);
  return c8_b_y;
}

static void c8_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c8_mxArrayInData, const char_T *c8_varName, void *c8_outData)
{
  const mxArray *c8_b_sfEvent;
  const char_T *c8_identifier;
  emlrtMsgIdentifier c8_thisId;
  int32_T c8_b_y;
  SFc8_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc8_GeneralInstanceStruct *)chartInstanceVoid;
  c8_b_sfEvent = sf_mex_dup(c8_mxArrayInData);
  c8_identifier = c8_varName;
  c8_thisId.fIdentifier = c8_identifier;
  c8_thisId.fParent = NULL;
  c8_b_y = c8_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_b_sfEvent),
    &c8_thisId);
  sf_mex_destroy(&c8_b_sfEvent);
  *(int32_T *)c8_outData = c8_b_y;
  sf_mex_destroy(&c8_mxArrayInData);
}

static const mxArray *c8_c_sf_marshallOut(void *chartInstanceVoid, void
  *c8_inData)
{
  const mxArray *c8_mxArrayOutData = NULL;
  uint8_T c8_b_u;
  const mxArray *c8_b_y = NULL;
  SFc8_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc8_GeneralInstanceStruct *)chartInstanceVoid;
  c8_mxArrayOutData = NULL;
  c8_b_u = *(uint8_T *)c8_inData;
  c8_b_y = NULL;
  sf_mex_assign(&c8_b_y, sf_mex_create("y", &c8_b_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c8_mxArrayOutData, c8_b_y, false);
  return c8_mxArrayOutData;
}

static uint8_T c8_d_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_is_UpdatePacketQueue, const char_T *c8_identifier)
{
  uint8_T c8_b_y;
  emlrtMsgIdentifier c8_thisId;
  c8_thisId.fIdentifier = c8_identifier;
  c8_thisId.fParent = NULL;
  c8_b_y = c8_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c8_b_is_UpdatePacketQueue), &c8_thisId);
  sf_mex_destroy(&c8_b_is_UpdatePacketQueue);
  return c8_b_y;
}

static uint8_T c8_e_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_u, const emlrtMsgIdentifier *c8_parentId)
{
  uint8_T c8_b_y;
  uint8_T c8_u0;
  (void)chartInstance;
  sf_mex_import(c8_parentId, sf_mex_dup(c8_b_u), &c8_u0, 1, 3, 0U, 0, 0U, 0);
  c8_b_y = c8_u0;
  sf_mex_destroy(&c8_b_u);
  return c8_b_y;
}

static void c8_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c8_mxArrayInData, const char_T *c8_varName, void *c8_outData)
{
  const mxArray *c8_b_is_UpdatePacketQueue;
  const char_T *c8_identifier;
  emlrtMsgIdentifier c8_thisId;
  uint8_T c8_b_y;
  SFc8_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc8_GeneralInstanceStruct *)chartInstanceVoid;
  c8_b_is_UpdatePacketQueue = sf_mex_dup(c8_mxArrayInData);
  c8_identifier = c8_varName;
  c8_thisId.fIdentifier = c8_identifier;
  c8_thisId.fParent = NULL;
  c8_b_y = c8_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c8_b_is_UpdatePacketQueue), &c8_thisId);
  sf_mex_destroy(&c8_b_is_UpdatePacketQueue);
  *(uint8_T *)c8_outData = c8_b_y;
  sf_mex_destroy(&c8_mxArrayInData);
}

static const mxArray *c8_d_sf_marshallOut(void *chartInstanceVoid, void
  *c8_inData)
{
  const mxArray *c8_mxArrayOutData = NULL;
  real_T c8_b_u;
  const mxArray *c8_b_y = NULL;
  SFc8_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc8_GeneralInstanceStruct *)chartInstanceVoid;
  c8_mxArrayOutData = NULL;
  c8_b_u = *(real_T *)c8_inData;
  c8_b_y = NULL;
  sf_mex_assign(&c8_b_y, sf_mex_create("y", &c8_b_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c8_mxArrayOutData, c8_b_y, false);
  return c8_mxArrayOutData;
}

static real_T c8_f_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_resetUDP, const char_T *c8_identifier)
{
  real_T c8_b_y;
  emlrtMsgIdentifier c8_thisId;
  c8_thisId.fIdentifier = c8_identifier;
  c8_thisId.fParent = NULL;
  c8_b_y = c8_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_b_resetUDP),
    &c8_thisId);
  sf_mex_destroy(&c8_b_resetUDP);
  return c8_b_y;
}

static real_T c8_g_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_u, const emlrtMsgIdentifier *c8_parentId)
{
  real_T c8_b_y;
  real_T c8_d0;
  (void)chartInstance;
  sf_mex_import(c8_parentId, sf_mex_dup(c8_b_u), &c8_d0, 1, 0, 0U, 0, 0U, 0);
  c8_b_y = c8_d0;
  sf_mex_destroy(&c8_b_u);
  return c8_b_y;
}

static void c8_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c8_mxArrayInData, const char_T *c8_varName, void *c8_outData)
{
  const mxArray *c8_b_resetUDP;
  const char_T *c8_identifier;
  emlrtMsgIdentifier c8_thisId;
  real_T c8_b_y;
  SFc8_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc8_GeneralInstanceStruct *)chartInstanceVoid;
  c8_b_resetUDP = sf_mex_dup(c8_mxArrayInData);
  c8_identifier = c8_varName;
  c8_thisId.fIdentifier = c8_identifier;
  c8_thisId.fParent = NULL;
  c8_b_y = c8_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_b_resetUDP),
    &c8_thisId);
  sf_mex_destroy(&c8_b_resetUDP);
  *(real_T *)c8_outData = c8_b_y;
  sf_mex_destroy(&c8_mxArrayInData);
}

static const mxArray *c8_e_sf_marshallOut(void *chartInstanceVoid, void
  *c8_inData)
{
  const mxArray *c8_mxArrayOutData = NULL;
  int32_T c8_i11;
  real32_T c8_b_u[410];
  const mxArray *c8_b_y = NULL;
  SFc8_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc8_GeneralInstanceStruct *)chartInstanceVoid;
  c8_mxArrayOutData = NULL;
  for (c8_i11 = 0; c8_i11 < 410; c8_i11++) {
    c8_b_u[c8_i11] = (*(real32_T (*)[410])c8_inData)[c8_i11];
  }

  c8_b_y = NULL;
  sf_mex_assign(&c8_b_y, sf_mex_create("y", c8_b_u, 1, 0U, 1U, 0U, 1, 410),
                false);
  sf_mex_assign(&c8_mxArrayOutData, c8_b_y, false);
  return c8_mxArrayOutData;
}

static void c8_h_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_data_out, const char_T *c8_identifier, real32_T c8_b_y[410])
{
  emlrtMsgIdentifier c8_thisId;
  c8_thisId.fIdentifier = c8_identifier;
  c8_thisId.fParent = NULL;
  c8_i_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_b_data_out), &c8_thisId,
                        c8_b_y);
  sf_mex_destroy(&c8_b_data_out);
}

static void c8_i_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_u, const emlrtMsgIdentifier *c8_parentId, real32_T c8_b_y
  [410])
{
  real32_T c8_fv2[410];
  int32_T c8_i12;
  (void)chartInstance;
  sf_mex_import(c8_parentId, sf_mex_dup(c8_b_u), c8_fv2, 1, 1, 0U, 1, 0U, 1, 410);
  for (c8_i12 = 0; c8_i12 < 410; c8_i12++) {
    c8_b_y[c8_i12] = c8_fv2[c8_i12];
  }

  sf_mex_destroy(&c8_b_u);
}

static void c8_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c8_mxArrayInData, const char_T *c8_varName, void *c8_outData)
{
  const mxArray *c8_b_data_out;
  const char_T *c8_identifier;
  emlrtMsgIdentifier c8_thisId;
  real32_T c8_b_y[410];
  int32_T c8_i13;
  SFc8_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc8_GeneralInstanceStruct *)chartInstanceVoid;
  c8_b_data_out = sf_mex_dup(c8_mxArrayInData);
  c8_identifier = c8_varName;
  c8_thisId.fIdentifier = c8_identifier;
  c8_thisId.fParent = NULL;
  c8_i_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_b_data_out), &c8_thisId,
                        c8_b_y);
  sf_mex_destroy(&c8_b_data_out);
  for (c8_i13 = 0; c8_i13 < 410; c8_i13++) {
    (*(real32_T (*)[410])c8_outData)[c8_i13] = c8_b_y[c8_i13];
  }

  sf_mex_destroy(&c8_mxArrayInData);
}

static const mxArray *c8_f_sf_marshallOut(void *chartInstanceVoid, void
  *c8_inData)
{
  const mxArray *c8_mxArrayOutData = NULL;
  int32_T c8_i14;
  real32_T c8_b_u[400];
  const mxArray *c8_b_y = NULL;
  SFc8_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc8_GeneralInstanceStruct *)chartInstanceVoid;
  c8_mxArrayOutData = NULL;
  for (c8_i14 = 0; c8_i14 < 400; c8_i14++) {
    c8_b_u[c8_i14] = (*(real32_T (*)[400])c8_inData)[c8_i14];
  }

  c8_b_y = NULL;
  sf_mex_assign(&c8_b_y, sf_mex_create("y", c8_b_u, 1, 0U, 1U, 0U, 1, 400),
                false);
  sf_mex_assign(&c8_mxArrayOutData, c8_b_y, false);
  return c8_mxArrayOutData;
}

static const mxArray *c8_g_sf_marshallOut(void *chartInstanceVoid, void
  *c8_inData)
{
  const mxArray *c8_mxArrayOutData = NULL;
  uint32_T c8_b_u;
  const mxArray *c8_b_y = NULL;
  SFc8_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc8_GeneralInstanceStruct *)chartInstanceVoid;
  c8_mxArrayOutData = NULL;
  c8_b_u = *(uint32_T *)c8_inData;
  c8_b_y = NULL;
  sf_mex_assign(&c8_b_y, sf_mex_create("y", &c8_b_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c8_mxArrayOutData, c8_b_y, false);
  return c8_mxArrayOutData;
}

static uint32_T c8_j_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_queue_tail, const char_T *c8_identifier)
{
  uint32_T c8_b_y;
  emlrtMsgIdentifier c8_thisId;
  c8_thisId.fIdentifier = c8_identifier;
  c8_thisId.fParent = NULL;
  c8_b_y = c8_k_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_b_queue_tail),
    &c8_thisId);
  sf_mex_destroy(&c8_b_queue_tail);
  return c8_b_y;
}

static uint32_T c8_k_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_u, const emlrtMsgIdentifier *c8_parentId)
{
  uint32_T c8_b_y;
  uint32_T c8_u1;
  (void)chartInstance;
  sf_mex_import(c8_parentId, sf_mex_dup(c8_b_u), &c8_u1, 1, 7, 0U, 0, 0U, 0);
  c8_b_y = c8_u1;
  sf_mex_destroy(&c8_b_u);
  return c8_b_y;
}

static void c8_f_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c8_mxArrayInData, const char_T *c8_varName, void *c8_outData)
{
  const mxArray *c8_b_queue_tail;
  const char_T *c8_identifier;
  emlrtMsgIdentifier c8_thisId;
  uint32_T c8_b_y;
  SFc8_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc8_GeneralInstanceStruct *)chartInstanceVoid;
  c8_b_queue_tail = sf_mex_dup(c8_mxArrayInData);
  c8_identifier = c8_varName;
  c8_thisId.fIdentifier = c8_identifier;
  c8_thisId.fParent = NULL;
  c8_b_y = c8_k_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_b_queue_tail),
    &c8_thisId);
  sf_mex_destroy(&c8_b_queue_tail);
  *(uint32_T *)c8_outData = c8_b_y;
  sf_mex_destroy(&c8_mxArrayInData);
}

static const mxArray *c8_h_sf_marshallOut(void *chartInstanceVoid, void
  *c8_inData)
{
  const mxArray *c8_mxArrayOutData = NULL;
  real32_T c8_b_u;
  const mxArray *c8_b_y = NULL;
  SFc8_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc8_GeneralInstanceStruct *)chartInstanceVoid;
  c8_mxArrayOutData = NULL;
  c8_b_u = *(real32_T *)c8_inData;
  c8_b_y = NULL;
  sf_mex_assign(&c8_b_y, sf_mex_create("y", &c8_b_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c8_mxArrayOutData, c8_b_y, false);
  return c8_mxArrayOutData;
}

static const mxArray *c8_i_sf_marshallOut(void *chartInstanceVoid, void
  *c8_inData)
{
  const mxArray *c8_mxArrayOutData = NULL;
  int32_T c8_i15;
  int32_T c8_i16;
  int32_T c8_i17;
  const mxArray *c8_b_y = NULL;
  SFc8_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc8_GeneralInstanceStruct *)chartInstanceVoid;
  c8_mxArrayOutData = NULL;
  c8_i15 = 0;
  for (c8_i16 = 0; c8_i16 < 50000; c8_i16++) {
    for (c8_i17 = 0; c8_i17 < 410; c8_i17++) {
      chartInstance->c8_u[c8_i17 + c8_i15] = (*(real32_T (*)[20500000])c8_inData)
        [c8_i17 + c8_i15];
    }

    c8_i15 += 410;
  }

  c8_b_y = NULL;
  sf_mex_assign(&c8_b_y, sf_mex_create("y", chartInstance->c8_u, 1, 0U, 1U, 0U,
    2, 410, 50000), false);
  sf_mex_assign(&c8_mxArrayOutData, c8_b_y, false);
  return c8_mxArrayOutData;
}

static void c8_l_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_packet_queue, const char_T *c8_identifier, real32_T
  c8_b_y[20500000])
{
  emlrtMsgIdentifier c8_thisId;
  c8_thisId.fIdentifier = c8_identifier;
  c8_thisId.fParent = NULL;
  c8_m_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_b_packet_queue), &c8_thisId,
                        c8_b_y);
  sf_mex_destroy(&c8_b_packet_queue);
}

static void c8_m_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_u, const emlrtMsgIdentifier *c8_parentId, real32_T c8_b_y
  [20500000])
{
  int32_T c8_i18;
  sf_mex_import(c8_parentId, sf_mex_dup(c8_b_u), chartInstance->c8_fv3, 1, 1, 0U,
                1, 0U, 2, 410, 50000);
  for (c8_i18 = 0; c8_i18 < 20500000; c8_i18++) {
    c8_b_y[c8_i18] = chartInstance->c8_fv3[c8_i18];
  }

  sf_mex_destroy(&c8_b_u);
}

static void c8_g_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c8_mxArrayInData, const char_T *c8_varName, void *c8_outData)
{
  const mxArray *c8_b_packet_queue;
  const char_T *c8_identifier;
  emlrtMsgIdentifier c8_thisId;
  int32_T c8_i19;
  int32_T c8_i20;
  int32_T c8_i21;
  SFc8_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc8_GeneralInstanceStruct *)chartInstanceVoid;
  c8_b_packet_queue = sf_mex_dup(c8_mxArrayInData);
  c8_identifier = c8_varName;
  c8_thisId.fIdentifier = c8_identifier;
  c8_thisId.fParent = NULL;
  c8_m_emlrt_marshallIn(chartInstance, sf_mex_dup(c8_b_packet_queue), &c8_thisId,
                        chartInstance->c8_y);
  sf_mex_destroy(&c8_b_packet_queue);
  c8_i19 = 0;
  for (c8_i20 = 0; c8_i20 < 50000; c8_i20++) {
    for (c8_i21 = 0; c8_i21 < 410; c8_i21++) {
      (*(real32_T (*)[20500000])c8_outData)[c8_i21 + c8_i19] =
        chartInstance->c8_y[c8_i21 + c8_i19];
    }

    c8_i19 += 410;
  }

  sf_mex_destroy(&c8_mxArrayInData);
}

static uint16_T c8_n_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_temporalCounter_i2, const char_T *c8_identifier)
{
  uint16_T c8_b_y;
  emlrtMsgIdentifier c8_thisId;
  c8_thisId.fIdentifier = c8_identifier;
  c8_thisId.fParent = NULL;
  c8_b_y = c8_o_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c8_b_temporalCounter_i2), &c8_thisId);
  sf_mex_destroy(&c8_b_temporalCounter_i2);
  return c8_b_y;
}

static uint16_T c8_o_emlrt_marshallIn(SFc8_GeneralInstanceStruct *chartInstance,
  const mxArray *c8_b_u, const emlrtMsgIdentifier *c8_parentId)
{
  uint16_T c8_b_y;
  uint16_T c8_u2;
  (void)chartInstance;
  sf_mex_import(c8_parentId, sf_mex_dup(c8_b_u), &c8_u2, 1, 5, 0U, 0, 0U, 0);
  c8_b_y = c8_u2;
  sf_mex_destroy(&c8_b_u);
  return c8_b_y;
}

static const mxArray *c8_p_emlrt_marshallIn(SFc8_GeneralInstanceStruct
  *chartInstance, const mxArray *c8_b_setSimStateSideEffectsInfo, const char_T
  *c8_identifier)
{
  const mxArray *c8_b_y = NULL;
  emlrtMsgIdentifier c8_thisId;
  c8_b_y = NULL;
  c8_thisId.fIdentifier = c8_identifier;
  c8_thisId.fParent = NULL;
  sf_mex_assign(&c8_b_y, c8_q_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c8_b_setSimStateSideEffectsInfo), &c8_thisId), false);
  sf_mex_destroy(&c8_b_setSimStateSideEffectsInfo);
  return c8_b_y;
}

static const mxArray *c8_q_emlrt_marshallIn(SFc8_GeneralInstanceStruct
  *chartInstance, const mxArray *c8_b_u, const emlrtMsgIdentifier *c8_parentId)
{
  const mxArray *c8_b_y = NULL;
  (void)chartInstance;
  (void)c8_parentId;
  c8_b_y = NULL;
  sf_mex_assign(&c8_b_y, sf_mex_duplicatearraysafe(&c8_b_u), false);
  sf_mex_destroy(&c8_b_u);
  return c8_b_y;
}

static uint8_T c8__u8_s32_(SFc8_GeneralInstanceStruct *chartInstance, int32_T
  c8_b)
{
  uint8_T c8_a;
  c8_a = (uint8_T)c8_b;
  if (c8_a != c8_b) {
    _SFD_OVERFLOW_DETECTION(SFDB_OVERFLOW, 1U, 0U, *chartInstance->c8_sfEvent,
      false);
  }

  return c8_a;
}

static uint16_T c8__u16_s32_(SFc8_GeneralInstanceStruct *chartInstance, int32_T
  c8_b)
{
  uint16_T c8_a;
  c8_a = (uint16_T)c8_b;
  if (c8_a != c8_b) {
    _SFD_OVERFLOW_DETECTION(SFDB_OVERFLOW, 1U, 0U, *chartInstance->c8_sfEvent,
      false);
  }

  return c8_a;
}

static uint32_T c8__u32_d_(SFc8_GeneralInstanceStruct *chartInstance, real_T
  c8_b)
{
  uint32_T c8_a;
  c8_a = (uint32_T)c8_b;
  if ((c8_b < 0.0) || ((real_T)c8_a != muDoubleScalarFloor(c8_b))) {
    _SFD_OVERFLOW_DETECTION(SFDB_OVERFLOW, 1U, 0U, *chartInstance->c8_sfEvent,
      false);
  }

  return c8_a;
}

static uint32_T c8__u32_minus__(SFc8_GeneralInstanceStruct *chartInstance,
  uint32_T c8_b, uint32_T c8_c)
{
  uint32_T c8_a;
  c8_a = c8_b - c8_c;
  if (c8_b < c8_c) {
    _SFD_OVERFLOW_DETECTION(SFDB_OVERFLOW, 1U, 0U, *chartInstance->c8_sfEvent,
      false);
  }

  return c8_a;
}

static uint32_T c8__u32_add__(SFc8_GeneralInstanceStruct *chartInstance,
  uint32_T c8_b, uint32_T c8_c)
{
  uint32_T c8_a;
  c8_a = c8_b + c8_c;
  if (c8_a < c8_b) {
    _SFD_OVERFLOW_DETECTION(SFDB_OVERFLOW, 1U, 0U, *chartInstance->c8_sfEvent,
      false);
  }

  return c8_a;
}

static uint32_T c8__u32_s8_(SFc8_GeneralInstanceStruct *chartInstance, int8_T
  c8_b)
{
  uint32_T c8_a;
  c8_a = (uint32_T)c8_b;
  if (c8_b < 0) {
    _SFD_OVERFLOW_DETECTION(SFDB_OVERFLOW, 1U, 0U, *chartInstance->c8_sfEvent,
      false);
  }

  return c8_a;
}

static void init_dsm_address_info(SFc8_GeneralInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc8_GeneralInstanceStruct *chartInstance)
{
  chartInstance->c8_e_data_ready_strobe = (int8_T *)
    (ssGetInputPortSignalPtrs_wrapper(chartInstance->S, 5))[0U];
  chartInstance->c8_e_clk = (int8_T *)(ssGetInputPortSignalPtrs_wrapper
    (chartInstance->S, 5))[1U];
  chartInstance->c8_e_fast_clk = (int8_T *)(ssGetInputPortSignalPtrs_wrapper
    (chartInstance->S, 5))[2U];
  chartInstance->c8_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 0);
  chartInstance->c8_isStable = (boolean_T *)ssGetDWork_wrapper(chartInstance->S,
    1);
  chartInstance->c8_is_active_c8_General = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 2);
  chartInstance->c8_is_UpdatePacketQueue = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 3);
  chartInstance->c8_is_active_UpdatePacketQueue = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 4);
  chartInstance->c8_is_SendControlMachine = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 5);
  chartInstance->c8_is_active_SendControlMachine = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 6);
  chartInstance->c8_is_Fixed = (uint8_T *)ssGetDWork_wrapper(chartInstance->S, 7);
  chartInstance->c8_is_FixMonitor = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 8);
  chartInstance->c8_is_active_FixMonitor = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 9);
  chartInstance->c8_resetUDP = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c8_data_out = (real32_T (*)[410])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c8_data_in = (real32_T (*)[400])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c8_queue_tail = (uint32_T *)ssGetDWork_wrapper(chartInstance->S,
    10);
  chartInstance->c8_queue_size = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c8_total_timeouts = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c8_packet_index = (uint32_T *)ssGetDWork_wrapper
    (chartInstance->S, 11);
  chartInstance->c8_ack_packet_index = (uint32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c8_max_packet_id = (uint32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c8_runID = (real32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c8_packet_queue = (real32_T (*)[20500000])ssGetDWork_wrapper
    (chartInstance->S, 12);
  chartInstance->c8_packet_queue_sz = (real_T *)ssGetDWork_wrapper
    (chartInstance->S, 13);
  chartInstance->c8_i = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 14);
  chartInstance->c8_j = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 15);
  chartInstance->c8_outstanding_packet_index = (real_T *)ssGetDWork_wrapper
    (chartInstance->S, 16);
  chartInstance->c8_queue_head = (uint32_T *)ssGetDWork_wrapper(chartInstance->S,
    17);
  chartInstance->c8_is_exam_running = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c8_temporalCounter_i1 = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 18);
  chartInstance->c8_temporalCounter_i2 = (uint16_T *)ssGetDWork_wrapper
    (chartInstance->S, 19);
  chartInstance->c8_temporalCounter_i3 = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 20);
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
void sf_c8_General_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2807854110U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3675456451U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1434872311U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1283668760U);
}

mxArray* sf_c8_General_get_post_codegen_info(void);
mxArray *sf_c8_General_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("ZMOSW14Jbp5iScy0F893d");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,5,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(400);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
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
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(410);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo = sf_c8_General_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c8_General_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c8_General_jit_fallback_info(void)
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

mxArray *sf_c8_General_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c8_General_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c8_General(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x10'type','srcId','name','auxInfo'{{M[1],M[50],T\"data_out\",},{M[1],M[55],T\"queue_size\",},{M[1],M[285],T\"resetUDP\",},{M[1],M[56],T\"total_timeouts\",},{M[3],M[87],T\"i\",},{M[3],M[121],T\"j\",},{M[3],M[401],T\"outstanding_packet_index\",},{M[3],M[57],T\"packet_index\",},{M[3],M[72],T\"packet_queue\",},{M[3],M[80],T\"packet_queue_sz\",}}",
    "100 S1x10'type','srcId','name','auxInfo'{{M[3],M[403],T\"queue_head\",},{M[3],M[53],T\"queue_tail\",},{M[8],M[0],T\"is_active_c8_General\",},{M[8],M[4],T\"is_active_SendControlMachine\",},{M[8],M[7],T\"is_active_UpdatePacketQueue\",},{M[8],M[183],T\"is_active_FixMonitor\",},{M[9],M[4],T\"is_SendControlMachine\",},{M[9],M[7],T\"is_UpdatePacketQueue\",},{M[9],M[183],T\"is_FixMonitor\",},{M[9],M[375],T\"is_Fixed\",}}",
    "100 S1x3'type','srcId','name','auxInfo'{{M[11],M[208],T\"temporalCounter_i2\",S'et','os','ct'{{T\"ev\",M[186],M[1]}}},{M[11],M[208],T\"temporalCounter_i1\",S'et','os','ct'{{T\"ev\",M[392],M[1]}}},{M[11],M[258],T\"temporalCounter_i3\",S'et','os','ct'{{T\"ev\",M[289],M[1]}}}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 23, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c8_General_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc8_GeneralInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc8_GeneralInstanceStruct *) chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _GeneralMachineNumber_,
           8,
           11,
           30,
           0,
           19,
           5,
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
            5,
            5,
            5);
          _SFD_SET_DATA_PROPS(2,0,0,0,"i");
          _SFD_SET_DATA_PROPS(3,0,0,0,"j");
          _SFD_SET_DATA_PROPS(4,0,0,0,"outstanding_packet_index");
          _SFD_SET_DATA_PROPS(5,0,0,0,"packet_index");
          _SFD_SET_DATA_PROPS(6,0,0,0,"packet_queue");
          _SFD_SET_DATA_PROPS(7,0,0,0,"packet_queue_sz");
          _SFD_SET_DATA_PROPS(8,0,0,0,"queue_head");
          _SFD_SET_DATA_PROPS(9,0,0,0,"queue_tail");
          _SFD_SET_DATA_PROPS(10,1,1,0,"data_in");
          _SFD_SET_DATA_PROPS(11,1,1,0,"ack_packet_index");
          _SFD_SET_DATA_PROPS(12,1,1,0,"max_packet_id");
          _SFD_SET_DATA_PROPS(13,1,1,0,"runID");
          _SFD_SET_DATA_PROPS(14,1,1,0,"is_exam_running");
          _SFD_SET_DATA_PROPS(15,2,0,1,"resetUDP");
          _SFD_SET_DATA_PROPS(16,2,0,1,"data_out");
          _SFD_SET_DATA_PROPS(17,2,0,1,"queue_size");
          _SFD_SET_DATA_PROPS(18,2,0,1,"total_timeouts");
          _SFD_SET_DATA_PROPS(19,7,0,0,"FULL_PACKET_SIZE");
          _SFD_SET_DATA_PROPS(20,7,0,0,"KINEMATIC_LEN");
          _SFD_EVENT_SCOPE(0,0);
          _SFD_EVENT_SCOPE(1,1);
          _SFD_EVENT_SCOPE(2,1);
          _SFD_EVENT_SCOPE(3,1);
          _SFD_EVENT_SCOPE(4,2);
          _SFD_STATE_INFO(0,0,1);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,1);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(5,0,0);
          _SFD_STATE_INFO(6,0,0);
          _SFD_STATE_INFO(7,0,0);
          _SFD_STATE_INFO(9,0,1);
          _SFD_STATE_INFO(10,0,0);
          _SFD_STATE_INFO(8,0,2);
          _SFD_CH_SUBSTATE_COUNT(3);
          _SFD_CH_SUBSTATE_DECOMP(1);
          _SFD_CH_SUBSTATE_INDEX(0,9);
          _SFD_CH_SUBSTATE_INDEX(1,3);
          _SFD_CH_SUBSTATE_INDEX(2,0);
          _SFD_ST_SUBSTATE_COUNT(9,1);
          _SFD_ST_SUBSTATE_INDEX(9,0,10);
          _SFD_ST_SUBSTATE_COUNT(10,0);
          _SFD_ST_SUBSTATE_COUNT(3,2);
          _SFD_ST_SUBSTATE_INDEX(3,0,4);
          _SFD_ST_SUBSTATE_INDEX(3,1,7);
          _SFD_ST_SUBSTATE_COUNT(4,2);
          _SFD_ST_SUBSTATE_INDEX(4,0,5);
          _SFD_ST_SUBSTATE_INDEX(4,1,6);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(7,0);
          _SFD_ST_SUBSTATE_COUNT(0,2);
          _SFD_ST_SUBSTATE_INDEX(0,0,1);
          _SFD_ST_SUBSTATE_INDEX(0,1,2);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
        }

        _SFD_CV_INIT_CHART(3,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,2,1,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(2,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(3,2,1,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(4,2,1,1,0,0,NULL,NULL);
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
          _SFD_CV_INIT_STATE(9,1,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(10,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(8,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(10,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 19 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(9,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(11,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(4,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(7,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 30 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(8,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 30 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 0, 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(8,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(6,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 2 };

          static unsigned int sEndGuardMap[] = { 26 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 2 };

          static unsigned int sEndRelationalopMap[] = { 26 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 0, 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(5,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(14,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 11 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(26,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 9, 0 };

          static unsigned int sEndGuardMap[] = { 19, 20 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(27,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(16,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 25 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(17,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 25 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 0, 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(17,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(18,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 25 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(19,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 25 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 1, 1, 1, 1, 1 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(19,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 0, 11 };

          static unsigned int sEndGuardMap[] = { 10, 55 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(20,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 11 };

          static unsigned int sEndRelationalopMap[] = { 55 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0, 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(20,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 0, 11 };

          static unsigned int sEndGuardMap[] = { 10, 35 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(21,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 11 };

          static unsigned int sEndRelationalopMap[] = { 35 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 1, 1, 1, 1, 1 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(21,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(22,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 0, 11 };

          static unsigned int sEndGuardMap[] = { 10, 27 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(23,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 21 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(28,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 21 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0, 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(28,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(24,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(25,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(29,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 24 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 24 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 2, 2, 2, 2, 2 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(2,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 25 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 25 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 5, 5, 5, 5, 5 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(3,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(13,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 18 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(12,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 18 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 4, 4, 4, 4, 4 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(12,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 0, 11 };

          static unsigned int sEndGuardMap[] = { 10, 29 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(15,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_SET_DATA_COMPILED_PROPS(2,SF_INT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_b_sf_marshallOut,(MexInFcnForType)c8_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_INT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_b_sf_marshallOut,(MexInFcnForType)c8_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_d_sf_marshallOut,(MexInFcnForType)c8_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(5,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_g_sf_marshallOut,(MexInFcnForType)c8_f_sf_marshallIn);

        {
          unsigned int dimVector[2];
          dimVector[0]= 410;
          dimVector[1]= 50000;
          _SFD_SET_DATA_COMPILED_PROPS(6,SF_SINGLE,2,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c8_i_sf_marshallOut,(MexInFcnForType)
            c8_g_sf_marshallIn);
        }

        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_d_sf_marshallOut,(MexInFcnForType)c8_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_g_sf_marshallOut,(MexInFcnForType)c8_f_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_g_sf_marshallOut,(MexInFcnForType)c8_f_sf_marshallIn);

        {
          unsigned int dimVector[1];
          dimVector[0]= 400;
          _SFD_SET_DATA_COMPILED_PROPS(10,SF_SINGLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c8_f_sf_marshallOut,(MexInFcnForType)NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(11,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_g_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(12,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_g_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(13,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_h_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(14,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(15,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_d_sf_marshallOut,(MexInFcnForType)c8_d_sf_marshallIn);

        {
          unsigned int dimVector[1];
          dimVector[0]= 410;
          _SFD_SET_DATA_COMPILED_PROPS(16,SF_SINGLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c8_e_sf_marshallOut,(MexInFcnForType)
            c8_e_sf_marshallIn);
        }

        _SFD_SET_DATA_COMPILED_PROPS(17,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_d_sf_marshallOut,(MexInFcnForType)c8_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(18,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_d_sf_marshallOut,(MexInFcnForType)c8_d_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(19,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_d_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(20,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c8_d_sf_marshallOut,(MexInFcnForType)NULL);
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
    SFc8_GeneralInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc8_GeneralInstanceStruct *) chartInfo->chartInstance;
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(15U, chartInstance->c8_resetUDP);
        _SFD_SET_DATA_VALUE_PTR(16U, *chartInstance->c8_data_out);
        _SFD_SET_DATA_VALUE_PTR(10U, *chartInstance->c8_data_in);
        _SFD_SET_DATA_VALUE_PTR(9U, chartInstance->c8_queue_tail);
        _SFD_SET_DATA_VALUE_PTR(17U, chartInstance->c8_queue_size);
        _SFD_SET_DATA_VALUE_PTR(18U, chartInstance->c8_total_timeouts);
        _SFD_SET_DATA_VALUE_PTR(5U, chartInstance->c8_packet_index);
        _SFD_SET_DATA_VALUE_PTR(11U, chartInstance->c8_ack_packet_index);
        _SFD_SET_DATA_VALUE_PTR(12U, chartInstance->c8_max_packet_id);
        _SFD_SET_DATA_VALUE_PTR(13U, chartInstance->c8_runID);
        _SFD_SET_DATA_VALUE_PTR(6U, *chartInstance->c8_packet_queue);
        _SFD_SET_DATA_VALUE_PTR(7U, chartInstance->c8_packet_queue_sz);
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c8_i);
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c8_j);
        _SFD_SET_DATA_VALUE_PTR(20U, &chartInstance->c8_KINEMATIC_LEN);
        _SFD_SET_DATA_VALUE_PTR(19U, &chartInstance->c8_FULL_PACKET_SIZE);
        _SFD_SET_DATA_VALUE_PTR(4U, chartInstance->c8_outstanding_packet_index);
        _SFD_SET_DATA_VALUE_PTR(8U, chartInstance->c8_queue_head);
        _SFD_SET_DATA_VALUE_PTR(14U, chartInstance->c8_is_exam_running);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sDt6PDKxXX3DPjVkydvSpFG";
}

static void sf_check_dwork_consistency(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    const uint32_T *sfunDWorkChecksum = sf_get_sfun_dwork_checksum();
    mxArray *infoStruct = load_General_optimization_info();
    mxArray* mxRTWDWorkChecksum = sf_get_dwork_info_from_mat_file(S,
      sf_get_instance_specialization(), infoStruct, 8, "dworkChecksum");
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

static void sf_opaque_initialize_c8_General(void *chartInstanceVar)
{
  sf_check_dwork_consistency(((SFc8_GeneralInstanceStruct*) chartInstanceVar)->S);
  chart_debug_initialization(((SFc8_GeneralInstanceStruct*) chartInstanceVar)->S,
    0);
  initialize_params_c8_General((SFc8_GeneralInstanceStruct*) chartInstanceVar);
  initialize_c8_General((SFc8_GeneralInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c8_General(void *chartInstanceVar)
{
  enable_c8_General((SFc8_GeneralInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c8_General(void *chartInstanceVar)
{
  disable_c8_General((SFc8_GeneralInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c8_General(void *chartInstanceVar)
{
  sf_gateway_c8_General((SFc8_GeneralInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c8_General(void *chartInstanceVar)
{
  ext_mode_exec_c8_General((SFc8_GeneralInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c8_General(SimStruct* S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  return get_sim_state_c8_General((SFc8_GeneralInstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c8_General(SimStruct* S, const mxArray *st)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  set_sim_state_c8_General((SFc8_GeneralInstanceStruct*)chartInfo->chartInstance,
    st);
}

static void sf_opaque_terminate_c8_General(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc8_GeneralInstanceStruct*) chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_General_optimization_info();
    }

    finalize_c8_General((SFc8_GeneralInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (crtInfo != NULL) {
      utFree(crtInfo);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc8_General((SFc8_GeneralInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c8_General(SimStruct *S)
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
    initialize_params_c8_General((SFc8_GeneralInstanceStruct*)
      (chartInfo->chartInstance));
  }
}

mxArray *sf_c8_General_get_testpoint_info(void)
{
  return NULL;
}

static void sf_set_sfun_dwork_info(SimStruct *S)
{
  const char *dworkEncStr[] = {
    "100 S1x10'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size'{{T\"int32\",,,,,,,M[0],M[]},{T\"boolean\",,,,,,,M[0],M[]},{T\"uint8\",,,,,,,M[0],M[]},{T\"uint8\",,,,,,,M[0],M[]},{T\"uint8\",,,,,,,M[0],M[]},{T\"uint8\",,,,,,,M[0],M[]},{T\"uint8\",,,,,,,M[0],M[]},{T\"uint8\",,,,,,,M[0],M[]},{T\"uint8\",,,,,,,M[0],M[]},{T\"uint8\",,,,,,,M[0],M[]}}",
    "100 S1x10'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size'{{T\"uint32\",,,,,,,M[0],M[]},{T\"uint32\",,,,,,,M[0],M[]},{T\"single\",,,,,,,M[0],M1x2[410 50000]},{T\"double\",,,,,,,M[0],M[]},{T\"int32\",,,,,,,M[0],M[]},{T\"int32\",,,,,,,M[0],M[]},{T\"double\",,,,,,,M[0],M[]},{T\"uint32\",,,,,,,M[0],M[]},{T\"uint8\",,,,,,,M[0],M[]},{T\"uint16\",,,,,,,M[0],M[]}}",
    "100 S'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size'{{T\"uint8\",,,,,,,M[0],M[]}}"
  };

  sf_set_encoded_dwork_info(S, dworkEncStr, 21, 10);
}

static uint32_T* sf_get_sfun_dwork_checksum()
{
  static uint32_T checksum[4] = { 3155448398U, 3546992767U, 2012509148U,
    2698555202U };

  return checksum;
}

static void mdlSetWorkWidths_c8_General(SimStruct *S)
{
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_General_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,8);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,8,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,8);
    sf_mark_output_events_with_multiple_callers(S,sf_get_instance_specialization
      (),infoStruct,8,1);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,8,5);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,8,4);
    }

    ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=4; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 5; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,8);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1963418044U));
  ssSetChecksum1(S,(1419311282U));
  ssSetChecksum2(S,(2690694857U));
  ssSetChecksum3(S,(683690891U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c8_General(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c8_General(SimStruct *S)
{
  SFc8_GeneralInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc8_GeneralInstanceStruct *)utMalloc(sizeof
    (SFc8_GeneralInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc8_GeneralInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c8_General;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c8_General;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c8_General;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c8_General;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c8_General;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c8_General;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c8_General;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c8_General;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c8_General;
  chartInstance->chartInfo.mdlStart = mdlStart_c8_General;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c8_General;
  chartInstance->chartInfo.extModeExec = sf_opaque_ext_mode_exec_c8_General;
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

void c8_General_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c8_General(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c8_General(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c8_General(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c8_General_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
