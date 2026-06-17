/* Non Linear Systems */
#include "SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_model.h"
#include "SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 236
type: SIMPLE_ASSIGN
load5.outlet.h_out = load5.inlet.h_out + P_load5 / max(mfr_load[5], load5.load.b)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,236};
  (data->localData[0]->realVars[301]/* load5.outlet.h_out variable */)  = (data->localData[0]->realVars[290]/* load5.inlet.h_out variable */)  + DIVISION_SIM((data->localData[0]->realVars[199]/* P_load5 variable */) ,fmax((data->localData[0]->realVars[307]/* mfr_load[5] variable */) ,(data->simulationInfo->realParameter[253]/* load5.load.b PARAM */) ),"max(mfr_load[5], load5.load.b)",equationIndexes);
  TRACE_POP
}
/*
equation index: 237
type: SIMPLE_ASSIGN
Tr_load[5] = if mfr_load[5] > 0.0 then -273.15 + 0.0002389486260454002 * load5.outlet.h_out else -273.15 + 0.0002389486260454002 * r87.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  modelica_boolean tmp0;
  tmp0 = Greater((data->localData[0]->realVars[307]/* mfr_load[5] variable */) ,0.0);
  (data->localData[0]->realVars[210]/* Tr_load[5] variable */)  = (tmp0?-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[301]/* load5.outlet.h_out variable */) ):-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[423]/* r87.inlet.h_out variable */) ));
  TRACE_POP
}
/*
equation index: 238
type: SIMPLE_ASSIGN
load5.loadValveControl.addP.y = load5.loadValveControl.addP.k1 * load_ref.k + load5.loadValveControl.addP.k2 * Tr_load[5]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  (data->localData[0]->realVars[295]/* load5.loadValveControl.addP.y variable */)  = ((data->simulationInfo->realParameter[273]/* load5.loadValveControl.addP.k1 PARAM */) ) * ((data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ) + ((data->simulationInfo->realParameter[274]/* load5.loadValveControl.addP.k2 PARAM */) ) * ((data->localData[0]->realVars[210]/* Tr_load[5] variable */) );
  TRACE_POP
}
/*
equation index: 239
type: SIMPLE_ASSIGN
load5.loadValveControl.P.y = load5.loadValveControl.P.k * load5.loadValveControl.addP.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  (data->localData[0]->realVars[294]/* load5.loadValveControl.P.y variable */)  = ((data->simulationInfo->realParameter[267]/* load5.loadValveControl.P.k PARAM */) ) * ((data->localData[0]->realVars[295]/* load5.loadValveControl.addP.y variable */) );
  TRACE_POP
}
/*
equation index: 240
type: SIMPLE_ASSIGN
load5.loadValveControl.addPID.y = load5.loadValveControl.addPID.k1 * load5.loadValveControl.P.y + load5.loadValveControl.addPID.k2 * load5.loadValveControl.Dzero.k + load5.loadValveControl.addPID.k3 * load5.loadValveControl.Izero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  (data->localData[0]->realVars[296]/* load5.loadValveControl.addPID.y variable */)  = ((data->simulationInfo->realParameter[276]/* load5.loadValveControl.addPID.k1 PARAM */) ) * ((data->localData[0]->realVars[294]/* load5.loadValveControl.P.y variable */) ) + ((data->simulationInfo->realParameter[277]/* load5.loadValveControl.addPID.k2 PARAM */) ) * ((data->simulationInfo->realParameter[259]/* load5.loadValveControl.Dzero.k PARAM */) ) + ((data->simulationInfo->realParameter[278]/* load5.loadValveControl.addPID.k3 PARAM */) ) * ((data->simulationInfo->realParameter[263]/* load5.loadValveControl.Izero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 241
type: SIMPLE_ASSIGN
load5.loadValveControl.gainPID.y = load5.loadValveControl.gainPID.k * load5.loadValveControl.addPID.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  (data->localData[0]->realVars[298]/* load5.loadValveControl.gainPID.y variable */)  = ((data->simulationInfo->realParameter[281]/* load5.loadValveControl.gainPID.k PARAM */) ) * ((data->localData[0]->realVars[296]/* load5.loadValveControl.addPID.y variable */) );
  TRACE_POP
}
/*
equation index: 242
type: SIMPLE_ASSIGN
load5.loadValveControl.limiter.u = load5.loadValveControl.addFF.k1 * load5.loadValveControl.gainPID.y + load5.loadValveControl.addFF.k2 * load5.loadValveControl.FFzero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  (data->localData[0]->realVars[299]/* load5.loadValveControl.limiter.u variable */)  = ((data->simulationInfo->realParameter[270]/* load5.loadValveControl.addFF.k1 PARAM */) ) * ((data->localData[0]->realVars[298]/* load5.loadValveControl.gainPID.y variable */) ) + ((data->simulationInfo->realParameter[271]/* load5.loadValveControl.addFF.k2 PARAM */) ) * ((data->simulationInfo->realParameter[261]/* load5.loadValveControl.FFzero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 243
type: SIMPLE_ASSIGN
load5.loadValveControl.y = homotopy(smooth(0, if load5.loadValveControl.limiter.u > load5.loadValveControl.limiter.uMax then load5.loadValveControl.limiter.uMax else if load5.loadValveControl.limiter.u < load5.loadValveControl.limiter.uMin then load5.loadValveControl.limiter.uMin else load5.loadValveControl.limiter.u), load5.loadValveControl.limiter.u)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater((data->localData[0]->realVars[299]/* load5.loadValveControl.limiter.u variable */) ,(data->simulationInfo->realParameter[284]/* load5.loadValveControl.limiter.uMax PARAM */) );
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = (data->simulationInfo->realParameter[284]/* load5.loadValveControl.limiter.uMax PARAM */) ;
  }
  else
  {
    tmp1 = Less((data->localData[0]->realVars[299]/* load5.loadValveControl.limiter.u variable */) ,(data->simulationInfo->realParameter[285]/* load5.loadValveControl.limiter.uMin PARAM */) );
    tmp3 = (tmp1?(data->simulationInfo->realParameter[285]/* load5.loadValveControl.limiter.uMin PARAM */) :(data->localData[0]->realVars[299]/* load5.loadValveControl.limiter.u variable */) );
  }
  (data->localData[0]->realVars[300]/* load5.loadValveControl.y variable */)  = homotopy(tmp3, (data->localData[0]->realVars[299]/* load5.loadValveControl.limiter.u variable */) );
  TRACE_POP
}
/*
equation index: 244
type: SIMPLE_ASSIGN
s78.u = mfr_load[5] / (985.0 * s78.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  (data->localData[0]->realVars[541]/* s78.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[307]/* mfr_load[5] variable */) ,(985.0) * ((data->simulationInfo->realParameter[669]/* s78.A PARAM */) ),"985.0 * s78.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 245
type: SIMPLE_ASSIGN
r87.u = mfr_load[5] / (985.0 * r87.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  (data->localData[0]->realVars[428]/* r87.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[307]/* mfr_load[5] variable */) ,(985.0) * ((data->simulationInfo->realParameter[476]/* r87.A PARAM */) ),"985.0 * r87.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 246
type: SIMPLE_ASSIGN
load3.outlet.h_out = load3.inlet.h_out + P_load3 / max(mfr_load[3], load3.load.b)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  (data->localData[0]->realVars[274]/* load3.outlet.h_out variable */)  = (data->localData[0]->realVars[263]/* load3.inlet.h_out variable */)  + DIVISION_SIM((data->localData[0]->realVars[197]/* P_load3 variable */) ,fmax((data->localData[0]->realVars[305]/* mfr_load[3] variable */) ,(data->simulationInfo->realParameter[159]/* load3.load.b PARAM */) ),"max(mfr_load[3], load3.load.b)",equationIndexes);
  TRACE_POP
}
/*
equation index: 247
type: SIMPLE_ASSIGN
Tr_load[3] = if mfr_load[3] > 0.0 then -273.15 + 0.0002389486260454002 * load3.outlet.h_out else -273.15 + 0.0002389486260454002 * r54.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  modelica_boolean tmp0;
  tmp0 = Greater((data->localData[0]->realVars[305]/* mfr_load[3] variable */) ,0.0);
  (data->localData[0]->realVars[208]/* Tr_load[3] variable */)  = (tmp0?-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[274]/* load3.outlet.h_out variable */) ):-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[370]/* r54.inlet.h_out variable */) ));
  TRACE_POP
}
/*
equation index: 248
type: SIMPLE_ASSIGN
load3.loadValveControl.addP.y = load3.loadValveControl.addP.k1 * load_ref.k + load3.loadValveControl.addP.k2 * Tr_load[3]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  (data->localData[0]->realVars[268]/* load3.loadValveControl.addP.y variable */)  = ((data->simulationInfo->realParameter[179]/* load3.loadValveControl.addP.k1 PARAM */) ) * ((data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ) + ((data->simulationInfo->realParameter[180]/* load3.loadValveControl.addP.k2 PARAM */) ) * ((data->localData[0]->realVars[208]/* Tr_load[3] variable */) );
  TRACE_POP
}
/*
equation index: 249
type: SIMPLE_ASSIGN
load3.loadValveControl.P.y = load3.loadValveControl.P.k * load3.loadValveControl.addP.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  (data->localData[0]->realVars[267]/* load3.loadValveControl.P.y variable */)  = ((data->simulationInfo->realParameter[173]/* load3.loadValveControl.P.k PARAM */) ) * ((data->localData[0]->realVars[268]/* load3.loadValveControl.addP.y variable */) );
  TRACE_POP
}
/*
equation index: 250
type: SIMPLE_ASSIGN
load3.loadValveControl.addPID.y = load3.loadValveControl.addPID.k1 * load3.loadValveControl.P.y + load3.loadValveControl.addPID.k2 * load3.loadValveControl.Dzero.k + load3.loadValveControl.addPID.k3 * load3.loadValveControl.Izero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  (data->localData[0]->realVars[269]/* load3.loadValveControl.addPID.y variable */)  = ((data->simulationInfo->realParameter[182]/* load3.loadValveControl.addPID.k1 PARAM */) ) * ((data->localData[0]->realVars[267]/* load3.loadValveControl.P.y variable */) ) + ((data->simulationInfo->realParameter[183]/* load3.loadValveControl.addPID.k2 PARAM */) ) * ((data->simulationInfo->realParameter[165]/* load3.loadValveControl.Dzero.k PARAM */) ) + ((data->simulationInfo->realParameter[184]/* load3.loadValveControl.addPID.k3 PARAM */) ) * ((data->simulationInfo->realParameter[169]/* load3.loadValveControl.Izero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 251
type: SIMPLE_ASSIGN
load3.loadValveControl.gainPID.y = load3.loadValveControl.gainPID.k * load3.loadValveControl.addPID.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  (data->localData[0]->realVars[271]/* load3.loadValveControl.gainPID.y variable */)  = ((data->simulationInfo->realParameter[187]/* load3.loadValveControl.gainPID.k PARAM */) ) * ((data->localData[0]->realVars[269]/* load3.loadValveControl.addPID.y variable */) );
  TRACE_POP
}
/*
equation index: 252
type: SIMPLE_ASSIGN
load3.loadValveControl.limiter.u = load3.loadValveControl.addFF.k1 * load3.loadValveControl.gainPID.y + load3.loadValveControl.addFF.k2 * load3.loadValveControl.FFzero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  (data->localData[0]->realVars[272]/* load3.loadValveControl.limiter.u variable */)  = ((data->simulationInfo->realParameter[176]/* load3.loadValveControl.addFF.k1 PARAM */) ) * ((data->localData[0]->realVars[271]/* load3.loadValveControl.gainPID.y variable */) ) + ((data->simulationInfo->realParameter[177]/* load3.loadValveControl.addFF.k2 PARAM */) ) * ((data->simulationInfo->realParameter[167]/* load3.loadValveControl.FFzero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 253
type: SIMPLE_ASSIGN
load3.loadValveControl.y = homotopy(smooth(0, if load3.loadValveControl.limiter.u > load3.loadValveControl.limiter.uMax then load3.loadValveControl.limiter.uMax else if load3.loadValveControl.limiter.u < load3.loadValveControl.limiter.uMin then load3.loadValveControl.limiter.uMin else load3.loadValveControl.limiter.u), load3.loadValveControl.limiter.u)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater((data->localData[0]->realVars[272]/* load3.loadValveControl.limiter.u variable */) ,(data->simulationInfo->realParameter[190]/* load3.loadValveControl.limiter.uMax PARAM */) );
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = (data->simulationInfo->realParameter[190]/* load3.loadValveControl.limiter.uMax PARAM */) ;
  }
  else
  {
    tmp1 = Less((data->localData[0]->realVars[272]/* load3.loadValveControl.limiter.u variable */) ,(data->simulationInfo->realParameter[191]/* load3.loadValveControl.limiter.uMin PARAM */) );
    tmp3 = (tmp1?(data->simulationInfo->realParameter[191]/* load3.loadValveControl.limiter.uMin PARAM */) :(data->localData[0]->realVars[272]/* load3.loadValveControl.limiter.u variable */) );
  }
  (data->localData[0]->realVars[273]/* load3.loadValveControl.y variable */)  = homotopy(tmp3, (data->localData[0]->realVars[272]/* load3.loadValveControl.limiter.u variable */) );
  TRACE_POP
}
/*
equation index: 254
type: SIMPLE_ASSIGN
s45.u = mfr_load[3] / (985.0 * s45.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  (data->localData[0]->realVars[503]/* s45.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[305]/* mfr_load[3] variable */) ,(985.0) * ((data->simulationInfo->realParameter[606]/* s45.A PARAM */) ),"985.0 * s45.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 255
type: SIMPLE_ASSIGN
r54.u = mfr_load[3] / (985.0 * r54.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  (data->localData[0]->realVars[374]/* r54.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[305]/* mfr_load[3] variable */) ,(985.0) * ((data->simulationInfo->realParameter[392]/* r54.A PARAM */) ),"985.0 * r54.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 256
type: SIMPLE_ASSIGN
s23.u = s23.m_flow / (985.0 * s23.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  (data->localData[0]->realVars[478]/* s23.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[474]/* s23.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[564]/* s23.A PARAM */) ),"985.0 * s23.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 257
type: SIMPLE_ASSIGN
load2.inlet.h_out = (max(-s34.m_flow, 1e-07) * s34.inlet.h_out + max(s23.m_flow, 1e-07) * s23.outlet.h_out) / (max(-s34.m_flow, 1e-07) + max(s23.m_flow, 1e-07))
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  (data->localData[0]->realVars[249]/* load2.inlet.h_out variable */)  = DIVISION_SIM((fmax((-(data->localData[0]->realVars[487]/* s34.m_flow variable */) ),1e-07)) * ((data->localData[0]->realVars[486]/* s34.inlet.h_out variable */) ) + (fmax((data->localData[0]->realVars[474]/* s23.m_flow variable */) ,1e-07)) * ((data->localData[0]->realVars[475]/* s23.outlet.h_out variable */) ),fmax((-(data->localData[0]->realVars[487]/* s34.m_flow variable */) ),1e-07) + fmax((data->localData[0]->realVars[474]/* s23.m_flow variable */) ,1e-07),"max(-s34.m_flow, 1e-07) + max(s23.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 258
type: SIMPLE_ASSIGN
s34.u = s34.m_flow / (985.0 * s34.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  (data->localData[0]->realVars[492]/* s34.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[487]/* s34.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[585]/* s34.A PARAM */) ),"985.0 * s34.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 259
type: SIMPLE_ASSIGN
s47.m_flow = s34.m_flow - mfr_load[3]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  (data->localData[0]->realVars[512]/* s47.m_flow variable */)  = (data->localData[0]->realVars[487]/* s34.m_flow variable */)  - (data->localData[0]->realVars[305]/* mfr_load[3] variable */) ;
  TRACE_POP
}
/*
equation index: 260
type: SIMPLE_ASSIGN
s47.u = s47.m_flow / (985.0 * s47.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  (data->localData[0]->realVars[517]/* s47.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[512]/* s47.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[627]/* s47.A PARAM */) ),"985.0 * s47.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 261
type: SIMPLE_ASSIGN
s67.m_flow = mfr_load[5] - s47.m_flow
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  (data->localData[0]->realVars[526]/* s67.m_flow variable */)  = (data->localData[0]->realVars[307]/* mfr_load[5] variable */)  - (data->localData[0]->realVars[512]/* s47.m_flow variable */) ;
  TRACE_POP
}
/*
equation index: 262
type: SIMPLE_ASSIGN
s67.u = s67.m_flow / (985.0 * s67.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  (data->localData[0]->realVars[530]/* s67.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[526]/* s67.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[648]/* s67.A PARAM */) ),"985.0 * s67.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 263
type: SIMPLE_ASSIGN
mfr_load[2] = s23.m_flow - s34.m_flow
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  (data->localData[0]->realVars[304]/* mfr_load[2] variable */)  = (data->localData[0]->realVars[474]/* s23.m_flow variable */)  - (data->localData[0]->realVars[487]/* s34.m_flow variable */) ;
  TRACE_POP
}
/*
equation index: 264
type: SIMPLE_ASSIGN
load2.outlet.h_out = load2.inlet.h_out + P_load2 / max(mfr_load[2], load2.load.b)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  (data->localData[0]->realVars[261]/* load2.outlet.h_out variable */)  = (data->localData[0]->realVars[249]/* load2.inlet.h_out variable */)  + DIVISION_SIM((data->localData[0]->realVars[196]/* P_load2 variable */) ,fmax((data->localData[0]->realVars[304]/* mfr_load[2] variable */) ,(data->simulationInfo->realParameter[112]/* load2.load.b PARAM */) ),"max(mfr_load[2], load2.load.b)",equationIndexes);
  TRACE_POP
}
/*
equation index: 265
type: SIMPLE_ASSIGN
r32.u = r32.m_flow / (985.0 * r32.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  (data->localData[0]->realVars[349]/* r32.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[345]/* r32.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[350]/* r32.A PARAM */) ),"985.0 * r32.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 266
type: SIMPLE_ASSIGN
r43.m_flow = r32.m_flow - mfr_load[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  (data->localData[0]->realVars[358]/* r43.m_flow variable */)  = (data->localData[0]->realVars[345]/* r32.m_flow variable */)  - (data->localData[0]->realVars[304]/* mfr_load[2] variable */) ;
  TRACE_POP
}
/*
equation index: 267
type: SIMPLE_ASSIGN
load2.mfr_s.inlet.h_out = (max(-r32.m_flow, 1e-07) * r32.inlet.h_out + max(r43.m_flow, 1e-07) * r43.outlet.h_out) / (max(-r32.m_flow, 1e-07) + max(r43.m_flow, 1e-07))
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  (data->localData[0]->realVars[260]/* load2.mfr_s.inlet.h_out variable */)  = DIVISION_SIM((fmax((-(data->localData[0]->realVars[345]/* r32.m_flow variable */) ),1e-07)) * ((data->localData[0]->realVars[344]/* r32.inlet.h_out variable */) ) + (fmax((data->localData[0]->realVars[358]/* r43.m_flow variable */) ,1e-07)) * ((data->localData[0]->realVars[359]/* r43.outlet.h_out variable */) ),fmax((-(data->localData[0]->realVars[345]/* r32.m_flow variable */) ),1e-07) + fmax((data->localData[0]->realVars[358]/* r43.m_flow variable */) ,1e-07),"max(-r32.m_flow, 1e-07) + max(r43.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 268
type: SIMPLE_ASSIGN
Tr_load[2] = if mfr_load[2] > 0.0 then -273.15 + 0.0002389486260454002 * load2.outlet.h_out else -273.15 + 0.0002389486260454002 * load2.mfr_s.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  modelica_boolean tmp0;
  tmp0 = Greater((data->localData[0]->realVars[304]/* mfr_load[2] variable */) ,0.0);
  (data->localData[0]->realVars[207]/* Tr_load[2] variable */)  = (tmp0?-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[261]/* load2.outlet.h_out variable */) ):-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[260]/* load2.mfr_s.inlet.h_out variable */) ));
  TRACE_POP
}
/*
equation index: 269
type: SIMPLE_ASSIGN
load2.loadValveControl.addP.y = load2.loadValveControl.addP.k1 * load_ref.k + load2.loadValveControl.addP.k2 * Tr_load[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  (data->localData[0]->realVars[254]/* load2.loadValveControl.addP.y variable */)  = ((data->simulationInfo->realParameter[132]/* load2.loadValveControl.addP.k1 PARAM */) ) * ((data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ) + ((data->simulationInfo->realParameter[133]/* load2.loadValveControl.addP.k2 PARAM */) ) * ((data->localData[0]->realVars[207]/* Tr_load[2] variable */) );
  TRACE_POP
}
/*
equation index: 270
type: SIMPLE_ASSIGN
load2.loadValveControl.P.y = load2.loadValveControl.P.k * load2.loadValveControl.addP.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  (data->localData[0]->realVars[253]/* load2.loadValveControl.P.y variable */)  = ((data->simulationInfo->realParameter[126]/* load2.loadValveControl.P.k PARAM */) ) * ((data->localData[0]->realVars[254]/* load2.loadValveControl.addP.y variable */) );
  TRACE_POP
}
/*
equation index: 271
type: SIMPLE_ASSIGN
load2.loadValveControl.addPID.y = load2.loadValveControl.addPID.k1 * load2.loadValveControl.P.y + load2.loadValveControl.addPID.k2 * load2.loadValveControl.Dzero.k + load2.loadValveControl.addPID.k3 * load2.loadValveControl.Izero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  (data->localData[0]->realVars[255]/* load2.loadValveControl.addPID.y variable */)  = ((data->simulationInfo->realParameter[135]/* load2.loadValveControl.addPID.k1 PARAM */) ) * ((data->localData[0]->realVars[253]/* load2.loadValveControl.P.y variable */) ) + ((data->simulationInfo->realParameter[136]/* load2.loadValveControl.addPID.k2 PARAM */) ) * ((data->simulationInfo->realParameter[118]/* load2.loadValveControl.Dzero.k PARAM */) ) + ((data->simulationInfo->realParameter[137]/* load2.loadValveControl.addPID.k3 PARAM */) ) * ((data->simulationInfo->realParameter[122]/* load2.loadValveControl.Izero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 272
type: SIMPLE_ASSIGN
load2.loadValveControl.gainPID.y = load2.loadValveControl.gainPID.k * load2.loadValveControl.addPID.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  (data->localData[0]->realVars[257]/* load2.loadValveControl.gainPID.y variable */)  = ((data->simulationInfo->realParameter[140]/* load2.loadValveControl.gainPID.k PARAM */) ) * ((data->localData[0]->realVars[255]/* load2.loadValveControl.addPID.y variable */) );
  TRACE_POP
}
/*
equation index: 273
type: SIMPLE_ASSIGN
load2.loadValveControl.limiter.u = load2.loadValveControl.addFF.k1 * load2.loadValveControl.gainPID.y + load2.loadValveControl.addFF.k2 * load2.loadValveControl.FFzero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  (data->localData[0]->realVars[258]/* load2.loadValveControl.limiter.u variable */)  = ((data->simulationInfo->realParameter[129]/* load2.loadValveControl.addFF.k1 PARAM */) ) * ((data->localData[0]->realVars[257]/* load2.loadValveControl.gainPID.y variable */) ) + ((data->simulationInfo->realParameter[130]/* load2.loadValveControl.addFF.k2 PARAM */) ) * ((data->simulationInfo->realParameter[120]/* load2.loadValveControl.FFzero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 274
type: SIMPLE_ASSIGN
load2.loadValveControl.y = homotopy(smooth(0, if load2.loadValveControl.limiter.u > load2.loadValveControl.limiter.uMax then load2.loadValveControl.limiter.uMax else if load2.loadValveControl.limiter.u < load2.loadValveControl.limiter.uMin then load2.loadValveControl.limiter.uMin else load2.loadValveControl.limiter.u), load2.loadValveControl.limiter.u)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater((data->localData[0]->realVars[258]/* load2.loadValveControl.limiter.u variable */) ,(data->simulationInfo->realParameter[143]/* load2.loadValveControl.limiter.uMax PARAM */) );
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = (data->simulationInfo->realParameter[143]/* load2.loadValveControl.limiter.uMax PARAM */) ;
  }
  else
  {
    tmp1 = Less((data->localData[0]->realVars[258]/* load2.loadValveControl.limiter.u variable */) ,(data->simulationInfo->realParameter[144]/* load2.loadValveControl.limiter.uMin PARAM */) );
    tmp3 = (tmp1?(data->simulationInfo->realParameter[144]/* load2.loadValveControl.limiter.uMin PARAM */) :(data->localData[0]->realVars[258]/* load2.loadValveControl.limiter.u variable */) );
  }
  (data->localData[0]->realVars[259]/* load2.loadValveControl.y variable */)  = homotopy(tmp3, (data->localData[0]->realVars[258]/* load2.loadValveControl.limiter.u variable */) );
  TRACE_POP
}
/*
equation index: 275
type: SIMPLE_ASSIGN
r43.u = r43.m_flow / (985.0 * r43.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  (data->localData[0]->realVars[362]/* r43.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[358]/* r43.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[371]/* r43.A PARAM */) ),"985.0 * r43.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 276
type: SIMPLE_ASSIGN
r74.m_flow = r43.m_flow - mfr_load[3]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  (data->localData[0]->realVars[397]/* r74.m_flow variable */)  = (data->localData[0]->realVars[358]/* r43.m_flow variable */)  - (data->localData[0]->realVars[305]/* mfr_load[3] variable */) ;
  TRACE_POP
}
/*
equation index: 277
type: SIMPLE_ASSIGN
r74.u = r74.m_flow / (985.0 * r74.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  (data->localData[0]->realVars[402]/* r74.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[397]/* r74.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[434]/* r74.A PARAM */) ),"985.0 * r74.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 278
type: SIMPLE_ASSIGN
r76.m_flow = mfr_load[5] - r74.m_flow
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  (data->localData[0]->realVars[411]/* r76.m_flow variable */)  = (data->localData[0]->realVars[307]/* mfr_load[5] variable */)  - (data->localData[0]->realVars[397]/* r74.m_flow variable */) ;
  TRACE_POP
}
/*
equation index: 279
type: SIMPLE_ASSIGN
r76.u = r76.m_flow / (985.0 * r76.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  (data->localData[0]->realVars[415]/* r76.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[411]/* r76.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[455]/* r76.A PARAM */) ),"985.0 * r76.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 280
type: SIMPLE_ASSIGN
load1.inlet.h_out = (max(-s23.m_flow, 1e-07) * s23.inlet.h_out + max(s12.m_flow, 1e-07) * s12.outlet.h_out) / (max(-s23.m_flow, 1e-07) + max(s12.m_flow, 1e-07))
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  (data->localData[0]->realVars[235]/* load1.inlet.h_out variable */)  = DIVISION_SIM((fmax((-(data->localData[0]->realVars[474]/* s23.m_flow variable */) ),1e-07)) * ((data->localData[0]->realVars[473]/* s23.inlet.h_out variable */) ) + (fmax((data->localData[0]->realVars[448]/* s12.m_flow variable */) ,1e-07)) * ((data->localData[0]->realVars[449]/* s12.outlet.h_out variable */) ),fmax((-(data->localData[0]->realVars[474]/* s23.m_flow variable */) ),1e-07) + fmax((data->localData[0]->realVars[448]/* s12.m_flow variable */) ,1e-07),"max(-s23.m_flow, 1e-07) + max(s12.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 281
type: SIMPLE_ASSIGN
s12.u = s12.m_flow / (985.0 * s12.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  (data->localData[0]->realVars[452]/* s12.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[448]/* s12.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[522]/* s12.A PARAM */) ),"985.0 * s12.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 282
type: SIMPLE_ASSIGN
mfr_load[1] = s12.m_flow - s23.m_flow
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  (data->localData[0]->realVars[303]/* mfr_load[1] variable */)  = (data->localData[0]->realVars[448]/* s12.m_flow variable */)  - (data->localData[0]->realVars[474]/* s23.m_flow variable */) ;
  TRACE_POP
}
/*
equation index: 283
type: SIMPLE_ASSIGN
load1.outlet.h_out = load1.inlet.h_out + P_load1 / max(mfr_load[1], load1.load.b)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  (data->localData[0]->realVars[247]/* load1.outlet.h_out variable */)  = (data->localData[0]->realVars[235]/* load1.inlet.h_out variable */)  + DIVISION_SIM((data->localData[0]->realVars[195]/* P_load1 variable */) ,fmax((data->localData[0]->realVars[303]/* mfr_load[1] variable */) ,(data->simulationInfo->realParameter[65]/* load1.load.b PARAM */) ),"max(mfr_load[1], load1.load.b)",equationIndexes);
  TRACE_POP
}
/*
equation index: 284
type: SIMPLE_ASSIGN
r21.m_flow = r32.m_flow + mfr_load[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  (data->localData[0]->realVars[332]/* r21.m_flow variable */)  = (data->localData[0]->realVars[345]/* r32.m_flow variable */)  + (data->localData[0]->realVars[303]/* mfr_load[1] variable */) ;
  TRACE_POP
}
/*
equation index: 285
type: SIMPLE_ASSIGN
load1.mfr_s.inlet.h_out = (max(r32.m_flow, 1e-07) * r32.outlet.h_out + max(-r21.m_flow, 1e-07) * r21.inlet.h_out) / (max(r32.m_flow, 1e-07) + max(-r21.m_flow, 1e-07))
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  (data->localData[0]->realVars[246]/* load1.mfr_s.inlet.h_out variable */)  = DIVISION_SIM((fmax((data->localData[0]->realVars[345]/* r32.m_flow variable */) ,1e-07)) * ((data->localData[0]->realVars[346]/* r32.outlet.h_out variable */) ) + (fmax((-(data->localData[0]->realVars[332]/* r21.m_flow variable */) ),1e-07)) * ((data->localData[0]->realVars[331]/* r21.inlet.h_out variable */) ),fmax((data->localData[0]->realVars[345]/* r32.m_flow variable */) ,1e-07) + fmax((-(data->localData[0]->realVars[332]/* r21.m_flow variable */) ),1e-07),"max(r32.m_flow, 1e-07) + max(-r21.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 286
type: SIMPLE_ASSIGN
Tr_load[1] = if mfr_load[1] > 0.0 then -273.15 + 0.0002389486260454002 * load1.outlet.h_out else -273.15 + 0.0002389486260454002 * load1.mfr_s.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  modelica_boolean tmp0;
  tmp0 = Greater((data->localData[0]->realVars[303]/* mfr_load[1] variable */) ,0.0);
  (data->localData[0]->realVars[206]/* Tr_load[1] variable */)  = (tmp0?-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[247]/* load1.outlet.h_out variable */) ):-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[246]/* load1.mfr_s.inlet.h_out variable */) ));
  TRACE_POP
}
/*
equation index: 287
type: SIMPLE_ASSIGN
load1.loadValveControl.addP.y = load1.loadValveControl.addP.k1 * load_ref.k + load1.loadValveControl.addP.k2 * Tr_load[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  (data->localData[0]->realVars[240]/* load1.loadValveControl.addP.y variable */)  = ((data->simulationInfo->realParameter[85]/* load1.loadValveControl.addP.k1 PARAM */) ) * ((data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ) + ((data->simulationInfo->realParameter[86]/* load1.loadValveControl.addP.k2 PARAM */) ) * ((data->localData[0]->realVars[206]/* Tr_load[1] variable */) );
  TRACE_POP
}
/*
equation index: 288
type: SIMPLE_ASSIGN
load1.loadValveControl.P.y = load1.loadValveControl.P.k * load1.loadValveControl.addP.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  (data->localData[0]->realVars[239]/* load1.loadValveControl.P.y variable */)  = ((data->simulationInfo->realParameter[79]/* load1.loadValveControl.P.k PARAM */) ) * ((data->localData[0]->realVars[240]/* load1.loadValveControl.addP.y variable */) );
  TRACE_POP
}
/*
equation index: 289
type: SIMPLE_ASSIGN
load1.loadValveControl.addPID.y = load1.loadValveControl.addPID.k1 * load1.loadValveControl.P.y + load1.loadValveControl.addPID.k2 * load1.loadValveControl.Dzero.k + load1.loadValveControl.addPID.k3 * load1.loadValveControl.Izero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  (data->localData[0]->realVars[241]/* load1.loadValveControl.addPID.y variable */)  = ((data->simulationInfo->realParameter[88]/* load1.loadValveControl.addPID.k1 PARAM */) ) * ((data->localData[0]->realVars[239]/* load1.loadValveControl.P.y variable */) ) + ((data->simulationInfo->realParameter[89]/* load1.loadValveControl.addPID.k2 PARAM */) ) * ((data->simulationInfo->realParameter[71]/* load1.loadValveControl.Dzero.k PARAM */) ) + ((data->simulationInfo->realParameter[90]/* load1.loadValveControl.addPID.k3 PARAM */) ) * ((data->simulationInfo->realParameter[75]/* load1.loadValveControl.Izero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 290
type: SIMPLE_ASSIGN
load1.loadValveControl.gainPID.y = load1.loadValveControl.gainPID.k * load1.loadValveControl.addPID.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  (data->localData[0]->realVars[243]/* load1.loadValveControl.gainPID.y variable */)  = ((data->simulationInfo->realParameter[93]/* load1.loadValveControl.gainPID.k PARAM */) ) * ((data->localData[0]->realVars[241]/* load1.loadValveControl.addPID.y variable */) );
  TRACE_POP
}
/*
equation index: 291
type: SIMPLE_ASSIGN
load1.loadValveControl.limiter.u = load1.loadValveControl.addFF.k1 * load1.loadValveControl.gainPID.y + load1.loadValveControl.addFF.k2 * load1.loadValveControl.FFzero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  (data->localData[0]->realVars[244]/* load1.loadValveControl.limiter.u variable */)  = ((data->simulationInfo->realParameter[82]/* load1.loadValveControl.addFF.k1 PARAM */) ) * ((data->localData[0]->realVars[243]/* load1.loadValveControl.gainPID.y variable */) ) + ((data->simulationInfo->realParameter[83]/* load1.loadValveControl.addFF.k2 PARAM */) ) * ((data->simulationInfo->realParameter[73]/* load1.loadValveControl.FFzero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 292
type: SIMPLE_ASSIGN
load1.loadValveControl.y = homotopy(smooth(0, if load1.loadValveControl.limiter.u > load1.loadValveControl.limiter.uMax then load1.loadValveControl.limiter.uMax else if load1.loadValveControl.limiter.u < load1.loadValveControl.limiter.uMin then load1.loadValveControl.limiter.uMin else load1.loadValveControl.limiter.u), load1.loadValveControl.limiter.u)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater((data->localData[0]->realVars[244]/* load1.loadValveControl.limiter.u variable */) ,(data->simulationInfo->realParameter[96]/* load1.loadValveControl.limiter.uMax PARAM */) );
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = (data->simulationInfo->realParameter[96]/* load1.loadValveControl.limiter.uMax PARAM */) ;
  }
  else
  {
    tmp1 = Less((data->localData[0]->realVars[244]/* load1.loadValveControl.limiter.u variable */) ,(data->simulationInfo->realParameter[97]/* load1.loadValveControl.limiter.uMin PARAM */) );
    tmp3 = (tmp1?(data->simulationInfo->realParameter[97]/* load1.loadValveControl.limiter.uMin PARAM */) :(data->localData[0]->realVars[244]/* load1.loadValveControl.limiter.u variable */) );
  }
  (data->localData[0]->realVars[245]/* load1.loadValveControl.y variable */)  = homotopy(tmp3, (data->localData[0]->realVars[244]/* load1.loadValveControl.limiter.u variable */) );
  TRACE_POP
}
/*
equation index: 293
type: SIMPLE_ASSIGN
r21.u = r21.m_flow / (985.0 * r21.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  (data->localData[0]->realVars[336]/* r21.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[332]/* r21.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[329]/* r21.A PARAM */) ),"985.0 * r21.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 294
type: SIMPLE_ASSIGN
load4.inlet.h_out = (max(-s67.m_flow, 1e-07) * s67.inlet.h_out + max(s16.m_flow, 1e-07) * s16.outlet.h_out) / (max(-s67.m_flow, 1e-07) + max(s16.m_flow, 1e-07))
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  (data->localData[0]->realVars[276]/* load4.inlet.h_out variable */)  = DIVISION_SIM((fmax((-(data->localData[0]->realVars[526]/* s67.m_flow variable */) ),1e-07)) * ((data->localData[0]->realVars[525]/* s67.inlet.h_out variable */) ) + (fmax((data->localData[0]->realVars[461]/* s16.m_flow variable */) ,1e-07)) * ((data->localData[0]->realVars[462]/* s16.outlet.h_out variable */) ),fmax((-(data->localData[0]->realVars[526]/* s67.m_flow variable */) ),1e-07) + fmax((data->localData[0]->realVars[461]/* s16.m_flow variable */) ,1e-07),"max(-s67.m_flow, 1e-07) + max(s16.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 295
type: SIMPLE_ASSIGN
s16.u = s16.m_flow / (985.0 * s16.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  (data->localData[0]->realVars[465]/* s16.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[461]/* s16.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[543]/* s16.A PARAM */) ),"985.0 * s16.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 296
type: SIMPLE_ASSIGN
mfr_load[4] = s16.m_flow - s67.m_flow
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,296};
  (data->localData[0]->realVars[306]/* mfr_load[4] variable */)  = (data->localData[0]->realVars[461]/* s16.m_flow variable */)  - (data->localData[0]->realVars[526]/* s67.m_flow variable */) ;
  TRACE_POP
}
/*
equation index: 297
type: SIMPLE_ASSIGN
load4.outlet.h_out = load4.inlet.h_out + P_load4 / max(mfr_load[4], load4.load.b)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  (data->localData[0]->realVars[288]/* load4.outlet.h_out variable */)  = (data->localData[0]->realVars[276]/* load4.inlet.h_out variable */)  + DIVISION_SIM((data->localData[0]->realVars[198]/* P_load4 variable */) ,fmax((data->localData[0]->realVars[306]/* mfr_load[4] variable */) ,(data->simulationInfo->realParameter[206]/* load4.load.b PARAM */) ),"max(mfr_load[4], load4.load.b)",equationIndexes);
  TRACE_POP
}
/*
equation index: 298
type: SIMPLE_ASSIGN
r61.m_flow = mfr_load[4] + r76.m_flow
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  (data->localData[0]->realVars[383]/* r61.m_flow variable */)  = (data->localData[0]->realVars[306]/* mfr_load[4] variable */)  + (data->localData[0]->realVars[411]/* r76.m_flow variable */) ;
  TRACE_POP
}
/*
equation index: 299
type: SIMPLE_ASSIGN
load4.mfr_s.inlet.h_out = (max(-r61.m_flow, 1e-07) * r61.inlet.h_out + max(r76.m_flow, 1e-07) * r76.outlet.h_out) / (max(-r61.m_flow, 1e-07) + max(r76.m_flow, 1e-07))
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  (data->localData[0]->realVars[287]/* load4.mfr_s.inlet.h_out variable */)  = DIVISION_SIM((fmax((-(data->localData[0]->realVars[383]/* r61.m_flow variable */) ),1e-07)) * ((data->localData[0]->realVars[382]/* r61.inlet.h_out variable */) ) + (fmax((data->localData[0]->realVars[411]/* r76.m_flow variable */) ,1e-07)) * ((data->localData[0]->realVars[412]/* r76.outlet.h_out variable */) ),fmax((-(data->localData[0]->realVars[383]/* r61.m_flow variable */) ),1e-07) + fmax((data->localData[0]->realVars[411]/* r76.m_flow variable */) ,1e-07),"max(-r61.m_flow, 1e-07) + max(r76.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 300
type: SIMPLE_ASSIGN
Tr_load[4] = if mfr_load[4] > 0.0 then -273.15 + 0.0002389486260454002 * load4.outlet.h_out else -273.15 + 0.0002389486260454002 * load4.mfr_s.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  modelica_boolean tmp0;
  tmp0 = Greater((data->localData[0]->realVars[306]/* mfr_load[4] variable */) ,0.0);
  (data->localData[0]->realVars[209]/* Tr_load[4] variable */)  = (tmp0?-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[288]/* load4.outlet.h_out variable */) ):-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[287]/* load4.mfr_s.inlet.h_out variable */) ));
  TRACE_POP
}
/*
equation index: 301
type: SIMPLE_ASSIGN
load4.loadValveControl.addP.y = load4.loadValveControl.addP.k1 * load_ref.k + load4.loadValveControl.addP.k2 * Tr_load[4]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,301};
  (data->localData[0]->realVars[281]/* load4.loadValveControl.addP.y variable */)  = ((data->simulationInfo->realParameter[226]/* load4.loadValveControl.addP.k1 PARAM */) ) * ((data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ) + ((data->simulationInfo->realParameter[227]/* load4.loadValveControl.addP.k2 PARAM */) ) * ((data->localData[0]->realVars[209]/* Tr_load[4] variable */) );
  TRACE_POP
}
/*
equation index: 302
type: SIMPLE_ASSIGN
load4.loadValveControl.P.y = load4.loadValveControl.P.k * load4.loadValveControl.addP.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  (data->localData[0]->realVars[280]/* load4.loadValveControl.P.y variable */)  = ((data->simulationInfo->realParameter[220]/* load4.loadValveControl.P.k PARAM */) ) * ((data->localData[0]->realVars[281]/* load4.loadValveControl.addP.y variable */) );
  TRACE_POP
}
/*
equation index: 303
type: SIMPLE_ASSIGN
load4.loadValveControl.addPID.y = load4.loadValveControl.addPID.k1 * load4.loadValveControl.P.y + load4.loadValveControl.addPID.k2 * load4.loadValveControl.Dzero.k + load4.loadValveControl.addPID.k3 * load4.loadValveControl.Izero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  (data->localData[0]->realVars[282]/* load4.loadValveControl.addPID.y variable */)  = ((data->simulationInfo->realParameter[229]/* load4.loadValveControl.addPID.k1 PARAM */) ) * ((data->localData[0]->realVars[280]/* load4.loadValveControl.P.y variable */) ) + ((data->simulationInfo->realParameter[230]/* load4.loadValveControl.addPID.k2 PARAM */) ) * ((data->simulationInfo->realParameter[212]/* load4.loadValveControl.Dzero.k PARAM */) ) + ((data->simulationInfo->realParameter[231]/* load4.loadValveControl.addPID.k3 PARAM */) ) * ((data->simulationInfo->realParameter[216]/* load4.loadValveControl.Izero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 304
type: SIMPLE_ASSIGN
load4.loadValveControl.gainPID.y = load4.loadValveControl.gainPID.k * load4.loadValveControl.addPID.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  (data->localData[0]->realVars[284]/* load4.loadValveControl.gainPID.y variable */)  = ((data->simulationInfo->realParameter[234]/* load4.loadValveControl.gainPID.k PARAM */) ) * ((data->localData[0]->realVars[282]/* load4.loadValveControl.addPID.y variable */) );
  TRACE_POP
}
/*
equation index: 305
type: SIMPLE_ASSIGN
load4.loadValveControl.limiter.u = load4.loadValveControl.addFF.k1 * load4.loadValveControl.gainPID.y + load4.loadValveControl.addFF.k2 * load4.loadValveControl.FFzero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  (data->localData[0]->realVars[285]/* load4.loadValveControl.limiter.u variable */)  = ((data->simulationInfo->realParameter[223]/* load4.loadValveControl.addFF.k1 PARAM */) ) * ((data->localData[0]->realVars[284]/* load4.loadValveControl.gainPID.y variable */) ) + ((data->simulationInfo->realParameter[224]/* load4.loadValveControl.addFF.k2 PARAM */) ) * ((data->simulationInfo->realParameter[214]/* load4.loadValveControl.FFzero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 306
type: SIMPLE_ASSIGN
load4.loadValveControl.y = homotopy(smooth(0, if load4.loadValveControl.limiter.u > load4.loadValveControl.limiter.uMax then load4.loadValveControl.limiter.uMax else if load4.loadValveControl.limiter.u < load4.loadValveControl.limiter.uMin then load4.loadValveControl.limiter.uMin else load4.loadValveControl.limiter.u), load4.loadValveControl.limiter.u)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater((data->localData[0]->realVars[285]/* load4.loadValveControl.limiter.u variable */) ,(data->simulationInfo->realParameter[237]/* load4.loadValveControl.limiter.uMax PARAM */) );
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = (data->simulationInfo->realParameter[237]/* load4.loadValveControl.limiter.uMax PARAM */) ;
  }
  else
  {
    tmp1 = Less((data->localData[0]->realVars[285]/* load4.loadValveControl.limiter.u variable */) ,(data->simulationInfo->realParameter[238]/* load4.loadValveControl.limiter.uMin PARAM */) );
    tmp3 = (tmp1?(data->simulationInfo->realParameter[238]/* load4.loadValveControl.limiter.uMin PARAM */) :(data->localData[0]->realVars[285]/* load4.loadValveControl.limiter.u variable */) );
  }
  (data->localData[0]->realVars[286]/* load4.loadValveControl.y variable */)  = homotopy(tmp3, (data->localData[0]->realVars[285]/* load4.loadValveControl.limiter.u variable */) );
  TRACE_POP
}
/*
equation index: 307
type: SIMPLE_ASSIGN
r61.u = r61.m_flow / (985.0 * r61.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  (data->localData[0]->realVars[388]/* r61.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[383]/* r61.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[413]/* r61.A PARAM */) ),"985.0 * r61.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 308
type: SIMPLE_ASSIGN
mfr_mandata = s16.m_flow + s12.m_flow
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  (data->localData[0]->realVars[308]/* mfr_mandata variable */)  = (data->localData[0]->realVars[461]/* s16.m_flow variable */)  + (data->localData[0]->realVars[448]/* s12.m_flow variable */) ;
  TRACE_POP
}
/*
equation index: 309
type: SIMPLE_ASSIGN
s01.u = mfr_mandata / (985.0 * s01.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  (data->localData[0]->realVars[439]/* s01.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[308]/* mfr_mandata variable */) ,(985.0) * ((data->simulationInfo->realParameter[501]/* s01.A PARAM */) ),"985.0 * s01.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 310
type: SIMPLE_ASSIGN
s01.outlet.p = T_mand.inlet.p - homotopy(492.5 * s01.cf * s01.omega * s01.L / s01.A * Modelica.Fluid.Utilities.regSquare(s01.u, s01.u_nom * 0.05), s01.dp_nom / s01.m_flow_nom * mfr_mandata)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  (data->localData[0]->realVars[436]/* s01.outlet.p variable */)  = (data->localData[0]->realVars[203]/* T_mand.inlet.p variable */)  - homotopy((DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[511]/* s01.cf PARAM */) )) * ((data->simulationInfo->realParameter[518]/* s01.omega PARAM */) )) * ((data->simulationInfo->realParameter[505]/* s01.L PARAM */) ),(data->simulationInfo->realParameter[501]/* s01.A PARAM */) ,"s01.A",equationIndexes)) * (omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[439]/* s01.u variable */) , ((data->simulationInfo->realParameter[521]/* s01.u_nom PARAM */) ) * (0.05))), (DIVISION_SIM((data->simulationInfo->realParameter[515]/* s01.dp_nom PARAM */) ,(data->simulationInfo->realParameter[517]/* s01.m_flow_nom PARAM */) ,"s01.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[308]/* mfr_mandata variable */) ));
  TRACE_POP
}
/*
equation index: 311
type: SIMPLE_ASSIGN
load1.inlet.p = s01.outlet.p - homotopy(492.5 * s12.cf * s12.omega * s12.L / s12.A * Modelica.Fluid.Utilities.regSquare(s12.u, s12.u_nom * 0.05), s12.dp_nom / s12.m_flow_nom * s12.m_flow)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  (data->localData[0]->realVars[236]/* load1.inlet.p variable */)  = (data->localData[0]->realVars[436]/* s01.outlet.p variable */)  - homotopy((DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[532]/* s12.cf PARAM */) )) * ((data->simulationInfo->realParameter[539]/* s12.omega PARAM */) )) * ((data->simulationInfo->realParameter[526]/* s12.L PARAM */) ),(data->simulationInfo->realParameter[522]/* s12.A PARAM */) ,"s12.A",equationIndexes)) * (omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[452]/* s12.u variable */) , ((data->simulationInfo->realParameter[542]/* s12.u_nom PARAM */) ) * (0.05))), (DIVISION_SIM((data->simulationInfo->realParameter[536]/* s12.dp_nom PARAM */) ,(data->simulationInfo->realParameter[538]/* s12.m_flow_nom PARAM */) ,"s12.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[448]/* s12.m_flow variable */) ));
  TRACE_POP
}
/*
equation index: 312
type: SIMPLE_ASSIGN
load2.inlet.p = load1.inlet.p - homotopy(492.5 * s23.cf * s23.omega * s23.L / s23.A * Modelica.Fluid.Utilities.regSquare(s23.u, s23.u_nom * 0.05), s23.dp_nom / s23.m_flow_nom * s23.m_flow)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  (data->localData[0]->realVars[250]/* load2.inlet.p variable */)  = (data->localData[0]->realVars[236]/* load1.inlet.p variable */)  - homotopy((DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[574]/* s23.cf PARAM */) )) * ((data->simulationInfo->realParameter[581]/* s23.omega PARAM */) )) * ((data->simulationInfo->realParameter[568]/* s23.L PARAM */) ),(data->simulationInfo->realParameter[564]/* s23.A PARAM */) ,"s23.A",equationIndexes)) * (omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[478]/* s23.u variable */) , ((data->simulationInfo->realParameter[584]/* s23.u_nom PARAM */) ) * (0.05))), (DIVISION_SIM((data->simulationInfo->realParameter[578]/* s23.dp_nom PARAM */) ,(data->simulationInfo->realParameter[580]/* s23.m_flow_nom PARAM */) ,"s23.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[474]/* s23.m_flow variable */) ));
  TRACE_POP
}
/*
equation index: 313
type: SIMPLE_ASSIGN
load4.inlet.p = s01.outlet.p - homotopy(492.5 * s16.cf * s16.omega * s16.L / s16.A * Modelica.Fluid.Utilities.regSquare(s16.u, s16.u_nom * 0.05), s16.dp_nom / s16.m_flow_nom * s16.m_flow)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  (data->localData[0]->realVars[277]/* load4.inlet.p variable */)  = (data->localData[0]->realVars[436]/* s01.outlet.p variable */)  - homotopy((DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[553]/* s16.cf PARAM */) )) * ((data->simulationInfo->realParameter[560]/* s16.omega PARAM */) )) * ((data->simulationInfo->realParameter[547]/* s16.L PARAM */) ),(data->simulationInfo->realParameter[543]/* s16.A PARAM */) ,"s16.A",equationIndexes)) * (omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[465]/* s16.u variable */) , ((data->simulationInfo->realParameter[563]/* s16.u_nom PARAM */) ) * (0.05))), (DIVISION_SIM((data->simulationInfo->realParameter[557]/* s16.dp_nom PARAM */) ,(data->simulationInfo->realParameter[559]/* s16.m_flow_nom PARAM */) ,"s16.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[461]/* s16.m_flow variable */) ));
  TRACE_POP
}
/*
equation index: 314
type: SIMPLE_ASSIGN
s47.outlet.p = load4.inlet.p - homotopy(492.5 * s67.cf * s67.omega * s67.L / s67.A * Modelica.Fluid.Utilities.regSquare(s67.u, s67.u_nom * 0.05), s67.dp_nom / s67.m_flow_nom * s67.m_flow)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  (data->localData[0]->realVars[514]/* s47.outlet.p variable */)  = (data->localData[0]->realVars[277]/* load4.inlet.p variable */)  - homotopy((DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[658]/* s67.cf PARAM */) )) * ((data->simulationInfo->realParameter[665]/* s67.omega PARAM */) )) * ((data->simulationInfo->realParameter[652]/* s67.L PARAM */) ),(data->simulationInfo->realParameter[648]/* s67.A PARAM */) ,"s67.A",equationIndexes)) * (omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[530]/* s67.u variable */) , ((data->simulationInfo->realParameter[668]/* s67.u_nom PARAM */) ) * (0.05))), (DIVISION_SIM((data->simulationInfo->realParameter[662]/* s67.dp_nom PARAM */) ,(data->simulationInfo->realParameter[664]/* s67.m_flow_nom PARAM */) ,"s67.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[526]/* s67.m_flow variable */) ));
  TRACE_POP
}
/*
equation index: 315
type: SIMPLE_ASSIGN
load5.inlet.p = s47.outlet.p - homotopy(492.5 * s78.cf * s78.omega * s78.L / s78.A * Modelica.Fluid.Utilities.regSquare(s78.u, s78.u_nom * 0.05), s78.dp_nom / s78.m_flow_nom * mfr_load[5])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  (data->localData[0]->realVars[291]/* load5.inlet.p variable */)  = (data->localData[0]->realVars[514]/* s47.outlet.p variable */)  - homotopy((DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[679]/* s78.cf PARAM */) )) * ((data->simulationInfo->realParameter[686]/* s78.omega PARAM */) )) * ((data->simulationInfo->realParameter[673]/* s78.L PARAM */) ),(data->simulationInfo->realParameter[669]/* s78.A PARAM */) ,"s78.A",equationIndexes)) * (omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[541]/* s78.u variable */) , ((data->simulationInfo->realParameter[689]/* s78.u_nom PARAM */) ) * (0.05))), (DIVISION_SIM((data->simulationInfo->realParameter[683]/* s78.dp_nom PARAM */) ,(data->simulationInfo->realParameter[685]/* s78.m_flow_nom PARAM */) ,"s78.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[307]/* mfr_load[5] variable */) ));
  TRACE_POP
}
/*
equation index: 316
type: SIMPLE_ASSIGN
s34.outlet.p = homotopy(492.5 * s47.cf * s47.omega * s47.L / s47.A * Modelica.Fluid.Utilities.regSquare(s47.u, s47.u_nom * 0.05), s47.dp_nom / s47.m_flow_nom * s47.m_flow) + s47.outlet.p
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  (data->localData[0]->realVars[489]/* s34.outlet.p variable */)  = homotopy((DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[637]/* s47.cf PARAM */) )) * ((data->simulationInfo->realParameter[644]/* s47.omega PARAM */) )) * ((data->simulationInfo->realParameter[631]/* s47.L PARAM */) ),(data->simulationInfo->realParameter[627]/* s47.A PARAM */) ,"s47.A",equationIndexes)) * (omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[517]/* s47.u variable */) , ((data->simulationInfo->realParameter[647]/* s47.u_nom PARAM */) ) * (0.05))), (DIVISION_SIM((data->simulationInfo->realParameter[641]/* s47.dp_nom PARAM */) ,(data->simulationInfo->realParameter[643]/* s47.m_flow_nom PARAM */) ,"s47.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[512]/* s47.m_flow variable */) )) + (data->localData[0]->realVars[514]/* s47.outlet.p variable */) ;
  TRACE_POP
}
/*
equation index: 317
type: SIMPLE_ASSIGN
load3.inlet.p = s34.outlet.p - homotopy(492.5 * s45.cf * s45.omega * s45.L / s45.A * Modelica.Fluid.Utilities.regSquare(s45.u, s45.u_nom * 0.05), s45.dp_nom / s45.m_flow_nom * mfr_load[3])
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  (data->localData[0]->realVars[264]/* load3.inlet.p variable */)  = (data->localData[0]->realVars[489]/* s34.outlet.p variable */)  - homotopy((DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[616]/* s45.cf PARAM */) )) * ((data->simulationInfo->realParameter[623]/* s45.omega PARAM */) )) * ((data->simulationInfo->realParameter[610]/* s45.L PARAM */) ),(data->simulationInfo->realParameter[606]/* s45.A PARAM */) ,"s45.A",equationIndexes)) * (omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[503]/* s45.u variable */) , ((data->simulationInfo->realParameter[626]/* s45.u_nom PARAM */) ) * (0.05))), (DIVISION_SIM((data->simulationInfo->realParameter[620]/* s45.dp_nom PARAM */) ,(data->simulationInfo->realParameter[622]/* s45.m_flow_nom PARAM */) ,"s45.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[305]/* mfr_load[3] variable */) ));
  TRACE_POP
}
/*
equation index: 318
type: SIMPLE_ASSIGN
mfr_ritorno = r61.m_flow + r21.m_flow
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  (data->localData[0]->realVars[310]/* mfr_ritorno variable */)  = (data->localData[0]->realVars[383]/* r61.m_flow variable */)  + (data->localData[0]->realVars[332]/* r21.m_flow variable */) ;
  TRACE_POP
}
/*
equation index: 319
type: SIMPLE_ASSIGN
r10.u = mfr_ritorno / (985.0 * r10.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  (data->localData[0]->realVars[323]/* r10.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[310]/* mfr_ritorno variable */) ,(985.0) * ((data->simulationInfo->realParameter[307]/* r10.A PARAM */) ),"985.0 * r10.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 320
type: SIMPLE_ASSIGN
r61.outlet.p = homotopy(492.5 * r10.cf * r10.omega * r10.L / r10.A * Modelica.Fluid.Utilities.regSquare(r10.u, r10.u_nom * 0.05), r10.dp_nom / r10.m_flow_nom * mfr_ritorno) + pressureAccumulator.p
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  (data->localData[0]->realVars[385]/* r61.outlet.p variable */)  = homotopy((DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[317]/* r10.cf PARAM */) )) * ((data->simulationInfo->realParameter[324]/* r10.omega PARAM */) )) * ((data->simulationInfo->realParameter[311]/* r10.L PARAM */) ),(data->simulationInfo->realParameter[307]/* r10.A PARAM */) ,"r10.A",equationIndexes)) * (omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[323]/* r10.u variable */) , ((data->simulationInfo->realParameter[328]/* r10.u_nom PARAM */) ) * (0.05))), (DIVISION_SIM((data->simulationInfo->realParameter[321]/* r10.dp_nom PARAM */) ,(data->simulationInfo->realParameter[323]/* r10.m_flow_nom PARAM */) ,"r10.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[310]/* mfr_ritorno variable */) )) + (data->simulationInfo->realParameter[304]/* pressureAccumulator.p PARAM */) ;
  TRACE_POP
}
/*
equation index: 321
type: SIMPLE_ASSIGN
load1.outlet.p = homotopy(492.5 * r21.cf * r21.omega * r21.L / r21.A * Modelica.Fluid.Utilities.regSquare(r21.u, r21.u_nom * 0.05), r21.dp_nom / r21.m_flow_nom * r21.m_flow) + r61.outlet.p
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  (data->localData[0]->realVars[248]/* load1.outlet.p variable */)  = homotopy((DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[339]/* r21.cf PARAM */) )) * ((data->simulationInfo->realParameter[346]/* r21.omega PARAM */) )) * ((data->simulationInfo->realParameter[333]/* r21.L PARAM */) ),(data->simulationInfo->realParameter[329]/* r21.A PARAM */) ,"r21.A",equationIndexes)) * (omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[336]/* r21.u variable */) , ((data->simulationInfo->realParameter[349]/* r21.u_nom PARAM */) ) * (0.05))), (DIVISION_SIM((data->simulationInfo->realParameter[343]/* r21.dp_nom PARAM */) ,(data->simulationInfo->realParameter[345]/* r21.m_flow_nom PARAM */) ,"r21.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[332]/* r21.m_flow variable */) )) + (data->localData[0]->realVars[385]/* r61.outlet.p variable */) ;
  TRACE_POP
}
/*
equation index: 322
type: SIMPLE_ASSIGN
load2.outlet.p = homotopy(492.5 * r32.cf * r32.omega * r32.L / r32.A * Modelica.Fluid.Utilities.regSquare(r32.u, r32.u_nom * 0.05), r32.dp_nom / r32.m_flow_nom * r32.m_flow) + load1.outlet.p
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  (data->localData[0]->realVars[262]/* load2.outlet.p variable */)  = homotopy((DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[360]/* r32.cf PARAM */) )) * ((data->simulationInfo->realParameter[367]/* r32.omega PARAM */) )) * ((data->simulationInfo->realParameter[354]/* r32.L PARAM */) ),(data->simulationInfo->realParameter[350]/* r32.A PARAM */) ,"r32.A",equationIndexes)) * (omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[349]/* r32.u variable */) , ((data->simulationInfo->realParameter[370]/* r32.u_nom PARAM */) ) * (0.05))), (DIVISION_SIM((data->simulationInfo->realParameter[364]/* r32.dp_nom PARAM */) ,(data->simulationInfo->realParameter[366]/* r32.m_flow_nom PARAM */) ,"r32.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[345]/* r32.m_flow variable */) )) + (data->localData[0]->realVars[248]/* load1.outlet.p variable */) ;
  TRACE_POP
}
/*
equation index: 323
type: SIMPLE_ASSIGN
r74.outlet.p = homotopy(492.5 * r43.cf * r43.omega * r43.L / r43.A * Modelica.Fluid.Utilities.regSquare(r43.u, r43.u_nom * 0.05), r43.dp_nom / r43.m_flow_nom * r43.m_flow) + load2.outlet.p
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  (data->localData[0]->realVars[399]/* r74.outlet.p variable */)  = homotopy((DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[381]/* r43.cf PARAM */) )) * ((data->simulationInfo->realParameter[388]/* r43.omega PARAM */) )) * ((data->simulationInfo->realParameter[375]/* r43.L PARAM */) ),(data->simulationInfo->realParameter[371]/* r43.A PARAM */) ,"r43.A",equationIndexes)) * (omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[362]/* r43.u variable */) , ((data->simulationInfo->realParameter[391]/* r43.u_nom PARAM */) ) * (0.05))), (DIVISION_SIM((data->simulationInfo->realParameter[385]/* r43.dp_nom PARAM */) ,(data->simulationInfo->realParameter[387]/* r43.m_flow_nom PARAM */) ,"r43.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[358]/* r43.m_flow variable */) )) + (data->localData[0]->realVars[262]/* load2.outlet.p variable */) ;
  TRACE_POP
}
/*
equation index: 324
type: SIMPLE_ASSIGN
r87.outlet.p = homotopy(492.5 * r74.cf * r74.omega * r74.L / r74.A * Modelica.Fluid.Utilities.regSquare(r74.u, r74.u_nom * 0.05), r74.dp_nom / r74.m_flow_nom * r74.m_flow) + r74.outlet.p
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  (data->localData[0]->realVars[425]/* r87.outlet.p variable */)  = homotopy((DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[444]/* r74.cf PARAM */) )) * ((data->simulationInfo->realParameter[451]/* r74.omega PARAM */) )) * ((data->simulationInfo->realParameter[438]/* r74.L PARAM */) ),(data->simulationInfo->realParameter[434]/* r74.A PARAM */) ,"r74.A",equationIndexes)) * (omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[402]/* r74.u variable */) , ((data->simulationInfo->realParameter[454]/* r74.u_nom PARAM */) ) * (0.05))), (DIVISION_SIM((data->simulationInfo->realParameter[448]/* r74.dp_nom PARAM */) ,(data->simulationInfo->realParameter[450]/* r74.m_flow_nom PARAM */) ,"r74.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[397]/* r74.m_flow variable */) )) + (data->localData[0]->realVars[399]/* r74.outlet.p variable */) ;
  TRACE_POP
}
/*
equation index: 325
type: SIMPLE_ASSIGN
load5.outlet.p = homotopy(492.5 * r87.cf * r87.omega * r87.L / r87.A * Modelica.Fluid.Utilities.regSquare(r87.u, r87.u_nom * 0.05), r87.dp_nom / r87.m_flow_nom * mfr_load[5]) + r87.outlet.p
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  (data->localData[0]->realVars[302]/* load5.outlet.p variable */)  = homotopy((DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[486]/* r87.cf PARAM */) )) * ((data->simulationInfo->realParameter[493]/* r87.omega PARAM */) )) * ((data->simulationInfo->realParameter[480]/* r87.L PARAM */) ),(data->simulationInfo->realParameter[476]/* r87.A PARAM */) ,"r87.A",equationIndexes)) * (omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[428]/* r87.u variable */) , ((data->simulationInfo->realParameter[496]/* r87.u_nom PARAM */) ) * (0.05))), (DIVISION_SIM((data->simulationInfo->realParameter[490]/* r87.dp_nom PARAM */) ,(data->simulationInfo->realParameter[492]/* r87.m_flow_nom PARAM */) ,"r87.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[307]/* mfr_load[5] variable */) )) + (data->localData[0]->realVars[425]/* r87.outlet.p variable */) ;
  TRACE_POP
}
/*
equation index: 326
type: SIMPLE_ASSIGN
load4.outlet.p = r87.outlet.p - homotopy(492.5 * r76.cf * r76.omega * r76.L / r76.A * Modelica.Fluid.Utilities.regSquare(r76.u, r76.u_nom * 0.05), r76.dp_nom / r76.m_flow_nom * r76.m_flow)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  (data->localData[0]->realVars[289]/* load4.outlet.p variable */)  = (data->localData[0]->realVars[425]/* r87.outlet.p variable */)  - homotopy((DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[465]/* r76.cf PARAM */) )) * ((data->simulationInfo->realParameter[472]/* r76.omega PARAM */) )) * ((data->simulationInfo->realParameter[459]/* r76.L PARAM */) ),(data->simulationInfo->realParameter[455]/* r76.A PARAM */) ,"r76.A",equationIndexes)) * (omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[415]/* r76.u variable */) , ((data->simulationInfo->realParameter[475]/* r76.u_nom PARAM */) ) * (0.05))), (DIVISION_SIM((data->simulationInfo->realParameter[469]/* r76.dp_nom PARAM */) ,(data->simulationInfo->realParameter[471]/* r76.m_flow_nom PARAM */) ,"r76.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[411]/* r76.m_flow variable */) ));
  TRACE_POP
}
/*
equation index: 327
type: SIMPLE_ASSIGN
load3.outlet.p = homotopy(492.5 * r54.cf * r54.omega * r54.L / r54.A * Modelica.Fluid.Utilities.regSquare(r54.u, r54.u_nom * 0.05), r54.dp_nom / r54.m_flow_nom * mfr_load[3]) + r74.outlet.p
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  (data->localData[0]->realVars[275]/* load3.outlet.p variable */)  = homotopy((DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[402]/* r54.cf PARAM */) )) * ((data->simulationInfo->realParameter[409]/* r54.omega PARAM */) )) * ((data->simulationInfo->realParameter[396]/* r54.L PARAM */) ),(data->simulationInfo->realParameter[392]/* r54.A PARAM */) ,"r54.A",equationIndexes)) * (omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[374]/* r54.u variable */) , ((data->simulationInfo->realParameter[412]/* r54.u_nom PARAM */) ) * (0.05))), (DIVISION_SIM((data->simulationInfo->realParameter[406]/* r54.dp_nom PARAM */) ,(data->simulationInfo->realParameter[408]/* r54.m_flow_nom PARAM */) ,"r54.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[305]/* mfr_load[3] variable */) )) + (data->localData[0]->realVars[399]/* r74.outlet.p variable */) ;
  TRACE_POP
}

void residualFunc335(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,335};
  int i;
  /* iteration variables */
  for (i=0; i<7; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<7; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  (data->localData[0]->realVars[461]/* s16.m_flow variable */)  = xloc[0];
  (data->localData[0]->realVars[448]/* s12.m_flow variable */)  = xloc[1];
  (data->localData[0]->realVars[345]/* r32.m_flow variable */)  = xloc[2];
  (data->localData[0]->realVars[487]/* s34.m_flow variable */)  = xloc[3];
  (data->localData[0]->realVars[474]/* s23.m_flow variable */)  = xloc[4];
  (data->localData[0]->realVars[305]/* mfr_load[3] variable */)  = xloc[5];
  (data->localData[0]->realVars[307]/* mfr_load[5] variable */)  = xloc[6];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_236(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_237(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_238(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_239(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_240(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_241(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_242(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_243(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_244(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_245(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_246(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_247(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_248(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_249(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_250(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_251(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_252(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_253(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_254(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_255(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_256(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_257(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_258(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_259(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_260(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_261(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_262(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_263(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_264(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_265(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_266(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_267(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_268(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_269(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_270(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_271(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_272(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_273(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_274(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_275(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_276(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_277(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_278(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_279(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_280(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_281(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_282(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_283(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_284(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_285(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_286(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_287(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_288(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_289(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_290(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_291(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_292(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_293(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_294(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_295(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_296(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_297(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_298(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_299(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_300(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_301(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_302(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_303(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_304(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_305(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_306(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_307(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_308(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_309(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_310(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_311(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_312(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_313(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_314(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_315(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_316(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_317(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_318(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_319(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_320(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_321(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_322(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_323(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_324(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_325(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_326(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_327(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[250]/* load2.inlet.p variable */)  + (-(data->localData[0]->realVars[489]/* s34.outlet.p variable */) ) - homotopy((DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[595]/* s34.cf PARAM */) )) * ((data->simulationInfo->realParameter[602]/* s34.omega PARAM */) )) * ((data->simulationInfo->realParameter[589]/* s34.L PARAM */) ),(data->simulationInfo->realParameter[585]/* s34.A PARAM */) ,"s34.A",equationIndexes)) * (omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[492]/* s34.u variable */) , ((data->simulationInfo->realParameter[605]/* s34.u_nom PARAM */) ) * (0.05))), (DIVISION_SIM((data->simulationInfo->realParameter[599]/* s34.dp_nom PARAM */) ,(data->simulationInfo->realParameter[601]/* s34.m_flow_nom PARAM */) ,"s34.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[487]/* s34.m_flow variable */) ));

  res[1] = homotopy(((((data->localData[0]->realVars[273]/* load3.loadValveControl.y variable */)  + (data->simulationInfo->realParameter[163]/* load3.loadValve1.theta_min PARAM */) ) * ((data->localData[0]->realVars[266]/* load3.loadValve1.A_v variable */) )) * (31.38470965295043)) * (omc_Modelica_Fluid_Utilities_regRoot(threadData, (data->localData[0]->realVars[264]/* load3.inlet.p variable */)  - (data->localData[0]->realVars[275]/* load3.outlet.p variable */) , 0.01)), (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[273]/* load3.loadValveControl.y variable */)  + (data->simulationInfo->realParameter[163]/* load3.loadValve1.theta_min PARAM */) ,(data->simulationInfo->realParameter[164]/* load3.loadValve1.theta_nom PARAM */) ,"load3.loadValve1.theta_nom",equationIndexes)) * ((data->simulationInfo->realParameter[162]/* load3.loadValve1.m_nom PARAM */) ),(data->simulationInfo->realParameter[161]/* load3.loadValve1.dp_nom PARAM */) ,"load3.loadValve1.dp_nom",equationIndexes)) * ((data->localData[0]->realVars[264]/* load3.inlet.p variable */)  - (data->localData[0]->realVars[275]/* load3.outlet.p variable */) )) - (data->localData[0]->realVars[305]/* mfr_load[3] variable */) ;

  res[2] = (data->localData[0]->realVars[289]/* load4.outlet.p variable */)  + (-(data->localData[0]->realVars[385]/* r61.outlet.p variable */) ) - homotopy((DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[423]/* r61.cf PARAM */) )) * ((data->simulationInfo->realParameter[430]/* r61.omega PARAM */) )) * ((data->simulationInfo->realParameter[417]/* r61.L PARAM */) ),(data->simulationInfo->realParameter[413]/* r61.A PARAM */) ,"r61.A",equationIndexes)) * (omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[388]/* r61.u variable */) , ((data->simulationInfo->realParameter[433]/* r61.u_nom PARAM */) ) * (0.05))), (DIVISION_SIM((data->simulationInfo->realParameter[427]/* r61.dp_nom PARAM */) ,(data->simulationInfo->realParameter[429]/* r61.m_flow_nom PARAM */) ,"r61.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[383]/* r61.m_flow variable */) ));

  res[3] = homotopy(((((data->localData[0]->realVars[245]/* load1.loadValveControl.y variable */)  + (data->simulationInfo->realParameter[69]/* load1.loadValve1.theta_min PARAM */) ) * ((data->localData[0]->realVars[238]/* load1.loadValve1.A_v variable */) )) * (31.38470965295043)) * (omc_Modelica_Fluid_Utilities_regRoot(threadData, (data->localData[0]->realVars[236]/* load1.inlet.p variable */)  - (data->localData[0]->realVars[248]/* load1.outlet.p variable */) , 0.01)), (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[245]/* load1.loadValveControl.y variable */)  + (data->simulationInfo->realParameter[69]/* load1.loadValve1.theta_min PARAM */) ,(data->simulationInfo->realParameter[70]/* load1.loadValve1.theta_nom PARAM */) ,"load1.loadValve1.theta_nom",equationIndexes)) * ((data->simulationInfo->realParameter[68]/* load1.loadValve1.m_nom PARAM */) ),(data->simulationInfo->realParameter[67]/* load1.loadValve1.dp_nom PARAM */) ,"load1.loadValve1.dp_nom",equationIndexes)) * ((data->localData[0]->realVars[236]/* load1.inlet.p variable */)  - (data->localData[0]->realVars[248]/* load1.outlet.p variable */) )) - (data->localData[0]->realVars[303]/* mfr_load[1] variable */) ;

  res[4] = homotopy(((((data->localData[0]->realVars[286]/* load4.loadValveControl.y variable */)  + (data->simulationInfo->realParameter[210]/* load4.loadValve1.theta_min PARAM */) ) * ((data->localData[0]->realVars[279]/* load4.loadValve1.A_v variable */) )) * (31.38470965295043)) * (omc_Modelica_Fluid_Utilities_regRoot(threadData, (data->localData[0]->realVars[277]/* load4.inlet.p variable */)  - (data->localData[0]->realVars[289]/* load4.outlet.p variable */) , 0.01)), (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[286]/* load4.loadValveControl.y variable */)  + (data->simulationInfo->realParameter[210]/* load4.loadValve1.theta_min PARAM */) ,(data->simulationInfo->realParameter[211]/* load4.loadValve1.theta_nom PARAM */) ,"load4.loadValve1.theta_nom",equationIndexes)) * ((data->simulationInfo->realParameter[209]/* load4.loadValve1.m_nom PARAM */) ),(data->simulationInfo->realParameter[208]/* load4.loadValve1.dp_nom PARAM */) ,"load4.loadValve1.dp_nom",equationIndexes)) * ((data->localData[0]->realVars[277]/* load4.inlet.p variable */)  - (data->localData[0]->realVars[289]/* load4.outlet.p variable */) )) - (data->localData[0]->realVars[306]/* mfr_load[4] variable */) ;

  res[5] = homotopy(((((data->localData[0]->realVars[259]/* load2.loadValveControl.y variable */)  + (data->simulationInfo->realParameter[116]/* load2.loadValve1.theta_min PARAM */) ) * ((data->localData[0]->realVars[252]/* load2.loadValve1.A_v variable */) )) * (31.38470965295043)) * (omc_Modelica_Fluid_Utilities_regRoot(threadData, (data->localData[0]->realVars[250]/* load2.inlet.p variable */)  - (data->localData[0]->realVars[262]/* load2.outlet.p variable */) , 0.01)), (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[259]/* load2.loadValveControl.y variable */)  + (data->simulationInfo->realParameter[116]/* load2.loadValve1.theta_min PARAM */) ,(data->simulationInfo->realParameter[117]/* load2.loadValve1.theta_nom PARAM */) ,"load2.loadValve1.theta_nom",equationIndexes)) * ((data->simulationInfo->realParameter[115]/* load2.loadValve1.m_nom PARAM */) ),(data->simulationInfo->realParameter[114]/* load2.loadValve1.dp_nom PARAM */) ,"load2.loadValve1.dp_nom",equationIndexes)) * ((data->localData[0]->realVars[250]/* load2.inlet.p variable */)  - (data->localData[0]->realVars[262]/* load2.outlet.p variable */) )) - (data->localData[0]->realVars[304]/* mfr_load[2] variable */) ;

  res[6] = homotopy(((((data->localData[0]->realVars[300]/* load5.loadValveControl.y variable */)  + (data->simulationInfo->realParameter[257]/* load5.loadValve1.theta_min PARAM */) ) * ((data->localData[0]->realVars[293]/* load5.loadValve1.A_v variable */) )) * (31.38470965295043)) * (omc_Modelica_Fluid_Utilities_regRoot(threadData, (data->localData[0]->realVars[291]/* load5.inlet.p variable */)  - (data->localData[0]->realVars[302]/* load5.outlet.p variable */) , 0.01)), (DIVISION_SIM((DIVISION_SIM((data->localData[0]->realVars[300]/* load5.loadValveControl.y variable */)  + (data->simulationInfo->realParameter[257]/* load5.loadValve1.theta_min PARAM */) ,(data->simulationInfo->realParameter[258]/* load5.loadValve1.theta_nom PARAM */) ,"load5.loadValve1.theta_nom",equationIndexes)) * ((data->simulationInfo->realParameter[256]/* load5.loadValve1.m_nom PARAM */) ),(data->simulationInfo->realParameter[255]/* load5.loadValve1.dp_nom PARAM */) ,"load5.loadValve1.dp_nom",equationIndexes)) * ((data->localData[0]->realVars[291]/* load5.inlet.p variable */)  - (data->localData[0]->realVars[302]/* load5.outlet.p variable */) )) - (data->localData[0]->realVars[307]/* mfr_load[5] variable */) ;
  /* restore known outputs */
  TRACE_POP
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS335(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+7] = {0,7,7,6,7,7,7,7};
  const int rowIndex[48] = {0,1,2,3,4,5,6,0,1,2,3,4,5,6,1,2,3,4,5,6,0,1,2,3,4,5,6,0,1,2,3,4,5,6,0,1,2,3,4,5,6,0,1,2,3,4,5,6};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((7+1)*sizeof(unsigned int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(48*sizeof(unsigned int));
  inSysData->sparsePattern->numberOfNonZeros = 48;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(7*sizeof(unsigned int));
  inSysData->sparsePattern->maxColors = 7;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (7+1)*sizeof(unsigned int));
  
  for(i=2;i<7+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 48*sizeof(unsigned int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[6] = 1;
  inSysData->sparsePattern->colorCols[5] = 2;
  inSysData->sparsePattern->colorCols[4] = 3;
  inSysData->sparsePattern->colorCols[3] = 4;
  inSysData->sparsePattern->colorCols[2] = 5;
  inSysData->sparsePattern->colorCols[1] = 6;
  inSysData->sparsePattern->colorCols[0] = 7;
}

OMC_DISABLE_OPT
void initializeStaticDataNLS335(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for s16.m_flow */
  sysData->nominal[i] = data->modelData->realVarsData[461].attribute /* s16.m_flow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[461].attribute /* s16.m_flow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[461].attribute /* s16.m_flow */.max;
  /* static nls data for s12.m_flow */
  sysData->nominal[i] = data->modelData->realVarsData[448].attribute /* s12.m_flow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[448].attribute /* s12.m_flow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[448].attribute /* s12.m_flow */.max;
  /* static nls data for r32.m_flow */
  sysData->nominal[i] = data->modelData->realVarsData[345].attribute /* r32.m_flow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[345].attribute /* r32.m_flow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[345].attribute /* r32.m_flow */.max;
  /* static nls data for s34.m_flow */
  sysData->nominal[i] = data->modelData->realVarsData[487].attribute /* s34.m_flow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[487].attribute /* s34.m_flow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[487].attribute /* s34.m_flow */.max;
  /* static nls data for s23.m_flow */
  sysData->nominal[i] = data->modelData->realVarsData[474].attribute /* s23.m_flow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[474].attribute /* s23.m_flow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[474].attribute /* s23.m_flow */.max;
  /* static nls data for mfr_load[3] */
  sysData->nominal[i] = data->modelData->realVarsData[305].attribute /* mfr_load[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[305].attribute /* mfr_load[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[305].attribute /* mfr_load[3] */.max;
  /* static nls data for mfr_load[5] */
  sysData->nominal[i] = data->modelData->realVarsData[307].attribute /* mfr_load[5] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[307].attribute /* mfr_load[5] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[307].attribute /* mfr_load[5] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS335(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS335(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = (data->localData[0]->realVars[461]/* s16.m_flow variable */) ;
  array[1] = (data->localData[0]->realVars[448]/* s12.m_flow variable */) ;
  array[2] = (data->localData[0]->realVars[345]/* r32.m_flow variable */) ;
  array[3] = (data->localData[0]->realVars[487]/* s34.m_flow variable */) ;
  array[4] = (data->localData[0]->realVars[474]/* s23.m_flow variable */) ;
  array[5] = (data->localData[0]->realVars[305]/* mfr_load[3] variable */) ;
  array[6] = (data->localData[0]->realVars[307]/* mfr_load[5] variable */) ;
}


/* inner equations */

/*
equation index: 740
type: SIMPLE_ASSIGN
load5.outlet.h_out = load5.inlet.h_out + P_load5 / max(mfr_load[5], load5.load.b)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,740};
  (data->localData[0]->realVars[301]/* load5.outlet.h_out variable */)  = (data->localData[0]->realVars[290]/* load5.inlet.h_out variable */)  + DIVISION_SIM((data->localData[0]->realVars[199]/* P_load5 variable */) ,fmax((data->localData[0]->realVars[307]/* mfr_load[5] variable */) ,(data->simulationInfo->realParameter[253]/* load5.load.b PARAM */) ),"max(mfr_load[5], load5.load.b)",equationIndexes);
  TRACE_POP
}
/*
equation index: 741
type: SIMPLE_ASSIGN
Tr_load[5] = if mfr_load[5] > 0.0 then -273.15 + 0.0002389486260454002 * load5.outlet.h_out else -273.15 + 0.0002389486260454002 * r87.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,741};
  modelica_boolean tmp0;
  tmp0 = Greater((data->localData[0]->realVars[307]/* mfr_load[5] variable */) ,0.0);
  (data->localData[0]->realVars[210]/* Tr_load[5] variable */)  = (tmp0?-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[301]/* load5.outlet.h_out variable */) ):-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[423]/* r87.inlet.h_out variable */) ));
  TRACE_POP
}
/*
equation index: 742
type: SIMPLE_ASSIGN
load5.loadValveControl.addP.y = load5.loadValveControl.addP.k1 * load_ref.k + load5.loadValveControl.addP.k2 * Tr_load[5]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,742};
  (data->localData[0]->realVars[295]/* load5.loadValveControl.addP.y variable */)  = ((data->simulationInfo->realParameter[273]/* load5.loadValveControl.addP.k1 PARAM */) ) * ((data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ) + ((data->simulationInfo->realParameter[274]/* load5.loadValveControl.addP.k2 PARAM */) ) * ((data->localData[0]->realVars[210]/* Tr_load[5] variable */) );
  TRACE_POP
}
/*
equation index: 743
type: SIMPLE_ASSIGN
load5.loadValveControl.P.y = load5.loadValveControl.P.k * load5.loadValveControl.addP.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,743};
  (data->localData[0]->realVars[294]/* load5.loadValveControl.P.y variable */)  = ((data->simulationInfo->realParameter[267]/* load5.loadValveControl.P.k PARAM */) ) * ((data->localData[0]->realVars[295]/* load5.loadValveControl.addP.y variable */) );
  TRACE_POP
}
/*
equation index: 744
type: SIMPLE_ASSIGN
load5.loadValveControl.addPID.y = load5.loadValveControl.addPID.k1 * load5.loadValveControl.P.y + load5.loadValveControl.addPID.k2 * load5.loadValveControl.Dzero.k + load5.loadValveControl.addPID.k3 * load5.loadValveControl.Izero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,744};
  (data->localData[0]->realVars[296]/* load5.loadValveControl.addPID.y variable */)  = ((data->simulationInfo->realParameter[276]/* load5.loadValveControl.addPID.k1 PARAM */) ) * ((data->localData[0]->realVars[294]/* load5.loadValveControl.P.y variable */) ) + ((data->simulationInfo->realParameter[277]/* load5.loadValveControl.addPID.k2 PARAM */) ) * ((data->simulationInfo->realParameter[259]/* load5.loadValveControl.Dzero.k PARAM */) ) + ((data->simulationInfo->realParameter[278]/* load5.loadValveControl.addPID.k3 PARAM */) ) * ((data->simulationInfo->realParameter[263]/* load5.loadValveControl.Izero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 745
type: SIMPLE_ASSIGN
load5.loadValveControl.gainPID.y = load5.loadValveControl.gainPID.k * load5.loadValveControl.addPID.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,745};
  (data->localData[0]->realVars[298]/* load5.loadValveControl.gainPID.y variable */)  = ((data->simulationInfo->realParameter[281]/* load5.loadValveControl.gainPID.k PARAM */) ) * ((data->localData[0]->realVars[296]/* load5.loadValveControl.addPID.y variable */) );
  TRACE_POP
}
/*
equation index: 746
type: SIMPLE_ASSIGN
load5.loadValveControl.limiter.u = load5.loadValveControl.addFF.k1 * load5.loadValveControl.gainPID.y + load5.loadValveControl.addFF.k2 * load5.loadValveControl.FFzero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,746};
  (data->localData[0]->realVars[299]/* load5.loadValveControl.limiter.u variable */)  = ((data->simulationInfo->realParameter[270]/* load5.loadValveControl.addFF.k1 PARAM */) ) * ((data->localData[0]->realVars[298]/* load5.loadValveControl.gainPID.y variable */) ) + ((data->simulationInfo->realParameter[271]/* load5.loadValveControl.addFF.k2 PARAM */) ) * ((data->simulationInfo->realParameter[261]/* load5.loadValveControl.FFzero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 747
type: SIMPLE_ASSIGN
load5.loadValveControl.y = load5.loadValveControl.limiter.u
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,747};
  (data->localData[0]->realVars[300]/* load5.loadValveControl.y variable */)  = (data->localData[0]->realVars[299]/* load5.loadValveControl.limiter.u variable */) ;
  TRACE_POP
}
/*
equation index: 748
type: SIMPLE_ASSIGN
load3.outlet.h_out = load3.inlet.h_out + P_load3 / max(mfr_load[3], load3.load.b)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,748};
  (data->localData[0]->realVars[274]/* load3.outlet.h_out variable */)  = (data->localData[0]->realVars[263]/* load3.inlet.h_out variable */)  + DIVISION_SIM((data->localData[0]->realVars[197]/* P_load3 variable */) ,fmax((data->localData[0]->realVars[305]/* mfr_load[3] variable */) ,(data->simulationInfo->realParameter[159]/* load3.load.b PARAM */) ),"max(mfr_load[3], load3.load.b)",equationIndexes);
  TRACE_POP
}
/*
equation index: 749
type: SIMPLE_ASSIGN
Tr_load[3] = if mfr_load[3] > 0.0 then -273.15 + 0.0002389486260454002 * load3.outlet.h_out else -273.15 + 0.0002389486260454002 * r54.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,749};
  modelica_boolean tmp0;
  tmp0 = Greater((data->localData[0]->realVars[305]/* mfr_load[3] variable */) ,0.0);
  (data->localData[0]->realVars[208]/* Tr_load[3] variable */)  = (tmp0?-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[274]/* load3.outlet.h_out variable */) ):-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[370]/* r54.inlet.h_out variable */) ));
  TRACE_POP
}
/*
equation index: 750
type: SIMPLE_ASSIGN
load3.loadValveControl.addP.y = load3.loadValveControl.addP.k1 * load_ref.k + load3.loadValveControl.addP.k2 * Tr_load[3]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,750};
  (data->localData[0]->realVars[268]/* load3.loadValveControl.addP.y variable */)  = ((data->simulationInfo->realParameter[179]/* load3.loadValveControl.addP.k1 PARAM */) ) * ((data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ) + ((data->simulationInfo->realParameter[180]/* load3.loadValveControl.addP.k2 PARAM */) ) * ((data->localData[0]->realVars[208]/* Tr_load[3] variable */) );
  TRACE_POP
}
/*
equation index: 751
type: SIMPLE_ASSIGN
load3.loadValveControl.P.y = load3.loadValveControl.P.k * load3.loadValveControl.addP.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,751};
  (data->localData[0]->realVars[267]/* load3.loadValveControl.P.y variable */)  = ((data->simulationInfo->realParameter[173]/* load3.loadValveControl.P.k PARAM */) ) * ((data->localData[0]->realVars[268]/* load3.loadValveControl.addP.y variable */) );
  TRACE_POP
}
/*
equation index: 752
type: SIMPLE_ASSIGN
load3.loadValveControl.addPID.y = load3.loadValveControl.addPID.k1 * load3.loadValveControl.P.y + load3.loadValveControl.addPID.k2 * load3.loadValveControl.Dzero.k + load3.loadValveControl.addPID.k3 * load3.loadValveControl.Izero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,752};
  (data->localData[0]->realVars[269]/* load3.loadValveControl.addPID.y variable */)  = ((data->simulationInfo->realParameter[182]/* load3.loadValveControl.addPID.k1 PARAM */) ) * ((data->localData[0]->realVars[267]/* load3.loadValveControl.P.y variable */) ) + ((data->simulationInfo->realParameter[183]/* load3.loadValveControl.addPID.k2 PARAM */) ) * ((data->simulationInfo->realParameter[165]/* load3.loadValveControl.Dzero.k PARAM */) ) + ((data->simulationInfo->realParameter[184]/* load3.loadValveControl.addPID.k3 PARAM */) ) * ((data->simulationInfo->realParameter[169]/* load3.loadValveControl.Izero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 753
type: SIMPLE_ASSIGN
load3.loadValveControl.gainPID.y = load3.loadValveControl.gainPID.k * load3.loadValveControl.addPID.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,753};
  (data->localData[0]->realVars[271]/* load3.loadValveControl.gainPID.y variable */)  = ((data->simulationInfo->realParameter[187]/* load3.loadValveControl.gainPID.k PARAM */) ) * ((data->localData[0]->realVars[269]/* load3.loadValveControl.addPID.y variable */) );
  TRACE_POP
}
/*
equation index: 754
type: SIMPLE_ASSIGN
load3.loadValveControl.limiter.u = load3.loadValveControl.addFF.k1 * load3.loadValveControl.gainPID.y + load3.loadValveControl.addFF.k2 * load3.loadValveControl.FFzero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,754};
  (data->localData[0]->realVars[272]/* load3.loadValveControl.limiter.u variable */)  = ((data->simulationInfo->realParameter[176]/* load3.loadValveControl.addFF.k1 PARAM */) ) * ((data->localData[0]->realVars[271]/* load3.loadValveControl.gainPID.y variable */) ) + ((data->simulationInfo->realParameter[177]/* load3.loadValveControl.addFF.k2 PARAM */) ) * ((data->simulationInfo->realParameter[167]/* load3.loadValveControl.FFzero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 755
type: SIMPLE_ASSIGN
load3.loadValveControl.y = load3.loadValveControl.limiter.u
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,755};
  (data->localData[0]->realVars[273]/* load3.loadValveControl.y variable */)  = (data->localData[0]->realVars[272]/* load3.loadValveControl.limiter.u variable */) ;
  TRACE_POP
}
/*
equation index: 756
type: SIMPLE_ASSIGN
s47.m_flow = mfr_load[5] - s67.m_flow
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,756};
  (data->localData[0]->realVars[512]/* s47.m_flow variable */)  = (data->localData[0]->realVars[307]/* mfr_load[5] variable */)  - (data->localData[0]->realVars[526]/* s67.m_flow variable */) ;
  TRACE_POP
}
/*
equation index: 757
type: SIMPLE_ASSIGN
s34.m_flow = s47.m_flow + mfr_load[3]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,757};
  (data->localData[0]->realVars[487]/* s34.m_flow variable */)  = (data->localData[0]->realVars[512]/* s47.m_flow variable */)  + (data->localData[0]->realVars[305]/* mfr_load[3] variable */) ;
  TRACE_POP
}
/*
equation index: 758
type: SIMPLE_ASSIGN
load2.inlet.h_out = (max(-s34.m_flow, 1e-07) * s34.inlet.h_out + max(s23.m_flow, 1e-07) * s23.outlet.h_out) / (max(-s34.m_flow, 1e-07) + max(s23.m_flow, 1e-07))
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,758};
  (data->localData[0]->realVars[249]/* load2.inlet.h_out variable */)  = DIVISION_SIM((fmax((-(data->localData[0]->realVars[487]/* s34.m_flow variable */) ),1e-07)) * ((data->localData[0]->realVars[486]/* s34.inlet.h_out variable */) ) + (fmax((data->localData[0]->realVars[474]/* s23.m_flow variable */) ,1e-07)) * ((data->localData[0]->realVars[475]/* s23.outlet.h_out variable */) ),fmax((-(data->localData[0]->realVars[487]/* s34.m_flow variable */) ),1e-07) + fmax((data->localData[0]->realVars[474]/* s23.m_flow variable */) ,1e-07),"max(-s34.m_flow, 1e-07) + max(s23.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 759
type: SIMPLE_ASSIGN
mfr_load[2] = s23.m_flow - s34.m_flow
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,759};
  (data->localData[0]->realVars[304]/* mfr_load[2] variable */)  = (data->localData[0]->realVars[474]/* s23.m_flow variable */)  - (data->localData[0]->realVars[487]/* s34.m_flow variable */) ;
  TRACE_POP
}
/*
equation index: 760
type: SIMPLE_ASSIGN
load2.outlet.h_out = load2.inlet.h_out + P_load2 / max(mfr_load[2], load2.load.b)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,760};
  (data->localData[0]->realVars[261]/* load2.outlet.h_out variable */)  = (data->localData[0]->realVars[249]/* load2.inlet.h_out variable */)  + DIVISION_SIM((data->localData[0]->realVars[196]/* P_load2 variable */) ,fmax((data->localData[0]->realVars[304]/* mfr_load[2] variable */) ,(data->simulationInfo->realParameter[112]/* load2.load.b PARAM */) ),"max(mfr_load[2], load2.load.b)",equationIndexes);
  TRACE_POP
}
/*
equation index: 761
type: SIMPLE_ASSIGN
s12.m_flow = s23.m_flow + mfr_load[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,761};
  (data->localData[0]->realVars[448]/* s12.m_flow variable */)  = (data->localData[0]->realVars[474]/* s23.m_flow variable */)  + (data->localData[0]->realVars[303]/* mfr_load[1] variable */) ;
  TRACE_POP
}
/*
equation index: 762
type: SIMPLE_ASSIGN
load1.inlet.h_out = (max(-s23.m_flow, 1e-07) * s23.inlet.h_out + max(s12.m_flow, 1e-07) * s12.outlet.h_out) / (max(-s23.m_flow, 1e-07) + max(s12.m_flow, 1e-07))
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,762};
  (data->localData[0]->realVars[235]/* load1.inlet.h_out variable */)  = DIVISION_SIM((fmax((-(data->localData[0]->realVars[474]/* s23.m_flow variable */) ),1e-07)) * ((data->localData[0]->realVars[473]/* s23.inlet.h_out variable */) ) + (fmax((data->localData[0]->realVars[448]/* s12.m_flow variable */) ,1e-07)) * ((data->localData[0]->realVars[449]/* s12.outlet.h_out variable */) ),fmax((-(data->localData[0]->realVars[474]/* s23.m_flow variable */) ),1e-07) + fmax((data->localData[0]->realVars[448]/* s12.m_flow variable */) ,1e-07),"max(-s23.m_flow, 1e-07) + max(s12.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 763
type: SIMPLE_ASSIGN
load1.outlet.h_out = load1.inlet.h_out + P_load1 / max(mfr_load[1], load1.load.b)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,763};
  (data->localData[0]->realVars[247]/* load1.outlet.h_out variable */)  = (data->localData[0]->realVars[235]/* load1.inlet.h_out variable */)  + DIVISION_SIM((data->localData[0]->realVars[195]/* P_load1 variable */) ,fmax((data->localData[0]->realVars[303]/* mfr_load[1] variable */) ,(data->simulationInfo->realParameter[65]/* load1.load.b PARAM */) ),"max(mfr_load[1], load1.load.b)",equationIndexes);
  TRACE_POP
}
/*
equation index: 764
type: SIMPLE_ASSIGN
r21.m_flow = r32.m_flow + mfr_load[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,764};
  (data->localData[0]->realVars[332]/* r21.m_flow variable */)  = (data->localData[0]->realVars[345]/* r32.m_flow variable */)  + (data->localData[0]->realVars[303]/* mfr_load[1] variable */) ;
  TRACE_POP
}
/*
equation index: 765
type: SIMPLE_ASSIGN
load1.mfr_s.inlet.h_out = (max(r32.m_flow, 1e-07) * r32.outlet.h_out + max(-r21.m_flow, 1e-07) * r21.inlet.h_out) / (max(r32.m_flow, 1e-07) + max(-r21.m_flow, 1e-07))
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,765};
  (data->localData[0]->realVars[246]/* load1.mfr_s.inlet.h_out variable */)  = DIVISION_SIM((fmax((data->localData[0]->realVars[345]/* r32.m_flow variable */) ,1e-07)) * ((data->localData[0]->realVars[346]/* r32.outlet.h_out variable */) ) + (fmax((-(data->localData[0]->realVars[332]/* r21.m_flow variable */) ),1e-07)) * ((data->localData[0]->realVars[331]/* r21.inlet.h_out variable */) ),fmax((data->localData[0]->realVars[345]/* r32.m_flow variable */) ,1e-07) + fmax((-(data->localData[0]->realVars[332]/* r21.m_flow variable */) ),1e-07),"max(r32.m_flow, 1e-07) + max(-r21.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 766
type: SIMPLE_ASSIGN
Tr_load[1] = if mfr_load[1] > 0.0 then -273.15 + 0.0002389486260454002 * load1.outlet.h_out else -273.15 + 0.0002389486260454002 * load1.mfr_s.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,766};
  modelica_boolean tmp0;
  tmp0 = Greater((data->localData[0]->realVars[303]/* mfr_load[1] variable */) ,0.0);
  (data->localData[0]->realVars[206]/* Tr_load[1] variable */)  = (tmp0?-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[247]/* load1.outlet.h_out variable */) ):-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[246]/* load1.mfr_s.inlet.h_out variable */) ));
  TRACE_POP
}
/*
equation index: 767
type: SIMPLE_ASSIGN
load1.loadValveControl.addP.y = load1.loadValveControl.addP.k1 * load_ref.k + load1.loadValveControl.addP.k2 * Tr_load[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,767};
  (data->localData[0]->realVars[240]/* load1.loadValveControl.addP.y variable */)  = ((data->simulationInfo->realParameter[85]/* load1.loadValveControl.addP.k1 PARAM */) ) * ((data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ) + ((data->simulationInfo->realParameter[86]/* load1.loadValveControl.addP.k2 PARAM */) ) * ((data->localData[0]->realVars[206]/* Tr_load[1] variable */) );
  TRACE_POP
}
/*
equation index: 768
type: SIMPLE_ASSIGN
load1.loadValveControl.P.y = load1.loadValveControl.P.k * load1.loadValveControl.addP.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,768};
  (data->localData[0]->realVars[239]/* load1.loadValveControl.P.y variable */)  = ((data->simulationInfo->realParameter[79]/* load1.loadValveControl.P.k PARAM */) ) * ((data->localData[0]->realVars[240]/* load1.loadValveControl.addP.y variable */) );
  TRACE_POP
}
/*
equation index: 769
type: SIMPLE_ASSIGN
load1.loadValveControl.addPID.y = load1.loadValveControl.addPID.k1 * load1.loadValveControl.P.y + load1.loadValveControl.addPID.k2 * load1.loadValveControl.Dzero.k + load1.loadValveControl.addPID.k3 * load1.loadValveControl.Izero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,769};
  (data->localData[0]->realVars[241]/* load1.loadValveControl.addPID.y variable */)  = ((data->simulationInfo->realParameter[88]/* load1.loadValveControl.addPID.k1 PARAM */) ) * ((data->localData[0]->realVars[239]/* load1.loadValveControl.P.y variable */) ) + ((data->simulationInfo->realParameter[89]/* load1.loadValveControl.addPID.k2 PARAM */) ) * ((data->simulationInfo->realParameter[71]/* load1.loadValveControl.Dzero.k PARAM */) ) + ((data->simulationInfo->realParameter[90]/* load1.loadValveControl.addPID.k3 PARAM */) ) * ((data->simulationInfo->realParameter[75]/* load1.loadValveControl.Izero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 770
type: SIMPLE_ASSIGN
load1.loadValveControl.gainPID.y = load1.loadValveControl.gainPID.k * load1.loadValveControl.addPID.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,770};
  (data->localData[0]->realVars[243]/* load1.loadValveControl.gainPID.y variable */)  = ((data->simulationInfo->realParameter[93]/* load1.loadValveControl.gainPID.k PARAM */) ) * ((data->localData[0]->realVars[241]/* load1.loadValveControl.addPID.y variable */) );
  TRACE_POP
}
/*
equation index: 771
type: SIMPLE_ASSIGN
load1.loadValveControl.limiter.u = load1.loadValveControl.addFF.k1 * load1.loadValveControl.gainPID.y + load1.loadValveControl.addFF.k2 * load1.loadValveControl.FFzero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,771};
  (data->localData[0]->realVars[244]/* load1.loadValveControl.limiter.u variable */)  = ((data->simulationInfo->realParameter[82]/* load1.loadValveControl.addFF.k1 PARAM */) ) * ((data->localData[0]->realVars[243]/* load1.loadValveControl.gainPID.y variable */) ) + ((data->simulationInfo->realParameter[83]/* load1.loadValveControl.addFF.k2 PARAM */) ) * ((data->simulationInfo->realParameter[73]/* load1.loadValveControl.FFzero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 772
type: SIMPLE_ASSIGN
r43.m_flow = r32.m_flow - mfr_load[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,772};
  (data->localData[0]->realVars[358]/* r43.m_flow variable */)  = (data->localData[0]->realVars[345]/* r32.m_flow variable */)  - (data->localData[0]->realVars[304]/* mfr_load[2] variable */) ;
  TRACE_POP
}
/*
equation index: 773
type: SIMPLE_ASSIGN
load2.mfr_s.inlet.h_out = (max(-r32.m_flow, 1e-07) * r32.inlet.h_out + max(r43.m_flow, 1e-07) * r43.outlet.h_out) / (max(-r32.m_flow, 1e-07) + max(r43.m_flow, 1e-07))
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,773};
  (data->localData[0]->realVars[260]/* load2.mfr_s.inlet.h_out variable */)  = DIVISION_SIM((fmax((-(data->localData[0]->realVars[345]/* r32.m_flow variable */) ),1e-07)) * ((data->localData[0]->realVars[344]/* r32.inlet.h_out variable */) ) + (fmax((data->localData[0]->realVars[358]/* r43.m_flow variable */) ,1e-07)) * ((data->localData[0]->realVars[359]/* r43.outlet.h_out variable */) ),fmax((-(data->localData[0]->realVars[345]/* r32.m_flow variable */) ),1e-07) + fmax((data->localData[0]->realVars[358]/* r43.m_flow variable */) ,1e-07),"max(-r32.m_flow, 1e-07) + max(r43.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 774
type: SIMPLE_ASSIGN
Tr_load[2] = if mfr_load[2] > 0.0 then -273.15 + 0.0002389486260454002 * load2.outlet.h_out else -273.15 + 0.0002389486260454002 * load2.mfr_s.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,774};
  modelica_boolean tmp0;
  tmp0 = Greater((data->localData[0]->realVars[304]/* mfr_load[2] variable */) ,0.0);
  (data->localData[0]->realVars[207]/* Tr_load[2] variable */)  = (tmp0?-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[261]/* load2.outlet.h_out variable */) ):-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[260]/* load2.mfr_s.inlet.h_out variable */) ));
  TRACE_POP
}
/*
equation index: 775
type: SIMPLE_ASSIGN
load2.loadValveControl.addP.y = load2.loadValveControl.addP.k1 * load_ref.k + load2.loadValveControl.addP.k2 * Tr_load[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,775};
  (data->localData[0]->realVars[254]/* load2.loadValveControl.addP.y variable */)  = ((data->simulationInfo->realParameter[132]/* load2.loadValveControl.addP.k1 PARAM */) ) * ((data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ) + ((data->simulationInfo->realParameter[133]/* load2.loadValveControl.addP.k2 PARAM */) ) * ((data->localData[0]->realVars[207]/* Tr_load[2] variable */) );
  TRACE_POP
}
/*
equation index: 776
type: SIMPLE_ASSIGN
load2.loadValveControl.P.y = load2.loadValveControl.P.k * load2.loadValveControl.addP.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,776};
  (data->localData[0]->realVars[253]/* load2.loadValveControl.P.y variable */)  = ((data->simulationInfo->realParameter[126]/* load2.loadValveControl.P.k PARAM */) ) * ((data->localData[0]->realVars[254]/* load2.loadValveControl.addP.y variable */) );
  TRACE_POP
}
/*
equation index: 777
type: SIMPLE_ASSIGN
load2.loadValveControl.addPID.y = load2.loadValveControl.addPID.k1 * load2.loadValveControl.P.y + load2.loadValveControl.addPID.k2 * load2.loadValveControl.Dzero.k + load2.loadValveControl.addPID.k3 * load2.loadValveControl.Izero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,777};
  (data->localData[0]->realVars[255]/* load2.loadValveControl.addPID.y variable */)  = ((data->simulationInfo->realParameter[135]/* load2.loadValveControl.addPID.k1 PARAM */) ) * ((data->localData[0]->realVars[253]/* load2.loadValveControl.P.y variable */) ) + ((data->simulationInfo->realParameter[136]/* load2.loadValveControl.addPID.k2 PARAM */) ) * ((data->simulationInfo->realParameter[118]/* load2.loadValveControl.Dzero.k PARAM */) ) + ((data->simulationInfo->realParameter[137]/* load2.loadValveControl.addPID.k3 PARAM */) ) * ((data->simulationInfo->realParameter[122]/* load2.loadValveControl.Izero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 778
type: SIMPLE_ASSIGN
load2.loadValveControl.gainPID.y = load2.loadValveControl.gainPID.k * load2.loadValveControl.addPID.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,778};
  (data->localData[0]->realVars[257]/* load2.loadValveControl.gainPID.y variable */)  = ((data->simulationInfo->realParameter[140]/* load2.loadValveControl.gainPID.k PARAM */) ) * ((data->localData[0]->realVars[255]/* load2.loadValveControl.addPID.y variable */) );
  TRACE_POP
}
/*
equation index: 779
type: SIMPLE_ASSIGN
load2.loadValveControl.limiter.u = load2.loadValveControl.addFF.k1 * load2.loadValveControl.gainPID.y + load2.loadValveControl.addFF.k2 * load2.loadValveControl.FFzero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,779};
  (data->localData[0]->realVars[258]/* load2.loadValveControl.limiter.u variable */)  = ((data->simulationInfo->realParameter[129]/* load2.loadValveControl.addFF.k1 PARAM */) ) * ((data->localData[0]->realVars[257]/* load2.loadValveControl.gainPID.y variable */) ) + ((data->simulationInfo->realParameter[130]/* load2.loadValveControl.addFF.k2 PARAM */) ) * ((data->simulationInfo->realParameter[120]/* load2.loadValveControl.FFzero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 780
type: SIMPLE_ASSIGN
r74.m_flow = r43.m_flow - mfr_load[3]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,780};
  (data->localData[0]->realVars[397]/* r74.m_flow variable */)  = (data->localData[0]->realVars[358]/* r43.m_flow variable */)  - (data->localData[0]->realVars[305]/* mfr_load[3] variable */) ;
  TRACE_POP
}
/*
equation index: 781
type: SIMPLE_ASSIGN
r76.m_flow = mfr_load[5] - r74.m_flow
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,781};
  (data->localData[0]->realVars[411]/* r76.m_flow variable */)  = (data->localData[0]->realVars[307]/* mfr_load[5] variable */)  - (data->localData[0]->realVars[397]/* r74.m_flow variable */) ;
  TRACE_POP
}
/*
equation index: 782
type: SIMPLE_ASSIGN
load1.loadValveControl.y = load1.loadValveControl.limiter.u
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,782};
  (data->localData[0]->realVars[245]/* load1.loadValveControl.y variable */)  = (data->localData[0]->realVars[244]/* load1.loadValveControl.limiter.u variable */) ;
  TRACE_POP
}
/*
equation index: 783
type: SIMPLE_ASSIGN
load2.loadValveControl.y = load2.loadValveControl.limiter.u
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,783};
  (data->localData[0]->realVars[259]/* load2.loadValveControl.y variable */)  = (data->localData[0]->realVars[258]/* load2.loadValveControl.limiter.u variable */) ;
  TRACE_POP
}
/*
equation index: 784
type: SIMPLE_ASSIGN
r61.m_flow = mfr_load[4] + r76.m_flow
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,784};
  (data->localData[0]->realVars[383]/* r61.m_flow variable */)  = (data->localData[0]->realVars[306]/* mfr_load[4] variable */)  + (data->localData[0]->realVars[411]/* r76.m_flow variable */) ;
  TRACE_POP
}
/*
equation index: 785
type: SIMPLE_ASSIGN
load4.mfr_s.inlet.h_out = (max(-r61.m_flow, 1e-07) * r61.inlet.h_out + max(r76.m_flow, 1e-07) * r76.outlet.h_out) / (max(-r61.m_flow, 1e-07) + max(r76.m_flow, 1e-07))
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,785};
  (data->localData[0]->realVars[287]/* load4.mfr_s.inlet.h_out variable */)  = DIVISION_SIM((fmax((-(data->localData[0]->realVars[383]/* r61.m_flow variable */) ),1e-07)) * ((data->localData[0]->realVars[382]/* r61.inlet.h_out variable */) ) + (fmax((data->localData[0]->realVars[411]/* r76.m_flow variable */) ,1e-07)) * ((data->localData[0]->realVars[412]/* r76.outlet.h_out variable */) ),fmax((-(data->localData[0]->realVars[383]/* r61.m_flow variable */) ),1e-07) + fmax((data->localData[0]->realVars[411]/* r76.m_flow variable */) ,1e-07),"max(-r61.m_flow, 1e-07) + max(r76.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 786
type: SIMPLE_ASSIGN
mfr_ritorno = r61.m_flow + r21.m_flow
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,786};
  (data->localData[0]->realVars[310]/* mfr_ritorno variable */)  = (data->localData[0]->realVars[383]/* r61.m_flow variable */)  + (data->localData[0]->realVars[332]/* r21.m_flow variable */) ;
  TRACE_POP
}
/*
equation index: 787
type: SIMPLE_ASSIGN
r61.outlet.p = r10.dp_nom / r10.m_flow_nom * mfr_ritorno + pressureAccumulator.p
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,787};
  (data->localData[0]->realVars[385]/* r61.outlet.p variable */)  = (DIVISION_SIM((data->simulationInfo->realParameter[321]/* r10.dp_nom PARAM */) ,(data->simulationInfo->realParameter[323]/* r10.m_flow_nom PARAM */) ,"r10.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[310]/* mfr_ritorno variable */) ) + (data->simulationInfo->realParameter[304]/* pressureAccumulator.p PARAM */) ;
  TRACE_POP
}
/*
equation index: 788
type: SIMPLE_ASSIGN
load1.outlet.p = r21.dp_nom / r21.m_flow_nom * r21.m_flow + r61.outlet.p
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,788};
  (data->localData[0]->realVars[248]/* load1.outlet.p variable */)  = (DIVISION_SIM((data->simulationInfo->realParameter[343]/* r21.dp_nom PARAM */) ,(data->simulationInfo->realParameter[345]/* r21.m_flow_nom PARAM */) ,"r21.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[332]/* r21.m_flow variable */) ) + (data->localData[0]->realVars[385]/* r61.outlet.p variable */) ;
  TRACE_POP
}
/*
equation index: 789
type: SIMPLE_ASSIGN
load2.outlet.p = r32.dp_nom / r32.m_flow_nom * r32.m_flow + load1.outlet.p
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,789};
  (data->localData[0]->realVars[262]/* load2.outlet.p variable */)  = (DIVISION_SIM((data->simulationInfo->realParameter[364]/* r32.dp_nom PARAM */) ,(data->simulationInfo->realParameter[366]/* r32.m_flow_nom PARAM */) ,"r32.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[345]/* r32.m_flow variable */) ) + (data->localData[0]->realVars[248]/* load1.outlet.p variable */) ;
  TRACE_POP
}
/*
equation index: 790
type: SIMPLE_ASSIGN
r74.outlet.p = r43.dp_nom / r43.m_flow_nom * r43.m_flow + load2.outlet.p
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,790};
  (data->localData[0]->realVars[399]/* r74.outlet.p variable */)  = (DIVISION_SIM((data->simulationInfo->realParameter[385]/* r43.dp_nom PARAM */) ,(data->simulationInfo->realParameter[387]/* r43.m_flow_nom PARAM */) ,"r43.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[358]/* r43.m_flow variable */) ) + (data->localData[0]->realVars[262]/* load2.outlet.p variable */) ;
  TRACE_POP
}
/*
equation index: 791
type: SIMPLE_ASSIGN
load3.outlet.p = r54.dp_nom / r54.m_flow_nom * mfr_load[3] + r74.outlet.p
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,791};
  (data->localData[0]->realVars[275]/* load3.outlet.p variable */)  = (DIVISION_SIM((data->simulationInfo->realParameter[406]/* r54.dp_nom PARAM */) ,(data->simulationInfo->realParameter[408]/* r54.m_flow_nom PARAM */) ,"r54.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[305]/* mfr_load[3] variable */) ) + (data->localData[0]->realVars[399]/* r74.outlet.p variable */) ;
  TRACE_POP
}
/*
equation index: 792
type: SIMPLE_ASSIGN
r87.outlet.p = r74.dp_nom / r74.m_flow_nom * r74.m_flow + r74.outlet.p
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,792};
  (data->localData[0]->realVars[425]/* r87.outlet.p variable */)  = (DIVISION_SIM((data->simulationInfo->realParameter[448]/* r74.dp_nom PARAM */) ,(data->simulationInfo->realParameter[450]/* r74.m_flow_nom PARAM */) ,"r74.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[397]/* r74.m_flow variable */) ) + (data->localData[0]->realVars[399]/* r74.outlet.p variable */) ;
  TRACE_POP
}
/*
equation index: 793
type: SIMPLE_ASSIGN
load5.outlet.p = r87.dp_nom / r87.m_flow_nom * mfr_load[5] + r87.outlet.p
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,793};
  (data->localData[0]->realVars[302]/* load5.outlet.p variable */)  = (DIVISION_SIM((data->simulationInfo->realParameter[490]/* r87.dp_nom PARAM */) ,(data->simulationInfo->realParameter[492]/* r87.m_flow_nom PARAM */) ,"r87.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[307]/* mfr_load[5] variable */) ) + (data->localData[0]->realVars[425]/* r87.outlet.p variable */) ;
  TRACE_POP
}
/*
equation index: 794
type: SIMPLE_ASSIGN
load4.outlet.p = r87.outlet.p - r76.dp_nom / r76.m_flow_nom * r76.m_flow
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,794};
  (data->localData[0]->realVars[289]/* load4.outlet.p variable */)  = (data->localData[0]->realVars[425]/* r87.outlet.p variable */)  - ((DIVISION_SIM((data->simulationInfo->realParameter[469]/* r76.dp_nom PARAM */) ,(data->simulationInfo->realParameter[471]/* r76.m_flow_nom PARAM */) ,"r76.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[411]/* r76.m_flow variable */) ));
  TRACE_POP
}
/*
equation index: 795
type: SIMPLE_ASSIGN
s16.m_flow = s67.m_flow + mfr_load[4]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,795};
  (data->localData[0]->realVars[461]/* s16.m_flow variable */)  = (data->localData[0]->realVars[526]/* s67.m_flow variable */)  + (data->localData[0]->realVars[306]/* mfr_load[4] variable */) ;
  TRACE_POP
}
/*
equation index: 796
type: SIMPLE_ASSIGN
load4.inlet.h_out = (max(-s67.m_flow, 1e-07) * s67.inlet.h_out + max(s16.m_flow, 1e-07) * s16.outlet.h_out) / (max(-s67.m_flow, 1e-07) + max(s16.m_flow, 1e-07))
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,796};
  (data->localData[0]->realVars[276]/* load4.inlet.h_out variable */)  = DIVISION_SIM((fmax((-(data->localData[0]->realVars[526]/* s67.m_flow variable */) ),1e-07)) * ((data->localData[0]->realVars[525]/* s67.inlet.h_out variable */) ) + (fmax((data->localData[0]->realVars[461]/* s16.m_flow variable */) ,1e-07)) * ((data->localData[0]->realVars[462]/* s16.outlet.h_out variable */) ),fmax((-(data->localData[0]->realVars[526]/* s67.m_flow variable */) ),1e-07) + fmax((data->localData[0]->realVars[461]/* s16.m_flow variable */) ,1e-07),"max(-s67.m_flow, 1e-07) + max(s16.m_flow, 1e-07)",equationIndexes);
  TRACE_POP
}
/*
equation index: 797
type: SIMPLE_ASSIGN
load4.outlet.h_out = load4.inlet.h_out + P_load4 / max(mfr_load[4], load4.load.b)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,797};
  (data->localData[0]->realVars[288]/* load4.outlet.h_out variable */)  = (data->localData[0]->realVars[276]/* load4.inlet.h_out variable */)  + DIVISION_SIM((data->localData[0]->realVars[198]/* P_load4 variable */) ,fmax((data->localData[0]->realVars[306]/* mfr_load[4] variable */) ,(data->simulationInfo->realParameter[206]/* load4.load.b PARAM */) ),"max(mfr_load[4], load4.load.b)",equationIndexes);
  TRACE_POP
}
/*
equation index: 798
type: SIMPLE_ASSIGN
Tr_load[4] = if mfr_load[4] > 0.0 then -273.15 + 0.0002389486260454002 * load4.outlet.h_out else -273.15 + 0.0002389486260454002 * load4.mfr_s.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,798};
  modelica_boolean tmp0;
  tmp0 = Greater((data->localData[0]->realVars[306]/* mfr_load[4] variable */) ,0.0);
  (data->localData[0]->realVars[209]/* Tr_load[4] variable */)  = (tmp0?-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[288]/* load4.outlet.h_out variable */) ):-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[287]/* load4.mfr_s.inlet.h_out variable */) ));
  TRACE_POP
}
/*
equation index: 799
type: SIMPLE_ASSIGN
load4.loadValveControl.addP.y = load4.loadValveControl.addP.k1 * load_ref.k + load4.loadValveControl.addP.k2 * Tr_load[4]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,799};
  (data->localData[0]->realVars[281]/* load4.loadValveControl.addP.y variable */)  = ((data->simulationInfo->realParameter[226]/* load4.loadValveControl.addP.k1 PARAM */) ) * ((data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ) + ((data->simulationInfo->realParameter[227]/* load4.loadValveControl.addP.k2 PARAM */) ) * ((data->localData[0]->realVars[209]/* Tr_load[4] variable */) );
  TRACE_POP
}
/*
equation index: 800
type: SIMPLE_ASSIGN
load4.loadValveControl.P.y = load4.loadValveControl.P.k * load4.loadValveControl.addP.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,800};
  (data->localData[0]->realVars[280]/* load4.loadValveControl.P.y variable */)  = ((data->simulationInfo->realParameter[220]/* load4.loadValveControl.P.k PARAM */) ) * ((data->localData[0]->realVars[281]/* load4.loadValveControl.addP.y variable */) );
  TRACE_POP
}
/*
equation index: 801
type: SIMPLE_ASSIGN
load4.loadValveControl.addPID.y = load4.loadValveControl.addPID.k1 * load4.loadValveControl.P.y + load4.loadValveControl.addPID.k2 * load4.loadValveControl.Dzero.k + load4.loadValveControl.addPID.k3 * load4.loadValveControl.Izero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,801};
  (data->localData[0]->realVars[282]/* load4.loadValveControl.addPID.y variable */)  = ((data->simulationInfo->realParameter[229]/* load4.loadValveControl.addPID.k1 PARAM */) ) * ((data->localData[0]->realVars[280]/* load4.loadValveControl.P.y variable */) ) + ((data->simulationInfo->realParameter[230]/* load4.loadValveControl.addPID.k2 PARAM */) ) * ((data->simulationInfo->realParameter[212]/* load4.loadValveControl.Dzero.k PARAM */) ) + ((data->simulationInfo->realParameter[231]/* load4.loadValveControl.addPID.k3 PARAM */) ) * ((data->simulationInfo->realParameter[216]/* load4.loadValveControl.Izero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 802
type: SIMPLE_ASSIGN
load4.loadValveControl.gainPID.y = load4.loadValveControl.gainPID.k * load4.loadValveControl.addPID.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,802};
  (data->localData[0]->realVars[284]/* load4.loadValveControl.gainPID.y variable */)  = ((data->simulationInfo->realParameter[234]/* load4.loadValveControl.gainPID.k PARAM */) ) * ((data->localData[0]->realVars[282]/* load4.loadValveControl.addPID.y variable */) );
  TRACE_POP
}
/*
equation index: 803
type: SIMPLE_ASSIGN
load4.loadValveControl.limiter.u = load4.loadValveControl.addFF.k1 * load4.loadValveControl.gainPID.y + load4.loadValveControl.addFF.k2 * load4.loadValveControl.FFzero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,803};
  (data->localData[0]->realVars[285]/* load4.loadValveControl.limiter.u variable */)  = ((data->simulationInfo->realParameter[223]/* load4.loadValveControl.addFF.k1 PARAM */) ) * ((data->localData[0]->realVars[284]/* load4.loadValveControl.gainPID.y variable */) ) + ((data->simulationInfo->realParameter[224]/* load4.loadValveControl.addFF.k2 PARAM */) ) * ((data->simulationInfo->realParameter[214]/* load4.loadValveControl.FFzero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 804
type: SIMPLE_ASSIGN
mfr_mandata = s16.m_flow + s12.m_flow
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,804};
  (data->localData[0]->realVars[308]/* mfr_mandata variable */)  = (data->localData[0]->realVars[461]/* s16.m_flow variable */)  + (data->localData[0]->realVars[448]/* s12.m_flow variable */) ;
  TRACE_POP
}
/*
equation index: 805
type: SIMPLE_ASSIGN
s01.outlet.p = T_mand.inlet.p - s01.dp_nom / s01.m_flow_nom * mfr_mandata
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,805};
  (data->localData[0]->realVars[436]/* s01.outlet.p variable */)  = (data->localData[0]->realVars[203]/* T_mand.inlet.p variable */)  - ((DIVISION_SIM((data->simulationInfo->realParameter[515]/* s01.dp_nom PARAM */) ,(data->simulationInfo->realParameter[517]/* s01.m_flow_nom PARAM */) ,"s01.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[308]/* mfr_mandata variable */) ));
  TRACE_POP
}
/*
equation index: 806
type: SIMPLE_ASSIGN
load4.inlet.p = s01.outlet.p - s16.dp_nom / s16.m_flow_nom * s16.m_flow
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,806};
  (data->localData[0]->realVars[277]/* load4.inlet.p variable */)  = (data->localData[0]->realVars[436]/* s01.outlet.p variable */)  - ((DIVISION_SIM((data->simulationInfo->realParameter[557]/* s16.dp_nom PARAM */) ,(data->simulationInfo->realParameter[559]/* s16.m_flow_nom PARAM */) ,"s16.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[461]/* s16.m_flow variable */) ));
  TRACE_POP
}
/*
equation index: 807
type: SIMPLE_ASSIGN
s47.outlet.p = load4.inlet.p - s67.dp_nom / s67.m_flow_nom * s67.m_flow
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,807};
  (data->localData[0]->realVars[514]/* s47.outlet.p variable */)  = (data->localData[0]->realVars[277]/* load4.inlet.p variable */)  - ((DIVISION_SIM((data->simulationInfo->realParameter[662]/* s67.dp_nom PARAM */) ,(data->simulationInfo->realParameter[664]/* s67.m_flow_nom PARAM */) ,"s67.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[526]/* s67.m_flow variable */) ));
  TRACE_POP
}
/*
equation index: 808
type: SIMPLE_ASSIGN
load5.inlet.p = s47.outlet.p - s78.dp_nom / s78.m_flow_nom * mfr_load[5]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,808};
  (data->localData[0]->realVars[291]/* load5.inlet.p variable */)  = (data->localData[0]->realVars[514]/* s47.outlet.p variable */)  - ((DIVISION_SIM((data->simulationInfo->realParameter[683]/* s78.dp_nom PARAM */) ,(data->simulationInfo->realParameter[685]/* s78.m_flow_nom PARAM */) ,"s78.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[307]/* mfr_load[5] variable */) ));
  TRACE_POP
}
/*
equation index: 809
type: SIMPLE_ASSIGN
s34.outlet.p = s47.dp_nom / s47.m_flow_nom * s47.m_flow + s47.outlet.p
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,809};
  (data->localData[0]->realVars[489]/* s34.outlet.p variable */)  = (DIVISION_SIM((data->simulationInfo->realParameter[641]/* s47.dp_nom PARAM */) ,(data->simulationInfo->realParameter[643]/* s47.m_flow_nom PARAM */) ,"s47.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[512]/* s47.m_flow variable */) ) + (data->localData[0]->realVars[514]/* s47.outlet.p variable */) ;
  TRACE_POP
}
/*
equation index: 810
type: SIMPLE_ASSIGN
load1.inlet.p = s01.outlet.p - s12.dp_nom / s12.m_flow_nom * s12.m_flow
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,810};
  (data->localData[0]->realVars[236]/* load1.inlet.p variable */)  = (data->localData[0]->realVars[436]/* s01.outlet.p variable */)  - ((DIVISION_SIM((data->simulationInfo->realParameter[536]/* s12.dp_nom PARAM */) ,(data->simulationInfo->realParameter[538]/* s12.m_flow_nom PARAM */) ,"s12.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[448]/* s12.m_flow variable */) ));
  TRACE_POP
}
/*
equation index: 811
type: SIMPLE_ASSIGN
load2.inlet.p = load1.inlet.p - s23.dp_nom / s23.m_flow_nom * s23.m_flow
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,811};
  (data->localData[0]->realVars[250]/* load2.inlet.p variable */)  = (data->localData[0]->realVars[236]/* load1.inlet.p variable */)  - ((DIVISION_SIM((data->simulationInfo->realParameter[578]/* s23.dp_nom PARAM */) ,(data->simulationInfo->realParameter[580]/* s23.m_flow_nom PARAM */) ,"s23.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[474]/* s23.m_flow variable */) ));
  TRACE_POP
}
/*
equation index: 812
type: SIMPLE_ASSIGN
load3.inlet.p = s34.outlet.p - s45.dp_nom / s45.m_flow_nom * mfr_load[3]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,812};
  (data->localData[0]->realVars[264]/* load3.inlet.p variable */)  = (data->localData[0]->realVars[489]/* s34.outlet.p variable */)  - ((DIVISION_SIM((data->simulationInfo->realParameter[620]/* s45.dp_nom PARAM */) ,(data->simulationInfo->realParameter[622]/* s45.m_flow_nom PARAM */) ,"s45.m_flow_nom",equationIndexes)) * ((data->localData[0]->realVars[305]/* mfr_load[3] variable */) ));
  TRACE_POP
}
/*
equation index: 813
type: SIMPLE_ASSIGN
load4.loadValveControl.y = load4.loadValveControl.limiter.u
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,813};
  (data->localData[0]->realVars[286]/* load4.loadValveControl.y variable */)  = (data->localData[0]->realVars[285]/* load4.loadValveControl.limiter.u variable */) ;
  TRACE_POP
}

void residualFunc914(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,914};
  int i;
  /* iteration variables */
  for (i=0; i<7; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<7; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  (data->localData[0]->realVars[306]/* mfr_load[4] variable */)  = xloc[0];
  (data->localData[0]->realVars[345]/* r32.m_flow variable */)  = xloc[1];
  (data->localData[0]->realVars[303]/* mfr_load[1] variable */)  = xloc[2];
  (data->localData[0]->realVars[474]/* s23.m_flow variable */)  = xloc[3];
  (data->localData[0]->realVars[526]/* s67.m_flow variable */)  = xloc[4];
  (data->localData[0]->realVars[305]/* mfr_load[3] variable */)  = xloc[5];
  (data->localData[0]->realVars[307]/* mfr_load[5] variable */)  = xloc[6];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_740(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_741(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_742(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_743(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_744(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_745(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_746(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_747(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_748(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_749(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_750(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_751(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_752(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_753(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_754(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_755(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_756(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_757(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_758(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_759(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_760(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_761(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_762(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_763(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_764(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_765(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_766(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_767(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_768(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_769(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_770(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_771(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_772(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_773(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_774(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_775(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_776(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_777(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_778(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_779(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_780(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_781(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_782(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_783(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_784(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_785(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_786(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_787(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_788(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_789(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_790(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_791(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_792(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_793(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_794(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_795(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_796(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_797(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_798(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_799(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_800(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_801(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_802(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_803(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_804(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_805(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_806(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_807(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_808(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_809(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_810(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_811(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_812(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_813(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[289]/* load4.outlet.p variable */)  + (-(data->localData[0]->realVars[385]/* r61.outlet.p variable */) ) - (((data->simulationInfo->realParameter[427]/* r61.dp_nom PARAM */) ) * (DIVISION_SIM((data->localData[0]->realVars[383]/* r61.m_flow variable */) ,(data->simulationInfo->realParameter[429]/* r61.m_flow_nom PARAM */) ,"r61.m_flow_nom",equationIndexes)));

  res[1] = ((data->localData[0]->realVars[273]/* load3.loadValveControl.y variable */)  + (data->simulationInfo->realParameter[163]/* load3.loadValve1.theta_min PARAM */) ) * (((data->simulationInfo->realParameter[162]/* load3.loadValve1.m_nom PARAM */) ) * (DIVISION_SIM((data->localData[0]->realVars[264]/* load3.inlet.p variable */)  - (data->localData[0]->realVars[275]/* load3.outlet.p variable */) ,((data->simulationInfo->realParameter[164]/* load3.loadValve1.theta_nom PARAM */) ) * ((data->simulationInfo->realParameter[161]/* load3.loadValve1.dp_nom PARAM */) ),"load3.loadValve1.theta_nom * load3.loadValve1.dp_nom",equationIndexes))) - (data->localData[0]->realVars[305]/* mfr_load[3] variable */) ;

  res[2] = (data->localData[0]->realVars[250]/* load2.inlet.p variable */)  + (-(data->localData[0]->realVars[489]/* s34.outlet.p variable */) ) - (((data->simulationInfo->realParameter[599]/* s34.dp_nom PARAM */) ) * (DIVISION_SIM((data->localData[0]->realVars[487]/* s34.m_flow variable */) ,(data->simulationInfo->realParameter[601]/* s34.m_flow_nom PARAM */) ,"s34.m_flow_nom",equationIndexes)));

  res[3] = ((data->localData[0]->realVars[245]/* load1.loadValveControl.y variable */)  + (data->simulationInfo->realParameter[69]/* load1.loadValve1.theta_min PARAM */) ) * (((data->simulationInfo->realParameter[68]/* load1.loadValve1.m_nom PARAM */) ) * (DIVISION_SIM((data->localData[0]->realVars[236]/* load1.inlet.p variable */)  - (data->localData[0]->realVars[248]/* load1.outlet.p variable */) ,((data->simulationInfo->realParameter[70]/* load1.loadValve1.theta_nom PARAM */) ) * ((data->simulationInfo->realParameter[67]/* load1.loadValve1.dp_nom PARAM */) ),"load1.loadValve1.theta_nom * load1.loadValve1.dp_nom",equationIndexes))) - (data->localData[0]->realVars[303]/* mfr_load[1] variable */) ;

  res[4] = ((data->localData[0]->realVars[259]/* load2.loadValveControl.y variable */)  + (data->simulationInfo->realParameter[116]/* load2.loadValve1.theta_min PARAM */) ) * (((data->simulationInfo->realParameter[115]/* load2.loadValve1.m_nom PARAM */) ) * (DIVISION_SIM((data->localData[0]->realVars[250]/* load2.inlet.p variable */)  - (data->localData[0]->realVars[262]/* load2.outlet.p variable */) ,((data->simulationInfo->realParameter[117]/* load2.loadValve1.theta_nom PARAM */) ) * ((data->simulationInfo->realParameter[114]/* load2.loadValve1.dp_nom PARAM */) ),"load2.loadValve1.theta_nom * load2.loadValve1.dp_nom",equationIndexes))) - (data->localData[0]->realVars[304]/* mfr_load[2] variable */) ;

  res[5] = ((data->localData[0]->realVars[286]/* load4.loadValveControl.y variable */)  + (data->simulationInfo->realParameter[210]/* load4.loadValve1.theta_min PARAM */) ) * (((data->simulationInfo->realParameter[209]/* load4.loadValve1.m_nom PARAM */) ) * (DIVISION_SIM((data->localData[0]->realVars[277]/* load4.inlet.p variable */)  - (data->localData[0]->realVars[289]/* load4.outlet.p variable */) ,((data->simulationInfo->realParameter[211]/* load4.loadValve1.theta_nom PARAM */) ) * ((data->simulationInfo->realParameter[208]/* load4.loadValve1.dp_nom PARAM */) ),"load4.loadValve1.theta_nom * load4.loadValve1.dp_nom",equationIndexes))) - (data->localData[0]->realVars[306]/* mfr_load[4] variable */) ;

  res[6] = ((data->localData[0]->realVars[300]/* load5.loadValveControl.y variable */)  + (data->simulationInfo->realParameter[257]/* load5.loadValve1.theta_min PARAM */) ) * (((data->simulationInfo->realParameter[256]/* load5.loadValve1.m_nom PARAM */) ) * (DIVISION_SIM((data->localData[0]->realVars[291]/* load5.inlet.p variable */)  - (data->localData[0]->realVars[302]/* load5.outlet.p variable */) ,((data->simulationInfo->realParameter[258]/* load5.loadValve1.theta_nom PARAM */) ) * ((data->simulationInfo->realParameter[255]/* load5.loadValve1.dp_nom PARAM */) ),"load5.loadValve1.theta_nom * load5.loadValve1.dp_nom",equationIndexes))) - (data->localData[0]->realVars[307]/* mfr_load[5] variable */) ;
  /* restore known outputs */
  TRACE_POP
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS914(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+7] = {0,7,6,7,7,7,7,7};
  const int rowIndex[48] = {0,1,2,3,4,5,6,0,1,3,4,5,6,0,1,2,3,4,5,6,0,1,2,3,4,5,6,0,1,2,3,4,5,6,0,1,2,3,4,5,6,0,1,2,3,4,5,6};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((7+1)*sizeof(unsigned int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(48*sizeof(unsigned int));
  inSysData->sparsePattern->numberOfNonZeros = 48;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(7*sizeof(unsigned int));
  inSysData->sparsePattern->maxColors = 7;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (7+1)*sizeof(unsigned int));
  
  for(i=2;i<7+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 48*sizeof(unsigned int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[6] = 1;
  inSysData->sparsePattern->colorCols[5] = 2;
  inSysData->sparsePattern->colorCols[4] = 3;
  inSysData->sparsePattern->colorCols[3] = 4;
  inSysData->sparsePattern->colorCols[2] = 5;
  inSysData->sparsePattern->colorCols[1] = 6;
  inSysData->sparsePattern->colorCols[0] = 7;
}

OMC_DISABLE_OPT
void initializeStaticDataNLS914(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for mfr_load[4] */
  sysData->nominal[i] = data->modelData->realVarsData[306].attribute /* mfr_load[4] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[306].attribute /* mfr_load[4] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[306].attribute /* mfr_load[4] */.max;
  /* static nls data for r32.m_flow */
  sysData->nominal[i] = data->modelData->realVarsData[345].attribute /* r32.m_flow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[345].attribute /* r32.m_flow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[345].attribute /* r32.m_flow */.max;
  /* static nls data for mfr_load[1] */
  sysData->nominal[i] = data->modelData->realVarsData[303].attribute /* mfr_load[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[303].attribute /* mfr_load[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[303].attribute /* mfr_load[1] */.max;
  /* static nls data for s23.m_flow */
  sysData->nominal[i] = data->modelData->realVarsData[474].attribute /* s23.m_flow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[474].attribute /* s23.m_flow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[474].attribute /* s23.m_flow */.max;
  /* static nls data for s67.m_flow */
  sysData->nominal[i] = data->modelData->realVarsData[526].attribute /* s67.m_flow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[526].attribute /* s67.m_flow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[526].attribute /* s67.m_flow */.max;
  /* static nls data for mfr_load[3] */
  sysData->nominal[i] = data->modelData->realVarsData[305].attribute /* mfr_load[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[305].attribute /* mfr_load[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[305].attribute /* mfr_load[3] */.max;
  /* static nls data for mfr_load[5] */
  sysData->nominal[i] = data->modelData->realVarsData[307].attribute /* mfr_load[5] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[307].attribute /* mfr_load[5] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[307].attribute /* mfr_load[5] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS914(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS914(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = (data->localData[0]->realVars[306]/* mfr_load[4] variable */) ;
  array[1] = (data->localData[0]->realVars[345]/* r32.m_flow variable */) ;
  array[2] = (data->localData[0]->realVars[303]/* mfr_load[1] variable */) ;
  array[3] = (data->localData[0]->realVars[474]/* s23.m_flow variable */) ;
  array[4] = (data->localData[0]->realVars[526]/* s67.m_flow variable */) ;
  array[5] = (data->localData[0]->realVars[305]/* mfr_load[3] variable */) ;
  array[6] = (data->localData[0]->realVars[307]/* mfr_load[5] variable */) ;
}


/* inner equations */

/*
equation index: 1262
type: SIMPLE_ASSIGN
$cse37 = max(mfr_load[3], load3.load.b)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1262};
  (data->localData[0]->realVars[169]/* $cse37 variable */)  = fmax((data->localData[0]->realVars[305]/* mfr_load[3] variable */) ,(data->simulationInfo->realParameter[159]/* load3.load.b PARAM */) );
  TRACE_POP
}
/*
equation index: 1263
type: SIMPLE_ASSIGN
load3.outlet.h_out = load3.inlet.h_out + P_load3 / $cse37
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1263};
  (data->localData[0]->realVars[274]/* load3.outlet.h_out variable */)  = (data->localData[0]->realVars[263]/* load3.inlet.h_out variable */)  + DIVISION_SIM((data->localData[0]->realVars[197]/* P_load3 variable */) ,(data->localData[0]->realVars[169]/* $cse37 variable */) ,"$cse37",equationIndexes);
  TRACE_POP
}
/*
equation index: 1264
type: SIMPLE_ASSIGN
Tr_load[3] = if mfr_load[3] > 0.0 then -273.15 + 0.0002389486260454002 * load3.outlet.h_out else -273.15 + 0.0002389486260454002 * r54.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1264};
  modelica_boolean tmp0;
  relationhysteresis(data, &tmp0, (data->localData[0]->realVars[305]/* mfr_load[3] variable */) , 0.0, 3, Greater, GreaterZC);
  (data->localData[0]->realVars[208]/* Tr_load[3] variable */)  = (tmp0?-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[274]/* load3.outlet.h_out variable */) ):-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[370]/* r54.inlet.h_out variable */) ));
  TRACE_POP
}
/*
equation index: 1265
type: SIMPLE_ASSIGN
s45.u = mfr_load[3] / (985.0 * s45.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1265};
  (data->localData[0]->realVars[503]/* s45.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[305]/* mfr_load[3] variable */) ,(985.0) * ((data->simulationInfo->realParameter[606]/* s45.A PARAM */) ),"985.0 * s45.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 1266
type: SIMPLE_ASSIGN
$cse34 = Modelica.Fluid.Utilities.regSquare(s45.u, s45.u_nom * 0.05)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1266};
  (data->localData[0]->realVars[166]/* $cse34 variable */)  = omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[503]/* s45.u variable */) , ((data->simulationInfo->realParameter[626]/* s45.u_nom PARAM */) ) * (0.05));
  TRACE_POP
}
/*
equation index: 1267
type: SIMPLE_ASSIGN
r54.u = mfr_load[3] / (985.0 * r54.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1267};
  (data->localData[0]->realVars[374]/* r54.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[305]/* mfr_load[3] variable */) ,(985.0) * ((data->simulationInfo->realParameter[392]/* r54.A PARAM */) ),"985.0 * r54.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 1268
type: SIMPLE_ASSIGN
$cse35 = Modelica.Fluid.Utilities.regSquare(r54.u, r54.u_nom * 0.05)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1268};
  (data->localData[0]->realVars[167]/* $cse35 variable */)  = omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[374]/* r54.u variable */) , ((data->simulationInfo->realParameter[412]/* r54.u_nom PARAM */) ) * (0.05));
  TRACE_POP
}
/*
equation index: 1269
type: SIMPLE_ASSIGN
load3.loadValveControl.addP.y = load3.loadValveControl.addP.k1 * load_ref.k + load3.loadValveControl.addP.k2 * Tr_load[3]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1269};
  (data->localData[0]->realVars[268]/* load3.loadValveControl.addP.y variable */)  = ((data->simulationInfo->realParameter[179]/* load3.loadValveControl.addP.k1 PARAM */) ) * ((data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ) + ((data->simulationInfo->realParameter[180]/* load3.loadValveControl.addP.k2 PARAM */) ) * ((data->localData[0]->realVars[208]/* Tr_load[3] variable */) );
  TRACE_POP
}
/*
equation index: 1270
type: SIMPLE_ASSIGN
load3.loadValveControl.P.y = load3.loadValveControl.P.k * load3.loadValveControl.addP.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1270};
  (data->localData[0]->realVars[267]/* load3.loadValveControl.P.y variable */)  = ((data->simulationInfo->realParameter[173]/* load3.loadValveControl.P.k PARAM */) ) * ((data->localData[0]->realVars[268]/* load3.loadValveControl.addP.y variable */) );
  TRACE_POP
}
/*
equation index: 1271
type: SIMPLE_ASSIGN
load3.loadValveControl.addPID.y = load3.loadValveControl.addPID.k1 * load3.loadValveControl.P.y + load3.loadValveControl.addPID.k2 * load3.loadValveControl.Dzero.k + load3.loadValveControl.addPID.k3 * load3.loadValveControl.Izero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1271};
  (data->localData[0]->realVars[269]/* load3.loadValveControl.addPID.y variable */)  = ((data->simulationInfo->realParameter[182]/* load3.loadValveControl.addPID.k1 PARAM */) ) * ((data->localData[0]->realVars[267]/* load3.loadValveControl.P.y variable */) ) + ((data->simulationInfo->realParameter[183]/* load3.loadValveControl.addPID.k2 PARAM */) ) * ((data->simulationInfo->realParameter[165]/* load3.loadValveControl.Dzero.k PARAM */) ) + ((data->simulationInfo->realParameter[184]/* load3.loadValveControl.addPID.k3 PARAM */) ) * ((data->simulationInfo->realParameter[169]/* load3.loadValveControl.Izero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 1272
type: SIMPLE_ASSIGN
load3.loadValveControl.gainPID.y = load3.loadValveControl.gainPID.k * load3.loadValveControl.addPID.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1272};
  (data->localData[0]->realVars[271]/* load3.loadValveControl.gainPID.y variable */)  = ((data->simulationInfo->realParameter[187]/* load3.loadValveControl.gainPID.k PARAM */) ) * ((data->localData[0]->realVars[269]/* load3.loadValveControl.addPID.y variable */) );
  TRACE_POP
}
/*
equation index: 1273
type: SIMPLE_ASSIGN
load3.loadValveControl.limiter.u = load3.loadValveControl.addFF.k1 * load3.loadValveControl.gainPID.y + load3.loadValveControl.addFF.k2 * load3.loadValveControl.FFzero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1273};
  (data->localData[0]->realVars[272]/* load3.loadValveControl.limiter.u variable */)  = ((data->simulationInfo->realParameter[176]/* load3.loadValveControl.addFF.k1 PARAM */) ) * ((data->localData[0]->realVars[271]/* load3.loadValveControl.gainPID.y variable */) ) + ((data->simulationInfo->realParameter[177]/* load3.loadValveControl.addFF.k2 PARAM */) ) * ((data->simulationInfo->realParameter[167]/* load3.loadValveControl.FFzero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 1274
type: SIMPLE_ASSIGN
load3.loadValveControl.y = smooth(0, if load3.loadValveControl.limiter.u > load3.loadValveControl.limiter.uMax then load3.loadValveControl.limiter.uMax else if load3.loadValveControl.limiter.u < load3.loadValveControl.limiter.uMin then load3.loadValveControl.limiter.uMin else load3.loadValveControl.limiter.u)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1274};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater((data->localData[0]->realVars[272]/* load3.loadValveControl.limiter.u variable */) ,(data->simulationInfo->realParameter[190]/* load3.loadValveControl.limiter.uMax PARAM */) );
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = (data->simulationInfo->realParameter[190]/* load3.loadValveControl.limiter.uMax PARAM */) ;
  }
  else
  {
    tmp1 = Less((data->localData[0]->realVars[272]/* load3.loadValveControl.limiter.u variable */) ,(data->simulationInfo->realParameter[191]/* load3.loadValveControl.limiter.uMin PARAM */) );
    tmp3 = (tmp1?(data->simulationInfo->realParameter[191]/* load3.loadValveControl.limiter.uMin PARAM */) :(data->localData[0]->realVars[272]/* load3.loadValveControl.limiter.u variable */) );
  }
  (data->localData[0]->realVars[273]/* load3.loadValveControl.y variable */)  = tmp3;
  TRACE_POP
}
/*
equation index: 1275
type: SIMPLE_ASSIGN
$cse23 = max(mfr_load[5], load5.load.b)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1275};
  (data->localData[0]->realVars[155]/* $cse23 variable */)  = fmax((data->localData[0]->realVars[307]/* mfr_load[5] variable */) ,(data->simulationInfo->realParameter[253]/* load5.load.b PARAM */) );
  TRACE_POP
}
/*
equation index: 1276
type: SIMPLE_ASSIGN
load5.outlet.h_out = load5.inlet.h_out + P_load5 / $cse23
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1276};
  (data->localData[0]->realVars[301]/* load5.outlet.h_out variable */)  = (data->localData[0]->realVars[290]/* load5.inlet.h_out variable */)  + DIVISION_SIM((data->localData[0]->realVars[199]/* P_load5 variable */) ,(data->localData[0]->realVars[155]/* $cse23 variable */) ,"$cse23",equationIndexes);
  TRACE_POP
}
/*
equation index: 1277
type: SIMPLE_ASSIGN
Tr_load[5] = if mfr_load[5] > 0.0 then -273.15 + 0.0002389486260454002 * load5.outlet.h_out else -273.15 + 0.0002389486260454002 * r87.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1277};
  modelica_boolean tmp0;
  relationhysteresis(data, &tmp0, (data->localData[0]->realVars[307]/* mfr_load[5] variable */) , 0.0, 2, Greater, GreaterZC);
  (data->localData[0]->realVars[210]/* Tr_load[5] variable */)  = (tmp0?-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[301]/* load5.outlet.h_out variable */) ):-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[423]/* r87.inlet.h_out variable */) ));
  TRACE_POP
}
/*
equation index: 1278
type: SIMPLE_ASSIGN
r87.u = mfr_load[5] / (985.0 * r87.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1278};
  (data->localData[0]->realVars[428]/* r87.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[307]/* mfr_load[5] variable */) ,(985.0) * ((data->simulationInfo->realParameter[476]/* r87.A PARAM */) ),"985.0 * r87.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 1279
type: SIMPLE_ASSIGN
$cse21 = Modelica.Fluid.Utilities.regSquare(r87.u, r87.u_nom * 0.05)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1279};
  (data->localData[0]->realVars[153]/* $cse21 variable */)  = omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[428]/* r87.u variable */) , ((data->simulationInfo->realParameter[496]/* r87.u_nom PARAM */) ) * (0.05));
  TRACE_POP
}
/*
equation index: 1280
type: SIMPLE_ASSIGN
load5.loadValveControl.addP.y = load5.loadValveControl.addP.k1 * load_ref.k + load5.loadValveControl.addP.k2 * Tr_load[5]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1280};
  (data->localData[0]->realVars[295]/* load5.loadValveControl.addP.y variable */)  = ((data->simulationInfo->realParameter[273]/* load5.loadValveControl.addP.k1 PARAM */) ) * ((data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ) + ((data->simulationInfo->realParameter[274]/* load5.loadValveControl.addP.k2 PARAM */) ) * ((data->localData[0]->realVars[210]/* Tr_load[5] variable */) );
  TRACE_POP
}
/*
equation index: 1281
type: SIMPLE_ASSIGN
load5.loadValveControl.P.y = load5.loadValveControl.P.k * load5.loadValveControl.addP.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1281};
  (data->localData[0]->realVars[294]/* load5.loadValveControl.P.y variable */)  = ((data->simulationInfo->realParameter[267]/* load5.loadValveControl.P.k PARAM */) ) * ((data->localData[0]->realVars[295]/* load5.loadValveControl.addP.y variable */) );
  TRACE_POP
}
/*
equation index: 1282
type: SIMPLE_ASSIGN
load5.loadValveControl.addPID.y = load5.loadValveControl.addPID.k1 * load5.loadValveControl.P.y + load5.loadValveControl.addPID.k2 * load5.loadValveControl.Dzero.k + load5.loadValveControl.addPID.k3 * load5.loadValveControl.Izero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1282};
  (data->localData[0]->realVars[296]/* load5.loadValveControl.addPID.y variable */)  = ((data->simulationInfo->realParameter[276]/* load5.loadValveControl.addPID.k1 PARAM */) ) * ((data->localData[0]->realVars[294]/* load5.loadValveControl.P.y variable */) ) + ((data->simulationInfo->realParameter[277]/* load5.loadValveControl.addPID.k2 PARAM */) ) * ((data->simulationInfo->realParameter[259]/* load5.loadValveControl.Dzero.k PARAM */) ) + ((data->simulationInfo->realParameter[278]/* load5.loadValveControl.addPID.k3 PARAM */) ) * ((data->simulationInfo->realParameter[263]/* load5.loadValveControl.Izero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 1283
type: SIMPLE_ASSIGN
load5.loadValveControl.gainPID.y = load5.loadValveControl.gainPID.k * load5.loadValveControl.addPID.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1283};
  (data->localData[0]->realVars[298]/* load5.loadValveControl.gainPID.y variable */)  = ((data->simulationInfo->realParameter[281]/* load5.loadValveControl.gainPID.k PARAM */) ) * ((data->localData[0]->realVars[296]/* load5.loadValveControl.addPID.y variable */) );
  TRACE_POP
}
/*
equation index: 1284
type: SIMPLE_ASSIGN
load5.loadValveControl.limiter.u = load5.loadValveControl.addFF.k1 * load5.loadValveControl.gainPID.y + load5.loadValveControl.addFF.k2 * load5.loadValveControl.FFzero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1284};
  (data->localData[0]->realVars[299]/* load5.loadValveControl.limiter.u variable */)  = ((data->simulationInfo->realParameter[270]/* load5.loadValveControl.addFF.k1 PARAM */) ) * ((data->localData[0]->realVars[298]/* load5.loadValveControl.gainPID.y variable */) ) + ((data->simulationInfo->realParameter[271]/* load5.loadValveControl.addFF.k2 PARAM */) ) * ((data->simulationInfo->realParameter[261]/* load5.loadValveControl.FFzero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 1285
type: SIMPLE_ASSIGN
load5.loadValveControl.y = smooth(0, if load5.loadValveControl.limiter.u > load5.loadValveControl.limiter.uMax then load5.loadValveControl.limiter.uMax else if load5.loadValveControl.limiter.u < load5.loadValveControl.limiter.uMin then load5.loadValveControl.limiter.uMin else load5.loadValveControl.limiter.u)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1285};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater((data->localData[0]->realVars[299]/* load5.loadValveControl.limiter.u variable */) ,(data->simulationInfo->realParameter[284]/* load5.loadValveControl.limiter.uMax PARAM */) );
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = (data->simulationInfo->realParameter[284]/* load5.loadValveControl.limiter.uMax PARAM */) ;
  }
  else
  {
    tmp1 = Less((data->localData[0]->realVars[299]/* load5.loadValveControl.limiter.u variable */) ,(data->simulationInfo->realParameter[285]/* load5.loadValveControl.limiter.uMin PARAM */) );
    tmp3 = (tmp1?(data->simulationInfo->realParameter[285]/* load5.loadValveControl.limiter.uMin PARAM */) :(data->localData[0]->realVars[299]/* load5.loadValveControl.limiter.u variable */) );
  }
  (data->localData[0]->realVars[300]/* load5.loadValveControl.y variable */)  = tmp3;
  TRACE_POP
}
/*
equation index: 1286
type: SIMPLE_ASSIGN
s78.u = mfr_load[5] / (985.0 * s78.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1286};
  (data->localData[0]->realVars[541]/* s78.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[307]/* mfr_load[5] variable */) ,(985.0) * ((data->simulationInfo->realParameter[669]/* s78.A PARAM */) ),"985.0 * s78.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 1287
type: SIMPLE_ASSIGN
$cse20 = Modelica.Fluid.Utilities.regSquare(s78.u, s78.u_nom * 0.05)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1287};
  (data->localData[0]->realVars[152]/* $cse20 variable */)  = omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[541]/* s78.u variable */) , ((data->simulationInfo->realParameter[689]/* s78.u_nom PARAM */) ) * (0.05));
  TRACE_POP
}
/*
equation index: 1288
type: SIMPLE_ASSIGN
$cse53 = max(-s23.m_flow, 1e-07)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1288};
  (data->localData[0]->realVars[185]/* $cse53 variable */)  = fmax((-(data->localData[0]->realVars[474]/* s23.m_flow variable */) ),1e-07);
  TRACE_POP
}
/*
equation index: 1289
type: SIMPLE_ASSIGN
$cse41 = max(s23.m_flow, 1e-07)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1289};
  (data->localData[0]->realVars[173]/* $cse41 variable */)  = fmax((data->localData[0]->realVars[474]/* s23.m_flow variable */) ,1e-07);
  TRACE_POP
}
/*
equation index: 1290
type: SIMPLE_ASSIGN
s23.u = s23.m_flow / (985.0 * s23.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1290};
  (data->localData[0]->realVars[478]/* s23.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[474]/* s23.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[564]/* s23.A PARAM */) ),"985.0 * s23.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 1291
type: SIMPLE_ASSIGN
$cse38 = Modelica.Fluid.Utilities.regSquare(s23.u, s23.u_nom * 0.05)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1291};
  (data->localData[0]->realVars[170]/* $cse38 variable */)  = omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[478]/* s23.u variable */) , ((data->simulationInfo->realParameter[584]/* s23.u_nom PARAM */) ) * (0.05));
  TRACE_POP
}
/*
equation index: 1292
type: SIMPLE_ASSIGN
$cse56 = max(r32.m_flow, 1e-07)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1292};
  (data->localData[0]->realVars[188]/* $cse56 variable */)  = fmax((data->localData[0]->realVars[345]/* r32.m_flow variable */) ,1e-07);
  TRACE_POP
}
/*
equation index: 1293
type: SIMPLE_ASSIGN
$cse43 = max(-r32.m_flow, 1e-07)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1293};
  (data->localData[0]->realVars[175]/* $cse43 variable */)  = fmax((-(data->localData[0]->realVars[345]/* r32.m_flow variable */) ),1e-07);
  TRACE_POP
}
/*
equation index: 1294
type: SIMPLE_ASSIGN
r32.u = r32.m_flow / (985.0 * r32.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1294};
  (data->localData[0]->realVars[349]/* r32.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[345]/* r32.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[350]/* r32.A PARAM */) ),"985.0 * r32.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 1295
type: SIMPLE_ASSIGN
$cse39 = Modelica.Fluid.Utilities.regSquare(r32.u, r32.u_nom * 0.05)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1295};
  (data->localData[0]->realVars[171]/* $cse39 variable */)  = omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[349]/* r32.u variable */) , ((data->simulationInfo->realParameter[370]/* r32.u_nom PARAM */) ) * (0.05));
  TRACE_POP
}
/*
equation index: 1296
type: SIMPLE_ASSIGN
$cse58 = max(mfr_load[1], load1.load.b)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1296};
  (data->localData[0]->realVars[190]/* $cse58 variable */)  = fmax((data->localData[0]->realVars[303]/* mfr_load[1] variable */) ,(data->simulationInfo->realParameter[65]/* load1.load.b PARAM */) );
  TRACE_POP
}
/*
equation index: 1297
type: SIMPLE_ASSIGN
s12.m_flow = s23.m_flow + mfr_load[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1297};
  (data->localData[0]->realVars[448]/* s12.m_flow variable */)  = (data->localData[0]->realVars[474]/* s23.m_flow variable */)  + (data->localData[0]->realVars[303]/* mfr_load[1] variable */) ;
  TRACE_POP
}
/*
equation index: 1298
type: SIMPLE_ASSIGN
$cse54 = max(s12.m_flow, 1e-07)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1298};
  (data->localData[0]->realVars[186]/* $cse54 variable */)  = fmax((data->localData[0]->realVars[448]/* s12.m_flow variable */) ,1e-07);
  TRACE_POP
}
/*
equation index: 1299
type: SIMPLE_ASSIGN
load1.inlet.h_out = ($cse53 * s23.inlet.h_out + $cse54 * s12.outlet.h_out) / ($cse53 + $cse54)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1299};
  (data->localData[0]->realVars[235]/* load1.inlet.h_out variable */)  = DIVISION_SIM(((data->localData[0]->realVars[185]/* $cse53 variable */) ) * ((data->localData[0]->realVars[473]/* s23.inlet.h_out variable */) ) + ((data->localData[0]->realVars[186]/* $cse54 variable */) ) * ((data->localData[0]->realVars[449]/* s12.outlet.h_out variable */) ),(data->localData[0]->realVars[185]/* $cse53 variable */)  + (data->localData[0]->realVars[186]/* $cse54 variable */) ,"$cse53 + $cse54",equationIndexes);
  TRACE_POP
}
/*
equation index: 1300
type: SIMPLE_ASSIGN
load1.outlet.h_out = load1.inlet.h_out + P_load1 / $cse58
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1300};
  (data->localData[0]->realVars[247]/* load1.outlet.h_out variable */)  = (data->localData[0]->realVars[235]/* load1.inlet.h_out variable */)  + DIVISION_SIM((data->localData[0]->realVars[195]/* P_load1 variable */) ,(data->localData[0]->realVars[190]/* $cse58 variable */) ,"$cse58",equationIndexes);
  TRACE_POP
}
/*
equation index: 1301
type: SIMPLE_ASSIGN
s12.u = s12.m_flow / (985.0 * s12.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1301};
  (data->localData[0]->realVars[452]/* s12.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[448]/* s12.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[522]/* s12.A PARAM */) ),"985.0 * s12.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 1302
type: SIMPLE_ASSIGN
$cse52 = Modelica.Fluid.Utilities.regSquare(s12.u, s12.u_nom * 0.05)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1302};
  (data->localData[0]->realVars[184]/* $cse52 variable */)  = omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[452]/* s12.u variable */) , ((data->simulationInfo->realParameter[542]/* s12.u_nom PARAM */) ) * (0.05));
  TRACE_POP
}
/*
equation index: 1303
type: SIMPLE_ASSIGN
r21.m_flow = r32.m_flow + mfr_load[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1303};
  (data->localData[0]->realVars[332]/* r21.m_flow variable */)  = (data->localData[0]->realVars[345]/* r32.m_flow variable */)  + (data->localData[0]->realVars[303]/* mfr_load[1] variable */) ;
  TRACE_POP
}
/*
equation index: 1304
type: SIMPLE_ASSIGN
$cse57 = max(-r21.m_flow, 1e-07)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1304};
  (data->localData[0]->realVars[189]/* $cse57 variable */)  = fmax((-(data->localData[0]->realVars[332]/* r21.m_flow variable */) ),1e-07);
  TRACE_POP
}
/*
equation index: 1305
type: SIMPLE_ASSIGN
load1.mfr_s.inlet.h_out = ($cse56 * r32.outlet.h_out + $cse57 * r21.inlet.h_out) / ($cse56 + $cse57)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1305};
  (data->localData[0]->realVars[246]/* load1.mfr_s.inlet.h_out variable */)  = DIVISION_SIM(((data->localData[0]->realVars[188]/* $cse56 variable */) ) * ((data->localData[0]->realVars[346]/* r32.outlet.h_out variable */) ) + ((data->localData[0]->realVars[189]/* $cse57 variable */) ) * ((data->localData[0]->realVars[331]/* r21.inlet.h_out variable */) ),(data->localData[0]->realVars[188]/* $cse56 variable */)  + (data->localData[0]->realVars[189]/* $cse57 variable */) ,"$cse56 + $cse57",equationIndexes);
  TRACE_POP
}
/*
equation index: 1306
type: SIMPLE_ASSIGN
Tr_load[1] = if mfr_load[1] > 0.0 then -273.15 + 0.0002389486260454002 * load1.outlet.h_out else -273.15 + 0.0002389486260454002 * load1.mfr_s.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1306};
  modelica_boolean tmp0;
  relationhysteresis(data, &tmp0, (data->localData[0]->realVars[303]/* mfr_load[1] variable */) , 0.0, 1, Greater, GreaterZC);
  (data->localData[0]->realVars[206]/* Tr_load[1] variable */)  = (tmp0?-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[247]/* load1.outlet.h_out variable */) ):-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[246]/* load1.mfr_s.inlet.h_out variable */) ));
  TRACE_POP
}
/*
equation index: 1307
type: SIMPLE_ASSIGN
load1.loadValveControl.addP.y = load1.loadValveControl.addP.k1 * load_ref.k + load1.loadValveControl.addP.k2 * Tr_load[1]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1307};
  (data->localData[0]->realVars[240]/* load1.loadValveControl.addP.y variable */)  = ((data->simulationInfo->realParameter[85]/* load1.loadValveControl.addP.k1 PARAM */) ) * ((data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ) + ((data->simulationInfo->realParameter[86]/* load1.loadValveControl.addP.k2 PARAM */) ) * ((data->localData[0]->realVars[206]/* Tr_load[1] variable */) );
  TRACE_POP
}
/*
equation index: 1308
type: SIMPLE_ASSIGN
load1.loadValveControl.P.y = load1.loadValveControl.P.k * load1.loadValveControl.addP.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1308};
  (data->localData[0]->realVars[239]/* load1.loadValveControl.P.y variable */)  = ((data->simulationInfo->realParameter[79]/* load1.loadValveControl.P.k PARAM */) ) * ((data->localData[0]->realVars[240]/* load1.loadValveControl.addP.y variable */) );
  TRACE_POP
}
/*
equation index: 1309
type: SIMPLE_ASSIGN
load1.loadValveControl.addPID.y = load1.loadValveControl.addPID.k1 * load1.loadValveControl.P.y + load1.loadValveControl.addPID.k2 * load1.loadValveControl.Dzero.k + load1.loadValveControl.addPID.k3 * load1.loadValveControl.Izero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1309};
  (data->localData[0]->realVars[241]/* load1.loadValveControl.addPID.y variable */)  = ((data->simulationInfo->realParameter[88]/* load1.loadValveControl.addPID.k1 PARAM */) ) * ((data->localData[0]->realVars[239]/* load1.loadValveControl.P.y variable */) ) + ((data->simulationInfo->realParameter[89]/* load1.loadValveControl.addPID.k2 PARAM */) ) * ((data->simulationInfo->realParameter[71]/* load1.loadValveControl.Dzero.k PARAM */) ) + ((data->simulationInfo->realParameter[90]/* load1.loadValveControl.addPID.k3 PARAM */) ) * ((data->simulationInfo->realParameter[75]/* load1.loadValveControl.Izero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 1310
type: SIMPLE_ASSIGN
load1.loadValveControl.gainPID.y = load1.loadValveControl.gainPID.k * load1.loadValveControl.addPID.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1310};
  (data->localData[0]->realVars[243]/* load1.loadValveControl.gainPID.y variable */)  = ((data->simulationInfo->realParameter[93]/* load1.loadValveControl.gainPID.k PARAM */) ) * ((data->localData[0]->realVars[241]/* load1.loadValveControl.addPID.y variable */) );
  TRACE_POP
}
/*
equation index: 1311
type: SIMPLE_ASSIGN
load1.loadValveControl.limiter.u = load1.loadValveControl.addFF.k1 * load1.loadValveControl.gainPID.y + load1.loadValveControl.addFF.k2 * load1.loadValveControl.FFzero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1311};
  (data->localData[0]->realVars[244]/* load1.loadValveControl.limiter.u variable */)  = ((data->simulationInfo->realParameter[82]/* load1.loadValveControl.addFF.k1 PARAM */) ) * ((data->localData[0]->realVars[243]/* load1.loadValveControl.gainPID.y variable */) ) + ((data->simulationInfo->realParameter[83]/* load1.loadValveControl.addFF.k2 PARAM */) ) * ((data->simulationInfo->realParameter[73]/* load1.loadValveControl.FFzero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 1312
type: SIMPLE_ASSIGN
load1.loadValveControl.y = smooth(0, if load1.loadValveControl.limiter.u > load1.loadValveControl.limiter.uMax then load1.loadValveControl.limiter.uMax else if load1.loadValveControl.limiter.u < load1.loadValveControl.limiter.uMin then load1.loadValveControl.limiter.uMin else load1.loadValveControl.limiter.u)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1312};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater((data->localData[0]->realVars[244]/* load1.loadValveControl.limiter.u variable */) ,(data->simulationInfo->realParameter[96]/* load1.loadValveControl.limiter.uMax PARAM */) );
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = (data->simulationInfo->realParameter[96]/* load1.loadValveControl.limiter.uMax PARAM */) ;
  }
  else
  {
    tmp1 = Less((data->localData[0]->realVars[244]/* load1.loadValveControl.limiter.u variable */) ,(data->simulationInfo->realParameter[97]/* load1.loadValveControl.limiter.uMin PARAM */) );
    tmp3 = (tmp1?(data->simulationInfo->realParameter[97]/* load1.loadValveControl.limiter.uMin PARAM */) :(data->localData[0]->realVars[244]/* load1.loadValveControl.limiter.u variable */) );
  }
  (data->localData[0]->realVars[245]/* load1.loadValveControl.y variable */)  = tmp3;
  TRACE_POP
}
/*
equation index: 1313
type: SIMPLE_ASSIGN
r21.u = r21.m_flow / (985.0 * r21.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1313};
  (data->localData[0]->realVars[336]/* r21.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[332]/* r21.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[329]/* r21.A PARAM */) ),"985.0 * r21.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 1314
type: SIMPLE_ASSIGN
$cse48 = Modelica.Fluid.Utilities.regSquare(r21.u, r21.u_nom * 0.05)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1314};
  (data->localData[0]->realVars[180]/* $cse48 variable */)  = omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[336]/* r21.u variable */) , ((data->simulationInfo->realParameter[349]/* r21.u_nom PARAM */) ) * (0.05));
  TRACE_POP
}
/*
equation index: 1315
type: SIMPLE_ASSIGN
$cse45 = max(mfr_load[2], load2.load.b)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1315};
  (data->localData[0]->realVars[177]/* $cse45 variable */)  = fmax((data->localData[0]->realVars[304]/* mfr_load[2] variable */) ,(data->simulationInfo->realParameter[112]/* load2.load.b PARAM */) );
  TRACE_POP
}
/*
equation index: 1316
type: SIMPLE_ASSIGN
r43.m_flow = r32.m_flow - mfr_load[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1316};
  (data->localData[0]->realVars[358]/* r43.m_flow variable */)  = (data->localData[0]->realVars[345]/* r32.m_flow variable */)  - (data->localData[0]->realVars[304]/* mfr_load[2] variable */) ;
  TRACE_POP
}
/*
equation index: 1317
type: SIMPLE_ASSIGN
$cse44 = max(r43.m_flow, 1e-07)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1317};
  (data->localData[0]->realVars[176]/* $cse44 variable */)  = fmax((data->localData[0]->realVars[358]/* r43.m_flow variable */) ,1e-07);
  TRACE_POP
}
/*
equation index: 1318
type: SIMPLE_ASSIGN
load2.mfr_s.inlet.h_out = ($cse43 * r32.inlet.h_out + $cse44 * r43.outlet.h_out) / ($cse43 + $cse44)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1318};
  (data->localData[0]->realVars[260]/* load2.mfr_s.inlet.h_out variable */)  = DIVISION_SIM(((data->localData[0]->realVars[175]/* $cse43 variable */) ) * ((data->localData[0]->realVars[344]/* r32.inlet.h_out variable */) ) + ((data->localData[0]->realVars[176]/* $cse44 variable */) ) * ((data->localData[0]->realVars[359]/* r43.outlet.h_out variable */) ),(data->localData[0]->realVars[175]/* $cse43 variable */)  + (data->localData[0]->realVars[176]/* $cse44 variable */) ,"$cse43 + $cse44",equationIndexes);
  TRACE_POP
}
/*
equation index: 1319
type: SIMPLE_ASSIGN
r43.u = r43.m_flow / (985.0 * r43.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1319};
  (data->localData[0]->realVars[362]/* r43.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[358]/* r43.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[371]/* r43.A PARAM */) ),"985.0 * r43.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 1320
type: SIMPLE_ASSIGN
$cse46 = Modelica.Fluid.Utilities.regSquare(r43.u, r43.u_nom * 0.05)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1320};
  (data->localData[0]->realVars[178]/* $cse46 variable */)  = omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[362]/* r43.u variable */) , ((data->simulationInfo->realParameter[391]/* r43.u_nom PARAM */) ) * (0.05));
  TRACE_POP
}
/*
equation index: 1321
type: SIMPLE_ASSIGN
r74.m_flow = r43.m_flow - mfr_load[3]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1321};
  (data->localData[0]->realVars[397]/* r74.m_flow variable */)  = (data->localData[0]->realVars[358]/* r43.m_flow variable */)  - (data->localData[0]->realVars[305]/* mfr_load[3] variable */) ;
  TRACE_POP
}
/*
equation index: 1322
type: SIMPLE_ASSIGN
r74.u = r74.m_flow / (985.0 * r74.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1322};
  (data->localData[0]->realVars[402]/* r74.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[397]/* r74.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[434]/* r74.A PARAM */) ),"985.0 * r74.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 1323
type: SIMPLE_ASSIGN
$cse18 = Modelica.Fluid.Utilities.regSquare(r74.u, r74.u_nom * 0.05)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1323};
  (data->localData[0]->realVars[150]/* $cse18 variable */)  = omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[402]/* r74.u variable */) , ((data->simulationInfo->realParameter[454]/* r74.u_nom PARAM */) ) * (0.05));
  TRACE_POP
}
/*
equation index: 1324
type: SIMPLE_ASSIGN
s34.m_flow = s23.m_flow - mfr_load[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1324};
  (data->localData[0]->realVars[487]/* s34.m_flow variable */)  = (data->localData[0]->realVars[474]/* s23.m_flow variable */)  - (data->localData[0]->realVars[304]/* mfr_load[2] variable */) ;
  TRACE_POP
}
/*
equation index: 1325
type: SIMPLE_ASSIGN
$cse40 = max(-s34.m_flow, 1e-07)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1325};
  (data->localData[0]->realVars[172]/* $cse40 variable */)  = fmax((-(data->localData[0]->realVars[487]/* s34.m_flow variable */) ),1e-07);
  TRACE_POP
}
/*
equation index: 1326
type: SIMPLE_ASSIGN
load2.inlet.h_out = ($cse40 * s34.inlet.h_out + $cse41 * s23.outlet.h_out) / ($cse40 + $cse41)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1326};
  (data->localData[0]->realVars[249]/* load2.inlet.h_out variable */)  = DIVISION_SIM(((data->localData[0]->realVars[172]/* $cse40 variable */) ) * ((data->localData[0]->realVars[486]/* s34.inlet.h_out variable */) ) + ((data->localData[0]->realVars[173]/* $cse41 variable */) ) * ((data->localData[0]->realVars[475]/* s23.outlet.h_out variable */) ),(data->localData[0]->realVars[172]/* $cse40 variable */)  + (data->localData[0]->realVars[173]/* $cse41 variable */) ,"$cse40 + $cse41",equationIndexes);
  TRACE_POP
}
/*
equation index: 1327
type: SIMPLE_ASSIGN
load2.outlet.h_out = load2.inlet.h_out + P_load2 / $cse45
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1327};
  (data->localData[0]->realVars[261]/* load2.outlet.h_out variable */)  = (data->localData[0]->realVars[249]/* load2.inlet.h_out variable */)  + DIVISION_SIM((data->localData[0]->realVars[196]/* P_load2 variable */) ,(data->localData[0]->realVars[177]/* $cse45 variable */) ,"$cse45",equationIndexes);
  TRACE_POP
}
/*
equation index: 1328
type: SIMPLE_ASSIGN
Tr_load[2] = if mfr_load[2] > 0.0 then -273.15 + 0.0002389486260454002 * load2.outlet.h_out else -273.15 + 0.0002389486260454002 * load2.mfr_s.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1328};
  modelica_boolean tmp0;
  relationhysteresis(data, &tmp0, (data->localData[0]->realVars[304]/* mfr_load[2] variable */) , 0.0, 4, Greater, GreaterZC);
  (data->localData[0]->realVars[207]/* Tr_load[2] variable */)  = (tmp0?-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[261]/* load2.outlet.h_out variable */) ):-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[260]/* load2.mfr_s.inlet.h_out variable */) ));
  TRACE_POP
}
/*
equation index: 1329
type: SIMPLE_ASSIGN
load2.loadValveControl.addP.y = load2.loadValveControl.addP.k1 * load_ref.k + load2.loadValveControl.addP.k2 * Tr_load[2]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1329};
  (data->localData[0]->realVars[254]/* load2.loadValveControl.addP.y variable */)  = ((data->simulationInfo->realParameter[132]/* load2.loadValveControl.addP.k1 PARAM */) ) * ((data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ) + ((data->simulationInfo->realParameter[133]/* load2.loadValveControl.addP.k2 PARAM */) ) * ((data->localData[0]->realVars[207]/* Tr_load[2] variable */) );
  TRACE_POP
}
/*
equation index: 1330
type: SIMPLE_ASSIGN
load2.loadValveControl.P.y = load2.loadValveControl.P.k * load2.loadValveControl.addP.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1330};
  (data->localData[0]->realVars[253]/* load2.loadValveControl.P.y variable */)  = ((data->simulationInfo->realParameter[126]/* load2.loadValveControl.P.k PARAM */) ) * ((data->localData[0]->realVars[254]/* load2.loadValveControl.addP.y variable */) );
  TRACE_POP
}
/*
equation index: 1331
type: SIMPLE_ASSIGN
load2.loadValveControl.addPID.y = load2.loadValveControl.addPID.k1 * load2.loadValveControl.P.y + load2.loadValveControl.addPID.k2 * load2.loadValveControl.Dzero.k + load2.loadValveControl.addPID.k3 * load2.loadValveControl.Izero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1331};
  (data->localData[0]->realVars[255]/* load2.loadValveControl.addPID.y variable */)  = ((data->simulationInfo->realParameter[135]/* load2.loadValveControl.addPID.k1 PARAM */) ) * ((data->localData[0]->realVars[253]/* load2.loadValveControl.P.y variable */) ) + ((data->simulationInfo->realParameter[136]/* load2.loadValveControl.addPID.k2 PARAM */) ) * ((data->simulationInfo->realParameter[118]/* load2.loadValveControl.Dzero.k PARAM */) ) + ((data->simulationInfo->realParameter[137]/* load2.loadValveControl.addPID.k3 PARAM */) ) * ((data->simulationInfo->realParameter[122]/* load2.loadValveControl.Izero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 1332
type: SIMPLE_ASSIGN
load2.loadValveControl.gainPID.y = load2.loadValveControl.gainPID.k * load2.loadValveControl.addPID.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1332};
  (data->localData[0]->realVars[257]/* load2.loadValveControl.gainPID.y variable */)  = ((data->simulationInfo->realParameter[140]/* load2.loadValveControl.gainPID.k PARAM */) ) * ((data->localData[0]->realVars[255]/* load2.loadValveControl.addPID.y variable */) );
  TRACE_POP
}
/*
equation index: 1333
type: SIMPLE_ASSIGN
load2.loadValveControl.limiter.u = load2.loadValveControl.addFF.k1 * load2.loadValveControl.gainPID.y + load2.loadValveControl.addFF.k2 * load2.loadValveControl.FFzero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1333};
  (data->localData[0]->realVars[258]/* load2.loadValveControl.limiter.u variable */)  = ((data->simulationInfo->realParameter[129]/* load2.loadValveControl.addFF.k1 PARAM */) ) * ((data->localData[0]->realVars[257]/* load2.loadValveControl.gainPID.y variable */) ) + ((data->simulationInfo->realParameter[130]/* load2.loadValveControl.addFF.k2 PARAM */) ) * ((data->simulationInfo->realParameter[120]/* load2.loadValveControl.FFzero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 1334
type: SIMPLE_ASSIGN
load2.loadValveControl.y = smooth(0, if load2.loadValveControl.limiter.u > load2.loadValveControl.limiter.uMax then load2.loadValveControl.limiter.uMax else if load2.loadValveControl.limiter.u < load2.loadValveControl.limiter.uMin then load2.loadValveControl.limiter.uMin else load2.loadValveControl.limiter.u)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1334};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater((data->localData[0]->realVars[258]/* load2.loadValveControl.limiter.u variable */) ,(data->simulationInfo->realParameter[143]/* load2.loadValveControl.limiter.uMax PARAM */) );
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = (data->simulationInfo->realParameter[143]/* load2.loadValveControl.limiter.uMax PARAM */) ;
  }
  else
  {
    tmp1 = Less((data->localData[0]->realVars[258]/* load2.loadValveControl.limiter.u variable */) ,(data->simulationInfo->realParameter[144]/* load2.loadValveControl.limiter.uMin PARAM */) );
    tmp3 = (tmp1?(data->simulationInfo->realParameter[144]/* load2.loadValveControl.limiter.uMin PARAM */) :(data->localData[0]->realVars[258]/* load2.loadValveControl.limiter.u variable */) );
  }
  (data->localData[0]->realVars[259]/* load2.loadValveControl.y variable */)  = tmp3;
  TRACE_POP
}
/*
equation index: 1335
type: SIMPLE_ASSIGN
s34.u = s34.m_flow / (985.0 * s34.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1335};
  (data->localData[0]->realVars[492]/* s34.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[487]/* s34.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[585]/* s34.A PARAM */) ),"985.0 * s34.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 1336
type: SIMPLE_ASSIGN
$cse47 = Modelica.Fluid.Utilities.regSquare(s34.u, s34.u_nom * 0.05)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1336};
  (data->localData[0]->realVars[179]/* $cse47 variable */)  = omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[492]/* s34.u variable */) , ((data->simulationInfo->realParameter[605]/* s34.u_nom PARAM */) ) * (0.05));
  TRACE_POP
}
/*
equation index: 1337
type: SIMPLE_ASSIGN
s47.m_flow = s34.m_flow - mfr_load[3]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1337};
  (data->localData[0]->realVars[512]/* s47.m_flow variable */)  = (data->localData[0]->realVars[487]/* s34.m_flow variable */)  - (data->localData[0]->realVars[305]/* mfr_load[3] variable */) ;
  TRACE_POP
}
/*
equation index: 1338
type: SIMPLE_ASSIGN
s47.u = s47.m_flow / (985.0 * s47.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1338};
  (data->localData[0]->realVars[517]/* s47.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[512]/* s47.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[627]/* s47.A PARAM */) ),"985.0 * s47.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 1339
type: SIMPLE_ASSIGN
$cse19 = Modelica.Fluid.Utilities.regSquare(s47.u, s47.u_nom * 0.05)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1339};
  (data->localData[0]->realVars[151]/* $cse19 variable */)  = omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[517]/* s47.u variable */) , ((data->simulationInfo->realParameter[647]/* s47.u_nom PARAM */) ) * (0.05));
  TRACE_POP
}
/*
equation index: 1340
type: SIMPLE_ASSIGN
s67.m_flow = mfr_load[5] - s47.m_flow
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1340};
  (data->localData[0]->realVars[526]/* s67.m_flow variable */)  = (data->localData[0]->realVars[307]/* mfr_load[5] variable */)  - (data->localData[0]->realVars[512]/* s47.m_flow variable */) ;
  TRACE_POP
}
/*
equation index: 1341
type: SIMPLE_ASSIGN
$cse25 = max(-s67.m_flow, 1e-07)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1341};
  (data->localData[0]->realVars[157]/* $cse25 variable */)  = fmax((-(data->localData[0]->realVars[526]/* s67.m_flow variable */) ),1e-07);
  TRACE_POP
}
/*
equation index: 1342
type: SIMPLE_ASSIGN
s67.u = s67.m_flow / (985.0 * s67.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1342};
  (data->localData[0]->realVars[530]/* s67.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[526]/* s67.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[648]/* s67.A PARAM */) ),"985.0 * s67.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 1343
type: SIMPLE_ASSIGN
$cse24 = Modelica.Fluid.Utilities.regSquare(s67.u, s67.u_nom * 0.05)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1343};
  (data->localData[0]->realVars[156]/* $cse24 variable */)  = omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[530]/* s67.u variable */) , ((data->simulationInfo->realParameter[668]/* s67.u_nom PARAM */) ) * (0.05));
  TRACE_POP
}
/*
equation index: 1344
type: SIMPLE_ASSIGN
r76.m_flow = mfr_load[5] - r74.m_flow
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1344};
  (data->localData[0]->realVars[411]/* r76.m_flow variable */)  = (data->localData[0]->realVars[307]/* mfr_load[5] variable */)  - (data->localData[0]->realVars[397]/* r74.m_flow variable */) ;
  TRACE_POP
}
/*
equation index: 1345
type: SIMPLE_ASSIGN
$cse29 = max(r76.m_flow, 1e-07)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1345};
  (data->localData[0]->realVars[161]/* $cse29 variable */)  = fmax((data->localData[0]->realVars[411]/* r76.m_flow variable */) ,1e-07);
  TRACE_POP
}
/*
equation index: 1346
type: SIMPLE_ASSIGN
r76.u = r76.m_flow / (985.0 * r76.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1346};
  (data->localData[0]->realVars[415]/* r76.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[411]/* r76.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[455]/* r76.A PARAM */) ),"985.0 * r76.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 1347
type: SIMPLE_ASSIGN
$cse33 = Modelica.Fluid.Utilities.regSquare(r76.u, r76.u_nom * 0.05)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1347};
  (data->localData[0]->realVars[165]/* $cse33 variable */)  = omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[415]/* r76.u variable */) , ((data->simulationInfo->realParameter[475]/* r76.u_nom PARAM */) ) * (0.05));
  TRACE_POP
}
/*
equation index: 1348
type: SIMPLE_ASSIGN
$cse30 = max(mfr_load[4], load4.load.b)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1348};
  (data->localData[0]->realVars[162]/* $cse30 variable */)  = fmax((data->localData[0]->realVars[306]/* mfr_load[4] variable */) ,(data->simulationInfo->realParameter[206]/* load4.load.b PARAM */) );
  TRACE_POP
}
/*
equation index: 1349
type: SIMPLE_ASSIGN
s16.m_flow = s67.m_flow + mfr_load[4]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1349};
  (data->localData[0]->realVars[461]/* s16.m_flow variable */)  = (data->localData[0]->realVars[526]/* s67.m_flow variable */)  + (data->localData[0]->realVars[306]/* mfr_load[4] variable */) ;
  TRACE_POP
}
/*
equation index: 1350
type: SIMPLE_ASSIGN
$cse26 = max(s16.m_flow, 1e-07)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1350};
  (data->localData[0]->realVars[158]/* $cse26 variable */)  = fmax((data->localData[0]->realVars[461]/* s16.m_flow variable */) ,1e-07);
  TRACE_POP
}
/*
equation index: 1351
type: SIMPLE_ASSIGN
load4.inlet.h_out = ($cse25 * s67.inlet.h_out + $cse26 * s16.outlet.h_out) / ($cse25 + $cse26)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1351};
  (data->localData[0]->realVars[276]/* load4.inlet.h_out variable */)  = DIVISION_SIM(((data->localData[0]->realVars[157]/* $cse25 variable */) ) * ((data->localData[0]->realVars[525]/* s67.inlet.h_out variable */) ) + ((data->localData[0]->realVars[158]/* $cse26 variable */) ) * ((data->localData[0]->realVars[462]/* s16.outlet.h_out variable */) ),(data->localData[0]->realVars[157]/* $cse25 variable */)  + (data->localData[0]->realVars[158]/* $cse26 variable */) ,"$cse25 + $cse26",equationIndexes);
  TRACE_POP
}
/*
equation index: 1352
type: SIMPLE_ASSIGN
load4.outlet.h_out = load4.inlet.h_out + P_load4 / $cse30
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1352};
  (data->localData[0]->realVars[288]/* load4.outlet.h_out variable */)  = (data->localData[0]->realVars[276]/* load4.inlet.h_out variable */)  + DIVISION_SIM((data->localData[0]->realVars[198]/* P_load4 variable */) ,(data->localData[0]->realVars[162]/* $cse30 variable */) ,"$cse30",equationIndexes);
  TRACE_POP
}
/*
equation index: 1353
type: SIMPLE_ASSIGN
s16.u = s16.m_flow / (985.0 * s16.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1353};
  (data->localData[0]->realVars[465]/* s16.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[461]/* s16.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[543]/* s16.A PARAM */) ),"985.0 * s16.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 1354
type: SIMPLE_ASSIGN
$cse31 = Modelica.Fluid.Utilities.regSquare(s16.u, s16.u_nom * 0.05)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1354};
  (data->localData[0]->realVars[163]/* $cse31 variable */)  = omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[465]/* s16.u variable */) , ((data->simulationInfo->realParameter[563]/* s16.u_nom PARAM */) ) * (0.05));
  TRACE_POP
}
/*
equation index: 1355
type: SIMPLE_ASSIGN
r61.m_flow = mfr_load[4] + r76.m_flow
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1355};
  (data->localData[0]->realVars[383]/* r61.m_flow variable */)  = (data->localData[0]->realVars[306]/* mfr_load[4] variable */)  + (data->localData[0]->realVars[411]/* r76.m_flow variable */) ;
  TRACE_POP
}
/*
equation index: 1356
type: SIMPLE_ASSIGN
$cse28 = max(-r61.m_flow, 1e-07)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1356};
  (data->localData[0]->realVars[160]/* $cse28 variable */)  = fmax((-(data->localData[0]->realVars[383]/* r61.m_flow variable */) ),1e-07);
  TRACE_POP
}
/*
equation index: 1357
type: SIMPLE_ASSIGN
load4.mfr_s.inlet.h_out = ($cse28 * r61.inlet.h_out + $cse29 * r76.outlet.h_out) / ($cse28 + $cse29)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1357};
  (data->localData[0]->realVars[287]/* load4.mfr_s.inlet.h_out variable */)  = DIVISION_SIM(((data->localData[0]->realVars[160]/* $cse28 variable */) ) * ((data->localData[0]->realVars[382]/* r61.inlet.h_out variable */) ) + ((data->localData[0]->realVars[161]/* $cse29 variable */) ) * ((data->localData[0]->realVars[412]/* r76.outlet.h_out variable */) ),(data->localData[0]->realVars[160]/* $cse28 variable */)  + (data->localData[0]->realVars[161]/* $cse29 variable */) ,"$cse28 + $cse29",equationIndexes);
  TRACE_POP
}
/*
equation index: 1358
type: SIMPLE_ASSIGN
Tr_load[4] = if mfr_load[4] > 0.0 then -273.15 + 0.0002389486260454002 * load4.outlet.h_out else -273.15 + 0.0002389486260454002 * load4.mfr_s.inlet.h_out
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1358};
  modelica_boolean tmp0;
  relationhysteresis(data, &tmp0, (data->localData[0]->realVars[306]/* mfr_load[4] variable */) , 0.0, 0, Greater, GreaterZC);
  (data->localData[0]->realVars[209]/* Tr_load[4] variable */)  = (tmp0?-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[288]/* load4.outlet.h_out variable */) ):-273.15 + (0.0002389486260454002) * ((data->localData[0]->realVars[287]/* load4.mfr_s.inlet.h_out variable */) ));
  TRACE_POP
}
/*
equation index: 1359
type: SIMPLE_ASSIGN
load4.loadValveControl.addP.y = load4.loadValveControl.addP.k1 * load_ref.k + load4.loadValveControl.addP.k2 * Tr_load[4]
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1359};
  (data->localData[0]->realVars[281]/* load4.loadValveControl.addP.y variable */)  = ((data->simulationInfo->realParameter[226]/* load4.loadValveControl.addP.k1 PARAM */) ) * ((data->simulationInfo->realParameter[298]/* load_ref.k PARAM */) ) + ((data->simulationInfo->realParameter[227]/* load4.loadValveControl.addP.k2 PARAM */) ) * ((data->localData[0]->realVars[209]/* Tr_load[4] variable */) );
  TRACE_POP
}
/*
equation index: 1360
type: SIMPLE_ASSIGN
load4.loadValveControl.P.y = load4.loadValveControl.P.k * load4.loadValveControl.addP.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1360};
  (data->localData[0]->realVars[280]/* load4.loadValveControl.P.y variable */)  = ((data->simulationInfo->realParameter[220]/* load4.loadValveControl.P.k PARAM */) ) * ((data->localData[0]->realVars[281]/* load4.loadValveControl.addP.y variable */) );
  TRACE_POP
}
/*
equation index: 1361
type: SIMPLE_ASSIGN
load4.loadValveControl.addPID.y = load4.loadValveControl.addPID.k1 * load4.loadValveControl.P.y + load4.loadValveControl.addPID.k2 * load4.loadValveControl.Dzero.k + load4.loadValveControl.addPID.k3 * load4.loadValveControl.Izero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1361};
  (data->localData[0]->realVars[282]/* load4.loadValveControl.addPID.y variable */)  = ((data->simulationInfo->realParameter[229]/* load4.loadValveControl.addPID.k1 PARAM */) ) * ((data->localData[0]->realVars[280]/* load4.loadValveControl.P.y variable */) ) + ((data->simulationInfo->realParameter[230]/* load4.loadValveControl.addPID.k2 PARAM */) ) * ((data->simulationInfo->realParameter[212]/* load4.loadValveControl.Dzero.k PARAM */) ) + ((data->simulationInfo->realParameter[231]/* load4.loadValveControl.addPID.k3 PARAM */) ) * ((data->simulationInfo->realParameter[216]/* load4.loadValveControl.Izero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 1362
type: SIMPLE_ASSIGN
load4.loadValveControl.gainPID.y = load4.loadValveControl.gainPID.k * load4.loadValveControl.addPID.y
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1362};
  (data->localData[0]->realVars[284]/* load4.loadValveControl.gainPID.y variable */)  = ((data->simulationInfo->realParameter[234]/* load4.loadValveControl.gainPID.k PARAM */) ) * ((data->localData[0]->realVars[282]/* load4.loadValveControl.addPID.y variable */) );
  TRACE_POP
}
/*
equation index: 1363
type: SIMPLE_ASSIGN
load4.loadValveControl.limiter.u = load4.loadValveControl.addFF.k1 * load4.loadValveControl.gainPID.y + load4.loadValveControl.addFF.k2 * load4.loadValveControl.FFzero.k
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1363};
  (data->localData[0]->realVars[285]/* load4.loadValveControl.limiter.u variable */)  = ((data->simulationInfo->realParameter[223]/* load4.loadValveControl.addFF.k1 PARAM */) ) * ((data->localData[0]->realVars[284]/* load4.loadValveControl.gainPID.y variable */) ) + ((data->simulationInfo->realParameter[224]/* load4.loadValveControl.addFF.k2 PARAM */) ) * ((data->simulationInfo->realParameter[214]/* load4.loadValveControl.FFzero.k PARAM */) );
  TRACE_POP
}
/*
equation index: 1364
type: SIMPLE_ASSIGN
load4.loadValveControl.y = smooth(0, if load4.loadValveControl.limiter.u > load4.loadValveControl.limiter.uMax then load4.loadValveControl.limiter.uMax else if load4.loadValveControl.limiter.u < load4.loadValveControl.limiter.uMin then load4.loadValveControl.limiter.uMin else load4.loadValveControl.limiter.u)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1364};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater((data->localData[0]->realVars[285]/* load4.loadValveControl.limiter.u variable */) ,(data->simulationInfo->realParameter[237]/* load4.loadValveControl.limiter.uMax PARAM */) );
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = (data->simulationInfo->realParameter[237]/* load4.loadValveControl.limiter.uMax PARAM */) ;
  }
  else
  {
    tmp1 = Less((data->localData[0]->realVars[285]/* load4.loadValveControl.limiter.u variable */) ,(data->simulationInfo->realParameter[238]/* load4.loadValveControl.limiter.uMin PARAM */) );
    tmp3 = (tmp1?(data->simulationInfo->realParameter[238]/* load4.loadValveControl.limiter.uMin PARAM */) :(data->localData[0]->realVars[285]/* load4.loadValveControl.limiter.u variable */) );
  }
  (data->localData[0]->realVars[286]/* load4.loadValveControl.y variable */)  = tmp3;
  TRACE_POP
}
/*
equation index: 1365
type: SIMPLE_ASSIGN
r61.u = r61.m_flow / (985.0 * r61.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1365};
  (data->localData[0]->realVars[388]/* r61.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[383]/* r61.m_flow variable */) ,(985.0) * ((data->simulationInfo->realParameter[413]/* r61.A PARAM */) ),"985.0 * r61.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 1366
type: SIMPLE_ASSIGN
$cse32 = Modelica.Fluid.Utilities.regSquare(r61.u, r61.u_nom * 0.05)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1366};
  (data->localData[0]->realVars[164]/* $cse32 variable */)  = omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[388]/* r61.u variable */) , ((data->simulationInfo->realParameter[433]/* r61.u_nom PARAM */) ) * (0.05));
  TRACE_POP
}
/*
equation index: 1367
type: SIMPLE_ASSIGN
mfr_ritorno = r61.m_flow + r21.m_flow
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1367};
  (data->localData[0]->realVars[310]/* mfr_ritorno variable */)  = (data->localData[0]->realVars[383]/* r61.m_flow variable */)  + (data->localData[0]->realVars[332]/* r21.m_flow variable */) ;
  TRACE_POP
}
/*
equation index: 1368
type: SIMPLE_ASSIGN
r10.u = mfr_ritorno / (985.0 * r10.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1368};
  (data->localData[0]->realVars[323]/* r10.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[310]/* mfr_ritorno variable */) ,(985.0) * ((data->simulationInfo->realParameter[307]/* r10.A PARAM */) ),"985.0 * r10.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 1369
type: SIMPLE_ASSIGN
$cse51 = Modelica.Fluid.Utilities.regSquare(r10.u, r10.u_nom * 0.05)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1369};
  (data->localData[0]->realVars[183]/* $cse51 variable */)  = omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[323]/* r10.u variable */) , ((data->simulationInfo->realParameter[328]/* r10.u_nom PARAM */) ) * (0.05));
  TRACE_POP
}
/*
equation index: 1370
type: SIMPLE_ASSIGN
r61.outlet.p = 492.5 * r10.cf * r10.omega * r10.L / r10.A * $cse51 + pressureAccumulator.p
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1370};
  (data->localData[0]->realVars[385]/* r61.outlet.p variable */)  = (DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[317]/* r10.cf PARAM */) )) * ((data->simulationInfo->realParameter[324]/* r10.omega PARAM */) )) * ((data->simulationInfo->realParameter[311]/* r10.L PARAM */) ),(data->simulationInfo->realParameter[307]/* r10.A PARAM */) ,"r10.A",equationIndexes)) * ((data->localData[0]->realVars[183]/* $cse51 variable */) ) + (data->simulationInfo->realParameter[304]/* pressureAccumulator.p PARAM */) ;
  TRACE_POP
}
/*
equation index: 1371
type: SIMPLE_ASSIGN
load4.outlet.p = 492.5 * r61.cf * r61.omega * r61.L / r61.A * $cse32 + r61.outlet.p
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1371};
  (data->localData[0]->realVars[289]/* load4.outlet.p variable */)  = (DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[423]/* r61.cf PARAM */) )) * ((data->simulationInfo->realParameter[430]/* r61.omega PARAM */) )) * ((data->simulationInfo->realParameter[417]/* r61.L PARAM */) ),(data->simulationInfo->realParameter[413]/* r61.A PARAM */) ,"r61.A",equationIndexes)) * ((data->localData[0]->realVars[164]/* $cse32 variable */) ) + (data->localData[0]->realVars[385]/* r61.outlet.p variable */) ;
  TRACE_POP
}
/*
equation index: 1372
type: SIMPLE_ASSIGN
r87.outlet.p = 492.5 * r76.cf * r76.omega * r76.L / r76.A * $cse33 + load4.outlet.p
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1372};
  (data->localData[0]->realVars[425]/* r87.outlet.p variable */)  = (DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[465]/* r76.cf PARAM */) )) * ((data->simulationInfo->realParameter[472]/* r76.omega PARAM */) )) * ((data->simulationInfo->realParameter[459]/* r76.L PARAM */) ),(data->simulationInfo->realParameter[455]/* r76.A PARAM */) ,"r76.A",equationIndexes)) * ((data->localData[0]->realVars[165]/* $cse33 variable */) ) + (data->localData[0]->realVars[289]/* load4.outlet.p variable */) ;
  TRACE_POP
}
/*
equation index: 1373
type: SIMPLE_ASSIGN
load1.outlet.p = 492.5 * r21.cf * r21.omega * r21.L / r21.A * $cse48 + r61.outlet.p
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1373};
  (data->localData[0]->realVars[248]/* load1.outlet.p variable */)  = (DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[339]/* r21.cf PARAM */) )) * ((data->simulationInfo->realParameter[346]/* r21.omega PARAM */) )) * ((data->simulationInfo->realParameter[333]/* r21.L PARAM */) ),(data->simulationInfo->realParameter[329]/* r21.A PARAM */) ,"r21.A",equationIndexes)) * ((data->localData[0]->realVars[180]/* $cse48 variable */) ) + (data->localData[0]->realVars[385]/* r61.outlet.p variable */) ;
  TRACE_POP
}
/*
equation index: 1374
type: SIMPLE_ASSIGN
load2.outlet.p = 492.5 * r32.cf * r32.omega * r32.L / r32.A * $cse39 + load1.outlet.p
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1374};
  (data->localData[0]->realVars[262]/* load2.outlet.p variable */)  = (DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[360]/* r32.cf PARAM */) )) * ((data->simulationInfo->realParameter[367]/* r32.omega PARAM */) )) * ((data->simulationInfo->realParameter[354]/* r32.L PARAM */) ),(data->simulationInfo->realParameter[350]/* r32.A PARAM */) ,"r32.A",equationIndexes)) * ((data->localData[0]->realVars[171]/* $cse39 variable */) ) + (data->localData[0]->realVars[248]/* load1.outlet.p variable */) ;
  TRACE_POP
}
/*
equation index: 1375
type: SIMPLE_ASSIGN
load5.outlet.p = 492.5 * r87.cf * r87.omega * r87.L / r87.A * $cse21 + r87.outlet.p
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1375};
  (data->localData[0]->realVars[302]/* load5.outlet.p variable */)  = (DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[486]/* r87.cf PARAM */) )) * ((data->simulationInfo->realParameter[493]/* r87.omega PARAM */) )) * ((data->simulationInfo->realParameter[480]/* r87.L PARAM */) ),(data->simulationInfo->realParameter[476]/* r87.A PARAM */) ,"r87.A",equationIndexes)) * ((data->localData[0]->realVars[153]/* $cse21 variable */) ) + (data->localData[0]->realVars[425]/* r87.outlet.p variable */) ;
  TRACE_POP
}
/*
equation index: 1376
type: SIMPLE_ASSIGN
r74.outlet.p = r87.outlet.p - 492.5 * r74.cf * r74.omega * r74.L / r74.A * $cse18
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1376};
  (data->localData[0]->realVars[399]/* r74.outlet.p variable */)  = (data->localData[0]->realVars[425]/* r87.outlet.p variable */)  - ((DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[444]/* r74.cf PARAM */) )) * ((data->simulationInfo->realParameter[451]/* r74.omega PARAM */) )) * ((data->simulationInfo->realParameter[438]/* r74.L PARAM */) ),(data->simulationInfo->realParameter[434]/* r74.A PARAM */) ,"r74.A",equationIndexes)) * ((data->localData[0]->realVars[150]/* $cse18 variable */) ));
  TRACE_POP
}
/*
equation index: 1377
type: SIMPLE_ASSIGN
load3.outlet.p = 492.5 * r54.cf * r54.omega * r54.L / r54.A * $cse35 + r74.outlet.p
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1377};
  (data->localData[0]->realVars[275]/* load3.outlet.p variable */)  = (DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[402]/* r54.cf PARAM */) )) * ((data->simulationInfo->realParameter[409]/* r54.omega PARAM */) )) * ((data->simulationInfo->realParameter[396]/* r54.L PARAM */) ),(data->simulationInfo->realParameter[392]/* r54.A PARAM */) ,"r54.A",equationIndexes)) * ((data->localData[0]->realVars[167]/* $cse35 variable */) ) + (data->localData[0]->realVars[399]/* r74.outlet.p variable */) ;
  TRACE_POP
}
/*
equation index: 1378
type: SIMPLE_ASSIGN
mfr_mandata = s16.m_flow + s12.m_flow
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1378};
  (data->localData[0]->realVars[308]/* mfr_mandata variable */)  = (data->localData[0]->realVars[461]/* s16.m_flow variable */)  + (data->localData[0]->realVars[448]/* s12.m_flow variable */) ;
  TRACE_POP
}
/*
equation index: 1379
type: SIMPLE_ASSIGN
s01.u = mfr_mandata / (985.0 * s01.A)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1379};
  (data->localData[0]->realVars[439]/* s01.u variable */)  = DIVISION_SIM((data->localData[0]->realVars[308]/* mfr_mandata variable */) ,(985.0) * ((data->simulationInfo->realParameter[501]/* s01.A PARAM */) ),"985.0 * s01.A",equationIndexes);
  TRACE_POP
}
/*
equation index: 1380
type: SIMPLE_ASSIGN
$cse59 = Modelica.Fluid.Utilities.regSquare(s01.u, s01.u_nom * 0.05)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1380};
  (data->localData[0]->realVars[191]/* $cse59 variable */)  = omc_Modelica_Fluid_Utilities_regSquare(threadData, (data->localData[0]->realVars[439]/* s01.u variable */) , ((data->simulationInfo->realParameter[521]/* s01.u_nom PARAM */) ) * (0.05));
  TRACE_POP
}
/*
equation index: 1381
type: SIMPLE_ASSIGN
s01.outlet.p = T_mand.inlet.p - 492.5 * s01.cf * s01.omega * s01.L / s01.A * $cse59
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1381};
  (data->localData[0]->realVars[436]/* s01.outlet.p variable */)  = (data->localData[0]->realVars[203]/* T_mand.inlet.p variable */)  - ((DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[511]/* s01.cf PARAM */) )) * ((data->simulationInfo->realParameter[518]/* s01.omega PARAM */) )) * ((data->simulationInfo->realParameter[505]/* s01.L PARAM */) ),(data->simulationInfo->realParameter[501]/* s01.A PARAM */) ,"s01.A",equationIndexes)) * ((data->localData[0]->realVars[191]/* $cse59 variable */) ));
  TRACE_POP
}
/*
equation index: 1382
type: SIMPLE_ASSIGN
load1.inlet.p = s01.outlet.p - 492.5 * s12.cf * s12.omega * s12.L / s12.A * $cse52
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1382};
  (data->localData[0]->realVars[236]/* load1.inlet.p variable */)  = (data->localData[0]->realVars[436]/* s01.outlet.p variable */)  - ((DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[532]/* s12.cf PARAM */) )) * ((data->simulationInfo->realParameter[539]/* s12.omega PARAM */) )) * ((data->simulationInfo->realParameter[526]/* s12.L PARAM */) ),(data->simulationInfo->realParameter[522]/* s12.A PARAM */) ,"s12.A",equationIndexes)) * ((data->localData[0]->realVars[184]/* $cse52 variable */) ));
  TRACE_POP
}
/*
equation index: 1383
type: SIMPLE_ASSIGN
$cse55 = Modelica.Fluid.Utilities.regRoot(load1.inlet.p - load1.outlet.p, 0.01)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1383};
  (data->localData[0]->realVars[187]/* $cse55 variable */)  = omc_Modelica_Fluid_Utilities_regRoot(threadData, (data->localData[0]->realVars[236]/* load1.inlet.p variable */)  - (data->localData[0]->realVars[248]/* load1.outlet.p variable */) , 0.01);
  TRACE_POP
}
/*
equation index: 1384
type: SIMPLE_ASSIGN
load2.inlet.p = load1.inlet.p - 492.5 * s23.cf * s23.omega * s23.L / s23.A * $cse38
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1384};
  (data->localData[0]->realVars[250]/* load2.inlet.p variable */)  = (data->localData[0]->realVars[236]/* load1.inlet.p variable */)  - ((DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[574]/* s23.cf PARAM */) )) * ((data->simulationInfo->realParameter[581]/* s23.omega PARAM */) )) * ((data->simulationInfo->realParameter[568]/* s23.L PARAM */) ),(data->simulationInfo->realParameter[564]/* s23.A PARAM */) ,"s23.A",equationIndexes)) * ((data->localData[0]->realVars[170]/* $cse38 variable */) ));
  TRACE_POP
}
/*
equation index: 1385
type: SIMPLE_ASSIGN
$cse42 = Modelica.Fluid.Utilities.regRoot(load2.inlet.p - load2.outlet.p, 0.01)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1385};
  (data->localData[0]->realVars[174]/* $cse42 variable */)  = omc_Modelica_Fluid_Utilities_regRoot(threadData, (data->localData[0]->realVars[250]/* load2.inlet.p variable */)  - (data->localData[0]->realVars[262]/* load2.outlet.p variable */) , 0.01);
  TRACE_POP
}
/*
equation index: 1386
type: SIMPLE_ASSIGN
load4.inlet.p = s01.outlet.p - 492.5 * s16.cf * s16.omega * s16.L / s16.A * $cse31
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1386};
  (data->localData[0]->realVars[277]/* load4.inlet.p variable */)  = (data->localData[0]->realVars[436]/* s01.outlet.p variable */)  - ((DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[553]/* s16.cf PARAM */) )) * ((data->simulationInfo->realParameter[560]/* s16.omega PARAM */) )) * ((data->simulationInfo->realParameter[547]/* s16.L PARAM */) ),(data->simulationInfo->realParameter[543]/* s16.A PARAM */) ,"s16.A",equationIndexes)) * ((data->localData[0]->realVars[163]/* $cse31 variable */) ));
  TRACE_POP
}
/*
equation index: 1387
type: SIMPLE_ASSIGN
$cse27 = Modelica.Fluid.Utilities.regRoot(load4.inlet.p - load4.outlet.p, 0.01)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1387};
  (data->localData[0]->realVars[159]/* $cse27 variable */)  = omc_Modelica_Fluid_Utilities_regRoot(threadData, (data->localData[0]->realVars[277]/* load4.inlet.p variable */)  - (data->localData[0]->realVars[289]/* load4.outlet.p variable */) , 0.01);
  TRACE_POP
}
/*
equation index: 1388
type: SIMPLE_ASSIGN
s47.outlet.p = load4.inlet.p - 492.5 * s67.cf * s67.omega * s67.L / s67.A * $cse24
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1388};
  (data->localData[0]->realVars[514]/* s47.outlet.p variable */)  = (data->localData[0]->realVars[277]/* load4.inlet.p variable */)  - ((DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[658]/* s67.cf PARAM */) )) * ((data->simulationInfo->realParameter[665]/* s67.omega PARAM */) )) * ((data->simulationInfo->realParameter[652]/* s67.L PARAM */) ),(data->simulationInfo->realParameter[648]/* s67.A PARAM */) ,"s67.A",equationIndexes)) * ((data->localData[0]->realVars[156]/* $cse24 variable */) ));
  TRACE_POP
}
/*
equation index: 1389
type: SIMPLE_ASSIGN
s34.outlet.p = load2.inlet.p - 492.5 * s34.cf * s34.omega * s34.L / s34.A * $cse47
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1389};
  (data->localData[0]->realVars[489]/* s34.outlet.p variable */)  = (data->localData[0]->realVars[250]/* load2.inlet.p variable */)  - ((DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[595]/* s34.cf PARAM */) )) * ((data->simulationInfo->realParameter[602]/* s34.omega PARAM */) )) * ((data->simulationInfo->realParameter[589]/* s34.L PARAM */) ),(data->simulationInfo->realParameter[585]/* s34.A PARAM */) ,"s34.A",equationIndexes)) * ((data->localData[0]->realVars[179]/* $cse47 variable */) ));
  TRACE_POP
}
/*
equation index: 1390
type: SIMPLE_ASSIGN
load5.inlet.p = s47.outlet.p - 492.5 * s78.cf * s78.omega * s78.L / s78.A * $cse20
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1390};
  (data->localData[0]->realVars[291]/* load5.inlet.p variable */)  = (data->localData[0]->realVars[514]/* s47.outlet.p variable */)  - ((DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[679]/* s78.cf PARAM */) )) * ((data->simulationInfo->realParameter[686]/* s78.omega PARAM */) )) * ((data->simulationInfo->realParameter[673]/* s78.L PARAM */) ),(data->simulationInfo->realParameter[669]/* s78.A PARAM */) ,"s78.A",equationIndexes)) * ((data->localData[0]->realVars[152]/* $cse20 variable */) ));
  TRACE_POP
}
/*
equation index: 1391
type: SIMPLE_ASSIGN
$cse22 = Modelica.Fluid.Utilities.regRoot(load5.inlet.p - load5.outlet.p, 0.01)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1391};
  (data->localData[0]->realVars[154]/* $cse22 variable */)  = omc_Modelica_Fluid_Utilities_regRoot(threadData, (data->localData[0]->realVars[291]/* load5.inlet.p variable */)  - (data->localData[0]->realVars[302]/* load5.outlet.p variable */) , 0.01);
  TRACE_POP
}
/*
equation index: 1392
type: SIMPLE_ASSIGN
load3.inlet.p = s34.outlet.p - 492.5 * s45.cf * s45.omega * s45.L / s45.A * $cse34
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1392};
  (data->localData[0]->realVars[264]/* load3.inlet.p variable */)  = (data->localData[0]->realVars[489]/* s34.outlet.p variable */)  - ((DIVISION_SIM((((492.5) * ((data->simulationInfo->realParameter[616]/* s45.cf PARAM */) )) * ((data->simulationInfo->realParameter[623]/* s45.omega PARAM */) )) * ((data->simulationInfo->realParameter[610]/* s45.L PARAM */) ),(data->simulationInfo->realParameter[606]/* s45.A PARAM */) ,"s45.A",equationIndexes)) * ((data->localData[0]->realVars[166]/* $cse34 variable */) ));
  TRACE_POP
}
/*
equation index: 1393
type: SIMPLE_ASSIGN
$cse36 = Modelica.Fluid.Utilities.regRoot(load3.inlet.p - load3.outlet.p, 0.01)
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1393};
  (data->localData[0]->realVars[168]/* $cse36 variable */)  = omc_Modelica_Fluid_Utilities_regRoot(threadData, (data->localData[0]->realVars[264]/* load3.inlet.p variable */)  - (data->localData[0]->realVars[275]/* load3.outlet.p variable */) , 0.01);
  TRACE_POP
}

void residualFunc1401(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1401};
  int i;
  /* iteration variables */
  for (i=0; i<7; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<7; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  (data->localData[0]->realVars[306]/* mfr_load[4] variable */)  = xloc[0];
  (data->localData[0]->realVars[304]/* mfr_load[2] variable */)  = xloc[1];
  (data->localData[0]->realVars[303]/* mfr_load[1] variable */)  = xloc[2];
  (data->localData[0]->realVars[345]/* r32.m_flow variable */)  = xloc[3];
  (data->localData[0]->realVars[474]/* s23.m_flow variable */)  = xloc[4];
  (data->localData[0]->realVars[307]/* mfr_load[5] variable */)  = xloc[5];
  (data->localData[0]->realVars[305]/* mfr_load[3] variable */)  = xloc[6];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1262(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1263(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1264(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1265(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1266(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1267(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1268(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1269(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1270(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1271(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1272(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1273(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1274(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1275(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1276(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1277(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1278(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1279(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1280(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1281(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1282(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1283(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1284(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1285(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1286(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1287(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1288(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1289(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1290(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1291(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1292(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1293(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1294(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1295(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1296(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1297(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1298(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1299(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1300(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1301(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1302(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1303(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1304(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1305(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1306(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1307(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1308(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1309(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1310(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1311(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1312(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1313(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1314(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1315(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1316(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1317(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1318(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1319(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1320(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1321(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1322(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1323(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1324(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1325(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1326(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1327(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1328(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1329(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1330(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1331(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1332(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1333(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1334(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1335(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1336(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1337(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1338(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1339(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1340(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1341(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1342(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1343(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1344(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1345(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1346(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1347(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1348(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1349(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1350(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1351(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1352(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1353(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1354(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1355(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1356(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1357(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1358(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1359(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1360(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1361(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1362(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1363(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1364(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1365(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1366(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1367(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1368(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1369(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1370(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1371(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1372(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1373(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1374(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1375(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1376(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1377(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1378(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1379(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1380(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1381(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1382(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1383(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1384(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1385(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1386(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1387(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1388(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1389(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1390(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1391(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1392(data, threadData);

  /* local constraints */
  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1393(data, threadData);
  /* body */
  res[0] = (31.38470965295043) * (((data->localData[0]->realVars[300]/* load5.loadValveControl.y variable */)  + (data->simulationInfo->realParameter[257]/* load5.loadValve1.theta_min PARAM */) ) * (((data->localData[0]->realVars[293]/* load5.loadValve1.A_v variable */) ) * ((data->localData[0]->realVars[154]/* $cse22 variable */) ))) - (data->localData[0]->realVars[307]/* mfr_load[5] variable */) ;

  res[1] = (31.38470965295043) * (((data->localData[0]->realVars[273]/* load3.loadValveControl.y variable */)  + (data->simulationInfo->realParameter[163]/* load3.loadValve1.theta_min PARAM */) ) * (((data->localData[0]->realVars[266]/* load3.loadValve1.A_v variable */) ) * ((data->localData[0]->realVars[168]/* $cse36 variable */) ))) - (data->localData[0]->realVars[305]/* mfr_load[3] variable */) ;

  res[2] = (data->localData[0]->realVars[399]/* r74.outlet.p variable */)  + (-492.5) * (((data->simulationInfo->realParameter[381]/* r43.cf PARAM */) ) * (((data->simulationInfo->realParameter[388]/* r43.omega PARAM */) ) * (((data->simulationInfo->realParameter[375]/* r43.L PARAM */) ) * (DIVISION_SIM((data->localData[0]->realVars[178]/* $cse46 variable */) ,(data->simulationInfo->realParameter[371]/* r43.A PARAM */) ,"r43.A",equationIndexes))))) - (data->localData[0]->realVars[262]/* load2.outlet.p variable */) ;

  res[3] = (data->localData[0]->realVars[489]/* s34.outlet.p variable */)  + (-492.5) * (((data->simulationInfo->realParameter[637]/* s47.cf PARAM */) ) * (((data->simulationInfo->realParameter[644]/* s47.omega PARAM */) ) * (((data->simulationInfo->realParameter[631]/* s47.L PARAM */) ) * (DIVISION_SIM((data->localData[0]->realVars[151]/* $cse19 variable */) ,(data->simulationInfo->realParameter[627]/* s47.A PARAM */) ,"s47.A",equationIndexes))))) - (data->localData[0]->realVars[514]/* s47.outlet.p variable */) ;

  res[4] = (31.38470965295043) * (((data->localData[0]->realVars[259]/* load2.loadValveControl.y variable */)  + (data->simulationInfo->realParameter[116]/* load2.loadValve1.theta_min PARAM */) ) * (((data->localData[0]->realVars[252]/* load2.loadValve1.A_v variable */) ) * ((data->localData[0]->realVars[174]/* $cse42 variable */) ))) - (data->localData[0]->realVars[304]/* mfr_load[2] variable */) ;

  res[5] = (31.38470965295043) * (((data->localData[0]->realVars[286]/* load4.loadValveControl.y variable */)  + (data->simulationInfo->realParameter[210]/* load4.loadValve1.theta_min PARAM */) ) * (((data->localData[0]->realVars[279]/* load4.loadValve1.A_v variable */) ) * ((data->localData[0]->realVars[159]/* $cse27 variable */) ))) - (data->localData[0]->realVars[306]/* mfr_load[4] variable */) ;

  res[6] = (31.38470965295043) * (((data->localData[0]->realVars[245]/* load1.loadValveControl.y variable */)  + (data->simulationInfo->realParameter[69]/* load1.loadValve1.theta_min PARAM */) ) * (((data->localData[0]->realVars[238]/* load1.loadValve1.A_v variable */) ) * ((data->localData[0]->realVars[187]/* $cse55 variable */) ))) - (data->localData[0]->realVars[303]/* mfr_load[1] variable */) ;
  /* restore known outputs */
  TRACE_POP
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS1401(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+7] = {0,7,7,7,6,6,7,7};
  const int rowIndex[47] = {0,1,2,3,4,5,6,0,1,2,3,4,5,6,0,1,2,3,4,5,6,0,1,2,4,5,6,0,1,3,4,5,6,0,1,2,3,4,5,6,0,1,2,3,4,5,6};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((7+1)*sizeof(unsigned int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(47*sizeof(unsigned int));
  inSysData->sparsePattern->numberOfNonZeros = 47;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(7*sizeof(unsigned int));
  inSysData->sparsePattern->maxColors = 7;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (7+1)*sizeof(unsigned int));
  
  for(i=2;i<7+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 47*sizeof(unsigned int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[6] = 1;
  inSysData->sparsePattern->colorCols[5] = 2;
  inSysData->sparsePattern->colorCols[4] = 3;
  inSysData->sparsePattern->colorCols[3] = 4;
  inSysData->sparsePattern->colorCols[2] = 5;
  inSysData->sparsePattern->colorCols[1] = 6;
  inSysData->sparsePattern->colorCols[0] = 7;
}

OMC_DISABLE_OPT
void initializeStaticDataNLS1401(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for mfr_load[4] */
  sysData->nominal[i] = data->modelData->realVarsData[306].attribute /* mfr_load[4] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[306].attribute /* mfr_load[4] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[306].attribute /* mfr_load[4] */.max;
  /* static nls data for mfr_load[2] */
  sysData->nominal[i] = data->modelData->realVarsData[304].attribute /* mfr_load[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[304].attribute /* mfr_load[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[304].attribute /* mfr_load[2] */.max;
  /* static nls data for mfr_load[1] */
  sysData->nominal[i] = data->modelData->realVarsData[303].attribute /* mfr_load[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[303].attribute /* mfr_load[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[303].attribute /* mfr_load[1] */.max;
  /* static nls data for r32.m_flow */
  sysData->nominal[i] = data->modelData->realVarsData[345].attribute /* r32.m_flow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[345].attribute /* r32.m_flow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[345].attribute /* r32.m_flow */.max;
  /* static nls data for s23.m_flow */
  sysData->nominal[i] = data->modelData->realVarsData[474].attribute /* s23.m_flow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[474].attribute /* s23.m_flow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[474].attribute /* s23.m_flow */.max;
  /* static nls data for mfr_load[5] */
  sysData->nominal[i] = data->modelData->realVarsData[307].attribute /* mfr_load[5] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[307].attribute /* mfr_load[5] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[307].attribute /* mfr_load[5] */.max;
  /* static nls data for mfr_load[3] */
  sysData->nominal[i] = data->modelData->realVarsData[305].attribute /* mfr_load[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[305].attribute /* mfr_load[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[305].attribute /* mfr_load[3] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1401(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS1401(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = (data->localData[0]->realVars[306]/* mfr_load[4] variable */) ;
  array[1] = (data->localData[0]->realVars[304]/* mfr_load[2] variable */) ;
  array[2] = (data->localData[0]->realVars[303]/* mfr_load[1] variable */) ;
  array[3] = (data->localData[0]->realVars[345]/* r32.m_flow variable */) ;
  array[4] = (data->localData[0]->realVars[474]/* s23.m_flow variable */) ;
  array[5] = (data->localData[0]->realVars[307]/* mfr_load[5] variable */) ;
  array[6] = (data->localData[0]->realVars[305]/* mfr_load[3] variable */) ;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[2].equationIndex = 1401;
  nonLinearSystemData[2].size = 7;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 1;
  nonLinearSystemData[2].residualFunc = residualFunc1401;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = NULL;
  nonLinearSystemData[2].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[2].jacobianIndex = -1;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS1401;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS1401;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 914;
  nonLinearSystemData[1].size = 7;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc914;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functionJacNLSJac146_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_initialAnalyticJacobianNLSJac146;
  nonLinearSystemData[1].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS914;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS914;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 335;
  nonLinearSystemData[0].size = 7;
  nonLinearSystemData[0].homotopySupport = 1;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc335;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS335;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS335;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

