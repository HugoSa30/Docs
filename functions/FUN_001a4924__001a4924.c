/*
 * Program: n42.bin
 * Function: FUN_001a4924
 * Entry: 001a4924
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_001a4924(int param_1,undefined4 *param_2,undefined4 *param_3,byte *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *(int *)((uint)*(byte *)(param_1 + 5) * 4 + 0xf09940);
  uVar4 = 0;
  bVar1 = *(byte *)(param_1 + 6);
  uVar6 = 1 << (bVar1 & 0x3f);
  if ((uVar6 & *(ushort *)(iVar5 + 0x24)) == (uVar6 & 0xffff)) {
    _5();
    *(ushort *)(iVar5 + 0x24) = *(ushort *)(iVar5 + 0x24) & ~(ushort)uVar6;
    iVar5 = iVar5 + (uint)bVar1 * 0x10;
    uVar3 = *(ushort *)(iVar5 + 0x80) & 0xf0;
    *(ushort *)(iVar5 + 0x80) = *(ushort *)(iVar5 + 0x80) & 0xff0f;
    uVar2 = FUN_0010a7f8(*(undefined4 *)(iVar5 + 0x82));
    *param_3 = uVar2;
    *param_2 = *(undefined4 *)(iVar5 + 0x86);
    param_2[1] = *(undefined4 *)(iVar5 + 0x8a);
    *param_4 = (byte)*(undefined2 *)(iVar5 + 0x80) & 0xf;
    *(ushort *)(iVar5 + 0x80) = *(ushort *)(iVar5 + 0x80) | 0x40;
    _6();
    if (uVar3 == 0x60) {
      uVar4 = 8;
    }
    else if (uVar3 == 0x20) {
      uVar4 = 1;
    }
  }
  return uVar4;
}

