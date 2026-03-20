/*
 * Program: n42.bin
 * Function: FUN_00110b18
 * Entry: 00110b18
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_00110b18(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  
  uVar1 = param_4 & 0xffff;
  pbVar4 = (byte *)(param_1 + (param_4 >> 0x10) + param_2 * (param_3 >> 0x10));
  uVar3 = (uint)*pbVar4;
  if (uVar1 != 0) {
    uVar3 = uVar3 + ((int)(uVar1 * (pbVar4[1] - uVar3)) >> 0x10);
  }
  if ((param_3 & 0xffff) != 0) {
    uVar2 = (uint)pbVar4[param_2];
    if (uVar1 != 0) {
      uVar2 = uVar2 + ((int)(uVar1 * ((pbVar4 + param_2)[1] - uVar2)) >> 0x10);
    }
    uVar3 = uVar3 + ((int)((param_3 & 0xffff) * (uVar2 - uVar3)) >> 0x10);
  }
  return uVar3 & 0xff;
}

