/*
 * Program: n42.bin
 * Function: FUN_0014ade8
 * Entry: 0014ade8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_0014ade8(double param_1,double param_2,int param_3,int param_4,int param_5,
                   undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float local_48 [11];
  
  dVar3 = (double)(float)param_2;
  dVar4 = (double)(float)param_1;
  dVar2 = (double)FUN_0014ace4((double)(float)param_1,param_3,local_48,param_7);
  dVar5 = (double)_DAT_0001c288;
  if ((_DAT_0001c290 < (double)(float)dVar2) && (uVar1 = 0, 0 < param_3)) {
    do {
      dVar5 = (double)(float)((double)((float)(dVar3 * dVar4) * *(float *)(param_4 + uVar1 * 4) +
                                      *(float *)(param_5 + uVar1 * 4)) *
                              (double)(float)((double)local_48[uVar1] / dVar2) + dVar5);
      uVar1 = uVar1 + 1 & 0xff;
    } while ((int)uVar1 < param_3);
  }
  return dVar5;
}

