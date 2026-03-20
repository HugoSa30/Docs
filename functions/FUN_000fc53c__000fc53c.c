/*
 * Program: n42.bin
 * Function: FUN_000fc53c
 * Entry: 000fc53c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fc53c(double param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6,double param_7,double param_8,double param_9,double param_10,
                 double param_11,double param_12,double param_13)

{
  float *pfVar1;
  float *pfVar2;
  double in_f0;
  
  pfVar2 = _DAT_003fbcb8;
  pfVar1 = _DAT_003fbcb8 + 0xd;
  _DAT_003fbcb8 = _DAT_003fbcb8 + 0xe;
  *pfVar1 = (float)in_f0;
  pfVar2[0xc] = (float)param_1;
  pfVar2[0xb] = (float)param_2;
  pfVar2[10] = (float)param_3;
  pfVar2[9] = (float)param_4;
  pfVar2[8] = (float)param_5;
  pfVar2[7] = (float)param_6;
  pfVar2[6] = (float)param_7;
  pfVar2[5] = (float)param_8;
  pfVar2[4] = (float)param_9;
  pfVar2[3] = (float)param_10;
  pfVar2[2] = (float)param_11;
  pfVar2[1] = (float)param_12;
  *pfVar2 = (float)param_13;
  return;
}

