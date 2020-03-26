/* Include files */

#include <stddef.h>
#include "blas.h"
#include "General_sfun.h"
#include "c38_General.h"
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
#define c38_IN_NO_ACTIVE_CHILD         ((uint8_T)0U)
#define c38_IN_RunECat                 ((uint8_T)1U)
#define c38_IN_RunPMAC                 ((uint8_T)2U)
#define c38_IN_RunSim                  ((uint8_T)3U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;

/* Function Declarations */
static void initialize_c38_General(SFc38_GeneralInstanceStruct *chartInstance);
static void initialize_params_c38_General(SFc38_GeneralInstanceStruct
  *chartInstance);
static void enable_c38_General(SFc38_GeneralInstanceStruct *chartInstance);
static void disable_c38_General(SFc38_GeneralInstanceStruct *chartInstance);
static void c38_update_debugger_state_c38_General(SFc38_GeneralInstanceStruct
  *chartInstance);
static void ext_mode_exec_c38_General(SFc38_GeneralInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c38_General(SFc38_GeneralInstanceStruct
  *chartInstance);
static void set_sim_state_c38_General(SFc38_GeneralInstanceStruct *chartInstance,
  const mxArray *c38_st);
static void c38_set_sim_state_side_effects_c38_General
  (SFc38_GeneralInstanceStruct *chartInstance);
static void finalize_c38_General(SFc38_GeneralInstanceStruct *chartInstance);
static void sf_gateway_c38_General(SFc38_GeneralInstanceStruct *chartInstance);
static void mdl_start_c38_General(SFc38_GeneralInstanceStruct *chartInstance);
static void initSimStructsc38_General(SFc38_GeneralInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c38_machineNumber, uint32_T
  c38_chartNumber, uint32_T c38_instanceNumber);
static const mxArray *c38_sf_marshallOut(void *chartInstanceVoid, void
  *c38_inData);
static int32_T c38_emlrt_marshallIn(SFc38_GeneralInstanceStruct *chartInstance,
  const mxArray *c38_u, const emlrtMsgIdentifier *c38_parentId);
static void c38_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c38_mxArrayInData, const char_T *c38_varName, void *c38_outData);
static const mxArray *c38_b_sf_marshallOut(void *chartInstanceVoid, void
  *c38_inData);
static uint8_T c38_b_emlrt_marshallIn(SFc38_GeneralInstanceStruct *chartInstance,
  const mxArray *c38_b_is_active_c38_General, const char_T *c38_identifier);
static uint8_T c38_c_emlrt_marshallIn(SFc38_GeneralInstanceStruct *chartInstance,
  const mxArray *c38_u, const emlrtMsgIdentifier *c38_parentId);
static const mxArray *c38_d_emlrt_marshallIn(SFc38_GeneralInstanceStruct
  *chartInstance, const mxArray *c38_b_setSimStateSideEffectsInfo, const char_T *
  c38_identifier);
static const mxArray *c38_e_emlrt_marshallIn(SFc38_GeneralInstanceStruct
  *chartInstance, const mxArray *c38_u, const emlrtMsgIdentifier *c38_parentId);
static void init_dsm_address_info(SFc38_GeneralInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc38_GeneralInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c38_General(SFc38_GeneralInstanceStruct *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc38_General(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  *chartInstance->c38_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c38_doSetSimStateSideEffects = 0U;
  chartInstance->c38_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c38_is_active_c38_General = 0U;
  *chartInstance->c38_is_c38_General = c38_IN_NO_ACTIVE_CHILD;
}

static void initialize_params_c38_General(SFc38_GeneralInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void enable_c38_General(SFc38_GeneralInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  sf_call_output_fcn_enable(chartInstance->S, 0, "bkin_testing", 0);
  sf_call_output_fcn_enable(chartInstance->S, 1, "ecat", 0);
  sf_call_output_fcn_enable(chartInstance->S, 2, "pmac", 0);
  sf_call_output_fcn_enable(chartInstance->S, 3, "buildKINData", 0);
}

static void disable_c38_General(SFc38_GeneralInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
  sf_call_output_fcn_disable(chartInstance->S, 0, "bkin_testing", 0);
  sf_call_output_fcn_disable(chartInstance->S, 1, "ecat", 0);
  sf_call_output_fcn_disable(chartInstance->S, 2, "pmac", 0);
  sf_call_output_fcn_disable(chartInstance->S, 3, "buildKINData", 0);
}

static void c38_update_debugger_state_c38_General(SFc38_GeneralInstanceStruct
  *chartInstance)
{
  uint32_T c38_prevAniVal;
  c38_prevAniVal = _SFD_GET_ANIMATION();
  _SFD_SET_ANIMATION(0U);
  _SFD_SET_HONOR_BREAKPOINTS(0U);
  if (*chartInstance->c38_is_active_c38_General == 1U) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 31U, *chartInstance->c38_sfEvent);
  }

  if (*chartInstance->c38_is_c38_General == c38_IN_RunSim) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c38_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, *chartInstance->c38_sfEvent);
  }

  if (*chartInstance->c38_is_c38_General == c38_IN_RunECat) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c38_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c38_sfEvent);
  }

  if (*chartInstance->c38_is_c38_General == c38_IN_RunPMAC) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c38_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, *chartInstance->c38_sfEvent);
  }

  _SFD_SET_ANIMATION(c38_prevAniVal);
  _SFD_SET_HONOR_BREAKPOINTS(1U);
  _SFD_ANIMATE();
}

static void ext_mode_exec_c38_General(SFc38_GeneralInstanceStruct *chartInstance)
{
  c38_update_debugger_state_c38_General(chartInstance);
}

static const mxArray *get_sim_state_c38_General(SFc38_GeneralInstanceStruct
  *chartInstance)
{
  const mxArray *c38_st;
  const mxArray *c38_y = NULL;
  uint8_T c38_hoistedGlobal;
  uint8_T c38_u;
  const mxArray *c38_b_y = NULL;
  uint8_T c38_b_hoistedGlobal;
  uint8_T c38_b_u;
  const mxArray *c38_c_y = NULL;
  c38_st = NULL;
  c38_st = NULL;
  c38_y = NULL;
  sf_mex_assign(&c38_y, sf_mex_createcellmatrix(2, 1), false);
  c38_hoistedGlobal = *chartInstance->c38_is_active_c38_General;
  c38_u = c38_hoistedGlobal;
  c38_b_y = NULL;
  sf_mex_assign(&c38_b_y, sf_mex_create("y", &c38_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c38_y, 0, c38_b_y);
  c38_b_hoistedGlobal = *chartInstance->c38_is_c38_General;
  c38_b_u = c38_b_hoistedGlobal;
  c38_c_y = NULL;
  sf_mex_assign(&c38_c_y, sf_mex_create("y", &c38_b_u, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c38_y, 1, c38_c_y);
  sf_mex_assign(&c38_st, c38_y, false);
  return c38_st;
}

static void set_sim_state_c38_General(SFc38_GeneralInstanceStruct *chartInstance,
  const mxArray *c38_st)
{
  const mxArray *c38_u;
  c38_u = sf_mex_dup(c38_st);
  *chartInstance->c38_is_active_c38_General = c38_b_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell("is_active_c38_General", c38_u, 0)),
     "is_active_c38_General");
  *chartInstance->c38_is_c38_General = c38_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell("is_c38_General", c38_u, 1)), "is_c38_General");
  sf_mex_assign(&chartInstance->c38_setSimStateSideEffectsInfo,
                c38_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(
    "setSimStateSideEffectsInfo", c38_u, 2)), "setSimStateSideEffectsInfo"),
                true);
  sf_mex_destroy(&c38_u);
  chartInstance->c38_doSetSimStateSideEffects = 1U;
  c38_update_debugger_state_c38_General(chartInstance);
  sf_mex_destroy(&c38_st);
}

static void c38_set_sim_state_side_effects_c38_General
  (SFc38_GeneralInstanceStruct *chartInstance)
{
  if (chartInstance->c38_doSetSimStateSideEffects != 0) {
    chartInstance->c38_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c38_General(SFc38_GeneralInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c38_setSimStateSideEffectsInfo);
}

static void sf_gateway_c38_General(SFc38_GeneralInstanceStruct *chartInstance)
{
  boolean_T c38_out;
  boolean_T c38_b_out;
  c38_set_sim_state_side_effects_c38_General(chartInstance);
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 31U, *chartInstance->c38_sfEvent);
  _SFD_DATA_RANGE_CHECK(*chartInstance->c38_system_type, 2U, 1U, 0U,
                        *chartInstance->c38_sfEvent, false);
  *chartInstance->c38_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 31U, *chartInstance->c38_sfEvent);
  if (*chartInstance->c38_is_active_c38_General == 0U) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 31U,
                 *chartInstance->c38_sfEvent);
    *chartInstance->c38_is_active_c38_General = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 31U, *chartInstance->c38_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, *chartInstance->c38_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                 *chartInstance->c38_sfEvent);
    c38_out = (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2U, 0,
      CV_RELATIONAL_EVAL(5U, 2U, 0, *chartInstance->c38_system_type, 2.0, -1, 0U,
                         *chartInstance->c38_system_type == 2.0) != 0U,
      *chartInstance->c38_sfEvent)) != 0);
    if (c38_out) {
      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, *chartInstance->c38_sfEvent);
      *chartInstance->c38_is_c38_General = c38_IN_RunECat;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, *chartInstance->c38_sfEvent);
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                   *chartInstance->c38_sfEvent);
      c38_b_out = (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3U, 0,
        CV_RELATIONAL_EVAL(5U, 3U, 0, *chartInstance->c38_system_type, 1.0, -1,
                           0U, *chartInstance->c38_system_type == 1.0) != 0U,
        *chartInstance->c38_sfEvent)) != 0);
      if (c38_b_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, *chartInstance->c38_sfEvent);
        *chartInstance->c38_is_c38_General = c38_IN_RunPMAC;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, *chartInstance->c38_sfEvent);
      } else {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, *chartInstance->c38_sfEvent);
        *chartInstance->c38_is_c38_General = c38_IN_RunSim;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, *chartInstance->c38_sfEvent);
      }
    }
  } else {
    switch (*chartInstance->c38_is_c38_General) {
     case c38_IN_RunECat:
      CV_CHART_EVAL(31, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                   *chartInstance->c38_sfEvent);
      sf_call_output_fcn_call(chartInstance->S, 1, "ecat", 0);
      sf_call_output_fcn_call(chartInstance->S, 3, "buildKINData", 0);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, *chartInstance->c38_sfEvent);
      break;

     case c38_IN_RunPMAC:
      CV_CHART_EVAL(31, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   *chartInstance->c38_sfEvent);
      sf_call_output_fcn_call(chartInstance->S, 2, "pmac", 0);
      sf_call_output_fcn_call(chartInstance->S, 3, "buildKINData", 0);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, *chartInstance->c38_sfEvent);
      break;

     case c38_IN_RunSim:
      CV_CHART_EVAL(31, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   *chartInstance->c38_sfEvent);
      sf_call_output_fcn_call(chartInstance->S, 0, "bkin_testing", 0);
      sf_mex_printf("%s\\n", "buildKINData");
      sf_call_output_fcn_call(chartInstance->S, 3, "buildKINData", 0);
      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, *chartInstance->c38_sfEvent);
      break;

     default:
      CV_CHART_EVAL(31, 0, 0);

      /* Unreachable state, for coverage only */
      *chartInstance->c38_is_c38_General = c38_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, *chartInstance->c38_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 31U, *chartInstance->c38_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_GeneralMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void mdl_start_c38_General(SFc38_GeneralInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void initSimStructsc38_General(SFc38_GeneralInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c38_machineNumber, uint32_T
  c38_chartNumber, uint32_T c38_instanceNumber)
{
  (void)c38_machineNumber;
  (void)c38_chartNumber;
  (void)c38_instanceNumber;
}

const mxArray *sf_c38_General_get_eml_resolved_functions_info(void)
{
  const mxArray *c38_nameCaptureInfo = NULL;
  c38_nameCaptureInfo = NULL;
  sf_mex_assign(&c38_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c38_nameCaptureInfo;
}

static const mxArray *c38_sf_marshallOut(void *chartInstanceVoid, void
  *c38_inData)
{
  const mxArray *c38_mxArrayOutData = NULL;
  int32_T c38_u;
  const mxArray *c38_y = NULL;
  SFc38_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc38_GeneralInstanceStruct *)chartInstanceVoid;
  c38_mxArrayOutData = NULL;
  c38_u = *(int32_T *)c38_inData;
  c38_y = NULL;
  sf_mex_assign(&c38_y, sf_mex_create("y", &c38_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c38_mxArrayOutData, c38_y, false);
  return c38_mxArrayOutData;
}

static int32_T c38_emlrt_marshallIn(SFc38_GeneralInstanceStruct *chartInstance,
  const mxArray *c38_u, const emlrtMsgIdentifier *c38_parentId)
{
  int32_T c38_y;
  int32_T c38_i0;
  (void)chartInstance;
  sf_mex_import(c38_parentId, sf_mex_dup(c38_u), &c38_i0, 1, 6, 0U, 0, 0U, 0);
  c38_y = c38_i0;
  sf_mex_destroy(&c38_u);
  return c38_y;
}

static void c38_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c38_mxArrayInData, const char_T *c38_varName, void *c38_outData)
{
  const mxArray *c38_b_sfEvent;
  const char_T *c38_identifier;
  emlrtMsgIdentifier c38_thisId;
  int32_T c38_y;
  SFc38_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc38_GeneralInstanceStruct *)chartInstanceVoid;
  c38_b_sfEvent = sf_mex_dup(c38_mxArrayInData);
  c38_identifier = c38_varName;
  c38_thisId.fIdentifier = c38_identifier;
  c38_thisId.fParent = NULL;
  c38_y = c38_emlrt_marshallIn(chartInstance, sf_mex_dup(c38_b_sfEvent),
    &c38_thisId);
  sf_mex_destroy(&c38_b_sfEvent);
  *(int32_T *)c38_outData = c38_y;
  sf_mex_destroy(&c38_mxArrayInData);
}

static const mxArray *c38_b_sf_marshallOut(void *chartInstanceVoid, void
  *c38_inData)
{
  const mxArray *c38_mxArrayOutData = NULL;
  real_T c38_u;
  const mxArray *c38_y = NULL;
  SFc38_GeneralInstanceStruct *chartInstance;
  chartInstance = (SFc38_GeneralInstanceStruct *)chartInstanceVoid;
  c38_mxArrayOutData = NULL;
  c38_u = *(real_T *)c38_inData;
  c38_y = NULL;
  sf_mex_assign(&c38_y, sf_mex_create("y", &c38_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c38_mxArrayOutData, c38_y, false);
  return c38_mxArrayOutData;
}

static uint8_T c38_b_emlrt_marshallIn(SFc38_GeneralInstanceStruct *chartInstance,
  const mxArray *c38_b_is_active_c38_General, const char_T *c38_identifier)
{
  uint8_T c38_y;
  emlrtMsgIdentifier c38_thisId;
  c38_thisId.fIdentifier = c38_identifier;
  c38_thisId.fParent = NULL;
  c38_y = c38_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c38_b_is_active_c38_General), &c38_thisId);
  sf_mex_destroy(&c38_b_is_active_c38_General);
  return c38_y;
}

static uint8_T c38_c_emlrt_marshallIn(SFc38_GeneralInstanceStruct *chartInstance,
  const mxArray *c38_u, const emlrtMsgIdentifier *c38_parentId)
{
  uint8_T c38_y;
  uint8_T c38_u0;
  (void)chartInstance;
  sf_mex_import(c38_parentId, sf_mex_dup(c38_u), &c38_u0, 1, 3, 0U, 0, 0U, 0);
  c38_y = c38_u0;
  sf_mex_destroy(&c38_u);
  return c38_y;
}

static const mxArray *c38_d_emlrt_marshallIn(SFc38_GeneralInstanceStruct
  *chartInstance, const mxArray *c38_b_setSimStateSideEffectsInfo, const char_T *
  c38_identifier)
{
  const mxArray *c38_y = NULL;
  emlrtMsgIdentifier c38_thisId;
  c38_y = NULL;
  c38_thisId.fIdentifier = c38_identifier;
  c38_thisId.fParent = NULL;
  sf_mex_assign(&c38_y, c38_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c38_b_setSimStateSideEffectsInfo), &c38_thisId), false);
  sf_mex_destroy(&c38_b_setSimStateSideEffectsInfo);
  return c38_y;
}

static const mxArray *c38_e_emlrt_marshallIn(SFc38_GeneralInstanceStruct
  *chartInstance, const mxArray *c38_u, const emlrtMsgIdentifier *c38_parentId)
{
  const mxArray *c38_y = NULL;
  (void)chartInstance;
  (void)c38_parentId;
  c38_y = NULL;
  sf_mex_assign(&c38_y, sf_mex_duplicatearraysafe(&c38_u), false);
  sf_mex_destroy(&c38_u);
  return c38_y;
}

static void init_dsm_address_info(SFc38_GeneralInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc38_GeneralInstanceStruct *chartInstance)
{
  chartInstance->c38_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 0);
  chartInstance->c38_isStable = (boolean_T *)ssGetDWork_wrapper(chartInstance->S,
    1);
  chartInstance->c38_is_active_c38_General = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 2);
  chartInstance->c38_is_c38_General = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 3);
  chartInstance->c38_system_type = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
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
void sf_c38_General_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2597259011U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(969663798U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3396651576U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3378615288U);
}

mxArray* sf_c38_General_get_post_codegen_info(void);
mxArray *sf_c38_General_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("gx4U1Da1y1HOFSsj69ZQEG");
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
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo = sf_c38_General_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c38_General_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c38_General_jit_fallback_info(void)
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

mxArray *sf_c38_General_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c38_General_get_post_codegen_info(void)
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

static const mxArray *sf_get_sim_state_info_c38_General(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[8],M[0],T\"is_active_c38_General\",},{M[9],M[0],T\"is_c38_General\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c38_General_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc38_GeneralInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc38_GeneralInstanceStruct *) chartInfo->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _GeneralMachineNumber_,
           38,
           3,
           4,
           0,
           1,
           4,
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
            4,
            4,
            4);
          _SFD_SET_DATA_PROPS(2,1,1,0,"system_type");
          _SFD_EVENT_SCOPE(0,2);
          _SFD_EVENT_SCOPE(1,2);
          _SFD_EVENT_SCOPE(2,2);
          _SFD_EVENT_SCOPE(3,2);
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_CH_SUBSTATE_COUNT(3);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
        }

        _SFD_CV_INIT_CHART(3,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(2,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);
        _SFD_CV_INIT_TRANS(1,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 17 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0, 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(3,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 17 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartRelationalopMap[] = { 1 };

          static unsigned int sEndRelationalopMap[] = { 17 };

          static int sRelationalopEps[] = { -1 };

          static int sRelationalopType[] = { 0, 0, 0, 0, 0 };

          _SFD_CV_INIT_TRANSITION_RELATIONALOP(2,1,&(sStartRelationalopMap[0]),
            &(sEndRelationalopMap[0]),&(sRelationalopEps[0]),
            &(sRelationalopType[0]));
        }

        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c38_b_sf_marshallOut,(MexInFcnForType)NULL);
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
    SFc38_GeneralInstanceStruct *chartInstance;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
    chartInstance = (SFc38_GeneralInstanceStruct *) chartInfo->chartInstance;
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(2U, chartInstance->c38_system_type);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sVswVlNkLwBVvafkgoc2QYD";
}

static void sf_check_dwork_consistency(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    const uint32_T *sfunDWorkChecksum = sf_get_sfun_dwork_checksum();
    mxArray *infoStruct = load_General_optimization_info();
    mxArray* mxRTWDWorkChecksum = sf_get_dwork_info_from_mat_file(S,
      sf_get_instance_specialization(), infoStruct, 38, "dworkChecksum");
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

static void sf_opaque_initialize_c38_General(void *chartInstanceVar)
{
  sf_check_dwork_consistency(((SFc38_GeneralInstanceStruct*) chartInstanceVar)
    ->S);
  chart_debug_initialization(((SFc38_GeneralInstanceStruct*) chartInstanceVar)
    ->S,0);
  initialize_params_c38_General((SFc38_GeneralInstanceStruct*) chartInstanceVar);
  initialize_c38_General((SFc38_GeneralInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c38_General(void *chartInstanceVar)
{
  enable_c38_General((SFc38_GeneralInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c38_General(void *chartInstanceVar)
{
  disable_c38_General((SFc38_GeneralInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c38_General(void *chartInstanceVar)
{
  sf_gateway_c38_General((SFc38_GeneralInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c38_General(void *chartInstanceVar)
{
  ext_mode_exec_c38_General((SFc38_GeneralInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c38_General(SimStruct* S)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  return get_sim_state_c38_General((SFc38_GeneralInstanceStruct*)
    chartInfo->chartInstance);         /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c38_General(SimStruct* S, const mxArray *st)
{
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
  ChartInfoStruct * chartInfo = (ChartInfoStruct *)(crtInfo->instanceInfo);
  set_sim_state_c38_General((SFc38_GeneralInstanceStruct*)
    chartInfo->chartInstance, st);
}

static void sf_opaque_terminate_c38_General(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc38_GeneralInstanceStruct*) chartInstanceVar)->S;
    ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)(ssGetUserData(S));
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_General_optimization_info();
    }

    finalize_c38_General((SFc38_GeneralInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (crtInfo != NULL) {
      utFree(crtInfo);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc38_General((SFc38_GeneralInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c38_General(SimStruct *S)
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
    initialize_params_c38_General((SFc38_GeneralInstanceStruct*)
      (chartInfo->chartInstance));
  }
}

mxArray *sf_c38_General_get_testpoint_info(void)
{
  return NULL;
}

static void sf_set_sfun_dwork_info(SimStruct *S)
{
  const char *dworkEncStr[] = {
    "100 S1x4'type','isSigned','wordLength','bias','slope','exponent','isScaledDouble','isComplex','size'{{T\"int32\",,,,,,,M[0],M[]},{T\"boolean\",,,,,,,M[0],M[]},{T\"uint8\",,,,,,,M[0],M[]},{T\"uint8\",,,,,,,M[0],M[]}}"
  };

  sf_set_encoded_dwork_info(S, dworkEncStr, 4, 10);
}

static uint32_T* sf_get_sfun_dwork_checksum()
{
  static uint32_T checksum[4] = { 4216956281U, 1510948965U, 1302673614U,
    623905539U };

  return checksum;
}

static void mdlSetWorkWidths_c38_General(SimStruct *S)
{
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_General_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      38);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,38,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_update_buildInfo(sf_get_instance_specialization(),infoStruct,38);
    sf_mark_output_events_with_multiple_callers(S,sf_get_instance_specialization
      (),infoStruct,38,4);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,38,1);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=0; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 1; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,38);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
    sf_set_sfun_dwork_info(S);
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(507666813U));
  ssSetChecksum1(S,(3050059531U));
  ssSetChecksum2(S,(4013119701U));
  ssSetChecksum3(S,(211645446U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c38_General(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c38_General(SimStruct *S)
{
  SFc38_GeneralInstanceStruct *chartInstance;
  ChartRunTimeInfo * crtInfo = (ChartRunTimeInfo *)utMalloc(sizeof
    (ChartRunTimeInfo));
  chartInstance = (SFc38_GeneralInstanceStruct *)utMalloc(sizeof
    (SFc38_GeneralInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc38_GeneralInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c38_General;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c38_General;
  chartInstance->chartInfo.terminateChart = sf_opaque_terminate_c38_General;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c38_General;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c38_General;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c38_General;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c38_General;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c38_General;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c38_General;
  chartInstance->chartInfo.mdlStart = mdlStart_c38_General;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c38_General;
  chartInstance->chartInfo.extModeExec = sf_opaque_ext_mode_exec_c38_General;
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

void c38_General_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c38_General(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c38_General(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c38_General(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c38_General_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
