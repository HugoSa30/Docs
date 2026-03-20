/*
 * Program: n42.bin
 * Function: FUN_0014ace4
 * Entry: 0014ace4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_0014ace4(double param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = _DAT_0001c290;
  dVar5 = (double)_DAT_0001c288;
  uVar3 = 0;
  if (0 < param_2) {
    do {
      fVar1 = *(float *)(param_5 + uVar3 * 4);
      if (dVar4 < (double)fVar1) {
        iVar2 = uVar3 * 4;
        fVar1 = ((float)param_1 - *(float *)(param_4 + iVar2)) / fVar1;
        *(float *)(param_3 + iVar2) = fVar1;
        *(float *)(param_3 + iVar2) = *(float *)(param_3 + iVar2) * fVar1 * _DAT_0001c298;
        _t_cm_bm = -*(float *)(param_3 + iVar2);
        dVar4 = (double)func_0xff218740((double)_t_cm_bm,&DAT_001c2838);
        return dVar4;
      }
      *(float *)(param_3 + uVar3 * 4) = _DAT_0001c288;
      uVar3 = uVar3 + 1 & 0xff;
    } while ((int)uVar3 < param_2);
  }
  return dVar5;
}

