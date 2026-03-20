/*
 * Program: n42.bin
 * Function: FUN_001a37fc
 * Entry: 001a37fc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a37fc(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = (param_2 - DAT_00f03658 & 0xff) * 0x14;
  iVar1 = _DAT_003faf14 + iVar4;
  if ((((&DAT_003faf0c)[*(byte *)(iVar1 + 0xd)] == '\0') || (DAT_00f09948 == param_2)) ||
     (DAT_00f09949 == param_2)) {
    iVar7 = (param_1 - (uint)DAT_00f03659 & 0xff) * 0x14;
    iVar3 = *(int *)((uint)*(byte *)(_DAT_003faf18 + iVar7 + 0xd) * 4 + 0xf09940);
    iVar6 = *(int *)((uint)*(byte *)(iVar1 + 0xd) * 4 + 0xf09940);
    iVar5 = iVar6 + (uint)*(byte *)(iVar1 + 0xe) * 0x10;
    *(ushort *)(iVar5 + 0x80) = *(ushort *)(iVar5 + 0x80) & 0xff0f;
    *(ushort *)(iVar5 + 0x80) = *(ushort *)(iVar5 + 0x80) | 0x80;
    uVar2 = _8(param_3,*(undefined *)(iVar1 + 0xc));
    *(undefined4 *)(iVar5 + 0x82) = uVar2;
    iVar6 = iVar6 + (uint)*(byte *)(_DAT_003faf14 + iVar4 + 0xe) * 0x10;
    iVar3 = iVar3 + (uint)*(byte *)(_DAT_003faf18 + iVar7 + 0xc) * 0x10;
    *(undefined4 *)(iVar6 + 0x86) = *(undefined4 *)(iVar3 + 0x86);
    *(undefined4 *)(iVar6 + 0x8a) = *(undefined4 *)(iVar3 + 0x8a);
    *(ushort *)(iVar5 + 0x80) = *(ushort *)(iVar5 + 0x80) | 0xc0;
  }
  return;
}

