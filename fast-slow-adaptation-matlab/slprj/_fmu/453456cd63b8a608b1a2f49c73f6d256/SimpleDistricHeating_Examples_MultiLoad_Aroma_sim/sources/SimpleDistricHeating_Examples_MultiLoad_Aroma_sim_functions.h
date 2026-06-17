#ifndef SimpleDistricHeating_Examples_MultiLoad_Aroma_sim__H
#define SimpleDistricHeating_Examples_MultiLoad_Aroma_sim__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "simulation/simulation_runtime.h"
#ifdef __cplusplus
extern "C" {
#endif


DLLExport
modelica_real omc_Modelica_Fluid_Utilities_regRoot(threadData_t *threadData, modelica_real _x, modelica_real _delta);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Utilities_regRoot(threadData_t *threadData, modelica_metatype _x, modelica_metatype _delta);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_regRoot,2,0) {(void*) boxptr_Modelica_Fluid_Utilities_regRoot,0}};
#define boxvar_Modelica_Fluid_Utilities_regRoot MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_regRoot)


DLLExport
modelica_real omc_Modelica_Fluid_Utilities_regSquare(threadData_t *threadData, modelica_real _x, modelica_real _delta);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Utilities_regSquare(threadData_t *threadData, modelica_metatype _x, modelica_metatype _delta);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_regSquare,2,0) {(void*) boxptr_Modelica_Fluid_Utilities_regSquare,0}};
#define boxvar_Modelica_Fluid_Utilities_regSquare MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_regSquare)
#include "SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_model.h"


#ifdef __cplusplus
}
#endif
#endif

