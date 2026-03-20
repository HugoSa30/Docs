/*
 * Program: n42.bin
 * Function: FUN_0010ab7c
 * Entry: 0010ab7c
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_0010ab7c(int param_1,undefined4 *param_2,undefined4 param_3,ushort param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  
  uVar4 = (uint)*(byte *)(param_1 + 5);
  if ((((&DAT_003faf0c)[uVar4] != '\0') &&
      (DAT_00f09948 != (&UNK_003fae84)[((uint)*(byte *)(param_1 + 6) + uVar4 * 0x10) * 2])) &&
     (DAT_00f09949 != (&UNK_003fae84)[((uint)*(byte *)(param_1 + 6) + uVar4 * 0x10) * 2])) {
    return 0;
  }
  iVar3 = *(int *)(uVar4 * 4 + 0xf09940);
  bVar1 = *(byte *)(param_1 + 6);
  uVar4 = 1 << (bVar1 & 0x3f);
  _5();
  if ((uVar4 & *(ushort *)(iVar3 + 0x24)) == (uVar4 & 0xffff)) {
    *(ushort *)(iVar3 + 0x24) = *(ushort *)(iVar3 + 0x24) & ~(ushort)uVar4;
  }
  iVar3 = iVar3 + (uint)bVar1 * 0x10;
  *(ushort *)(iVar3 + 0x80) = *(ushort *)(iVar3 + 0x80) & 0xff0f;
  puVar5 = (ushort *)(iVar3 + 0x80);
  *(ushort *)(iVar3 + 0x80) = *(ushort *)(iVar3 + 0x80) | 0x80;
  uVar2 = _8(param_3,*(undefined *)(param_1 + 4));
  *(undefined4 *)(iVar3 + 0x82) = uVar2;
  *(undefined4 *)(iVar3 + 0x86) = *param_2;
  *(undefined4 *)(iVar3 + 0x8a) = param_2[1];
  *puVar5 = *puVar5 & 0xfff0;
  *puVar5 = *puVar5 | param_4 & 0xf;
  *puVar5 = *puVar5 | 0xc0;
  _6();
  return 1;
}

