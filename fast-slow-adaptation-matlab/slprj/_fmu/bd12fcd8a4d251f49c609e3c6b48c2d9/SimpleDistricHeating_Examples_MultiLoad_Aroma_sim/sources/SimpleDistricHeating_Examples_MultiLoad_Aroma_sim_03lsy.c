/* Linear Systems */
#include "SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_model.h"
#include "SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */

/*
equation index: 1402
type: SIMPLE_ASSIGN
boiler.boilerInsideVolume.T[2] = if not boiler.boilerInsideVolume.allowFlowReversal or mfr_mandata > 0.0 then boiler.boilerInsideVolume.Ttilde else 0.0002389486260454002 * s_T_sens.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1402};
  modelica_boolean tmp0;
  relationhysteresis(data, &tmp0, (data->localData[0]->realVars[308]/* mfr_mandata variable */) , 0.0, 17, Greater, GreaterZC);
  (data->localData[0]->realVars[220]/* boiler.boilerInsideVolume.T[2] variable */)  = (((!(data->simulationInfo->booleanParameter[0]/* boiler.boilerInsideVolume.allowFlowReversal PARAM */) ) || tmp0)?(data->localData[0]->realVars[0]/* boiler.boilerInsideVolume.Ttilde STATE(1) */) :(0.0002389486260454002) * ((data->localData[0]->realVars[542]/* s_T_sens.inlet.h_out variable */) ));
  TRACE_POP
}

void residualFunc1406(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1406};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[542]/* s_T_sens.inlet.h_out variable */)  = xloc[0];
  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1402(data, threadData);
  res[0] = (4185.0) * ((data->localData[0]->realVars[220]/* boiler.boilerInsideVolume.T[2] variable */) ) - (data->localData[0]->realVars[542]/* s_T_sens.inlet.h_out variable */) ;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData1406(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for s_T_sens.inlet.h_out */
  linearSystemData->nominal[i] = data->modelData->realVarsData[542].attribute /* s_T_sens.inlet.h_out */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[542].attribute /* s_T_sens.inlet.h_out */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[542].attribute /* s_T_sens.inlet.h_out */.max;
}


/*
equation index: 916
type: SIMPLE_ASSIGN
boiler.boilerInsideVolume.T[2] = if not boiler.boilerInsideVolume.allowFlowReversal or mfr_mandata > 0.0 then boiler.boilerInsideVolume.Ttilde else 0.0002389486260454002 * s_T_sens.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,916};
  modelica_boolean tmp0;
  tmp0 = Greater((data->localData[0]->realVars[308]/* mfr_mandata variable */) ,0.0);
  (data->localData[0]->realVars[220]/* boiler.boilerInsideVolume.T[2] variable */)  = (((!(data->simulationInfo->booleanParameter[0]/* boiler.boilerInsideVolume.allowFlowReversal PARAM */) ) || tmp0)?(data->localData[0]->realVars[0]/* boiler.boilerInsideVolume.Ttilde STATE(1) */) :(0.0002389486260454002) * ((data->localData[0]->realVars[542]/* s_T_sens.inlet.h_out variable */) ));
  TRACE_POP
}

void residualFunc920(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,920};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[542]/* s_T_sens.inlet.h_out variable */)  = xloc[0];
  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_916(data, threadData);
  res[0] = (4185.0) * ((data->localData[0]->realVars[220]/* boiler.boilerInsideVolume.T[2] variable */) ) - (data->localData[0]->realVars[542]/* s_T_sens.inlet.h_out variable */) ;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData920(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for s_T_sens.inlet.h_out */
  linearSystemData->nominal[i] = data->modelData->realVarsData[542].attribute /* s_T_sens.inlet.h_out */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[542].attribute /* s_T_sens.inlet.h_out */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[542].attribute /* s_T_sens.inlet.h_out */.max;
}


/*
equation index: 354
type: SIMPLE_ASSIGN
s_T_sens.inlet.h_out = 4185.0 * boiler.boilerInsideVolume.T[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  (data->localData[0]->realVars[542]/* s_T_sens.inlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[220]/* boiler.boilerInsideVolume.T[2] variable */) );
  TRACE_POP
}

void residualFunc358(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,358};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  modelica_boolean tmp0;
  (data->localData[0]->realVars[220]/* boiler.boilerInsideVolume.T[2] variable */)  = xloc[0];
  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_354(data, threadData);
  tmp0 = Greater((data->localData[0]->realVars[308]/* mfr_mandata variable */) ,0.0);
  res[0] = (((!(data->simulationInfo->booleanParameter[0]/* boiler.boilerInsideVolume.allowFlowReversal PARAM */) ) || tmp0)?(data->localData[0]->realVars[0]/* boiler.boilerInsideVolume.Ttilde STATE(1) */) :(0.0002389486260454002) * ((data->localData[0]->realVars[542]/* s_T_sens.inlet.h_out variable */) )) - (data->localData[0]->realVars[220]/* boiler.boilerInsideVolume.T[2] variable */) ;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData358(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for boiler.boilerInsideVolume.T[2] */
  linearSystemData->nominal[i] = data->modelData->realVarsData[220].attribute /* boiler.boilerInsideVolume.T[2] */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[220].attribute /* boiler.boilerInsideVolume.T[2] */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[220].attribute /* boiler.boilerInsideVolume.T[2] */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[2].equationIndex = 1406;
  linearSystemData[2].size = 1;
  linearSystemData[2].nnz = 0;
  linearSystemData[2].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[2].residualFunc = residualFunc1406;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].analyticalJacobianColumn = SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionJacLSJac149_column;
  linearSystemData[2].initialAnalyticalJacobian = SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_initialAnalyticJacobianLSJac149;
  linearSystemData[2].jacobianIndex = 3 /*jacInx*/;
  linearSystemData[2].setA = NULL;  //setLinearMatrixA1406;
  linearSystemData[2].setb = NULL;  //setLinearVectorb1406;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData1406;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[1].equationIndex = 920;
  linearSystemData[1].size = 1;
  linearSystemData[1].nnz = 0;
  linearSystemData[1].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[1].residualFunc = residualFunc920;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].analyticalJacobianColumn = SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionJacLSJac147_column;
  linearSystemData[1].initialAnalyticalJacobian = SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_initialAnalyticJacobianLSJac147;
  linearSystemData[1].jacobianIndex = 2 /*jacInx*/;
  linearSystemData[1].setA = NULL;  //setLinearMatrixA920;
  linearSystemData[1].setb = NULL;  //setLinearVectorb920;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData920;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[0].equationIndex = 358;
  linearSystemData[0].size = 1;
  linearSystemData[0].nnz = 0;
  linearSystemData[0].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[0].residualFunc = residualFunc358;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].analyticalJacobianColumn = SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionJacLSJac145_column;
  linearSystemData[0].initialAnalyticalJacobian = SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_initialAnalyticJacobianLSJac145;
  linearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  linearSystemData[0].setA = NULL;  //setLinearMatrixA358;
  linearSystemData[0].setb = NULL;  //setLinearVectorb358;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData358;
}

#if defined(__cplusplus)
}
#endif

