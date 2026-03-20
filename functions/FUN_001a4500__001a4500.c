/*
 * Program: n42.bin
 * Function: FUN_001a4500
 * Entry: 001a4500
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_001a4500(int param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)*(byte *)(param_1 + 5);
  if ((((&DAT_003faf0c)[uVar2] != '\0') &&
      (DAT_00f09948 != (&UNK_003fae84)[((uint)*(byte *)(param_1 + 6) + uVar2 * 0x10) * 2])) &&
     (DAT_00f09949 != (&UNK_003fae84)[((uint)*(byte *)(param_1 + 6) + uVar2 * 0x10) * 2])) {
    return 0;
  }
  iVar3 = *(int *)(uVar2 * 4 + 0xf09940);
  bVar1 = *(byte *)(param_1 + 6);
  uVar2 = 1 << (bVar1 & 0x3f);
  _5();
  if ((uVar2 & *(ushort *)(iVar3 + 0x24)) == (uVar2 & 0xffff)) {
    *(ushort *)(iVar3 + 0x24) = *(ushort *)(iVar3 + 0x24) & ~(ushort)uVar2;
  }
  iVar3 = iVar3 + (uint)bVar1 * 0x10;
  *(ushort *)(iVar3 + 0x80) = *(ushort *)(iVar3 + 0x80) & 0xff0f;
  *(ushort *)(iVar3 + 0x80) = *(ushort *)(iVar3 + 0x80) | 0x80;
  *(undefined4 *)(iVar3 + 0x86) = *param_2;
  *(undefined4 *)(iVar3 + 0x8a) = param_2[1];
  *(ushort *)(iVar3 + 0x80) = *(ushort *)(iVar3 + 0x80) | 0xc0;
  _6();
  return 1;
}

