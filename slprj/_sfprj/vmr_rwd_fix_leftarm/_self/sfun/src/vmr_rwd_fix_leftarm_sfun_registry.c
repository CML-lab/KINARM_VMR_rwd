#include "vmr_rwd_fix_leftarm_sfun.h"
#include "sf_runtime/sfcdebug.h"

struct SfDebugInstanceStruct;
struct SfDebugInstanceStruct* sfGlobalDebugInstanceStruct = NULL;

#define PROCESS_MEX_SFUNCTION_CMD_LINE_CALL

unsigned int sf_process_check_sum_call( int nlhs, mxArray * plhs[], int nrhs,
  const mxArray * prhs[] )
{
  extern unsigned int sf_vmr_rwd_fix_leftarm_process_check_sum_call( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_General_process_check_sum_call( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_ethercat_process_check_sum_call( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_KINARM_loads_process_check_sum_call( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  if (sf_vmr_rwd_fix_leftarm_process_check_sum_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_General_process_check_sum_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_ethercat_process_check_sum_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_KINARM_loads_process_check_sum_call(nlhs,plhs,nrhs,prhs))
    return 1;
  return 0;
}

unsigned int sf_process_machine_uses_exported_functions_call( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{
  extern void sf_vmr_rwd_fix_leftarm_uses_exported_functions( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  extern void sf_General_uses_exported_functions( int nlhs, mxArray * plhs[],
    int nrhs, const mxArray * prhs[] );
  extern void sf_ethercat_uses_exported_functions( int nlhs, mxArray * plhs[],
    int nrhs, const mxArray * prhs[] );
  extern void sf_KINARM_loads_uses_exported_functions( int nlhs, mxArray * plhs[],
    int nrhs, const mxArray * prhs[] );
  char commandName[64];
  char machineName[128];
  if (nrhs < 2) {
    return 0;
  }

  if (!mxIsChar(prhs[0]) || !mxIsChar(prhs[1])) {
    return 0;
  }

  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"uses_exported_functions")) {
    return 0;
  }

  mxGetString(prhs[1], machineName,sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (strcmp(machineName, "vmr_rwd_fix_leftarm") == 0) {
    sf_vmr_rwd_fix_leftarm_uses_exported_functions(nlhs, plhs, nrhs-2, prhs+2);
    return 1;
  }

  if (strcmp(machineName, "General") == 0) {
    sf_General_uses_exported_functions(nlhs, plhs, nrhs-2, prhs+2);
    return 1;
  }

  if (strcmp(machineName, "ethercat") == 0) {
    sf_ethercat_uses_exported_functions(nlhs, plhs, nrhs-2, prhs+2);
    return 1;
  }

  if (strcmp(machineName, "KINARM_loads") == 0) {
    sf_KINARM_loads_uses_exported_functions(nlhs, plhs, nrhs-2, prhs+2);
    return 1;
  }

  return 0;
}

unsigned int sf_process_testpoint_info_call( int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[] )
{
  extern unsigned int sf_vmr_rwd_fix_leftarm_process_testpoint_info_call( int
    nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_General_process_testpoint_info_call( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_ethercat_process_testpoint_info_call( int nlhs, mxArray
    * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_KINARM_loads_process_testpoint_info_call( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  if (sf_vmr_rwd_fix_leftarm_process_testpoint_info_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_General_process_testpoint_info_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_ethercat_process_testpoint_info_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_KINARM_loads_process_testpoint_info_call(nlhs,plhs,nrhs,prhs))
    return 1;
  return 0;
}

unsigned int sf_process_autoinheritance_call( int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[] )
{
  extern unsigned int sf_vmr_rwd_fix_leftarm_autoinheritance_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_General_autoinheritance_info( int nlhs, mxArray * plhs[],
    int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_ethercat_autoinheritance_info( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_KINARM_loads_autoinheritance_info( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  char commandName[64];
  char machineName[128];
  if (nrhs < 4) {
    return 0;
  }

  if (!mxIsChar(prhs[0]) || !mxIsChar(prhs[1]))
    return 0;
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_autoinheritance_info"))
    return 0;
  mxGetString(prhs[1], machineName,sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (strcmp(machineName, "vmr_rwd_fix_leftarm") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_vmr_rwd_fix_leftarm_autoinheritance_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "General") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_General_autoinheritance_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "ethercat") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_ethercat_autoinheritance_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "KINARM_loads") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_KINARM_loads_autoinheritance_info(nlhs,plhs,3,newRhs);
  }

  return 0;
}

unsigned int sf_process_get_third_party_uses_info_call( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{
  extern unsigned int sf_vmr_rwd_fix_leftarm_third_party_uses_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_General_third_party_uses_info( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_ethercat_third_party_uses_info( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_KINARM_loads_third_party_uses_info( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  char commandName[64];
  char machineName[128];
  if (nrhs < 4) {
    return 0;
  }

  if (!mxIsChar(prhs[0]) || !mxIsChar(prhs[1]))
    return 0;
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_third_party_uses_info"))
    return 0;
  mxGetString(prhs[1], machineName,sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (strcmp(machineName, "vmr_rwd_fix_leftarm") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_vmr_rwd_fix_leftarm_third_party_uses_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "General") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_General_third_party_uses_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "ethercat") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_ethercat_third_party_uses_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "KINARM_loads") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_KINARM_loads_third_party_uses_info(nlhs,plhs,3,newRhs);
  }

  return 0;
}

unsigned int sf_process_get_jit_fallback_info_call( int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[] )
{
  extern unsigned int sf_vmr_rwd_fix_leftarm_jit_fallback_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_General_jit_fallback_info( int nlhs, mxArray * plhs[],
    int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_ethercat_jit_fallback_info( int nlhs, mxArray * plhs[],
    int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_KINARM_loads_jit_fallback_info( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  char commandName[64];
  char machineName[128];
  if (nrhs < 4) {
    return 0;
  }

  if (!mxIsChar(prhs[0]) || !mxIsChar(prhs[1]))
    return 0;
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_jit_fallback_info"))
    return 0;
  mxGetString(prhs[1], machineName,sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (strcmp(machineName, "vmr_rwd_fix_leftarm") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_vmr_rwd_fix_leftarm_jit_fallback_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "General") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_General_jit_fallback_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "ethercat") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_ethercat_jit_fallback_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "KINARM_loads") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_KINARM_loads_jit_fallback_info(nlhs,plhs,3,newRhs);
  }

  return 0;
}

unsigned int sf_process_get_updateBuildInfo_args_info_call( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{
  extern unsigned int sf_vmr_rwd_fix_leftarm_updateBuildInfo_args_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_General_updateBuildInfo_args_info( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_ethercat_updateBuildInfo_args_info( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_KINARM_loads_updateBuildInfo_args_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  char commandName[64];
  char machineName[128];
  if (nrhs < 4) {
    return 0;
  }

  if (!mxIsChar(prhs[0]) || !mxIsChar(prhs[1]))
    return 0;
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_updateBuildInfo_args_info"))
    return 0;
  mxGetString(prhs[1], machineName,sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (strcmp(machineName, "vmr_rwd_fix_leftarm") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_vmr_rwd_fix_leftarm_updateBuildInfo_args_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "General") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_General_updateBuildInfo_args_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "ethercat") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_ethercat_updateBuildInfo_args_info(nlhs,plhs,3,newRhs);
  }

  if (strcmp(machineName, "KINARM_loads") == 0) {
    const mxArray *newRhs[3] = { NULL, NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    newRhs[2] = prhs[3];
    return sf_KINARM_loads_updateBuildInfo_args_info(nlhs,plhs,3,newRhs);
  }

  return 0;
}

unsigned int sf_process_get_eml_resolved_functions_info_call( int nlhs, mxArray *
  plhs[], int nrhs, const mxArray * prhs[] )
{
  extern unsigned int sf_vmr_rwd_fix_leftarm_get_eml_resolved_functions_info
    ( int nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_General_get_eml_resolved_functions_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_ethercat_get_eml_resolved_functions_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  extern unsigned int sf_KINARM_loads_get_eml_resolved_functions_info( int nlhs,
    mxArray * plhs[], int nrhs, const mxArray * prhs[] );
  char commandName[64];
  char machineName[128];
  if (nrhs < 3) {
    return 0;
  }

  if (!mxIsChar(prhs[0]) || !mxIsChar(prhs[1]))
    return 0;
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;
  mxGetString(prhs[1], machineName,sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (strcmp(machineName, "vmr_rwd_fix_leftarm") == 0) {
    const mxArray *newRhs[2] = { NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    return sf_vmr_rwd_fix_leftarm_get_eml_resolved_functions_info(nlhs,plhs,2,
      newRhs);
  }

  if (strcmp(machineName, "General") == 0) {
    const mxArray *newRhs[2] = { NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    return sf_General_get_eml_resolved_functions_info(nlhs,plhs,2,newRhs);
  }

  if (strcmp(machineName, "ethercat") == 0) {
    const mxArray *newRhs[2] = { NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    return sf_ethercat_get_eml_resolved_functions_info(nlhs,plhs,2,newRhs);
  }

  if (strcmp(machineName, "KINARM_loads") == 0) {
    const mxArray *newRhs[2] = { NULL, NULL };

    newRhs[0] = prhs[0];
    newRhs[1] = prhs[2];
    return sf_KINARM_loads_get_eml_resolved_functions_info(nlhs,plhs,2,newRhs);
  }

  return 0;
}

unsigned int sf_process_get_post_codegen_info(int nlhs, mxArray * plhs[], int
  nrhs, const mxArray * prhs[])
{
  extern void sf_vmr_rwd_fix_leftarm_get_post_codegen_info( int nlhs, mxArray *
    plhs[], int nrhs, const mxArray * prhs[] );
  extern void sf_General_get_post_codegen_info( int nlhs, mxArray * plhs[], int
    nrhs, const mxArray * prhs[] );
  extern void sf_ethercat_get_post_codegen_info( int nlhs, mxArray * plhs[], int
    nrhs, const mxArray * prhs[] );
  extern void sf_KINARM_loads_get_post_codegen_info( int nlhs, mxArray * plhs[],
    int nrhs, const mxArray * prhs[] );
  char commandName[64];
  char machineName[128];
  if (nrhs < 3) {
    return 0;
  }

  if (!mxIsChar(prhs[0]) || !mxIsChar(prhs[1])) {
    return 0;
  }

  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_post_codegen_info")) {
    return 0;
  }

  mxGetString(prhs[1], machineName,sizeof(machineName)/sizeof(char));
  machineName[(sizeof(machineName)/sizeof(char)-1)] = '\0';
  if (strcmp(machineName, "vmr_rwd_fix_leftarm") == 0) {
    sf_vmr_rwd_fix_leftarm_get_post_codegen_info(nlhs, plhs, nrhs-2, prhs+2);
    return 1;
  }

  if (strcmp(machineName, "General") == 0) {
    sf_General_get_post_codegen_info(nlhs, plhs, nrhs-2, prhs+2);
    return 1;
  }

  if (strcmp(machineName, "ethercat") == 0) {
    sf_ethercat_get_post_codegen_info(nlhs, plhs, nrhs-2, prhs+2);
    return 1;
  }

  if (strcmp(machineName, "KINARM_loads") == 0) {
    sf_KINARM_loads_get_post_codegen_info(nlhs, plhs, nrhs-2, prhs+2);
    return 1;
  }

  return 1;
}

unsigned int sf_mex_unlock_call( int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[] )
{
  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_mex_unlock"))
    return 0;
  while (mexIsLocked()) {
    mexUnlock();
  }

  return(1);
}

extern unsigned int sf_debug_api(struct SfDebugInstanceStruct* debugInstance,
  int nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] );
static unsigned int sf_debug_api_wrapper( int nlhs, mxArray * plhs[], int nrhs,
  const mxArray * prhs[] )
{
  return sf_debug_api(sfGlobalDebugInstanceStruct, nlhs, plhs, nrhs, prhs);
}

static unsigned int ProcessMexSfunctionCmdLineCall(int nlhs, mxArray * plhs[],
  int nrhs, const mxArray * prhs[])
{
  if (sf_debug_api_wrapper(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_process_testpoint_info_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_process_check_sum_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_mex_unlock_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_process_autoinheritance_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_process_get_third_party_uses_info_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_process_get_jit_fallback_info_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_process_get_updateBuildInfo_args_info_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_process_get_eml_resolved_functions_info_call(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_process_get_post_codegen_info(nlhs,plhs,nrhs,prhs))
    return 1;
  if (sf_process_machine_uses_exported_functions_call(nlhs,plhs,nrhs,prhs))
    return 1;
  mexErrMsgTxt("Unsuccessful command.");
  return 0;
}

static unsigned int sfGlobalMdlStartCallCounts = 0;
unsigned int sf_machine_global_initializer_called(void)
{
  return(sfGlobalMdlStartCallCounts > 0);
}

extern unsigned int sf_vmr_rwd_fix_leftarm_method_dispatcher(SimStruct *S,
  unsigned int chartFileNumber, const char* specsCksum, int_T method, void *data);
extern unsigned int sf_General_method_dispatcher(SimStruct *S, unsigned int
  chartFileNumber, const char* specsCksum, int_T method, void *data);
extern unsigned int sf_ethercat_method_dispatcher(SimStruct *S, unsigned int
  chartFileNumber, const char* specsCksum, int_T method, void *data);
extern unsigned int sf_KINARM_loads_method_dispatcher(SimStruct *S, unsigned int
  chartFileNumber, const char* specsCksum, int_T method, void *data);
unsigned int sf_machine_global_method_dispatcher(SimStruct *simstructPtr, const
  char *machineName, unsigned int chartFileNumber, const char* specsCksum, int_T
  method, void *data)
{
  if (!strcmp(machineName,"vmr_rwd_fix_leftarm")) {
    return(sf_vmr_rwd_fix_leftarm_method_dispatcher(simstructPtr,chartFileNumber,
            specsCksum,method,data));
  }

  if (!strcmp(machineName,"General")) {
    return(sf_General_method_dispatcher(simstructPtr,chartFileNumber,specsCksum,
            method,data));
  }

  if (!strcmp(machineName,"ethercat")) {
    return(sf_ethercat_method_dispatcher(simstructPtr,chartFileNumber,specsCksum,
            method,data));
  }

  if (!strcmp(machineName,"KINARM_loads")) {
    return(sf_KINARM_loads_method_dispatcher(simstructPtr,chartFileNumber,
            specsCksum,method,data));
  }

  return 0;
}

extern void vmr_rwd_fix_leftarm_terminator(void);
extern void General_terminator(void);
extern void ethercat_terminator(void);
extern void KINARM_loads_terminator(void);
void sf_machine_global_terminator(void)
{
  sfGlobalMdlStartCallCounts--;
  if (sfGlobalMdlStartCallCounts == 0) {
    vmr_rwd_fix_leftarm_terminator();
    General_terminator();
    ethercat_terminator();
    KINARM_loads_terminator();
    sf_debug_terminate(sfGlobalDebugInstanceStruct);
    sfGlobalDebugInstanceStruct = NULL;
  }

  return;
}

extern void vmr_rwd_fix_leftarm_initializer(void);
extern void General_initializer(void);
extern void ethercat_initializer(void);
extern void KINARM_loads_initializer(void);
extern void vmr_rwd_fix_leftarm_register_exported_symbols(SimStruct* S);
extern void General_register_exported_symbols(SimStruct* S);
extern void ethercat_register_exported_symbols(SimStruct* S);
extern void KINARM_loads_register_exported_symbols(SimStruct* S);
extern void vmr_rwd_fix_leftarm_debug_initialize(struct SfDebugInstanceStruct*);
extern void General_debug_initialize(struct SfDebugInstanceStruct*);
extern void ethercat_debug_initialize(struct SfDebugInstanceStruct*);
extern void KINARM_loads_debug_initialize(struct SfDebugInstanceStruct*);
void sf_register_machine_exported_symbols(SimStruct* S)
{
  vmr_rwd_fix_leftarm_register_exported_symbols(S);
  General_register_exported_symbols(S);
  ethercat_register_exported_symbols(S);
  KINARM_loads_register_exported_symbols(S);
}

bool callCustomFcn(char initFlag)
{
  return false;
}

void sf_machine_global_initializer(SimStruct* S)
{
  bool simModeIsRTWGen = sim_mode_is_rtw_gen(S);
  sfGlobalMdlStartCallCounts++;
  if (sfGlobalMdlStartCallCounts == 1) {
    if (simModeIsRTWGen) {
      sf_register_machine_exported_symbols(S);
    }

    sfGlobalDebugInstanceStruct = sf_debug_create_debug_instance_struct();
    if (!simModeIsRTWGen) {
      vmr_rwd_fix_leftarm_debug_initialize(sfGlobalDebugInstanceStruct);
    }

    vmr_rwd_fix_leftarm_initializer();
    if (!simModeIsRTWGen) {
      General_debug_initialize(sfGlobalDebugInstanceStruct);
    }

    General_initializer();
    if (!simModeIsRTWGen) {
      ethercat_debug_initialize(sfGlobalDebugInstanceStruct);
    }

    ethercat_initializer();
    if (!simModeIsRTWGen) {
      KINARM_loads_debug_initialize(sfGlobalDebugInstanceStruct);
    }

    KINARM_loads_initializer();
  }

  return;
}

#include "sf_runtime/stateflow_mdl_methods.stub"
