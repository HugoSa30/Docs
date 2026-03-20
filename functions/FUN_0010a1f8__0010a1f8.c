/*
 * Program: n42.bin
 * Function: FUN_0010a1f8
 * Entry: 0010a1f8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0010a1f8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 < (int)(uint)DAT_00f03659) {
    iVar1 = _DAT_003faf14 + (param_1 - (uint)DAT_00f03658 & 0xff) * 0x14;
    if ((*(byte *)(iVar1 + 0xf) & 1) != 0) {
      return *(undefined4 *)(iVar1 + 8);
    }
    uVar2 = *(undefined4 *)
             (*(int *)((uint)*(byte *)(iVar1 + 0xd) * 4 + 0xf09940) +
              (uint)*(byte *)(iVar1 + 0xe) * 0x10 + 0x82);
  }
  else {
    iVar1 = _DAT_003faf18 + (param_1 - (uint)DAT_00f03659 & 0xff) * 0x14;
    uVar2 = *(undefined4 *)
             (*(int *)((uint)*(byte *)(iVar1 + 0xd) * 4 + 0xf09940) +
              (uint)*(byte *)(iVar1 + 0xc) * 0x10 + 0x82);
  }
  uVar2 = FUN_0010a7f8(uVar2);
  return uVar2;
}

