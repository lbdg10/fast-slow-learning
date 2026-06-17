#include "omc_simulation_settings.h"
#include "SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_includes.h"


DLLExport
modelica_real omc_Modelica_Fluid_Utilities_regRoot(threadData_t *threadData, modelica_real _x, modelica_real _delta)
{
  modelica_real _y;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  tmp1 = (_x) * (_x) + (_delta) * (_delta);
  tmp2 = 0.25;
  if(tmp1 < 0.0 && tmp2 != 0.0)
  {
    tmp4 = modf(tmp2, &tmp5);
    
    if(tmp4 > 0.5)
    {
      tmp4 -= 1.0;
      tmp5 += 1.0;
    }
    else if(tmp4 < -0.5)
    {
      tmp4 += 1.0;
      tmp5 -= 1.0;
    }
    
    if(fabs(tmp4) < 1e-10)
      tmp3 = pow(tmp1, tmp5);
    else
    {
      tmp7 = modf(1.0/tmp2, &tmp6);
      if(tmp7 > 0.5)
      {
        tmp7 -= 1.0;
        tmp6 += 1.0;
      }
      else if(tmp7 < -0.5)
      {
        tmp7 += 1.0;
        tmp6 -= 1.0;
      }
      if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
      {
        tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
      }
    }
  }
  else
  {
    tmp3 = pow(tmp1, tmp2);
  }
  if(isnan(tmp3) || isinf(tmp3))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
  }tmp8 = tmp3;
  if (tmp8 == 0) {throwStreamPrint(threadData, "Division by zero %s", "x / (x * x + delta * delta) ^ 0.25");}
  _y = (_x) / tmp8;
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Modelica_Fluid_Utilities_regRoot(threadData_t *threadData, modelica_metatype _x, modelica_metatype _delta)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_delta);
  _y = omc_Modelica_Fluid_Utilities_regRoot(threadData, tmp1, tmp2);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLExport
modelica_real omc_Modelica_Fluid_Utilities_regSquare(threadData_t *threadData, modelica_real _x, modelica_real _delta)
{
  modelica_real _y;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  _y = (_x) * (sqrt((_x) * (_x) + (_delta) * (_delta)));
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Modelica_Fluid_Utilities_regSquare(threadData_t *threadData, modelica_metatype _x, modelica_metatype _delta)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_delta);
  _y = omc_Modelica_Fluid_Utilities_regSquare(threadData, tmp1, tmp2);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

#ifdef __cplusplus
}
#endif
