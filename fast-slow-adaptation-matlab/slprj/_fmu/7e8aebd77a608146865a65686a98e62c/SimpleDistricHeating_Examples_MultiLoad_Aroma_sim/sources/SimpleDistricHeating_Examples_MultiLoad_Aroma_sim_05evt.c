/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"mfr_load[4] > 0.0",
  "mfr_load[1] > 0.0",
  "mfr_load[5] > 0.0",
  "mfr_load[3] > 0.0",
  "mfr_load[2] > 0.0",
  "s16.m_flow > 0.0",
  "s12.m_flow > 0.0",
  "r76.m_flow > 0.0",
  "s67.m_flow > 0.0",
  "s47.m_flow > 0.0",
  "r43.m_flow > 0.0",
  "r32.m_flow > 0.0",
  "r61.m_flow > 0.0",
  "mfr_ritorno > 0.0",
  "r21.m_flow > 0.0",
  "s23.m_flow > 0.0",
  "s34.m_flow > 0.0",
  "not boiler.boilerInsideVolume.allowFlowReversal or mfr_mandata > 0.0",
  "mfr_mandata > 0.0",
  "r74.m_flow > 0.0"};
  static const int occurEqs0[] = {1,-1};
  static const int occurEqs1[] = {1,-1};
  static const int occurEqs2[] = {1,-1};
  static const int occurEqs3[] = {1,-1};
  static const int occurEqs4[] = {1,-1};
  static const int occurEqs5[] = {1,1506};
  static const int occurEqs6[] = {1,1426};
  static const int occurEqs7[] = {1,1487};
  static const int occurEqs8[] = {1,1499};
  static const int occurEqs9[] = {1,1438};
  static const int occurEqs10[] = {1,1449};
  static const int occurEqs11[] = {1,1467};
  static const int occurEqs12[] = {1,1474};
  static const int occurEqs13[] = {1,1479};
  static const int occurEqs14[] = {1,1470};
  static const int occurEqs15[] = {1,1509};
  static const int occurEqs16[] = {1,1444};
  static const int occurEqs17[] = {1,-1};
  static const int occurEqs18[] = {1,1485};
  static const int occurEqs19[] = {1,1488};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15,occurEqs16,occurEqs17,occurEqs18,occurEqs19};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
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

int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1099(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1100(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1101(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1102(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1103(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1104(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1105(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1106(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1109(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1110(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1111(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1112(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1113(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1114(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1115(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1116(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1119(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1122(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1123(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1124(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1125(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1126(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1127(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1130(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1131(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1132(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1133(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1134(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1135(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1136(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1137(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1140(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1141(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1142(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1143(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1144(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1145(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1146(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1147(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1150(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1151(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1152(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1153(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1154(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1155(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1156(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1157(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1160(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1161(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1162(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1163(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1164(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1165(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1166(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1167(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1170(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1171(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1172(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1173(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1174(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1175(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1176(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1177(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1180(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1183(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1184(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1185(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1186(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1187(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1188(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1191(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1192(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1193(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1194(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1195(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1196(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1197(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1198(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1201(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1202(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1203(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1204(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1205(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1206(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1207(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1208(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1211(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1212(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1213(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1214(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1215(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1216(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1217(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1218(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1221(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1222(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1223(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1224(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1225(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1226(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1227(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1228(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1231(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1232(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1233(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1234(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1235(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1236(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1237(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1238(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1241(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1242(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1243(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1244(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1245(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1246(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1247(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1248(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1251(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1253(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1254(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1255(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1256(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1257(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1258(data, threadData);

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

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1422(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1424(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1425(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1426(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1427(data, threadData);

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

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1480(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1481(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1482(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1483(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1484(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1485(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1487(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1488(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1489(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1490(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1491(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1492(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1493(data, threadData);

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

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1513(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1514(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1515(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1516(data, threadData);

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

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1530(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1531(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1532(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1533(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1534(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1536(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1537(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1538(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1539(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1540(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1541(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1542(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1543(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1545(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_1546(data, threadData);
  
  TRACE_POP
  return 0;
}

int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;

  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_boolean tmp19;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp0 = GreaterZC((data->localData[0]->realVars[306]/* mfr_load[4] variable */) , 0.0, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp0) ? 1 : -1;
  tmp1 = GreaterZC((data->localData[0]->realVars[303]/* mfr_load[1] variable */) , 0.0, data->simulationInfo->storedRelations[1]);
  gout[1] = (tmp1) ? 1 : -1;
  tmp2 = GreaterZC((data->localData[0]->realVars[307]/* mfr_load[5] variable */) , 0.0, data->simulationInfo->storedRelations[2]);
  gout[2] = (tmp2) ? 1 : -1;
  tmp3 = GreaterZC((data->localData[0]->realVars[305]/* mfr_load[3] variable */) , 0.0, data->simulationInfo->storedRelations[3]);
  gout[3] = (tmp3) ? 1 : -1;
  tmp4 = GreaterZC((data->localData[0]->realVars[304]/* mfr_load[2] variable */) , 0.0, data->simulationInfo->storedRelations[4]);
  gout[4] = (tmp4) ? 1 : -1;
  tmp5 = GreaterZC((data->localData[0]->realVars[461]/* s16.m_flow variable */) , 0.0, data->simulationInfo->storedRelations[5]);
  gout[5] = (tmp5) ? 1 : -1;
  tmp6 = GreaterZC((data->localData[0]->realVars[448]/* s12.m_flow variable */) , 0.0, data->simulationInfo->storedRelations[6]);
  gout[6] = (tmp6) ? 1 : -1;
  tmp7 = GreaterZC((data->localData[0]->realVars[411]/* r76.m_flow variable */) , 0.0, data->simulationInfo->storedRelations[7]);
  gout[7] = (tmp7) ? 1 : -1;
  tmp8 = GreaterZC((data->localData[0]->realVars[526]/* s67.m_flow variable */) , 0.0, data->simulationInfo->storedRelations[8]);
  gout[8] = (tmp8) ? 1 : -1;
  tmp9 = GreaterZC((data->localData[0]->realVars[512]/* s47.m_flow variable */) , 0.0, data->simulationInfo->storedRelations[9]);
  gout[9] = (tmp9) ? 1 : -1;
  tmp10 = GreaterZC((data->localData[0]->realVars[358]/* r43.m_flow variable */) , 0.0, data->simulationInfo->storedRelations[10]);
  gout[10] = (tmp10) ? 1 : -1;
  tmp11 = GreaterZC((data->localData[0]->realVars[345]/* r32.m_flow variable */) , 0.0, data->simulationInfo->storedRelations[11]);
  gout[11] = (tmp11) ? 1 : -1;
  tmp12 = GreaterZC((data->localData[0]->realVars[383]/* r61.m_flow variable */) , 0.0, data->simulationInfo->storedRelations[12]);
  gout[12] = (tmp12) ? 1 : -1;
  tmp13 = GreaterZC((data->localData[0]->realVars[310]/* mfr_ritorno variable */) , 0.0, data->simulationInfo->storedRelations[13]);
  gout[13] = (tmp13) ? 1 : -1;
  tmp14 = GreaterZC((data->localData[0]->realVars[332]/* r21.m_flow variable */) , 0.0, data->simulationInfo->storedRelations[14]);
  gout[14] = (tmp14) ? 1 : -1;
  tmp15 = GreaterZC((data->localData[0]->realVars[474]/* s23.m_flow variable */) , 0.0, data->simulationInfo->storedRelations[15]);
  gout[15] = (tmp15) ? 1 : -1;
  tmp16 = GreaterZC((data->localData[0]->realVars[487]/* s34.m_flow variable */) , 0.0, data->simulationInfo->storedRelations[16]);
  gout[16] = (tmp16) ? 1 : -1;
  tmp17 = GreaterZC((data->localData[0]->realVars[308]/* mfr_mandata variable */) , 0.0, data->simulationInfo->storedRelations[17]);
  gout[17] = (((!(data->simulationInfo->booleanParameter[0]/* boiler.boilerInsideVolume.allowFlowReversal PARAM */) ) || tmp17)) ? 1 : -1;
  tmp18 = GreaterZC((data->localData[0]->realVars[308]/* mfr_mandata variable */) , 0.0, data->simulationInfo->storedRelations[17]);
  gout[18] = (tmp18) ? 1 : -1;
  tmp19 = GreaterZC((data->localData[0]->realVars[397]/* r74.m_flow variable */) , 0.0, data->simulationInfo->storedRelations[18]);
  gout[19] = (tmp19) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_relationDescription(int i)
{
  const char *res[] = {"mfr_load[4] > 0.0",
  "mfr_load[1] > 0.0",
  "mfr_load[5] > 0.0",
  "mfr_load[3] > 0.0",
  "mfr_load[2] > 0.0",
  "s16.m_flow > 0.0",
  "s12.m_flow > 0.0",
  "r76.m_flow > 0.0",
  "s67.m_flow > 0.0",
  "s47.m_flow > 0.0",
  "r43.m_flow > 0.0",
  "r32.m_flow > 0.0",
  "r61.m_flow > 0.0",
  "mfr_ritorno > 0.0",
  "r21.m_flow > 0.0",
  "s23.m_flow > 0.0",
  "s34.m_flow > 0.0",
  "mfr_mandata > 0.0",
  "r74.m_flow > 0.0"};
  return res[i];
}

int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;

  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  
  if(evalforZeroCross) {
    tmp20 = GreaterZC((data->localData[0]->realVars[306]/* mfr_load[4] variable */) , 0.0, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp20;
    tmp21 = GreaterZC((data->localData[0]->realVars[303]/* mfr_load[1] variable */) , 0.0, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp21;
    tmp22 = GreaterZC((data->localData[0]->realVars[307]/* mfr_load[5] variable */) , 0.0, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp22;
    tmp23 = GreaterZC((data->localData[0]->realVars[305]/* mfr_load[3] variable */) , 0.0, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp23;
    tmp24 = GreaterZC((data->localData[0]->realVars[304]/* mfr_load[2] variable */) , 0.0, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp24;
    tmp25 = GreaterZC((data->localData[0]->realVars[461]/* s16.m_flow variable */) , 0.0, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp25;
    tmp26 = GreaterZC((data->localData[0]->realVars[448]/* s12.m_flow variable */) , 0.0, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp26;
    tmp27 = GreaterZC((data->localData[0]->realVars[411]/* r76.m_flow variable */) , 0.0, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp27;
    tmp28 = GreaterZC((data->localData[0]->realVars[526]/* s67.m_flow variable */) , 0.0, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp28;
    tmp29 = GreaterZC((data->localData[0]->realVars[512]/* s47.m_flow variable */) , 0.0, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp29;
    tmp30 = GreaterZC((data->localData[0]->realVars[358]/* r43.m_flow variable */) , 0.0, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp30;
    tmp31 = GreaterZC((data->localData[0]->realVars[345]/* r32.m_flow variable */) , 0.0, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp31;
    tmp32 = GreaterZC((data->localData[0]->realVars[383]/* r61.m_flow variable */) , 0.0, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp32;
    tmp33 = GreaterZC((data->localData[0]->realVars[310]/* mfr_ritorno variable */) , 0.0, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp33;
    tmp34 = GreaterZC((data->localData[0]->realVars[332]/* r21.m_flow variable */) , 0.0, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp34;
    tmp35 = GreaterZC((data->localData[0]->realVars[474]/* s23.m_flow variable */) , 0.0, data->simulationInfo->storedRelations[15]);
    data->simulationInfo->relations[15] = tmp35;
    tmp36 = GreaterZC((data->localData[0]->realVars[487]/* s34.m_flow variable */) , 0.0, data->simulationInfo->storedRelations[16]);
    data->simulationInfo->relations[16] = tmp36;
    tmp37 = GreaterZC((data->localData[0]->realVars[308]/* mfr_mandata variable */) , 0.0, data->simulationInfo->storedRelations[17]);
    data->simulationInfo->relations[17] = tmp37;
    tmp38 = GreaterZC((data->localData[0]->realVars[397]/* r74.m_flow variable */) , 0.0, data->simulationInfo->storedRelations[18]);
    data->simulationInfo->relations[18] = tmp38;
  } else {
    data->simulationInfo->relations[0] = ((data->localData[0]->realVars[306]/* mfr_load[4] variable */)  > 0.0);
    data->simulationInfo->relations[1] = ((data->localData[0]->realVars[303]/* mfr_load[1] variable */)  > 0.0);
    data->simulationInfo->relations[2] = ((data->localData[0]->realVars[307]/* mfr_load[5] variable */)  > 0.0);
    data->simulationInfo->relations[3] = ((data->localData[0]->realVars[305]/* mfr_load[3] variable */)  > 0.0);
    data->simulationInfo->relations[4] = ((data->localData[0]->realVars[304]/* mfr_load[2] variable */)  > 0.0);
    data->simulationInfo->relations[5] = ((data->localData[0]->realVars[461]/* s16.m_flow variable */)  > 0.0);
    data->simulationInfo->relations[6] = ((data->localData[0]->realVars[448]/* s12.m_flow variable */)  > 0.0);
    data->simulationInfo->relations[7] = ((data->localData[0]->realVars[411]/* r76.m_flow variable */)  > 0.0);
    data->simulationInfo->relations[8] = ((data->localData[0]->realVars[526]/* s67.m_flow variable */)  > 0.0);
    data->simulationInfo->relations[9] = ((data->localData[0]->realVars[512]/* s47.m_flow variable */)  > 0.0);
    data->simulationInfo->relations[10] = ((data->localData[0]->realVars[358]/* r43.m_flow variable */)  > 0.0);
    data->simulationInfo->relations[11] = ((data->localData[0]->realVars[345]/* r32.m_flow variable */)  > 0.0);
    data->simulationInfo->relations[12] = ((data->localData[0]->realVars[383]/* r61.m_flow variable */)  > 0.0);
    data->simulationInfo->relations[13] = ((data->localData[0]->realVars[310]/* mfr_ritorno variable */)  > 0.0);
    data->simulationInfo->relations[14] = ((data->localData[0]->realVars[332]/* r21.m_flow variable */)  > 0.0);
    data->simulationInfo->relations[15] = ((data->localData[0]->realVars[474]/* s23.m_flow variable */)  > 0.0);
    data->simulationInfo->relations[16] = ((data->localData[0]->realVars[487]/* s34.m_flow variable */)  > 0.0);
    data->simulationInfo->relations[17] = ((data->localData[0]->realVars[308]/* mfr_mandata variable */)  > 0.0);
    data->simulationInfo->relations[18] = ((data->localData[0]->realVars[397]/* r74.m_flow variable */)  > 0.0);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

