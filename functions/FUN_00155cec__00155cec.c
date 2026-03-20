/*
 * Program: n42.bin
 * Function: FUN_00155cec
 * Entry: 00155cec
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00155cec(undefined *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)param_1[0x26];
  if (2 < uVar1) {
    uVar1 = 2;
  }
  FUN_00156cd8(param_1 + uVar1 * 6 + 0x14);
  FUN_00155bb0(param_1 + uVar1 * 6 + 0x16,*param_1);
  return;
}

