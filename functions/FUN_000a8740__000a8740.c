/*
 * Program: n42.bin
 * Function: FUN_000a8740
 * Entry: 000a8740
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_000a8740(double param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  int local_28;
  float local_24;
  
  iVar2 = *param_2;
  param_2 = param_2 + 1;
  FUN_000a7908((double)(float)param_1,param_2,iVar2,&local_28);
  if (local_24 == _DAT_0001958c) {
    fVar1 = (float)param_2[iVar2 + local_28];
  }
  else {
    fVar1 = local_24 * ((float)param_2[iVar2 + local_28 + 1] - (float)param_2[iVar2 + local_28]) +
            (float)param_2[iVar2 + local_28];
  }
  return (double)fVar1;
}

