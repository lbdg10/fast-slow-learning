/* Asserts */
#include "SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 2206
type: ALGORITHM

  assert(boiler.boilerInsideVolume.Ttilde >= 0.0, "Variable violating min constraint: 0.0 <= boiler.boilerInsideVolume.Ttilde, has value: " + String(boiler.boilerInsideVolume.Ttilde, "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2206};
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,87,"Variable violating min constraint: 0.0 <= boiler.boilerInsideVolume.Ttilde, has value: ");
  modelica_string tmp2;
  modelica_metatype tmpMeta3;
  static int tmp4 = 0;
  if(!tmp4)
  {
    tmp0 = GreaterEq((data->localData[0]->realVars[0]/* boiler.boilerInsideVolume.Ttilde STATE(1) */) ,0.0);
    if(!tmp0)
    {
      tmp2 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[0]/* boiler.boilerInsideVolume.Ttilde STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta3 = stringAppend(MMC_REFSTRINGLIT(tmp1),tmp2);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nboiler.boilerInsideVolume.Ttilde >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta3));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",574,7,574,89,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nboiler.boilerInsideVolume.Ttilde >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta3));
        }
      }
      tmp4 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2207
type: ALGORITHM

  assert(boiler.boilerInsideVolume.T[1] >= 0.0, "Variable violating min constraint: 0.0 <= boiler.boilerInsideVolume.T[1], has value: " + String(boiler.boilerInsideVolume.T[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2207};
  modelica_boolean tmp5;
  static const MMC_DEFSTRINGLIT(tmp6,85,"Variable violating min constraint: 0.0 <= boiler.boilerInsideVolume.T[1], has value: ");
  modelica_string tmp7;
  modelica_metatype tmpMeta8;
  static int tmp9 = 0;
  if(!tmp9)
  {
    tmp5 = GreaterEq((data->localData[0]->realVars[219]/* boiler.boilerInsideVolume.T[1] variable */) ,0.0);
    if(!tmp5)
    {
      tmp7 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[219]/* boiler.boilerInsideVolume.T[1] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta8 = stringAppend(MMC_REFSTRINGLIT(tmp6),tmp7);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nboiler.boilerInsideVolume.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta8));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",575,7,575,80,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nboiler.boilerInsideVolume.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta8));
        }
      }
      tmp9 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2208
type: ALGORITHM

  assert(boiler.boilerInsideVolume.T[2] >= 0.0, "Variable violating min constraint: 0.0 <= boiler.boilerInsideVolume.T[2], has value: " + String(boiler.boilerInsideVolume.T[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2208};
  modelica_boolean tmp10;
  static const MMC_DEFSTRINGLIT(tmp11,85,"Variable violating min constraint: 0.0 <= boiler.boilerInsideVolume.T[2], has value: ");
  modelica_string tmp12;
  modelica_metatype tmpMeta13;
  static int tmp14 = 0;
  if(!tmp14)
  {
    tmp10 = GreaterEq((data->localData[0]->realVars[220]/* boiler.boilerInsideVolume.T[2] variable */) ,0.0);
    if(!tmp10)
    {
      tmp12 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[220]/* boiler.boilerInsideVolume.T[2] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta13 = stringAppend(MMC_REFSTRINGLIT(tmp11),tmp12);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nboiler.boilerInsideVolume.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta13));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",575,7,575,80,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nboiler.boilerInsideVolume.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta13));
        }
      }
      tmp14 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2209
type: ALGORITHM

  assert(s01.Ttilde[1] >= 0.0, "Variable violating min constraint: 0.0 <= s01.Ttilde[1], has value: " + String(s01.Ttilde[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2209};
  modelica_boolean tmp15;
  static const MMC_DEFSTRINGLIT(tmp16,68,"Variable violating min constraint: 0.0 <= s01.Ttilde[1], has value: ");
  modelica_string tmp17;
  modelica_metatype tmpMeta18;
  static int tmp19 = 0;
  if(!tmp19)
  {
    tmp15 = GreaterEq((data->localData[0]->realVars[39]/* s01.Ttilde[1] STATE(1) */) ,0.0);
    if(!tmp15)
    {
      tmp17 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[39]/* s01.Ttilde[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta18 = stringAppend(MMC_REFSTRINGLIT(tmp16),tmp17);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns01.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta18));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns01.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta18));
        }
      }
      tmp19 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2210
type: ALGORITHM

  assert(s01.Ttilde[2] >= 0.0, "Variable violating min constraint: 0.0 <= s01.Ttilde[2], has value: " + String(s01.Ttilde[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2210};
  modelica_boolean tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,68,"Variable violating min constraint: 0.0 <= s01.Ttilde[2], has value: ");
  modelica_string tmp22;
  modelica_metatype tmpMeta23;
  static int tmp24 = 0;
  if(!tmp24)
  {
    tmp20 = GreaterEq((data->localData[0]->realVars[40]/* s01.Ttilde[2] STATE(1) */) ,0.0);
    if(!tmp20)
    {
      tmp22 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[40]/* s01.Ttilde[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta23 = stringAppend(MMC_REFSTRINGLIT(tmp21),tmp22);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns01.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta23));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns01.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta23));
        }
      }
      tmp24 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2211
type: ALGORITHM

  assert(s01.Twall[1] >= 0.0, "Variable violating min constraint: 0.0 <= s01.Twall[1], has value: " + String(s01.Twall[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2211};
  modelica_boolean tmp25;
  static const MMC_DEFSTRINGLIT(tmp26,67,"Variable violating min constraint: 0.0 <= s01.Twall[1], has value: ");
  modelica_string tmp27;
  modelica_metatype tmpMeta28;
  static int tmp29 = 0;
  if(!tmp29)
  {
    tmp25 = GreaterEq((data->localData[0]->realVars[41]/* s01.Twall[1] STATE(1) */) ,0.0);
    if(!tmp25)
    {
      tmp27 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[41]/* s01.Twall[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta28 = stringAppend(MMC_REFSTRINGLIT(tmp26),tmp27);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns01.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta28));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns01.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta28));
        }
      }
      tmp29 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2212
type: ALGORITHM

  assert(s01.Twall[2] >= 0.0, "Variable violating min constraint: 0.0 <= s01.Twall[2], has value: " + String(s01.Twall[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2212};
  modelica_boolean tmp30;
  static const MMC_DEFSTRINGLIT(tmp31,67,"Variable violating min constraint: 0.0 <= s01.Twall[2], has value: ");
  modelica_string tmp32;
  modelica_metatype tmpMeta33;
  static int tmp34 = 0;
  if(!tmp34)
  {
    tmp30 = GreaterEq((data->localData[0]->realVars[42]/* s01.Twall[2] STATE(1) */) ,0.0);
    if(!tmp30)
    {
      tmp32 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[42]/* s01.Twall[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta33 = stringAppend(MMC_REFSTRINGLIT(tmp31),tmp32);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns01.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta33));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns01.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta33));
        }
      }
      tmp34 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2213
type: ALGORITHM

  assert(s01.T[1] >= 0.0, "Variable violating min constraint: 0.0 <= s01.T[1], has value: " + String(s01.T[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2213};
  modelica_boolean tmp35;
  static const MMC_DEFSTRINGLIT(tmp36,63,"Variable violating min constraint: 0.0 <= s01.T[1], has value: ");
  modelica_string tmp37;
  modelica_metatype tmpMeta38;
  static int tmp39 = 0;
  if(!tmp39)
  {
    tmp35 = GreaterEq((data->localData[0]->realVars[433]/* s01.T[1] variable */) ,0.0);
    if(!tmp35)
    {
      tmp37 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[433]/* s01.T[1] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta38 = stringAppend(MMC_REFSTRINGLIT(tmp36),tmp37);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns01.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta38));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns01.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta38));
        }
      }
      tmp39 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2214
type: ALGORITHM

  assert(load1.loadValveControl.y >= 0.0 and load1.loadValveControl.y <= 1.0, "Variable violating min/max constraint: 0.0 <= load1.loadValveControl.y <= 1.0, has value: " + String(load1.loadValveControl.y, "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2214};
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  static const MMC_DEFSTRINGLIT(tmp42,90,"Variable violating min/max constraint: 0.0 <= load1.loadValveControl.y <= 1.0, has value: ");
  modelica_string tmp43;
  modelica_metatype tmpMeta44;
  static int tmp45 = 0;
  if(!tmp45)
  {
    tmp40 = GreaterEq((data->localData[0]->realVars[245]/* load1.loadValveControl.y variable */) ,0.0);
    tmp41 = LessEq((data->localData[0]->realVars[245]/* load1.loadValveControl.y variable */) ,1.0);
    if(!(tmp40 && tmp41))
    {
      tmp43 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[245]/* load1.loadValveControl.y variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta44 = stringAppend(MMC_REFSTRINGLIT(tmp42),tmp43);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload1.loadValveControl.y >= 0.0 and load1.loadValveControl.y <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta44));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Interfaces.mo",501,5,502,56,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload1.loadValveControl.y >= 0.0 and load1.loadValveControl.y <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta44));
        }
      }
      tmp45 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2215
type: ALGORITHM

  assert(s12.m_flow >= -1000000000.0, "Variable violating min constraint: -1000000000.0 <= s12.m_flow, has value: " + String(s12.m_flow, "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2215};
  modelica_boolean tmp46;
  static const MMC_DEFSTRINGLIT(tmp47,75,"Variable violating min constraint: -1000000000.0 <= s12.m_flow, has value: ");
  modelica_string tmp48;
  modelica_metatype tmpMeta49;
  static int tmp50 = 0;
  if(!tmp50)
  {
    tmp46 = GreaterEq((data->localData[0]->realVars[448]/* s12.m_flow variable */) ,-1000000000.0);
    if(!tmp46)
    {
      tmp48 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[448]/* s12.m_flow variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta49 = stringAppend(MMC_REFSTRINGLIT(tmp47),tmp48);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns12.m_flow >= -1000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta49));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",709,7,709,44,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns12.m_flow >= -1000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta49));
        }
      }
      tmp50 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2216
type: ALGORITHM

  assert(s12.Ttilde[1] >= 0.0, "Variable violating min constraint: 0.0 <= s12.Ttilde[1], has value: " + String(s12.Ttilde[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2216};
  modelica_boolean tmp51;
  static const MMC_DEFSTRINGLIT(tmp52,68,"Variable violating min constraint: 0.0 <= s12.Ttilde[1], has value: ");
  modelica_string tmp53;
  modelica_metatype tmpMeta54;
  static int tmp55 = 0;
  if(!tmp55)
  {
    tmp51 = GreaterEq((data->localData[0]->realVars[43]/* s12.Ttilde[1] STATE(1) */) ,0.0);
    if(!tmp51)
    {
      tmp53 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[43]/* s12.Ttilde[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta54 = stringAppend(MMC_REFSTRINGLIT(tmp52),tmp53);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns12.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta54));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns12.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta54));
        }
      }
      tmp55 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2217
type: ALGORITHM

  assert(s12.Ttilde[2] >= 0.0, "Variable violating min constraint: 0.0 <= s12.Ttilde[2], has value: " + String(s12.Ttilde[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2217};
  modelica_boolean tmp56;
  static const MMC_DEFSTRINGLIT(tmp57,68,"Variable violating min constraint: 0.0 <= s12.Ttilde[2], has value: ");
  modelica_string tmp58;
  modelica_metatype tmpMeta59;
  static int tmp60 = 0;
  if(!tmp60)
  {
    tmp56 = GreaterEq((data->localData[0]->realVars[44]/* s12.Ttilde[2] STATE(1) */) ,0.0);
    if(!tmp56)
    {
      tmp58 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[44]/* s12.Ttilde[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta59 = stringAppend(MMC_REFSTRINGLIT(tmp57),tmp58);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns12.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta59));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns12.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta59));
        }
      }
      tmp60 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2218
type: ALGORITHM

  assert(s12.Twall[1] >= 0.0, "Variable violating min constraint: 0.0 <= s12.Twall[1], has value: " + String(s12.Twall[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2218};
  modelica_boolean tmp61;
  static const MMC_DEFSTRINGLIT(tmp62,67,"Variable violating min constraint: 0.0 <= s12.Twall[1], has value: ");
  modelica_string tmp63;
  modelica_metatype tmpMeta64;
  static int tmp65 = 0;
  if(!tmp65)
  {
    tmp61 = GreaterEq((data->localData[0]->realVars[45]/* s12.Twall[1] STATE(1) */) ,0.0);
    if(!tmp61)
    {
      tmp63 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[45]/* s12.Twall[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta64 = stringAppend(MMC_REFSTRINGLIT(tmp62),tmp63);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns12.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta64));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns12.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta64));
        }
      }
      tmp65 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2219
type: ALGORITHM

  assert(s12.Twall[2] >= 0.0, "Variable violating min constraint: 0.0 <= s12.Twall[2], has value: " + String(s12.Twall[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2219};
  modelica_boolean tmp66;
  static const MMC_DEFSTRINGLIT(tmp67,67,"Variable violating min constraint: 0.0 <= s12.Twall[2], has value: ");
  modelica_string tmp68;
  modelica_metatype tmpMeta69;
  static int tmp70 = 0;
  if(!tmp70)
  {
    tmp66 = GreaterEq((data->localData[0]->realVars[46]/* s12.Twall[2] STATE(1) */) ,0.0);
    if(!tmp66)
    {
      tmp68 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[46]/* s12.Twall[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta69 = stringAppend(MMC_REFSTRINGLIT(tmp67),tmp68);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns12.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta69));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns12.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta69));
        }
      }
      tmp70 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2220
type: ALGORITHM

  assert(s12.T[1] >= 0.0, "Variable violating min constraint: 0.0 <= s12.T[1], has value: " + String(s12.T[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2220};
  modelica_boolean tmp71;
  static const MMC_DEFSTRINGLIT(tmp72,63,"Variable violating min constraint: 0.0 <= s12.T[1], has value: ");
  modelica_string tmp73;
  modelica_metatype tmpMeta74;
  static int tmp75 = 0;
  if(!tmp75)
  {
    tmp71 = GreaterEq((data->localData[0]->realVars[444]/* s12.T[1] variable */) ,0.0);
    if(!tmp71)
    {
      tmp73 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[444]/* s12.T[1] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta74 = stringAppend(MMC_REFSTRINGLIT(tmp72),tmp73);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns12.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta74));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns12.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta74));
        }
      }
      tmp75 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2221
type: ALGORITHM

  assert(s12.T[2] >= 0.0, "Variable violating min constraint: 0.0 <= s12.T[2], has value: " + String(s12.T[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2221};
  modelica_boolean tmp76;
  static const MMC_DEFSTRINGLIT(tmp77,63,"Variable violating min constraint: 0.0 <= s12.T[2], has value: ");
  modelica_string tmp78;
  modelica_metatype tmpMeta79;
  static int tmp80 = 0;
  if(!tmp80)
  {
    tmp76 = GreaterEq((data->localData[0]->realVars[445]/* s12.T[2] variable */) ,0.0);
    if(!tmp76)
    {
      tmp78 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[445]/* s12.T[2] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta79 = stringAppend(MMC_REFSTRINGLIT(tmp77),tmp78);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns12.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta79));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns12.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta79));
        }
      }
      tmp80 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2222
type: ALGORITHM

  assert(s12.T[3] >= 0.0, "Variable violating min constraint: 0.0 <= s12.T[3], has value: " + String(s12.T[3], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2222};
  modelica_boolean tmp81;
  static const MMC_DEFSTRINGLIT(tmp82,63,"Variable violating min constraint: 0.0 <= s12.T[3], has value: ");
  modelica_string tmp83;
  modelica_metatype tmpMeta84;
  static int tmp85 = 0;
  if(!tmp85)
  {
    tmp81 = GreaterEq((data->localData[0]->realVars[446]/* s12.T[3] variable */) ,0.0);
    if(!tmp81)
    {
      tmp83 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[446]/* s12.T[3] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta84 = stringAppend(MMC_REFSTRINGLIT(tmp82),tmp83);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns12.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta84));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns12.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta84));
        }
      }
      tmp85 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2223
type: ALGORITHM

  assert(r10.Ttilde[1] >= 0.0, "Variable violating min constraint: 0.0 <= r10.Ttilde[1], has value: " + String(r10.Ttilde[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2223};
  modelica_boolean tmp86;
  static const MMC_DEFSTRINGLIT(tmp87,68,"Variable violating min constraint: 0.0 <= r10.Ttilde[1], has value: ");
  modelica_string tmp88;
  modelica_metatype tmpMeta89;
  static int tmp90 = 0;
  if(!tmp90)
  {
    tmp86 = GreaterEq((data->localData[0]->realVars[3]/* r10.Ttilde[1] STATE(1) */) ,0.0);
    if(!tmp86)
    {
      tmp88 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[3]/* r10.Ttilde[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta89 = stringAppend(MMC_REFSTRINGLIT(tmp87),tmp88);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr10.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta89));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr10.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta89));
        }
      }
      tmp90 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2224
type: ALGORITHM

  assert(r10.Ttilde[2] >= 0.0, "Variable violating min constraint: 0.0 <= r10.Ttilde[2], has value: " + String(r10.Ttilde[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2224};
  modelica_boolean tmp91;
  static const MMC_DEFSTRINGLIT(tmp92,68,"Variable violating min constraint: 0.0 <= r10.Ttilde[2], has value: ");
  modelica_string tmp93;
  modelica_metatype tmpMeta94;
  static int tmp95 = 0;
  if(!tmp95)
  {
    tmp91 = GreaterEq((data->localData[0]->realVars[4]/* r10.Ttilde[2] STATE(1) */) ,0.0);
    if(!tmp91)
    {
      tmp93 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[4]/* r10.Ttilde[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta94 = stringAppend(MMC_REFSTRINGLIT(tmp92),tmp93);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr10.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta94));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr10.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta94));
        }
      }
      tmp95 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2225
type: ALGORITHM

  assert(r10.Twall[1] >= 0.0, "Variable violating min constraint: 0.0 <= r10.Twall[1], has value: " + String(r10.Twall[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2225};
  modelica_boolean tmp96;
  static const MMC_DEFSTRINGLIT(tmp97,67,"Variable violating min constraint: 0.0 <= r10.Twall[1], has value: ");
  modelica_string tmp98;
  modelica_metatype tmpMeta99;
  static int tmp100 = 0;
  if(!tmp100)
  {
    tmp96 = GreaterEq((data->localData[0]->realVars[5]/* r10.Twall[1] STATE(1) */) ,0.0);
    if(!tmp96)
    {
      tmp98 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[5]/* r10.Twall[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta99 = stringAppend(MMC_REFSTRINGLIT(tmp97),tmp98);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr10.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta99));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr10.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta99));
        }
      }
      tmp100 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2226
type: ALGORITHM

  assert(r10.Twall[2] >= 0.0, "Variable violating min constraint: 0.0 <= r10.Twall[2], has value: " + String(r10.Twall[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2226};
  modelica_boolean tmp101;
  static const MMC_DEFSTRINGLIT(tmp102,67,"Variable violating min constraint: 0.0 <= r10.Twall[2], has value: ");
  modelica_string tmp103;
  modelica_metatype tmpMeta104;
  static int tmp105 = 0;
  if(!tmp105)
  {
    tmp101 = GreaterEq((data->localData[0]->realVars[6]/* r10.Twall[2] STATE(1) */) ,0.0);
    if(!tmp101)
    {
      tmp103 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[6]/* r10.Twall[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta104 = stringAppend(MMC_REFSTRINGLIT(tmp102),tmp103);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr10.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta104));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr10.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta104));
        }
      }
      tmp105 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2227
type: ALGORITHM

  assert(r10.T[1] >= 0.0, "Variable violating min constraint: 0.0 <= r10.T[1], has value: " + String(r10.T[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2227};
  modelica_boolean tmp106;
  static const MMC_DEFSTRINGLIT(tmp107,63,"Variable violating min constraint: 0.0 <= r10.T[1], has value: ");
  modelica_string tmp108;
  modelica_metatype tmpMeta109;
  static int tmp110 = 0;
  if(!tmp110)
  {
    tmp106 = GreaterEq((data->localData[0]->realVars[318]/* r10.T[1] variable */) ,0.0);
    if(!tmp106)
    {
      tmp108 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[318]/* r10.T[1] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta109 = stringAppend(MMC_REFSTRINGLIT(tmp107),tmp108);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr10.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta109));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr10.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta109));
        }
      }
      tmp110 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2228
type: ALGORITHM

  assert(r21.m_flow >= -1000000000.0, "Variable violating min constraint: -1000000000.0 <= r21.m_flow, has value: " + String(r21.m_flow, "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2228};
  modelica_boolean tmp111;
  static const MMC_DEFSTRINGLIT(tmp112,75,"Variable violating min constraint: -1000000000.0 <= r21.m_flow, has value: ");
  modelica_string tmp113;
  modelica_metatype tmpMeta114;
  static int tmp115 = 0;
  if(!tmp115)
  {
    tmp111 = GreaterEq((data->localData[0]->realVars[332]/* r21.m_flow variable */) ,-1000000000.0);
    if(!tmp111)
    {
      tmp113 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[332]/* r21.m_flow variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta114 = stringAppend(MMC_REFSTRINGLIT(tmp112),tmp113);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr21.m_flow >= -1000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta114));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",709,7,709,44,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr21.m_flow >= -1000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta114));
        }
      }
      tmp115 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2229
type: ALGORITHM

  assert(r21.Ttilde[1] >= 0.0, "Variable violating min constraint: 0.0 <= r21.Ttilde[1], has value: " + String(r21.Ttilde[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2229};
  modelica_boolean tmp116;
  static const MMC_DEFSTRINGLIT(tmp117,68,"Variable violating min constraint: 0.0 <= r21.Ttilde[1], has value: ");
  modelica_string tmp118;
  modelica_metatype tmpMeta119;
  static int tmp120 = 0;
  if(!tmp120)
  {
    tmp116 = GreaterEq((data->localData[0]->realVars[7]/* r21.Ttilde[1] STATE(1) */) ,0.0);
    if(!tmp116)
    {
      tmp118 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[7]/* r21.Ttilde[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta119 = stringAppend(MMC_REFSTRINGLIT(tmp117),tmp118);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr21.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta119));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr21.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta119));
        }
      }
      tmp120 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2230
type: ALGORITHM

  assert(r21.Ttilde[2] >= 0.0, "Variable violating min constraint: 0.0 <= r21.Ttilde[2], has value: " + String(r21.Ttilde[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2230};
  modelica_boolean tmp121;
  static const MMC_DEFSTRINGLIT(tmp122,68,"Variable violating min constraint: 0.0 <= r21.Ttilde[2], has value: ");
  modelica_string tmp123;
  modelica_metatype tmpMeta124;
  static int tmp125 = 0;
  if(!tmp125)
  {
    tmp121 = GreaterEq((data->localData[0]->realVars[8]/* r21.Ttilde[2] STATE(1) */) ,0.0);
    if(!tmp121)
    {
      tmp123 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[8]/* r21.Ttilde[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta124 = stringAppend(MMC_REFSTRINGLIT(tmp122),tmp123);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr21.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta124));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr21.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta124));
        }
      }
      tmp125 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2231
type: ALGORITHM

  assert(r21.Twall[1] >= 0.0, "Variable violating min constraint: 0.0 <= r21.Twall[1], has value: " + String(r21.Twall[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2231};
  modelica_boolean tmp126;
  static const MMC_DEFSTRINGLIT(tmp127,67,"Variable violating min constraint: 0.0 <= r21.Twall[1], has value: ");
  modelica_string tmp128;
  modelica_metatype tmpMeta129;
  static int tmp130 = 0;
  if(!tmp130)
  {
    tmp126 = GreaterEq((data->localData[0]->realVars[9]/* r21.Twall[1] STATE(1) */) ,0.0);
    if(!tmp126)
    {
      tmp128 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[9]/* r21.Twall[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta129 = stringAppend(MMC_REFSTRINGLIT(tmp127),tmp128);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr21.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta129));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr21.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta129));
        }
      }
      tmp130 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2232
type: ALGORITHM

  assert(r21.Twall[2] >= 0.0, "Variable violating min constraint: 0.0 <= r21.Twall[2], has value: " + String(r21.Twall[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2232};
  modelica_boolean tmp131;
  static const MMC_DEFSTRINGLIT(tmp132,67,"Variable violating min constraint: 0.0 <= r21.Twall[2], has value: ");
  modelica_string tmp133;
  modelica_metatype tmpMeta134;
  static int tmp135 = 0;
  if(!tmp135)
  {
    tmp131 = GreaterEq((data->localData[0]->realVars[10]/* r21.Twall[2] STATE(1) */) ,0.0);
    if(!tmp131)
    {
      tmp133 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[10]/* r21.Twall[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta134 = stringAppend(MMC_REFSTRINGLIT(tmp132),tmp133);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr21.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta134));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr21.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta134));
        }
      }
      tmp135 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2233
type: ALGORITHM

  assert(r21.T[1] >= 0.0, "Variable violating min constraint: 0.0 <= r21.T[1], has value: " + String(r21.T[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2233};
  modelica_boolean tmp136;
  static const MMC_DEFSTRINGLIT(tmp137,63,"Variable violating min constraint: 0.0 <= r21.T[1], has value: ");
  modelica_string tmp138;
  modelica_metatype tmpMeta139;
  static int tmp140 = 0;
  if(!tmp140)
  {
    tmp136 = GreaterEq((data->localData[0]->realVars[328]/* r21.T[1] variable */) ,0.0);
    if(!tmp136)
    {
      tmp138 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[328]/* r21.T[1] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta139 = stringAppend(MMC_REFSTRINGLIT(tmp137),tmp138);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr21.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta139));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr21.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta139));
        }
      }
      tmp140 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2234
type: ALGORITHM

  assert(r21.T[2] >= 0.0, "Variable violating min constraint: 0.0 <= r21.T[2], has value: " + String(r21.T[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2234};
  modelica_boolean tmp141;
  static const MMC_DEFSTRINGLIT(tmp142,63,"Variable violating min constraint: 0.0 <= r21.T[2], has value: ");
  modelica_string tmp143;
  modelica_metatype tmpMeta144;
  static int tmp145 = 0;
  if(!tmp145)
  {
    tmp141 = GreaterEq((data->localData[0]->realVars[329]/* r21.T[2] variable */) ,0.0);
    if(!tmp141)
    {
      tmp143 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[329]/* r21.T[2] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta144 = stringAppend(MMC_REFSTRINGLIT(tmp142),tmp143);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr21.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta144));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr21.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta144));
        }
      }
      tmp145 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2235
type: ALGORITHM

  assert(r21.T[3] >= 0.0, "Variable violating min constraint: 0.0 <= r21.T[3], has value: " + String(r21.T[3], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2235};
  modelica_boolean tmp146;
  static const MMC_DEFSTRINGLIT(tmp147,63,"Variable violating min constraint: 0.0 <= r21.T[3], has value: ");
  modelica_string tmp148;
  modelica_metatype tmpMeta149;
  static int tmp150 = 0;
  if(!tmp150)
  {
    tmp146 = GreaterEq((data->localData[0]->realVars[330]/* r21.T[3] variable */) ,0.0);
    if(!tmp146)
    {
      tmp148 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[330]/* r21.T[3] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta149 = stringAppend(MMC_REFSTRINGLIT(tmp147),tmp148);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr21.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta149));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr21.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta149));
        }
      }
      tmp150 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2236
type: ALGORITHM

  assert(mfr_load[1] >= 0.0, "Variable violating min constraint: 0.0 <= mfr_load[1], has value: " + String(mfr_load[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2236};
  modelica_boolean tmp151;
  static const MMC_DEFSTRINGLIT(tmp152,66,"Variable violating min constraint: 0.0 <= mfr_load[1], has value: ");
  modelica_string tmp153;
  modelica_metatype tmpMeta154;
  static int tmp155 = 0;
  if(!tmp155)
  {
    tmp151 = GreaterEq((data->localData[0]->realVars[303]/* mfr_load[1] variable */) ,0.0);
    if(!tmp151)
    {
      tmp153 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[303]/* mfr_load[1] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta154 = stringAppend(MMC_REFSTRINGLIT(tmp152),tmp153);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nmfr_load[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta154));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",2662,7,2663,208,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nmfr_load[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta154));
        }
      }
      tmp155 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2237
type: ALGORITHM

  assert(mfr_load[2] >= 0.0, "Variable violating min constraint: 0.0 <= mfr_load[2], has value: " + String(mfr_load[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2237};
  modelica_boolean tmp156;
  static const MMC_DEFSTRINGLIT(tmp157,66,"Variable violating min constraint: 0.0 <= mfr_load[2], has value: ");
  modelica_string tmp158;
  modelica_metatype tmpMeta159;
  static int tmp160 = 0;
  if(!tmp160)
  {
    tmp156 = GreaterEq((data->localData[0]->realVars[304]/* mfr_load[2] variable */) ,0.0);
    if(!tmp156)
    {
      tmp158 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[304]/* mfr_load[2] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta159 = stringAppend(MMC_REFSTRINGLIT(tmp157),tmp158);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nmfr_load[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta159));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",2662,7,2663,208,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nmfr_load[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta159));
        }
      }
      tmp160 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2238
type: ALGORITHM

  assert(mfr_load[3] >= 0.0, "Variable violating min constraint: 0.0 <= mfr_load[3], has value: " + String(mfr_load[3], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2238};
  modelica_boolean tmp161;
  static const MMC_DEFSTRINGLIT(tmp162,66,"Variable violating min constraint: 0.0 <= mfr_load[3], has value: ");
  modelica_string tmp163;
  modelica_metatype tmpMeta164;
  static int tmp165 = 0;
  if(!tmp165)
  {
    tmp161 = GreaterEq((data->localData[0]->realVars[305]/* mfr_load[3] variable */) ,0.0);
    if(!tmp161)
    {
      tmp163 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[305]/* mfr_load[3] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta164 = stringAppend(MMC_REFSTRINGLIT(tmp162),tmp163);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nmfr_load[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta164));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",2662,7,2663,208,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nmfr_load[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta164));
        }
      }
      tmp165 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2239
type: ALGORITHM

  assert(mfr_load[4] >= 0.0, "Variable violating min constraint: 0.0 <= mfr_load[4], has value: " + String(mfr_load[4], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2239};
  modelica_boolean tmp166;
  static const MMC_DEFSTRINGLIT(tmp167,66,"Variable violating min constraint: 0.0 <= mfr_load[4], has value: ");
  modelica_string tmp168;
  modelica_metatype tmpMeta169;
  static int tmp170 = 0;
  if(!tmp170)
  {
    tmp166 = GreaterEq((data->localData[0]->realVars[306]/* mfr_load[4] variable */) ,0.0);
    if(!tmp166)
    {
      tmp168 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[306]/* mfr_load[4] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta169 = stringAppend(MMC_REFSTRINGLIT(tmp167),tmp168);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nmfr_load[4] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta169));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",2662,7,2663,208,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nmfr_load[4] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta169));
        }
      }
      tmp170 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2240
type: ALGORITHM

  assert(mfr_load[5] >= 0.0, "Variable violating min constraint: 0.0 <= mfr_load[5], has value: " + String(mfr_load[5], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2240};
  modelica_boolean tmp171;
  static const MMC_DEFSTRINGLIT(tmp172,66,"Variable violating min constraint: 0.0 <= mfr_load[5], has value: ");
  modelica_string tmp173;
  modelica_metatype tmpMeta174;
  static int tmp175 = 0;
  if(!tmp175)
  {
    tmp171 = GreaterEq((data->localData[0]->realVars[307]/* mfr_load[5] variable */) ,0.0);
    if(!tmp171)
    {
      tmp173 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[307]/* mfr_load[5] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta174 = stringAppend(MMC_REFSTRINGLIT(tmp172),tmp173);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nmfr_load[5] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta174));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",2662,7,2663,208,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nmfr_load[5] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta174));
        }
      }
      tmp175 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2241
type: ALGORITHM

  assert(mfr_mandata >= 0.0, "Variable violating min constraint: 0.0 <= mfr_mandata, has value: " + String(mfr_mandata, "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2241};
  modelica_boolean tmp176;
  static const MMC_DEFSTRINGLIT(tmp177,66,"Variable violating min constraint: 0.0 <= mfr_mandata, has value: ");
  modelica_string tmp178;
  modelica_metatype tmpMeta179;
  static int tmp180 = 0;
  if(!tmp180)
  {
    tmp176 = GreaterEq((data->localData[0]->realVars[308]/* mfr_mandata variable */) ,0.0);
    if(!tmp176)
    {
      tmp178 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[308]/* mfr_mandata variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta179 = stringAppend(MMC_REFSTRINGLIT(tmp177),tmp178);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nmfr_mandata >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta179));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",2670,7,2671,203,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nmfr_mandata >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta179));
        }
      }
      tmp180 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2242
type: ALGORITHM

  assert(mfr_ritorno >= 0.0, "Variable violating min constraint: 0.0 <= mfr_ritorno, has value: " + String(mfr_ritorno, "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2242};
  modelica_boolean tmp181;
  static const MMC_DEFSTRINGLIT(tmp182,66,"Variable violating min constraint: 0.0 <= mfr_ritorno, has value: ");
  modelica_string tmp183;
  modelica_metatype tmpMeta184;
  static int tmp185 = 0;
  if(!tmp185)
  {
    tmp181 = GreaterEq((data->localData[0]->realVars[310]/* mfr_ritorno variable */) ,0.0);
    if(!tmp181)
    {
      tmp183 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[310]/* mfr_ritorno variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta184 = stringAppend(MMC_REFSTRINGLIT(tmp182),tmp183);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nmfr_ritorno >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta184));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",2674,7,2675,207,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nmfr_ritorno >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta184));
        }
      }
      tmp185 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2243
type: ALGORITHM

  assert(s34.m_flow >= -1000000000.0, "Variable violating min constraint: -1000000000.0 <= s34.m_flow, has value: " + String(s34.m_flow, "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2243};
  modelica_boolean tmp186;
  static const MMC_DEFSTRINGLIT(tmp187,75,"Variable violating min constraint: -1000000000.0 <= s34.m_flow, has value: ");
  modelica_string tmp188;
  modelica_metatype tmpMeta189;
  static int tmp190 = 0;
  if(!tmp190)
  {
    tmp186 = GreaterEq((data->localData[0]->realVars[487]/* s34.m_flow variable */) ,-1000000000.0);
    if(!tmp186)
    {
      tmp188 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[487]/* s34.m_flow variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta189 = stringAppend(MMC_REFSTRINGLIT(tmp187),tmp188);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns34.m_flow >= -1000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta189));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",709,7,709,44,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns34.m_flow >= -1000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta189));
        }
      }
      tmp190 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2244
type: ALGORITHM

  assert(s34.Ttilde[1] >= 0.0, "Variable violating min constraint: 0.0 <= s34.Ttilde[1], has value: " + String(s34.Ttilde[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2244};
  modelica_boolean tmp191;
  static const MMC_DEFSTRINGLIT(tmp192,68,"Variable violating min constraint: 0.0 <= s34.Ttilde[1], has value: ");
  modelica_string tmp193;
  modelica_metatype tmpMeta194;
  static int tmp195 = 0;
  if(!tmp195)
  {
    tmp191 = GreaterEq((data->localData[0]->realVars[55]/* s34.Ttilde[1] STATE(1) */) ,0.0);
    if(!tmp191)
    {
      tmp193 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[55]/* s34.Ttilde[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta194 = stringAppend(MMC_REFSTRINGLIT(tmp192),tmp193);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns34.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta194));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns34.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta194));
        }
      }
      tmp195 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2245
type: ALGORITHM

  assert(s34.Ttilde[2] >= 0.0, "Variable violating min constraint: 0.0 <= s34.Ttilde[2], has value: " + String(s34.Ttilde[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2245};
  modelica_boolean tmp196;
  static const MMC_DEFSTRINGLIT(tmp197,68,"Variable violating min constraint: 0.0 <= s34.Ttilde[2], has value: ");
  modelica_string tmp198;
  modelica_metatype tmpMeta199;
  static int tmp200 = 0;
  if(!tmp200)
  {
    tmp196 = GreaterEq((data->localData[0]->realVars[56]/* s34.Ttilde[2] STATE(1) */) ,0.0);
    if(!tmp196)
    {
      tmp198 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[56]/* s34.Ttilde[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta199 = stringAppend(MMC_REFSTRINGLIT(tmp197),tmp198);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns34.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta199));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns34.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta199));
        }
      }
      tmp200 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2246
type: ALGORITHM

  assert(s34.Twall[1] >= 0.0, "Variable violating min constraint: 0.0 <= s34.Twall[1], has value: " + String(s34.Twall[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2246};
  modelica_boolean tmp201;
  static const MMC_DEFSTRINGLIT(tmp202,67,"Variable violating min constraint: 0.0 <= s34.Twall[1], has value: ");
  modelica_string tmp203;
  modelica_metatype tmpMeta204;
  static int tmp205 = 0;
  if(!tmp205)
  {
    tmp201 = GreaterEq((data->localData[0]->realVars[57]/* s34.Twall[1] STATE(1) */) ,0.0);
    if(!tmp201)
    {
      tmp203 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[57]/* s34.Twall[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta204 = stringAppend(MMC_REFSTRINGLIT(tmp202),tmp203);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns34.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta204));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns34.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta204));
        }
      }
      tmp205 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2247
type: ALGORITHM

  assert(s34.Twall[2] >= 0.0, "Variable violating min constraint: 0.0 <= s34.Twall[2], has value: " + String(s34.Twall[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2247};
  modelica_boolean tmp206;
  static const MMC_DEFSTRINGLIT(tmp207,67,"Variable violating min constraint: 0.0 <= s34.Twall[2], has value: ");
  modelica_string tmp208;
  modelica_metatype tmpMeta209;
  static int tmp210 = 0;
  if(!tmp210)
  {
    tmp206 = GreaterEq((data->localData[0]->realVars[58]/* s34.Twall[2] STATE(1) */) ,0.0);
    if(!tmp206)
    {
      tmp208 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[58]/* s34.Twall[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta209 = stringAppend(MMC_REFSTRINGLIT(tmp207),tmp208);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns34.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta209));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns34.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta209));
        }
      }
      tmp210 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2248
type: ALGORITHM

  assert(s34.T[1] >= 0.0, "Variable violating min constraint: 0.0 <= s34.T[1], has value: " + String(s34.T[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2248};
  modelica_boolean tmp211;
  static const MMC_DEFSTRINGLIT(tmp212,63,"Variable violating min constraint: 0.0 <= s34.T[1], has value: ");
  modelica_string tmp213;
  modelica_metatype tmpMeta214;
  static int tmp215 = 0;
  if(!tmp215)
  {
    tmp211 = GreaterEq((data->localData[0]->realVars[483]/* s34.T[1] variable */) ,0.0);
    if(!tmp211)
    {
      tmp213 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[483]/* s34.T[1] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta214 = stringAppend(MMC_REFSTRINGLIT(tmp212),tmp213);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns34.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta214));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns34.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta214));
        }
      }
      tmp215 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2249
type: ALGORITHM

  assert(s34.T[2] >= 0.0, "Variable violating min constraint: 0.0 <= s34.T[2], has value: " + String(s34.T[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2249};
  modelica_boolean tmp216;
  static const MMC_DEFSTRINGLIT(tmp217,63,"Variable violating min constraint: 0.0 <= s34.T[2], has value: ");
  modelica_string tmp218;
  modelica_metatype tmpMeta219;
  static int tmp220 = 0;
  if(!tmp220)
  {
    tmp216 = GreaterEq((data->localData[0]->realVars[484]/* s34.T[2] variable */) ,0.0);
    if(!tmp216)
    {
      tmp218 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[484]/* s34.T[2] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta219 = stringAppend(MMC_REFSTRINGLIT(tmp217),tmp218);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns34.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta219));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns34.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta219));
        }
      }
      tmp220 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2250
type: ALGORITHM

  assert(s34.T[3] >= 0.0, "Variable violating min constraint: 0.0 <= s34.T[3], has value: " + String(s34.T[3], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2250};
  modelica_boolean tmp221;
  static const MMC_DEFSTRINGLIT(tmp222,63,"Variable violating min constraint: 0.0 <= s34.T[3], has value: ");
  modelica_string tmp223;
  modelica_metatype tmpMeta224;
  static int tmp225 = 0;
  if(!tmp225)
  {
    tmp221 = GreaterEq((data->localData[0]->realVars[485]/* s34.T[3] variable */) ,0.0);
    if(!tmp221)
    {
      tmp223 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[485]/* s34.T[3] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta224 = stringAppend(MMC_REFSTRINGLIT(tmp222),tmp223);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns34.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta224));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns34.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta224));
        }
      }
      tmp225 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2251
type: ALGORITHM

  assert(r43.m_flow >= -1000000000.0, "Variable violating min constraint: -1000000000.0 <= r43.m_flow, has value: " + String(r43.m_flow, "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2251};
  modelica_boolean tmp226;
  static const MMC_DEFSTRINGLIT(tmp227,75,"Variable violating min constraint: -1000000000.0 <= r43.m_flow, has value: ");
  modelica_string tmp228;
  modelica_metatype tmpMeta229;
  static int tmp230 = 0;
  if(!tmp230)
  {
    tmp226 = GreaterEq((data->localData[0]->realVars[358]/* r43.m_flow variable */) ,-1000000000.0);
    if(!tmp226)
    {
      tmp228 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[358]/* r43.m_flow variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta229 = stringAppend(MMC_REFSTRINGLIT(tmp227),tmp228);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr43.m_flow >= -1000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta229));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",709,7,709,44,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr43.m_flow >= -1000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta229));
        }
      }
      tmp230 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2252
type: ALGORITHM

  assert(r43.Ttilde[1] >= 0.0, "Variable violating min constraint: 0.0 <= r43.Ttilde[1], has value: " + String(r43.Ttilde[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2252};
  modelica_boolean tmp231;
  static const MMC_DEFSTRINGLIT(tmp232,68,"Variable violating min constraint: 0.0 <= r43.Ttilde[1], has value: ");
  modelica_string tmp233;
  modelica_metatype tmpMeta234;
  static int tmp235 = 0;
  if(!tmp235)
  {
    tmp231 = GreaterEq((data->localData[0]->realVars[15]/* r43.Ttilde[1] STATE(1) */) ,0.0);
    if(!tmp231)
    {
      tmp233 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[15]/* r43.Ttilde[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta234 = stringAppend(MMC_REFSTRINGLIT(tmp232),tmp233);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr43.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta234));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr43.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta234));
        }
      }
      tmp235 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2253
type: ALGORITHM

  assert(r43.Ttilde[2] >= 0.0, "Variable violating min constraint: 0.0 <= r43.Ttilde[2], has value: " + String(r43.Ttilde[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2253};
  modelica_boolean tmp236;
  static const MMC_DEFSTRINGLIT(tmp237,68,"Variable violating min constraint: 0.0 <= r43.Ttilde[2], has value: ");
  modelica_string tmp238;
  modelica_metatype tmpMeta239;
  static int tmp240 = 0;
  if(!tmp240)
  {
    tmp236 = GreaterEq((data->localData[0]->realVars[16]/* r43.Ttilde[2] STATE(1) */) ,0.0);
    if(!tmp236)
    {
      tmp238 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[16]/* r43.Ttilde[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta239 = stringAppend(MMC_REFSTRINGLIT(tmp237),tmp238);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr43.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta239));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr43.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta239));
        }
      }
      tmp240 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2254
type: ALGORITHM

  assert(r43.Twall[1] >= 0.0, "Variable violating min constraint: 0.0 <= r43.Twall[1], has value: " + String(r43.Twall[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2254};
  modelica_boolean tmp241;
  static const MMC_DEFSTRINGLIT(tmp242,67,"Variable violating min constraint: 0.0 <= r43.Twall[1], has value: ");
  modelica_string tmp243;
  modelica_metatype tmpMeta244;
  static int tmp245 = 0;
  if(!tmp245)
  {
    tmp241 = GreaterEq((data->localData[0]->realVars[17]/* r43.Twall[1] STATE(1) */) ,0.0);
    if(!tmp241)
    {
      tmp243 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[17]/* r43.Twall[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta244 = stringAppend(MMC_REFSTRINGLIT(tmp242),tmp243);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr43.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta244));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr43.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta244));
        }
      }
      tmp245 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2255
type: ALGORITHM

  assert(r43.Twall[2] >= 0.0, "Variable violating min constraint: 0.0 <= r43.Twall[2], has value: " + String(r43.Twall[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2255};
  modelica_boolean tmp246;
  static const MMC_DEFSTRINGLIT(tmp247,67,"Variable violating min constraint: 0.0 <= r43.Twall[2], has value: ");
  modelica_string tmp248;
  modelica_metatype tmpMeta249;
  static int tmp250 = 0;
  if(!tmp250)
  {
    tmp246 = GreaterEq((data->localData[0]->realVars[18]/* r43.Twall[2] STATE(1) */) ,0.0);
    if(!tmp246)
    {
      tmp248 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[18]/* r43.Twall[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta249 = stringAppend(MMC_REFSTRINGLIT(tmp247),tmp248);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr43.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta249));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr43.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta249));
        }
      }
      tmp250 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2256
type: ALGORITHM

  assert(r43.T[1] >= 0.0, "Variable violating min constraint: 0.0 <= r43.T[1], has value: " + String(r43.T[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2256};
  modelica_boolean tmp251;
  static const MMC_DEFSTRINGLIT(tmp252,63,"Variable violating min constraint: 0.0 <= r43.T[1], has value: ");
  modelica_string tmp253;
  modelica_metatype tmpMeta254;
  static int tmp255 = 0;
  if(!tmp255)
  {
    tmp251 = GreaterEq((data->localData[0]->realVars[354]/* r43.T[1] variable */) ,0.0);
    if(!tmp251)
    {
      tmp253 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[354]/* r43.T[1] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta254 = stringAppend(MMC_REFSTRINGLIT(tmp252),tmp253);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr43.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta254));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr43.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta254));
        }
      }
      tmp255 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2257
type: ALGORITHM

  assert(r43.T[2] >= 0.0, "Variable violating min constraint: 0.0 <= r43.T[2], has value: " + String(r43.T[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2257};
  modelica_boolean tmp256;
  static const MMC_DEFSTRINGLIT(tmp257,63,"Variable violating min constraint: 0.0 <= r43.T[2], has value: ");
  modelica_string tmp258;
  modelica_metatype tmpMeta259;
  static int tmp260 = 0;
  if(!tmp260)
  {
    tmp256 = GreaterEq((data->localData[0]->realVars[355]/* r43.T[2] variable */) ,0.0);
    if(!tmp256)
    {
      tmp258 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[355]/* r43.T[2] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta259 = stringAppend(MMC_REFSTRINGLIT(tmp257),tmp258);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr43.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta259));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr43.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta259));
        }
      }
      tmp260 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2258
type: ALGORITHM

  assert(r43.T[3] >= 0.0, "Variable violating min constraint: 0.0 <= r43.T[3], has value: " + String(r43.T[3], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2258};
  modelica_boolean tmp261;
  static const MMC_DEFSTRINGLIT(tmp262,63,"Variable violating min constraint: 0.0 <= r43.T[3], has value: ");
  modelica_string tmp263;
  modelica_metatype tmpMeta264;
  static int tmp265 = 0;
  if(!tmp265)
  {
    tmp261 = GreaterEq((data->localData[0]->realVars[356]/* r43.T[3] variable */) ,0.0);
    if(!tmp261)
    {
      tmp263 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[356]/* r43.T[3] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta264 = stringAppend(MMC_REFSTRINGLIT(tmp262),tmp263);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr43.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta264));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr43.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta264));
        }
      }
      tmp265 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2259
type: ALGORITHM

  assert(load2.loadValveControl.y >= 0.0 and load2.loadValveControl.y <= 1.0, "Variable violating min/max constraint: 0.0 <= load2.loadValveControl.y <= 1.0, has value: " + String(load2.loadValveControl.y, "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2259};
  modelica_boolean tmp266;
  modelica_boolean tmp267;
  static const MMC_DEFSTRINGLIT(tmp268,90,"Variable violating min/max constraint: 0.0 <= load2.loadValveControl.y <= 1.0, has value: ");
  modelica_string tmp269;
  modelica_metatype tmpMeta270;
  static int tmp271 = 0;
  if(!tmp271)
  {
    tmp266 = GreaterEq((data->localData[0]->realVars[259]/* load2.loadValveControl.y variable */) ,0.0);
    tmp267 = LessEq((data->localData[0]->realVars[259]/* load2.loadValveControl.y variable */) ,1.0);
    if(!(tmp266 && tmp267))
    {
      tmp269 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[259]/* load2.loadValveControl.y variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta270 = stringAppend(MMC_REFSTRINGLIT(tmp268),tmp269);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload2.loadValveControl.y >= 0.0 and load2.loadValveControl.y <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta270));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Interfaces.mo",501,5,502,56,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload2.loadValveControl.y >= 0.0 and load2.loadValveControl.y <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta270));
        }
      }
      tmp271 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2260
type: ALGORITHM

  assert(r32.m_flow >= -1000000000.0, "Variable violating min constraint: -1000000000.0 <= r32.m_flow, has value: " + String(r32.m_flow, "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2260};
  modelica_boolean tmp272;
  static const MMC_DEFSTRINGLIT(tmp273,75,"Variable violating min constraint: -1000000000.0 <= r32.m_flow, has value: ");
  modelica_string tmp274;
  modelica_metatype tmpMeta275;
  static int tmp276 = 0;
  if(!tmp276)
  {
    tmp272 = GreaterEq((data->localData[0]->realVars[345]/* r32.m_flow variable */) ,-1000000000.0);
    if(!tmp272)
    {
      tmp274 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[345]/* r32.m_flow variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta275 = stringAppend(MMC_REFSTRINGLIT(tmp273),tmp274);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr32.m_flow >= -1000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta275));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",709,7,709,44,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr32.m_flow >= -1000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta275));
        }
      }
      tmp276 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2261
type: ALGORITHM

  assert(r32.Ttilde[1] >= 0.0, "Variable violating min constraint: 0.0 <= r32.Ttilde[1], has value: " + String(r32.Ttilde[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2261};
  modelica_boolean tmp277;
  static const MMC_DEFSTRINGLIT(tmp278,68,"Variable violating min constraint: 0.0 <= r32.Ttilde[1], has value: ");
  modelica_string tmp279;
  modelica_metatype tmpMeta280;
  static int tmp281 = 0;
  if(!tmp281)
  {
    tmp277 = GreaterEq((data->localData[0]->realVars[11]/* r32.Ttilde[1] STATE(1) */) ,0.0);
    if(!tmp277)
    {
      tmp279 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[11]/* r32.Ttilde[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta280 = stringAppend(MMC_REFSTRINGLIT(tmp278),tmp279);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr32.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta280));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr32.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta280));
        }
      }
      tmp281 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2262
type: ALGORITHM

  assert(r32.Ttilde[2] >= 0.0, "Variable violating min constraint: 0.0 <= r32.Ttilde[2], has value: " + String(r32.Ttilde[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2262};
  modelica_boolean tmp282;
  static const MMC_DEFSTRINGLIT(tmp283,68,"Variable violating min constraint: 0.0 <= r32.Ttilde[2], has value: ");
  modelica_string tmp284;
  modelica_metatype tmpMeta285;
  static int tmp286 = 0;
  if(!tmp286)
  {
    tmp282 = GreaterEq((data->localData[0]->realVars[12]/* r32.Ttilde[2] STATE(1) */) ,0.0);
    if(!tmp282)
    {
      tmp284 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[12]/* r32.Ttilde[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta285 = stringAppend(MMC_REFSTRINGLIT(tmp283),tmp284);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr32.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta285));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr32.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta285));
        }
      }
      tmp286 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2263
type: ALGORITHM

  assert(r32.Twall[1] >= 0.0, "Variable violating min constraint: 0.0 <= r32.Twall[1], has value: " + String(r32.Twall[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2263};
  modelica_boolean tmp287;
  static const MMC_DEFSTRINGLIT(tmp288,67,"Variable violating min constraint: 0.0 <= r32.Twall[1], has value: ");
  modelica_string tmp289;
  modelica_metatype tmpMeta290;
  static int tmp291 = 0;
  if(!tmp291)
  {
    tmp287 = GreaterEq((data->localData[0]->realVars[13]/* r32.Twall[1] STATE(1) */) ,0.0);
    if(!tmp287)
    {
      tmp289 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[13]/* r32.Twall[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta290 = stringAppend(MMC_REFSTRINGLIT(tmp288),tmp289);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr32.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta290));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr32.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta290));
        }
      }
      tmp291 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2264
type: ALGORITHM

  assert(r32.Twall[2] >= 0.0, "Variable violating min constraint: 0.0 <= r32.Twall[2], has value: " + String(r32.Twall[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2264};
  modelica_boolean tmp292;
  static const MMC_DEFSTRINGLIT(tmp293,67,"Variable violating min constraint: 0.0 <= r32.Twall[2], has value: ");
  modelica_string tmp294;
  modelica_metatype tmpMeta295;
  static int tmp296 = 0;
  if(!tmp296)
  {
    tmp292 = GreaterEq((data->localData[0]->realVars[14]/* r32.Twall[2] STATE(1) */) ,0.0);
    if(!tmp292)
    {
      tmp294 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[14]/* r32.Twall[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta295 = stringAppend(MMC_REFSTRINGLIT(tmp293),tmp294);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr32.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta295));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr32.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta295));
        }
      }
      tmp296 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2265
type: ALGORITHM

  assert(r32.T[1] >= 0.0, "Variable violating min constraint: 0.0 <= r32.T[1], has value: " + String(r32.T[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2265};
  modelica_boolean tmp297;
  static const MMC_DEFSTRINGLIT(tmp298,63,"Variable violating min constraint: 0.0 <= r32.T[1], has value: ");
  modelica_string tmp299;
  modelica_metatype tmpMeta300;
  static int tmp301 = 0;
  if(!tmp301)
  {
    tmp297 = GreaterEq((data->localData[0]->realVars[341]/* r32.T[1] variable */) ,0.0);
    if(!tmp297)
    {
      tmp299 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[341]/* r32.T[1] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta300 = stringAppend(MMC_REFSTRINGLIT(tmp298),tmp299);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr32.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta300));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr32.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta300));
        }
      }
      tmp301 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2266
type: ALGORITHM

  assert(r32.T[2] >= 0.0, "Variable violating min constraint: 0.0 <= r32.T[2], has value: " + String(r32.T[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2266};
  modelica_boolean tmp302;
  static const MMC_DEFSTRINGLIT(tmp303,63,"Variable violating min constraint: 0.0 <= r32.T[2], has value: ");
  modelica_string tmp304;
  modelica_metatype tmpMeta305;
  static int tmp306 = 0;
  if(!tmp306)
  {
    tmp302 = GreaterEq((data->localData[0]->realVars[342]/* r32.T[2] variable */) ,0.0);
    if(!tmp302)
    {
      tmp304 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[342]/* r32.T[2] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta305 = stringAppend(MMC_REFSTRINGLIT(tmp303),tmp304);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr32.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta305));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr32.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta305));
        }
      }
      tmp306 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2267
type: ALGORITHM

  assert(r32.T[3] >= 0.0, "Variable violating min constraint: 0.0 <= r32.T[3], has value: " + String(r32.T[3], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2267};
  modelica_boolean tmp307;
  static const MMC_DEFSTRINGLIT(tmp308,63,"Variable violating min constraint: 0.0 <= r32.T[3], has value: ");
  modelica_string tmp309;
  modelica_metatype tmpMeta310;
  static int tmp311 = 0;
  if(!tmp311)
  {
    tmp307 = GreaterEq((data->localData[0]->realVars[343]/* r32.T[3] variable */) ,0.0);
    if(!tmp307)
    {
      tmp309 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[343]/* r32.T[3] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta310 = stringAppend(MMC_REFSTRINGLIT(tmp308),tmp309);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr32.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta310));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr32.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta310));
        }
      }
      tmp311 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2268
type: ALGORITHM

  assert(s23.m_flow >= -1000000000.0, "Variable violating min constraint: -1000000000.0 <= s23.m_flow, has value: " + String(s23.m_flow, "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2268};
  modelica_boolean tmp312;
  static const MMC_DEFSTRINGLIT(tmp313,75,"Variable violating min constraint: -1000000000.0 <= s23.m_flow, has value: ");
  modelica_string tmp314;
  modelica_metatype tmpMeta315;
  static int tmp316 = 0;
  if(!tmp316)
  {
    tmp312 = GreaterEq((data->localData[0]->realVars[474]/* s23.m_flow variable */) ,-1000000000.0);
    if(!tmp312)
    {
      tmp314 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[474]/* s23.m_flow variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta315 = stringAppend(MMC_REFSTRINGLIT(tmp313),tmp314);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns23.m_flow >= -1000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta315));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",709,7,709,44,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns23.m_flow >= -1000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta315));
        }
      }
      tmp316 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2269
type: ALGORITHM

  assert(s23.Ttilde[1] >= 0.0, "Variable violating min constraint: 0.0 <= s23.Ttilde[1], has value: " + String(s23.Ttilde[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2269};
  modelica_boolean tmp317;
  static const MMC_DEFSTRINGLIT(tmp318,68,"Variable violating min constraint: 0.0 <= s23.Ttilde[1], has value: ");
  modelica_string tmp319;
  modelica_metatype tmpMeta320;
  static int tmp321 = 0;
  if(!tmp321)
  {
    tmp317 = GreaterEq((data->localData[0]->realVars[51]/* s23.Ttilde[1] STATE(1) */) ,0.0);
    if(!tmp317)
    {
      tmp319 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[51]/* s23.Ttilde[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta320 = stringAppend(MMC_REFSTRINGLIT(tmp318),tmp319);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns23.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta320));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns23.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta320));
        }
      }
      tmp321 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2270
type: ALGORITHM

  assert(s23.Ttilde[2] >= 0.0, "Variable violating min constraint: 0.0 <= s23.Ttilde[2], has value: " + String(s23.Ttilde[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2270};
  modelica_boolean tmp322;
  static const MMC_DEFSTRINGLIT(tmp323,68,"Variable violating min constraint: 0.0 <= s23.Ttilde[2], has value: ");
  modelica_string tmp324;
  modelica_metatype tmpMeta325;
  static int tmp326 = 0;
  if(!tmp326)
  {
    tmp322 = GreaterEq((data->localData[0]->realVars[52]/* s23.Ttilde[2] STATE(1) */) ,0.0);
    if(!tmp322)
    {
      tmp324 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[52]/* s23.Ttilde[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta325 = stringAppend(MMC_REFSTRINGLIT(tmp323),tmp324);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns23.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta325));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns23.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta325));
        }
      }
      tmp326 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2271
type: ALGORITHM

  assert(s23.Twall[1] >= 0.0, "Variable violating min constraint: 0.0 <= s23.Twall[1], has value: " + String(s23.Twall[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2271};
  modelica_boolean tmp327;
  static const MMC_DEFSTRINGLIT(tmp328,67,"Variable violating min constraint: 0.0 <= s23.Twall[1], has value: ");
  modelica_string tmp329;
  modelica_metatype tmpMeta330;
  static int tmp331 = 0;
  if(!tmp331)
  {
    tmp327 = GreaterEq((data->localData[0]->realVars[53]/* s23.Twall[1] STATE(1) */) ,0.0);
    if(!tmp327)
    {
      tmp329 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[53]/* s23.Twall[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta330 = stringAppend(MMC_REFSTRINGLIT(tmp328),tmp329);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns23.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta330));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns23.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta330));
        }
      }
      tmp331 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2272
type: ALGORITHM

  assert(s23.Twall[2] >= 0.0, "Variable violating min constraint: 0.0 <= s23.Twall[2], has value: " + String(s23.Twall[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2272};
  modelica_boolean tmp332;
  static const MMC_DEFSTRINGLIT(tmp333,67,"Variable violating min constraint: 0.0 <= s23.Twall[2], has value: ");
  modelica_string tmp334;
  modelica_metatype tmpMeta335;
  static int tmp336 = 0;
  if(!tmp336)
  {
    tmp332 = GreaterEq((data->localData[0]->realVars[54]/* s23.Twall[2] STATE(1) */) ,0.0);
    if(!tmp332)
    {
      tmp334 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[54]/* s23.Twall[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta335 = stringAppend(MMC_REFSTRINGLIT(tmp333),tmp334);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns23.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta335));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns23.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta335));
        }
      }
      tmp336 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2273
type: ALGORITHM

  assert(s23.T[1] >= 0.0, "Variable violating min constraint: 0.0 <= s23.T[1], has value: " + String(s23.T[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2273};
  modelica_boolean tmp337;
  static const MMC_DEFSTRINGLIT(tmp338,63,"Variable violating min constraint: 0.0 <= s23.T[1], has value: ");
  modelica_string tmp339;
  modelica_metatype tmpMeta340;
  static int tmp341 = 0;
  if(!tmp341)
  {
    tmp337 = GreaterEq((data->localData[0]->realVars[470]/* s23.T[1] variable */) ,0.0);
    if(!tmp337)
    {
      tmp339 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[470]/* s23.T[1] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta340 = stringAppend(MMC_REFSTRINGLIT(tmp338),tmp339);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns23.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta340));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns23.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta340));
        }
      }
      tmp341 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2274
type: ALGORITHM

  assert(s23.T[2] >= 0.0, "Variable violating min constraint: 0.0 <= s23.T[2], has value: " + String(s23.T[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2274};
  modelica_boolean tmp342;
  static const MMC_DEFSTRINGLIT(tmp343,63,"Variable violating min constraint: 0.0 <= s23.T[2], has value: ");
  modelica_string tmp344;
  modelica_metatype tmpMeta345;
  static int tmp346 = 0;
  if(!tmp346)
  {
    tmp342 = GreaterEq((data->localData[0]->realVars[471]/* s23.T[2] variable */) ,0.0);
    if(!tmp342)
    {
      tmp344 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[471]/* s23.T[2] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta345 = stringAppend(MMC_REFSTRINGLIT(tmp343),tmp344);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns23.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta345));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns23.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta345));
        }
      }
      tmp346 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2275
type: ALGORITHM

  assert(s23.T[3] >= 0.0, "Variable violating min constraint: 0.0 <= s23.T[3], has value: " + String(s23.T[3], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2275};
  modelica_boolean tmp347;
  static const MMC_DEFSTRINGLIT(tmp348,63,"Variable violating min constraint: 0.0 <= s23.T[3], has value: ");
  modelica_string tmp349;
  modelica_metatype tmpMeta350;
  static int tmp351 = 0;
  if(!tmp351)
  {
    tmp347 = GreaterEq((data->localData[0]->realVars[472]/* s23.T[3] variable */) ,0.0);
    if(!tmp347)
    {
      tmp349 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[472]/* s23.T[3] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta350 = stringAppend(MMC_REFSTRINGLIT(tmp348),tmp349);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns23.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta350));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns23.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta350));
        }
      }
      tmp351 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2276
type: ALGORITHM

  assert(load3.loadValveControl.y >= 0.0 and load3.loadValveControl.y <= 1.0, "Variable violating min/max constraint: 0.0 <= load3.loadValveControl.y <= 1.0, has value: " + String(load3.loadValveControl.y, "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2276};
  modelica_boolean tmp352;
  modelica_boolean tmp353;
  static const MMC_DEFSTRINGLIT(tmp354,90,"Variable violating min/max constraint: 0.0 <= load3.loadValveControl.y <= 1.0, has value: ");
  modelica_string tmp355;
  modelica_metatype tmpMeta356;
  static int tmp357 = 0;
  if(!tmp357)
  {
    tmp352 = GreaterEq((data->localData[0]->realVars[273]/* load3.loadValveControl.y variable */) ,0.0);
    tmp353 = LessEq((data->localData[0]->realVars[273]/* load3.loadValveControl.y variable */) ,1.0);
    if(!(tmp352 && tmp353))
    {
      tmp355 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[273]/* load3.loadValveControl.y variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta356 = stringAppend(MMC_REFSTRINGLIT(tmp354),tmp355);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload3.loadValveControl.y >= 0.0 and load3.loadValveControl.y <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta356));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Interfaces.mo",501,5,502,56,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload3.loadValveControl.y >= 0.0 and load3.loadValveControl.y <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta356));
        }
      }
      tmp357 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2277
type: ALGORITHM

  assert(r54.Ttilde[1] >= 0.0, "Variable violating min constraint: 0.0 <= r54.Ttilde[1], has value: " + String(r54.Ttilde[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2277};
  modelica_boolean tmp358;
  static const MMC_DEFSTRINGLIT(tmp359,68,"Variable violating min constraint: 0.0 <= r54.Ttilde[1], has value: ");
  modelica_string tmp360;
  modelica_metatype tmpMeta361;
  static int tmp362 = 0;
  if(!tmp362)
  {
    tmp358 = GreaterEq((data->localData[0]->realVars[19]/* r54.Ttilde[1] STATE(1) */) ,0.0);
    if(!tmp358)
    {
      tmp360 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[19]/* r54.Ttilde[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta361 = stringAppend(MMC_REFSTRINGLIT(tmp359),tmp360);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr54.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta361));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr54.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta361));
        }
      }
      tmp362 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2278
type: ALGORITHM

  assert(r54.Ttilde[2] >= 0.0, "Variable violating min constraint: 0.0 <= r54.Ttilde[2], has value: " + String(r54.Ttilde[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2278};
  modelica_boolean tmp363;
  static const MMC_DEFSTRINGLIT(tmp364,68,"Variable violating min constraint: 0.0 <= r54.Ttilde[2], has value: ");
  modelica_string tmp365;
  modelica_metatype tmpMeta366;
  static int tmp367 = 0;
  if(!tmp367)
  {
    tmp363 = GreaterEq((data->localData[0]->realVars[20]/* r54.Ttilde[2] STATE(1) */) ,0.0);
    if(!tmp363)
    {
      tmp365 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[20]/* r54.Ttilde[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta366 = stringAppend(MMC_REFSTRINGLIT(tmp364),tmp365);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr54.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta366));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr54.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta366));
        }
      }
      tmp367 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2279
type: ALGORITHM

  assert(r54.Twall[1] >= 0.0, "Variable violating min constraint: 0.0 <= r54.Twall[1], has value: " + String(r54.Twall[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2279};
  modelica_boolean tmp368;
  static const MMC_DEFSTRINGLIT(tmp369,67,"Variable violating min constraint: 0.0 <= r54.Twall[1], has value: ");
  modelica_string tmp370;
  modelica_metatype tmpMeta371;
  static int tmp372 = 0;
  if(!tmp372)
  {
    tmp368 = GreaterEq((data->localData[0]->realVars[21]/* r54.Twall[1] STATE(1) */) ,0.0);
    if(!tmp368)
    {
      tmp370 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[21]/* r54.Twall[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta371 = stringAppend(MMC_REFSTRINGLIT(tmp369),tmp370);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr54.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta371));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr54.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta371));
        }
      }
      tmp372 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2280
type: ALGORITHM

  assert(r54.Twall[2] >= 0.0, "Variable violating min constraint: 0.0 <= r54.Twall[2], has value: " + String(r54.Twall[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2280};
  modelica_boolean tmp373;
  static const MMC_DEFSTRINGLIT(tmp374,67,"Variable violating min constraint: 0.0 <= r54.Twall[2], has value: ");
  modelica_string tmp375;
  modelica_metatype tmpMeta376;
  static int tmp377 = 0;
  if(!tmp377)
  {
    tmp373 = GreaterEq((data->localData[0]->realVars[22]/* r54.Twall[2] STATE(1) */) ,0.0);
    if(!tmp373)
    {
      tmp375 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[22]/* r54.Twall[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta376 = stringAppend(MMC_REFSTRINGLIT(tmp374),tmp375);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr54.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta376));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr54.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta376));
        }
      }
      tmp377 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2281
type: ALGORITHM

  assert(r54.T[1] >= 0.0, "Variable violating min constraint: 0.0 <= r54.T[1], has value: " + String(r54.T[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2281};
  modelica_boolean tmp378;
  static const MMC_DEFSTRINGLIT(tmp379,63,"Variable violating min constraint: 0.0 <= r54.T[1], has value: ");
  modelica_string tmp380;
  modelica_metatype tmpMeta381;
  static int tmp382 = 0;
  if(!tmp382)
  {
    tmp378 = GreaterEq((data->localData[0]->realVars[367]/* r54.T[1] variable */) ,0.0);
    if(!tmp378)
    {
      tmp380 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[367]/* r54.T[1] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta381 = stringAppend(MMC_REFSTRINGLIT(tmp379),tmp380);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr54.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta381));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr54.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta381));
        }
      }
      tmp382 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2282
type: ALGORITHM

  assert(r54.T[2] >= 0.0, "Variable violating min constraint: 0.0 <= r54.T[2], has value: " + String(r54.T[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2282};
  modelica_boolean tmp383;
  static const MMC_DEFSTRINGLIT(tmp384,63,"Variable violating min constraint: 0.0 <= r54.T[2], has value: ");
  modelica_string tmp385;
  modelica_metatype tmpMeta386;
  static int tmp387 = 0;
  if(!tmp387)
  {
    tmp383 = GreaterEq((data->localData[0]->realVars[368]/* r54.T[2] variable */) ,0.0);
    if(!tmp383)
    {
      tmp385 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[368]/* r54.T[2] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta386 = stringAppend(MMC_REFSTRINGLIT(tmp384),tmp385);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr54.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta386));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr54.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta386));
        }
      }
      tmp387 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2283
type: ALGORITHM

  assert(r54.T[3] >= 0.0, "Variable violating min constraint: 0.0 <= r54.T[3], has value: " + String(r54.T[3], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2283};
  modelica_boolean tmp388;
  static const MMC_DEFSTRINGLIT(tmp389,63,"Variable violating min constraint: 0.0 <= r54.T[3], has value: ");
  modelica_string tmp390;
  modelica_metatype tmpMeta391;
  static int tmp392 = 0;
  if(!tmp392)
  {
    tmp388 = GreaterEq((data->localData[0]->realVars[369]/* r54.T[3] variable */) ,0.0);
    if(!tmp388)
    {
      tmp390 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[369]/* r54.T[3] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta391 = stringAppend(MMC_REFSTRINGLIT(tmp389),tmp390);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr54.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta391));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr54.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta391));
        }
      }
      tmp392 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2284
type: ALGORITHM

  assert(s45.Ttilde[1] >= 0.0, "Variable violating min constraint: 0.0 <= s45.Ttilde[1], has value: " + String(s45.Ttilde[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2284};
  modelica_boolean tmp393;
  static const MMC_DEFSTRINGLIT(tmp394,68,"Variable violating min constraint: 0.0 <= s45.Ttilde[1], has value: ");
  modelica_string tmp395;
  modelica_metatype tmpMeta396;
  static int tmp397 = 0;
  if(!tmp397)
  {
    tmp393 = GreaterEq((data->localData[0]->realVars[59]/* s45.Ttilde[1] STATE(1) */) ,0.0);
    if(!tmp393)
    {
      tmp395 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[59]/* s45.Ttilde[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta396 = stringAppend(MMC_REFSTRINGLIT(tmp394),tmp395);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns45.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta396));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns45.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta396));
        }
      }
      tmp397 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2285
type: ALGORITHM

  assert(s45.Ttilde[2] >= 0.0, "Variable violating min constraint: 0.0 <= s45.Ttilde[2], has value: " + String(s45.Ttilde[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2285};
  modelica_boolean tmp398;
  static const MMC_DEFSTRINGLIT(tmp399,68,"Variable violating min constraint: 0.0 <= s45.Ttilde[2], has value: ");
  modelica_string tmp400;
  modelica_metatype tmpMeta401;
  static int tmp402 = 0;
  if(!tmp402)
  {
    tmp398 = GreaterEq((data->localData[0]->realVars[60]/* s45.Ttilde[2] STATE(1) */) ,0.0);
    if(!tmp398)
    {
      tmp400 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[60]/* s45.Ttilde[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta401 = stringAppend(MMC_REFSTRINGLIT(tmp399),tmp400);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns45.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta401));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns45.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta401));
        }
      }
      tmp402 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2286
type: ALGORITHM

  assert(s45.Twall[1] >= 0.0, "Variable violating min constraint: 0.0 <= s45.Twall[1], has value: " + String(s45.Twall[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2286};
  modelica_boolean tmp403;
  static const MMC_DEFSTRINGLIT(tmp404,67,"Variable violating min constraint: 0.0 <= s45.Twall[1], has value: ");
  modelica_string tmp405;
  modelica_metatype tmpMeta406;
  static int tmp407 = 0;
  if(!tmp407)
  {
    tmp403 = GreaterEq((data->localData[0]->realVars[61]/* s45.Twall[1] STATE(1) */) ,0.0);
    if(!tmp403)
    {
      tmp405 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[61]/* s45.Twall[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta406 = stringAppend(MMC_REFSTRINGLIT(tmp404),tmp405);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns45.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta406));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns45.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta406));
        }
      }
      tmp407 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2287
type: ALGORITHM

  assert(s45.Twall[2] >= 0.0, "Variable violating min constraint: 0.0 <= s45.Twall[2], has value: " + String(s45.Twall[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2287};
  modelica_boolean tmp408;
  static const MMC_DEFSTRINGLIT(tmp409,67,"Variable violating min constraint: 0.0 <= s45.Twall[2], has value: ");
  modelica_string tmp410;
  modelica_metatype tmpMeta411;
  static int tmp412 = 0;
  if(!tmp412)
  {
    tmp408 = GreaterEq((data->localData[0]->realVars[62]/* s45.Twall[2] STATE(1) */) ,0.0);
    if(!tmp408)
    {
      tmp410 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[62]/* s45.Twall[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta411 = stringAppend(MMC_REFSTRINGLIT(tmp409),tmp410);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns45.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta411));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns45.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta411));
        }
      }
      tmp412 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2288
type: ALGORITHM

  assert(s45.T[1] >= 0.0, "Variable violating min constraint: 0.0 <= s45.T[1], has value: " + String(s45.T[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2288};
  modelica_boolean tmp413;
  static const MMC_DEFSTRINGLIT(tmp414,63,"Variable violating min constraint: 0.0 <= s45.T[1], has value: ");
  modelica_string tmp415;
  modelica_metatype tmpMeta416;
  static int tmp417 = 0;
  if(!tmp417)
  {
    tmp413 = GreaterEq((data->localData[0]->realVars[497]/* s45.T[1] variable */) ,0.0);
    if(!tmp413)
    {
      tmp415 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[497]/* s45.T[1] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta416 = stringAppend(MMC_REFSTRINGLIT(tmp414),tmp415);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns45.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta416));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns45.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta416));
        }
      }
      tmp417 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2289
type: ALGORITHM

  assert(s45.T[2] >= 0.0, "Variable violating min constraint: 0.0 <= s45.T[2], has value: " + String(s45.T[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2289};
  modelica_boolean tmp418;
  static const MMC_DEFSTRINGLIT(tmp419,63,"Variable violating min constraint: 0.0 <= s45.T[2], has value: ");
  modelica_string tmp420;
  modelica_metatype tmpMeta421;
  static int tmp422 = 0;
  if(!tmp422)
  {
    tmp418 = GreaterEq((data->localData[0]->realVars[498]/* s45.T[2] variable */) ,0.0);
    if(!tmp418)
    {
      tmp420 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[498]/* s45.T[2] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta421 = stringAppend(MMC_REFSTRINGLIT(tmp419),tmp420);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns45.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta421));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns45.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta421));
        }
      }
      tmp422 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2290
type: ALGORITHM

  assert(s45.T[3] >= 0.0, "Variable violating min constraint: 0.0 <= s45.T[3], has value: " + String(s45.T[3], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2290};
  modelica_boolean tmp423;
  static const MMC_DEFSTRINGLIT(tmp424,63,"Variable violating min constraint: 0.0 <= s45.T[3], has value: ");
  modelica_string tmp425;
  modelica_metatype tmpMeta426;
  static int tmp427 = 0;
  if(!tmp427)
  {
    tmp423 = GreaterEq((data->localData[0]->realVars[499]/* s45.T[3] variable */) ,0.0);
    if(!tmp423)
    {
      tmp425 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[499]/* s45.T[3] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta426 = stringAppend(MMC_REFSTRINGLIT(tmp424),tmp425);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns45.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta426));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns45.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta426));
        }
      }
      tmp427 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2291
type: ALGORITHM

  assert(r76.m_flow >= -1000000000.0, "Variable violating min constraint: -1000000000.0 <= r76.m_flow, has value: " + String(r76.m_flow, "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2291};
  modelica_boolean tmp428;
  static const MMC_DEFSTRINGLIT(tmp429,75,"Variable violating min constraint: -1000000000.0 <= r76.m_flow, has value: ");
  modelica_string tmp430;
  modelica_metatype tmpMeta431;
  static int tmp432 = 0;
  if(!tmp432)
  {
    tmp428 = GreaterEq((data->localData[0]->realVars[411]/* r76.m_flow variable */) ,-1000000000.0);
    if(!tmp428)
    {
      tmp430 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[411]/* r76.m_flow variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta431 = stringAppend(MMC_REFSTRINGLIT(tmp429),tmp430);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr76.m_flow >= -1000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta431));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",709,7,709,44,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr76.m_flow >= -1000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta431));
        }
      }
      tmp432 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2292
type: ALGORITHM

  assert(r76.Ttilde[1] >= 0.0, "Variable violating min constraint: 0.0 <= r76.Ttilde[1], has value: " + String(r76.Ttilde[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2292};
  modelica_boolean tmp433;
  static const MMC_DEFSTRINGLIT(tmp434,68,"Variable violating min constraint: 0.0 <= r76.Ttilde[1], has value: ");
  modelica_string tmp435;
  modelica_metatype tmpMeta436;
  static int tmp437 = 0;
  if(!tmp437)
  {
    tmp433 = GreaterEq((data->localData[0]->realVars[31]/* r76.Ttilde[1] STATE(1) */) ,0.0);
    if(!tmp433)
    {
      tmp435 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[31]/* r76.Ttilde[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta436 = stringAppend(MMC_REFSTRINGLIT(tmp434),tmp435);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr76.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta436));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr76.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta436));
        }
      }
      tmp437 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2293
type: ALGORITHM

  assert(r76.Ttilde[2] >= 0.0, "Variable violating min constraint: 0.0 <= r76.Ttilde[2], has value: " + String(r76.Ttilde[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2293};
  modelica_boolean tmp438;
  static const MMC_DEFSTRINGLIT(tmp439,68,"Variable violating min constraint: 0.0 <= r76.Ttilde[2], has value: ");
  modelica_string tmp440;
  modelica_metatype tmpMeta441;
  static int tmp442 = 0;
  if(!tmp442)
  {
    tmp438 = GreaterEq((data->localData[0]->realVars[32]/* r76.Ttilde[2] STATE(1) */) ,0.0);
    if(!tmp438)
    {
      tmp440 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[32]/* r76.Ttilde[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta441 = stringAppend(MMC_REFSTRINGLIT(tmp439),tmp440);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr76.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta441));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr76.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta441));
        }
      }
      tmp442 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2294
type: ALGORITHM

  assert(r76.Twall[1] >= 0.0, "Variable violating min constraint: 0.0 <= r76.Twall[1], has value: " + String(r76.Twall[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2294};
  modelica_boolean tmp443;
  static const MMC_DEFSTRINGLIT(tmp444,67,"Variable violating min constraint: 0.0 <= r76.Twall[1], has value: ");
  modelica_string tmp445;
  modelica_metatype tmpMeta446;
  static int tmp447 = 0;
  if(!tmp447)
  {
    tmp443 = GreaterEq((data->localData[0]->realVars[33]/* r76.Twall[1] STATE(1) */) ,0.0);
    if(!tmp443)
    {
      tmp445 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[33]/* r76.Twall[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta446 = stringAppend(MMC_REFSTRINGLIT(tmp444),tmp445);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr76.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta446));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr76.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta446));
        }
      }
      tmp447 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2295
type: ALGORITHM

  assert(r76.Twall[2] >= 0.0, "Variable violating min constraint: 0.0 <= r76.Twall[2], has value: " + String(r76.Twall[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2295};
  modelica_boolean tmp448;
  static const MMC_DEFSTRINGLIT(tmp449,67,"Variable violating min constraint: 0.0 <= r76.Twall[2], has value: ");
  modelica_string tmp450;
  modelica_metatype tmpMeta451;
  static int tmp452 = 0;
  if(!tmp452)
  {
    tmp448 = GreaterEq((data->localData[0]->realVars[34]/* r76.Twall[2] STATE(1) */) ,0.0);
    if(!tmp448)
    {
      tmp450 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[34]/* r76.Twall[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta451 = stringAppend(MMC_REFSTRINGLIT(tmp449),tmp450);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr76.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta451));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr76.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta451));
        }
      }
      tmp452 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2296
type: ALGORITHM

  assert(r76.T[1] >= 0.0, "Variable violating min constraint: 0.0 <= r76.T[1], has value: " + String(r76.T[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2296};
  modelica_boolean tmp453;
  static const MMC_DEFSTRINGLIT(tmp454,63,"Variable violating min constraint: 0.0 <= r76.T[1], has value: ");
  modelica_string tmp455;
  modelica_metatype tmpMeta456;
  static int tmp457 = 0;
  if(!tmp457)
  {
    tmp453 = GreaterEq((data->localData[0]->realVars[407]/* r76.T[1] variable */) ,0.0);
    if(!tmp453)
    {
      tmp455 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[407]/* r76.T[1] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta456 = stringAppend(MMC_REFSTRINGLIT(tmp454),tmp455);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr76.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta456));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr76.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta456));
        }
      }
      tmp457 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2297
type: ALGORITHM

  assert(r76.T[2] >= 0.0, "Variable violating min constraint: 0.0 <= r76.T[2], has value: " + String(r76.T[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2297};
  modelica_boolean tmp458;
  static const MMC_DEFSTRINGLIT(tmp459,63,"Variable violating min constraint: 0.0 <= r76.T[2], has value: ");
  modelica_string tmp460;
  modelica_metatype tmpMeta461;
  static int tmp462 = 0;
  if(!tmp462)
  {
    tmp458 = GreaterEq((data->localData[0]->realVars[408]/* r76.T[2] variable */) ,0.0);
    if(!tmp458)
    {
      tmp460 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[408]/* r76.T[2] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta461 = stringAppend(MMC_REFSTRINGLIT(tmp459),tmp460);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr76.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta461));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr76.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta461));
        }
      }
      tmp462 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2298
type: ALGORITHM

  assert(r76.T[3] >= 0.0, "Variable violating min constraint: 0.0 <= r76.T[3], has value: " + String(r76.T[3], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2298};
  modelica_boolean tmp463;
  static const MMC_DEFSTRINGLIT(tmp464,63,"Variable violating min constraint: 0.0 <= r76.T[3], has value: ");
  modelica_string tmp465;
  modelica_metatype tmpMeta466;
  static int tmp467 = 0;
  if(!tmp467)
  {
    tmp463 = GreaterEq((data->localData[0]->realVars[409]/* r76.T[3] variable */) ,0.0);
    if(!tmp463)
    {
      tmp465 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[409]/* r76.T[3] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta466 = stringAppend(MMC_REFSTRINGLIT(tmp464),tmp465);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr76.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta466));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr76.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta466));
        }
      }
      tmp467 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2299
type: ALGORITHM

  assert(r61.m_flow >= -1000000000.0, "Variable violating min constraint: -1000000000.0 <= r61.m_flow, has value: " + String(r61.m_flow, "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2299};
  modelica_boolean tmp468;
  static const MMC_DEFSTRINGLIT(tmp469,75,"Variable violating min constraint: -1000000000.0 <= r61.m_flow, has value: ");
  modelica_string tmp470;
  modelica_metatype tmpMeta471;
  static int tmp472 = 0;
  if(!tmp472)
  {
    tmp468 = GreaterEq((data->localData[0]->realVars[383]/* r61.m_flow variable */) ,-1000000000.0);
    if(!tmp468)
    {
      tmp470 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[383]/* r61.m_flow variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta471 = stringAppend(MMC_REFSTRINGLIT(tmp469),tmp470);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr61.m_flow >= -1000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta471));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",709,7,709,44,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr61.m_flow >= -1000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta471));
        }
      }
      tmp472 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2300
type: ALGORITHM

  assert(r61.Ttilde[1] >= 0.0, "Variable violating min constraint: 0.0 <= r61.Ttilde[1], has value: " + String(r61.Ttilde[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2300};
  modelica_boolean tmp473;
  static const MMC_DEFSTRINGLIT(tmp474,68,"Variable violating min constraint: 0.0 <= r61.Ttilde[1], has value: ");
  modelica_string tmp475;
  modelica_metatype tmpMeta476;
  static int tmp477 = 0;
  if(!tmp477)
  {
    tmp473 = GreaterEq((data->localData[0]->realVars[23]/* r61.Ttilde[1] STATE(1) */) ,0.0);
    if(!tmp473)
    {
      tmp475 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[23]/* r61.Ttilde[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta476 = stringAppend(MMC_REFSTRINGLIT(tmp474),tmp475);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr61.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta476));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr61.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta476));
        }
      }
      tmp477 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2301
type: ALGORITHM

  assert(r61.Ttilde[2] >= 0.0, "Variable violating min constraint: 0.0 <= r61.Ttilde[2], has value: " + String(r61.Ttilde[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2301};
  modelica_boolean tmp478;
  static const MMC_DEFSTRINGLIT(tmp479,68,"Variable violating min constraint: 0.0 <= r61.Ttilde[2], has value: ");
  modelica_string tmp480;
  modelica_metatype tmpMeta481;
  static int tmp482 = 0;
  if(!tmp482)
  {
    tmp478 = GreaterEq((data->localData[0]->realVars[24]/* r61.Ttilde[2] STATE(1) */) ,0.0);
    if(!tmp478)
    {
      tmp480 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[24]/* r61.Ttilde[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta481 = stringAppend(MMC_REFSTRINGLIT(tmp479),tmp480);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr61.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta481));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr61.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta481));
        }
      }
      tmp482 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2302
type: ALGORITHM

  assert(r61.Twall[1] >= 0.0, "Variable violating min constraint: 0.0 <= r61.Twall[1], has value: " + String(r61.Twall[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2302};
  modelica_boolean tmp483;
  static const MMC_DEFSTRINGLIT(tmp484,67,"Variable violating min constraint: 0.0 <= r61.Twall[1], has value: ");
  modelica_string tmp485;
  modelica_metatype tmpMeta486;
  static int tmp487 = 0;
  if(!tmp487)
  {
    tmp483 = GreaterEq((data->localData[0]->realVars[25]/* r61.Twall[1] STATE(1) */) ,0.0);
    if(!tmp483)
    {
      tmp485 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[25]/* r61.Twall[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta486 = stringAppend(MMC_REFSTRINGLIT(tmp484),tmp485);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr61.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta486));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr61.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta486));
        }
      }
      tmp487 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2303
type: ALGORITHM

  assert(r61.Twall[2] >= 0.0, "Variable violating min constraint: 0.0 <= r61.Twall[2], has value: " + String(r61.Twall[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2303};
  modelica_boolean tmp488;
  static const MMC_DEFSTRINGLIT(tmp489,67,"Variable violating min constraint: 0.0 <= r61.Twall[2], has value: ");
  modelica_string tmp490;
  modelica_metatype tmpMeta491;
  static int tmp492 = 0;
  if(!tmp492)
  {
    tmp488 = GreaterEq((data->localData[0]->realVars[26]/* r61.Twall[2] STATE(1) */) ,0.0);
    if(!tmp488)
    {
      tmp490 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[26]/* r61.Twall[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta491 = stringAppend(MMC_REFSTRINGLIT(tmp489),tmp490);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr61.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta491));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr61.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta491));
        }
      }
      tmp492 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2304
type: ALGORITHM

  assert(r61.T[1] >= 0.0, "Variable violating min constraint: 0.0 <= r61.T[1], has value: " + String(r61.T[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2304};
  modelica_boolean tmp493;
  static const MMC_DEFSTRINGLIT(tmp494,63,"Variable violating min constraint: 0.0 <= r61.T[1], has value: ");
  modelica_string tmp495;
  modelica_metatype tmpMeta496;
  static int tmp497 = 0;
  if(!tmp497)
  {
    tmp493 = GreaterEq((data->localData[0]->realVars[379]/* r61.T[1] variable */) ,0.0);
    if(!tmp493)
    {
      tmp495 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[379]/* r61.T[1] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta496 = stringAppend(MMC_REFSTRINGLIT(tmp494),tmp495);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr61.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta496));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr61.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta496));
        }
      }
      tmp497 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2305
type: ALGORITHM

  assert(r61.T[2] >= 0.0, "Variable violating min constraint: 0.0 <= r61.T[2], has value: " + String(r61.T[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2305};
  modelica_boolean tmp498;
  static const MMC_DEFSTRINGLIT(tmp499,63,"Variable violating min constraint: 0.0 <= r61.T[2], has value: ");
  modelica_string tmp500;
  modelica_metatype tmpMeta501;
  static int tmp502 = 0;
  if(!tmp502)
  {
    tmp498 = GreaterEq((data->localData[0]->realVars[380]/* r61.T[2] variable */) ,0.0);
    if(!tmp498)
    {
      tmp500 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[380]/* r61.T[2] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta501 = stringAppend(MMC_REFSTRINGLIT(tmp499),tmp500);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr61.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta501));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr61.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta501));
        }
      }
      tmp502 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2306
type: ALGORITHM

  assert(r61.T[3] >= 0.0, "Variable violating min constraint: 0.0 <= r61.T[3], has value: " + String(r61.T[3], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2306};
  modelica_boolean tmp503;
  static const MMC_DEFSTRINGLIT(tmp504,63,"Variable violating min constraint: 0.0 <= r61.T[3], has value: ");
  modelica_string tmp505;
  modelica_metatype tmpMeta506;
  static int tmp507 = 0;
  if(!tmp507)
  {
    tmp503 = GreaterEq((data->localData[0]->realVars[381]/* r61.T[3] variable */) ,0.0);
    if(!tmp503)
    {
      tmp505 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[381]/* r61.T[3] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta506 = stringAppend(MMC_REFSTRINGLIT(tmp504),tmp505);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr61.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta506));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr61.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta506));
        }
      }
      tmp507 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2307
type: ALGORITHM

  assert(s16.m_flow >= -1000000000.0, "Variable violating min constraint: -1000000000.0 <= s16.m_flow, has value: " + String(s16.m_flow, "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2307};
  modelica_boolean tmp508;
  static const MMC_DEFSTRINGLIT(tmp509,75,"Variable violating min constraint: -1000000000.0 <= s16.m_flow, has value: ");
  modelica_string tmp510;
  modelica_metatype tmpMeta511;
  static int tmp512 = 0;
  if(!tmp512)
  {
    tmp508 = GreaterEq((data->localData[0]->realVars[461]/* s16.m_flow variable */) ,-1000000000.0);
    if(!tmp508)
    {
      tmp510 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[461]/* s16.m_flow variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta511 = stringAppend(MMC_REFSTRINGLIT(tmp509),tmp510);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns16.m_flow >= -1000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta511));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",709,7,709,44,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns16.m_flow >= -1000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta511));
        }
      }
      tmp512 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2308
type: ALGORITHM

  assert(s16.Ttilde[1] >= 0.0, "Variable violating min constraint: 0.0 <= s16.Ttilde[1], has value: " + String(s16.Ttilde[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2308};
  modelica_boolean tmp513;
  static const MMC_DEFSTRINGLIT(tmp514,68,"Variable violating min constraint: 0.0 <= s16.Ttilde[1], has value: ");
  modelica_string tmp515;
  modelica_metatype tmpMeta516;
  static int tmp517 = 0;
  if(!tmp517)
  {
    tmp513 = GreaterEq((data->localData[0]->realVars[47]/* s16.Ttilde[1] STATE(1) */) ,0.0);
    if(!tmp513)
    {
      tmp515 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[47]/* s16.Ttilde[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta516 = stringAppend(MMC_REFSTRINGLIT(tmp514),tmp515);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns16.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta516));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns16.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta516));
        }
      }
      tmp517 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2309
type: ALGORITHM

  assert(s16.Ttilde[2] >= 0.0, "Variable violating min constraint: 0.0 <= s16.Ttilde[2], has value: " + String(s16.Ttilde[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2309};
  modelica_boolean tmp518;
  static const MMC_DEFSTRINGLIT(tmp519,68,"Variable violating min constraint: 0.0 <= s16.Ttilde[2], has value: ");
  modelica_string tmp520;
  modelica_metatype tmpMeta521;
  static int tmp522 = 0;
  if(!tmp522)
  {
    tmp518 = GreaterEq((data->localData[0]->realVars[48]/* s16.Ttilde[2] STATE(1) */) ,0.0);
    if(!tmp518)
    {
      tmp520 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[48]/* s16.Ttilde[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta521 = stringAppend(MMC_REFSTRINGLIT(tmp519),tmp520);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns16.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta521));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns16.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta521));
        }
      }
      tmp522 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2310
type: ALGORITHM

  assert(s16.Twall[1] >= 0.0, "Variable violating min constraint: 0.0 <= s16.Twall[1], has value: " + String(s16.Twall[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2310};
  modelica_boolean tmp523;
  static const MMC_DEFSTRINGLIT(tmp524,67,"Variable violating min constraint: 0.0 <= s16.Twall[1], has value: ");
  modelica_string tmp525;
  modelica_metatype tmpMeta526;
  static int tmp527 = 0;
  if(!tmp527)
  {
    tmp523 = GreaterEq((data->localData[0]->realVars[49]/* s16.Twall[1] STATE(1) */) ,0.0);
    if(!tmp523)
    {
      tmp525 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[49]/* s16.Twall[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta526 = stringAppend(MMC_REFSTRINGLIT(tmp524),tmp525);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns16.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta526));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns16.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta526));
        }
      }
      tmp527 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2311
type: ALGORITHM

  assert(s16.Twall[2] >= 0.0, "Variable violating min constraint: 0.0 <= s16.Twall[2], has value: " + String(s16.Twall[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2311};
  modelica_boolean tmp528;
  static const MMC_DEFSTRINGLIT(tmp529,67,"Variable violating min constraint: 0.0 <= s16.Twall[2], has value: ");
  modelica_string tmp530;
  modelica_metatype tmpMeta531;
  static int tmp532 = 0;
  if(!tmp532)
  {
    tmp528 = GreaterEq((data->localData[0]->realVars[50]/* s16.Twall[2] STATE(1) */) ,0.0);
    if(!tmp528)
    {
      tmp530 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[50]/* s16.Twall[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta531 = stringAppend(MMC_REFSTRINGLIT(tmp529),tmp530);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns16.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta531));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns16.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta531));
        }
      }
      tmp532 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2312
type: ALGORITHM

  assert(s16.T[1] >= 0.0, "Variable violating min constraint: 0.0 <= s16.T[1], has value: " + String(s16.T[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2312};
  modelica_boolean tmp533;
  static const MMC_DEFSTRINGLIT(tmp534,63,"Variable violating min constraint: 0.0 <= s16.T[1], has value: ");
  modelica_string tmp535;
  modelica_metatype tmpMeta536;
  static int tmp537 = 0;
  if(!tmp537)
  {
    tmp533 = GreaterEq((data->localData[0]->realVars[457]/* s16.T[1] variable */) ,0.0);
    if(!tmp533)
    {
      tmp535 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[457]/* s16.T[1] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta536 = stringAppend(MMC_REFSTRINGLIT(tmp534),tmp535);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns16.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta536));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns16.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta536));
        }
      }
      tmp537 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2313
type: ALGORITHM

  assert(s16.T[2] >= 0.0, "Variable violating min constraint: 0.0 <= s16.T[2], has value: " + String(s16.T[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2313};
  modelica_boolean tmp538;
  static const MMC_DEFSTRINGLIT(tmp539,63,"Variable violating min constraint: 0.0 <= s16.T[2], has value: ");
  modelica_string tmp540;
  modelica_metatype tmpMeta541;
  static int tmp542 = 0;
  if(!tmp542)
  {
    tmp538 = GreaterEq((data->localData[0]->realVars[458]/* s16.T[2] variable */) ,0.0);
    if(!tmp538)
    {
      tmp540 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[458]/* s16.T[2] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta541 = stringAppend(MMC_REFSTRINGLIT(tmp539),tmp540);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns16.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta541));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns16.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta541));
        }
      }
      tmp542 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2314
type: ALGORITHM

  assert(s16.T[3] >= 0.0, "Variable violating min constraint: 0.0 <= s16.T[3], has value: " + String(s16.T[3], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2314};
  modelica_boolean tmp543;
  static const MMC_DEFSTRINGLIT(tmp544,63,"Variable violating min constraint: 0.0 <= s16.T[3], has value: ");
  modelica_string tmp545;
  modelica_metatype tmpMeta546;
  static int tmp547 = 0;
  if(!tmp547)
  {
    tmp543 = GreaterEq((data->localData[0]->realVars[459]/* s16.T[3] variable */) ,0.0);
    if(!tmp543)
    {
      tmp545 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[459]/* s16.T[3] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta546 = stringAppend(MMC_REFSTRINGLIT(tmp544),tmp545);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns16.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta546));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns16.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta546));
        }
      }
      tmp547 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2315
type: ALGORITHM

  assert(load4.loadValveControl.y >= 0.0 and load4.loadValveControl.y <= 1.0, "Variable violating min/max constraint: 0.0 <= load4.loadValveControl.y <= 1.0, has value: " + String(load4.loadValveControl.y, "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2315};
  modelica_boolean tmp548;
  modelica_boolean tmp549;
  static const MMC_DEFSTRINGLIT(tmp550,90,"Variable violating min/max constraint: 0.0 <= load4.loadValveControl.y <= 1.0, has value: ");
  modelica_string tmp551;
  modelica_metatype tmpMeta552;
  static int tmp553 = 0;
  if(!tmp553)
  {
    tmp548 = GreaterEq((data->localData[0]->realVars[286]/* load4.loadValveControl.y variable */) ,0.0);
    tmp549 = LessEq((data->localData[0]->realVars[286]/* load4.loadValveControl.y variable */) ,1.0);
    if(!(tmp548 && tmp549))
    {
      tmp551 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[286]/* load4.loadValveControl.y variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta552 = stringAppend(MMC_REFSTRINGLIT(tmp550),tmp551);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload4.loadValveControl.y >= 0.0 and load4.loadValveControl.y <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta552));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Interfaces.mo",501,5,502,56,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload4.loadValveControl.y >= 0.0 and load4.loadValveControl.y <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta552));
        }
      }
      tmp553 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2316
type: ALGORITHM

  assert(s67.m_flow >= -1000000000.0, "Variable violating min constraint: -1000000000.0 <= s67.m_flow, has value: " + String(s67.m_flow, "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2316};
  modelica_boolean tmp554;
  static const MMC_DEFSTRINGLIT(tmp555,75,"Variable violating min constraint: -1000000000.0 <= s67.m_flow, has value: ");
  modelica_string tmp556;
  modelica_metatype tmpMeta557;
  static int tmp558 = 0;
  if(!tmp558)
  {
    tmp554 = GreaterEq((data->localData[0]->realVars[526]/* s67.m_flow variable */) ,-1000000000.0);
    if(!tmp554)
    {
      tmp556 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[526]/* s67.m_flow variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta557 = stringAppend(MMC_REFSTRINGLIT(tmp555),tmp556);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns67.m_flow >= -1000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta557));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",709,7,709,44,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns67.m_flow >= -1000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta557));
        }
      }
      tmp558 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2317
type: ALGORITHM

  assert(s67.Ttilde[1] >= 0.0, "Variable violating min constraint: 0.0 <= s67.Ttilde[1], has value: " + String(s67.Ttilde[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2317};
  modelica_boolean tmp559;
  static const MMC_DEFSTRINGLIT(tmp560,68,"Variable violating min constraint: 0.0 <= s67.Ttilde[1], has value: ");
  modelica_string tmp561;
  modelica_metatype tmpMeta562;
  static int tmp563 = 0;
  if(!tmp563)
  {
    tmp559 = GreaterEq((data->localData[0]->realVars[67]/* s67.Ttilde[1] STATE(1) */) ,0.0);
    if(!tmp559)
    {
      tmp561 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[67]/* s67.Ttilde[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta562 = stringAppend(MMC_REFSTRINGLIT(tmp560),tmp561);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns67.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta562));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns67.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta562));
        }
      }
      tmp563 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2318
type: ALGORITHM

  assert(s67.Ttilde[2] >= 0.0, "Variable violating min constraint: 0.0 <= s67.Ttilde[2], has value: " + String(s67.Ttilde[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2318};
  modelica_boolean tmp564;
  static const MMC_DEFSTRINGLIT(tmp565,68,"Variable violating min constraint: 0.0 <= s67.Ttilde[2], has value: ");
  modelica_string tmp566;
  modelica_metatype tmpMeta567;
  static int tmp568 = 0;
  if(!tmp568)
  {
    tmp564 = GreaterEq((data->localData[0]->realVars[68]/* s67.Ttilde[2] STATE(1) */) ,0.0);
    if(!tmp564)
    {
      tmp566 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[68]/* s67.Ttilde[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta567 = stringAppend(MMC_REFSTRINGLIT(tmp565),tmp566);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns67.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta567));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns67.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta567));
        }
      }
      tmp568 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2319
type: ALGORITHM

  assert(s67.Twall[1] >= 0.0, "Variable violating min constraint: 0.0 <= s67.Twall[1], has value: " + String(s67.Twall[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2319};
  modelica_boolean tmp569;
  static const MMC_DEFSTRINGLIT(tmp570,67,"Variable violating min constraint: 0.0 <= s67.Twall[1], has value: ");
  modelica_string tmp571;
  modelica_metatype tmpMeta572;
  static int tmp573 = 0;
  if(!tmp573)
  {
    tmp569 = GreaterEq((data->localData[0]->realVars[69]/* s67.Twall[1] STATE(1) */) ,0.0);
    if(!tmp569)
    {
      tmp571 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[69]/* s67.Twall[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta572 = stringAppend(MMC_REFSTRINGLIT(tmp570),tmp571);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns67.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta572));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns67.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta572));
        }
      }
      tmp573 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2320
type: ALGORITHM

  assert(s67.Twall[2] >= 0.0, "Variable violating min constraint: 0.0 <= s67.Twall[2], has value: " + String(s67.Twall[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2320};
  modelica_boolean tmp574;
  static const MMC_DEFSTRINGLIT(tmp575,67,"Variable violating min constraint: 0.0 <= s67.Twall[2], has value: ");
  modelica_string tmp576;
  modelica_metatype tmpMeta577;
  static int tmp578 = 0;
  if(!tmp578)
  {
    tmp574 = GreaterEq((data->localData[0]->realVars[70]/* s67.Twall[2] STATE(1) */) ,0.0);
    if(!tmp574)
    {
      tmp576 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[70]/* s67.Twall[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta577 = stringAppend(MMC_REFSTRINGLIT(tmp575),tmp576);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns67.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta577));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns67.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta577));
        }
      }
      tmp578 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2321
type: ALGORITHM

  assert(s67.T[1] >= 0.0, "Variable violating min constraint: 0.0 <= s67.T[1], has value: " + String(s67.T[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2321};
  modelica_boolean tmp579;
  static const MMC_DEFSTRINGLIT(tmp580,63,"Variable violating min constraint: 0.0 <= s67.T[1], has value: ");
  modelica_string tmp581;
  modelica_metatype tmpMeta582;
  static int tmp583 = 0;
  if(!tmp583)
  {
    tmp579 = GreaterEq((data->localData[0]->realVars[522]/* s67.T[1] variable */) ,0.0);
    if(!tmp579)
    {
      tmp581 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[522]/* s67.T[1] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta582 = stringAppend(MMC_REFSTRINGLIT(tmp580),tmp581);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns67.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta582));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns67.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta582));
        }
      }
      tmp583 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2322
type: ALGORITHM

  assert(s67.T[2] >= 0.0, "Variable violating min constraint: 0.0 <= s67.T[2], has value: " + String(s67.T[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2322};
  modelica_boolean tmp584;
  static const MMC_DEFSTRINGLIT(tmp585,63,"Variable violating min constraint: 0.0 <= s67.T[2], has value: ");
  modelica_string tmp586;
  modelica_metatype tmpMeta587;
  static int tmp588 = 0;
  if(!tmp588)
  {
    tmp584 = GreaterEq((data->localData[0]->realVars[523]/* s67.T[2] variable */) ,0.0);
    if(!tmp584)
    {
      tmp586 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[523]/* s67.T[2] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta587 = stringAppend(MMC_REFSTRINGLIT(tmp585),tmp586);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns67.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta587));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns67.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta587));
        }
      }
      tmp588 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2323
type: ALGORITHM

  assert(s67.T[3] >= 0.0, "Variable violating min constraint: 0.0 <= s67.T[3], has value: " + String(s67.T[3], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2323};
  modelica_boolean tmp589;
  static const MMC_DEFSTRINGLIT(tmp590,63,"Variable violating min constraint: 0.0 <= s67.T[3], has value: ");
  modelica_string tmp591;
  modelica_metatype tmpMeta592;
  static int tmp593 = 0;
  if(!tmp593)
  {
    tmp589 = GreaterEq((data->localData[0]->realVars[524]/* s67.T[3] variable */) ,0.0);
    if(!tmp589)
    {
      tmp591 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[524]/* s67.T[3] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta592 = stringAppend(MMC_REFSTRINGLIT(tmp590),tmp591);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns67.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta592));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns67.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta592));
        }
      }
      tmp593 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2324
type: ALGORITHM

  assert(load5.loadValveControl.y >= 0.0 and load5.loadValveControl.y <= 1.0, "Variable violating min/max constraint: 0.0 <= load5.loadValveControl.y <= 1.0, has value: " + String(load5.loadValveControl.y, "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2324};
  modelica_boolean tmp594;
  modelica_boolean tmp595;
  static const MMC_DEFSTRINGLIT(tmp596,90,"Variable violating min/max constraint: 0.0 <= load5.loadValveControl.y <= 1.0, has value: ");
  modelica_string tmp597;
  modelica_metatype tmpMeta598;
  static int tmp599 = 0;
  if(!tmp599)
  {
    tmp594 = GreaterEq((data->localData[0]->realVars[300]/* load5.loadValveControl.y variable */) ,0.0);
    tmp595 = LessEq((data->localData[0]->realVars[300]/* load5.loadValveControl.y variable */) ,1.0);
    if(!(tmp594 && tmp595))
    {
      tmp597 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[300]/* load5.loadValveControl.y variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta598 = stringAppend(MMC_REFSTRINGLIT(tmp596),tmp597);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nload5.loadValveControl.y >= 0.0 and load5.loadValveControl.y <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta598));
        } else {
          FILE_INFO info = {"C:/Program Files/OpenModelica1.19.2-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Interfaces.mo",501,5,502,56,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nload5.loadValveControl.y >= 0.0 and load5.loadValveControl.y <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta598));
        }
      }
      tmp599 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2325
type: ALGORITHM

  assert(r87.Ttilde[1] >= 0.0, "Variable violating min constraint: 0.0 <= r87.Ttilde[1], has value: " + String(r87.Ttilde[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2325};
  modelica_boolean tmp600;
  static const MMC_DEFSTRINGLIT(tmp601,68,"Variable violating min constraint: 0.0 <= r87.Ttilde[1], has value: ");
  modelica_string tmp602;
  modelica_metatype tmpMeta603;
  static int tmp604 = 0;
  if(!tmp604)
  {
    tmp600 = GreaterEq((data->localData[0]->realVars[35]/* r87.Ttilde[1] STATE(1) */) ,0.0);
    if(!tmp600)
    {
      tmp602 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[35]/* r87.Ttilde[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta603 = stringAppend(MMC_REFSTRINGLIT(tmp601),tmp602);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr87.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta603));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr87.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta603));
        }
      }
      tmp604 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2326
type: ALGORITHM

  assert(r87.Ttilde[2] >= 0.0, "Variable violating min constraint: 0.0 <= r87.Ttilde[2], has value: " + String(r87.Ttilde[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2326};
  modelica_boolean tmp605;
  static const MMC_DEFSTRINGLIT(tmp606,68,"Variable violating min constraint: 0.0 <= r87.Ttilde[2], has value: ");
  modelica_string tmp607;
  modelica_metatype tmpMeta608;
  static int tmp609 = 0;
  if(!tmp609)
  {
    tmp605 = GreaterEq((data->localData[0]->realVars[36]/* r87.Ttilde[2] STATE(1) */) ,0.0);
    if(!tmp605)
    {
      tmp607 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[36]/* r87.Ttilde[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta608 = stringAppend(MMC_REFSTRINGLIT(tmp606),tmp607);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr87.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta608));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr87.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta608));
        }
      }
      tmp609 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2327
type: ALGORITHM

  assert(r87.Twall[1] >= 0.0, "Variable violating min constraint: 0.0 <= r87.Twall[1], has value: " + String(r87.Twall[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2327};
  modelica_boolean tmp610;
  static const MMC_DEFSTRINGLIT(tmp611,67,"Variable violating min constraint: 0.0 <= r87.Twall[1], has value: ");
  modelica_string tmp612;
  modelica_metatype tmpMeta613;
  static int tmp614 = 0;
  if(!tmp614)
  {
    tmp610 = GreaterEq((data->localData[0]->realVars[37]/* r87.Twall[1] STATE(1) */) ,0.0);
    if(!tmp610)
    {
      tmp612 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[37]/* r87.Twall[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta613 = stringAppend(MMC_REFSTRINGLIT(tmp611),tmp612);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr87.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta613));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr87.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta613));
        }
      }
      tmp614 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2328
type: ALGORITHM

  assert(r87.Twall[2] >= 0.0, "Variable violating min constraint: 0.0 <= r87.Twall[2], has value: " + String(r87.Twall[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2328};
  modelica_boolean tmp615;
  static const MMC_DEFSTRINGLIT(tmp616,67,"Variable violating min constraint: 0.0 <= r87.Twall[2], has value: ");
  modelica_string tmp617;
  modelica_metatype tmpMeta618;
  static int tmp619 = 0;
  if(!tmp619)
  {
    tmp615 = GreaterEq((data->localData[0]->realVars[38]/* r87.Twall[2] STATE(1) */) ,0.0);
    if(!tmp615)
    {
      tmp617 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[38]/* r87.Twall[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta618 = stringAppend(MMC_REFSTRINGLIT(tmp616),tmp617);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr87.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta618));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr87.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta618));
        }
      }
      tmp619 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2329
type: ALGORITHM

  assert(r87.T[1] >= 0.0, "Variable violating min constraint: 0.0 <= r87.T[1], has value: " + String(r87.T[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2329};
  modelica_boolean tmp620;
  static const MMC_DEFSTRINGLIT(tmp621,63,"Variable violating min constraint: 0.0 <= r87.T[1], has value: ");
  modelica_string tmp622;
  modelica_metatype tmpMeta623;
  static int tmp624 = 0;
  if(!tmp624)
  {
    tmp620 = GreaterEq((data->localData[0]->realVars[420]/* r87.T[1] variable */) ,0.0);
    if(!tmp620)
    {
      tmp622 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[420]/* r87.T[1] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta623 = stringAppend(MMC_REFSTRINGLIT(tmp621),tmp622);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr87.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta623));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr87.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta623));
        }
      }
      tmp624 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2330
type: ALGORITHM

  assert(r87.T[2] >= 0.0, "Variable violating min constraint: 0.0 <= r87.T[2], has value: " + String(r87.T[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2330};
  modelica_boolean tmp625;
  static const MMC_DEFSTRINGLIT(tmp626,63,"Variable violating min constraint: 0.0 <= r87.T[2], has value: ");
  modelica_string tmp627;
  modelica_metatype tmpMeta628;
  static int tmp629 = 0;
  if(!tmp629)
  {
    tmp625 = GreaterEq((data->localData[0]->realVars[421]/* r87.T[2] variable */) ,0.0);
    if(!tmp625)
    {
      tmp627 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[421]/* r87.T[2] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta628 = stringAppend(MMC_REFSTRINGLIT(tmp626),tmp627);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr87.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta628));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr87.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta628));
        }
      }
      tmp629 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2331
type: ALGORITHM

  assert(r87.T[3] >= 0.0, "Variable violating min constraint: 0.0 <= r87.T[3], has value: " + String(r87.T[3], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2331};
  modelica_boolean tmp630;
  static const MMC_DEFSTRINGLIT(tmp631,63,"Variable violating min constraint: 0.0 <= r87.T[3], has value: ");
  modelica_string tmp632;
  modelica_metatype tmpMeta633;
  static int tmp634 = 0;
  if(!tmp634)
  {
    tmp630 = GreaterEq((data->localData[0]->realVars[422]/* r87.T[3] variable */) ,0.0);
    if(!tmp630)
    {
      tmp632 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[422]/* r87.T[3] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta633 = stringAppend(MMC_REFSTRINGLIT(tmp631),tmp632);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr87.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta633));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr87.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta633));
        }
      }
      tmp634 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2332
type: ALGORITHM

  assert(s78.Ttilde[1] >= 0.0, "Variable violating min constraint: 0.0 <= s78.Ttilde[1], has value: " + String(s78.Ttilde[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2332};
  modelica_boolean tmp635;
  static const MMC_DEFSTRINGLIT(tmp636,68,"Variable violating min constraint: 0.0 <= s78.Ttilde[1], has value: ");
  modelica_string tmp637;
  modelica_metatype tmpMeta638;
  static int tmp639 = 0;
  if(!tmp639)
  {
    tmp635 = GreaterEq((data->localData[0]->realVars[71]/* s78.Ttilde[1] STATE(1) */) ,0.0);
    if(!tmp635)
    {
      tmp637 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[71]/* s78.Ttilde[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta638 = stringAppend(MMC_REFSTRINGLIT(tmp636),tmp637);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns78.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta638));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns78.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta638));
        }
      }
      tmp639 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2333
type: ALGORITHM

  assert(s78.Ttilde[2] >= 0.0, "Variable violating min constraint: 0.0 <= s78.Ttilde[2], has value: " + String(s78.Ttilde[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2333};
  modelica_boolean tmp640;
  static const MMC_DEFSTRINGLIT(tmp641,68,"Variable violating min constraint: 0.0 <= s78.Ttilde[2], has value: ");
  modelica_string tmp642;
  modelica_metatype tmpMeta643;
  static int tmp644 = 0;
  if(!tmp644)
  {
    tmp640 = GreaterEq((data->localData[0]->realVars[72]/* s78.Ttilde[2] STATE(1) */) ,0.0);
    if(!tmp640)
    {
      tmp642 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[72]/* s78.Ttilde[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta643 = stringAppend(MMC_REFSTRINGLIT(tmp641),tmp642);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns78.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta643));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns78.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta643));
        }
      }
      tmp644 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2334
type: ALGORITHM

  assert(s78.Twall[1] >= 0.0, "Variable violating min constraint: 0.0 <= s78.Twall[1], has value: " + String(s78.Twall[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2334};
  modelica_boolean tmp645;
  static const MMC_DEFSTRINGLIT(tmp646,67,"Variable violating min constraint: 0.0 <= s78.Twall[1], has value: ");
  modelica_string tmp647;
  modelica_metatype tmpMeta648;
  static int tmp649 = 0;
  if(!tmp649)
  {
    tmp645 = GreaterEq((data->localData[0]->realVars[73]/* s78.Twall[1] STATE(1) */) ,0.0);
    if(!tmp645)
    {
      tmp647 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[73]/* s78.Twall[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta648 = stringAppend(MMC_REFSTRINGLIT(tmp646),tmp647);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns78.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta648));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns78.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta648));
        }
      }
      tmp649 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2335
type: ALGORITHM

  assert(s78.Twall[2] >= 0.0, "Variable violating min constraint: 0.0 <= s78.Twall[2], has value: " + String(s78.Twall[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2335};
  modelica_boolean tmp650;
  static const MMC_DEFSTRINGLIT(tmp651,67,"Variable violating min constraint: 0.0 <= s78.Twall[2], has value: ");
  modelica_string tmp652;
  modelica_metatype tmpMeta653;
  static int tmp654 = 0;
  if(!tmp654)
  {
    tmp650 = GreaterEq((data->localData[0]->realVars[74]/* s78.Twall[2] STATE(1) */) ,0.0);
    if(!tmp650)
    {
      tmp652 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[74]/* s78.Twall[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta653 = stringAppend(MMC_REFSTRINGLIT(tmp651),tmp652);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns78.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta653));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns78.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta653));
        }
      }
      tmp654 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2336
type: ALGORITHM

  assert(s78.T[1] >= 0.0, "Variable violating min constraint: 0.0 <= s78.T[1], has value: " + String(s78.T[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2336};
  modelica_boolean tmp655;
  static const MMC_DEFSTRINGLIT(tmp656,63,"Variable violating min constraint: 0.0 <= s78.T[1], has value: ");
  modelica_string tmp657;
  modelica_metatype tmpMeta658;
  static int tmp659 = 0;
  if(!tmp659)
  {
    tmp655 = GreaterEq((data->localData[0]->realVars[535]/* s78.T[1] variable */) ,0.0);
    if(!tmp655)
    {
      tmp657 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[535]/* s78.T[1] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta658 = stringAppend(MMC_REFSTRINGLIT(tmp656),tmp657);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns78.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta658));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns78.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta658));
        }
      }
      tmp659 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2337
type: ALGORITHM

  assert(s78.T[2] >= 0.0, "Variable violating min constraint: 0.0 <= s78.T[2], has value: " + String(s78.T[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2337};
  modelica_boolean tmp660;
  static const MMC_DEFSTRINGLIT(tmp661,63,"Variable violating min constraint: 0.0 <= s78.T[2], has value: ");
  modelica_string tmp662;
  modelica_metatype tmpMeta663;
  static int tmp664 = 0;
  if(!tmp664)
  {
    tmp660 = GreaterEq((data->localData[0]->realVars[536]/* s78.T[2] variable */) ,0.0);
    if(!tmp660)
    {
      tmp662 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[536]/* s78.T[2] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta663 = stringAppend(MMC_REFSTRINGLIT(tmp661),tmp662);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns78.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta663));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns78.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta663));
        }
      }
      tmp664 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2338
type: ALGORITHM

  assert(s78.T[3] >= 0.0, "Variable violating min constraint: 0.0 <= s78.T[3], has value: " + String(s78.T[3], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2338};
  modelica_boolean tmp665;
  static const MMC_DEFSTRINGLIT(tmp666,63,"Variable violating min constraint: 0.0 <= s78.T[3], has value: ");
  modelica_string tmp667;
  modelica_metatype tmpMeta668;
  static int tmp669 = 0;
  if(!tmp669)
  {
    tmp665 = GreaterEq((data->localData[0]->realVars[537]/* s78.T[3] variable */) ,0.0);
    if(!tmp665)
    {
      tmp667 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[537]/* s78.T[3] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta668 = stringAppend(MMC_REFSTRINGLIT(tmp666),tmp667);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns78.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta668));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns78.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta668));
        }
      }
      tmp669 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2339
type: ALGORITHM

  assert(s47.m_flow >= -1000000000.0, "Variable violating min constraint: -1000000000.0 <= s47.m_flow, has value: " + String(s47.m_flow, "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2339};
  modelica_boolean tmp670;
  static const MMC_DEFSTRINGLIT(tmp671,75,"Variable violating min constraint: -1000000000.0 <= s47.m_flow, has value: ");
  modelica_string tmp672;
  modelica_metatype tmpMeta673;
  static int tmp674 = 0;
  if(!tmp674)
  {
    tmp670 = GreaterEq((data->localData[0]->realVars[512]/* s47.m_flow variable */) ,-1000000000.0);
    if(!tmp670)
    {
      tmp672 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[512]/* s47.m_flow variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta673 = stringAppend(MMC_REFSTRINGLIT(tmp671),tmp672);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns47.m_flow >= -1000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta673));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",709,7,709,44,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns47.m_flow >= -1000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta673));
        }
      }
      tmp674 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2340
type: ALGORITHM

  assert(s47.Ttilde[1] >= 0.0, "Variable violating min constraint: 0.0 <= s47.Ttilde[1], has value: " + String(s47.Ttilde[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2340};
  modelica_boolean tmp675;
  static const MMC_DEFSTRINGLIT(tmp676,68,"Variable violating min constraint: 0.0 <= s47.Ttilde[1], has value: ");
  modelica_string tmp677;
  modelica_metatype tmpMeta678;
  static int tmp679 = 0;
  if(!tmp679)
  {
    tmp675 = GreaterEq((data->localData[0]->realVars[63]/* s47.Ttilde[1] STATE(1) */) ,0.0);
    if(!tmp675)
    {
      tmp677 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[63]/* s47.Ttilde[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta678 = stringAppend(MMC_REFSTRINGLIT(tmp676),tmp677);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns47.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta678));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns47.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta678));
        }
      }
      tmp679 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2341
type: ALGORITHM

  assert(s47.Ttilde[2] >= 0.0, "Variable violating min constraint: 0.0 <= s47.Ttilde[2], has value: " + String(s47.Ttilde[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2341};
  modelica_boolean tmp680;
  static const MMC_DEFSTRINGLIT(tmp681,68,"Variable violating min constraint: 0.0 <= s47.Ttilde[2], has value: ");
  modelica_string tmp682;
  modelica_metatype tmpMeta683;
  static int tmp684 = 0;
  if(!tmp684)
  {
    tmp680 = GreaterEq((data->localData[0]->realVars[64]/* s47.Ttilde[2] STATE(1) */) ,0.0);
    if(!tmp680)
    {
      tmp682 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[64]/* s47.Ttilde[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta683 = stringAppend(MMC_REFSTRINGLIT(tmp681),tmp682);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns47.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta683));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns47.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta683));
        }
      }
      tmp684 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2342
type: ALGORITHM

  assert(s47.Twall[1] >= 0.0, "Variable violating min constraint: 0.0 <= s47.Twall[1], has value: " + String(s47.Twall[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2342};
  modelica_boolean tmp685;
  static const MMC_DEFSTRINGLIT(tmp686,67,"Variable violating min constraint: 0.0 <= s47.Twall[1], has value: ");
  modelica_string tmp687;
  modelica_metatype tmpMeta688;
  static int tmp689 = 0;
  if(!tmp689)
  {
    tmp685 = GreaterEq((data->localData[0]->realVars[65]/* s47.Twall[1] STATE(1) */) ,0.0);
    if(!tmp685)
    {
      tmp687 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[65]/* s47.Twall[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta688 = stringAppend(MMC_REFSTRINGLIT(tmp686),tmp687);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns47.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta688));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns47.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta688));
        }
      }
      tmp689 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2343
type: ALGORITHM

  assert(s47.Twall[2] >= 0.0, "Variable violating min constraint: 0.0 <= s47.Twall[2], has value: " + String(s47.Twall[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2343};
  modelica_boolean tmp690;
  static const MMC_DEFSTRINGLIT(tmp691,67,"Variable violating min constraint: 0.0 <= s47.Twall[2], has value: ");
  modelica_string tmp692;
  modelica_metatype tmpMeta693;
  static int tmp694 = 0;
  if(!tmp694)
  {
    tmp690 = GreaterEq((data->localData[0]->realVars[66]/* s47.Twall[2] STATE(1) */) ,0.0);
    if(!tmp690)
    {
      tmp692 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[66]/* s47.Twall[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta693 = stringAppend(MMC_REFSTRINGLIT(tmp691),tmp692);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns47.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta693));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns47.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta693));
        }
      }
      tmp694 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2344
type: ALGORITHM

  assert(s47.T[1] >= 0.0, "Variable violating min constraint: 0.0 <= s47.T[1], has value: " + String(s47.T[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2344};
  modelica_boolean tmp695;
  static const MMC_DEFSTRINGLIT(tmp696,63,"Variable violating min constraint: 0.0 <= s47.T[1], has value: ");
  modelica_string tmp697;
  modelica_metatype tmpMeta698;
  static int tmp699 = 0;
  if(!tmp699)
  {
    tmp695 = GreaterEq((data->localData[0]->realVars[508]/* s47.T[1] variable */) ,0.0);
    if(!tmp695)
    {
      tmp697 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[508]/* s47.T[1] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta698 = stringAppend(MMC_REFSTRINGLIT(tmp696),tmp697);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns47.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta698));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns47.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta698));
        }
      }
      tmp699 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2345
type: ALGORITHM

  assert(s47.T[2] >= 0.0, "Variable violating min constraint: 0.0 <= s47.T[2], has value: " + String(s47.T[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2345};
  modelica_boolean tmp700;
  static const MMC_DEFSTRINGLIT(tmp701,63,"Variable violating min constraint: 0.0 <= s47.T[2], has value: ");
  modelica_string tmp702;
  modelica_metatype tmpMeta703;
  static int tmp704 = 0;
  if(!tmp704)
  {
    tmp700 = GreaterEq((data->localData[0]->realVars[509]/* s47.T[2] variable */) ,0.0);
    if(!tmp700)
    {
      tmp702 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[509]/* s47.T[2] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta703 = stringAppend(MMC_REFSTRINGLIT(tmp701),tmp702);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns47.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta703));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns47.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta703));
        }
      }
      tmp704 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2346
type: ALGORITHM

  assert(s47.T[3] >= 0.0, "Variable violating min constraint: 0.0 <= s47.T[3], has value: " + String(s47.T[3], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2346};
  modelica_boolean tmp705;
  static const MMC_DEFSTRINGLIT(tmp706,63,"Variable violating min constraint: 0.0 <= s47.T[3], has value: ");
  modelica_string tmp707;
  modelica_metatype tmpMeta708;
  static int tmp709 = 0;
  if(!tmp709)
  {
    tmp705 = GreaterEq((data->localData[0]->realVars[510]/* s47.T[3] variable */) ,0.0);
    if(!tmp705)
    {
      tmp707 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[510]/* s47.T[3] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta708 = stringAppend(MMC_REFSTRINGLIT(tmp706),tmp707);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\ns47.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta708));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\ns47.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta708));
        }
      }
      tmp709 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2347
type: ALGORITHM

  assert(r74.m_flow >= -1000000000.0, "Variable violating min constraint: -1000000000.0 <= r74.m_flow, has value: " + String(r74.m_flow, "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2347};
  modelica_boolean tmp710;
  static const MMC_DEFSTRINGLIT(tmp711,75,"Variable violating min constraint: -1000000000.0 <= r74.m_flow, has value: ");
  modelica_string tmp712;
  modelica_metatype tmpMeta713;
  static int tmp714 = 0;
  if(!tmp714)
  {
    tmp710 = GreaterEq((data->localData[0]->realVars[397]/* r74.m_flow variable */) ,-1000000000.0);
    if(!tmp710)
    {
      tmp712 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[397]/* r74.m_flow variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta713 = stringAppend(MMC_REFSTRINGLIT(tmp711),tmp712);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr74.m_flow >= -1000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta713));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",709,7,709,44,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr74.m_flow >= -1000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta713));
        }
      }
      tmp714 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2348
type: ALGORITHM

  assert(r74.Ttilde[1] >= 0.0, "Variable violating min constraint: 0.0 <= r74.Ttilde[1], has value: " + String(r74.Ttilde[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2348};
  modelica_boolean tmp715;
  static const MMC_DEFSTRINGLIT(tmp716,68,"Variable violating min constraint: 0.0 <= r74.Ttilde[1], has value: ");
  modelica_string tmp717;
  modelica_metatype tmpMeta718;
  static int tmp719 = 0;
  if(!tmp719)
  {
    tmp715 = GreaterEq((data->localData[0]->realVars[27]/* r74.Ttilde[1] STATE(1) */) ,0.0);
    if(!tmp715)
    {
      tmp717 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[27]/* r74.Ttilde[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta718 = stringAppend(MMC_REFSTRINGLIT(tmp716),tmp717);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr74.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta718));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr74.Ttilde[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta718));
        }
      }
      tmp719 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2349
type: ALGORITHM

  assert(r74.Ttilde[2] >= 0.0, "Variable violating min constraint: 0.0 <= r74.Ttilde[2], has value: " + String(r74.Ttilde[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2349};
  modelica_boolean tmp720;
  static const MMC_DEFSTRINGLIT(tmp721,68,"Variable violating min constraint: 0.0 <= r74.Ttilde[2], has value: ");
  modelica_string tmp722;
  modelica_metatype tmpMeta723;
  static int tmp724 = 0;
  if(!tmp724)
  {
    tmp720 = GreaterEq((data->localData[0]->realVars[28]/* r74.Ttilde[2] STATE(1) */) ,0.0);
    if(!tmp720)
    {
      tmp722 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[28]/* r74.Ttilde[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta723 = stringAppend(MMC_REFSTRINGLIT(tmp721),tmp722);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr74.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta723));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",711,7,711,156,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr74.Ttilde[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta723));
        }
      }
      tmp724 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2350
type: ALGORITHM

  assert(r74.Twall[1] >= 0.0, "Variable violating min constraint: 0.0 <= r74.Twall[1], has value: " + String(r74.Twall[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2350};
  modelica_boolean tmp725;
  static const MMC_DEFSTRINGLIT(tmp726,67,"Variable violating min constraint: 0.0 <= r74.Twall[1], has value: ");
  modelica_string tmp727;
  modelica_metatype tmpMeta728;
  static int tmp729 = 0;
  if(!tmp729)
  {
    tmp725 = GreaterEq((data->localData[0]->realVars[29]/* r74.Twall[1] STATE(1) */) ,0.0);
    if(!tmp725)
    {
      tmp727 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[29]/* r74.Twall[1] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta728 = stringAppend(MMC_REFSTRINGLIT(tmp726),tmp727);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr74.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta728));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr74.Twall[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta728));
        }
      }
      tmp729 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2351
type: ALGORITHM

  assert(r74.Twall[2] >= 0.0, "Variable violating min constraint: 0.0 <= r74.Twall[2], has value: " + String(r74.Twall[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2351};
  modelica_boolean tmp730;
  static const MMC_DEFSTRINGLIT(tmp731,67,"Variable violating min constraint: 0.0 <= r74.Twall[2], has value: ");
  modelica_string tmp732;
  modelica_metatype tmpMeta733;
  static int tmp734 = 0;
  if(!tmp734)
  {
    tmp730 = GreaterEq((data->localData[0]->realVars[30]/* r74.Twall[2] STATE(1) */) ,0.0);
    if(!tmp730)
    {
      tmp732 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[30]/* r74.Twall[2] STATE(1) */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta733 = stringAppend(MMC_REFSTRINGLIT(tmp731),tmp732);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr74.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta733));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",712,7,712,149,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr74.Twall[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta733));
        }
      }
      tmp734 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2352
type: ALGORITHM

  assert(r74.T[1] >= 0.0, "Variable violating min constraint: 0.0 <= r74.T[1], has value: " + String(r74.T[1], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2352};
  modelica_boolean tmp735;
  static const MMC_DEFSTRINGLIT(tmp736,63,"Variable violating min constraint: 0.0 <= r74.T[1], has value: ");
  modelica_string tmp737;
  modelica_metatype tmpMeta738;
  static int tmp739 = 0;
  if(!tmp739)
  {
    tmp735 = GreaterEq((data->localData[0]->realVars[393]/* r74.T[1] variable */) ,0.0);
    if(!tmp735)
    {
      tmp737 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[393]/* r74.T[1] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta738 = stringAppend(MMC_REFSTRINGLIT(tmp736),tmp737);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr74.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta738));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr74.T[1] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta738));
        }
      }
      tmp739 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2353
type: ALGORITHM

  assert(r74.T[2] >= 0.0, "Variable violating min constraint: 0.0 <= r74.T[2], has value: " + String(r74.T[2], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2353};
  modelica_boolean tmp740;
  static const MMC_DEFSTRINGLIT(tmp741,63,"Variable violating min constraint: 0.0 <= r74.T[2], has value: ");
  modelica_string tmp742;
  modelica_metatype tmpMeta743;
  static int tmp744 = 0;
  if(!tmp744)
  {
    tmp740 = GreaterEq((data->localData[0]->realVars[394]/* r74.T[2] variable */) ,0.0);
    if(!tmp740)
    {
      tmp742 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[394]/* r74.T[2] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta743 = stringAppend(MMC_REFSTRINGLIT(tmp741),tmp742);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr74.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta743));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr74.T[2] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta743));
        }
      }
      tmp744 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 2354
type: ALGORITHM

  assert(r74.T[3] >= 0.0, "Variable violating min constraint: 0.0 <= r74.T[3], has value: " + String(r74.T[3], "g"));
*/
void SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2354};
  modelica_boolean tmp745;
  static const MMC_DEFSTRINGLIT(tmp746,63,"Variable violating min constraint: 0.0 <= r74.T[3], has value: ");
  modelica_string tmp747;
  modelica_metatype tmpMeta748;
  static int tmp749 = 0;
  if(!tmp749)
  {
    tmp745 = GreaterEq((data->localData[0]->realVars[395]/* r74.T[3] variable */) ,0.0);
    if(!tmp745)
    {
      tmp747 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[395]/* r74.T[3] variable */) , (modelica_string) mmc_strings_len1[103]);
      tmpMeta748 = stringAppend(MMC_REFSTRINGLIT(tmp746),tmp747);
      {
        if (data->simulationInfo->noThrowAsserts) {
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, 0, equationIndexes, "The following assertion has been violated %sat time %f\nr74.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          infoStreamPrint(LOG_ASSERT, 0, "%s", MMC_STRINGDATA(tmpMeta748));
        } else {
          FILE_INFO info = {"C:/Users/laura/OneDrive - Politecnico di Milano/Tesi/Modelica/SimpleDistricHeating_Aroma_5loads.mo",714,7,714,76,0};
          omc_assert_warning(info, "The following assertion has been violated %sat time %f\nr74.T[3] >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
          omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta748));
        }
      }
      tmp749 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2206(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2207(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2208(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2209(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2210(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2211(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2212(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2213(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2214(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2215(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2216(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2217(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2218(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2219(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2220(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2221(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2222(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2223(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2224(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2225(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2226(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2227(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2228(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2229(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2230(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2231(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2232(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2233(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2234(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2235(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2236(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2237(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2238(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2239(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2240(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2241(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2242(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2243(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2244(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2245(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2246(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2247(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2248(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2249(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2250(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2251(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2252(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2253(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2254(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2255(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2256(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2257(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2258(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2259(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2260(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2261(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2262(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2263(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2264(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2265(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2266(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2267(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2268(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2269(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2270(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2271(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2272(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2273(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2274(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2275(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2276(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2277(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2278(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2279(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2280(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2281(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2282(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2283(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2284(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2285(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2286(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2287(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2288(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2289(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2290(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2291(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2292(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2293(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2294(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2295(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2296(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2297(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2298(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2299(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2300(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2301(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2302(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2303(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2304(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2305(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2306(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2307(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2308(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2309(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2310(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2311(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2312(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2313(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2314(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2315(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2316(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2317(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2318(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2319(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2320(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2321(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2322(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2323(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2324(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2325(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2326(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2327(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2328(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2329(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2330(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2331(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2332(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2333(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2334(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2335(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2336(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2337(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2338(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2339(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2340(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2341(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2342(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2343(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2344(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2345(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2346(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2347(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2348(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2349(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2350(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2351(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2352(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2353(data, threadData);

  SimpleDistricHeating_Examples_MultiLoad_Aroma_sim_eqFunction_2354(data, threadData);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

