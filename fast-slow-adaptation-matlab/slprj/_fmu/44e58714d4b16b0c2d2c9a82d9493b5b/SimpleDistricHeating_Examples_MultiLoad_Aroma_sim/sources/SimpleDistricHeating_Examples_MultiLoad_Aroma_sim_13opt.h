#if defined(__cplusplus)
  extern "C" {
#endif
  int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_mayer(DATA* data, modelica_real** res, short*);
  int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_lagrange(DATA* data, modelica_real** res, short *, short *);
  int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_setInputData(DATA *data, const modelica_boolean file);
  int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif