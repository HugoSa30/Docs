/*
 * Program: n42.bin
 * Function: FUN_0010a2c4
 * Entry: 0010a2c4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010a2c4(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  
  if (param_1 < (int)(uint)DAT_00f03659) {
    iVar2 = _DAT_003faf14 + (param_1 - (uint)DAT_00f03658 & 0xff) * 0x14;
    bVar1 = *(byte *)(iVar2 + 0xe);
  }
  else {
    iVar2 = _DAT_003faf18 + (param_1 - (uint)DAT_00f03659 & 0xff) * 0x14;
    bVar1 = *(byte *)(iVar2 + 0xc);
  }
  iVar2 = *(int *)((uint)*(byte *)(iVar2 + 0xd) * 4 + 0xf09940) + (uint)bVar1 * 0x10;
  *param_2 = *(undefined4 *)(iVar2 + 0x86);
  param_2[1] = *(undefined4 *)(iVar2 + 0x8a);
  return;
}

