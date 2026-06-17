/* Jacobians 9 */
#include "SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_model.h"
#include "SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_12jac.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 356
type: SIMPLE_ASSIGN
s_T_sens.inlet.h_out.$pDERLSJac145.dummyVarLSJac145 = 4185.0 * boiler.boilerInsideVolume.T.SeedLSJac145[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_356(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,356};
  jacobian->tmpVars[0] /* s_T_sens.inlet.h_out.$pDERLSJac145.dummyVarLSJac145 JACOBIAN_DIFF_VAR */ = (4185.0) * (jacobian->seedVars[0] /* boiler.boilerInsideVolume.T.SeedLSJac145[2] SEED_VAR */);
  TRACE_POP
}

/*
equation index: 357
type: SIMPLE_ASSIGN
$res_LSJac145_1.$pDERLSJac145.dummyVarLSJac145 = (if not boiler.boilerInsideVolume.allowFlowReversal or mfr_mandata > 0.0 then 0.0 else 0.0002389486260454002 * s_T_sens.inlet.h_out.$pDERLSJac145.dummyVarLSJac145) - boiler.boilerInsideVolume.T.SeedLSJac145[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_357(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,357};
  modelica_boolean tmp0;
  tmp0 = Greater((data->localData[0]->realVars[308]/* mfr_mandata variable */) ,0.0);
  jacobian->resultVars[0] /* $res_LSJac145_1.$pDERLSJac145.dummyVarLSJac145 JACOBIAN_VAR */ = (((!(data->simulationInfo->booleanParameter[0]/* boiler.boilerInsideVolume.allowFlowReversal PARAM */) ) || tmp0)?0.0:(0.0002389486260454002) * (jacobian->tmpVars[0] /* s_T_sens.inlet.h_out.$pDERLSJac145.dummyVarLSJac145 JACOBIAN_DIFF_VAR */)) - jacobian->seedVars[0] /* boiler.boilerInsideVolume.T.SeedLSJac145[2] SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionJacLSJac145_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_INDEX_JAC_LSJac145;
  
  
  TRACE_POP
  return 0;
}

int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionJacLSJac145_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_INDEX_JAC_LSJac145;
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_356(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_357(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 821
type: SIMPLE_ASSIGN
$cse1 = max(mfr_load[5], load5.load.b)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_821(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,821};
  jacobian->tmpVars[16] /* $cse1 JACOBIAN_DIFF_VAR */ = fmax((data->localData[0]->realVars[307]/* mfr_load[5] variable */) ,(data->simulationInfo->realParameter[253]/* load5.load.b PARAM */) );
  TRACE_POP
}

/*
equation index: 822
type: SIMPLE_ASSIGN
$cse2 = max(mfr_load[3], load3.load.b)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_822(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,822};
  jacobian->tmpVars[15] /* $cse2 JACOBIAN_DIFF_VAR */ = fmax((data->localData[0]->realVars[305]/* mfr_load[3] variable */) ,(data->simulationInfo->realParameter[159]/* load3.load.b PARAM */) );
  TRACE_POP
}

/*
equation index: 823
type: SIMPLE_ASSIGN
$cse3 = max(-s34.m_flow, 1e-07)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_823(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,823};
  jacobian->tmpVars[14] /* $cse3 JACOBIAN_DIFF_VAR */ = fmax((-(data->localData[0]->realVars[487]/* s34.m_flow variable */) ),1e-07);
  TRACE_POP
}

/*
equation index: 824
type: SIMPLE_ASSIGN
$cse4 = max(s23.m_flow, 1e-07)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_824(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,824};
  jacobian->tmpVars[13] /* $cse4 JACOBIAN_DIFF_VAR */ = fmax((data->localData[0]->realVars[474]/* s23.m_flow variable */) ,1e-07);
  TRACE_POP
}

/*
equation index: 825
type: SIMPLE_ASSIGN
$cse5 = max(mfr_load[2], load2.load.b)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_825(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,825};
  jacobian->tmpVars[12] /* $cse5 JACOBIAN_DIFF_VAR */ = fmax((data->localData[0]->realVars[304]/* mfr_load[2] variable */) ,(data->simulationInfo->realParameter[112]/* load2.load.b PARAM */) );
  TRACE_POP
}

/*
equation index: 826
type: SIMPLE_ASSIGN
$cse6 = max(-s23.m_flow, 1e-07)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_826(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,826};
  jacobian->tmpVars[11] /* $cse6 JACOBIAN_DIFF_VAR */ = fmax((-(data->localData[0]->realVars[474]/* s23.m_flow variable */) ),1e-07);
  TRACE_POP
}

/*
equation index: 827
type: SIMPLE_ASSIGN
$cse7 = max(s12.m_flow, 1e-07)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_827(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,827};
  jacobian->tmpVars[10] /* $cse7 JACOBIAN_DIFF_VAR */ = fmax((data->localData[0]->realVars[448]/* s12.m_flow variable */) ,1e-07);
  TRACE_POP
}

/*
equation index: 828
type: SIMPLE_ASSIGN
$cse8 = max(mfr_load[1], load1.load.b)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_828(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,828};
  jacobian->tmpVars[9] /* $cse8 JACOBIAN_DIFF_VAR */ = fmax((data->localData[0]->realVars[303]/* mfr_load[1] variable */) ,(data->simulationInfo->realParameter[65]/* load1.load.b PARAM */) );
  TRACE_POP
}

/*
equation index: 829
type: SIMPLE_ASSIGN
$cse9 = max(r32.m_flow, 1e-07)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_829(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,829};
  jacobian->tmpVars[8] /* $cse9 JACOBIAN_DIFF_VAR */ = fmax((data->localData[0]->realVars[345]/* r32.m_flow variable */) ,1e-07);
  TRACE_POP
}

/*
equation index: 830
type: SIMPLE_ASSIGN
$cse10 = max(-r21.m_flow, 1e-07)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_830(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,830};
  jacobian->tmpVars[7] /* $cse10 JACOBIAN_DIFF_VAR */ = fmax((-(data->localData[0]->realVars[332]/* r21.m_flow variable */) ),1e-07);
  TRACE_POP
}

/*
equation index: 831
type: SIMPLE_ASSIGN
$cse11 = max(-r32.m_flow, 1e-07)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_831(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,831};
  jacobian->tmpVars[6] /* $cse11 JACOBIAN_DIFF_VAR */ = fmax((-(data->localData[0]->realVars[345]/* r32.m_flow variable */) ),1e-07);
  TRACE_POP
}

/*
equation index: 832
type: SIMPLE_ASSIGN
$cse12 = max(r43.m_flow, 1e-07)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_832(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,832};
  jacobian->tmpVars[5] /* $cse12 JACOBIAN_DIFF_VAR */ = fmax((data->localData[0]->realVars[358]/* r43.m_flow variable */) ,1e-07);
  TRACE_POP
}

/*
equation index: 833
type: SIMPLE_ASSIGN
$cse13 = max(-r61.m_flow, 1e-07)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_833(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 12;
  const int equationIndexes[2] = {1,833};
  jacobian->tmpVars[4] /* $cse13 JACOBIAN_DIFF_VAR */ = fmax((-(data->localData[0]->realVars[383]/* r61.m_flow variable */) ),1e-07);
  TRACE_POP
}

/*
equation index: 834
type: SIMPLE_ASSIGN
$cse14 = max(r76.m_flow, 1e-07)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_834(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 13;
  const int equationIndexes[2] = {1,834};
  jacobian->tmpVars[3] /* $cse14 JACOBIAN_DIFF_VAR */ = fmax((data->localData[0]->realVars[411]/* r76.m_flow variable */) ,1e-07);
  TRACE_POP
}

/*
equation index: 835
type: SIMPLE_ASSIGN
$cse15 = max(-s67.m_flow, 1e-07)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_835(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 14;
  const int equationIndexes[2] = {1,835};
  jacobian->tmpVars[2] /* $cse15 JACOBIAN_DIFF_VAR */ = fmax((-(data->localData[0]->realVars[526]/* s67.m_flow variable */) ),1e-07);
  TRACE_POP
}

/*
equation index: 836
type: SIMPLE_ASSIGN
$cse16 = max(s16.m_flow, 1e-07)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_836(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 15;
  const int equationIndexes[2] = {1,836};
  jacobian->tmpVars[1] /* $cse16 JACOBIAN_DIFF_VAR */ = fmax((data->localData[0]->realVars[461]/* s16.m_flow variable */) ,1e-07);
  TRACE_POP
}

/*
equation index: 837
type: SIMPLE_ASSIGN
$cse17 = max(mfr_load[4], load4.load.b)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_837(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 16;
  const int equationIndexes[2] = {1,837};
  jacobian->tmpVars[0] /* $cse17 JACOBIAN_DIFF_VAR */ = fmax((data->localData[0]->realVars[306]/* mfr_load[4] variable */) ,(data->simulationInfo->realParameter[206]/* load4.load.b PARAM */) );
  TRACE_POP
}

/*
equation index: 838
type: SIMPLE_ASSIGN
s16.m_flow.$pDERNLSJac146.dummyVarNLSJac146 = s67.m_flow.SeedNLSJac146 + mfr_load.SeedNLSJac146[4]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_838(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 17;
  const int equationIndexes[2] = {1,838};
  jacobian->tmpVars[72] /* s16.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[4] /* s67.m_flow.SeedNLSJac146 SEED_VAR */ + jacobian->seedVars[0] /* mfr_load.SeedNLSJac146[4] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 839
type: SIMPLE_ASSIGN
load4.inlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 = (((if noEvent((-s67.m_flow) > 1e-07) then -s67.m_flow.SeedNLSJac146 else 0.0) * s67.inlet.h_out + (if noEvent(s16.m_flow > 1e-07) then s16.m_flow.$pDERNLSJac146.dummyVarNLSJac146 else 0.0) * s16.outlet.h_out) * ($cse15 + $cse16) + ((-$cse15) * s67.inlet.h_out - $cse16 * s16.outlet.h_out) * ((if noEvent((-s67.m_flow) > 1e-07) then -s67.m_flow.SeedNLSJac146 else 0.0) + (if noEvent(s16.m_flow > 1e-07) then s16.m_flow.$pDERNLSJac146.dummyVarNLSJac146 else 0.0))) / ($cse15 + $cse16) ^ 2.0
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_839(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 18;
  const int equationIndexes[2] = {1,839};
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  tmp1 = Greater((-(data->localData[0]->realVars[526]/* s67.m_flow variable */) ),1e-07);
  tmp2 = Greater((data->localData[0]->realVars[461]/* s16.m_flow variable */) ,1e-07);
  tmp3 = Greater((-(data->localData[0]->realVars[526]/* s67.m_flow variable */) ),1e-07);
  tmp4 = Greater((data->localData[0]->realVars[461]/* s16.m_flow variable */) ,1e-07);
  tmp5 = jacobian->tmpVars[2] /* $cse15 JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* $cse16 JACOBIAN_DIFF_VAR */;
  jacobian->tmpVars[73] /* load4.inlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = DIVISION((((tmp1?(-jacobian->seedVars[4] /* s67.m_flow.SeedNLSJac146 SEED_VAR */):0.0)) * ((data->localData[0]->realVars[525]/* s67.inlet.h_out variable */) ) + ((tmp2?jacobian->tmpVars[72] /* s16.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */:0.0)) * ((data->localData[0]->realVars[462]/* s16.outlet.h_out variable */) )) * (jacobian->tmpVars[2] /* $cse15 JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[1] /* $cse16 JACOBIAN_DIFF_VAR */) + (((-jacobian->tmpVars[2] /* $cse15 JACOBIAN_DIFF_VAR */)) * ((data->localData[0]->realVars[525]/* s67.inlet.h_out variable */) ) - ((jacobian->tmpVars[1] /* $cse16 JACOBIAN_DIFF_VAR */) * ((data->localData[0]->realVars[462]/* s16.outlet.h_out variable */) ))) * ((tmp3?(-jacobian->seedVars[4] /* s67.m_flow.SeedNLSJac146 SEED_VAR */):0.0) + (tmp4?jacobian->tmpVars[72] /* s16.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */:0.0)),(tmp5 * tmp5),"($cse15 + $cse16) ^ 2.0");
  TRACE_POP
}

/*
equation index: 840
type: SIMPLE_ASSIGN
load4.outlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 = load4.inlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 - P_load4 * (if noEvent(mfr_load[4] > load4.load.b) then mfr_load.SeedNLSJac146[4] else 0.0) / $cse17 ^ 2.0
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_840(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 19;
  const int equationIndexes[2] = {1,840};
  modelica_boolean tmp6;
  modelica_real tmp7;
  tmp6 = Greater((data->localData[0]->realVars[306]/* mfr_load[4] variable */) ,(data->simulationInfo->realParameter[206]/* load4.load.b PARAM */) );
  tmp7 = jacobian->tmpVars[0] /* $cse17 JACOBIAN_DIFF_VAR */;
  jacobian->tmpVars[74] /* load4.outlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[73] /* load4.inlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ - (((data->localData[0]->realVars[198]/* P_load4 variable */) ) * (DIVISION((tmp6?jacobian->seedVars[0] /* mfr_load.SeedNLSJac146[4] SEED_VAR */:0.0),(tmp7 * tmp7),"$cse17 ^ 2.0")));
  TRACE_POP
}

/*
equation index: 841
type: SIMPLE_ASSIGN
r21.m_flow.$pDERNLSJac146.dummyVarNLSJac146 = r32.m_flow.SeedNLSJac146 + mfr_load.SeedNLSJac146[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_841(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 20;
  const int equationIndexes[2] = {1,841};
  jacobian->tmpVars[41] /* r21.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[1] /* r32.m_flow.SeedNLSJac146 SEED_VAR */ + jacobian->seedVars[2] /* mfr_load.SeedNLSJac146[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 842
type: SIMPLE_ASSIGN
load1.mfr_s.inlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 = (((if noEvent(r32.m_flow > 1e-07) then r32.m_flow.SeedNLSJac146 else 0.0) * r32.outlet.h_out + (if noEvent((-r21.m_flow) > 1e-07) then -r21.m_flow.$pDERNLSJac146.dummyVarNLSJac146 else 0.0) * r21.inlet.h_out) * ($cse9 + $cse10) + ((-$cse9) * r32.outlet.h_out - $cse10 * r21.inlet.h_out) * ((if noEvent(r32.m_flow > 1e-07) then r32.m_flow.SeedNLSJac146 else 0.0) + (if noEvent((-r21.m_flow) > 1e-07) then -r21.m_flow.$pDERNLSJac146.dummyVarNLSJac146 else 0.0))) / ($cse9 + $cse10) ^ 2.0
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_842(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 21;
  const int equationIndexes[2] = {1,842};
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  tmp8 = Greater((data->localData[0]->realVars[345]/* r32.m_flow variable */) ,1e-07);
  tmp9 = Greater((-(data->localData[0]->realVars[332]/* r21.m_flow variable */) ),1e-07);
  tmp10 = Greater((data->localData[0]->realVars[345]/* r32.m_flow variable */) ,1e-07);
  tmp11 = Greater((-(data->localData[0]->realVars[332]/* r21.m_flow variable */) ),1e-07);
  tmp12 = jacobian->tmpVars[8] /* $cse9 JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[7] /* $cse10 JACOBIAN_DIFF_VAR */;
  jacobian->tmpVars[42] /* load1.mfr_s.inlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = DIVISION((((tmp8?jacobian->seedVars[1] /* r32.m_flow.SeedNLSJac146 SEED_VAR */:0.0)) * ((data->localData[0]->realVars[346]/* r32.outlet.h_out variable */) ) + ((tmp9?(-jacobian->tmpVars[41] /* r21.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */):0.0)) * ((data->localData[0]->realVars[331]/* r21.inlet.h_out variable */) )) * (jacobian->tmpVars[8] /* $cse9 JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[7] /* $cse10 JACOBIAN_DIFF_VAR */) + (((-jacobian->tmpVars[8] /* $cse9 JACOBIAN_DIFF_VAR */)) * ((data->localData[0]->realVars[346]/* r32.outlet.h_out variable */) ) - ((jacobian->tmpVars[7] /* $cse10 JACOBIAN_DIFF_VAR */) * ((data->localData[0]->realVars[331]/* r21.inlet.h_out variable */) ))) * ((tmp10?jacobian->seedVars[1] /* r32.m_flow.SeedNLSJac146 SEED_VAR */:0.0) + (tmp11?(-jacobian->tmpVars[41] /* r21.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */):0.0)),(tmp12 * tmp12),"($cse9 + $cse10) ^ 2.0");
  TRACE_POP
}

/*
equation index: 843
type: SIMPLE_ASSIGN
s12.m_flow.$pDERNLSJac146.dummyVarNLSJac146 = s23.m_flow.SeedNLSJac146 + mfr_load.SeedNLSJac146[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_843(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 22;
  const int equationIndexes[2] = {1,843};
  jacobian->tmpVars[38] /* s12.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[3] /* s23.m_flow.SeedNLSJac146 SEED_VAR */ + jacobian->seedVars[2] /* mfr_load.SeedNLSJac146[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 844
type: SIMPLE_ASSIGN
load1.inlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 = (((if noEvent((-s23.m_flow) > 1e-07) then -s23.m_flow.SeedNLSJac146 else 0.0) * s23.inlet.h_out + (if noEvent(s12.m_flow > 1e-07) then s12.m_flow.$pDERNLSJac146.dummyVarNLSJac146 else 0.0) * s12.outlet.h_out) * ($cse6 + $cse7) + ((-$cse6) * s23.inlet.h_out - $cse7 * s12.outlet.h_out) * ((if noEvent((-s23.m_flow) > 1e-07) then -s23.m_flow.SeedNLSJac146 else 0.0) + (if noEvent(s12.m_flow > 1e-07) then s12.m_flow.$pDERNLSJac146.dummyVarNLSJac146 else 0.0))) / ($cse6 + $cse7) ^ 2.0
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_844(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 23;
  const int equationIndexes[2] = {1,844};
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_real tmp17;
  tmp13 = Greater((-(data->localData[0]->realVars[474]/* s23.m_flow variable */) ),1e-07);
  tmp14 = Greater((data->localData[0]->realVars[448]/* s12.m_flow variable */) ,1e-07);
  tmp15 = Greater((-(data->localData[0]->realVars[474]/* s23.m_flow variable */) ),1e-07);
  tmp16 = Greater((data->localData[0]->realVars[448]/* s12.m_flow variable */) ,1e-07);
  tmp17 = jacobian->tmpVars[11] /* $cse6 JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[10] /* $cse7 JACOBIAN_DIFF_VAR */;
  jacobian->tmpVars[39] /* load1.inlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = DIVISION((((tmp13?(-jacobian->seedVars[3] /* s23.m_flow.SeedNLSJac146 SEED_VAR */):0.0)) * ((data->localData[0]->realVars[473]/* s23.inlet.h_out variable */) ) + ((tmp14?jacobian->tmpVars[38] /* s12.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */:0.0)) * ((data->localData[0]->realVars[449]/* s12.outlet.h_out variable */) )) * (jacobian->tmpVars[11] /* $cse6 JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[10] /* $cse7 JACOBIAN_DIFF_VAR */) + (((-jacobian->tmpVars[11] /* $cse6 JACOBIAN_DIFF_VAR */)) * ((data->localData[0]->realVars[473]/* s23.inlet.h_out variable */) ) - ((jacobian->tmpVars[10] /* $cse7 JACOBIAN_DIFF_VAR */) * ((data->localData[0]->realVars[449]/* s12.outlet.h_out variable */) ))) * ((tmp15?(-jacobian->seedVars[3] /* s23.m_flow.SeedNLSJac146 SEED_VAR */):0.0) + (tmp16?jacobian->tmpVars[38] /* s12.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */:0.0)),(tmp17 * tmp17),"($cse6 + $cse7) ^ 2.0");
  TRACE_POP
}

/*
equation index: 845
type: SIMPLE_ASSIGN
load1.outlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 = load1.inlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 - P_load1 * (if noEvent(mfr_load[1] > load1.load.b) then mfr_load.SeedNLSJac146[1] else 0.0) / $cse8 ^ 2.0
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_845(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 24;
  const int equationIndexes[2] = {1,845};
  modelica_boolean tmp18;
  modelica_real tmp19;
  tmp18 = Greater((data->localData[0]->realVars[303]/* mfr_load[1] variable */) ,(data->simulationInfo->realParameter[65]/* load1.load.b PARAM */) );
  tmp19 = jacobian->tmpVars[9] /* $cse8 JACOBIAN_DIFF_VAR */;
  jacobian->tmpVars[40] /* load1.outlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[39] /* load1.inlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ - (((data->localData[0]->realVars[195]/* P_load1 variable */) ) * (DIVISION((tmp18?jacobian->seedVars[2] /* mfr_load.SeedNLSJac146[1] SEED_VAR */:0.0),(tmp19 * tmp19),"$cse8 ^ 2.0")));
  TRACE_POP
}

/*
equation index: 846
type: SIMPLE_ASSIGN
Tr_load.$pDERNLSJac146.dummyVarNLSJac146[1] = if mfr_load[1] > 0.0 then 0.0002389486260454002 * load1.outlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 else 0.0002389486260454002 * load1.mfr_s.inlet.h_out.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_846(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 25;
  const int equationIndexes[2] = {1,846};
  modelica_boolean tmp20;
  tmp20 = Greater((data->localData[0]->realVars[303]/* mfr_load[1] variable */) ,0.0);
  jacobian->tmpVars[43] /* Tr_load.$pDERNLSJac146.dummyVarNLSJac146[1] JACOBIAN_DIFF_VAR */ = (tmp20?(0.0002389486260454002) * (jacobian->tmpVars[40] /* load1.outlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */):(0.0002389486260454002) * (jacobian->tmpVars[42] /* load1.mfr_s.inlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 847
type: SIMPLE_ASSIGN
load1.loadValveControl.addP.y.$pDERNLSJac146.dummyVarNLSJac146 = load1.loadValveControl.addP.k2 * Tr_load.$pDERNLSJac146.dummyVarNLSJac146[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_847(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 26;
  const int equationIndexes[2] = {1,847};
  jacobian->tmpVars[44] /* load1.loadValveControl.addP.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[86]/* load1.loadValveControl.addP.k2 PARAM */) ) * (jacobian->tmpVars[43] /* Tr_load.$pDERNLSJac146.dummyVarNLSJac146[1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 848
type: SIMPLE_ASSIGN
load1.loadValveControl.P.y.$pDERNLSJac146.dummyVarNLSJac146 = load1.loadValveControl.P.k * load1.loadValveControl.addP.y.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_848(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 27;
  const int equationIndexes[2] = {1,848};
  jacobian->tmpVars[45] /* load1.loadValveControl.P.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[79]/* load1.loadValveControl.P.k PARAM */) ) * (jacobian->tmpVars[44] /* load1.loadValveControl.addP.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 849
type: SIMPLE_ASSIGN
load1.loadValveControl.addPID.y.$pDERNLSJac146.dummyVarNLSJac146 = load1.loadValveControl.addPID.k1 * load1.loadValveControl.P.y.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_849(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 28;
  const int equationIndexes[2] = {1,849};
  jacobian->tmpVars[46] /* load1.loadValveControl.addPID.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[88]/* load1.loadValveControl.addPID.k1 PARAM */) ) * (jacobian->tmpVars[45] /* load1.loadValveControl.P.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 850
type: SIMPLE_ASSIGN
load1.loadValveControl.gainPID.y.$pDERNLSJac146.dummyVarNLSJac146 = load1.loadValveControl.gainPID.k * load1.loadValveControl.addPID.y.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_850(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 29;
  const int equationIndexes[2] = {1,850};
  jacobian->tmpVars[47] /* load1.loadValveControl.gainPID.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[93]/* load1.loadValveControl.gainPID.k PARAM */) ) * (jacobian->tmpVars[46] /* load1.loadValveControl.addPID.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 851
type: SIMPLE_ASSIGN
load1.loadValveControl.y.$pDERNLSJac146.dummyVarNLSJac146 = load1.loadValveControl.addFF.k1 * load1.loadValveControl.gainPID.y.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_851(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 30;
  const int equationIndexes[2] = {1,851};
  jacobian->tmpVars[59] /* load1.loadValveControl.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[82]/* load1.loadValveControl.addFF.k1 PARAM */) ) * (jacobian->tmpVars[47] /* load1.loadValveControl.gainPID.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 852
type: SIMPLE_ASSIGN
mfr_mandata.$pDERNLSJac146.dummyVarNLSJac146 = s16.m_flow.$pDERNLSJac146.dummyVarNLSJac146 + s12.m_flow.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_852(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 31;
  const int equationIndexes[2] = {1,852};
  jacobian->tmpVars[81] /* mfr_mandata.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[72] /* s16.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[38] /* s12.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 853
type: SIMPLE_ASSIGN
s01.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 = (-s01.dp_nom) * mfr_mandata.$pDERNLSJac146.dummyVarNLSJac146 / s01.m_flow_nom
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_853(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 32;
  const int equationIndexes[2] = {1,853};
  jacobian->tmpVars[82] /* s01.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((-(data->simulationInfo->realParameter[515]/* s01.dp_nom PARAM */) )) * (DIVISION(jacobian->tmpVars[81] /* mfr_mandata.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */,(data->simulationInfo->realParameter[517]/* s01.m_flow_nom PARAM */) ,"s01.m_flow_nom"));
  TRACE_POP
}

/*
equation index: 854
type: SIMPLE_ASSIGN
load4.inlet.p.$pDERNLSJac146.dummyVarNLSJac146 = s01.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 - s16.dp_nom * s16.m_flow.$pDERNLSJac146.dummyVarNLSJac146 / s16.m_flow_nom
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_854(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 33;
  const int equationIndexes[2] = {1,854};
  jacobian->tmpVars[83] /* load4.inlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[82] /* s01.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ - (((data->simulationInfo->realParameter[557]/* s16.dp_nom PARAM */) ) * (DIVISION(jacobian->tmpVars[72] /* s16.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */,(data->simulationInfo->realParameter[559]/* s16.m_flow_nom PARAM */) ,"s16.m_flow_nom")));
  TRACE_POP
}

/*
equation index: 855
type: SIMPLE_ASSIGN
s47.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 = load4.inlet.p.$pDERNLSJac146.dummyVarNLSJac146 - s67.dp_nom * s67.m_flow.SeedNLSJac146 / s67.m_flow_nom
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_855(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 34;
  const int equationIndexes[2] = {1,855};
  jacobian->tmpVars[84] /* s47.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[83] /* load4.inlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ - (((data->simulationInfo->realParameter[662]/* s67.dp_nom PARAM */) ) * (DIVISION(jacobian->seedVars[4] /* s67.m_flow.SeedNLSJac146 SEED_VAR */,(data->simulationInfo->realParameter[664]/* s67.m_flow_nom PARAM */) ,"s67.m_flow_nom")));
  TRACE_POP
}

/*
equation index: 856
type: SIMPLE_ASSIGN
load5.inlet.p.$pDERNLSJac146.dummyVarNLSJac146 = s47.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 - s78.dp_nom * mfr_load.SeedNLSJac146[5] / s78.m_flow_nom
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_856(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 35;
  const int equationIndexes[2] = {1,856};
  jacobian->tmpVars[85] /* load5.inlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[84] /* s47.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ - (((data->simulationInfo->realParameter[683]/* s78.dp_nom PARAM */) ) * (DIVISION(jacobian->seedVars[6] /* mfr_load.SeedNLSJac146[5] SEED_VAR */,(data->simulationInfo->realParameter[685]/* s78.m_flow_nom PARAM */) ,"s78.m_flow_nom")));
  TRACE_POP
}

/*
equation index: 857
type: SIMPLE_ASSIGN
load1.inlet.p.$pDERNLSJac146.dummyVarNLSJac146 = s01.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 - s12.dp_nom * s12.m_flow.$pDERNLSJac146.dummyVarNLSJac146 / s12.m_flow_nom
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_857(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 36;
  const int equationIndexes[2] = {1,857};
  jacobian->tmpVars[87] /* load1.inlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[82] /* s01.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ - (((data->simulationInfo->realParameter[536]/* s12.dp_nom PARAM */) ) * (DIVISION(jacobian->tmpVars[38] /* s12.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */,(data->simulationInfo->realParameter[538]/* s12.m_flow_nom PARAM */) ,"s12.m_flow_nom")));
  TRACE_POP
}

/*
equation index: 858
type: SIMPLE_ASSIGN
load2.inlet.p.$pDERNLSJac146.dummyVarNLSJac146 = load1.inlet.p.$pDERNLSJac146.dummyVarNLSJac146 - s23.dp_nom * s23.m_flow.SeedNLSJac146 / s23.m_flow_nom
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_858(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 37;
  const int equationIndexes[2] = {1,858};
  jacobian->tmpVars[88] /* load2.inlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[87] /* load1.inlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ - (((data->simulationInfo->realParameter[578]/* s23.dp_nom PARAM */) ) * (DIVISION(jacobian->seedVars[3] /* s23.m_flow.SeedNLSJac146 SEED_VAR */,(data->simulationInfo->realParameter[580]/* s23.m_flow_nom PARAM */) ,"s23.m_flow_nom")));
  TRACE_POP
}

/*
equation index: 859
type: SIMPLE_ASSIGN
s47.m_flow.$pDERNLSJac146.dummyVarNLSJac146 = mfr_load.SeedNLSJac146[5] - s67.m_flow.SeedNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_859(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 38;
  const int equationIndexes[2] = {1,859};
  jacobian->tmpVars[33] /* s47.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[6] /* mfr_load.SeedNLSJac146[5] SEED_VAR */ - jacobian->seedVars[4] /* s67.m_flow.SeedNLSJac146 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 860
type: SIMPLE_ASSIGN
s34.m_flow.$pDERNLSJac146.dummyVarNLSJac146 = s47.m_flow.$pDERNLSJac146.dummyVarNLSJac146 + mfr_load.SeedNLSJac146[3]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_860(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 39;
  const int equationIndexes[2] = {1,860};
  jacobian->tmpVars[34] /* s34.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[33] /* s47.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[5] /* mfr_load.SeedNLSJac146[3] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 861
type: SIMPLE_ASSIGN
load2.inlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 = (((if noEvent((-s34.m_flow) > 1e-07) then -s34.m_flow.$pDERNLSJac146.dummyVarNLSJac146 else 0.0) * s34.inlet.h_out + (if noEvent(s23.m_flow > 1e-07) then s23.m_flow.SeedNLSJac146 else 0.0) * s23.outlet.h_out) * ($cse3 + $cse4) + ((-$cse3) * s34.inlet.h_out - $cse4 * s23.outlet.h_out) * ((if noEvent((-s34.m_flow) > 1e-07) then -s34.m_flow.$pDERNLSJac146.dummyVarNLSJac146 else 0.0) + (if noEvent(s23.m_flow > 1e-07) then s23.m_flow.SeedNLSJac146 else 0.0))) / ($cse3 + $cse4) ^ 2.0
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_861(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 40;
  const int equationIndexes[2] = {1,861};
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_real tmp25;
  tmp21 = Greater((-(data->localData[0]->realVars[487]/* s34.m_flow variable */) ),1e-07);
  tmp22 = Greater((data->localData[0]->realVars[474]/* s23.m_flow variable */) ,1e-07);
  tmp23 = Greater((-(data->localData[0]->realVars[487]/* s34.m_flow variable */) ),1e-07);
  tmp24 = Greater((data->localData[0]->realVars[474]/* s23.m_flow variable */) ,1e-07);
  tmp25 = jacobian->tmpVars[14] /* $cse3 JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[13] /* $cse4 JACOBIAN_DIFF_VAR */;
  jacobian->tmpVars[35] /* load2.inlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = DIVISION((((tmp21?(-jacobian->tmpVars[34] /* s34.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */):0.0)) * ((data->localData[0]->realVars[486]/* s34.inlet.h_out variable */) ) + ((tmp22?jacobian->seedVars[3] /* s23.m_flow.SeedNLSJac146 SEED_VAR */:0.0)) * ((data->localData[0]->realVars[475]/* s23.outlet.h_out variable */) )) * (jacobian->tmpVars[14] /* $cse3 JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[13] /* $cse4 JACOBIAN_DIFF_VAR */) + (((-jacobian->tmpVars[14] /* $cse3 JACOBIAN_DIFF_VAR */)) * ((data->localData[0]->realVars[486]/* s34.inlet.h_out variable */) ) - ((jacobian->tmpVars[13] /* $cse4 JACOBIAN_DIFF_VAR */) * ((data->localData[0]->realVars[475]/* s23.outlet.h_out variable */) ))) * ((tmp23?(-jacobian->tmpVars[34] /* s34.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */):0.0) + (tmp24?jacobian->seedVars[3] /* s23.m_flow.SeedNLSJac146 SEED_VAR */:0.0)),(tmp25 * tmp25),"($cse3 + $cse4) ^ 2.0");
  TRACE_POP
}

/*
equation index: 862
type: SIMPLE_ASSIGN
mfr_load.$pDERNLSJac146.dummyVarNLSJac146[2] = s23.m_flow.SeedNLSJac146 - s34.m_flow.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_862(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 41;
  const int equationIndexes[2] = {1,862};
  jacobian->tmpVars[36] /* mfr_load.$pDERNLSJac146.dummyVarNLSJac146[2] JACOBIAN_DIFF_VAR */ = jacobian->seedVars[3] /* s23.m_flow.SeedNLSJac146 SEED_VAR */ - jacobian->tmpVars[34] /* s34.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 863
type: SIMPLE_ASSIGN
load2.outlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 = load2.inlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 - P_load2 * (if noEvent(mfr_load[2] > load2.load.b) then mfr_load.$pDERNLSJac146.dummyVarNLSJac146[2] else 0.0) / $cse5 ^ 2.0
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_863(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 42;
  const int equationIndexes[2] = {1,863};
  modelica_boolean tmp26;
  modelica_real tmp27;
  tmp26 = Greater((data->localData[0]->realVars[304]/* mfr_load[2] variable */) ,(data->simulationInfo->realParameter[112]/* load2.load.b PARAM */) );
  tmp27 = jacobian->tmpVars[12] /* $cse5 JACOBIAN_DIFF_VAR */;
  jacobian->tmpVars[37] /* load2.outlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[35] /* load2.inlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ - (((data->localData[0]->realVars[196]/* P_load2 variable */) ) * (DIVISION((tmp26?jacobian->tmpVars[36] /* mfr_load.$pDERNLSJac146.dummyVarNLSJac146[2] JACOBIAN_DIFF_VAR */:0.0),(tmp27 * tmp27),"$cse5 ^ 2.0")));
  TRACE_POP
}

/*
equation index: 864
type: SIMPLE_ASSIGN
r43.m_flow.$pDERNLSJac146.dummyVarNLSJac146 = r32.m_flow.SeedNLSJac146 - mfr_load.$pDERNLSJac146.dummyVarNLSJac146[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_864(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 43;
  const int equationIndexes[2] = {1,864};
  jacobian->tmpVars[49] /* r43.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[1] /* r32.m_flow.SeedNLSJac146 SEED_VAR */ - jacobian->tmpVars[36] /* mfr_load.$pDERNLSJac146.dummyVarNLSJac146[2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 865
type: SIMPLE_ASSIGN
load2.mfr_s.inlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 = (((if noEvent((-r32.m_flow) > 1e-07) then -r32.m_flow.SeedNLSJac146 else 0.0) * r32.inlet.h_out + (if noEvent(r43.m_flow > 1e-07) then r43.m_flow.$pDERNLSJac146.dummyVarNLSJac146 else 0.0) * r43.outlet.h_out) * ($cse11 + $cse12) + ((-$cse11) * r32.inlet.h_out - $cse12 * r43.outlet.h_out) * ((if noEvent((-r32.m_flow) > 1e-07) then -r32.m_flow.SeedNLSJac146 else 0.0) + (if noEvent(r43.m_flow > 1e-07) then r43.m_flow.$pDERNLSJac146.dummyVarNLSJac146 else 0.0))) / ($cse11 + $cse12) ^ 2.0
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_865(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 44;
  const int equationIndexes[2] = {1,865};
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_real tmp32;
  tmp28 = Greater((-(data->localData[0]->realVars[345]/* r32.m_flow variable */) ),1e-07);
  tmp29 = Greater((data->localData[0]->realVars[358]/* r43.m_flow variable */) ,1e-07);
  tmp30 = Greater((-(data->localData[0]->realVars[345]/* r32.m_flow variable */) ),1e-07);
  tmp31 = Greater((data->localData[0]->realVars[358]/* r43.m_flow variable */) ,1e-07);
  tmp32 = jacobian->tmpVars[6] /* $cse11 JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[5] /* $cse12 JACOBIAN_DIFF_VAR */;
  jacobian->tmpVars[50] /* load2.mfr_s.inlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = DIVISION((((tmp28?(-jacobian->seedVars[1] /* r32.m_flow.SeedNLSJac146 SEED_VAR */):0.0)) * ((data->localData[0]->realVars[344]/* r32.inlet.h_out variable */) ) + ((tmp29?jacobian->tmpVars[49] /* r43.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */:0.0)) * ((data->localData[0]->realVars[359]/* r43.outlet.h_out variable */) )) * (jacobian->tmpVars[6] /* $cse11 JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[5] /* $cse12 JACOBIAN_DIFF_VAR */) + (((-jacobian->tmpVars[6] /* $cse11 JACOBIAN_DIFF_VAR */)) * ((data->localData[0]->realVars[344]/* r32.inlet.h_out variable */) ) - ((jacobian->tmpVars[5] /* $cse12 JACOBIAN_DIFF_VAR */) * ((data->localData[0]->realVars[359]/* r43.outlet.h_out variable */) ))) * ((tmp30?(-jacobian->seedVars[1] /* r32.m_flow.SeedNLSJac146 SEED_VAR */):0.0) + (tmp31?jacobian->tmpVars[49] /* r43.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */:0.0)),(tmp32 * tmp32),"($cse11 + $cse12) ^ 2.0");
  TRACE_POP
}

/*
equation index: 866
type: SIMPLE_ASSIGN
Tr_load.$pDERNLSJac146.dummyVarNLSJac146[2] = if mfr_load[2] > 0.0 then 0.0002389486260454002 * load2.outlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 else 0.0002389486260454002 * load2.mfr_s.inlet.h_out.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_866(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 45;
  const int equationIndexes[2] = {1,866};
  modelica_boolean tmp33;
  tmp33 = Greater((data->localData[0]->realVars[304]/* mfr_load[2] variable */) ,0.0);
  jacobian->tmpVars[51] /* Tr_load.$pDERNLSJac146.dummyVarNLSJac146[2] JACOBIAN_DIFF_VAR */ = (tmp33?(0.0002389486260454002) * (jacobian->tmpVars[37] /* load2.outlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */):(0.0002389486260454002) * (jacobian->tmpVars[50] /* load2.mfr_s.inlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 867
type: SIMPLE_ASSIGN
load2.loadValveControl.addP.y.$pDERNLSJac146.dummyVarNLSJac146 = load2.loadValveControl.addP.k2 * Tr_load.$pDERNLSJac146.dummyVarNLSJac146[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_867(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 46;
  const int equationIndexes[2] = {1,867};
  jacobian->tmpVars[52] /* load2.loadValveControl.addP.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[133]/* load2.loadValveControl.addP.k2 PARAM */) ) * (jacobian->tmpVars[51] /* Tr_load.$pDERNLSJac146.dummyVarNLSJac146[2] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 868
type: SIMPLE_ASSIGN
load2.loadValveControl.P.y.$pDERNLSJac146.dummyVarNLSJac146 = load2.loadValveControl.P.k * load2.loadValveControl.addP.y.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_868(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 47;
  const int equationIndexes[2] = {1,868};
  jacobian->tmpVars[53] /* load2.loadValveControl.P.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[126]/* load2.loadValveControl.P.k PARAM */) ) * (jacobian->tmpVars[52] /* load2.loadValveControl.addP.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 869
type: SIMPLE_ASSIGN
load2.loadValveControl.addPID.y.$pDERNLSJac146.dummyVarNLSJac146 = load2.loadValveControl.addPID.k1 * load2.loadValveControl.P.y.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_869(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 48;
  const int equationIndexes[2] = {1,869};
  jacobian->tmpVars[54] /* load2.loadValveControl.addPID.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[135]/* load2.loadValveControl.addPID.k1 PARAM */) ) * (jacobian->tmpVars[53] /* load2.loadValveControl.P.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 870
type: SIMPLE_ASSIGN
load2.loadValveControl.gainPID.y.$pDERNLSJac146.dummyVarNLSJac146 = load2.loadValveControl.gainPID.k * load2.loadValveControl.addPID.y.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_870(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 49;
  const int equationIndexes[2] = {1,870};
  jacobian->tmpVars[55] /* load2.loadValveControl.gainPID.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[140]/* load2.loadValveControl.gainPID.k PARAM */) ) * (jacobian->tmpVars[54] /* load2.loadValveControl.addPID.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 871
type: SIMPLE_ASSIGN
load2.loadValveControl.y.$pDERNLSJac146.dummyVarNLSJac146 = load2.loadValveControl.addFF.k1 * load2.loadValveControl.gainPID.y.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_871(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 50;
  const int equationIndexes[2] = {1,871};
  jacobian->tmpVars[60] /* load2.loadValveControl.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[129]/* load2.loadValveControl.addFF.k1 PARAM */) ) * (jacobian->tmpVars[55] /* load2.loadValveControl.gainPID.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 872
type: SIMPLE_ASSIGN
r74.m_flow.$pDERNLSJac146.dummyVarNLSJac146 = r43.m_flow.$pDERNLSJac146.dummyVarNLSJac146 - mfr_load.SeedNLSJac146[3]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_872(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 51;
  const int equationIndexes[2] = {1,872};
  jacobian->tmpVars[57] /* r74.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[49] /* r43.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[5] /* mfr_load.SeedNLSJac146[3] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 873
type: SIMPLE_ASSIGN
r76.m_flow.$pDERNLSJac146.dummyVarNLSJac146 = mfr_load.SeedNLSJac146[5] - r74.m_flow.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_873(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 52;
  const int equationIndexes[2] = {1,873};
  jacobian->tmpVars[58] /* r76.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[6] /* mfr_load.SeedNLSJac146[5] SEED_VAR */ - jacobian->tmpVars[57] /* r74.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 874
type: SIMPLE_ASSIGN
r61.m_flow.$pDERNLSJac146.dummyVarNLSJac146 = mfr_load.SeedNLSJac146[4] + r76.m_flow.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_874(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 53;
  const int equationIndexes[2] = {1,874};
  jacobian->tmpVars[61] /* r61.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[0] /* mfr_load.SeedNLSJac146[4] SEED_VAR */ + jacobian->tmpVars[58] /* r76.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 875
type: SIMPLE_ASSIGN
mfr_ritorno.$pDERNLSJac146.dummyVarNLSJac146 = r61.m_flow.$pDERNLSJac146.dummyVarNLSJac146 + r21.m_flow.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_875(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 54;
  const int equationIndexes[2] = {1,875};
  jacobian->tmpVars[63] /* mfr_ritorno.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[61] /* r61.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[41] /* r21.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 876
type: SIMPLE_ASSIGN
r61.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 = r10.dp_nom * mfr_ritorno.$pDERNLSJac146.dummyVarNLSJac146 / r10.m_flow_nom
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_876(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 55;
  const int equationIndexes[2] = {1,876};
  jacobian->tmpVars[64] /* r61.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[321]/* r10.dp_nom PARAM */) ) * (DIVISION(jacobian->tmpVars[63] /* mfr_ritorno.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */,(data->simulationInfo->realParameter[323]/* r10.m_flow_nom PARAM */) ,"r10.m_flow_nom"));
  TRACE_POP
}

/*
equation index: 877
type: SIMPLE_ASSIGN
load1.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 = r21.dp_nom * r21.m_flow.$pDERNLSJac146.dummyVarNLSJac146 / r21.m_flow_nom + r61.outlet.p.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_877(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 56;
  const int equationIndexes[2] = {1,877};
  jacobian->tmpVars[65] /* load1.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[343]/* r21.dp_nom PARAM */) ) * (DIVISION(jacobian->tmpVars[41] /* r21.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */,(data->simulationInfo->realParameter[345]/* r21.m_flow_nom PARAM */) ,"r21.m_flow_nom")) + jacobian->tmpVars[64] /* r61.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 878
type: SIMPLE_ASSIGN
load2.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 = r32.dp_nom * r32.m_flow.SeedNLSJac146 / r32.m_flow_nom + load1.outlet.p.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_878(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 57;
  const int equationIndexes[2] = {1,878};
  jacobian->tmpVars[66] /* load2.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[364]/* r32.dp_nom PARAM */) ) * (DIVISION(jacobian->seedVars[1] /* r32.m_flow.SeedNLSJac146 SEED_VAR */,(data->simulationInfo->realParameter[366]/* r32.m_flow_nom PARAM */) ,"r32.m_flow_nom")) + jacobian->tmpVars[65] /* load1.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 879
type: SIMPLE_ASSIGN
$res_NLSJac146_4.$pDERNLSJac146.dummyVarNLSJac146 = load1.loadValve1.m_nom * ((load1.loadValveControl.y + load1.loadValve1.theta_min) * (load1.inlet.p.$pDERNLSJac146.dummyVarNLSJac146 - load1.outlet.p.$pDERNLSJac146.dummyVarNLSJac146) * load1.loadValve1.theta_nom * load1.loadValve1.dp_nom / (load1.loadValve1.theta_nom * load1.loadValve1.dp_nom) ^ 2.0 + load1.loadValveControl.y.$pDERNLSJac146.dummyVarNLSJac146 * (load1.inlet.p - load1.outlet.p) / (load1.loadValve1.dp_nom * load1.loadValve1.theta_nom)) - mfr_load.SeedNLSJac146[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_879(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 58;
  const int equationIndexes[2] = {1,879};
  modelica_real tmp34;
  tmp34 = ((data->simulationInfo->realParameter[70]/* load1.loadValve1.theta_nom PARAM */) ) * ((data->simulationInfo->realParameter[67]/* load1.loadValve1.dp_nom PARAM */) );
  jacobian->resultVars[3] /* $res_NLSJac146_4.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_VAR */ = ((data->simulationInfo->realParameter[68]/* load1.loadValve1.m_nom PARAM */) ) * (((data->localData[0]->realVars[245]/* load1.loadValveControl.y variable */)  + (data->simulationInfo->realParameter[69]/* load1.loadValve1.theta_min PARAM */) ) * ((jacobian->tmpVars[87] /* load1.inlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[65] /* load1.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */) * (((data->simulationInfo->realParameter[70]/* load1.loadValve1.theta_nom PARAM */) ) * (DIVISION((data->simulationInfo->realParameter[67]/* load1.loadValve1.dp_nom PARAM */) ,(tmp34 * tmp34),"(load1.loadValve1.theta_nom * load1.loadValve1.dp_nom) ^ 2.0")))) + (jacobian->tmpVars[59] /* load1.loadValveControl.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */) * (DIVISION((data->localData[0]->realVars[236]/* load1.inlet.p variable */)  - (data->localData[0]->realVars[248]/* load1.outlet.p variable */) ,((data->simulationInfo->realParameter[67]/* load1.loadValve1.dp_nom PARAM */) ) * ((data->simulationInfo->realParameter[70]/* load1.loadValve1.theta_nom PARAM */) ),"load1.loadValve1.dp_nom * load1.loadValve1.theta_nom"))) - jacobian->seedVars[2] /* mfr_load.SeedNLSJac146[1] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 880
type: SIMPLE_ASSIGN
load4.mfr_s.inlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 = (((if noEvent((-r61.m_flow) > 1e-07) then -r61.m_flow.$pDERNLSJac146.dummyVarNLSJac146 else 0.0) * r61.inlet.h_out + (if noEvent(r76.m_flow > 1e-07) then r76.m_flow.$pDERNLSJac146.dummyVarNLSJac146 else 0.0) * r76.outlet.h_out) * ($cse13 + $cse14) + ((-$cse13) * r61.inlet.h_out - $cse14 * r76.outlet.h_out) * ((if noEvent((-r61.m_flow) > 1e-07) then -r61.m_flow.$pDERNLSJac146.dummyVarNLSJac146 else 0.0) + (if noEvent(r76.m_flow > 1e-07) then r76.m_flow.$pDERNLSJac146.dummyVarNLSJac146 else 0.0))) / ($cse13 + $cse14) ^ 2.0
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_880(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 59;
  const int equationIndexes[2] = {1,880};
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  modelica_real tmp39;
  tmp35 = Greater((-(data->localData[0]->realVars[383]/* r61.m_flow variable */) ),1e-07);
  tmp36 = Greater((data->localData[0]->realVars[411]/* r76.m_flow variable */) ,1e-07);
  tmp37 = Greater((-(data->localData[0]->realVars[383]/* r61.m_flow variable */) ),1e-07);
  tmp38 = Greater((data->localData[0]->realVars[411]/* r76.m_flow variable */) ,1e-07);
  tmp39 = jacobian->tmpVars[4] /* $cse13 JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[3] /* $cse14 JACOBIAN_DIFF_VAR */;
  jacobian->tmpVars[62] /* load4.mfr_s.inlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = DIVISION((((tmp35?(-jacobian->tmpVars[61] /* r61.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */):0.0)) * ((data->localData[0]->realVars[382]/* r61.inlet.h_out variable */) ) + ((tmp36?jacobian->tmpVars[58] /* r76.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */:0.0)) * ((data->localData[0]->realVars[412]/* r76.outlet.h_out variable */) )) * (jacobian->tmpVars[4] /* $cse13 JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[3] /* $cse14 JACOBIAN_DIFF_VAR */) + (((-jacobian->tmpVars[4] /* $cse13 JACOBIAN_DIFF_VAR */)) * ((data->localData[0]->realVars[382]/* r61.inlet.h_out variable */) ) - ((jacobian->tmpVars[3] /* $cse14 JACOBIAN_DIFF_VAR */) * ((data->localData[0]->realVars[412]/* r76.outlet.h_out variable */) ))) * ((tmp37?(-jacobian->tmpVars[61] /* r61.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */):0.0) + (tmp38?jacobian->tmpVars[58] /* r76.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */:0.0)),(tmp39 * tmp39),"($cse13 + $cse14) ^ 2.0");
  TRACE_POP
}

/*
equation index: 881
type: SIMPLE_ASSIGN
Tr_load.$pDERNLSJac146.dummyVarNLSJac146[4] = if mfr_load[4] > 0.0 then 0.0002389486260454002 * load4.outlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 else 0.0002389486260454002 * load4.mfr_s.inlet.h_out.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_881(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 60;
  const int equationIndexes[2] = {1,881};
  modelica_boolean tmp40;
  tmp40 = Greater((data->localData[0]->realVars[306]/* mfr_load[4] variable */) ,0.0);
  jacobian->tmpVars[75] /* Tr_load.$pDERNLSJac146.dummyVarNLSJac146[4] JACOBIAN_DIFF_VAR */ = (tmp40?(0.0002389486260454002) * (jacobian->tmpVars[74] /* load4.outlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */):(0.0002389486260454002) * (jacobian->tmpVars[62] /* load4.mfr_s.inlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 882
type: SIMPLE_ASSIGN
load4.loadValveControl.addP.y.$pDERNLSJac146.dummyVarNLSJac146 = load4.loadValveControl.addP.k2 * Tr_load.$pDERNLSJac146.dummyVarNLSJac146[4]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_882(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 61;
  const int equationIndexes[2] = {1,882};
  jacobian->tmpVars[76] /* load4.loadValveControl.addP.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[227]/* load4.loadValveControl.addP.k2 PARAM */) ) * (jacobian->tmpVars[75] /* Tr_load.$pDERNLSJac146.dummyVarNLSJac146[4] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 883
type: SIMPLE_ASSIGN
load4.loadValveControl.P.y.$pDERNLSJac146.dummyVarNLSJac146 = load4.loadValveControl.P.k * load4.loadValveControl.addP.y.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_883(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 62;
  const int equationIndexes[2] = {1,883};
  jacobian->tmpVars[77] /* load4.loadValveControl.P.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[220]/* load4.loadValveControl.P.k PARAM */) ) * (jacobian->tmpVars[76] /* load4.loadValveControl.addP.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 884
type: SIMPLE_ASSIGN
load4.loadValveControl.addPID.y.$pDERNLSJac146.dummyVarNLSJac146 = load4.loadValveControl.addPID.k1 * load4.loadValveControl.P.y.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_884(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 63;
  const int equationIndexes[2] = {1,884};
  jacobian->tmpVars[78] /* load4.loadValveControl.addPID.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[229]/* load4.loadValveControl.addPID.k1 PARAM */) ) * (jacobian->tmpVars[77] /* load4.loadValveControl.P.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 885
type: SIMPLE_ASSIGN
load4.loadValveControl.gainPID.y.$pDERNLSJac146.dummyVarNLSJac146 = load4.loadValveControl.gainPID.k * load4.loadValveControl.addPID.y.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_885(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 64;
  const int equationIndexes[2] = {1,885};
  jacobian->tmpVars[79] /* load4.loadValveControl.gainPID.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[234]/* load4.loadValveControl.gainPID.k PARAM */) ) * (jacobian->tmpVars[78] /* load4.loadValveControl.addPID.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 886
type: SIMPLE_ASSIGN
load4.loadValveControl.y.$pDERNLSJac146.dummyVarNLSJac146 = load4.loadValveControl.addFF.k1 * load4.loadValveControl.gainPID.y.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_886(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 65;
  const int equationIndexes[2] = {1,886};
  jacobian->tmpVars[90] /* load4.loadValveControl.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[223]/* load4.loadValveControl.addFF.k1 PARAM */) ) * (jacobian->tmpVars[79] /* load4.loadValveControl.gainPID.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 887
type: SIMPLE_ASSIGN
r74.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 = r43.dp_nom * r43.m_flow.$pDERNLSJac146.dummyVarNLSJac146 / r43.m_flow_nom + load2.outlet.p.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_887(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 66;
  const int equationIndexes[2] = {1,887};
  jacobian->tmpVars[67] /* r74.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[385]/* r43.dp_nom PARAM */) ) * (DIVISION(jacobian->tmpVars[49] /* r43.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */,(data->simulationInfo->realParameter[387]/* r43.m_flow_nom PARAM */) ,"r43.m_flow_nom")) + jacobian->tmpVars[66] /* load2.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 888
type: SIMPLE_ASSIGN
load3.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 = r54.dp_nom * mfr_load.SeedNLSJac146[3] / r54.m_flow_nom + r74.outlet.p.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_888(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 67;
  const int equationIndexes[2] = {1,888};
  jacobian->tmpVars[68] /* load3.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[406]/* r54.dp_nom PARAM */) ) * (DIVISION(jacobian->seedVars[5] /* mfr_load.SeedNLSJac146[3] SEED_VAR */,(data->simulationInfo->realParameter[408]/* r54.m_flow_nom PARAM */) ,"r54.m_flow_nom")) + jacobian->tmpVars[67] /* r74.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 889
type: SIMPLE_ASSIGN
r87.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 = r74.dp_nom * r74.m_flow.$pDERNLSJac146.dummyVarNLSJac146 / r74.m_flow_nom + r74.outlet.p.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_889(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 68;
  const int equationIndexes[2] = {1,889};
  jacobian->tmpVars[69] /* r87.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[448]/* r74.dp_nom PARAM */) ) * (DIVISION(jacobian->tmpVars[57] /* r74.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */,(data->simulationInfo->realParameter[450]/* r74.m_flow_nom PARAM */) ,"r74.m_flow_nom")) + jacobian->tmpVars[67] /* r74.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 890
type: SIMPLE_ASSIGN
load5.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 = r87.dp_nom * mfr_load.SeedNLSJac146[5] / r87.m_flow_nom + r87.outlet.p.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_890(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 69;
  const int equationIndexes[2] = {1,890};
  jacobian->tmpVars[70] /* load5.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[490]/* r87.dp_nom PARAM */) ) * (DIVISION(jacobian->seedVars[6] /* mfr_load.SeedNLSJac146[5] SEED_VAR */,(data->simulationInfo->realParameter[492]/* r87.m_flow_nom PARAM */) ,"r87.m_flow_nom")) + jacobian->tmpVars[69] /* r87.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 891
type: SIMPLE_ASSIGN
load4.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 = r87.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 - r76.dp_nom * r76.m_flow.$pDERNLSJac146.dummyVarNLSJac146 / r76.m_flow_nom
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_891(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 70;
  const int equationIndexes[2] = {1,891};
  jacobian->tmpVars[71] /* load4.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[69] /* r87.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ - (((data->simulationInfo->realParameter[469]/* r76.dp_nom PARAM */) ) * (DIVISION(jacobian->tmpVars[58] /* r76.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */,(data->simulationInfo->realParameter[471]/* r76.m_flow_nom PARAM */) ,"r76.m_flow_nom")));
  TRACE_POP
}

/*
equation index: 892
type: SIMPLE_ASSIGN
$res_NLSJac146_1.$pDERNLSJac146.dummyVarNLSJac146 = load4.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 + (-r61.outlet.p.$pDERNLSJac146.dummyVarNLSJac146) - r61.dp_nom * r61.m_flow.$pDERNLSJac146.dummyVarNLSJac146 / r61.m_flow_nom
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_892(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 71;
  const int equationIndexes[2] = {1,892};
  jacobian->resultVars[0] /* $res_NLSJac146_1.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_VAR */ = jacobian->tmpVars[71] /* load4.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ + (-jacobian->tmpVars[64] /* r61.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */) - (((data->simulationInfo->realParameter[427]/* r61.dp_nom PARAM */) ) * (DIVISION(jacobian->tmpVars[61] /* r61.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */,(data->simulationInfo->realParameter[429]/* r61.m_flow_nom PARAM */) ,"r61.m_flow_nom")));
  TRACE_POP
}

/*
equation index: 893
type: SIMPLE_ASSIGN
$res_NLSJac146_6.$pDERNLSJac146.dummyVarNLSJac146 = load4.loadValve1.m_nom * ((load4.loadValveControl.y + load4.loadValve1.theta_min) * (load4.inlet.p.$pDERNLSJac146.dummyVarNLSJac146 - load4.outlet.p.$pDERNLSJac146.dummyVarNLSJac146) * load4.loadValve1.theta_nom * load4.loadValve1.dp_nom / (load4.loadValve1.theta_nom * load4.loadValve1.dp_nom) ^ 2.0 + load4.loadValveControl.y.$pDERNLSJac146.dummyVarNLSJac146 * (load4.inlet.p - load4.outlet.p) / (load4.loadValve1.dp_nom * load4.loadValve1.theta_nom)) - mfr_load.SeedNLSJac146[4]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_893(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 72;
  const int equationIndexes[2] = {1,893};
  modelica_real tmp41;
  tmp41 = ((data->simulationInfo->realParameter[211]/* load4.loadValve1.theta_nom PARAM */) ) * ((data->simulationInfo->realParameter[208]/* load4.loadValve1.dp_nom PARAM */) );
  jacobian->resultVars[5] /* $res_NLSJac146_6.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_VAR */ = ((data->simulationInfo->realParameter[209]/* load4.loadValve1.m_nom PARAM */) ) * (((data->localData[0]->realVars[286]/* load4.loadValveControl.y variable */)  + (data->simulationInfo->realParameter[210]/* load4.loadValve1.theta_min PARAM */) ) * ((jacobian->tmpVars[83] /* load4.inlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[71] /* load4.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */) * (((data->simulationInfo->realParameter[211]/* load4.loadValve1.theta_nom PARAM */) ) * (DIVISION((data->simulationInfo->realParameter[208]/* load4.loadValve1.dp_nom PARAM */) ,(tmp41 * tmp41),"(load4.loadValve1.theta_nom * load4.loadValve1.dp_nom) ^ 2.0")))) + (jacobian->tmpVars[90] /* load4.loadValveControl.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */) * (DIVISION((data->localData[0]->realVars[277]/* load4.inlet.p variable */)  - (data->localData[0]->realVars[289]/* load4.outlet.p variable */) ,((data->simulationInfo->realParameter[208]/* load4.loadValve1.dp_nom PARAM */) ) * ((data->simulationInfo->realParameter[211]/* load4.loadValve1.theta_nom PARAM */) ),"load4.loadValve1.dp_nom * load4.loadValve1.theta_nom"))) - jacobian->seedVars[0] /* mfr_load.SeedNLSJac146[4] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 894
type: SIMPLE_ASSIGN
$res_NLSJac146_5.$pDERNLSJac146.dummyVarNLSJac146 = load2.loadValve1.m_nom * ((load2.loadValveControl.y + load2.loadValve1.theta_min) * (load2.inlet.p.$pDERNLSJac146.dummyVarNLSJac146 - load2.outlet.p.$pDERNLSJac146.dummyVarNLSJac146) * load2.loadValve1.theta_nom * load2.loadValve1.dp_nom / (load2.loadValve1.theta_nom * load2.loadValve1.dp_nom) ^ 2.0 + load2.loadValveControl.y.$pDERNLSJac146.dummyVarNLSJac146 * (load2.inlet.p - load2.outlet.p) / (load2.loadValve1.dp_nom * load2.loadValve1.theta_nom)) - mfr_load.$pDERNLSJac146.dummyVarNLSJac146[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_894(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 73;
  const int equationIndexes[2] = {1,894};
  modelica_real tmp42;
  tmp42 = ((data->simulationInfo->realParameter[117]/* load2.loadValve1.theta_nom PARAM */) ) * ((data->simulationInfo->realParameter[114]/* load2.loadValve1.dp_nom PARAM */) );
  jacobian->resultVars[4] /* $res_NLSJac146_5.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_VAR */ = ((data->simulationInfo->realParameter[115]/* load2.loadValve1.m_nom PARAM */) ) * (((data->localData[0]->realVars[259]/* load2.loadValveControl.y variable */)  + (data->simulationInfo->realParameter[116]/* load2.loadValve1.theta_min PARAM */) ) * ((jacobian->tmpVars[88] /* load2.inlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[66] /* load2.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */) * (((data->simulationInfo->realParameter[117]/* load2.loadValve1.theta_nom PARAM */) ) * (DIVISION((data->simulationInfo->realParameter[114]/* load2.loadValve1.dp_nom PARAM */) ,(tmp42 * tmp42),"(load2.loadValve1.theta_nom * load2.loadValve1.dp_nom) ^ 2.0")))) + (jacobian->tmpVars[60] /* load2.loadValveControl.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */) * (DIVISION((data->localData[0]->realVars[250]/* load2.inlet.p variable */)  - (data->localData[0]->realVars[262]/* load2.outlet.p variable */) ,((data->simulationInfo->realParameter[114]/* load2.loadValve1.dp_nom PARAM */) ) * ((data->simulationInfo->realParameter[117]/* load2.loadValve1.theta_nom PARAM */) ),"load2.loadValve1.dp_nom * load2.loadValve1.theta_nom"))) - jacobian->tmpVars[36] /* mfr_load.$pDERNLSJac146.dummyVarNLSJac146[2] JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 895
type: SIMPLE_ASSIGN
s34.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 = s47.dp_nom * s47.m_flow.$pDERNLSJac146.dummyVarNLSJac146 / s47.m_flow_nom + s47.outlet.p.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_895(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 74;
  const int equationIndexes[2] = {1,895};
  jacobian->tmpVars[86] /* s34.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[641]/* s47.dp_nom PARAM */) ) * (DIVISION(jacobian->tmpVars[33] /* s47.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */,(data->simulationInfo->realParameter[643]/* s47.m_flow_nom PARAM */) ,"s47.m_flow_nom")) + jacobian->tmpVars[84] /* s47.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 896
type: SIMPLE_ASSIGN
load3.inlet.p.$pDERNLSJac146.dummyVarNLSJac146 = s34.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 - s45.dp_nom * mfr_load.SeedNLSJac146[3] / s45.m_flow_nom
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_896(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 75;
  const int equationIndexes[2] = {1,896};
  jacobian->tmpVars[89] /* load3.inlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[86] /* s34.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ - (((data->simulationInfo->realParameter[620]/* s45.dp_nom PARAM */) ) * (DIVISION(jacobian->seedVars[5] /* mfr_load.SeedNLSJac146[3] SEED_VAR */,(data->simulationInfo->realParameter[622]/* s45.m_flow_nom PARAM */) ,"s45.m_flow_nom")));
  TRACE_POP
}

/*
equation index: 897
type: SIMPLE_ASSIGN
$res_NLSJac146_3.$pDERNLSJac146.dummyVarNLSJac146 = load2.inlet.p.$pDERNLSJac146.dummyVarNLSJac146 + (-s34.outlet.p.$pDERNLSJac146.dummyVarNLSJac146) - s34.dp_nom * s34.m_flow.$pDERNLSJac146.dummyVarNLSJac146 / s34.m_flow_nom
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_897(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 76;
  const int equationIndexes[2] = {1,897};
  jacobian->resultVars[2] /* $res_NLSJac146_3.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_VAR */ = jacobian->tmpVars[88] /* load2.inlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ + (-jacobian->tmpVars[86] /* s34.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */) - (((data->simulationInfo->realParameter[599]/* s34.dp_nom PARAM */) ) * (DIVISION(jacobian->tmpVars[34] /* s34.m_flow.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */,(data->simulationInfo->realParameter[601]/* s34.m_flow_nom PARAM */) ,"s34.m_flow_nom")));
  TRACE_POP
}

/*
equation index: 898
type: SIMPLE_ASSIGN
load3.outlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 = (-P_load3) * (if noEvent(mfr_load[3] > load3.load.b) then mfr_load.SeedNLSJac146[3] else 0.0) / $cse2 ^ 2.0
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_898(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 77;
  const int equationIndexes[2] = {1,898};
  modelica_boolean tmp43;
  modelica_real tmp44;
  tmp43 = Greater((data->localData[0]->realVars[305]/* mfr_load[3] variable */) ,(data->simulationInfo->realParameter[159]/* load3.load.b PARAM */) );
  tmp44 = jacobian->tmpVars[15] /* $cse2 JACOBIAN_DIFF_VAR */;
  jacobian->tmpVars[25] /* load3.outlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((-(data->localData[0]->realVars[197]/* P_load3 variable */) )) * (DIVISION((tmp43?jacobian->seedVars[5] /* mfr_load.SeedNLSJac146[3] SEED_VAR */:0.0),(tmp44 * tmp44),"$cse2 ^ 2.0"));
  TRACE_POP
}

/*
equation index: 899
type: SIMPLE_ASSIGN
Tr_load.$pDERNLSJac146.dummyVarNLSJac146[3] = if mfr_load[3] > 0.0 then 0.0002389486260454002 * load3.outlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 else 0.0
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_899(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 78;
  const int equationIndexes[2] = {1,899};
  modelica_boolean tmp45;
  tmp45 = Greater((data->localData[0]->realVars[305]/* mfr_load[3] variable */) ,0.0);
  jacobian->tmpVars[26] /* Tr_load.$pDERNLSJac146.dummyVarNLSJac146[3] JACOBIAN_DIFF_VAR */ = (tmp45?(0.0002389486260454002) * (jacobian->tmpVars[25] /* load3.outlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */):0.0);
  TRACE_POP
}

/*
equation index: 900
type: SIMPLE_ASSIGN
load3.loadValveControl.addP.y.$pDERNLSJac146.dummyVarNLSJac146 = load3.loadValveControl.addP.k2 * Tr_load.$pDERNLSJac146.dummyVarNLSJac146[3]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_900(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 79;
  const int equationIndexes[2] = {1,900};
  jacobian->tmpVars[27] /* load3.loadValveControl.addP.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[180]/* load3.loadValveControl.addP.k2 PARAM */) ) * (jacobian->tmpVars[26] /* Tr_load.$pDERNLSJac146.dummyVarNLSJac146[3] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 901
type: SIMPLE_ASSIGN
load3.loadValveControl.P.y.$pDERNLSJac146.dummyVarNLSJac146 = load3.loadValveControl.P.k * load3.loadValveControl.addP.y.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_901(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 80;
  const int equationIndexes[2] = {1,901};
  jacobian->tmpVars[28] /* load3.loadValveControl.P.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[173]/* load3.loadValveControl.P.k PARAM */) ) * (jacobian->tmpVars[27] /* load3.loadValveControl.addP.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 902
type: SIMPLE_ASSIGN
load3.loadValveControl.addPID.y.$pDERNLSJac146.dummyVarNLSJac146 = load3.loadValveControl.addPID.k1 * load3.loadValveControl.P.y.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_902(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 81;
  const int equationIndexes[2] = {1,902};
  jacobian->tmpVars[29] /* load3.loadValveControl.addPID.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[182]/* load3.loadValveControl.addPID.k1 PARAM */) ) * (jacobian->tmpVars[28] /* load3.loadValveControl.P.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 903
type: SIMPLE_ASSIGN
load3.loadValveControl.gainPID.y.$pDERNLSJac146.dummyVarNLSJac146 = load3.loadValveControl.gainPID.k * load3.loadValveControl.addPID.y.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_903(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 82;
  const int equationIndexes[2] = {1,903};
  jacobian->tmpVars[30] /* load3.loadValveControl.gainPID.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[187]/* load3.loadValveControl.gainPID.k PARAM */) ) * (jacobian->tmpVars[29] /* load3.loadValveControl.addPID.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 904
type: SIMPLE_ASSIGN
load3.loadValveControl.y.$pDERNLSJac146.dummyVarNLSJac146 = load3.loadValveControl.addFF.k1 * load3.loadValveControl.gainPID.y.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_904(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 83;
  const int equationIndexes[2] = {1,904};
  jacobian->tmpVars[32] /* load3.loadValveControl.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[176]/* load3.loadValveControl.addFF.k1 PARAM */) ) * (jacobian->tmpVars[30] /* load3.loadValveControl.gainPID.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 905
type: SIMPLE_ASSIGN
$res_NLSJac146_2.$pDERNLSJac146.dummyVarNLSJac146 = load3.loadValve1.m_nom * ((load3.loadValveControl.y + load3.loadValve1.theta_min) * (load3.inlet.p.$pDERNLSJac146.dummyVarNLSJac146 - load3.outlet.p.$pDERNLSJac146.dummyVarNLSJac146) * load3.loadValve1.theta_nom * load3.loadValve1.dp_nom / (load3.loadValve1.theta_nom * load3.loadValve1.dp_nom) ^ 2.0 + load3.loadValveControl.y.$pDERNLSJac146.dummyVarNLSJac146 * (load3.inlet.p - load3.outlet.p) / (load3.loadValve1.dp_nom * load3.loadValve1.theta_nom)) - mfr_load.SeedNLSJac146[3]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_905(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 84;
  const int equationIndexes[2] = {1,905};
  modelica_real tmp46;
  tmp46 = ((data->simulationInfo->realParameter[164]/* load3.loadValve1.theta_nom PARAM */) ) * ((data->simulationInfo->realParameter[161]/* load3.loadValve1.dp_nom PARAM */) );
  jacobian->resultVars[1] /* $res_NLSJac146_2.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_VAR */ = ((data->simulationInfo->realParameter[162]/* load3.loadValve1.m_nom PARAM */) ) * (((data->localData[0]->realVars[273]/* load3.loadValveControl.y variable */)  + (data->simulationInfo->realParameter[163]/* load3.loadValve1.theta_min PARAM */) ) * ((jacobian->tmpVars[89] /* load3.inlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[68] /* load3.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */) * (((data->simulationInfo->realParameter[164]/* load3.loadValve1.theta_nom PARAM */) ) * (DIVISION((data->simulationInfo->realParameter[161]/* load3.loadValve1.dp_nom PARAM */) ,(tmp46 * tmp46),"(load3.loadValve1.theta_nom * load3.loadValve1.dp_nom) ^ 2.0")))) + (jacobian->tmpVars[32] /* load3.loadValveControl.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */) * (DIVISION((data->localData[0]->realVars[264]/* load3.inlet.p variable */)  - (data->localData[0]->realVars[275]/* load3.outlet.p variable */) ,((data->simulationInfo->realParameter[161]/* load3.loadValve1.dp_nom PARAM */) ) * ((data->simulationInfo->realParameter[164]/* load3.loadValve1.theta_nom PARAM */) ),"load3.loadValve1.dp_nom * load3.loadValve1.theta_nom"))) - jacobian->seedVars[5] /* mfr_load.SeedNLSJac146[3] SEED_VAR */;
  TRACE_POP
}

/*
equation index: 906
type: SIMPLE_ASSIGN
load5.outlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 = (-P_load5) * (if noEvent(mfr_load[5] > load5.load.b) then mfr_load.SeedNLSJac146[5] else 0.0) / $cse1 ^ 2.0
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_906(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 85;
  const int equationIndexes[2] = {1,906};
  modelica_boolean tmp47;
  modelica_real tmp48;
  tmp47 = Greater((data->localData[0]->realVars[307]/* mfr_load[5] variable */) ,(data->simulationInfo->realParameter[253]/* load5.load.b PARAM */) );
  tmp48 = jacobian->tmpVars[16] /* $cse1 JACOBIAN_DIFF_VAR */;
  jacobian->tmpVars[17] /* load5.outlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((-(data->localData[0]->realVars[199]/* P_load5 variable */) )) * (DIVISION((tmp47?jacobian->seedVars[6] /* mfr_load.SeedNLSJac146[5] SEED_VAR */:0.0),(tmp48 * tmp48),"$cse1 ^ 2.0"));
  TRACE_POP
}

/*
equation index: 907
type: SIMPLE_ASSIGN
Tr_load.$pDERNLSJac146.dummyVarNLSJac146[5] = if mfr_load[5] > 0.0 then 0.0002389486260454002 * load5.outlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 else 0.0
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_907(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 86;
  const int equationIndexes[2] = {1,907};
  modelica_boolean tmp49;
  tmp49 = Greater((data->localData[0]->realVars[307]/* mfr_load[5] variable */) ,0.0);
  jacobian->tmpVars[18] /* Tr_load.$pDERNLSJac146.dummyVarNLSJac146[5] JACOBIAN_DIFF_VAR */ = (tmp49?(0.0002389486260454002) * (jacobian->tmpVars[17] /* load5.outlet.h_out.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */):0.0);
  TRACE_POP
}

/*
equation index: 908
type: SIMPLE_ASSIGN
load5.loadValveControl.addP.y.$pDERNLSJac146.dummyVarNLSJac146 = load5.loadValveControl.addP.k2 * Tr_load.$pDERNLSJac146.dummyVarNLSJac146[5]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_908(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 87;
  const int equationIndexes[2] = {1,908};
  jacobian->tmpVars[19] /* load5.loadValveControl.addP.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[274]/* load5.loadValveControl.addP.k2 PARAM */) ) * (jacobian->tmpVars[18] /* Tr_load.$pDERNLSJac146.dummyVarNLSJac146[5] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 909
type: SIMPLE_ASSIGN
load5.loadValveControl.P.y.$pDERNLSJac146.dummyVarNLSJac146 = load5.loadValveControl.P.k * load5.loadValveControl.addP.y.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_909(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 88;
  const int equationIndexes[2] = {1,909};
  jacobian->tmpVars[20] /* load5.loadValveControl.P.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[267]/* load5.loadValveControl.P.k PARAM */) ) * (jacobian->tmpVars[19] /* load5.loadValveControl.addP.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 910
type: SIMPLE_ASSIGN
load5.loadValveControl.addPID.y.$pDERNLSJac146.dummyVarNLSJac146 = load5.loadValveControl.addPID.k1 * load5.loadValveControl.P.y.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_910(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 89;
  const int equationIndexes[2] = {1,910};
  jacobian->tmpVars[21] /* load5.loadValveControl.addPID.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[276]/* load5.loadValveControl.addPID.k1 PARAM */) ) * (jacobian->tmpVars[20] /* load5.loadValveControl.P.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 911
type: SIMPLE_ASSIGN
load5.loadValveControl.gainPID.y.$pDERNLSJac146.dummyVarNLSJac146 = load5.loadValveControl.gainPID.k * load5.loadValveControl.addPID.y.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_911(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 90;
  const int equationIndexes[2] = {1,911};
  jacobian->tmpVars[22] /* load5.loadValveControl.gainPID.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[281]/* load5.loadValveControl.gainPID.k PARAM */) ) * (jacobian->tmpVars[21] /* load5.loadValveControl.addPID.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 912
type: SIMPLE_ASSIGN
load5.loadValveControl.y.$pDERNLSJac146.dummyVarNLSJac146 = load5.loadValveControl.addFF.k1 * load5.loadValveControl.gainPID.y.$pDERNLSJac146.dummyVarNLSJac146
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_912(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 91;
  const int equationIndexes[2] = {1,912};
  jacobian->tmpVars[24] /* load5.loadValveControl.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ = ((data->simulationInfo->realParameter[270]/* load5.loadValveControl.addFF.k1 PARAM */) ) * (jacobian->tmpVars[22] /* load5.loadValveControl.gainPID.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 913
type: SIMPLE_ASSIGN
$res_NLSJac146_7.$pDERNLSJac146.dummyVarNLSJac146 = load5.loadValve1.m_nom * ((load5.loadValveControl.y + load5.loadValve1.theta_min) * (load5.inlet.p.$pDERNLSJac146.dummyVarNLSJac146 - load5.outlet.p.$pDERNLSJac146.dummyVarNLSJac146) * load5.loadValve1.theta_nom * load5.loadValve1.dp_nom / (load5.loadValve1.theta_nom * load5.loadValve1.dp_nom) ^ 2.0 + load5.loadValveControl.y.$pDERNLSJac146.dummyVarNLSJac146 * (load5.inlet.p - load5.outlet.p) / (load5.loadValve1.dp_nom * load5.loadValve1.theta_nom)) - mfr_load.SeedNLSJac146[5]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_913(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 92;
  const int equationIndexes[2] = {1,913};
  modelica_real tmp50;
  tmp50 = ((data->simulationInfo->realParameter[258]/* load5.loadValve1.theta_nom PARAM */) ) * ((data->simulationInfo->realParameter[255]/* load5.loadValve1.dp_nom PARAM */) );
  jacobian->resultVars[6] /* $res_NLSJac146_7.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_VAR */ = ((data->simulationInfo->realParameter[256]/* load5.loadValve1.m_nom PARAM */) ) * (((data->localData[0]->realVars[300]/* load5.loadValveControl.y variable */)  + (data->simulationInfo->realParameter[257]/* load5.loadValve1.theta_min PARAM */) ) * ((jacobian->tmpVars[85] /* load5.inlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[70] /* load5.outlet.p.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */) * (((data->simulationInfo->realParameter[258]/* load5.loadValve1.theta_nom PARAM */) ) * (DIVISION((data->simulationInfo->realParameter[255]/* load5.loadValve1.dp_nom PARAM */) ,(tmp50 * tmp50),"(load5.loadValve1.theta_nom * load5.loadValve1.dp_nom) ^ 2.0")))) + (jacobian->tmpVars[24] /* load5.loadValveControl.y.$pDERNLSJac146.dummyVarNLSJac146 JACOBIAN_DIFF_VAR */) * (DIVISION((data->localData[0]->realVars[291]/* load5.inlet.p variable */)  - (data->localData[0]->realVars[302]/* load5.outlet.p variable */) ,((data->simulationInfo->realParameter[255]/* load5.loadValve1.dp_nom PARAM */) ) * ((data->simulationInfo->realParameter[258]/* load5.loadValve1.theta_nom PARAM */) ),"load5.loadValve1.dp_nom * load5.loadValve1.theta_nom"))) - jacobian->seedVars[6] /* mfr_load.SeedNLSJac146[5] SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionJacNLSJac146_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_INDEX_JAC_NLSJac146;
  
  
  TRACE_POP
  return 0;
}

int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionJacNLSJac146_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_INDEX_JAC_NLSJac146;
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_821(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_822(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_823(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_824(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_825(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_826(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_827(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_828(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_829(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_830(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_831(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_832(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_833(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_834(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_835(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_836(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_837(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_838(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_839(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_840(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_841(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_842(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_843(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_844(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_845(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_846(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_847(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_848(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_849(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_850(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_851(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_852(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_853(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_854(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_855(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_856(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_857(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_858(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_859(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_860(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_861(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_862(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_863(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_864(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_865(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_866(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_867(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_868(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_869(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_870(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_871(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_872(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_873(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_874(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_875(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_876(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_877(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_878(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_879(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_880(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_881(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_882(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_883(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_884(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_885(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_886(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_887(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_888(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_889(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_890(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_891(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_892(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_893(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_894(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_895(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_896(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_897(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_898(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_899(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_900(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_901(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_902(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_903(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_904(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_905(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_906(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_907(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_908(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_909(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_910(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_911(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_912(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_913(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 918
type: SIMPLE_ASSIGN
boiler.boilerInsideVolume.T.$pDERLSJac147.dummyVarLSJac147[2] = if not boiler.boilerInsideVolume.allowFlowReversal or mfr_mandata > 0.0 then 0.0 else 0.0002389486260454002 * s_T_sens.inlet.h_out.SeedLSJac147
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_918(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,918};
  modelica_boolean tmp51;
  tmp51 = Greater((data->localData[0]->realVars[308]/* mfr_mandata variable */) ,0.0);
  jacobian->tmpVars[0] /* boiler.boilerInsideVolume.T.$pDERLSJac147.dummyVarLSJac147[2] JACOBIAN_DIFF_VAR */ = (((!(data->simulationInfo->booleanParameter[0]/* boiler.boilerInsideVolume.allowFlowReversal PARAM */) ) || tmp51)?0.0:(0.0002389486260454002) * (jacobian->seedVars[0] /* s_T_sens.inlet.h_out.SeedLSJac147 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 919
type: SIMPLE_ASSIGN
$res_LSJac147_1.$pDERLSJac147.dummyVarLSJac147 = 4185.0 * boiler.boilerInsideVolume.T.$pDERLSJac147.dummyVarLSJac147[2] - s_T_sens.inlet.h_out.SeedLSJac147
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_919(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,919};
  jacobian->resultVars[0] /* $res_LSJac147_1.$pDERLSJac147.dummyVarLSJac147 JACOBIAN_VAR */ = (4185.0) * (jacobian->tmpVars[0] /* boiler.boilerInsideVolume.T.$pDERLSJac147.dummyVarLSJac147[2] JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* s_T_sens.inlet.h_out.SeedLSJac147 SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionJacLSJac147_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_INDEX_JAC_LSJac147;
  
  
  TRACE_POP
  return 0;
}

int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionJacLSJac147_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_INDEX_JAC_LSJac147;
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_918(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_919(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 1404
type: SIMPLE_ASSIGN
boiler.boilerInsideVolume.T.$pDERLSJac149.dummyVarLSJac149[2] = if not boiler.boilerInsideVolume.allowFlowReversal or mfr_mandata > 0.0 then 0.0 else 0.0002389486260454002 * s_T_sens.inlet.h_out.SeedLSJac149
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1404(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,1404};
  modelica_boolean tmp52;
  relationhysteresis(data, &tmp52, (data->localData[0]->realVars[308]/* mfr_mandata variable */) , 0.0, 17, Greater, GreaterZC);
  jacobian->tmpVars[0] /* boiler.boilerInsideVolume.T.$pDERLSJac149.dummyVarLSJac149[2] JACOBIAN_DIFF_VAR */ = (((!(data->simulationInfo->booleanParameter[0]/* boiler.boilerInsideVolume.allowFlowReversal PARAM */) ) || tmp52)?0.0:(0.0002389486260454002) * (jacobian->seedVars[0] /* s_T_sens.inlet.h_out.SeedLSJac149 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 1405
type: SIMPLE_ASSIGN
$res_LSJac149_1.$pDERLSJac149.dummyVarLSJac149 = 4185.0 * boiler.boilerInsideVolume.T.$pDERLSJac149.dummyVarLSJac149[2] - s_T_sens.inlet.h_out.SeedLSJac149
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1405(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,1405};
  jacobian->resultVars[0] /* $res_LSJac149_1.$pDERLSJac149.dummyVarLSJac149 JACOBIAN_VAR */ = (4185.0) * (jacobian->tmpVars[0] /* boiler.boilerInsideVolume.T.$pDERLSJac149.dummyVarLSJac149[2] JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* s_T_sens.inlet.h_out.SeedLSJac149 SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionJacLSJac149_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_INDEX_JAC_LSJac149;
  
  
  TRACE_POP
  return 0;
}

int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionJacLSJac149_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_INDEX_JAC_LSJac149;
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1404(data, threadData, jacobian, parentJacobian);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1405(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionJacA_constantEqns(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_initialAnalyticJacobianLSJac145(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 2;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(2,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(1*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNonZeros = 1;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 1;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_initialAnalyticJacobianNLSJac146(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+7] = {0,7,6,7,7,7,7,7};
  const int rowIndex[48] = {0,1,2,3,4,5,6,0,1,3,4,5,6,0,1,2,3,4,5,6,0,1,2,3,4,5,6,0,1,2,3,4,5,6,0,1,2,3,4,5,6,0,1,2,3,4,5,6};
  int i = 0;
  
  jacobian->sizeCols = 7;
  jacobian->sizeRows = 7;
  jacobian->sizeTmpVars = 98;
  jacobian->seedVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(98,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((7+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(48*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNonZeros = 48;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(7*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 7;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (7+1)*sizeof(unsigned int));
  
  for(i=2;i<7+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 48*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[6] = 1;
  jacobian->sparsePattern->colorCols[5] = 2;
  jacobian->sparsePattern->colorCols[4] = 3;
  jacobian->sparsePattern->colorCols[3] = 4;
  jacobian->sparsePattern->colorCols[2] = 5;
  jacobian->sparsePattern->colorCols[1] = 6;
  jacobian->sparsePattern->colorCols[0] = 7;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_initialAnalyticJacobianLSJac147(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 2;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(2,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(1*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNonZeros = 1;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 1;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_initialAnalyticJacobianLSJac149(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 2;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(2,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(1*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNonZeros = 1;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 1;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}
int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+75] = {0,4,3,2,3,3,2,2,40,5,2,2,40,40,2,2,5,40,2,2,40,5,2,2,40,5,2,2,5,5,2,2,5,40,2,2,40,5,2,2,3,4,2,2,4,40,2,2,4,40,2,2,40,40,2,2,40,5,2,2,3,40,2,2,5,5,2,2,40,5,2,2,3,40,2,2};
  const int rowIndex[808] = {0,1,2,39,0,1,2,0,2,3,4,5,0,4,6,3,5,4,6,0,1,2,3,4,7,8,9,11,12,15,16,19,20,23,24,27,28,31,32,35,36,39,40,43,44,47,48,51,52,55,56,59,60,63,64,67,68,71,72,3,7,8,10,24,7,9,8,10,0,1,2,3,4,7,8,11,12,13,15,16,19,20,23,24,27,28,31,32,35,36,39,40,43,44,47,48,51,52,55,56,59,60,63,64,67,68,71,72,0,1,2,3,4,7,8,11,12,14,15,16,19,20,23,24,27,28,31,32,35,36,39,40,43,44,47,48,51,52,55,56,59,60,63,64,67,68,71,72,11,13,12,14,15,16,17,20,28,0,1,2,3,4,7,8,11,12,15,16,18,19,20,23,24,27,28,31,32,35,36,39,40,43,44,47,48,51,52,55,56,59,60,63,64,67,68,71,72,15,17,16,18,0,1,2,3,4,7,8,11,12,15,16,19,20,21,23,24,27,28,31,32,35,36,39,40,43,44,47,48,51,52,55,56,59,60,63,64,67,68,71,72,15,19,20,22,28,19,21,20,22,0,1,2,3,4,7,8,11,12,15,16,19,20,23,24,25,27,28,31,32,35,36,39,40,43,44,47,48,51,52,55,56,59,60,63,64,67,68,71,72,3,8,23,24,26,23,25,24,26,27,28,29,31,36,15,20,27,28,30,27,29,28,30,27,31,32,33,36,0,1,2,3,4,7,8,11,12,15,16,19,20,23,24,27,28,31,32,34,35,36,39,40,43,44,47,48,51,52,55,56,59,60,63,64,67,68,71,72,31,33,32,34,0,1,2,3,4,7,8,11,12,15,16,19,20,23,24,27,28,31,32,35,36,37,39,40,43,44,47,48,51,52,55,56,59,60,63,64,67,68,71,72,27,31,35,36,38,35,37,36,38,39,40,41,40,42,43,47,39,41,40,42,43,44,45,47,0,1,2,3,4,7,8,11,12,15,16,19,20,23,24,27,28,31,32,35,36,39,40,43,44,46,47,48,51,52,55,56,59,60,63,64,67,68,71,72,43,45,44,46,43,47,48,49,0,1,2,3,4,7,8,11,12,15,16,19,20,23,24,27,28,31,32,35,36,39,40,43,44,47,48,50,51,52,55,56,59,60,63,64,67,68,71,72,47,49,48,50,0,1,2,3,4,7,8,11,12,15,16,19,20,23,24,27,28,31,32,35,36,39,40,43,44,47,48,51,52,53,55,56,59,60,63,64,67,68,71,72,0,1,2,3,4,7,8,11,12,15,16,19,20,23,24,27,28,31,32,35,36,39,40,43,44,47,48,51,52,54,55,56,59,60,63,64,67,68,71,72,51,53,52,54,0,1,2,3,4,7,8,11,12,15,16,19,20,23,24,27,28,31,32,35,36,39,40,43,44,47,48,51,52,55,56,57,59,60,63,64,67,68,71,72,55,56,58,59,63,55,57,56,58,59,60,61,0,1,2,3,4,7,8,11,12,15,16,19,20,23,24,27,28,31,32,35,36,39,40,43,44,47,48,51,52,55,56,59,60,62,63,64,67,68,71,72,59,61,60,62,56,59,63,64,65,63,64,66,68,71,63,65,64,66,0,1,2,3,4,7,8,11,12,15,16,19,20,23,24,27,28,31,32,35,36,39,40,43,44,47,48,51,52,55,56,59,60,63,64,67,68,69,71,72,64,67,68,70,71,67,69,68,70,71,72,73,0,1,2,3,4,7,8,11,12,15,16,19,20,23,24,27,28,31,32,35,36,39,40,43,44,47,48,51,52,55,56,59,60,63,64,67,68,71,72,74,71,73,72,74};
  int i = 0;
  
  jacobian->sizeCols = 75;
  jacobian->sizeRows = 75;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(75,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(75,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((75+1)*sizeof(unsigned int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(808*sizeof(unsigned int));
  jacobian->sparsePattern->numberOfNonZeros = 808;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(75*sizeof(unsigned int));
  jacobian->sparsePattern->maxColors = 21;
  jacobian->constantEqns = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (75+1)*sizeof(unsigned int));
  
  for(i=2;i<75+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 808*sizeof(unsigned int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[64] = 1;
  jacobian->sparsePattern->colorCols[28] = 1;
  jacobian->sparsePattern->colorCols[72] = 2;
  jacobian->sparsePattern->colorCols[35] = 3;
  jacobian->sparsePattern->colorCols[67] = 4;
  jacobian->sparsePattern->colorCols[48] = 5;
  jacobian->sparsePattern->colorCols[23] = 6;
  jacobian->sparsePattern->colorCols[32] = 7;
  jacobian->sparsePattern->colorCols[60] = 8;
  jacobian->sparsePattern->colorCols[19] = 9;
  jacobian->sparsePattern->colorCols[52] = 10;
  jacobian->sparsePattern->colorCols[51] = 11;
  jacobian->sparsePattern->colorCols[12] = 12;
  jacobian->sparsePattern->colorCols[11] = 13;
  jacobian->sparsePattern->colorCols[16] = 14;
  jacobian->sparsePattern->colorCols[55] = 15;
  jacobian->sparsePattern->colorCols[7] = 16;
  jacobian->sparsePattern->colorCols[4] = 17;
  jacobian->sparsePattern->colorCols[24] = 17;
  jacobian->sparsePattern->colorCols[47] = 17;
  jacobian->sparsePattern->colorCols[63] = 17;
  jacobian->sparsePattern->colorCols[27] = 17;
  jacobian->sparsePattern->colorCols[44] = 18;
  jacobian->sparsePattern->colorCols[1] = 19;
  jacobian->sparsePattern->colorCols[41] = 19;
  jacobian->sparsePattern->colorCols[42] = 19;
  jacobian->sparsePattern->colorCols[45] = 19;
  jacobian->sparsePattern->colorCols[8] = 19;
  jacobian->sparsePattern->colorCols[20] = 19;
  jacobian->sparsePattern->colorCols[61] = 19;
  jacobian->sparsePattern->colorCols[49] = 19;
  jacobian->sparsePattern->colorCols[36] = 19;
  jacobian->sparsePattern->colorCols[73] = 19;
  jacobian->sparsePattern->colorCols[2] = 20;
  jacobian->sparsePattern->colorCols[39] = 20;
  jacobian->sparsePattern->colorCols[43] = 20;
  jacobian->sparsePattern->colorCols[5] = 20;
  jacobian->sparsePattern->colorCols[6] = 20;
  jacobian->sparsePattern->colorCols[57] = 20;
  jacobian->sparsePattern->colorCols[58] = 20;
  jacobian->sparsePattern->colorCols[17] = 20;
  jacobian->sparsePattern->colorCols[18] = 20;
  jacobian->sparsePattern->colorCols[22] = 20;
  jacobian->sparsePattern->colorCols[59] = 20;
  jacobian->sparsePattern->colorCols[33] = 20;
  jacobian->sparsePattern->colorCols[34] = 20;
  jacobian->sparsePattern->colorCols[69] = 20;
  jacobian->sparsePattern->colorCols[70] = 20;
  jacobian->sparsePattern->colorCols[38] = 20;
  jacobian->sparsePattern->colorCols[71] = 20;
  jacobian->sparsePattern->colorCols[65] = 20;
  jacobian->sparsePattern->colorCols[66] = 20;
  jacobian->sparsePattern->colorCols[29] = 20;
  jacobian->sparsePattern->colorCols[30] = 20;
  jacobian->sparsePattern->colorCols[0] = 21;
  jacobian->sparsePattern->colorCols[40] = 21;
  jacobian->sparsePattern->colorCols[46] = 21;
  jacobian->sparsePattern->colorCols[3] = 21;
  jacobian->sparsePattern->colorCols[9] = 21;
  jacobian->sparsePattern->colorCols[10] = 21;
  jacobian->sparsePattern->colorCols[56] = 21;
  jacobian->sparsePattern->colorCols[15] = 21;
  jacobian->sparsePattern->colorCols[13] = 21;
  jacobian->sparsePattern->colorCols[14] = 21;
  jacobian->sparsePattern->colorCols[53] = 21;
  jacobian->sparsePattern->colorCols[54] = 21;
  jacobian->sparsePattern->colorCols[21] = 21;
  jacobian->sparsePattern->colorCols[62] = 21;
  jacobian->sparsePattern->colorCols[31] = 21;
  jacobian->sparsePattern->colorCols[25] = 21;
  jacobian->sparsePattern->colorCols[26] = 21;
  jacobian->sparsePattern->colorCols[50] = 21;
  jacobian->sparsePattern->colorCols[68] = 21;
  jacobian->sparsePattern->colorCols[37] = 21;
  jacobian->sparsePattern->colorCols[74] = 21;
  TRACE_POP
  return 0;
}


