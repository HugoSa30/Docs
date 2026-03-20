/*
 * Program: n42.bin
 * Function: FUN_001e92ac
 * Entry: 001e92ac
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001e92ac(uint param_1,uint param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  *param_4 = (param_1 & 0xffff) * (param_2 & 0xffff);
  *param_3 = (param_1 >> 0x10) * (param_2 >> 0x10);
  uVar3 = (param_1 & 0xffff) * (param_2 >> 0x10);
  uVar1 = uVar3 + (param_1 >> 0x10) * (param_2 & 0xffff);
  if (uVar1 < uVar3) {
    iVar2 = 0x10000;
  }
  uVar3 = uVar1 * 0x10000 + *param_4;
  *param_4 = uVar3;
  *param_3 = (uint)(uVar3 < uVar1 * 0x10000) + iVar2 + *param_3 + (uVar1 >> 0x10);
  return;
}

