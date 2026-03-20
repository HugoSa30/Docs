/*
 * Program: n42.bin
 * Function: FUN_001a47d8
 * Entry: 001a47d8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001a47d8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 1 << (*(byte *)(param_1 + 6) & 0x3f);
  iVar3 = *(int *)((uint)*(byte *)(param_1 + 5) * 4 + 0xf09940);
  _5();
  iVar1 = iVar3 + (uint)*(byte *)(param_1 + 6) * 0x10;
  *(ushort *)(iVar1 + 0x80) = *(ushort *)(iVar1 + 0x80) & 0xff0f;
  if ((*(byte *)(param_1 + 7) & 1) == 1) {
    *(ushort *)(iVar1 + 0x80) = *(ushort *)(iVar1 + 0x80) | 0x80;
  }
  if ((uVar2 & *(ushort *)(iVar3 + 0x24)) == (uVar2 & 0xffff)) {
    *(ushort *)(iVar3 + 0x24) = *(ushort *)(iVar3 + 0x24) & ~(ushort)uVar2;
  }
  _6();
  return;
}

