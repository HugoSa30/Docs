/*
 * Program: n42.bin
 * Function: FUN_0010a35c
 * Entry: 0010a35c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0010a35c(uint param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  
  (&DAT_003faf0c)[param_1 & 0xff] = param_2 | (&DAT_003faf0c)[param_1 & 0xff];
  iVar2 = *(int *)((param_1 & 0xff) * 4 + 0xf09940);
  bVar3 = 0;
  do {
    iVar1 = iVar2 + (uint)bVar3 * 0x10;
    if ((((*(ushort *)(iVar1 + 0x80) & 0xc0) == 0xc0) &&
        (DAT_00f09948 != (&UNK_003fae84)[((uint)bVar3 + (param_1 & 0xff) * 0x10) * 2])) &&
       (DAT_00f09949 != (&UNK_003fae84)[((uint)bVar3 + (param_1 & 0xff) * 0x10) * 2])) {
      *(ushort *)(iVar1 + 0x80) = *(ushort *)(iVar1 + 0x80) & 0xff0f;
      *(ushort *)(iVar1 + 0x80) = *(ushort *)(iVar1 + 0x80) | 0x80;
    }
    bVar3 = bVar3 + 1;
  } while (bVar3 < 0x10);
  return;
}

