/*
 * Program: n42.bin
 * Function: FUN_0009ed4c
 * Entry: 0009ed4c
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_0009ed4c(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 * 10 + 0x16c80);
  uVar2 = (uint)DAT_00016cf6;
  uVar3 = (uint)bVar1 - (bVar1 / uVar2) * uVar2;
  return (uint)*(ushort *)(param_1 * 10 + 0x16c7a) +
         (bVar1 / uVar2 - ((int)(-uVar3 & ~uVar3) >> 0x1f)) * param_2 * (uint)DAT_00016cf6 & 0xffff;
}

