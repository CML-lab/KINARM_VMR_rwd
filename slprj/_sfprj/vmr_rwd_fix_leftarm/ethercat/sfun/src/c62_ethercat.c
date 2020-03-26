/* Include files */

#include <stddef.h>
#include "blas.h"
#include "ethercat_sfun.h"
#include "c62_ethercat.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "ethercat_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c_with_debugger(S, sfGlobalDebugInstanceStruct);

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization);
static void chart_debug_initialize_data_addresses(SimStruct *S);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)
#define c62_IN_NO_ACTIVE_CHILD         ((uint8_T)0U)
#define c62_IN_Complete                ((uint8_T)1U)
#define c62_IN_Done                    ((uint8_T)2U)
#define c62_IN_PollingComplete         ((uint8_T)3U)
#define c62_IN_ReadNext                ((uint8_T)4U)
#define c62_IN_ReadNextEncoder         ((uint8_T)5U)
#define c62_IN_Received                ((uint8_T)6U)
#define c62_IN_disable                 ((uint8_T)7U)
#define c62_IN_disable1                ((uint8_T)8U)
#define c62_IN_disableRead             ((uint8_T)9U)
#define c62_IN_encoderReadSetup        ((uint8_T)10U)
#define c62_IN_pollReceived            ((uint8_T)11U)
#define c62_IN_receivedEncoder         ((uint8_T)12U)
#define c62_IN_setup                   ((uint8_T)13U)
#define c62_IN_startPolling            ((uint8_T)14U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;

/* Function Declarations */
static void initialize_c62_ethercat(SFc62_ethercatInstanceStruct *chartInstance);
static void initialize_params_c62_ethercat(SFc62_ethercatInstanceStruct
  *chartInstance);
static void enable_c62_ethercat(SFc62_ethercatInstanceStruct *chartInstance);
static void disable_c62_ethercat(SFc62_ethercatInstanceStruct *chartInstance);
static void c62_update_debugger_state_c62_ethercat(SFc62_ethercatInstanceStruct *
  chartInstance);
static void ext_mode_exec_c62_ethercat(SFc62_ethercatInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c62_ethercat(SFc62_ethercatInstanceStruct
  *chartInstance);
static void set_sim_state_c62_ethercat(SFc62_ethercatInstanceStruct
  *chartInstance, const mxArray *c62_st);
static void c62_set_sim_state_side_effects_c62_ethercat
  (SFc62_ethercatInstanceStruct *chartInstance);
static void finalize_c62_ethercat(SFc62_ethercatInstanceStruct *chartInstance);
static void sf_gateway_c62_ethercat(SFc62_ethercatInstanceStruct *chartInstance);
static void mdl_start_c62_ethercat(SFc62_ethercatInstanceStruct *chartInstance);
static void c62_chartstep_c62_ethercat(SFc62_ethercatInstanceStruct
  *chartInstance);
static void initSimStructsc62_ethercat(SFc62_ethercatInstanceStruct
  *chartInstance);
static void c62_Done(SFc62_ethercatInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c62_machineNumber, uint32_T
  c62_chartNumber, uint32_T c62_instanceNumber);
static const mxArray *c62_sf_marshallOut(void *chartInstanceVoid, void
  *c62_inData);
static int32_T c62_emlrt_marshallIn(SFc62_ethercatInstanceStruct *chartInstance,
  const mxArray *c62_b_sfEvent, const char_T *c62_identifier);
static int32_T c62_b_emlrt_marshallIn(SFc62_ethercatInstanceStruct
  *chartInstance, const mxArray *c62_u, const emlrtMsgIdentifier *c62_parentId);
static void c62_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c62_mxArrayInData, const char_T *c62_varName, void *c62_outData);
static const mxArray *c62_b_sf_marshallOut(void *chartInstanceVoid, void
  *c62_inData);
static void c62_c_emlrt_marshallIn(SFc62_ethercatInstanceStruct *chartInstance,
  const mxArray *c62_b_setupData, const char_T *c62_identifier, int32_T c62_y[4]);
static void c62_d_emlrt_marshallIn(SFc62_ethercatInstanceStruct *chartInstance,
  const mxArray *c62_u, const emlrtMsgIdentifier *c62_parentId, int32_T c62_y[4]);
static void c62_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c62_mxArrayInData, const char_T *c62_varName, void *c62_outData);
static const mxArray *c62_c_sf_marshallOut(void *chartInstanceVoid, void
  *c62_inData);
static void c62_e_emlrt_marshallIn(SFc62_ethercatInstanceStruct *chartInstance,
  const mxArray *c62_b_SDORequest, const char_T *c62_identifier, int32_T c62_y[3]);
static void c62_f_emlrt_marshallIn(SFc62_ethercatInstanceStruct *chartInstance,
  const mxArray *c62_u, const emlrtMsgIdentifier *c62_parentId, int32_T c62_y[3]);
static void c62_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c62_mxArrayInData, const char_T *c62_varName, void *c62_outData);
static const mxArray *c62_d_sf_marshallOut(void *chartInstanceVoid, void
  *c62_inData);
static void c62_g_emlrt_marshallIn(SFc62_ethercatInstanceStruct *chartInstance,
  const mxArray *c62_b_encoderOutputs, const char_T *c62_identifier, int32_T
  c62_y[6]);
static void c62_h_emlrt_marshallIn(SFc62_ethercatInstanceStruct *chartInstance,
  const mxArray *c62_u, const emlrtMsgIdentifier *c62_parentId, int32_T c62_y[6]);
static void c62_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c62_mxArrayInData, const char_T *c62_varName, void *c62_outData);
static const mxArray *c62_e_sf_marshallOut(void *chartInstanceVoid, void
  *c62_inData);
static const mxArray *c62_f_sf_marshallOut(void *chartInstanceVoid, void
  *c62_inData);
static const mxArray *c62_g_sf_marshallOut(void *chartInstanceVoid, void
  *c62_inData);
static const mxArray *c62_h_sf_marshallOut(void *chartInstanceVoid, void
  *c62_inData);
static const mxArray *c62_i_sf_marshallOut(void *chartInstanceVoid, void
  *c62_inData);
static real_T c62_i_emlrt_marshallIn(SFc62_ethercatInstanceStruct *chartInstance,
  const mxArray *c62_b_encoderIdx, const char_T *c62_identifier);
static real_T c62_j_emlrt_marshallIn(SFc62_ethercatInstanceStruct *chartInstance,
  const mxArray *c62_u, const emlrtMsgIdentifier *c62_parentId);
static void c62_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c62_mxArrayInData, const char_T *c62_varName, void *c62_outData);
static uint8_T c62_k_emlrt_marshallIn(SFc62_ethercatInstanceStruct
  *chartInstance, const mxArray *c62_b_is_active_c62_ethercat, const char_T
  *c62_identifier);
static uint8_T c62_l_emlrt_marshallIn(SFc62_ethercatInstanceStruct
  *chartInstance, const mxArray *c62_u, const emlrtMsgIdentifier *c62_parentId);
static const mxArray *c62_m_emlrt_marshallIn(SFc62_ethercatInstanceStruct
  *chartInstance, const mxArray *c62_b_setSimStateSideEffectsInfo, const char_T *
  c62_identifier);
static const mxArray *c62_n_emlrt_marshallIn(SFc62_ethercatInstanceStruct
  *chartInstance, const mxArray *c62_u, const emlrtMsgIdentifier *c62_parentId);
static int32_T c62__s32_d_(SFc62_ethercatInstanceStruct *chartInstance, real_T
  c62_b);
static int32_T c62__s32_minus__(SFc62_ethercatInstanceStruct *chartInstance,
  int32_T c62_b, int32_T c62_c);
static int32_T c62__s32_add__(SFc62_ethercatInstanceStruct *chartInstance,
  int32_T c62_b, int32_T c62_c);
static void init_dsm_address_info(SFc62_ethercatInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc62_ethercatInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c62_ethercat(SFc62_ethercatInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc62_ethercat(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  *chartInstance->c62_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c62_doSetSimStateSideEffects = 0U;
  chartInstance->c62_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c62_is_active_c62_ethercat = 0U;
  *chartInstance->c62_is_c62_ethercat = c62_IN_NO_ACTIVE_CHILD;
  *chartInstance->c62_setupIdx = 0;
  *chartInstance->c62_donePolling = 0;
  *chartInstance->c62_encoderIdx = 0.0;
  if (!(sf_get_output_port_reusable(chartInstance->S, 1) != 0)) {
    (*chartInstance->c62_setupData)[0] = 0;
    (*chartInstance->c62_setupData)[1] = 0;
    (*chartInstance->c62_setupData)[2] = 0;
    (*chartInstance->c62_setupData)[3] = 0;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 2) != 0)) {
    (*chartInstance->c62_SDORequest)[0] = 0;
    (*chartInstance->c62_SDORequest)[1] = 0;
    (*chartInstance->c62_SDORequest)[2] = 0;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 3) != 0)) {
    (*chartInstance->c62_encoderOutputs)[0] = 0;
    (*chartInstance->c62_encoderOutputs)[1] = 0;
    (*chartInstance->c62_encoderOutputs)[2] = 0;
    (*chartInstance->c62_encoderOutputs)[3] = 0;
    (*chartInstance->c62_encoderOutputs)[4] = 0;
    (*chartInstance->c62_encoderOutputs)[5] = 0;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 4) != 0)) {
    *chartInstance->c62_complete = 0;
  }
}

static void initialize_params_c62_ethercat(SFc62_ethercatInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void enable_c62_ethercat(SFc62_ethercatInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c62_ethercat(SFc62_ethercatInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c62_update_debugger_state_c62_ethercat(SFc62_ethercatInstanceStruct *
  chartInstance)
{
  uint32_T c62_prevAniVal;
  c62_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (*chartInstance->c62_is_active_c62_ethercat == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 27U, *chartInstance->c62_sfEvent);
  }

  if (*chartInstance->c62_is_c62_ethercat == c62_IN_disable) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c62_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c62_sfEvent);
  }

  if (*chartInstance->c62_is_c62_ethercat == c62_IN_ReadNext) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c62_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c62_sfEvent);
  }

  if (*chartInstance->c62_is_c62_ethercat == c62_IN_setup) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 12U, *chartInstance->c62_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, *chartInstance->c62_sfEvent);
  }

  if (*chartInstance->c62_is_c62_ethercat == c62_IN_Received) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c62_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c62_sfEvent);
  }

  if (*chartInstance->c62_is_c62_ethercat == c62_IN_disable1) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c62_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c62_sfEvent);
  }

  if (*chartInstance->c62_is_c62_ethercat == c62_IN_startPolling) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 13U, *chartInstance->c62_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, *chartInstance->c62_sfEvent);
  }

  if (*chartInstance->c62_is_c62_ethercat == c62_IN_Done) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c62_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c62_sfEvent);
  }

  if (*chartInstance->c62_is_c62_ethercat == c62_IN_pollReceived) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c62_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c62_sfEvent);
  }

  if (*chartInstance->c62_is_c62_ethercat == c62_IN_PollingComplete) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c62_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c62_sfEvent);
  }

  if (*chartInstance->c62_is_c62_ethercat == c62_IN_disableRead) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c62_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c62_sfEvent);
  }

  if (*chartInstance->c62_is_c62_ethercat == c62_IN_encoderReadSetup) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c62_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c62_sfEvent);
  }

  if (*chartInstance->c62_is_c62_ethercat == c62_IN_ReadNextEncoder) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c62_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c62_sfEvent);
  }

  if (*chartInstance->c62_is_c62_ethercat == c62_IN_receivedEncoder) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, *chartInstance->c62_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c62_sfEvent);
  }

  if (*chartInstance->c62_is_c62_ethercat == c62_IN_Complete) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c62_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c62_sfEvent);
  }

  _SFD_SET_ANIMATION(c62_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c62_ethercat(SFc62_ethercatInstanceStruct
  *chartInstance)
{
  c62_update_debugger_state_c62_ethercat(chartInstance);
}

static const mxArray *get_sim_state_c62_ethercat(SFc62_ethercatInstanceStruct
  *chartInstance)
{
  const mxArray *c62_st;
  const mxArray *c62_y = NULL;
  const mxArray *c62_b_y = NULL;
  int32_T c62_hoistedGlobal;
  int32_T c62_u;
  const mxArray *c62_c_y = NULL;
  const mxArray *c62_d_y = NULL;
  const mxArray *c62_e_y = NULL;
  int32_T c62_b_hoistedGlobal;
  int32_T c62_b_u;
  const mxArray *c62_f_y = NULL;
  real_T c62_c_hoistedGlobal;
  real_T c62_c_u;
  const mxArray *c62_g_y = NULL;
  int32_T c62_d_hoistedGlobal;
  int32_T c62_d_u;
  const mxArray *c62_h_y = NULL;
  uint8_T c62_e_hoistedGlobal;
  uint8_T c62_e_u;
  const mxArray *c62_i_y = NULL;
  uint8_T c62_f_hoistedGlobal;
  uint8_T c62_f_u;
  const mxArray *c62_j_y = NULL;
  c62_st = NULL;
  c62_st = NULL;
  c62_y = NULL;
  sf_mex_assign(&c62_y, sf_mex_createcellmatrix(9, 1), false);
  c62_b_y = NULL;
  sf_mex_assign(&c62_b_y, sf_mex_create("y", *chartInstance->c62_SDORequest, 6,
    0U, 1U, 0U, 1, 3), false);
  sf_mex_setcell(c62_y, 0, c62_b_y);
  c62_hoistedGlobal = *chartInstance->c62_complete;
  c62_u = c62_hoistedGlobal;
  c62_c_y = NULL;
  sf_mex_assign(&c62_c_y, sf_mex_create("y", &c62_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c62_y, 1, c62_c_y);
  c62_d_y = NULL;
  sf_mex_assign(&c62_d_y, sf_mex_create("y", *chartInstance->c62_encoderOutputs,
    6, 0U, 1U, 0U, 1, 6), false);
  sf_mex_setcell(c62_y, 2, c62_d_y);
  c62_e_y = NULL;
  sf_mex_assign(&c62_e_y, sf_mex_create("y", *chartInstance->c62_setupData, 6,
    0U, 1U, 0U, 1, 4), false);
  sf_mex_setcell(c62_y, 3, c62_e_y);
  c62_b_hoistedGlobal = *chartInstance->c62_donePolling;
  c62_b_u = c62_b_hoistedGlobal;
  c62_f_y = NULL;
  sf_mex_assign(&c62_f_y, sf_mex_create("y", &c62_b_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c62_y, 4, c62_f_y);
  c62_c_hoistedGlobal = *chartInstance->c62_encoderIdx;
  c62_c_u = c62_c_hoistedGlobal;
  c62_g_y = NULL;
  sf_mex_assign(&c62_g_y, sf_mex_create("y", &c62_c_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c62_y, 5, c62_g_y);
  c62_d_hoistedGlobal = *chartInstance->c62_setupIdx;
  c62_d_u = c62_d_hoistedGlobal;
  c62_h_y = NULL;
  sf_mex_assign(&c62_h_y, sf_mex_create("y", &c62_d_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c62_y, 6, c62_h_y);
  c62_e_hoistedGlobal = *chartInstance->c62_is_active_c62_ethercat;
  c62_e_u = c62_e_hoistedGlobal;
  c62_i_y = NULL;
  sf_mex_assign(&c62_i_y, sf_mex_create("y", &c62_e_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c62_y, 7, c62_i_y);
  c62_f_hoistedGlobal = *chartInstance->c62_is_c62_ethercat;
  c62_f_u = c62_f_hoistedGlobal;
  c62_j_y = NULL;
  sf_mex_assign(&c62_j_y, sf_mex_create("y", &c62_f_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c62_y, 8, c62_j_y);
  sf_mex_assign(&c62_st, c62_y, false);
  return c62_st;
}

static void set_sim_state_c62_ethercat(SFc62_ethercatInstanceStruct
  *chartInstance, const mxArray *c62_st)
{
  const mxArray *c62_u;
  int32_T c62_iv0[3];
  int32_T c62_i0;
  int32_T c62_iv1[6];
  int32_T c62_i1;
  int32_T c62_iv2[4];
  int32_T c62_i2;
  c62_u = sf_mex_dup(c62_st);
  c62_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("SDORequest",
    c62_u, 0)), "SDORequest", c62_iv0);
  for (c62_i0 = 0; c62_i0 < 3; c62_i0++) {
    (*chartInstance->c62_SDORequest)[c62_i0] = c62_iv0[c62_i0];
  }

  *chartInstance->c62_complete = c62_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("complete", c62_u, 1)), "complete");
  c62_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "encoderOutputs", c62_u, 2)), "encoderOutputs", c62_iv1);
  for (c62_i1 = 0; c62_i1 < 6; c62_i1++) {
    (*chartInstance->c62_encoderOutputs)[c62_i1] = c62_iv1[c62_i1];
  }

  c62_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("setupData",
    c62_u, 3)), "setupData", c62_iv2);
  for (c62_i2 = 0; c62_i2 < 4; c62_i2++) {
    (*chartInstance->c62_setupData)[c62_i2] = c62_iv2[c62_i2];
  }

  *chartInstance->c62_donePolling = c62_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("donePolling", c62_u, 4)), "donePolling");
  *chartInstance->c62_encoderIdx = c62_i_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("encoderIdx", c62_u, 5)), "encoderIdx");
  *chartInstance->c62_setupIdx = c62_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("setupIdx", c62_u, 6)), "setupIdx");
  *chartInstance->c62_is_active_c62_ethercat = c62_k_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_c62_ethercat", c62_u, 7)),
     "is_active_c62_ethercat");
  *chartInstance->c62_is_c62_ethercat = c62_k_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_c62_ethercat", c62_u, 8)), "is_c62_ethercat");
  sf_mex_assign(&chartInstance->c62_setSimStateSideEffectsInfo,
                c62_m_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "setSimStateSideEffectsInfo", c62_u, 9)), "setSimStateSideEffectsInfo"),
                true);
  sf_mex_destroy(&c62_u);
  chartInstance->c62_doSetSimStateSideEffects = 1U;
  c62_update_debugger_state_c62_ethercat(chartInstance);
  sf_mex_destroy(&c62_st);
}

static void c62_set_sim_state_side_effects_c62_ethercat
  (SFc62_ethercatInstanceStruct *chartInstance)
{
  if (chartInstance->c62_doSetSimStateSideEffects != 0) {
    chartInstance->c62_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c62_ethercat(SFc62_ethercatInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c62_setSimStateSideEffectsInfo);
}

static void sf_gateway_c62_ethercat(SFc62_ethercatInstanceStruct *chartInstance)
{
  int32_T c62_i3;
  int32_T c62_i4;
  int32_T c62_i5;
  int32_T c62_i6;
  int32_T c62_i7;
  int32_T c62_i8;
  int32_T c62_i9;
  int32_T c62_i10;
  c62_set_sim_state_side_effects_c62_ethercat(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 27U, *chartInstance->c62_sfEvent);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c62_encoderIdx, 1U, 1U, 0U,
                        *chartInstance->c62_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c62_complete, 14U, 1U, 0U,
                        *chartInstance->c62_sfEvent, false);
  for (c62_i3 = 0; c62_i3 < 2; c62_i3++) {
    _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_encoderResponse)[c62_i3],
                          10U, 1U, 0U, *chartInstance->c62_sfEvent, false);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c62_donePolling, 0U, 1U, 0U,
                        *chartInstance->c62_sfEvent, false);
  for (c62_i4 = 0; c62_i4 < 2; c62_i4++) {
    _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_pollResponse)[c62_i4], 9U,
                          1U, 0U, *chartInstance->c62_sfEvent, false);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c62_intStatus, 8U, 1U, 0U,
                        *chartInstance->c62_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c62_encoderValuesCount, 7U, 1U, 0U,
                        *chartInstance->c62_sfEvent, false);
  for (c62_i5 = 0; c62_i5 < 12; c62_i5++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c62_encoderValues)[c62_i5], 6U, 1U,
                          0U, *chartInstance->c62_sfEvent, false);
  }

  for (c62_i6 = 0; c62_i6 < 3; c62_i6++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c62_pollValues)[c62_i6], 5U, 1U, 0U, *
                          chartInstance->c62_sfEvent, false);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c62_setupIdx, 2U, 1U, 0U,
                        *chartInstance->c62_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c62_setupValuesCount, 4U, 1U, 0U,
                        *chartInstance->c62_sfEvent, false);
  for (c62_i7 = 0; c62_i7 < 24; c62_i7++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c62_setupValues)[c62_i7], 3U, 1U, 0U,
                          *chartInstance->c62_sfEvent, false);
  }

  for (c62_i8 = 0; c62_i8 < 6; c62_i8++) {
    _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_encoderOutputs)[c62_i8],
                          13U, 1U, 0U, *chartInstance->c62_sfEvent, false);
  }

  for (c62_i9 = 0; c62_i9 < 3; c62_i9++) {
    _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_SDORequest)[c62_i9], 12U,
                          1U, 0U, *chartInstance->c62_sfEvent, false);
  }

  for (c62_i10 = 0; c62_i10 < 4; c62_i10++) {
    _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_setupData)[c62_i10], 11U,
                          1U, 0U, *chartInstance->c62_sfEvent, false);
  }

  *chartInstance->c62_sfEvent = CALL_EVENT;
  c62_chartstep_c62_ethercat(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_ethercatMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c62_ethercat(SFc62_ethercatInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c62_chartstep_c62_ethercat(SFc62_ethercatInstanceStruct
  *chartInstance)
{
  boolean_T c62_out;
  int32_T c62_i11;
  boolean_T c62_b_out;
  int32_T c62_i12;
  boolean_T c62_c_out;
  boolean_T c62_d_out;
  int32_T c62_i13;
  int32_T c62_i14;
  int32_T c62_i15;
  int32_T c62_i16;
  boolean_T c62_e_out;
  boolean_T c62_f_out;
  boolean_T c62_g_out;
  int32_T c62_i17;
  int32_T c62_i18;
  int32_T c62_i19;
  int32_T c62_i20;
  boolean_T c62_h_out;
  int32_T c62_i21;
  int32_T c62_i22;
  int32_T c62_i23;
  boolean_T c62_i_out;
  int32_T c62_i24;
  int32_T c62_i25;
  int32_T c62_i26;
  int32_T c62_i27;
  int32_T c62_i28;
  int32_T c62_i29;
  int32_T c62_i30;
  boolean_T c62_j_out;
  int32_T c62_i31;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 27U, *chartInstance->c62_sfEvent);
  if (*chartInstance->c62_is_active_c62_ethercat == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 27U,
                 *chartInstance->c62_sfEvent);
    *chartInstance->c62_is_active_c62_ethercat = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 27U, *chartInstance->c62_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, *chartInstance->c62_sfEvent);
    *chartInstance->c62_is_c62_ethercat = c62_IN_setup;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 12U, *chartInstance->c62_sfEvent);
    *chartInstance->c62_setupIdx = 0;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c62_setupIdx, 2U, 4U, 12U,
                          *chartInstance->c62_sfEvent, false);
    *chartInstance->c62_donePolling = 0;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c62_donePolling, 0U, 4U, 12U, *
                          chartInstance->c62_sfEvent, false);
  } else {
    switch (*chartInstance->c62_is_c62_ethercat) {
     case c62_IN_Complete:
      CV_CHART_EVAL(27, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                   *chartInstance->c62_sfEvent);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c62_sfEvent);
      break;

     case c62_IN_Done:
      CV_CHART_EVAL(27, 0, 2);
      c62_Done(chartInstance);
      break;

     case c62_IN_PollingComplete:
      CV_CHART_EVAL(27, 0, 3);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, *chartInstance->c62_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c62_sfEvent);
      *chartInstance->c62_is_c62_ethercat = c62_IN_encoderReadSetup;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c62_sfEvent);
      *chartInstance->c62_encoderIdx = 0.0;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c62_encoderIdx, 1U, 4U, 9U,
                            *chartInstance->c62_sfEvent, false);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c62_sfEvent);
      break;

     case c62_IN_ReadNext:
      CV_CHART_EVAL(27, 0, 4);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                   *chartInstance->c62_sfEvent);
      c62_out = (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5U, 0,
        CV_RELATIONAL_EVAL(5U, 5U, 0, (real_T)*chartInstance->c62_intStatus, 1.0,
                           0, 0U, *chartInstance->c62_intStatus == 1) != 0U,
        *chartInstance->c62_sfEvent)) != 0);
      if (c62_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, *chartInstance->c62_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c62_sfEvent);
        *chartInstance->c62_is_c62_ethercat = c62_IN_disable;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c62_sfEvent);
        (*chartInstance->c62_setupData)[1] = 0;
        for (c62_i11 = 0; c62_i11 < 4; c62_i11++) {
          _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_setupData)[c62_i11],
                                11U, 4U, 6U, *chartInstance->c62_sfEvent, false);
        }
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                     *chartInstance->c62_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, *chartInstance->c62_sfEvent);
      break;

     case c62_IN_ReadNextEncoder:
      CV_CHART_EVAL(27, 0, 5);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 13U,
                   *chartInstance->c62_sfEvent);
      c62_b_out = (CV_TRANSITION_EVAL(13U, (int32_T)_SFD_CCP_CALL(13U, 0,
        CV_RELATIONAL_EVAL(5U, 13U, 0, (real_T)
                           (*chartInstance->c62_encoderResponse)[1], 1.0, 0, 0U,
                           (*chartInstance->c62_encoderResponse)[1] == 1) != 0U,
        *chartInstance->c62_sfEvent)) != 0);
      if (c62_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 13U, *chartInstance->c62_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c62_sfEvent);
        *chartInstance->c62_is_c62_ethercat = c62_IN_disableRead;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c62_sfEvent);
        (*chartInstance->c62_SDORequest)[0] = 0;
        for (c62_i12 = 0; c62_i12 < 3; c62_i12++) {
          _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_SDORequest)[c62_i12],
                                12U, 4U, 8U, *chartInstance->c62_sfEvent, false);
        }
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                     *chartInstance->c62_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, *chartInstance->c62_sfEvent);
      break;

     case c62_IN_Received:
      CV_CHART_EVAL(27, 0, 6);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                   *chartInstance->c62_sfEvent);
      c62_c_out = (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4U, 0,
        CV_RELATIONAL_EVAL(5U, 4U, 0, (real_T)c62__s32_add__(chartInstance,
        *chartInstance->c62_setupIdx, 1), *chartInstance->c62_setupValuesCount,
                           -1, 4U, (real_T)c62__s32_add__(chartInstance,
        *chartInstance->c62_setupIdx, 1) > *chartInstance->c62_setupValuesCount)
        != 0U, *chartInstance->c62_sfEvent)) != 0);
      if (c62_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, *chartInstance->c62_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c62_sfEvent);
        *chartInstance->c62_is_c62_ethercat = c62_IN_Done;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c62_sfEvent);
        *chartInstance->c62_setupIdx = -1;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c62_setupIdx, 2U, 4U, 1U, *
                              chartInstance->c62_sfEvent, false);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                     *chartInstance->c62_sfEvent);
        c62_d_out = (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2U, 0,
          CV_RELATIONAL_EVAL(5U, 2U, 0, (real_T)*chartInstance->c62_intStatus,
                             0.0, 0, 0U, *chartInstance->c62_intStatus == 0) !=
          0U, *chartInstance->c62_sfEvent)) != 0);
        if (c62_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c62_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 5U, *chartInstance->c62_sfEvent);
          *chartInstance->c62_is_c62_ethercat = c62_IN_ReadNext;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c62_sfEvent);
          *chartInstance->c62_setupIdx = c62__s32_add__(chartInstance,
            *chartInstance->c62_setupIdx, 1);
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c62_setupIdx, 2U, 4U, 3U,
                                *chartInstance->c62_sfEvent, false);
          (*chartInstance->c62_setupData)[0] = c62__s32_d_(chartInstance,
            (*chartInstance->c62_setupValues)[16 + _SFD_ARRAY_BOUNDS_CHECK(3U,
            c62__s32_minus__(chartInstance, *chartInstance->c62_setupIdx, 1), 1,
            8, 1, 0)]);
          for (c62_i13 = 0; c62_i13 < 4; c62_i13++) {
            _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_setupData)
                                  [c62_i13], 11U, 4U, 3U,
                                  *chartInstance->c62_sfEvent, false);
          }

          (*chartInstance->c62_setupData)[1] = 1;
          for (c62_i14 = 0; c62_i14 < 4; c62_i14++) {
            _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_setupData)
                                  [c62_i14], 11U, 4U, 3U,
                                  *chartInstance->c62_sfEvent, false);
          }

          (*chartInstance->c62_setupData)[2] = c62__s32_d_(chartInstance,
            (*chartInstance->c62_setupValues)[_SFD_ARRAY_BOUNDS_CHECK(3U,
            c62__s32_minus__(chartInstance, *chartInstance->c62_setupIdx, 1), 1,
            8, 1, 0)]);
          for (c62_i15 = 0; c62_i15 < 4; c62_i15++) {
            _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_setupData)
                                  [c62_i15], 11U, 4U, 3U,
                                  *chartInstance->c62_sfEvent, false);
          }

          (*chartInstance->c62_setupData)[3] = c62__s32_d_(chartInstance,
            (*chartInstance->c62_setupValues)[8 + _SFD_ARRAY_BOUNDS_CHECK(3U,
            c62__s32_minus__(chartInstance, *chartInstance->c62_setupIdx, 1), 1,
            8, 1, 0)]);
          for (c62_i16 = 0; c62_i16 < 4; c62_i16++) {
            _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_setupData)
                                  [c62_i16], 11U, 4U, 3U,
                                  *chartInstance->c62_sfEvent, false);
          }
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 5U,
                       *chartInstance->c62_sfEvent);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 5U, *chartInstance->c62_sfEvent);
      break;

     case c62_IN_disable:
      CV_CHART_EVAL(27, 0, 7);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   *chartInstance->c62_sfEvent);
      c62_e_out = (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0,
        CV_RELATIONAL_EVAL(5U, 1U, 0, (real_T)*chartInstance->c62_intStatus, 2.0,
                           0, 5U, *chartInstance->c62_intStatus >= 2) != 0U,
        *chartInstance->c62_sfEvent)) != 0);
      if (c62_e_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c62_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c62_sfEvent);
        *chartInstance->c62_is_c62_ethercat = c62_IN_Received;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 5U, *chartInstance->c62_sfEvent);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 6U,
                     *chartInstance->c62_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, *chartInstance->c62_sfEvent);
      break;

     case c62_IN_disable1:
      CV_CHART_EVAL(27, 0, 8);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                   *chartInstance->c62_sfEvent);
      c62_f_out = (CV_TRANSITION_EVAL(8U, (int32_T)_SFD_CCP_CALL(8U, 0,
        CV_RELATIONAL_EVAL(5U, 8U, 0, (real_T)(*chartInstance->c62_pollResponse)
                           [1], 2.0, 0, 5U, (*chartInstance->c62_pollResponse)[1]
                           >= 2) != 0U, *chartInstance->c62_sfEvent)) != 0);
      if (c62_f_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, *chartInstance->c62_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c62_sfEvent);
        *chartInstance->c62_is_c62_ethercat = c62_IN_pollReceived;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 10U, *chartInstance->c62_sfEvent);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 7U,
                     *chartInstance->c62_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, *chartInstance->c62_sfEvent);
      break;

     case c62_IN_disableRead:
      CV_CHART_EVAL(27, 0, 9);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 14U,
                   *chartInstance->c62_sfEvent);
      c62_g_out = (CV_TRANSITION_EVAL(14U, (int32_T)_SFD_CCP_CALL(14U, 0,
        CV_RELATIONAL_EVAL(5U, 14U, 0, (real_T)
                           (*chartInstance->c62_encoderResponse)[1], 2.0, 0, 5U,
                           (*chartInstance->c62_encoderResponse)[1] >= 2) != 0U,
        *chartInstance->c62_sfEvent)) != 0);
      if (c62_g_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 14U, *chartInstance->c62_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c62_sfEvent);
        *chartInstance->c62_is_c62_ethercat = c62_IN_receivedEncoder;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 11U, *chartInstance->c62_sfEvent);
        (*chartInstance->c62_encoderOutputs)[_SFD_ARRAY_BOUNDS_CHECK(13U,
          c62__s32_d_(chartInstance, *chartInstance->c62_encoderIdx - 1.0), 1, 6,
          1, 0)] = (*chartInstance->c62_encoderResponse)[0];
        for (c62_i17 = 0; c62_i17 < 6; c62_i17++) {
          _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_encoderOutputs)
                                [c62_i17], 13U, 4U, 11U,
                                *chartInstance->c62_sfEvent, false);
        }
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 8U,
                     *chartInstance->c62_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, *chartInstance->c62_sfEvent);
      break;

     case c62_IN_encoderReadSetup:
      CV_CHART_EVAL(27, 0, 10);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 12U, *chartInstance->c62_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c62_sfEvent);
      *chartInstance->c62_is_c62_ethercat = c62_IN_ReadNextEncoder;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c62_sfEvent);
      (*chartInstance->c62_encoderIdx)++;
      _SFD_DATA_RANGE_CHECK(*chartInstance->c62_encoderIdx, 1U, 4U, 4U,
                            *chartInstance->c62_sfEvent, false);
      (*chartInstance->c62_SDORequest)[0] = 1;
      for (c62_i18 = 0; c62_i18 < 3; c62_i18++) {
        _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_SDORequest)[c62_i18],
                              12U, 4U, 4U, *chartInstance->c62_sfEvent, false);
      }

      (*chartInstance->c62_SDORequest)[1] = c62__s32_d_(chartInstance,
        (*chartInstance->c62_encoderValues)[_SFD_ARRAY_BOUNDS_CHECK(6U,
        c62__s32_d_(chartInstance, *chartInstance->c62_encoderIdx - 1.0), 1, 6,
        1, 0)]);
      for (c62_i19 = 0; c62_i19 < 3; c62_i19++) {
        _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_SDORequest)[c62_i19],
                              12U, 4U, 4U, *chartInstance->c62_sfEvent, false);
      }

      (*chartInstance->c62_SDORequest)[2] = c62__s32_d_(chartInstance,
        (*chartInstance->c62_encoderValues)[6 + _SFD_ARRAY_BOUNDS_CHECK(6U,
        c62__s32_d_(chartInstance, *chartInstance->c62_encoderIdx - 1.0), 1, 6,
        1, 0)]);
      for (c62_i20 = 0; c62_i20 < 3; c62_i20++) {
        _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_SDORequest)[c62_i20],
                              12U, 4U, 4U, *chartInstance->c62_sfEvent, false);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 9U, *chartInstance->c62_sfEvent);
      break;

     case c62_IN_pollReceived:
      CV_CHART_EVAL(27, 0, 11);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U,
                   *chartInstance->c62_sfEvent);
      c62_h_out = (CV_TRANSITION_EVAL(9U, (int32_T)_SFD_CCP_CALL(9U, 0,
        CV_RELATIONAL_EVAL(5U, 9U, 0, (real_T)(*chartInstance->c62_pollResponse)
                           [0], (*chartInstance->c62_pollValues)[2], -1, 1U,
                           (real_T)(*chartInstance->c62_pollResponse)[0] !=
                           (*chartInstance->c62_pollValues)[2]) != 0U,
        *chartInstance->c62_sfEvent)) != 0);
      if (c62_h_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, *chartInstance->c62_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c62_sfEvent);
        *chartInstance->c62_is_c62_ethercat = c62_IN_startPolling;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 13U, *chartInstance->c62_sfEvent);
        (*chartInstance->c62_SDORequest)[0] = 1;
        for (c62_i21 = 0; c62_i21 < 3; c62_i21++) {
          _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_SDORequest)[c62_i21],
                                12U, 4U, 13U, *chartInstance->c62_sfEvent, false);
        }

        (*chartInstance->c62_SDORequest)[1] = c62__s32_d_(chartInstance,
          (*chartInstance->c62_pollValues)[0]);
        for (c62_i22 = 0; c62_i22 < 3; c62_i22++) {
          _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_SDORequest)[c62_i22],
                                12U, 4U, 13U, *chartInstance->c62_sfEvent, false);
        }

        (*chartInstance->c62_SDORequest)[2] = c62__s32_d_(chartInstance,
          (*chartInstance->c62_pollValues)[1]);
        for (c62_i23 = 0; c62_i23 < 3; c62_i23++) {
          _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_SDORequest)[c62_i23],
                                12U, 4U, 13U, *chartInstance->c62_sfEvent, false);
        }
      } else {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, *chartInstance->c62_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 10U, *chartInstance->c62_sfEvent);
        *chartInstance->c62_is_c62_ethercat = c62_IN_PollingComplete;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c62_sfEvent);
        *chartInstance->c62_donePolling = 1;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c62_donePolling, 0U, 4U,
                              2U, *chartInstance->c62_sfEvent, false);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 10U, *chartInstance->c62_sfEvent);
      break;

     case c62_IN_receivedEncoder:
      CV_CHART_EVAL(27, 0, 12);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 16U,
                   *chartInstance->c62_sfEvent);
      c62_i_out = (CV_TRANSITION_EVAL(16U, (int32_T)_SFD_CCP_CALL(16U, 0,
        CV_RELATIONAL_EVAL(5U, 16U, 0, *chartInstance->c62_encoderIdx + 1.0,
                           *chartInstance->c62_encoderValuesCount, -1, 4U,
                           *chartInstance->c62_encoderIdx + 1.0 >
                           *chartInstance->c62_encoderValuesCount) != 0U,
        *chartInstance->c62_sfEvent)) != 0);
      if (c62_i_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 16U, *chartInstance->c62_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c62_sfEvent);
        *chartInstance->c62_is_c62_ethercat = c62_IN_Complete;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c62_sfEvent);
        *chartInstance->c62_complete = 1;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c62_complete, 14U, 4U, 0U,
                              *chartInstance->c62_sfEvent, false);
      } else {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 15U, *chartInstance->c62_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 11U, *chartInstance->c62_sfEvent);
        *chartInstance->c62_is_c62_ethercat = c62_IN_ReadNextEncoder;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c62_sfEvent);
        (*chartInstance->c62_encoderIdx)++;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c62_encoderIdx, 1U, 4U, 4U,
                              *chartInstance->c62_sfEvent, false);
        (*chartInstance->c62_SDORequest)[0] = 1;
        for (c62_i24 = 0; c62_i24 < 3; c62_i24++) {
          _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_SDORequest)[c62_i24],
                                12U, 4U, 4U, *chartInstance->c62_sfEvent, false);
        }

        (*chartInstance->c62_SDORequest)[1] = c62__s32_d_(chartInstance,
          (*chartInstance->c62_encoderValues)[_SFD_ARRAY_BOUNDS_CHECK(6U,
          c62__s32_d_(chartInstance, *chartInstance->c62_encoderIdx - 1.0), 1, 6,
          1, 0)]);
        for (c62_i25 = 0; c62_i25 < 3; c62_i25++) {
          _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_SDORequest)[c62_i25],
                                12U, 4U, 4U, *chartInstance->c62_sfEvent, false);
        }

        (*chartInstance->c62_SDORequest)[2] = c62__s32_d_(chartInstance,
          (*chartInstance->c62_encoderValues)[6 + _SFD_ARRAY_BOUNDS_CHECK(6U,
          c62__s32_d_(chartInstance, *chartInstance->c62_encoderIdx - 1.0), 1, 6,
          1, 0)]);
        for (c62_i26 = 0; c62_i26 < 3; c62_i26++) {
          _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_SDORequest)[c62_i26],
                                12U, 4U, 4U, *chartInstance->c62_sfEvent, false);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 11U, *chartInstance->c62_sfEvent);
      break;

     case c62_IN_setup:
      CV_CHART_EVAL(27, 0, 13);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c62_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 12U, *chartInstance->c62_sfEvent);
      *chartInstance->c62_is_c62_ethercat = c62_IN_ReadNext;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c62_sfEvent);
      *chartInstance->c62_setupIdx = c62__s32_add__(chartInstance,
        *chartInstance->c62_setupIdx, 1);
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c62_setupIdx, 2U, 4U, 3U,
                            *chartInstance->c62_sfEvent, false);
      (*chartInstance->c62_setupData)[0] = c62__s32_d_(chartInstance,
        (*chartInstance->c62_setupValues)[16 + _SFD_ARRAY_BOUNDS_CHECK(3U,
        c62__s32_minus__(chartInstance, *chartInstance->c62_setupIdx, 1), 1, 8,
        1, 0)]);
      for (c62_i27 = 0; c62_i27 < 4; c62_i27++) {
        _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_setupData)[c62_i27],
                              11U, 4U, 3U, *chartInstance->c62_sfEvent, false);
      }

      (*chartInstance->c62_setupData)[1] = 1;
      for (c62_i28 = 0; c62_i28 < 4; c62_i28++) {
        _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_setupData)[c62_i28],
                              11U, 4U, 3U, *chartInstance->c62_sfEvent, false);
      }

      (*chartInstance->c62_setupData)[2] = c62__s32_d_(chartInstance,
        (*chartInstance->c62_setupValues)[_SFD_ARRAY_BOUNDS_CHECK(3U,
        c62__s32_minus__(chartInstance, *chartInstance->c62_setupIdx, 1), 1, 8,
        1, 0)]);
      for (c62_i29 = 0; c62_i29 < 4; c62_i29++) {
        _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_setupData)[c62_i29],
                              11U, 4U, 3U, *chartInstance->c62_sfEvent, false);
      }

      (*chartInstance->c62_setupData)[3] = c62__s32_d_(chartInstance,
        (*chartInstance->c62_setupValues)[8 + _SFD_ARRAY_BOUNDS_CHECK(3U,
        c62__s32_minus__(chartInstance, *chartInstance->c62_setupIdx, 1), 1, 8,
        1, 0)]);
      for (c62_i30 = 0; c62_i30 < 4; c62_i30++) {
        _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_setupData)[c62_i30],
                              11U, 4U, 3U, *chartInstance->c62_sfEvent, false);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 12U, *chartInstance->c62_sfEvent);
      break;

     case c62_IN_startPolling:
      CV_CHART_EVAL(27, 0, 14);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 7U,
                   *chartInstance->c62_sfEvent);
      c62_j_out = (CV_TRANSITION_EVAL(7U, (int32_T)_SFD_CCP_CALL(7U, 0,
        CV_RELATIONAL_EVAL(5U, 7U, 0, (real_T)(*chartInstance->c62_pollResponse)
                           [1], 1.0, 0, 0U, (*chartInstance->c62_pollResponse)[1]
                           == 1) != 0U, *chartInstance->c62_sfEvent)) != 0);
      if (c62_j_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, *chartInstance->c62_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 13U, *chartInstance->c62_sfEvent);
        *chartInstance->c62_is_c62_ethercat = c62_IN_disable1;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c62_sfEvent);
        (*chartInstance->c62_SDORequest)[0] = 0;
        for (c62_i31 = 0; c62_i31 < 3; c62_i31++) {
          _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_SDORequest)[c62_i31],
                                12U, 4U, 7U, *chartInstance->c62_sfEvent, false);
        }
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 13U,
                     *chartInstance->c62_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 13U, *chartInstance->c62_sfEvent);
      break;

     default:
      CV_CHART_EVAL(27, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c62_is_c62_ethercat = c62_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c62_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 27U, *chartInstance->c62_sfEvent);
}

static void initSimStructsc62_ethercat(SFc62_ethercatInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c62_Done(SFc62_ethercatInstanceStruct *chartInstance)
{
  int32_T c62_i32;
  int32_T c62_i33;
  int32_T c62_i34;
  _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, *chartInstance->c62_sfEvent);
  _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c62_sfEvent);
  *chartInstance->c62_is_c62_ethercat = c62_IN_startPolling;
  _SFD_CS_CALL(STATE_ACTIVE_TAG, 13U, *chartInstance->c62_sfEvent);
  (*chartInstance->c62_SDORequest)[0] = 1;
  for (c62_i32 = 0; c62_i32 < 3; c62_i32++) {
    _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_SDORequest)[c62_i32], 12U,
                          4U, 13U, *chartInstance->c62_sfEvent, false);
  }

  (*chartInstance->c62_SDORequest)[1] = c62__s32_d_(chartInstance,
    (*chartInstance->c62_pollValues)[0]);
  for (c62_i33 = 0; c62_i33 < 3; c62_i33++) {
    _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_SDORequest)[c62_i33], 12U,
                          4U, 13U, *chartInstance->c62_sfEvent, false);
  }

  (*chartInstance->c62_SDORequest)[2] = c62__s32_d_(chartInstance,
    (*chartInstance->c62_pollValues)[1]);
  for (c62_i34 = 0; c62_i34 < 3; c62_i34++) {
    _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c62_SDORequest)[c62_i34], 12U,
                          4U, 13U, *chartInstance->c62_sfEvent, false);
  }

  _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c62_sfEvent);
}

static void init_script_number_translation(uint32_T c62_machineNumber, uint32_T
  c62_chartNumber, uint32_T c62_instanceNumber)
{
  (void)c62_machineNumber;
  (void)c62_chartNumber;
  (void)c62_instanceNumber;
}

const mxArray *sf_c62_ethercat_get_eml_resolved_functions_info(void)
{
  const mxArray *c62_nameCaptureInfo = NULL;
  c62_nameCaptureInfo = NULL;
  sf_mex_assign(&c62_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c62_nameCaptureInfo;
}

static const mxArray *c62_sf_marshallOut(void *chartInstanceVoid, void
  *c62_inData)
{
  const mxArray *c62_mxArrayOutData = NULL;
  int32_T c62_u;
  const mxArray *c62_y = NULL;
  SFc62_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc62_ethercatInstanceStruct *)chartInstanceVoid;
  c62_mxArrayOutData = NULL;
  c62_u = *(int32_T *)c62_inData;
  c62_y = NULL;
  sf_mex_assign(&c62_y, sf_mex_create("y", &c62_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c62_mxArrayOutData, c62_y, false);
  return c62_mxArrayOutData;
}

static int32_T c62_emlrt_marshallIn(SFc62_ethercatInstanceStruct *chartInstance,
  const mxArray *c62_b_sfEvent, const char_T *c62_identifier)
{
  int32_T c62_y;
  emlrtMsgIdentifier c62_thisId;
  c62_thisId.fIdentifier = c62_identifier;
  c62_thisId.fParent = NULL;
  c62_y = c62_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c62_b_sfEvent),
    &c62_thisId);
  sf_mex_destroy(&c62_b_sfEvent);
  return c62_y;
}

static int32_T c62_b_emlrt_marshallIn(SFc62_ethercatInstanceStruct
  *chartInstance, const mxArray *c62_u, const emlrtMsgIdentifier *c62_parentId)
{
  int32_T c62_y;
  int32_T c62_i35;
  (void)chartInstance;
  sf_mex_import(c62_parentId, sf_mex_dup(c62_u), &c62_i35, 1, 6, 0U, 0, 0U, 0);
  c62_y = c62_i35;
  sf_mex_destroy(&c62_u);
  return c62_y;
}

static void c62_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c62_mxArrayInData, const char_T *c62_varName, void *c62_outData)
{
  const mxArray *c62_b_sfEvent;
  const char_T *c62_identifier;
  emlrtMsgIdentifier c62_thisId;
  int32_T c62_y;
  SFc62_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc62_ethercatInstanceStruct *)chartInstanceVoid;
  c62_b_sfEvent = sf_mex_dup(c62_mxArrayInData);
  c62_identifier = c62_varName;
  c62_thisId.fIdentifier = c62_identifier;
  c62_thisId.fParent = NULL;
  c62_y = c62_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c62_b_sfEvent),
    &c62_thisId);
  sf_mex_destroy(&c62_b_sfEvent);
  *(int32_T *)c62_outData = c62_y;
  sf_mex_destroy(&c62_mxArrayInData);
}

static const mxArray *c62_b_sf_marshallOut(void *chartInstanceVoid, void
  *c62_inData)
{
  const mxArray *c62_mxArrayOutData = NULL;
  int32_T c62_i36;
  int32_T c62_u[4];
  const mxArray *c62_y = NULL;
  SFc62_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc62_ethercatInstanceStruct *)chartInstanceVoid;
  c62_mxArrayOutData = NULL;
  for (c62_i36 = 0; c62_i36 < 4; c62_i36++) {
    c62_u[c62_i36] = (*(int32_T (*)[4])c62_inData)[c62_i36];
  }

  c62_y = NULL;
  sf_mex_assign(&c62_y, sf_mex_create("y", c62_u, 6, 0U, 1U, 0U, 1, 4), false);
  sf_mex_assign(&c62_mxArrayOutData, c62_y, false);
  return c62_mxArrayOutData;
}

static void c62_c_emlrt_marshallIn(SFc62_ethercatInstanceStruct *chartInstance,
  const mxArray *c62_b_setupData, const char_T *c62_identifier, int32_T c62_y[4])
{
  emlrtMsgIdentifier c62_thisId;
  c62_thisId.fIdentifier = c62_identifier;
  c62_thisId.fParent = NULL;
  c62_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c62_b_setupData), &c62_thisId,
    c62_y);
  sf_mex_destroy(&c62_b_setupData);
}

static void c62_d_emlrt_marshallIn(SFc62_ethercatInstanceStruct *chartInstance,
  const mxArray *c62_u, const emlrtMsgIdentifier *c62_parentId, int32_T c62_y[4])
{
  int32_T c62_iv3[4];
  int32_T c62_i37;
  (void)chartInstance;
  sf_mex_import(c62_parentId, sf_mex_dup(c62_u), c62_iv3, 1, 6, 0U, 1, 0U, 1, 4);
  for (c62_i37 = 0; c62_i37 < 4; c62_i37++) {
    c62_y[c62_i37] = c62_iv3[c62_i37];
  }

  sf_mex_destroy(&c62_u);
}

static void c62_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c62_mxArrayInData, const char_T *c62_varName, void *c62_outData)
{
  const mxArray *c62_b_setupData;
  const char_T *c62_identifier;
  emlrtMsgIdentifier c62_thisId;
  int32_T c62_y[4];
  int32_T c62_i38;
  SFc62_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc62_ethercatInstanceStruct *)chartInstanceVoid;
  c62_b_setupData = sf_mex_dup(c62_mxArrayInData);
  c62_identifier = c62_varName;
  c62_thisId.fIdentifier = c62_identifier;
  c62_thisId.fParent = NULL;
  c62_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c62_b_setupData), &c62_thisId,
    c62_y);
  sf_mex_destroy(&c62_b_setupData);
  for (c62_i38 = 0; c62_i38 < 4; c62_i38++) {
    (*(int32_T (*)[4])c62_outData)[c62_i38] = c62_y[c62_i38];
  }

  sf_mex_destroy(&c62_mxArrayInData);
}

static const mxArray *c62_c_sf_marshallOut(void *chartInstanceVoid, void
  *c62_inData)
{
  const mxArray *c62_mxArrayOutData = NULL;
  int32_T c62_i39;
  int32_T c62_u[3];
  const mxArray *c62_y = NULL;
  SFc62_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc62_ethercatInstanceStruct *)chartInstanceVoid;
  c62_mxArrayOutData = NULL;
  for (c62_i39 = 0; c62_i39 < 3; c62_i39++) {
    c62_u[c62_i39] = (*(int32_T (*)[3])c62_inData)[c62_i39];
  }

  c62_y = NULL;
  sf_mex_assign(&c62_y, sf_mex_create("y", c62_u, 6, 0U, 1U, 0U, 1, 3), false);
  sf_mex_assign(&c62_mxArrayOutData, c62_y, false);
  return c62_mxArrayOutData;
}

static void c62_e_emlrt_marshallIn(SFc62_ethercatInstanceStruct *chartInstance,
  const mxArray *c62_b_SDORequest, const char_T *c62_identifier, int32_T c62_y[3])
{
  emlrtMsgIdentifier c62_thisId;
  c62_thisId.fIdentifier = c62_identifier;
  c62_thisId.fParent = NULL;
  c62_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c62_b_SDORequest),
    &c62_thisId, c62_y);
  sf_mex_destroy(&c62_b_SDORequest);
}

static void c62_f_emlrt_marshallIn(SFc62_ethercatInstanceStruct *chartInstance,
  const mxArray *c62_u, const emlrtMsgIdentifier *c62_parentId, int32_T c62_y[3])
{
  int32_T c62_iv4[3];
  int32_T c62_i40;
  (void)chartInstance;
  sf_mex_import(c62_parentId, sf_mex_dup(c62_u), c62_iv4, 1, 6, 0U, 1, 0U, 1, 3);
  for (c62_i40 = 0; c62_i40 < 3; c62_i40++) {
    c62_y[c62_i40] = c62_iv4[c62_i40];
  }

  sf_mex_destroy(&c62_u);
}

static void c62_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c62_mxArrayInData, const char_T *c62_varName, void *c62_outData)
{
  const mxArray *c62_b_SDORequest;
  const char_T *c62_identifier;
  emlrtMsgIdentifier c62_thisId;
  int32_T c62_y[3];
  int32_T c62_i41;
  SFc62_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc62_ethercatInstanceStruct *)chartInstanceVoid;
  c62_b_SDORequest = sf_mex_dup(c62_mxArrayInData);
  c62_identifier = c62_varName;
  c62_thisId.fIdentifier = c62_identifier;
  c62_thisId.fParent = NULL;
  c62_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c62_b_SDORequest),
    &c62_thisId, c62_y);
  sf_mex_destroy(&c62_b_SDORequest);
  for (c62_i41 = 0; c62_i41 < 3; c62_i41++) {
    (*(int32_T (*)[3])c62_outData)[c62_i41] = c62_y[c62_i41];
  }

  sf_mex_destroy(&c62_mxArrayInData);
}

static const mxArray *c62_d_sf_marshallOut(void *chartInstanceVoid, void
  *c62_inData)
{
  const mxArray *c62_mxArrayOutData = NULL;
  int32_T c62_i42;
  int32_T c62_u[6];
  const mxArray *c62_y = NULL;
  SFc62_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc62_ethercatInstanceStruct *)chartInstanceVoid;
  c62_mxArrayOutData = NULL;
  for (c62_i42 = 0; c62_i42 < 6; c62_i42++) {
    c62_u[c62_i42] = (*(int32_T (*)[6])c62_inData)[c62_i42];
  }

  c62_y = NULL;
  sf_mex_assign(&c62_y, sf_mex_create("y", c62_u, 6, 0U, 1U, 0U, 1, 6), false);
  sf_mex_assign(&c62_mxArrayOutData, c62_y, false);
  return c62_mxArrayOutData;
}

static void c62_g_emlrt_marshallIn(SFc62_ethercatInstanceStruct *chartInstance,
  const mxArray *c62_b_encoderOutputs, const char_T *c62_identifier, int32_T
  c62_y[6])
{
  emlrtMsgIdentifier c62_thisId;
  c62_thisId.fIdentifier = c62_identifier;
  c62_thisId.fParent = NULL;
  c62_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c62_b_encoderOutputs),
    &c62_thisId, c62_y);
  sf_mex_destroy(&c62_b_encoderOutputs);
}

static void c62_h_emlrt_marshallIn(SFc62_ethercatInstanceStruct *chartInstance,
  const mxArray *c62_u, const emlrtMsgIdentifier *c62_parentId, int32_T c62_y[6])
{
  int32_T c62_iv5[6];
  int32_T c62_i43;
  (void)chartInstance;
  sf_mex_import(c62_parentId, sf_mex_dup(c62_u), c62_iv5, 1, 6, 0U, 1, 0U, 1, 6);
  for (c62_i43 = 0; c62_i43 < 6; c62_i43++) {
    c62_y[c62_i43] = c62_iv5[c62_i43];
  }

  sf_mex_destroy(&c62_u);
}

static void c62_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c62_mxArrayInData, const char_T *c62_varName, void *c62_outData)
{
  const mxArray *c62_b_encoderOutputs;
  const char_T *c62_identifier;
  emlrtMsgIdentifier c62_thisId;
  int32_T c62_y[6];
  int32_T c62_i44;
  SFc62_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc62_ethercatInstanceStruct *)chartInstanceVoid;
  c62_b_encoderOutputs = sf_mex_dup(c62_mxArrayInData);
  c62_identifier = c62_varName;
  c62_thisId.fIdentifier = c62_identifier;
  c62_thisId.fParent = NULL;
  c62_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c62_b_encoderOutputs),
    &c62_thisId, c62_y);
  sf_mex_destroy(&c62_b_encoderOutputs);
  for (c62_i44 = 0; c62_i44 < 6; c62_i44++) {
    (*(int32_T (*)[6])c62_outData)[c62_i44] = c62_y[c62_i44];
  }

  sf_mex_destroy(&c62_mxArrayInData);
}

static const mxArray *c62_e_sf_marshallOut(void *chartInstanceVoid, void
  *c62_inData)
{
  const mxArray *c62_mxArrayOutData = NULL;
  int32_T c62_i45;
  int32_T c62_i46;
  int32_T c62_i47;
  real_T c62_u[24];
  const mxArray *c62_y = NULL;
  SFc62_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc62_ethercatInstanceStruct *)chartInstanceVoid;
  c62_mxArrayOutData = NULL;
  c62_i45 = 0;
  for (c62_i46 = 0; c62_i46 < 3; c62_i46++) {
    for (c62_i47 = 0; c62_i47 < 8; c62_i47++) {
      c62_u[c62_i47 + c62_i45] = (*(real_T (*)[24])c62_inData)[c62_i47 + c62_i45];
    }

    c62_i45 += 8;
  }

  c62_y = NULL;
  sf_mex_assign(&c62_y, sf_mex_create("y", c62_u, 0, 0U, 1U, 0U, 2, 8, 3), false);
  sf_mex_assign(&c62_mxArrayOutData, c62_y, false);
  return c62_mxArrayOutData;
}

static const mxArray *c62_f_sf_marshallOut(void *chartInstanceVoid, void
  *c62_inData)
{
  const mxArray *c62_mxArrayOutData = NULL;
  real_T c62_u;
  const mxArray *c62_y = NULL;
  SFc62_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc62_ethercatInstanceStruct *)chartInstanceVoid;
  c62_mxArrayOutData = NULL;
  c62_u = *(real_T *)c62_inData;
  c62_y = NULL;
  sf_mex_assign(&c62_y, sf_mex_create("y", &c62_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c62_mxArrayOutData, c62_y, false);
  return c62_mxArrayOutData;
}

static const mxArray *c62_g_sf_marshallOut(void *chartInstanceVoid, void
  *c62_inData)
{
  const mxArray *c62_mxArrayOutData = NULL;
  int32_T c62_i48;
  real_T c62_u[3];
  const mxArray *c62_y = NULL;
  SFc62_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc62_ethercatInstanceStruct *)chartInstanceVoid;
  c62_mxArrayOutData = NULL;
  for (c62_i48 = 0; c62_i48 < 3; c62_i48++) {
    c62_u[c62_i48] = (*(real_T (*)[3])c62_inData)[c62_i48];
  }

  c62_y = NULL;
  sf_mex_assign(&c62_y, sf_mex_create("y", c62_u, 0, 0U, 1U, 0U, 2, 1, 3), false);
  sf_mex_assign(&c62_mxArrayOutData, c62_y, false);
  return c62_mxArrayOutData;
}

static const mxArray *c62_h_sf_marshallOut(void *chartInstanceVoid, void
  *c62_inData)
{
  const mxArray *c62_mxArrayOutData = NULL;
  int32_T c62_i49;
  int32_T c62_i50;
  int32_T c62_i51;
  real_T c62_u[12];
  const mxArray *c62_y = NULL;
  SFc62_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc62_ethercatInstanceStruct *)chartInstanceVoid;
  c62_mxArrayOutData = NULL;
  c62_i49 = 0;
  for (c62_i50 = 0; c62_i50 < 2; c62_i50++) {
    for (c62_i51 = 0; c62_i51 < 6; c62_i51++) {
      c62_u[c62_i51 + c62_i49] = (*(real_T (*)[12])c62_inData)[c62_i51 + c62_i49];
    }

    c62_i49 += 6;
  }

  c62_y = NULL;
  sf_mex_assign(&c62_y, sf_mex_create("y", c62_u, 0, 0U, 1U, 0U, 2, 6, 2), false);
  sf_mex_assign(&c62_mxArrayOutData, c62_y, false);
  return c62_mxArrayOutData;
}

static const mxArray *c62_i_sf_marshallOut(void *chartInstanceVoid, void
  *c62_inData)
{
  const mxArray *c62_mxArrayOutData = NULL;
  int32_T c62_i52;
  int32_T c62_u[2];
  const mxArray *c62_y = NULL;
  SFc62_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc62_ethercatInstanceStruct *)chartInstanceVoid;
  c62_mxArrayOutData = NULL;
  for (c62_i52 = 0; c62_i52 < 2; c62_i52++) {
    c62_u[c62_i52] = (*(int32_T (*)[2])c62_inData)[c62_i52];
  }

  c62_y = NULL;
  sf_mex_assign(&c62_y, sf_mex_create("y", c62_u, 6, 0U, 1U, 0U, 1, 2), false);
  sf_mex_assign(&c62_mxArrayOutData, c62_y, false);
  return c62_mxArrayOutData;
}

static real_T c62_i_emlrt_marshallIn(SFc62_ethercatInstanceStruct *chartInstance,
  const mxArray *c62_b_encoderIdx, const char_T *c62_identifier)
{
  real_T c62_y;
  emlrtMsgIdentifier c62_thisId;
  c62_thisId.fIdentifier = c62_identifier;
  c62_thisId.fParent = NULL;
  c62_y = c62_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c62_b_encoderIdx),
    &c62_thisId);
  sf_mex_destroy(&c62_b_encoderIdx);
  return c62_y;
}

static real_T c62_j_emlrt_marshallIn(SFc62_ethercatInstanceStruct *chartInstance,
  const mxArray *c62_u, const emlrtMsgIdentifier *c62_parentId)
{
  real_T c62_y;
  real_T c62_d0;
  (void)chartInstance;
  sf_mex_import(c62_parentId, sf_mex_dup(c62_u), &c62_d0, 1, 0, 0U, 0, 0U, 0);
  c62_y = c62_d0;
  sf_mex_destroy(&c62_u);
  return c62_y;
}

static void c62_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c62_mxArrayInData, const char_T *c62_varName, void *c62_outData)
{
  const mxArray *c62_b_encoderIdx;
  const char_T *c62_identifier;
  emlrtMsgIdentifier c62_thisId;
  real_T c62_y;
  SFc62_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc62_ethercatInstanceStruct *)chartInstanceVoid;
  c62_b_encoderIdx = sf_mex_dup(c62_mxArrayInData);
  c62_identifier = c62_varName;
  c62_thisId.fIdentifier = c62_identifier;
  c62_thisId.fParent = NULL;
  c62_y = c62_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c62_b_encoderIdx),
    &c62_thisId);
  sf_mex_destroy(&c62_b_encoderIdx);
  *(real_T *)c62_outData = c62_y;
  sf_mex_destroy(&c62_mxArrayInData);
}

static uint8_T c62_k_emlrt_marshallIn(SFc62_ethercatInstanceStruct
  *chartInstance, const mxArray *c62_b_is_active_c62_ethercat, const char_T
  *c62_identifier)
{
  uint8_T c62_y;
  emlrtMsgIdentifier c62_thisId;
  c62_thisId.fIdentifier = c62_identifier;
  c62_thisId.fParent = NULL;
  c62_y = c62_l_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c62_b_is_active_c62_ethercat), &c62_thisId);
  sf_mex_destroy(&c62_b_is_active_c62_ethercat);
  return c62_y;
}

static uint8_T c62_l_emlrt_marshallIn(SFc62_ethercatInstanceStruct
  *chartInstance, const mxArray *c62_u, const emlrtMsgIdentifier *c62_parentId)
{
  uint8_T c62_y;
  uint8_T c62_u0;
  (void)chartInstance;
  sf_mex_import(c62_parentId, sf_mex_dup(c62_u), &c62_u0, 1, 3, 0U, 0, 0U, 0);
  c62_y = c62_u0;
  sf_mex_destroy(&c62_u);
  return c62_y;
}

static const mxArray *c62_m_emlrt_marshallIn(SFc62_ethercatInstanceStruct
  *chartInstance, const mxArray *c62_b_setSimStateSideEffectsInfo, const char_T *
  c62_identifier)
{
  const mxArray *c62_y = NULL;
  emlrtMsgIdentifier c62_thisId;
  c62_y = NULL;
  c62_thisId.fIdentifier = c62_identifier;
  c62_thisId.fParent = NULL;
  sf_mex_assign(&c62_y, c62_n_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c62_b_setSimStateSideEffectsInfo), &c62_thisId), false);
  sf_mex_destroy(&c62_b_setSimStateSideEffectsInfo);
  return c62_y;
}

static const mxArray *c62_n_emlrt_marshallIn(SFc62_ethercatInstanceStruct
  *chartInstance, const mxArray *c62_u, const emlrtMsgIdentifier *c62_parentId)
{
  const mxArray *c62_y = NULL;
  (void)chartInstance;
  (void)c62_parentId;
  c62_y = NULL;
  sf_mex_assign(&c62_y, sf_mex_duplicatearraysafe(&c62_u), false);
  sf_mex_destroy(&c62_u);
  return c62_y;
}

static int32_T c62__s32_d_(SFc62_ethercatInstanceStruct *chartInstance, real_T
  c62_b)
{
  int32_T c62_a;
  c62_a = (int32_T)c62_b;
  if ((real_T)c62_a != (c62_b < 0.0 ? muDoubleScalarCeil(c62_b) :
                        muDoubleScalarFloor(c62_b))) {
    _SFD_OVERFLOW_DETECTION(SFDB_OVERFLOW, 1U, 0U, *chartInstance->c62_sfEvent,
      false);
  }

  return c62_a;
}

static int32_T c62__s32_minus__(SFc62_ethercatInstanceStruct *chartInstance,
  int32_T c62_b, int32_T c62_c)
{
  int32_T c62_a;
  c62_a = c62_b - c62_c;
  if (((c62_b ^ c62_a) & (c62_b ^ c62_c)) < 0) {
    _SFD_OVERFLOW_DETECTION(SFDB_OVERFLOW, 1U, 0U, *chartInstance->c62_sfEvent,
      false);
  }

  return c62_a;
}

static int32_T c62__s32_add__(SFc62_ethercatInstanceStruct *chartInstance,
  int32_T c62_b, int32_T c62_c)
{
  int32_T c62_a;
  c62_a = c62_b + c62_c;
  if (((c62_a ^ c62_b) & (c62_a ^ c62_c)) < 0) {
    _SFD_OVERFLOW_DETECTION(SFDB_OVERFLOW, 1U, 0U, *chartInstance->c62_sfEvent,
      false);
  }

  return c62_a;
}

static void init_dsm_address_info(SFc62_ethercatInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc62_ethercatInstanceStruct *chartInstance)
{
  chartInstance->c62_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 0);
  chartInstance->c62_isStable = (boolean_T *)ssGetDWork_wrapper(chartInstance->S,
    1);
  chartInstance->c62_is_active_c62_ethercat = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 2);
  chartInstance->c62_is_c62_ethercat = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 3);
  chartInstance->c62_setupData = (int32_T (*)[4])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c62_SDORequest = (int32_T (*)[3])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c62_encoderOutputs = (int32_T (*)[6])
    ssGetOutputPortSignal_wrapper(chartInstance->S, 3);
  chartInstance->c62_setupValues = (real_T (*)[24])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c62_setupValuesCount = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c62_setupIdx = (int32_T *)ssGetDWork_wrapper(chartInstance->S,
    4);
  chartInstance->c62_pollValues = (real_T (*)[3])ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c62_encoderValues = (real_T (*)[12])
    ssGetInputPortSignal_wrapper(chartInstance->S, 3);
  chartInstance->c62_encoderValuesCount = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c62_intStatus = (int32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c62_pollResponse = (int32_T (*)[2])ssGetInputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c62_donePolling = (int32_T *)ssGetDWork_wrapper
    (chartInstance->S, 5);
  chartInstance->c62_encoderResponse = (int32_T (*)[2])
    ssGetInputPortSignal_wrapper(chartInstance->S, 7);
  chartInstance->c62_complete = (int32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c62_encoderIdx = (real_T *)ssGetDWork_wrapper(chartInstance->S,
    6);
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
void sf_c62_ethercat_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(142198289U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3496392364U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3886499195U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3717660101U);
}

mxArray* sf_c62_ethercat_get_post_codegen_info(void);
mxArray *sf_c62_ethercat_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("rm52HKbYsNXAga9m5ufUSB");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,8,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(8);
      pr[1] = (double)(3);
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
      pr[1] = (double)(3);
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
      pr[0] = (double)(6);
      pr[1] = (double)(2);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(8));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,5,"type",mxType);
    }

    mxSetField(mxData,5,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(2);
      pr[1] = (double)(1);
      mxSetField(mxData,6,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(8));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(8));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,7,"type",mxType);
    }

    mxSetField(mxData,7,"complexity",mxCreateDoubleScalar(0));
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
      pr[0] = (double)(4);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(8));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(3);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(8));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(6);
      pr[1] = (double)(1);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(8));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(8));
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
    mxArray* mxPostCodegenInfo = sf_c62_ethercat_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c62_ethercat_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c62_ethercat_jit_fallback_info(void)
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

mxArray *sf_c62_ethercat_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c62_ethercat_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c62_ethercat(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x9'type','srcId','name','auxInfo'{{M[1],M[170],T\"SDORequest\",},{M[1],M[187],T\"complete\",},{M[1],M[186],T\"encoderOutputs\",},{M[1],M[171],T\"setupData\",},{M[3],M[182],T\"donePolling\",},{M[3],M[190],T\"encoderIdx\",},{M[3],M[168],T\"setupIdx\",},{M[8],M[0],T\"is_active_c62_ethercat\",},{M[9],M[0],T\"is_c62_ethercat\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 9, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c62_ethercat_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc62_ethercatInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc62_ethercatInstanceStruct *) chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _ethercatMachineNumber_,
           62,
           14,
           17,
           0,
           15,
           0,
           0,
           0,
           0,
           0,
           &(chartInstance->chartNumber),
           &(chartInstance->instanceNumber),
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_ethercatMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_ethercatMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _ethercatMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,0,0,0,"donePolling");
          _SFD_SET_DATA_PROPS(1,0,0,0,"encoderIdx");
          _SFD_SET_DATA_PROPS(2,0,0,0,"setupIdx");
          _SFD_SET_DATA_PROPS(3,1,1,0,"setupValues");
          _SFD_SET_DATA_PROPS(4,1,1,0,"setupValuesCount");
          _SFD_SET_DATA_PROPS(5,1,1,0,"pollValues");
          _SFD_SET_DATA_PROPS(6,1,1,0,"encoderValues");
          _SFD_SET_DATA_PROPS(7,1,1,0,"encoderValuesCount");
          _SFD_SET_DATA_PROPS(8,1,1,0,"intStatus");
          _SFD_SET_DATA_PROPS(9,1,1,0,"pollResponse");
          _SFD_SET_DATA_PROPS(10,1,1,0,"encoderResponse");
          _SFD_SET_DATA_PROPS(11,2,0,1,"setupData");
          _SFD_SET_DATA_PROPS(12,2,0,1,"SDORequest");
          _SFD_SET_DATA_PROPS(13,2,0,1,"encoderOutputs");
          _SFD_SET_DATA_PROPS(14,2,0,1,"complete");
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
          _SFD_CH_SUBSTATE_COUNT(14);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_CH_SUBSTATE_INDEX(4,4);
          _SFD_CH_SUBSTATE_INDEX(5,5);
          _SFD_CH_SUBSTATE_INDEX(6,6);
          _SFD_CH_SUBSTATE_INDEX(7,7);
          _SFD_CH_SUBSTATE_INDEX(8,8);
          _SFD_CH_SUBSTATE_INDEX(9,9);
          _SFD_CH_SUBSTATE_INDEX(10,10);
          _SFD_CH_SUBSTATE_INDEX(11,11);
          _SFD_CH_SUBSTATE_INDEX(12,12);
          _SFD_CH_SUBSTATE_INDEX(13,13);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(5,0);
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(7,0);
          _SFD_ST_SUBSTATE_COUNT(8,0);
          _SFD_ST_SUBSTATE_COUNT(9,0);
          _SFD_ST_SUBSTATE_COUNT(10,0);
          _SFD_ST_SUBSTATE_COUNT(11,0);
          _SFD_ST_SUBSTATE_COUNT(12,0);
          _SFD_ST_SUBSTATE_COUNT(13,0);
        }

        _SFD_CV_INIT_CHART(14,1,0,0);

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
          _SFD_CV_INIT_STATE(7,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(8,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(9,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(10,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(11,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(12,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(13,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 15 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 0, 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(5,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(3,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 15 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 5, 5, 5, 5, 5 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(1,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 15 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 15 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 0, 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(2,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 32 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 32 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 4, 4, 4, 4, 4 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(4,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 21 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(7,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 21 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 0, 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(7,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(6,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 21 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(8,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 21 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 5, 5, 5, 5, 5 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(8,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 33 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(9,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 33 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 1, 1, 1, 1, 1 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(9,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(10,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(11,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 24 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(13,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 24 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 0, 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(13,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 24 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(14,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 24 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 5, 5, 5, 5, 5 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(14,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(12,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(15,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 36 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(16,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 36 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 4, 4, 4, 4, 4 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(16,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_INT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c62_sf_marshallOut,(MexInFcnForType)c62_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c62_f_sf_marshallOut,(MexInFcnForType)
          c62_e_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_INT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c62_sf_marshallOut,(MexInFcnForType)c62_sf_marshallIn);

        {
          unsigned int dimVector[2];
          dimVector[0]= 8;
          dimVector[1]= 3;
          _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c62_e_sf_marshallOut,(MexInFcnForType)NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c62_f_sf_marshallOut,(MexInFcnForType)NULL);

        {
          unsigned int dimVector[2];
          dimVector[0]= 1;
          dimVector[1]= 3;
          _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c62_g_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[2];
          dimVector[0]= 6;
          dimVector[1]= 2;
          _SFD_SET_DATA_COMPILED_PROPS(6,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c62_h_sf_marshallOut,(MexInFcnForType)NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c62_f_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(8,SF_INT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c62_sf_marshallOut,(MexInFcnForType)NULL);

        {
          unsigned int dimVector[1];
          dimVector[0]= 2;
          _SFD_SET_DATA_COMPILED_PROPS(9,SF_INT32,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c62_i_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 2;
          _SFD_SET_DATA_COMPILED_PROPS(10,SF_INT32,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c62_i_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 4;
          _SFD_SET_DATA_COMPILED_PROPS(11,SF_INT32,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c62_b_sf_marshallOut,(MexInFcnForType)
            c62_b_sf_marshallIn);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 3;
          _SFD_SET_DATA_COMPILED_PROPS(12,SF_INT32,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c62_c_sf_marshallOut,(MexInFcnForType)
            c62_c_sf_marshallIn);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 6;
          _SFD_SET_DATA_COMPILED_PROPS(13,SF_INT32,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c62_d_sf_marshallOut,(MexInFcnForType)
            c62_d_sf_marshallIn);
        }

        _SFD_SET_DATA_COMPILED_PROPS(14,SF_INT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c62_sf_marshallOut,(MexInFcnForType)c62_sf_marshallIn);
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _ethercatMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc62_ethercatInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc62_ethercatInstanceStruct *) chartInfo->chartInstance;
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(11U, *chartInstance->c62_setupData);
        _SFD_SET_DATA_VALUE_PTR(12U, *chartInstance->c62_SDORequest);
        _SFD_SET_DATA_VALUE_PTR(13U, *chartInstance->c62_encoderOutputs);
        _SFD_SET_DATA_VALUE_PTR(3U, *chartInstance->c62_setupValues);
        _SFD_SET_DATA_VALUE_PTR(4U, chartInstance->c62_setupValuesCount);
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c62_setupIdx);
        _SFD_SET_DATA_VALUE_PTR(5U, *chartInstance->c62_pollValues);
        _SFD_SET_DATA_VALUE_PTR(6U, *chartInstance->c62_encoderValues);
        _SFD_SET_DATA_VALUE_PTR(7U, chartInstance->c62_encoderValuesCount);
        _SFD_SET_DATA_VALUE_PTR(8U, chartInstance->c62_intStatus);
        _SFD_SET_DATA_VALUE_PTR(9U, *chartInstance->c62_pollResponse);
        _SFD_SET_DATA_VALUE_PTR(0U, chartInstance->c62_donePolling);
        _SFD_SET_DATA_VALUE_PTR(10U, *chartInstance->c62_encoderResponse);
        _SFD_SET_DATA_VALUE_PTR(14U, chartInstance->c62_complete);
        _SFD_SET_DATA_VALUE_PTR(1U, chartInstance->c62_encoderIdx);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sub8mArNF9iSmkgmBxxkWB";
}

static void sf_check_dwork_consistency(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    const uint32_T *sfunDWorkChecksum = sf_get_sfun_dwork_checksum();
    mxArray *infoStruct = load_ethercat_optimization_info();
    mxArray* mxRTWDWorkChecksum = sf_get_dwork_info_from_mat_file(S,
      sf_get_instance_specialization(), infoStruct, 62, "dworkChecksum");
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

static void sf_opaque_initialize_c62_ethercat(void *chartInstanceVar)
{
  sf_check_dwork_consistency(((SFc62_ethercatInstanceStruct*) chartInstanceVar
    )->S);
  chart_debug_initialization(((SFc62_ethercatInstanceStruct*) chartInstanceVar
    )->S,0);
  initialize_params_c62_ethercat((SFc62_ethercatInstanceStruct*)
    chartInstanceVar);
  initialize_c62_ethercat((SFc62_ethercatInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c62_ethercat(void *chartInstanceVar)
{
  enable_c62_ethercat((SFc62_ethercatInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c62_ethercat(void *chartInstanceVar)
{
  disable_c62_ethercat((SFc62_ethercatInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c62_ethercat(void *chartInstanceVar)
{
  sf_gateway_c62_ethercat((SFc62_ethercatInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c62_ethercat(void *chartInstanceVar)
{
  ext_mode_exec_c62_ethercat((SFc62_ethercatInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c62_ethercat(SimStruct* S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  return get_sim_state_c62_ethercat((SFc62_ethercatInstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c62_ethercat(SimStruct* S, const mxArray *st)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  set_sim_state_c62_ethercat((SFc62_ethercatInstanceStruct*)
    chartInfo->chartInstance, st);
}

static void sf_opaque_terminate_c62_ethercat(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc62_ethercatInstanceStruct*) chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_ethercat_optimization_info();
    }

    finalize_c62_ethercat((SFc62_ethercatInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (crtInfo != NULL) {
      utFree(crtInfo);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc62_ethercat((SFc62_ethercatInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c62_ethercat(SimStruct *S)
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
    initialize_params_c62_ethercat((SFc62_ethercatInstanceStruct*)
      (chartInfo->chartInstance));
  }
}

mxArray *sf_c62_ethercat_get_testpoint_info(void)
{
  return NULL;
}

static void sf_set_sfun_dwork_info(SimStruct *S)
{
  const char *dworkEncStr[] = {
    "100 S1x7'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size'{{T\"int32\",,,,,,,M[0],M[]},{T\"boolean\",,,,,,,M[0],M[]},{T\"uint8\",,,,,,,M[0],M[]},{T\"uint8\",,,,,,,M[0],M[]},{T\"int32\",,,,,,,M[0],M[]},{T\"int32\",,,,,,,M[0],M[]},{T\"double\",,,,,,,M[0],M[]}}"
  };

  sf_set_encoded_dwork_info(S, dworkEncStr, 7, 10);
}

static uint32_T* sf_get_sfun_dwork_checksum()
{
  static uint32_T checksum[4] = { 3483747202U, 1357715284U, 3272382831U,
    2286841370U };

  return checksum;
}

static void mdlSetWorkWidths_c62_ethercat(SimStruct *S)
{
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_ethercat_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      62);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,62,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,62);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 6, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 7, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,62,8);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,62,4);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=4; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 8; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,62);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(3276609298U));
  ssSetChecksum1(S,(3942718794U));
  ssSetChecksum2(S,(1298092720U));
  ssSetChecksum3(S,(1911702755U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c62_ethercat(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c62_ethercat(SimStruct *S)
{
  SFc62_ethercatInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc62_ethercatInstanceStruct *)utMalloc(sizeof
    (SFc62_ethercatInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc62_ethercatInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c62_ethercat;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c62_ethercat;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c62_ethercat;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c62_ethercat;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c62_ethercat;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c62_ethercat;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c62_ethercat;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c62_ethercat;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c62_ethercat;
  chartInstance->chartInfo.mdlStart = mdlStart_c62_ethercat;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c62_ethercat;
  chartInstance->chartInfo.extModeExec = sf_opaque_ext_mode_exec_c62_ethercat;
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

void c62_ethercat_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c62_ethercat(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c62_ethercat(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c62_ethercat(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c62_ethercat_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
