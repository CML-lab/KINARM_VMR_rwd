/* Include files */

#include <stddef.h>
#include "blas.h"
#include "ethercat_sfun.h"
#include "c69_ethercat.h"
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
#define c69_IN_NO_ACTIVE_CHILD         ((uint8_T)0U)
#define c69_IN_Done                    ((uint8_T)1U)
#define c69_IN_ReadNextFloat           ((uint8_T)2U)
#define c69_IN_ReadNextInt             ((uint8_T)3U)
#define c69_IN_ReceivedFloat           ((uint8_T)4U)
#define c69_IN_ReceivedInt             ((uint8_T)5U)
#define c69_IN_disableFloat            ((uint8_T)6U)
#define c69_IN_disableInt              ((uint8_T)7U)
#define c69_IN_setup                   ((uint8_T)8U)
#define c69_IN_startFloats             ((uint8_T)9U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c69_debug_family_names[3] = { "n", "nargin", "nargout" };

/* Function Declarations */
static void initialize_c69_ethercat(SFc69_ethercatInstanceStruct *chartInstance);
static void initialize_params_c69_ethercat(SFc69_ethercatInstanceStruct
  *chartInstance);
static void enable_c69_ethercat(SFc69_ethercatInstanceStruct *chartInstance);
static void disable_c69_ethercat(SFc69_ethercatInstanceStruct *chartInstance);
static void c69_update_debugger_state_c69_ethercat(SFc69_ethercatInstanceStruct *
  chartInstance);
static void ext_mode_exec_c69_ethercat(SFc69_ethercatInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c69_ethercat(SFc69_ethercatInstanceStruct
  *chartInstance);
static void set_sim_state_c69_ethercat(SFc69_ethercatInstanceStruct
  *chartInstance, const mxArray *c69_st);
static void c69_set_sim_state_side_effects_c69_ethercat
  (SFc69_ethercatInstanceStruct *chartInstance);
static void finalize_c69_ethercat(SFc69_ethercatInstanceStruct *chartInstance);
static void sf_gateway_c69_ethercat(SFc69_ethercatInstanceStruct *chartInstance);
static void mdl_start_c69_ethercat(SFc69_ethercatInstanceStruct *chartInstance);
static void c69_chartstep_c69_ethercat(SFc69_ethercatInstanceStruct
  *chartInstance);
static void initSimStructsc69_ethercat(SFc69_ethercatInstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c69_machineNumber, uint32_T
  c69_chartNumber, uint32_T c69_instanceNumber);
static const mxArray *c69_sf_marshallOut(void *chartInstanceVoid, void
  *c69_inData);
static real_T c69_emlrt_marshallIn(SFc69_ethercatInstanceStruct *chartInstance,
  const mxArray *c69_nargout, const char_T *c69_identifier);
static real_T c69_b_emlrt_marshallIn(SFc69_ethercatInstanceStruct *chartInstance,
  const mxArray *c69_u, const emlrtMsgIdentifier *c69_parentId);
static void c69_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c69_mxArrayInData, const char_T *c69_varName, void *c69_outData);
static void c69_clearValues(SFc69_ethercatInstanceStruct *chartInstance);
static const mxArray *c69_b_sf_marshallOut(void *chartInstanceVoid, void
  *c69_inData);
static int32_T c69_c_emlrt_marshallIn(SFc69_ethercatInstanceStruct
  *chartInstance, const mxArray *c69_b_sfEvent, const char_T *c69_identifier);
static int32_T c69_d_emlrt_marshallIn(SFc69_ethercatInstanceStruct
  *chartInstance, const mxArray *c69_u, const emlrtMsgIdentifier *c69_parentId);
static void c69_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c69_mxArrayInData, const char_T *c69_varName, void *c69_outData);
static const mxArray *c69_c_sf_marshallOut(void *chartInstanceVoid, void
  *c69_inData);
static const mxArray *c69_d_sf_marshallOut(void *chartInstanceVoid, void
  *c69_inData);
static void c69_e_emlrt_marshallIn(SFc69_ethercatInstanceStruct *chartInstance,
  const mxArray *c69_b_SDOCommand, const char_T *c69_identifier, int32_T c69_y[3]);
static void c69_f_emlrt_marshallIn(SFc69_ethercatInstanceStruct *chartInstance,
  const mxArray *c69_u, const emlrtMsgIdentifier *c69_parentId, int32_T c69_y[3]);
static void c69_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c69_mxArrayInData, const char_T *c69_varName, void *c69_outData);
static const mxArray *c69_e_sf_marshallOut(void *chartInstanceVoid, void
  *c69_inData);
static void c69_g_emlrt_marshallIn(SFc69_ethercatInstanceStruct *chartInstance,
  const mxArray *c69_b_intSDOValues, const char_T *c69_identifier, int32_T
  c69_y[20]);
static void c69_h_emlrt_marshallIn(SFc69_ethercatInstanceStruct *chartInstance,
  const mxArray *c69_u, const emlrtMsgIdentifier *c69_parentId, int32_T c69_y[20]);
static void c69_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c69_mxArrayInData, const char_T *c69_varName, void *c69_outData);
static const mxArray *c69_f_sf_marshallOut(void *chartInstanceVoid, void
  *c69_inData);
static void c69_i_emlrt_marshallIn(SFc69_ethercatInstanceStruct *chartInstance,
  const mxArray *c69_b_floatSDOValues, const char_T *c69_identifier, real_T
  c69_y[20]);
static void c69_j_emlrt_marshallIn(SFc69_ethercatInstanceStruct *chartInstance,
  const mxArray *c69_u, const emlrtMsgIdentifier *c69_parentId, real_T c69_y[20]);
static void c69_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c69_mxArrayInData, const char_T *c69_varName, void *c69_outData);
static uint8_T c69_k_emlrt_marshallIn(SFc69_ethercatInstanceStruct
  *chartInstance, const mxArray *c69_b_is_active_c69_ethercat, const char_T
  *c69_identifier);
static uint8_T c69_l_emlrt_marshallIn(SFc69_ethercatInstanceStruct
  *chartInstance, const mxArray *c69_u, const emlrtMsgIdentifier *c69_parentId);
static const mxArray *c69_m_emlrt_marshallIn(SFc69_ethercatInstanceStruct
  *chartInstance, const mxArray *c69_b_setSimStateSideEffectsInfo, const char_T *
  c69_identifier);
static const mxArray *c69_n_emlrt_marshallIn(SFc69_ethercatInstanceStruct
  *chartInstance, const mxArray *c69_u, const emlrtMsgIdentifier *c69_parentId);
static int32_T c69__s32_d_(SFc69_ethercatInstanceStruct *chartInstance, real_T
  c69_b);
static int32_T c69__s32_minus__(SFc69_ethercatInstanceStruct *chartInstance,
  int32_T c69_b, int32_T c69_c);
static int32_T c69__s32_add__(SFc69_ethercatInstanceStruct *chartInstance,
  int32_T c69_b, int32_T c69_c);
static void init_dsm_address_info(SFc69_ethercatInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc69_ethercatInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c69_ethercat(SFc69_ethercatInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc69_ethercat(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  *chartInstance->c69_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c69_doSetSimStateSideEffects = 0U;
  chartInstance->c69_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c69_is_active_c69_ethercat = 0U;
  *chartInstance->c69_is_c69_ethercat = c69_IN_NO_ACTIVE_CHILD;
  *chartInstance->c69_valueIdx = 0;
  *chartInstance->c69_lastTrigger = -1;
  *chartInstance->c69_valueCount = 0.0;
  if (!(sf_get_output_port_reusable(chartInstance->S, 1) != 0)) {
    (*chartInstance->c69_SDOCommand)[0] = 0;
    (*chartInstance->c69_SDOCommand)[1] = 0;
    (*chartInstance->c69_SDOCommand)[2] = 0;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 2) != 0)) {
    (*chartInstance->c69_intSDOValues)[0] = 0;
    (*chartInstance->c69_intSDOValues)[1] = 0;
    (*chartInstance->c69_intSDOValues)[2] = 0;
    (*chartInstance->c69_intSDOValues)[3] = 0;
    (*chartInstance->c69_intSDOValues)[4] = 0;
    (*chartInstance->c69_intSDOValues)[5] = 0;
    (*chartInstance->c69_intSDOValues)[6] = 0;
    (*chartInstance->c69_intSDOValues)[7] = 0;
    (*chartInstance->c69_intSDOValues)[8] = 0;
    (*chartInstance->c69_intSDOValues)[9] = 0;
    (*chartInstance->c69_intSDOValues)[10] = 0;
    (*chartInstance->c69_intSDOValues)[11] = 0;
    (*chartInstance->c69_intSDOValues)[12] = 0;
    (*chartInstance->c69_intSDOValues)[13] = 0;
    (*chartInstance->c69_intSDOValues)[14] = 0;
    (*chartInstance->c69_intSDOValues)[15] = 0;
    (*chartInstance->c69_intSDOValues)[16] = 0;
    (*chartInstance->c69_intSDOValues)[17] = 0;
    (*chartInstance->c69_intSDOValues)[18] = 0;
    (*chartInstance->c69_intSDOValues)[19] = 0;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 3) != 0)) {
    (*chartInstance->c69_floatSDOValues)[0] = 0.0;
    (*chartInstance->c69_floatSDOValues)[1] = 0.0;
    (*chartInstance->c69_floatSDOValues)[2] = 0.0;
    (*chartInstance->c69_floatSDOValues)[3] = 0.0;
    (*chartInstance->c69_floatSDOValues)[4] = 0.0;
    (*chartInstance->c69_floatSDOValues)[5] = 0.0;
    (*chartInstance->c69_floatSDOValues)[6] = 0.0;
    (*chartInstance->c69_floatSDOValues)[7] = 0.0;
    (*chartInstance->c69_floatSDOValues)[8] = 0.0;
    (*chartInstance->c69_floatSDOValues)[9] = 0.0;
    (*chartInstance->c69_floatSDOValues)[10] = 0.0;
    (*chartInstance->c69_floatSDOValues)[11] = 0.0;
    (*chartInstance->c69_floatSDOValues)[12] = 0.0;
    (*chartInstance->c69_floatSDOValues)[13] = 0.0;
    (*chartInstance->c69_floatSDOValues)[14] = 0.0;
    (*chartInstance->c69_floatSDOValues)[15] = 0.0;
    (*chartInstance->c69_floatSDOValues)[16] = 0.0;
    (*chartInstance->c69_floatSDOValues)[17] = 0.0;
    (*chartInstance->c69_floatSDOValues)[18] = 0.0;
    (*chartInstance->c69_floatSDOValues)[19] = 0.0;
  }

  if (!(sf_get_output_port_reusable(chartInstance->S, 4) != 0)) {
    *chartInstance->c69_complete = 0;
  }
}

static void initialize_params_c69_ethercat(SFc69_ethercatInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void enable_c69_ethercat(SFc69_ethercatInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c69_ethercat(SFc69_ethercatInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c69_update_debugger_state_c69_ethercat(SFc69_ethercatInstanceStruct *
  chartInstance)
{
  uint32_T c69_prevAniVal;
  c69_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (*chartInstance->c69_is_active_c69_ethercat == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 34U, *chartInstance->c69_sfEvent);
  }

  if (*chartInstance->c69_is_c69_ethercat == c69_IN_setup) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c69_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c69_sfEvent);
  }

  if (*chartInstance->c69_is_c69_ethercat == c69_IN_ReadNextInt) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c69_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c69_sfEvent);
  }

  if (*chartInstance->c69_is_c69_ethercat == c69_IN_disableInt) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c69_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c69_sfEvent);
  }

  if (*chartInstance->c69_is_c69_ethercat == c69_IN_ReceivedInt) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c69_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c69_sfEvent);
  }

  if (*chartInstance->c69_is_c69_ethercat == c69_IN_ReadNextFloat) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c69_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c69_sfEvent);
  }

  if (*chartInstance->c69_is_c69_ethercat == c69_IN_startFloats) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c69_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c69_sfEvent);
  }

  if (*chartInstance->c69_is_c69_ethercat == c69_IN_disableFloat) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c69_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c69_sfEvent);
  }

  if (*chartInstance->c69_is_c69_ethercat == c69_IN_Done) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c69_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c69_sfEvent);
  }

  if (*chartInstance->c69_is_c69_ethercat == c69_IN_ReceivedFloat) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c69_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c69_sfEvent);
  }

  _SFD_SET_ANIMATION(c69_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c69_ethercat(SFc69_ethercatInstanceStruct
  *chartInstance)
{
  c69_update_debugger_state_c69_ethercat(chartInstance);
}

static const mxArray *get_sim_state_c69_ethercat(SFc69_ethercatInstanceStruct
  *chartInstance)
{
  const mxArray *c69_st;
  const mxArray *c69_y = NULL;
  const mxArray *c69_b_y = NULL;
  int32_T c69_hoistedGlobal;
  int32_T c69_u;
  const mxArray *c69_c_y = NULL;
  const mxArray *c69_d_y = NULL;
  const mxArray *c69_e_y = NULL;
  int32_T c69_b_hoistedGlobal;
  int32_T c69_b_u;
  const mxArray *c69_f_y = NULL;
  real_T c69_c_hoistedGlobal;
  real_T c69_c_u;
  const mxArray *c69_g_y = NULL;
  int32_T c69_d_hoistedGlobal;
  int32_T c69_d_u;
  const mxArray *c69_h_y = NULL;
  uint8_T c69_e_hoistedGlobal;
  uint8_T c69_e_u;
  const mxArray *c69_i_y = NULL;
  uint8_T c69_f_hoistedGlobal;
  uint8_T c69_f_u;
  const mxArray *c69_j_y = NULL;
  c69_st = NULL;
  c69_st = NULL;
  c69_y = NULL;
  sf_mex_assign(&c69_y, sf_mex_createcellmatrix(9, 1), false);
  c69_b_y = NULL;
  sf_mex_assign(&c69_b_y, sf_mex_create("y", *chartInstance->c69_SDOCommand, 6,
    0U, 1U, 0U, 1, 3), false);
  sf_mex_setcell(c69_y, 0, c69_b_y);
  c69_hoistedGlobal = *chartInstance->c69_complete;
  c69_u = c69_hoistedGlobal;
  c69_c_y = NULL;
  sf_mex_assign(&c69_c_y, sf_mex_create("y", &c69_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c69_y, 1, c69_c_y);
  c69_d_y = NULL;
  sf_mex_assign(&c69_d_y, sf_mex_create("y", *chartInstance->c69_floatSDOValues,
    0, 0U, 1U, 0U, 1, 20), false);
  sf_mex_setcell(c69_y, 2, c69_d_y);
  c69_e_y = NULL;
  sf_mex_assign(&c69_e_y, sf_mex_create("y", *chartInstance->c69_intSDOValues, 6,
    0U, 1U, 0U, 1, 20), false);
  sf_mex_setcell(c69_y, 3, c69_e_y);
  c69_b_hoistedGlobal = *chartInstance->c69_lastTrigger;
  c69_b_u = c69_b_hoistedGlobal;
  c69_f_y = NULL;
  sf_mex_assign(&c69_f_y, sf_mex_create("y", &c69_b_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c69_y, 4, c69_f_y);
  c69_c_hoistedGlobal = *chartInstance->c69_valueCount;
  c69_c_u = c69_c_hoistedGlobal;
  c69_g_y = NULL;
  sf_mex_assign(&c69_g_y, sf_mex_create("y", &c69_c_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c69_y, 5, c69_g_y);
  c69_d_hoistedGlobal = *chartInstance->c69_valueIdx;
  c69_d_u = c69_d_hoistedGlobal;
  c69_h_y = NULL;
  sf_mex_assign(&c69_h_y, sf_mex_create("y", &c69_d_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c69_y, 6, c69_h_y);
  c69_e_hoistedGlobal = *chartInstance->c69_is_active_c69_ethercat;
  c69_e_u = c69_e_hoistedGlobal;
  c69_i_y = NULL;
  sf_mex_assign(&c69_i_y, sf_mex_create("y", &c69_e_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c69_y, 7, c69_i_y);
  c69_f_hoistedGlobal = *chartInstance->c69_is_c69_ethercat;
  c69_f_u = c69_f_hoistedGlobal;
  c69_j_y = NULL;
  sf_mex_assign(&c69_j_y, sf_mex_create("y", &c69_f_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c69_y, 8, c69_j_y);
  sf_mex_assign(&c69_st, c69_y, false);
  return c69_st;
}

static void set_sim_state_c69_ethercat(SFc69_ethercatInstanceStruct
  *chartInstance, const mxArray *c69_st)
{
  const mxArray *c69_u;
  int32_T c69_iv0[3];
  int32_T c69_i0;
  real_T c69_dv0[20];
  int32_T c69_i1;
  int32_T c69_iv1[20];
  int32_T c69_i2;
  c69_u = sf_mex_dup(c69_st);
  c69_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("SDOCommand",
    c69_u, 0)), "SDOCommand", c69_iv0);
  for (c69_i0 = 0; c69_i0 < 3; c69_i0++) {
    (*chartInstance->c69_SDOCommand)[c69_i0] = c69_iv0[c69_i0];
  }

  *chartInstance->c69_complete = c69_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("complete", c69_u, 1)), "complete");
  c69_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "floatSDOValues", c69_u, 2)), "floatSDOValues", c69_dv0);
  for (c69_i1 = 0; c69_i1 < 20; c69_i1++) {
    (*chartInstance->c69_floatSDOValues)[c69_i1] = c69_dv0[c69_i1];
  }

  c69_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell("intSDOValues",
    c69_u, 3)), "intSDOValues", c69_iv1);
  for (c69_i2 = 0; c69_i2 < 20; c69_i2++) {
    (*chartInstance->c69_intSDOValues)[c69_i2] = c69_iv1[c69_i2];
  }

  *chartInstance->c69_lastTrigger = c69_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("lastTrigger", c69_u, 4)), "lastTrigger");
  *chartInstance->c69_valueCount = c69_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("valueCount", c69_u, 5)), "valueCount");
  *chartInstance->c69_valueIdx = c69_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("valueIdx", c69_u, 6)), "valueIdx");
  *chartInstance->c69_is_active_c69_ethercat = c69_k_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_c69_ethercat", c69_u, 7)),
     "is_active_c69_ethercat");
  *chartInstance->c69_is_c69_ethercat = c69_k_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_c69_ethercat", c69_u, 8)), "is_c69_ethercat");
  sf_mex_assign(&chartInstance->c69_setSimStateSideEffectsInfo,
                c69_m_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "setSimStateSideEffectsInfo", c69_u, 9)), "setSimStateSideEffectsInfo"),
                true);
  sf_mex_destroy(&c69_u);
  chartInstance->c69_doSetSimStateSideEffects = 1U;
  c69_update_debugger_state_c69_ethercat(chartInstance);
  sf_mex_destroy(&c69_st);
}

static void c69_set_sim_state_side_effects_c69_ethercat
  (SFc69_ethercatInstanceStruct *chartInstance)
{
  if (chartInstance->c69_doSetSimStateSideEffects != 0) {
    chartInstance->c69_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c69_ethercat(SFc69_ethercatInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c69_setSimStateSideEffectsInfo);
}

static void sf_gateway_c69_ethercat(SFc69_ethercatInstanceStruct *chartInstance)
{
  int32_T c69_i3;
  int32_T c69_i4;
  int32_T c69_i5;
  int32_T c69_i6;
  int32_T c69_i7;
  c69_set_sim_state_side_effects_c69_ethercat(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 34U, *chartInstance->c69_sfEvent);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c69_status, 10U, 1U, 0U,
                        *chartInstance->c69_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c69_complete, 14U, 1U, 0U,
                        *chartInstance->c69_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c69_valueCount, 1U, 1U, 0U,
                        *chartInstance->c69_sfEvent, false);
  for (c69_i3 = 0; c69_i3 < 20; c69_i3++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c69_floatSDOValues)[c69_i3], 13U, 1U,
                          0U, *chartInstance->c69_sfEvent, false);
  }

  _SFD_DATA_RANGE_CHECK(*chartInstance->c69_floatSDOResponse, 9U, 1U, 0U,
                        *chartInstance->c69_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c69_floatCount, 8U, 1U, 0U,
                        *chartInstance->c69_sfEvent, false);
  for (c69_i4 = 0; c69_i4 < 24; c69_i4++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c69_floatReadAddrs)[c69_i4], 7U, 1U,
                          0U, *chartInstance->c69_sfEvent, false);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c69_lastTrigger, 0U, 1U, 0U,
                        *chartInstance->c69_sfEvent, false);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c69_valueIdx, 2U, 1U, 0U,
                        *chartInstance->c69_sfEvent, false);
  for (c69_i5 = 0; c69_i5 < 20; c69_i5++) {
    _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c69_intSDOValues)[c69_i5],
                          12U, 1U, 0U, *chartInstance->c69_sfEvent, false);
  }

  for (c69_i6 = 0; c69_i6 < 3; c69_i6++) {
    _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c69_SDOCommand)[c69_i6], 11U,
                          1U, 0U, *chartInstance->c69_sfEvent, false);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c69_intSDOResponse, 6U, 1U, 0U, *
                        chartInstance->c69_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c69_intCount, 5U, 1U, 0U,
                        *chartInstance->c69_sfEvent, false);
  for (c69_i7 = 0; c69_i7 < 24; c69_i7++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c69_intReadAddrs)[c69_i7], 4U, 1U, 0U,
                          *chartInstance->c69_sfEvent, false);
  }

  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c69_triggerReading, 3U, 1U, 0U, *
                        chartInstance->c69_sfEvent, false);
  *chartInstance->c69_sfEvent = CALL_EVENT;
  c69_chartstep_c69_ethercat(chartInstance);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_ethercatMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c69_ethercat(SFc69_ethercatInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c69_chartstep_c69_ethercat(SFc69_ethercatInstanceStruct
  *chartInstance)
{
  boolean_T c69_out;
  boolean_T c69_b_out;
  int32_T c69_i8;
  boolean_T c69_c_out;
  int32_T c69_i9;
  boolean_T c69_d_out;
  boolean_T c69_e_out;
  int32_T c69_i10;
  int32_T c69_i11;
  int32_T c69_i12;
  boolean_T c69_f_out;
  boolean_T c69_g_out;
  int32_T c69_i13;
  int32_T c69_i14;
  int32_T c69_i15;
  boolean_T c69_h_out;
  int32_T c69_i16;
  boolean_T c69_i_out;
  int32_T c69_i17;
  int32_T c69_i18;
  int32_T c69_i19;
  int32_T c69_i20;
  int32_T c69_i21;
  int32_T c69_i22;
  int32_T c69_i23;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 34U, *chartInstance->c69_sfEvent);
  if (*chartInstance->c69_is_active_c69_ethercat == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 34U,
                 *chartInstance->c69_sfEvent);
    *chartInstance->c69_is_active_c69_ethercat = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 34U, *chartInstance->c69_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, *chartInstance->c69_sfEvent);
    *chartInstance->c69_is_c69_ethercat = c69_IN_setup;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c69_sfEvent);
    *chartInstance->c69_valueIdx = 0;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c69_valueIdx, 2U, 4U, 8U,
                          *chartInstance->c69_sfEvent, false);
    *chartInstance->c69_complete = 0;
    _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c69_complete, 14U, 4U, 8U,
                          *chartInstance->c69_sfEvent, false);
    c69_clearValues(chartInstance);
    *chartInstance->c69_valueCount = *chartInstance->c69_intCount;
    _SFD_DATA_RANGE_CHECK(*chartInstance->c69_valueCount, 1U, 4U, 8U,
                          *chartInstance->c69_sfEvent, false);
  } else {
    switch (*chartInstance->c69_is_c69_ethercat) {
     case c69_IN_Done:
      CV_CHART_EVAL(34, 0, 1);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                   *chartInstance->c69_sfEvent);
      c69_out = (CV_TRANSITION_EVAL(6U, (int32_T)_SFD_CCP_CALL(6U, 0,
        CV_RELATIONAL_EVAL(5U, 6U, 0, (real_T)*chartInstance->c69_triggerReading,
                           (real_T)*chartInstance->c69_lastTrigger, 0, 1U,
                           *chartInstance->c69_triggerReading !=
                           *chartInstance->c69_lastTrigger) != 0U,
        *chartInstance->c69_sfEvent)) != 0);
      if (c69_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, *chartInstance->c69_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c69_sfEvent);
        *chartInstance->c69_is_c69_ethercat = c69_IN_setup;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 8U, *chartInstance->c69_sfEvent);
        *chartInstance->c69_valueIdx = 0;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c69_valueIdx, 2U, 4U, 8U, *
                              chartInstance->c69_sfEvent, false);
        *chartInstance->c69_complete = 0;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c69_complete, 14U, 4U, 8U,
                              *chartInstance->c69_sfEvent, false);
        c69_clearValues(chartInstance);
        *chartInstance->c69_valueCount = *chartInstance->c69_intCount;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c69_valueCount, 1U, 4U, 8U,
                              *chartInstance->c69_sfEvent, false);
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                     *chartInstance->c69_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c69_sfEvent);
      break;

     case c69_IN_ReadNextFloat:
      CV_CHART_EVAL(34, 0, 2);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 8U,
                   *chartInstance->c69_sfEvent);
      c69_b_out = (CV_TRANSITION_EVAL(8U, (int32_T)_SFD_CCP_CALL(8U, 0,
        CV_RELATIONAL_EVAL(5U, 8U, 0, *chartInstance->c69_status, 1.0, -1, 0U,
                           *chartInstance->c69_status == 1.0) != 0U,
        *chartInstance->c69_sfEvent)) != 0);
      if (c69_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 8U, *chartInstance->c69_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c69_sfEvent);
        *chartInstance->c69_is_c69_ethercat = c69_IN_disableFloat;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 6U, *chartInstance->c69_sfEvent);
        (*chartInstance->c69_SDOCommand)[0] = 0;
        for (c69_i8 = 0; c69_i8 < 3; c69_i8++) {
          _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c69_SDOCommand)[c69_i8],
                                11U, 4U, 6U, *chartInstance->c69_sfEvent, false);
        }
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                     *chartInstance->c69_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c69_sfEvent);
      break;

     case c69_IN_ReadNextInt:
      CV_CHART_EVAL(34, 0, 3);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                   *chartInstance->c69_sfEvent);
      c69_c_out = (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5U, 0,
        CV_RELATIONAL_EVAL(5U, 5U, 0, *chartInstance->c69_status, 1.0, -1, 0U,
                           *chartInstance->c69_status == 1.0) != 0U,
        *chartInstance->c69_sfEvent)) != 0);
      if (c69_c_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, *chartInstance->c69_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c69_sfEvent);
        *chartInstance->c69_is_c69_ethercat = c69_IN_disableInt;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 7U, *chartInstance->c69_sfEvent);
        (*chartInstance->c69_SDOCommand)[0] = 0;
        for (c69_i9 = 0; c69_i9 < 3; c69_i9++) {
          _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c69_SDOCommand)[c69_i9],
                                11U, 4U, 7U, *chartInstance->c69_sfEvent, false);
        }
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                     *chartInstance->c69_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c69_sfEvent);
      break;

     case c69_IN_ReceivedFloat:
      CV_CHART_EVAL(34, 0, 4);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 10U,
                   *chartInstance->c69_sfEvent);
      c69_d_out = (CV_TRANSITION_EVAL(10U, (int32_T)_SFD_CCP_CALL(10U, 0,
        CV_RELATIONAL_EVAL(5U, 10U, 0, (real_T)c69__s32_add__(chartInstance,
        *chartInstance->c69_valueIdx, 1), *chartInstance->c69_valueCount, -1, 4U,
                           (real_T)c69__s32_add__(chartInstance,
        *chartInstance->c69_valueIdx, 1) > *chartInstance->c69_valueCount) != 0U,
        *chartInstance->c69_sfEvent)) != 0);
      if (c69_d_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 10U, *chartInstance->c69_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c69_sfEvent);
        *chartInstance->c69_is_c69_ethercat = c69_IN_Done;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c69_sfEvent);
        *chartInstance->c69_complete = 1;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c69_complete, 14U, 4U, 0U,
                              *chartInstance->c69_sfEvent, false);
        *chartInstance->c69_lastTrigger = *chartInstance->c69_triggerReading;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c69_lastTrigger, 0U, 4U,
                              0U, *chartInstance->c69_sfEvent, false);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 11U,
                     *chartInstance->c69_sfEvent);
        c69_e_out = (CV_TRANSITION_EVAL(11U, (int32_T)_SFD_CCP_CALL(11U, 0,
          CV_RELATIONAL_EVAL(5U, 11U, 0, *chartInstance->c69_status, 0.0, -1, 0U,
                             *chartInstance->c69_status == 0.0) != 0U,
          *chartInstance->c69_sfEvent)) != 0);
        if (c69_e_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 11U, *chartInstance->c69_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, *chartInstance->c69_sfEvent);
          *chartInstance->c69_is_c69_ethercat = c69_IN_ReadNextFloat;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c69_sfEvent);
          *chartInstance->c69_valueIdx = c69__s32_add__(chartInstance,
            *chartInstance->c69_valueIdx, 1);
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c69_valueIdx, 2U, 4U, 1U,
                                *chartInstance->c69_sfEvent, false);
          (*chartInstance->c69_SDOCommand)[0] = 1;
          for (c69_i10 = 0; c69_i10 < 3; c69_i10++) {
            _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c69_SDOCommand)
                                  [c69_i10], 11U, 4U, 1U,
                                  *chartInstance->c69_sfEvent, false);
          }

          (*chartInstance->c69_SDOCommand)[1] = c69__s32_d_(chartInstance,
            (*chartInstance->c69_floatReadAddrs)[_SFD_ARRAY_BOUNDS_CHECK(7U,
            c69__s32_minus__(chartInstance, *chartInstance->c69_valueIdx, 1), 1,
            12, 1, 0)]);
          for (c69_i11 = 0; c69_i11 < 3; c69_i11++) {
            _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c69_SDOCommand)
                                  [c69_i11], 11U, 4U, 1U,
                                  *chartInstance->c69_sfEvent, false);
          }

          (*chartInstance->c69_SDOCommand)[2] = c69__s32_d_(chartInstance,
            (*chartInstance->c69_floatReadAddrs)[12 + _SFD_ARRAY_BOUNDS_CHECK(7U,
            c69__s32_minus__(chartInstance, *chartInstance->c69_valueIdx, 1), 1,
            12, 1, 0)]);
          for (c69_i12 = 0; c69_i12 < 3; c69_i12++) {
            _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c69_SDOCommand)
                                  [c69_i12], 11U, 4U, 1U,
                                  *chartInstance->c69_sfEvent, false);
          }
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                       *chartInstance->c69_sfEvent);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, *chartInstance->c69_sfEvent);
      break;

     case c69_IN_ReceivedInt:
      CV_CHART_EVAL(34, 0, 5);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                   *chartInstance->c69_sfEvent);
      c69_f_out = (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4U, 0,
        CV_RELATIONAL_EVAL(5U, 4U, 0, (real_T)c69__s32_add__(chartInstance,
        *chartInstance->c69_valueIdx, 1), *chartInstance->c69_valueCount, -1, 4U,
                           (real_T)c69__s32_add__(chartInstance,
        *chartInstance->c69_valueIdx, 1) > *chartInstance->c69_valueCount) != 0U,
        *chartInstance->c69_sfEvent)) != 0);
      if (c69_f_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, *chartInstance->c69_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c69_sfEvent);
        *chartInstance->c69_is_c69_ethercat = c69_IN_startFloats;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 9U, *chartInstance->c69_sfEvent);
        *chartInstance->c69_valueCount = *chartInstance->c69_floatCount;
        _SFD_DATA_RANGE_CHECK(*chartInstance->c69_valueCount, 1U, 4U, 9U,
                              *chartInstance->c69_sfEvent, false);
        *chartInstance->c69_valueIdx = 0;
        _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c69_valueIdx, 2U, 4U, 9U, *
                              chartInstance->c69_sfEvent, false);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                     *chartInstance->c69_sfEvent);
        c69_g_out = (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2U, 0,
          CV_RELATIONAL_EVAL(5U, 2U, 0, *chartInstance->c69_status, 0.0, -1, 0U,
                             *chartInstance->c69_status == 0.0) != 0U,
          *chartInstance->c69_sfEvent)) != 0);
        if (c69_g_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c69_sfEvent);
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 4U, *chartInstance->c69_sfEvent);
          *chartInstance->c69_is_c69_ethercat = c69_IN_ReadNextInt;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c69_sfEvent);
          *chartInstance->c69_valueIdx = c69__s32_add__(chartInstance,
            *chartInstance->c69_valueIdx, 1);
          _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c69_valueIdx, 2U, 4U, 2U,
                                *chartInstance->c69_sfEvent, false);
          (*chartInstance->c69_SDOCommand)[0] = 1;
          for (c69_i13 = 0; c69_i13 < 3; c69_i13++) {
            _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c69_SDOCommand)
                                  [c69_i13], 11U, 4U, 2U,
                                  *chartInstance->c69_sfEvent, false);
          }

          (*chartInstance->c69_SDOCommand)[1] = c69__s32_d_(chartInstance,
            (*chartInstance->c69_intReadAddrs)[_SFD_ARRAY_BOUNDS_CHECK(4U,
            c69__s32_minus__(chartInstance, *chartInstance->c69_valueIdx, 1), 1,
            12, 1, 0)]);
          for (c69_i14 = 0; c69_i14 < 3; c69_i14++) {
            _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c69_SDOCommand)
                                  [c69_i14], 11U, 4U, 2U,
                                  *chartInstance->c69_sfEvent, false);
          }

          (*chartInstance->c69_SDOCommand)[2] = c69__s32_d_(chartInstance,
            (*chartInstance->c69_intReadAddrs)[12 + _SFD_ARRAY_BOUNDS_CHECK(4U,
            c69__s32_minus__(chartInstance, *chartInstance->c69_valueIdx, 1), 1,
            12, 1, 0)]);
          for (c69_i15 = 0; c69_i15 < 3; c69_i15++) {
            _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c69_SDOCommand)
                                  [c69_i15], 11U, 4U, 2U,
                                  *chartInstance->c69_sfEvent, false);
          }
        } else {
          _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 4U,
                       *chartInstance->c69_sfEvent);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 4U, *chartInstance->c69_sfEvent);
      break;

     case c69_IN_disableFloat:
      CV_CHART_EVAL(34, 0, 6);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 9U,
                   *chartInstance->c69_sfEvent);
      c69_h_out = (CV_TRANSITION_EVAL(9U, (int32_T)_SFD_CCP_CALL(9U, 0,
        CV_RELATIONAL_EVAL(5U, 9U, 0, *chartInstance->c69_status, 2.0, -1, 5U,
                           *chartInstance->c69_status >= 2.0) != 0U,
        *chartInstance->c69_sfEvent)) != 0);
      if (c69_h_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 9U, *chartInstance->c69_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 6U, *chartInstance->c69_sfEvent);
        *chartInstance->c69_is_c69_ethercat = c69_IN_ReceivedFloat;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, *chartInstance->c69_sfEvent);
        (*chartInstance->c69_floatSDOValues)[_SFD_ARRAY_BOUNDS_CHECK(13U,
          c69__s32_minus__(chartInstance, *chartInstance->c69_valueIdx, 1), 1,
          20, 1, 0)] = *chartInstance->c69_floatSDOResponse;
        for (c69_i16 = 0; c69_i16 < 20; c69_i16++) {
          _SFD_DATA_RANGE_CHECK((*chartInstance->c69_floatSDOValues)[c69_i16],
                                13U, 4U, 3U, *chartInstance->c69_sfEvent, false);
        }
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 6U,
                     *chartInstance->c69_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 6U, *chartInstance->c69_sfEvent);
      break;

     case c69_IN_disableInt:
      CV_CHART_EVAL(34, 0, 7);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   *chartInstance->c69_sfEvent);
      c69_i_out = (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0,
        CV_RELATIONAL_EVAL(5U, 1U, 0, *chartInstance->c69_status, 2.0, -1, 5U,
                           *chartInstance->c69_status >= 2.0) != 0U,
        *chartInstance->c69_sfEvent)) != 0);
      if (c69_i_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c69_sfEvent);
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 7U, *chartInstance->c69_sfEvent);
        *chartInstance->c69_is_c69_ethercat = c69_IN_ReceivedInt;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 4U, *chartInstance->c69_sfEvent);
        (*chartInstance->c69_intSDOValues)[_SFD_ARRAY_BOUNDS_CHECK(12U,
          c69__s32_minus__(chartInstance, *chartInstance->c69_valueIdx, 1), 1,
          20, 1, 0)] = *chartInstance->c69_intSDOResponse;
        for (c69_i17 = 0; c69_i17 < 20; c69_i17++) {
          _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c69_intSDOValues)
                                [c69_i17], 12U, 4U, 4U,
                                *chartInstance->c69_sfEvent, false);
        }
      } else {
        _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 7U,
                     *chartInstance->c69_sfEvent);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 7U, *chartInstance->c69_sfEvent);
      break;

     case c69_IN_setup:
      CV_CHART_EVAL(34, 0, 8);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c69_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 8U, *chartInstance->c69_sfEvent);
      *chartInstance->c69_is_c69_ethercat = c69_IN_ReadNextInt;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c69_sfEvent);
      *chartInstance->c69_valueIdx = c69__s32_add__(chartInstance,
        *chartInstance->c69_valueIdx, 1);
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c69_valueIdx, 2U, 4U, 2U,
                            *chartInstance->c69_sfEvent, false);
      (*chartInstance->c69_SDOCommand)[0] = 1;
      for (c69_i18 = 0; c69_i18 < 3; c69_i18++) {
        _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c69_SDOCommand)[c69_i18],
                              11U, 4U, 2U, *chartInstance->c69_sfEvent, false);
      }

      (*chartInstance->c69_SDOCommand)[1] = c69__s32_d_(chartInstance,
        (*chartInstance->c69_intReadAddrs)[_SFD_ARRAY_BOUNDS_CHECK(4U,
        c69__s32_minus__(chartInstance, *chartInstance->c69_valueIdx, 1), 1, 12,
        1, 0)]);
      for (c69_i19 = 0; c69_i19 < 3; c69_i19++) {
        _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c69_SDOCommand)[c69_i19],
                              11U, 4U, 2U, *chartInstance->c69_sfEvent, false);
      }

      (*chartInstance->c69_SDOCommand)[2] = c69__s32_d_(chartInstance,
        (*chartInstance->c69_intReadAddrs)[12 + _SFD_ARRAY_BOUNDS_CHECK(4U,
        c69__s32_minus__(chartInstance, *chartInstance->c69_valueIdx, 1), 1, 12,
        1, 0)]);
      for (c69_i20 = 0; c69_i20 < 3; c69_i20++) {
        _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c69_SDOCommand)[c69_i20],
                              11U, 4U, 2U, *chartInstance->c69_sfEvent, false);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 8U, *chartInstance->c69_sfEvent);
      break;

     case c69_IN_startFloats:
      CV_CHART_EVAL(34, 0, 9);
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 7U, *chartInstance->c69_sfEvent);
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 9U, *chartInstance->c69_sfEvent);
      *chartInstance->c69_is_c69_ethercat = c69_IN_ReadNextFloat;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c69_sfEvent);
      *chartInstance->c69_valueIdx = c69__s32_add__(chartInstance,
        *chartInstance->c69_valueIdx, 1);
      _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c69_valueIdx, 2U, 4U, 1U,
                            *chartInstance->c69_sfEvent, false);
      (*chartInstance->c69_SDOCommand)[0] = 1;
      for (c69_i21 = 0; c69_i21 < 3; c69_i21++) {
        _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c69_SDOCommand)[c69_i21],
                              11U, 4U, 1U, *chartInstance->c69_sfEvent, false);
      }

      (*chartInstance->c69_SDOCommand)[1] = c69__s32_d_(chartInstance,
        (*chartInstance->c69_floatReadAddrs)[_SFD_ARRAY_BOUNDS_CHECK(7U,
        c69__s32_minus__(chartInstance, *chartInstance->c69_valueIdx, 1), 1, 12,
        1, 0)]);
      for (c69_i22 = 0; c69_i22 < 3; c69_i22++) {
        _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c69_SDOCommand)[c69_i22],
                              11U, 4U, 1U, *chartInstance->c69_sfEvent, false);
      }

      (*chartInstance->c69_SDOCommand)[2] = c69__s32_d_(chartInstance,
        (*chartInstance->c69_floatReadAddrs)[12 + _SFD_ARRAY_BOUNDS_CHECK(7U,
        c69__s32_minus__(chartInstance, *chartInstance->c69_valueIdx, 1), 1, 12,
        1, 0)]);
      for (c69_i23 = 0; c69_i23 < 3; c69_i23++) {
        _SFD_DATA_RANGE_CHECK((real_T)(*chartInstance->c69_SDOCommand)[c69_i23],
                              11U, 4U, 1U, *chartInstance->c69_sfEvent, false);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 9U, *chartInstance->c69_sfEvent);
      break;

     default:
      CV_CHART_EVAL(34, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c69_is_c69_ethercat = c69_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c69_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 34U, *chartInstance->c69_sfEvent);
}

static void initSimStructsc69_ethercat(SFc69_ethercatInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c69_machineNumber, uint32_T
  c69_chartNumber, uint32_T c69_instanceNumber)
{
  (void)c69_machineNumber;
  (void)c69_chartNumber;
  (void)c69_instanceNumber;
}

static const mxArray *c69_sf_marshallOut(void *chartInstanceVoid, void
  *c69_inData)
{
  const mxArray *c69_mxArrayOutData = NULL;
  real_T c69_u;
  const mxArray *c69_y = NULL;
  SFc69_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc69_ethercatInstanceStruct *)chartInstanceVoid;
  c69_mxArrayOutData = NULL;
  c69_u = *(real_T *)c69_inData;
  c69_y = NULL;
  sf_mex_assign(&c69_y, sf_mex_create("y", &c69_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c69_mxArrayOutData, c69_y, false);
  return c69_mxArrayOutData;
}

static real_T c69_emlrt_marshallIn(SFc69_ethercatInstanceStruct *chartInstance,
  const mxArray *c69_nargout, const char_T *c69_identifier)
{
  real_T c69_y;
  emlrtMsgIdentifier c69_thisId;
  c69_thisId.fIdentifier = c69_identifier;
  c69_thisId.fParent = NULL;
  c69_y = c69_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c69_nargout),
    &c69_thisId);
  sf_mex_destroy(&c69_nargout);
  return c69_y;
}

static real_T c69_b_emlrt_marshallIn(SFc69_ethercatInstanceStruct *chartInstance,
  const mxArray *c69_u, const emlrtMsgIdentifier *c69_parentId)
{
  real_T c69_y;
  real_T c69_d0;
  (void)chartInstance;
  sf_mex_import(c69_parentId, sf_mex_dup(c69_u), &c69_d0, 1, 0, 0U, 0, 0U, 0);
  c69_y = c69_d0;
  sf_mex_destroy(&c69_u);
  return c69_y;
}

static void c69_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c69_mxArrayInData, const char_T *c69_varName, void *c69_outData)
{
  const mxArray *c69_nargout;
  const char_T *c69_identifier;
  emlrtMsgIdentifier c69_thisId;
  real_T c69_y;
  SFc69_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc69_ethercatInstanceStruct *)chartInstanceVoid;
  c69_nargout = sf_mex_dup(c69_mxArrayInData);
  c69_identifier = c69_varName;
  c69_thisId.fIdentifier = c69_identifier;
  c69_thisId.fParent = NULL;
  c69_y = c69_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c69_nargout),
    &c69_thisId);
  sf_mex_destroy(&c69_nargout);
  *(real_T *)c69_outData = c69_y;
  sf_mex_destroy(&c69_mxArrayInData);
}

const mxArray *sf_c69_ethercat_get_eml_resolved_functions_info(void)
{
  const mxArray *c69_nameCaptureInfo = NULL;
  c69_nameCaptureInfo = NULL;
  sf_mex_assign(&c69_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c69_nameCaptureInfo;
}

static void c69_clearValues(SFc69_ethercatInstanceStruct *chartInstance)
{
  uint32_T c69_debug_family_var_map[3];
  real_T c69_n;
  real_T c69_nargin = 0.0;
  real_T c69_nargout = 0.0;
  int32_T c69_b_n;
  int32_T c69_c_n;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 3U, 3U, c69_debug_family_names,
    c69_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c69_n, 0U, c69_sf_marshallOut,
    c69_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c69_nargin, 1U, c69_sf_marshallOut,
    c69_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c69_nargout, 2U, c69_sf_marshallOut,
    c69_sf_marshallIn);
  CV_EML_FCN(5, 0);
  _SFD_EML_CALL(5U, *chartInstance->c69_sfEvent, 2);
  c69_n = 1.0;
  c69_b_n = 0;
  while (c69_b_n < 20) {
    c69_n = 1.0 + (real_T)c69_b_n;
    CV_EML_FOR(5, 1, 0, 1);
    _SFD_EML_CALL(5U, *chartInstance->c69_sfEvent, 3);
    (*chartInstance->c69_intSDOValues)[_SFD_EML_ARRAY_BOUNDS_CHECK(
      "intSDOValues", (int32_T)_SFD_INTEGER_CHECK("n", c69_n), 1, 20, 1, 0) - 1]
      = 0;
    c69_b_n++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  CV_EML_FOR(5, 1, 0, 0);
  _SFD_EML_CALL(5U, *chartInstance->c69_sfEvent, 6);
  c69_n = 1.0;
  c69_c_n = 0;
  while (c69_c_n < 20) {
    c69_n = 1.0 + (real_T)c69_c_n;
    CV_EML_FOR(5, 1, 1, 1);
    _SFD_EML_CALL(5U, *chartInstance->c69_sfEvent, 7);
    (*chartInstance->c69_floatSDOValues)[_SFD_EML_ARRAY_BOUNDS_CHECK(
      "floatSDOValues", (int32_T)_SFD_INTEGER_CHECK("n", c69_n), 1, 20, 1, 0) -
      1] = 0.0;
    c69_c_n++;
    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  CV_EML_FOR(5, 1, 1, 0);
  _SFD_EML_CALL(5U, *chartInstance->c69_sfEvent, -7);
  _SFD_SYMBOL_SCOPE_POP();
}

static const mxArray *c69_b_sf_marshallOut(void *chartInstanceVoid, void
  *c69_inData)
{
  const mxArray *c69_mxArrayOutData = NULL;
  int32_T c69_u;
  const mxArray *c69_y = NULL;
  SFc69_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc69_ethercatInstanceStruct *)chartInstanceVoid;
  c69_mxArrayOutData = NULL;
  c69_u = *(int32_T *)c69_inData;
  c69_y = NULL;
  sf_mex_assign(&c69_y, sf_mex_create("y", &c69_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c69_mxArrayOutData, c69_y, false);
  return c69_mxArrayOutData;
}

static int32_T c69_c_emlrt_marshallIn(SFc69_ethercatInstanceStruct
  *chartInstance, const mxArray *c69_b_sfEvent, const char_T *c69_identifier)
{
  int32_T c69_y;
  emlrtMsgIdentifier c69_thisId;
  c69_thisId.fIdentifier = c69_identifier;
  c69_thisId.fParent = NULL;
  c69_y = c69_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c69_b_sfEvent),
    &c69_thisId);
  sf_mex_destroy(&c69_b_sfEvent);
  return c69_y;
}

static int32_T c69_d_emlrt_marshallIn(SFc69_ethercatInstanceStruct
  *chartInstance, const mxArray *c69_u, const emlrtMsgIdentifier *c69_parentId)
{
  int32_T c69_y;
  int32_T c69_i24;
  (void)chartInstance;
  sf_mex_import(c69_parentId, sf_mex_dup(c69_u), &c69_i24, 1, 6, 0U, 0, 0U, 0);
  c69_y = c69_i24;
  sf_mex_destroy(&c69_u);
  return c69_y;
}

static void c69_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c69_mxArrayInData, const char_T *c69_varName, void *c69_outData)
{
  const mxArray *c69_b_sfEvent;
  const char_T *c69_identifier;
  emlrtMsgIdentifier c69_thisId;
  int32_T c69_y;
  SFc69_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc69_ethercatInstanceStruct *)chartInstanceVoid;
  c69_b_sfEvent = sf_mex_dup(c69_mxArrayInData);
  c69_identifier = c69_varName;
  c69_thisId.fIdentifier = c69_identifier;
  c69_thisId.fParent = NULL;
  c69_y = c69_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c69_b_sfEvent),
    &c69_thisId);
  sf_mex_destroy(&c69_b_sfEvent);
  *(int32_T *)c69_outData = c69_y;
  sf_mex_destroy(&c69_mxArrayInData);
}

static const mxArray *c69_c_sf_marshallOut(void *chartInstanceVoid, void
  *c69_inData)
{
  const mxArray *c69_mxArrayOutData = NULL;
  int32_T c69_i25;
  int32_T c69_i26;
  int32_T c69_i27;
  real_T c69_u[24];
  const mxArray *c69_y = NULL;
  SFc69_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc69_ethercatInstanceStruct *)chartInstanceVoid;
  c69_mxArrayOutData = NULL;
  c69_i25 = 0;
  for (c69_i26 = 0; c69_i26 < 2; c69_i26++) {
    for (c69_i27 = 0; c69_i27 < 12; c69_i27++) {
      c69_u[c69_i27 + c69_i25] = (*(real_T (*)[24])c69_inData)[c69_i27 + c69_i25];
    }

    c69_i25 += 12;
  }

  c69_y = NULL;
  sf_mex_assign(&c69_y, sf_mex_create("y", c69_u, 0, 0U, 1U, 0U, 2, 12, 2),
                false);
  sf_mex_assign(&c69_mxArrayOutData, c69_y, false);
  return c69_mxArrayOutData;
}

static const mxArray *c69_d_sf_marshallOut(void *chartInstanceVoid, void
  *c69_inData)
{
  const mxArray *c69_mxArrayOutData = NULL;
  int32_T c69_i28;
  int32_T c69_u[3];
  const mxArray *c69_y = NULL;
  SFc69_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc69_ethercatInstanceStruct *)chartInstanceVoid;
  c69_mxArrayOutData = NULL;
  for (c69_i28 = 0; c69_i28 < 3; c69_i28++) {
    c69_u[c69_i28] = (*(int32_T (*)[3])c69_inData)[c69_i28];
  }

  c69_y = NULL;
  sf_mex_assign(&c69_y, sf_mex_create("y", c69_u, 6, 0U, 1U, 0U, 1, 3), false);
  sf_mex_assign(&c69_mxArrayOutData, c69_y, false);
  return c69_mxArrayOutData;
}

static void c69_e_emlrt_marshallIn(SFc69_ethercatInstanceStruct *chartInstance,
  const mxArray *c69_b_SDOCommand, const char_T *c69_identifier, int32_T c69_y[3])
{
  emlrtMsgIdentifier c69_thisId;
  c69_thisId.fIdentifier = c69_identifier;
  c69_thisId.fParent = NULL;
  c69_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c69_b_SDOCommand),
    &c69_thisId, c69_y);
  sf_mex_destroy(&c69_b_SDOCommand);
}

static void c69_f_emlrt_marshallIn(SFc69_ethercatInstanceStruct *chartInstance,
  const mxArray *c69_u, const emlrtMsgIdentifier *c69_parentId, int32_T c69_y[3])
{
  int32_T c69_iv2[3];
  int32_T c69_i29;
  (void)chartInstance;
  sf_mex_import(c69_parentId, sf_mex_dup(c69_u), c69_iv2, 1, 6, 0U, 1, 0U, 1, 3);
  for (c69_i29 = 0; c69_i29 < 3; c69_i29++) {
    c69_y[c69_i29] = c69_iv2[c69_i29];
  }

  sf_mex_destroy(&c69_u);
}

static void c69_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c69_mxArrayInData, const char_T *c69_varName, void *c69_outData)
{
  const mxArray *c69_b_SDOCommand;
  const char_T *c69_identifier;
  emlrtMsgIdentifier c69_thisId;
  int32_T c69_y[3];
  int32_T c69_i30;
  SFc69_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc69_ethercatInstanceStruct *)chartInstanceVoid;
  c69_b_SDOCommand = sf_mex_dup(c69_mxArrayInData);
  c69_identifier = c69_varName;
  c69_thisId.fIdentifier = c69_identifier;
  c69_thisId.fParent = NULL;
  c69_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c69_b_SDOCommand),
    &c69_thisId, c69_y);
  sf_mex_destroy(&c69_b_SDOCommand);
  for (c69_i30 = 0; c69_i30 < 3; c69_i30++) {
    (*(int32_T (*)[3])c69_outData)[c69_i30] = c69_y[c69_i30];
  }

  sf_mex_destroy(&c69_mxArrayInData);
}

static const mxArray *c69_e_sf_marshallOut(void *chartInstanceVoid, void
  *c69_inData)
{
  const mxArray *c69_mxArrayOutData = NULL;
  int32_T c69_i31;
  int32_T c69_u[20];
  const mxArray *c69_y = NULL;
  SFc69_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc69_ethercatInstanceStruct *)chartInstanceVoid;
  c69_mxArrayOutData = NULL;
  for (c69_i31 = 0; c69_i31 < 20; c69_i31++) {
    c69_u[c69_i31] = (*(int32_T (*)[20])c69_inData)[c69_i31];
  }

  c69_y = NULL;
  sf_mex_assign(&c69_y, sf_mex_create("y", c69_u, 6, 0U, 1U, 0U, 1, 20), false);
  sf_mex_assign(&c69_mxArrayOutData, c69_y, false);
  return c69_mxArrayOutData;
}

static void c69_g_emlrt_marshallIn(SFc69_ethercatInstanceStruct *chartInstance,
  const mxArray *c69_b_intSDOValues, const char_T *c69_identifier, int32_T
  c69_y[20])
{
  emlrtMsgIdentifier c69_thisId;
  c69_thisId.fIdentifier = c69_identifier;
  c69_thisId.fParent = NULL;
  c69_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c69_b_intSDOValues),
    &c69_thisId, c69_y);
  sf_mex_destroy(&c69_b_intSDOValues);
}

static void c69_h_emlrt_marshallIn(SFc69_ethercatInstanceStruct *chartInstance,
  const mxArray *c69_u, const emlrtMsgIdentifier *c69_parentId, int32_T c69_y[20])
{
  int32_T c69_iv3[20];
  int32_T c69_i32;
  (void)chartInstance;
  sf_mex_import(c69_parentId, sf_mex_dup(c69_u), c69_iv3, 1, 6, 0U, 1, 0U, 1, 20);
  for (c69_i32 = 0; c69_i32 < 20; c69_i32++) {
    c69_y[c69_i32] = c69_iv3[c69_i32];
  }

  sf_mex_destroy(&c69_u);
}

static void c69_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c69_mxArrayInData, const char_T *c69_varName, void *c69_outData)
{
  const mxArray *c69_b_intSDOValues;
  const char_T *c69_identifier;
  emlrtMsgIdentifier c69_thisId;
  int32_T c69_y[20];
  int32_T c69_i33;
  SFc69_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc69_ethercatInstanceStruct *)chartInstanceVoid;
  c69_b_intSDOValues = sf_mex_dup(c69_mxArrayInData);
  c69_identifier = c69_varName;
  c69_thisId.fIdentifier = c69_identifier;
  c69_thisId.fParent = NULL;
  c69_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c69_b_intSDOValues),
    &c69_thisId, c69_y);
  sf_mex_destroy(&c69_b_intSDOValues);
  for (c69_i33 = 0; c69_i33 < 20; c69_i33++) {
    (*(int32_T (*)[20])c69_outData)[c69_i33] = c69_y[c69_i33];
  }

  sf_mex_destroy(&c69_mxArrayInData);
}

static const mxArray *c69_f_sf_marshallOut(void *chartInstanceVoid, void
  *c69_inData)
{
  const mxArray *c69_mxArrayOutData = NULL;
  int32_T c69_i34;
  real_T c69_u[20];
  const mxArray *c69_y = NULL;
  SFc69_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc69_ethercatInstanceStruct *)chartInstanceVoid;
  c69_mxArrayOutData = NULL;
  for (c69_i34 = 0; c69_i34 < 20; c69_i34++) {
    c69_u[c69_i34] = (*(real_T (*)[20])c69_inData)[c69_i34];
  }

  c69_y = NULL;
  sf_mex_assign(&c69_y, sf_mex_create("y", c69_u, 0, 0U, 1U, 0U, 1, 20), false);
  sf_mex_assign(&c69_mxArrayOutData, c69_y, false);
  return c69_mxArrayOutData;
}

static void c69_i_emlrt_marshallIn(SFc69_ethercatInstanceStruct *chartInstance,
  const mxArray *c69_b_floatSDOValues, const char_T *c69_identifier, real_T
  c69_y[20])
{
  emlrtMsgIdentifier c69_thisId;
  c69_thisId.fIdentifier = c69_identifier;
  c69_thisId.fParent = NULL;
  c69_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c69_b_floatSDOValues),
    &c69_thisId, c69_y);
  sf_mex_destroy(&c69_b_floatSDOValues);
}

static void c69_j_emlrt_marshallIn(SFc69_ethercatInstanceStruct *chartInstance,
  const mxArray *c69_u, const emlrtMsgIdentifier *c69_parentId, real_T c69_y[20])
{
  real_T c69_dv1[20];
  int32_T c69_i35;
  (void)chartInstance;
  sf_mex_import(c69_parentId, sf_mex_dup(c69_u), c69_dv1, 1, 0, 0U, 1, 0U, 1, 20);
  for (c69_i35 = 0; c69_i35 < 20; c69_i35++) {
    c69_y[c69_i35] = c69_dv1[c69_i35];
  }

  sf_mex_destroy(&c69_u);
}

static void c69_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c69_mxArrayInData, const char_T *c69_varName, void *c69_outData)
{
  const mxArray *c69_b_floatSDOValues;
  const char_T *c69_identifier;
  emlrtMsgIdentifier c69_thisId;
  real_T c69_y[20];
  int32_T c69_i36;
  SFc69_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc69_ethercatInstanceStruct *)chartInstanceVoid;
  c69_b_floatSDOValues = sf_mex_dup(c69_mxArrayInData);
  c69_identifier = c69_varName;
  c69_thisId.fIdentifier = c69_identifier;
  c69_thisId.fParent = NULL;
  c69_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c69_b_floatSDOValues),
    &c69_thisId, c69_y);
  sf_mex_destroy(&c69_b_floatSDOValues);
  for (c69_i36 = 0; c69_i36 < 20; c69_i36++) {
    (*(real_T (*)[20])c69_outData)[c69_i36] = c69_y[c69_i36];
  }

  sf_mex_destroy(&c69_mxArrayInData);
}

static uint8_T c69_k_emlrt_marshallIn(SFc69_ethercatInstanceStruct
  *chartInstance, const mxArray *c69_b_is_active_c69_ethercat, const char_T
  *c69_identifier)
{
  uint8_T c69_y;
  emlrtMsgIdentifier c69_thisId;
  c69_thisId.fIdentifier = c69_identifier;
  c69_thisId.fParent = NULL;
  c69_y = c69_l_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c69_b_is_active_c69_ethercat), &c69_thisId);
  sf_mex_destroy(&c69_b_is_active_c69_ethercat);
  return c69_y;
}

static uint8_T c69_l_emlrt_marshallIn(SFc69_ethercatInstanceStruct
  *chartInstance, const mxArray *c69_u, const emlrtMsgIdentifier *c69_parentId)
{
  uint8_T c69_y;
  uint8_T c69_u0;
  (void)chartInstance;
  sf_mex_import(c69_parentId, sf_mex_dup(c69_u), &c69_u0, 1, 3, 0U, 0, 0U, 0);
  c69_y = c69_u0;
  sf_mex_destroy(&c69_u);
  return c69_y;
}

static const mxArray *c69_m_emlrt_marshallIn(SFc69_ethercatInstanceStruct
  *chartInstance, const mxArray *c69_b_setSimStateSideEffectsInfo, const char_T *
  c69_identifier)
{
  const mxArray *c69_y = NULL;
  emlrtMsgIdentifier c69_thisId;
  c69_y = NULL;
  c69_thisId.fIdentifier = c69_identifier;
  c69_thisId.fParent = NULL;
  sf_mex_assign(&c69_y, c69_n_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c69_b_setSimStateSideEffectsInfo), &c69_thisId), false);
  sf_mex_destroy(&c69_b_setSimStateSideEffectsInfo);
  return c69_y;
}

static const mxArray *c69_n_emlrt_marshallIn(SFc69_ethercatInstanceStruct
  *chartInstance, const mxArray *c69_u, const emlrtMsgIdentifier *c69_parentId)
{
  const mxArray *c69_y = NULL;
  (void)chartInstance;
  (void)c69_parentId;
  c69_y = NULL;
  sf_mex_assign(&c69_y, sf_mex_duplicatearraysafe(&c69_u), false);
  sf_mex_destroy(&c69_u);
  return c69_y;
}

static int32_T c69__s32_d_(SFc69_ethercatInstanceStruct *chartInstance, real_T
  c69_b)
{
  int32_T c69_a;
  c69_a = (int32_T)c69_b;
  if ((real_T)c69_a != (c69_b < 0.0 ? muDoubleScalarCeil(c69_b) :
                        muDoubleScalarFloor(c69_b))) {
    _SFD_OVERFLOW_DETECTION(SFDB_OVERFLOW, 1U, 0U, *chartInstance->c69_sfEvent,
      false);
  }

  return c69_a;
}

static int32_T c69__s32_minus__(SFc69_ethercatInstanceStruct *chartInstance,
  int32_T c69_b, int32_T c69_c)
{
  int32_T c69_a;
  c69_a = c69_b - c69_c;
  if (((c69_b ^ c69_a) & (c69_b ^ c69_c)) < 0) {
    _SFD_OVERFLOW_DETECTION(SFDB_OVERFLOW, 1U, 0U, *chartInstance->c69_sfEvent,
      false);
  }

  return c69_a;
}

static int32_T c69__s32_add__(SFc69_ethercatInstanceStruct *chartInstance,
  int32_T c69_b, int32_T c69_c)
{
  int32_T c69_a;
  c69_a = c69_b + c69_c;
  if (((c69_a ^ c69_b) & (c69_a ^ c69_c)) < 0) {
    _SFD_OVERFLOW_DETECTION(SFDB_OVERFLOW, 1U, 0U, *chartInstance->c69_sfEvent,
      false);
  }

  return c69_a;
}

static void init_dsm_address_info(SFc69_ethercatInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc69_ethercatInstanceStruct *chartInstance)
{
  chartInstance->c69_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 0);
  chartInstance->c69_isStable = (boolean_T *)ssGetDWork_wrapper(chartInstance->S,
    1);
  chartInstance->c69_is_active_c69_ethercat = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 2);
  chartInstance->c69_is_c69_ethercat = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 3);
  chartInstance->c69_triggerReading = (int32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c69_intReadAddrs = (real_T (*)[24])ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c69_intCount = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c69_intSDOResponse = (int32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c69_SDOCommand = (int32_T (*)[3])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c69_intSDOValues = (int32_T (*)[20])
    ssGetOutputPortSignal_wrapper(chartInstance->S, 2);
  chartInstance->c69_valueIdx = (int32_T *)ssGetDWork_wrapper(chartInstance->S,
    4);
  chartInstance->c69_lastTrigger = (int32_T *)ssGetDWork_wrapper
    (chartInstance->S, 5);
  chartInstance->c69_floatReadAddrs = (real_T (*)[24])
    ssGetInputPortSignal_wrapper(chartInstance->S, 4);
  chartInstance->c69_floatCount = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 5);
  chartInstance->c69_floatSDOResponse = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 6);
  chartInstance->c69_floatSDOValues = (real_T (*)[20])
    ssGetOutputPortSignal_wrapper(chartInstance->S, 3);
  chartInstance->c69_valueCount = (real_T *)ssGetDWork_wrapper(chartInstance->S,
    6);
  chartInstance->c69_complete = (int32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c69_status = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 7);
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
void sf_c69_ethercat_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1851714889U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(4176142412U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1155823166U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1561681455U);
}

mxArray* sf_c69_ethercat_get_post_codegen_info(void);
mxArray *sf_c69_ethercat_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("SNceeMg172YEYDjluqGDK");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(8));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(12);
      pr[1] = (double)(2);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(8));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,3,"type",mxType);
    }

    mxSetField(mxData,3,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(12);
      pr[1] = (double)(2);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
      pr[0] = (double)(3);
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
      pr[0] = (double)(20);
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
      pr[0] = (double)(20);
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
    mxArray* mxPostCodegenInfo = sf_c69_ethercat_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c69_ethercat_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c69_ethercat_jit_fallback_info(void)
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

mxArray *sf_c69_ethercat_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c69_ethercat_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c69_ethercat(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x9'type','srcId','name','auxInfo'{{M[1],M[135],T\"SDOCommand\",},{M[1],M[203],T\"complete\",},{M[1],M[177],T\"floatSDOValues\",},{M[1],M[160],T\"intSDOValues\",},{M[3],M[165],T\"lastTrigger\",},{M[3],M[182],T\"valueCount\",},{M[3],M[162],T\"valueIdx\",},{M[8],M[0],T\"is_active_c69_ethercat\",},{M[9],M[0],T\"is_c69_ethercat\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 9, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c69_ethercat_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc69_ethercatInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc69_ethercatInstanceStruct *) chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _ethercatMachineNumber_,
           69,
           10,
           12,
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
          _SFD_SET_DATA_PROPS(0,0,0,0,"lastTrigger");
          _SFD_SET_DATA_PROPS(1,0,0,0,"valueCount");
          _SFD_SET_DATA_PROPS(2,0,0,0,"valueIdx");
          _SFD_SET_DATA_PROPS(3,1,1,0,"triggerReading");
          _SFD_SET_DATA_PROPS(4,1,1,0,"intReadAddrs");
          _SFD_SET_DATA_PROPS(5,1,1,0,"intCount");
          _SFD_SET_DATA_PROPS(6,1,1,0,"intSDOResponse");
          _SFD_SET_DATA_PROPS(7,1,1,0,"floatReadAddrs");
          _SFD_SET_DATA_PROPS(8,1,1,0,"floatCount");
          _SFD_SET_DATA_PROPS(9,1,1,0,"floatSDOResponse");
          _SFD_SET_DATA_PROPS(10,1,1,0,"status");
          _SFD_SET_DATA_PROPS(11,2,0,1,"SDOCommand");
          _SFD_SET_DATA_PROPS(12,2,0,1,"intSDOValues");
          _SFD_SET_DATA_PROPS(13,2,0,1,"floatSDOValues");
          _SFD_SET_DATA_PROPS(14,2,0,1,"complete");
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_STATE_INFO(4,0,0);
          _SFD_STATE_INFO(6,0,0);
          _SFD_STATE_INFO(7,0,0);
          _SFD_STATE_INFO(8,0,0);
          _SFD_STATE_INFO(9,0,0);
          _SFD_STATE_INFO(5,0,2);
          _SFD_CH_SUBSTATE_COUNT(9);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_CH_SUBSTATE_INDEX(4,4);
          _SFD_CH_SUBSTATE_INDEX(5,6);
          _SFD_CH_SUBSTATE_INDEX(6,7);
          _SFD_CH_SUBSTATE_INDEX(7,8);
          _SFD_CH_SUBSTATE_INDEX(8,9);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
          _SFD_ST_SUBSTATE_COUNT(4,0);
          _SFD_ST_SUBSTATE_COUNT(6,0);
          _SFD_ST_SUBSTATE_COUNT(7,0);
          _SFD_ST_SUBSTATE_COUNT(8,0);
          _SFD_ST_SUBSTATE_COUNT(9,0);
        }

        _SFD_CV_INIT_CHART(9,1,0,0);

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
          _SFD_CV_INIT_STATE(5,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 30 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(6,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 30 };

          static int sRelationalopEps[] = { 0 };

          static int sRelationalopType[] = { 1, 1, 1, 1, 1 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(6,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(3,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 12 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0, 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(5,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 12 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 5, 5, 5, 5, 5 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(1,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 12 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0, 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(2,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 26 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 26 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 4, 4, 4, 4, 4 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(4,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_CV_INIT_TRANS(7,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(8,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 12 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0, 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(8,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(9,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 12 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 5, 5, 5, 5, 5 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(9,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 12 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(11,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 12 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0, 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(11,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 26 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(10,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 26 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 4, 4, 4, 4, 4 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(10,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(5,1,1,0,0,0,0,0,2,0,0,0);
        _SFD_CV_INIT_EML_FCN(5,0,"clearValues",0,-1,177);
        _SFD_CV_INIT_EML_FOR(5,1,0,27,57,93);
        _SFD_CV_INIT_EML_FOR(5,1,1,103,135,173);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_INT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c69_b_sf_marshallOut,(MexInFcnForType)
          c69_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c69_sf_marshallOut,(MexInFcnForType)c69_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_INT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c69_b_sf_marshallOut,(MexInFcnForType)
          c69_b_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_INT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c69_b_sf_marshallOut,(MexInFcnForType)NULL);

        {
          unsigned int dimVector[2];
          dimVector[0]= 12;
          dimVector[1]= 2;
          _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c69_c_sf_marshallOut,(MexInFcnForType)NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(5,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c69_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(6,SF_INT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c69_b_sf_marshallOut,(MexInFcnForType)NULL);

        {
          unsigned int dimVector[2];
          dimVector[0]= 12;
          dimVector[1]= 2;
          _SFD_SET_DATA_COMPILED_PROPS(7,SF_DOUBLE,2,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c69_c_sf_marshallOut,(MexInFcnForType)NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(8,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c69_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(9,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c69_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(10,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c69_sf_marshallOut,(MexInFcnForType)NULL);

        {
          unsigned int dimVector[1];
          dimVector[0]= 3;
          _SFD_SET_DATA_COMPILED_PROPS(11,SF_INT32,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c69_d_sf_marshallOut,(MexInFcnForType)
            c69_c_sf_marshallIn);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 20;
          _SFD_SET_DATA_COMPILED_PROPS(12,SF_INT32,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c69_e_sf_marshallOut,(MexInFcnForType)
            c69_d_sf_marshallIn);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 20;
          _SFD_SET_DATA_COMPILED_PROPS(13,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c69_f_sf_marshallOut,(MexInFcnForType)
            c69_e_sf_marshallIn);
        }

        _SFD_SET_DATA_COMPILED_PROPS(14,SF_INT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c69_b_sf_marshallOut,(MexInFcnForType)
          c69_b_sf_marshallIn);
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
    SFc69_ethercatInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc69_ethercatInstanceStruct *) chartInfo->chartInstance;
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c69_triggerReading);
        _SFD_SET_DATA_VALUE_PTR(4U, *chartInstance->c69_intReadAddrs);
        _SFD_SET_DATA_VALUE_PTR(5U, chartInstance->c69_intCount);
        _SFD_SET_DATA_VALUE_PTR(6U, chartInstance->c69_intSDOResponse);
        _SFD_SET_DATA_VALUE_PTR(11U, *chartInstance->c69_SDOCommand);
        _SFD_SET_DATA_VALUE_PTR(12U, *chartInstance->c69_intSDOValues);
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c69_valueIdx);
        _SFD_SET_DATA_VALUE_PTR(0U, chartInstance->c69_lastTrigger);
        _SFD_SET_DATA_VALUE_PTR(7U, *chartInstance->c69_floatReadAddrs);
        _SFD_SET_DATA_VALUE_PTR(8U, chartInstance->c69_floatCount);
        _SFD_SET_DATA_VALUE_PTR(9U, chartInstance->c69_floatSDOResponse);
        _SFD_SET_DATA_VALUE_PTR(13U, *chartInstance->c69_floatSDOValues);
        _SFD_SET_DATA_VALUE_PTR(1U, chartInstance->c69_valueCount);
        _SFD_SET_DATA_VALUE_PTR(14U, chartInstance->c69_complete);
        _SFD_SET_DATA_VALUE_PTR(10U, chartInstance->c69_status);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sX8SuZ9m5VIK0u6eQUBvGLC";
}

static void sf_check_dwork_consistency(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    const uint32_T *sfunDWorkChecksum = sf_get_sfun_dwork_checksum();
    mxArray *infoStruct = load_ethercat_optimization_info();
    mxArray* mxRTWDWorkChecksum = sf_get_dwork_info_from_mat_file(S,
      sf_get_instance_specialization(), infoStruct, 69, "dworkChecksum");
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

static void sf_opaque_initialize_c69_ethercat(void *chartInstanceVar)
{
  sf_check_dwork_consistency(((SFc69_ethercatInstanceStruct*) chartInstanceVar
    )->S);
  chart_debug_initialization(((SFc69_ethercatInstanceStruct*) chartInstanceVar
    )->S,0);
  initialize_params_c69_ethercat((SFc69_ethercatInstanceStruct*)
    chartInstanceVar);
  initialize_c69_ethercat((SFc69_ethercatInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c69_ethercat(void *chartInstanceVar)
{
  enable_c69_ethercat((SFc69_ethercatInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c69_ethercat(void *chartInstanceVar)
{
  disable_c69_ethercat((SFc69_ethercatInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c69_ethercat(void *chartInstanceVar)
{
  sf_gateway_c69_ethercat((SFc69_ethercatInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c69_ethercat(void *chartInstanceVar)
{
  ext_mode_exec_c69_ethercat((SFc69_ethercatInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c69_ethercat(SimStruct* S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  return get_sim_state_c69_ethercat((SFc69_ethercatInstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c69_ethercat(SimStruct* S, const mxArray *st)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  set_sim_state_c69_ethercat((SFc69_ethercatInstanceStruct*)
    chartInfo->chartInstance, st);
}

static void sf_opaque_terminate_c69_ethercat(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc69_ethercatInstanceStruct*) chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_ethercat_optimization_info();
    }

    finalize_c69_ethercat((SFc69_ethercatInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (crtInfo != NULL) {
      utFree(crtInfo);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc69_ethercat((SFc69_ethercatInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c69_ethercat(SimStruct *S)
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
    initialize_params_c69_ethercat((SFc69_ethercatInstanceStruct*)
      (chartInfo->chartInstance));
  }
}

mxArray *sf_c69_ethercat_get_testpoint_info(void)
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

static void mdlSetWorkWidths_c69_ethercat(SimStruct *S)
{
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_ethercat_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      69);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,69,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,69);
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
        infoStruct,69,8);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,69,4);
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

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,69);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2883620322U));
  ssSetChecksum1(S,(888732160U));
  ssSetChecksum2(S,(5994091U));
  ssSetChecksum3(S,(1462083732U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c69_ethercat(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c69_ethercat(SimStruct *S)
{
  SFc69_ethercatInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc69_ethercatInstanceStruct *)utMalloc(sizeof
    (SFc69_ethercatInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc69_ethercatInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c69_ethercat;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c69_ethercat;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c69_ethercat;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c69_ethercat;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c69_ethercat;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c69_ethercat;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c69_ethercat;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c69_ethercat;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c69_ethercat;
  chartInstance->chartInfo.mdlStart = mdlStart_c69_ethercat;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c69_ethercat;
  chartInstance->chartInfo.extModeExec = sf_opaque_ext_mode_exec_c69_ethercat;
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

void c69_ethercat_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c69_ethercat(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c69_ethercat(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c69_ethercat(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c69_ethercat_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
