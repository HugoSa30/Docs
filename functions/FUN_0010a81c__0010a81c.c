/*
 * Program: n42.bin
 * Function: FUN_0010a81c
 * Entry: 0010a81c
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_0010a81c(int param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  
  iVar3 = *(int *)((uint)*(byte *)(param_1 + 5) * 4 + 0xf09940);
  uVar2 = 0;
  bVar1 = *(byte *)(param_1 + 6);
  uVar4 = 1 << (bVar1 & 0x3f);
  if ((uVar4 & *(ushort *)(iVar3 + 0x24)) == (uVar4 & 0xffff)) {
    _5();
    *(ushort *)(iVar3 + 0x24) = *(ushort *)(iVar3 + 0x24) & ~(ushort)uVar4;
    iVar3 = iVar3 + (uint)bVar1 * 0x10;
    uVar5 = *(ushort *)(iVar3 + 0x80) & 0xf0;
    *param_2 = *(undefined4 *)(iVar3 + 0x86);
    param_2[1] = *(undefined4 *)(iVar3 + 0x8a);
    *(ushort *)(iVar3 + 0x80) = *(ushort *)(iVar3 + 0x80) & 0xff0f;
    *(ushort *)(iVar3 + 0x80) = *(ushort *)(iVar3 + 0x80) | 0x40;
    _6();
    if (uVar5 == 0x60) {
      uVar2 = 8;
    }
    else if (uVar5 == 0x20) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

