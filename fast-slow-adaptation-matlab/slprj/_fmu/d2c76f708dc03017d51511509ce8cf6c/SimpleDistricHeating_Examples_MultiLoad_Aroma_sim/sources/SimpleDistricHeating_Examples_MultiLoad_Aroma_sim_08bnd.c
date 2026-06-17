/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 1553
type: SIMPLE_ASSIGN
$START.r74.Twall[2] = r74.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1553};
  (data->modelData->realVarsData[30]/* r74.Twall[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[440]/* r74.T_start PARAM */) ;
    (data->localData[0]->realVars[30]/* r74.Twall[2] STATE(1) */)  = (data->modelData->realVarsData[30]/* r74.Twall[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[30].info /* r74.Twall[2] */.name, (modelica_real) (data->localData[0]->realVars[30]/* r74.Twall[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1554
type: SIMPLE_ASSIGN
$START.r74.Twall[1] = r74.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1554};
  (data->modelData->realVarsData[29]/* r74.Twall[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[440]/* r74.T_start PARAM */) ;
    (data->localData[0]->realVars[29]/* r74.Twall[1] STATE(1) */)  = (data->modelData->realVarsData[29]/* r74.Twall[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[29].info /* r74.Twall[1] */.name, (modelica_real) (data->localData[0]->realVars[29]/* r74.Twall[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1555
type: SIMPLE_ASSIGN
$START.r74.Ttilde[2] = r74.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1555};
  (data->modelData->realVarsData[28]/* r74.Ttilde[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[440]/* r74.T_start PARAM */) ;
    (data->localData[0]->realVars[28]/* r74.Ttilde[2] STATE(1) */)  = (data->modelData->realVarsData[28]/* r74.Ttilde[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[28].info /* r74.Ttilde[2] */.name, (modelica_real) (data->localData[0]->realVars[28]/* r74.Ttilde[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1556
type: SIMPLE_ASSIGN
$START.r74.Ttilde[1] = r74.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1556};
  (data->modelData->realVarsData[27]/* r74.Ttilde[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[440]/* r74.T_start PARAM */) ;
    (data->localData[0]->realVars[27]/* r74.Ttilde[1] STATE(1) */)  = (data->modelData->realVarsData[27]/* r74.Ttilde[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[27].info /* r74.Ttilde[1] */.name, (modelica_real) (data->localData[0]->realVars[27]/* r74.Ttilde[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1557
type: SIMPLE_ASSIGN
$START.s47.Twall[2] = s47.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1557};
  (data->modelData->realVarsData[66]/* s47.Twall[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[633]/* s47.T_start PARAM */) ;
    (data->localData[0]->realVars[66]/* s47.Twall[2] STATE(1) */)  = (data->modelData->realVarsData[66]/* s47.Twall[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[66].info /* s47.Twall[2] */.name, (modelica_real) (data->localData[0]->realVars[66]/* s47.Twall[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1558
type: SIMPLE_ASSIGN
$START.s47.Twall[1] = s47.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1558};
  (data->modelData->realVarsData[65]/* s47.Twall[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[633]/* s47.T_start PARAM */) ;
    (data->localData[0]->realVars[65]/* s47.Twall[1] STATE(1) */)  = (data->modelData->realVarsData[65]/* s47.Twall[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[65].info /* s47.Twall[1] */.name, (modelica_real) (data->localData[0]->realVars[65]/* s47.Twall[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1559
type: SIMPLE_ASSIGN
$START.s47.Ttilde[2] = s47.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1559};
  (data->modelData->realVarsData[64]/* s47.Ttilde[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[633]/* s47.T_start PARAM */) ;
    (data->localData[0]->realVars[64]/* s47.Ttilde[2] STATE(1) */)  = (data->modelData->realVarsData[64]/* s47.Ttilde[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[64].info /* s47.Ttilde[2] */.name, (modelica_real) (data->localData[0]->realVars[64]/* s47.Ttilde[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1560
type: SIMPLE_ASSIGN
$START.s47.Ttilde[1] = s47.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1560};
  (data->modelData->realVarsData[63]/* s47.Ttilde[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[633]/* s47.T_start PARAM */) ;
    (data->localData[0]->realVars[63]/* s47.Ttilde[1] STATE(1) */)  = (data->modelData->realVarsData[63]/* s47.Ttilde[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[63].info /* s47.Ttilde[1] */.name, (modelica_real) (data->localData[0]->realVars[63]/* s47.Ttilde[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1561
type: SIMPLE_ASSIGN
$START.s78.Twall[2] = s78.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1561};
  (data->modelData->realVarsData[74]/* s78.Twall[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[675]/* s78.T_start PARAM */) ;
    (data->localData[0]->realVars[74]/* s78.Twall[2] STATE(1) */)  = (data->modelData->realVarsData[74]/* s78.Twall[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[74].info /* s78.Twall[2] */.name, (modelica_real) (data->localData[0]->realVars[74]/* s78.Twall[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1562
type: SIMPLE_ASSIGN
$START.s78.Twall[1] = s78.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1562};
  (data->modelData->realVarsData[73]/* s78.Twall[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[675]/* s78.T_start PARAM */) ;
    (data->localData[0]->realVars[73]/* s78.Twall[1] STATE(1) */)  = (data->modelData->realVarsData[73]/* s78.Twall[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[73].info /* s78.Twall[1] */.name, (modelica_real) (data->localData[0]->realVars[73]/* s78.Twall[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1563
type: SIMPLE_ASSIGN
$START.s78.Ttilde[2] = s78.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1563};
  (data->modelData->realVarsData[72]/* s78.Ttilde[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[675]/* s78.T_start PARAM */) ;
    (data->localData[0]->realVars[72]/* s78.Ttilde[2] STATE(1) */)  = (data->modelData->realVarsData[72]/* s78.Ttilde[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[72].info /* s78.Ttilde[2] */.name, (modelica_real) (data->localData[0]->realVars[72]/* s78.Ttilde[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1564
type: SIMPLE_ASSIGN
$START.s78.Ttilde[1] = s78.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1564};
  (data->modelData->realVarsData[71]/* s78.Ttilde[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[675]/* s78.T_start PARAM */) ;
    (data->localData[0]->realVars[71]/* s78.Ttilde[1] STATE(1) */)  = (data->modelData->realVarsData[71]/* s78.Ttilde[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[71].info /* s78.Ttilde[1] */.name, (modelica_real) (data->localData[0]->realVars[71]/* s78.Ttilde[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1565
type: SIMPLE_ASSIGN
$START.r87.Twall[2] = r87.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1565};
  (data->modelData->realVarsData[38]/* r87.Twall[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[482]/* r87.T_start PARAM */) ;
    (data->localData[0]->realVars[38]/* r87.Twall[2] STATE(1) */)  = (data->modelData->realVarsData[38]/* r87.Twall[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[38].info /* r87.Twall[2] */.name, (modelica_real) (data->localData[0]->realVars[38]/* r87.Twall[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1566
type: SIMPLE_ASSIGN
$START.r87.Twall[1] = r87.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1566};
  (data->modelData->realVarsData[37]/* r87.Twall[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[482]/* r87.T_start PARAM */) ;
    (data->localData[0]->realVars[37]/* r87.Twall[1] STATE(1) */)  = (data->modelData->realVarsData[37]/* r87.Twall[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[37].info /* r87.Twall[1] */.name, (modelica_real) (data->localData[0]->realVars[37]/* r87.Twall[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1567
type: SIMPLE_ASSIGN
$START.r87.Ttilde[2] = r87.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1567};
  (data->modelData->realVarsData[36]/* r87.Ttilde[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[482]/* r87.T_start PARAM */) ;
    (data->localData[0]->realVars[36]/* r87.Ttilde[2] STATE(1) */)  = (data->modelData->realVarsData[36]/* r87.Ttilde[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[36].info /* r87.Ttilde[2] */.name, (modelica_real) (data->localData[0]->realVars[36]/* r87.Ttilde[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1568
type: SIMPLE_ASSIGN
$START.r87.Ttilde[1] = r87.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1568};
  (data->modelData->realVarsData[35]/* r87.Ttilde[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[482]/* r87.T_start PARAM */) ;
    (data->localData[0]->realVars[35]/* r87.Ttilde[1] STATE(1) */)  = (data->modelData->realVarsData[35]/* r87.Ttilde[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[35].info /* r87.Ttilde[1] */.name, (modelica_real) (data->localData[0]->realVars[35]/* r87.Ttilde[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1569
type: SIMPLE_ASSIGN
$START.s67.Twall[2] = s67.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1569};
  (data->modelData->realVarsData[70]/* s67.Twall[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[654]/* s67.T_start PARAM */) ;
    (data->localData[0]->realVars[70]/* s67.Twall[2] STATE(1) */)  = (data->modelData->realVarsData[70]/* s67.Twall[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[70].info /* s67.Twall[2] */.name, (modelica_real) (data->localData[0]->realVars[70]/* s67.Twall[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1570
type: SIMPLE_ASSIGN
$START.s67.Twall[1] = s67.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1570};
  (data->modelData->realVarsData[69]/* s67.Twall[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[654]/* s67.T_start PARAM */) ;
    (data->localData[0]->realVars[69]/* s67.Twall[1] STATE(1) */)  = (data->modelData->realVarsData[69]/* s67.Twall[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[69].info /* s67.Twall[1] */.name, (modelica_real) (data->localData[0]->realVars[69]/* s67.Twall[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1571
type: SIMPLE_ASSIGN
$START.s67.Ttilde[2] = s67.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1571};
  (data->modelData->realVarsData[68]/* s67.Ttilde[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[654]/* s67.T_start PARAM */) ;
    (data->localData[0]->realVars[68]/* s67.Ttilde[2] STATE(1) */)  = (data->modelData->realVarsData[68]/* s67.Ttilde[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[68].info /* s67.Ttilde[2] */.name, (modelica_real) (data->localData[0]->realVars[68]/* s67.Ttilde[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1572
type: SIMPLE_ASSIGN
$START.s67.Ttilde[1] = s67.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1572};
  (data->modelData->realVarsData[67]/* s67.Ttilde[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[654]/* s67.T_start PARAM */) ;
    (data->localData[0]->realVars[67]/* s67.Ttilde[1] STATE(1) */)  = (data->modelData->realVarsData[67]/* s67.Ttilde[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[67].info /* s67.Ttilde[1] */.name, (modelica_real) (data->localData[0]->realVars[67]/* s67.Ttilde[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1573
type: SIMPLE_ASSIGN
$START.s16.Twall[2] = s16.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1573};
  (data->modelData->realVarsData[50]/* s16.Twall[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[549]/* s16.T_start PARAM */) ;
    (data->localData[0]->realVars[50]/* s16.Twall[2] STATE(1) */)  = (data->modelData->realVarsData[50]/* s16.Twall[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[50].info /* s16.Twall[2] */.name, (modelica_real) (data->localData[0]->realVars[50]/* s16.Twall[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1574
type: SIMPLE_ASSIGN
$START.s16.Twall[1] = s16.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1574};
  (data->modelData->realVarsData[49]/* s16.Twall[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[549]/* s16.T_start PARAM */) ;
    (data->localData[0]->realVars[49]/* s16.Twall[1] STATE(1) */)  = (data->modelData->realVarsData[49]/* s16.Twall[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[49].info /* s16.Twall[1] */.name, (modelica_real) (data->localData[0]->realVars[49]/* s16.Twall[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1575
type: SIMPLE_ASSIGN
$START.s16.Ttilde[2] = s16.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1575};
  (data->modelData->realVarsData[48]/* s16.Ttilde[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[549]/* s16.T_start PARAM */) ;
    (data->localData[0]->realVars[48]/* s16.Ttilde[2] STATE(1) */)  = (data->modelData->realVarsData[48]/* s16.Ttilde[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[48].info /* s16.Ttilde[2] */.name, (modelica_real) (data->localData[0]->realVars[48]/* s16.Ttilde[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1576
type: SIMPLE_ASSIGN
$START.s16.Ttilde[1] = s16.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1576};
  (data->modelData->realVarsData[47]/* s16.Ttilde[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[549]/* s16.T_start PARAM */) ;
    (data->localData[0]->realVars[47]/* s16.Ttilde[1] STATE(1) */)  = (data->modelData->realVarsData[47]/* s16.Ttilde[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[47].info /* s16.Ttilde[1] */.name, (modelica_real) (data->localData[0]->realVars[47]/* s16.Ttilde[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1577
type: SIMPLE_ASSIGN
$START.r61.Twall[2] = r61.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1577};
  (data->modelData->realVarsData[26]/* r61.Twall[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[419]/* r61.T_start PARAM */) ;
    (data->localData[0]->realVars[26]/* r61.Twall[2] STATE(1) */)  = (data->modelData->realVarsData[26]/* r61.Twall[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[26].info /* r61.Twall[2] */.name, (modelica_real) (data->localData[0]->realVars[26]/* r61.Twall[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1578
type: SIMPLE_ASSIGN
$START.r61.Twall[1] = r61.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1578};
  (data->modelData->realVarsData[25]/* r61.Twall[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[419]/* r61.T_start PARAM */) ;
    (data->localData[0]->realVars[25]/* r61.Twall[1] STATE(1) */)  = (data->modelData->realVarsData[25]/* r61.Twall[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[25].info /* r61.Twall[1] */.name, (modelica_real) (data->localData[0]->realVars[25]/* r61.Twall[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1579
type: SIMPLE_ASSIGN
$START.r61.Ttilde[2] = r61.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1579};
  (data->modelData->realVarsData[24]/* r61.Ttilde[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[419]/* r61.T_start PARAM */) ;
    (data->localData[0]->realVars[24]/* r61.Ttilde[2] STATE(1) */)  = (data->modelData->realVarsData[24]/* r61.Ttilde[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[24].info /* r61.Ttilde[2] */.name, (modelica_real) (data->localData[0]->realVars[24]/* r61.Ttilde[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1580
type: SIMPLE_ASSIGN
$START.r61.Ttilde[1] = r61.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1580};
  (data->modelData->realVarsData[23]/* r61.Ttilde[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[419]/* r61.T_start PARAM */) ;
    (data->localData[0]->realVars[23]/* r61.Ttilde[1] STATE(1) */)  = (data->modelData->realVarsData[23]/* r61.Ttilde[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[23].info /* r61.Ttilde[1] */.name, (modelica_real) (data->localData[0]->realVars[23]/* r61.Ttilde[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1581
type: SIMPLE_ASSIGN
$START.r76.Twall[2] = r76.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1581};
  (data->modelData->realVarsData[34]/* r76.Twall[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[461]/* r76.T_start PARAM */) ;
    (data->localData[0]->realVars[34]/* r76.Twall[2] STATE(1) */)  = (data->modelData->realVarsData[34]/* r76.Twall[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[34].info /* r76.Twall[2] */.name, (modelica_real) (data->localData[0]->realVars[34]/* r76.Twall[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1582
type: SIMPLE_ASSIGN
$START.r76.Twall[1] = r76.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1582};
  (data->modelData->realVarsData[33]/* r76.Twall[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[461]/* r76.T_start PARAM */) ;
    (data->localData[0]->realVars[33]/* r76.Twall[1] STATE(1) */)  = (data->modelData->realVarsData[33]/* r76.Twall[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[33].info /* r76.Twall[1] */.name, (modelica_real) (data->localData[0]->realVars[33]/* r76.Twall[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1583
type: SIMPLE_ASSIGN
$START.r76.Ttilde[2] = r76.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1583};
  (data->modelData->realVarsData[32]/* r76.Ttilde[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[461]/* r76.T_start PARAM */) ;
    (data->localData[0]->realVars[32]/* r76.Ttilde[2] STATE(1) */)  = (data->modelData->realVarsData[32]/* r76.Ttilde[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[32].info /* r76.Ttilde[2] */.name, (modelica_real) (data->localData[0]->realVars[32]/* r76.Ttilde[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1584
type: SIMPLE_ASSIGN
$START.r76.Ttilde[1] = r76.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1584};
  (data->modelData->realVarsData[31]/* r76.Ttilde[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[461]/* r76.T_start PARAM */) ;
    (data->localData[0]->realVars[31]/* r76.Ttilde[1] STATE(1) */)  = (data->modelData->realVarsData[31]/* r76.Ttilde[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[31].info /* r76.Ttilde[1] */.name, (modelica_real) (data->localData[0]->realVars[31]/* r76.Ttilde[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1585
type: SIMPLE_ASSIGN
$START.s45.Twall[2] = s45.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1585};
  (data->modelData->realVarsData[62]/* s45.Twall[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[612]/* s45.T_start PARAM */) ;
    (data->localData[0]->realVars[62]/* s45.Twall[2] STATE(1) */)  = (data->modelData->realVarsData[62]/* s45.Twall[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[62].info /* s45.Twall[2] */.name, (modelica_real) (data->localData[0]->realVars[62]/* s45.Twall[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1586
type: SIMPLE_ASSIGN
$START.s45.Twall[1] = s45.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1586};
  (data->modelData->realVarsData[61]/* s45.Twall[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[612]/* s45.T_start PARAM */) ;
    (data->localData[0]->realVars[61]/* s45.Twall[1] STATE(1) */)  = (data->modelData->realVarsData[61]/* s45.Twall[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[61].info /* s45.Twall[1] */.name, (modelica_real) (data->localData[0]->realVars[61]/* s45.Twall[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1587
type: SIMPLE_ASSIGN
$START.s45.Ttilde[2] = s45.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1587};
  (data->modelData->realVarsData[60]/* s45.Ttilde[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[612]/* s45.T_start PARAM */) ;
    (data->localData[0]->realVars[60]/* s45.Ttilde[2] STATE(1) */)  = (data->modelData->realVarsData[60]/* s45.Ttilde[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[60].info /* s45.Ttilde[2] */.name, (modelica_real) (data->localData[0]->realVars[60]/* s45.Ttilde[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1588
type: SIMPLE_ASSIGN
$START.s45.Ttilde[1] = s45.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1588};
  (data->modelData->realVarsData[59]/* s45.Ttilde[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[612]/* s45.T_start PARAM */) ;
    (data->localData[0]->realVars[59]/* s45.Ttilde[1] STATE(1) */)  = (data->modelData->realVarsData[59]/* s45.Ttilde[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[59].info /* s45.Ttilde[1] */.name, (modelica_real) (data->localData[0]->realVars[59]/* s45.Ttilde[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1589
type: SIMPLE_ASSIGN
$START.r54.Twall[2] = r54.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1589};
  (data->modelData->realVarsData[22]/* r54.Twall[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[398]/* r54.T_start PARAM */) ;
    (data->localData[0]->realVars[22]/* r54.Twall[2] STATE(1) */)  = (data->modelData->realVarsData[22]/* r54.Twall[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[22].info /* r54.Twall[2] */.name, (modelica_real) (data->localData[0]->realVars[22]/* r54.Twall[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1590
type: SIMPLE_ASSIGN
$START.r54.Twall[1] = r54.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1590};
  (data->modelData->realVarsData[21]/* r54.Twall[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[398]/* r54.T_start PARAM */) ;
    (data->localData[0]->realVars[21]/* r54.Twall[1] STATE(1) */)  = (data->modelData->realVarsData[21]/* r54.Twall[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[21].info /* r54.Twall[1] */.name, (modelica_real) (data->localData[0]->realVars[21]/* r54.Twall[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1591
type: SIMPLE_ASSIGN
$START.r54.Ttilde[2] = r54.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1591};
  (data->modelData->realVarsData[20]/* r54.Ttilde[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[398]/* r54.T_start PARAM */) ;
    (data->localData[0]->realVars[20]/* r54.Ttilde[2] STATE(1) */)  = (data->modelData->realVarsData[20]/* r54.Ttilde[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[20].info /* r54.Ttilde[2] */.name, (modelica_real) (data->localData[0]->realVars[20]/* r54.Ttilde[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1592
type: SIMPLE_ASSIGN
$START.r54.Ttilde[1] = r54.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1592};
  (data->modelData->realVarsData[19]/* r54.Ttilde[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[398]/* r54.T_start PARAM */) ;
    (data->localData[0]->realVars[19]/* r54.Ttilde[1] STATE(1) */)  = (data->modelData->realVarsData[19]/* r54.Ttilde[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[19].info /* r54.Ttilde[1] */.name, (modelica_real) (data->localData[0]->realVars[19]/* r54.Ttilde[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1593
type: SIMPLE_ASSIGN
$START.s23.Twall[2] = s23.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1593};
  (data->modelData->realVarsData[54]/* s23.Twall[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[570]/* s23.T_start PARAM */) ;
    (data->localData[0]->realVars[54]/* s23.Twall[2] STATE(1) */)  = (data->modelData->realVarsData[54]/* s23.Twall[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[54].info /* s23.Twall[2] */.name, (modelica_real) (data->localData[0]->realVars[54]/* s23.Twall[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1594
type: SIMPLE_ASSIGN
$START.s23.Twall[1] = s23.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1594};
  (data->modelData->realVarsData[53]/* s23.Twall[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[570]/* s23.T_start PARAM */) ;
    (data->localData[0]->realVars[53]/* s23.Twall[1] STATE(1) */)  = (data->modelData->realVarsData[53]/* s23.Twall[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[53].info /* s23.Twall[1] */.name, (modelica_real) (data->localData[0]->realVars[53]/* s23.Twall[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1595
type: SIMPLE_ASSIGN
$START.s23.Ttilde[2] = s23.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1595};
  (data->modelData->realVarsData[52]/* s23.Ttilde[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[570]/* s23.T_start PARAM */) ;
    (data->localData[0]->realVars[52]/* s23.Ttilde[2] STATE(1) */)  = (data->modelData->realVarsData[52]/* s23.Ttilde[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[52].info /* s23.Ttilde[2] */.name, (modelica_real) (data->localData[0]->realVars[52]/* s23.Ttilde[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1596
type: SIMPLE_ASSIGN
$START.s23.Ttilde[1] = s23.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1596};
  (data->modelData->realVarsData[51]/* s23.Ttilde[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[570]/* s23.T_start PARAM */) ;
    (data->localData[0]->realVars[51]/* s23.Ttilde[1] STATE(1) */)  = (data->modelData->realVarsData[51]/* s23.Ttilde[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[51].info /* s23.Ttilde[1] */.name, (modelica_real) (data->localData[0]->realVars[51]/* s23.Ttilde[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1597
type: SIMPLE_ASSIGN
$START.r32.Twall[2] = r32.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1597};
  (data->modelData->realVarsData[14]/* r32.Twall[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[356]/* r32.T_start PARAM */) ;
    (data->localData[0]->realVars[14]/* r32.Twall[2] STATE(1) */)  = (data->modelData->realVarsData[14]/* r32.Twall[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[14].info /* r32.Twall[2] */.name, (modelica_real) (data->localData[0]->realVars[14]/* r32.Twall[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1598
type: SIMPLE_ASSIGN
$START.r32.Twall[1] = r32.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1598};
  (data->modelData->realVarsData[13]/* r32.Twall[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[356]/* r32.T_start PARAM */) ;
    (data->localData[0]->realVars[13]/* r32.Twall[1] STATE(1) */)  = (data->modelData->realVarsData[13]/* r32.Twall[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[13].info /* r32.Twall[1] */.name, (modelica_real) (data->localData[0]->realVars[13]/* r32.Twall[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1599
type: SIMPLE_ASSIGN
$START.r32.Ttilde[2] = r32.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1599};
  (data->modelData->realVarsData[12]/* r32.Ttilde[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[356]/* r32.T_start PARAM */) ;
    (data->localData[0]->realVars[12]/* r32.Ttilde[2] STATE(1) */)  = (data->modelData->realVarsData[12]/* r32.Ttilde[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[12].info /* r32.Ttilde[2] */.name, (modelica_real) (data->localData[0]->realVars[12]/* r32.Ttilde[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1600
type: SIMPLE_ASSIGN
$START.r32.Ttilde[1] = r32.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1600};
  (data->modelData->realVarsData[11]/* r32.Ttilde[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[356]/* r32.T_start PARAM */) ;
    (data->localData[0]->realVars[11]/* r32.Ttilde[1] STATE(1) */)  = (data->modelData->realVarsData[11]/* r32.Ttilde[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[11].info /* r32.Ttilde[1] */.name, (modelica_real) (data->localData[0]->realVars[11]/* r32.Ttilde[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1601
type: SIMPLE_ASSIGN
$START.r43.Twall[2] = r43.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1601};
  (data->modelData->realVarsData[18]/* r43.Twall[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[377]/* r43.T_start PARAM */) ;
    (data->localData[0]->realVars[18]/* r43.Twall[2] STATE(1) */)  = (data->modelData->realVarsData[18]/* r43.Twall[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[18].info /* r43.Twall[2] */.name, (modelica_real) (data->localData[0]->realVars[18]/* r43.Twall[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1602
type: SIMPLE_ASSIGN
$START.r43.Twall[1] = r43.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1602};
  (data->modelData->realVarsData[17]/* r43.Twall[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[377]/* r43.T_start PARAM */) ;
    (data->localData[0]->realVars[17]/* r43.Twall[1] STATE(1) */)  = (data->modelData->realVarsData[17]/* r43.Twall[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[17].info /* r43.Twall[1] */.name, (modelica_real) (data->localData[0]->realVars[17]/* r43.Twall[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1603
type: SIMPLE_ASSIGN
$START.r43.Ttilde[2] = r43.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1603};
  (data->modelData->realVarsData[16]/* r43.Ttilde[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[377]/* r43.T_start PARAM */) ;
    (data->localData[0]->realVars[16]/* r43.Ttilde[2] STATE(1) */)  = (data->modelData->realVarsData[16]/* r43.Ttilde[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[16].info /* r43.Ttilde[2] */.name, (modelica_real) (data->localData[0]->realVars[16]/* r43.Ttilde[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1604
type: SIMPLE_ASSIGN
$START.r43.Ttilde[1] = r43.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1604};
  (data->modelData->realVarsData[15]/* r43.Ttilde[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[377]/* r43.T_start PARAM */) ;
    (data->localData[0]->realVars[15]/* r43.Ttilde[1] STATE(1) */)  = (data->modelData->realVarsData[15]/* r43.Ttilde[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[15].info /* r43.Ttilde[1] */.name, (modelica_real) (data->localData[0]->realVars[15]/* r43.Ttilde[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1605
type: SIMPLE_ASSIGN
$START.s34.Twall[2] = s34.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1605};
  (data->modelData->realVarsData[58]/* s34.Twall[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[591]/* s34.T_start PARAM */) ;
    (data->localData[0]->realVars[58]/* s34.Twall[2] STATE(1) */)  = (data->modelData->realVarsData[58]/* s34.Twall[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[58].info /* s34.Twall[2] */.name, (modelica_real) (data->localData[0]->realVars[58]/* s34.Twall[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1606
type: SIMPLE_ASSIGN
$START.s34.Twall[1] = s34.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1606};
  (data->modelData->realVarsData[57]/* s34.Twall[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[591]/* s34.T_start PARAM */) ;
    (data->localData[0]->realVars[57]/* s34.Twall[1] STATE(1) */)  = (data->modelData->realVarsData[57]/* s34.Twall[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[57].info /* s34.Twall[1] */.name, (modelica_real) (data->localData[0]->realVars[57]/* s34.Twall[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1607
type: SIMPLE_ASSIGN
$START.s34.Ttilde[2] = s34.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1607};
  (data->modelData->realVarsData[56]/* s34.Ttilde[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[591]/* s34.T_start PARAM */) ;
    (data->localData[0]->realVars[56]/* s34.Ttilde[2] STATE(1) */)  = (data->modelData->realVarsData[56]/* s34.Ttilde[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[56].info /* s34.Ttilde[2] */.name, (modelica_real) (data->localData[0]->realVars[56]/* s34.Ttilde[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1608
type: SIMPLE_ASSIGN
$START.s34.Ttilde[1] = s34.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1608};
  (data->modelData->realVarsData[55]/* s34.Ttilde[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[591]/* s34.T_start PARAM */) ;
    (data->localData[0]->realVars[55]/* s34.Ttilde[1] STATE(1) */)  = (data->modelData->realVarsData[55]/* s34.Ttilde[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[55].info /* s34.Ttilde[1] */.name, (modelica_real) (data->localData[0]->realVars[55]/* s34.Ttilde[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1609
type: SIMPLE_ASSIGN
$START.r21.Twall[2] = r21.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1609};
  (data->modelData->realVarsData[10]/* r21.Twall[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[335]/* r21.T_start PARAM */) ;
    (data->localData[0]->realVars[10]/* r21.Twall[2] STATE(1) */)  = (data->modelData->realVarsData[10]/* r21.Twall[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[10].info /* r21.Twall[2] */.name, (modelica_real) (data->localData[0]->realVars[10]/* r21.Twall[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1610
type: SIMPLE_ASSIGN
$START.r21.Twall[1] = r21.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1610};
  (data->modelData->realVarsData[9]/* r21.Twall[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[335]/* r21.T_start PARAM */) ;
    (data->localData[0]->realVars[9]/* r21.Twall[1] STATE(1) */)  = (data->modelData->realVarsData[9]/* r21.Twall[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[9].info /* r21.Twall[1] */.name, (modelica_real) (data->localData[0]->realVars[9]/* r21.Twall[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1611
type: SIMPLE_ASSIGN
$START.r21.Ttilde[2] = r21.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1611};
  (data->modelData->realVarsData[8]/* r21.Ttilde[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[335]/* r21.T_start PARAM */) ;
    (data->localData[0]->realVars[8]/* r21.Ttilde[2] STATE(1) */)  = (data->modelData->realVarsData[8]/* r21.Ttilde[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[8].info /* r21.Ttilde[2] */.name, (modelica_real) (data->localData[0]->realVars[8]/* r21.Ttilde[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1612
type: SIMPLE_ASSIGN
$START.r21.Ttilde[1] = r21.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1612};
  (data->modelData->realVarsData[7]/* r21.Ttilde[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[335]/* r21.T_start PARAM */) ;
    (data->localData[0]->realVars[7]/* r21.Ttilde[1] STATE(1) */)  = (data->modelData->realVarsData[7]/* r21.Ttilde[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[7].info /* r21.Ttilde[1] */.name, (modelica_real) (data->localData[0]->realVars[7]/* r21.Ttilde[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1613
type: SIMPLE_ASSIGN
$START.r10.Twall[2] = r10.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1613};
  (data->modelData->realVarsData[6]/* r10.Twall[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[313]/* r10.T_start PARAM */) ;
    (data->localData[0]->realVars[6]/* r10.Twall[2] STATE(1) */)  = (data->modelData->realVarsData[6]/* r10.Twall[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[6].info /* r10.Twall[2] */.name, (modelica_real) (data->localData[0]->realVars[6]/* r10.Twall[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1614
type: SIMPLE_ASSIGN
$START.r10.Twall[1] = r10.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1614};
  (data->modelData->realVarsData[5]/* r10.Twall[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[313]/* r10.T_start PARAM */) ;
    (data->localData[0]->realVars[5]/* r10.Twall[1] STATE(1) */)  = (data->modelData->realVarsData[5]/* r10.Twall[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[5].info /* r10.Twall[1] */.name, (modelica_real) (data->localData[0]->realVars[5]/* r10.Twall[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1615
type: SIMPLE_ASSIGN
$START.r10.Ttilde[2] = r10.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1615};
  (data->modelData->realVarsData[4]/* r10.Ttilde[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[313]/* r10.T_start PARAM */) ;
    (data->localData[0]->realVars[4]/* r10.Ttilde[2] STATE(1) */)  = (data->modelData->realVarsData[4]/* r10.Ttilde[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[4].info /* r10.Ttilde[2] */.name, (modelica_real) (data->localData[0]->realVars[4]/* r10.Ttilde[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1616
type: SIMPLE_ASSIGN
$START.r10.Ttilde[1] = r10.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1616};
  (data->modelData->realVarsData[3]/* r10.Ttilde[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[313]/* r10.T_start PARAM */) ;
    (data->localData[0]->realVars[3]/* r10.Ttilde[1] STATE(1) */)  = (data->modelData->realVarsData[3]/* r10.Ttilde[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3].info /* r10.Ttilde[1] */.name, (modelica_real) (data->localData[0]->realVars[3]/* r10.Ttilde[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1617
type: SIMPLE_ASSIGN
$START.s12.Twall[2] = s12.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1617};
  (data->modelData->realVarsData[46]/* s12.Twall[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[528]/* s12.T_start PARAM */) ;
    (data->localData[0]->realVars[46]/* s12.Twall[2] STATE(1) */)  = (data->modelData->realVarsData[46]/* s12.Twall[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[46].info /* s12.Twall[2] */.name, (modelica_real) (data->localData[0]->realVars[46]/* s12.Twall[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1618
type: SIMPLE_ASSIGN
$START.s12.Twall[1] = s12.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1618};
  (data->modelData->realVarsData[45]/* s12.Twall[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[528]/* s12.T_start PARAM */) ;
    (data->localData[0]->realVars[45]/* s12.Twall[1] STATE(1) */)  = (data->modelData->realVarsData[45]/* s12.Twall[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[45].info /* s12.Twall[1] */.name, (modelica_real) (data->localData[0]->realVars[45]/* s12.Twall[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1619
type: SIMPLE_ASSIGN
$START.s12.Ttilde[2] = s12.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1619};
  (data->modelData->realVarsData[44]/* s12.Ttilde[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[528]/* s12.T_start PARAM */) ;
    (data->localData[0]->realVars[44]/* s12.Ttilde[2] STATE(1) */)  = (data->modelData->realVarsData[44]/* s12.Ttilde[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[44].info /* s12.Ttilde[2] */.name, (modelica_real) (data->localData[0]->realVars[44]/* s12.Ttilde[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1620
type: SIMPLE_ASSIGN
$START.s12.Ttilde[1] = s12.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1620};
  (data->modelData->realVarsData[43]/* s12.Ttilde[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[528]/* s12.T_start PARAM */) ;
    (data->localData[0]->realVars[43]/* s12.Ttilde[1] STATE(1) */)  = (data->modelData->realVarsData[43]/* s12.Ttilde[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[43].info /* s12.Ttilde[1] */.name, (modelica_real) (data->localData[0]->realVars[43]/* s12.Ttilde[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1621
type: SIMPLE_ASSIGN
$START.s01.Twall[2] = s01.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1621};
  (data->modelData->realVarsData[42]/* s01.Twall[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[507]/* s01.T_start PARAM */) ;
    (data->localData[0]->realVars[42]/* s01.Twall[2] STATE(1) */)  = (data->modelData->realVarsData[42]/* s01.Twall[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[42].info /* s01.Twall[2] */.name, (modelica_real) (data->localData[0]->realVars[42]/* s01.Twall[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1622
type: SIMPLE_ASSIGN
$START.s01.Twall[1] = s01.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1622};
  (data->modelData->realVarsData[41]/* s01.Twall[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[507]/* s01.T_start PARAM */) ;
    (data->localData[0]->realVars[41]/* s01.Twall[1] STATE(1) */)  = (data->modelData->realVarsData[41]/* s01.Twall[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[41].info /* s01.Twall[1] */.name, (modelica_real) (data->localData[0]->realVars[41]/* s01.Twall[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1623
type: SIMPLE_ASSIGN
$START.s01.Ttilde[2] = s01.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1623};
  (data->modelData->realVarsData[40]/* s01.Ttilde[2] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[507]/* s01.T_start PARAM */) ;
    (data->localData[0]->realVars[40]/* s01.Ttilde[2] STATE(1) */)  = (data->modelData->realVarsData[40]/* s01.Ttilde[2] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[40].info /* s01.Ttilde[2] */.name, (modelica_real) (data->localData[0]->realVars[40]/* s01.Ttilde[2] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1624
type: SIMPLE_ASSIGN
$START.s01.Ttilde[1] = s01.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1624};
  (data->modelData->realVarsData[39]/* s01.Ttilde[1] STATE(1) */).attribute .start = (data->simulationInfo->realParameter[507]/* s01.T_start PARAM */) ;
    (data->localData[0]->realVars[39]/* s01.Ttilde[1] STATE(1) */)  = (data->modelData->realVarsData[39]/* s01.Ttilde[1] STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[39].info /* s01.Ttilde[1] */.name, (modelica_real) (data->localData[0]->realVars[39]/* s01.Ttilde[1] STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1625
type: SIMPLE_ASSIGN
$START.boiler.boilerPIControl.D.x = boiler.boilerPIControl.D.x_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1625};
  (data->modelData->realVarsData[1]/* boiler.boilerPIControl.D.x STATE(1) */).attribute .start = (data->simulationInfo->realParameter[18]/* boiler.boilerPIControl.D.x_start PARAM */) ;
    (data->localData[0]->realVars[1]/* boiler.boilerPIControl.D.x STATE(1) */)  = (data->modelData->realVarsData[1]/* boiler.boilerPIControl.D.x STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1].info /* boiler.boilerPIControl.D.x */.name, (modelica_real) (data->localData[0]->realVars[1]/* boiler.boilerPIControl.D.x STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1626
type: SIMPLE_ASSIGN
$START.boiler.boilerPIControl.I.y = boiler.boilerPIControl.I.y_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1626};
  (data->modelData->realVarsData[2]/* boiler.boilerPIControl.I.y STATE(1) */).attribute .start = (data->simulationInfo->realParameter[23]/* boiler.boilerPIControl.I.y_start PARAM */) ;
    (data->localData[0]->realVars[2]/* boiler.boilerPIControl.I.y STATE(1) */)  = (data->modelData->realVarsData[2]/* boiler.boilerPIControl.I.y STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* boiler.boilerPIControl.I.y */.name, (modelica_real) (data->localData[0]->realVars[2]/* boiler.boilerPIControl.I.y STATE(1) */) );
  TRACE_POP
}

/*
equation index: 1627
type: SIMPLE_ASSIGN
$START.boiler.boilerInsideVolume.Ttilde = boiler.boilerInsideVolume.T_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1627};
  (data->modelData->realVarsData[0]/* boiler.boilerInsideVolume.Ttilde STATE(1) */).attribute .start = (data->simulationInfo->realParameter[11]/* boiler.boilerInsideVolume.T_start PARAM */) ;
    (data->localData[0]->realVars[0]/* boiler.boilerInsideVolume.Ttilde STATE(1) */)  = (data->modelData->realVarsData[0]/* boiler.boilerInsideVolume.Ttilde STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* boiler.boilerInsideVolume.Ttilde */.name, (modelica_real) (data->localData[0]->realVars[0]/* boiler.boilerInsideVolume.Ttilde STATE(1) */) );
  TRACE_POP
}
OMC_DISABLE_OPT
int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  /* min ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating min-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* max ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating max-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* nominal **************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating nominal-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* start ****************************************************** */
  infoStreamPrint(LOG_INIT, 1, "updating primary start-values");
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1553(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1554(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1555(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1556(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1557(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1558(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1559(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1560(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1561(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1562(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1563(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1564(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1565(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1566(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1567(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1568(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1569(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1570(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1571(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1572(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1573(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1574(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1575(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1576(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1577(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1578(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1579(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1580(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1581(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1582(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1583(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1584(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1585(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1586(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1587(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1588(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1589(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1590(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1591(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1592(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1593(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1594(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1595(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1596(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1597(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1598(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1599(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1600(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1601(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1602(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1603(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1604(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1605(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1606(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1607(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1608(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1609(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1610(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1611(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1612(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1613(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1614(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1615(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1616(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1617(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1618(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1619(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1620(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1621(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1622(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1623(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1624(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1625(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1626(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1627(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 1628
type: SIMPLE_ASSIGN
boiler.boilerPIControl.addFF.u2 = boiler.boilerPIControl.FFzero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1628};
  (data->simulationInfo->realParameter[33]/* boiler.boilerPIControl.addFF.u2 PARAM */)  = (data->simulationInfo->realParameter[20]/* boiler.boilerPIControl.FFzero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1629
type: SIMPLE_ASSIGN
boiler.boilerPIControl.FFzero.y = boiler.boilerPIControl.FFzero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1629};
  (data->simulationInfo->realParameter[21]/* boiler.boilerPIControl.FFzero.y PARAM */)  = (data->simulationInfo->realParameter[20]/* boiler.boilerPIControl.FFzero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1630
type: SIMPLE_ASSIGN
load1.loadValveControl.addPID.u2 = load1.loadValveControl.Dzero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1630};
  (data->simulationInfo->realParameter[91]/* load1.loadValveControl.addPID.u2 PARAM */)  = (data->simulationInfo->realParameter[71]/* load1.loadValveControl.Dzero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1631
type: SIMPLE_ASSIGN
load1.loadValveControl.Dzero.y = load1.loadValveControl.Dzero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1631};
  (data->simulationInfo->realParameter[72]/* load1.loadValveControl.Dzero.y PARAM */)  = (data->simulationInfo->realParameter[71]/* load1.loadValveControl.Dzero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1632
type: SIMPLE_ASSIGN
load1.loadValveControl.addPID.u3 = load1.loadValveControl.Izero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1632};
  (data->simulationInfo->realParameter[92]/* load1.loadValveControl.addPID.u3 PARAM */)  = (data->simulationInfo->realParameter[75]/* load1.loadValveControl.Izero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1633
type: SIMPLE_ASSIGN
load1.loadValveControl.Izero.y = load1.loadValveControl.Izero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1633};
  (data->simulationInfo->realParameter[76]/* load1.loadValveControl.Izero.y PARAM */)  = (data->simulationInfo->realParameter[75]/* load1.loadValveControl.Izero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1634
type: SIMPLE_ASSIGN
load1.loadValveControl.addFF.u2 = load1.loadValveControl.FFzero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1634};
  (data->simulationInfo->realParameter[84]/* load1.loadValveControl.addFF.u2 PARAM */)  = (data->simulationInfo->realParameter[73]/* load1.loadValveControl.FFzero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1635
type: SIMPLE_ASSIGN
load1.loadValveControl.FFzero.y = load1.loadValveControl.FFzero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1635};
  (data->simulationInfo->realParameter[74]/* load1.loadValveControl.FFzero.y PARAM */)  = (data->simulationInfo->realParameter[73]/* load1.loadValveControl.FFzero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1636
type: SIMPLE_ASSIGN
load5.loadValveControl.addP.u1 = load_ref.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1636};
  (data->simulationInfo->realParameter[275]/* load5.loadValveControl.addP.u1 PARAM */)  = (data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1637
type: SIMPLE_ASSIGN
load5.loadValveControl.u_s = load_ref.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1637};
  (data->simulationInfo->realParameter[286]/* load5.loadValveControl.u_s PARAM */)  = (data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1638
type: SIMPLE_ASSIGN
load5.valveRef = load_ref.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1638};
  (data->simulationInfo->realParameter[297]/* load5.valveRef PARAM */)  = (data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1639
type: SIMPLE_ASSIGN
load4.loadValveControl.addP.u1 = load_ref.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1639};
  (data->simulationInfo->realParameter[228]/* load4.loadValveControl.addP.u1 PARAM */)  = (data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1640
type: SIMPLE_ASSIGN
load4.loadValveControl.u_s = load_ref.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1640};
  (data->simulationInfo->realParameter[239]/* load4.loadValveControl.u_s PARAM */)  = (data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1641
type: SIMPLE_ASSIGN
load4.valveRef = load_ref.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1641};
  (data->simulationInfo->realParameter[250]/* load4.valveRef PARAM */)  = (data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1642
type: SIMPLE_ASSIGN
load3.loadValveControl.addP.u1 = load_ref.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1642};
  (data->simulationInfo->realParameter[181]/* load3.loadValveControl.addP.u1 PARAM */)  = (data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1643
type: SIMPLE_ASSIGN
load3.loadValveControl.u_s = load_ref.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1643};
  (data->simulationInfo->realParameter[192]/* load3.loadValveControl.u_s PARAM */)  = (data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1644
type: SIMPLE_ASSIGN
load3.valveRef = load_ref.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1644};
  (data->simulationInfo->realParameter[203]/* load3.valveRef PARAM */)  = (data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1645
type: SIMPLE_ASSIGN
load2.loadValveControl.addP.u1 = load_ref.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1645};
  (data->simulationInfo->realParameter[134]/* load2.loadValveControl.addP.u1 PARAM */)  = (data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1646
type: SIMPLE_ASSIGN
load2.loadValveControl.u_s = load_ref.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1646};
  (data->simulationInfo->realParameter[145]/* load2.loadValveControl.u_s PARAM */)  = (data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1647
type: SIMPLE_ASSIGN
load2.valveRef = load_ref.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1647};
  (data->simulationInfo->realParameter[156]/* load2.valveRef PARAM */)  = (data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1648
type: SIMPLE_ASSIGN
load1.loadValveControl.addP.u1 = load_ref.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1648};
  (data->simulationInfo->realParameter[87]/* load1.loadValveControl.addP.u1 PARAM */)  = (data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1649
type: SIMPLE_ASSIGN
load1.loadValveControl.u_s = load_ref.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1649};
  (data->simulationInfo->realParameter[98]/* load1.loadValveControl.u_s PARAM */)  = (data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1650
type: SIMPLE_ASSIGN
load1.valveRef = load_ref.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1650};
  (data->simulationInfo->realParameter[109]/* load1.valveRef PARAM */)  = (data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1651
type: SIMPLE_ASSIGN
load_ref.y = load_ref.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1651};
  (data->simulationInfo->realParameter[299]/* load_ref.y PARAM */)  = (data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1652
type: SIMPLE_ASSIGN
pumpDifferentialPressure.inlet.p = pressureAccumulator.p
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1652};
  (data->simulationInfo->realParameter[306]/* pumpDifferentialPressure.inlet.p PARAM */)  = (data->simulationInfo->realParameter[304]/* pressureAccumulator.p PARAM */) ;
  TRACE_POP
}

/*
equation index: 1653
type: SIMPLE_ASSIGN
s_T_sens.outlet.p = pressureAccumulator.p
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1653};
  (data->simulationInfo->realParameter[691]/* s_T_sens.outlet.p PARAM */)  = (data->simulationInfo->realParameter[304]/* pressureAccumulator.p PARAM */) ;
  TRACE_POP
}

/*
equation index: 1654
type: SIMPLE_ASSIGN
s_T_sens.inlet.p = pressureAccumulator.p
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1654};
  (data->simulationInfo->realParameter[690]/* s_T_sens.inlet.p PARAM */)  = (data->simulationInfo->realParameter[304]/* pressureAccumulator.p PARAM */) ;
  TRACE_POP
}

/*
equation index: 1655
type: SIMPLE_ASSIGN
boiler.outlet.p = pressureAccumulator.p
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1655};
  (data->simulationInfo->realParameter[59]/* boiler.outlet.p PARAM */)  = (data->simulationInfo->realParameter[304]/* pressureAccumulator.p PARAM */) ;
  TRACE_POP
}

/*
equation index: 1656
type: SIMPLE_ASSIGN
boiler.boilerInsideVolume.outlet.p = pressureAccumulator.p
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1656};
  (data->simulationInfo->realParameter[15]/* boiler.boilerInsideVolume.outlet.p PARAM */)  = (data->simulationInfo->realParameter[304]/* pressureAccumulator.p PARAM */) ;
  TRACE_POP
}

/*
equation index: 1657
type: SIMPLE_ASSIGN
boiler.boilerInsideVolume.inlet.p = pressureAccumulator.p
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1657};
  (data->simulationInfo->realParameter[14]/* boiler.boilerInsideVolume.inlet.p PARAM */)  = (data->simulationInfo->realParameter[304]/* pressureAccumulator.p PARAM */) ;
  TRACE_POP
}

/*
equation index: 1658
type: SIMPLE_ASSIGN
boiler.boilePowerUnit.outlet.p = pressureAccumulator.p
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1658};
  (data->simulationInfo->realParameter[8]/* boiler.boilePowerUnit.outlet.p PARAM */)  = (data->simulationInfo->realParameter[304]/* pressureAccumulator.p PARAM */) ;
  TRACE_POP
}

/*
equation index: 1659
type: SIMPLE_ASSIGN
boiler.boilePowerUnit.inlet.p = pressureAccumulator.p
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1659};
  (data->simulationInfo->realParameter[7]/* boiler.boilePowerUnit.inlet.p PARAM */)  = (data->simulationInfo->realParameter[304]/* pressureAccumulator.p PARAM */) ;
  TRACE_POP
}

/*
equation index: 1660
type: SIMPLE_ASSIGN
boiler.inlet.p = pressureAccumulator.p
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1660};
  (data->simulationInfo->realParameter[57]/* boiler.inlet.p PARAM */)  = (data->simulationInfo->realParameter[304]/* pressureAccumulator.p PARAM */) ;
  TRACE_POP
}

/*
equation index: 1661
type: SIMPLE_ASSIGN
r10.outlet.p = pressureAccumulator.p
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1661};
  (data->simulationInfo->realParameter[325]/* r10.outlet.p PARAM */)  = (data->simulationInfo->realParameter[304]/* pressureAccumulator.p PARAM */) ;
  TRACE_POP
}

/*
equation index: 1662
type: SIMPLE_ASSIGN
mfr_rit.inlet.p = pressureAccumulator.p
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1662};
  (data->simulationInfo->realParameter[300]/* mfr_rit.inlet.p PARAM */)  = (data->simulationInfo->realParameter[304]/* pressureAccumulator.p PARAM */) ;
  TRACE_POP
}

/*
equation index: 1663
type: SIMPLE_ASSIGN
mfr_rit.outlet.p = pressureAccumulator.p
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1663};
  (data->simulationInfo->realParameter[301]/* mfr_rit.outlet.p PARAM */)  = (data->simulationInfo->realParameter[304]/* pressureAccumulator.p PARAM */) ;
  TRACE_POP
}

/*
equation index: 1664
type: SIMPLE_ASSIGN
r_T_sens.inlet.p = pressureAccumulator.p
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1664};
  (data->simulationInfo->realParameter[497]/* r_T_sens.inlet.p PARAM */)  = (data->simulationInfo->realParameter[304]/* pressureAccumulator.p PARAM */) ;
  TRACE_POP
}

/*
equation index: 1665
type: SIMPLE_ASSIGN
r_T_sens.outlet.p = pressureAccumulator.p
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1665};
  (data->simulationInfo->realParameter[498]/* r_T_sens.outlet.p PARAM */)  = (data->simulationInfo->realParameter[304]/* pressureAccumulator.p PARAM */) ;
  TRACE_POP
}

/*
equation index: 1666
type: SIMPLE_ASSIGN
pressureAccumulator.fluidPort.p = pressureAccumulator.p
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1666};
  (data->simulationInfo->realParameter[303]/* pressureAccumulator.fluidPort.p PARAM */)  = (data->simulationInfo->realParameter[304]/* pressureAccumulator.p PARAM */) ;
  TRACE_POP
}

/*
equation index: 1667
type: SIMPLE_ASSIGN
load2.loadValveControl.addPID.u2 = load2.loadValveControl.Dzero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1667};
  (data->simulationInfo->realParameter[138]/* load2.loadValveControl.addPID.u2 PARAM */)  = (data->simulationInfo->realParameter[118]/* load2.loadValveControl.Dzero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1668
type: SIMPLE_ASSIGN
load2.loadValveControl.Dzero.y = load2.loadValveControl.Dzero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1668};
  (data->simulationInfo->realParameter[119]/* load2.loadValveControl.Dzero.y PARAM */)  = (data->simulationInfo->realParameter[118]/* load2.loadValveControl.Dzero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1669
type: SIMPLE_ASSIGN
load2.loadValveControl.addPID.u3 = load2.loadValveControl.Izero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1669};
  (data->simulationInfo->realParameter[139]/* load2.loadValveControl.addPID.u3 PARAM */)  = (data->simulationInfo->realParameter[122]/* load2.loadValveControl.Izero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1670
type: SIMPLE_ASSIGN
load2.loadValveControl.Izero.y = load2.loadValveControl.Izero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1670};
  (data->simulationInfo->realParameter[123]/* load2.loadValveControl.Izero.y PARAM */)  = (data->simulationInfo->realParameter[122]/* load2.loadValveControl.Izero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1671
type: SIMPLE_ASSIGN
load2.loadValveControl.addFF.u2 = load2.loadValveControl.FFzero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1671};
  (data->simulationInfo->realParameter[131]/* load2.loadValveControl.addFF.u2 PARAM */)  = (data->simulationInfo->realParameter[120]/* load2.loadValveControl.FFzero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1672
type: SIMPLE_ASSIGN
load2.loadValveControl.FFzero.y = load2.loadValveControl.FFzero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1672};
  (data->simulationInfo->realParameter[121]/* load2.loadValveControl.FFzero.y PARAM */)  = (data->simulationInfo->realParameter[120]/* load2.loadValveControl.FFzero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1673
type: SIMPLE_ASSIGN
load3.loadValveControl.addPID.u2 = load3.loadValveControl.Dzero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1673};
  (data->simulationInfo->realParameter[185]/* load3.loadValveControl.addPID.u2 PARAM */)  = (data->simulationInfo->realParameter[165]/* load3.loadValveControl.Dzero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1674
type: SIMPLE_ASSIGN
load3.loadValveControl.Dzero.y = load3.loadValveControl.Dzero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1674};
  (data->simulationInfo->realParameter[166]/* load3.loadValveControl.Dzero.y PARAM */)  = (data->simulationInfo->realParameter[165]/* load3.loadValveControl.Dzero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1675
type: SIMPLE_ASSIGN
load3.loadValveControl.addPID.u3 = load3.loadValveControl.Izero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1675};
  (data->simulationInfo->realParameter[186]/* load3.loadValveControl.addPID.u3 PARAM */)  = (data->simulationInfo->realParameter[169]/* load3.loadValveControl.Izero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1676
type: SIMPLE_ASSIGN
load3.loadValveControl.Izero.y = load3.loadValveControl.Izero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1676};
  (data->simulationInfo->realParameter[170]/* load3.loadValveControl.Izero.y PARAM */)  = (data->simulationInfo->realParameter[169]/* load3.loadValveControl.Izero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1677
type: SIMPLE_ASSIGN
load3.loadValveControl.addFF.u2 = load3.loadValveControl.FFzero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1677};
  (data->simulationInfo->realParameter[178]/* load3.loadValveControl.addFF.u2 PARAM */)  = (data->simulationInfo->realParameter[167]/* load3.loadValveControl.FFzero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1678
type: SIMPLE_ASSIGN
load3.loadValveControl.FFzero.y = load3.loadValveControl.FFzero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1678};
  (data->simulationInfo->realParameter[168]/* load3.loadValveControl.FFzero.y PARAM */)  = (data->simulationInfo->realParameter[167]/* load3.loadValveControl.FFzero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1679
type: SIMPLE_ASSIGN
load4.loadValveControl.addPID.u2 = load4.loadValveControl.Dzero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1679};
  (data->simulationInfo->realParameter[232]/* load4.loadValveControl.addPID.u2 PARAM */)  = (data->simulationInfo->realParameter[212]/* load4.loadValveControl.Dzero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1680
type: SIMPLE_ASSIGN
load4.loadValveControl.Dzero.y = load4.loadValveControl.Dzero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1680};
  (data->simulationInfo->realParameter[213]/* load4.loadValveControl.Dzero.y PARAM */)  = (data->simulationInfo->realParameter[212]/* load4.loadValveControl.Dzero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1681
type: SIMPLE_ASSIGN
load4.loadValveControl.addPID.u3 = load4.loadValveControl.Izero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1681};
  (data->simulationInfo->realParameter[233]/* load4.loadValveControl.addPID.u3 PARAM */)  = (data->simulationInfo->realParameter[216]/* load4.loadValveControl.Izero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1682
type: SIMPLE_ASSIGN
load4.loadValveControl.Izero.y = load4.loadValveControl.Izero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1682};
  (data->simulationInfo->realParameter[217]/* load4.loadValveControl.Izero.y PARAM */)  = (data->simulationInfo->realParameter[216]/* load4.loadValveControl.Izero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1683
type: SIMPLE_ASSIGN
load4.loadValveControl.addFF.u2 = load4.loadValveControl.FFzero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1683};
  (data->simulationInfo->realParameter[225]/* load4.loadValveControl.addFF.u2 PARAM */)  = (data->simulationInfo->realParameter[214]/* load4.loadValveControl.FFzero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1684
type: SIMPLE_ASSIGN
load4.loadValveControl.FFzero.y = load4.loadValveControl.FFzero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1684};
  (data->simulationInfo->realParameter[215]/* load4.loadValveControl.FFzero.y PARAM */)  = (data->simulationInfo->realParameter[214]/* load4.loadValveControl.FFzero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1685
type: SIMPLE_ASSIGN
load5.loadValveControl.addPID.u2 = load5.loadValveControl.Dzero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1685};
  (data->simulationInfo->realParameter[279]/* load5.loadValveControl.addPID.u2 PARAM */)  = (data->simulationInfo->realParameter[259]/* load5.loadValveControl.Dzero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1686
type: SIMPLE_ASSIGN
load5.loadValveControl.Dzero.y = load5.loadValveControl.Dzero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1686};
  (data->simulationInfo->realParameter[260]/* load5.loadValveControl.Dzero.y PARAM */)  = (data->simulationInfo->realParameter[259]/* load5.loadValveControl.Dzero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1687
type: SIMPLE_ASSIGN
load5.loadValveControl.addPID.u3 = load5.loadValveControl.Izero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1687};
  (data->simulationInfo->realParameter[280]/* load5.loadValveControl.addPID.u3 PARAM */)  = (data->simulationInfo->realParameter[263]/* load5.loadValveControl.Izero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1688
type: SIMPLE_ASSIGN
load5.loadValveControl.Izero.y = load5.loadValveControl.Izero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1688};
  (data->simulationInfo->realParameter[264]/* load5.loadValveControl.Izero.y PARAM */)  = (data->simulationInfo->realParameter[263]/* load5.loadValveControl.Izero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1689
type: SIMPLE_ASSIGN
load5.loadValveControl.addFF.u2 = load5.loadValveControl.FFzero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1689};
  (data->simulationInfo->realParameter[272]/* load5.loadValveControl.addFF.u2 PARAM */)  = (data->simulationInfo->realParameter[261]/* load5.loadValveControl.FFzero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1690
type: SIMPLE_ASSIGN
load5.loadValveControl.FFzero.y = load5.loadValveControl.FFzero.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1690};
  (data->simulationInfo->realParameter[262]/* load5.loadValveControl.FFzero.y PARAM */)  = (data->simulationInfo->realParameter[261]/* load5.loadValveControl.FFzero.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1691
type: SIMPLE_ASSIGN
r74.U_wm = 6.283185307179586 * r74.lambda / log(1.0 + r74.dWall / r74.D)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1691};
  modelica_real tmp0;
  tmp0 = 1.0 + DIVISION_SIM((data->simulationInfo->realParameter[447]/* r74.dWall PARAM */) ,(data->simulationInfo->realParameter[437]/* r74.D PARAM */) ,"r74.D",equationIndexes);
  if(!(tmp0 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(1.0 + r74.dWall / r74.D) was %g should be > 0", tmp0);
    }
  }
  (data->simulationInfo->realParameter[442]/* r74.U_wm PARAM */)  = (6.283185307179586) * (DIVISION_SIM((data->simulationInfo->realParameter[449]/* r74.lambda PARAM */) ,log(tmp0),"log(1.0 + r74.dWall / r74.D)",equationIndexes));
  TRACE_POP
}

/*
equation index: 1692
type: SIMPLE_ASSIGN
r74.Am = 3.141592653589793 * ((0.5 * r74.D + r74.dWall) ^ 2.0 - (0.5 * r74.D) ^ 2.0)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1692};
  modelica_real tmp1;
  modelica_real tmp2;
  tmp1 = (0.5) * ((data->simulationInfo->realParameter[437]/* r74.D PARAM */) ) + (data->simulationInfo->realParameter[447]/* r74.dWall PARAM */) ;
  tmp2 = (0.5) * ((data->simulationInfo->realParameter[437]/* r74.D PARAM */) );
  (data->simulationInfo->realParameter[435]/* r74.Am PARAM */)  = (3.141592653589793) * ((tmp1 * tmp1) - ((tmp2 * tmp2)));
  TRACE_POP
}

/*
equation index: 1693
type: SIMPLE_ASSIGN
r74.Cm = r74.L * r74.Am * r74.rhomcm
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1693};
  (data->simulationInfo->realParameter[436]/* r74.Cm PARAM */)  = ((data->simulationInfo->realParameter[438]/* r74.L PARAM */) ) * (((data->simulationInfo->realParameter[435]/* r74.Am PARAM */) ) * ((data->simulationInfo->realParameter[453]/* r74.rhomcm PARAM */) ));
  TRACE_POP
}

/*
equation index: 1694
type: SIMPLE_ASSIGN
r74.A = 0.7853981633974483 * r74.D ^ 2.0
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1694};
  modelica_real tmp3;
  tmp3 = (data->simulationInfo->realParameter[437]/* r74.D PARAM */) ;
  (data->simulationInfo->realParameter[434]/* r74.A PARAM */)  = (0.7853981633974483) * ((tmp3 * tmp3));
  TRACE_POP
}

/*
equation index: 1695
type: SIMPLE_ASSIGN
r74.m_flow_nom = 985.0 * r74.A * r74.u_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1695};
  (data->simulationInfo->realParameter[450]/* r74.m_flow_nom PARAM */)  = (985.0) * (((data->simulationInfo->realParameter[434]/* r74.A PARAM */) ) * ((data->simulationInfo->realParameter[454]/* r74.u_nom PARAM */) ));
  TRACE_POP
}

/*
equation index: 1696
type: SIMPLE_ASSIGN
r74.omega = 3.141592653589793 * r74.D
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1696};
  (data->simulationInfo->realParameter[451]/* r74.omega PARAM */)  = (3.141592653589793) * ((data->simulationInfo->realParameter[437]/* r74.D PARAM */) );
  TRACE_POP
}

/*
equation index: 1697
type: SIMPLE_ASSIGN
r74.dp_nom = 492.5 * r74.cf * r74.omega * r74.L * r74.u_nom ^ 2.0 / r74.A
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1697};
  modelica_real tmp4;
  tmp4 = (data->simulationInfo->realParameter[454]/* r74.u_nom PARAM */) ;
  (data->simulationInfo->realParameter[448]/* r74.dp_nom PARAM */)  = (492.5) * (((data->simulationInfo->realParameter[444]/* r74.cf PARAM */) ) * (((data->simulationInfo->realParameter[451]/* r74.omega PARAM */) ) * (((data->simulationInfo->realParameter[438]/* r74.L PARAM */) ) * (DIVISION_SIM((tmp4 * tmp4),(data->simulationInfo->realParameter[434]/* r74.A PARAM */) ,"r74.A",equationIndexes)))));
  TRACE_POP
}

/*
equation index: 1698
type: SIMPLE_ASSIGN
r74.V = 0.5 * r74.A * r74.L
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1698};
  (data->simulationInfo->realParameter[443]/* r74.V PARAM */)  = (0.5) * (((data->simulationInfo->realParameter[434]/* r74.A PARAM */) ) * ((data->simulationInfo->realParameter[438]/* r74.L PARAM */) ));
  TRACE_POP
}

/*
equation index: 1702
type: SIMPLE_ASSIGN
r74.UA = 6.283185307179586 * r74.L * r74.conductivity_pipe_ins / log((0.5 * r74.D + r74.dWall + r74.dIns) / (0.5 * r74.D + r74.dWall))
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1702};
  modelica_real tmp5;
  tmp5 = DIVISION_SIM((0.5) * ((data->simulationInfo->realParameter[437]/* r74.D PARAM */) ) + (data->simulationInfo->realParameter[447]/* r74.dWall PARAM */)  + (data->simulationInfo->realParameter[446]/* r74.dIns PARAM */) ,(0.5) * ((data->simulationInfo->realParameter[437]/* r74.D PARAM */) ) + (data->simulationInfo->realParameter[447]/* r74.dWall PARAM */) ,"0.5 * r74.D + r74.dWall",equationIndexes);
  if(!(tmp5 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log((0.5 * r74.D + r74.dWall + r74.dIns) / (0.5 * r74.D + r74.dWall)) was %g should be > 0", tmp5);
    }
  }
  (data->simulationInfo->realParameter[441]/* r74.UA PARAM */)  = (6.283185307179586) * (((data->simulationInfo->realParameter[438]/* r74.L PARAM */) ) * (DIVISION_SIM((data->simulationInfo->realParameter[445]/* r74.conductivity_pipe_ins PARAM */) ,log(tmp5),"log((0.5 * r74.D + r74.dWall + r74.dIns) / (0.5 * r74.D + r74.dWall))",equationIndexes)));
  TRACE_POP
}

/*
equation index: 1704
type: SIMPLE_ASSIGN
s47.U_wm = 6.283185307179586 * s47.lambda / log(1.0 + s47.dWall / s47.D)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1704};
  modelica_real tmp6;
  tmp6 = 1.0 + DIVISION_SIM((data->simulationInfo->realParameter[640]/* s47.dWall PARAM */) ,(data->simulationInfo->realParameter[630]/* s47.D PARAM */) ,"s47.D",equationIndexes);
  if(!(tmp6 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(1.0 + s47.dWall / s47.D) was %g should be > 0", tmp6);
    }
  }
  (data->simulationInfo->realParameter[635]/* s47.U_wm PARAM */)  = (6.283185307179586) * (DIVISION_SIM((data->simulationInfo->realParameter[642]/* s47.lambda PARAM */) ,log(tmp6),"log(1.0 + s47.dWall / s47.D)",equationIndexes));
  TRACE_POP
}

/*
equation index: 1705
type: SIMPLE_ASSIGN
s47.Am = 3.141592653589793 * ((0.5 * s47.D + s47.dWall) ^ 2.0 - (0.5 * s47.D) ^ 2.0)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1705};
  modelica_real tmp7;
  modelica_real tmp8;
  tmp7 = (0.5) * ((data->simulationInfo->realParameter[630]/* s47.D PARAM */) ) + (data->simulationInfo->realParameter[640]/* s47.dWall PARAM */) ;
  tmp8 = (0.5) * ((data->simulationInfo->realParameter[630]/* s47.D PARAM */) );
  (data->simulationInfo->realParameter[628]/* s47.Am PARAM */)  = (3.141592653589793) * ((tmp7 * tmp7) - ((tmp8 * tmp8)));
  TRACE_POP
}

/*
equation index: 1706
type: SIMPLE_ASSIGN
s47.Cm = s47.L * s47.Am * s47.rhomcm
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1706};
  (data->simulationInfo->realParameter[629]/* s47.Cm PARAM */)  = ((data->simulationInfo->realParameter[631]/* s47.L PARAM */) ) * (((data->simulationInfo->realParameter[628]/* s47.Am PARAM */) ) * ((data->simulationInfo->realParameter[646]/* s47.rhomcm PARAM */) ));
  TRACE_POP
}

/*
equation index: 1707
type: SIMPLE_ASSIGN
s47.A = 0.7853981633974483 * s47.D ^ 2.0
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1707};
  modelica_real tmp9;
  tmp9 = (data->simulationInfo->realParameter[630]/* s47.D PARAM */) ;
  (data->simulationInfo->realParameter[627]/* s47.A PARAM */)  = (0.7853981633974483) * ((tmp9 * tmp9));
  TRACE_POP
}

/*
equation index: 1708
type: SIMPLE_ASSIGN
s47.m_flow_nom = 985.0 * s47.A * s47.u_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1708};
  (data->simulationInfo->realParameter[643]/* s47.m_flow_nom PARAM */)  = (985.0) * (((data->simulationInfo->realParameter[627]/* s47.A PARAM */) ) * ((data->simulationInfo->realParameter[647]/* s47.u_nom PARAM */) ));
  TRACE_POP
}

/*
equation index: 1709
type: SIMPLE_ASSIGN
s47.omega = 3.141592653589793 * s47.D
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1709};
  (data->simulationInfo->realParameter[644]/* s47.omega PARAM */)  = (3.141592653589793) * ((data->simulationInfo->realParameter[630]/* s47.D PARAM */) );
  TRACE_POP
}

/*
equation index: 1710
type: SIMPLE_ASSIGN
s47.dp_nom = 492.5 * s47.cf * s47.omega * s47.L * s47.u_nom ^ 2.0 / s47.A
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1710};
  modelica_real tmp10;
  tmp10 = (data->simulationInfo->realParameter[647]/* s47.u_nom PARAM */) ;
  (data->simulationInfo->realParameter[641]/* s47.dp_nom PARAM */)  = (492.5) * (((data->simulationInfo->realParameter[637]/* s47.cf PARAM */) ) * (((data->simulationInfo->realParameter[644]/* s47.omega PARAM */) ) * (((data->simulationInfo->realParameter[631]/* s47.L PARAM */) ) * (DIVISION_SIM((tmp10 * tmp10),(data->simulationInfo->realParameter[627]/* s47.A PARAM */) ,"s47.A",equationIndexes)))));
  TRACE_POP
}

/*
equation index: 1711
type: SIMPLE_ASSIGN
s47.V = 0.5 * s47.A * s47.L
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1711};
  (data->simulationInfo->realParameter[636]/* s47.V PARAM */)  = (0.5) * (((data->simulationInfo->realParameter[627]/* s47.A PARAM */) ) * ((data->simulationInfo->realParameter[631]/* s47.L PARAM */) ));
  TRACE_POP
}

/*
equation index: 1715
type: SIMPLE_ASSIGN
s47.UA = 6.283185307179586 * s47.L * s47.conductivity_pipe_ins / log((0.5 * s47.D + s47.dWall + s47.dIns) / (0.5 * s47.D + s47.dWall))
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1715};
  modelica_real tmp11;
  tmp11 = DIVISION_SIM((0.5) * ((data->simulationInfo->realParameter[630]/* s47.D PARAM */) ) + (data->simulationInfo->realParameter[640]/* s47.dWall PARAM */)  + (data->simulationInfo->realParameter[639]/* s47.dIns PARAM */) ,(0.5) * ((data->simulationInfo->realParameter[630]/* s47.D PARAM */) ) + (data->simulationInfo->realParameter[640]/* s47.dWall PARAM */) ,"0.5 * s47.D + s47.dWall",equationIndexes);
  if(!(tmp11 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log((0.5 * s47.D + s47.dWall + s47.dIns) / (0.5 * s47.D + s47.dWall)) was %g should be > 0", tmp11);
    }
  }
  (data->simulationInfo->realParameter[634]/* s47.UA PARAM */)  = (6.283185307179586) * (((data->simulationInfo->realParameter[631]/* s47.L PARAM */) ) * (DIVISION_SIM((data->simulationInfo->realParameter[638]/* s47.conductivity_pipe_ins PARAM */) ,log(tmp11),"log((0.5 * s47.D + s47.dWall + s47.dIns) / (0.5 * s47.D + s47.dWall))",equationIndexes)));
  TRACE_POP
}

/*
equation index: 1717
type: SIMPLE_ASSIGN
s78.U_wm = 6.283185307179586 * s78.lambda / log(1.0 + s78.dWall / s78.D)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1717};
  modelica_real tmp12;
  tmp12 = 1.0 + DIVISION_SIM((data->simulationInfo->realParameter[682]/* s78.dWall PARAM */) ,(data->simulationInfo->realParameter[672]/* s78.D PARAM */) ,"s78.D",equationIndexes);
  if(!(tmp12 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(1.0 + s78.dWall / s78.D) was %g should be > 0", tmp12);
    }
  }
  (data->simulationInfo->realParameter[677]/* s78.U_wm PARAM */)  = (6.283185307179586) * (DIVISION_SIM((data->simulationInfo->realParameter[684]/* s78.lambda PARAM */) ,log(tmp12),"log(1.0 + s78.dWall / s78.D)",equationIndexes));
  TRACE_POP
}

/*
equation index: 1718
type: SIMPLE_ASSIGN
s78.Am = 3.141592653589793 * ((0.5 * s78.D + s78.dWall) ^ 2.0 - (0.5 * s78.D) ^ 2.0)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1718};
  modelica_real tmp13;
  modelica_real tmp14;
  tmp13 = (0.5) * ((data->simulationInfo->realParameter[672]/* s78.D PARAM */) ) + (data->simulationInfo->realParameter[682]/* s78.dWall PARAM */) ;
  tmp14 = (0.5) * ((data->simulationInfo->realParameter[672]/* s78.D PARAM */) );
  (data->simulationInfo->realParameter[670]/* s78.Am PARAM */)  = (3.141592653589793) * ((tmp13 * tmp13) - ((tmp14 * tmp14)));
  TRACE_POP
}

/*
equation index: 1719
type: SIMPLE_ASSIGN
s78.Cm = s78.L * s78.Am * s78.rhomcm
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1719};
  (data->simulationInfo->realParameter[671]/* s78.Cm PARAM */)  = ((data->simulationInfo->realParameter[673]/* s78.L PARAM */) ) * (((data->simulationInfo->realParameter[670]/* s78.Am PARAM */) ) * ((data->simulationInfo->realParameter[688]/* s78.rhomcm PARAM */) ));
  TRACE_POP
}

/*
equation index: 1720
type: SIMPLE_ASSIGN
s78.A = 0.7853981633974483 * s78.D ^ 2.0
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1720};
  modelica_real tmp15;
  tmp15 = (data->simulationInfo->realParameter[672]/* s78.D PARAM */) ;
  (data->simulationInfo->realParameter[669]/* s78.A PARAM */)  = (0.7853981633974483) * ((tmp15 * tmp15));
  TRACE_POP
}

/*
equation index: 1721
type: SIMPLE_ASSIGN
s78.m_flow_nom = 985.0 * s78.A * s78.u_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1721};
  (data->simulationInfo->realParameter[685]/* s78.m_flow_nom PARAM */)  = (985.0) * (((data->simulationInfo->realParameter[669]/* s78.A PARAM */) ) * ((data->simulationInfo->realParameter[689]/* s78.u_nom PARAM */) ));
  TRACE_POP
}

/*
equation index: 1722
type: SIMPLE_ASSIGN
s78.omega = 3.141592653589793 * s78.D
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1722};
  (data->simulationInfo->realParameter[686]/* s78.omega PARAM */)  = (3.141592653589793) * ((data->simulationInfo->realParameter[672]/* s78.D PARAM */) );
  TRACE_POP
}

/*
equation index: 1723
type: SIMPLE_ASSIGN
s78.dp_nom = 492.5 * s78.cf * s78.omega * s78.L * s78.u_nom ^ 2.0 / s78.A
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1723};
  modelica_real tmp16;
  tmp16 = (data->simulationInfo->realParameter[689]/* s78.u_nom PARAM */) ;
  (data->simulationInfo->realParameter[683]/* s78.dp_nom PARAM */)  = (492.5) * (((data->simulationInfo->realParameter[679]/* s78.cf PARAM */) ) * (((data->simulationInfo->realParameter[686]/* s78.omega PARAM */) ) * (((data->simulationInfo->realParameter[673]/* s78.L PARAM */) ) * (DIVISION_SIM((tmp16 * tmp16),(data->simulationInfo->realParameter[669]/* s78.A PARAM */) ,"s78.A",equationIndexes)))));
  TRACE_POP
}

/*
equation index: 1724
type: SIMPLE_ASSIGN
s78.V = 0.5 * s78.A * s78.L
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1724};
  (data->simulationInfo->realParameter[678]/* s78.V PARAM */)  = (0.5) * (((data->simulationInfo->realParameter[669]/* s78.A PARAM */) ) * ((data->simulationInfo->realParameter[673]/* s78.L PARAM */) ));
  TRACE_POP
}

/*
equation index: 1728
type: SIMPLE_ASSIGN
s78.UA = 6.283185307179586 * s78.L * s78.conductivity_pipe_ins / log((0.5 * s78.D + s78.dWall + s78.dIns) / (0.5 * s78.D + s78.dWall))
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1728};
  modelica_real tmp17;
  tmp17 = DIVISION_SIM((0.5) * ((data->simulationInfo->realParameter[672]/* s78.D PARAM */) ) + (data->simulationInfo->realParameter[682]/* s78.dWall PARAM */)  + (data->simulationInfo->realParameter[681]/* s78.dIns PARAM */) ,(0.5) * ((data->simulationInfo->realParameter[672]/* s78.D PARAM */) ) + (data->simulationInfo->realParameter[682]/* s78.dWall PARAM */) ,"0.5 * s78.D + s78.dWall",equationIndexes);
  if(!(tmp17 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log((0.5 * s78.D + s78.dWall + s78.dIns) / (0.5 * s78.D + s78.dWall)) was %g should be > 0", tmp17);
    }
  }
  (data->simulationInfo->realParameter[676]/* s78.UA PARAM */)  = (6.283185307179586) * (((data->simulationInfo->realParameter[673]/* s78.L PARAM */) ) * (DIVISION_SIM((data->simulationInfo->realParameter[680]/* s78.conductivity_pipe_ins PARAM */) ,log(tmp17),"log((0.5 * s78.D + s78.dWall + s78.dIns) / (0.5 * s78.D + s78.dWall))",equationIndexes)));
  TRACE_POP
}

/*
equation index: 1730
type: SIMPLE_ASSIGN
r87.U_wm = 6.283185307179586 * r87.lambda / log(1.0 + r87.dWall / r87.D)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1730};
  modelica_real tmp18;
  tmp18 = 1.0 + DIVISION_SIM((data->simulationInfo->realParameter[489]/* r87.dWall PARAM */) ,(data->simulationInfo->realParameter[479]/* r87.D PARAM */) ,"r87.D",equationIndexes);
  if(!(tmp18 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(1.0 + r87.dWall / r87.D) was %g should be > 0", tmp18);
    }
  }
  (data->simulationInfo->realParameter[484]/* r87.U_wm PARAM */)  = (6.283185307179586) * (DIVISION_SIM((data->simulationInfo->realParameter[491]/* r87.lambda PARAM */) ,log(tmp18),"log(1.0 + r87.dWall / r87.D)",equationIndexes));
  TRACE_POP
}

/*
equation index: 1731
type: SIMPLE_ASSIGN
r87.Am = 3.141592653589793 * ((0.5 * r87.D + r87.dWall) ^ 2.0 - (0.5 * r87.D) ^ 2.0)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1731};
  modelica_real tmp19;
  modelica_real tmp20;
  tmp19 = (0.5) * ((data->simulationInfo->realParameter[479]/* r87.D PARAM */) ) + (data->simulationInfo->realParameter[489]/* r87.dWall PARAM */) ;
  tmp20 = (0.5) * ((data->simulationInfo->realParameter[479]/* r87.D PARAM */) );
  (data->simulationInfo->realParameter[477]/* r87.Am PARAM */)  = (3.141592653589793) * ((tmp19 * tmp19) - ((tmp20 * tmp20)));
  TRACE_POP
}

/*
equation index: 1732
type: SIMPLE_ASSIGN
r87.Cm = r87.L * r87.Am * r87.rhomcm
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1732};
  (data->simulationInfo->realParameter[478]/* r87.Cm PARAM */)  = ((data->simulationInfo->realParameter[480]/* r87.L PARAM */) ) * (((data->simulationInfo->realParameter[477]/* r87.Am PARAM */) ) * ((data->simulationInfo->realParameter[495]/* r87.rhomcm PARAM */) ));
  TRACE_POP
}

/*
equation index: 1733
type: SIMPLE_ASSIGN
r87.A = 0.7853981633974483 * r87.D ^ 2.0
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1733};
  modelica_real tmp21;
  tmp21 = (data->simulationInfo->realParameter[479]/* r87.D PARAM */) ;
  (data->simulationInfo->realParameter[476]/* r87.A PARAM */)  = (0.7853981633974483) * ((tmp21 * tmp21));
  TRACE_POP
}

/*
equation index: 1734
type: SIMPLE_ASSIGN
r87.m_flow_nom = 985.0 * r87.A * r87.u_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1734};
  (data->simulationInfo->realParameter[492]/* r87.m_flow_nom PARAM */)  = (985.0) * (((data->simulationInfo->realParameter[476]/* r87.A PARAM */) ) * ((data->simulationInfo->realParameter[496]/* r87.u_nom PARAM */) ));
  TRACE_POP
}

/*
equation index: 1735
type: SIMPLE_ASSIGN
r87.omega = 3.141592653589793 * r87.D
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1735};
  (data->simulationInfo->realParameter[493]/* r87.omega PARAM */)  = (3.141592653589793) * ((data->simulationInfo->realParameter[479]/* r87.D PARAM */) );
  TRACE_POP
}

/*
equation index: 1736
type: SIMPLE_ASSIGN
r87.dp_nom = 492.5 * r87.cf * r87.omega * r87.L * r87.u_nom ^ 2.0 / r87.A
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1736};
  modelica_real tmp22;
  tmp22 = (data->simulationInfo->realParameter[496]/* r87.u_nom PARAM */) ;
  (data->simulationInfo->realParameter[490]/* r87.dp_nom PARAM */)  = (492.5) * (((data->simulationInfo->realParameter[486]/* r87.cf PARAM */) ) * (((data->simulationInfo->realParameter[493]/* r87.omega PARAM */) ) * (((data->simulationInfo->realParameter[480]/* r87.L PARAM */) ) * (DIVISION_SIM((tmp22 * tmp22),(data->simulationInfo->realParameter[476]/* r87.A PARAM */) ,"r87.A",equationIndexes)))));
  TRACE_POP
}

/*
equation index: 1737
type: SIMPLE_ASSIGN
r87.V = 0.5 * r87.A * r87.L
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1737};
  (data->simulationInfo->realParameter[485]/* r87.V PARAM */)  = (0.5) * (((data->simulationInfo->realParameter[476]/* r87.A PARAM */) ) * ((data->simulationInfo->realParameter[480]/* r87.L PARAM */) ));
  TRACE_POP
}

/*
equation index: 1741
type: SIMPLE_ASSIGN
r87.UA = 6.283185307179586 * r87.L * r87.conductivity_pipe_ins / log((0.5 * r87.D + r87.dWall + r87.dIns) / (0.5 * r87.D + r87.dWall))
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1741};
  modelica_real tmp23;
  tmp23 = DIVISION_SIM((0.5) * ((data->simulationInfo->realParameter[479]/* r87.D PARAM */) ) + (data->simulationInfo->realParameter[489]/* r87.dWall PARAM */)  + (data->simulationInfo->realParameter[488]/* r87.dIns PARAM */) ,(0.5) * ((data->simulationInfo->realParameter[479]/* r87.D PARAM */) ) + (data->simulationInfo->realParameter[489]/* r87.dWall PARAM */) ,"0.5 * r87.D + r87.dWall",equationIndexes);
  if(!(tmp23 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log((0.5 * r87.D + r87.dWall + r87.dIns) / (0.5 * r87.D + r87.dWall)) was %g should be > 0", tmp23);
    }
  }
  (data->simulationInfo->realParameter[483]/* r87.UA PARAM */)  = (6.283185307179586) * (((data->simulationInfo->realParameter[480]/* r87.L PARAM */) ) * (DIVISION_SIM((data->simulationInfo->realParameter[487]/* r87.conductivity_pipe_ins PARAM */) ,log(tmp23),"log((0.5 * r87.D + r87.dWall + r87.dIns) / (0.5 * r87.D + r87.dWall))",equationIndexes)));
  TRACE_POP
}

/*
equation index: 1743
type: SIMPLE_ASSIGN
load5.loadValve1.dp_nom = load5.dp_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1743};
  (data->simulationInfo->realParameter[255]/* load5.loadValve1.dp_nom PARAM */)  = (data->simulationInfo->realParameter[252]/* load5.dp_nom PARAM */) ;
  TRACE_POP
}

/*
equation index: 1744
type: SIMPLE_ASSIGN
load5.loadValve1.m_nom = load5.m_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1744};
  (data->simulationInfo->realParameter[256]/* load5.loadValve1.m_nom PARAM */)  = (data->simulationInfo->realParameter[294]/* load5.m_nom PARAM */) ;
  TRACE_POP
}

/*
equation index: 1745
type: SIMPLE_ASSIGN
load5.loadValve1.theta_min = load5.theta_min
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1745};
  (data->simulationInfo->realParameter[257]/* load5.loadValve1.theta_min PARAM */)  = (data->simulationInfo->realParameter[295]/* load5.theta_min PARAM */) ;
  TRACE_POP
}

/*
equation index: 1746
type: SIMPLE_ASSIGN
load5.loadValve1.Kv = load5.Kv
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1746};
  (data->simulationInfo->realParameter[254]/* load5.loadValve1.Kv PARAM */)  = (data->simulationInfo->realParameter[251]/* load5.Kv PARAM */) ;
  TRACE_POP
}

/*
equation index: 1747
type: SIMPLE_ASSIGN
load5.loadValve1.theta_nom = load5.theta_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1747};
  (data->simulationInfo->realParameter[258]/* load5.loadValve1.theta_nom PARAM */)  = (data->simulationInfo->realParameter[296]/* load5.theta_nom PARAM */) ;
  TRACE_POP
}

/*
equation index: 1748
type: SIMPLE_ASSIGN
load5.loadValveControl.addFF.k2 = load5.loadValveControl.kFF
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1748};
  (data->simulationInfo->realParameter[271]/* load5.loadValveControl.addFF.k2 PARAM */)  = (data->simulationInfo->realParameter[283]/* load5.loadValveControl.kFF PARAM */) ;
  TRACE_POP
}

/*
equation index: 1753
type: SIMPLE_ASSIGN
load5.loadValveControl.gainPID.k = load5.loadValveControl.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1753};
  (data->simulationInfo->realParameter[281]/* load5.loadValveControl.gainPID.k PARAM */)  = (data->simulationInfo->realParameter[282]/* load5.loadValveControl.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1754
type: SIMPLE_ASSIGN
load5.loadValveControl.addP.k1 = load5.loadValveControl.wp
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1754};
  (data->simulationInfo->realParameter[273]/* load5.loadValveControl.addP.k1 PARAM */)  = (data->simulationInfo->realParameter[288]/* load5.loadValveControl.wp PARAM */) ;
  TRACE_POP
}

/*
equation index: 1763
type: SIMPLE_ASSIGN
s67.U_wm = 6.283185307179586 * s67.lambda / log(1.0 + s67.dWall / s67.D)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1763};
  modelica_real tmp24;
  tmp24 = 1.0 + DIVISION_SIM((data->simulationInfo->realParameter[661]/* s67.dWall PARAM */) ,(data->simulationInfo->realParameter[651]/* s67.D PARAM */) ,"s67.D",equationIndexes);
  if(!(tmp24 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(1.0 + s67.dWall / s67.D) was %g should be > 0", tmp24);
    }
  }
  (data->simulationInfo->realParameter[656]/* s67.U_wm PARAM */)  = (6.283185307179586) * (DIVISION_SIM((data->simulationInfo->realParameter[663]/* s67.lambda PARAM */) ,log(tmp24),"log(1.0 + s67.dWall / s67.D)",equationIndexes));
  TRACE_POP
}

/*
equation index: 1764
type: SIMPLE_ASSIGN
s67.Am = 3.141592653589793 * ((0.5 * s67.D + s67.dWall) ^ 2.0 - (0.5 * s67.D) ^ 2.0)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1764};
  modelica_real tmp25;
  modelica_real tmp26;
  tmp25 = (0.5) * ((data->simulationInfo->realParameter[651]/* s67.D PARAM */) ) + (data->simulationInfo->realParameter[661]/* s67.dWall PARAM */) ;
  tmp26 = (0.5) * ((data->simulationInfo->realParameter[651]/* s67.D PARAM */) );
  (data->simulationInfo->realParameter[649]/* s67.Am PARAM */)  = (3.141592653589793) * ((tmp25 * tmp25) - ((tmp26 * tmp26)));
  TRACE_POP
}

/*
equation index: 1765
type: SIMPLE_ASSIGN
s67.Cm = s67.L * s67.Am * s67.rhomcm
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1765};
  (data->simulationInfo->realParameter[650]/* s67.Cm PARAM */)  = ((data->simulationInfo->realParameter[652]/* s67.L PARAM */) ) * (((data->simulationInfo->realParameter[649]/* s67.Am PARAM */) ) * ((data->simulationInfo->realParameter[667]/* s67.rhomcm PARAM */) ));
  TRACE_POP
}

/*
equation index: 1766
type: SIMPLE_ASSIGN
s67.A = 0.7853981633974483 * s67.D ^ 2.0
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1766};
  modelica_real tmp27;
  tmp27 = (data->simulationInfo->realParameter[651]/* s67.D PARAM */) ;
  (data->simulationInfo->realParameter[648]/* s67.A PARAM */)  = (0.7853981633974483) * ((tmp27 * tmp27));
  TRACE_POP
}

/*
equation index: 1767
type: SIMPLE_ASSIGN
s67.m_flow_nom = 985.0 * s67.A * s67.u_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1767};
  (data->simulationInfo->realParameter[664]/* s67.m_flow_nom PARAM */)  = (985.0) * (((data->simulationInfo->realParameter[648]/* s67.A PARAM */) ) * ((data->simulationInfo->realParameter[668]/* s67.u_nom PARAM */) ));
  TRACE_POP
}

/*
equation index: 1768
type: SIMPLE_ASSIGN
s67.omega = 3.141592653589793 * s67.D
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1768};
  (data->simulationInfo->realParameter[665]/* s67.omega PARAM */)  = (3.141592653589793) * ((data->simulationInfo->realParameter[651]/* s67.D PARAM */) );
  TRACE_POP
}

/*
equation index: 1769
type: SIMPLE_ASSIGN
s67.dp_nom = 492.5 * s67.cf * s67.omega * s67.L * s67.u_nom ^ 2.0 / s67.A
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1769};
  modelica_real tmp28;
  tmp28 = (data->simulationInfo->realParameter[668]/* s67.u_nom PARAM */) ;
  (data->simulationInfo->realParameter[662]/* s67.dp_nom PARAM */)  = (492.5) * (((data->simulationInfo->realParameter[658]/* s67.cf PARAM */) ) * (((data->simulationInfo->realParameter[665]/* s67.omega PARAM */) ) * (((data->simulationInfo->realParameter[652]/* s67.L PARAM */) ) * (DIVISION_SIM((tmp28 * tmp28),(data->simulationInfo->realParameter[648]/* s67.A PARAM */) ,"s67.A",equationIndexes)))));
  TRACE_POP
}

/*
equation index: 1770
type: SIMPLE_ASSIGN
s67.V = 0.5 * s67.A * s67.L
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1770};
  (data->simulationInfo->realParameter[657]/* s67.V PARAM */)  = (0.5) * (((data->simulationInfo->realParameter[648]/* s67.A PARAM */) ) * ((data->simulationInfo->realParameter[652]/* s67.L PARAM */) ));
  TRACE_POP
}

/*
equation index: 1774
type: SIMPLE_ASSIGN
s67.UA = 6.283185307179586 * s67.L * s67.conductivity_pipe_ins / log((0.5 * s67.D + s67.dWall + s67.dIns) / (0.5 * s67.D + s67.dWall))
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1774};
  modelica_real tmp29;
  tmp29 = DIVISION_SIM((0.5) * ((data->simulationInfo->realParameter[651]/* s67.D PARAM */) ) + (data->simulationInfo->realParameter[661]/* s67.dWall PARAM */)  + (data->simulationInfo->realParameter[660]/* s67.dIns PARAM */) ,(0.5) * ((data->simulationInfo->realParameter[651]/* s67.D PARAM */) ) + (data->simulationInfo->realParameter[661]/* s67.dWall PARAM */) ,"0.5 * s67.D + s67.dWall",equationIndexes);
  if(!(tmp29 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log((0.5 * s67.D + s67.dWall + s67.dIns) / (0.5 * s67.D + s67.dWall)) was %g should be > 0", tmp29);
    }
  }
  (data->simulationInfo->realParameter[655]/* s67.UA PARAM */)  = (6.283185307179586) * (((data->simulationInfo->realParameter[652]/* s67.L PARAM */) ) * (DIVISION_SIM((data->simulationInfo->realParameter[659]/* s67.conductivity_pipe_ins PARAM */) ,log(tmp29),"log((0.5 * s67.D + s67.dWall + s67.dIns) / (0.5 * s67.D + s67.dWall))",equationIndexes)));
  TRACE_POP
}

/*
equation index: 1776
type: SIMPLE_ASSIGN
load4.loadValve1.dp_nom = load4.dp_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1776};
  (data->simulationInfo->realParameter[208]/* load4.loadValve1.dp_nom PARAM */)  = (data->simulationInfo->realParameter[205]/* load4.dp_nom PARAM */) ;
  TRACE_POP
}

/*
equation index: 1777
type: SIMPLE_ASSIGN
load4.loadValve1.m_nom = load4.m_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1777};
  (data->simulationInfo->realParameter[209]/* load4.loadValve1.m_nom PARAM */)  = (data->simulationInfo->realParameter[247]/* load4.m_nom PARAM */) ;
  TRACE_POP
}

/*
equation index: 1778
type: SIMPLE_ASSIGN
load4.loadValve1.theta_min = load4.theta_min
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1778};
  (data->simulationInfo->realParameter[210]/* load4.loadValve1.theta_min PARAM */)  = (data->simulationInfo->realParameter[248]/* load4.theta_min PARAM */) ;
  TRACE_POP
}

/*
equation index: 1779
type: SIMPLE_ASSIGN
load4.loadValve1.Kv = load4.Kv
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1779};
  (data->simulationInfo->realParameter[207]/* load4.loadValve1.Kv PARAM */)  = (data->simulationInfo->realParameter[204]/* load4.Kv PARAM */) ;
  TRACE_POP
}

/*
equation index: 1780
type: SIMPLE_ASSIGN
load4.loadValve1.theta_nom = load4.theta_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1780};
  (data->simulationInfo->realParameter[211]/* load4.loadValve1.theta_nom PARAM */)  = (data->simulationInfo->realParameter[249]/* load4.theta_nom PARAM */) ;
  TRACE_POP
}

/*
equation index: 1781
type: SIMPLE_ASSIGN
load4.loadValveControl.addFF.k2 = load4.loadValveControl.kFF
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1781};
  (data->simulationInfo->realParameter[224]/* load4.loadValveControl.addFF.k2 PARAM */)  = (data->simulationInfo->realParameter[236]/* load4.loadValveControl.kFF PARAM */) ;
  TRACE_POP
}

/*
equation index: 1786
type: SIMPLE_ASSIGN
load4.loadValveControl.gainPID.k = load4.loadValveControl.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1786};
  (data->simulationInfo->realParameter[234]/* load4.loadValveControl.gainPID.k PARAM */)  = (data->simulationInfo->realParameter[235]/* load4.loadValveControl.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1787
type: SIMPLE_ASSIGN
load4.loadValveControl.addP.k1 = load4.loadValveControl.wp
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1787};
  (data->simulationInfo->realParameter[226]/* load4.loadValveControl.addP.k1 PARAM */)  = (data->simulationInfo->realParameter[241]/* load4.loadValveControl.wp PARAM */) ;
  TRACE_POP
}

/*
equation index: 1796
type: SIMPLE_ASSIGN
s16.U_wm = 6.283185307179586 * s16.lambda / log(1.0 + s16.dWall / s16.D)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1796};
  modelica_real tmp30;
  tmp30 = 1.0 + DIVISION_SIM((data->simulationInfo->realParameter[556]/* s16.dWall PARAM */) ,(data->simulationInfo->realParameter[546]/* s16.D PARAM */) ,"s16.D",equationIndexes);
  if(!(tmp30 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(1.0 + s16.dWall / s16.D) was %g should be > 0", tmp30);
    }
  }
  (data->simulationInfo->realParameter[551]/* s16.U_wm PARAM */)  = (6.283185307179586) * (DIVISION_SIM((data->simulationInfo->realParameter[558]/* s16.lambda PARAM */) ,log(tmp30),"log(1.0 + s16.dWall / s16.D)",equationIndexes));
  TRACE_POP
}

/*
equation index: 1797
type: SIMPLE_ASSIGN
s16.Am = 3.141592653589793 * ((0.5 * s16.D + s16.dWall) ^ 2.0 - (0.5 * s16.D) ^ 2.0)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1797};
  modelica_real tmp31;
  modelica_real tmp32;
  tmp31 = (0.5) * ((data->simulationInfo->realParameter[546]/* s16.D PARAM */) ) + (data->simulationInfo->realParameter[556]/* s16.dWall PARAM */) ;
  tmp32 = (0.5) * ((data->simulationInfo->realParameter[546]/* s16.D PARAM */) );
  (data->simulationInfo->realParameter[544]/* s16.Am PARAM */)  = (3.141592653589793) * ((tmp31 * tmp31) - ((tmp32 * tmp32)));
  TRACE_POP
}

/*
equation index: 1798
type: SIMPLE_ASSIGN
s16.Cm = s16.L * s16.Am * s16.rhomcm
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1798};
  (data->simulationInfo->realParameter[545]/* s16.Cm PARAM */)  = ((data->simulationInfo->realParameter[547]/* s16.L PARAM */) ) * (((data->simulationInfo->realParameter[544]/* s16.Am PARAM */) ) * ((data->simulationInfo->realParameter[562]/* s16.rhomcm PARAM */) ));
  TRACE_POP
}

/*
equation index: 1799
type: SIMPLE_ASSIGN
s16.A = 0.7853981633974483 * s16.D ^ 2.0
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1799};
  modelica_real tmp33;
  tmp33 = (data->simulationInfo->realParameter[546]/* s16.D PARAM */) ;
  (data->simulationInfo->realParameter[543]/* s16.A PARAM */)  = (0.7853981633974483) * ((tmp33 * tmp33));
  TRACE_POP
}

/*
equation index: 1800
type: SIMPLE_ASSIGN
s16.m_flow_nom = 985.0 * s16.A * s16.u_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1800};
  (data->simulationInfo->realParameter[559]/* s16.m_flow_nom PARAM */)  = (985.0) * (((data->simulationInfo->realParameter[543]/* s16.A PARAM */) ) * ((data->simulationInfo->realParameter[563]/* s16.u_nom PARAM */) ));
  TRACE_POP
}

/*
equation index: 1801
type: SIMPLE_ASSIGN
s16.omega = 3.141592653589793 * s16.D
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1801};
  (data->simulationInfo->realParameter[560]/* s16.omega PARAM */)  = (3.141592653589793) * ((data->simulationInfo->realParameter[546]/* s16.D PARAM */) );
  TRACE_POP
}

/*
equation index: 1802
type: SIMPLE_ASSIGN
s16.dp_nom = 492.5 * s16.cf * s16.omega * s16.L * s16.u_nom ^ 2.0 / s16.A
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1802};
  modelica_real tmp34;
  tmp34 = (data->simulationInfo->realParameter[563]/* s16.u_nom PARAM */) ;
  (data->simulationInfo->realParameter[557]/* s16.dp_nom PARAM */)  = (492.5) * (((data->simulationInfo->realParameter[553]/* s16.cf PARAM */) ) * (((data->simulationInfo->realParameter[560]/* s16.omega PARAM */) ) * (((data->simulationInfo->realParameter[547]/* s16.L PARAM */) ) * (DIVISION_SIM((tmp34 * tmp34),(data->simulationInfo->realParameter[543]/* s16.A PARAM */) ,"s16.A",equationIndexes)))));
  TRACE_POP
}

/*
equation index: 1803
type: SIMPLE_ASSIGN
s16.V = 0.5 * s16.A * s16.L
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1803};
  (data->simulationInfo->realParameter[552]/* s16.V PARAM */)  = (0.5) * (((data->simulationInfo->realParameter[543]/* s16.A PARAM */) ) * ((data->simulationInfo->realParameter[547]/* s16.L PARAM */) ));
  TRACE_POP
}

/*
equation index: 1807
type: SIMPLE_ASSIGN
s16.UA = 6.283185307179586 * s16.L * s16.conductivity_pipe_ins / log((0.5 * s16.D + s16.dWall + s16.dIns) / (0.5 * s16.D + s16.dWall))
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1807};
  modelica_real tmp35;
  tmp35 = DIVISION_SIM((0.5) * ((data->simulationInfo->realParameter[546]/* s16.D PARAM */) ) + (data->simulationInfo->realParameter[556]/* s16.dWall PARAM */)  + (data->simulationInfo->realParameter[555]/* s16.dIns PARAM */) ,(0.5) * ((data->simulationInfo->realParameter[546]/* s16.D PARAM */) ) + (data->simulationInfo->realParameter[556]/* s16.dWall PARAM */) ,"0.5 * s16.D + s16.dWall",equationIndexes);
  if(!(tmp35 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log((0.5 * s16.D + s16.dWall + s16.dIns) / (0.5 * s16.D + s16.dWall)) was %g should be > 0", tmp35);
    }
  }
  (data->simulationInfo->realParameter[550]/* s16.UA PARAM */)  = (6.283185307179586) * (((data->simulationInfo->realParameter[547]/* s16.L PARAM */) ) * (DIVISION_SIM((data->simulationInfo->realParameter[554]/* s16.conductivity_pipe_ins PARAM */) ,log(tmp35),"log((0.5 * s16.D + s16.dWall + s16.dIns) / (0.5 * s16.D + s16.dWall))",equationIndexes)));
  TRACE_POP
}

/*
equation index: 1809
type: SIMPLE_ASSIGN
r61.U_wm = 6.283185307179586 * r61.lambda / log(1.0 + r61.dWall / r61.D)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1809};
  modelica_real tmp36;
  tmp36 = 1.0 + DIVISION_SIM((data->simulationInfo->realParameter[426]/* r61.dWall PARAM */) ,(data->simulationInfo->realParameter[416]/* r61.D PARAM */) ,"r61.D",equationIndexes);
  if(!(tmp36 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(1.0 + r61.dWall / r61.D) was %g should be > 0", tmp36);
    }
  }
  (data->simulationInfo->realParameter[421]/* r61.U_wm PARAM */)  = (6.283185307179586) * (DIVISION_SIM((data->simulationInfo->realParameter[428]/* r61.lambda PARAM */) ,log(tmp36),"log(1.0 + r61.dWall / r61.D)",equationIndexes));
  TRACE_POP
}

/*
equation index: 1810
type: SIMPLE_ASSIGN
r61.Am = 3.141592653589793 * ((0.5 * r61.D + r61.dWall) ^ 2.0 - (0.5 * r61.D) ^ 2.0)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1810};
  modelica_real tmp37;
  modelica_real tmp38;
  tmp37 = (0.5) * ((data->simulationInfo->realParameter[416]/* r61.D PARAM */) ) + (data->simulationInfo->realParameter[426]/* r61.dWall PARAM */) ;
  tmp38 = (0.5) * ((data->simulationInfo->realParameter[416]/* r61.D PARAM */) );
  (data->simulationInfo->realParameter[414]/* r61.Am PARAM */)  = (3.141592653589793) * ((tmp37 * tmp37) - ((tmp38 * tmp38)));
  TRACE_POP
}

/*
equation index: 1811
type: SIMPLE_ASSIGN
r61.Cm = r61.L * r61.Am * r61.rhomcm
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1811};
  (data->simulationInfo->realParameter[415]/* r61.Cm PARAM */)  = ((data->simulationInfo->realParameter[417]/* r61.L PARAM */) ) * (((data->simulationInfo->realParameter[414]/* r61.Am PARAM */) ) * ((data->simulationInfo->realParameter[432]/* r61.rhomcm PARAM */) ));
  TRACE_POP
}

/*
equation index: 1812
type: SIMPLE_ASSIGN
r61.A = 0.7853981633974483 * r61.D ^ 2.0
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1812};
  modelica_real tmp39;
  tmp39 = (data->simulationInfo->realParameter[416]/* r61.D PARAM */) ;
  (data->simulationInfo->realParameter[413]/* r61.A PARAM */)  = (0.7853981633974483) * ((tmp39 * tmp39));
  TRACE_POP
}

/*
equation index: 1813
type: SIMPLE_ASSIGN
r61.m_flow_nom = 985.0 * r61.A * r61.u_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1813};
  (data->simulationInfo->realParameter[429]/* r61.m_flow_nom PARAM */)  = (985.0) * (((data->simulationInfo->realParameter[413]/* r61.A PARAM */) ) * ((data->simulationInfo->realParameter[433]/* r61.u_nom PARAM */) ));
  TRACE_POP
}

/*
equation index: 1814
type: SIMPLE_ASSIGN
r61.omega = 3.141592653589793 * r61.D
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1814};
  (data->simulationInfo->realParameter[430]/* r61.omega PARAM */)  = (3.141592653589793) * ((data->simulationInfo->realParameter[416]/* r61.D PARAM */) );
  TRACE_POP
}

/*
equation index: 1815
type: SIMPLE_ASSIGN
r61.dp_nom = 492.5 * r61.cf * r61.omega * r61.L * r61.u_nom ^ 2.0 / r61.A
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1815};
  modelica_real tmp40;
  tmp40 = (data->simulationInfo->realParameter[433]/* r61.u_nom PARAM */) ;
  (data->simulationInfo->realParameter[427]/* r61.dp_nom PARAM */)  = (492.5) * (((data->simulationInfo->realParameter[423]/* r61.cf PARAM */) ) * (((data->simulationInfo->realParameter[430]/* r61.omega PARAM */) ) * (((data->simulationInfo->realParameter[417]/* r61.L PARAM */) ) * (DIVISION_SIM((tmp40 * tmp40),(data->simulationInfo->realParameter[413]/* r61.A PARAM */) ,"r61.A",equationIndexes)))));
  TRACE_POP
}

/*
equation index: 1816
type: SIMPLE_ASSIGN
r61.V = 0.5 * r61.A * r61.L
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1816};
  (data->simulationInfo->realParameter[422]/* r61.V PARAM */)  = (0.5) * (((data->simulationInfo->realParameter[413]/* r61.A PARAM */) ) * ((data->simulationInfo->realParameter[417]/* r61.L PARAM */) ));
  TRACE_POP
}

/*
equation index: 1820
type: SIMPLE_ASSIGN
r61.UA = 6.283185307179586 * r61.L * r61.conductivity_pipe_ins / log((0.5 * r61.D + r61.dWall + r61.dIns) / (0.5 * r61.D + r61.dWall))
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1820};
  modelica_real tmp41;
  tmp41 = DIVISION_SIM((0.5) * ((data->simulationInfo->realParameter[416]/* r61.D PARAM */) ) + (data->simulationInfo->realParameter[426]/* r61.dWall PARAM */)  + (data->simulationInfo->realParameter[425]/* r61.dIns PARAM */) ,(0.5) * ((data->simulationInfo->realParameter[416]/* r61.D PARAM */) ) + (data->simulationInfo->realParameter[426]/* r61.dWall PARAM */) ,"0.5 * r61.D + r61.dWall",equationIndexes);
  if(!(tmp41 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log((0.5 * r61.D + r61.dWall + r61.dIns) / (0.5 * r61.D + r61.dWall)) was %g should be > 0", tmp41);
    }
  }
  (data->simulationInfo->realParameter[420]/* r61.UA PARAM */)  = (6.283185307179586) * (((data->simulationInfo->realParameter[417]/* r61.L PARAM */) ) * (DIVISION_SIM((data->simulationInfo->realParameter[424]/* r61.conductivity_pipe_ins PARAM */) ,log(tmp41),"log((0.5 * r61.D + r61.dWall + r61.dIns) / (0.5 * r61.D + r61.dWall))",equationIndexes)));
  TRACE_POP
}

/*
equation index: 1822
type: SIMPLE_ASSIGN
r76.U_wm = 6.283185307179586 * r76.lambda / log(1.0 + r76.dWall / r76.D)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1822(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1822};
  modelica_real tmp42;
  tmp42 = 1.0 + DIVISION_SIM((data->simulationInfo->realParameter[468]/* r76.dWall PARAM */) ,(data->simulationInfo->realParameter[458]/* r76.D PARAM */) ,"r76.D",equationIndexes);
  if(!(tmp42 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(1.0 + r76.dWall / r76.D) was %g should be > 0", tmp42);
    }
  }
  (data->simulationInfo->realParameter[463]/* r76.U_wm PARAM */)  = (6.283185307179586) * (DIVISION_SIM((data->simulationInfo->realParameter[470]/* r76.lambda PARAM */) ,log(tmp42),"log(1.0 + r76.dWall / r76.D)",equationIndexes));
  TRACE_POP
}

/*
equation index: 1823
type: SIMPLE_ASSIGN
r76.Am = 3.141592653589793 * ((0.5 * r76.D + r76.dWall) ^ 2.0 - (0.5 * r76.D) ^ 2.0)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1823(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1823};
  modelica_real tmp43;
  modelica_real tmp44;
  tmp43 = (0.5) * ((data->simulationInfo->realParameter[458]/* r76.D PARAM */) ) + (data->simulationInfo->realParameter[468]/* r76.dWall PARAM */) ;
  tmp44 = (0.5) * ((data->simulationInfo->realParameter[458]/* r76.D PARAM */) );
  (data->simulationInfo->realParameter[456]/* r76.Am PARAM */)  = (3.141592653589793) * ((tmp43 * tmp43) - ((tmp44 * tmp44)));
  TRACE_POP
}

/*
equation index: 1824
type: SIMPLE_ASSIGN
r76.Cm = r76.L * r76.Am * r76.rhomcm
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1824(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1824};
  (data->simulationInfo->realParameter[457]/* r76.Cm PARAM */)  = ((data->simulationInfo->realParameter[459]/* r76.L PARAM */) ) * (((data->simulationInfo->realParameter[456]/* r76.Am PARAM */) ) * ((data->simulationInfo->realParameter[474]/* r76.rhomcm PARAM */) ));
  TRACE_POP
}

/*
equation index: 1825
type: SIMPLE_ASSIGN
r76.A = 0.7853981633974483 * r76.D ^ 2.0
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1825(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1825};
  modelica_real tmp45;
  tmp45 = (data->simulationInfo->realParameter[458]/* r76.D PARAM */) ;
  (data->simulationInfo->realParameter[455]/* r76.A PARAM */)  = (0.7853981633974483) * ((tmp45 * tmp45));
  TRACE_POP
}

/*
equation index: 1826
type: SIMPLE_ASSIGN
r76.m_flow_nom = 985.0 * r76.A * r76.u_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1826(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1826};
  (data->simulationInfo->realParameter[471]/* r76.m_flow_nom PARAM */)  = (985.0) * (((data->simulationInfo->realParameter[455]/* r76.A PARAM */) ) * ((data->simulationInfo->realParameter[475]/* r76.u_nom PARAM */) ));
  TRACE_POP
}

/*
equation index: 1827
type: SIMPLE_ASSIGN
r76.omega = 3.141592653589793 * r76.D
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1827(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1827};
  (data->simulationInfo->realParameter[472]/* r76.omega PARAM */)  = (3.141592653589793) * ((data->simulationInfo->realParameter[458]/* r76.D PARAM */) );
  TRACE_POP
}

/*
equation index: 1828
type: SIMPLE_ASSIGN
r76.dp_nom = 492.5 * r76.cf * r76.omega * r76.L * r76.u_nom ^ 2.0 / r76.A
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1828(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1828};
  modelica_real tmp46;
  tmp46 = (data->simulationInfo->realParameter[475]/* r76.u_nom PARAM */) ;
  (data->simulationInfo->realParameter[469]/* r76.dp_nom PARAM */)  = (492.5) * (((data->simulationInfo->realParameter[465]/* r76.cf PARAM */) ) * (((data->simulationInfo->realParameter[472]/* r76.omega PARAM */) ) * (((data->simulationInfo->realParameter[459]/* r76.L PARAM */) ) * (DIVISION_SIM((tmp46 * tmp46),(data->simulationInfo->realParameter[455]/* r76.A PARAM */) ,"r76.A",equationIndexes)))));
  TRACE_POP
}

/*
equation index: 1829
type: SIMPLE_ASSIGN
r76.V = 0.5 * r76.A * r76.L
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1829(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1829};
  (data->simulationInfo->realParameter[464]/* r76.V PARAM */)  = (0.5) * (((data->simulationInfo->realParameter[455]/* r76.A PARAM */) ) * ((data->simulationInfo->realParameter[459]/* r76.L PARAM */) ));
  TRACE_POP
}

/*
equation index: 1833
type: SIMPLE_ASSIGN
r76.UA = 6.283185307179586 * r76.L * r76.conductivity_pipe_ins / log((0.5 * r76.D + r76.dWall + r76.dIns) / (0.5 * r76.D + r76.dWall))
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1833(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1833};
  modelica_real tmp47;
  tmp47 = DIVISION_SIM((0.5) * ((data->simulationInfo->realParameter[458]/* r76.D PARAM */) ) + (data->simulationInfo->realParameter[468]/* r76.dWall PARAM */)  + (data->simulationInfo->realParameter[467]/* r76.dIns PARAM */) ,(0.5) * ((data->simulationInfo->realParameter[458]/* r76.D PARAM */) ) + (data->simulationInfo->realParameter[468]/* r76.dWall PARAM */) ,"0.5 * r76.D + r76.dWall",equationIndexes);
  if(!(tmp47 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log((0.5 * r76.D + r76.dWall + r76.dIns) / (0.5 * r76.D + r76.dWall)) was %g should be > 0", tmp47);
    }
  }
  (data->simulationInfo->realParameter[462]/* r76.UA PARAM */)  = (6.283185307179586) * (((data->simulationInfo->realParameter[459]/* r76.L PARAM */) ) * (DIVISION_SIM((data->simulationInfo->realParameter[466]/* r76.conductivity_pipe_ins PARAM */) ,log(tmp47),"log((0.5 * r76.D + r76.dWall + r76.dIns) / (0.5 * r76.D + r76.dWall))",equationIndexes)));
  TRACE_POP
}

/*
equation index: 1835
type: SIMPLE_ASSIGN
s45.U_wm = 6.283185307179586 * s45.lambda / log(1.0 + s45.dWall / s45.D)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1835(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1835};
  modelica_real tmp48;
  tmp48 = 1.0 + DIVISION_SIM((data->simulationInfo->realParameter[619]/* s45.dWall PARAM */) ,(data->simulationInfo->realParameter[609]/* s45.D PARAM */) ,"s45.D",equationIndexes);
  if(!(tmp48 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(1.0 + s45.dWall / s45.D) was %g should be > 0", tmp48);
    }
  }
  (data->simulationInfo->realParameter[614]/* s45.U_wm PARAM */)  = (6.283185307179586) * (DIVISION_SIM((data->simulationInfo->realParameter[621]/* s45.lambda PARAM */) ,log(tmp48),"log(1.0 + s45.dWall / s45.D)",equationIndexes));
  TRACE_POP
}

/*
equation index: 1836
type: SIMPLE_ASSIGN
s45.Am = 3.141592653589793 * ((0.5 * s45.D + s45.dWall) ^ 2.0 - (0.5 * s45.D) ^ 2.0)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1836};
  modelica_real tmp49;
  modelica_real tmp50;
  tmp49 = (0.5) * ((data->simulationInfo->realParameter[609]/* s45.D PARAM */) ) + (data->simulationInfo->realParameter[619]/* s45.dWall PARAM */) ;
  tmp50 = (0.5) * ((data->simulationInfo->realParameter[609]/* s45.D PARAM */) );
  (data->simulationInfo->realParameter[607]/* s45.Am PARAM */)  = (3.141592653589793) * ((tmp49 * tmp49) - ((tmp50 * tmp50)));
  TRACE_POP
}

/*
equation index: 1837
type: SIMPLE_ASSIGN
s45.Cm = s45.L * s45.Am * s45.rhomcm
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1837(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1837};
  (data->simulationInfo->realParameter[608]/* s45.Cm PARAM */)  = ((data->simulationInfo->realParameter[610]/* s45.L PARAM */) ) * (((data->simulationInfo->realParameter[607]/* s45.Am PARAM */) ) * ((data->simulationInfo->realParameter[625]/* s45.rhomcm PARAM */) ));
  TRACE_POP
}

/*
equation index: 1838
type: SIMPLE_ASSIGN
s45.A = 0.7853981633974483 * s45.D ^ 2.0
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1838(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1838};
  modelica_real tmp51;
  tmp51 = (data->simulationInfo->realParameter[609]/* s45.D PARAM */) ;
  (data->simulationInfo->realParameter[606]/* s45.A PARAM */)  = (0.7853981633974483) * ((tmp51 * tmp51));
  TRACE_POP
}

/*
equation index: 1839
type: SIMPLE_ASSIGN
s45.m_flow_nom = 985.0 * s45.A * s45.u_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1839(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1839};
  (data->simulationInfo->realParameter[622]/* s45.m_flow_nom PARAM */)  = (985.0) * (((data->simulationInfo->realParameter[606]/* s45.A PARAM */) ) * ((data->simulationInfo->realParameter[626]/* s45.u_nom PARAM */) ));
  TRACE_POP
}

/*
equation index: 1840
type: SIMPLE_ASSIGN
s45.omega = 3.141592653589793 * s45.D
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1840(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1840};
  (data->simulationInfo->realParameter[623]/* s45.omega PARAM */)  = (3.141592653589793) * ((data->simulationInfo->realParameter[609]/* s45.D PARAM */) );
  TRACE_POP
}

/*
equation index: 1841
type: SIMPLE_ASSIGN
s45.dp_nom = 492.5 * s45.cf * s45.omega * s45.L * s45.u_nom ^ 2.0 / s45.A
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1841(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1841};
  modelica_real tmp52;
  tmp52 = (data->simulationInfo->realParameter[626]/* s45.u_nom PARAM */) ;
  (data->simulationInfo->realParameter[620]/* s45.dp_nom PARAM */)  = (492.5) * (((data->simulationInfo->realParameter[616]/* s45.cf PARAM */) ) * (((data->simulationInfo->realParameter[623]/* s45.omega PARAM */) ) * (((data->simulationInfo->realParameter[610]/* s45.L PARAM */) ) * (DIVISION_SIM((tmp52 * tmp52),(data->simulationInfo->realParameter[606]/* s45.A PARAM */) ,"s45.A",equationIndexes)))));
  TRACE_POP
}

/*
equation index: 1842
type: SIMPLE_ASSIGN
s45.V = 0.5 * s45.A * s45.L
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1842(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1842};
  (data->simulationInfo->realParameter[615]/* s45.V PARAM */)  = (0.5) * (((data->simulationInfo->realParameter[606]/* s45.A PARAM */) ) * ((data->simulationInfo->realParameter[610]/* s45.L PARAM */) ));
  TRACE_POP
}

/*
equation index: 1846
type: SIMPLE_ASSIGN
s45.UA = 6.283185307179586 * s45.L * s45.conductivity_pipe_ins / log((0.5 * s45.D + s45.dWall + s45.dIns) / (0.5 * s45.D + s45.dWall))
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1846(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1846};
  modelica_real tmp53;
  tmp53 = DIVISION_SIM((0.5) * ((data->simulationInfo->realParameter[609]/* s45.D PARAM */) ) + (data->simulationInfo->realParameter[619]/* s45.dWall PARAM */)  + (data->simulationInfo->realParameter[618]/* s45.dIns PARAM */) ,(0.5) * ((data->simulationInfo->realParameter[609]/* s45.D PARAM */) ) + (data->simulationInfo->realParameter[619]/* s45.dWall PARAM */) ,"0.5 * s45.D + s45.dWall",equationIndexes);
  if(!(tmp53 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log((0.5 * s45.D + s45.dWall + s45.dIns) / (0.5 * s45.D + s45.dWall)) was %g should be > 0", tmp53);
    }
  }
  (data->simulationInfo->realParameter[613]/* s45.UA PARAM */)  = (6.283185307179586) * (((data->simulationInfo->realParameter[610]/* s45.L PARAM */) ) * (DIVISION_SIM((data->simulationInfo->realParameter[617]/* s45.conductivity_pipe_ins PARAM */) ,log(tmp53),"log((0.5 * s45.D + s45.dWall + s45.dIns) / (0.5 * s45.D + s45.dWall))",equationIndexes)));
  TRACE_POP
}

/*
equation index: 1848
type: SIMPLE_ASSIGN
r54.U_wm = 6.283185307179586 * r54.lambda / log(1.0 + r54.dWall / r54.D)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1848(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1848};
  modelica_real tmp54;
  tmp54 = 1.0 + DIVISION_SIM((data->simulationInfo->realParameter[405]/* r54.dWall PARAM */) ,(data->simulationInfo->realParameter[395]/* r54.D PARAM */) ,"r54.D",equationIndexes);
  if(!(tmp54 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(1.0 + r54.dWall / r54.D) was %g should be > 0", tmp54);
    }
  }
  (data->simulationInfo->realParameter[400]/* r54.U_wm PARAM */)  = (6.283185307179586) * (DIVISION_SIM((data->simulationInfo->realParameter[407]/* r54.lambda PARAM */) ,log(tmp54),"log(1.0 + r54.dWall / r54.D)",equationIndexes));
  TRACE_POP
}

/*
equation index: 1849
type: SIMPLE_ASSIGN
r54.Am = 3.141592653589793 * ((0.5 * r54.D + r54.dWall) ^ 2.0 - (0.5 * r54.D) ^ 2.0)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1849(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1849};
  modelica_real tmp55;
  modelica_real tmp56;
  tmp55 = (0.5) * ((data->simulationInfo->realParameter[395]/* r54.D PARAM */) ) + (data->simulationInfo->realParameter[405]/* r54.dWall PARAM */) ;
  tmp56 = (0.5) * ((data->simulationInfo->realParameter[395]/* r54.D PARAM */) );
  (data->simulationInfo->realParameter[393]/* r54.Am PARAM */)  = (3.141592653589793) * ((tmp55 * tmp55) - ((tmp56 * tmp56)));
  TRACE_POP
}

/*
equation index: 1850
type: SIMPLE_ASSIGN
r54.Cm = r54.L * r54.Am * r54.rhomcm
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1850(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1850};
  (data->simulationInfo->realParameter[394]/* r54.Cm PARAM */)  = ((data->simulationInfo->realParameter[396]/* r54.L PARAM */) ) * (((data->simulationInfo->realParameter[393]/* r54.Am PARAM */) ) * ((data->simulationInfo->realParameter[411]/* r54.rhomcm PARAM */) ));
  TRACE_POP
}

/*
equation index: 1851
type: SIMPLE_ASSIGN
r54.A = 0.7853981633974483 * r54.D ^ 2.0
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1851(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1851};
  modelica_real tmp57;
  tmp57 = (data->simulationInfo->realParameter[395]/* r54.D PARAM */) ;
  (data->simulationInfo->realParameter[392]/* r54.A PARAM */)  = (0.7853981633974483) * ((tmp57 * tmp57));
  TRACE_POP
}

/*
equation index: 1852
type: SIMPLE_ASSIGN
r54.m_flow_nom = 985.0 * r54.A * r54.u_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1852(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1852};
  (data->simulationInfo->realParameter[408]/* r54.m_flow_nom PARAM */)  = (985.0) * (((data->simulationInfo->realParameter[392]/* r54.A PARAM */) ) * ((data->simulationInfo->realParameter[412]/* r54.u_nom PARAM */) ));
  TRACE_POP
}

/*
equation index: 1853
type: SIMPLE_ASSIGN
r54.omega = 3.141592653589793 * r54.D
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1853(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1853};
  (data->simulationInfo->realParameter[409]/* r54.omega PARAM */)  = (3.141592653589793) * ((data->simulationInfo->realParameter[395]/* r54.D PARAM */) );
  TRACE_POP
}

/*
equation index: 1854
type: SIMPLE_ASSIGN
r54.dp_nom = 492.5 * r54.cf * r54.omega * r54.L * r54.u_nom ^ 2.0 / r54.A
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1854};
  modelica_real tmp58;
  tmp58 = (data->simulationInfo->realParameter[412]/* r54.u_nom PARAM */) ;
  (data->simulationInfo->realParameter[406]/* r54.dp_nom PARAM */)  = (492.5) * (((data->simulationInfo->realParameter[402]/* r54.cf PARAM */) ) * (((data->simulationInfo->realParameter[409]/* r54.omega PARAM */) ) * (((data->simulationInfo->realParameter[396]/* r54.L PARAM */) ) * (DIVISION_SIM((tmp58 * tmp58),(data->simulationInfo->realParameter[392]/* r54.A PARAM */) ,"r54.A",equationIndexes)))));
  TRACE_POP
}

/*
equation index: 1855
type: SIMPLE_ASSIGN
r54.V = 0.5 * r54.A * r54.L
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1855(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1855};
  (data->simulationInfo->realParameter[401]/* r54.V PARAM */)  = (0.5) * (((data->simulationInfo->realParameter[392]/* r54.A PARAM */) ) * ((data->simulationInfo->realParameter[396]/* r54.L PARAM */) ));
  TRACE_POP
}

/*
equation index: 1859
type: SIMPLE_ASSIGN
r54.UA = 6.283185307179586 * r54.L * r54.conductivity_pipe_ins / log((0.5 * r54.D + r54.dWall + r54.dIns) / (0.5 * r54.D + r54.dWall))
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1859(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1859};
  modelica_real tmp59;
  tmp59 = DIVISION_SIM((0.5) * ((data->simulationInfo->realParameter[395]/* r54.D PARAM */) ) + (data->simulationInfo->realParameter[405]/* r54.dWall PARAM */)  + (data->simulationInfo->realParameter[404]/* r54.dIns PARAM */) ,(0.5) * ((data->simulationInfo->realParameter[395]/* r54.D PARAM */) ) + (data->simulationInfo->realParameter[405]/* r54.dWall PARAM */) ,"0.5 * r54.D + r54.dWall",equationIndexes);
  if(!(tmp59 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log((0.5 * r54.D + r54.dWall + r54.dIns) / (0.5 * r54.D + r54.dWall)) was %g should be > 0", tmp59);
    }
  }
  (data->simulationInfo->realParameter[399]/* r54.UA PARAM */)  = (6.283185307179586) * (((data->simulationInfo->realParameter[396]/* r54.L PARAM */) ) * (DIVISION_SIM((data->simulationInfo->realParameter[403]/* r54.conductivity_pipe_ins PARAM */) ,log(tmp59),"log((0.5 * r54.D + r54.dWall + r54.dIns) / (0.5 * r54.D + r54.dWall))",equationIndexes)));
  TRACE_POP
}

/*
equation index: 1861
type: SIMPLE_ASSIGN
load3.loadValve1.dp_nom = load3.dp_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1861(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1861};
  (data->simulationInfo->realParameter[161]/* load3.loadValve1.dp_nom PARAM */)  = (data->simulationInfo->realParameter[158]/* load3.dp_nom PARAM */) ;
  TRACE_POP
}

/*
equation index: 1862
type: SIMPLE_ASSIGN
load3.loadValve1.m_nom = load3.m_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1862(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1862};
  (data->simulationInfo->realParameter[162]/* load3.loadValve1.m_nom PARAM */)  = (data->simulationInfo->realParameter[200]/* load3.m_nom PARAM */) ;
  TRACE_POP
}

/*
equation index: 1863
type: SIMPLE_ASSIGN
load3.loadValve1.theta_min = load3.theta_min
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1863(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1863};
  (data->simulationInfo->realParameter[163]/* load3.loadValve1.theta_min PARAM */)  = (data->simulationInfo->realParameter[201]/* load3.theta_min PARAM */) ;
  TRACE_POP
}

/*
equation index: 1864
type: SIMPLE_ASSIGN
load3.loadValve1.Kv = load3.Kv
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1864(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1864};
  (data->simulationInfo->realParameter[160]/* load3.loadValve1.Kv PARAM */)  = (data->simulationInfo->realParameter[157]/* load3.Kv PARAM */) ;
  TRACE_POP
}

/*
equation index: 1865
type: SIMPLE_ASSIGN
load3.loadValve1.theta_nom = load3.theta_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1865(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1865};
  (data->simulationInfo->realParameter[164]/* load3.loadValve1.theta_nom PARAM */)  = (data->simulationInfo->realParameter[202]/* load3.theta_nom PARAM */) ;
  TRACE_POP
}

/*
equation index: 1866
type: SIMPLE_ASSIGN
load3.loadValveControl.addFF.k2 = load3.loadValveControl.kFF
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1866(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1866};
  (data->simulationInfo->realParameter[177]/* load3.loadValveControl.addFF.k2 PARAM */)  = (data->simulationInfo->realParameter[189]/* load3.loadValveControl.kFF PARAM */) ;
  TRACE_POP
}

/*
equation index: 1871
type: SIMPLE_ASSIGN
load3.loadValveControl.gainPID.k = load3.loadValveControl.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1871};
  (data->simulationInfo->realParameter[187]/* load3.loadValveControl.gainPID.k PARAM */)  = (data->simulationInfo->realParameter[188]/* load3.loadValveControl.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1872
type: SIMPLE_ASSIGN
load3.loadValveControl.addP.k1 = load3.loadValveControl.wp
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1872(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1872};
  (data->simulationInfo->realParameter[179]/* load3.loadValveControl.addP.k1 PARAM */)  = (data->simulationInfo->realParameter[194]/* load3.loadValveControl.wp PARAM */) ;
  TRACE_POP
}

/*
equation index: 1881
type: SIMPLE_ASSIGN
s23.U_wm = 6.283185307179586 * s23.lambda / log(1.0 + s23.dWall / s23.D)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1881(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1881};
  modelica_real tmp60;
  tmp60 = 1.0 + DIVISION_SIM((data->simulationInfo->realParameter[577]/* s23.dWall PARAM */) ,(data->simulationInfo->realParameter[567]/* s23.D PARAM */) ,"s23.D",equationIndexes);
  if(!(tmp60 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(1.0 + s23.dWall / s23.D) was %g should be > 0", tmp60);
    }
  }
  (data->simulationInfo->realParameter[572]/* s23.U_wm PARAM */)  = (6.283185307179586) * (DIVISION_SIM((data->simulationInfo->realParameter[579]/* s23.lambda PARAM */) ,log(tmp60),"log(1.0 + s23.dWall / s23.D)",equationIndexes));
  TRACE_POP
}

/*
equation index: 1882
type: SIMPLE_ASSIGN
s23.Am = 3.141592653589793 * ((0.5 * s23.D + s23.dWall) ^ 2.0 - (0.5 * s23.D) ^ 2.0)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1882(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1882};
  modelica_real tmp61;
  modelica_real tmp62;
  tmp61 = (0.5) * ((data->simulationInfo->realParameter[567]/* s23.D PARAM */) ) + (data->simulationInfo->realParameter[577]/* s23.dWall PARAM */) ;
  tmp62 = (0.5) * ((data->simulationInfo->realParameter[567]/* s23.D PARAM */) );
  (data->simulationInfo->realParameter[565]/* s23.Am PARAM */)  = (3.141592653589793) * ((tmp61 * tmp61) - ((tmp62 * tmp62)));
  TRACE_POP
}

/*
equation index: 1883
type: SIMPLE_ASSIGN
s23.Cm = s23.L * s23.Am * s23.rhomcm
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1883(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1883};
  (data->simulationInfo->realParameter[566]/* s23.Cm PARAM */)  = ((data->simulationInfo->realParameter[568]/* s23.L PARAM */) ) * (((data->simulationInfo->realParameter[565]/* s23.Am PARAM */) ) * ((data->simulationInfo->realParameter[583]/* s23.rhomcm PARAM */) ));
  TRACE_POP
}

/*
equation index: 1884
type: SIMPLE_ASSIGN
s23.A = 0.7853981633974483 * s23.D ^ 2.0
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1884(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1884};
  modelica_real tmp63;
  tmp63 = (data->simulationInfo->realParameter[567]/* s23.D PARAM */) ;
  (data->simulationInfo->realParameter[564]/* s23.A PARAM */)  = (0.7853981633974483) * ((tmp63 * tmp63));
  TRACE_POP
}

/*
equation index: 1885
type: SIMPLE_ASSIGN
s23.m_flow_nom = 985.0 * s23.A * s23.u_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1885};
  (data->simulationInfo->realParameter[580]/* s23.m_flow_nom PARAM */)  = (985.0) * (((data->simulationInfo->realParameter[564]/* s23.A PARAM */) ) * ((data->simulationInfo->realParameter[584]/* s23.u_nom PARAM */) ));
  TRACE_POP
}

/*
equation index: 1886
type: SIMPLE_ASSIGN
s23.omega = 3.141592653589793 * s23.D
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1886(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1886};
  (data->simulationInfo->realParameter[581]/* s23.omega PARAM */)  = (3.141592653589793) * ((data->simulationInfo->realParameter[567]/* s23.D PARAM */) );
  TRACE_POP
}

/*
equation index: 1887
type: SIMPLE_ASSIGN
s23.dp_nom = 492.5 * s23.cf * s23.omega * s23.L * s23.u_nom ^ 2.0 / s23.A
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1887};
  modelica_real tmp64;
  tmp64 = (data->simulationInfo->realParameter[584]/* s23.u_nom PARAM */) ;
  (data->simulationInfo->realParameter[578]/* s23.dp_nom PARAM */)  = (492.5) * (((data->simulationInfo->realParameter[574]/* s23.cf PARAM */) ) * (((data->simulationInfo->realParameter[581]/* s23.omega PARAM */) ) * (((data->simulationInfo->realParameter[568]/* s23.L PARAM */) ) * (DIVISION_SIM((tmp64 * tmp64),(data->simulationInfo->realParameter[564]/* s23.A PARAM */) ,"s23.A",equationIndexes)))));
  TRACE_POP
}

/*
equation index: 1888
type: SIMPLE_ASSIGN
s23.V = 0.5 * s23.A * s23.L
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1888(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1888};
  (data->simulationInfo->realParameter[573]/* s23.V PARAM */)  = (0.5) * (((data->simulationInfo->realParameter[564]/* s23.A PARAM */) ) * ((data->simulationInfo->realParameter[568]/* s23.L PARAM */) ));
  TRACE_POP
}

/*
equation index: 1892
type: SIMPLE_ASSIGN
s23.UA = 6.283185307179586 * s23.L * s23.conductivity_pipe_ins / log((0.5 * s23.D + s23.dWall + s23.dIns) / (0.5 * s23.D + s23.dWall))
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1892(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1892};
  modelica_real tmp65;
  tmp65 = DIVISION_SIM((0.5) * ((data->simulationInfo->realParameter[567]/* s23.D PARAM */) ) + (data->simulationInfo->realParameter[577]/* s23.dWall PARAM */)  + (data->simulationInfo->realParameter[576]/* s23.dIns PARAM */) ,(0.5) * ((data->simulationInfo->realParameter[567]/* s23.D PARAM */) ) + (data->simulationInfo->realParameter[577]/* s23.dWall PARAM */) ,"0.5 * s23.D + s23.dWall",equationIndexes);
  if(!(tmp65 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log((0.5 * s23.D + s23.dWall + s23.dIns) / (0.5 * s23.D + s23.dWall)) was %g should be > 0", tmp65);
    }
  }
  (data->simulationInfo->realParameter[571]/* s23.UA PARAM */)  = (6.283185307179586) * (((data->simulationInfo->realParameter[568]/* s23.L PARAM */) ) * (DIVISION_SIM((data->simulationInfo->realParameter[575]/* s23.conductivity_pipe_ins PARAM */) ,log(tmp65),"log((0.5 * s23.D + s23.dWall + s23.dIns) / (0.5 * s23.D + s23.dWall))",equationIndexes)));
  TRACE_POP
}

/*
equation index: 1894
type: SIMPLE_ASSIGN
r32.U_wm = 6.283185307179586 * r32.lambda / log(1.0 + r32.dWall / r32.D)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1894(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1894};
  modelica_real tmp66;
  tmp66 = 1.0 + DIVISION_SIM((data->simulationInfo->realParameter[363]/* r32.dWall PARAM */) ,(data->simulationInfo->realParameter[353]/* r32.D PARAM */) ,"r32.D",equationIndexes);
  if(!(tmp66 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(1.0 + r32.dWall / r32.D) was %g should be > 0", tmp66);
    }
  }
  (data->simulationInfo->realParameter[358]/* r32.U_wm PARAM */)  = (6.283185307179586) * (DIVISION_SIM((data->simulationInfo->realParameter[365]/* r32.lambda PARAM */) ,log(tmp66),"log(1.0 + r32.dWall / r32.D)",equationIndexes));
  TRACE_POP
}

/*
equation index: 1895
type: SIMPLE_ASSIGN
r32.Am = 3.141592653589793 * ((0.5 * r32.D + r32.dWall) ^ 2.0 - (0.5 * r32.D) ^ 2.0)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1895};
  modelica_real tmp67;
  modelica_real tmp68;
  tmp67 = (0.5) * ((data->simulationInfo->realParameter[353]/* r32.D PARAM */) ) + (data->simulationInfo->realParameter[363]/* r32.dWall PARAM */) ;
  tmp68 = (0.5) * ((data->simulationInfo->realParameter[353]/* r32.D PARAM */) );
  (data->simulationInfo->realParameter[351]/* r32.Am PARAM */)  = (3.141592653589793) * ((tmp67 * tmp67) - ((tmp68 * tmp68)));
  TRACE_POP
}

/*
equation index: 1896
type: SIMPLE_ASSIGN
r32.Cm = r32.L * r32.Am * r32.rhomcm
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1896};
  (data->simulationInfo->realParameter[352]/* r32.Cm PARAM */)  = ((data->simulationInfo->realParameter[354]/* r32.L PARAM */) ) * (((data->simulationInfo->realParameter[351]/* r32.Am PARAM */) ) * ((data->simulationInfo->realParameter[369]/* r32.rhomcm PARAM */) ));
  TRACE_POP
}

/*
equation index: 1897
type: SIMPLE_ASSIGN
r32.A = 0.7853981633974483 * r32.D ^ 2.0
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1897};
  modelica_real tmp69;
  tmp69 = (data->simulationInfo->realParameter[353]/* r32.D PARAM */) ;
  (data->simulationInfo->realParameter[350]/* r32.A PARAM */)  = (0.7853981633974483) * ((tmp69 * tmp69));
  TRACE_POP
}

/*
equation index: 1898
type: SIMPLE_ASSIGN
r32.m_flow_nom = 985.0 * r32.A * r32.u_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1898(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1898};
  (data->simulationInfo->realParameter[366]/* r32.m_flow_nom PARAM */)  = (985.0) * (((data->simulationInfo->realParameter[350]/* r32.A PARAM */) ) * ((data->simulationInfo->realParameter[370]/* r32.u_nom PARAM */) ));
  TRACE_POP
}

/*
equation index: 1899
type: SIMPLE_ASSIGN
r32.omega = 3.141592653589793 * r32.D
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1899};
  (data->simulationInfo->realParameter[367]/* r32.omega PARAM */)  = (3.141592653589793) * ((data->simulationInfo->realParameter[353]/* r32.D PARAM */) );
  TRACE_POP
}

/*
equation index: 1900
type: SIMPLE_ASSIGN
r32.dp_nom = 492.5 * r32.cf * r32.omega * r32.L * r32.u_nom ^ 2.0 / r32.A
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1900};
  modelica_real tmp70;
  tmp70 = (data->simulationInfo->realParameter[370]/* r32.u_nom PARAM */) ;
  (data->simulationInfo->realParameter[364]/* r32.dp_nom PARAM */)  = (492.5) * (((data->simulationInfo->realParameter[360]/* r32.cf PARAM */) ) * (((data->simulationInfo->realParameter[367]/* r32.omega PARAM */) ) * (((data->simulationInfo->realParameter[354]/* r32.L PARAM */) ) * (DIVISION_SIM((tmp70 * tmp70),(data->simulationInfo->realParameter[350]/* r32.A PARAM */) ,"r32.A",equationIndexes)))));
  TRACE_POP
}

/*
equation index: 1901
type: SIMPLE_ASSIGN
r32.V = 0.5 * r32.A * r32.L
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1901};
  (data->simulationInfo->realParameter[359]/* r32.V PARAM */)  = (0.5) * (((data->simulationInfo->realParameter[350]/* r32.A PARAM */) ) * ((data->simulationInfo->realParameter[354]/* r32.L PARAM */) ));
  TRACE_POP
}

/*
equation index: 1905
type: SIMPLE_ASSIGN
r32.UA = 6.283185307179586 * r32.L * r32.conductivity_pipe_ins / log((0.5 * r32.D + r32.dWall + r32.dIns) / (0.5 * r32.D + r32.dWall))
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1905};
  modelica_real tmp71;
  tmp71 = DIVISION_SIM((0.5) * ((data->simulationInfo->realParameter[353]/* r32.D PARAM */) ) + (data->simulationInfo->realParameter[363]/* r32.dWall PARAM */)  + (data->simulationInfo->realParameter[362]/* r32.dIns PARAM */) ,(0.5) * ((data->simulationInfo->realParameter[353]/* r32.D PARAM */) ) + (data->simulationInfo->realParameter[363]/* r32.dWall PARAM */) ,"0.5 * r32.D + r32.dWall",equationIndexes);
  if(!(tmp71 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log((0.5 * r32.D + r32.dWall + r32.dIns) / (0.5 * r32.D + r32.dWall)) was %g should be > 0", tmp71);
    }
  }
  (data->simulationInfo->realParameter[357]/* r32.UA PARAM */)  = (6.283185307179586) * (((data->simulationInfo->realParameter[354]/* r32.L PARAM */) ) * (DIVISION_SIM((data->simulationInfo->realParameter[361]/* r32.conductivity_pipe_ins PARAM */) ,log(tmp71),"log((0.5 * r32.D + r32.dWall + r32.dIns) / (0.5 * r32.D + r32.dWall))",equationIndexes)));
  TRACE_POP
}

/*
equation index: 1907
type: SIMPLE_ASSIGN
load2.loadValve1.dp_nom = load2.dp_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1907};
  (data->simulationInfo->realParameter[114]/* load2.loadValve1.dp_nom PARAM */)  = (data->simulationInfo->realParameter[111]/* load2.dp_nom PARAM */) ;
  TRACE_POP
}

/*
equation index: 1908
type: SIMPLE_ASSIGN
load2.loadValve1.m_nom = load2.m_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1908(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1908};
  (data->simulationInfo->realParameter[115]/* load2.loadValve1.m_nom PARAM */)  = (data->simulationInfo->realParameter[153]/* load2.m_nom PARAM */) ;
  TRACE_POP
}

/*
equation index: 1909
type: SIMPLE_ASSIGN
load2.loadValve1.theta_min = load2.theta_min
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1909(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1909};
  (data->simulationInfo->realParameter[116]/* load2.loadValve1.theta_min PARAM */)  = (data->simulationInfo->realParameter[154]/* load2.theta_min PARAM */) ;
  TRACE_POP
}

/*
equation index: 1910
type: SIMPLE_ASSIGN
load2.loadValve1.Kv = load2.Kv
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1910};
  (data->simulationInfo->realParameter[113]/* load2.loadValve1.Kv PARAM */)  = (data->simulationInfo->realParameter[110]/* load2.Kv PARAM */) ;
  TRACE_POP
}

/*
equation index: 1911
type: SIMPLE_ASSIGN
load2.loadValve1.theta_nom = load2.theta_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1911};
  (data->simulationInfo->realParameter[117]/* load2.loadValve1.theta_nom PARAM */)  = (data->simulationInfo->realParameter[155]/* load2.theta_nom PARAM */) ;
  TRACE_POP
}

/*
equation index: 1912
type: SIMPLE_ASSIGN
load2.loadValveControl.addFF.k2 = load2.loadValveControl.kFF
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1912};
  (data->simulationInfo->realParameter[130]/* load2.loadValveControl.addFF.k2 PARAM */)  = (data->simulationInfo->realParameter[142]/* load2.loadValveControl.kFF PARAM */) ;
  TRACE_POP
}

/*
equation index: 1917
type: SIMPLE_ASSIGN
load2.loadValveControl.gainPID.k = load2.loadValveControl.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1917};
  (data->simulationInfo->realParameter[140]/* load2.loadValveControl.gainPID.k PARAM */)  = (data->simulationInfo->realParameter[141]/* load2.loadValveControl.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 1918
type: SIMPLE_ASSIGN
load2.loadValveControl.addP.k1 = load2.loadValveControl.wp
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1918};
  (data->simulationInfo->realParameter[132]/* load2.loadValveControl.addP.k1 PARAM */)  = (data->simulationInfo->realParameter[147]/* load2.loadValveControl.wp PARAM */) ;
  TRACE_POP
}

/*
equation index: 1927
type: SIMPLE_ASSIGN
r43.U_wm = 6.283185307179586 * r43.lambda / log(1.0 + r43.dWall / r43.D)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1927};
  modelica_real tmp72;
  tmp72 = 1.0 + DIVISION_SIM((data->simulationInfo->realParameter[384]/* r43.dWall PARAM */) ,(data->simulationInfo->realParameter[374]/* r43.D PARAM */) ,"r43.D",equationIndexes);
  if(!(tmp72 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(1.0 + r43.dWall / r43.D) was %g should be > 0", tmp72);
    }
  }
  (data->simulationInfo->realParameter[379]/* r43.U_wm PARAM */)  = (6.283185307179586) * (DIVISION_SIM((data->simulationInfo->realParameter[386]/* r43.lambda PARAM */) ,log(tmp72),"log(1.0 + r43.dWall / r43.D)",equationIndexes));
  TRACE_POP
}

/*
equation index: 1928
type: SIMPLE_ASSIGN
r43.Am = 3.141592653589793 * ((0.5 * r43.D + r43.dWall) ^ 2.0 - (0.5 * r43.D) ^ 2.0)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1928};
  modelica_real tmp73;
  modelica_real tmp74;
  tmp73 = (0.5) * ((data->simulationInfo->realParameter[374]/* r43.D PARAM */) ) + (data->simulationInfo->realParameter[384]/* r43.dWall PARAM */) ;
  tmp74 = (0.5) * ((data->simulationInfo->realParameter[374]/* r43.D PARAM */) );
  (data->simulationInfo->realParameter[372]/* r43.Am PARAM */)  = (3.141592653589793) * ((tmp73 * tmp73) - ((tmp74 * tmp74)));
  TRACE_POP
}

/*
equation index: 1929
type: SIMPLE_ASSIGN
r43.Cm = r43.L * r43.Am * r43.rhomcm
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1929};
  (data->simulationInfo->realParameter[373]/* r43.Cm PARAM */)  = ((data->simulationInfo->realParameter[375]/* r43.L PARAM */) ) * (((data->simulationInfo->realParameter[372]/* r43.Am PARAM */) ) * ((data->simulationInfo->realParameter[390]/* r43.rhomcm PARAM */) ));
  TRACE_POP
}

/*
equation index: 1930
type: SIMPLE_ASSIGN
r43.A = 0.7853981633974483 * r43.D ^ 2.0
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1930};
  modelica_real tmp75;
  tmp75 = (data->simulationInfo->realParameter[374]/* r43.D PARAM */) ;
  (data->simulationInfo->realParameter[371]/* r43.A PARAM */)  = (0.7853981633974483) * ((tmp75 * tmp75));
  TRACE_POP
}

/*
equation index: 1931
type: SIMPLE_ASSIGN
r43.m_flow_nom = 985.0 * r43.A * r43.u_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1931};
  (data->simulationInfo->realParameter[387]/* r43.m_flow_nom PARAM */)  = (985.0) * (((data->simulationInfo->realParameter[371]/* r43.A PARAM */) ) * ((data->simulationInfo->realParameter[391]/* r43.u_nom PARAM */) ));
  TRACE_POP
}

/*
equation index: 1932
type: SIMPLE_ASSIGN
r43.omega = 3.141592653589793 * r43.D
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1932};
  (data->simulationInfo->realParameter[388]/* r43.omega PARAM */)  = (3.141592653589793) * ((data->simulationInfo->realParameter[374]/* r43.D PARAM */) );
  TRACE_POP
}

/*
equation index: 1933
type: SIMPLE_ASSIGN
r43.dp_nom = 492.5 * r43.cf * r43.omega * r43.L * r43.u_nom ^ 2.0 / r43.A
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1933};
  modelica_real tmp76;
  tmp76 = (data->simulationInfo->realParameter[391]/* r43.u_nom PARAM */) ;
  (data->simulationInfo->realParameter[385]/* r43.dp_nom PARAM */)  = (492.5) * (((data->simulationInfo->realParameter[381]/* r43.cf PARAM */) ) * (((data->simulationInfo->realParameter[388]/* r43.omega PARAM */) ) * (((data->simulationInfo->realParameter[375]/* r43.L PARAM */) ) * (DIVISION_SIM((tmp76 * tmp76),(data->simulationInfo->realParameter[371]/* r43.A PARAM */) ,"r43.A",equationIndexes)))));
  TRACE_POP
}

/*
equation index: 1934
type: SIMPLE_ASSIGN
r43.V = 0.5 * r43.A * r43.L
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1934};
  (data->simulationInfo->realParameter[380]/* r43.V PARAM */)  = (0.5) * (((data->simulationInfo->realParameter[371]/* r43.A PARAM */) ) * ((data->simulationInfo->realParameter[375]/* r43.L PARAM */) ));
  TRACE_POP
}

/*
equation index: 1938
type: SIMPLE_ASSIGN
r43.UA = 6.283185307179586 * r43.L * r43.conductivity_pipe_ins / log((0.5 * r43.D + r43.dWall + r43.dIns) / (0.5 * r43.D + r43.dWall))
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1938};
  modelica_real tmp77;
  tmp77 = DIVISION_SIM((0.5) * ((data->simulationInfo->realParameter[374]/* r43.D PARAM */) ) + (data->simulationInfo->realParameter[384]/* r43.dWall PARAM */)  + (data->simulationInfo->realParameter[383]/* r43.dIns PARAM */) ,(0.5) * ((data->simulationInfo->realParameter[374]/* r43.D PARAM */) ) + (data->simulationInfo->realParameter[384]/* r43.dWall PARAM */) ,"0.5 * r43.D + r43.dWall",equationIndexes);
  if(!(tmp77 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log((0.5 * r43.D + r43.dWall + r43.dIns) / (0.5 * r43.D + r43.dWall)) was %g should be > 0", tmp77);
    }
  }
  (data->simulationInfo->realParameter[378]/* r43.UA PARAM */)  = (6.283185307179586) * (((data->simulationInfo->realParameter[375]/* r43.L PARAM */) ) * (DIVISION_SIM((data->simulationInfo->realParameter[382]/* r43.conductivity_pipe_ins PARAM */) ,log(tmp77),"log((0.5 * r43.D + r43.dWall + r43.dIns) / (0.5 * r43.D + r43.dWall))",equationIndexes)));
  TRACE_POP
}

/*
equation index: 1940
type: SIMPLE_ASSIGN
s34.U_wm = 6.283185307179586 * s34.lambda / log(1.0 + s34.dWall / s34.D)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1940};
  modelica_real tmp78;
  tmp78 = 1.0 + DIVISION_SIM((data->simulationInfo->realParameter[598]/* s34.dWall PARAM */) ,(data->simulationInfo->realParameter[588]/* s34.D PARAM */) ,"s34.D",equationIndexes);
  if(!(tmp78 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(1.0 + s34.dWall / s34.D) was %g should be > 0", tmp78);
    }
  }
  (data->simulationInfo->realParameter[593]/* s34.U_wm PARAM */)  = (6.283185307179586) * (DIVISION_SIM((data->simulationInfo->realParameter[600]/* s34.lambda PARAM */) ,log(tmp78),"log(1.0 + s34.dWall / s34.D)",equationIndexes));
  TRACE_POP
}

/*
equation index: 1941
type: SIMPLE_ASSIGN
s34.Am = 3.141592653589793 * ((0.5 * s34.D + s34.dWall) ^ 2.0 - (0.5 * s34.D) ^ 2.0)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1941};
  modelica_real tmp79;
  modelica_real tmp80;
  tmp79 = (0.5) * ((data->simulationInfo->realParameter[588]/* s34.D PARAM */) ) + (data->simulationInfo->realParameter[598]/* s34.dWall PARAM */) ;
  tmp80 = (0.5) * ((data->simulationInfo->realParameter[588]/* s34.D PARAM */) );
  (data->simulationInfo->realParameter[586]/* s34.Am PARAM */)  = (3.141592653589793) * ((tmp79 * tmp79) - ((tmp80 * tmp80)));
  TRACE_POP
}

/*
equation index: 1942
type: SIMPLE_ASSIGN
s34.Cm = s34.L * s34.Am * s34.rhomcm
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1942};
  (data->simulationInfo->realParameter[587]/* s34.Cm PARAM */)  = ((data->simulationInfo->realParameter[589]/* s34.L PARAM */) ) * (((data->simulationInfo->realParameter[586]/* s34.Am PARAM */) ) * ((data->simulationInfo->realParameter[604]/* s34.rhomcm PARAM */) ));
  TRACE_POP
}

/*
equation index: 1943
type: SIMPLE_ASSIGN
s34.A = 0.7853981633974483 * s34.D ^ 2.0
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1943};
  modelica_real tmp81;
  tmp81 = (data->simulationInfo->realParameter[588]/* s34.D PARAM */) ;
  (data->simulationInfo->realParameter[585]/* s34.A PARAM */)  = (0.7853981633974483) * ((tmp81 * tmp81));
  TRACE_POP
}

/*
equation index: 1944
type: SIMPLE_ASSIGN
s34.m_flow_nom = 985.0 * s34.A * s34.u_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1944(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1944};
  (data->simulationInfo->realParameter[601]/* s34.m_flow_nom PARAM */)  = (985.0) * (((data->simulationInfo->realParameter[585]/* s34.A PARAM */) ) * ((data->simulationInfo->realParameter[605]/* s34.u_nom PARAM */) ));
  TRACE_POP
}

/*
equation index: 1945
type: SIMPLE_ASSIGN
s34.omega = 3.141592653589793 * s34.D
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1945(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1945};
  (data->simulationInfo->realParameter[602]/* s34.omega PARAM */)  = (3.141592653589793) * ((data->simulationInfo->realParameter[588]/* s34.D PARAM */) );
  TRACE_POP
}

/*
equation index: 1946
type: SIMPLE_ASSIGN
s34.dp_nom = 492.5 * s34.cf * s34.omega * s34.L * s34.u_nom ^ 2.0 / s34.A
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1946};
  modelica_real tmp82;
  tmp82 = (data->simulationInfo->realParameter[605]/* s34.u_nom PARAM */) ;
  (data->simulationInfo->realParameter[599]/* s34.dp_nom PARAM */)  = (492.5) * (((data->simulationInfo->realParameter[595]/* s34.cf PARAM */) ) * (((data->simulationInfo->realParameter[602]/* s34.omega PARAM */) ) * (((data->simulationInfo->realParameter[589]/* s34.L PARAM */) ) * (DIVISION_SIM((tmp82 * tmp82),(data->simulationInfo->realParameter[585]/* s34.A PARAM */) ,"s34.A",equationIndexes)))));
  TRACE_POP
}

/*
equation index: 1947
type: SIMPLE_ASSIGN
s34.V = 0.5 * s34.A * s34.L
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1947};
  (data->simulationInfo->realParameter[594]/* s34.V PARAM */)  = (0.5) * (((data->simulationInfo->realParameter[585]/* s34.A PARAM */) ) * ((data->simulationInfo->realParameter[589]/* s34.L PARAM */) ));
  TRACE_POP
}

/*
equation index: 1951
type: SIMPLE_ASSIGN
s34.UA = 6.283185307179586 * s34.L * s34.conductivity_pipe_ins / log((0.5 * s34.D + s34.dWall + s34.dIns) / (0.5 * s34.D + s34.dWall))
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1951(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1951};
  modelica_real tmp83;
  tmp83 = DIVISION_SIM((0.5) * ((data->simulationInfo->realParameter[588]/* s34.D PARAM */) ) + (data->simulationInfo->realParameter[598]/* s34.dWall PARAM */)  + (data->simulationInfo->realParameter[597]/* s34.dIns PARAM */) ,(0.5) * ((data->simulationInfo->realParameter[588]/* s34.D PARAM */) ) + (data->simulationInfo->realParameter[598]/* s34.dWall PARAM */) ,"0.5 * s34.D + s34.dWall",equationIndexes);
  if(!(tmp83 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log((0.5 * s34.D + s34.dWall + s34.dIns) / (0.5 * s34.D + s34.dWall)) was %g should be > 0", tmp83);
    }
  }
  (data->simulationInfo->realParameter[592]/* s34.UA PARAM */)  = (6.283185307179586) * (((data->simulationInfo->realParameter[589]/* s34.L PARAM */) ) * (DIVISION_SIM((data->simulationInfo->realParameter[596]/* s34.conductivity_pipe_ins PARAM */) ,log(tmp83),"log((0.5 * s34.D + s34.dWall + s34.dIns) / (0.5 * s34.D + s34.dWall))",equationIndexes)));
  TRACE_POP
}

/*
equation index: 1953
type: SIMPLE_ASSIGN
r21.U_wm = 6.283185307179586 * r21.lambda / log(1.0 + r21.dWall / r21.D)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1953};
  modelica_real tmp84;
  tmp84 = 1.0 + DIVISION_SIM((data->simulationInfo->realParameter[342]/* r21.dWall PARAM */) ,(data->simulationInfo->realParameter[332]/* r21.D PARAM */) ,"r21.D",equationIndexes);
  if(!(tmp84 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(1.0 + r21.dWall / r21.D) was %g should be > 0", tmp84);
    }
  }
  (data->simulationInfo->realParameter[337]/* r21.U_wm PARAM */)  = (6.283185307179586) * (DIVISION_SIM((data->simulationInfo->realParameter[344]/* r21.lambda PARAM */) ,log(tmp84),"log(1.0 + r21.dWall / r21.D)",equationIndexes));
  TRACE_POP
}

/*
equation index: 1954
type: SIMPLE_ASSIGN
r21.Am = 3.141592653589793 * ((0.5 * r21.D + r21.dWall) ^ 2.0 - (0.5 * r21.D) ^ 2.0)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1954};
  modelica_real tmp85;
  modelica_real tmp86;
  tmp85 = (0.5) * ((data->simulationInfo->realParameter[332]/* r21.D PARAM */) ) + (data->simulationInfo->realParameter[342]/* r21.dWall PARAM */) ;
  tmp86 = (0.5) * ((data->simulationInfo->realParameter[332]/* r21.D PARAM */) );
  (data->simulationInfo->realParameter[330]/* r21.Am PARAM */)  = (3.141592653589793) * ((tmp85 * tmp85) - ((tmp86 * tmp86)));
  TRACE_POP
}

/*
equation index: 1955
type: SIMPLE_ASSIGN
r21.Cm = r21.L * r21.Am * r21.rhomcm
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1955(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1955};
  (data->simulationInfo->realParameter[331]/* r21.Cm PARAM */)  = ((data->simulationInfo->realParameter[333]/* r21.L PARAM */) ) * (((data->simulationInfo->realParameter[330]/* r21.Am PARAM */) ) * ((data->simulationInfo->realParameter[348]/* r21.rhomcm PARAM */) ));
  TRACE_POP
}

/*
equation index: 1956
type: SIMPLE_ASSIGN
r21.A = 0.7853981633974483 * r21.D ^ 2.0
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1956};
  modelica_real tmp87;
  tmp87 = (data->simulationInfo->realParameter[332]/* r21.D PARAM */) ;
  (data->simulationInfo->realParameter[329]/* r21.A PARAM */)  = (0.7853981633974483) * ((tmp87 * tmp87));
  TRACE_POP
}

/*
equation index: 1957
type: SIMPLE_ASSIGN
r21.m_flow_nom = 985.0 * r21.A * r21.u_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1957};
  (data->simulationInfo->realParameter[345]/* r21.m_flow_nom PARAM */)  = (985.0) * (((data->simulationInfo->realParameter[329]/* r21.A PARAM */) ) * ((data->simulationInfo->realParameter[349]/* r21.u_nom PARAM */) ));
  TRACE_POP
}

/*
equation index: 1958
type: SIMPLE_ASSIGN
r21.omega = 3.141592653589793 * r21.D
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1958};
  (data->simulationInfo->realParameter[346]/* r21.omega PARAM */)  = (3.141592653589793) * ((data->simulationInfo->realParameter[332]/* r21.D PARAM */) );
  TRACE_POP
}

/*
equation index: 1959
type: SIMPLE_ASSIGN
r21.dp_nom = 492.5 * r21.cf * r21.omega * r21.L * r21.u_nom ^ 2.0 / r21.A
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1959(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1959};
  modelica_real tmp88;
  tmp88 = (data->simulationInfo->realParameter[349]/* r21.u_nom PARAM */) ;
  (data->simulationInfo->realParameter[343]/* r21.dp_nom PARAM */)  = (492.5) * (((data->simulationInfo->realParameter[339]/* r21.cf PARAM */) ) * (((data->simulationInfo->realParameter[346]/* r21.omega PARAM */) ) * (((data->simulationInfo->realParameter[333]/* r21.L PARAM */) ) * (DIVISION_SIM((tmp88 * tmp88),(data->simulationInfo->realParameter[329]/* r21.A PARAM */) ,"r21.A",equationIndexes)))));
  TRACE_POP
}

/*
equation index: 1960
type: SIMPLE_ASSIGN
r21.V = 0.5 * r21.A * r21.L
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1960(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1960};
  (data->simulationInfo->realParameter[338]/* r21.V PARAM */)  = (0.5) * (((data->simulationInfo->realParameter[329]/* r21.A PARAM */) ) * ((data->simulationInfo->realParameter[333]/* r21.L PARAM */) ));
  TRACE_POP
}

/*
equation index: 1964
type: SIMPLE_ASSIGN
r21.UA = 6.283185307179586 * r21.L * r21.conductivity_pipe_ins / log((0.5 * r21.D + r21.dWall + r21.dIns) / (0.5 * r21.D + r21.dWall))
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1964};
  modelica_real tmp89;
  tmp89 = DIVISION_SIM((0.5) * ((data->simulationInfo->realParameter[332]/* r21.D PARAM */) ) + (data->simulationInfo->realParameter[342]/* r21.dWall PARAM */)  + (data->simulationInfo->realParameter[341]/* r21.dIns PARAM */) ,(0.5) * ((data->simulationInfo->realParameter[332]/* r21.D PARAM */) ) + (data->simulationInfo->realParameter[342]/* r21.dWall PARAM */) ,"0.5 * r21.D + r21.dWall",equationIndexes);
  if(!(tmp89 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log((0.5 * r21.D + r21.dWall + r21.dIns) / (0.5 * r21.D + r21.dWall)) was %g should be > 0", tmp89);
    }
  }
  (data->simulationInfo->realParameter[336]/* r21.UA PARAM */)  = (6.283185307179586) * (((data->simulationInfo->realParameter[333]/* r21.L PARAM */) ) * (DIVISION_SIM((data->simulationInfo->realParameter[340]/* r21.conductivity_pipe_ins PARAM */) ,log(tmp89),"log((0.5 * r21.D + r21.dWall + r21.dIns) / (0.5 * r21.D + r21.dWall))",equationIndexes)));
  TRACE_POP
}

/*
equation index: 1966
type: SIMPLE_ASSIGN
r10.U_wm = 6.283185307179586 * r10.lambda / log(1.0 + r10.dWall / r10.D)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1966};
  modelica_real tmp90;
  tmp90 = 1.0 + DIVISION_SIM((data->simulationInfo->realParameter[320]/* r10.dWall PARAM */) ,(data->simulationInfo->realParameter[310]/* r10.D PARAM */) ,"r10.D",equationIndexes);
  if(!(tmp90 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(1.0 + r10.dWall / r10.D) was %g should be > 0", tmp90);
    }
  }
  (data->simulationInfo->realParameter[315]/* r10.U_wm PARAM */)  = (6.283185307179586) * (DIVISION_SIM((data->simulationInfo->realParameter[322]/* r10.lambda PARAM */) ,log(tmp90),"log(1.0 + r10.dWall / r10.D)",equationIndexes));
  TRACE_POP
}

/*
equation index: 1967
type: SIMPLE_ASSIGN
r10.Am = 3.141592653589793 * ((0.5 * r10.D + r10.dWall) ^ 2.0 - (0.5 * r10.D) ^ 2.0)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1967(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1967};
  modelica_real tmp91;
  modelica_real tmp92;
  tmp91 = (0.5) * ((data->simulationInfo->realParameter[310]/* r10.D PARAM */) ) + (data->simulationInfo->realParameter[320]/* r10.dWall PARAM */) ;
  tmp92 = (0.5) * ((data->simulationInfo->realParameter[310]/* r10.D PARAM */) );
  (data->simulationInfo->realParameter[308]/* r10.Am PARAM */)  = (3.141592653589793) * ((tmp91 * tmp91) - ((tmp92 * tmp92)));
  TRACE_POP
}

/*
equation index: 1968
type: SIMPLE_ASSIGN
r10.Cm = r10.L * r10.Am * r10.rhomcm
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1968(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1968};
  (data->simulationInfo->realParameter[309]/* r10.Cm PARAM */)  = ((data->simulationInfo->realParameter[311]/* r10.L PARAM */) ) * (((data->simulationInfo->realParameter[308]/* r10.Am PARAM */) ) * ((data->simulationInfo->realParameter[327]/* r10.rhomcm PARAM */) ));
  TRACE_POP
}

/*
equation index: 1969
type: SIMPLE_ASSIGN
r10.A = 0.7853981633974483 * r10.D ^ 2.0
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1969(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1969};
  modelica_real tmp93;
  tmp93 = (data->simulationInfo->realParameter[310]/* r10.D PARAM */) ;
  (data->simulationInfo->realParameter[307]/* r10.A PARAM */)  = (0.7853981633974483) * ((tmp93 * tmp93));
  TRACE_POP
}

/*
equation index: 1970
type: SIMPLE_ASSIGN
r10.m_flow_nom = 985.0 * r10.A * r10.u_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1970(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1970};
  (data->simulationInfo->realParameter[323]/* r10.m_flow_nom PARAM */)  = (985.0) * (((data->simulationInfo->realParameter[307]/* r10.A PARAM */) ) * ((data->simulationInfo->realParameter[328]/* r10.u_nom PARAM */) ));
  TRACE_POP
}

/*
equation index: 1971
type: SIMPLE_ASSIGN
r10.omega = 3.141592653589793 * r10.D
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1971};
  (data->simulationInfo->realParameter[324]/* r10.omega PARAM */)  = (3.141592653589793) * ((data->simulationInfo->realParameter[310]/* r10.D PARAM */) );
  TRACE_POP
}

/*
equation index: 1972
type: SIMPLE_ASSIGN
r10.dp_nom = 492.5 * r10.cf * r10.omega * r10.L * r10.u_nom ^ 2.0 / r10.A
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1972};
  modelica_real tmp94;
  tmp94 = (data->simulationInfo->realParameter[328]/* r10.u_nom PARAM */) ;
  (data->simulationInfo->realParameter[321]/* r10.dp_nom PARAM */)  = (492.5) * (((data->simulationInfo->realParameter[317]/* r10.cf PARAM */) ) * (((data->simulationInfo->realParameter[324]/* r10.omega PARAM */) ) * (((data->simulationInfo->realParameter[311]/* r10.L PARAM */) ) * (DIVISION_SIM((tmp94 * tmp94),(data->simulationInfo->realParameter[307]/* r10.A PARAM */) ,"r10.A",equationIndexes)))));
  TRACE_POP
}

/*
equation index: 1973
type: SIMPLE_ASSIGN
r10.V = 0.5 * r10.A * r10.L
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1973};
  (data->simulationInfo->realParameter[316]/* r10.V PARAM */)  = (0.5) * (((data->simulationInfo->realParameter[307]/* r10.A PARAM */) ) * ((data->simulationInfo->realParameter[311]/* r10.L PARAM */) ));
  TRACE_POP
}

/*
equation index: 1977
type: SIMPLE_ASSIGN
r10.UA = 6.283185307179586 * r10.L * r10.conductivity_pipe_ins / log((0.5 * r10.D + r10.dWall + r10.dIns) / (0.5 * r10.D + r10.dWall))
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1977(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1977};
  modelica_real tmp95;
  tmp95 = DIVISION_SIM((0.5) * ((data->simulationInfo->realParameter[310]/* r10.D PARAM */) ) + (data->simulationInfo->realParameter[320]/* r10.dWall PARAM */)  + (data->simulationInfo->realParameter[319]/* r10.dIns PARAM */) ,(0.5) * ((data->simulationInfo->realParameter[310]/* r10.D PARAM */) ) + (data->simulationInfo->realParameter[320]/* r10.dWall PARAM */) ,"0.5 * r10.D + r10.dWall",equationIndexes);
  if(!(tmp95 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log((0.5 * r10.D + r10.dWall + r10.dIns) / (0.5 * r10.D + r10.dWall)) was %g should be > 0", tmp95);
    }
  }
  (data->simulationInfo->realParameter[314]/* r10.UA PARAM */)  = (6.283185307179586) * (((data->simulationInfo->realParameter[311]/* r10.L PARAM */) ) * (DIVISION_SIM((data->simulationInfo->realParameter[318]/* r10.conductivity_pipe_ins PARAM */) ,log(tmp95),"log((0.5 * r10.D + r10.dWall + r10.dIns) / (0.5 * r10.D + r10.dWall))",equationIndexes)));
  TRACE_POP
}

/*
equation index: 1979
type: SIMPLE_ASSIGN
s12.U_wm = 6.283185307179586 * s12.lambda / log(1.0 + s12.dWall / s12.D)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1979(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1979};
  modelica_real tmp96;
  tmp96 = 1.0 + DIVISION_SIM((data->simulationInfo->realParameter[535]/* s12.dWall PARAM */) ,(data->simulationInfo->realParameter[525]/* s12.D PARAM */) ,"s12.D",equationIndexes);
  if(!(tmp96 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(1.0 + s12.dWall / s12.D) was %g should be > 0", tmp96);
    }
  }
  (data->simulationInfo->realParameter[530]/* s12.U_wm PARAM */)  = (6.283185307179586) * (DIVISION_SIM((data->simulationInfo->realParameter[537]/* s12.lambda PARAM */) ,log(tmp96),"log(1.0 + s12.dWall / s12.D)",equationIndexes));
  TRACE_POP
}

/*
equation index: 1980
type: SIMPLE_ASSIGN
s12.Am = 3.141592653589793 * ((0.5 * s12.D + s12.dWall) ^ 2.0 - (0.5 * s12.D) ^ 2.0)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1980(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1980};
  modelica_real tmp97;
  modelica_real tmp98;
  tmp97 = (0.5) * ((data->simulationInfo->realParameter[525]/* s12.D PARAM */) ) + (data->simulationInfo->realParameter[535]/* s12.dWall PARAM */) ;
  tmp98 = (0.5) * ((data->simulationInfo->realParameter[525]/* s12.D PARAM */) );
  (data->simulationInfo->realParameter[523]/* s12.Am PARAM */)  = (3.141592653589793) * ((tmp97 * tmp97) - ((tmp98 * tmp98)));
  TRACE_POP
}

/*
equation index: 1981
type: SIMPLE_ASSIGN
s12.Cm = s12.L * s12.Am * s12.rhomcm
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1981(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1981};
  (data->simulationInfo->realParameter[524]/* s12.Cm PARAM */)  = ((data->simulationInfo->realParameter[526]/* s12.L PARAM */) ) * (((data->simulationInfo->realParameter[523]/* s12.Am PARAM */) ) * ((data->simulationInfo->realParameter[541]/* s12.rhomcm PARAM */) ));
  TRACE_POP
}

/*
equation index: 1982
type: SIMPLE_ASSIGN
s12.A = 0.7853981633974483 * s12.D ^ 2.0
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1982(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1982};
  modelica_real tmp99;
  tmp99 = (data->simulationInfo->realParameter[525]/* s12.D PARAM */) ;
  (data->simulationInfo->realParameter[522]/* s12.A PARAM */)  = (0.7853981633974483) * ((tmp99 * tmp99));
  TRACE_POP
}

/*
equation index: 1983
type: SIMPLE_ASSIGN
s12.m_flow_nom = 985.0 * s12.A * s12.u_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1983(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1983};
  (data->simulationInfo->realParameter[538]/* s12.m_flow_nom PARAM */)  = (985.0) * (((data->simulationInfo->realParameter[522]/* s12.A PARAM */) ) * ((data->simulationInfo->realParameter[542]/* s12.u_nom PARAM */) ));
  TRACE_POP
}

/*
equation index: 1984
type: SIMPLE_ASSIGN
s12.omega = 3.141592653589793 * s12.D
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1984(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1984};
  (data->simulationInfo->realParameter[539]/* s12.omega PARAM */)  = (3.141592653589793) * ((data->simulationInfo->realParameter[525]/* s12.D PARAM */) );
  TRACE_POP
}

/*
equation index: 1985
type: SIMPLE_ASSIGN
s12.dp_nom = 492.5 * s12.cf * s12.omega * s12.L * s12.u_nom ^ 2.0 / s12.A
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1985(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1985};
  modelica_real tmp100;
  tmp100 = (data->simulationInfo->realParameter[542]/* s12.u_nom PARAM */) ;
  (data->simulationInfo->realParameter[536]/* s12.dp_nom PARAM */)  = (492.5) * (((data->simulationInfo->realParameter[532]/* s12.cf PARAM */) ) * (((data->simulationInfo->realParameter[539]/* s12.omega PARAM */) ) * (((data->simulationInfo->realParameter[526]/* s12.L PARAM */) ) * (DIVISION_SIM((tmp100 * tmp100),(data->simulationInfo->realParameter[522]/* s12.A PARAM */) ,"s12.A",equationIndexes)))));
  TRACE_POP
}

/*
equation index: 1986
type: SIMPLE_ASSIGN
s12.V = 0.5 * s12.A * s12.L
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1986};
  (data->simulationInfo->realParameter[531]/* s12.V PARAM */)  = (0.5) * (((data->simulationInfo->realParameter[522]/* s12.A PARAM */) ) * ((data->simulationInfo->realParameter[526]/* s12.L PARAM */) ));
  TRACE_POP
}

/*
equation index: 1990
type: SIMPLE_ASSIGN
s12.UA = 6.283185307179586 * s12.L * s12.conductivity_pipe_ins / log((0.5 * s12.D + s12.dWall + s12.dIns) / (0.5 * s12.D + s12.dWall))
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1990(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1990};
  modelica_real tmp101;
  tmp101 = DIVISION_SIM((0.5) * ((data->simulationInfo->realParameter[525]/* s12.D PARAM */) ) + (data->simulationInfo->realParameter[535]/* s12.dWall PARAM */)  + (data->simulationInfo->realParameter[534]/* s12.dIns PARAM */) ,(0.5) * ((data->simulationInfo->realParameter[525]/* s12.D PARAM */) ) + (data->simulationInfo->realParameter[535]/* s12.dWall PARAM */) ,"0.5 * s12.D + s12.dWall",equationIndexes);
  if(!(tmp101 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log((0.5 * s12.D + s12.dWall + s12.dIns) / (0.5 * s12.D + s12.dWall)) was %g should be > 0", tmp101);
    }
  }
  (data->simulationInfo->realParameter[529]/* s12.UA PARAM */)  = (6.283185307179586) * (((data->simulationInfo->realParameter[526]/* s12.L PARAM */) ) * (DIVISION_SIM((data->simulationInfo->realParameter[533]/* s12.conductivity_pipe_ins PARAM */) ,log(tmp101),"log((0.5 * s12.D + s12.dWall + s12.dIns) / (0.5 * s12.D + s12.dWall))",equationIndexes)));
  TRACE_POP
}

/*
equation index: 1992
type: SIMPLE_ASSIGN
load1.loadValve1.dp_nom = load1.dp_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1992};
  (data->simulationInfo->realParameter[67]/* load1.loadValve1.dp_nom PARAM */)  = (data->simulationInfo->realParameter[64]/* load1.dp_nom PARAM */) ;
  TRACE_POP
}

/*
equation index: 1993
type: SIMPLE_ASSIGN
load1.loadValve1.m_nom = load1.m_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1993(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1993};
  (data->simulationInfo->realParameter[68]/* load1.loadValve1.m_nom PARAM */)  = (data->simulationInfo->realParameter[106]/* load1.m_nom PARAM */) ;
  TRACE_POP
}

/*
equation index: 1994
type: SIMPLE_ASSIGN
load1.loadValve1.theta_min = load1.theta_min
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1994(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1994};
  (data->simulationInfo->realParameter[69]/* load1.loadValve1.theta_min PARAM */)  = (data->simulationInfo->realParameter[107]/* load1.theta_min PARAM */) ;
  TRACE_POP
}

/*
equation index: 1995
type: SIMPLE_ASSIGN
load1.loadValve1.Kv = load1.Kv
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1995(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1995};
  (data->simulationInfo->realParameter[66]/* load1.loadValve1.Kv PARAM */)  = (data->simulationInfo->realParameter[63]/* load1.Kv PARAM */) ;
  TRACE_POP
}

/*
equation index: 1996
type: SIMPLE_ASSIGN
load1.loadValve1.theta_nom = load1.theta_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1996(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1996};
  (data->simulationInfo->realParameter[70]/* load1.loadValve1.theta_nom PARAM */)  = (data->simulationInfo->realParameter[108]/* load1.theta_nom PARAM */) ;
  TRACE_POP
}

/*
equation index: 1997
type: SIMPLE_ASSIGN
load1.loadValveControl.addFF.k2 = load1.loadValveControl.kFF
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1997};
  (data->simulationInfo->realParameter[83]/* load1.loadValveControl.addFF.k2 PARAM */)  = (data->simulationInfo->realParameter[95]/* load1.loadValveControl.kFF PARAM */) ;
  TRACE_POP
}

/*
equation index: 2002
type: SIMPLE_ASSIGN
load1.loadValveControl.gainPID.k = load1.loadValveControl.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2002(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2002};
  (data->simulationInfo->realParameter[93]/* load1.loadValveControl.gainPID.k PARAM */)  = (data->simulationInfo->realParameter[94]/* load1.loadValveControl.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 2003
type: SIMPLE_ASSIGN
load1.loadValveControl.addP.k1 = load1.loadValveControl.wp
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2003(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2003};
  (data->simulationInfo->realParameter[85]/* load1.loadValveControl.addP.k1 PARAM */)  = (data->simulationInfo->realParameter[100]/* load1.loadValveControl.wp PARAM */) ;
  TRACE_POP
}

/*
equation index: 2012
type: SIMPLE_ASSIGN
s01.U_wm = 6.283185307179586 * s01.lambda / log(1.0 + s01.dWall / s01.D)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2012(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2012};
  modelica_real tmp102;
  tmp102 = 1.0 + DIVISION_SIM((data->simulationInfo->realParameter[514]/* s01.dWall PARAM */) ,(data->simulationInfo->realParameter[504]/* s01.D PARAM */) ,"s01.D",equationIndexes);
  if(!(tmp102 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(1.0 + s01.dWall / s01.D) was %g should be > 0", tmp102);
    }
  }
  (data->simulationInfo->realParameter[509]/* s01.U_wm PARAM */)  = (6.283185307179586) * (DIVISION_SIM((data->simulationInfo->realParameter[516]/* s01.lambda PARAM */) ,log(tmp102),"log(1.0 + s01.dWall / s01.D)",equationIndexes));
  TRACE_POP
}

/*
equation index: 2013
type: SIMPLE_ASSIGN
s01.Am = 3.141592653589793 * ((0.5 * s01.D + s01.dWall) ^ 2.0 - (0.5 * s01.D) ^ 2.0)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2013(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2013};
  modelica_real tmp103;
  modelica_real tmp104;
  tmp103 = (0.5) * ((data->simulationInfo->realParameter[504]/* s01.D PARAM */) ) + (data->simulationInfo->realParameter[514]/* s01.dWall PARAM */) ;
  tmp104 = (0.5) * ((data->simulationInfo->realParameter[504]/* s01.D PARAM */) );
  (data->simulationInfo->realParameter[502]/* s01.Am PARAM */)  = (3.141592653589793) * ((tmp103 * tmp103) - ((tmp104 * tmp104)));
  TRACE_POP
}

/*
equation index: 2014
type: SIMPLE_ASSIGN
s01.Cm = s01.L * s01.Am * s01.rhomcm
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2014(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2014};
  (data->simulationInfo->realParameter[503]/* s01.Cm PARAM */)  = ((data->simulationInfo->realParameter[505]/* s01.L PARAM */) ) * (((data->simulationInfo->realParameter[502]/* s01.Am PARAM */) ) * ((data->simulationInfo->realParameter[520]/* s01.rhomcm PARAM */) ));
  TRACE_POP
}

/*
equation index: 2015
type: SIMPLE_ASSIGN
s01.A = 0.7853981633974483 * s01.D ^ 2.0
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2015(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2015};
  modelica_real tmp105;
  tmp105 = (data->simulationInfo->realParameter[504]/* s01.D PARAM */) ;
  (data->simulationInfo->realParameter[501]/* s01.A PARAM */)  = (0.7853981633974483) * ((tmp105 * tmp105));
  TRACE_POP
}

/*
equation index: 2016
type: SIMPLE_ASSIGN
s01.m_flow_nom = 985.0 * s01.A * s01.u_nom
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2016(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2016};
  (data->simulationInfo->realParameter[517]/* s01.m_flow_nom PARAM */)  = (985.0) * (((data->simulationInfo->realParameter[501]/* s01.A PARAM */) ) * ((data->simulationInfo->realParameter[521]/* s01.u_nom PARAM */) ));
  TRACE_POP
}

/*
equation index: 2017
type: SIMPLE_ASSIGN
s01.omega = 3.141592653589793 * s01.D
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2017(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2017};
  (data->simulationInfo->realParameter[518]/* s01.omega PARAM */)  = (3.141592653589793) * ((data->simulationInfo->realParameter[504]/* s01.D PARAM */) );
  TRACE_POP
}

/*
equation index: 2018
type: SIMPLE_ASSIGN
s01.dp_nom = 492.5 * s01.cf * s01.omega * s01.L * s01.u_nom ^ 2.0 / s01.A
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2018(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2018};
  modelica_real tmp106;
  tmp106 = (data->simulationInfo->realParameter[521]/* s01.u_nom PARAM */) ;
  (data->simulationInfo->realParameter[515]/* s01.dp_nom PARAM */)  = (492.5) * (((data->simulationInfo->realParameter[511]/* s01.cf PARAM */) ) * (((data->simulationInfo->realParameter[518]/* s01.omega PARAM */) ) * (((data->simulationInfo->realParameter[505]/* s01.L PARAM */) ) * (DIVISION_SIM((tmp106 * tmp106),(data->simulationInfo->realParameter[501]/* s01.A PARAM */) ,"s01.A",equationIndexes)))));
  TRACE_POP
}

/*
equation index: 2019
type: SIMPLE_ASSIGN
s01.V = 0.5 * s01.A * s01.L
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2019(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2019};
  (data->simulationInfo->realParameter[510]/* s01.V PARAM */)  = (0.5) * (((data->simulationInfo->realParameter[501]/* s01.A PARAM */) ) * ((data->simulationInfo->realParameter[505]/* s01.L PARAM */) ));
  TRACE_POP
}

/*
equation index: 2023
type: SIMPLE_ASSIGN
s01.UA = 6.283185307179586 * s01.L * s01.conductivity_pipe_ins / log((0.5 * s01.D + s01.dWall + s01.dIns) / (0.5 * s01.D + s01.dWall))
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2023(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2023};
  modelica_real tmp107;
  tmp107 = DIVISION_SIM((0.5) * ((data->simulationInfo->realParameter[504]/* s01.D PARAM */) ) + (data->simulationInfo->realParameter[514]/* s01.dWall PARAM */)  + (data->simulationInfo->realParameter[513]/* s01.dIns PARAM */) ,(0.5) * ((data->simulationInfo->realParameter[504]/* s01.D PARAM */) ) + (data->simulationInfo->realParameter[514]/* s01.dWall PARAM */) ,"0.5 * s01.D + s01.dWall",equationIndexes);
  if(!(tmp107 > 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log((0.5 * s01.D + s01.dWall + s01.dIns) / (0.5 * s01.D + s01.dWall)) was %g should be > 0", tmp107);
    }
  }
  (data->simulationInfo->realParameter[508]/* s01.UA PARAM */)  = (6.283185307179586) * (((data->simulationInfo->realParameter[505]/* s01.L PARAM */) ) * (DIVISION_SIM((data->simulationInfo->realParameter[512]/* s01.conductivity_pipe_ins PARAM */) ,log(tmp107),"log((0.5 * s01.D + s01.dWall + s01.dIns) / (0.5 * s01.D + s01.dWall))",equationIndexes)));
  TRACE_POP
}

/*
equation index: 2025
type: SIMPLE_ASSIGN
boiler.boilerPIControl.addFF.k2 = boiler.boilerPIControl.kFF
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2025(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2025};
  (data->simulationInfo->realParameter[32]/* boiler.boilerPIControl.addFF.k2 PARAM */)  = (data->simulationInfo->realParameter[47]/* boiler.boilerPIControl.kFF PARAM */) ;
  TRACE_POP
}

/*
equation index: 2030
type: SIMPLE_ASSIGN
boiler.boilerPIControl.gainTrack.k = 1.0 / (boiler.boilerPIControl.Ni * boiler.boilerPIControl.k)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2030(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2030};
  (data->simulationInfo->realParameter[45]/* boiler.boilerPIControl.gainTrack.k PARAM */)  = DIVISION_SIM(1.0,((data->simulationInfo->realParameter[25]/* boiler.boilerPIControl.Ni PARAM */) ) * ((data->simulationInfo->realParameter[46]/* boiler.boilerPIControl.k PARAM */) ),"boiler.boilerPIControl.Ni * boiler.boilerPIControl.k",equationIndexes);
  TRACE_POP
}

/*
equation index: 2031
type: SIMPLE_ASSIGN
boiler.boilerPIControl.gainPID.k = boiler.boilerPIControl.k
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2031(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2031};
  (data->simulationInfo->realParameter[44]/* boiler.boilerPIControl.gainPID.k PARAM */)  = (data->simulationInfo->realParameter[46]/* boiler.boilerPIControl.k PARAM */) ;
  TRACE_POP
}

/*
equation index: 2033
type: SIMPLE_ASSIGN
boiler.boilerPIControl.D.x_start = boiler.boilerPIControl.xd_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2033(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2033};
  (data->simulationInfo->realParameter[18]/* boiler.boilerPIControl.D.x_start PARAM */)  = (data->simulationInfo->realParameter[52]/* boiler.boilerPIControl.xd_start PARAM */) ;
  TRACE_POP
}

/*
equation index: 2035
type: SIMPLE_ASSIGN
boiler.boilerPIControl.D.T = max(boiler.boilerPIControl.Td / boiler.boilerPIControl.Nd, 1e-14)
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2035(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2035};
  (data->simulationInfo->realParameter[16]/* boiler.boilerPIControl.D.T PARAM */)  = fmax(DIVISION_SIM((data->simulationInfo->realParameter[27]/* boiler.boilerPIControl.Td PARAM */) ,(data->simulationInfo->realParameter[24]/* boiler.boilerPIControl.Nd PARAM */) ,"boiler.boilerPIControl.Nd",equationIndexes),1e-14);
  TRACE_POP
}

/*
equation index: 2036
type: SIMPLE_ASSIGN
boiler.boilerPIControl.D.k = boiler.boilerPIControl.Td
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2036(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2036};
  (data->simulationInfo->realParameter[17]/* boiler.boilerPIControl.D.k PARAM */)  = (data->simulationInfo->realParameter[27]/* boiler.boilerPIControl.Td PARAM */) ;
  TRACE_POP
}

/*
equation index: 2037
type: SIMPLE_ASSIGN
boiler.boilerPIControl.I.y_start = boiler.boilerPIControl.xi_start
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2037(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2037};
  (data->simulationInfo->realParameter[23]/* boiler.boilerPIControl.I.y_start PARAM */)  = (data->simulationInfo->realParameter[53]/* boiler.boilerPIControl.xi_start PARAM */) ;
  TRACE_POP
}

/*
equation index: 2041
type: SIMPLE_ASSIGN
boiler.boilerPIControl.I.k = 1.0 / boiler.boilerPIControl.Ti
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2041(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2041};
  (data->simulationInfo->realParameter[22]/* boiler.boilerPIControl.I.k PARAM */)  = DIVISION_SIM(1.0,(data->simulationInfo->realParameter[28]/* boiler.boilerPIControl.Ti PARAM */) ,"boiler.boilerPIControl.Ti",equationIndexes);
  TRACE_POP
}

/*
equation index: 2042
type: SIMPLE_ASSIGN
boiler.boilerPIControl.addD.k1 = boiler.boilerPIControl.wd
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2042(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2042};
  (data->simulationInfo->realParameter[29]/* boiler.boilerPIControl.addD.k1 PARAM */)  = (data->simulationInfo->realParameter[50]/* boiler.boilerPIControl.wd PARAM */) ;
  TRACE_POP
}

/*
equation index: 2043
type: SIMPLE_ASSIGN
boiler.boilerPIControl.addP.k1 = boiler.boilerPIControl.wp
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2043(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2043};
  (data->simulationInfo->realParameter[37]/* boiler.boilerPIControl.addP.k1 PARAM */)  = (data->simulationInfo->realParameter[51]/* boiler.boilerPIControl.wp PARAM */) ;
  TRACE_POP
}

/*
equation index: 2052
type: SIMPLE_ASSIGN
boiler.boilerInsideVolume.V = boiler.V
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2052(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2052};
  (data->simulationInfo->realParameter[13]/* boiler.boilerInsideVolume.V PARAM */)  = (data->simulationInfo->realParameter[5]/* boiler.V PARAM */) ;
  TRACE_POP
}

/*
equation index: 2053
type: SIMPLE_ASSIGN
boiler.boilerInsideVolume.M = 985.0 * boiler.boilerInsideVolume.V
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2053(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2053};
  (data->simulationInfo->realParameter[9]/* boiler.boilerInsideVolume.M PARAM */)  = (985.0) * ((data->simulationInfo->realParameter[13]/* boiler.boilerInsideVolume.V PARAM */) );
  TRACE_POP
}

/*
equation index: 2054
type: SIMPLE_ASSIGN
boiler.boilerInsideVolume.T_start = boiler.T_vol
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2054(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2054};
  (data->simulationInfo->realParameter[11]/* boiler.boilerInsideVolume.T_start PARAM */)  = (data->simulationInfo->realParameter[4]/* boiler.T_vol PARAM */) ;
  TRACE_POP
}
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_19(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_18(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_17(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_16(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_15(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_498(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_13(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_12(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_8(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_7(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_6(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_5(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_4(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_3(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2(DATA *data, threadData_t *threadData);

extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1(DATA *data, threadData_t *threadData);


/*
equation index: 2078
type: ALGORITHM

  assert(r74.rho >= 0.0, "Variable violating min constraint: 0.0 <= r74.rho, has value: " + String(r74.rho, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2078(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2078};
  modelica_boolean tmp108;
  static const MMC_DEFSTRINGLIT(tmp109,62,"Variable violating min constraint: 0.0 <= r74.rho, has value: ");
  modelica_string tmp110;
  modelica_metatype tmpMeta111;
  static int tmp112 = 0;
  if(!tmp112)
  {
    tmp108 = GreaterEq((data->simulationInfo->realParameter[452]/* r74.rho PARAM */) ,0.0);
    if(!tmp108)
    {
      tmp110 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[452]/* r74.rho PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta111 = stringAppend(MMC_REFSTRINGLIT(tmp109),tmp110);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr74.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta111));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",698,7,698,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr74.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta111));
        }
      }
      tmp112 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2079
type: ALGORITHM

  assert(r74.T_start >= 0.0, "Variable violating min constraint: 0.0 <= r74.T_start, has value: " + String(r74.T_start, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2079(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2079};
  modelica_boolean tmp113;
  static const MMC_DEFSTRINGLIT(tmp114,66,"Variable violating min constraint: 0.0 <= r74.T_start, has value: ");
  modelica_string tmp115;
  modelica_metatype tmpMeta116;
  static int tmp117 = 0;
  if(!tmp117)
  {
    tmp113 = GreaterEq((data->simulationInfo->realParameter[440]/* r74.T_start PARAM */) ,0.0);
    if(!tmp113)
    {
      tmp115 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[440]/* r74.T_start PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta116 = stringAppend(MMC_REFSTRINGLIT(tmp114),tmp115);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr74.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta116));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",689,7,689,94,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr74.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta116));
        }
      }
      tmp117 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2080
type: ALGORITHM

  assert(r74.T_ext >= 0.0, "Variable violating min constraint: 0.0 <= r74.T_ext, has value: " + String(r74.T_ext, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2080(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2080};
  modelica_boolean tmp118;
  static const MMC_DEFSTRINGLIT(tmp119,64,"Variable violating min constraint: 0.0 <= r74.T_ext, has value: ");
  modelica_string tmp120;
  modelica_metatype tmpMeta121;
  static int tmp122 = 0;
  if(!tmp122)
  {
    tmp118 = GreaterEq((data->simulationInfo->realParameter[439]/* r74.T_ext PARAM */) ,0.0);
    if(!tmp118)
    {
      tmp120 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[439]/* r74.T_ext PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta121 = stringAppend(MMC_REFSTRINGLIT(tmp119),tmp120);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr74.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta121));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",688,7,688,84,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr74.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta121));
        }
      }
      tmp122 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2081
type: ALGORITHM

  assert(s47.rho >= 0.0, "Variable violating min constraint: 0.0 <= s47.rho, has value: " + String(s47.rho, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2081(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2081};
  modelica_boolean tmp123;
  static const MMC_DEFSTRINGLIT(tmp124,62,"Variable violating min constraint: 0.0 <= s47.rho, has value: ");
  modelica_string tmp125;
  modelica_metatype tmpMeta126;
  static int tmp127 = 0;
  if(!tmp127)
  {
    tmp123 = GreaterEq((data->simulationInfo->realParameter[645]/* s47.rho PARAM */) ,0.0);
    if(!tmp123)
    {
      tmp125 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[645]/* s47.rho PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta126 = stringAppend(MMC_REFSTRINGLIT(tmp124),tmp125);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns47.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta126));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",698,7,698,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns47.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta126));
        }
      }
      tmp127 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2082
type: ALGORITHM

  assert(s47.T_start >= 0.0, "Variable violating min constraint: 0.0 <= s47.T_start, has value: " + String(s47.T_start, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2082(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2082};
  modelica_boolean tmp128;
  static const MMC_DEFSTRINGLIT(tmp129,66,"Variable violating min constraint: 0.0 <= s47.T_start, has value: ");
  modelica_string tmp130;
  modelica_metatype tmpMeta131;
  static int tmp132 = 0;
  if(!tmp132)
  {
    tmp128 = GreaterEq((data->simulationInfo->realParameter[633]/* s47.T_start PARAM */) ,0.0);
    if(!tmp128)
    {
      tmp130 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[633]/* s47.T_start PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta131 = stringAppend(MMC_REFSTRINGLIT(tmp129),tmp130);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns47.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta131));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",689,7,689,94,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns47.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta131));
        }
      }
      tmp132 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2083
type: ALGORITHM

  assert(s47.T_ext >= 0.0, "Variable violating min constraint: 0.0 <= s47.T_ext, has value: " + String(s47.T_ext, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2083(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2083};
  modelica_boolean tmp133;
  static const MMC_DEFSTRINGLIT(tmp134,64,"Variable violating min constraint: 0.0 <= s47.T_ext, has value: ");
  modelica_string tmp135;
  modelica_metatype tmpMeta136;
  static int tmp137 = 0;
  if(!tmp137)
  {
    tmp133 = GreaterEq((data->simulationInfo->realParameter[632]/* s47.T_ext PARAM */) ,0.0);
    if(!tmp133)
    {
      tmp135 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[632]/* s47.T_ext PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta136 = stringAppend(MMC_REFSTRINGLIT(tmp134),tmp135);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns47.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta136));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",688,7,688,84,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns47.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta136));
        }
      }
      tmp137 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2084
type: ALGORITHM

  assert(s78.rho >= 0.0, "Variable violating min constraint: 0.0 <= s78.rho, has value: " + String(s78.rho, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2084(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2084};
  modelica_boolean tmp138;
  static const MMC_DEFSTRINGLIT(tmp139,62,"Variable violating min constraint: 0.0 <= s78.rho, has value: ");
  modelica_string tmp140;
  modelica_metatype tmpMeta141;
  static int tmp142 = 0;
  if(!tmp142)
  {
    tmp138 = GreaterEq((data->simulationInfo->realParameter[687]/* s78.rho PARAM */) ,0.0);
    if(!tmp138)
    {
      tmp140 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[687]/* s78.rho PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta141 = stringAppend(MMC_REFSTRINGLIT(tmp139),tmp140);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns78.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta141));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",698,7,698,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns78.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta141));
        }
      }
      tmp142 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2085
type: ALGORITHM

  assert(s78.T_start >= 0.0, "Variable violating min constraint: 0.0 <= s78.T_start, has value: " + String(s78.T_start, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2085(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2085};
  modelica_boolean tmp143;
  static const MMC_DEFSTRINGLIT(tmp144,66,"Variable violating min constraint: 0.0 <= s78.T_start, has value: ");
  modelica_string tmp145;
  modelica_metatype tmpMeta146;
  static int tmp147 = 0;
  if(!tmp147)
  {
    tmp143 = GreaterEq((data->simulationInfo->realParameter[675]/* s78.T_start PARAM */) ,0.0);
    if(!tmp143)
    {
      tmp145 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[675]/* s78.T_start PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta146 = stringAppend(MMC_REFSTRINGLIT(tmp144),tmp145);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns78.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta146));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",689,7,689,94,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns78.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta146));
        }
      }
      tmp147 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2086
type: ALGORITHM

  assert(s78.T_ext >= 0.0, "Variable violating min constraint: 0.0 <= s78.T_ext, has value: " + String(s78.T_ext, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2086(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2086};
  modelica_boolean tmp148;
  static const MMC_DEFSTRINGLIT(tmp149,64,"Variable violating min constraint: 0.0 <= s78.T_ext, has value: ");
  modelica_string tmp150;
  modelica_metatype tmpMeta151;
  static int tmp152 = 0;
  if(!tmp152)
  {
    tmp148 = GreaterEq((data->simulationInfo->realParameter[674]/* s78.T_ext PARAM */) ,0.0);
    if(!tmp148)
    {
      tmp150 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[674]/* s78.T_ext PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta151 = stringAppend(MMC_REFSTRINGLIT(tmp149),tmp150);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns78.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta151));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",688,7,688,84,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns78.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta151));
        }
      }
      tmp152 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2087
type: ALGORITHM

  assert(r87.rho >= 0.0, "Variable violating min constraint: 0.0 <= r87.rho, has value: " + String(r87.rho, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2087(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2087};
  modelica_boolean tmp153;
  static const MMC_DEFSTRINGLIT(tmp154,62,"Variable violating min constraint: 0.0 <= r87.rho, has value: ");
  modelica_string tmp155;
  modelica_metatype tmpMeta156;
  static int tmp157 = 0;
  if(!tmp157)
  {
    tmp153 = GreaterEq((data->simulationInfo->realParameter[494]/* r87.rho PARAM */) ,0.0);
    if(!tmp153)
    {
      tmp155 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[494]/* r87.rho PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta156 = stringAppend(MMC_REFSTRINGLIT(tmp154),tmp155);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr87.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta156));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",698,7,698,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr87.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta156));
        }
      }
      tmp157 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2088
type: ALGORITHM

  assert(r87.T_start >= 0.0, "Variable violating min constraint: 0.0 <= r87.T_start, has value: " + String(r87.T_start, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2088(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2088};
  modelica_boolean tmp158;
  static const MMC_DEFSTRINGLIT(tmp159,66,"Variable violating min constraint: 0.0 <= r87.T_start, has value: ");
  modelica_string tmp160;
  modelica_metatype tmpMeta161;
  static int tmp162 = 0;
  if(!tmp162)
  {
    tmp158 = GreaterEq((data->simulationInfo->realParameter[482]/* r87.T_start PARAM */) ,0.0);
    if(!tmp158)
    {
      tmp160 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[482]/* r87.T_start PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta161 = stringAppend(MMC_REFSTRINGLIT(tmp159),tmp160);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr87.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta161));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",689,7,689,94,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr87.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta161));
        }
      }
      tmp162 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2089
type: ALGORITHM

  assert(r87.T_ext >= 0.0, "Variable violating min constraint: 0.0 <= r87.T_ext, has value: " + String(r87.T_ext, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2089(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2089};
  modelica_boolean tmp163;
  static const MMC_DEFSTRINGLIT(tmp164,64,"Variable violating min constraint: 0.0 <= r87.T_ext, has value: ");
  modelica_string tmp165;
  modelica_metatype tmpMeta166;
  static int tmp167 = 0;
  if(!tmp167)
  {
    tmp163 = GreaterEq((data->simulationInfo->realParameter[481]/* r87.T_ext PARAM */) ,0.0);
    if(!tmp163)
    {
      tmp165 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[481]/* r87.T_ext PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta166 = stringAppend(MMC_REFSTRINGLIT(tmp164),tmp165);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr87.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta166));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",688,7,688,84,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr87.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta166));
        }
      }
      tmp167 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2090
type: ALGORITHM

  assert(load5.loadValveControl.limiter.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load5.loadValveControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, "Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= load5.loadValveControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: " + String(load5.loadValveControl.limiter.homotopyType, "d"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2090(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2090};
  modelica_boolean tmp168;
  modelica_boolean tmp169;
  static const MMC_DEFSTRINGLIT(tmp170,199,"Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= load5.loadValveControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: ");
  modelica_string tmp171;
  modelica_metatype tmpMeta172;
  static int tmp173 = 0;
  if(!tmp173)
  {
    tmp168 = GreaterEq((data->simulationInfo->integerParameter[25]/* load5.loadValveControl.limiter.homotopyType PARAM */) ,1);
    tmp169 = LessEq((data->simulationInfo->integerParameter[25]/* load5.loadValveControl.limiter.homotopyType PARAM */) ,4);
    if(!(tmp168 && tmp169))
    {
      tmp171 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[25]/* load5.loadValveControl.limiter.homotopyType PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta172 = stringAppend(MMC_REFSTRINGLIT(tmp170),tmp171);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload5.loadValveControl.limiter.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load5.loadValveControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta172));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",12,9,13,69,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload5.loadValveControl.limiter.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load5.loadValveControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta172));
        }
      }
      tmp173 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2091
type: ALGORITHM

  assert(load5.loadValveControl.k >= 0.0, "Variable violating min constraint: 0.0 <= load5.loadValveControl.k, has value: " + String(load5.loadValveControl.k, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2091(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2091};
  modelica_boolean tmp174;
  static const MMC_DEFSTRINGLIT(tmp175,79,"Variable violating min constraint: 0.0 <= load5.loadValveControl.k, has value: ");
  modelica_string tmp176;
  modelica_metatype tmpMeta177;
  static int tmp178 = 0;
  if(!tmp178)
  {
    tmp174 = GreaterEq((data->simulationInfo->realParameter[282]/* load5.loadValveControl.k PARAM */) ,0.0);
    if(!tmp174)
    {
      tmp176 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[282]/* load5.loadValveControl.k PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta177 = stringAppend(MMC_REFSTRINGLIT(tmp175),tmp176);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload5.loadValveControl.k >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta177));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",768,5,768,63,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload5.loadValveControl.k >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta177));
        }
      }
      tmp178 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2092
type: ALGORITHM

  assert(load5.loadValveControl.wp >= 0.0, "Variable violating min constraint: 0.0 <= load5.loadValveControl.wp, has value: " + String(load5.loadValveControl.wp, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2092(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2092};
  modelica_boolean tmp179;
  static const MMC_DEFSTRINGLIT(tmp180,80,"Variable violating min constraint: 0.0 <= load5.loadValveControl.wp, has value: ");
  modelica_string tmp181;
  modelica_metatype tmpMeta182;
  static int tmp183 = 0;
  if(!tmp183)
  {
    tmp179 = GreaterEq((data->simulationInfo->realParameter[288]/* load5.loadValveControl.wp PARAM */) ,0.0);
    if(!tmp179)
    {
      tmp181 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[288]/* load5.loadValveControl.wp PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta182 = stringAppend(MMC_REFSTRINGLIT(tmp180),tmp181);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload5.loadValveControl.wp >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta182));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",779,5,780,55,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload5.loadValveControl.wp >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta182));
        }
      }
      tmp183 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2093
type: ALGORITHM

  assert(load5.loadValveControl.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load5.loadValveControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, "Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= load5.loadValveControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: " + String(load5.loadValveControl.homotopyType, "d"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2093(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2093};
  modelica_boolean tmp184;
  modelica_boolean tmp185;
  static const MMC_DEFSTRINGLIT(tmp186,191,"Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= load5.loadValveControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: ");
  modelica_string tmp187;
  modelica_metatype tmpMeta188;
  static int tmp189 = 0;
  if(!tmp189)
  {
    tmp184 = GreaterEq((data->simulationInfo->integerParameter[23]/* load5.loadValveControl.homotopyType PARAM */) ,1);
    tmp185 = LessEq((data->simulationInfo->integerParameter[23]/* load5.loadValveControl.homotopyType PARAM */) ,4);
    if(!(tmp184 && tmp185))
    {
      tmp187 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[23]/* load5.loadValveControl.homotopyType PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta188 = stringAppend(MMC_REFSTRINGLIT(tmp186),tmp187);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload5.loadValveControl.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load5.loadValveControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta188));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",812,5,814,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload5.loadValveControl.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load5.loadValveControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta188));
        }
      }
      tmp189 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2094
type: ALGORITHM

  assert(load5.loadValveControl.initType >= Modelica.Blocks.Types.Init.NoInit and load5.loadValveControl.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= load5.loadValveControl.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(load5.loadValveControl.initType, "d"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2094(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2094};
  modelica_boolean tmp190;
  modelica_boolean tmp191;
  static const MMC_DEFSTRINGLIT(tmp192,164,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= load5.loadValveControl.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp193;
  modelica_metatype tmpMeta194;
  static int tmp195 = 0;
  if(!tmp195)
  {
    tmp190 = GreaterEq((data->simulationInfo->integerParameter[24]/* load5.loadValveControl.initType PARAM */) ,1);
    tmp191 = LessEq((data->simulationInfo->integerParameter[24]/* load5.loadValveControl.initType PARAM */) ,4);
    if(!(tmp190 && tmp191))
    {
      tmp193 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[24]/* load5.loadValveControl.initType PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta194 = stringAppend(MMC_REFSTRINGLIT(tmp192),tmp193);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload5.loadValveControl.initType >= Modelica.Blocks.Types.Init.NoInit and load5.loadValveControl.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta194));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",796,5,798,64,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload5.loadValveControl.initType >= Modelica.Blocks.Types.Init.NoInit and load5.loadValveControl.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta194));
        }
      }
      tmp195 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2095
type: ALGORITHM

  assert(load5.loadValveControl.Nd >= 1e-13, "Variable violating min constraint: 1e-13 <= load5.loadValveControl.Nd, has value: " + String(load5.loadValveControl.Nd, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2095(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2095};
  modelica_boolean tmp196;
  static const MMC_DEFSTRINGLIT(tmp197,82,"Variable violating min constraint: 1e-13 <= load5.loadValveControl.Nd, has value: ");
  modelica_string tmp198;
  modelica_metatype tmpMeta199;
  static int tmp200 = 0;
  if(!tmp200)
  {
    tmp196 = GreaterEq((data->simulationInfo->realParameter[265]/* load5.loadValveControl.Nd PARAM */) ,1e-13);
    if(!tmp196)
    {
      tmp198 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[265]/* load5.loadValveControl.Nd PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta199 = stringAppend(MMC_REFSTRINGLIT(tmp197),tmp198);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload5.loadValveControl.Nd >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta199));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",788,5,791,96,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload5.loadValveControl.Nd >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta199));
        }
      }
      tmp200 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2096
type: ALGORITHM

  assert(load5.loadValveControl.Ni >= 1e-13, "Variable violating min constraint: 1e-13 <= load5.loadValveControl.Ni, has value: " + String(load5.loadValveControl.Ni, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2096(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2096};
  modelica_boolean tmp201;
  static const MMC_DEFSTRINGLIT(tmp202,82,"Variable violating min constraint: 1e-13 <= load5.loadValveControl.Ni, has value: ");
  modelica_string tmp203;
  modelica_metatype tmpMeta204;
  static int tmp205 = 0;
  if(!tmp205)
  {
    tmp201 = GreaterEq((data->simulationInfo->realParameter[266]/* load5.loadValveControl.Ni PARAM */) ,1e-13);
    if(!tmp201)
    {
      tmp203 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[266]/* load5.loadValveControl.Ni PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta204 = stringAppend(MMC_REFSTRINGLIT(tmp202),tmp203);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload5.loadValveControl.Ni >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta204));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",784,5,787,94,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload5.loadValveControl.Ni >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta204));
        }
      }
      tmp205 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2097
type: ALGORITHM

  assert(load5.loadValveControl.wd >= 0.0, "Variable violating min constraint: 0.0 <= load5.loadValveControl.wd, has value: " + String(load5.loadValveControl.wd, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2097(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2097};
  modelica_boolean tmp206;
  static const MMC_DEFSTRINGLIT(tmp207,80,"Variable violating min constraint: 0.0 <= load5.loadValveControl.wd, has value: ");
  modelica_string tmp208;
  modelica_metatype tmpMeta209;
  static int tmp210 = 0;
  if(!tmp210)
  {
    tmp206 = GreaterEq((data->simulationInfo->realParameter[287]/* load5.loadValveControl.wd PARAM */) ,0.0);
    if(!tmp206)
    {
      tmp208 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[287]/* load5.loadValveControl.wd PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta209 = stringAppend(MMC_REFSTRINGLIT(tmp207),tmp208);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload5.loadValveControl.wd >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta209));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",781,5,783,96,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload5.loadValveControl.wd >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta209));
        }
      }
      tmp210 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2098
type: ALGORITHM

  assert(load5.loadValveControl.Td >= 0.0, "Variable violating min constraint: 0.0 <= load5.loadValveControl.Td, has value: " + String(load5.loadValveControl.Td, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2098(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2098};
  modelica_boolean tmp211;
  static const MMC_DEFSTRINGLIT(tmp212,80,"Variable violating min constraint: 0.0 <= load5.loadValveControl.Td, has value: ");
  modelica_string tmp213;
  modelica_metatype tmpMeta214;
  static int tmp215 = 0;
  if(!tmp215)
  {
    tmp211 = GreaterEq((data->simulationInfo->realParameter[268]/* load5.loadValveControl.Td PARAM */) ,0.0);
    if(!tmp211)
    {
      tmp213 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[268]/* load5.loadValveControl.Td PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta214 = stringAppend(MMC_REFSTRINGLIT(tmp212),tmp213);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload5.loadValveControl.Td >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta214));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",773,5,776,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload5.loadValveControl.Td >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta214));
        }
      }
      tmp215 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2099
type: ALGORITHM

  assert(load5.loadValveControl.Ti >= 1e-60, "Variable violating min constraint: 1e-60 <= load5.loadValveControl.Ti, has value: " + String(load5.loadValveControl.Ti, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2099(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2099};
  modelica_boolean tmp216;
  static const MMC_DEFSTRINGLIT(tmp217,82,"Variable violating min constraint: 1e-60 <= load5.loadValveControl.Ti, has value: ");
  modelica_string tmp218;
  modelica_metatype tmpMeta219;
  static int tmp220 = 0;
  if(!tmp220)
  {
    tmp216 = GreaterEq((data->simulationInfo->realParameter[269]/* load5.loadValveControl.Ti PARAM */) ,1e-60);
    if(!tmp216)
    {
      tmp218 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[269]/* load5.loadValveControl.Ti PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta219 = stringAppend(MMC_REFSTRINGLIT(tmp217),tmp218);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload5.loadValveControl.Ti >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta219));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",769,5,772,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload5.loadValveControl.Ti >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta219));
        }
      }
      tmp220 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2100
type: ALGORITHM

  assert(load5.loadValveControl.controllerType >= Modelica.Blocks.Types.SimpleController.P and load5.loadValveControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID, "Variable violating min/max constraint: Modelica.Blocks.Types.SimpleController.P <= load5.loadValveControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID, has value: " + String(load5.loadValveControl.controllerType, "d"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2100};
  modelica_boolean tmp221;
  modelica_boolean tmp222;
  static const MMC_DEFSTRINGLIT(tmp223,179,"Variable violating min/max constraint: Modelica.Blocks.Types.SimpleController.P <= load5.loadValveControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID, has value: ");
  modelica_string tmp224;
  modelica_metatype tmpMeta225;
  static int tmp226 = 0;
  if(!tmp226)
  {
    tmp221 = GreaterEq((data->simulationInfo->integerParameter[22]/* load5.loadValveControl.controllerType PARAM */) ,1);
    tmp222 = LessEq((data->simulationInfo->integerParameter[22]/* load5.loadValveControl.controllerType PARAM */) ,4);
    if(!(tmp221 && tmp222))
    {
      tmp224 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[22]/* load5.loadValveControl.controllerType PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta225 = stringAppend(MMC_REFSTRINGLIT(tmp223),tmp224);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload5.loadValveControl.controllerType >= Modelica.Blocks.Types.SimpleController.P and load5.loadValveControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta225));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",766,5,767,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload5.loadValveControl.controllerType >= Modelica.Blocks.Types.SimpleController.P and load5.loadValveControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta225));
        }
      }
      tmp226 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2101
type: ALGORITHM

  assert(s67.rho >= 0.0, "Variable violating min constraint: 0.0 <= s67.rho, has value: " + String(s67.rho, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2101};
  modelica_boolean tmp227;
  static const MMC_DEFSTRINGLIT(tmp228,62,"Variable violating min constraint: 0.0 <= s67.rho, has value: ");
  modelica_string tmp229;
  modelica_metatype tmpMeta230;
  static int tmp231 = 0;
  if(!tmp231)
  {
    tmp227 = GreaterEq((data->simulationInfo->realParameter[666]/* s67.rho PARAM */) ,0.0);
    if(!tmp227)
    {
      tmp229 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[666]/* s67.rho PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta230 = stringAppend(MMC_REFSTRINGLIT(tmp228),tmp229);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns67.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta230));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",698,7,698,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns67.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta230));
        }
      }
      tmp231 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2102
type: ALGORITHM

  assert(s67.T_start >= 0.0, "Variable violating min constraint: 0.0 <= s67.T_start, has value: " + String(s67.T_start, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2102};
  modelica_boolean tmp232;
  static const MMC_DEFSTRINGLIT(tmp233,66,"Variable violating min constraint: 0.0 <= s67.T_start, has value: ");
  modelica_string tmp234;
  modelica_metatype tmpMeta235;
  static int tmp236 = 0;
  if(!tmp236)
  {
    tmp232 = GreaterEq((data->simulationInfo->realParameter[654]/* s67.T_start PARAM */) ,0.0);
    if(!tmp232)
    {
      tmp234 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[654]/* s67.T_start PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta235 = stringAppend(MMC_REFSTRINGLIT(tmp233),tmp234);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns67.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta235));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",689,7,689,94,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns67.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta235));
        }
      }
      tmp236 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2103
type: ALGORITHM

  assert(s67.T_ext >= 0.0, "Variable violating min constraint: 0.0 <= s67.T_ext, has value: " + String(s67.T_ext, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2103};
  modelica_boolean tmp237;
  static const MMC_DEFSTRINGLIT(tmp238,64,"Variable violating min constraint: 0.0 <= s67.T_ext, has value: ");
  modelica_string tmp239;
  modelica_metatype tmpMeta240;
  static int tmp241 = 0;
  if(!tmp241)
  {
    tmp237 = GreaterEq((data->simulationInfo->realParameter[653]/* s67.T_ext PARAM */) ,0.0);
    if(!tmp237)
    {
      tmp239 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[653]/* s67.T_ext PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta240 = stringAppend(MMC_REFSTRINGLIT(tmp238),tmp239);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns67.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta240));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",688,7,688,84,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns67.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta240));
        }
      }
      tmp241 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2104
type: ALGORITHM

  assert(load4.loadValveControl.limiter.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load4.loadValveControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, "Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= load4.loadValveControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: " + String(load4.loadValveControl.limiter.homotopyType, "d"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2104};
  modelica_boolean tmp242;
  modelica_boolean tmp243;
  static const MMC_DEFSTRINGLIT(tmp244,199,"Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= load4.loadValveControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: ");
  modelica_string tmp245;
  modelica_metatype tmpMeta246;
  static int tmp247 = 0;
  if(!tmp247)
  {
    tmp242 = GreaterEq((data->simulationInfo->integerParameter[21]/* load4.loadValveControl.limiter.homotopyType PARAM */) ,1);
    tmp243 = LessEq((data->simulationInfo->integerParameter[21]/* load4.loadValveControl.limiter.homotopyType PARAM */) ,4);
    if(!(tmp242 && tmp243))
    {
      tmp245 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[21]/* load4.loadValveControl.limiter.homotopyType PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta246 = stringAppend(MMC_REFSTRINGLIT(tmp244),tmp245);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload4.loadValveControl.limiter.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load4.loadValveControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta246));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",12,9,13,69,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload4.loadValveControl.limiter.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load4.loadValveControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta246));
        }
      }
      tmp247 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2105
type: ALGORITHM

  assert(load4.loadValveControl.k >= 0.0, "Variable violating min constraint: 0.0 <= load4.loadValveControl.k, has value: " + String(load4.loadValveControl.k, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2105};
  modelica_boolean tmp248;
  static const MMC_DEFSTRINGLIT(tmp249,79,"Variable violating min constraint: 0.0 <= load4.loadValveControl.k, has value: ");
  modelica_string tmp250;
  modelica_metatype tmpMeta251;
  static int tmp252 = 0;
  if(!tmp252)
  {
    tmp248 = GreaterEq((data->simulationInfo->realParameter[235]/* load4.loadValveControl.k PARAM */) ,0.0);
    if(!tmp248)
    {
      tmp250 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[235]/* load4.loadValveControl.k PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta251 = stringAppend(MMC_REFSTRINGLIT(tmp249),tmp250);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload4.loadValveControl.k >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta251));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",768,5,768,63,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload4.loadValveControl.k >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta251));
        }
      }
      tmp252 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2106
type: ALGORITHM

  assert(load4.loadValveControl.wp >= 0.0, "Variable violating min constraint: 0.0 <= load4.loadValveControl.wp, has value: " + String(load4.loadValveControl.wp, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2106};
  modelica_boolean tmp253;
  static const MMC_DEFSTRINGLIT(tmp254,80,"Variable violating min constraint: 0.0 <= load4.loadValveControl.wp, has value: ");
  modelica_string tmp255;
  modelica_metatype tmpMeta256;
  static int tmp257 = 0;
  if(!tmp257)
  {
    tmp253 = GreaterEq((data->simulationInfo->realParameter[241]/* load4.loadValveControl.wp PARAM */) ,0.0);
    if(!tmp253)
    {
      tmp255 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[241]/* load4.loadValveControl.wp PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta256 = stringAppend(MMC_REFSTRINGLIT(tmp254),tmp255);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload4.loadValveControl.wp >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta256));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",779,5,780,55,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload4.loadValveControl.wp >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta256));
        }
      }
      tmp257 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2107
type: ALGORITHM

  assert(load4.loadValveControl.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load4.loadValveControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, "Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= load4.loadValveControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: " + String(load4.loadValveControl.homotopyType, "d"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2107};
  modelica_boolean tmp258;
  modelica_boolean tmp259;
  static const MMC_DEFSTRINGLIT(tmp260,191,"Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= load4.loadValveControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: ");
  modelica_string tmp261;
  modelica_metatype tmpMeta262;
  static int tmp263 = 0;
  if(!tmp263)
  {
    tmp258 = GreaterEq((data->simulationInfo->integerParameter[19]/* load4.loadValveControl.homotopyType PARAM */) ,1);
    tmp259 = LessEq((data->simulationInfo->integerParameter[19]/* load4.loadValveControl.homotopyType PARAM */) ,4);
    if(!(tmp258 && tmp259))
    {
      tmp261 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[19]/* load4.loadValveControl.homotopyType PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta262 = stringAppend(MMC_REFSTRINGLIT(tmp260),tmp261);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload4.loadValveControl.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load4.loadValveControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta262));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",812,5,814,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload4.loadValveControl.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load4.loadValveControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta262));
        }
      }
      tmp263 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2108
type: ALGORITHM

  assert(load4.loadValveControl.initType >= Modelica.Blocks.Types.Init.NoInit and load4.loadValveControl.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= load4.loadValveControl.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(load4.loadValveControl.initType, "d"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2108};
  modelica_boolean tmp264;
  modelica_boolean tmp265;
  static const MMC_DEFSTRINGLIT(tmp266,164,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= load4.loadValveControl.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp267;
  modelica_metatype tmpMeta268;
  static int tmp269 = 0;
  if(!tmp269)
  {
    tmp264 = GreaterEq((data->simulationInfo->integerParameter[20]/* load4.loadValveControl.initType PARAM */) ,1);
    tmp265 = LessEq((data->simulationInfo->integerParameter[20]/* load4.loadValveControl.initType PARAM */) ,4);
    if(!(tmp264 && tmp265))
    {
      tmp267 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[20]/* load4.loadValveControl.initType PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta268 = stringAppend(MMC_REFSTRINGLIT(tmp266),tmp267);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload4.loadValveControl.initType >= Modelica.Blocks.Types.Init.NoInit and load4.loadValveControl.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta268));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",796,5,798,64,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload4.loadValveControl.initType >= Modelica.Blocks.Types.Init.NoInit and load4.loadValveControl.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta268));
        }
      }
      tmp269 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2109
type: ALGORITHM

  assert(load4.loadValveControl.Nd >= 1e-13, "Variable violating min constraint: 1e-13 <= load4.loadValveControl.Nd, has value: " + String(load4.loadValveControl.Nd, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2109};
  modelica_boolean tmp270;
  static const MMC_DEFSTRINGLIT(tmp271,82,"Variable violating min constraint: 1e-13 <= load4.loadValveControl.Nd, has value: ");
  modelica_string tmp272;
  modelica_metatype tmpMeta273;
  static int tmp274 = 0;
  if(!tmp274)
  {
    tmp270 = GreaterEq((data->simulationInfo->realParameter[218]/* load4.loadValveControl.Nd PARAM */) ,1e-13);
    if(!tmp270)
    {
      tmp272 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[218]/* load4.loadValveControl.Nd PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta273 = stringAppend(MMC_REFSTRINGLIT(tmp271),tmp272);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload4.loadValveControl.Nd >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta273));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",788,5,791,96,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload4.loadValveControl.Nd >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta273));
        }
      }
      tmp274 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2110
type: ALGORITHM

  assert(load4.loadValveControl.Ni >= 1e-13, "Variable violating min constraint: 1e-13 <= load4.loadValveControl.Ni, has value: " + String(load4.loadValveControl.Ni, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2110};
  modelica_boolean tmp275;
  static const MMC_DEFSTRINGLIT(tmp276,82,"Variable violating min constraint: 1e-13 <= load4.loadValveControl.Ni, has value: ");
  modelica_string tmp277;
  modelica_metatype tmpMeta278;
  static int tmp279 = 0;
  if(!tmp279)
  {
    tmp275 = GreaterEq((data->simulationInfo->realParameter[219]/* load4.loadValveControl.Ni PARAM */) ,1e-13);
    if(!tmp275)
    {
      tmp277 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[219]/* load4.loadValveControl.Ni PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta278 = stringAppend(MMC_REFSTRINGLIT(tmp276),tmp277);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload4.loadValveControl.Ni >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta278));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",784,5,787,94,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload4.loadValveControl.Ni >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta278));
        }
      }
      tmp279 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2111
type: ALGORITHM

  assert(load4.loadValveControl.wd >= 0.0, "Variable violating min constraint: 0.0 <= load4.loadValveControl.wd, has value: " + String(load4.loadValveControl.wd, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2111};
  modelica_boolean tmp280;
  static const MMC_DEFSTRINGLIT(tmp281,80,"Variable violating min constraint: 0.0 <= load4.loadValveControl.wd, has value: ");
  modelica_string tmp282;
  modelica_metatype tmpMeta283;
  static int tmp284 = 0;
  if(!tmp284)
  {
    tmp280 = GreaterEq((data->simulationInfo->realParameter[240]/* load4.loadValveControl.wd PARAM */) ,0.0);
    if(!tmp280)
    {
      tmp282 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[240]/* load4.loadValveControl.wd PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta283 = stringAppend(MMC_REFSTRINGLIT(tmp281),tmp282);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload4.loadValveControl.wd >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta283));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",781,5,783,96,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload4.loadValveControl.wd >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta283));
        }
      }
      tmp284 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2112
type: ALGORITHM

  assert(load4.loadValveControl.Td >= 0.0, "Variable violating min constraint: 0.0 <= load4.loadValveControl.Td, has value: " + String(load4.loadValveControl.Td, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2112};
  modelica_boolean tmp285;
  static const MMC_DEFSTRINGLIT(tmp286,80,"Variable violating min constraint: 0.0 <= load4.loadValveControl.Td, has value: ");
  modelica_string tmp287;
  modelica_metatype tmpMeta288;
  static int tmp289 = 0;
  if(!tmp289)
  {
    tmp285 = GreaterEq((data->simulationInfo->realParameter[221]/* load4.loadValveControl.Td PARAM */) ,0.0);
    if(!tmp285)
    {
      tmp287 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[221]/* load4.loadValveControl.Td PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta288 = stringAppend(MMC_REFSTRINGLIT(tmp286),tmp287);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload4.loadValveControl.Td >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta288));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",773,5,776,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload4.loadValveControl.Td >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta288));
        }
      }
      tmp289 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2113
type: ALGORITHM

  assert(load4.loadValveControl.Ti >= 1e-60, "Variable violating min constraint: 1e-60 <= load4.loadValveControl.Ti, has value: " + String(load4.loadValveControl.Ti, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2113};
  modelica_boolean tmp290;
  static const MMC_DEFSTRINGLIT(tmp291,82,"Variable violating min constraint: 1e-60 <= load4.loadValveControl.Ti, has value: ");
  modelica_string tmp292;
  modelica_metatype tmpMeta293;
  static int tmp294 = 0;
  if(!tmp294)
  {
    tmp290 = GreaterEq((data->simulationInfo->realParameter[222]/* load4.loadValveControl.Ti PARAM */) ,1e-60);
    if(!tmp290)
    {
      tmp292 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[222]/* load4.loadValveControl.Ti PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta293 = stringAppend(MMC_REFSTRINGLIT(tmp291),tmp292);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload4.loadValveControl.Ti >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta293));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",769,5,772,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload4.loadValveControl.Ti >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta293));
        }
      }
      tmp294 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2114
type: ALGORITHM

  assert(load4.loadValveControl.controllerType >= Modelica.Blocks.Types.SimpleController.P and load4.loadValveControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID, "Variable violating min/max constraint: Modelica.Blocks.Types.SimpleController.P <= load4.loadValveControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID, has value: " + String(load4.loadValveControl.controllerType, "d"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2114};
  modelica_boolean tmp295;
  modelica_boolean tmp296;
  static const MMC_DEFSTRINGLIT(tmp297,179,"Variable violating min/max constraint: Modelica.Blocks.Types.SimpleController.P <= load4.loadValveControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID, has value: ");
  modelica_string tmp298;
  modelica_metatype tmpMeta299;
  static int tmp300 = 0;
  if(!tmp300)
  {
    tmp295 = GreaterEq((data->simulationInfo->integerParameter[18]/* load4.loadValveControl.controllerType PARAM */) ,1);
    tmp296 = LessEq((data->simulationInfo->integerParameter[18]/* load4.loadValveControl.controllerType PARAM */) ,4);
    if(!(tmp295 && tmp296))
    {
      tmp298 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[18]/* load4.loadValveControl.controllerType PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta299 = stringAppend(MMC_REFSTRINGLIT(tmp297),tmp298);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload4.loadValveControl.controllerType >= Modelica.Blocks.Types.SimpleController.P and load4.loadValveControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta299));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",766,5,767,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload4.loadValveControl.controllerType >= Modelica.Blocks.Types.SimpleController.P and load4.loadValveControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta299));
        }
      }
      tmp300 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2115
type: ALGORITHM

  assert(s16.rho >= 0.0, "Variable violating min constraint: 0.0 <= s16.rho, has value: " + String(s16.rho, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2115};
  modelica_boolean tmp301;
  static const MMC_DEFSTRINGLIT(tmp302,62,"Variable violating min constraint: 0.0 <= s16.rho, has value: ");
  modelica_string tmp303;
  modelica_metatype tmpMeta304;
  static int tmp305 = 0;
  if(!tmp305)
  {
    tmp301 = GreaterEq((data->simulationInfo->realParameter[561]/* s16.rho PARAM */) ,0.0);
    if(!tmp301)
    {
      tmp303 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[561]/* s16.rho PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta304 = stringAppend(MMC_REFSTRINGLIT(tmp302),tmp303);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns16.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta304));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",698,7,698,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns16.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta304));
        }
      }
      tmp305 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2116
type: ALGORITHM

  assert(s16.T_start >= 0.0, "Variable violating min constraint: 0.0 <= s16.T_start, has value: " + String(s16.T_start, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2116};
  modelica_boolean tmp306;
  static const MMC_DEFSTRINGLIT(tmp307,66,"Variable violating min constraint: 0.0 <= s16.T_start, has value: ");
  modelica_string tmp308;
  modelica_metatype tmpMeta309;
  static int tmp310 = 0;
  if(!tmp310)
  {
    tmp306 = GreaterEq((data->simulationInfo->realParameter[549]/* s16.T_start PARAM */) ,0.0);
    if(!tmp306)
    {
      tmp308 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[549]/* s16.T_start PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta309 = stringAppend(MMC_REFSTRINGLIT(tmp307),tmp308);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns16.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta309));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",689,7,689,94,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns16.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta309));
        }
      }
      tmp310 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2117
type: ALGORITHM

  assert(s16.T_ext >= 0.0, "Variable violating min constraint: 0.0 <= s16.T_ext, has value: " + String(s16.T_ext, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2117};
  modelica_boolean tmp311;
  static const MMC_DEFSTRINGLIT(tmp312,64,"Variable violating min constraint: 0.0 <= s16.T_ext, has value: ");
  modelica_string tmp313;
  modelica_metatype tmpMeta314;
  static int tmp315 = 0;
  if(!tmp315)
  {
    tmp311 = GreaterEq((data->simulationInfo->realParameter[548]/* s16.T_ext PARAM */) ,0.0);
    if(!tmp311)
    {
      tmp313 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[548]/* s16.T_ext PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta314 = stringAppend(MMC_REFSTRINGLIT(tmp312),tmp313);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns16.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta314));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",688,7,688,84,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns16.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta314));
        }
      }
      tmp315 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2118
type: ALGORITHM

  assert(r61.rho >= 0.0, "Variable violating min constraint: 0.0 <= r61.rho, has value: " + String(r61.rho, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2118};
  modelica_boolean tmp316;
  static const MMC_DEFSTRINGLIT(tmp317,62,"Variable violating min constraint: 0.0 <= r61.rho, has value: ");
  modelica_string tmp318;
  modelica_metatype tmpMeta319;
  static int tmp320 = 0;
  if(!tmp320)
  {
    tmp316 = GreaterEq((data->simulationInfo->realParameter[431]/* r61.rho PARAM */) ,0.0);
    if(!tmp316)
    {
      tmp318 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[431]/* r61.rho PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta319 = stringAppend(MMC_REFSTRINGLIT(tmp317),tmp318);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr61.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta319));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",698,7,698,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr61.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta319));
        }
      }
      tmp320 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2119
type: ALGORITHM

  assert(r61.T_start >= 0.0, "Variable violating min constraint: 0.0 <= r61.T_start, has value: " + String(r61.T_start, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2119};
  modelica_boolean tmp321;
  static const MMC_DEFSTRINGLIT(tmp322,66,"Variable violating min constraint: 0.0 <= r61.T_start, has value: ");
  modelica_string tmp323;
  modelica_metatype tmpMeta324;
  static int tmp325 = 0;
  if(!tmp325)
  {
    tmp321 = GreaterEq((data->simulationInfo->realParameter[419]/* r61.T_start PARAM */) ,0.0);
    if(!tmp321)
    {
      tmp323 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[419]/* r61.T_start PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta324 = stringAppend(MMC_REFSTRINGLIT(tmp322),tmp323);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr61.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta324));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",689,7,689,94,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr61.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta324));
        }
      }
      tmp325 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2120
type: ALGORITHM

  assert(r61.T_ext >= 0.0, "Variable violating min constraint: 0.0 <= r61.T_ext, has value: " + String(r61.T_ext, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2120};
  modelica_boolean tmp326;
  static const MMC_DEFSTRINGLIT(tmp327,64,"Variable violating min constraint: 0.0 <= r61.T_ext, has value: ");
  modelica_string tmp328;
  modelica_metatype tmpMeta329;
  static int tmp330 = 0;
  if(!tmp330)
  {
    tmp326 = GreaterEq((data->simulationInfo->realParameter[418]/* r61.T_ext PARAM */) ,0.0);
    if(!tmp326)
    {
      tmp328 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[418]/* r61.T_ext PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta329 = stringAppend(MMC_REFSTRINGLIT(tmp327),tmp328);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr61.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta329));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",688,7,688,84,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr61.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta329));
        }
      }
      tmp330 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2121
type: ALGORITHM

  assert(r76.rho >= 0.0, "Variable violating min constraint: 0.0 <= r76.rho, has value: " + String(r76.rho, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2121};
  modelica_boolean tmp331;
  static const MMC_DEFSTRINGLIT(tmp332,62,"Variable violating min constraint: 0.0 <= r76.rho, has value: ");
  modelica_string tmp333;
  modelica_metatype tmpMeta334;
  static int tmp335 = 0;
  if(!tmp335)
  {
    tmp331 = GreaterEq((data->simulationInfo->realParameter[473]/* r76.rho PARAM */) ,0.0);
    if(!tmp331)
    {
      tmp333 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[473]/* r76.rho PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta334 = stringAppend(MMC_REFSTRINGLIT(tmp332),tmp333);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr76.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta334));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",698,7,698,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr76.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta334));
        }
      }
      tmp335 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2122
type: ALGORITHM

  assert(r76.T_start >= 0.0, "Variable violating min constraint: 0.0 <= r76.T_start, has value: " + String(r76.T_start, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2122};
  modelica_boolean tmp336;
  static const MMC_DEFSTRINGLIT(tmp337,66,"Variable violating min constraint: 0.0 <= r76.T_start, has value: ");
  modelica_string tmp338;
  modelica_metatype tmpMeta339;
  static int tmp340 = 0;
  if(!tmp340)
  {
    tmp336 = GreaterEq((data->simulationInfo->realParameter[461]/* r76.T_start PARAM */) ,0.0);
    if(!tmp336)
    {
      tmp338 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[461]/* r76.T_start PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta339 = stringAppend(MMC_REFSTRINGLIT(tmp337),tmp338);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr76.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta339));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",689,7,689,94,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr76.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta339));
        }
      }
      tmp340 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2123
type: ALGORITHM

  assert(r76.T_ext >= 0.0, "Variable violating min constraint: 0.0 <= r76.T_ext, has value: " + String(r76.T_ext, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2123};
  modelica_boolean tmp341;
  static const MMC_DEFSTRINGLIT(tmp342,64,"Variable violating min constraint: 0.0 <= r76.T_ext, has value: ");
  modelica_string tmp343;
  modelica_metatype tmpMeta344;
  static int tmp345 = 0;
  if(!tmp345)
  {
    tmp341 = GreaterEq((data->simulationInfo->realParameter[460]/* r76.T_ext PARAM */) ,0.0);
    if(!tmp341)
    {
      tmp343 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[460]/* r76.T_ext PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta344 = stringAppend(MMC_REFSTRINGLIT(tmp342),tmp343);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr76.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta344));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",688,7,688,84,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr76.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta344));
        }
      }
      tmp345 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2124
type: ALGORITHM

  assert(s45.rho >= 0.0, "Variable violating min constraint: 0.0 <= s45.rho, has value: " + String(s45.rho, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2124};
  modelica_boolean tmp346;
  static const MMC_DEFSTRINGLIT(tmp347,62,"Variable violating min constraint: 0.0 <= s45.rho, has value: ");
  modelica_string tmp348;
  modelica_metatype tmpMeta349;
  static int tmp350 = 0;
  if(!tmp350)
  {
    tmp346 = GreaterEq((data->simulationInfo->realParameter[624]/* s45.rho PARAM */) ,0.0);
    if(!tmp346)
    {
      tmp348 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[624]/* s45.rho PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta349 = stringAppend(MMC_REFSTRINGLIT(tmp347),tmp348);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns45.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta349));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",698,7,698,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns45.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta349));
        }
      }
      tmp350 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2125
type: ALGORITHM

  assert(s45.T_start >= 0.0, "Variable violating min constraint: 0.0 <= s45.T_start, has value: " + String(s45.T_start, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2125};
  modelica_boolean tmp351;
  static const MMC_DEFSTRINGLIT(tmp352,66,"Variable violating min constraint: 0.0 <= s45.T_start, has value: ");
  modelica_string tmp353;
  modelica_metatype tmpMeta354;
  static int tmp355 = 0;
  if(!tmp355)
  {
    tmp351 = GreaterEq((data->simulationInfo->realParameter[612]/* s45.T_start PARAM */) ,0.0);
    if(!tmp351)
    {
      tmp353 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[612]/* s45.T_start PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta354 = stringAppend(MMC_REFSTRINGLIT(tmp352),tmp353);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns45.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta354));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",689,7,689,94,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns45.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta354));
        }
      }
      tmp355 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2126
type: ALGORITHM

  assert(s45.T_ext >= 0.0, "Variable violating min constraint: 0.0 <= s45.T_ext, has value: " + String(s45.T_ext, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2126};
  modelica_boolean tmp356;
  static const MMC_DEFSTRINGLIT(tmp357,64,"Variable violating min constraint: 0.0 <= s45.T_ext, has value: ");
  modelica_string tmp358;
  modelica_metatype tmpMeta359;
  static int tmp360 = 0;
  if(!tmp360)
  {
    tmp356 = GreaterEq((data->simulationInfo->realParameter[611]/* s45.T_ext PARAM */) ,0.0);
    if(!tmp356)
    {
      tmp358 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[611]/* s45.T_ext PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta359 = stringAppend(MMC_REFSTRINGLIT(tmp357),tmp358);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns45.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta359));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",688,7,688,84,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns45.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta359));
        }
      }
      tmp360 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2127
type: ALGORITHM

  assert(r54.rho >= 0.0, "Variable violating min constraint: 0.0 <= r54.rho, has value: " + String(r54.rho, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2127};
  modelica_boolean tmp361;
  static const MMC_DEFSTRINGLIT(tmp362,62,"Variable violating min constraint: 0.0 <= r54.rho, has value: ");
  modelica_string tmp363;
  modelica_metatype tmpMeta364;
  static int tmp365 = 0;
  if(!tmp365)
  {
    tmp361 = GreaterEq((data->simulationInfo->realParameter[410]/* r54.rho PARAM */) ,0.0);
    if(!tmp361)
    {
      tmp363 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[410]/* r54.rho PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta364 = stringAppend(MMC_REFSTRINGLIT(tmp362),tmp363);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr54.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta364));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",698,7,698,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr54.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta364));
        }
      }
      tmp365 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2128
type: ALGORITHM

  assert(r54.T_start >= 0.0, "Variable violating min constraint: 0.0 <= r54.T_start, has value: " + String(r54.T_start, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2128};
  modelica_boolean tmp366;
  static const MMC_DEFSTRINGLIT(tmp367,66,"Variable violating min constraint: 0.0 <= r54.T_start, has value: ");
  modelica_string tmp368;
  modelica_metatype tmpMeta369;
  static int tmp370 = 0;
  if(!tmp370)
  {
    tmp366 = GreaterEq((data->simulationInfo->realParameter[398]/* r54.T_start PARAM */) ,0.0);
    if(!tmp366)
    {
      tmp368 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[398]/* r54.T_start PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta369 = stringAppend(MMC_REFSTRINGLIT(tmp367),tmp368);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr54.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta369));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",689,7,689,94,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr54.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta369));
        }
      }
      tmp370 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2129
type: ALGORITHM

  assert(r54.T_ext >= 0.0, "Variable violating min constraint: 0.0 <= r54.T_ext, has value: " + String(r54.T_ext, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2129};
  modelica_boolean tmp371;
  static const MMC_DEFSTRINGLIT(tmp372,64,"Variable violating min constraint: 0.0 <= r54.T_ext, has value: ");
  modelica_string tmp373;
  modelica_metatype tmpMeta374;
  static int tmp375 = 0;
  if(!tmp375)
  {
    tmp371 = GreaterEq((data->simulationInfo->realParameter[397]/* r54.T_ext PARAM */) ,0.0);
    if(!tmp371)
    {
      tmp373 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[397]/* r54.T_ext PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta374 = stringAppend(MMC_REFSTRINGLIT(tmp372),tmp373);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr54.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta374));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",688,7,688,84,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr54.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta374));
        }
      }
      tmp375 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2130
type: ALGORITHM

  assert(load3.loadValveControl.limiter.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load3.loadValveControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, "Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= load3.loadValveControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: " + String(load3.loadValveControl.limiter.homotopyType, "d"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2130};
  modelica_boolean tmp376;
  modelica_boolean tmp377;
  static const MMC_DEFSTRINGLIT(tmp378,199,"Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= load3.loadValveControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: ");
  modelica_string tmp379;
  modelica_metatype tmpMeta380;
  static int tmp381 = 0;
  if(!tmp381)
  {
    tmp376 = GreaterEq((data->simulationInfo->integerParameter[17]/* load3.loadValveControl.limiter.homotopyType PARAM */) ,1);
    tmp377 = LessEq((data->simulationInfo->integerParameter[17]/* load3.loadValveControl.limiter.homotopyType PARAM */) ,4);
    if(!(tmp376 && tmp377))
    {
      tmp379 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[17]/* load3.loadValveControl.limiter.homotopyType PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta380 = stringAppend(MMC_REFSTRINGLIT(tmp378),tmp379);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload3.loadValveControl.limiter.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load3.loadValveControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta380));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",12,9,13,69,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload3.loadValveControl.limiter.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load3.loadValveControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta380));
        }
      }
      tmp381 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2131
type: ALGORITHM

  assert(load3.loadValveControl.k >= 0.0, "Variable violating min constraint: 0.0 <= load3.loadValveControl.k, has value: " + String(load3.loadValveControl.k, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2131};
  modelica_boolean tmp382;
  static const MMC_DEFSTRINGLIT(tmp383,79,"Variable violating min constraint: 0.0 <= load3.loadValveControl.k, has value: ");
  modelica_string tmp384;
  modelica_metatype tmpMeta385;
  static int tmp386 = 0;
  if(!tmp386)
  {
    tmp382 = GreaterEq((data->simulationInfo->realParameter[188]/* load3.loadValveControl.k PARAM */) ,0.0);
    if(!tmp382)
    {
      tmp384 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[188]/* load3.loadValveControl.k PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta385 = stringAppend(MMC_REFSTRINGLIT(tmp383),tmp384);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload3.loadValveControl.k >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta385));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",768,5,768,63,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload3.loadValveControl.k >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta385));
        }
      }
      tmp386 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2132
type: ALGORITHM

  assert(load3.loadValveControl.wp >= 0.0, "Variable violating min constraint: 0.0 <= load3.loadValveControl.wp, has value: " + String(load3.loadValveControl.wp, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2132};
  modelica_boolean tmp387;
  static const MMC_DEFSTRINGLIT(tmp388,80,"Variable violating min constraint: 0.0 <= load3.loadValveControl.wp, has value: ");
  modelica_string tmp389;
  modelica_metatype tmpMeta390;
  static int tmp391 = 0;
  if(!tmp391)
  {
    tmp387 = GreaterEq((data->simulationInfo->realParameter[194]/* load3.loadValveControl.wp PARAM */) ,0.0);
    if(!tmp387)
    {
      tmp389 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[194]/* load3.loadValveControl.wp PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta390 = stringAppend(MMC_REFSTRINGLIT(tmp388),tmp389);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload3.loadValveControl.wp >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta390));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",779,5,780,55,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload3.loadValveControl.wp >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta390));
        }
      }
      tmp391 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2133
type: ALGORITHM

  assert(load3.loadValveControl.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load3.loadValveControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, "Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= load3.loadValveControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: " + String(load3.loadValveControl.homotopyType, "d"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2133};
  modelica_boolean tmp392;
  modelica_boolean tmp393;
  static const MMC_DEFSTRINGLIT(tmp394,191,"Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= load3.loadValveControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: ");
  modelica_string tmp395;
  modelica_metatype tmpMeta396;
  static int tmp397 = 0;
  if(!tmp397)
  {
    tmp392 = GreaterEq((data->simulationInfo->integerParameter[15]/* load3.loadValveControl.homotopyType PARAM */) ,1);
    tmp393 = LessEq((data->simulationInfo->integerParameter[15]/* load3.loadValveControl.homotopyType PARAM */) ,4);
    if(!(tmp392 && tmp393))
    {
      tmp395 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[15]/* load3.loadValveControl.homotopyType PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta396 = stringAppend(MMC_REFSTRINGLIT(tmp394),tmp395);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload3.loadValveControl.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load3.loadValveControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta396));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",812,5,814,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload3.loadValveControl.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load3.loadValveControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta396));
        }
      }
      tmp397 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2134
type: ALGORITHM

  assert(load3.loadValveControl.initType >= Modelica.Blocks.Types.Init.NoInit and load3.loadValveControl.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= load3.loadValveControl.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(load3.loadValveControl.initType, "d"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2134};
  modelica_boolean tmp398;
  modelica_boolean tmp399;
  static const MMC_DEFSTRINGLIT(tmp400,164,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= load3.loadValveControl.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp401;
  modelica_metatype tmpMeta402;
  static int tmp403 = 0;
  if(!tmp403)
  {
    tmp398 = GreaterEq((data->simulationInfo->integerParameter[16]/* load3.loadValveControl.initType PARAM */) ,1);
    tmp399 = LessEq((data->simulationInfo->integerParameter[16]/* load3.loadValveControl.initType PARAM */) ,4);
    if(!(tmp398 && tmp399))
    {
      tmp401 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[16]/* load3.loadValveControl.initType PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta402 = stringAppend(MMC_REFSTRINGLIT(tmp400),tmp401);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload3.loadValveControl.initType >= Modelica.Blocks.Types.Init.NoInit and load3.loadValveControl.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta402));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",796,5,798,64,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload3.loadValveControl.initType >= Modelica.Blocks.Types.Init.NoInit and load3.loadValveControl.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta402));
        }
      }
      tmp403 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2135
type: ALGORITHM

  assert(load3.loadValveControl.Nd >= 1e-13, "Variable violating min constraint: 1e-13 <= load3.loadValveControl.Nd, has value: " + String(load3.loadValveControl.Nd, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2135};
  modelica_boolean tmp404;
  static const MMC_DEFSTRINGLIT(tmp405,82,"Variable violating min constraint: 1e-13 <= load3.loadValveControl.Nd, has value: ");
  modelica_string tmp406;
  modelica_metatype tmpMeta407;
  static int tmp408 = 0;
  if(!tmp408)
  {
    tmp404 = GreaterEq((data->simulationInfo->realParameter[171]/* load3.loadValveControl.Nd PARAM */) ,1e-13);
    if(!tmp404)
    {
      tmp406 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[171]/* load3.loadValveControl.Nd PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta407 = stringAppend(MMC_REFSTRINGLIT(tmp405),tmp406);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload3.loadValveControl.Nd >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta407));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",788,5,791,96,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload3.loadValveControl.Nd >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta407));
        }
      }
      tmp408 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2136
type: ALGORITHM

  assert(load3.loadValveControl.Ni >= 1e-13, "Variable violating min constraint: 1e-13 <= load3.loadValveControl.Ni, has value: " + String(load3.loadValveControl.Ni, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2136};
  modelica_boolean tmp409;
  static const MMC_DEFSTRINGLIT(tmp410,82,"Variable violating min constraint: 1e-13 <= load3.loadValveControl.Ni, has value: ");
  modelica_string tmp411;
  modelica_metatype tmpMeta412;
  static int tmp413 = 0;
  if(!tmp413)
  {
    tmp409 = GreaterEq((data->simulationInfo->realParameter[172]/* load3.loadValveControl.Ni PARAM */) ,1e-13);
    if(!tmp409)
    {
      tmp411 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[172]/* load3.loadValveControl.Ni PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta412 = stringAppend(MMC_REFSTRINGLIT(tmp410),tmp411);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload3.loadValveControl.Ni >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta412));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",784,5,787,94,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload3.loadValveControl.Ni >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta412));
        }
      }
      tmp413 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2137
type: ALGORITHM

  assert(load3.loadValveControl.wd >= 0.0, "Variable violating min constraint: 0.0 <= load3.loadValveControl.wd, has value: " + String(load3.loadValveControl.wd, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2137};
  modelica_boolean tmp414;
  static const MMC_DEFSTRINGLIT(tmp415,80,"Variable violating min constraint: 0.0 <= load3.loadValveControl.wd, has value: ");
  modelica_string tmp416;
  modelica_metatype tmpMeta417;
  static int tmp418 = 0;
  if(!tmp418)
  {
    tmp414 = GreaterEq((data->simulationInfo->realParameter[193]/* load3.loadValveControl.wd PARAM */) ,0.0);
    if(!tmp414)
    {
      tmp416 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[193]/* load3.loadValveControl.wd PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta417 = stringAppend(MMC_REFSTRINGLIT(tmp415),tmp416);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload3.loadValveControl.wd >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta417));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",781,5,783,96,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload3.loadValveControl.wd >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta417));
        }
      }
      tmp418 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2138
type: ALGORITHM

  assert(load3.loadValveControl.Td >= 0.0, "Variable violating min constraint: 0.0 <= load3.loadValveControl.Td, has value: " + String(load3.loadValveControl.Td, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2138};
  modelica_boolean tmp419;
  static const MMC_DEFSTRINGLIT(tmp420,80,"Variable violating min constraint: 0.0 <= load3.loadValveControl.Td, has value: ");
  modelica_string tmp421;
  modelica_metatype tmpMeta422;
  static int tmp423 = 0;
  if(!tmp423)
  {
    tmp419 = GreaterEq((data->simulationInfo->realParameter[174]/* load3.loadValveControl.Td PARAM */) ,0.0);
    if(!tmp419)
    {
      tmp421 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[174]/* load3.loadValveControl.Td PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta422 = stringAppend(MMC_REFSTRINGLIT(tmp420),tmp421);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload3.loadValveControl.Td >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta422));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",773,5,776,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload3.loadValveControl.Td >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta422));
        }
      }
      tmp423 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2139
type: ALGORITHM

  assert(load3.loadValveControl.Ti >= 1e-60, "Variable violating min constraint: 1e-60 <= load3.loadValveControl.Ti, has value: " + String(load3.loadValveControl.Ti, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2139};
  modelica_boolean tmp424;
  static const MMC_DEFSTRINGLIT(tmp425,82,"Variable violating min constraint: 1e-60 <= load3.loadValveControl.Ti, has value: ");
  modelica_string tmp426;
  modelica_metatype tmpMeta427;
  static int tmp428 = 0;
  if(!tmp428)
  {
    tmp424 = GreaterEq((data->simulationInfo->realParameter[175]/* load3.loadValveControl.Ti PARAM */) ,1e-60);
    if(!tmp424)
    {
      tmp426 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[175]/* load3.loadValveControl.Ti PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta427 = stringAppend(MMC_REFSTRINGLIT(tmp425),tmp426);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload3.loadValveControl.Ti >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta427));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",769,5,772,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload3.loadValveControl.Ti >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta427));
        }
      }
      tmp428 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2140
type: ALGORITHM

  assert(load3.loadValveControl.controllerType >= Modelica.Blocks.Types.SimpleController.P and load3.loadValveControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID, "Variable violating min/max constraint: Modelica.Blocks.Types.SimpleController.P <= load3.loadValveControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID, has value: " + String(load3.loadValveControl.controllerType, "d"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2140};
  modelica_boolean tmp429;
  modelica_boolean tmp430;
  static const MMC_DEFSTRINGLIT(tmp431,179,"Variable violating min/max constraint: Modelica.Blocks.Types.SimpleController.P <= load3.loadValveControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID, has value: ");
  modelica_string tmp432;
  modelica_metatype tmpMeta433;
  static int tmp434 = 0;
  if(!tmp434)
  {
    tmp429 = GreaterEq((data->simulationInfo->integerParameter[14]/* load3.loadValveControl.controllerType PARAM */) ,1);
    tmp430 = LessEq((data->simulationInfo->integerParameter[14]/* load3.loadValveControl.controllerType PARAM */) ,4);
    if(!(tmp429 && tmp430))
    {
      tmp432 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[14]/* load3.loadValveControl.controllerType PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta433 = stringAppend(MMC_REFSTRINGLIT(tmp431),tmp432);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload3.loadValveControl.controllerType >= Modelica.Blocks.Types.SimpleController.P and load3.loadValveControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta433));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",766,5,767,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload3.loadValveControl.controllerType >= Modelica.Blocks.Types.SimpleController.P and load3.loadValveControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta433));
        }
      }
      tmp434 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2141
type: ALGORITHM

  assert(s23.rho >= 0.0, "Variable violating min constraint: 0.0 <= s23.rho, has value: " + String(s23.rho, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2141};
  modelica_boolean tmp435;
  static const MMC_DEFSTRINGLIT(tmp436,62,"Variable violating min constraint: 0.0 <= s23.rho, has value: ");
  modelica_string tmp437;
  modelica_metatype tmpMeta438;
  static int tmp439 = 0;
  if(!tmp439)
  {
    tmp435 = GreaterEq((data->simulationInfo->realParameter[582]/* s23.rho PARAM */) ,0.0);
    if(!tmp435)
    {
      tmp437 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[582]/* s23.rho PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta438 = stringAppend(MMC_REFSTRINGLIT(tmp436),tmp437);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns23.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta438));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",698,7,698,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns23.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta438));
        }
      }
      tmp439 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2142
type: ALGORITHM

  assert(s23.T_start >= 0.0, "Variable violating min constraint: 0.0 <= s23.T_start, has value: " + String(s23.T_start, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2142};
  modelica_boolean tmp440;
  static const MMC_DEFSTRINGLIT(tmp441,66,"Variable violating min constraint: 0.0 <= s23.T_start, has value: ");
  modelica_string tmp442;
  modelica_metatype tmpMeta443;
  static int tmp444 = 0;
  if(!tmp444)
  {
    tmp440 = GreaterEq((data->simulationInfo->realParameter[570]/* s23.T_start PARAM */) ,0.0);
    if(!tmp440)
    {
      tmp442 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[570]/* s23.T_start PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta443 = stringAppend(MMC_REFSTRINGLIT(tmp441),tmp442);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns23.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta443));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",689,7,689,94,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns23.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta443));
        }
      }
      tmp444 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2143
type: ALGORITHM

  assert(s23.T_ext >= 0.0, "Variable violating min constraint: 0.0 <= s23.T_ext, has value: " + String(s23.T_ext, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2143};
  modelica_boolean tmp445;
  static const MMC_DEFSTRINGLIT(tmp446,64,"Variable violating min constraint: 0.0 <= s23.T_ext, has value: ");
  modelica_string tmp447;
  modelica_metatype tmpMeta448;
  static int tmp449 = 0;
  if(!tmp449)
  {
    tmp445 = GreaterEq((data->simulationInfo->realParameter[569]/* s23.T_ext PARAM */) ,0.0);
    if(!tmp445)
    {
      tmp447 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[569]/* s23.T_ext PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta448 = stringAppend(MMC_REFSTRINGLIT(tmp446),tmp447);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns23.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta448));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",688,7,688,84,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns23.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta448));
        }
      }
      tmp449 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2144
type: ALGORITHM

  assert(r32.rho >= 0.0, "Variable violating min constraint: 0.0 <= r32.rho, has value: " + String(r32.rho, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2144};
  modelica_boolean tmp450;
  static const MMC_DEFSTRINGLIT(tmp451,62,"Variable violating min constraint: 0.0 <= r32.rho, has value: ");
  modelica_string tmp452;
  modelica_metatype tmpMeta453;
  static int tmp454 = 0;
  if(!tmp454)
  {
    tmp450 = GreaterEq((data->simulationInfo->realParameter[368]/* r32.rho PARAM */) ,0.0);
    if(!tmp450)
    {
      tmp452 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[368]/* r32.rho PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta453 = stringAppend(MMC_REFSTRINGLIT(tmp451),tmp452);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr32.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta453));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",698,7,698,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr32.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta453));
        }
      }
      tmp454 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2145
type: ALGORITHM

  assert(r32.T_start >= 0.0, "Variable violating min constraint: 0.0 <= r32.T_start, has value: " + String(r32.T_start, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2145};
  modelica_boolean tmp455;
  static const MMC_DEFSTRINGLIT(tmp456,66,"Variable violating min constraint: 0.0 <= r32.T_start, has value: ");
  modelica_string tmp457;
  modelica_metatype tmpMeta458;
  static int tmp459 = 0;
  if(!tmp459)
  {
    tmp455 = GreaterEq((data->simulationInfo->realParameter[356]/* r32.T_start PARAM */) ,0.0);
    if(!tmp455)
    {
      tmp457 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[356]/* r32.T_start PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta458 = stringAppend(MMC_REFSTRINGLIT(tmp456),tmp457);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr32.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta458));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",689,7,689,94,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr32.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta458));
        }
      }
      tmp459 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2146
type: ALGORITHM

  assert(r32.T_ext >= 0.0, "Variable violating min constraint: 0.0 <= r32.T_ext, has value: " + String(r32.T_ext, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2146};
  modelica_boolean tmp460;
  static const MMC_DEFSTRINGLIT(tmp461,64,"Variable violating min constraint: 0.0 <= r32.T_ext, has value: ");
  modelica_string tmp462;
  modelica_metatype tmpMeta463;
  static int tmp464 = 0;
  if(!tmp464)
  {
    tmp460 = GreaterEq((data->simulationInfo->realParameter[355]/* r32.T_ext PARAM */) ,0.0);
    if(!tmp460)
    {
      tmp462 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[355]/* r32.T_ext PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta463 = stringAppend(MMC_REFSTRINGLIT(tmp461),tmp462);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr32.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta463));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",688,7,688,84,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr32.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta463));
        }
      }
      tmp464 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2147
type: ALGORITHM

  assert(load2.loadValveControl.limiter.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load2.loadValveControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, "Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= load2.loadValveControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: " + String(load2.loadValveControl.limiter.homotopyType, "d"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2147};
  modelica_boolean tmp465;
  modelica_boolean tmp466;
  static const MMC_DEFSTRINGLIT(tmp467,199,"Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= load2.loadValveControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: ");
  modelica_string tmp468;
  modelica_metatype tmpMeta469;
  static int tmp470 = 0;
  if(!tmp470)
  {
    tmp465 = GreaterEq((data->simulationInfo->integerParameter[13]/* load2.loadValveControl.limiter.homotopyType PARAM */) ,1);
    tmp466 = LessEq((data->simulationInfo->integerParameter[13]/* load2.loadValveControl.limiter.homotopyType PARAM */) ,4);
    if(!(tmp465 && tmp466))
    {
      tmp468 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[13]/* load2.loadValveControl.limiter.homotopyType PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta469 = stringAppend(MMC_REFSTRINGLIT(tmp467),tmp468);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload2.loadValveControl.limiter.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load2.loadValveControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta469));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",12,9,13,69,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload2.loadValveControl.limiter.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load2.loadValveControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta469));
        }
      }
      tmp470 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2148
type: ALGORITHM

  assert(load2.loadValveControl.k >= 0.0, "Variable violating min constraint: 0.0 <= load2.loadValveControl.k, has value: " + String(load2.loadValveControl.k, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2148};
  modelica_boolean tmp471;
  static const MMC_DEFSTRINGLIT(tmp472,79,"Variable violating min constraint: 0.0 <= load2.loadValveControl.k, has value: ");
  modelica_string tmp473;
  modelica_metatype tmpMeta474;
  static int tmp475 = 0;
  if(!tmp475)
  {
    tmp471 = GreaterEq((data->simulationInfo->realParameter[141]/* load2.loadValveControl.k PARAM */) ,0.0);
    if(!tmp471)
    {
      tmp473 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[141]/* load2.loadValveControl.k PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta474 = stringAppend(MMC_REFSTRINGLIT(tmp472),tmp473);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload2.loadValveControl.k >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta474));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",768,5,768,63,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload2.loadValveControl.k >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta474));
        }
      }
      tmp475 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2149
type: ALGORITHM

  assert(load2.loadValveControl.wp >= 0.0, "Variable violating min constraint: 0.0 <= load2.loadValveControl.wp, has value: " + String(load2.loadValveControl.wp, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2149};
  modelica_boolean tmp476;
  static const MMC_DEFSTRINGLIT(tmp477,80,"Variable violating min constraint: 0.0 <= load2.loadValveControl.wp, has value: ");
  modelica_string tmp478;
  modelica_metatype tmpMeta479;
  static int tmp480 = 0;
  if(!tmp480)
  {
    tmp476 = GreaterEq((data->simulationInfo->realParameter[147]/* load2.loadValveControl.wp PARAM */) ,0.0);
    if(!tmp476)
    {
      tmp478 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[147]/* load2.loadValveControl.wp PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta479 = stringAppend(MMC_REFSTRINGLIT(tmp477),tmp478);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload2.loadValveControl.wp >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta479));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",779,5,780,55,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload2.loadValveControl.wp >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta479));
        }
      }
      tmp480 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2150
type: ALGORITHM

  assert(load2.loadValveControl.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load2.loadValveControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, "Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= load2.loadValveControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: " + String(load2.loadValveControl.homotopyType, "d"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2150};
  modelica_boolean tmp481;
  modelica_boolean tmp482;
  static const MMC_DEFSTRINGLIT(tmp483,191,"Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= load2.loadValveControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: ");
  modelica_string tmp484;
  modelica_metatype tmpMeta485;
  static int tmp486 = 0;
  if(!tmp486)
  {
    tmp481 = GreaterEq((data->simulationInfo->integerParameter[11]/* load2.loadValveControl.homotopyType PARAM */) ,1);
    tmp482 = LessEq((data->simulationInfo->integerParameter[11]/* load2.loadValveControl.homotopyType PARAM */) ,4);
    if(!(tmp481 && tmp482))
    {
      tmp484 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[11]/* load2.loadValveControl.homotopyType PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta485 = stringAppend(MMC_REFSTRINGLIT(tmp483),tmp484);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload2.loadValveControl.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load2.loadValveControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta485));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",812,5,814,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload2.loadValveControl.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load2.loadValveControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta485));
        }
      }
      tmp486 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2151
type: ALGORITHM

  assert(load2.loadValveControl.initType >= Modelica.Blocks.Types.Init.NoInit and load2.loadValveControl.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= load2.loadValveControl.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(load2.loadValveControl.initType, "d"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2151};
  modelica_boolean tmp487;
  modelica_boolean tmp488;
  static const MMC_DEFSTRINGLIT(tmp489,164,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= load2.loadValveControl.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp490;
  modelica_metatype tmpMeta491;
  static int tmp492 = 0;
  if(!tmp492)
  {
    tmp487 = GreaterEq((data->simulationInfo->integerParameter[12]/* load2.loadValveControl.initType PARAM */) ,1);
    tmp488 = LessEq((data->simulationInfo->integerParameter[12]/* load2.loadValveControl.initType PARAM */) ,4);
    if(!(tmp487 && tmp488))
    {
      tmp490 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[12]/* load2.loadValveControl.initType PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta491 = stringAppend(MMC_REFSTRINGLIT(tmp489),tmp490);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload2.loadValveControl.initType >= Modelica.Blocks.Types.Init.NoInit and load2.loadValveControl.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta491));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",796,5,798,64,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload2.loadValveControl.initType >= Modelica.Blocks.Types.Init.NoInit and load2.loadValveControl.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta491));
        }
      }
      tmp492 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2152
type: ALGORITHM

  assert(load2.loadValveControl.Nd >= 1e-13, "Variable violating min constraint: 1e-13 <= load2.loadValveControl.Nd, has value: " + String(load2.loadValveControl.Nd, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2152};
  modelica_boolean tmp493;
  static const MMC_DEFSTRINGLIT(tmp494,82,"Variable violating min constraint: 1e-13 <= load2.loadValveControl.Nd, has value: ");
  modelica_string tmp495;
  modelica_metatype tmpMeta496;
  static int tmp497 = 0;
  if(!tmp497)
  {
    tmp493 = GreaterEq((data->simulationInfo->realParameter[124]/* load2.loadValveControl.Nd PARAM */) ,1e-13);
    if(!tmp493)
    {
      tmp495 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[124]/* load2.loadValveControl.Nd PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta496 = stringAppend(MMC_REFSTRINGLIT(tmp494),tmp495);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload2.loadValveControl.Nd >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta496));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",788,5,791,96,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload2.loadValveControl.Nd >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta496));
        }
      }
      tmp497 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2153
type: ALGORITHM

  assert(load2.loadValveControl.Ni >= 1e-13, "Variable violating min constraint: 1e-13 <= load2.loadValveControl.Ni, has value: " + String(load2.loadValveControl.Ni, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2153};
  modelica_boolean tmp498;
  static const MMC_DEFSTRINGLIT(tmp499,82,"Variable violating min constraint: 1e-13 <= load2.loadValveControl.Ni, has value: ");
  modelica_string tmp500;
  modelica_metatype tmpMeta501;
  static int tmp502 = 0;
  if(!tmp502)
  {
    tmp498 = GreaterEq((data->simulationInfo->realParameter[125]/* load2.loadValveControl.Ni PARAM */) ,1e-13);
    if(!tmp498)
    {
      tmp500 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[125]/* load2.loadValveControl.Ni PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta501 = stringAppend(MMC_REFSTRINGLIT(tmp499),tmp500);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload2.loadValveControl.Ni >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta501));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",784,5,787,94,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload2.loadValveControl.Ni >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta501));
        }
      }
      tmp502 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2154
type: ALGORITHM

  assert(load2.loadValveControl.wd >= 0.0, "Variable violating min constraint: 0.0 <= load2.loadValveControl.wd, has value: " + String(load2.loadValveControl.wd, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2154};
  modelica_boolean tmp503;
  static const MMC_DEFSTRINGLIT(tmp504,80,"Variable violating min constraint: 0.0 <= load2.loadValveControl.wd, has value: ");
  modelica_string tmp505;
  modelica_metatype tmpMeta506;
  static int tmp507 = 0;
  if(!tmp507)
  {
    tmp503 = GreaterEq((data->simulationInfo->realParameter[146]/* load2.loadValveControl.wd PARAM */) ,0.0);
    if(!tmp503)
    {
      tmp505 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[146]/* load2.loadValveControl.wd PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta506 = stringAppend(MMC_REFSTRINGLIT(tmp504),tmp505);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload2.loadValveControl.wd >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta506));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",781,5,783,96,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload2.loadValveControl.wd >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta506));
        }
      }
      tmp507 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2155
type: ALGORITHM

  assert(load2.loadValveControl.Td >= 0.0, "Variable violating min constraint: 0.0 <= load2.loadValveControl.Td, has value: " + String(load2.loadValveControl.Td, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2155};
  modelica_boolean tmp508;
  static const MMC_DEFSTRINGLIT(tmp509,80,"Variable violating min constraint: 0.0 <= load2.loadValveControl.Td, has value: ");
  modelica_string tmp510;
  modelica_metatype tmpMeta511;
  static int tmp512 = 0;
  if(!tmp512)
  {
    tmp508 = GreaterEq((data->simulationInfo->realParameter[127]/* load2.loadValveControl.Td PARAM */) ,0.0);
    if(!tmp508)
    {
      tmp510 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[127]/* load2.loadValveControl.Td PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta511 = stringAppend(MMC_REFSTRINGLIT(tmp509),tmp510);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload2.loadValveControl.Td >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta511));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",773,5,776,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload2.loadValveControl.Td >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta511));
        }
      }
      tmp512 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2156
type: ALGORITHM

  assert(load2.loadValveControl.Ti >= 1e-60, "Variable violating min constraint: 1e-60 <= load2.loadValveControl.Ti, has value: " + String(load2.loadValveControl.Ti, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2156};
  modelica_boolean tmp513;
  static const MMC_DEFSTRINGLIT(tmp514,82,"Variable violating min constraint: 1e-60 <= load2.loadValveControl.Ti, has value: ");
  modelica_string tmp515;
  modelica_metatype tmpMeta516;
  static int tmp517 = 0;
  if(!tmp517)
  {
    tmp513 = GreaterEq((data->simulationInfo->realParameter[128]/* load2.loadValveControl.Ti PARAM */) ,1e-60);
    if(!tmp513)
    {
      tmp515 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[128]/* load2.loadValveControl.Ti PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta516 = stringAppend(MMC_REFSTRINGLIT(tmp514),tmp515);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload2.loadValveControl.Ti >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta516));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",769,5,772,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload2.loadValveControl.Ti >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta516));
        }
      }
      tmp517 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2157
type: ALGORITHM

  assert(load2.loadValveControl.controllerType >= Modelica.Blocks.Types.SimpleController.P and load2.loadValveControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID, "Variable violating min/max constraint: Modelica.Blocks.Types.SimpleController.P <= load2.loadValveControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID, has value: " + String(load2.loadValveControl.controllerType, "d"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2157};
  modelica_boolean tmp518;
  modelica_boolean tmp519;
  static const MMC_DEFSTRINGLIT(tmp520,179,"Variable violating min/max constraint: Modelica.Blocks.Types.SimpleController.P <= load2.loadValveControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID, has value: ");
  modelica_string tmp521;
  modelica_metatype tmpMeta522;
  static int tmp523 = 0;
  if(!tmp523)
  {
    tmp518 = GreaterEq((data->simulationInfo->integerParameter[10]/* load2.loadValveControl.controllerType PARAM */) ,1);
    tmp519 = LessEq((data->simulationInfo->integerParameter[10]/* load2.loadValveControl.controllerType PARAM */) ,4);
    if(!(tmp518 && tmp519))
    {
      tmp521 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[10]/* load2.loadValveControl.controllerType PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta522 = stringAppend(MMC_REFSTRINGLIT(tmp520),tmp521);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload2.loadValveControl.controllerType >= Modelica.Blocks.Types.SimpleController.P and load2.loadValveControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta522));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",766,5,767,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload2.loadValveControl.controllerType >= Modelica.Blocks.Types.SimpleController.P and load2.loadValveControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta522));
        }
      }
      tmp523 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2158
type: ALGORITHM

  assert(r43.rho >= 0.0, "Variable violating min constraint: 0.0 <= r43.rho, has value: " + String(r43.rho, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2158};
  modelica_boolean tmp524;
  static const MMC_DEFSTRINGLIT(tmp525,62,"Variable violating min constraint: 0.0 <= r43.rho, has value: ");
  modelica_string tmp526;
  modelica_metatype tmpMeta527;
  static int tmp528 = 0;
  if(!tmp528)
  {
    tmp524 = GreaterEq((data->simulationInfo->realParameter[389]/* r43.rho PARAM */) ,0.0);
    if(!tmp524)
    {
      tmp526 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[389]/* r43.rho PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta527 = stringAppend(MMC_REFSTRINGLIT(tmp525),tmp526);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr43.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta527));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",698,7,698,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr43.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta527));
        }
      }
      tmp528 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2159
type: ALGORITHM

  assert(r43.T_start >= 0.0, "Variable violating min constraint: 0.0 <= r43.T_start, has value: " + String(r43.T_start, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2159};
  modelica_boolean tmp529;
  static const MMC_DEFSTRINGLIT(tmp530,66,"Variable violating min constraint: 0.0 <= r43.T_start, has value: ");
  modelica_string tmp531;
  modelica_metatype tmpMeta532;
  static int tmp533 = 0;
  if(!tmp533)
  {
    tmp529 = GreaterEq((data->simulationInfo->realParameter[377]/* r43.T_start PARAM */) ,0.0);
    if(!tmp529)
    {
      tmp531 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[377]/* r43.T_start PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta532 = stringAppend(MMC_REFSTRINGLIT(tmp530),tmp531);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr43.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta532));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",689,7,689,94,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr43.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta532));
        }
      }
      tmp533 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2160
type: ALGORITHM

  assert(r43.T_ext >= 0.0, "Variable violating min constraint: 0.0 <= r43.T_ext, has value: " + String(r43.T_ext, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2160};
  modelica_boolean tmp534;
  static const MMC_DEFSTRINGLIT(tmp535,64,"Variable violating min constraint: 0.0 <= r43.T_ext, has value: ");
  modelica_string tmp536;
  modelica_metatype tmpMeta537;
  static int tmp538 = 0;
  if(!tmp538)
  {
    tmp534 = GreaterEq((data->simulationInfo->realParameter[376]/* r43.T_ext PARAM */) ,0.0);
    if(!tmp534)
    {
      tmp536 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[376]/* r43.T_ext PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta537 = stringAppend(MMC_REFSTRINGLIT(tmp535),tmp536);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr43.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta537));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",688,7,688,84,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr43.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta537));
        }
      }
      tmp538 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2161
type: ALGORITHM

  assert(s34.rho >= 0.0, "Variable violating min constraint: 0.0 <= s34.rho, has value: " + String(s34.rho, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2161};
  modelica_boolean tmp539;
  static const MMC_DEFSTRINGLIT(tmp540,62,"Variable violating min constraint: 0.0 <= s34.rho, has value: ");
  modelica_string tmp541;
  modelica_metatype tmpMeta542;
  static int tmp543 = 0;
  if(!tmp543)
  {
    tmp539 = GreaterEq((data->simulationInfo->realParameter[603]/* s34.rho PARAM */) ,0.0);
    if(!tmp539)
    {
      tmp541 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[603]/* s34.rho PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta542 = stringAppend(MMC_REFSTRINGLIT(tmp540),tmp541);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns34.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta542));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",698,7,698,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns34.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta542));
        }
      }
      tmp543 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2162
type: ALGORITHM

  assert(s34.T_start >= 0.0, "Variable violating min constraint: 0.0 <= s34.T_start, has value: " + String(s34.T_start, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2162};
  modelica_boolean tmp544;
  static const MMC_DEFSTRINGLIT(tmp545,66,"Variable violating min constraint: 0.0 <= s34.T_start, has value: ");
  modelica_string tmp546;
  modelica_metatype tmpMeta547;
  static int tmp548 = 0;
  if(!tmp548)
  {
    tmp544 = GreaterEq((data->simulationInfo->realParameter[591]/* s34.T_start PARAM */) ,0.0);
    if(!tmp544)
    {
      tmp546 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[591]/* s34.T_start PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta547 = stringAppend(MMC_REFSTRINGLIT(tmp545),tmp546);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns34.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta547));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",689,7,689,94,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns34.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta547));
        }
      }
      tmp548 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2163
type: ALGORITHM

  assert(s34.T_ext >= 0.0, "Variable violating min constraint: 0.0 <= s34.T_ext, has value: " + String(s34.T_ext, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2163};
  modelica_boolean tmp549;
  static const MMC_DEFSTRINGLIT(tmp550,64,"Variable violating min constraint: 0.0 <= s34.T_ext, has value: ");
  modelica_string tmp551;
  modelica_metatype tmpMeta552;
  static int tmp553 = 0;
  if(!tmp553)
  {
    tmp549 = GreaterEq((data->simulationInfo->realParameter[590]/* s34.T_ext PARAM */) ,0.0);
    if(!tmp549)
    {
      tmp551 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[590]/* s34.T_ext PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta552 = stringAppend(MMC_REFSTRINGLIT(tmp550),tmp551);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns34.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta552));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",688,7,688,84,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns34.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta552));
        }
      }
      tmp553 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2164
type: ALGORITHM

  assert(r21.rho >= 0.0, "Variable violating min constraint: 0.0 <= r21.rho, has value: " + String(r21.rho, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2164};
  modelica_boolean tmp554;
  static const MMC_DEFSTRINGLIT(tmp555,62,"Variable violating min constraint: 0.0 <= r21.rho, has value: ");
  modelica_string tmp556;
  modelica_metatype tmpMeta557;
  static int tmp558 = 0;
  if(!tmp558)
  {
    tmp554 = GreaterEq((data->simulationInfo->realParameter[347]/* r21.rho PARAM */) ,0.0);
    if(!tmp554)
    {
      tmp556 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[347]/* r21.rho PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta557 = stringAppend(MMC_REFSTRINGLIT(tmp555),tmp556);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr21.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta557));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",698,7,698,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr21.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta557));
        }
      }
      tmp558 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2165
type: ALGORITHM

  assert(r21.T_start >= 0.0, "Variable violating min constraint: 0.0 <= r21.T_start, has value: " + String(r21.T_start, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2165};
  modelica_boolean tmp559;
  static const MMC_DEFSTRINGLIT(tmp560,66,"Variable violating min constraint: 0.0 <= r21.T_start, has value: ");
  modelica_string tmp561;
  modelica_metatype tmpMeta562;
  static int tmp563 = 0;
  if(!tmp563)
  {
    tmp559 = GreaterEq((data->simulationInfo->realParameter[335]/* r21.T_start PARAM */) ,0.0);
    if(!tmp559)
    {
      tmp561 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[335]/* r21.T_start PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta562 = stringAppend(MMC_REFSTRINGLIT(tmp560),tmp561);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr21.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta562));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",689,7,689,94,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr21.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta562));
        }
      }
      tmp563 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2166
type: ALGORITHM

  assert(r21.T_ext >= 0.0, "Variable violating min constraint: 0.0 <= r21.T_ext, has value: " + String(r21.T_ext, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2166};
  modelica_boolean tmp564;
  static const MMC_DEFSTRINGLIT(tmp565,64,"Variable violating min constraint: 0.0 <= r21.T_ext, has value: ");
  modelica_string tmp566;
  modelica_metatype tmpMeta567;
  static int tmp568 = 0;
  if(!tmp568)
  {
    tmp564 = GreaterEq((data->simulationInfo->realParameter[334]/* r21.T_ext PARAM */) ,0.0);
    if(!tmp564)
    {
      tmp566 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[334]/* r21.T_ext PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta567 = stringAppend(MMC_REFSTRINGLIT(tmp565),tmp566);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr21.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta567));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",688,7,688,84,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr21.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta567));
        }
      }
      tmp568 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2167
type: ALGORITHM

  assert(r10.rho >= 0.0, "Variable violating min constraint: 0.0 <= r10.rho, has value: " + String(r10.rho, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2167};
  modelica_boolean tmp569;
  static const MMC_DEFSTRINGLIT(tmp570,62,"Variable violating min constraint: 0.0 <= r10.rho, has value: ");
  modelica_string tmp571;
  modelica_metatype tmpMeta572;
  static int tmp573 = 0;
  if(!tmp573)
  {
    tmp569 = GreaterEq((data->simulationInfo->realParameter[326]/* r10.rho PARAM */) ,0.0);
    if(!tmp569)
    {
      tmp571 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[326]/* r10.rho PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta572 = stringAppend(MMC_REFSTRINGLIT(tmp570),tmp571);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr10.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta572));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",698,7,698,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr10.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta572));
        }
      }
      tmp573 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2168
type: ALGORITHM

  assert(r10.T_start >= 0.0, "Variable violating min constraint: 0.0 <= r10.T_start, has value: " + String(r10.T_start, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2168};
  modelica_boolean tmp574;
  static const MMC_DEFSTRINGLIT(tmp575,66,"Variable violating min constraint: 0.0 <= r10.T_start, has value: ");
  modelica_string tmp576;
  modelica_metatype tmpMeta577;
  static int tmp578 = 0;
  if(!tmp578)
  {
    tmp574 = GreaterEq((data->simulationInfo->realParameter[313]/* r10.T_start PARAM */) ,0.0);
    if(!tmp574)
    {
      tmp576 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[313]/* r10.T_start PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta577 = stringAppend(MMC_REFSTRINGLIT(tmp575),tmp576);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr10.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta577));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",689,7,689,94,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr10.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta577));
        }
      }
      tmp578 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2169
type: ALGORITHM

  assert(r10.T_ext >= 0.0, "Variable violating min constraint: 0.0 <= r10.T_ext, has value: " + String(r10.T_ext, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2169};
  modelica_boolean tmp579;
  static const MMC_DEFSTRINGLIT(tmp580,64,"Variable violating min constraint: 0.0 <= r10.T_ext, has value: ");
  modelica_string tmp581;
  modelica_metatype tmpMeta582;
  static int tmp583 = 0;
  if(!tmp583)
  {
    tmp579 = GreaterEq((data->simulationInfo->realParameter[312]/* r10.T_ext PARAM */) ,0.0);
    if(!tmp579)
    {
      tmp581 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[312]/* r10.T_ext PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta582 = stringAppend(MMC_REFSTRINGLIT(tmp580),tmp581);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr10.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta582));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",688,7,688,84,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr10.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta582));
        }
      }
      tmp583 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2170
type: ALGORITHM

  assert(s12.rho >= 0.0, "Variable violating min constraint: 0.0 <= s12.rho, has value: " + String(s12.rho, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2170};
  modelica_boolean tmp584;
  static const MMC_DEFSTRINGLIT(tmp585,62,"Variable violating min constraint: 0.0 <= s12.rho, has value: ");
  modelica_string tmp586;
  modelica_metatype tmpMeta587;
  static int tmp588 = 0;
  if(!tmp588)
  {
    tmp584 = GreaterEq((data->simulationInfo->realParameter[540]/* s12.rho PARAM */) ,0.0);
    if(!tmp584)
    {
      tmp586 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[540]/* s12.rho PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta587 = stringAppend(MMC_REFSTRINGLIT(tmp585),tmp586);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns12.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta587));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",698,7,698,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns12.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta587));
        }
      }
      tmp588 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2171
type: ALGORITHM

  assert(s12.T_start >= 0.0, "Variable violating min constraint: 0.0 <= s12.T_start, has value: " + String(s12.T_start, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2171};
  modelica_boolean tmp589;
  static const MMC_DEFSTRINGLIT(tmp590,66,"Variable violating min constraint: 0.0 <= s12.T_start, has value: ");
  modelica_string tmp591;
  modelica_metatype tmpMeta592;
  static int tmp593 = 0;
  if(!tmp593)
  {
    tmp589 = GreaterEq((data->simulationInfo->realParameter[528]/* s12.T_start PARAM */) ,0.0);
    if(!tmp589)
    {
      tmp591 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[528]/* s12.T_start PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta592 = stringAppend(MMC_REFSTRINGLIT(tmp590),tmp591);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns12.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta592));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",689,7,689,94,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns12.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta592));
        }
      }
      tmp593 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2172
type: ALGORITHM

  assert(s12.T_ext >= 0.0, "Variable violating min constraint: 0.0 <= s12.T_ext, has value: " + String(s12.T_ext, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2172};
  modelica_boolean tmp594;
  static const MMC_DEFSTRINGLIT(tmp595,64,"Variable violating min constraint: 0.0 <= s12.T_ext, has value: ");
  modelica_string tmp596;
  modelica_metatype tmpMeta597;
  static int tmp598 = 0;
  if(!tmp598)
  {
    tmp594 = GreaterEq((data->simulationInfo->realParameter[527]/* s12.T_ext PARAM */) ,0.0);
    if(!tmp594)
    {
      tmp596 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[527]/* s12.T_ext PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta597 = stringAppend(MMC_REFSTRINGLIT(tmp595),tmp596);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns12.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta597));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",688,7,688,84,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns12.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta597));
        }
      }
      tmp598 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2173
type: ALGORITHM

  assert(load1.loadValveControl.limiter.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load1.loadValveControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, "Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= load1.loadValveControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: " + String(load1.loadValveControl.limiter.homotopyType, "d"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2173};
  modelica_boolean tmp599;
  modelica_boolean tmp600;
  static const MMC_DEFSTRINGLIT(tmp601,199,"Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= load1.loadValveControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: ");
  modelica_string tmp602;
  modelica_metatype tmpMeta603;
  static int tmp604 = 0;
  if(!tmp604)
  {
    tmp599 = GreaterEq((data->simulationInfo->integerParameter[9]/* load1.loadValveControl.limiter.homotopyType PARAM */) ,1);
    tmp600 = LessEq((data->simulationInfo->integerParameter[9]/* load1.loadValveControl.limiter.homotopyType PARAM */) ,4);
    if(!(tmp599 && tmp600))
    {
      tmp602 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[9]/* load1.loadValveControl.limiter.homotopyType PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta603 = stringAppend(MMC_REFSTRINGLIT(tmp601),tmp602);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload1.loadValveControl.limiter.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load1.loadValveControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta603));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",12,9,13,69,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload1.loadValveControl.limiter.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load1.loadValveControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta603));
        }
      }
      tmp604 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2174
type: ALGORITHM

  assert(load1.loadValveControl.k >= 0.0, "Variable violating min constraint: 0.0 <= load1.loadValveControl.k, has value: " + String(load1.loadValveControl.k, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2174};
  modelica_boolean tmp605;
  static const MMC_DEFSTRINGLIT(tmp606,79,"Variable violating min constraint: 0.0 <= load1.loadValveControl.k, has value: ");
  modelica_string tmp607;
  modelica_metatype tmpMeta608;
  static int tmp609 = 0;
  if(!tmp609)
  {
    tmp605 = GreaterEq((data->simulationInfo->realParameter[94]/* load1.loadValveControl.k PARAM */) ,0.0);
    if(!tmp605)
    {
      tmp607 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[94]/* load1.loadValveControl.k PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta608 = stringAppend(MMC_REFSTRINGLIT(tmp606),tmp607);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload1.loadValveControl.k >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta608));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",768,5,768,63,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload1.loadValveControl.k >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta608));
        }
      }
      tmp609 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2175
type: ALGORITHM

  assert(load1.loadValveControl.wp >= 0.0, "Variable violating min constraint: 0.0 <= load1.loadValveControl.wp, has value: " + String(load1.loadValveControl.wp, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2175};
  modelica_boolean tmp610;
  static const MMC_DEFSTRINGLIT(tmp611,80,"Variable violating min constraint: 0.0 <= load1.loadValveControl.wp, has value: ");
  modelica_string tmp612;
  modelica_metatype tmpMeta613;
  static int tmp614 = 0;
  if(!tmp614)
  {
    tmp610 = GreaterEq((data->simulationInfo->realParameter[100]/* load1.loadValveControl.wp PARAM */) ,0.0);
    if(!tmp610)
    {
      tmp612 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[100]/* load1.loadValveControl.wp PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta613 = stringAppend(MMC_REFSTRINGLIT(tmp611),tmp612);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload1.loadValveControl.wp >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta613));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",779,5,780,55,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload1.loadValveControl.wp >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta613));
        }
      }
      tmp614 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2176
type: ALGORITHM

  assert(load1.loadValveControl.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load1.loadValveControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, "Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= load1.loadValveControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: " + String(load1.loadValveControl.homotopyType, "d"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2176};
  modelica_boolean tmp615;
  modelica_boolean tmp616;
  static const MMC_DEFSTRINGLIT(tmp617,191,"Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= load1.loadValveControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: ");
  modelica_string tmp618;
  modelica_metatype tmpMeta619;
  static int tmp620 = 0;
  if(!tmp620)
  {
    tmp615 = GreaterEq((data->simulationInfo->integerParameter[7]/* load1.loadValveControl.homotopyType PARAM */) ,1);
    tmp616 = LessEq((data->simulationInfo->integerParameter[7]/* load1.loadValveControl.homotopyType PARAM */) ,4);
    if(!(tmp615 && tmp616))
    {
      tmp618 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[7]/* load1.loadValveControl.homotopyType PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta619 = stringAppend(MMC_REFSTRINGLIT(tmp617),tmp618);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload1.loadValveControl.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load1.loadValveControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta619));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",812,5,814,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload1.loadValveControl.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and load1.loadValveControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta619));
        }
      }
      tmp620 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2177
type: ALGORITHM

  assert(load1.loadValveControl.initType >= Modelica.Blocks.Types.Init.NoInit and load1.loadValveControl.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= load1.loadValveControl.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(load1.loadValveControl.initType, "d"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2177};
  modelica_boolean tmp621;
  modelica_boolean tmp622;
  static const MMC_DEFSTRINGLIT(tmp623,164,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= load1.loadValveControl.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp624;
  modelica_metatype tmpMeta625;
  static int tmp626 = 0;
  if(!tmp626)
  {
    tmp621 = GreaterEq((data->simulationInfo->integerParameter[8]/* load1.loadValveControl.initType PARAM */) ,1);
    tmp622 = LessEq((data->simulationInfo->integerParameter[8]/* load1.loadValveControl.initType PARAM */) ,4);
    if(!(tmp621 && tmp622))
    {
      tmp624 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[8]/* load1.loadValveControl.initType PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta625 = stringAppend(MMC_REFSTRINGLIT(tmp623),tmp624);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload1.loadValveControl.initType >= Modelica.Blocks.Types.Init.NoInit and load1.loadValveControl.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta625));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",796,5,798,64,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload1.loadValveControl.initType >= Modelica.Blocks.Types.Init.NoInit and load1.loadValveControl.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta625));
        }
      }
      tmp626 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2178
type: ALGORITHM

  assert(load1.loadValveControl.Nd >= 1e-13, "Variable violating min constraint: 1e-13 <= load1.loadValveControl.Nd, has value: " + String(load1.loadValveControl.Nd, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2178};
  modelica_boolean tmp627;
  static const MMC_DEFSTRINGLIT(tmp628,82,"Variable violating min constraint: 1e-13 <= load1.loadValveControl.Nd, has value: ");
  modelica_string tmp629;
  modelica_metatype tmpMeta630;
  static int tmp631 = 0;
  if(!tmp631)
  {
    tmp627 = GreaterEq((data->simulationInfo->realParameter[77]/* load1.loadValveControl.Nd PARAM */) ,1e-13);
    if(!tmp627)
    {
      tmp629 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[77]/* load1.loadValveControl.Nd PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta630 = stringAppend(MMC_REFSTRINGLIT(tmp628),tmp629);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload1.loadValveControl.Nd >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta630));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",788,5,791,96,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload1.loadValveControl.Nd >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta630));
        }
      }
      tmp631 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2179
type: ALGORITHM

  assert(load1.loadValveControl.Ni >= 1e-13, "Variable violating min constraint: 1e-13 <= load1.loadValveControl.Ni, has value: " + String(load1.loadValveControl.Ni, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2179};
  modelica_boolean tmp632;
  static const MMC_DEFSTRINGLIT(tmp633,82,"Variable violating min constraint: 1e-13 <= load1.loadValveControl.Ni, has value: ");
  modelica_string tmp634;
  modelica_metatype tmpMeta635;
  static int tmp636 = 0;
  if(!tmp636)
  {
    tmp632 = GreaterEq((data->simulationInfo->realParameter[78]/* load1.loadValveControl.Ni PARAM */) ,1e-13);
    if(!tmp632)
    {
      tmp634 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[78]/* load1.loadValveControl.Ni PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta635 = stringAppend(MMC_REFSTRINGLIT(tmp633),tmp634);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload1.loadValveControl.Ni >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta635));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",784,5,787,94,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload1.loadValveControl.Ni >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta635));
        }
      }
      tmp636 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2180
type: ALGORITHM

  assert(load1.loadValveControl.wd >= 0.0, "Variable violating min constraint: 0.0 <= load1.loadValveControl.wd, has value: " + String(load1.loadValveControl.wd, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2180};
  modelica_boolean tmp637;
  static const MMC_DEFSTRINGLIT(tmp638,80,"Variable violating min constraint: 0.0 <= load1.loadValveControl.wd, has value: ");
  modelica_string tmp639;
  modelica_metatype tmpMeta640;
  static int tmp641 = 0;
  if(!tmp641)
  {
    tmp637 = GreaterEq((data->simulationInfo->realParameter[99]/* load1.loadValveControl.wd PARAM */) ,0.0);
    if(!tmp637)
    {
      tmp639 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[99]/* load1.loadValveControl.wd PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta640 = stringAppend(MMC_REFSTRINGLIT(tmp638),tmp639);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload1.loadValveControl.wd >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta640));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",781,5,783,96,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload1.loadValveControl.wd >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta640));
        }
      }
      tmp641 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2181
type: ALGORITHM

  assert(load1.loadValveControl.Td >= 0.0, "Variable violating min constraint: 0.0 <= load1.loadValveControl.Td, has value: " + String(load1.loadValveControl.Td, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2181};
  modelica_boolean tmp642;
  static const MMC_DEFSTRINGLIT(tmp643,80,"Variable violating min constraint: 0.0 <= load1.loadValveControl.Td, has value: ");
  modelica_string tmp644;
  modelica_metatype tmpMeta645;
  static int tmp646 = 0;
  if(!tmp646)
  {
    tmp642 = GreaterEq((data->simulationInfo->realParameter[80]/* load1.loadValveControl.Td PARAM */) ,0.0);
    if(!tmp642)
    {
      tmp644 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[80]/* load1.loadValveControl.Td PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta645 = stringAppend(MMC_REFSTRINGLIT(tmp643),tmp644);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload1.loadValveControl.Td >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta645));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",773,5,776,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload1.loadValveControl.Td >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta645));
        }
      }
      tmp646 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2182
type: ALGORITHM

  assert(load1.loadValveControl.Ti >= 1e-60, "Variable violating min constraint: 1e-60 <= load1.loadValveControl.Ti, has value: " + String(load1.loadValveControl.Ti, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2182};
  modelica_boolean tmp647;
  static const MMC_DEFSTRINGLIT(tmp648,82,"Variable violating min constraint: 1e-60 <= load1.loadValveControl.Ti, has value: ");
  modelica_string tmp649;
  modelica_metatype tmpMeta650;
  static int tmp651 = 0;
  if(!tmp651)
  {
    tmp647 = GreaterEq((data->simulationInfo->realParameter[81]/* load1.loadValveControl.Ti PARAM */) ,1e-60);
    if(!tmp647)
    {
      tmp649 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[81]/* load1.loadValveControl.Ti PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta650 = stringAppend(MMC_REFSTRINGLIT(tmp648),tmp649);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload1.loadValveControl.Ti >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta650));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",769,5,772,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload1.loadValveControl.Ti >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta650));
        }
      }
      tmp651 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2183
type: ALGORITHM

  assert(load1.loadValveControl.controllerType >= Modelica.Blocks.Types.SimpleController.P and load1.loadValveControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID, "Variable violating min/max constraint: Modelica.Blocks.Types.SimpleController.P <= load1.loadValveControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID, has value: " + String(load1.loadValveControl.controllerType, "d"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2183};
  modelica_boolean tmp652;
  modelica_boolean tmp653;
  static const MMC_DEFSTRINGLIT(tmp654,179,"Variable violating min/max constraint: Modelica.Blocks.Types.SimpleController.P <= load1.loadValveControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID, has value: ");
  modelica_string tmp655;
  modelica_metatype tmpMeta656;
  static int tmp657 = 0;
  if(!tmp657)
  {
    tmp652 = GreaterEq((data->simulationInfo->integerParameter[6]/* load1.loadValveControl.controllerType PARAM */) ,1);
    tmp653 = LessEq((data->simulationInfo->integerParameter[6]/* load1.loadValveControl.controllerType PARAM */) ,4);
    if(!(tmp652 && tmp653))
    {
      tmp655 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[6]/* load1.loadValveControl.controllerType PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta656 = stringAppend(MMC_REFSTRINGLIT(tmp654),tmp655);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload1.loadValveControl.controllerType >= Modelica.Blocks.Types.SimpleController.P and load1.loadValveControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta656));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",766,5,767,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload1.loadValveControl.controllerType >= Modelica.Blocks.Types.SimpleController.P and load1.loadValveControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta656));
        }
      }
      tmp657 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2184
type: ALGORITHM

  assert(s01.rho >= 0.0, "Variable violating min constraint: 0.0 <= s01.rho, has value: " + String(s01.rho, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2184};
  modelica_boolean tmp658;
  static const MMC_DEFSTRINGLIT(tmp659,62,"Variable violating min constraint: 0.0 <= s01.rho, has value: ");
  modelica_string tmp660;
  modelica_metatype tmpMeta661;
  static int tmp662 = 0;
  if(!tmp662)
  {
    tmp658 = GreaterEq((data->simulationInfo->realParameter[519]/* s01.rho PARAM */) ,0.0);
    if(!tmp658)
    {
      tmp660 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[519]/* s01.rho PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta661 = stringAppend(MMC_REFSTRINGLIT(tmp659),tmp660);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns01.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta661));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",698,7,698,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns01.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta661));
        }
      }
      tmp662 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2185
type: ALGORITHM

  assert(s01.T_start >= 0.0, "Variable violating min constraint: 0.0 <= s01.T_start, has value: " + String(s01.T_start, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2185};
  modelica_boolean tmp663;
  static const MMC_DEFSTRINGLIT(tmp664,66,"Variable violating min constraint: 0.0 <= s01.T_start, has value: ");
  modelica_string tmp665;
  modelica_metatype tmpMeta666;
  static int tmp667 = 0;
  if(!tmp667)
  {
    tmp663 = GreaterEq((data->simulationInfo->realParameter[507]/* s01.T_start PARAM */) ,0.0);
    if(!tmp663)
    {
      tmp665 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[507]/* s01.T_start PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta666 = stringAppend(MMC_REFSTRINGLIT(tmp664),tmp665);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns01.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta666));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",689,7,689,94,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns01.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta666));
        }
      }
      tmp667 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2186
type: ALGORITHM

  assert(s01.T_ext >= 0.0, "Variable violating min constraint: 0.0 <= s01.T_ext, has value: " + String(s01.T_ext, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2186};
  modelica_boolean tmp668;
  static const MMC_DEFSTRINGLIT(tmp669,64,"Variable violating min constraint: 0.0 <= s01.T_ext, has value: ");
  modelica_string tmp670;
  modelica_metatype tmpMeta671;
  static int tmp672 = 0;
  if(!tmp672)
  {
    tmp668 = GreaterEq((data->simulationInfo->realParameter[506]/* s01.T_ext PARAM */) ,0.0);
    if(!tmp668)
    {
      tmp670 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[506]/* s01.T_ext PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta671 = stringAppend(MMC_REFSTRINGLIT(tmp669),tmp670);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns01.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta671));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",688,7,688,84,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns01.T_ext >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta671));
        }
      }
      tmp672 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2187
type: ALGORITHM

  assert(boiler.boilerPIControl.limiter.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and boiler.boilerPIControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, "Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= boiler.boilerPIControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: " + String(boiler.boilerPIControl.limiter.homotopyType, "d"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2187};
  modelica_boolean tmp673;
  modelica_boolean tmp674;
  static const MMC_DEFSTRINGLIT(tmp675,199,"Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= boiler.boilerPIControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: ");
  modelica_string tmp676;
  modelica_metatype tmpMeta677;
  static int tmp678 = 0;
  if(!tmp678)
  {
    tmp673 = GreaterEq((data->simulationInfo->integerParameter[5]/* boiler.boilerPIControl.limiter.homotopyType PARAM */) ,1);
    tmp674 = LessEq((data->simulationInfo->integerParameter[5]/* boiler.boilerPIControl.limiter.homotopyType PARAM */) ,4);
    if(!(tmp673 && tmp674))
    {
      tmp676 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[5]/* boiler.boilerPIControl.limiter.homotopyType PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta677 = stringAppend(MMC_REFSTRINGLIT(tmp675),tmp676);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.limiter.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and boiler.boilerPIControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta677));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",12,9,13,69,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.limiter.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and boiler.boilerPIControl.limiter.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta677));
        }
      }
      tmp678 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2188
type: ALGORITHM

  assert(boiler.boilerPIControl.k >= 0.0, "Variable violating min constraint: 0.0 <= boiler.boilerPIControl.k, has value: " + String(boiler.boilerPIControl.k, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2188};
  modelica_boolean tmp679;
  static const MMC_DEFSTRINGLIT(tmp680,79,"Variable violating min constraint: 0.0 <= boiler.boilerPIControl.k, has value: ");
  modelica_string tmp681;
  modelica_metatype tmpMeta682;
  static int tmp683 = 0;
  if(!tmp683)
  {
    tmp679 = GreaterEq((data->simulationInfo->realParameter[46]/* boiler.boilerPIControl.k PARAM */) ,0.0);
    if(!tmp679)
    {
      tmp681 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[46]/* boiler.boilerPIControl.k PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta682 = stringAppend(MMC_REFSTRINGLIT(tmp680),tmp681);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.k >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta682));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",768,5,768,63,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.k >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta682));
        }
      }
      tmp683 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2189
type: ALGORITHM

  assert(boiler.boilerPIControl.Ni >= 1e-13, "Variable violating min constraint: 1e-13 <= boiler.boilerPIControl.Ni, has value: " + String(boiler.boilerPIControl.Ni, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2189};
  modelica_boolean tmp684;
  static const MMC_DEFSTRINGLIT(tmp685,82,"Variable violating min constraint: 1e-13 <= boiler.boilerPIControl.Ni, has value: ");
  modelica_string tmp686;
  modelica_metatype tmpMeta687;
  static int tmp688 = 0;
  if(!tmp688)
  {
    tmp684 = GreaterEq((data->simulationInfo->realParameter[25]/* boiler.boilerPIControl.Ni PARAM */) ,1e-13);
    if(!tmp684)
    {
      tmp686 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[25]/* boiler.boilerPIControl.Ni PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta687 = stringAppend(MMC_REFSTRINGLIT(tmp685),tmp686);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.Ni >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta687));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",784,5,787,94,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.Ni >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta687));
        }
      }
      tmp688 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2190
type: ALGORITHM

  assert(boiler.boilerPIControl.D.initType >= Modelica.Blocks.Types.Init.NoInit and boiler.boilerPIControl.D.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= boiler.boilerPIControl.D.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(boiler.boilerPIControl.D.initType, "d"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2190};
  modelica_boolean tmp689;
  modelica_boolean tmp690;
  static const MMC_DEFSTRINGLIT(tmp691,166,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= boiler.boilerPIControl.D.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp692;
  modelica_metatype tmpMeta693;
  static int tmp694 = 0;
  if(!tmp694)
  {
    tmp689 = GreaterEq((data->simulationInfo->integerParameter[0]/* boiler.boilerPIControl.D.initType PARAM */) ,1);
    tmp690 = LessEq((data->simulationInfo->integerParameter[0]/* boiler.boilerPIControl.D.initType PARAM */) ,4);
    if(!(tmp689 && tmp690))
    {
      tmp692 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[0]/* boiler.boilerPIControl.D.initType PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta693 = stringAppend(MMC_REFSTRINGLIT(tmp691),tmp692);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.D.initType >= Modelica.Blocks.Types.Init.NoInit and boiler.boilerPIControl.D.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta693));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",271,5,274,40,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.D.initType >= Modelica.Blocks.Types.Init.NoInit and boiler.boilerPIControl.D.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta693));
        }
      }
      tmp694 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2191
type: ALGORITHM

  assert(boiler.boilerPIControl.Td >= 0.0, "Variable violating min constraint: 0.0 <= boiler.boilerPIControl.Td, has value: " + String(boiler.boilerPIControl.Td, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2191};
  modelica_boolean tmp695;
  static const MMC_DEFSTRINGLIT(tmp696,80,"Variable violating min constraint: 0.0 <= boiler.boilerPIControl.Td, has value: ");
  modelica_string tmp697;
  modelica_metatype tmpMeta698;
  static int tmp699 = 0;
  if(!tmp699)
  {
    tmp695 = GreaterEq((data->simulationInfo->realParameter[27]/* boiler.boilerPIControl.Td PARAM */) ,0.0);
    if(!tmp695)
    {
      tmp697 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[27]/* boiler.boilerPIControl.Td PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta698 = stringAppend(MMC_REFSTRINGLIT(tmp696),tmp697);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.Td >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta698));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",773,5,776,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.Td >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta698));
        }
      }
      tmp699 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2192
type: ALGORITHM

  assert(boiler.boilerPIControl.Nd >= 1e-13, "Variable violating min constraint: 1e-13 <= boiler.boilerPIControl.Nd, has value: " + String(boiler.boilerPIControl.Nd, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2192};
  modelica_boolean tmp700;
  static const MMC_DEFSTRINGLIT(tmp701,82,"Variable violating min constraint: 1e-13 <= boiler.boilerPIControl.Nd, has value: ");
  modelica_string tmp702;
  modelica_metatype tmpMeta703;
  static int tmp704 = 0;
  if(!tmp704)
  {
    tmp700 = GreaterEq((data->simulationInfo->realParameter[24]/* boiler.boilerPIControl.Nd PARAM */) ,1e-13);
    if(!tmp700)
    {
      tmp702 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[24]/* boiler.boilerPIControl.Nd PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta703 = stringAppend(MMC_REFSTRINGLIT(tmp701),tmp702);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.Nd >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta703));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",788,5,791,96,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.Nd >= 1e-13", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta703));
        }
      }
      tmp704 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2193
type: ALGORITHM

  assert(boiler.boilerPIControl.D.T >= 1e-60, "Variable violating min constraint: 1e-60 <= boiler.boilerPIControl.D.T, has value: " + String(boiler.boilerPIControl.D.T, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2193};
  modelica_boolean tmp705;
  static const MMC_DEFSTRINGLIT(tmp706,83,"Variable violating min constraint: 1e-60 <= boiler.boilerPIControl.D.T, has value: ");
  modelica_string tmp707;
  modelica_metatype tmpMeta708;
  static int tmp709 = 0;
  if(!tmp709)
  {
    tmp705 = GreaterEq((data->simulationInfo->realParameter[16]/* boiler.boilerPIControl.D.T PARAM */) ,1e-60);
    if(!tmp705)
    {
      tmp707 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[16]/* boiler.boilerPIControl.D.T PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta708 = stringAppend(MMC_REFSTRINGLIT(tmp706),tmp707);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.D.T >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta708));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",269,5,270,69,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.D.T >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta708));
        }
      }
      tmp709 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2194
type: ALGORITHM

  assert(boiler.boilerPIControl.I.initType >= Modelica.Blocks.Types.Init.NoInit and boiler.boilerPIControl.I.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= boiler.boilerPIControl.I.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(boiler.boilerPIControl.I.initType, "d"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2194};
  modelica_boolean tmp710;
  modelica_boolean tmp711;
  static const MMC_DEFSTRINGLIT(tmp712,166,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= boiler.boilerPIControl.I.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp713;
  modelica_metatype tmpMeta714;
  static int tmp715 = 0;
  if(!tmp715)
  {
    tmp710 = GreaterEq((data->simulationInfo->integerParameter[1]/* boiler.boilerPIControl.I.initType PARAM */) ,1);
    tmp711 = LessEq((data->simulationInfo->integerParameter[1]/* boiler.boilerPIControl.I.initType PARAM */) ,4);
    if(!(tmp710 && tmp711))
    {
      tmp713 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[1]/* boiler.boilerPIControl.I.initType PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta714 = stringAppend(MMC_REFSTRINGLIT(tmp712),tmp713);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.I.initType >= Modelica.Blocks.Types.Init.NoInit and boiler.boilerPIControl.I.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta714));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",19,5,21,40,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.I.initType >= Modelica.Blocks.Types.Init.NoInit and boiler.boilerPIControl.I.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta714));
        }
      }
      tmp715 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2195
type: ALGORITHM

  assert(boiler.boilerPIControl.Ti >= 1e-60, "Variable violating min constraint: 1e-60 <= boiler.boilerPIControl.Ti, has value: " + String(boiler.boilerPIControl.Ti, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2195};
  modelica_boolean tmp716;
  static const MMC_DEFSTRINGLIT(tmp717,82,"Variable violating min constraint: 1e-60 <= boiler.boilerPIControl.Ti, has value: ");
  modelica_string tmp718;
  modelica_metatype tmpMeta719;
  static int tmp720 = 0;
  if(!tmp720)
  {
    tmp716 = GreaterEq((data->simulationInfo->realParameter[28]/* boiler.boilerPIControl.Ti PARAM */) ,1e-60);
    if(!tmp716)
    {
      tmp718 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[28]/* boiler.boilerPIControl.Ti PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta719 = stringAppend(MMC_REFSTRINGLIT(tmp717),tmp718);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.Ti >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta719));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",769,5,772,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.Ti >= 1e-60", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta719));
        }
      }
      tmp720 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2196
type: ALGORITHM

  assert(boiler.boilerPIControl.wd >= 0.0, "Variable violating min constraint: 0.0 <= boiler.boilerPIControl.wd, has value: " + String(boiler.boilerPIControl.wd, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2196};
  modelica_boolean tmp721;
  static const MMC_DEFSTRINGLIT(tmp722,80,"Variable violating min constraint: 0.0 <= boiler.boilerPIControl.wd, has value: ");
  modelica_string tmp723;
  modelica_metatype tmpMeta724;
  static int tmp725 = 0;
  if(!tmp725)
  {
    tmp721 = GreaterEq((data->simulationInfo->realParameter[50]/* boiler.boilerPIControl.wd PARAM */) ,0.0);
    if(!tmp721)
    {
      tmp723 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[50]/* boiler.boilerPIControl.wd PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta724 = stringAppend(MMC_REFSTRINGLIT(tmp722),tmp723);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.wd >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta724));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",781,5,783,96,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.wd >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta724));
        }
      }
      tmp725 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2197
type: ALGORITHM

  assert(boiler.boilerPIControl.wp >= 0.0, "Variable violating min constraint: 0.0 <= boiler.boilerPIControl.wp, has value: " + String(boiler.boilerPIControl.wp, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2197};
  modelica_boolean tmp726;
  static const MMC_DEFSTRINGLIT(tmp727,80,"Variable violating min constraint: 0.0 <= boiler.boilerPIControl.wp, has value: ");
  modelica_string tmp728;
  modelica_metatype tmpMeta729;
  static int tmp730 = 0;
  if(!tmp730)
  {
    tmp726 = GreaterEq((data->simulationInfo->realParameter[51]/* boiler.boilerPIControl.wp PARAM */) ,0.0);
    if(!tmp726)
    {
      tmp728 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[51]/* boiler.boilerPIControl.wp PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta729 = stringAppend(MMC_REFSTRINGLIT(tmp727),tmp728);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.wp >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta729));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",779,5,780,55,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.wp >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta729));
        }
      }
      tmp730 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2198
type: ALGORITHM

  assert(boiler.boilerPIControl.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and boiler.boilerPIControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, "Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= boiler.boilerPIControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: " + String(boiler.boilerPIControl.homotopyType, "d"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2198};
  modelica_boolean tmp731;
  modelica_boolean tmp732;
  static const MMC_DEFSTRINGLIT(tmp733,191,"Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= boiler.boilerPIControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: ");
  modelica_string tmp734;
  modelica_metatype tmpMeta735;
  static int tmp736 = 0;
  if(!tmp736)
  {
    tmp731 = GreaterEq((data->simulationInfo->integerParameter[3]/* boiler.boilerPIControl.homotopyType PARAM */) ,1);
    tmp732 = LessEq((data->simulationInfo->integerParameter[3]/* boiler.boilerPIControl.homotopyType PARAM */) ,4);
    if(!(tmp731 && tmp732))
    {
      tmp734 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[3]/* boiler.boilerPIControl.homotopyType PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta735 = stringAppend(MMC_REFSTRINGLIT(tmp733),tmp734);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and boiler.boilerPIControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta735));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",812,5,814,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and boiler.boilerPIControl.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta735));
        }
      }
      tmp736 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2199
type: ALGORITHM

  assert(boiler.boilerPIControl.initType >= Modelica.Blocks.Types.Init.NoInit and boiler.boilerPIControl.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= boiler.boilerPIControl.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(boiler.boilerPIControl.initType, "d"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2199};
  modelica_boolean tmp737;
  modelica_boolean tmp738;
  static const MMC_DEFSTRINGLIT(tmp739,164,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= boiler.boilerPIControl.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp740;
  modelica_metatype tmpMeta741;
  static int tmp742 = 0;
  if(!tmp742)
  {
    tmp737 = GreaterEq((data->simulationInfo->integerParameter[4]/* boiler.boilerPIControl.initType PARAM */) ,1);
    tmp738 = LessEq((data->simulationInfo->integerParameter[4]/* boiler.boilerPIControl.initType PARAM */) ,4);
    if(!(tmp737 && tmp738))
    {
      tmp740 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[4]/* boiler.boilerPIControl.initType PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta741 = stringAppend(MMC_REFSTRINGLIT(tmp739),tmp740);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.initType >= Modelica.Blocks.Types.Init.NoInit and boiler.boilerPIControl.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta741));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",796,5,798,64,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.initType >= Modelica.Blocks.Types.Init.NoInit and boiler.boilerPIControl.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta741));
        }
      }
      tmp742 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2200
type: ALGORITHM

  assert(boiler.boilerPIControl.controllerType >= Modelica.Blocks.Types.SimpleController.P and boiler.boilerPIControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID, "Variable violating min/max constraint: Modelica.Blocks.Types.SimpleController.P <= boiler.boilerPIControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID, has value: " + String(boiler.boilerPIControl.controllerType, "d"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2200};
  modelica_boolean tmp743;
  modelica_boolean tmp744;
  static const MMC_DEFSTRINGLIT(tmp745,179,"Variable violating min/max constraint: Modelica.Blocks.Types.SimpleController.P <= boiler.boilerPIControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID, has value: ");
  modelica_string tmp746;
  modelica_metatype tmpMeta747;
  static int tmp748 = 0;
  if(!tmp748)
  {
    tmp743 = GreaterEq((data->simulationInfo->integerParameter[2]/* boiler.boilerPIControl.controllerType PARAM */) ,1);
    tmp744 = LessEq((data->simulationInfo->integerParameter[2]/* boiler.boilerPIControl.controllerType PARAM */) ,4);
    if(!(tmp743 && tmp744))
    {
      tmp746 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[2]/* boiler.boilerPIControl.controllerType PARAM */) , (modelica_string) mmc_strings_len1[100]);
      tmpMeta747 = stringAppend(MMC_REFSTRINGLIT(tmp745),tmp746);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.controllerType >= Modelica.Blocks.Types.SimpleController.P and boiler.boilerPIControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta747));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",766,5,767,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.controllerType >= Modelica.Blocks.Types.SimpleController.P and boiler.boilerPIControl.controllerType <= Modelica.Blocks.Types.SimpleController.PID", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta747));
        }
      }
      tmp748 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2201
type: ALGORITHM

  assert(boiler.boilerInsideVolume.M >= 0.0, "Variable violating min constraint: 0.0 <= boiler.boilerInsideVolume.M, has value: " + String(boiler.boilerInsideVolume.M, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2201};
  modelica_boolean tmp749;
  static const MMC_DEFSTRINGLIT(tmp750,82,"Variable violating min constraint: 0.0 <= boiler.boilerInsideVolume.M, has value: ");
  modelica_string tmp751;
  modelica_metatype tmpMeta752;
  static int tmp753 = 0;
  if(!tmp753)
  {
    tmp749 = GreaterEq((data->simulationInfo->realParameter[9]/* boiler.boilerInsideVolume.M PARAM */) ,0.0);
    if(!tmp749)
    {
      tmp751 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[9]/* boiler.boilerInsideVolume.M PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta752 = stringAppend(MMC_REFSTRINGLIT(tmp750),tmp751);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nboiler.boilerInsideVolume.M >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta752));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",571,7,571,84,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nboiler.boilerInsideVolume.M >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta752));
        }
      }
      tmp753 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2202
type: ALGORITHM

  assert(boiler.boilerInsideVolume.T_amb >= 0.0, "Variable violating min constraint: 0.0 <= boiler.boilerInsideVolume.T_amb, has value: " + String(boiler.boilerInsideVolume.T_amb, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2202};
  modelica_boolean tmp754;
  static const MMC_DEFSTRINGLIT(tmp755,86,"Variable violating min constraint: 0.0 <= boiler.boilerInsideVolume.T_amb, has value: ");
  modelica_string tmp756;
  modelica_metatype tmpMeta757;
  static int tmp758 = 0;
  if(!tmp758)
  {
    tmp754 = GreaterEq((data->simulationInfo->realParameter[10]/* boiler.boilerInsideVolume.T_amb PARAM */) ,0.0);
    if(!tmp754)
    {
      tmp756 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[10]/* boiler.boilerInsideVolume.T_amb PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta757 = stringAppend(MMC_REFSTRINGLIT(tmp755),tmp756);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nboiler.boilerInsideVolume.T_amb >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta757));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",568,7,568,68,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nboiler.boilerInsideVolume.T_amb >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta757));
        }
      }
      tmp758 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2203
type: ALGORITHM

  assert(boiler.T_vol >= 0.0, "Variable violating min constraint: 0.0 <= boiler.T_vol, has value: " + String(boiler.T_vol, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2203};
  modelica_boolean tmp759;
  static const MMC_DEFSTRINGLIT(tmp760,67,"Variable violating min constraint: 0.0 <= boiler.T_vol, has value: ");
  modelica_string tmp761;
  modelica_metatype tmpMeta762;
  static int tmp763 = 0;
  if(!tmp763)
  {
    tmp759 = GreaterEq((data->simulationInfo->realParameter[4]/* boiler.T_vol PARAM */) ,0.0);
    if(!tmp759)
    {
      tmp761 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[4]/* boiler.T_vol PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta762 = stringAppend(MMC_REFSTRINGLIT(tmp760),tmp761);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nboiler.T_vol >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta762));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",323,7,323,91,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nboiler.T_vol >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta762));
        }
      }
      tmp763 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2204
type: ALGORITHM

  assert(boiler.boilerInsideVolume.T_start >= 0.0, "Variable violating min constraint: 0.0 <= boiler.boilerInsideVolume.T_start, has value: " + String(boiler.boilerInsideVolume.T_start, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2204};
  modelica_boolean tmp764;
  static const MMC_DEFSTRINGLIT(tmp765,88,"Variable violating min constraint: 0.0 <= boiler.boilerInsideVolume.T_start, has value: ");
  modelica_string tmp766;
  modelica_metatype tmpMeta767;
  static int tmp768 = 0;
  if(!tmp768)
  {
    tmp764 = GreaterEq((data->simulationInfo->realParameter[11]/* boiler.boilerInsideVolume.T_start PARAM */) ,0.0);
    if(!tmp764)
    {
      tmp766 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[11]/* boiler.boilerInsideVolume.T_start PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta767 = stringAppend(MMC_REFSTRINGLIT(tmp765),tmp766);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nboiler.boilerInsideVolume.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta767));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",567,7,567,71,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nboiler.boilerInsideVolume.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta767));
        }
      }
      tmp768 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2205
type: ALGORITHM

  assert(pressureAccumulator.T0 >= 0.0, "Variable violating min constraint: 0.0 <= pressureAccumulator.T0, has value: " + String(pressureAccumulator.T0, "g"));
*/
OMC_DISABLE_OPT
static void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2205};
  modelica_boolean tmp769;
  static const MMC_DEFSTRINGLIT(tmp770,77,"Variable violating min constraint: 0.0 <= pressureAccumulator.T0, has value: ");
  modelica_string tmp771;
  modelica_metatype tmpMeta772;
  static int tmp773 = 0;
  if(!tmp773)
  {
    tmp769 = GreaterEq((data->simulationInfo->realParameter[302]/* pressureAccumulator.T0 PARAM */) ,0.0);
    if(!tmp769)
    {
      tmp771 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[302]/* pressureAccumulator.T0 PARAM */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta772 = stringAppend(MMC_REFSTRINGLIT(tmp770),tmp771);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\npressureAccumulator.T0 >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta772));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",480,7,480,98,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\npressureAccumulator.T0 >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta772));
        }
      }
      tmp773 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1628(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1629(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1630(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1631(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1632(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1633(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1634(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1635(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1636(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1637(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1638(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1639(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1640(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1641(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1642(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1643(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1644(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1645(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1646(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1647(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1648(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1649(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1650(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1651(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1652(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1653(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1654(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1655(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1656(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1657(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1658(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1659(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1660(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1661(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1662(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1663(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1664(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1665(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1666(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1667(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1668(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1669(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1670(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1671(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1672(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1673(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1674(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1675(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1676(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1677(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1678(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1679(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1680(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1681(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1682(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1683(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1684(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1685(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1686(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1687(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1688(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1689(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1690(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1691(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1692(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1693(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1694(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1695(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1696(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1697(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1698(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1702(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1704(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1705(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1706(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1707(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1708(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1709(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1710(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1711(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1715(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1717(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1718(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1719(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1720(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1721(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1722(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1723(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1724(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1728(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1730(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1731(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1732(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1733(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1734(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1735(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1736(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1737(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1741(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1743(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1744(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1745(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1746(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1747(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1748(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1753(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1754(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1763(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1764(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1765(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1766(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1767(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1768(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1769(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1770(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1774(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1776(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1777(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1778(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1779(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1780(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1781(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1786(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1787(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1796(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1797(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1798(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1799(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1800(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1801(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1802(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1803(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1807(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1809(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1810(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1811(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1812(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1813(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1814(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1815(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1816(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1820(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1822(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1823(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1824(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1825(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1826(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1827(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1828(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1829(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1833(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1835(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1836(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1837(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1838(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1839(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1840(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1841(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1842(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1846(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1848(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1849(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1850(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1851(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1852(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1853(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1854(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1855(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1859(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1861(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1862(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1863(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1864(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1865(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1866(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1871(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1872(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1881(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1882(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1883(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1884(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1885(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1886(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1887(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1888(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1892(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1894(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1895(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1896(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1897(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1898(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1899(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1900(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1901(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1905(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1907(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1908(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1909(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1910(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1911(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1912(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1917(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1918(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1927(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1928(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1929(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1930(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1931(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1932(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1933(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1934(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1938(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1940(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1941(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1942(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1943(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1944(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1945(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1946(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1947(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1951(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1953(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1954(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1955(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1956(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1957(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1958(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1959(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1960(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1964(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1966(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1967(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1968(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1969(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1970(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1971(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1972(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1973(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1977(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1979(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1980(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1981(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1982(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1983(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1984(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1985(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1986(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1990(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1992(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1993(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1994(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1995(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1996(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1997(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2002(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2003(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2012(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2013(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2014(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2015(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2016(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2017(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2018(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2019(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2023(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2025(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2030(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2031(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2033(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2035(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2036(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2037(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2041(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2042(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2043(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2052(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2053(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2054(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_19(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_18(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_17(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_16(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_15(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_498(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_13(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_12(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_8(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_7(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_6(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_5(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_4(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_3(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2078(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2079(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2080(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2081(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2082(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2083(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2084(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2085(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2086(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2087(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2088(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2089(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2090(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2091(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2092(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2093(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2094(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2095(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2096(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2097(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2098(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2099(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2100(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2101(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2102(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2103(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2104(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2105(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2106(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2107(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2108(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2109(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2110(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2111(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2112(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2113(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2114(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2115(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2116(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2117(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2118(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2119(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2120(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2121(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2122(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2123(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2124(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2125(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2126(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2127(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2128(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2129(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2130(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2131(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2132(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2133(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2134(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2135(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2136(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2137(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2138(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2139(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2140(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2141(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2142(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2143(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2144(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2145(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2146(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2147(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2148(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2149(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2150(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2151(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2152(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2153(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2154(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2155(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2156(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2157(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2158(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2159(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2160(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2161(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2162(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2163(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2164(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2165(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2166(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2167(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2168(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2169(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2170(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2171(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2172(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2173(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2174(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2175(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2176(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2177(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2178(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2179(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2180(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2181(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2182(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2183(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2184(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2185(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2186(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2187(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2188(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2189(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2190(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2191(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2192(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2193(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2194(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2195(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2196(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2197(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2198(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2199(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2200(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2201(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2202(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2203(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2204(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2205(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  (data->simulationInfo->integerParameter[26]/* r10.N PARAM */)  = ((modelica_integer) 2);
  data->modelData->integerParameterData[26].time_unvarying = 1;
  (data->simulationInfo->integerParameter[27]/* r21.N PARAM */)  = ((modelica_integer) 2);
  data->modelData->integerParameterData[27].time_unvarying = 1;
  (data->simulationInfo->integerParameter[28]/* r32.N PARAM */)  = ((modelica_integer) 2);
  data->modelData->integerParameterData[28].time_unvarying = 1;
  (data->simulationInfo->integerParameter[29]/* r43.N PARAM */)  = ((modelica_integer) 2);
  data->modelData->integerParameterData[29].time_unvarying = 1;
  (data->simulationInfo->integerParameter[30]/* r54.N PARAM */)  = ((modelica_integer) 2);
  data->modelData->integerParameterData[30].time_unvarying = 1;
  (data->simulationInfo->integerParameter[31]/* r61.N PARAM */)  = ((modelica_integer) 2);
  data->modelData->integerParameterData[31].time_unvarying = 1;
  (data->simulationInfo->integerParameter[32]/* r74.N PARAM */)  = ((modelica_integer) 2);
  data->modelData->integerParameterData[32].time_unvarying = 1;
  (data->simulationInfo->integerParameter[33]/* r76.N PARAM */)  = ((modelica_integer) 2);
  data->modelData->integerParameterData[33].time_unvarying = 1;
  (data->simulationInfo->integerParameter[34]/* r87.N PARAM */)  = ((modelica_integer) 2);
  data->modelData->integerParameterData[34].time_unvarying = 1;
  (data->simulationInfo->integerParameter[35]/* s01.N PARAM */)  = ((modelica_integer) 2);
  data->modelData->integerParameterData[35].time_unvarying = 1;
  (data->simulationInfo->integerParameter[36]/* s12.N PARAM */)  = ((modelica_integer) 2);
  data->modelData->integerParameterData[36].time_unvarying = 1;
  (data->simulationInfo->integerParameter[37]/* s16.N PARAM */)  = ((modelica_integer) 2);
  data->modelData->integerParameterData[37].time_unvarying = 1;
  (data->simulationInfo->integerParameter[38]/* s23.N PARAM */)  = ((modelica_integer) 2);
  data->modelData->integerParameterData[38].time_unvarying = 1;
  (data->simulationInfo->integerParameter[39]/* s34.N PARAM */)  = ((modelica_integer) 2);
  data->modelData->integerParameterData[39].time_unvarying = 1;
  (data->simulationInfo->integerParameter[40]/* s45.N PARAM */)  = ((modelica_integer) 2);
  data->modelData->integerParameterData[40].time_unvarying = 1;
  (data->simulationInfo->integerParameter[41]/* s47.N PARAM */)  = ((modelica_integer) 2);
  data->modelData->integerParameterData[41].time_unvarying = 1;
  (data->simulationInfo->integerParameter[42]/* s67.N PARAM */)  = ((modelica_integer) 2);
  data->modelData->integerParameterData[42].time_unvarying = 1;
  (data->simulationInfo->integerParameter[43]/* s78.N PARAM */)  = ((modelica_integer) 2);
  data->modelData->integerParameterData[43].time_unvarying = 1;
  (data->simulationInfo->realParameter[0]/* D_2in PARAM */)  = 0.0508;
  data->modelData->realParameterData[0].time_unvarying = 1;
  (data->simulationInfo->realParameter[1]/* U_2in PARAM */)  = 0.06027876605031605;
  data->modelData->realParameterData[1].time_unvarying = 1;
  (data->simulationInfo->realParameter[54]/* boiler.boilerPIControl.yMax PARAM */)  = 100000000.0;
  data->modelData->realParameterData[54].time_unvarying = 1;
  (data->simulationInfo->realParameter[55]/* boiler.boilerPIControl.yMin PARAM */)  = 1000.0;
  data->modelData->realParameterData[55].time_unvarying = 1;
  (data->simulationInfo->realParameter[56]/* boiler.boilerPIControl.y_start PARAM */)  = 0.0;
  data->modelData->realParameterData[56].time_unvarying = 1;
  (data->simulationInfo->realParameter[60]/* dIns PARAM */)  = 0.2;
  data->modelData->realParameterData[60].time_unvarying = 1;
  (data->simulationInfo->realParameter[61]/* dWall PARAM */)  = 0.003;
  data->modelData->realParameterData[61].time_unvarying = 1;
  (data->simulationInfo->realParameter[62]/* lambda_pipe PARAM */)  = 0.02;
  data->modelData->realParameterData[62].time_unvarying = 1;
  (data->simulationInfo->realParameter[103]/* load1.loadValveControl.yMax PARAM */)  = 1.0;
  data->modelData->realParameterData[103].time_unvarying = 1;
  (data->simulationInfo->realParameter[104]/* load1.loadValveControl.yMin PARAM */)  = 0.0;
  data->modelData->realParameterData[104].time_unvarying = 1;
  (data->simulationInfo->realParameter[105]/* load1.loadValveControl.y_start PARAM */)  = 0.0;
  data->modelData->realParameterData[105].time_unvarying = 1;
  (data->simulationInfo->realParameter[150]/* load2.loadValveControl.yMax PARAM */)  = 1.0;
  data->modelData->realParameterData[150].time_unvarying = 1;
  (data->simulationInfo->realParameter[151]/* load2.loadValveControl.yMin PARAM */)  = 0.0;
  data->modelData->realParameterData[151].time_unvarying = 1;
  (data->simulationInfo->realParameter[152]/* load2.loadValveControl.y_start PARAM */)  = 0.0;
  data->modelData->realParameterData[152].time_unvarying = 1;
  (data->simulationInfo->realParameter[197]/* load3.loadValveControl.yMax PARAM */)  = 1.0;
  data->modelData->realParameterData[197].time_unvarying = 1;
  (data->simulationInfo->realParameter[198]/* load3.loadValveControl.yMin PARAM */)  = 0.0;
  data->modelData->realParameterData[198].time_unvarying = 1;
  (data->simulationInfo->realParameter[199]/* load3.loadValveControl.y_start PARAM */)  = 0.0;
  data->modelData->realParameterData[199].time_unvarying = 1;
  (data->simulationInfo->realParameter[244]/* load4.loadValveControl.yMax PARAM */)  = 1.0;
  data->modelData->realParameterData[244].time_unvarying = 1;
  (data->simulationInfo->realParameter[245]/* load4.loadValveControl.yMin PARAM */)  = 0.0;
  data->modelData->realParameterData[245].time_unvarying = 1;
  (data->simulationInfo->realParameter[246]/* load4.loadValveControl.y_start PARAM */)  = 0.0;
  data->modelData->realParameterData[246].time_unvarying = 1;
  (data->simulationInfo->realParameter[291]/* load5.loadValveControl.yMax PARAM */)  = 1.0;
  data->modelData->realParameterData[291].time_unvarying = 1;
  (data->simulationInfo->realParameter[292]/* load5.loadValveControl.yMin PARAM */)  = 0.0;
  data->modelData->realParameterData[292].time_unvarying = 1;
  (data->simulationInfo->realParameter[293]/* load5.loadValveControl.y_start PARAM */)  = 0.0;
  data->modelData->realParameterData[293].time_unvarying = 1;
  (data->simulationInfo->realParameter[326]/* r10.rho PARAM */)  = 985.0;
  data->modelData->realParameterData[326].time_unvarying = 1;
  (data->simulationInfo->realParameter[347]/* r21.rho PARAM */)  = 985.0;
  data->modelData->realParameterData[347].time_unvarying = 1;
  (data->simulationInfo->realParameter[368]/* r32.rho PARAM */)  = 985.0;
  data->modelData->realParameterData[368].time_unvarying = 1;
  (data->simulationInfo->realParameter[389]/* r43.rho PARAM */)  = 985.0;
  data->modelData->realParameterData[389].time_unvarying = 1;
  (data->simulationInfo->realParameter[410]/* r54.rho PARAM */)  = 985.0;
  data->modelData->realParameterData[410].time_unvarying = 1;
  (data->simulationInfo->realParameter[431]/* r61.rho PARAM */)  = 985.0;
  data->modelData->realParameterData[431].time_unvarying = 1;
  (data->simulationInfo->realParameter[452]/* r74.rho PARAM */)  = 985.0;
  data->modelData->realParameterData[452].time_unvarying = 1;
  (data->simulationInfo->realParameter[473]/* r76.rho PARAM */)  = 985.0;
  data->modelData->realParameterData[473].time_unvarying = 1;
  (data->simulationInfo->realParameter[494]/* r87.rho PARAM */)  = 985.0;
  data->modelData->realParameterData[494].time_unvarying = 1;
  (data->simulationInfo->realParameter[499]/* r_ext_2in PARAM */)  = 0.2284;
  data->modelData->realParameterData[499].time_unvarying = 1;
  (data->simulationInfo->realParameter[500]/* r_int_2in PARAM */)  = 0.0284;
  data->modelData->realParameterData[500].time_unvarying = 1;
  (data->simulationInfo->realParameter[519]/* s01.rho PARAM */)  = 985.0;
  data->modelData->realParameterData[519].time_unvarying = 1;
  (data->simulationInfo->realParameter[540]/* s12.rho PARAM */)  = 985.0;
  data->modelData->realParameterData[540].time_unvarying = 1;
  (data->simulationInfo->realParameter[561]/* s16.rho PARAM */)  = 985.0;
  data->modelData->realParameterData[561].time_unvarying = 1;
  (data->simulationInfo->realParameter[582]/* s23.rho PARAM */)  = 985.0;
  data->modelData->realParameterData[582].time_unvarying = 1;
  (data->simulationInfo->realParameter[603]/* s34.rho PARAM */)  = 985.0;
  data->modelData->realParameterData[603].time_unvarying = 1;
  (data->simulationInfo->realParameter[624]/* s45.rho PARAM */)  = 985.0;
  data->modelData->realParameterData[624].time_unvarying = 1;
  (data->simulationInfo->realParameter[645]/* s47.rho PARAM */)  = 985.0;
  data->modelData->realParameterData[645].time_unvarying = 1;
  (data->simulationInfo->realParameter[666]/* s67.rho PARAM */)  = 985.0;
  data->modelData->realParameterData[666].time_unvarying = 1;
  (data->simulationInfo->realParameter[687]/* s78.rho PARAM */)  = 985.0;
  data->modelData->realParameterData[687].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[1]/* boiler.boilerPIControl.D.zeroGain PARAM */)  = 0;
  data->modelData->booleanParameterData[1].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[2]/* boiler.boilerPIControl.I.use_reset PARAM */)  = 0;
  data->modelData->booleanParameterData[2].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[3]/* boiler.boilerPIControl.I.use_set PARAM */)  = 0;
  data->modelData->booleanParameterData[3].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[4]/* boiler.boilerPIControl.limiter.strict PARAM */)  = 0;
  data->modelData->booleanParameterData[4].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[5]/* boiler.boilerPIControl.strict PARAM */)  = 0;
  data->modelData->booleanParameterData[5].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[6]/* boiler.boilerPIControl.withFeedForward PARAM */)  = 0;
  data->modelData->booleanParameterData[6].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[7]/* boiler.boilerPIControl.with_D PARAM */)  = 1;
  data->modelData->booleanParameterData[7].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[8]/* boiler.boilerPIControl.with_I PARAM */)  = 1;
  data->modelData->booleanParameterData[8].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[9]/* load1.loadValveControl.limiter.strict PARAM */)  = 0;
  data->modelData->booleanParameterData[9].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[10]/* load1.loadValveControl.strict PARAM */)  = 0;
  data->modelData->booleanParameterData[10].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[11]/* load1.loadValveControl.withFeedForward PARAM */)  = 0;
  data->modelData->booleanParameterData[11].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[12]/* load1.loadValveControl.with_D PARAM */)  = 0;
  data->modelData->booleanParameterData[12].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[13]/* load1.loadValveControl.with_I PARAM */)  = 0;
  data->modelData->booleanParameterData[13].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[14]/* load2.loadValveControl.limiter.strict PARAM */)  = 0;
  data->modelData->booleanParameterData[14].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[15]/* load2.loadValveControl.strict PARAM */)  = 0;
  data->modelData->booleanParameterData[15].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[16]/* load2.loadValveControl.withFeedForward PARAM */)  = 0;
  data->modelData->booleanParameterData[16].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[17]/* load2.loadValveControl.with_D PARAM */)  = 0;
  data->modelData->booleanParameterData[17].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[18]/* load2.loadValveControl.with_I PARAM */)  = 0;
  data->modelData->booleanParameterData[18].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[19]/* load3.loadValveControl.limiter.strict PARAM */)  = 0;
  data->modelData->booleanParameterData[19].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[20]/* load3.loadValveControl.strict PARAM */)  = 0;
  data->modelData->booleanParameterData[20].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[21]/* load3.loadValveControl.withFeedForward PARAM */)  = 0;
  data->modelData->booleanParameterData[21].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[22]/* load3.loadValveControl.with_D PARAM */)  = 0;
  data->modelData->booleanParameterData[22].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[23]/* load3.loadValveControl.with_I PARAM */)  = 0;
  data->modelData->booleanParameterData[23].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[24]/* load4.loadValveControl.limiter.strict PARAM */)  = 0;
  data->modelData->booleanParameterData[24].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[25]/* load4.loadValveControl.strict PARAM */)  = 0;
  data->modelData->booleanParameterData[25].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[26]/* load4.loadValveControl.withFeedForward PARAM */)  = 0;
  data->modelData->booleanParameterData[26].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[27]/* load4.loadValveControl.with_D PARAM */)  = 0;
  data->modelData->booleanParameterData[27].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[28]/* load4.loadValveControl.with_I PARAM */)  = 0;
  data->modelData->booleanParameterData[28].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[29]/* load5.loadValveControl.limiter.strict PARAM */)  = 0;
  data->modelData->booleanParameterData[29].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[30]/* load5.loadValveControl.strict PARAM */)  = 0;
  data->modelData->booleanParameterData[30].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[31]/* load5.loadValveControl.withFeedForward PARAM */)  = 0;
  data->modelData->booleanParameterData[31].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[32]/* load5.loadValveControl.with_D PARAM */)  = 0;
  data->modelData->booleanParameterData[32].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[33]/* load5.loadValveControl.with_I PARAM */)  = 0;
  data->modelData->booleanParameterData[33].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[34]/* r10.allowFlowReversal PARAM */)  = 0;
  data->modelData->booleanParameterData[34].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[35]/* r10.thermalInertia PARAM */)  = 1;
  data->modelData->booleanParameterData[35].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[36]/* r21.allowFlowReversal PARAM */)  = 1;
  data->modelData->booleanParameterData[36].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[37]/* r21.thermalInertia PARAM */)  = 1;
  data->modelData->booleanParameterData[37].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[38]/* r32.allowFlowReversal PARAM */)  = 1;
  data->modelData->booleanParameterData[38].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[39]/* r32.thermalInertia PARAM */)  = 1;
  data->modelData->booleanParameterData[39].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[40]/* r43.allowFlowReversal PARAM */)  = 1;
  data->modelData->booleanParameterData[40].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[41]/* r43.thermalInertia PARAM */)  = 1;
  data->modelData->booleanParameterData[41].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[42]/* r54.allowFlowReversal PARAM */)  = 1;
  data->modelData->booleanParameterData[42].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[43]/* r54.thermalInertia PARAM */)  = 1;
  data->modelData->booleanParameterData[43].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[44]/* r61.allowFlowReversal PARAM */)  = 1;
  data->modelData->booleanParameterData[44].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[45]/* r61.thermalInertia PARAM */)  = 1;
  data->modelData->booleanParameterData[45].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[46]/* r74.allowFlowReversal PARAM */)  = 1;
  data->modelData->booleanParameterData[46].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[47]/* r74.thermalInertia PARAM */)  = 1;
  data->modelData->booleanParameterData[47].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[48]/* r76.allowFlowReversal PARAM */)  = 1;
  data->modelData->booleanParameterData[48].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[49]/* r76.thermalInertia PARAM */)  = 1;
  data->modelData->booleanParameterData[49].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[50]/* r87.allowFlowReversal PARAM */)  = 1;
  data->modelData->booleanParameterData[50].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[51]/* r87.thermalInertia PARAM */)  = 1;
  data->modelData->booleanParameterData[51].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[52]/* s01.allowFlowReversal PARAM */)  = 0;
  data->modelData->booleanParameterData[52].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[53]/* s01.thermalInertia PARAM */)  = 1;
  data->modelData->booleanParameterData[53].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[54]/* s12.allowFlowReversal PARAM */)  = 1;
  data->modelData->booleanParameterData[54].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[55]/* s12.thermalInertia PARAM */)  = 1;
  data->modelData->booleanParameterData[55].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[56]/* s16.allowFlowReversal PARAM */)  = 1;
  data->modelData->booleanParameterData[56].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[57]/* s16.thermalInertia PARAM */)  = 1;
  data->modelData->booleanParameterData[57].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[58]/* s23.allowFlowReversal PARAM */)  = 1;
  data->modelData->booleanParameterData[58].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[59]/* s23.thermalInertia PARAM */)  = 1;
  data->modelData->booleanParameterData[59].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[60]/* s34.allowFlowReversal PARAM */)  = 1;
  data->modelData->booleanParameterData[60].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[61]/* s34.thermalInertia PARAM */)  = 1;
  data->modelData->booleanParameterData[61].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[62]/* s45.allowFlowReversal PARAM */)  = 1;
  data->modelData->booleanParameterData[62].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[63]/* s45.thermalInertia PARAM */)  = 1;
  data->modelData->booleanParameterData[63].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[64]/* s47.allowFlowReversal PARAM */)  = 1;
  data->modelData->booleanParameterData[64].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[65]/* s47.thermalInertia PARAM */)  = 1;
  data->modelData->booleanParameterData[65].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[66]/* s67.allowFlowReversal PARAM */)  = 1;
  data->modelData->booleanParameterData[66].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[67]/* s67.thermalInertia PARAM */)  = 1;
  data->modelData->booleanParameterData[67].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[68]/* s78.allowFlowReversal PARAM */)  = 1;
  data->modelData->booleanParameterData[68].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[69]/* s78.thermalInertia PARAM */)  = 1;
  data->modelData->booleanParameterData[69].time_unvarying = 1;
  (data->simulationInfo->integerParameter[0]/* boiler.boilerPIControl.D.initType PARAM */)  = 3;
  data->modelData->integerParameterData[0].time_unvarying = 1;
  (data->simulationInfo->integerParameter[1]/* boiler.boilerPIControl.I.initType PARAM */)  = 3;
  data->modelData->integerParameterData[1].time_unvarying = 1;
  (data->simulationInfo->integerParameter[2]/* boiler.boilerPIControl.controllerType PARAM */)  = 4;
  data->modelData->integerParameterData[2].time_unvarying = 1;
  (data->simulationInfo->integerParameter[3]/* boiler.boilerPIControl.homotopyType PARAM */)  = 2;
  data->modelData->integerParameterData[3].time_unvarying = 1;
  (data->simulationInfo->integerParameter[4]/* boiler.boilerPIControl.initType PARAM */)  = 3;
  data->modelData->integerParameterData[4].time_unvarying = 1;
  (data->simulationInfo->integerParameter[5]/* boiler.boilerPIControl.limiter.homotopyType PARAM */)  = 2;
  data->modelData->integerParameterData[5].time_unvarying = 1;
  (data->simulationInfo->integerParameter[6]/* load1.loadValveControl.controllerType PARAM */)  = 1;
  data->modelData->integerParameterData[6].time_unvarying = 1;
  (data->simulationInfo->integerParameter[7]/* load1.loadValveControl.homotopyType PARAM */)  = 2;
  data->modelData->integerParameterData[7].time_unvarying = 1;
  (data->simulationInfo->integerParameter[8]/* load1.loadValveControl.initType PARAM */)  = 3;
  data->modelData->integerParameterData[8].time_unvarying = 1;
  (data->simulationInfo->integerParameter[9]/* load1.loadValveControl.limiter.homotopyType PARAM */)  = 2;
  data->modelData->integerParameterData[9].time_unvarying = 1;
  (data->simulationInfo->integerParameter[10]/* load2.loadValveControl.controllerType PARAM */)  = 1;
  data->modelData->integerParameterData[10].time_unvarying = 1;
  (data->simulationInfo->integerParameter[11]/* load2.loadValveControl.homotopyType PARAM */)  = 2;
  data->modelData->integerParameterData[11].time_unvarying = 1;
  (data->simulationInfo->integerParameter[12]/* load2.loadValveControl.initType PARAM */)  = 3;
  data->modelData->integerParameterData[12].time_unvarying = 1;
  (data->simulationInfo->integerParameter[13]/* load2.loadValveControl.limiter.homotopyType PARAM */)  = 2;
  data->modelData->integerParameterData[13].time_unvarying = 1;
  (data->simulationInfo->integerParameter[14]/* load3.loadValveControl.controllerType PARAM */)  = 1;
  data->modelData->integerParameterData[14].time_unvarying = 1;
  (data->simulationInfo->integerParameter[15]/* load3.loadValveControl.homotopyType PARAM */)  = 2;
  data->modelData->integerParameterData[15].time_unvarying = 1;
  (data->simulationInfo->integerParameter[16]/* load3.loadValveControl.initType PARAM */)  = 3;
  data->modelData->integerParameterData[16].time_unvarying = 1;
  (data->simulationInfo->integerParameter[17]/* load3.loadValveControl.limiter.homotopyType PARAM */)  = 2;
  data->modelData->integerParameterData[17].time_unvarying = 1;
  (data->simulationInfo->integerParameter[18]/* load4.loadValveControl.controllerType PARAM */)  = 1;
  data->modelData->integerParameterData[18].time_unvarying = 1;
  (data->simulationInfo->integerParameter[19]/* load4.loadValveControl.homotopyType PARAM */)  = 2;
  data->modelData->integerParameterData[19].time_unvarying = 1;
  (data->simulationInfo->integerParameter[20]/* load4.loadValveControl.initType PARAM */)  = 3;
  data->modelData->integerParameterData[20].time_unvarying = 1;
  (data->simulationInfo->integerParameter[21]/* load4.loadValveControl.limiter.homotopyType PARAM */)  = 2;
  data->modelData->integerParameterData[21].time_unvarying = 1;
  (data->simulationInfo->integerParameter[22]/* load5.loadValveControl.controllerType PARAM */)  = 1;
  data->modelData->integerParameterData[22].time_unvarying = 1;
  (data->simulationInfo->integerParameter[23]/* load5.loadValveControl.homotopyType PARAM */)  = 2;
  data->modelData->integerParameterData[23].time_unvarying = 1;
  (data->simulationInfo->integerParameter[24]/* load5.loadValveControl.initType PARAM */)  = 3;
  data->modelData->integerParameterData[24].time_unvarying = 1;
  (data->simulationInfo->integerParameter[25]/* load5.loadValveControl.limiter.homotopyType PARAM */)  = 2;
  data->modelData->integerParameterData[25].time_unvarying = 1;
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

