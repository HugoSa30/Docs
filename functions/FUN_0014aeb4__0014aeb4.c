/*
 * Program: n42.bin
 * Function: FUN_0014aeb4
 * Entry: 0014aeb4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014aeb4(double param_1,double param_2,double param_3,double param_4,int param_5,
                 int param_6,int param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float local_60 [4];
  float local_50;
  
  dVar4 = (double)(float)param_4;
  local_50 = (float)param_3;
  dVar5 = (double)(float)param_2;
  local_60[3] = (float)param_1;
  dVar3 = (double)FUN_0014ace4((double)(float)param_2,param_5,local_60,param_9);
  if ((_DAT_0001c290 < (double)(float)dVar3) && (uVar2 = 0, 0 < param_5)) {
    do {
      iVar1 = uVar2 * 4;
      *(float *)(param_7 + iVar1) =
           *(float *)(param_7 + iVar1) +
           (float)((double)(local_60[3] * local_50 * local_60[uVar2]) / dVar3);
      *(float *)(param_6 + iVar1) =
           *(float *)(param_6 + iVar1) +
           (float)((double)((float)((double)(float)((double)(local_50 * local_60[3]) * dVar4) *
                                   dVar5) * local_60[uVar2]) / dVar3);
      uVar2 = uVar2 + 1 & 0xff;
    } while ((int)uVar2 < param_5);
  }
  return;
}

