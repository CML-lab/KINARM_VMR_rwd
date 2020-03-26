/* Include files */

#include <stddef.h>
#include "blas.h"
#include "ethercat_sfun.h"
#include "c74_ethercat.h"
#include <string.h>
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

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c74_debug_family_names[5] = { "nargin", "nargout", "u",
  "type", "y" };

/* Function Declarations */
static void initialize_c74_ethercat(SFc74_ethercatInstanceStruct *chartInstance);
static void initialize_params_c74_ethercat(SFc74_ethercatInstanceStruct
  *chartInstance);
static void enable_c74_ethercat(SFc74_ethercatInstanceStruct *chartInstance);
static void disable_c74_ethercat(SFc74_ethercatInstanceStruct *chartInstance);
static void c74_update_debugger_state_c74_ethercat(SFc74_ethercatInstanceStruct *
  chartInstance);
static const mxArray *get_sim_state_c74_ethercat(SFc74_ethercatInstanceStruct
  *chartInstance);
static void set_sim_state_c74_ethercat(SFc74_ethercatInstanceStruct
  *chartInstance, const mxArray *c74_st);
static void finalize_c74_ethercat(SFc74_ethercatInstanceStruct *chartInstance);
static void sf_gateway_c74_ethercat(SFc74_ethercatInstanceStruct *chartInstance);
static void mdl_start_c74_ethercat(SFc74_ethercatInstanceStruct *chartInstance);
static void initSimStructsc74_ethercat(SFc74_ethercatInstanceStruct
  *chartInstance);
static void init_script_number_translation(uint32_T c74_machineNumber, uint32_T
  c74_chartNumber, uint32_T c74_instanceNumber);
static const mxArray *c74_sf_marshallOut(void *chartInstanceVoid, void
  *c74_inData);
static uint32_T c74_emlrt_marshallIn(SFc74_ethercatInstanceStruct *chartInstance,
  const mxArray *c74_b_y, const char_T *c74_identifier);
static uint32_T c74_b_emlrt_marshallIn(SFc74_ethercatInstanceStruct
  *chartInstance, const mxArray *c74_b_u, const emlrtMsgIdentifier *c74_parentId);
static void c74_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c74_mxArrayInData, const char_T *c74_varName, void *c74_outData);
static const mxArray *c74_b_sf_marshallOut(void *chartInstanceVoid, void
  *c74_inData);
static real_T c74_c_emlrt_marshallIn(SFc74_ethercatInstanceStruct *chartInstance,
  const mxArray *c74_b_u, const emlrtMsgIdentifier *c74_parentId);
static void c74_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c74_mxArrayInData, const char_T *c74_varName, void *c74_outData);
static const mxArray *c74_c_sf_marshallOut(void *chartInstanceVoid, void
  *c74_inData);
static int32_T c74_d_emlrt_marshallIn(SFc74_ethercatInstanceStruct
  *chartInstance, const mxArray *c74_b_u, const emlrtMsgIdentifier *c74_parentId);
static void c74_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c74_mxArrayInData, const char_T *c74_varName, void *c74_outData);
static uint8_T c74_e_emlrt_marshallIn(SFc74_ethercatInstanceStruct
  *chartInstance, const mxArray *c74_b_is_active_c74_ethercat, const char_T
  *c74_identifier);
static uint8_T c74_f_emlrt_marshallIn(SFc74_ethercatInstanceStruct
  *chartInstance, const mxArray *c74_b_u, const emlrtMsgIdentifier *c74_parentId);
static void init_dsm_address_info(SFc74_ethercatInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc74_ethercatInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c74_ethercat(SFc74_ethercatInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc74_ethercat(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  chartInstance->c74_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c74_is_active_c74_ethercat = 0U;
}

static void initialize_params_c74_ethercat(SFc74_ethercatInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void enable_c74_ethercat(SFc74_ethercatInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c74_ethercat(SFc74_ethercatInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c74_update_debugger_state_c74_ethercat(SFc74_ethercatInstanceStruct *
  chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c74_ethercat(SFc74_ethercatInstanceStruct
  *chartInstance)
{
  const mxArray *c74_st;
  const mxArray *c74_b_y = NULL;
  uint32_T c74_hoistedGlobal;
  uint32_T c74_b_u;
  const mxArray *c74_c_y = NULL;
  uint8_T c74_b_hoistedGlobal;
  uint8_T c74_c_u;
  const mxArray *c74_d_y = NULL;
  c74_st = NULL;
  c74_st = NULL;
  c74_b_y = NULL;
  sf_mex_assign(&c74_b_y, sf_mex_createcellmatrix(2, 1), false);
  c74_hoistedGlobal = *chartInstance->c74_y;
  c74_b_u = c74_hoistedGlobal;
  c74_c_y = NULL;
  sf_mex_assign(&c74_c_y, sf_mex_create("y", &c74_b_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c74_b_y, 0, c74_c_y);
  c74_b_hoistedGlobal = chartInstance->c74_is_active_c74_ethercat;
  c74_c_u = c74_b_hoistedGlobal;
  c74_d_y = NULL;
  sf_mex_assign(&c74_d_y, sf_mex_create("y", &c74_c_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c74_b_y, 1, c74_d_y);
  sf_mex_assign(&c74_st, c74_b_y, false);
  return c74_st;
}

static void set_sim_state_c74_ethercat(SFc74_ethercatInstanceStruct
  *chartInstance, const mxArray *c74_st)
{
  const mxArray *c74_b_u;
  chartInstance->c74_doneDoubleBufferReInit = true;
  c74_b_u = sf_mex_dup(c74_st);
  *chartInstance->c74_y = c74_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell("y", c74_b_u, 0)), "y");
  chartInstance->c74_is_active_c74_ethercat = c74_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_c74_ethercat", c74_b_u,
       1)), "is_active_c74_ethercat");
  sf_mex_destroy(&c74_b_u);
  c74_update_debugger_state_c74_ethercat(chartInstance);
  sf_mex_destroy(&c74_st);
}

static void finalize_c74_ethercat(SFc74_ethercatInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c74_ethercat(SFc74_ethercatInstanceStruct *chartInstance)
{
  real_T c74_hoistedGlobal;
  real_T c74_b_hoistedGlobal;
  real_T c74_b_u;
  real_T c74_b_type;
  uint32_T c74_debug_family_var_map[5];
  real_T c74_nargin = 2.0;
  real_T c74_nargout = 1.0;
  uint32_T c74_b_y;
  real_T c74_d0;
  uint32_T c74_u0;
  real_T c74_d1;
  int32_T c74_i0;
  int32_T c74_x;
  real32_T c74_b_x;
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 39U, chartInstance->c74_sfEvent);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c74_type, 1U, 1U, 0U,
                        chartInstance->c74_sfEvent, false);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c74_u, 0U, 1U, 0U,
                        chartInstance->c74_sfEvent, false);
  chartInstance->c74_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 39U, chartInstance->c74_sfEvent);
  c74_hoistedGlobal = *chartInstance->c74_u;
  c74_b_hoistedGlobal = *chartInstance->c74_type;
  c74_b_u = c74_hoistedGlobal;
  c74_b_type = c74_b_hoistedGlobal;
  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 5U, 5U, c74_debug_family_names,
    c74_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c74_nargin, 0U, c74_b_sf_marshallOut,
    c74_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c74_nargout, 1U, c74_b_sf_marshallOut,
    c74_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c74_b_u, 2U, c74_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(&c74_b_type, 3U, c74_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c74_b_y, 4U, c74_sf_marshallOut,
    c74_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c74_sfEvent, 4);
  if (CV_EML_IF(0, 1, 0, CV_RELATIONAL_EVAL(4U, 0U, 0, c74_b_type, 1.0, -1, 0U,
        c74_b_type == 1.0))) {
    _SFD_EML_CALL(0U, chartInstance->c74_sfEvent, 5);
    c74_d0 = muDoubleScalarRound(c74_b_u);
    if (c74_d0 < 4.294967296E+9) {
      if (CV_SATURATION_EVAL(4, 0, 1, 1, c74_d0 >= 0.0)) {
        c74_u0 = (uint32_T)c74_d0;
      } else {
        c74_u0 = 0U;
      }
    } else if (CV_SATURATION_EVAL(4, 0, 1, 0, c74_d0 >= 4.294967296E+9)) {
      c74_u0 = MAX_uint32_T;
    } else {
      c74_u0 = 0U;
    }

    c74_b_y = c74_u0;
  } else {
    _SFD_EML_CALL(0U, chartInstance->c74_sfEvent, 6);
    if (CV_EML_IF(0, 1, 1, CV_RELATIONAL_EVAL(4U, 0U, 1, c74_b_type, 2.0, -1, 0U,
          c74_b_type == 2.0))) {
      _SFD_EML_CALL(0U, chartInstance->c74_sfEvent, 7);
      c74_d1 = muDoubleScalarRound(c74_b_u);
      if (c74_d1 < 2.147483648E+9) {
        if (CV_SATURATION_EVAL(4, 0, 0, 1, c74_d1 >= -2.147483648E+9)) {
          c74_i0 = (int32_T)c74_d1;
        } else {
          c74_i0 = MIN_int32_T;
        }
      } else if (CV_SATURATION_EVAL(4, 0, 0, 0, c74_d1 >= 2.147483648E+9)) {
        c74_i0 = MAX_int32_T;
      } else {
        c74_i0 = 0;
      }

      c74_x = c74_i0;
      memcpy(&c74_b_y, &c74_x, (size_t)1 * sizeof(uint32_T));
    } else {
      _SFD_EML_CALL(0U, chartInstance->c74_sfEvent, 9);
      c74_b_x = (real32_T)c74_b_u;
      memcpy(&c74_b_y, &c74_b_x, (size_t)1 * sizeof(uint32_T));
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c74_sfEvent, -9);
  _SFD_SYMBOL_SCOPE_POP();
  *chartInstance->c74_y = c74_b_y;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 39U, chartInstance->c74_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_ethercatMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
  _SFD_DATA_RANGE_CHECK((real_T)*chartInstance->c74_y, 2U, 1U, 0U,
                        chartInstance->c74_sfEvent, false);
}

static void mdl_start_c74_ethercat(SFc74_ethercatInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void initSimStructsc74_ethercat(SFc74_ethercatInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c74_machineNumber, uint32_T
  c74_chartNumber, uint32_T c74_instanceNumber)
{
  (void)c74_machineNumber;
  (void)c74_chartNumber;
  (void)c74_instanceNumber;
}

static const mxArray *c74_sf_marshallOut(void *chartInstanceVoid, void
  *c74_inData)
{
  const mxArray *c74_mxArrayOutData = NULL;
  uint32_T c74_b_u;
  const mxArray *c74_b_y = NULL;
  SFc74_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc74_ethercatInstanceStruct *)chartInstanceVoid;
  c74_mxArrayOutData = NULL;
  c74_b_u = *(uint32_T *)c74_inData;
  c74_b_y = NULL;
  sf_mex_assign(&c74_b_y, sf_mex_create("y", &c74_b_u, 7, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c74_mxArrayOutData, c74_b_y, false);
  return c74_mxArrayOutData;
}

static uint32_T c74_emlrt_marshallIn(SFc74_ethercatInstanceStruct *chartInstance,
  const mxArray *c74_b_y, const char_T *c74_identifier)
{
  uint32_T c74_c_y;
  emlrtMsgIdentifier c74_thisId;
  c74_thisId.fIdentifier = c74_identifier;
  c74_thisId.fParent = NULL;
  c74_c_y = c74_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c74_b_y),
    &c74_thisId);
  sf_mex_destroy(&c74_b_y);
  return c74_c_y;
}

static uint32_T c74_b_emlrt_marshallIn(SFc74_ethercatInstanceStruct
  *chartInstance, const mxArray *c74_b_u, const emlrtMsgIdentifier *c74_parentId)
{
  uint32_T c74_b_y;
  uint32_T c74_u1;
  (void)chartInstance;
  sf_mex_import(c74_parentId, sf_mex_dup(c74_b_u), &c74_u1, 1, 7, 0U, 0, 0U, 0);
  c74_b_y = c74_u1;
  sf_mex_destroy(&c74_b_u);
  return c74_b_y;
}

static void c74_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c74_mxArrayInData, const char_T *c74_varName, void *c74_outData)
{
  const mxArray *c74_b_y;
  const char_T *c74_identifier;
  emlrtMsgIdentifier c74_thisId;
  uint32_T c74_c_y;
  SFc74_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc74_ethercatInstanceStruct *)chartInstanceVoid;
  c74_b_y = sf_mex_dup(c74_mxArrayInData);
  c74_identifier = c74_varName;
  c74_thisId.fIdentifier = c74_identifier;
  c74_thisId.fParent = NULL;
  c74_c_y = c74_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c74_b_y),
    &c74_thisId);
  sf_mex_destroy(&c74_b_y);
  *(uint32_T *)c74_outData = c74_c_y;
  sf_mex_destroy(&c74_mxArrayInData);
}

static const mxArray *c74_b_sf_marshallOut(void *chartInstanceVoid, void
  *c74_inData)
{
  const mxArray *c74_mxArrayOutData = NULL;
  real_T c74_b_u;
  const mxArray *c74_b_y = NULL;
  SFc74_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc74_ethercatInstanceStruct *)chartInstanceVoid;
  c74_mxArrayOutData = NULL;
  c74_b_u = *(real_T *)c74_inData;
  c74_b_y = NULL;
  sf_mex_assign(&c74_b_y, sf_mex_create("y", &c74_b_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c74_mxArrayOutData, c74_b_y, false);
  return c74_mxArrayOutData;
}

static real_T c74_c_emlrt_marshallIn(SFc74_ethercatInstanceStruct *chartInstance,
  const mxArray *c74_b_u, const emlrtMsgIdentifier *c74_parentId)
{
  real_T c74_b_y;
  real_T c74_d2;
  (void)chartInstance;
  sf_mex_import(c74_parentId, sf_mex_dup(c74_b_u), &c74_d2, 1, 0, 0U, 0, 0U, 0);
  c74_b_y = c74_d2;
  sf_mex_destroy(&c74_b_u);
  return c74_b_y;
}

static void c74_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c74_mxArrayInData, const char_T *c74_varName, void *c74_outData)
{
  const mxArray *c74_nargout;
  const char_T *c74_identifier;
  emlrtMsgIdentifier c74_thisId;
  real_T c74_b_y;
  SFc74_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc74_ethercatInstanceStruct *)chartInstanceVoid;
  c74_nargout = sf_mex_dup(c74_mxArrayInData);
  c74_identifier = c74_varName;
  c74_thisId.fIdentifier = c74_identifier;
  c74_thisId.fParent = NULL;
  c74_b_y = c74_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c74_nargout),
    &c74_thisId);
  sf_mex_destroy(&c74_nargout);
  *(real_T *)c74_outData = c74_b_y;
  sf_mex_destroy(&c74_mxArrayInData);
}

const mxArray *sf_c74_ethercat_get_eml_resolved_functions_info(void)
{
  const mxArray *c74_nameCaptureInfo = NULL;
  c74_nameCaptureInfo = NULL;
  sf_mex_assign(&c74_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c74_nameCaptureInfo;
}

static const mxArray *c74_c_sf_marshallOut(void *chartInstanceVoid, void
  *c74_inData)
{
  const mxArray *c74_mxArrayOutData = NULL;
  int32_T c74_b_u;
  const mxArray *c74_b_y = NULL;
  SFc74_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc74_ethercatInstanceStruct *)chartInstanceVoid;
  c74_mxArrayOutData = NULL;
  c74_b_u = *(int32_T *)c74_inData;
  c74_b_y = NULL;
  sf_mex_assign(&c74_b_y, sf_mex_create("y", &c74_b_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c74_mxArrayOutData, c74_b_y, false);
  return c74_mxArrayOutData;
}

static int32_T c74_d_emlrt_marshallIn(SFc74_ethercatInstanceStruct
  *chartInstance, const mxArray *c74_b_u, const emlrtMsgIdentifier *c74_parentId)
{
  int32_T c74_b_y;
  int32_T c74_i1;
  (void)chartInstance;
  sf_mex_import(c74_parentId, sf_mex_dup(c74_b_u), &c74_i1, 1, 6, 0U, 0, 0U, 0);
  c74_b_y = c74_i1;
  sf_mex_destroy(&c74_b_u);
  return c74_b_y;
}

static void c74_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c74_mxArrayInData, const char_T *c74_varName, void *c74_outData)
{
  const mxArray *c74_b_sfEvent;
  const char_T *c74_identifier;
  emlrtMsgIdentifier c74_thisId;
  int32_T c74_b_y;
  SFc74_ethercatInstanceStruct *chartInstance;
  chartInstance = (SFc74_ethercatInstanceStruct *)chartInstanceVoid;
  c74_b_sfEvent = sf_mex_dup(c74_mxArrayInData);
  c74_identifier = c74_varName;
  c74_thisId.fIdentifier = c74_identifier;
  c74_thisId.fParent = NULL;
  c74_b_y = c74_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c74_b_sfEvent),
    &c74_thisId);
  sf_mex_destroy(&c74_b_sfEvent);
  *(int32_T *)c74_outData = c74_b_y;
  sf_mex_destroy(&c74_mxArrayInData);
}

static uint8_T c74_e_emlrt_marshallIn(SFc74_ethercatInstanceStruct
  *chartInstance, const mxArray *c74_b_is_active_c74_ethercat, const char_T
  *c74_identifier)
{
  uint8_T c74_b_y;
  emlrtMsgIdentifier c74_thisId;
  c74_thisId.fIdentifier = c74_identifier;
  c74_thisId.fParent = NULL;
  c74_b_y = c74_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c74_b_is_active_c74_ethercat), &c74_thisId);
  sf_mex_destroy(&c74_b_is_active_c74_ethercat);
  return c74_b_y;
}

static uint8_T c74_f_emlrt_marshallIn(SFc74_ethercatInstanceStruct
  *chartInstance, const mxArray *c74_b_u, const emlrtMsgIdentifier *c74_parentId)
{
  uint8_T c74_b_y;
  uint8_T c74_u2;
  (void)chartInstance;
  sf_mex_import(c74_parentId, sf_mex_dup(c74_b_u), &c74_u2, 1, 3, 0U, 0, 0U, 0);
  c74_b_y = c74_u2;
  sf_mex_destroy(&c74_b_u);
  return c74_b_y;
}

static void init_dsm_address_info(SFc74_ethercatInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc74_ethercatInstanceStruct *chartInstance)
{
  chartInstance->c74_u = (real_T *)ssGetInputPortSignal_wrapper(chartInstance->S,
    0);
  chartInstance->c74_y = (uint32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c74_type = (real_T *)ssGetInputPortSignal_wrapper
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

void sf_c74_ethercat_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3985354470U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3569041501U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2783851288U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1914816695U);
}

mxArray* sf_c74_ethercat_get_post_codegen_info(void);
mxArray *sf_c74_ethercat_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("KwfvnIBmFClbRZtvOlNaTE");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);

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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(7));
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
    mxArray* mxPostCodegenInfo = sf_c74_ethercat_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c74_ethercat_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c74_ethercat_jit_fallback_info(void)
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

mxArray *sf_c74_ethercat_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c74_ethercat_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c74_ethercat(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[5],T\"y\",},{M[8],M[0],T\"is_active_c74_ethercat\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c74_ethercat_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc74_ethercatInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc74_ethercatInstanceStruct *) chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _ethercatMachineNumber_,
           74,
           1,
           1,
           0,
           3,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,"u");
          _SFD_SET_DATA_PROPS(1,1,1,0,"type");
          _SFD_SET_DATA_PROPS(2,2,0,1,"y");
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
        _SFD_CV_INIT_EML(0,1,1,0,2,0,2,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,172);
        _SFD_CV_INIT_EML_SATURATION(0,1,0,103,-1,111);
        _SFD_CV_INIT_EML_SATURATION(0,1,1,58,-1,67);
        _SFD_CV_INIT_EML_IF(0,1,0,37,49,69,172);
        _SFD_CV_INIT_EML_IF(0,1,1,69,85,124,172);
        _SFD_CV_INIT_EML_RELATIONAL(0,1,0,40,49,-1,0);
        _SFD_CV_INIT_EML_RELATIONAL(0,1,1,76,85,-1,0);
        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c74_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c74_b_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_UINT32,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c74_sf_marshallOut,(MexInFcnForType)c74_sf_marshallIn);
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
    SFc74_ethercatInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc74_ethercatInstanceStruct *) chartInfo->chartInstance;
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(0U, chartInstance->c74_u);
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c74_y);
        _SFD_SET_DATA_VALUE_PTR(1U, chartInstance->c74_type);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sS5kyHDlbuIgAXyoJvTW0VD";
}

static void sf_opaque_initialize_c74_ethercat(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc74_ethercatInstanceStruct*) chartInstanceVar
    )->S,0);
  initialize_params_c74_ethercat((SFc74_ethercatInstanceStruct*)
    chartInstanceVar);
  initialize_c74_ethercat((SFc74_ethercatInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c74_ethercat(void *chartInstanceVar)
{
  enable_c74_ethercat((SFc74_ethercatInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c74_ethercat(void *chartInstanceVar)
{
  disable_c74_ethercat((SFc74_ethercatInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c74_ethercat(void *chartInstanceVar)
{
  sf_gateway_c74_ethercat((SFc74_ethercatInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c74_ethercat(SimStruct* S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  return get_sim_state_c74_ethercat((SFc74_ethercatInstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c74_ethercat(SimStruct* S, const mxArray *st)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  set_sim_state_c74_ethercat((SFc74_ethercatInstanceStruct*)
    chartInfo->chartInstance, st);
}

static void sf_opaque_terminate_c74_ethercat(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc74_ethercatInstanceStruct*) chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_ethercat_optimization_info();
    }

    finalize_c74_ethercat((SFc74_ethercatInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (crtInfo != NULL) {
      utFree(crtInfo);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc74_ethercat((SFc74_ethercatInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c74_ethercat(SimStruct *S)
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
    initialize_params_c74_ethercat((SFc74_ethercatInstanceStruct*)
      (chartInfo->chartInstance));
  }
}

static void mdlSetWorkWidths_c74_ethercat(SimStruct *S)
{
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_ethercat_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      74);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,74,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,74);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,74,2);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,74,1);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=1; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 2; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,74);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2688223000U));
  ssSetChecksum1(S,(4277349653U));
  ssSetChecksum2(S,(1029756536U));
  ssSetChecksum3(S,(1554032179U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c74_ethercat(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c74_ethercat(SimStruct *S)
{
  SFc74_ethercatInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc74_ethercatInstanceStruct *)utMalloc(sizeof
    (SFc74_ethercatInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc74_ethercatInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c74_ethercat;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c74_ethercat;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c74_ethercat;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c74_ethercat;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c74_ethercat;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c74_ethercat;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c74_ethercat;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c74_ethercat;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c74_ethercat;
  chartInstance->chartInfo.mdlStart = mdlStart_c74_ethercat;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c74_ethercat;
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

void c74_ethercat_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c74_ethercat(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c74_ethercat(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c74_ethercat(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c74_ethercat_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
