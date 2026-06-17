/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_model.h"
#include "simulation/solver/events.h"



/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  (data->localData[0]->realVars[195]/* P_load1 variable */)  = data->simulationInfo->inputVars[0];
  (data->localData[0]->realVars[196]/* P_load2 variable */)  = data->simulationInfo->inputVars[1];
  (data->localData[0]->realVars[197]/* P_load3 variable */)  = data->simulationInfo->inputVars[2];
  (data->localData[0]->realVars[198]/* P_load4 variable */)  = data->simulationInfo->inputVars[3];
  (data->localData[0]->realVars[199]/* P_load5 variable */)  = data->simulationInfo->inputVars[4];
  (data->localData[0]->realVars[201]/* T_boiler_ref variable */)  = data->simulationInfo->inputVars[5];
  
  TRACE_POP
  return 0;
}

int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->inputVars[0] = data->modelData->realVarsData[195].attribute.start;
  data->simulationInfo->inputVars[1] = data->modelData->realVarsData[196].attribute.start;
  data->simulationInfo->inputVars[2] = data->modelData->realVarsData[197].attribute.start;
  data->simulationInfo->inputVars[3] = data->modelData->realVarsData[198].attribute.start;
  data->simulationInfo->inputVars[4] = data->modelData->realVarsData[199].attribute.start;
  data->simulationInfo->inputVars[5] = data->modelData->realVarsData[201].attribute.start;
  
  TRACE_POP
  return 0;
}

int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->modelData->realVarsData[195].attribute.start = data->simulationInfo->inputVars[0];
  data->modelData->realVarsData[196].attribute.start = data->simulationInfo->inputVars[1];
  data->modelData->realVarsData[197].attribute.start = data->simulationInfo->inputVars[2];
  data->modelData->realVarsData[198].attribute.start = data->simulationInfo->inputVars[3];
  data->modelData->realVarsData[199].attribute.start = data->simulationInfo->inputVars[4];
  data->modelData->realVarsData[201].attribute.start = data->simulationInfo->inputVars[5];
  
  TRACE_POP
  return 0;
}

int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  names[0] = (char *) data->modelData->realVarsData[195].info.name;
  names[1] = (char *) data->modelData->realVarsData[196].info.name;
  names[2] = (char *) data->modelData->realVarsData[197].info.name;
  names[3] = (char *) data->modelData->realVarsData[198].info.name;
  names[4] = (char *) data->modelData->realVarsData[199].info.name;
  names[5] = (char *) data->modelData->realVarsData[201].info.name;
  
  TRACE_POP
  return 0;
}

int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_dataReconciliationInputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->outputVars[0] = (data->localData[0]->realVars[194]/* P_boiler_out variable */) ;
  data->simulationInfo->outputVars[1] = (data->localData[0]->realVars[200]/* T_boiler_out variable */) ;
  data->simulationInfo->outputVars[2] = (data->localData[0]->realVars[204]/* T_mandata variable */) ;
  data->simulationInfo->outputVars[3] = (data->localData[0]->realVars[205]/* T_ritorno variable */) ;
  data->simulationInfo->outputVars[4] = (data->localData[0]->realVars[206]/* Tr_load[1] variable */) ;
  data->simulationInfo->outputVars[5] = (data->localData[0]->realVars[207]/* Tr_load[2] variable */) ;
  data->simulationInfo->outputVars[6] = (data->localData[0]->realVars[208]/* Tr_load[3] variable */) ;
  data->simulationInfo->outputVars[7] = (data->localData[0]->realVars[209]/* Tr_load[4] variable */) ;
  data->simulationInfo->outputVars[8] = (data->localData[0]->realVars[210]/* Tr_load[5] variable */) ;
  data->simulationInfo->outputVars[9] = (data->localData[0]->realVars[211]/* Ts_load[1] variable */) ;
  data->simulationInfo->outputVars[10] = (data->localData[0]->realVars[212]/* Ts_load[2] variable */) ;
  data->simulationInfo->outputVars[11] = (data->localData[0]->realVars[213]/* Ts_load[3] variable */) ;
  data->simulationInfo->outputVars[12] = (data->localData[0]->realVars[214]/* Ts_load[4] variable */) ;
  data->simulationInfo->outputVars[13] = (data->localData[0]->realVars[215]/* Ts_load[5] variable */) ;
  data->simulationInfo->outputVars[14] = (data->localData[0]->realVars[303]/* mfr_load[1] variable */) ;
  data->simulationInfo->outputVars[15] = (data->localData[0]->realVars[304]/* mfr_load[2] variable */) ;
  data->simulationInfo->outputVars[16] = (data->localData[0]->realVars[305]/* mfr_load[3] variable */) ;
  data->simulationInfo->outputVars[17] = (data->localData[0]->realVars[306]/* mfr_load[4] variable */) ;
  data->simulationInfo->outputVars[18] = (data->localData[0]->realVars[307]/* mfr_load[5] variable */) ;
  data->simulationInfo->outputVars[19] = (data->localData[0]->realVars[308]/* mfr_mandata variable */) ;
  data->simulationInfo->outputVars[20] = (data->localData[0]->realVars[310]/* mfr_ritorno variable */) ;
  
  TRACE_POP
  return 0;
}

int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 1096
type: SIMPLE_ASSIGN
mfr_rit.inlet.h_out = pressureAccumulator.fluidPort.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1096(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1096};
  (data->localData[0]->realVars[309]/* mfr_rit.inlet.h_out variable */)  = (data->localData[0]->realVars[311]/* pressureAccumulator.fluidPort.h_out variable */) ;
  TRACE_POP
}
/*
equation index: 1097
type: SIMPLE_ASSIGN
r74.section_T[2] = -273.15 + r74.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1097(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1097};
  (data->localData[0]->realVars[401]/* r74.section_T[2] variable */)  = -273.15 + (data->localData[0]->realVars[28]/* r74.Ttilde[2] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1098
type: SIMPLE_ASSIGN
r74.section_T[1] = -273.15 + r74.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1098(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1098};
  (data->localData[0]->realVars[400]/* r74.section_T[1] variable */)  = -273.15 + (data->localData[0]->realVars[27]/* r74.Ttilde[1] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1099
type: SIMPLE_ASSIGN
r74.outlet.h_out = 4185.0 * r74.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1099(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1099};
  (data->localData[0]->realVars[398]/* r74.outlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[28]/* r74.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1100
type: SIMPLE_ASSIGN
r74.inlet.h_out = 4185.0 * r74.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1100};
  (data->localData[0]->realVars[396]/* r74.inlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[27]/* r74.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1101
type: SIMPLE_ASSIGN
r74.Q_ext[2] = 0.5 * r74.UA * (r74.T_ext - r74.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1101};
  (data->localData[0]->realVars[390]/* r74.Q_ext[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[441]/* r74.UA PARAM */) ) * ((data->simulationInfo->realParameter[439]/* r74.T_ext PARAM */)  - (data->localData[0]->realVars[30]/* r74.Twall[2] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1102
type: SIMPLE_ASSIGN
r74.Q_int[2] = 0.5 * r74.U_wm * r74.L * (r74.Ttilde[2] - r74.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1102};
  (data->localData[0]->realVars[392]/* r74.Q_int[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[442]/* r74.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[438]/* r74.L PARAM */) ) * ((data->localData[0]->realVars[28]/* r74.Ttilde[2] STATE(1) */)  - (data->localData[0]->realVars[30]/* r74.Twall[2] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1103
type: SIMPLE_ASSIGN
$DER.r74.Twall[2] = (r74.Q_int[2] + r74.Q_ext[2]) / (0.5 * r74.L * r74.rhomcm * r74.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1103};
  (data->localData[0]->realVars[105]/* der(r74.Twall[2]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[392]/* r74.Q_int[2] variable */)  + (data->localData[0]->realVars[390]/* r74.Q_ext[2] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[438]/* r74.L PARAM */) )) * ((data->simulationInfo->realParameter[453]/* r74.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[435]/* r74.Am PARAM */) ),"0.5 * r74.L * r74.rhomcm * r74.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1104
type: SIMPLE_ASSIGN
r74.Q_ext[1] = 0.5 * r74.UA * (r74.T_ext - r74.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1104};
  (data->localData[0]->realVars[389]/* r74.Q_ext[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[441]/* r74.UA PARAM */) ) * ((data->simulationInfo->realParameter[439]/* r74.T_ext PARAM */)  - (data->localData[0]->realVars[29]/* r74.Twall[1] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1105
type: SIMPLE_ASSIGN
r74.Q_int[1] = 0.5 * r74.U_wm * r74.L * (r74.Ttilde[1] - r74.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1105};
  (data->localData[0]->realVars[391]/* r74.Q_int[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[442]/* r74.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[438]/* r74.L PARAM */) ) * ((data->localData[0]->realVars[27]/* r74.Ttilde[1] STATE(1) */)  - (data->localData[0]->realVars[29]/* r74.Twall[1] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1106
type: SIMPLE_ASSIGN
$DER.r74.Twall[1] = (r74.Q_int[1] + r74.Q_ext[1]) / (0.5 * r74.L * r74.rhomcm * r74.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1106};
  (data->localData[0]->realVars[104]/* der(r74.Twall[1]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[391]/* r74.Q_int[1] variable */)  + (data->localData[0]->realVars[389]/* r74.Q_ext[1] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[438]/* r74.L PARAM */) )) * ((data->simulationInfo->realParameter[453]/* r74.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[435]/* r74.Am PARAM */) ),"0.5 * r74.L * r74.rhomcm * r74.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1107
type: SIMPLE_ASSIGN
s47.section_T[2] = -273.15 + s47.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1107};
  (data->localData[0]->realVars[516]/* s47.section_T[2] variable */)  = -273.15 + (data->localData[0]->realVars[64]/* s47.Ttilde[2] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1108
type: SIMPLE_ASSIGN
s47.section_T[1] = -273.15 + s47.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1108};
  (data->localData[0]->realVars[515]/* s47.section_T[1] variable */)  = -273.15 + (data->localData[0]->realVars[63]/* s47.Ttilde[1] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1109
type: SIMPLE_ASSIGN
s47.outlet.h_out = 4185.0 * s47.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1109};
  (data->localData[0]->realVars[513]/* s47.outlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[64]/* s47.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1110
type: SIMPLE_ASSIGN
s47.inlet.h_out = 4185.0 * s47.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1110};
  (data->localData[0]->realVars[511]/* s47.inlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[63]/* s47.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1111
type: SIMPLE_ASSIGN
s47.Q_ext[2] = 0.5 * s47.UA * (s47.T_ext - s47.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1111};
  (data->localData[0]->realVars[505]/* s47.Q_ext[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[634]/* s47.UA PARAM */) ) * ((data->simulationInfo->realParameter[632]/* s47.T_ext PARAM */)  - (data->localData[0]->realVars[66]/* s47.Twall[2] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1112
type: SIMPLE_ASSIGN
s47.Q_int[2] = 0.5 * s47.U_wm * s47.L * (s47.Ttilde[2] - s47.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1112};
  (data->localData[0]->realVars[507]/* s47.Q_int[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[635]/* s47.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[631]/* s47.L PARAM */) ) * ((data->localData[0]->realVars[64]/* s47.Ttilde[2] STATE(1) */)  - (data->localData[0]->realVars[66]/* s47.Twall[2] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1113
type: SIMPLE_ASSIGN
$DER.s47.Twall[2] = (s47.Q_int[2] + s47.Q_ext[2]) / (0.5 * s47.L * s47.rhomcm * s47.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1113};
  (data->localData[0]->realVars[141]/* der(s47.Twall[2]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[507]/* s47.Q_int[2] variable */)  + (data->localData[0]->realVars[505]/* s47.Q_ext[2] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[631]/* s47.L PARAM */) )) * ((data->simulationInfo->realParameter[646]/* s47.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[628]/* s47.Am PARAM */) ),"0.5 * s47.L * s47.rhomcm * s47.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1114
type: SIMPLE_ASSIGN
s47.Q_ext[1] = 0.5 * s47.UA * (s47.T_ext - s47.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1114};
  (data->localData[0]->realVars[504]/* s47.Q_ext[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[634]/* s47.UA PARAM */) ) * ((data->simulationInfo->realParameter[632]/* s47.T_ext PARAM */)  - (data->localData[0]->realVars[65]/* s47.Twall[1] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1115
type: SIMPLE_ASSIGN
s47.Q_int[1] = 0.5 * s47.U_wm * s47.L * (s47.Ttilde[1] - s47.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1115};
  (data->localData[0]->realVars[506]/* s47.Q_int[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[635]/* s47.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[631]/* s47.L PARAM */) ) * ((data->localData[0]->realVars[63]/* s47.Ttilde[1] STATE(1) */)  - (data->localData[0]->realVars[65]/* s47.Twall[1] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1116
type: SIMPLE_ASSIGN
$DER.s47.Twall[1] = (s47.Q_int[1] + s47.Q_ext[1]) / (0.5 * s47.L * s47.rhomcm * s47.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1116};
  (data->localData[0]->realVars[140]/* der(s47.Twall[1]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[506]/* s47.Q_int[1] variable */)  + (data->localData[0]->realVars[504]/* s47.Q_ext[1] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[631]/* s47.L PARAM */) )) * ((data->simulationInfo->realParameter[646]/* s47.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[628]/* s47.Am PARAM */) ),"0.5 * s47.L * s47.rhomcm * s47.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1117
type: SIMPLE_ASSIGN
s78.section_T[2] = -273.15 + s78.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1117};
  (data->localData[0]->realVars[540]/* s78.section_T[2] variable */)  = -273.15 + (data->localData[0]->realVars[72]/* s78.Ttilde[2] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1118
type: SIMPLE_ASSIGN
s78.section_T[1] = -273.15 + s78.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1118};
  (data->localData[0]->realVars[539]/* s78.section_T[1] variable */)  = -273.15 + (data->localData[0]->realVars[71]/* s78.Ttilde[1] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1119
type: SIMPLE_ASSIGN
load5.inlet.h_out = 4185.0 * s78.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1119};
  (data->localData[0]->realVars[290]/* load5.inlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[72]/* s78.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1120
type: SIMPLE_ASSIGN
Ts_load[5] = -273.15 + 0.0002389486260454002 * load5.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1120};
  (data->localData[0]->realVars[215]/* Ts_load[5] variable */)  = -273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[290]/* load5.inlet.h_out variable */) );
  TRACE_POP
}
/*
equation index: 1121
type: SIMPLE_ASSIGN
s78.inlet.h_out = 4185.0 * s78.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1121};
  (data->localData[0]->realVars[538]/* s78.inlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[71]/* s78.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1122
type: SIMPLE_ASSIGN
s78.Q_ext[2] = 0.5 * s78.UA * (s78.T_ext - s78.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1122};
  (data->localData[0]->realVars[532]/* s78.Q_ext[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[676]/* s78.UA PARAM */) ) * ((data->simulationInfo->realParameter[674]/* s78.T_ext PARAM */)  - (data->localData[0]->realVars[74]/* s78.Twall[2] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1123
type: SIMPLE_ASSIGN
s78.Q_int[2] = 0.5 * s78.U_wm * s78.L * (s78.Ttilde[2] - s78.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1123};
  (data->localData[0]->realVars[534]/* s78.Q_int[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[677]/* s78.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[673]/* s78.L PARAM */) ) * ((data->localData[0]->realVars[72]/* s78.Ttilde[2] STATE(1) */)  - (data->localData[0]->realVars[74]/* s78.Twall[2] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1124
type: SIMPLE_ASSIGN
$DER.s78.Twall[2] = (s78.Q_int[2] + s78.Q_ext[2]) / (0.5 * s78.L * s78.rhomcm * s78.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1124};
  (data->localData[0]->realVars[149]/* der(s78.Twall[2]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[534]/* s78.Q_int[2] variable */)  + (data->localData[0]->realVars[532]/* s78.Q_ext[2] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[673]/* s78.L PARAM */) )) * ((data->simulationInfo->realParameter[688]/* s78.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[670]/* s78.Am PARAM */) ),"0.5 * s78.L * s78.rhomcm * s78.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1125
type: SIMPLE_ASSIGN
s78.Q_ext[1] = 0.5 * s78.UA * (s78.T_ext - s78.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1125};
  (data->localData[0]->realVars[531]/* s78.Q_ext[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[676]/* s78.UA PARAM */) ) * ((data->simulationInfo->realParameter[674]/* s78.T_ext PARAM */)  - (data->localData[0]->realVars[73]/* s78.Twall[1] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1126
type: SIMPLE_ASSIGN
s78.Q_int[1] = 0.5 * s78.U_wm * s78.L * (s78.Ttilde[1] - s78.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1126};
  (data->localData[0]->realVars[533]/* s78.Q_int[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[677]/* s78.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[673]/* s78.L PARAM */) ) * ((data->localData[0]->realVars[71]/* s78.Ttilde[1] STATE(1) */)  - (data->localData[0]->realVars[73]/* s78.Twall[1] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1127
type: SIMPLE_ASSIGN
$DER.s78.Twall[1] = (s78.Q_int[1] + s78.Q_ext[1]) / (0.5 * s78.L * s78.rhomcm * s78.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1127};
  (data->localData[0]->realVars[148]/* der(s78.Twall[1]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[533]/* s78.Q_int[1] variable */)  + (data->localData[0]->realVars[531]/* s78.Q_ext[1] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[673]/* s78.L PARAM */) )) * ((data->simulationInfo->realParameter[688]/* s78.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[670]/* s78.Am PARAM */) ),"0.5 * s78.L * s78.rhomcm * s78.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1128
type: SIMPLE_ASSIGN
r87.section_T[2] = -273.15 + r87.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1128};
  (data->localData[0]->realVars[427]/* r87.section_T[2] variable */)  = -273.15 + (data->localData[0]->realVars[36]/* r87.Ttilde[2] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1129
type: SIMPLE_ASSIGN
r87.section_T[1] = -273.15 + r87.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1129};
  (data->localData[0]->realVars[426]/* r87.section_T[1] variable */)  = -273.15 + (data->localData[0]->realVars[35]/* r87.Ttilde[1] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1130
type: SIMPLE_ASSIGN
r87.outlet.h_out = 4185.0 * r87.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1130};
  (data->localData[0]->realVars[424]/* r87.outlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[36]/* r87.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1131
type: SIMPLE_ASSIGN
r87.inlet.h_out = 4185.0 * r87.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1131};
  (data->localData[0]->realVars[423]/* r87.inlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[35]/* r87.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1132
type: SIMPLE_ASSIGN
r87.Q_ext[2] = 0.5 * r87.UA * (r87.T_ext - r87.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1132};
  (data->localData[0]->realVars[417]/* r87.Q_ext[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[483]/* r87.UA PARAM */) ) * ((data->simulationInfo->realParameter[481]/* r87.T_ext PARAM */)  - (data->localData[0]->realVars[38]/* r87.Twall[2] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1133
type: SIMPLE_ASSIGN
r87.Q_int[2] = 0.5 * r87.U_wm * r87.L * (r87.Ttilde[2] - r87.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1133};
  (data->localData[0]->realVars[419]/* r87.Q_int[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[484]/* r87.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[480]/* r87.L PARAM */) ) * ((data->localData[0]->realVars[36]/* r87.Ttilde[2] STATE(1) */)  - (data->localData[0]->realVars[38]/* r87.Twall[2] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1134
type: SIMPLE_ASSIGN
$DER.r87.Twall[2] = (r87.Q_int[2] + r87.Q_ext[2]) / (0.5 * r87.L * r87.rhomcm * r87.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1134};
  (data->localData[0]->realVars[113]/* der(r87.Twall[2]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[419]/* r87.Q_int[2] variable */)  + (data->localData[0]->realVars[417]/* r87.Q_ext[2] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[480]/* r87.L PARAM */) )) * ((data->simulationInfo->realParameter[495]/* r87.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[477]/* r87.Am PARAM */) ),"0.5 * r87.L * r87.rhomcm * r87.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1135
type: SIMPLE_ASSIGN
r87.Q_ext[1] = 0.5 * r87.UA * (r87.T_ext - r87.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1135};
  (data->localData[0]->realVars[416]/* r87.Q_ext[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[483]/* r87.UA PARAM */) ) * ((data->simulationInfo->realParameter[481]/* r87.T_ext PARAM */)  - (data->localData[0]->realVars[37]/* r87.Twall[1] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1136
type: SIMPLE_ASSIGN
r87.Q_int[1] = 0.5 * r87.U_wm * r87.L * (r87.Ttilde[1] - r87.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1136};
  (data->localData[0]->realVars[418]/* r87.Q_int[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[484]/* r87.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[480]/* r87.L PARAM */) ) * ((data->localData[0]->realVars[35]/* r87.Ttilde[1] STATE(1) */)  - (data->localData[0]->realVars[37]/* r87.Twall[1] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1137
type: SIMPLE_ASSIGN
$DER.r87.Twall[1] = (r87.Q_int[1] + r87.Q_ext[1]) / (0.5 * r87.L * r87.rhomcm * r87.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1137};
  (data->localData[0]->realVars[112]/* der(r87.Twall[1]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[418]/* r87.Q_int[1] variable */)  + (data->localData[0]->realVars[416]/* r87.Q_ext[1] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[480]/* r87.L PARAM */) )) * ((data->simulationInfo->realParameter[495]/* r87.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[477]/* r87.Am PARAM */) ),"0.5 * r87.L * r87.rhomcm * r87.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1138
type: SIMPLE_ASSIGN
s67.section_T[2] = -273.15 + s67.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1138};
  (data->localData[0]->realVars[529]/* s67.section_T[2] variable */)  = -273.15 + (data->localData[0]->realVars[68]/* s67.Ttilde[2] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1139
type: SIMPLE_ASSIGN
s67.section_T[1] = -273.15 + s67.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1139};
  (data->localData[0]->realVars[528]/* s67.section_T[1] variable */)  = -273.15 + (data->localData[0]->realVars[67]/* s67.Ttilde[1] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1140
type: SIMPLE_ASSIGN
s67.outlet.h_out = 4185.0 * s67.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1140};
  (data->localData[0]->realVars[527]/* s67.outlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[68]/* s67.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1141
type: SIMPLE_ASSIGN
s67.inlet.h_out = 4185.0 * s67.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1141};
  (data->localData[0]->realVars[525]/* s67.inlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[67]/* s67.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1142
type: SIMPLE_ASSIGN
s67.Q_ext[2] = 0.5 * s67.UA * (s67.T_ext - s67.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1142};
  (data->localData[0]->realVars[519]/* s67.Q_ext[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[655]/* s67.UA PARAM */) ) * ((data->simulationInfo->realParameter[653]/* s67.T_ext PARAM */)  - (data->localData[0]->realVars[70]/* s67.Twall[2] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1143
type: SIMPLE_ASSIGN
s67.Q_int[2] = 0.5 * s67.U_wm * s67.L * (s67.Ttilde[2] - s67.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1143};
  (data->localData[0]->realVars[521]/* s67.Q_int[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[656]/* s67.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[652]/* s67.L PARAM */) ) * ((data->localData[0]->realVars[68]/* s67.Ttilde[2] STATE(1) */)  - (data->localData[0]->realVars[70]/* s67.Twall[2] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1144
type: SIMPLE_ASSIGN
$DER.s67.Twall[2] = (s67.Q_int[2] + s67.Q_ext[2]) / (0.5 * s67.L * s67.rhomcm * s67.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1144};
  (data->localData[0]->realVars[145]/* der(s67.Twall[2]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[521]/* s67.Q_int[2] variable */)  + (data->localData[0]->realVars[519]/* s67.Q_ext[2] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[652]/* s67.L PARAM */) )) * ((data->simulationInfo->realParameter[667]/* s67.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[649]/* s67.Am PARAM */) ),"0.5 * s67.L * s67.rhomcm * s67.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1145
type: SIMPLE_ASSIGN
s67.Q_ext[1] = 0.5 * s67.UA * (s67.T_ext - s67.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1145};
  (data->localData[0]->realVars[518]/* s67.Q_ext[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[655]/* s67.UA PARAM */) ) * ((data->simulationInfo->realParameter[653]/* s67.T_ext PARAM */)  - (data->localData[0]->realVars[69]/* s67.Twall[1] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1146
type: SIMPLE_ASSIGN
s67.Q_int[1] = 0.5 * s67.U_wm * s67.L * (s67.Ttilde[1] - s67.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1146};
  (data->localData[0]->realVars[520]/* s67.Q_int[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[656]/* s67.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[652]/* s67.L PARAM */) ) * ((data->localData[0]->realVars[67]/* s67.Ttilde[1] STATE(1) */)  - (data->localData[0]->realVars[69]/* s67.Twall[1] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1147
type: SIMPLE_ASSIGN
$DER.s67.Twall[1] = (s67.Q_int[1] + s67.Q_ext[1]) / (0.5 * s67.L * s67.rhomcm * s67.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1147};
  (data->localData[0]->realVars[144]/* der(s67.Twall[1]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[520]/* s67.Q_int[1] variable */)  + (data->localData[0]->realVars[518]/* s67.Q_ext[1] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[652]/* s67.L PARAM */) )) * ((data->simulationInfo->realParameter[667]/* s67.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[649]/* s67.Am PARAM */) ),"0.5 * s67.L * s67.rhomcm * s67.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1148
type: SIMPLE_ASSIGN
s16.section_T[2] = -273.15 + s16.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1148};
  (data->localData[0]->realVars[464]/* s16.section_T[2] variable */)  = -273.15 + (data->localData[0]->realVars[48]/* s16.Ttilde[2] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1149
type: SIMPLE_ASSIGN
s16.section_T[1] = -273.15 + s16.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1149};
  (data->localData[0]->realVars[463]/* s16.section_T[1] variable */)  = -273.15 + (data->localData[0]->realVars[47]/* s16.Ttilde[1] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1150
type: SIMPLE_ASSIGN
s16.outlet.h_out = 4185.0 * s16.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1150};
  (data->localData[0]->realVars[462]/* s16.outlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[48]/* s16.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1151
type: SIMPLE_ASSIGN
s16.inlet.h_out = 4185.0 * s16.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1151};
  (data->localData[0]->realVars[460]/* s16.inlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[47]/* s16.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1152
type: SIMPLE_ASSIGN
s16.Q_ext[2] = 0.5 * s16.UA * (s16.T_ext - s16.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1152};
  (data->localData[0]->realVars[454]/* s16.Q_ext[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[550]/* s16.UA PARAM */) ) * ((data->simulationInfo->realParameter[548]/* s16.T_ext PARAM */)  - (data->localData[0]->realVars[50]/* s16.Twall[2] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1153
type: SIMPLE_ASSIGN
s16.Q_int[2] = 0.5 * s16.U_wm * s16.L * (s16.Ttilde[2] - s16.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1153};
  (data->localData[0]->realVars[456]/* s16.Q_int[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[551]/* s16.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[547]/* s16.L PARAM */) ) * ((data->localData[0]->realVars[48]/* s16.Ttilde[2] STATE(1) */)  - (data->localData[0]->realVars[50]/* s16.Twall[2] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1154
type: SIMPLE_ASSIGN
$DER.s16.Twall[2] = (s16.Q_int[2] + s16.Q_ext[2]) / (0.5 * s16.L * s16.rhomcm * s16.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1154};
  (data->localData[0]->realVars[125]/* der(s16.Twall[2]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[456]/* s16.Q_int[2] variable */)  + (data->localData[0]->realVars[454]/* s16.Q_ext[2] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[547]/* s16.L PARAM */) )) * ((data->simulationInfo->realParameter[562]/* s16.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[544]/* s16.Am PARAM */) ),"0.5 * s16.L * s16.rhomcm * s16.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1155
type: SIMPLE_ASSIGN
s16.Q_ext[1] = 0.5 * s16.UA * (s16.T_ext - s16.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1155};
  (data->localData[0]->realVars[453]/* s16.Q_ext[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[550]/* s16.UA PARAM */) ) * ((data->simulationInfo->realParameter[548]/* s16.T_ext PARAM */)  - (data->localData[0]->realVars[49]/* s16.Twall[1] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1156
type: SIMPLE_ASSIGN
s16.Q_int[1] = 0.5 * s16.U_wm * s16.L * (s16.Ttilde[1] - s16.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1156};
  (data->localData[0]->realVars[455]/* s16.Q_int[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[551]/* s16.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[547]/* s16.L PARAM */) ) * ((data->localData[0]->realVars[47]/* s16.Ttilde[1] STATE(1) */)  - (data->localData[0]->realVars[49]/* s16.Twall[1] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1157
type: SIMPLE_ASSIGN
$DER.s16.Twall[1] = (s16.Q_int[1] + s16.Q_ext[1]) / (0.5 * s16.L * s16.rhomcm * s16.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1157};
  (data->localData[0]->realVars[124]/* der(s16.Twall[1]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[455]/* s16.Q_int[1] variable */)  + (data->localData[0]->realVars[453]/* s16.Q_ext[1] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[547]/* s16.L PARAM */) )) * ((data->simulationInfo->realParameter[562]/* s16.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[544]/* s16.Am PARAM */) ),"0.5 * s16.L * s16.rhomcm * s16.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1158
type: SIMPLE_ASSIGN
r61.section_T[2] = -273.15 + r61.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1158};
  (data->localData[0]->realVars[387]/* r61.section_T[2] variable */)  = -273.15 + (data->localData[0]->realVars[24]/* r61.Ttilde[2] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1159
type: SIMPLE_ASSIGN
r61.section_T[1] = -273.15 + r61.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1159};
  (data->localData[0]->realVars[386]/* r61.section_T[1] variable */)  = -273.15 + (data->localData[0]->realVars[23]/* r61.Ttilde[1] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1160
type: SIMPLE_ASSIGN
r61.outlet.h_out = 4185.0 * r61.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1160};
  (data->localData[0]->realVars[384]/* r61.outlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[24]/* r61.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1161
type: SIMPLE_ASSIGN
r61.inlet.h_out = 4185.0 * r61.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1161};
  (data->localData[0]->realVars[382]/* r61.inlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[23]/* r61.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1162
type: SIMPLE_ASSIGN
r61.Q_ext[2] = 0.5 * r61.UA * (r61.T_ext - r61.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1162};
  (data->localData[0]->realVars[376]/* r61.Q_ext[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[420]/* r61.UA PARAM */) ) * ((data->simulationInfo->realParameter[418]/* r61.T_ext PARAM */)  - (data->localData[0]->realVars[26]/* r61.Twall[2] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1163
type: SIMPLE_ASSIGN
r61.Q_int[2] = 0.5 * r61.U_wm * r61.L * (r61.Ttilde[2] - r61.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1163};
  (data->localData[0]->realVars[378]/* r61.Q_int[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[421]/* r61.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[417]/* r61.L PARAM */) ) * ((data->localData[0]->realVars[24]/* r61.Ttilde[2] STATE(1) */)  - (data->localData[0]->realVars[26]/* r61.Twall[2] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1164
type: SIMPLE_ASSIGN
$DER.r61.Twall[2] = (r61.Q_int[2] + r61.Q_ext[2]) / (0.5 * r61.L * r61.rhomcm * r61.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1164};
  (data->localData[0]->realVars[101]/* der(r61.Twall[2]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[378]/* r61.Q_int[2] variable */)  + (data->localData[0]->realVars[376]/* r61.Q_ext[2] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[417]/* r61.L PARAM */) )) * ((data->simulationInfo->realParameter[432]/* r61.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[414]/* r61.Am PARAM */) ),"0.5 * r61.L * r61.rhomcm * r61.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1165
type: SIMPLE_ASSIGN
r61.Q_ext[1] = 0.5 * r61.UA * (r61.T_ext - r61.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1165};
  (data->localData[0]->realVars[375]/* r61.Q_ext[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[420]/* r61.UA PARAM */) ) * ((data->simulationInfo->realParameter[418]/* r61.T_ext PARAM */)  - (data->localData[0]->realVars[25]/* r61.Twall[1] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1166
type: SIMPLE_ASSIGN
r61.Q_int[1] = 0.5 * r61.U_wm * r61.L * (r61.Ttilde[1] - r61.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1166};
  (data->localData[0]->realVars[377]/* r61.Q_int[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[421]/* r61.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[417]/* r61.L PARAM */) ) * ((data->localData[0]->realVars[23]/* r61.Ttilde[1] STATE(1) */)  - (data->localData[0]->realVars[25]/* r61.Twall[1] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1167
type: SIMPLE_ASSIGN
$DER.r61.Twall[1] = (r61.Q_int[1] + r61.Q_ext[1]) / (0.5 * r61.L * r61.rhomcm * r61.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1167};
  (data->localData[0]->realVars[100]/* der(r61.Twall[1]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[377]/* r61.Q_int[1] variable */)  + (data->localData[0]->realVars[375]/* r61.Q_ext[1] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[417]/* r61.L PARAM */) )) * ((data->simulationInfo->realParameter[432]/* r61.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[414]/* r61.Am PARAM */) ),"0.5 * r61.L * r61.rhomcm * r61.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1168
type: SIMPLE_ASSIGN
r76.section_T[2] = -273.15 + r76.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1168};
  (data->localData[0]->realVars[414]/* r76.section_T[2] variable */)  = -273.15 + (data->localData[0]->realVars[32]/* r76.Ttilde[2] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1169
type: SIMPLE_ASSIGN
r76.section_T[1] = -273.15 + r76.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1169};
  (data->localData[0]->realVars[413]/* r76.section_T[1] variable */)  = -273.15 + (data->localData[0]->realVars[31]/* r76.Ttilde[1] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1170
type: SIMPLE_ASSIGN
r76.outlet.h_out = 4185.0 * r76.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1170};
  (data->localData[0]->realVars[412]/* r76.outlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[32]/* r76.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1171
type: SIMPLE_ASSIGN
r76.inlet.h_out = 4185.0 * r76.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1171};
  (data->localData[0]->realVars[410]/* r76.inlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[31]/* r76.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1172
type: SIMPLE_ASSIGN
r76.Q_ext[2] = 0.5 * r76.UA * (r76.T_ext - r76.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1172};
  (data->localData[0]->realVars[404]/* r76.Q_ext[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[462]/* r76.UA PARAM */) ) * ((data->simulationInfo->realParameter[460]/* r76.T_ext PARAM */)  - (data->localData[0]->realVars[34]/* r76.Twall[2] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1173
type: SIMPLE_ASSIGN
r76.Q_int[2] = 0.5 * r76.U_wm * r76.L * (r76.Ttilde[2] - r76.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1173};
  (data->localData[0]->realVars[406]/* r76.Q_int[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[463]/* r76.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[459]/* r76.L PARAM */) ) * ((data->localData[0]->realVars[32]/* r76.Ttilde[2] STATE(1) */)  - (data->localData[0]->realVars[34]/* r76.Twall[2] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1174
type: SIMPLE_ASSIGN
$DER.r76.Twall[2] = (r76.Q_int[2] + r76.Q_ext[2]) / (0.5 * r76.L * r76.rhomcm * r76.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1174};
  (data->localData[0]->realVars[109]/* der(r76.Twall[2]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[406]/* r76.Q_int[2] variable */)  + (data->localData[0]->realVars[404]/* r76.Q_ext[2] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[459]/* r76.L PARAM */) )) * ((data->simulationInfo->realParameter[474]/* r76.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[456]/* r76.Am PARAM */) ),"0.5 * r76.L * r76.rhomcm * r76.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1175
type: SIMPLE_ASSIGN
r76.Q_ext[1] = 0.5 * r76.UA * (r76.T_ext - r76.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1175};
  (data->localData[0]->realVars[403]/* r76.Q_ext[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[462]/* r76.UA PARAM */) ) * ((data->simulationInfo->realParameter[460]/* r76.T_ext PARAM */)  - (data->localData[0]->realVars[33]/* r76.Twall[1] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1176
type: SIMPLE_ASSIGN
r76.Q_int[1] = 0.5 * r76.U_wm * r76.L * (r76.Ttilde[1] - r76.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1176};
  (data->localData[0]->realVars[405]/* r76.Q_int[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[463]/* r76.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[459]/* r76.L PARAM */) ) * ((data->localData[0]->realVars[31]/* r76.Ttilde[1] STATE(1) */)  - (data->localData[0]->realVars[33]/* r76.Twall[1] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1177
type: SIMPLE_ASSIGN
$DER.r76.Twall[1] = (r76.Q_int[1] + r76.Q_ext[1]) / (0.5 * r76.L * r76.rhomcm * r76.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1177};
  (data->localData[0]->realVars[108]/* der(r76.Twall[1]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[405]/* r76.Q_int[1] variable */)  + (data->localData[0]->realVars[403]/* r76.Q_ext[1] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[459]/* r76.L PARAM */) )) * ((data->simulationInfo->realParameter[474]/* r76.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[456]/* r76.Am PARAM */) ),"0.5 * r76.L * r76.rhomcm * r76.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1178
type: SIMPLE_ASSIGN
s45.section_T[2] = -273.15 + s45.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1178};
  (data->localData[0]->realVars[502]/* s45.section_T[2] variable */)  = -273.15 + (data->localData[0]->realVars[60]/* s45.Ttilde[2] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1179
type: SIMPLE_ASSIGN
s45.section_T[1] = -273.15 + s45.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1179};
  (data->localData[0]->realVars[501]/* s45.section_T[1] variable */)  = -273.15 + (data->localData[0]->realVars[59]/* s45.Ttilde[1] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1180
type: SIMPLE_ASSIGN
load3.inlet.h_out = 4185.0 * s45.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1180};
  (data->localData[0]->realVars[263]/* load3.inlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[60]/* s45.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1181
type: SIMPLE_ASSIGN
Ts_load[3] = -273.15 + 0.0002389486260454002 * load3.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1181};
  (data->localData[0]->realVars[213]/* Ts_load[3] variable */)  = -273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[263]/* load3.inlet.h_out variable */) );
  TRACE_POP
}
/*
equation index: 1182
type: SIMPLE_ASSIGN
s45.inlet.h_out = 4185.0 * s45.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1182};
  (data->localData[0]->realVars[500]/* s45.inlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[59]/* s45.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1183
type: SIMPLE_ASSIGN
s45.Q_ext[2] = 0.5 * s45.UA * (s45.T_ext - s45.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1183};
  (data->localData[0]->realVars[494]/* s45.Q_ext[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[613]/* s45.UA PARAM */) ) * ((data->simulationInfo->realParameter[611]/* s45.T_ext PARAM */)  - (data->localData[0]->realVars[62]/* s45.Twall[2] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1184
type: SIMPLE_ASSIGN
s45.Q_int[2] = 0.5 * s45.U_wm * s45.L * (s45.Ttilde[2] - s45.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1184};
  (data->localData[0]->realVars[496]/* s45.Q_int[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[614]/* s45.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[610]/* s45.L PARAM */) ) * ((data->localData[0]->realVars[60]/* s45.Ttilde[2] STATE(1) */)  - (data->localData[0]->realVars[62]/* s45.Twall[2] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1185
type: SIMPLE_ASSIGN
$DER.s45.Twall[2] = (s45.Q_int[2] + s45.Q_ext[2]) / (0.5 * s45.L * s45.rhomcm * s45.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1185};
  (data->localData[0]->realVars[137]/* der(s45.Twall[2]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[496]/* s45.Q_int[2] variable */)  + (data->localData[0]->realVars[494]/* s45.Q_ext[2] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[610]/* s45.L PARAM */) )) * ((data->simulationInfo->realParameter[625]/* s45.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[607]/* s45.Am PARAM */) ),"0.5 * s45.L * s45.rhomcm * s45.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1186
type: SIMPLE_ASSIGN
s45.Q_ext[1] = 0.5 * s45.UA * (s45.T_ext - s45.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1186};
  (data->localData[0]->realVars[493]/* s45.Q_ext[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[613]/* s45.UA PARAM */) ) * ((data->simulationInfo->realParameter[611]/* s45.T_ext PARAM */)  - (data->localData[0]->realVars[61]/* s45.Twall[1] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1187
type: SIMPLE_ASSIGN
s45.Q_int[1] = 0.5 * s45.U_wm * s45.L * (s45.Ttilde[1] - s45.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1187};
  (data->localData[0]->realVars[495]/* s45.Q_int[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[614]/* s45.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[610]/* s45.L PARAM */) ) * ((data->localData[0]->realVars[59]/* s45.Ttilde[1] STATE(1) */)  - (data->localData[0]->realVars[61]/* s45.Twall[1] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1188
type: SIMPLE_ASSIGN
$DER.s45.Twall[1] = (s45.Q_int[1] + s45.Q_ext[1]) / (0.5 * s45.L * s45.rhomcm * s45.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1188};
  (data->localData[0]->realVars[136]/* der(s45.Twall[1]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[495]/* s45.Q_int[1] variable */)  + (data->localData[0]->realVars[493]/* s45.Q_ext[1] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[610]/* s45.L PARAM */) )) * ((data->simulationInfo->realParameter[625]/* s45.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[607]/* s45.Am PARAM */) ),"0.5 * s45.L * s45.rhomcm * s45.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1189
type: SIMPLE_ASSIGN
r54.section_T[2] = -273.15 + r54.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1189};
  (data->localData[0]->realVars[373]/* r54.section_T[2] variable */)  = -273.15 + (data->localData[0]->realVars[20]/* r54.Ttilde[2] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1190
type: SIMPLE_ASSIGN
r54.section_T[1] = -273.15 + r54.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1190};
  (data->localData[0]->realVars[372]/* r54.section_T[1] variable */)  = -273.15 + (data->localData[0]->realVars[19]/* r54.Ttilde[1] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1191
type: SIMPLE_ASSIGN
r54.outlet.h_out = 4185.0 * r54.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1191};
  (data->localData[0]->realVars[371]/* r54.outlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[20]/* r54.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1192
type: SIMPLE_ASSIGN
r54.inlet.h_out = 4185.0 * r54.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1192};
  (data->localData[0]->realVars[370]/* r54.inlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[19]/* r54.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1193
type: SIMPLE_ASSIGN
r54.Q_ext[2] = 0.5 * r54.UA * (r54.T_ext - r54.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1193};
  (data->localData[0]->realVars[364]/* r54.Q_ext[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[399]/* r54.UA PARAM */) ) * ((data->simulationInfo->realParameter[397]/* r54.T_ext PARAM */)  - (data->localData[0]->realVars[22]/* r54.Twall[2] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1194
type: SIMPLE_ASSIGN
r54.Q_int[2] = 0.5 * r54.U_wm * r54.L * (r54.Ttilde[2] - r54.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1194};
  (data->localData[0]->realVars[366]/* r54.Q_int[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[400]/* r54.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[396]/* r54.L PARAM */) ) * ((data->localData[0]->realVars[20]/* r54.Ttilde[2] STATE(1) */)  - (data->localData[0]->realVars[22]/* r54.Twall[2] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1195
type: SIMPLE_ASSIGN
$DER.r54.Twall[2] = (r54.Q_int[2] + r54.Q_ext[2]) / (0.5 * r54.L * r54.rhomcm * r54.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1195};
  (data->localData[0]->realVars[97]/* der(r54.Twall[2]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[366]/* r54.Q_int[2] variable */)  + (data->localData[0]->realVars[364]/* r54.Q_ext[2] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[396]/* r54.L PARAM */) )) * ((data->simulationInfo->realParameter[411]/* r54.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[393]/* r54.Am PARAM */) ),"0.5 * r54.L * r54.rhomcm * r54.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1196
type: SIMPLE_ASSIGN
r54.Q_ext[1] = 0.5 * r54.UA * (r54.T_ext - r54.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1196};
  (data->localData[0]->realVars[363]/* r54.Q_ext[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[399]/* r54.UA PARAM */) ) * ((data->simulationInfo->realParameter[397]/* r54.T_ext PARAM */)  - (data->localData[0]->realVars[21]/* r54.Twall[1] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1197
type: SIMPLE_ASSIGN
r54.Q_int[1] = 0.5 * r54.U_wm * r54.L * (r54.Ttilde[1] - r54.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1197};
  (data->localData[0]->realVars[365]/* r54.Q_int[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[400]/* r54.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[396]/* r54.L PARAM */) ) * ((data->localData[0]->realVars[19]/* r54.Ttilde[1] STATE(1) */)  - (data->localData[0]->realVars[21]/* r54.Twall[1] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1198
type: SIMPLE_ASSIGN
$DER.r54.Twall[1] = (r54.Q_int[1] + r54.Q_ext[1]) / (0.5 * r54.L * r54.rhomcm * r54.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1198};
  (data->localData[0]->realVars[96]/* der(r54.Twall[1]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[365]/* r54.Q_int[1] variable */)  + (data->localData[0]->realVars[363]/* r54.Q_ext[1] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[396]/* r54.L PARAM */) )) * ((data->simulationInfo->realParameter[411]/* r54.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[393]/* r54.Am PARAM */) ),"0.5 * r54.L * r54.rhomcm * r54.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1199
type: SIMPLE_ASSIGN
s23.section_T[2] = -273.15 + s23.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1199};
  (data->localData[0]->realVars[477]/* s23.section_T[2] variable */)  = -273.15 + (data->localData[0]->realVars[52]/* s23.Ttilde[2] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1200
type: SIMPLE_ASSIGN
s23.section_T[1] = -273.15 + s23.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1200};
  (data->localData[0]->realVars[476]/* s23.section_T[1] variable */)  = -273.15 + (data->localData[0]->realVars[51]/* s23.Ttilde[1] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1201
type: SIMPLE_ASSIGN
s23.outlet.h_out = 4185.0 * s23.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1201};
  (data->localData[0]->realVars[475]/* s23.outlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[52]/* s23.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1202
type: SIMPLE_ASSIGN
s23.inlet.h_out = 4185.0 * s23.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1202};
  (data->localData[0]->realVars[473]/* s23.inlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[51]/* s23.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1203
type: SIMPLE_ASSIGN
s23.Q_ext[2] = 0.5 * s23.UA * (s23.T_ext - s23.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1203};
  (data->localData[0]->realVars[467]/* s23.Q_ext[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[571]/* s23.UA PARAM */) ) * ((data->simulationInfo->realParameter[569]/* s23.T_ext PARAM */)  - (data->localData[0]->realVars[54]/* s23.Twall[2] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1204
type: SIMPLE_ASSIGN
s23.Q_int[2] = 0.5 * s23.U_wm * s23.L * (s23.Ttilde[2] - s23.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1204};
  (data->localData[0]->realVars[469]/* s23.Q_int[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[572]/* s23.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[568]/* s23.L PARAM */) ) * ((data->localData[0]->realVars[52]/* s23.Ttilde[2] STATE(1) */)  - (data->localData[0]->realVars[54]/* s23.Twall[2] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1205
type: SIMPLE_ASSIGN
$DER.s23.Twall[2] = (s23.Q_int[2] + s23.Q_ext[2]) / (0.5 * s23.L * s23.rhomcm * s23.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1205};
  (data->localData[0]->realVars[129]/* der(s23.Twall[2]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[469]/* s23.Q_int[2] variable */)  + (data->localData[0]->realVars[467]/* s23.Q_ext[2] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[568]/* s23.L PARAM */) )) * ((data->simulationInfo->realParameter[583]/* s23.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[565]/* s23.Am PARAM */) ),"0.5 * s23.L * s23.rhomcm * s23.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1206
type: SIMPLE_ASSIGN
s23.Q_ext[1] = 0.5 * s23.UA * (s23.T_ext - s23.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1206};
  (data->localData[0]->realVars[466]/* s23.Q_ext[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[571]/* s23.UA PARAM */) ) * ((data->simulationInfo->realParameter[569]/* s23.T_ext PARAM */)  - (data->localData[0]->realVars[53]/* s23.Twall[1] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1207
type: SIMPLE_ASSIGN
s23.Q_int[1] = 0.5 * s23.U_wm * s23.L * (s23.Ttilde[1] - s23.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1207};
  (data->localData[0]->realVars[468]/* s23.Q_int[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[572]/* s23.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[568]/* s23.L PARAM */) ) * ((data->localData[0]->realVars[51]/* s23.Ttilde[1] STATE(1) */)  - (data->localData[0]->realVars[53]/* s23.Twall[1] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1208
type: SIMPLE_ASSIGN
$DER.s23.Twall[1] = (s23.Q_int[1] + s23.Q_ext[1]) / (0.5 * s23.L * s23.rhomcm * s23.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1208};
  (data->localData[0]->realVars[128]/* der(s23.Twall[1]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[468]/* s23.Q_int[1] variable */)  + (data->localData[0]->realVars[466]/* s23.Q_ext[1] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[568]/* s23.L PARAM */) )) * ((data->simulationInfo->realParameter[583]/* s23.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[565]/* s23.Am PARAM */) ),"0.5 * s23.L * s23.rhomcm * s23.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1209
type: SIMPLE_ASSIGN
r32.section_T[2] = -273.15 + r32.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1209};
  (data->localData[0]->realVars[348]/* r32.section_T[2] variable */)  = -273.15 + (data->localData[0]->realVars[12]/* r32.Ttilde[2] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1210
type: SIMPLE_ASSIGN
r32.section_T[1] = -273.15 + r32.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1210};
  (data->localData[0]->realVars[347]/* r32.section_T[1] variable */)  = -273.15 + (data->localData[0]->realVars[11]/* r32.Ttilde[1] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1211
type: SIMPLE_ASSIGN
r32.outlet.h_out = 4185.0 * r32.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1211};
  (data->localData[0]->realVars[346]/* r32.outlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[12]/* r32.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1212
type: SIMPLE_ASSIGN
r32.inlet.h_out = 4185.0 * r32.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1212};
  (data->localData[0]->realVars[344]/* r32.inlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[11]/* r32.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1213
type: SIMPLE_ASSIGN
r32.Q_ext[2] = 0.5 * r32.UA * (r32.T_ext - r32.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1213};
  (data->localData[0]->realVars[338]/* r32.Q_ext[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[357]/* r32.UA PARAM */) ) * ((data->simulationInfo->realParameter[355]/* r32.T_ext PARAM */)  - (data->localData[0]->realVars[14]/* r32.Twall[2] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1214
type: SIMPLE_ASSIGN
r32.Q_int[2] = 0.5 * r32.U_wm * r32.L * (r32.Ttilde[2] - r32.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1214};
  (data->localData[0]->realVars[340]/* r32.Q_int[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[358]/* r32.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[354]/* r32.L PARAM */) ) * ((data->localData[0]->realVars[12]/* r32.Ttilde[2] STATE(1) */)  - (data->localData[0]->realVars[14]/* r32.Twall[2] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1215
type: SIMPLE_ASSIGN
$DER.r32.Twall[2] = (r32.Q_int[2] + r32.Q_ext[2]) / (0.5 * r32.L * r32.rhomcm * r32.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1215};
  (data->localData[0]->realVars[89]/* der(r32.Twall[2]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[340]/* r32.Q_int[2] variable */)  + (data->localData[0]->realVars[338]/* r32.Q_ext[2] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[354]/* r32.L PARAM */) )) * ((data->simulationInfo->realParameter[369]/* r32.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[351]/* r32.Am PARAM */) ),"0.5 * r32.L * r32.rhomcm * r32.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1216
type: SIMPLE_ASSIGN
r32.Q_ext[1] = 0.5 * r32.UA * (r32.T_ext - r32.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1216};
  (data->localData[0]->realVars[337]/* r32.Q_ext[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[357]/* r32.UA PARAM */) ) * ((data->simulationInfo->realParameter[355]/* r32.T_ext PARAM */)  - (data->localData[0]->realVars[13]/* r32.Twall[1] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1217
type: SIMPLE_ASSIGN
r32.Q_int[1] = 0.5 * r32.U_wm * r32.L * (r32.Ttilde[1] - r32.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1217};
  (data->localData[0]->realVars[339]/* r32.Q_int[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[358]/* r32.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[354]/* r32.L PARAM */) ) * ((data->localData[0]->realVars[11]/* r32.Ttilde[1] STATE(1) */)  - (data->localData[0]->realVars[13]/* r32.Twall[1] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1218
type: SIMPLE_ASSIGN
$DER.r32.Twall[1] = (r32.Q_int[1] + r32.Q_ext[1]) / (0.5 * r32.L * r32.rhomcm * r32.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1218};
  (data->localData[0]->realVars[88]/* der(r32.Twall[1]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[339]/* r32.Q_int[1] variable */)  + (data->localData[0]->realVars[337]/* r32.Q_ext[1] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[354]/* r32.L PARAM */) )) * ((data->simulationInfo->realParameter[369]/* r32.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[351]/* r32.Am PARAM */) ),"0.5 * r32.L * r32.rhomcm * r32.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1219
type: SIMPLE_ASSIGN
r43.section_T[2] = -273.15 + r43.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1219};
  (data->localData[0]->realVars[361]/* r43.section_T[2] variable */)  = -273.15 + (data->localData[0]->realVars[16]/* r43.Ttilde[2] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1220
type: SIMPLE_ASSIGN
r43.section_T[1] = -273.15 + r43.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1220};
  (data->localData[0]->realVars[360]/* r43.section_T[1] variable */)  = -273.15 + (data->localData[0]->realVars[15]/* r43.Ttilde[1] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1221
type: SIMPLE_ASSIGN
r43.outlet.h_out = 4185.0 * r43.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1221};
  (data->localData[0]->realVars[359]/* r43.outlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[16]/* r43.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1222
type: SIMPLE_ASSIGN
r43.inlet.h_out = 4185.0 * r43.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1222};
  (data->localData[0]->realVars[357]/* r43.inlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[15]/* r43.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1223
type: SIMPLE_ASSIGN
r43.Q_ext[2] = 0.5 * r43.UA * (r43.T_ext - r43.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1223};
  (data->localData[0]->realVars[351]/* r43.Q_ext[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[378]/* r43.UA PARAM */) ) * ((data->simulationInfo->realParameter[376]/* r43.T_ext PARAM */)  - (data->localData[0]->realVars[18]/* r43.Twall[2] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1224
type: SIMPLE_ASSIGN
r43.Q_int[2] = 0.5 * r43.U_wm * r43.L * (r43.Ttilde[2] - r43.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1224};
  (data->localData[0]->realVars[353]/* r43.Q_int[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[379]/* r43.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[375]/* r43.L PARAM */) ) * ((data->localData[0]->realVars[16]/* r43.Ttilde[2] STATE(1) */)  - (data->localData[0]->realVars[18]/* r43.Twall[2] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1225
type: SIMPLE_ASSIGN
$DER.r43.Twall[2] = (r43.Q_int[2] + r43.Q_ext[2]) / (0.5 * r43.L * r43.rhomcm * r43.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1225};
  (data->localData[0]->realVars[93]/* der(r43.Twall[2]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[353]/* r43.Q_int[2] variable */)  + (data->localData[0]->realVars[351]/* r43.Q_ext[2] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[375]/* r43.L PARAM */) )) * ((data->simulationInfo->realParameter[390]/* r43.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[372]/* r43.Am PARAM */) ),"0.5 * r43.L * r43.rhomcm * r43.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1226
type: SIMPLE_ASSIGN
r43.Q_ext[1] = 0.5 * r43.UA * (r43.T_ext - r43.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1226};
  (data->localData[0]->realVars[350]/* r43.Q_ext[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[378]/* r43.UA PARAM */) ) * ((data->simulationInfo->realParameter[376]/* r43.T_ext PARAM */)  - (data->localData[0]->realVars[17]/* r43.Twall[1] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1227
type: SIMPLE_ASSIGN
r43.Q_int[1] = 0.5 * r43.U_wm * r43.L * (r43.Ttilde[1] - r43.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1227};
  (data->localData[0]->realVars[352]/* r43.Q_int[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[379]/* r43.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[375]/* r43.L PARAM */) ) * ((data->localData[0]->realVars[15]/* r43.Ttilde[1] STATE(1) */)  - (data->localData[0]->realVars[17]/* r43.Twall[1] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1228
type: SIMPLE_ASSIGN
$DER.r43.Twall[1] = (r43.Q_int[1] + r43.Q_ext[1]) / (0.5 * r43.L * r43.rhomcm * r43.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1228};
  (data->localData[0]->realVars[92]/* der(r43.Twall[1]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[352]/* r43.Q_int[1] variable */)  + (data->localData[0]->realVars[350]/* r43.Q_ext[1] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[375]/* r43.L PARAM */) )) * ((data->simulationInfo->realParameter[390]/* r43.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[372]/* r43.Am PARAM */) ),"0.5 * r43.L * r43.rhomcm * r43.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1229
type: SIMPLE_ASSIGN
s34.section_T[2] = -273.15 + s34.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1229};
  (data->localData[0]->realVars[491]/* s34.section_T[2] variable */)  = -273.15 + (data->localData[0]->realVars[56]/* s34.Ttilde[2] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1230
type: SIMPLE_ASSIGN
s34.section_T[1] = -273.15 + s34.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1230};
  (data->localData[0]->realVars[490]/* s34.section_T[1] variable */)  = -273.15 + (data->localData[0]->realVars[55]/* s34.Ttilde[1] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1231
type: SIMPLE_ASSIGN
s34.outlet.h_out = 4185.0 * s34.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1231};
  (data->localData[0]->realVars[488]/* s34.outlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[56]/* s34.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1232
type: SIMPLE_ASSIGN
s34.inlet.h_out = 4185.0 * s34.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1232};
  (data->localData[0]->realVars[486]/* s34.inlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[55]/* s34.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1233
type: SIMPLE_ASSIGN
s34.Q_ext[2] = 0.5 * s34.UA * (s34.T_ext - s34.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1233};
  (data->localData[0]->realVars[480]/* s34.Q_ext[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[592]/* s34.UA PARAM */) ) * ((data->simulationInfo->realParameter[590]/* s34.T_ext PARAM */)  - (data->localData[0]->realVars[58]/* s34.Twall[2] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1234
type: SIMPLE_ASSIGN
s34.Q_int[2] = 0.5 * s34.U_wm * s34.L * (s34.Ttilde[2] - s34.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1234};
  (data->localData[0]->realVars[482]/* s34.Q_int[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[593]/* s34.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[589]/* s34.L PARAM */) ) * ((data->localData[0]->realVars[56]/* s34.Ttilde[2] STATE(1) */)  - (data->localData[0]->realVars[58]/* s34.Twall[2] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1235
type: SIMPLE_ASSIGN
$DER.s34.Twall[2] = (s34.Q_int[2] + s34.Q_ext[2]) / (0.5 * s34.L * s34.rhomcm * s34.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1235};
  (data->localData[0]->realVars[133]/* der(s34.Twall[2]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[482]/* s34.Q_int[2] variable */)  + (data->localData[0]->realVars[480]/* s34.Q_ext[2] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[589]/* s34.L PARAM */) )) * ((data->simulationInfo->realParameter[604]/* s34.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[586]/* s34.Am PARAM */) ),"0.5 * s34.L * s34.rhomcm * s34.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1236
type: SIMPLE_ASSIGN
s34.Q_ext[1] = 0.5 * s34.UA * (s34.T_ext - s34.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1236};
  (data->localData[0]->realVars[479]/* s34.Q_ext[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[592]/* s34.UA PARAM */) ) * ((data->simulationInfo->realParameter[590]/* s34.T_ext PARAM */)  - (data->localData[0]->realVars[57]/* s34.Twall[1] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1237
type: SIMPLE_ASSIGN
s34.Q_int[1] = 0.5 * s34.U_wm * s34.L * (s34.Ttilde[1] - s34.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1237};
  (data->localData[0]->realVars[481]/* s34.Q_int[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[593]/* s34.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[589]/* s34.L PARAM */) ) * ((data->localData[0]->realVars[55]/* s34.Ttilde[1] STATE(1) */)  - (data->localData[0]->realVars[57]/* s34.Twall[1] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1238
type: SIMPLE_ASSIGN
$DER.s34.Twall[1] = (s34.Q_int[1] + s34.Q_ext[1]) / (0.5 * s34.L * s34.rhomcm * s34.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1238};
  (data->localData[0]->realVars[132]/* der(s34.Twall[1]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[481]/* s34.Q_int[1] variable */)  + (data->localData[0]->realVars[479]/* s34.Q_ext[1] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[589]/* s34.L PARAM */) )) * ((data->simulationInfo->realParameter[604]/* s34.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[586]/* s34.Am PARAM */) ),"0.5 * s34.L * s34.rhomcm * s34.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1239
type: SIMPLE_ASSIGN
r21.section_T[2] = -273.15 + r21.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1239};
  (data->localData[0]->realVars[335]/* r21.section_T[2] variable */)  = -273.15 + (data->localData[0]->realVars[8]/* r21.Ttilde[2] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1240
type: SIMPLE_ASSIGN
r21.section_T[1] = -273.15 + r21.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1240};
  (data->localData[0]->realVars[334]/* r21.section_T[1] variable */)  = -273.15 + (data->localData[0]->realVars[7]/* r21.Ttilde[1] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1241
type: SIMPLE_ASSIGN
r21.outlet.h_out = 4185.0 * r21.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1241};
  (data->localData[0]->realVars[333]/* r21.outlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[8]/* r21.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1242
type: SIMPLE_ASSIGN
r21.inlet.h_out = 4185.0 * r21.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1242};
  (data->localData[0]->realVars[331]/* r21.inlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[7]/* r21.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1243
type: SIMPLE_ASSIGN
r21.Q_ext[2] = 0.5 * r21.UA * (r21.T_ext - r21.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1243};
  (data->localData[0]->realVars[325]/* r21.Q_ext[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[336]/* r21.UA PARAM */) ) * ((data->simulationInfo->realParameter[334]/* r21.T_ext PARAM */)  - (data->localData[0]->realVars[10]/* r21.Twall[2] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1244
type: SIMPLE_ASSIGN
r21.Q_int[2] = 0.5 * r21.U_wm * r21.L * (r21.Ttilde[2] - r21.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1244};
  (data->localData[0]->realVars[327]/* r21.Q_int[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[337]/* r21.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[333]/* r21.L PARAM */) ) * ((data->localData[0]->realVars[8]/* r21.Ttilde[2] STATE(1) */)  - (data->localData[0]->realVars[10]/* r21.Twall[2] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1245
type: SIMPLE_ASSIGN
$DER.r21.Twall[2] = (r21.Q_int[2] + r21.Q_ext[2]) / (0.5 * r21.L * r21.rhomcm * r21.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1245};
  (data->localData[0]->realVars[85]/* der(r21.Twall[2]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[327]/* r21.Q_int[2] variable */)  + (data->localData[0]->realVars[325]/* r21.Q_ext[2] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[333]/* r21.L PARAM */) )) * ((data->simulationInfo->realParameter[348]/* r21.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[330]/* r21.Am PARAM */) ),"0.5 * r21.L * r21.rhomcm * r21.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1246
type: SIMPLE_ASSIGN
r21.Q_ext[1] = 0.5 * r21.UA * (r21.T_ext - r21.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1246};
  (data->localData[0]->realVars[324]/* r21.Q_ext[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[336]/* r21.UA PARAM */) ) * ((data->simulationInfo->realParameter[334]/* r21.T_ext PARAM */)  - (data->localData[0]->realVars[9]/* r21.Twall[1] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1247
type: SIMPLE_ASSIGN
r21.Q_int[1] = 0.5 * r21.U_wm * r21.L * (r21.Ttilde[1] - r21.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1247};
  (data->localData[0]->realVars[326]/* r21.Q_int[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[337]/* r21.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[333]/* r21.L PARAM */) ) * ((data->localData[0]->realVars[7]/* r21.Ttilde[1] STATE(1) */)  - (data->localData[0]->realVars[9]/* r21.Twall[1] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1248
type: SIMPLE_ASSIGN
$DER.r21.Twall[1] = (r21.Q_int[1] + r21.Q_ext[1]) / (0.5 * r21.L * r21.rhomcm * r21.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1248};
  (data->localData[0]->realVars[84]/* der(r21.Twall[1]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[326]/* r21.Q_int[1] variable */)  + (data->localData[0]->realVars[324]/* r21.Q_ext[1] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[333]/* r21.L PARAM */) )) * ((data->simulationInfo->realParameter[348]/* r21.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[330]/* r21.Am PARAM */) ),"0.5 * r21.L * r21.rhomcm * r21.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1249
type: SIMPLE_ASSIGN
r10.section_T[2] = -273.15 + r10.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1249};
  (data->localData[0]->realVars[322]/* r10.section_T[2] variable */)  = -273.15 + (data->localData[0]->realVars[4]/* r10.Ttilde[2] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1250
type: SIMPLE_ASSIGN
r10.section_T[1] = -273.15 + r10.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1250};
  (data->localData[0]->realVars[321]/* r10.section_T[1] variable */)  = -273.15 + (data->localData[0]->realVars[3]/* r10.Ttilde[1] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1251
type: SIMPLE_ASSIGN
r10.outlet.h_out = 4185.0 * r10.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1251};
  (data->localData[0]->realVars[320]/* r10.outlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[4]/* r10.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1252
type: SIMPLE_ASSIGN
r10.inlet.h_out = 4185.0 * r10.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1252};
  (data->localData[0]->realVars[319]/* r10.inlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[3]/* r10.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1253
type: SIMPLE_ASSIGN
r10.Q_ext[2] = 0.5 * r10.UA * (r10.T_ext - r10.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1253};
  (data->localData[0]->realVars[315]/* r10.Q_ext[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[314]/* r10.UA PARAM */) ) * ((data->simulationInfo->realParameter[312]/* r10.T_ext PARAM */)  - (data->localData[0]->realVars[6]/* r10.Twall[2] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1254
type: SIMPLE_ASSIGN
r10.Q_int[2] = 0.5 * r10.U_wm * r10.L * (r10.Ttilde[2] - r10.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1254};
  (data->localData[0]->realVars[317]/* r10.Q_int[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[315]/* r10.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[311]/* r10.L PARAM */) ) * ((data->localData[0]->realVars[4]/* r10.Ttilde[2] STATE(1) */)  - (data->localData[0]->realVars[6]/* r10.Twall[2] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1255
type: SIMPLE_ASSIGN
$DER.r10.Twall[2] = (r10.Q_int[2] + r10.Q_ext[2]) / (0.5 * r10.L * r10.rhomcm * r10.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1255};
  (data->localData[0]->realVars[81]/* der(r10.Twall[2]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[317]/* r10.Q_int[2] variable */)  + (data->localData[0]->realVars[315]/* r10.Q_ext[2] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[311]/* r10.L PARAM */) )) * ((data->simulationInfo->realParameter[327]/* r10.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[308]/* r10.Am PARAM */) ),"0.5 * r10.L * r10.rhomcm * r10.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1256
type: SIMPLE_ASSIGN
r10.Q_ext[1] = 0.5 * r10.UA * (r10.T_ext - r10.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1256};
  (data->localData[0]->realVars[314]/* r10.Q_ext[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[314]/* r10.UA PARAM */) ) * ((data->simulationInfo->realParameter[312]/* r10.T_ext PARAM */)  - (data->localData[0]->realVars[5]/* r10.Twall[1] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1257
type: SIMPLE_ASSIGN
r10.Q_int[1] = 0.5 * r10.U_wm * r10.L * (r10.Ttilde[1] - r10.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1257};
  (data->localData[0]->realVars[316]/* r10.Q_int[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[315]/* r10.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[311]/* r10.L PARAM */) ) * ((data->localData[0]->realVars[3]/* r10.Ttilde[1] STATE(1) */)  - (data->localData[0]->realVars[5]/* r10.Twall[1] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1258
type: SIMPLE_ASSIGN
$DER.r10.Twall[1] = (r10.Q_int[1] + r10.Q_ext[1]) / (0.5 * r10.L * r10.rhomcm * r10.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1258};
  (data->localData[0]->realVars[80]/* der(r10.Twall[1]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[316]/* r10.Q_int[1] variable */)  + (data->localData[0]->realVars[314]/* r10.Q_ext[1] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[311]/* r10.L PARAM */) )) * ((data->simulationInfo->realParameter[327]/* r10.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[308]/* r10.Am PARAM */) ),"0.5 * r10.L * r10.rhomcm * r10.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1259
type: SIMPLE_ASSIGN
s12.section_T[2] = -273.15 + s12.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1259};
  (data->localData[0]->realVars[451]/* s12.section_T[2] variable */)  = -273.15 + (data->localData[0]->realVars[44]/* s12.Ttilde[2] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1260
type: SIMPLE_ASSIGN
s12.section_T[1] = -273.15 + s12.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1260};
  (data->localData[0]->realVars[450]/* s12.section_T[1] variable */)  = -273.15 + (data->localData[0]->realVars[43]/* s12.Ttilde[1] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1261
type: SIMPLE_ASSIGN
s12.outlet.h_out = 4185.0 * s12.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1261};
  (data->localData[0]->realVars[449]/* s12.outlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[44]/* s12.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1262(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1263(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1264(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1265(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1266(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1267(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1268(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1269(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1270(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1271(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1272(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1273(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1274(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1275(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1276(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1277(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1278(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1279(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1280(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1281(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1282(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1283(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1284(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1285(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1286(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1287(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1288(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1289(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1290(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1291(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1292(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1293(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1294(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1295(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1296(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1297(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1298(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1299(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1300(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1301(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1302(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1303(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1304(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1305(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1306(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1307(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1308(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1309(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1310(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1311(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1312(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1313(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1314(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1315(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1316(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1317(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1318(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1319(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1320(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1321(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1322(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1323(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1324(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1325(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1326(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1327(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1328(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1329(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1330(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1331(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1332(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1333(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1334(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1335(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1336(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1337(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1338(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1339(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1340(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1341(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1342(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1343(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1344(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1345(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1346(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1347(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1348(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1349(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1350(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1351(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1352(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1353(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1354(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1355(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1356(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1357(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1358(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1359(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1360(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1361(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1362(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1363(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1364(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1365(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1366(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1367(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1368(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1369(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1370(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1371(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1372(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1373(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1374(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1375(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1376(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1377(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1378(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1379(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1380(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1381(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1382(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1383(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1384(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1385(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1386(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1387(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1388(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1389(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1390(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1391(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1392(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1393(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1400(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1399(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1398(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1397(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1396(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1395(DATA*, threadData_t*);
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1394(DATA*, threadData_t*);
/*
equation index: 1401
indexNonlinear: 2
type: NONLINEAR

vars: {mfr_load[4], mfr_load[2], mfr_load[1], r32.m_flow, s23.m_flow, mfr_load[5], mfr_load[3]}
eqns: {1262, 1263, 1264, 1265, 1266, 1267, 1268, 1269, 1270, 1271, 1272, 1273, 1274, 1275, 1276, 1277, 1278, 1279, 1280, 1281, 1282, 1283, 1284, 1285, 1286, 1287, 1288, 1289, 1290, 1291, 1292, 1293, 1294, 1295, 1296, 1297, 1298, 1299, 1300, 1301, 1302, 1303, 1304, 1305, 1306, 1307, 1308, 1309, 1310, 1311, 1312, 1313, 1314, 1315, 1316, 1317, 1318, 1319, 1320, 1321, 1322, 1323, 1324, 1325, 1326, 1327, 1328, 1329, 1330, 1331, 1332, 1333, 1334, 1335, 1336, 1337, 1338, 1339, 1340, 1341, 1342, 1343, 1344, 1345, 1346, 1347, 1348, 1349, 1350, 1351, 1352, 1353, 1354, 1355, 1356, 1357, 1358, 1359, 1360, 1361, 1362, 1363, 1364, 1365, 1366, 1367, 1368, 1369, 1370, 1371, 1372, 1373, 1374, 1375, 1376, 1377, 1378, 1379, 1380, 1381, 1382, 1383, 1384, 1385, 1386, 1387, 1388, 1389, 1390, 1391, 1392, 1393, 1400, 1399, 1398, 1397, 1396, 1395, 1394}
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1401};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1401 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = (data->localData[0]->realVars[306]/* mfr_load[4] variable */) ;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = (data->localData[0]->realVars[304]/* mfr_load[2] variable */) ;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = (data->localData[0]->realVars[303]/* mfr_load[1] variable */) ;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = (data->localData[0]->realVars[345]/* r32.m_flow variable */) ;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[4] = (data->localData[0]->realVars[474]/* s23.m_flow variable */) ;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[5] = (data->localData[0]->realVars[307]/* mfr_load[5] variable */) ;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[6] = (data->localData[0]->realVars[305]/* mfr_load[3] variable */) ;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1401};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1401 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[306]/* mfr_load[4] variable */)  = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  (data->localData[0]->realVars[304]/* mfr_load[2] variable */)  = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  (data->localData[0]->realVars[303]/* mfr_load[1] variable */)  = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  (data->localData[0]->realVars[345]/* r32.m_flow variable */)  = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  (data->localData[0]->realVars[474]/* s23.m_flow variable */)  = data->simulationInfo->nonlinearSystemData[2].nlsx[4];
  (data->localData[0]->realVars[307]/* mfr_load[5] variable */)  = data->simulationInfo->nonlinearSystemData[2].nlsx[5];
  (data->localData[0]->realVars[305]/* mfr_load[3] variable */)  = data->simulationInfo->nonlinearSystemData[2].nlsx[6];
  TRACE_POP
}
/*
equation index: 1406
type: LINEAR

<var>s_T_sens.inlet.h_out</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1406};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { (data->localData[1]->realVars[542]/* s_T_sens.inlet.h_out variable */)  };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 1406 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 2, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1406};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 1406 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[542]/* s_T_sens.inlet.h_out variable */)  = aux_x[0];

  TRACE_POP
}
/*
equation index: 1407
type: SIMPLE_ASSIGN
T_boiler_out = -273.15 + 0.0002389486260454002 * s_T_sens.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1407};
  (data->localData[0]->realVars[200]/* T_boiler_out variable */)  = -273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[542]/* s_T_sens.inlet.h_out variable */) );
  TRACE_POP
}
/*
equation index: 1408
type: SIMPLE_ASSIGN
boiler.boilerPIControl.addD.y = boiler.boilerPIControl.addD.k1 * T_boiler_ref + boiler.boilerPIControl.addD.k2 * T_boiler_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1408};
  (data->localData[0]->realVars[226]/* boiler.boilerPIControl.addD.y variable */)  = ((data->simulationInfo->realParameter[29]/* boiler.boilerPIControl.addD.k1 PARAM */) ) * ((data->localData[0]->realVars[201]/* T_boiler_ref variable */) ) + ((data->simulationInfo->realParameter[30]/* boiler.boilerPIControl.addD.k2 PARAM */) ) * ((data->localData[0]->realVars[200]/* T_boiler_out variable */) );
  TRACE_POP
}
/*
equation index: 1409
type: SIMPLE_ASSIGN
boiler.boilerPIControl.D.y = boiler.boilerPIControl.D.k * (boiler.boilerPIControl.addD.y - boiler.boilerPIControl.D.x) / boiler.boilerPIControl.D.T
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1409};
  (data->localData[0]->realVars[223]/* boiler.boilerPIControl.D.y variable */)  = ((data->simulationInfo->realParameter[17]/* boiler.boilerPIControl.D.k PARAM */) ) * (DIVISION_SIM((data->localData[0]->realVars[226]/* boiler.boilerPIControl.addD.y variable */)  - (data->localData[0]->realVars[1]/* boiler.boilerPIControl.D.x STATE(1) */) ,(data->simulationInfo->realParameter[16]/* boiler.boilerPIControl.D.T PARAM */) ,"boiler.boilerPIControl.D.T",equationIndexes));
  TRACE_POP
}
/*
equation index: 1410
type: SIMPLE_ASSIGN
$DER.boiler.boilerPIControl.D.x = (boiler.boilerPIControl.addD.y - boiler.boilerPIControl.D.x) / boiler.boilerPIControl.D.T
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1410};
  (data->localData[0]->realVars[76]/* der(boiler.boilerPIControl.D.x) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[226]/* boiler.boilerPIControl.addD.y variable */)  - (data->localData[0]->realVars[1]/* boiler.boilerPIControl.D.x STATE(1) */) ,(data->simulationInfo->realParameter[16]/* boiler.boilerPIControl.D.T PARAM */) ,"boiler.boilerPIControl.D.T",equationIndexes);
  TRACE_POP
}
/*
equation index: 1411
type: SIMPLE_ASSIGN
boiler.boilerPIControl.addP.y = boiler.boilerPIControl.addP.k1 * T_boiler_ref + boiler.boilerPIControl.addP.k2 * T_boiler_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1411};
  (data->localData[0]->realVars[228]/* boiler.boilerPIControl.addP.y variable */)  = ((data->simulationInfo->realParameter[37]/* boiler.boilerPIControl.addP.k1 PARAM */) ) * ((data->localData[0]->realVars[201]/* T_boiler_ref variable */) ) + ((data->simulationInfo->realParameter[38]/* boiler.boilerPIControl.addP.k2 PARAM */) ) * ((data->localData[0]->realVars[200]/* T_boiler_out variable */) );
  TRACE_POP
}
/*
equation index: 1412
type: SIMPLE_ASSIGN
boiler.boilerPIControl.P.y = boiler.boilerPIControl.P.k * boiler.boilerPIControl.addP.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1412};
  (data->localData[0]->realVars[225]/* boiler.boilerPIControl.P.y variable */)  = ((data->simulationInfo->realParameter[26]/* boiler.boilerPIControl.P.k PARAM */) ) * ((data->localData[0]->realVars[228]/* boiler.boilerPIControl.addP.y variable */) );
  TRACE_POP
}
/*
equation index: 1413
type: SIMPLE_ASSIGN
boiler.boilerPIControl.addPID.y = boiler.boilerPIControl.addPID.k1 * boiler.boilerPIControl.P.y + boiler.boilerPIControl.addPID.k2 * boiler.boilerPIControl.D.y + boiler.boilerPIControl.addPID.k3 * boiler.boilerPIControl.I.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1413};
  (data->localData[0]->realVars[229]/* boiler.boilerPIControl.addPID.y variable */)  = ((data->simulationInfo->realParameter[39]/* boiler.boilerPIControl.addPID.k1 PARAM */) ) * ((data->localData[0]->realVars[225]/* boiler.boilerPIControl.P.y variable */) ) + ((data->simulationInfo->realParameter[40]/* boiler.boilerPIControl.addPID.k2 PARAM */) ) * ((data->localData[0]->realVars[223]/* boiler.boilerPIControl.D.y variable */) ) + ((data->simulationInfo->realParameter[41]/* boiler.boilerPIControl.addPID.k3 PARAM */) ) * ((data->localData[0]->realVars[2]/* boiler.boilerPIControl.I.y STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1414
type: SIMPLE_ASSIGN
boiler.boilerPIControl.gainPID.y = boiler.boilerPIControl.gainPID.k * boiler.boilerPIControl.addPID.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1414};
  (data->localData[0]->realVars[232]/* boiler.boilerPIControl.gainPID.y variable */)  = ((data->simulationInfo->realParameter[44]/* boiler.boilerPIControl.gainPID.k PARAM */) ) * ((data->localData[0]->realVars[229]/* boiler.boilerPIControl.addPID.y variable */) );
  TRACE_POP
}
/*
equation index: 1415
type: SIMPLE_ASSIGN
boiler.boilerPIControl.limiter.u = boiler.boilerPIControl.addFF.k1 * boiler.boilerPIControl.gainPID.y + boiler.boilerPIControl.addFF.k2 * boiler.boilerPIControl.FFzero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1415};
  (data->localData[0]->realVars[234]/* boiler.boilerPIControl.limiter.u variable */)  = ((data->simulationInfo->realParameter[31]/* boiler.boilerPIControl.addFF.k1 PARAM */) ) * ((data->localData[0]->realVars[232]/* boiler.boilerPIControl.gainPID.y variable */) ) + ((data->simulationInfo->realParameter[32]/* boiler.boilerPIControl.addFF.k2 PARAM */) ) * ((data->simulationInfo->realParameter[20]/* boiler.boilerPIControl.FFzero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 1416
type: SIMPLE_ASSIGN
P_boiler_out = smooth(0, if boiler.boilerPIControl.limiter.u > boiler.boilerPIControl.limiter.uMax then boiler.boilerPIControl.limiter.uMax else if boiler.boilerPIControl.limiter.u < boiler.boilerPIControl.limiter.uMin then boiler.boilerPIControl.limiter.uMin else boiler.boilerPIControl.limiter.u)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1416};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater((data->localData[0]->realVars[234]/* boiler.boilerPIControl.limiter.u variable */) ,(data->simulationInfo->realParameter[48]/* boiler.boilerPIControl.limiter.uMax PARAM */) );
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = (data->simulationInfo->realParameter[48]/* boiler.boilerPIControl.limiter.uMax PARAM */) ;
  }
  else
  {
    tmp1 = Less((data->localData[0]->realVars[234]/* boiler.boilerPIControl.limiter.u variable */) ,(data->simulationInfo->realParameter[49]/* boiler.boilerPIControl.limiter.uMin PARAM */) );
    tmp3 = (tmp1?(data->simulationInfo->realParameter[49]/* boiler.boilerPIControl.limiter.uMin PARAM */) :(data->localData[0]->realVars[234]/* boiler.boilerPIControl.limiter.u variable */) );
  }
  (data->localData[0]->realVars[194]/* P_boiler_out variable */)  = tmp3;
  TRACE_POP
}
/*
equation index: 1417
type: SIMPLE_ASSIGN
boiler.boilerPIControl.addSat.y = boiler.boilerPIControl.addSat.k1 * P_boiler_out + boiler.boilerPIControl.addSat.k2 * boiler.boilerPIControl.limiter.u
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1417};
  (data->localData[0]->realVars[230]/* boiler.boilerPIControl.addSat.y variable */)  = ((data->simulationInfo->realParameter[42]/* boiler.boilerPIControl.addSat.k1 PARAM */) ) * ((data->localData[0]->realVars[194]/* P_boiler_out variable */) ) + ((data->simulationInfo->realParameter[43]/* boiler.boilerPIControl.addSat.k2 PARAM */) ) * ((data->localData[0]->realVars[234]/* boiler.boilerPIControl.limiter.u variable */) );
  TRACE_POP
}
/*
equation index: 1418
type: SIMPLE_ASSIGN
boiler.boilerPIControl.gainTrack.y = boiler.boilerPIControl.gainTrack.k * boiler.boilerPIControl.addSat.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1418};
  (data->localData[0]->realVars[233]/* boiler.boilerPIControl.gainTrack.y variable */)  = ((data->simulationInfo->realParameter[45]/* boiler.boilerPIControl.gainTrack.k PARAM */) ) * ((data->localData[0]->realVars[230]/* boiler.boilerPIControl.addSat.y variable */) );
  TRACE_POP
}
/*
equation index: 1419
type: SIMPLE_ASSIGN
boiler.boilerPIControl.addI.y = boiler.boilerPIControl.addI.k1 * T_boiler_ref + boiler.boilerPIControl.addI.k2 * T_boiler_out + boiler.boilerPIControl.addI.k3 * boiler.boilerPIControl.gainTrack.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1419};
  (data->localData[0]->realVars[227]/* boiler.boilerPIControl.addI.y variable */)  = ((data->simulationInfo->realParameter[34]/* boiler.boilerPIControl.addI.k1 PARAM */) ) * ((data->localData[0]->realVars[201]/* T_boiler_ref variable */) ) + ((data->simulationInfo->realParameter[35]/* boiler.boilerPIControl.addI.k2 PARAM */) ) * ((data->localData[0]->realVars[200]/* T_boiler_out variable */) ) + ((data->simulationInfo->realParameter[36]/* boiler.boilerPIControl.addI.k3 PARAM */) ) * ((data->localData[0]->realVars[233]/* boiler.boilerPIControl.gainTrack.y variable */) );
  TRACE_POP
}
/*
equation index: 1420
type: SIMPLE_ASSIGN
$DER.boiler.boilerPIControl.I.y = boiler.boilerPIControl.I.k * boiler.boilerPIControl.addI.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1420};
  (data->localData[0]->realVars[77]/* der(boiler.boilerPIControl.I.y) STATE_DER */)  = ((data->simulationInfo->realParameter[22]/* boiler.boilerPIControl.I.k PARAM */) ) * ((data->localData[0]->realVars[227]/* boiler.boilerPIControl.addI.y variable */) );
  TRACE_POP
}
/*
equation index: 1421
type: SIMPLE_ASSIGN
boiler.boilerPIControl.controlError = T_boiler_ref - T_boiler_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1421};
  (data->localData[0]->realVars[231]/* boiler.boilerPIControl.controlError variable */)  = (data->localData[0]->realVars[201]/* T_boiler_ref variable */)  - (data->localData[0]->realVars[200]/* T_boiler_out variable */) ;
  TRACE_POP
}
/*
equation index: 1422
type: SIMPLE_ASSIGN
T_mand.inlet.h_out = s_T_sens.inlet.h_out + 0.001015228426395939 * pumpDifferentialPressure.dp
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1422};
  (data->localData[0]->realVars[202]/* T_mand.inlet.h_out variable */)  = (data->localData[0]->realVars[542]/* s_T_sens.inlet.h_out variable */)  + (0.001015228426395939) * ((data->simulationInfo->realParameter[305]/* pumpDifferentialPressure.dp PARAM */) );
  TRACE_POP
}
/*
equation index: 1423
type: SIMPLE_ASSIGN
T_mandata = -273.15 + 0.0002389486260454002 * T_mand.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1423};
  (data->localData[0]->realVars[204]/* T_mandata variable */)  = -273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[202]/* T_mand.inlet.h_out variable */) );
  TRACE_POP
}
/*
equation index: 1424
type: SIMPLE_ASSIGN
s01.T[1] = 0.0002389486260454002 * T_mand.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1424};
  (data->localData[0]->realVars[433]/* s01.T[1] variable */)  = (0.0002389486260454002) * ((data->localData[0]->realVars[202]/* T_mand.inlet.h_out variable */) );
  TRACE_POP
}
/*
equation index: 1425
type: SIMPLE_ASSIGN
$cse61 = max(mfr_mandata, boiler.boilePowerUnit.b)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1425};
  (data->localData[0]->realVars[193]/* $cse61 variable */)  = fmax((data->localData[0]->realVars[308]/* mfr_mandata variable */) ,(data->simulationInfo->realParameter[6]/* boiler.boilePowerUnit.b PARAM */) );
  TRACE_POP
}
/*
equation index: 1426
type: SIMPLE_ASSIGN
s12.T[3] = if s12.m_flow > 0.0 then s12.Ttilde[2] else 0.0002389486260454002 * s23.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1426};
  modelica_boolean tmp4;
  relationhysteresis(data, &tmp4, (data->localData[0]->realVars[448]/* s12.m_flow variable */) , 0.0, 6, Greater, GreaterZC);
  (data->localData[0]->realVars[446]/* s12.T[3] variable */)  = (tmp4?(data->localData[0]->realVars[44]/* s12.Ttilde[2] STATE(1) */) :(0.0002389486260454002) * ((data->localData[0]->realVars[473]/* s23.inlet.h_out variable */) ));
  TRACE_POP
}
/*
equation index: 1427
type: SIMPLE_ASSIGN
s12.T[2] = if s12.m_flow > 0.0 then s12.Ttilde[1] else s12.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1427};
  modelica_boolean tmp5;
  relationhysteresis(data, &tmp5, (data->localData[0]->realVars[448]/* s12.m_flow variable */) , 0.0, 6, Greater, GreaterZC);
  (data->localData[0]->realVars[445]/* s12.T[2] variable */)  = (tmp5?(data->localData[0]->realVars[43]/* s12.Ttilde[1] STATE(1) */) :(data->localData[0]->realVars[44]/* s12.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1428
type: SIMPLE_ASSIGN
Ts_load[4] = -273.15 + 0.0002389486260454002 * load4.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1428};
  (data->localData[0]->realVars[214]/* Ts_load[4] variable */)  = -273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[276]/* load4.inlet.h_out variable */) );
  TRACE_POP
}
/*
equation index: 1429
type: SIMPLE_ASSIGN
load3.loadValveControl.controlError = load_ref.k - Tr_load[3]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1429};
  (data->localData[0]->realVars[270]/* load3.loadValveControl.controlError variable */)  = (data->simulationInfo->realParameter[298]/* load_ref.k PARAM */)  - (data->localData[0]->realVars[208]/* Tr_load[3] variable */) ;
  TRACE_POP
}
/*
equation index: 1430
type: SIMPLE_ASSIGN
load5.loadValveControl.controlError = load_ref.k - Tr_load[5]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1430};
  (data->localData[0]->realVars[297]/* load5.loadValveControl.controlError variable */)  = (data->simulationInfo->realParameter[298]/* load_ref.k PARAM */)  - (data->localData[0]->realVars[210]/* Tr_load[5] variable */) ;
  TRACE_POP
}
/*
equation index: 1431
type: SIMPLE_ASSIGN
r74.T[2] = if r74.m_flow > 0.0 then r74.Ttilde[1] else r74.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1431};
  modelica_boolean tmp6;
  relationhysteresis(data, &tmp6, (data->localData[0]->realVars[397]/* r74.m_flow variable */) , 0.0, 18, Greater, GreaterZC);
  (data->localData[0]->realVars[394]/* r74.T[2] variable */)  = (tmp6?(data->localData[0]->realVars[27]/* r74.Ttilde[1] STATE(1) */) :(data->localData[0]->realVars[28]/* r74.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1432
type: SIMPLE_ASSIGN
s78.T[3] = if mfr_load[5] > 0.0 then s78.Ttilde[2] else 0.0002389486260454002 * load5.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1432};
  modelica_boolean tmp7;
  relationhysteresis(data, &tmp7, (data->localData[0]->realVars[307]/* mfr_load[5] variable */) , 0.0, 2, Greater, GreaterZC);
  (data->localData[0]->realVars[537]/* s78.T[3] variable */)  = (tmp7?(data->localData[0]->realVars[72]/* s78.Ttilde[2] STATE(1) */) :(0.0002389486260454002) * ((data->localData[0]->realVars[290]/* load5.inlet.h_out variable */) ));
  TRACE_POP
}
/*
equation index: 1433
type: SIMPLE_ASSIGN
s78.T[2] = if mfr_load[5] > 0.0 then s78.Ttilde[1] else s78.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1433};
  modelica_boolean tmp8;
  relationhysteresis(data, &tmp8, (data->localData[0]->realVars[307]/* mfr_load[5] variable */) , 0.0, 2, Greater, GreaterZC);
  (data->localData[0]->realVars[536]/* s78.T[2] variable */)  = (tmp8?(data->localData[0]->realVars[71]/* s78.Ttilde[1] STATE(1) */) :(data->localData[0]->realVars[72]/* s78.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1434
type: SIMPLE_ASSIGN
$DER.s78.Ttilde[2] = (4185.0 * mfr_load[5] * (s78.T[2] - s78.T[3]) - s78.Q_int[2]) / (4122225.0 * s78.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1434};
  (data->localData[0]->realVars[147]/* der(s78.Ttilde[2]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[307]/* mfr_load[5] variable */) ) * ((data->localData[0]->realVars[536]/* s78.T[2] variable */)  - (data->localData[0]->realVars[537]/* s78.T[3] variable */) )) - (data->localData[0]->realVars[534]/* s78.Q_int[2] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[678]/* s78.V PARAM */) ),"4122225.0 * s78.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1435
type: SIMPLE_ASSIGN
r87.T[2] = if mfr_load[5] > 0.0 then r87.Ttilde[1] else r87.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1435};
  modelica_boolean tmp9;
  relationhysteresis(data, &tmp9, (data->localData[0]->realVars[307]/* mfr_load[5] variable */) , 0.0, 2, Greater, GreaterZC);
  (data->localData[0]->realVars[421]/* r87.T[2] variable */)  = (tmp9?(data->localData[0]->realVars[35]/* r87.Ttilde[1] STATE(1) */) :(data->localData[0]->realVars[36]/* r87.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1436
type: SIMPLE_ASSIGN
r87.T[1] = if mfr_load[5] > 0.0 then 0.0002389486260454002 * load5.outlet.h_out else r87.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1436};
  modelica_boolean tmp10;
  relationhysteresis(data, &tmp10, (data->localData[0]->realVars[307]/* mfr_load[5] variable */) , 0.0, 2, Greater, GreaterZC);
  (data->localData[0]->realVars[420]/* r87.T[1] variable */)  = (tmp10?(0.0002389486260454002) * ((data->localData[0]->realVars[301]/* load5.outlet.h_out variable */) ):(data->localData[0]->realVars[35]/* r87.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1437
type: SIMPLE_ASSIGN
$DER.r87.Ttilde[1] = (4185.0 * mfr_load[5] * (r87.T[1] - r87.T[2]) - r87.Q_int[1]) / (4122225.0 * r87.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1437};
  (data->localData[0]->realVars[110]/* der(r87.Ttilde[1]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[307]/* mfr_load[5] variable */) ) * ((data->localData[0]->realVars[420]/* r87.T[1] variable */)  - (data->localData[0]->realVars[421]/* r87.T[2] variable */) )) - (data->localData[0]->realVars[418]/* r87.Q_int[1] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[485]/* r87.V PARAM */) ),"4122225.0 * r87.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1438
type: SIMPLE_ASSIGN
s47.T[3] = if s47.m_flow > 0.0 then s47.Ttilde[2] else 0.0002389486260454002 * s67.outlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1438};
  modelica_boolean tmp11;
  relationhysteresis(data, &tmp11, (data->localData[0]->realVars[512]/* s47.m_flow variable */) , 0.0, 9, Greater, GreaterZC);
  (data->localData[0]->realVars[510]/* s47.T[3] variable */)  = (tmp11?(data->localData[0]->realVars[64]/* s47.Ttilde[2] STATE(1) */) :(0.0002389486260454002) * ((data->localData[0]->realVars[527]/* s67.outlet.h_out variable */) ));
  TRACE_POP
}
/*
equation index: 1439
type: SIMPLE_ASSIGN
s47.T[2] = if s47.m_flow > 0.0 then s47.Ttilde[1] else s47.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1439};
  modelica_boolean tmp12;
  relationhysteresis(data, &tmp12, (data->localData[0]->realVars[512]/* s47.m_flow variable */) , 0.0, 9, Greater, GreaterZC);
  (data->localData[0]->realVars[509]/* s47.T[2] variable */)  = (tmp12?(data->localData[0]->realVars[63]/* s47.Ttilde[1] STATE(1) */) :(data->localData[0]->realVars[64]/* s47.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1440
type: SIMPLE_ASSIGN
s47.T[1] = if s47.m_flow > 0.0 then 0.0002389486260454002 * s34.outlet.h_out else s47.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1440};
  modelica_boolean tmp13;
  relationhysteresis(data, &tmp13, (data->localData[0]->realVars[512]/* s47.m_flow variable */) , 0.0, 9, Greater, GreaterZC);
  (data->localData[0]->realVars[508]/* s47.T[1] variable */)  = (tmp13?(0.0002389486260454002) * ((data->localData[0]->realVars[488]/* s34.outlet.h_out variable */) ):(data->localData[0]->realVars[63]/* s47.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1441
type: SIMPLE_ASSIGN
$DER.s47.Ttilde[2] = (4185.0 * s47.m_flow * (s47.T[2] - s47.T[3]) - s47.Q_int[2]) / (4122225.0 * s47.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1441};
  (data->localData[0]->realVars[139]/* der(s47.Ttilde[2]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[512]/* s47.m_flow variable */) ) * ((data->localData[0]->realVars[509]/* s47.T[2] variable */)  - (data->localData[0]->realVars[510]/* s47.T[3] variable */) )) - (data->localData[0]->realVars[507]/* s47.Q_int[2] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[636]/* s47.V PARAM */) ),"4122225.0 * s47.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1442
type: SIMPLE_ASSIGN
$DER.s47.Ttilde[1] = (4185.0 * s47.m_flow * (s47.T[1] - s47.T[2]) - s47.Q_int[1]) / (4122225.0 * s47.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1442};
  (data->localData[0]->realVars[138]/* der(s47.Ttilde[1]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[512]/* s47.m_flow variable */) ) * ((data->localData[0]->realVars[508]/* s47.T[1] variable */)  - (data->localData[0]->realVars[509]/* s47.T[2] variable */) )) - (data->localData[0]->realVars[506]/* s47.Q_int[1] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[636]/* s47.V PARAM */) ),"4122225.0 * s47.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1443
type: SIMPLE_ASSIGN
Ts_load[2] = -273.15 + 0.0002389486260454002 * load2.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1443};
  (data->localData[0]->realVars[212]/* Ts_load[2] variable */)  = -273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[249]/* load2.inlet.h_out variable */) );
  TRACE_POP
}
/*
equation index: 1444
type: SIMPLE_ASSIGN
s34.T[3] = if s34.m_flow > 0.0 then s34.Ttilde[2] else 0.0002389486260454002 * s47.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1444};
  modelica_boolean tmp14;
  relationhysteresis(data, &tmp14, (data->localData[0]->realVars[487]/* s34.m_flow variable */) , 0.0, 16, Greater, GreaterZC);
  (data->localData[0]->realVars[485]/* s34.T[3] variable */)  = (tmp14?(data->localData[0]->realVars[56]/* s34.Ttilde[2] STATE(1) */) :(0.0002389486260454002) * ((data->localData[0]->realVars[511]/* s47.inlet.h_out variable */) ));
  TRACE_POP
}
/*
equation index: 1445
type: SIMPLE_ASSIGN
s34.T[2] = if s34.m_flow > 0.0 then s34.Ttilde[1] else s34.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1445};
  modelica_boolean tmp15;
  relationhysteresis(data, &tmp15, (data->localData[0]->realVars[487]/* s34.m_flow variable */) , 0.0, 16, Greater, GreaterZC);
  (data->localData[0]->realVars[484]/* s34.T[2] variable */)  = (tmp15?(data->localData[0]->realVars[55]/* s34.Ttilde[1] STATE(1) */) :(data->localData[0]->realVars[56]/* s34.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1446
type: SIMPLE_ASSIGN
s34.T[1] = if s34.m_flow > 0.0 then 0.0002389486260454002 * s23.outlet.h_out else s34.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1446};
  modelica_boolean tmp16;
  relationhysteresis(data, &tmp16, (data->localData[0]->realVars[487]/* s34.m_flow variable */) , 0.0, 16, Greater, GreaterZC);
  (data->localData[0]->realVars[483]/* s34.T[1] variable */)  = (tmp16?(0.0002389486260454002) * ((data->localData[0]->realVars[475]/* s23.outlet.h_out variable */) ):(data->localData[0]->realVars[55]/* s34.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1447
type: SIMPLE_ASSIGN
$DER.s34.Ttilde[2] = (4185.0 * s34.m_flow * (s34.T[2] - s34.T[3]) - s34.Q_int[2]) / (4122225.0 * s34.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1447};
  (data->localData[0]->realVars[131]/* der(s34.Ttilde[2]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[487]/* s34.m_flow variable */) ) * ((data->localData[0]->realVars[484]/* s34.T[2] variable */)  - (data->localData[0]->realVars[485]/* s34.T[3] variable */) )) - (data->localData[0]->realVars[482]/* s34.Q_int[2] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[594]/* s34.V PARAM */) ),"4122225.0 * s34.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1448
type: SIMPLE_ASSIGN
$DER.s34.Ttilde[1] = (4185.0 * s34.m_flow * (s34.T[1] - s34.T[2]) - s34.Q_int[1]) / (4122225.0 * s34.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1448};
  (data->localData[0]->realVars[130]/* der(s34.Ttilde[1]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[487]/* s34.m_flow variable */) ) * ((data->localData[0]->realVars[483]/* s34.T[1] variable */)  - (data->localData[0]->realVars[484]/* s34.T[2] variable */) )) - (data->localData[0]->realVars[481]/* s34.Q_int[1] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[594]/* s34.V PARAM */) ),"4122225.0 * s34.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1449
type: SIMPLE_ASSIGN
r43.T[2] = if r43.m_flow > 0.0 then r43.Ttilde[1] else r43.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1449};
  modelica_boolean tmp17;
  relationhysteresis(data, &tmp17, (data->localData[0]->realVars[358]/* r43.m_flow variable */) , 0.0, 10, Greater, GreaterZC);
  (data->localData[0]->realVars[355]/* r43.T[2] variable */)  = (tmp17?(data->localData[0]->realVars[15]/* r43.Ttilde[1] STATE(1) */) :(data->localData[0]->realVars[16]/* r43.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1450
type: SIMPLE_ASSIGN
s45.T[3] = if mfr_load[3] > 0.0 then s45.Ttilde[2] else 0.0002389486260454002 * load3.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1450};
  modelica_boolean tmp18;
  relationhysteresis(data, &tmp18, (data->localData[0]->realVars[305]/* mfr_load[3] variable */) , 0.0, 3, Greater, GreaterZC);
  (data->localData[0]->realVars[499]/* s45.T[3] variable */)  = (tmp18?(data->localData[0]->realVars[60]/* s45.Ttilde[2] STATE(1) */) :(0.0002389486260454002) * ((data->localData[0]->realVars[263]/* load3.inlet.h_out variable */) ));
  TRACE_POP
}
/*
equation index: 1451
type: SIMPLE_ASSIGN
s45.T[2] = if mfr_load[3] > 0.0 then s45.Ttilde[1] else s45.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1451};
  modelica_boolean tmp19;
  relationhysteresis(data, &tmp19, (data->localData[0]->realVars[305]/* mfr_load[3] variable */) , 0.0, 3, Greater, GreaterZC);
  (data->localData[0]->realVars[498]/* s45.T[2] variable */)  = (tmp19?(data->localData[0]->realVars[59]/* s45.Ttilde[1] STATE(1) */) :(data->localData[0]->realVars[60]/* s45.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1452
type: SIMPLE_ASSIGN
$DER.s45.Ttilde[2] = (4185.0 * mfr_load[3] * (s45.T[2] - s45.T[3]) - s45.Q_int[2]) / (4122225.0 * s45.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1452};
  (data->localData[0]->realVars[135]/* der(s45.Ttilde[2]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[305]/* mfr_load[3] variable */) ) * ((data->localData[0]->realVars[498]/* s45.T[2] variable */)  - (data->localData[0]->realVars[499]/* s45.T[3] variable */) )) - (data->localData[0]->realVars[496]/* s45.Q_int[2] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[615]/* s45.V PARAM */) ),"4122225.0 * s45.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1453
type: SIMPLE_ASSIGN
r54.T[2] = if mfr_load[3] > 0.0 then r54.Ttilde[1] else r54.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1453};
  modelica_boolean tmp20;
  relationhysteresis(data, &tmp20, (data->localData[0]->realVars[305]/* mfr_load[3] variable */) , 0.0, 3, Greater, GreaterZC);
  (data->localData[0]->realVars[368]/* r54.T[2] variable */)  = (tmp20?(data->localData[0]->realVars[19]/* r54.Ttilde[1] STATE(1) */) :(data->localData[0]->realVars[20]/* r54.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1454
type: SIMPLE_ASSIGN
r54.T[1] = if mfr_load[3] > 0.0 then 0.0002389486260454002 * load3.outlet.h_out else r54.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1454};
  modelica_boolean tmp21;
  relationhysteresis(data, &tmp21, (data->localData[0]->realVars[305]/* mfr_load[3] variable */) , 0.0, 3, Greater, GreaterZC);
  (data->localData[0]->realVars[367]/* r54.T[1] variable */)  = (tmp21?(0.0002389486260454002) * ((data->localData[0]->realVars[274]/* load3.outlet.h_out variable */) ):(data->localData[0]->realVars[19]/* r54.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1455
type: SIMPLE_ASSIGN
$DER.r54.Ttilde[1] = (4185.0 * mfr_load[3] * (r54.T[1] - r54.T[2]) - r54.Q_int[1]) / (4122225.0 * r54.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1455};
  (data->localData[0]->realVars[94]/* der(r54.Ttilde[1]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[305]/* mfr_load[3] variable */) ) * ((data->localData[0]->realVars[367]/* r54.T[1] variable */)  - (data->localData[0]->realVars[368]/* r54.T[2] variable */) )) - (data->localData[0]->realVars[365]/* r54.Q_int[1] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[401]/* r54.V PARAM */) ),"4122225.0 * r54.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1456
type: SIMPLE_ASSIGN
s45.T[1] = if mfr_load[3] > 0.0 then 0.0002389486260454002 * (max(-s47.m_flow, 1e-07) * s47.inlet.h_out + max(s34.m_flow, 1e-07) * s34.outlet.h_out) / (max(-s47.m_flow, 1e-07) + max(s34.m_flow, 1e-07)) else s45.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1456};
  modelica_boolean tmp22;
  relationhysteresis(data, &tmp22, (data->localData[0]->realVars[305]/* mfr_load[3] variable */) , 0.0, 3, Greater, GreaterZC);
  (data->localData[0]->realVars[497]/* s45.T[1] variable */)  = (tmp22?(0.0002389486260454002) * (DIVISION_SIM((fmax((-(data->localData[0]->realVars[512]/* s47.m_flow variable */) ),1e-07)) * ((data->localData[0]->realVars[511]/* s47.inlet.h_out variable */) ) + (fmax((data->localData[0]->realVars[487]/* s34.m_flow variable */) ,1e-07)) * ((data->localData[0]->realVars[488]/* s34.outlet.h_out variable */) ),fmax((-(data->localData[0]->realVars[512]/* s47.m_flow variable */) ),1e-07) + fmax((data->localData[0]->realVars[487]/* s34.m_flow variable */) ,1e-07),"max(-s47.m_flow, 1e-07) + max(s34.m_flow, 1e-07)",equationIndexes)):(data->localData[0]->realVars[59]/* s45.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1457
type: SIMPLE_ASSIGN
$DER.s45.Ttilde[1] = (4185.0 * mfr_load[3] * (s45.T[1] - s45.T[2]) - s45.Q_int[1]) / (4122225.0 * s45.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1457};
  (data->localData[0]->realVars[134]/* der(s45.Ttilde[1]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[305]/* mfr_load[3] variable */) ) * ((data->localData[0]->realVars[497]/* s45.T[1] variable */)  - (data->localData[0]->realVars[498]/* s45.T[2] variable */) )) - (data->localData[0]->realVars[495]/* s45.Q_int[1] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[615]/* s45.V PARAM */) ),"4122225.0 * s45.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1458
type: SIMPLE_ASSIGN
r74.T[3] = if r74.m_flow > 0.0 then r74.Ttilde[2] else 0.0002389486260454002 * (mfr_load[3] * r54.outlet.h_out + max(-r43.m_flow, 1e-07) * r43.inlet.h_out) / (mfr_load[3] + max(-r43.m_flow, 1e-07))
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1458};
  modelica_boolean tmp23;
  relationhysteresis(data, &tmp23, (data->localData[0]->realVars[397]/* r74.m_flow variable */) , 0.0, 18, Greater, GreaterZC);
  (data->localData[0]->realVars[395]/* r74.T[3] variable */)  = (tmp23?(data->localData[0]->realVars[28]/* r74.Ttilde[2] STATE(1) */) :(0.0002389486260454002) * (DIVISION_SIM(((data->localData[0]->realVars[305]/* mfr_load[3] variable */) ) * ((data->localData[0]->realVars[371]/* r54.outlet.h_out variable */) ) + (fmax((-(data->localData[0]->realVars[358]/* r43.m_flow variable */) ),1e-07)) * ((data->localData[0]->realVars[357]/* r43.inlet.h_out variable */) ),(data->localData[0]->realVars[305]/* mfr_load[3] variable */)  + fmax((-(data->localData[0]->realVars[358]/* r43.m_flow variable */) ),1e-07),"mfr_load[3] + max(-r43.m_flow, 1e-07)",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1459
type: SIMPLE_ASSIGN
$DER.r74.Ttilde[2] = (4185.0 * r74.m_flow * (r74.T[2] - r74.T[3]) - r74.Q_int[2]) / (4122225.0 * r74.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1459};
  (data->localData[0]->realVars[103]/* der(r74.Ttilde[2]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[397]/* r74.m_flow variable */) ) * ((data->localData[0]->realVars[394]/* r74.T[2] variable */)  - (data->localData[0]->realVars[395]/* r74.T[3] variable */) )) - (data->localData[0]->realVars[392]/* r74.Q_int[2] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[443]/* r74.V PARAM */) ),"4122225.0 * r74.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1460
type: SIMPLE_ASSIGN
r54.T[3] = if mfr_load[3] > 0.0 then r54.Ttilde[2] else 0.0002389486260454002 * (max(-r43.m_flow, 1e-07) * r43.inlet.h_out + max(r74.m_flow, 1e-07) * r74.outlet.h_out) / (max(-r43.m_flow, 1e-07) + max(r74.m_flow, 1e-07))
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1460};
  modelica_boolean tmp24;
  relationhysteresis(data, &tmp24, (data->localData[0]->realVars[305]/* mfr_load[3] variable */) , 0.0, 3, Greater, GreaterZC);
  (data->localData[0]->realVars[369]/* r54.T[3] variable */)  = (tmp24?(data->localData[0]->realVars[20]/* r54.Ttilde[2] STATE(1) */) :(0.0002389486260454002) * (DIVISION_SIM((fmax((-(data->localData[0]->realVars[358]/* r43.m_flow variable */) ),1e-07)) * ((data->localData[0]->realVars[357]/* r43.inlet.h_out variable */) ) + (fmax((data->localData[0]->realVars[397]/* r74.m_flow variable */) ,1e-07)) * ((data->localData[0]->realVars[398]/* r74.outlet.h_out variable */) ),fmax((-(data->localData[0]->realVars[358]/* r43.m_flow variable */) ),1e-07) + fmax((data->localData[0]->realVars[397]/* r74.m_flow variable */) ,1e-07),"max(-r43.m_flow, 1e-07) + max(r74.m_flow, 1e-07)",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1461
type: SIMPLE_ASSIGN
$DER.r54.Ttilde[2] = (4185.0 * mfr_load[3] * (r54.T[2] - r54.T[3]) - r54.Q_int[2]) / (4122225.0 * r54.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1461};
  (data->localData[0]->realVars[95]/* der(r54.Ttilde[2]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[305]/* mfr_load[3] variable */) ) * ((data->localData[0]->realVars[368]/* r54.T[2] variable */)  - (data->localData[0]->realVars[369]/* r54.T[3] variable */) )) - (data->localData[0]->realVars[366]/* r54.Q_int[2] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[401]/* r54.V PARAM */) ),"4122225.0 * r54.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1462
type: SIMPLE_ASSIGN
r43.T[1] = if r43.m_flow > 0.0 then 0.0002389486260454002 * (mfr_load[3] * r54.outlet.h_out + max(r74.m_flow, 1e-07) * r74.outlet.h_out) / (mfr_load[3] + max(r74.m_flow, 1e-07)) else r43.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1462};
  modelica_boolean tmp25;
  relationhysteresis(data, &tmp25, (data->localData[0]->realVars[358]/* r43.m_flow variable */) , 0.0, 10, Greater, GreaterZC);
  (data->localData[0]->realVars[354]/* r43.T[1] variable */)  = (tmp25?(0.0002389486260454002) * (DIVISION_SIM(((data->localData[0]->realVars[305]/* mfr_load[3] variable */) ) * ((data->localData[0]->realVars[371]/* r54.outlet.h_out variable */) ) + (fmax((data->localData[0]->realVars[397]/* r74.m_flow variable */) ,1e-07)) * ((data->localData[0]->realVars[398]/* r74.outlet.h_out variable */) ),(data->localData[0]->realVars[305]/* mfr_load[3] variable */)  + fmax((data->localData[0]->realVars[397]/* r74.m_flow variable */) ,1e-07),"mfr_load[3] + max(r74.m_flow, 1e-07)",equationIndexes)):(data->localData[0]->realVars[15]/* r43.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1463
type: SIMPLE_ASSIGN
$DER.r43.Ttilde[1] = (4185.0 * r43.m_flow * (r43.T[1] - r43.T[2]) - r43.Q_int[1]) / (4122225.0 * r43.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1463};
  (data->localData[0]->realVars[90]/* der(r43.Ttilde[1]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[358]/* r43.m_flow variable */) ) * ((data->localData[0]->realVars[354]/* r43.T[1] variable */)  - (data->localData[0]->realVars[355]/* r43.T[2] variable */) )) - (data->localData[0]->realVars[352]/* r43.Q_int[1] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[380]/* r43.V PARAM */) ),"4122225.0 * r43.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1464
type: SIMPLE_ASSIGN
load2.loadValveControl.controlError = load_ref.k - Tr_load[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1464};
  (data->localData[0]->realVars[256]/* load2.loadValveControl.controlError variable */)  = (data->simulationInfo->realParameter[298]/* load_ref.k PARAM */)  - (data->localData[0]->realVars[207]/* Tr_load[2] variable */) ;
  TRACE_POP
}
/*
equation index: 1465
type: SIMPLE_ASSIGN
r43.T[3] = if r43.m_flow > 0.0 then r43.Ttilde[2] else 0.0002389486260454002 * (mfr_load[2] * load2.outlet.h_out + $cse43 * r32.inlet.h_out) / (mfr_load[2] + $cse43)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1465};
  modelica_boolean tmp26;
  relationhysteresis(data, &tmp26, (data->localData[0]->realVars[358]/* r43.m_flow variable */) , 0.0, 10, Greater, GreaterZC);
  (data->localData[0]->realVars[356]/* r43.T[3] variable */)  = (tmp26?(data->localData[0]->realVars[16]/* r43.Ttilde[2] STATE(1) */) :(0.0002389486260454002) * (DIVISION_SIM(((data->localData[0]->realVars[304]/* mfr_load[2] variable */) ) * ((data->localData[0]->realVars[261]/* load2.outlet.h_out variable */) ) + ((data->localData[0]->realVars[175]/* $cse43 variable */) ) * ((data->localData[0]->realVars[344]/* r32.inlet.h_out variable */) ),(data->localData[0]->realVars[304]/* mfr_load[2] variable */)  + (data->localData[0]->realVars[175]/* $cse43 variable */) ,"mfr_load[2] + $cse43",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1466
type: SIMPLE_ASSIGN
$DER.r43.Ttilde[2] = (4185.0 * r43.m_flow * (r43.T[2] - r43.T[3]) - r43.Q_int[2]) / (4122225.0 * r43.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1466};
  (data->localData[0]->realVars[91]/* der(r43.Ttilde[2]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[358]/* r43.m_flow variable */) ) * ((data->localData[0]->realVars[355]/* r43.T[2] variable */)  - (data->localData[0]->realVars[356]/* r43.T[3] variable */) )) - (data->localData[0]->realVars[353]/* r43.Q_int[2] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[380]/* r43.V PARAM */) ),"4122225.0 * r43.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1467
type: SIMPLE_ASSIGN
r32.T[2] = if r32.m_flow > 0.0 then r32.Ttilde[1] else r32.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1467};
  modelica_boolean tmp27;
  relationhysteresis(data, &tmp27, (data->localData[0]->realVars[345]/* r32.m_flow variable */) , 0.0, 11, Greater, GreaterZC);
  (data->localData[0]->realVars[342]/* r32.T[2] variable */)  = (tmp27?(data->localData[0]->realVars[11]/* r32.Ttilde[1] STATE(1) */) :(data->localData[0]->realVars[12]/* r32.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1468
type: SIMPLE_ASSIGN
r32.T[1] = if r32.m_flow > 0.0 then 0.0002389486260454002 * (mfr_load[2] * load2.outlet.h_out + $cse44 * r43.outlet.h_out) / (mfr_load[2] + $cse44) else r32.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1468};
  modelica_boolean tmp28;
  relationhysteresis(data, &tmp28, (data->localData[0]->realVars[345]/* r32.m_flow variable */) , 0.0, 11, Greater, GreaterZC);
  (data->localData[0]->realVars[341]/* r32.T[1] variable */)  = (tmp28?(0.0002389486260454002) * (DIVISION_SIM(((data->localData[0]->realVars[304]/* mfr_load[2] variable */) ) * ((data->localData[0]->realVars[261]/* load2.outlet.h_out variable */) ) + ((data->localData[0]->realVars[176]/* $cse44 variable */) ) * ((data->localData[0]->realVars[359]/* r43.outlet.h_out variable */) ),(data->localData[0]->realVars[304]/* mfr_load[2] variable */)  + (data->localData[0]->realVars[176]/* $cse44 variable */) ,"mfr_load[2] + $cse44",equationIndexes)):(data->localData[0]->realVars[11]/* r32.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1469
type: SIMPLE_ASSIGN
$DER.r32.Ttilde[1] = (4185.0 * r32.m_flow * (r32.T[1] - r32.T[2]) - r32.Q_int[1]) / (4122225.0 * r32.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1469};
  (data->localData[0]->realVars[86]/* der(r32.Ttilde[1]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[345]/* r32.m_flow variable */) ) * ((data->localData[0]->realVars[341]/* r32.T[1] variable */)  - (data->localData[0]->realVars[342]/* r32.T[2] variable */) )) - (data->localData[0]->realVars[339]/* r32.Q_int[1] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[359]/* r32.V PARAM */) ),"4122225.0 * r32.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1470
type: SIMPLE_ASSIGN
r21.T[3] = if r21.m_flow > 0.0 then r21.Ttilde[2] else 0.0002389486260454002 * r61.outlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1470};
  modelica_boolean tmp29;
  relationhysteresis(data, &tmp29, (data->localData[0]->realVars[332]/* r21.m_flow variable */) , 0.0, 14, Greater, GreaterZC);
  (data->localData[0]->realVars[330]/* r21.T[3] variable */)  = (tmp29?(data->localData[0]->realVars[8]/* r21.Ttilde[2] STATE(1) */) :(0.0002389486260454002) * ((data->localData[0]->realVars[384]/* r61.outlet.h_out variable */) ));
  TRACE_POP
}
/*
equation index: 1471
type: SIMPLE_ASSIGN
r21.T[2] = if r21.m_flow > 0.0 then r21.Ttilde[1] else r21.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1471};
  modelica_boolean tmp30;
  relationhysteresis(data, &tmp30, (data->localData[0]->realVars[332]/* r21.m_flow variable */) , 0.0, 14, Greater, GreaterZC);
  (data->localData[0]->realVars[329]/* r21.T[2] variable */)  = (tmp30?(data->localData[0]->realVars[7]/* r21.Ttilde[1] STATE(1) */) :(data->localData[0]->realVars[8]/* r21.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1472
type: SIMPLE_ASSIGN
$DER.r21.Ttilde[2] = (4185.0 * r21.m_flow * (r21.T[2] - r21.T[3]) - r21.Q_int[2]) / (4122225.0 * r21.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1472};
  (data->localData[0]->realVars[83]/* der(r21.Ttilde[2]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[332]/* r21.m_flow variable */) ) * ((data->localData[0]->realVars[329]/* r21.T[2] variable */)  - (data->localData[0]->realVars[330]/* r21.T[3] variable */) )) - (data->localData[0]->realVars[327]/* r21.Q_int[2] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[338]/* r21.V PARAM */) ),"4122225.0 * r21.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1473
type: SIMPLE_ASSIGN
$cse49 = max(r21.m_flow, 1e-07)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1473};
  (data->localData[0]->realVars[181]/* $cse49 variable */)  = fmax((data->localData[0]->realVars[332]/* r21.m_flow variable */) ,1e-07);
  TRACE_POP
}
/*
equation index: 1474
type: SIMPLE_ASSIGN
r61.T[3] = if r61.m_flow > 0.0 then r61.Ttilde[2] else 0.0002389486260454002 * r21.outlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1474};
  modelica_boolean tmp31;
  relationhysteresis(data, &tmp31, (data->localData[0]->realVars[383]/* r61.m_flow variable */) , 0.0, 12, Greater, GreaterZC);
  (data->localData[0]->realVars[381]/* r61.T[3] variable */)  = (tmp31?(data->localData[0]->realVars[24]/* r61.Ttilde[2] STATE(1) */) :(0.0002389486260454002) * ((data->localData[0]->realVars[333]/* r21.outlet.h_out variable */) ));
  TRACE_POP
}
/*
equation index: 1475
type: SIMPLE_ASSIGN
r61.T[2] = if r61.m_flow > 0.0 then r61.Ttilde[1] else r61.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1475};
  modelica_boolean tmp32;
  relationhysteresis(data, &tmp32, (data->localData[0]->realVars[383]/* r61.m_flow variable */) , 0.0, 12, Greater, GreaterZC);
  (data->localData[0]->realVars[380]/* r61.T[2] variable */)  = (tmp32?(data->localData[0]->realVars[23]/* r61.Ttilde[1] STATE(1) */) :(data->localData[0]->realVars[24]/* r61.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1476
type: SIMPLE_ASSIGN
$DER.r61.Ttilde[2] = (4185.0 * r61.m_flow * (r61.T[2] - r61.T[3]) - r61.Q_int[2]) / (4122225.0 * r61.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1476};
  (data->localData[0]->realVars[99]/* der(r61.Ttilde[2]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[383]/* r61.m_flow variable */) ) * ((data->localData[0]->realVars[380]/* r61.T[2] variable */)  - (data->localData[0]->realVars[381]/* r61.T[3] variable */) )) - (data->localData[0]->realVars[378]/* r61.Q_int[2] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[422]/* r61.V PARAM */) ),"4122225.0 * r61.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1477
type: SIMPLE_ASSIGN
$cse50 = max(r61.m_flow, 1e-07)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1477};
  (data->localData[0]->realVars[182]/* $cse50 variable */)  = fmax((data->localData[0]->realVars[383]/* r61.m_flow variable */) ,1e-07);
  TRACE_POP
}
/*
equation index: 1478
type: SIMPLE_ASSIGN
r10.T[1] = 0.0002389486260454002 * ($cse49 * r21.outlet.h_out + $cse50 * r61.outlet.h_out) / ($cse49 + $cse50)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1478};
  (data->localData[0]->realVars[318]/* r10.T[1] variable */)  = (0.0002389486260454002) * (DIVISION_SIM(((data->localData[0]->realVars[181]/* $cse49 variable */) ) * ((data->localData[0]->realVars[333]/* r21.outlet.h_out variable */) ) + ((data->localData[0]->realVars[182]/* $cse50 variable */) ) * ((data->localData[0]->realVars[384]/* r61.outlet.h_out variable */) ),(data->localData[0]->realVars[181]/* $cse49 variable */)  + (data->localData[0]->realVars[182]/* $cse50 variable */) ,"$cse49 + $cse50",equationIndexes));
  TRACE_POP
}
/*
equation index: 1479
type: SIMPLE_ASSIGN
T_ritorno = if mfr_ritorno > 0.0 then -273.15 + 0.0002389486260454002 * r10.outlet.h_out else -273.15 + 0.0002389486260454002 * pressureAccumulator.fluidPort.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1479};
  modelica_boolean tmp33;
  relationhysteresis(data, &tmp33, (data->localData[0]->realVars[310]/* mfr_ritorno variable */) , 0.0, 13, Greater, GreaterZC);
  (data->localData[0]->realVars[205]/* T_ritorno variable */)  = (tmp33?-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[320]/* r10.outlet.h_out variable */) ):-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[311]/* pressureAccumulator.fluidPort.h_out variable */) ));
  TRACE_POP
}
/*
equation index: 1480
type: SIMPLE_ASSIGN
$DER.r10.Ttilde[2] = (4185.0 * mfr_ritorno * (r10.Ttilde[1] - r10.Ttilde[2]) - r10.Q_int[2]) / (4122225.0 * r10.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1480};
  (data->localData[0]->realVars[79]/* der(r10.Ttilde[2]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[310]/* mfr_ritorno variable */) ) * ((data->localData[0]->realVars[3]/* r10.Ttilde[1] STATE(1) */)  - (data->localData[0]->realVars[4]/* r10.Ttilde[2] STATE(1) */) )) - (data->localData[0]->realVars[317]/* r10.Q_int[2] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[316]/* r10.V PARAM */) ),"4122225.0 * r10.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1481
type: SIMPLE_ASSIGN
$DER.r10.Ttilde[1] = (4185.0 * mfr_ritorno * (r10.T[1] - r10.Ttilde[1]) - r10.Q_int[1]) / (4122225.0 * r10.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1481};
  (data->localData[0]->realVars[78]/* der(r10.Ttilde[1]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[310]/* mfr_ritorno variable */) ) * ((data->localData[0]->realVars[318]/* r10.T[1] variable */)  - (data->localData[0]->realVars[3]/* r10.Ttilde[1] STATE(1) */) )) - (data->localData[0]->realVars[316]/* r10.Q_int[1] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[316]/* r10.V PARAM */) ),"4122225.0 * r10.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1482
type: SIMPLE_ASSIGN
pressureAccumulator.fluidPort.m_flow = mfr_ritorno - mfr_mandata
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1482};
  (data->localData[0]->realVars[312]/* pressureAccumulator.fluidPort.m_flow variable */)  = (data->localData[0]->realVars[310]/* mfr_ritorno variable */)  - (data->localData[0]->realVars[308]/* mfr_mandata variable */) ;
  TRACE_POP
}
/*
equation index: 1483
type: SIMPLE_ASSIGN
$cse60 = max(-pressureAccumulator.fluidPort.m_flow, 1e-07)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1483};
  (data->localData[0]->realVars[192]/* $cse60 variable */)  = fmax((-(data->localData[0]->realVars[312]/* pressureAccumulator.fluidPort.m_flow variable */) ),1e-07);
  TRACE_POP
}
/*
equation index: 1484
type: SIMPLE_ASSIGN
boiler.boilePowerUnit.outlet.h_out = ($cse60 * pressureAccumulator.fluidPort.h_out + mfr_ritorno * r10.outlet.h_out) / ($cse60 + mfr_ritorno) + P_boiler_out / $cse61
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1484};
  (data->localData[0]->realVars[217]/* boiler.boilePowerUnit.outlet.h_out variable */)  = DIVISION_SIM(((data->localData[0]->realVars[192]/* $cse60 variable */) ) * ((data->localData[0]->realVars[311]/* pressureAccumulator.fluidPort.h_out variable */) ) + ((data->localData[0]->realVars[310]/* mfr_ritorno variable */) ) * ((data->localData[0]->realVars[320]/* r10.outlet.h_out variable */) ),(data->localData[0]->realVars[192]/* $cse60 variable */)  + (data->localData[0]->realVars[310]/* mfr_ritorno variable */) ,"$cse60 + mfr_ritorno",equationIndexes) + DIVISION_SIM((data->localData[0]->realVars[194]/* P_boiler_out variable */) ,(data->localData[0]->realVars[193]/* $cse61 variable */) ,"$cse61",equationIndexes);
  TRACE_POP
}
/*
equation index: 1485
type: SIMPLE_ASSIGN
boiler.boilerInsideVolume.T[1] = if not boiler.boilerInsideVolume.allowFlowReversal or mfr_mandata > 0.0 then 0.0002389486260454002 * boiler.boilePowerUnit.outlet.h_out else boiler.boilerInsideVolume.Ttilde
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1485};
  modelica_boolean tmp34;
  relationhysteresis(data, &tmp34, (data->localData[0]->realVars[308]/* mfr_mandata variable */) , 0.0, 17, Greater, GreaterZC);
  (data->localData[0]->realVars[219]/* boiler.boilerInsideVolume.T[1] variable */)  = (((!(data->simulationInfo->booleanParameter[0]/* boiler.boilerInsideVolume.allowFlowReversal PARAM */) ) || tmp34)?(0.0002389486260454002) * ((data->localData[0]->realVars[217]/* boiler.boilePowerUnit.outlet.h_out variable */) ):(data->localData[0]->realVars[0]/* boiler.boilerInsideVolume.Ttilde STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1486
type: SIMPLE_ASSIGN
boiler.boilerInsideVolume.inlet.h_out = 4185.0 * boiler.boilerInsideVolume.T[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1486};
  (data->localData[0]->realVars[221]/* boiler.boilerInsideVolume.inlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[219]/* boiler.boilerInsideVolume.T[1] variable */) );
  TRACE_POP
}
/*
equation index: 1487
type: SIMPLE_ASSIGN
r76.T[2] = if r76.m_flow > 0.0 then r76.Ttilde[1] else r76.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1487};
  modelica_boolean tmp35;
  relationhysteresis(data, &tmp35, (data->localData[0]->realVars[411]/* r76.m_flow variable */) , 0.0, 7, Greater, GreaterZC);
  (data->localData[0]->realVars[408]/* r76.T[2] variable */)  = (tmp35?(data->localData[0]->realVars[31]/* r76.Ttilde[1] STATE(1) */) :(data->localData[0]->realVars[32]/* r76.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1488
type: SIMPLE_ASSIGN
r74.T[1] = if r74.m_flow > 0.0 then 0.0002389486260454002 * (max(-r76.m_flow, 1e-07) * r76.inlet.h_out + mfr_load[5] * r87.outlet.h_out) / (max(-r76.m_flow, 1e-07) + mfr_load[5]) else r74.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1488};
  modelica_boolean tmp36;
  relationhysteresis(data, &tmp36, (data->localData[0]->realVars[397]/* r74.m_flow variable */) , 0.0, 18, Greater, GreaterZC);
  (data->localData[0]->realVars[393]/* r74.T[1] variable */)  = (tmp36?(0.0002389486260454002) * (DIVISION_SIM((fmax((-(data->localData[0]->realVars[411]/* r76.m_flow variable */) ),1e-07)) * ((data->localData[0]->realVars[410]/* r76.inlet.h_out variable */) ) + ((data->localData[0]->realVars[307]/* mfr_load[5] variable */) ) * ((data->localData[0]->realVars[424]/* r87.outlet.h_out variable */) ),fmax((-(data->localData[0]->realVars[411]/* r76.m_flow variable */) ),1e-07) + (data->localData[0]->realVars[307]/* mfr_load[5] variable */) ,"max(-r76.m_flow, 1e-07) + mfr_load[5]",equationIndexes)):(data->localData[0]->realVars[27]/* r74.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1489
type: SIMPLE_ASSIGN
$DER.r74.Ttilde[1] = (4185.0 * r74.m_flow * (r74.T[1] - r74.T[2]) - r74.Q_int[1]) / (4122225.0 * r74.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1489};
  (data->localData[0]->realVars[102]/* der(r74.Ttilde[1]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[397]/* r74.m_flow variable */) ) * ((data->localData[0]->realVars[393]/* r74.T[1] variable */)  - (data->localData[0]->realVars[394]/* r74.T[2] variable */) )) - (data->localData[0]->realVars[391]/* r74.Q_int[1] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[443]/* r74.V PARAM */) ),"4122225.0 * r74.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1490
type: SIMPLE_ASSIGN
r87.T[3] = if mfr_load[5] > 0.0 then r87.Ttilde[2] else 0.0002389486260454002 * (max(-r76.m_flow, 1e-07) * r76.inlet.h_out + max(-r74.m_flow, 1e-07) * r74.inlet.h_out) / (max(-r76.m_flow, 1e-07) + max(-r74.m_flow, 1e-07))
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1490};
  modelica_boolean tmp37;
  relationhysteresis(data, &tmp37, (data->localData[0]->realVars[307]/* mfr_load[5] variable */) , 0.0, 2, Greater, GreaterZC);
  (data->localData[0]->realVars[422]/* r87.T[3] variable */)  = (tmp37?(data->localData[0]->realVars[36]/* r87.Ttilde[2] STATE(1) */) :(0.0002389486260454002) * (DIVISION_SIM((fmax((-(data->localData[0]->realVars[411]/* r76.m_flow variable */) ),1e-07)) * ((data->localData[0]->realVars[410]/* r76.inlet.h_out variable */) ) + (fmax((-(data->localData[0]->realVars[397]/* r74.m_flow variable */) ),1e-07)) * ((data->localData[0]->realVars[396]/* r74.inlet.h_out variable */) ),fmax((-(data->localData[0]->realVars[411]/* r76.m_flow variable */) ),1e-07) + fmax((-(data->localData[0]->realVars[397]/* r74.m_flow variable */) ),1e-07),"max(-r76.m_flow, 1e-07) + max(-r74.m_flow, 1e-07)",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1491
type: SIMPLE_ASSIGN
$DER.r87.Ttilde[2] = (4185.0 * mfr_load[5] * (r87.T[2] - r87.T[3]) - r87.Q_int[2]) / (4122225.0 * r87.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1491};
  (data->localData[0]->realVars[111]/* der(r87.Ttilde[2]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[307]/* mfr_load[5] variable */) ) * ((data->localData[0]->realVars[421]/* r87.T[2] variable */)  - (data->localData[0]->realVars[422]/* r87.T[3] variable */) )) - (data->localData[0]->realVars[419]/* r87.Q_int[2] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[485]/* r87.V PARAM */) ),"4122225.0 * r87.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1492
type: SIMPLE_ASSIGN
r76.T[1] = if r76.m_flow > 0.0 then 0.0002389486260454002 * (max(-r74.m_flow, 1e-07) * r74.inlet.h_out + mfr_load[5] * r87.outlet.h_out) / (max(-r74.m_flow, 1e-07) + mfr_load[5]) else r76.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1492};
  modelica_boolean tmp38;
  relationhysteresis(data, &tmp38, (data->localData[0]->realVars[411]/* r76.m_flow variable */) , 0.0, 7, Greater, GreaterZC);
  (data->localData[0]->realVars[407]/* r76.T[1] variable */)  = (tmp38?(0.0002389486260454002) * (DIVISION_SIM((fmax((-(data->localData[0]->realVars[397]/* r74.m_flow variable */) ),1e-07)) * ((data->localData[0]->realVars[396]/* r74.inlet.h_out variable */) ) + ((data->localData[0]->realVars[307]/* mfr_load[5] variable */) ) * ((data->localData[0]->realVars[424]/* r87.outlet.h_out variable */) ),fmax((-(data->localData[0]->realVars[397]/* r74.m_flow variable */) ),1e-07) + (data->localData[0]->realVars[307]/* mfr_load[5] variable */) ,"max(-r74.m_flow, 1e-07) + mfr_load[5]",equationIndexes)):(data->localData[0]->realVars[31]/* r76.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1493
type: SIMPLE_ASSIGN
$DER.r76.Ttilde[1] = (4185.0 * r76.m_flow * (r76.T[1] - r76.T[2]) - r76.Q_int[1]) / (4122225.0 * r76.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1493};
  (data->localData[0]->realVars[106]/* der(r76.Ttilde[1]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[411]/* r76.m_flow variable */) ) * ((data->localData[0]->realVars[407]/* r76.T[1] variable */)  - (data->localData[0]->realVars[408]/* r76.T[2] variable */) )) - (data->localData[0]->realVars[405]/* r76.Q_int[1] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[464]/* r76.V PARAM */) ),"4122225.0 * r76.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1494
type: SIMPLE_ASSIGN
load4.loadValveControl.controlError = load_ref.k - Tr_load[4]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1494};
  (data->localData[0]->realVars[283]/* load4.loadValveControl.controlError variable */)  = (data->simulationInfo->realParameter[298]/* load_ref.k PARAM */)  - (data->localData[0]->realVars[209]/* Tr_load[4] variable */) ;
  TRACE_POP
}
/*
equation index: 1495
type: SIMPLE_ASSIGN
r61.T[1] = if r61.m_flow > 0.0 then 0.0002389486260454002 * (mfr_load[4] * load4.outlet.h_out + $cse29 * r76.outlet.h_out) / (mfr_load[4] + $cse29) else r61.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1495};
  modelica_boolean tmp39;
  relationhysteresis(data, &tmp39, (data->localData[0]->realVars[383]/* r61.m_flow variable */) , 0.0, 12, Greater, GreaterZC);
  (data->localData[0]->realVars[379]/* r61.T[1] variable */)  = (tmp39?(0.0002389486260454002) * (DIVISION_SIM(((data->localData[0]->realVars[306]/* mfr_load[4] variable */) ) * ((data->localData[0]->realVars[288]/* load4.outlet.h_out variable */) ) + ((data->localData[0]->realVars[161]/* $cse29 variable */) ) * ((data->localData[0]->realVars[412]/* r76.outlet.h_out variable */) ),(data->localData[0]->realVars[306]/* mfr_load[4] variable */)  + (data->localData[0]->realVars[161]/* $cse29 variable */) ,"mfr_load[4] + $cse29",equationIndexes)):(data->localData[0]->realVars[23]/* r61.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1496
type: SIMPLE_ASSIGN
$DER.r61.Ttilde[1] = (4185.0 * r61.m_flow * (r61.T[1] - r61.T[2]) - r61.Q_int[1]) / (4122225.0 * r61.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1496};
  (data->localData[0]->realVars[98]/* der(r61.Ttilde[1]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[383]/* r61.m_flow variable */) ) * ((data->localData[0]->realVars[379]/* r61.T[1] variable */)  - (data->localData[0]->realVars[380]/* r61.T[2] variable */) )) - (data->localData[0]->realVars[377]/* r61.Q_int[1] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[422]/* r61.V PARAM */) ),"4122225.0 * r61.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1497
type: SIMPLE_ASSIGN
r76.T[3] = if r76.m_flow > 0.0 then r76.Ttilde[2] else 0.0002389486260454002 * (mfr_load[4] * load4.outlet.h_out + $cse28 * r61.inlet.h_out) / (mfr_load[4] + $cse28)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1497};
  modelica_boolean tmp40;
  relationhysteresis(data, &tmp40, (data->localData[0]->realVars[411]/* r76.m_flow variable */) , 0.0, 7, Greater, GreaterZC);
  (data->localData[0]->realVars[409]/* r76.T[3] variable */)  = (tmp40?(data->localData[0]->realVars[32]/* r76.Ttilde[2] STATE(1) */) :(0.0002389486260454002) * (DIVISION_SIM(((data->localData[0]->realVars[306]/* mfr_load[4] variable */) ) * ((data->localData[0]->realVars[288]/* load4.outlet.h_out variable */) ) + ((data->localData[0]->realVars[160]/* $cse28 variable */) ) * ((data->localData[0]->realVars[382]/* r61.inlet.h_out variable */) ),(data->localData[0]->realVars[306]/* mfr_load[4] variable */)  + (data->localData[0]->realVars[160]/* $cse28 variable */) ,"mfr_load[4] + $cse28",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1498
type: SIMPLE_ASSIGN
$DER.r76.Ttilde[2] = (4185.0 * r76.m_flow * (r76.T[2] - r76.T[3]) - r76.Q_int[2]) / (4122225.0 * r76.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1498};
  (data->localData[0]->realVars[107]/* der(r76.Ttilde[2]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[411]/* r76.m_flow variable */) ) * ((data->localData[0]->realVars[408]/* r76.T[2] variable */)  - (data->localData[0]->realVars[409]/* r76.T[3] variable */) )) - (data->localData[0]->realVars[406]/* r76.Q_int[2] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[464]/* r76.V PARAM */) ),"4122225.0 * r76.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1499
type: SIMPLE_ASSIGN
s67.T[3] = if s67.m_flow > 0.0 then s67.Ttilde[2] else 0.0002389486260454002 * s47.outlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1499};
  modelica_boolean tmp41;
  relationhysteresis(data, &tmp41, (data->localData[0]->realVars[526]/* s67.m_flow variable */) , 0.0, 8, Greater, GreaterZC);
  (data->localData[0]->realVars[524]/* s67.T[3] variable */)  = (tmp41?(data->localData[0]->realVars[68]/* s67.Ttilde[2] STATE(1) */) :(0.0002389486260454002) * ((data->localData[0]->realVars[513]/* s47.outlet.h_out variable */) ));
  TRACE_POP
}
/*
equation index: 1500
type: SIMPLE_ASSIGN
s67.T[2] = if s67.m_flow > 0.0 then s67.Ttilde[1] else s67.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1500};
  modelica_boolean tmp42;
  relationhysteresis(data, &tmp42, (data->localData[0]->realVars[526]/* s67.m_flow variable */) , 0.0, 8, Greater, GreaterZC);
  (data->localData[0]->realVars[523]/* s67.T[2] variable */)  = (tmp42?(data->localData[0]->realVars[67]/* s67.Ttilde[1] STATE(1) */) :(data->localData[0]->realVars[68]/* s67.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1501
type: SIMPLE_ASSIGN
s67.T[1] = if s67.m_flow > 0.0 then 0.0002389486260454002 * s16.outlet.h_out else s67.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1501};
  modelica_boolean tmp43;
  relationhysteresis(data, &tmp43, (data->localData[0]->realVars[526]/* s67.m_flow variable */) , 0.0, 8, Greater, GreaterZC);
  (data->localData[0]->realVars[522]/* s67.T[1] variable */)  = (tmp43?(0.0002389486260454002) * ((data->localData[0]->realVars[462]/* s16.outlet.h_out variable */) ):(data->localData[0]->realVars[67]/* s67.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1502
type: SIMPLE_ASSIGN
$DER.s67.Ttilde[2] = (4185.0 * s67.m_flow * (s67.T[2] - s67.T[3]) - s67.Q_int[2]) / (4122225.0 * s67.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1502};
  (data->localData[0]->realVars[143]/* der(s67.Ttilde[2]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[526]/* s67.m_flow variable */) ) * ((data->localData[0]->realVars[523]/* s67.T[2] variable */)  - (data->localData[0]->realVars[524]/* s67.T[3] variable */) )) - (data->localData[0]->realVars[521]/* s67.Q_int[2] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[657]/* s67.V PARAM */) ),"4122225.0 * s67.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1503
type: SIMPLE_ASSIGN
$DER.s67.Ttilde[1] = (4185.0 * s67.m_flow * (s67.T[1] - s67.T[2]) - s67.Q_int[1]) / (4122225.0 * s67.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1503};
  (data->localData[0]->realVars[142]/* der(s67.Ttilde[1]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[526]/* s67.m_flow variable */) ) * ((data->localData[0]->realVars[522]/* s67.T[1] variable */)  - (data->localData[0]->realVars[523]/* s67.T[2] variable */) )) - (data->localData[0]->realVars[520]/* s67.Q_int[1] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[657]/* s67.V PARAM */) ),"4122225.0 * s67.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1504
type: SIMPLE_ASSIGN
s78.T[1] = if mfr_load[5] > 0.0 then 0.0002389486260454002 * (max(s67.m_flow, 1e-07) * s67.outlet.h_out + max(s47.m_flow, 1e-07) * s47.outlet.h_out) / (max(s67.m_flow, 1e-07) + max(s47.m_flow, 1e-07)) else s78.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1504};
  modelica_boolean tmp44;
  relationhysteresis(data, &tmp44, (data->localData[0]->realVars[307]/* mfr_load[5] variable */) , 0.0, 2, Greater, GreaterZC);
  (data->localData[0]->realVars[535]/* s78.T[1] variable */)  = (tmp44?(0.0002389486260454002) * (DIVISION_SIM((fmax((data->localData[0]->realVars[526]/* s67.m_flow variable */) ,1e-07)) * ((data->localData[0]->realVars[527]/* s67.outlet.h_out variable */) ) + (fmax((data->localData[0]->realVars[512]/* s47.m_flow variable */) ,1e-07)) * ((data->localData[0]->realVars[513]/* s47.outlet.h_out variable */) ),fmax((data->localData[0]->realVars[526]/* s67.m_flow variable */) ,1e-07) + fmax((data->localData[0]->realVars[512]/* s47.m_flow variable */) ,1e-07),"max(s67.m_flow, 1e-07) + max(s47.m_flow, 1e-07)",equationIndexes)):(data->localData[0]->realVars[71]/* s78.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1505
type: SIMPLE_ASSIGN
$DER.s78.Ttilde[1] = (4185.0 * mfr_load[5] * (s78.T[1] - s78.T[2]) - s78.Q_int[1]) / (4122225.0 * s78.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1505};
  (data->localData[0]->realVars[146]/* der(s78.Ttilde[1]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[307]/* mfr_load[5] variable */) ) * ((data->localData[0]->realVars[535]/* s78.T[1] variable */)  - (data->localData[0]->realVars[536]/* s78.T[2] variable */) )) - (data->localData[0]->realVars[533]/* s78.Q_int[1] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[678]/* s78.V PARAM */) ),"4122225.0 * s78.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1506
type: SIMPLE_ASSIGN
s16.T[3] = if s16.m_flow > 0.0 then s16.Ttilde[2] else 0.0002389486260454002 * s67.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1506};
  modelica_boolean tmp45;
  relationhysteresis(data, &tmp45, (data->localData[0]->realVars[461]/* s16.m_flow variable */) , 0.0, 5, Greater, GreaterZC);
  (data->localData[0]->realVars[459]/* s16.T[3] variable */)  = (tmp45?(data->localData[0]->realVars[48]/* s16.Ttilde[2] STATE(1) */) :(0.0002389486260454002) * ((data->localData[0]->realVars[525]/* s67.inlet.h_out variable */) ));
  TRACE_POP
}
/*
equation index: 1507
type: SIMPLE_ASSIGN
s16.T[2] = if s16.m_flow > 0.0 then s16.Ttilde[1] else s16.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1507};
  modelica_boolean tmp46;
  relationhysteresis(data, &tmp46, (data->localData[0]->realVars[461]/* s16.m_flow variable */) , 0.0, 5, Greater, GreaterZC);
  (data->localData[0]->realVars[458]/* s16.T[2] variable */)  = (tmp46?(data->localData[0]->realVars[47]/* s16.Ttilde[1] STATE(1) */) :(data->localData[0]->realVars[48]/* s16.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1508
type: SIMPLE_ASSIGN
$DER.s16.Ttilde[2] = (4185.0 * s16.m_flow * (s16.T[2] - s16.T[3]) - s16.Q_int[2]) / (4122225.0 * s16.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1508};
  (data->localData[0]->realVars[123]/* der(s16.Ttilde[2]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[461]/* s16.m_flow variable */) ) * ((data->localData[0]->realVars[458]/* s16.T[2] variable */)  - (data->localData[0]->realVars[459]/* s16.T[3] variable */) )) - (data->localData[0]->realVars[456]/* s16.Q_int[2] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[552]/* s16.V PARAM */) ),"4122225.0 * s16.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1509
type: SIMPLE_ASSIGN
s23.T[3] = if s23.m_flow > 0.0 then s23.Ttilde[2] else 0.0002389486260454002 * s34.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1509};
  modelica_boolean tmp47;
  relationhysteresis(data, &tmp47, (data->localData[0]->realVars[474]/* s23.m_flow variable */) , 0.0, 15, Greater, GreaterZC);
  (data->localData[0]->realVars[472]/* s23.T[3] variable */)  = (tmp47?(data->localData[0]->realVars[52]/* s23.Ttilde[2] STATE(1) */) :(0.0002389486260454002) * ((data->localData[0]->realVars[486]/* s34.inlet.h_out variable */) ));
  TRACE_POP
}
/*
equation index: 1510
type: SIMPLE_ASSIGN
s23.T[2] = if s23.m_flow > 0.0 then s23.Ttilde[1] else s23.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1510};
  modelica_boolean tmp48;
  relationhysteresis(data, &tmp48, (data->localData[0]->realVars[474]/* s23.m_flow variable */) , 0.0, 15, Greater, GreaterZC);
  (data->localData[0]->realVars[471]/* s23.T[2] variable */)  = (tmp48?(data->localData[0]->realVars[51]/* s23.Ttilde[1] STATE(1) */) :(data->localData[0]->realVars[52]/* s23.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1511
type: SIMPLE_ASSIGN
$DER.s23.Ttilde[2] = (4185.0 * s23.m_flow * (s23.T[2] - s23.T[3]) - s23.Q_int[2]) / (4122225.0 * s23.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1511};
  (data->localData[0]->realVars[127]/* der(s23.Ttilde[2]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[474]/* s23.m_flow variable */) ) * ((data->localData[0]->realVars[471]/* s23.T[2] variable */)  - (data->localData[0]->realVars[472]/* s23.T[3] variable */) )) - (data->localData[0]->realVars[469]/* s23.Q_int[2] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[573]/* s23.V PARAM */) ),"4122225.0 * s23.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1512
type: SIMPLE_ASSIGN
load1.loadValveControl.controlError = load_ref.k - Tr_load[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1512};
  (data->localData[0]->realVars[242]/* load1.loadValveControl.controlError variable */)  = (data->simulationInfo->realParameter[298]/* load_ref.k PARAM */)  - (data->localData[0]->realVars[206]/* Tr_load[1] variable */) ;
  TRACE_POP
}
/*
equation index: 1513
type: SIMPLE_ASSIGN
r32.T[3] = if r32.m_flow > 0.0 then r32.Ttilde[2] else 0.0002389486260454002 * ($cse57 * r21.inlet.h_out + mfr_load[1] * load1.outlet.h_out) / ($cse57 + mfr_load[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1513};
  modelica_boolean tmp49;
  relationhysteresis(data, &tmp49, (data->localData[0]->realVars[345]/* r32.m_flow variable */) , 0.0, 11, Greater, GreaterZC);
  (data->localData[0]->realVars[343]/* r32.T[3] variable */)  = (tmp49?(data->localData[0]->realVars[12]/* r32.Ttilde[2] STATE(1) */) :(0.0002389486260454002) * (DIVISION_SIM(((data->localData[0]->realVars[189]/* $cse57 variable */) ) * ((data->localData[0]->realVars[331]/* r21.inlet.h_out variable */) ) + ((data->localData[0]->realVars[303]/* mfr_load[1] variable */) ) * ((data->localData[0]->realVars[247]/* load1.outlet.h_out variable */) ),(data->localData[0]->realVars[189]/* $cse57 variable */)  + (data->localData[0]->realVars[303]/* mfr_load[1] variable */) ,"$cse57 + mfr_load[1]",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1514
type: SIMPLE_ASSIGN
$DER.r32.Ttilde[2] = (4185.0 * r32.m_flow * (r32.T[2] - r32.T[3]) - r32.Q_int[2]) / (4122225.0 * r32.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1514};
  (data->localData[0]->realVars[87]/* der(r32.Ttilde[2]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[345]/* r32.m_flow variable */) ) * ((data->localData[0]->realVars[342]/* r32.T[2] variable */)  - (data->localData[0]->realVars[343]/* r32.T[3] variable */) )) - (data->localData[0]->realVars[340]/* r32.Q_int[2] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[359]/* r32.V PARAM */) ),"4122225.0 * r32.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1515
type: SIMPLE_ASSIGN
r21.T[1] = if r21.m_flow > 0.0 then 0.0002389486260454002 * ($cse56 * r32.outlet.h_out + mfr_load[1] * load1.outlet.h_out) / ($cse56 + mfr_load[1]) else r21.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1515};
  modelica_boolean tmp50;
  relationhysteresis(data, &tmp50, (data->localData[0]->realVars[332]/* r21.m_flow variable */) , 0.0, 14, Greater, GreaterZC);
  (data->localData[0]->realVars[328]/* r21.T[1] variable */)  = (tmp50?(0.0002389486260454002) * (DIVISION_SIM(((data->localData[0]->realVars[188]/* $cse56 variable */) ) * ((data->localData[0]->realVars[346]/* r32.outlet.h_out variable */) ) + ((data->localData[0]->realVars[303]/* mfr_load[1] variable */) ) * ((data->localData[0]->realVars[247]/* load1.outlet.h_out variable */) ),(data->localData[0]->realVars[188]/* $cse56 variable */)  + (data->localData[0]->realVars[303]/* mfr_load[1] variable */) ,"$cse56 + mfr_load[1]",equationIndexes)):(data->localData[0]->realVars[7]/* r21.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1516
type: SIMPLE_ASSIGN
$DER.r21.Ttilde[1] = (4185.0 * r21.m_flow * (r21.T[1] - r21.T[2]) - r21.Q_int[1]) / (4122225.0 * r21.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1516};
  (data->localData[0]->realVars[82]/* der(r21.Ttilde[1]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[332]/* r21.m_flow variable */) ) * ((data->localData[0]->realVars[328]/* r21.T[1] variable */)  - (data->localData[0]->realVars[329]/* r21.T[2] variable */) )) - (data->localData[0]->realVars[326]/* r21.Q_int[1] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[338]/* r21.V PARAM */) ),"4122225.0 * r21.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1517
type: SIMPLE_ASSIGN
Ts_load[1] = -273.15 + 0.0002389486260454002 * load1.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1517};
  (data->localData[0]->realVars[211]/* Ts_load[1] variable */)  = -273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[235]/* load1.inlet.h_out variable */) );
  TRACE_POP
}
/*
equation index: 1518
type: SIMPLE_ASSIGN
s23.T[1] = if s23.m_flow > 0.0 then 0.0002389486260454002 * s12.outlet.h_out else s23.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1518};
  modelica_boolean tmp51;
  relationhysteresis(data, &tmp51, (data->localData[0]->realVars[474]/* s23.m_flow variable */) , 0.0, 15, Greater, GreaterZC);
  (data->localData[0]->realVars[470]/* s23.T[1] variable */)  = (tmp51?(0.0002389486260454002) * ((data->localData[0]->realVars[449]/* s12.outlet.h_out variable */) ):(data->localData[0]->realVars[51]/* s23.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1519
type: SIMPLE_ASSIGN
$DER.s23.Ttilde[1] = (4185.0 * s23.m_flow * (s23.T[1] - s23.T[2]) - s23.Q_int[1]) / (4122225.0 * s23.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1519};
  (data->localData[0]->realVars[126]/* der(s23.Ttilde[1]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[474]/* s23.m_flow variable */) ) * ((data->localData[0]->realVars[470]/* s23.T[1] variable */)  - (data->localData[0]->realVars[471]/* s23.T[2] variable */) )) - (data->localData[0]->realVars[468]/* s23.Q_int[1] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[573]/* s23.V PARAM */) ),"4122225.0 * s23.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1520
type: SIMPLE_ASSIGN
s12.inlet.h_out = 4185.0 * s12.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1520};
  (data->localData[0]->realVars[447]/* s12.inlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[43]/* s12.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1521
type: SIMPLE_ASSIGN
s12.Q_ext[2] = 0.5 * s12.UA * (s12.T_ext - s12.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1521};
  (data->localData[0]->realVars[441]/* s12.Q_ext[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[529]/* s12.UA PARAM */) ) * ((data->simulationInfo->realParameter[527]/* s12.T_ext PARAM */)  - (data->localData[0]->realVars[46]/* s12.Twall[2] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1522
type: SIMPLE_ASSIGN
s12.Q_int[2] = 0.5 * s12.U_wm * s12.L * (s12.Ttilde[2] - s12.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1522};
  (data->localData[0]->realVars[443]/* s12.Q_int[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[530]/* s12.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[526]/* s12.L PARAM */) ) * ((data->localData[0]->realVars[44]/* s12.Ttilde[2] STATE(1) */)  - (data->localData[0]->realVars[46]/* s12.Twall[2] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1523
type: SIMPLE_ASSIGN
$DER.s12.Twall[2] = (s12.Q_int[2] + s12.Q_ext[2]) / (0.5 * s12.L * s12.rhomcm * s12.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1523};
  (data->localData[0]->realVars[121]/* der(s12.Twall[2]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[443]/* s12.Q_int[2] variable */)  + (data->localData[0]->realVars[441]/* s12.Q_ext[2] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[526]/* s12.L PARAM */) )) * ((data->simulationInfo->realParameter[541]/* s12.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[523]/* s12.Am PARAM */) ),"0.5 * s12.L * s12.rhomcm * s12.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1524
type: SIMPLE_ASSIGN
$DER.s12.Ttilde[2] = (4185.0 * s12.m_flow * (s12.T[2] - s12.T[3]) - s12.Q_int[2]) / (4122225.0 * s12.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1524};
  (data->localData[0]->realVars[119]/* der(s12.Ttilde[2]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[448]/* s12.m_flow variable */) ) * ((data->localData[0]->realVars[445]/* s12.T[2] variable */)  - (data->localData[0]->realVars[446]/* s12.T[3] variable */) )) - (data->localData[0]->realVars[443]/* s12.Q_int[2] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[531]/* s12.V PARAM */) ),"4122225.0 * s12.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1525
type: SIMPLE_ASSIGN
s12.Q_ext[1] = 0.5 * s12.UA * (s12.T_ext - s12.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1525};
  (data->localData[0]->realVars[440]/* s12.Q_ext[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[529]/* s12.UA PARAM */) ) * ((data->simulationInfo->realParameter[527]/* s12.T_ext PARAM */)  - (data->localData[0]->realVars[45]/* s12.Twall[1] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1526
type: SIMPLE_ASSIGN
s12.Q_int[1] = 0.5 * s12.U_wm * s12.L * (s12.Ttilde[1] - s12.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1526};
  (data->localData[0]->realVars[442]/* s12.Q_int[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[530]/* s12.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[526]/* s12.L PARAM */) ) * ((data->localData[0]->realVars[43]/* s12.Ttilde[1] STATE(1) */)  - (data->localData[0]->realVars[45]/* s12.Twall[1] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1527
type: SIMPLE_ASSIGN
$DER.s12.Twall[1] = (s12.Q_int[1] + s12.Q_ext[1]) / (0.5 * s12.L * s12.rhomcm * s12.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1527};
  (data->localData[0]->realVars[120]/* der(s12.Twall[1]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[442]/* s12.Q_int[1] variable */)  + (data->localData[0]->realVars[440]/* s12.Q_ext[1] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[526]/* s12.L PARAM */) )) * ((data->simulationInfo->realParameter[541]/* s12.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[523]/* s12.Am PARAM */) ),"0.5 * s12.L * s12.rhomcm * s12.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1528
type: SIMPLE_ASSIGN
s01.section_T[2] = -273.15 + s01.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1528};
  (data->localData[0]->realVars[438]/* s01.section_T[2] variable */)  = -273.15 + (data->localData[0]->realVars[40]/* s01.Ttilde[2] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1529
type: SIMPLE_ASSIGN
s01.section_T[1] = -273.15 + s01.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1529};
  (data->localData[0]->realVars[437]/* s01.section_T[1] variable */)  = -273.15 + (data->localData[0]->realVars[39]/* s01.Ttilde[1] STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1530
type: SIMPLE_ASSIGN
s01.outlet.h_out = 4185.0 * s01.Ttilde[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1530};
  (data->localData[0]->realVars[435]/* s01.outlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[40]/* s01.Ttilde[2] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1531
type: SIMPLE_ASSIGN
s16.T[1] = if s16.m_flow > 0.0 then 0.0002389486260454002 * (max(-s12.m_flow, 1e-07) * s12.inlet.h_out + mfr_mandata * s01.outlet.h_out) / (max(-s12.m_flow, 1e-07) + mfr_mandata) else s16.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1531};
  modelica_boolean tmp52;
  relationhysteresis(data, &tmp52, (data->localData[0]->realVars[461]/* s16.m_flow variable */) , 0.0, 5, Greater, GreaterZC);
  (data->localData[0]->realVars[457]/* s16.T[1] variable */)  = (tmp52?(0.0002389486260454002) * (DIVISION_SIM((fmax((-(data->localData[0]->realVars[448]/* s12.m_flow variable */) ),1e-07)) * ((data->localData[0]->realVars[447]/* s12.inlet.h_out variable */) ) + ((data->localData[0]->realVars[308]/* mfr_mandata variable */) ) * ((data->localData[0]->realVars[435]/* s01.outlet.h_out variable */) ),fmax((-(data->localData[0]->realVars[448]/* s12.m_flow variable */) ),1e-07) + (data->localData[0]->realVars[308]/* mfr_mandata variable */) ,"max(-s12.m_flow, 1e-07) + mfr_mandata",equationIndexes)):(data->localData[0]->realVars[47]/* s16.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1532
type: SIMPLE_ASSIGN
$DER.s16.Ttilde[1] = (4185.0 * s16.m_flow * (s16.T[1] - s16.T[2]) - s16.Q_int[1]) / (4122225.0 * s16.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1532};
  (data->localData[0]->realVars[122]/* der(s16.Ttilde[1]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[461]/* s16.m_flow variable */) ) * ((data->localData[0]->realVars[457]/* s16.T[1] variable */)  - (data->localData[0]->realVars[458]/* s16.T[2] variable */) )) - (data->localData[0]->realVars[455]/* s16.Q_int[1] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[552]/* s16.V PARAM */) ),"4122225.0 * s16.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1533
type: SIMPLE_ASSIGN
s12.T[1] = if s12.m_flow > 0.0 then 0.0002389486260454002 * (max(-s16.m_flow, 1e-07) * s16.inlet.h_out + mfr_mandata * s01.outlet.h_out) / (max(-s16.m_flow, 1e-07) + mfr_mandata) else s12.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1533};
  modelica_boolean tmp53;
  relationhysteresis(data, &tmp53, (data->localData[0]->realVars[448]/* s12.m_flow variable */) , 0.0, 6, Greater, GreaterZC);
  (data->localData[0]->realVars[444]/* s12.T[1] variable */)  = (tmp53?(0.0002389486260454002) * (DIVISION_SIM((fmax((-(data->localData[0]->realVars[461]/* s16.m_flow variable */) ),1e-07)) * ((data->localData[0]->realVars[460]/* s16.inlet.h_out variable */) ) + ((data->localData[0]->realVars[308]/* mfr_mandata variable */) ) * ((data->localData[0]->realVars[435]/* s01.outlet.h_out variable */) ),fmax((-(data->localData[0]->realVars[461]/* s16.m_flow variable */) ),1e-07) + (data->localData[0]->realVars[308]/* mfr_mandata variable */) ,"max(-s16.m_flow, 1e-07) + mfr_mandata",equationIndexes)):(data->localData[0]->realVars[43]/* s12.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1534
type: SIMPLE_ASSIGN
$DER.s12.Ttilde[1] = (4185.0 * s12.m_flow * (s12.T[1] - s12.T[2]) - s12.Q_int[1]) / (4122225.0 * s12.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1534};
  (data->localData[0]->realVars[118]/* der(s12.Ttilde[1]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[448]/* s12.m_flow variable */) ) * ((data->localData[0]->realVars[444]/* s12.T[1] variable */)  - (data->localData[0]->realVars[445]/* s12.T[2] variable */) )) - (data->localData[0]->realVars[442]/* s12.Q_int[1] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[531]/* s12.V PARAM */) ),"4122225.0 * s12.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1535
type: SIMPLE_ASSIGN
s01.inlet.h_out = 4185.0 * s01.Ttilde[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1535};
  (data->localData[0]->realVars[434]/* s01.inlet.h_out variable */)  = (4185.0) * ((data->localData[0]->realVars[39]/* s01.Ttilde[1] STATE(1) */) );
  TRACE_POP
}
/*
equation index: 1536
type: SIMPLE_ASSIGN
s01.Q_ext[2] = 0.5 * s01.UA * (s01.T_ext - s01.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1536};
  (data->localData[0]->realVars[430]/* s01.Q_ext[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[508]/* s01.UA PARAM */) ) * ((data->simulationInfo->realParameter[506]/* s01.T_ext PARAM */)  - (data->localData[0]->realVars[42]/* s01.Twall[2] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1537
type: SIMPLE_ASSIGN
s01.Q_int[2] = 0.5 * s01.U_wm * s01.L * (s01.Ttilde[2] - s01.Twall[2])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1537};
  (data->localData[0]->realVars[432]/* s01.Q_int[2] variable */)  = (0.5) * (((data->simulationInfo->realParameter[509]/* s01.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[505]/* s01.L PARAM */) ) * ((data->localData[0]->realVars[40]/* s01.Ttilde[2] STATE(1) */)  - (data->localData[0]->realVars[42]/* s01.Twall[2] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1538
type: SIMPLE_ASSIGN
$DER.s01.Twall[2] = (s01.Q_int[2] + s01.Q_ext[2]) / (0.5 * s01.L * s01.rhomcm * s01.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1538};
  (data->localData[0]->realVars[117]/* der(s01.Twall[2]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[432]/* s01.Q_int[2] variable */)  + (data->localData[0]->realVars[430]/* s01.Q_ext[2] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[505]/* s01.L PARAM */) )) * ((data->simulationInfo->realParameter[520]/* s01.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[502]/* s01.Am PARAM */) ),"0.5 * s01.L * s01.rhomcm * s01.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1539
type: SIMPLE_ASSIGN
$DER.s01.Ttilde[2] = (4185.0 * mfr_mandata * (s01.Ttilde[1] - s01.Ttilde[2]) - s01.Q_int[2]) / (4122225.0 * s01.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1539};
  (data->localData[0]->realVars[115]/* der(s01.Ttilde[2]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[308]/* mfr_mandata variable */) ) * ((data->localData[0]->realVars[39]/* s01.Ttilde[1] STATE(1) */)  - (data->localData[0]->realVars[40]/* s01.Ttilde[2] STATE(1) */) )) - (data->localData[0]->realVars[432]/* s01.Q_int[2] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[510]/* s01.V PARAM */) ),"4122225.0 * s01.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1540
type: SIMPLE_ASSIGN
s01.Q_ext[1] = 0.5 * s01.UA * (s01.T_ext - s01.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1540};
  (data->localData[0]->realVars[429]/* s01.Q_ext[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[508]/* s01.UA PARAM */) ) * ((data->simulationInfo->realParameter[506]/* s01.T_ext PARAM */)  - (data->localData[0]->realVars[41]/* s01.Twall[1] STATE(1) */) ));
  TRACE_POP
}
/*
equation index: 1541
type: SIMPLE_ASSIGN
s01.Q_int[1] = 0.5 * s01.U_wm * s01.L * (s01.Ttilde[1] - s01.Twall[1])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1541};
  (data->localData[0]->realVars[431]/* s01.Q_int[1] variable */)  = (0.5) * (((data->simulationInfo->realParameter[509]/* s01.U_wm PARAM */) ) * (((data->simulationInfo->realParameter[505]/* s01.L PARAM */) ) * ((data->localData[0]->realVars[39]/* s01.Ttilde[1] STATE(1) */)  - (data->localData[0]->realVars[41]/* s01.Twall[1] STATE(1) */) )));
  TRACE_POP
}
/*
equation index: 1542
type: SIMPLE_ASSIGN
$DER.s01.Twall[1] = (s01.Q_int[1] + s01.Q_ext[1]) / (0.5 * s01.L * s01.rhomcm * s01.Am)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1542};
  (data->localData[0]->realVars[116]/* der(s01.Twall[1]) STATE_DER */)  = DIVISION_SIM((data->localData[0]->realVars[431]/* s01.Q_int[1] variable */)  + (data->localData[0]->realVars[429]/* s01.Q_ext[1] variable */) ,(((0.5) * ((data->simulationInfo->realParameter[505]/* s01.L PARAM */) )) * ((data->simulationInfo->realParameter[520]/* s01.rhomcm PARAM */) )) * ((data->simulationInfo->realParameter[502]/* s01.Am PARAM */) ),"0.5 * s01.L * s01.rhomcm * s01.Am",equationIndexes);
  TRACE_POP
}
/*
equation index: 1543
type: SIMPLE_ASSIGN
$DER.s01.Ttilde[1] = (4185.0 * mfr_mandata * (s01.T[1] - s01.Ttilde[1]) - s01.Q_int[1]) / (4122225.0 * s01.V)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1543};
  (data->localData[0]->realVars[114]/* der(s01.Ttilde[1]) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[308]/* mfr_mandata variable */) ) * ((data->localData[0]->realVars[433]/* s01.T[1] variable */)  - (data->localData[0]->realVars[39]/* s01.Ttilde[1] STATE(1) */) )) - (data->localData[0]->realVars[431]/* s01.Q_int[1] variable */) ,(4122225.0) * ((data->simulationInfo->realParameter[510]/* s01.V PARAM */) ),"4122225.0 * s01.V",equationIndexes);
  TRACE_POP
}
/*
equation index: 1544
type: SIMPLE_ASSIGN
boiler.boilerInsideVolume.temperatureMixVolume = -273.15 + boiler.boilerInsideVolume.Ttilde
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1544};
  (data->localData[0]->realVars[222]/* boiler.boilerInsideVolume.temperatureMixVolume variable */)  = -273.15 + (data->localData[0]->realVars[0]/* boiler.boilerInsideVolume.Ttilde STATE(1) */) ;
  TRACE_POP
}
/*
equation index: 1545
type: SIMPLE_ASSIGN
boiler.boilerInsideVolume.Q_amb = boiler.boilerInsideVolume.UA * (boiler.boilerInsideVolume.Ttilde - boiler.boilerInsideVolume.T_amb)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1545};
  (data->localData[0]->realVars[218]/* boiler.boilerInsideVolume.Q_amb variable */)  = ((data->simulationInfo->realParameter[12]/* boiler.boilerInsideVolume.UA PARAM */) ) * ((data->localData[0]->realVars[0]/* boiler.boilerInsideVolume.Ttilde STATE(1) */)  - (data->simulationInfo->realParameter[10]/* boiler.boilerInsideVolume.T_amb PARAM */) );
  TRACE_POP
}
/*
equation index: 1546
type: SIMPLE_ASSIGN
$DER.boiler.boilerInsideVolume.Ttilde = (4185.0 * mfr_mandata * (boiler.boilerInsideVolume.T[1] - boiler.boilerInsideVolume.T[2]) - boiler.boilerInsideVolume.Q_amb) / (4185.0 * boiler.boilerInsideVolume.M)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1546};
  (data->localData[0]->realVars[75]/* der(boiler.boilerInsideVolume.Ttilde) STATE_DER */)  = DIVISION_SIM((4185.0) * (((data->localData[0]->realVars[308]/* mfr_mandata variable */) ) * ((data->localData[0]->realVars[219]/* boiler.boilerInsideVolume.T[1] variable */)  - (data->localData[0]->realVars[220]/* boiler.boilerInsideVolume.T[2] variable */) )) - (data->localData[0]->realVars[218]/* boiler.boilerInsideVolume.Q_amb variable */) ,(4185.0) * ((data->simulationInfo->realParameter[9]/* boiler.boilerInsideVolume.M PARAM */) ),"4185.0 * boiler.boilerInsideVolume.M",equationIndexes);
  TRACE_POP
}
/*
equation index: 1552
type: ALGORITHM

  assert(load5.loadValveControl.limiter.uMax >= load5.loadValveControl.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(load5.loadValveControl.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(load5.loadValveControl.limiter.uMin, 6, 0, true) + ")");
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1552};
  modelica_boolean tmp54;
  static const MMC_DEFSTRINGLIT(tmp55,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp56;
  modelica_metatype tmpMeta57;
  static const MMC_DEFSTRINGLIT(tmp58,11,") < uMin (=");
  modelica_metatype tmpMeta59;
  modelica_string tmp60;
  modelica_metatype tmpMeta61;
  modelica_metatype tmpMeta62;
  static int tmp63 = 0;
  {
    tmp54 = GreaterEq((data->simulationInfo->realParameter[284]/* load5.loadValveControl.limiter.uMax PARAM */) ,(data->simulationInfo->realParameter[285]/* load5.loadValveControl.limiter.uMin PARAM */) );
    if(!tmp54)
    {
      tmp56 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[284]/* load5.loadValveControl.limiter.uMax PARAM */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta57 = stringAppend(MMC_REFSTRINGLIT(tmp55),tmp56);
      tmpMeta59 = stringAppend(tmpMeta57,MMC_REFSTRINGLIT(tmp58));
      tmp60 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[285]/* load5.loadValveControl.limiter.uMin PARAM */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta61 = stringAppend(tmpMeta59,tmp60);
      tmpMeta62 = stringAppend(tmpMeta61,(modelica_string) mmc_strings_len1[41]);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload5.loadValveControl.limiter.uMax >= load5.loadValveControl.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta62));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",19,9,20,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload5.loadValveControl.limiter.uMax >= load5.loadValveControl.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta62));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1551
type: ALGORITHM

  assert(load4.loadValveControl.limiter.uMax >= load4.loadValveControl.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(load4.loadValveControl.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(load4.loadValveControl.limiter.uMin, 6, 0, true) + ")");
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1551};
  modelica_boolean tmp64;
  static const MMC_DEFSTRINGLIT(tmp65,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp66;
  modelica_metatype tmpMeta67;
  static const MMC_DEFSTRINGLIT(tmp68,11,") < uMin (=");
  modelica_metatype tmpMeta69;
  modelica_string tmp70;
  modelica_metatype tmpMeta71;
  modelica_metatype tmpMeta72;
  static int tmp73 = 0;
  {
    tmp64 = GreaterEq((data->simulationInfo->realParameter[237]/* load4.loadValveControl.limiter.uMax PARAM */) ,(data->simulationInfo->realParameter[238]/* load4.loadValveControl.limiter.uMin PARAM */) );
    if(!tmp64)
    {
      tmp66 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[237]/* load4.loadValveControl.limiter.uMax PARAM */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta67 = stringAppend(MMC_REFSTRINGLIT(tmp65),tmp66);
      tmpMeta69 = stringAppend(tmpMeta67,MMC_REFSTRINGLIT(tmp68));
      tmp70 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[238]/* load4.loadValveControl.limiter.uMin PARAM */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta71 = stringAppend(tmpMeta69,tmp70);
      tmpMeta72 = stringAppend(tmpMeta71,(modelica_string) mmc_strings_len1[41]);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload4.loadValveControl.limiter.uMax >= load4.loadValveControl.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta72));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",19,9,20,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload4.loadValveControl.limiter.uMax >= load4.loadValveControl.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta72));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1550
type: ALGORITHM

  assert(load3.loadValveControl.limiter.uMax >= load3.loadValveControl.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(load3.loadValveControl.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(load3.loadValveControl.limiter.uMin, 6, 0, true) + ")");
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1550};
  modelica_boolean tmp74;
  static const MMC_DEFSTRINGLIT(tmp75,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp76;
  modelica_metatype tmpMeta77;
  static const MMC_DEFSTRINGLIT(tmp78,11,") < uMin (=");
  modelica_metatype tmpMeta79;
  modelica_string tmp80;
  modelica_metatype tmpMeta81;
  modelica_metatype tmpMeta82;
  static int tmp83 = 0;
  {
    tmp74 = GreaterEq((data->simulationInfo->realParameter[190]/* load3.loadValveControl.limiter.uMax PARAM */) ,(data->simulationInfo->realParameter[191]/* load3.loadValveControl.limiter.uMin PARAM */) );
    if(!tmp74)
    {
      tmp76 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[190]/* load3.loadValveControl.limiter.uMax PARAM */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta77 = stringAppend(MMC_REFSTRINGLIT(tmp75),tmp76);
      tmpMeta79 = stringAppend(tmpMeta77,MMC_REFSTRINGLIT(tmp78));
      tmp80 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[191]/* load3.loadValveControl.limiter.uMin PARAM */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta81 = stringAppend(tmpMeta79,tmp80);
      tmpMeta82 = stringAppend(tmpMeta81,(modelica_string) mmc_strings_len1[41]);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload3.loadValveControl.limiter.uMax >= load3.loadValveControl.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta82));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",19,9,20,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload3.loadValveControl.limiter.uMax >= load3.loadValveControl.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta82));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1549
type: ALGORITHM

  assert(load2.loadValveControl.limiter.uMax >= load2.loadValveControl.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(load2.loadValveControl.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(load2.loadValveControl.limiter.uMin, 6, 0, true) + ")");
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1549};
  modelica_boolean tmp84;
  static const MMC_DEFSTRINGLIT(tmp85,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp86;
  modelica_metatype tmpMeta87;
  static const MMC_DEFSTRINGLIT(tmp88,11,") < uMin (=");
  modelica_metatype tmpMeta89;
  modelica_string tmp90;
  modelica_metatype tmpMeta91;
  modelica_metatype tmpMeta92;
  static int tmp93 = 0;
  {
    tmp84 = GreaterEq((data->simulationInfo->realParameter[143]/* load2.loadValveControl.limiter.uMax PARAM */) ,(data->simulationInfo->realParameter[144]/* load2.loadValveControl.limiter.uMin PARAM */) );
    if(!tmp84)
    {
      tmp86 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[143]/* load2.loadValveControl.limiter.uMax PARAM */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta87 = stringAppend(MMC_REFSTRINGLIT(tmp85),tmp86);
      tmpMeta89 = stringAppend(tmpMeta87,MMC_REFSTRINGLIT(tmp88));
      tmp90 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[144]/* load2.loadValveControl.limiter.uMin PARAM */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta91 = stringAppend(tmpMeta89,tmp90);
      tmpMeta92 = stringAppend(tmpMeta91,(modelica_string) mmc_strings_len1[41]);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload2.loadValveControl.limiter.uMax >= load2.loadValveControl.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta92));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",19,9,20,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload2.loadValveControl.limiter.uMax >= load2.loadValveControl.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta92));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1548
type: ALGORITHM

  assert(load1.loadValveControl.limiter.uMax >= load1.loadValveControl.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(load1.loadValveControl.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(load1.loadValveControl.limiter.uMin, 6, 0, true) + ")");
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1548};
  modelica_boolean tmp94;
  static const MMC_DEFSTRINGLIT(tmp95,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp96;
  modelica_metatype tmpMeta97;
  static const MMC_DEFSTRINGLIT(tmp98,11,") < uMin (=");
  modelica_metatype tmpMeta99;
  modelica_string tmp100;
  modelica_metatype tmpMeta101;
  modelica_metatype tmpMeta102;
  static int tmp103 = 0;
  {
    tmp94 = GreaterEq((data->simulationInfo->realParameter[96]/* load1.loadValveControl.limiter.uMax PARAM */) ,(data->simulationInfo->realParameter[97]/* load1.loadValveControl.limiter.uMin PARAM */) );
    if(!tmp94)
    {
      tmp96 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[96]/* load1.loadValveControl.limiter.uMax PARAM */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta97 = stringAppend(MMC_REFSTRINGLIT(tmp95),tmp96);
      tmpMeta99 = stringAppend(tmpMeta97,MMC_REFSTRINGLIT(tmp98));
      tmp100 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[97]/* load1.loadValveControl.limiter.uMin PARAM */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta101 = stringAppend(tmpMeta99,tmp100);
      tmpMeta102 = stringAppend(tmpMeta101,(modelica_string) mmc_strings_len1[41]);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload1.loadValveControl.limiter.uMax >= load1.loadValveControl.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta102));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",19,9,20,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload1.loadValveControl.limiter.uMax >= load1.loadValveControl.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta102));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1547
type: ALGORITHM

  assert(boiler.boilerPIControl.limiter.uMax >= boiler.boilerPIControl.limiter.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(boiler.boilerPIControl.limiter.uMax, 6, 0, true) + ") < uMin (=" + String(boiler.boilerPIControl.limiter.uMin, 6, 0, true) + ")");
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1547};
  modelica_boolean tmp104;
  static const MMC_DEFSTRINGLIT(tmp105,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp106;
  modelica_metatype tmpMeta107;
  static const MMC_DEFSTRINGLIT(tmp108,11,") < uMin (=");
  modelica_metatype tmpMeta109;
  modelica_string tmp110;
  modelica_metatype tmpMeta111;
  modelica_metatype tmpMeta112;
  static int tmp113 = 0;
  {
    tmp104 = GreaterEq((data->simulationInfo->realParameter[48]/* boiler.boilerPIControl.limiter.uMax PARAM */) ,(data->simulationInfo->realParameter[49]/* boiler.boilerPIControl.limiter.uMin PARAM */) );
    if(!tmp104)
    {
      tmp106 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[48]/* boiler.boilerPIControl.limiter.uMax PARAM */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta107 = stringAppend(MMC_REFSTRINGLIT(tmp105),tmp106);
      tmpMeta109 = stringAppend(tmpMeta107,MMC_REFSTRINGLIT(tmp108));
      tmp110 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[49]/* boiler.boilerPIControl.limiter.uMin PARAM */) , ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta111 = stringAppend(tmpMeta109,tmp110);
      tmpMeta112 = stringAppend(tmpMeta111,(modelica_string) mmc_strings_len1[41]);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.limiter.uMax >= boiler.boilerPIControl.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta112));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",19,9,20,65,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nboiler.boilerPIControl.limiter.uMax >= boiler.boilerPIControl.limiter.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta112));
        }
      }
    }
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionLocalKnownVars(data, threadData);
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1096(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1097(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1098(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1099(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1100(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1101(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1102(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1103(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1104(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1105(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1106(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1107(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1108(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1109(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1110(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1111(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1112(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1113(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1114(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1115(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1116(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1117(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1118(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1119(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1120(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1121(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1122(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1123(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1124(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1125(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1126(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1127(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1128(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1129(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1130(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1131(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1132(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1133(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1134(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1135(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1136(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1137(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1138(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1139(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1140(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1141(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1142(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1143(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1144(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1145(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1146(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1147(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1148(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1149(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1150(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1151(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1152(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1153(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1154(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1155(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1156(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1157(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1158(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1159(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1160(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1161(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1162(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1163(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1164(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1165(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1166(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1167(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1168(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1169(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1170(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1171(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1172(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1173(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1174(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1175(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1176(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1177(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1178(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1179(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1180(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1181(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1182(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1183(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1184(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1185(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1186(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1187(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1188(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1189(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1190(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1191(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1192(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1193(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1194(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1195(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1196(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1197(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1198(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1199(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1200(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1201(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1202(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1203(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1204(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1205(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1206(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1207(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1208(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1209(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1210(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1211(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1212(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1213(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1214(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1215(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1216(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1217(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1218(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1219(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1220(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1221(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1222(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1223(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1224(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1225(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1226(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1227(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1228(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1229(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1230(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1231(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1232(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1233(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1234(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1235(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1236(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1237(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1238(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1239(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1240(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1241(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1242(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1243(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1244(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1245(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1246(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1247(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1248(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1249(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1250(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1251(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1252(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1253(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1254(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1255(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1256(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1257(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1258(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1259(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1260(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1261(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1401(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1406(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1407(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1408(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1409(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1410(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1411(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1412(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1413(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1414(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1415(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1416(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1417(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1418(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1419(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1420(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1421(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1422(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1423(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1424(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1425(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1426(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1427(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1428(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1429(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1430(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1431(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1432(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1433(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1434(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1435(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1436(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1437(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1438(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1439(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1440(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1441(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1442(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1443(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1444(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1445(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1446(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1447(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1448(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1449(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1450(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1451(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1452(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1453(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1454(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1455(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1456(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1457(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1458(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1459(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1460(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1461(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1462(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1463(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1464(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1465(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1466(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1467(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1468(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1469(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1470(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1471(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1472(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1473(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1474(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1475(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1476(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1477(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1478(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1479(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1480(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1481(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1482(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1483(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1484(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1485(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1486(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1487(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1488(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1489(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1490(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1491(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1492(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1493(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1494(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1495(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1496(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1497(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1498(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1499(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1500(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1501(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1502(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1503(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1504(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1505(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1506(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1507(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1508(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1509(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1510(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1511(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1512(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1513(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1514(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1515(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1516(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1517(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1518(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1519(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1520(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1521(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1522(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1523(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1524(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1525(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1526(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1527(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1528(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1529(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1530(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1531(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1532(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1533(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1534(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1535(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1536(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1537(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1538(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1539(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1540(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1541(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1542(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1543(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1544(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1545(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1546(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1552(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1551(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1550(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1549(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1548(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1547(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1099(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1100(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1101(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1102(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1103(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1104(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1105(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1106(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1109(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1110(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1111(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1112(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1113(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1114(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1115(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1116(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1119(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1122(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1123(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1124(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1125(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1126(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1127(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1130(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1131(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1132(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1133(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1134(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1135(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1136(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1137(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1140(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1141(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1142(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1143(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1144(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1145(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1146(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1147(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1150(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1151(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1152(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1153(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1154(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1155(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1156(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1157(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1160(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1161(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1162(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1163(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1164(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1165(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1166(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1167(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1170(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1171(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1172(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1173(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1174(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1175(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1176(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1177(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1180(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1183(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1184(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1185(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1186(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1187(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1188(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1191(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1192(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1193(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1194(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1195(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1196(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1197(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1198(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1201(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1202(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1203(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1204(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1205(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1206(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1207(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1208(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1211(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1212(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1213(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1214(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1215(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1216(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1217(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1218(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1221(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1222(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1223(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1224(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1225(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1226(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1227(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1228(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1231(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1232(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1233(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1234(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1235(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1236(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1237(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1238(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1241(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1242(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1243(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1244(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1245(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1246(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1247(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1248(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1251(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1253(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1254(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1255(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1256(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1257(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1258(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1261(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1401(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1406(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1407(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1408(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1409(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1410(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1411(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1412(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1413(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1414(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1415(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1416(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1417(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1418(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1419(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1420(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1422(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1424(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1425(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1426(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1427(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1431(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1432(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1433(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1434(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1435(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1436(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1437(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1438(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1439(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1440(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1441(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1442(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1444(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1445(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1446(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1447(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1448(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1449(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1450(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1451(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1452(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1453(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1454(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1455(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1456(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1457(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1458(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1459(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1460(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1461(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1462(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1463(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1465(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1466(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1467(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1468(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1469(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1470(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1471(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1472(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1473(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1474(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1475(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1476(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1477(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1478(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1480(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1481(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1482(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1483(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1484(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1485(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1487(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1488(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1489(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1490(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1491(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1492(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1493(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1495(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1496(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1497(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1498(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1499(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1500(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1501(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1502(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1503(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1504(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1505(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1506(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1507(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1508(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1509(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1510(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1511(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1513(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1514(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1515(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1516(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1518(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1519(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1520(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1521(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1522(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1523(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1524(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1525(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1526(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1527(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1530(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1531(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1532(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1533(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1534(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1536(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1537(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1538(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1539(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1540(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1541(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1542(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1543(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1545(DATA* data, threadData_t *threadData);
extern void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1546(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1099(data, threadData);
    threadData->lastEquationSolved = 1099;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1100(data, threadData);
    threadData->lastEquationSolved = 1100;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1101(data, threadData);
    threadData->lastEquationSolved = 1101;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1102(data, threadData);
    threadData->lastEquationSolved = 1102;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1103(data, threadData);
    threadData->lastEquationSolved = 1103;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1104(data, threadData);
    threadData->lastEquationSolved = 1104;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1105(data, threadData);
    threadData->lastEquationSolved = 1105;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1106(data, threadData);
    threadData->lastEquationSolved = 1106;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1109(data, threadData);
    threadData->lastEquationSolved = 1109;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1110(data, threadData);
    threadData->lastEquationSolved = 1110;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1111(data, threadData);
    threadData->lastEquationSolved = 1111;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1112(data, threadData);
    threadData->lastEquationSolved = 1112;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1113(data, threadData);
    threadData->lastEquationSolved = 1113;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1114(data, threadData);
    threadData->lastEquationSolved = 1114;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1115(data, threadData);
    threadData->lastEquationSolved = 1115;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1116(data, threadData);
    threadData->lastEquationSolved = 1116;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1119(data, threadData);
    threadData->lastEquationSolved = 1119;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1122(data, threadData);
    threadData->lastEquationSolved = 1122;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1123(data, threadData);
    threadData->lastEquationSolved = 1123;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1124(data, threadData);
    threadData->lastEquationSolved = 1124;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1125(data, threadData);
    threadData->lastEquationSolved = 1125;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1126(data, threadData);
    threadData->lastEquationSolved = 1126;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1127(data, threadData);
    threadData->lastEquationSolved = 1127;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1130(data, threadData);
    threadData->lastEquationSolved = 1130;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1131(data, threadData);
    threadData->lastEquationSolved = 1131;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1132(data, threadData);
    threadData->lastEquationSolved = 1132;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1133(data, threadData);
    threadData->lastEquationSolved = 1133;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1134(data, threadData);
    threadData->lastEquationSolved = 1134;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1135(data, threadData);
    threadData->lastEquationSolved = 1135;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1136(data, threadData);
    threadData->lastEquationSolved = 1136;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1137(data, threadData);
    threadData->lastEquationSolved = 1137;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1140(data, threadData);
    threadData->lastEquationSolved = 1140;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1141(data, threadData);
    threadData->lastEquationSolved = 1141;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1142(data, threadData);
    threadData->lastEquationSolved = 1142;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1143(data, threadData);
    threadData->lastEquationSolved = 1143;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1144(data, threadData);
    threadData->lastEquationSolved = 1144;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1145(data, threadData);
    threadData->lastEquationSolved = 1145;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1146(data, threadData);
    threadData->lastEquationSolved = 1146;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1147(data, threadData);
    threadData->lastEquationSolved = 1147;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1150(data, threadData);
    threadData->lastEquationSolved = 1150;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1151(data, threadData);
    threadData->lastEquationSolved = 1151;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1152(data, threadData);
    threadData->lastEquationSolved = 1152;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1153(data, threadData);
    threadData->lastEquationSolved = 1153;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1154(data, threadData);
    threadData->lastEquationSolved = 1154;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1155(data, threadData);
    threadData->lastEquationSolved = 1155;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1156(data, threadData);
    threadData->lastEquationSolved = 1156;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1157(data, threadData);
    threadData->lastEquationSolved = 1157;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1160(data, threadData);
    threadData->lastEquationSolved = 1160;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1161(data, threadData);
    threadData->lastEquationSolved = 1161;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1162(data, threadData);
    threadData->lastEquationSolved = 1162;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1163(data, threadData);
    threadData->lastEquationSolved = 1163;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1164(data, threadData);
    threadData->lastEquationSolved = 1164;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1165(data, threadData);
    threadData->lastEquationSolved = 1165;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1166(data, threadData);
    threadData->lastEquationSolved = 1166;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1167(data, threadData);
    threadData->lastEquationSolved = 1167;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1170(data, threadData);
    threadData->lastEquationSolved = 1170;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1171(data, threadData);
    threadData->lastEquationSolved = 1171;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1172(data, threadData);
    threadData->lastEquationSolved = 1172;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1173(data, threadData);
    threadData->lastEquationSolved = 1173;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1174(data, threadData);
    threadData->lastEquationSolved = 1174;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1175(data, threadData);
    threadData->lastEquationSolved = 1175;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1176(data, threadData);
    threadData->lastEquationSolved = 1176;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1177(data, threadData);
    threadData->lastEquationSolved = 1177;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1180(data, threadData);
    threadData->lastEquationSolved = 1180;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1183(data, threadData);
    threadData->lastEquationSolved = 1183;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1184(data, threadData);
    threadData->lastEquationSolved = 1184;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1185(data, threadData);
    threadData->lastEquationSolved = 1185;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1186(data, threadData);
    threadData->lastEquationSolved = 1186;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1187(data, threadData);
    threadData->lastEquationSolved = 1187;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1188(data, threadData);
    threadData->lastEquationSolved = 1188;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1191(data, threadData);
    threadData->lastEquationSolved = 1191;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1192(data, threadData);
    threadData->lastEquationSolved = 1192;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1193(data, threadData);
    threadData->lastEquationSolved = 1193;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1194(data, threadData);
    threadData->lastEquationSolved = 1194;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1195(data, threadData);
    threadData->lastEquationSolved = 1195;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1196(data, threadData);
    threadData->lastEquationSolved = 1196;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1197(data, threadData);
    threadData->lastEquationSolved = 1197;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1198(data, threadData);
    threadData->lastEquationSolved = 1198;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1201(data, threadData);
    threadData->lastEquationSolved = 1201;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1202(data, threadData);
    threadData->lastEquationSolved = 1202;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1203(data, threadData);
    threadData->lastEquationSolved = 1203;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1204(data, threadData);
    threadData->lastEquationSolved = 1204;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1205(data, threadData);
    threadData->lastEquationSolved = 1205;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1206(data, threadData);
    threadData->lastEquationSolved = 1206;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1207(data, threadData);
    threadData->lastEquationSolved = 1207;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1208(data, threadData);
    threadData->lastEquationSolved = 1208;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1211(data, threadData);
    threadData->lastEquationSolved = 1211;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1212(data, threadData);
    threadData->lastEquationSolved = 1212;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1213(data, threadData);
    threadData->lastEquationSolved = 1213;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1214(data, threadData);
    threadData->lastEquationSolved = 1214;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1215(data, threadData);
    threadData->lastEquationSolved = 1215;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1216(data, threadData);
    threadData->lastEquationSolved = 1216;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1217(data, threadData);
    threadData->lastEquationSolved = 1217;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1218(data, threadData);
    threadData->lastEquationSolved = 1218;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1221(data, threadData);
    threadData->lastEquationSolved = 1221;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1222(data, threadData);
    threadData->lastEquationSolved = 1222;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1223(data, threadData);
    threadData->lastEquationSolved = 1223;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1224(data, threadData);
    threadData->lastEquationSolved = 1224;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1225(data, threadData);
    threadData->lastEquationSolved = 1225;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1226(data, threadData);
    threadData->lastEquationSolved = 1226;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1227(data, threadData);
    threadData->lastEquationSolved = 1227;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1228(data, threadData);
    threadData->lastEquationSolved = 1228;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1231(data, threadData);
    threadData->lastEquationSolved = 1231;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1232(data, threadData);
    threadData->lastEquationSolved = 1232;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1233(data, threadData);
    threadData->lastEquationSolved = 1233;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1234(data, threadData);
    threadData->lastEquationSolved = 1234;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1235(data, threadData);
    threadData->lastEquationSolved = 1235;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1236(data, threadData);
    threadData->lastEquationSolved = 1236;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1237(data, threadData);
    threadData->lastEquationSolved = 1237;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1238(data, threadData);
    threadData->lastEquationSolved = 1238;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1241(data, threadData);
    threadData->lastEquationSolved = 1241;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1242(data, threadData);
    threadData->lastEquationSolved = 1242;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1243(data, threadData);
    threadData->lastEquationSolved = 1243;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1244(data, threadData);
    threadData->lastEquationSolved = 1244;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1245(data, threadData);
    threadData->lastEquationSolved = 1245;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1246(data, threadData);
    threadData->lastEquationSolved = 1246;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1247(data, threadData);
    threadData->lastEquationSolved = 1247;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1248(data, threadData);
    threadData->lastEquationSolved = 1248;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1251(data, threadData);
    threadData->lastEquationSolved = 1251;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1253(data, threadData);
    threadData->lastEquationSolved = 1253;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1254(data, threadData);
    threadData->lastEquationSolved = 1254;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1255(data, threadData);
    threadData->lastEquationSolved = 1255;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1256(data, threadData);
    threadData->lastEquationSolved = 1256;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1257(data, threadData);
    threadData->lastEquationSolved = 1257;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1258(data, threadData);
    threadData->lastEquationSolved = 1258;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1261(data, threadData);
    threadData->lastEquationSolved = 1261;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1401(data, threadData);
    threadData->lastEquationSolved = 1401;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1406(data, threadData);
    threadData->lastEquationSolved = 1406;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1407(data, threadData);
    threadData->lastEquationSolved = 1407;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1408(data, threadData);
    threadData->lastEquationSolved = 1408;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1409(data, threadData);
    threadData->lastEquationSolved = 1409;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1410(data, threadData);
    threadData->lastEquationSolved = 1410;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1411(data, threadData);
    threadData->lastEquationSolved = 1411;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1412(data, threadData);
    threadData->lastEquationSolved = 1412;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1413(data, threadData);
    threadData->lastEquationSolved = 1413;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1414(data, threadData);
    threadData->lastEquationSolved = 1414;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1415(data, threadData);
    threadData->lastEquationSolved = 1415;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1416(data, threadData);
    threadData->lastEquationSolved = 1416;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1417(data, threadData);
    threadData->lastEquationSolved = 1417;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1418(data, threadData);
    threadData->lastEquationSolved = 1418;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1419(data, threadData);
    threadData->lastEquationSolved = 1419;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1420(data, threadData);
    threadData->lastEquationSolved = 1420;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1422(data, threadData);
    threadData->lastEquationSolved = 1422;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1424(data, threadData);
    threadData->lastEquationSolved = 1424;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1425(data, threadData);
    threadData->lastEquationSolved = 1425;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1426(data, threadData);
    threadData->lastEquationSolved = 1426;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1427(data, threadData);
    threadData->lastEquationSolved = 1427;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1431(data, threadData);
    threadData->lastEquationSolved = 1431;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1432(data, threadData);
    threadData->lastEquationSolved = 1432;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1433(data, threadData);
    threadData->lastEquationSolved = 1433;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1434(data, threadData);
    threadData->lastEquationSolved = 1434;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1435(data, threadData);
    threadData->lastEquationSolved = 1435;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1436(data, threadData);
    threadData->lastEquationSolved = 1436;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1437(data, threadData);
    threadData->lastEquationSolved = 1437;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1438(data, threadData);
    threadData->lastEquationSolved = 1438;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1439(data, threadData);
    threadData->lastEquationSolved = 1439;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1440(data, threadData);
    threadData->lastEquationSolved = 1440;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1441(data, threadData);
    threadData->lastEquationSolved = 1441;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1442(data, threadData);
    threadData->lastEquationSolved = 1442;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1444(data, threadData);
    threadData->lastEquationSolved = 1444;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1445(data, threadData);
    threadData->lastEquationSolved = 1445;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1446(data, threadData);
    threadData->lastEquationSolved = 1446;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1447(data, threadData);
    threadData->lastEquationSolved = 1447;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1448(data, threadData);
    threadData->lastEquationSolved = 1448;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1449(data, threadData);
    threadData->lastEquationSolved = 1449;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1450(data, threadData);
    threadData->lastEquationSolved = 1450;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1451(data, threadData);
    threadData->lastEquationSolved = 1451;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1452(data, threadData);
    threadData->lastEquationSolved = 1452;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1453(data, threadData);
    threadData->lastEquationSolved = 1453;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1454(data, threadData);
    threadData->lastEquationSolved = 1454;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1455(data, threadData);
    threadData->lastEquationSolved = 1455;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1456(data, threadData);
    threadData->lastEquationSolved = 1456;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1457(data, threadData);
    threadData->lastEquationSolved = 1457;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1458(data, threadData);
    threadData->lastEquationSolved = 1458;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1459(data, threadData);
    threadData->lastEquationSolved = 1459;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1460(data, threadData);
    threadData->lastEquationSolved = 1460;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1461(data, threadData);
    threadData->lastEquationSolved = 1461;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1462(data, threadData);
    threadData->lastEquationSolved = 1462;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1463(data, threadData);
    threadData->lastEquationSolved = 1463;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1465(data, threadData);
    threadData->lastEquationSolved = 1465;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1466(data, threadData);
    threadData->lastEquationSolved = 1466;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1467(data, threadData);
    threadData->lastEquationSolved = 1467;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1468(data, threadData);
    threadData->lastEquationSolved = 1468;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1469(data, threadData);
    threadData->lastEquationSolved = 1469;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1470(data, threadData);
    threadData->lastEquationSolved = 1470;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1471(data, threadData);
    threadData->lastEquationSolved = 1471;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1472(data, threadData);
    threadData->lastEquationSolved = 1472;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1473(data, threadData);
    threadData->lastEquationSolved = 1473;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1474(data, threadData);
    threadData->lastEquationSolved = 1474;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1475(data, threadData);
    threadData->lastEquationSolved = 1475;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1476(data, threadData);
    threadData->lastEquationSolved = 1476;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1477(data, threadData);
    threadData->lastEquationSolved = 1477;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1478(data, threadData);
    threadData->lastEquationSolved = 1478;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1480(data, threadData);
    threadData->lastEquationSolved = 1480;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1481(data, threadData);
    threadData->lastEquationSolved = 1481;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1482(data, threadData);
    threadData->lastEquationSolved = 1482;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1483(data, threadData);
    threadData->lastEquationSolved = 1483;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1484(data, threadData);
    threadData->lastEquationSolved = 1484;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1485(data, threadData);
    threadData->lastEquationSolved = 1485;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1487(data, threadData);
    threadData->lastEquationSolved = 1487;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1488(data, threadData);
    threadData->lastEquationSolved = 1488;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1489(data, threadData);
    threadData->lastEquationSolved = 1489;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1490(data, threadData);
    threadData->lastEquationSolved = 1490;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1491(data, threadData);
    threadData->lastEquationSolved = 1491;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1492(data, threadData);
    threadData->lastEquationSolved = 1492;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1493(data, threadData);
    threadData->lastEquationSolved = 1493;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1495(data, threadData);
    threadData->lastEquationSolved = 1495;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1496(data, threadData);
    threadData->lastEquationSolved = 1496;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1497(data, threadData);
    threadData->lastEquationSolved = 1497;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1498(data, threadData);
    threadData->lastEquationSolved = 1498;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1499(data, threadData);
    threadData->lastEquationSolved = 1499;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1500(data, threadData);
    threadData->lastEquationSolved = 1500;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1501(data, threadData);
    threadData->lastEquationSolved = 1501;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1502(data, threadData);
    threadData->lastEquationSolved = 1502;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1503(data, threadData);
    threadData->lastEquationSolved = 1503;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1504(data, threadData);
    threadData->lastEquationSolved = 1504;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1505(data, threadData);
    threadData->lastEquationSolved = 1505;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1506(data, threadData);
    threadData->lastEquationSolved = 1506;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1507(data, threadData);
    threadData->lastEquationSolved = 1507;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1508(data, threadData);
    threadData->lastEquationSolved = 1508;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1509(data, threadData);
    threadData->lastEquationSolved = 1509;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1510(data, threadData);
    threadData->lastEquationSolved = 1510;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1511(data, threadData);
    threadData->lastEquationSolved = 1511;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1513(data, threadData);
    threadData->lastEquationSolved = 1513;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1514(data, threadData);
    threadData->lastEquationSolved = 1514;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1515(data, threadData);
    threadData->lastEquationSolved = 1515;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1516(data, threadData);
    threadData->lastEquationSolved = 1516;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1518(data, threadData);
    threadData->lastEquationSolved = 1518;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1519(data, threadData);
    threadData->lastEquationSolved = 1519;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1520(data, threadData);
    threadData->lastEquationSolved = 1520;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1521(data, threadData);
    threadData->lastEquationSolved = 1521;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1522(data, threadData);
    threadData->lastEquationSolved = 1522;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1523(data, threadData);
    threadData->lastEquationSolved = 1523;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1524(data, threadData);
    threadData->lastEquationSolved = 1524;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1525(data, threadData);
    threadData->lastEquationSolved = 1525;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1526(data, threadData);
    threadData->lastEquationSolved = 1526;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1527(data, threadData);
    threadData->lastEquationSolved = 1527;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1530(data, threadData);
    threadData->lastEquationSolved = 1530;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1531(data, threadData);
    threadData->lastEquationSolved = 1531;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1532(data, threadData);
    threadData->lastEquationSolved = 1532;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1533(data, threadData);
    threadData->lastEquationSolved = 1533;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1534(data, threadData);
    threadData->lastEquationSolved = 1534;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1536(data, threadData);
    threadData->lastEquationSolved = 1536;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1537(data, threadData);
    threadData->lastEquationSolved = 1537;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1538(data, threadData);
    threadData->lastEquationSolved = 1538;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1539(data, threadData);
    threadData->lastEquationSolved = 1539;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1540(data, threadData);
    threadData->lastEquationSolved = 1540;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1541(data, threadData);
    threadData->lastEquationSolved = 1541;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1542(data, threadData);
    threadData->lastEquationSolved = 1542;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1543(data, threadData);
    threadData->lastEquationSolved = 1543;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1545(data, threadData);
    threadData->lastEquationSolved = 1545;
  }
  {
    SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1546(data, threadData);
    threadData->lastEquationSolved = 1546;
  }
}

int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_12jac.h"
#include "SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_callback = {
   NULL,    /* performSimulation */
   NULL,    /* performQSSSimulation */
   NULL,    /* updateContinuousSystem */
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_callExternalObjectDestructors,    /* callExternalObjectDestructors */
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_initialNonLinearSystem,    /* initialNonLinearSystem */
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_initialLinearSystem,    /* initialLinearSystem */
   NULL,    /* initialMixedSystem */
   #if !defined(OMC_NO_STATESELECTION)
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_initializeStateSets,
   #else
   NULL,
   #endif    /* initializeStateSets */
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_initializeDAEmodeData,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionODE,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionAlgebraics,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionDAE,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionLocalKnownVars,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_input_function,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_input_function_init,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_input_function_updateStartValues,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_data_function,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_output_function,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_setc_function,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_function_storeDelayed,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_function_storeSpatialDistribution,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_function_initSpatialDistribution,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_updateBoundVariableAttributes,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionInitialEquations_lambda0,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionRemovedInitialEquations,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_updateBoundParameters,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_checkForAsserts,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_function_ZeroCrossingsEquations,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_function_ZeroCrossings,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_function_updateRelations,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_zeroCrossingDescription,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_relationDescription,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_function_initSample,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_INDEX_JAC_A,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_INDEX_JAC_B,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_INDEX_JAC_C,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_INDEX_JAC_D,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_INDEX_JAC_F,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_initialAnalyticJacobianA,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_initialAnalyticJacobianB,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_initialAnalyticJacobianC,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_initialAnalyticJacobianD,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_initialAnalyticJacobianF,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionJacA_column,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionJacB_column,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionJacC_column,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionJacD_column,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionJacF_column,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_linear_model_frame,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_linear_model_datarecovery_frame,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_mayer,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_lagrange,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_pickUpBoundsForInputsInOptimization,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_setInputData,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_getTimeGrid,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_symbolicInlineSystem,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_function_initSynchronous,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_function_updateSynchronous,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_function_equationsSynchronous,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_inputNames,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_dataReconciliationInputNames,
   SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_read_input_fmu,
   NULL,
   NULL,
   -1,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Complex"
#define _OMC_LIT_RESOURCE_0_dir_data "C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,7,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,55,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Modelica"
#define _OMC_LIT_RESOURCE_1_dir_data "C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,8,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,70,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_2_dir_data "C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/ModelicaServices 4.0.0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,16,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,78,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "SimpleDistricHeating"
#define _OMC_LIT_RESOURCE_3_dir_data "C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,20,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,61,_OMC_LIT_RESOURCE_3_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,8,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir)}};
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "SimpleDistricHeating.Examples.MultiLoad.Aroma_sim";
  data->modelData->modelFilePrefix = "SimpleDistricHeating_Examples_MultiLoad_Aroma_sim";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica";
  data->modelData->modelGUID = "{e88ef2ca-b341-4467-9eea-b2d196a95127}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 75;
  data->modelData->nVariablesReal = 543;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 1;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 692;
  data->modelData->nParametersInteger = 44;
  data->modelData->nParametersBoolean = 70;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 6;
  data->modelData->nOutputVars = 21;
  
  data->modelData->nAliasReal = 412;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 20;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 19;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_info.json", data->modelData->resourcesDir);
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 2;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 2355;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 3;
  data->modelData->nNonLinearSystems = 3;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 9;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  
  data->modelData->nDelayExpressions = 0;
  
  data->modelData->nBaseClocks = 0;
  
  data->modelData->nSpatialDistributions = 0;
  
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
  data->modelData->linearizationDumpLanguage =
  OMC_LINEARIZE_DUMP_LANGUAGE_MODELICA;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}

