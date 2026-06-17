/* Initialization */
#include "SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_model.h"
#include "SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_11mix.h"
#include "SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
boiler.boilerPIControl.I.local_reset = false
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  (data->localData[0]->booleanVars[0]/* boiler.boilerPIControl.I.local_reset DISCRETE */)  = 0;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
boiler.boilerPIControl.I.local_set = 0.0
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  (data->localData[0]->realVars[224]/* boiler.boilerPIControl.I.local_set variable */)  = 0.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
load1.load.inlet.h_out = 0.0
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  (data->localData[0]->realVars[237]/* load1.load.inlet.h_out variable */)  = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
pumpDifferentialPressure.inlet.h_out = 0.0
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  (data->localData[0]->realVars[313]/* pumpDifferentialPressure.inlet.h_out variable */)  = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
load2.load.inlet.h_out = 0.0
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  (data->localData[0]->realVars[251]/* load2.load.inlet.h_out variable */)  = 0.0;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
load3.load.inlet.h_out = 0.0
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  (data->localData[0]->realVars[265]/* load3.load.inlet.h_out variable */)  = 0.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
load4.load.inlet.h_out = 0.0
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  (data->localData[0]->realVars[278]/* load4.load.inlet.h_out variable */)  = 0.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
load5.load.inlet.h_out = 0.0
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  (data->localData[0]->realVars[292]/* load5.load.inlet.h_out variable */)  = 0.0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
boiler.boilerInsideVolume.Ttilde = $START.boiler.boilerInsideVolume.Ttilde
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  (data->localData[0]->realVars[0]/* boiler.boilerInsideVolume.Ttilde STATE(1) */)  = (data->modelData->realVarsData[0]/* boiler.boilerInsideVolume.Ttilde STATE(1) */).attribute .start;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1545(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1544(DATA *data, threadData_t *threadData);


/*
equation index: 12
type: SIMPLE_ASSIGN
T_mand.inlet.p = pumpDifferentialPressure.dp + pressureAccumulator.p
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  (data->localData[0]->realVars[203]/* T_mand.inlet.p variable */)  = (data->simulationInfo->realParameter[305]/* pumpDifferentialPressure.dp PARAM */)  + (data->simulationInfo->realParameter[304]/* pressureAccumulator.p PARAM */) ;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
pressureAccumulator.fluidPort.h_out = 4185.0 * pressureAccumulator.T0
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  (data->localData[0]->realVars[311]/* pressureAccumulator.fluidPort.h_out variable */)  = (4185.0) * ((data->simulationInfo->realParameter[302]/* pressureAccumulator.T0 PARAM */) );
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1096(DATA *data, threadData_t *threadData);


/*
equation index: 15
type: SIMPLE_ASSIGN
load1.loadValve1.A_v = 2.7778e-05 * load1.loadValve1.Kv
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  (data->localData[0]->realVars[238]/* load1.loadValve1.A_v variable */)  = (2.7778e-05) * ((data->simulationInfo->realParameter[66]/* load1.loadValve1.Kv PARAM */) );
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
load2.loadValve1.A_v = 2.7778e-05 * load2.loadValve1.Kv
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  (data->localData[0]->realVars[252]/* load2.loadValve1.A_v variable */)  = (2.7778e-05) * ((data->simulationInfo->realParameter[113]/* load2.loadValve1.Kv PARAM */) );
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
load3.loadValve1.A_v = 2.7778e-05 * load3.loadValve1.Kv
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  (data->localData[0]->realVars[266]/* load3.loadValve1.A_v variable */)  = (2.7778e-05) * ((data->simulationInfo->realParameter[160]/* load3.loadValve1.Kv PARAM */) );
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
load4.loadValve1.A_v = 2.7778e-05 * load4.loadValve1.Kv
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  (data->localData[0]->realVars[279]/* load4.loadValve1.A_v variable */)  = (2.7778e-05) * ((data->simulationInfo->realParameter[207]/* load4.loadValve1.Kv PARAM */) );
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
load5.loadValve1.A_v = 2.7778e-05 * load5.loadValve1.Kv
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  (data->localData[0]->realVars[293]/* load5.loadValve1.A_v variable */)  = (2.7778e-05) * ((data->simulationInfo->realParameter[254]/* load5.loadValve1.Kv PARAM */) );
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
s01.Ttilde[1] = s01.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  (data->localData[0]->realVars[39]/* s01.Ttilde[1] STATE(1) */)  = (data->simulationInfo->realParameter[507]/* s01.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1535(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1529(DATA *data, threadData_t *threadData);


/*
equation index: 23
type: SIMPLE_ASSIGN
s01.Ttilde[2] = s01.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  (data->localData[0]->realVars[40]/* s01.Ttilde[2] STATE(1) */)  = (data->simulationInfo->realParameter[507]/* s01.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1530(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1528(DATA *data, threadData_t *threadData);


/*
equation index: 26
type: SIMPLE_ASSIGN
s01.Twall[1] = s01.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  (data->localData[0]->realVars[41]/* s01.Twall[1] STATE(1) */)  = (data->simulationInfo->realParameter[507]/* s01.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1541(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1540(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1542(DATA *data, threadData_t *threadData);


/*
equation index: 30
type: SIMPLE_ASSIGN
s01.Twall[2] = s01.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  (data->localData[0]->realVars[42]/* s01.Twall[2] STATE(1) */)  = (data->simulationInfo->realParameter[507]/* s01.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1537(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1536(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1538(DATA *data, threadData_t *threadData);


/*
equation index: 34
type: SIMPLE_ASSIGN
s12.Ttilde[1] = s12.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  (data->localData[0]->realVars[43]/* s12.Ttilde[1] STATE(1) */)  = (data->simulationInfo->realParameter[528]/* s12.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1520(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1260(DATA *data, threadData_t *threadData);


/*
equation index: 37
type: SIMPLE_ASSIGN
s12.Ttilde[2] = s12.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  (data->localData[0]->realVars[44]/* s12.Ttilde[2] STATE(1) */)  = (data->simulationInfo->realParameter[528]/* s12.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1261(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1259(DATA *data, threadData_t *threadData);


/*
equation index: 40
type: SIMPLE_ASSIGN
s12.Twall[1] = s12.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  (data->localData[0]->realVars[45]/* s12.Twall[1] STATE(1) */)  = (data->simulationInfo->realParameter[528]/* s12.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1526(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1525(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1527(DATA *data, threadData_t *threadData);


/*
equation index: 44
type: SIMPLE_ASSIGN
s12.Twall[2] = s12.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  (data->localData[0]->realVars[46]/* s12.Twall[2] STATE(1) */)  = (data->simulationInfo->realParameter[528]/* s12.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1522(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1521(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1523(DATA *data, threadData_t *threadData);


/*
equation index: 48
type: SIMPLE_ASSIGN
r10.Ttilde[1] = r10.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  (data->localData[0]->realVars[3]/* r10.Ttilde[1] STATE(1) */)  = (data->simulationInfo->realParameter[313]/* r10.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1252(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1250(DATA *data, threadData_t *threadData);


/*
equation index: 51
type: SIMPLE_ASSIGN
r10.Ttilde[2] = r10.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  (data->localData[0]->realVars[4]/* r10.Ttilde[2] STATE(1) */)  = (data->simulationInfo->realParameter[313]/* r10.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1251(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1249(DATA *data, threadData_t *threadData);


/*
equation index: 54
type: SIMPLE_ASSIGN
r10.Twall[1] = r10.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  (data->localData[0]->realVars[5]/* r10.Twall[1] STATE(1) */)  = (data->simulationInfo->realParameter[313]/* r10.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1257(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1256(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1258(DATA *data, threadData_t *threadData);


/*
equation index: 58
type: SIMPLE_ASSIGN
r10.Twall[2] = r10.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  (data->localData[0]->realVars[6]/* r10.Twall[2] STATE(1) */)  = (data->simulationInfo->realParameter[313]/* r10.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1254(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1253(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1255(DATA *data, threadData_t *threadData);


/*
equation index: 62
type: SIMPLE_ASSIGN
r21.Ttilde[1] = r21.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  (data->localData[0]->realVars[7]/* r21.Ttilde[1] STATE(1) */)  = (data->simulationInfo->realParameter[335]/* r21.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1242(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1240(DATA *data, threadData_t *threadData);


/*
equation index: 65
type: SIMPLE_ASSIGN
r21.Ttilde[2] = r21.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  (data->localData[0]->realVars[8]/* r21.Ttilde[2] STATE(1) */)  = (data->simulationInfo->realParameter[335]/* r21.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1241(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1239(DATA *data, threadData_t *threadData);


/*
equation index: 68
type: SIMPLE_ASSIGN
r21.Twall[1] = r21.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  (data->localData[0]->realVars[9]/* r21.Twall[1] STATE(1) */)  = (data->simulationInfo->realParameter[335]/* r21.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1247(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1246(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1248(DATA *data, threadData_t *threadData);


/*
equation index: 72
type: SIMPLE_ASSIGN
r21.Twall[2] = r21.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  (data->localData[0]->realVars[10]/* r21.Twall[2] STATE(1) */)  = (data->simulationInfo->realParameter[335]/* r21.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1244(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1243(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1245(DATA *data, threadData_t *threadData);


/*
equation index: 76
type: SIMPLE_ASSIGN
s34.Ttilde[1] = s34.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  (data->localData[0]->realVars[55]/* s34.Ttilde[1] STATE(1) */)  = (data->simulationInfo->realParameter[591]/* s34.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1232(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1230(DATA *data, threadData_t *threadData);


/*
equation index: 79
type: SIMPLE_ASSIGN
s34.Ttilde[2] = s34.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  (data->localData[0]->realVars[56]/* s34.Ttilde[2] STATE(1) */)  = (data->simulationInfo->realParameter[591]/* s34.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1231(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1229(DATA *data, threadData_t *threadData);


/*
equation index: 82
type: SIMPLE_ASSIGN
s34.Twall[1] = s34.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_82(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,82};
  (data->localData[0]->realVars[57]/* s34.Twall[1] STATE(1) */)  = (data->simulationInfo->realParameter[591]/* s34.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1237(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1236(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1238(DATA *data, threadData_t *threadData);


/*
equation index: 86
type: SIMPLE_ASSIGN
s34.Twall[2] = s34.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  (data->localData[0]->realVars[58]/* s34.Twall[2] STATE(1) */)  = (data->simulationInfo->realParameter[591]/* s34.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1234(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1233(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1235(DATA *data, threadData_t *threadData);


/*
equation index: 90
type: SIMPLE_ASSIGN
r43.Ttilde[1] = r43.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  (data->localData[0]->realVars[15]/* r43.Ttilde[1] STATE(1) */)  = (data->simulationInfo->realParameter[377]/* r43.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1222(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1220(DATA *data, threadData_t *threadData);


/*
equation index: 93
type: SIMPLE_ASSIGN
r43.Ttilde[2] = r43.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  (data->localData[0]->realVars[16]/* r43.Ttilde[2] STATE(1) */)  = (data->simulationInfo->realParameter[377]/* r43.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1221(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1219(DATA *data, threadData_t *threadData);


/*
equation index: 96
type: SIMPLE_ASSIGN
r43.Twall[1] = r43.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  (data->localData[0]->realVars[17]/* r43.Twall[1] STATE(1) */)  = (data->simulationInfo->realParameter[377]/* r43.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1227(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1226(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1228(DATA *data, threadData_t *threadData);


/*
equation index: 100
type: SIMPLE_ASSIGN
r43.Twall[2] = r43.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  (data->localData[0]->realVars[18]/* r43.Twall[2] STATE(1) */)  = (data->simulationInfo->realParameter[377]/* r43.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1224(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1223(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1225(DATA *data, threadData_t *threadData);


/*
equation index: 104
type: SIMPLE_ASSIGN
r32.Ttilde[1] = r32.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  (data->localData[0]->realVars[11]/* r32.Ttilde[1] STATE(1) */)  = (data->simulationInfo->realParameter[356]/* r32.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1212(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1210(DATA *data, threadData_t *threadData);


/*
equation index: 107
type: SIMPLE_ASSIGN
r32.Ttilde[2] = r32.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  (data->localData[0]->realVars[12]/* r32.Ttilde[2] STATE(1) */)  = (data->simulationInfo->realParameter[356]/* r32.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1211(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1209(DATA *data, threadData_t *threadData);


/*
equation index: 110
type: SIMPLE_ASSIGN
r32.Twall[1] = r32.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  (data->localData[0]->realVars[13]/* r32.Twall[1] STATE(1) */)  = (data->simulationInfo->realParameter[356]/* r32.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1217(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1216(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1218(DATA *data, threadData_t *threadData);


/*
equation index: 114
type: SIMPLE_ASSIGN
r32.Twall[2] = r32.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  (data->localData[0]->realVars[14]/* r32.Twall[2] STATE(1) */)  = (data->simulationInfo->realParameter[356]/* r32.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1214(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1213(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1215(DATA *data, threadData_t *threadData);


/*
equation index: 118
type: SIMPLE_ASSIGN
s23.Ttilde[1] = s23.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  (data->localData[0]->realVars[51]/* s23.Ttilde[1] STATE(1) */)  = (data->simulationInfo->realParameter[570]/* s23.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1202(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1200(DATA *data, threadData_t *threadData);


/*
equation index: 121
type: SIMPLE_ASSIGN
s23.Ttilde[2] = s23.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  (data->localData[0]->realVars[52]/* s23.Ttilde[2] STATE(1) */)  = (data->simulationInfo->realParameter[570]/* s23.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1201(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1199(DATA *data, threadData_t *threadData);


/*
equation index: 124
type: SIMPLE_ASSIGN
s23.Twall[1] = s23.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  (data->localData[0]->realVars[53]/* s23.Twall[1] STATE(1) */)  = (data->simulationInfo->realParameter[570]/* s23.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1207(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1206(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1208(DATA *data, threadData_t *threadData);


/*
equation index: 128
type: SIMPLE_ASSIGN
s23.Twall[2] = s23.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  (data->localData[0]->realVars[54]/* s23.Twall[2] STATE(1) */)  = (data->simulationInfo->realParameter[570]/* s23.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1204(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1203(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1205(DATA *data, threadData_t *threadData);


/*
equation index: 132
type: SIMPLE_ASSIGN
r54.Ttilde[1] = r54.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  (data->localData[0]->realVars[19]/* r54.Ttilde[1] STATE(1) */)  = (data->simulationInfo->realParameter[398]/* r54.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1192(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1190(DATA *data, threadData_t *threadData);


/*
equation index: 135
type: SIMPLE_ASSIGN
r54.Ttilde[2] = r54.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  (data->localData[0]->realVars[20]/* r54.Ttilde[2] STATE(1) */)  = (data->simulationInfo->realParameter[398]/* r54.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1191(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1189(DATA *data, threadData_t *threadData);


/*
equation index: 138
type: SIMPLE_ASSIGN
r54.Twall[1] = r54.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  (data->localData[0]->realVars[21]/* r54.Twall[1] STATE(1) */)  = (data->simulationInfo->realParameter[398]/* r54.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1197(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1196(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1198(DATA *data, threadData_t *threadData);


/*
equation index: 142
type: SIMPLE_ASSIGN
r54.Twall[2] = r54.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  (data->localData[0]->realVars[22]/* r54.Twall[2] STATE(1) */)  = (data->simulationInfo->realParameter[398]/* r54.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1194(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1193(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1195(DATA *data, threadData_t *threadData);


/*
equation index: 146
type: SIMPLE_ASSIGN
s45.Ttilde[1] = s45.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  (data->localData[0]->realVars[59]/* s45.Ttilde[1] STATE(1) */)  = (data->simulationInfo->realParameter[612]/* s45.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1182(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1179(DATA *data, threadData_t *threadData);


/*
equation index: 149
type: SIMPLE_ASSIGN
s45.Ttilde[2] = s45.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  (data->localData[0]->realVars[60]/* s45.Ttilde[2] STATE(1) */)  = (data->simulationInfo->realParameter[612]/* s45.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1180(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1181(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1178(DATA *data, threadData_t *threadData);


/*
equation index: 153
type: SIMPLE_ASSIGN
s45.Twall[1] = s45.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  (data->localData[0]->realVars[61]/* s45.Twall[1] STATE(1) */)  = (data->simulationInfo->realParameter[612]/* s45.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1187(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1186(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1188(DATA *data, threadData_t *threadData);


/*
equation index: 157
type: SIMPLE_ASSIGN
s45.Twall[2] = s45.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  (data->localData[0]->realVars[62]/* s45.Twall[2] STATE(1) */)  = (data->simulationInfo->realParameter[612]/* s45.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1184(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1183(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1185(DATA *data, threadData_t *threadData);


/*
equation index: 161
type: SIMPLE_ASSIGN
r76.Ttilde[1] = r76.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  (data->localData[0]->realVars[31]/* r76.Ttilde[1] STATE(1) */)  = (data->simulationInfo->realParameter[461]/* r76.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1171(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1169(DATA *data, threadData_t *threadData);


/*
equation index: 164
type: SIMPLE_ASSIGN
r76.Ttilde[2] = r76.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  (data->localData[0]->realVars[32]/* r76.Ttilde[2] STATE(1) */)  = (data->simulationInfo->realParameter[461]/* r76.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1170(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1168(DATA *data, threadData_t *threadData);


/*
equation index: 167
type: SIMPLE_ASSIGN
r76.Twall[1] = r76.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  (data->localData[0]->realVars[33]/* r76.Twall[1] STATE(1) */)  = (data->simulationInfo->realParameter[461]/* r76.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1176(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1175(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1177(DATA *data, threadData_t *threadData);


/*
equation index: 171
type: SIMPLE_ASSIGN
r76.Twall[2] = r76.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  (data->localData[0]->realVars[34]/* r76.Twall[2] STATE(1) */)  = (data->simulationInfo->realParameter[461]/* r76.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1173(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1172(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1174(DATA *data, threadData_t *threadData);


/*
equation index: 175
type: SIMPLE_ASSIGN
r61.Ttilde[1] = r61.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  (data->localData[0]->realVars[23]/* r61.Ttilde[1] STATE(1) */)  = (data->simulationInfo->realParameter[419]/* r61.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1161(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1159(DATA *data, threadData_t *threadData);


/*
equation index: 178
type: SIMPLE_ASSIGN
r61.Ttilde[2] = r61.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  (data->localData[0]->realVars[24]/* r61.Ttilde[2] STATE(1) */)  = (data->simulationInfo->realParameter[419]/* r61.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1160(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1158(DATA *data, threadData_t *threadData);


/*
equation index: 181
type: SIMPLE_ASSIGN
r61.Twall[1] = r61.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  (data->localData[0]->realVars[25]/* r61.Twall[1] STATE(1) */)  = (data->simulationInfo->realParameter[419]/* r61.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1166(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1165(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1167(DATA *data, threadData_t *threadData);


/*
equation index: 185
type: SIMPLE_ASSIGN
r61.Twall[2] = r61.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  (data->localData[0]->realVars[26]/* r61.Twall[2] STATE(1) */)  = (data->simulationInfo->realParameter[419]/* r61.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1163(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1162(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1164(DATA *data, threadData_t *threadData);


/*
equation index: 189
type: SIMPLE_ASSIGN
s16.Ttilde[1] = s16.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  (data->localData[0]->realVars[47]/* s16.Ttilde[1] STATE(1) */)  = (data->simulationInfo->realParameter[549]/* s16.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1151(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1149(DATA *data, threadData_t *threadData);


/*
equation index: 192
type: SIMPLE_ASSIGN
s16.Ttilde[2] = s16.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  (data->localData[0]->realVars[48]/* s16.Ttilde[2] STATE(1) */)  = (data->simulationInfo->realParameter[549]/* s16.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1150(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1148(DATA *data, threadData_t *threadData);


/*
equation index: 195
type: SIMPLE_ASSIGN
s16.Twall[1] = s16.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  (data->localData[0]->realVars[49]/* s16.Twall[1] STATE(1) */)  = (data->simulationInfo->realParameter[549]/* s16.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1156(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1155(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1157(DATA *data, threadData_t *threadData);


/*
equation index: 199
type: SIMPLE_ASSIGN
s16.Twall[2] = s16.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  (data->localData[0]->realVars[50]/* s16.Twall[2] STATE(1) */)  = (data->simulationInfo->realParameter[549]/* s16.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1153(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1152(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1154(DATA *data, threadData_t *threadData);


/*
equation index: 203
type: SIMPLE_ASSIGN
s67.Ttilde[1] = s67.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  (data->localData[0]->realVars[67]/* s67.Ttilde[1] STATE(1) */)  = (data->simulationInfo->realParameter[654]/* s67.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1141(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1139(DATA *data, threadData_t *threadData);


/*
equation index: 206
type: SIMPLE_ASSIGN
s67.Ttilde[2] = s67.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,206};
  (data->localData[0]->realVars[68]/* s67.Ttilde[2] STATE(1) */)  = (data->simulationInfo->realParameter[654]/* s67.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1140(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1138(DATA *data, threadData_t *threadData);


/*
equation index: 209
type: SIMPLE_ASSIGN
s67.Twall[1] = s67.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,209};
  (data->localData[0]->realVars[69]/* s67.Twall[1] STATE(1) */)  = (data->simulationInfo->realParameter[654]/* s67.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1146(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1145(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1147(DATA *data, threadData_t *threadData);


/*
equation index: 213
type: SIMPLE_ASSIGN
s67.Twall[2] = s67.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,213};
  (data->localData[0]->realVars[70]/* s67.Twall[2] STATE(1) */)  = (data->simulationInfo->realParameter[654]/* s67.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1143(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1142(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1144(DATA *data, threadData_t *threadData);


/*
equation index: 217
type: SIMPLE_ASSIGN
r87.Ttilde[1] = r87.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  (data->localData[0]->realVars[35]/* r87.Ttilde[1] STATE(1) */)  = (data->simulationInfo->realParameter[482]/* r87.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1131(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1129(DATA *data, threadData_t *threadData);


/*
equation index: 220
type: SIMPLE_ASSIGN
r87.Ttilde[2] = r87.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  (data->localData[0]->realVars[36]/* r87.Ttilde[2] STATE(1) */)  = (data->simulationInfo->realParameter[482]/* r87.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1130(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1128(DATA *data, threadData_t *threadData);


/*
equation index: 223
type: SIMPLE_ASSIGN
r87.Twall[1] = r87.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  (data->localData[0]->realVars[37]/* r87.Twall[1] STATE(1) */)  = (data->simulationInfo->realParameter[482]/* r87.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1136(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1135(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1137(DATA *data, threadData_t *threadData);


/*
equation index: 227
type: SIMPLE_ASSIGN
r87.Twall[2] = r87.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  (data->localData[0]->realVars[38]/* r87.Twall[2] STATE(1) */)  = (data->simulationInfo->realParameter[482]/* r87.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1133(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1132(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1134(DATA *data, threadData_t *threadData);


/*
equation index: 231
type: SIMPLE_ASSIGN
s78.Ttilde[1] = s78.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
  (data->localData[0]->realVars[71]/* s78.Ttilde[1] STATE(1) */)  = (data->simulationInfo->realParameter[675]/* s78.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1121(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1118(DATA *data, threadData_t *threadData);


/*
equation index: 234
type: SIMPLE_ASSIGN
s78.Ttilde[2] = s78.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  (data->localData[0]->realVars[72]/* s78.Ttilde[2] STATE(1) */)  = (data->simulationInfo->realParameter[675]/* s78.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1119(DATA *data, threadData_t *threadData);


void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_236(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_237(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_238(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_239(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_240(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_241(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_242(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_243(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_244(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_245(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_246(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_247(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_248(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_249(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_250(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_251(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_252(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_253(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_254(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_255(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_256(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_257(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_258(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_259(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_260(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_261(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_262(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_263(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_264(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_265(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_266(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_267(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_268(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_269(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_270(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_271(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_272(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_273(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_274(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_275(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_276(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_277(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_278(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_279(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_280(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_281(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_282(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_283(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_284(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_285(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_286(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_287(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_288(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_289(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_290(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_291(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_292(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_293(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_294(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_295(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_296(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_297(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_298(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_299(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_300(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_301(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_302(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_303(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_304(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_305(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_306(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_307(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_308(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_309(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_310(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_311(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_312(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_313(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_314(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_315(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_316(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_317(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_318(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_319(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_320(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_321(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_322(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_323(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_324(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_325(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_326(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_327(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_334(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_333(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_332(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_331(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_330(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_329(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_328(DATA*, threadData_t*);
/*
equation index: 335
indexNonlinear: 0
type: NONLINEAR

vars: {s16.m_flow, s12.m_flow, r32.m_flow, s34.m_flow, s23.m_flow, mfr_load[3], mfr_load[5]}
eqns: {236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 334, 333, 332, 331, 330, 329, 328}
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 335 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = (data->localData[0]->realVars[461]/* s16.m_flow variable */) ;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = (data->localData[0]->realVars[448]/* s12.m_flow variable */) ;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = (data->localData[0]->realVars[345]/* r32.m_flow variable */) ;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = (data->localData[0]->realVars[487]/* s34.m_flow variable */) ;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = (data->localData[0]->realVars[474]/* s23.m_flow variable */) ;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = (data->localData[0]->realVars[305]/* mfr_load[3] variable */) ;
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = (data->localData[0]->realVars[307]/* mfr_load[5] variable */) ;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,335};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 335 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[461]/* s16.m_flow variable */)  = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  (data->localData[0]->realVars[448]/* s12.m_flow variable */)  = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  (data->localData[0]->realVars[345]/* r32.m_flow variable */)  = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  (data->localData[0]->realVars[487]/* s34.m_flow variable */)  = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  (data->localData[0]->realVars[474]/* s23.m_flow variable */)  = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  (data->localData[0]->realVars[305]/* mfr_load[3] variable */)  = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  (data->localData[0]->realVars[307]/* mfr_load[5] variable */)  = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1446(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1445(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1448(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1453(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1451(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1450(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1452(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1454(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1455(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1429(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1480(DATA *data, threadData_t *threadData);


/*
equation index: 347
type: SIMPLE_ASSIGN
T_ritorno = if mfr_ritorno > 0.0 then -273.15 + 0.0002389486260454002 * r10.outlet.h_out else -273.15 + 0.0002389486260454002 * mfr_rit.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  modelica_boolean tmp0;
  tmp0 = Greater((data->localData[0]->realVars[310]/* mfr_ritorno variable */) ,0.0);
  (data->localData[0]->realVars[205]/* T_ritorno variable */)  = (tmp0?-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[320]/* r10.outlet.h_out variable */) ):-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[309]/* mfr_rit.inlet.h_out variable */) ));
  TRACE_POP
}

/*
equation index: 348
type: SIMPLE_ASSIGN
r10.T[1] = 0.0002389486260454002 * (max(r21.m_flow, 1e-07) * r21.outlet.h_out + max(r61.m_flow, 1e-07) * r61.outlet.h_out) / (max(r21.m_flow, 1e-07) + max(r61.m_flow, 1e-07))
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  (data->localData[0]->realVars[318]/* r10.T[1] variable */)  = (0.0002389486260454002) * (DIVISION_SIM((fmax((data->localData[0]->realVars[332]/* r21.m_flow variable */) ,1e-07)) * ((data->localData[0]->realVars[333]/* r21.outlet.h_out variable */) ) + (fmax((data->localData[0]->realVars[383]/* r61.m_flow variable */) ,1e-07)) * ((data->localData[0]->realVars[384]/* r61.outlet.h_out variable */) ),fmax((data->localData[0]->realVars[332]/* r21.m_flow variable */) ,1e-07) + fmax((data->localData[0]->realVars[383]/* r61.m_flow variable */) ,1e-07),"max(r21.m_flow, 1e-07) + max(r61.m_flow, 1e-07)",equationIndexes));
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1481(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1475(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1474(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1476(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1482(DATA *data, threadData_t *threadData);


/*
equation index: 358
type: LINEAR

<var>boiler.boilerInsideVolume.T[2]</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { (data->localData[1]->realVars[220]/* boiler.boilerInsideVolume.T[2] variable */)  };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 358 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,358};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 358 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[220]/* boiler.boilerInsideVolume.T[2] variable */)  = aux_x[0];

  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1422(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1424(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1423(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1407(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1411(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1412(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1408(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1421(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1543(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1539(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1467(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1512(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1518(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1510(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1519(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1509(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1511(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1449(DATA *data, threadData_t *threadData);


/*
equation index: 377
type: SIMPLE_ASSIGN
r43.T[3] = if r43.m_flow > 0.0 then r43.Ttilde[2] else 0.0002389486260454002 * (mfr_load[2] * load2.outlet.h_out + max(-r32.m_flow, 1e-07) * r32.inlet.h_out) / (mfr_load[2] + max(-r32.m_flow, 1e-07))
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  modelica_boolean tmp1;
  tmp1 = Greater((data->localData[0]->realVars[358]/* r43.m_flow variable */) ,0.0);
  (data->localData[0]->realVars[356]/* r43.T[3] variable */)  = (tmp1?(data->localData[0]->realVars[16]/* r43.Ttilde[2] STATE(1) */) :(0.0002389486260454002) * (DIVISION_SIM(((data->localData[0]->realVars[304]/* mfr_load[2] variable */) ) * ((data->localData[0]->realVars[261]/* load2.outlet.h_out variable */) ) + (fmax((-(data->localData[0]->realVars[345]/* r32.m_flow variable */) ),1e-07)) * ((data->localData[0]->realVars[344]/* r32.inlet.h_out variable */) ),(data->localData[0]->realVars[304]/* mfr_load[2] variable */)  + fmax((-(data->localData[0]->realVars[345]/* r32.m_flow variable */) ),1e-07),"mfr_load[2] + max(-r32.m_flow, 1e-07)",equationIndexes)));
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1466(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1487(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1507(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1506(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1508(DATA *data, threadData_t *threadData);


/*
equation index: 383
type: SIMPLE_ASSIGN
r76.T[3] = if r76.m_flow > 0.0 then r76.Ttilde[2] else 0.0002389486260454002 * (mfr_load[4] * load4.outlet.h_out + max(-r61.m_flow, 1e-07) * r61.inlet.h_out) / (mfr_load[4] + max(-r61.m_flow, 1e-07))
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  modelica_boolean tmp2;
  tmp2 = Greater((data->localData[0]->realVars[411]/* r76.m_flow variable */) ,0.0);
  (data->localData[0]->realVars[409]/* r76.T[3] variable */)  = (tmp2?(data->localData[0]->realVars[32]/* r76.Ttilde[2] STATE(1) */) :(0.0002389486260454002) * (DIVISION_SIM(((data->localData[0]->realVars[306]/* mfr_load[4] variable */) ) * ((data->localData[0]->realVars[288]/* load4.outlet.h_out variable */) ) + (fmax((-(data->localData[0]->realVars[383]/* r61.m_flow variable */) ),1e-07)) * ((data->localData[0]->realVars[382]/* r61.inlet.h_out variable */) ),(data->localData[0]->realVars[306]/* mfr_load[4] variable */)  + fmax((-(data->localData[0]->realVars[383]/* r61.m_flow variable */) ),1e-07),"mfr_load[4] + max(-r61.m_flow, 1e-07)",equationIndexes)));
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1498(DATA *data, threadData_t *threadData);


/*
equation index: 385
type: SIMPLE_ASSIGN
r61.T[1] = if r61.m_flow > 0.0 then 0.0002389486260454002 * (mfr_load[4] * load4.outlet.h_out + max(r76.m_flow, 1e-07) * r76.outlet.h_out) / (mfr_load[4] + max(r76.m_flow, 1e-07)) else r61.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  modelica_boolean tmp3;
  tmp3 = Greater((data->localData[0]->realVars[383]/* r61.m_flow variable */) ,0.0);
  (data->localData[0]->realVars[379]/* r61.T[1] variable */)  = (tmp3?(0.0002389486260454002) * (DIVISION_SIM(((data->localData[0]->realVars[306]/* mfr_load[4] variable */) ) * ((data->localData[0]->realVars[288]/* load4.outlet.h_out variable */) ) + (fmax((data->localData[0]->realVars[411]/* r76.m_flow variable */) ,1e-07)) * ((data->localData[0]->realVars[412]/* r76.outlet.h_out variable */) ),(data->localData[0]->realVars[306]/* mfr_load[4] variable */)  + fmax((data->localData[0]->realVars[411]/* r76.m_flow variable */) ,1e-07),"mfr_load[4] + max(r76.m_flow, 1e-07)",equationIndexes)):(data->localData[0]->realVars[23]/* r61.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1496(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1494(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1428(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1471(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1470(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1472(DATA *data, threadData_t *threadData);


/*
equation index: 392
type: SIMPLE_ASSIGN
r21.T[1] = if r21.m_flow > 0.0 then 0.0002389486260454002 * (max(r32.m_flow, 1e-07) * r32.outlet.h_out + mfr_load[1] * load1.outlet.h_out) / (max(r32.m_flow, 1e-07) + mfr_load[1]) else r21.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  modelica_boolean tmp4;
  tmp4 = Greater((data->localData[0]->realVars[332]/* r21.m_flow variable */) ,0.0);
  (data->localData[0]->realVars[328]/* r21.T[1] variable */)  = (tmp4?(0.0002389486260454002) * (DIVISION_SIM((fmax((data->localData[0]->realVars[345]/* r32.m_flow variable */) ,1e-07)) * ((data->localData[0]->realVars[346]/* r32.outlet.h_out variable */) ) + ((data->localData[0]->realVars[303]/* mfr_load[1] variable */) ) * ((data->localData[0]->realVars[247]/* load1.outlet.h_out variable */) ),fmax((data->localData[0]->realVars[345]/* r32.m_flow variable */) ,1e-07) + (data->localData[0]->realVars[303]/* mfr_load[1] variable */) ,"max(r32.m_flow, 1e-07) + mfr_load[1]",equationIndexes)):(data->localData[0]->realVars[7]/* r21.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1516(DATA *data, threadData_t *threadData);


/*
equation index: 394
type: SIMPLE_ASSIGN
r32.T[3] = if r32.m_flow > 0.0 then r32.Ttilde[2] else 0.0002389486260454002 * (max(-r21.m_flow, 1e-07) * r21.inlet.h_out + mfr_load[1] * load1.outlet.h_out) / (max(-r21.m_flow, 1e-07) + mfr_load[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  modelica_boolean tmp5;
  tmp5 = Greater((data->localData[0]->realVars[345]/* r32.m_flow variable */) ,0.0);
  (data->localData[0]->realVars[343]/* r32.T[3] variable */)  = (tmp5?(data->localData[0]->realVars[12]/* r32.Ttilde[2] STATE(1) */) :(0.0002389486260454002) * (DIVISION_SIM((fmax((-(data->localData[0]->realVars[332]/* r21.m_flow variable */) ),1e-07)) * ((data->localData[0]->realVars[331]/* r21.inlet.h_out variable */) ) + ((data->localData[0]->realVars[303]/* mfr_load[1] variable */) ) * ((data->localData[0]->realVars[247]/* load1.outlet.h_out variable */) ),fmax((-(data->localData[0]->realVars[332]/* r21.m_flow variable */) ),1e-07) + (data->localData[0]->realVars[303]/* mfr_load[1] variable */) ,"max(-r21.m_flow, 1e-07) + mfr_load[1]",equationIndexes)));
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1514(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1517(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1533(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1427(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1534(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1426(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1524(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1531(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1532(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1464(DATA *data, threadData_t *threadData);


/*
equation index: 405
type: SIMPLE_ASSIGN
r32.T[1] = if r32.m_flow > 0.0 then 0.0002389486260454002 * (mfr_load[2] * load2.outlet.h_out + max(r43.m_flow, 1e-07) * r43.outlet.h_out) / (mfr_load[2] + max(r43.m_flow, 1e-07)) else r32.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  modelica_boolean tmp6;
  tmp6 = Greater((data->localData[0]->realVars[345]/* r32.m_flow variable */) ,0.0);
  (data->localData[0]->realVars[341]/* r32.T[1] variable */)  = (tmp6?(0.0002389486260454002) * (DIVISION_SIM(((data->localData[0]->realVars[304]/* mfr_load[2] variable */) ) * ((data->localData[0]->realVars[261]/* load2.outlet.h_out variable */) ) + (fmax((data->localData[0]->realVars[358]/* r43.m_flow variable */) ,1e-07)) * ((data->localData[0]->realVars[359]/* r43.outlet.h_out variable */) ),(data->localData[0]->realVars[304]/* mfr_load[2] variable */)  + fmax((data->localData[0]->realVars[358]/* r43.m_flow variable */) ,1e-07),"mfr_load[2] + max(r43.m_flow, 1e-07)",equationIndexes)):(data->localData[0]->realVars[11]/* r32.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1469(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1443(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1501(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1500(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1503(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1435(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1436(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1437(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1430(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1433(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1120(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1432(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1117(DATA *data, threadData_t *threadData);


/*
equation index: 419
type: SIMPLE_ASSIGN
s78.Twall[1] = s78.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  (data->localData[0]->realVars[73]/* s78.Twall[1] STATE(1) */)  = (data->simulationInfo->realParameter[675]/* s78.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1126(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1125(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1127(DATA *data, threadData_t *threadData);


/*
equation index: 423
type: SIMPLE_ASSIGN
s78.Twall[2] = s78.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  (data->localData[0]->realVars[74]/* s78.Twall[2] STATE(1) */)  = (data->simulationInfo->realParameter[675]/* s78.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1123(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1434(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1122(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1124(DATA *data, threadData_t *threadData);


/*
equation index: 428
type: SIMPLE_ASSIGN
s47.Ttilde[1] = s47.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  (data->localData[0]->realVars[63]/* s47.Ttilde[1] STATE(1) */)  = (data->simulationInfo->realParameter[633]/* s47.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1440(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1110(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1444(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1447(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1456(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1457(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1108(DATA *data, threadData_t *threadData);


/*
equation index: 436
type: SIMPLE_ASSIGN
s47.Ttilde[2] = s47.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,436};
  (data->localData[0]->realVars[64]/* s47.Ttilde[2] STATE(1) */)  = (data->simulationInfo->realParameter[633]/* s47.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1439(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1438(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1109(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1499(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1502(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1504(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1505(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1107(DATA *data, threadData_t *threadData);


/*
equation index: 445
type: SIMPLE_ASSIGN
s47.Twall[1] = s47.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,445};
  (data->localData[0]->realVars[65]/* s47.Twall[1] STATE(1) */)  = (data->simulationInfo->realParameter[633]/* s47.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1115(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1442(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1114(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1116(DATA *data, threadData_t *threadData);


/*
equation index: 450
type: SIMPLE_ASSIGN
s47.Twall[2] = s47.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  (data->localData[0]->realVars[66]/* s47.Twall[2] STATE(1) */)  = (data->simulationInfo->realParameter[633]/* s47.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1112(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1441(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1111(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1113(DATA *data, threadData_t *threadData);


/*
equation index: 455
type: SIMPLE_ASSIGN
r74.Ttilde[1] = r74.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,455};
  (data->localData[0]->realVars[27]/* r74.Ttilde[1] STATE(1) */)  = (data->simulationInfo->realParameter[440]/* r74.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1488(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1100(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1492(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1493(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1490(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1491(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1098(DATA *data, threadData_t *threadData);


/*
equation index: 463
type: SIMPLE_ASSIGN
r74.Ttilde[2] = r74.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  (data->localData[0]->realVars[28]/* r74.Ttilde[2] STATE(1) */)  = (data->simulationInfo->realParameter[440]/* r74.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1431(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1458(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1099(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1462(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1463(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1460(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1461(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1097(DATA *data, threadData_t *threadData);


/*
equation index: 472
type: SIMPLE_ASSIGN
r74.Twall[1] = r74.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  (data->localData[0]->realVars[29]/* r74.Twall[1] STATE(1) */)  = (data->simulationInfo->realParameter[440]/* r74.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1105(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1489(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1104(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1106(DATA *data, threadData_t *threadData);


/*
equation index: 477
type: SIMPLE_ASSIGN
r74.Twall[2] = r74.T_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  (data->localData[0]->realVars[30]/* r74.Twall[2] STATE(1) */)  = (data->simulationInfo->realParameter[440]/* r74.T_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1102(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1459(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1101(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1103(DATA *data, threadData_t *threadData);


/*
equation index: 482
type: SIMPLE_ASSIGN
boiler.boilerPIControl.D.x = boiler.boilerPIControl.D.x_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  (data->localData[0]->realVars[1]/* boiler.boilerPIControl.D.x STATE(1) */)  = (data->simulationInfo->realParameter[18]/* boiler.boilerPIControl.D.x_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1410(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1409(DATA *data, threadData_t *threadData);


/*
equation index: 485
type: SIMPLE_ASSIGN
boiler.boilerPIControl.I.y = boiler.boilerPIControl.I.y_start
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,485};
  (data->localData[0]->realVars[2]/* boiler.boilerPIControl.I.y STATE(1) */)  = (data->simulationInfo->realParameter[23]/* boiler.boilerPIControl.I.y_start PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1413(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1414(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1415(DATA *data, threadData_t *threadData);


/*
equation index: 489
type: SIMPLE_ASSIGN
P_boiler_out = homotopy(smooth(0, if boiler.boilerPIControl.limiter.u > boiler.boilerPIControl.limiter.uMax then boiler.boilerPIControl.limiter.uMax else if boiler.boilerPIControl.limiter.u < boiler.boilerPIControl.limiter.uMin then boiler.boilerPIControl.limiter.uMin else boiler.boilerPIControl.limiter.u), boiler.boilerPIControl.limiter.u)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,489};
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp7 = Greater((data->localData[0]->realVars[234]/* boiler.boilerPIControl.limiter.u variable */) ,(data->simulationInfo->realParameter[48]/* boiler.boilerPIControl.limiter.uMax PARAM */) );
  tmp9 = (modelica_boolean)tmp7;
  if(tmp9)
  {
    tmp10 = (data->simulationInfo->realParameter[48]/* boiler.boilerPIControl.limiter.uMax PARAM */) ;
  }
  else
  {
    tmp8 = Less((data->localData[0]->realVars[234]/* boiler.boilerPIControl.limiter.u variable */) ,(data->simulationInfo->realParameter[49]/* boiler.boilerPIControl.limiter.uMin PARAM */) );
    tmp10 = (tmp8?(data->simulationInfo->realParameter[49]/* boiler.boilerPIControl.limiter.uMin PARAM */) :(data->localData[0]->realVars[234]/* boiler.boilerPIControl.limiter.u variable */) );
  }
  (data->localData[0]->realVars[194]/* P_boiler_out variable */)  = homotopy(tmp10, (data->localData[0]->realVars[234]/* boiler.boilerPIControl.limiter.u variable */) );
  TRACE_POP
}

/*
equation index: 490
type: SIMPLE_ASSIGN
boiler.boilePowerUnit.outlet.h_out = (max(-pressureAccumulator.fluidPort.m_flow, 1e-07) * pressureAccumulator.fluidPort.h_out + mfr_ritorno * r10.outlet.h_out) / (max(-pressureAccumulator.fluidPort.m_flow, 1e-07) + mfr_ritorno) + P_boiler_out / max(mfr_mandata, boiler.boilePowerUnit.b)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  (data->localData[0]->realVars[217]/* boiler.boilePowerUnit.outlet.h_out variable */)  = DIVISION_SIM((fmax((-(data->localData[0]->realVars[312]/* pressureAccumulator.fluidPort.m_flow variable */) ),1e-07)) * ((data->localData[0]->realVars[311]/* pressureAccumulator.fluidPort.h_out variable */) ) + ((data->localData[0]->realVars[310]/* mfr_ritorno variable */) ) * ((data->localData[0]->realVars[320]/* r10.outlet.h_out variable */) ),fmax((-(data->localData[0]->realVars[312]/* pressureAccumulator.fluidPort.m_flow variable */) ),1e-07) + (data->localData[0]->realVars[310]/* mfr_ritorno variable */) ,"max(-pressureAccumulator.fluidPort.m_flow, 1e-07) + mfr_ritorno",equationIndexes) + DIVISION_SIM((data->localData[0]->realVars[194]/* P_boiler_out variable */) ,fmax((data->localData[0]->realVars[308]/* mfr_mandata variable */) ,(data->simulationInfo->realParameter[6]/* boiler.boilePowerUnit.b PARAM */) ),"max(mfr_mandata, boiler.boilePowerUnit.b)",equationIndexes);
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1485(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1546(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1486(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1417(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1418(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1419(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1420(DATA *data, threadData_t *threadData);


/*
equation index: 498
type: SIMPLE_ASSIGN
boiler.boilePowerUnit.inlet.h_out = 0.0
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,498};
  (data->localData[0]->realVars[216]/* boiler.boilePowerUnit.inlet.h_out variable */)  = 0.0;
  TRACE_POP
}

/*
equation index: 504
type: ALGORITHM

  assert(boiler.boilerPIControl.limiter.uMax >= boiler.boilerPIControl.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(boiler.boilerPIControl.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(boiler.boilerPIControl.limiter.uMin, 6, 0, true) + ")");
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  modelica_boolean tmp11;
  static const MMC_DEFSTRINGLIT(tmp12,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp13;
  modelica_metatype tmpMeta14;
  static const MMC_DEFSTRINGLIT(tmp15,11,") < uMin (=");
  modelica_metatype tmpMeta16;
  modelica_string tmp17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  static int tmp20 = 0;
  {
    tmp11 = GreaterEq((data->simulationInfo->realParameter[48]/* boiler.boilerPIControl.limiter.uMax PARAM */) ,(data->simulationInfo->realParameter[49]/* boiler.boilerPIControl.limiter.uMin PARAM */) );
    if(!tmp11)
    {
      tmp13 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[48]/* boiler.boilerPIControl.limiter.uMax PARAM */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta14 = stringAppend(MMC_REFSTRINGLIT(tmp12),tmp13);
      tmpMeta16 = stringAppend(tmpMeta14,MMC_REFSTRINGLIT(tmp15));
      tmp17 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[49]/* boiler.boilerPIControl.limiter.uMin PARAM */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta18 = stringAppend(tmpMeta16,tmp17);
      tmpMeta19 = stringAppend(tmpMeta18,(modelica_string) mmc_strings_len1[41]);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.limiter.uMax >= boiler.boilerPIControl.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta19));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",19,9,20,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.limiter.uMax >= boiler.boilerPIControl.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta19));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 503
type: ALGORITHM

  assert(load1.loadValveControl.limiter.uMax >= load1.loadValveControl.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(load1.loadValveControl.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(load1.loadValveControl.limiter.uMin, 6, 0, true) + ")");
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  modelica_boolean tmp21;
  static const MMC_DEFSTRINGLIT(tmp22,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp23;
  modelica_metatype tmpMeta24;
  static const MMC_DEFSTRINGLIT(tmp25,11,") < uMin (=");
  modelica_metatype tmpMeta26;
  modelica_string tmp27;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  static int tmp30 = 0;
  {
    tmp21 = GreaterEq((data->simulationInfo->realParameter[96]/* load1.loadValveControl.limiter.uMax PARAM */) ,(data->simulationInfo->realParameter[97]/* load1.loadValveControl.limiter.uMin PARAM */) );
    if(!tmp21)
    {
      tmp23 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[96]/* load1.loadValveControl.limiter.uMax PARAM */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta24 = stringAppend(MMC_REFSTRINGLIT(tmp22),tmp23);
      tmpMeta26 = stringAppend(tmpMeta24,MMC_REFSTRINGLIT(tmp25));
      tmp27 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[97]/* load1.loadValveControl.limiter.uMin PARAM */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta28 = stringAppend(tmpMeta26,tmp27);
      tmpMeta29 = stringAppend(tmpMeta28,(modelica_string) mmc_strings_len1[41]);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload1.loadValveControl.limiter.uMax >= load1.loadValveControl.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta29));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",19,9,20,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload1.loadValveControl.limiter.uMax >= load1.loadValveControl.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta29));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 502
type: ALGORITHM

  assert(load2.loadValveControl.limiter.uMax >= load2.loadValveControl.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(load2.loadValveControl.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(load2.loadValveControl.limiter.uMin, 6, 0, true) + ")");
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,502};
  modelica_boolean tmp31;
  static const MMC_DEFSTRINGLIT(tmp32,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp33;
  modelica_metatype tmpMeta34;
  static const MMC_DEFSTRINGLIT(tmp35,11,") < uMin (=");
  modelica_metatype tmpMeta36;
  modelica_string tmp37;
  modelica_metatype tmpMeta38;
  modelica_metatype tmpMeta39;
  static int tmp40 = 0;
  {
    tmp31 = GreaterEq((data->simulationInfo->realParameter[143]/* load2.loadValveControl.limiter.uMax PARAM */) ,(data->simulationInfo->realParameter[144]/* load2.loadValveControl.limiter.uMin PARAM */) );
    if(!tmp31)
    {
      tmp33 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[143]/* load2.loadValveControl.limiter.uMax PARAM */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta34 = stringAppend(MMC_REFSTRINGLIT(tmp32),tmp33);
      tmpMeta36 = stringAppend(tmpMeta34,MMC_REFSTRINGLIT(tmp35));
      tmp37 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[144]/* load2.loadValveControl.limiter.uMin PARAM */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta38 = stringAppend(tmpMeta36,tmp37);
      tmpMeta39 = stringAppend(tmpMeta38,(modelica_string) mmc_strings_len1[41]);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload2.loadValveControl.limiter.uMax >= load2.loadValveControl.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta39));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",19,9,20,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload2.loadValveControl.limiter.uMax >= load2.loadValveControl.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta39));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 501
type: ALGORITHM

  assert(load3.loadValveControl.limiter.uMax >= load3.loadValveControl.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(load3.loadValveControl.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(load3.loadValveControl.limiter.uMin, 6, 0, true) + ")");
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
  modelica_boolean tmp41;
  static const MMC_DEFSTRINGLIT(tmp42,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp43;
  modelica_metatype tmpMeta44;
  static const MMC_DEFSTRINGLIT(tmp45,11,") < uMin (=");
  modelica_metatype tmpMeta46;
  modelica_string tmp47;
  modelica_metatype tmpMeta48;
  modelica_metatype tmpMeta49;
  static int tmp50 = 0;
  {
    tmp41 = GreaterEq((data->simulationInfo->realParameter[190]/* load3.loadValveControl.limiter.uMax PARAM */) ,(data->simulationInfo->realParameter[191]/* load3.loadValveControl.limiter.uMin PARAM */) );
    if(!tmp41)
    {
      tmp43 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[190]/* load3.loadValveControl.limiter.uMax PARAM */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta44 = stringAppend(MMC_REFSTRINGLIT(tmp42),tmp43);
      tmpMeta46 = stringAppend(tmpMeta44,MMC_REFSTRINGLIT(tmp45));
      tmp47 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[191]/* load3.loadValveControl.limiter.uMin PARAM */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta48 = stringAppend(tmpMeta46,tmp47);
      tmpMeta49 = stringAppend(tmpMeta48,(modelica_string) mmc_strings_len1[41]);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload3.loadValveControl.limiter.uMax >= load3.loadValveControl.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta49));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",19,9,20,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload3.loadValveControl.limiter.uMax >= load3.loadValveControl.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta49));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 500
type: ALGORITHM

  assert(load4.loadValveControl.limiter.uMax >= load4.loadValveControl.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(load4.loadValveControl.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(load4.loadValveControl.limiter.uMin, 6, 0, true) + ")");
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,500};
  modelica_boolean tmp51;
  static const MMC_DEFSTRINGLIT(tmp52,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp53;
  modelica_metatype tmpMeta54;
  static const MMC_DEFSTRINGLIT(tmp55,11,") < uMin (=");
  modelica_metatype tmpMeta56;
  modelica_string tmp57;
  modelica_metatype tmpMeta58;
  modelica_metatype tmpMeta59;
  static int tmp60 = 0;
  {
    tmp51 = GreaterEq((data->simulationInfo->realParameter[237]/* load4.loadValveControl.limiter.uMax PARAM */) ,(data->simulationInfo->realParameter[238]/* load4.loadValveControl.limiter.uMin PARAM */) );
    if(!tmp51)
    {
      tmp53 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[237]/* load4.loadValveControl.limiter.uMax PARAM */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta54 = stringAppend(MMC_REFSTRINGLIT(tmp52),tmp53);
      tmpMeta56 = stringAppend(tmpMeta54,MMC_REFSTRINGLIT(tmp55));
      tmp57 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[238]/* load4.loadValveControl.limiter.uMin PARAM */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta58 = stringAppend(tmpMeta56,tmp57);
      tmpMeta59 = stringAppend(tmpMeta58,(modelica_string) mmc_strings_len1[41]);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload4.loadValveControl.limiter.uMax >= load4.loadValveControl.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta59));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",19,9,20,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload4.loadValveControl.limiter.uMax >= load4.loadValveControl.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta59));
        }
      }
    }
  }
  TRACE_POP
}

/*
equation index: 499
type: ALGORITHM

  assert(load5.loadValveControl.limiter.uMax >= load5.loadValveControl.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(load5.loadValveControl.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(load5.loadValveControl.limiter.uMin, 6, 0, true) + ")");
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,499};
  modelica_boolean tmp61;
  static const MMC_DEFSTRINGLIT(tmp62,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp63;
  modelica_metatype tmpMeta64;
  static const MMC_DEFSTRINGLIT(tmp65,11,") < uMin (=");
  modelica_metatype tmpMeta66;
  modelica_string tmp67;
  modelica_metatype tmpMeta68;
  modelica_metatype tmpMeta69;
  static int tmp70 = 0;
  {
    tmp61 = GreaterEq((data->simulationInfo->realParameter[284]/* load5.loadValveControl.limiter.uMax PARAM */) ,(data->simulationInfo->realParameter[285]/* load5.loadValveControl.limiter.uMin PARAM */) );
    if(!tmp61)
    {
      tmp63 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[284]/* load5.loadValveControl.limiter.uMax PARAM */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta64 = stringAppend(MMC_REFSTRINGLIT(tmp62),tmp63);
      tmpMeta66 = stringAppend(tmpMeta64,MMC_REFSTRINGLIT(tmp65));
      tmp67 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[285]/* load5.loadValveControl.limiter.uMin PARAM */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta68 = stringAppend(tmpMeta66,tmp67);
      tmpMeta69 = stringAppend(tmpMeta68,(modelica_string) mmc_strings_len1[41]);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload5.loadValveControl.limiter.uMax >= load5.loadValveControl.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta69));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",19,9,20,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload5.loadValveControl.limiter.uMax >= load5.loadValveControl.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta69));
        }
      }
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_3(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_4(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_5(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_6(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_7(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_8(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_9(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1545(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1544(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_12(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_13(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1096(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_15(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_16(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_17(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_18(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_19(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_20(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1535(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1529(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_23(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1530(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1528(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_26(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1541(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1540(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1542(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_30(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1537(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1536(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1538(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_34(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1520(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1260(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_37(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1261(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1259(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_40(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1526(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1525(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1527(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_44(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1522(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1521(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1523(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_48(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1252(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1250(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_51(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1251(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1249(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_54(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1257(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1256(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1258(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_58(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1254(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1253(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1255(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_62(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1242(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1240(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_65(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1241(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1239(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_68(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1247(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1246(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1248(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_72(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1244(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1243(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1245(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_76(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1232(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1230(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_79(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1231(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1229(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_82(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1237(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1236(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1238(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_86(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1234(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1233(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1235(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_90(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1222(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1220(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_93(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1221(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1219(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_96(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1227(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1226(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1228(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_100(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1224(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1223(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1225(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_104(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1212(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1210(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_107(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1211(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1209(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_110(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1217(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1216(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1218(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_114(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1214(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1213(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1215(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_118(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1202(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1200(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_121(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1201(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1199(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_124(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1207(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1206(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1208(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_128(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1204(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1203(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1205(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_132(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1192(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1190(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_135(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1191(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1189(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_138(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1197(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1196(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1198(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_142(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1194(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1193(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1195(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_146(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1182(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1179(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_149(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1180(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1181(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1178(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_153(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1187(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1186(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1188(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_157(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1184(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1183(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1185(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_161(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1171(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1169(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_164(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1170(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1168(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_167(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1176(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1175(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1177(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_171(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1173(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1172(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1174(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_175(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1161(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1159(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_178(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1160(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1158(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_181(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1166(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1165(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1167(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_185(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1163(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1162(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1164(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_189(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1151(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1149(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_192(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1150(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1148(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_195(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1156(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1155(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1157(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_199(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1153(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1152(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1154(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_203(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1141(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1139(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_206(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1140(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1138(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_209(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1146(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1145(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1147(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_213(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1143(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1142(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1144(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_217(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1131(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1129(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_220(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1130(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1128(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_223(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1136(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1135(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1137(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_227(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1133(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1132(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1134(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_231(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1121(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1118(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_234(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1119(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_335(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1446(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1445(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1448(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1453(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1451(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1450(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1452(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1454(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1455(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1429(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1480(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_347(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_348(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1481(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1475(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1474(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1476(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1482(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_358(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1422(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1424(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1423(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1407(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1411(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1412(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1408(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1421(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1543(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1539(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1467(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1512(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1518(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1510(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1519(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1509(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1511(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1449(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_377(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1466(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1487(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1507(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1506(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1508(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_383(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1498(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_385(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1496(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1494(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1428(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1471(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1470(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1472(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_392(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1516(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_394(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1514(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1517(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1533(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1427(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1534(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1426(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1524(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1531(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1532(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1464(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_405(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1469(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1443(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1501(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1500(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1503(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1435(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1436(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1437(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1430(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1433(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1120(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1432(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1117(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_419(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1126(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1125(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1127(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_423(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1123(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1434(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1122(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1124(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_428(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1440(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1110(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1444(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1447(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1456(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1457(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1108(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_436(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1439(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1438(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1109(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1499(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1502(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1504(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1505(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1107(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_445(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1115(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1442(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1114(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1116(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_450(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1112(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1441(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1111(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1113(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_455(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1488(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1100(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1492(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1493(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1490(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1491(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1098(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_463(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1431(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1458(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1099(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1462(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1463(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1460(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1461(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1097(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_472(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1105(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1489(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1104(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1106(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_477(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1102(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1459(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1101(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1103(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_482(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1410(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1409(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_485(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1413(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1414(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1415(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_489(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_490(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1485(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1546(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1486(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1417(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1418(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1419(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1420(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_498(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_504(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_503(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_502(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_501(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_500(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_499(data, threadData);
  TRACE_POP
}

int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_3(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_4(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_5(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_6(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_7(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_8(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_9(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1545(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1544(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_12(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_13(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1096(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_15(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_16(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_17(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_18(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_19(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_20(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1535(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1529(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_23(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1530(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1528(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_26(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1541(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1540(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1542(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_30(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1537(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1536(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1538(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_34(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1520(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1260(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_37(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1261(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1259(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_40(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1526(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1525(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1527(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_44(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1522(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1521(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1523(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_48(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1252(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1250(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_51(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1251(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1249(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_54(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1257(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1256(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1258(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_58(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1254(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1253(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1255(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_62(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1242(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1240(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_65(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1241(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1239(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_68(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1247(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1246(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1248(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_72(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1244(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1243(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1245(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_76(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1232(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1230(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_79(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1231(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1229(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_82(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1237(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1236(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1238(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_86(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1234(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1233(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1235(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_90(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1222(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1220(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_93(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1221(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1219(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_96(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1227(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1226(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1228(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_100(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1224(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1223(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1225(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_104(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1212(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1210(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_107(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1211(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1209(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_110(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1217(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1216(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1218(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_114(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1214(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1213(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1215(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_118(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1202(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1200(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_121(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1201(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1199(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_124(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1207(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1206(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1208(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_128(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1204(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1203(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1205(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_132(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1192(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1190(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_135(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1191(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1189(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_138(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1197(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1196(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1198(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_142(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1194(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1193(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1195(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_146(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1182(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1179(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_149(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1180(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1181(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1178(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_153(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1187(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1186(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1188(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_157(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1184(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1183(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1185(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_161(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1171(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1169(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_164(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1170(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1168(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_167(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1176(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1175(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1177(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_171(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1173(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1172(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1174(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_175(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1161(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1159(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_178(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1160(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1158(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_181(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1166(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1165(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1167(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_185(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1163(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1162(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1164(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_189(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1151(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1149(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_192(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1150(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1148(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_195(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1156(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1155(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1157(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_199(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1153(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1152(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1154(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_203(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1141(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1139(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_206(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1140(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1138(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_209(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1146(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1145(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1147(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_213(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1143(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1142(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1144(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_217(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1131(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1129(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_220(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1130(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1128(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_223(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1136(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1135(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1137(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_227(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1133(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1132(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1134(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_231(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1121(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1118(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_234(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1119(DATA *data, threadData_t *threadData);


void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_740(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_741(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_742(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_743(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_744(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_745(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_746(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_747(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_748(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_749(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_750(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_751(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_752(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_753(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_754(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_755(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_756(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_757(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_758(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_759(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_760(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_761(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_762(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_763(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_764(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_765(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_766(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_767(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_768(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_769(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_770(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_771(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_772(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_773(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_774(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_775(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_776(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_777(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_778(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_779(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_780(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_781(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_782(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_783(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_784(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_785(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_786(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_787(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_788(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_789(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_790(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_791(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_792(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_793(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_794(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_795(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_796(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_797(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_798(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_799(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_800(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_801(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_802(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_803(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_804(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_805(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_806(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_807(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_808(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_809(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_810(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_811(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_812(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_813(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_820(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_819(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_818(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_817(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_816(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_815(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_814(DATA*, threadData_t*);
/*
equation index: 914
indexNonlinear: 1
type: NONLINEAR

vars: {mfr_load[4], r32.m_flow, mfr_load[1], s23.m_flow, s67.m_flow, mfr_load[3], mfr_load[5]}
eqns: {740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 820, 819, 818, 817, 816, 815, 814}
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,914};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 914 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = (data->localData[0]->realVars[306]/* mfr_load[4] variable */) ;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = (data->localData[0]->realVars[345]/* r32.m_flow variable */) ;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = (data->localData[0]->realVars[303]/* mfr_load[1] variable */) ;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = (data->localData[0]->realVars[474]/* s23.m_flow variable */) ;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = (data->localData[0]->realVars[526]/* s67.m_flow variable */) ;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = (data->localData[0]->realVars[305]/* mfr_load[3] variable */) ;
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = (data->localData[0]->realVars[307]/* mfr_load[5] variable */) ;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,914};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 914 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[306]/* mfr_load[4] variable */)  = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  (data->localData[0]->realVars[345]/* r32.m_flow variable */)  = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  (data->localData[0]->realVars[303]/* mfr_load[1] variable */)  = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  (data->localData[0]->realVars[474]/* s23.m_flow variable */)  = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  (data->localData[0]->realVars[526]/* s67.m_flow variable */)  = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  (data->localData[0]->realVars[305]/* mfr_load[3] variable */)  = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  (data->localData[0]->realVars[307]/* mfr_load[5] variable */)  = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  TRACE_POP
}

/*
equation index: 915
type: SIMPLE_ASSIGN
s47.u = s47.m_flow / (985.0 * s47.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,915};
  (data->localData[0]->realVars[517]/* s47.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[512]/* s47.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[627]/* s47.A PARAM */) ),"985.0 * s47.A",equationIndexes);
  TRACE_POP
}

/*
equation index: 920
type: LINEAR

<var>s_T_sens.inlet.h_out</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,920};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { (data->localData[1]->realVars[542]/* s_T_sens.inlet.h_out variable */)  };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 920 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,920};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 920 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[542]/* s_T_sens.inlet.h_out variable */)  = aux_x[0];

  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1422(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1424(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1423(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1407(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1411(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1412(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1408(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1421(DATA *data, threadData_t *threadData);


/*
equation index: 929
type: SIMPLE_ASSIGN
s01.u = mfr_mandata / (985.0 * s01.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,929};
  (data->localData[0]->realVars[439]/* s01.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[308]/* mfr_mandata variable */) ,(985.0) * ((data->simulationInfo->realParameter[501]/* s01.A PARAM */) ),"985.0 * s01.A",equationIndexes);
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1543(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1539(DATA *data, threadData_t *threadData);


/*
equation index: 932
type: SIMPLE_ASSIGN
s16.u = s16.m_flow / (985.0 * s16.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,932};
  (data->localData[0]->realVars[465]/* s16.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[461]/* s16.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[543]/* s16.A PARAM */) ),"985.0 * s16.A",equationIndexes);
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1507(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1506(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1508(DATA *data, threadData_t *threadData);


/*
equation index: 936
type: SIMPLE_ASSIGN
r21.u = r21.m_flow / (985.0 * r21.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,936};
  (data->localData[0]->realVars[336]/* r21.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[332]/* r21.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[329]/* r21.A PARAM */) ),"985.0 * r21.A",equationIndexes);
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1482(DATA *data, threadData_t *threadData);


/*
equation index: 938
type: SIMPLE_ASSIGN
r10.u = mfr_ritorno / (985.0 * r10.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,938};
  (data->localData[0]->realVars[323]/* r10.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[310]/* mfr_ritorno variable */) ,(985.0) * ((data->simulationInfo->realParameter[307]/* r10.A PARAM */) ),"985.0 * r10.A",equationIndexes);
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1480(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_347(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_348(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1481(DATA *data, threadData_t *threadData);


/*
equation index: 943
type: SIMPLE_ASSIGN
r61.u = r61.m_flow / (985.0 * r61.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,943};
  (data->localData[0]->realVars[388]/* r61.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[383]/* r61.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[413]/* r61.A PARAM */) ),"985.0 * r61.A",equationIndexes);
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1475(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1474(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1476(DATA *data, threadData_t *threadData);


/*
equation index: 947
type: SIMPLE_ASSIGN
r76.u = r76.m_flow / (985.0 * r76.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,947};
  (data->localData[0]->realVars[415]/* r76.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[411]/* r76.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[455]/* r76.A PARAM */) ),"985.0 * r76.A",equationIndexes);
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1487(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_383(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1498(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_385(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1496(DATA *data, threadData_t *threadData);


/*
equation index: 953
type: SIMPLE_ASSIGN
r74.u = r74.m_flow / (985.0 * r74.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,953};
  (data->localData[0]->realVars[402]/* r74.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[397]/* r74.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[434]/* r74.A PARAM */) ),"985.0 * r74.A",equationIndexes);
  TRACE_POP
}

/*
equation index: 954
type: SIMPLE_ASSIGN
r43.u = r43.m_flow / (985.0 * r43.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,954};
  (data->localData[0]->realVars[362]/* r43.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[358]/* r43.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[371]/* r43.A PARAM */) ),"985.0 * r43.A",equationIndexes);
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1449(DATA *data, threadData_t *threadData);


/*
equation index: 956
type: SIMPLE_ASSIGN
r32.u = r32.m_flow / (985.0 * r32.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,956};
  (data->localData[0]->realVars[349]/* r32.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[345]/* r32.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[350]/* r32.A PARAM */) ),"985.0 * r32.A",equationIndexes);
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1467(DATA *data, threadData_t *threadData);


/*
equation index: 958
type: SIMPLE_ASSIGN
s23.u = s23.m_flow / (985.0 * s23.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,958};
  (data->localData[0]->realVars[478]/* s23.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[474]/* s23.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[564]/* s23.A PARAM */) ),"985.0 * s23.A",equationIndexes);
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1518(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1510(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1519(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1509(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1511(DATA *data, threadData_t *threadData);


/*
equation index: 964
type: SIMPLE_ASSIGN
s34.u = s34.m_flow / (985.0 * s34.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,964};
  (data->localData[0]->realVars[492]/* s34.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[487]/* s34.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[585]/* s34.A PARAM */) ),"985.0 * s34.A",equationIndexes);
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1446(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1445(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1448(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_377(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1466(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1464(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_405(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1469(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1443(DATA *data, threadData_t *threadData);


/*
equation index: 974
type: SIMPLE_ASSIGN
r54.u = mfr_load[3] / (985.0 * r54.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,974};
  (data->localData[0]->realVars[374]/* r54.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[305]/* mfr_load[3] variable */) ,(985.0) * ((data->simulationInfo->realParameter[392]/* r54.A PARAM */) ),"985.0 * r54.A",equationIndexes);
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1453(DATA *data, threadData_t *threadData);


/*
equation index: 976
type: SIMPLE_ASSIGN
s45.u = mfr_load[3] / (985.0 * s45.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_976(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,976};
  (data->localData[0]->realVars[503]/* s45.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[305]/* mfr_load[3] variable */) ,(985.0) * ((data->simulationInfo->realParameter[606]/* s45.A PARAM */) ),"985.0 * s45.A",equationIndexes);
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1451(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1450(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1452(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1454(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1455(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1429(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1512(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1471(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1470(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1472(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_392(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1516(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_394(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1514(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1517(DATA *data, threadData_t *threadData);


/*
equation index: 992
type: SIMPLE_ASSIGN
s12.u = s12.m_flow / (985.0 * s12.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,992};
  (data->localData[0]->realVars[452]/* s12.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[448]/* s12.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[522]/* s12.A PARAM */) ),"985.0 * s12.A",equationIndexes);
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1533(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1427(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1534(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1426(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1524(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1531(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1532(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1494(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1428(DATA *data, threadData_t *threadData);


/*
equation index: 1002
type: SIMPLE_ASSIGN
s67.u = s67.m_flow / (985.0 * s67.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1002(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1002};
  (data->localData[0]->realVars[530]/* s67.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[526]/* s67.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[648]/* s67.A PARAM */) ),"985.0 * s67.A",equationIndexes);
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1501(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1500(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1503(DATA *data, threadData_t *threadData);


/*
equation index: 1006
type: SIMPLE_ASSIGN
r87.u = mfr_load[5] / (985.0 * r87.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1006(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1006};
  (data->localData[0]->realVars[428]/* r87.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[307]/* mfr_load[5] variable */) ,(985.0) * ((data->simulationInfo->realParameter[476]/* r87.A PARAM */) ),"985.0 * r87.A",equationIndexes);
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1435(DATA *data, threadData_t *threadData);


/*
equation index: 1008
type: SIMPLE_ASSIGN
s78.u = mfr_load[5] / (985.0 * s78.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1008(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1008};
  (data->localData[0]->realVars[541]/* s78.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[307]/* mfr_load[5] variable */) ,(985.0) * ((data->simulationInfo->realParameter[669]/* s78.A PARAM */) ),"985.0 * s78.A",equationIndexes);
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1436(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1437(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1430(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1433(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1120(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1432(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1117(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_419(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1126(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1125(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1127(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_423(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1123(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1434(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1122(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1124(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_428(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1440(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1110(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1444(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1447(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1456(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1457(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1108(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_436(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1439(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1438(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1109(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1499(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1502(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1504(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1505(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1107(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_445(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1115(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1442(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1114(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1116(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_450(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1112(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1441(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1111(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1113(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_455(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1488(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1100(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1492(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1493(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1490(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1491(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1098(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_463(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1431(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1458(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1099(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1462(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1463(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1460(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1461(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1097(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_472(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1105(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1489(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1104(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1106(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_477(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1102(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1459(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1101(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1103(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_482(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1410(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1409(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_485(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1413(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1414(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1415(DATA *data, threadData_t *threadData);


/*
equation index: 1086
type: SIMPLE_ASSIGN
P_boiler_out = boiler.boilerPIControl.limiter.u
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1086(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1086};
  (data->localData[0]->realVars[194]/* P_boiler_out variable */)  = (data->localData[0]->realVars[234]/* boiler.boilerPIControl.limiter.u variable */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_490(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1485(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1546(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1486(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1417(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1418(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1419(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1420(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_498(DATA *data, threadData_t *threadData);

int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_3(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_4(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_5(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_6(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_7(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_8(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_9(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1545(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1544(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_12(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_13(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1096(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_15(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_16(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_17(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_18(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_19(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_20(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1535(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1529(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_23(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1530(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1528(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_26(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1541(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1540(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1542(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_30(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1537(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1536(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1538(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_34(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1520(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1260(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_37(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1261(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1259(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_40(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1526(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1525(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1527(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_44(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1522(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1521(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1523(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_48(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1252(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1250(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_51(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1251(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1249(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_54(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1257(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1256(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1258(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_58(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1254(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1253(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1255(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_62(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1242(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1240(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_65(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1241(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1239(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_68(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1247(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1246(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1248(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_72(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1244(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1243(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1245(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_76(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1232(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1230(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_79(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1231(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1229(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_82(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1237(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1236(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1238(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_86(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1234(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1233(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1235(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_90(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1222(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1220(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_93(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1221(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1219(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_96(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1227(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1226(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1228(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_100(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1224(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1223(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1225(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_104(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1212(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1210(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_107(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1211(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1209(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_110(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1217(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1216(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1218(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_114(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1214(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1213(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1215(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_118(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1202(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1200(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_121(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1201(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1199(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_124(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1207(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1206(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1208(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_128(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1204(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1203(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1205(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_132(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1192(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1190(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_135(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1191(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1189(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_138(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1197(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1196(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1198(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_142(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1194(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1193(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1195(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_146(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1182(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1179(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_149(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1180(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1181(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1178(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_153(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1187(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1186(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1188(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_157(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1184(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1183(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1185(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_161(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1171(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1169(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_164(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1170(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1168(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_167(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1176(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1175(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1177(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_171(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1173(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1172(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1174(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_175(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1161(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1159(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_178(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1160(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1158(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_181(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1166(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1165(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1167(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_185(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1163(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1162(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1164(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_189(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1151(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1149(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_192(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1150(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1148(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_195(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1156(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1155(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1157(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_199(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1153(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1152(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1154(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_203(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1141(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1139(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_206(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1140(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1138(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_209(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1146(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1145(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1147(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_213(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1143(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1142(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1144(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_217(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1131(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1129(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_220(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1130(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1128(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_223(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1136(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1135(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1137(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_227(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1133(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1132(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1134(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_231(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1121(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1118(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_234(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1119(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_914(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_915(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_920(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1422(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1424(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1423(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1407(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1411(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1412(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1408(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1421(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_929(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1543(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1539(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_932(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1507(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1506(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1508(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_936(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1482(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_938(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1480(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_347(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_348(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1481(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_943(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1475(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1474(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1476(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_947(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1487(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_383(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1498(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_385(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1496(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_953(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_954(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1449(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_956(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1467(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_958(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1518(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1510(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1519(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1509(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1511(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_964(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1446(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1445(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1448(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_377(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1466(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1464(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_405(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1469(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1443(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_974(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1453(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_976(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1451(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1450(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1452(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1454(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1455(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1429(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1512(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1471(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1470(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1472(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_392(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1516(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_394(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1514(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1517(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_992(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1533(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1427(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1534(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1426(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1524(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1531(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1532(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1494(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1428(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1002(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1501(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1500(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1503(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1006(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1435(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1008(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1436(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1437(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1430(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1433(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1120(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1432(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1117(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_419(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1126(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1125(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1127(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_423(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1123(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1434(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1122(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1124(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_428(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1440(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1110(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1444(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1447(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1456(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1457(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1108(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_436(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1439(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1438(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1109(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1499(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1502(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1504(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1505(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1107(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_445(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1115(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1442(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1114(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1116(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_450(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1112(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1441(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1111(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1113(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_455(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1488(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1100(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1492(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1493(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1490(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1491(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1098(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_463(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1431(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1458(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1099(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1462(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1463(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1460(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1461(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1097(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_472(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1105(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1489(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1104(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1106(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_477(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1102(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1459(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1101(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1103(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_482(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1410(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1409(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_485(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1413(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1414(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1415(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1086(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_490(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1485(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1546(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1486(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1417(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1418(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1419(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1420(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_498(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

