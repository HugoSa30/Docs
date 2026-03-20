/*
 * Program: n42.bin
 * Function: FUN_00097414
 * Entry: 00097414
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00097414(byte *param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  
  iVar1 = _DAT_003f9e3c;
  param_2 = _DAT_003f9f64 + param_2;
  piVar3 = (int *)(_DAT_003f9e3c + 0xfc);
  for (pbVar2 = param_1; pbVar2 <= (byte *)(param_2 + 2); pbVar2 = pbVar2 + 4) {
    piVar3 = piVar3 + 1;
    *piVar3 = (uint)*pbVar2 * 0x1000000 + (uint)pbVar2[1] * 0x10000 + (uint)pbVar2[2] * 0x100 +
              (uint)pbVar2[3];
  }
  *(int *)(iVar1 + 8) = (param_2 - (int)param_1) + 3;
  DAT_003fa0f9 = 1;
  return;
}

