/*
 * Program: n42.bin
 * Function: FUN_000a7908
 * Entry: 000a7908
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a7908(double param_1,float *param_2,uint param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  
  fVar1 = (float)param_1;
  iVar4 = 0;
  fVar2 = _DAT_000179a8;
  if ((*param_2 < fVar1) && (iVar4 = param_3 - 1, fVar1 < param_2[iVar4])) {
    iVar4 = iVar4 - (param_3 >> 1);
    if (param_2[iVar4] < fVar1) {
      iVar4 = iVar4 + (param_3 >> 1) + -1;
    }
    if (fVar1 < param_2[iVar4]) {
      pfVar3 = param_2 + iVar4;
      do {
        iVar4 = iVar4 + -1;
        pfVar3 = pfVar3 + -1;
      } while (fVar1 < *pfVar3);
    }
    fVar2 = (fVar1 - param_2[iVar4]) / (param_2[iVar4 + 1] - param_2[iVar4]);
  }
  *param_4 = iVar4;
  param_4[1] = (int)fVar2;
  return;
}

