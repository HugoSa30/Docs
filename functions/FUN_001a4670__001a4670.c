/*
 * Program: n42.bin
 * Function: FUN_001a4670
 * Entry: 001a4670
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001a4670(uint param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar2 = _DAT_003faf10 + param_1 * 0x18;
  bVar1 = *(byte *)(iVar2 + 0x11);
  uVar3 = (uint)*(byte *)(iVar2 + 0x12);
  iVar5 = *(int *)((uint)bVar1 * 4 + 0xf09940);
  *(undefined *)(_DAT_003fae80 + param_1 * 0x14 + 0xd) = 0;
  iVar4 = _DAT_003fae80 + param_1 * 0x14;
  *(byte *)(iVar4 + 0xf) = *(byte *)(iVar4 + 0xf) | 0x40;
  uVar6 = 1 << (uVar3 & 0x3f);
  if ((byte)(&UNK_003fae84)[(uVar3 + (uint)bVar1 * 0x10) * 2] == param_1) {
    iVar4 = iVar5 + uVar3 * 0x10;
    *(ushort *)(iVar4 + 0x80) = *(ushort *)(iVar4 + 0x80) & 0xff0f;
    if ((*(byte *)(iVar2 + 0x13) & 1) == 1) {
      *(ushort *)(iVar4 + 0x80) = *(ushort *)(iVar4 + 0x80) | 0x80;
    }
    _5();
    if ((uVar6 & *(ushort *)(iVar5 + 0x24)) == (uVar6 & 0xffff)) {
      *(ushort *)(iVar5 + 0x24) = *(ushort *)(iVar5 + 0x24) & ~(ushort)uVar6;
    }
    _6();
  }
  return 1;
}

