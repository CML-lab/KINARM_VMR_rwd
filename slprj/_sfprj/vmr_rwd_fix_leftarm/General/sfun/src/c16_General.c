/* Include files */

#include <stddef.h>
#include "blas.h"
#include "General_sfun.h"
#include "c16_General.h"
#include <string.h>
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "General_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c_with_debugger(S, sfGlobalDebugInstanceStruct);

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization);
static void chart_debug_initialize_data_addresses(SimStruct *S);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c16_debug_family_names[5] = { "temp", "nargin", "nargout",
  "u", "y" };

/* Function Declarations */
static void initialize_c16_General(SFc16_GeneralInstanceStruct *chartInstance);
static void initialize_params_c16_General(SFc16_GeneralInstanceStruct
  *chartInstance);
static void enable_c16_General(SFc16_GeneralInstanceStruct *chartInstance);
static void disable_c16_General(SFc16_GeneralInstanceStruct *chartInstance);
static void c16_update_debugger_state_c16_General(SFc16_GeneralInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c16_General(SFc16_GeneralInstanceStruct
  *chartInstance);
static void set_sim_state_c16_General(SFc16_GeneralInstanceStruct *chartInstance,
  const mxArray *c16_st);
static void finalize_c16_General(SFc16_GeneralInstanceStruct *chartInstance);
static void sf_gateway_c16_General(SFc16_GeneralInstanceStruct *chartInstance);
static void mdl_start_c16_General(SFc16_GeneralInstanceStruct *chartInstance);
static void initSimStructsc16_General(SFc16_GeneralInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c16_machineNumber, uint32_T
  c16_chartNumber, uint32_T c16_instanceNumber);
static const mxArray *c16_sf_marshallOut(void *chartInstanceVoid, void
  *c16_inData);
static real32_T c16_emlrt_marshallIn(SFc16_GeneralInstanceStruct *chartInstance,
  const mxArray *c16_b_y, const char_T *c16_identifier);
static real32_T c16_b_emlrt_marshallIn(SFc16_GeneralInstanceStruct
  *chartInstance, const mxArray *c16_b_u, const emlrtMsgIdentifier *c16_parentId);
static void c16_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c16_mxArrayInData, const char_T *c16_varName, void *c16_outData);
static const mxArray *c16_b_sf_marshallOut(void *chartInstanceVoid, void
  *c16_inData);
static const mxArray *c16_c_sf_marshallOut(void *chartInstanceVoid, void
  *c16_inData);
static real_T c16_c_emlrt_marshallIn(SFc16_GeneralInstanceStruct *chartInstance,
  const mxArray *c16_b_u, const emlrtMsgIdentifier *c16_parentId);
static void c16_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c16_mxArrayInData, const char_T *c16_varName, void *c16_outData);
static const mxArray *c16_d_sf_marshallOut(void *chartInstanceVoid, void
  *c16_inData);
static uint32_T c16_d_emlrt_marshallIn(SFc16_GeneralInstanceStruct
  *chartInstance, const mxArray *c16_b_u, const emlrtMsgIdentifier *c16_parentId);
static void c16_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c16_mxArrayInData, const char_T *c16_varName, void *c16_outData);
static const mxArray *c16_e_sf_marshallOut(void *chartInstanceVoid, void
  *c16_inData);
static int32_T c16_e_emlrt_marshallIn(SFc16_GeneralInstanceStruct *chartInstance,
  const mxArray *c16_b_u, const emlrtMsgIdentifier *c16_parentId);
static void c16_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c16_mxArrayInData, const char_T *c16_varName, void *c16_outData);
static uint8_T c16_f_emlrt_marshallIn(SFc16_GeneralInstanceStruct *chartInstance,
  const mxArray *c16_b_is_active_c16_General, const char_T *c16_identifier);
static uint8_T c16_g_emlrt_marshallIn(SFc16_GeneralInstanceStruct *chartInstance,
  const mxArray *c16_b_u, const emlrtMsgIdentifier *c16_parentId);
static void init_dsm_address_info(SFc16_GeneralInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc16_GeneralInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c16_General(SFc16_GeneralInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc16_General(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  chartInstance->c16_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c16_is_active_c16_General = 0U;
}

static void initialize_params_c16_General(SFc16_GeneralInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void enable_c16_General(SFc16_GeneralInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c16_General(SFc16_GeneralInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c16_update_debugger_state_c16_General(SFc16_GeneralInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c16_General(SFc16_GeneralInstanceStruct
  *chartInstance)
{
  const mxArray *c16_st;
  const mxArray *c16_b_y = NULL;
  real32_T c16_hoistedGlobal;
  real32_T c16_b_u;
  const mxArray *c16_c_y = NULL;
  uint8_T c16_b_hoistedGlobal;
  uint8_T c16_c_u;
  const mxArray *c16_d_y = NULL;
  c16_st = NULL;
  c16_st = NULL;
  c16_b_y = NULL;
  sf_mex_assign(&c16_b_y, sf_mex_createcellmatrix(2, 1), false);
  c16_hoistedGlobal = *chartInstance->c16_y;
  c16_b_u = c16_hoistedGlobal;
  c16_c_y = NULL;
  sf_mex_assign(&c16_c_y, sf_mex_create("y", &c16_b_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c16_b_y, 0, c16_c_y);
  c16_b_hoistedGlobal = chartInstance->c16_is_active_c16_General;
  c16_c_u = c16_b_hoistedGlobal;
  c16_d_y = NULL;
  sf_mex_assign(&c16_d_y, sf_mex_create("y", &c16_c_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c16_b_y, 1, c16_d_y);
  sf_mex_assign(&c16_st, c16_b_y, false);
  return c16_st;
}

static void set_sim_state_c16_General(SFc16_GeneralInstanceStruct *chartInstance,
  const mxArray *c16_st)
{
  const mxArray *c16_b_u;
  chartInstance->c16_doneDoubleBufferReInit = true;
  c16_b_u = sf_mex_dup(c16_st);
  *chartInstance->c16_y = c16_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("y", c16_b_u, 0)), "y");
  chartInstance->c16_is_active_c16_General = c16_f_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_c16_General", c16_b_u,
       1)), "is_active_c16_General");
  sf_mex_destroy(&c16_b_u);
  c16_update_debugger_state_c16_General(chartInstance);
  sf_mex_destroy(&c16_st);
}

static void finalize_c16_General(SFc16_GeneralInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c16_General(SFc16_GeneralInstanceStruct *chartInstance)
{
  uint16_T c16_hoistedGlobal;
  uint16_T c16_b_u;
  uint32_T c16_debug_family_var_map[5];
  uint32_T c16_temp;
  real_T c16_nargin = 1.0;
  real_T c16_nargout = 1.0;
  real32_T c16_b_y;
  uint32_T c16_x;
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 10U, chartInstance->c16_sfEvent);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c16_u, 2U, 1U, 0U,
                        chartInstance->c16_sfEvent, false);
  chartInstance->c16_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 10U, chartInstance->c16_sfEvent);
  c16_hoistedGlobal = *chartInstance->c16_u;
  c16_b_u = c16_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 5U, 5U, c16_debug_family_names,
    c16_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c16_temp, 0U, c16_d_sf_marshallOut,
    c16_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c16_nargin, 1U, c16_c_sf_marshallOut,
    c16_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c16_nargout, 2U, c16_c_sf_marshallOut,
    c16_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c16_b_u, 3U, c16_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c16_b_y, 4U, c16_sf_marshallOut,
    c16_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c16_sfEvent, 6);
  c16_b_y = 0.0F;
  _SFD_EML_CALL(0U, chartInstance->c16_sfEvent, 9);
  c16_temp = c16_b_u;
  _SFD_EML_CALL(0U, chartInstance->c16_sfEvent, 10);
  c16_x = c16_temp;
  memcpy(&c16_b_y, &c16_x, (size_t)1 * sizeof(real32_T));
  _SFD_EML_CALL(0U, chartInstance->c16_sfEvent, -10);
  _SFD_SYMBOL_SCOPE_POP();
  *chartInstance->c16_y = c16_b_y;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 10U, chartInstance->c16_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_GeneralMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c16_y, 3U, 1U, 0U,
                        chartInstance->c16_sfEvent, false);
}

static void mdl_start_c16_General(SFc16_GeneralInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void initSimStructsc16_General(SFc16_GeneralInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c16_machineNumber, uint32_T
  c16_chartNumber, uint32_T c16_instanceNumber)
{
  (void)c16_machineNumber;
  (void)c16_chartNumber;
  (void)c16_instanceNumber;
}

static const mxArray *c16_sf_marshallOut(void *chartInstanceVoid, void
  *c16_inData)
{
  const mxArray *c16_mxArrayOutData = NULL;
  real32_T c16_b_u;
  const mxArray *c16_b_y = NULL;
  SFc16_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc16_GeneralInstanceStruct *)chartInstanceVoid;
  c16_mxArrayOutData = NULL;
  c16_b_u = *(real32_T *)c16_inData;
  c16_b_y = NULL;
  sf_mex_assign(&c16_b_y, sf_mex_create("y", &c16_b_u, 1, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c16_mxArrayOutData, c16_b_y, false);
  return c16_mxArrayOutData;
}

static real32_T c16_emlrt_marshallIn(SFc16_GeneralInstanceStruct *chartInstance,
  const mxArray *c16_b_y, const char_T *c16_identifier)
{
  real32_T c16_c_y;
  emlrtMsgIdentifier c16_thisId;
  c16_thisId.fIdentifier = c16_identifier;
  c16_thisId.fParent = NULL;
  c16_c_y = c16_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c16_b_y),
    &c16_thisId);
  sf_mex_destroy(&c16_b_y);
  return c16_c_y;
}

static real32_T c16_b_emlrt_marshallIn(SFc16_GeneralInstanceStruct
  *chartInstance, const mxArray *c16_b_u, const emlrtMsgIdentifier *c16_parentId)
{
  real32_T c16_b_y;
  real32_T c16_f0;
  (void)chartInstance;
  sf_mex_import(c16_parentId, sf_mex_dup(c16_b_u), &c16_f0, 1, 1, 0U, 0, 0U, 0);
  c16_b_y = c16_f0;
  sf_mex_destroy(&c16_b_u);
  return c16_b_y;
}

static void c16_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c16_mxArrayInData, const char_T *c16_varName, void *c16_outData)
{
  const mxArray *c16_b_y;
  const char_T *c16_identifier;
  emlrtMsgIdentifier c16_thisId;
  real32_T c16_c_y;
  SFc16_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc16_GeneralInstanceStruct *)chartInstanceVoid;
  c16_b_y = sf_mex_dup(c16_mxArrayInData);
  c16_identifier = c16_varName;
  c16_thisId.fIdentifier = c16_identifier;
  c16_thisId.fParent = NULL;
  c16_c_y = c16_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c16_b_y),
    &c16_thisId);
  sf_mex_destroy(&c16_b_y);
  *(real32_T *)c16_outData = c16_c_y;
  sf_mex_destroy(&c16_mxArrayInData);
}

static const mxArray *c16_b_sf_marshallOut(void *chartInstanceVoid, void
  *c16_inData)
{
  const mxArray *c16_mxArrayOutData = NULL;
  uint16_T c16_b_u;
  const mxArray *c16_b_y = NULL;
  SFc16_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc16_GeneralInstanceStruct *)chartInstanceVoid;
  c16_mxArrayOutData = NULL;
  c16_b_u = *(uint16_T *)c16_inData;
  c16_b_y = NULL;
  sf_mex_assign(&c16_b_y, sf_mex_create("y", &c16_b_u, 5, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c16_mxArrayOutData, c16_b_y, false);
  return c16_mxArrayOutData;
}

static const mxArray *c16_c_sf_marshallOut(void *chartInstanceVoid, void
  *c16_inData)
{
  const mxArray *c16_mxArrayOutData = NULL;
  real_T c16_b_u;
  const mxArray *c16_b_y = NULL;
  SFc16_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc16_GeneralInstanceStruct *)chartInstanceVoid;
  c16_mxArrayOutData = NULL;
  c16_b_u = *(real_T *)c16_inData;
  c16_b_y = NULL;
  sf_mex_assign(&c16_b_y, sf_mex_create("y", &c16_b_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c16_mxArrayOutData, c16_b_y, false);
  return c16_mxArrayOutData;
}

static real_T c16_c_emlrt_marshallIn(SFc16_GeneralInstanceStruct *chartInstance,
  const mxArray *c16_b_u, const emlrtMsgIdentifier *c16_parentId)
{
  real_T c16_b_y;
  real_T c16_d0;
  (void)chartInstance;
  sf_mex_import(c16_parentId, sf_mex_dup(c16_b_u), &c16_d0, 1, 0, 0U, 0, 0U, 0);
  c16_b_y = c16_d0;
  sf_mex_destroy(&c16_b_u);
  return c16_b_y;
}

static void c16_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c16_mxArrayInData, const char_T *c16_varName, void *c16_outData)
{
  const mxArray *c16_nargout;
  const char_T *c16_identifier;
  emlrtMsgIdentifier c16_thisId;
  real_T c16_b_y;
  SFc16_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc16_GeneralInstanceStruct *)chartInstanceVoid;
  c16_nargout = sf_mex_dup(c16_mxArrayInData);
  c16_identifier = c16_varName;
  c16_thisId.fIdentifier = c16_identifier;
  c16_thisId.fParent = NULL;
  c16_b_y = c16_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c16_nargout),
    &c16_thisId);
  sf_mex_destroy(&c16_nargout);
  *(real_T *)c16_outData = c16_b_y;
  sf_mex_destroy(&c16_mxArrayInData);
}

static const mxArray *c16_d_sf_marshallOut(void *chartInstanceVoid, void
  *c16_inData)
{
  const mxArray *c16_mxArrayOutData = NULL;
  uint32_T c16_b_u;
  const mxArray *c16_b_y = NULL;
  SFc16_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc16_GeneralInstanceStruct *)chartInstanceVoid;
  c16_mxArrayOutData = NULL;
  c16_b_u = *(uint32_T *)c16_inData;
  c16_b_y = NULL;
  sf_mex_assign(&c16_b_y, sf_mex_create("y", &c16_b_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c16_mxArrayOutData, c16_b_y, false);
  return c16_mxArrayOutData;
}

static uint32_T c16_d_emlrt_marshallIn(SFc16_GeneralInstanceStruct
  *chartInstance, const mxArray *c16_b_u, const emlrtMsgIdentifier *c16_parentId)
{
  uint32_T c16_b_y;
  uint32_T c16_u0;
  (void)chartInstance;
  sf_mex_import(c16_parentId, sf_mex_dup(c16_b_u), &c16_u0, 1, 7, 0U, 0, 0U, 0);
  c16_b_y = c16_u0;
  sf_mex_destroy(&c16_b_u);
  return c16_b_y;
}

static void c16_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c16_mxArrayInData, const char_T *c16_varName, void *c16_outData)
{
  const mxArray *c16_temp;
  const char_T *c16_identifier;
  emlrtMsgIdentifier c16_thisId;
  uint32_T c16_b_y;
  SFc16_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc16_GeneralInstanceStruct *)chartInstanceVoid;
  c16_temp = sf_mex_dup(c16_mxArrayInData);
  c16_identifier = c16_varName;
  c16_thisId.fIdentifier = c16_identifier;
  c16_thisId.fParent = NULL;
  c16_b_y = c16_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c16_temp),
    &c16_thisId);
  sf_mex_destroy(&c16_temp);
  *(uint32_T *)c16_outData = c16_b_y;
  sf_mex_destroy(&c16_mxArrayInData);
}

const mxArray *sf_c16_General_get_eml_resolved_functions_info(void)
{
  const mxArray *c16_nameCaptureInfo = NULL;
  c16_nameCaptureInfo = NULL;
  sf_mex_assign(&c16_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c16_nameCaptureInfo;
}

static const mxArray *c16_e_sf_marshallOut(void *chartInstanceVoid, void
  *c16_inData)
{
  const mxArray *c16_mxArrayOutData = NULL;
  int32_T c16_b_u;
  const mxArray *c16_b_y = NULL;
  SFc16_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc16_GeneralInstanceStruct *)chartInstanceVoid;
  c16_mxArrayOutData = NULL;
  c16_b_u = *(int32_T *)c16_inData;
  c16_b_y = NULL;
  sf_mex_assign(&c16_b_y, sf_mex_create("y", &c16_b_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c16_mxArrayOutData, c16_b_y, false);
  return c16_mxArrayOutData;
}

static int32_T c16_e_emlrt_marshallIn(SFc16_GeneralInstanceStruct *chartInstance,
  const mxArray *c16_b_u, const emlrtMsgIdentifier *c16_parentId)
{
  int32_T c16_b_y;
  int32_T c16_i0;
  (void)chartInstance;
  sf_mex_import(c16_parentId, sf_mex_dup(c16_b_u), &c16_i0, 1, 6, 0U, 0, 0U, 0);
  c16_b_y = c16_i0;
  sf_mex_destroy(&c16_b_u);
  return c16_b_y;
}

static void c16_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c16_mxArrayInData, const char_T *c16_varName, void *c16_outData)
{
  const mxArray *c16_b_sfEvent;
  const char_T *c16_identifier;
  emlrtMsgIdentifier c16_thisId;
  int32_T c16_b_y;
  SFc16_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc16_GeneralInstanceStruct *)chartInstanceVoid;
  c16_b_sfEvent = sf_mex_dup(c16_mxArrayInData);
  c16_identifier = c16_varName;
  c16_thisId.fIdentifier = c16_identifier;
  c16_thisId.fParent = NULL;
  c16_b_y = c16_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c16_b_sfEvent),
    &c16_thisId);
  sf_mex_destroy(&c16_b_sfEvent);
  *(int32_T *)c16_outData = c16_b_y;
  sf_mex_destroy(&c16_mxArrayInData);
}

static uint8_T c16_f_emlrt_marshallIn(SFc16_GeneralInstanceStruct *chartInstance,
  const mxArray *c16_b_is_active_c16_General, const char_T *c16_identifier)
{
  uint8_T c16_b_y;
  emlrtMsgIdentifier c16_thisId;
  c16_thisId.fIdentifier = c16_identifier;
  c16_thisId.fParent = NULL;
  c16_b_y = c16_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c16_b_is_active_c16_General), &c16_thisId);
  sf_mex_destroy(&c16_b_is_active_c16_General);
  return c16_b_y;
}

static uint8_T c16_g_emlrt_marshallIn(SFc16_GeneralInstanceStruct *chartInstance,
  const mxArray *c16_b_u, const emlrtMsgIdentifier *c16_parentId)
{
  uint8_T c16_b_y;
  uint8_T c16_u1;
  (void)chartInstance;
  sf_mex_import(c16_parentId, sf_mex_dup(c16_b_u), &c16_u1, 1, 3, 0U, 0, 0U, 0);
  c16_b_y = c16_u1;
  sf_mex_destroy(&c16_b_u);
  return c16_b_y;
}

static void init_dsm_address_info(SFc16_GeneralInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc16_GeneralInstanceStruct *chartInstance)
{
  chartInstance->c16_u = (uint16_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c16_y = (real32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
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

void sf_c16_General_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3746367335U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3470098511U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(281725217U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2273127212U);
}

mxArray* sf_c16_General_get_post_codegen_info(void);
mxArray *sf_c16_General_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("M4ACzQeP48QSlMuNibcWME");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(5));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(9));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo = sf_c16_General_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c16_General_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c16_General_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("memcpy");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c16_General_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c16_General_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c16_General(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"y\",},{M[8],M[0],T\"is_active_c16_General\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c16_General_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc16_GeneralInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc16_GeneralInstanceStruct *) chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _GeneralMachineNumber_,
           16,
           1,
           1,
           0,
           2,
           0,
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
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(2,1,1,0,"u");
          _SFD_SET_DATA_PROPS(3,2,0,1,"y");
          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }

        _SFD_CV_INIT_CHART(0,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(0,1,1,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,317);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_UINT16,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c16_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_SINGLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c16_sf_marshallOut,(MexInFcnForType)c16_sf_marshallIn);
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
    SFc16_GeneralInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc16_GeneralInstanceStruct *) chartInfo->chartInstance;
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c16_u);
        _SFD_SET_DATA_VALUE_PTR(3U, chartInstance->c16_y);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "spk5ZjAmAwk1ahIFYK8aLQB";
}

static void sf_opaque_initialize_c16_General(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc16_GeneralInstanceStruct*) chartInstanceVar)
    ->S,0);
  initialize_params_c16_General((SFc16_GeneralInstanceStruct*) chartInstanceVar);
  initialize_c16_General((SFc16_GeneralInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c16_General(void *chartInstanceVar)
{
  enable_c16_General((SFc16_GeneralInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c16_General(void *chartInstanceVar)
{
  disable_c16_General((SFc16_GeneralInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c16_General(void *chartInstanceVar)
{
  sf_gateway_c16_General((SFc16_GeneralInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c16_General(SimStruct* S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  return get_sim_state_c16_General((SFc16_GeneralInstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c16_General(SimStruct* S, const mxArray *st)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  set_sim_state_c16_General((SFc16_GeneralInstanceStruct*)
    chartInfo->chartInstance, st);
}

static void sf_opaque_terminate_c16_General(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc16_GeneralInstanceStruct*) chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_General_optimization_info();
    }

    finalize_c16_General((SFc16_GeneralInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (crtInfo != NULL) {
      utFree(crtInfo);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc16_General((SFc16_GeneralInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c16_General(SimStruct *S)
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
    initialize_params_c16_General((SFc16_GeneralInstanceStruct*)
      (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c16_General(SimStruct *S)
{
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_General_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      16);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,16,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,16);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,16,1);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,16,1);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=1; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 1; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,16);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1397924654U));
  ssSetChecksum1(S,(3958699795U));
  ssSetChecksum2(S,(1655783467U));
  ssSetChecksum3(S,(3172725177U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c16_General(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c16_General(SimStruct *S)
{
  SFc16_GeneralInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc16_GeneralInstanceStruct *)utMalloc(sizeof
    (SFc16_GeneralInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc16_GeneralInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c16_General;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c16_General;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c16_General;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c16_General;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c16_General;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c16_General;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c16_General;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c16_General;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c16_General;
  chartInstance->chartInfo.mdlStart = mdlStart_c16_General;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c16_General;
  chartInstance->chartInfo.extModeExec = NULL;
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

void c16_General_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c16_General(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c16_General(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c16_General(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c16_General_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
