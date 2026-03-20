/*
 * Program: n42.bin
 * Function: FUN_000d9ca8
 * Entry: 000d9ca8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_000d9ca8(int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  
  dVar4 = (double)_DAT_0001cb40;
  uVar2 = 0;
  if (0 < param_1) {
    do {
      uVar3 = 1;
      fVar1 = _DAT_0001cb40;
      if (0 < param_2) {
        do {
          fVar1 = *(float *)(param_3[uVar3] + uVar2 * 4) * *(float *)(param_5 + uVar3 * 4 + -4) +
                  fVar1;
          uVar3 = uVar3 + 1 & 0xff;
        } while ((int)uVar3 <= param_2);
      }
      dVar4 = (double)(float)((double)(fVar1 + *(float *)(*param_3 + uVar2 * 4)) *
                              (double)*(float *)(param_4 + uVar2 * 4) + dVar4);
      uVar2 = uVar2 + 1 & 0xff;
    } while ((int)uVar2 < param_1);
  }
  return dVar4;
}

