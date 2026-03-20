/*
 * Program: n42.bin
 * Function: FUN_00109f08
 * Entry: 00109f08
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00109f08(int param_1)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  
  puVar3 = *(ushort **)(param_1 * 4 + 0xf09940);
  _5();
  *puVar3 = 0;
  *puVar3 = *puVar3 | 0x4000;
  *puVar3 = *puVar3 | 0x1000;
  do {
  } while ((*puVar3 & 0x100) == 0);
  *puVar3 = *puVar3 | 0x80;
  puVar3[3] = *(ushort *)(&UNK_003faef8 + param_1 * 2);
  puVar3[4] = *(ushort *)(&UNK_003faef0 + param_1 * 2);
  uVar2 = 0;
  do {
    puVar3[uVar2 * 8 + 0x40] = 0;
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x10);
  iVar1 = param_1 * 4;
  puVar3[8] = *(ushort *)(&UNK_003faed4 + iVar1);
  puVar3[9] = *(ushort *)(&UNK_003faed6 + iVar1);
  puVar3[10] = *(ushort *)(&UNK_003faedc + iVar1);
  puVar3[0xb] = *(ushort *)(&UNK_003faede + iVar1);
  puVar3[0xc] = *(ushort *)(&UNK_003faee4 + iVar1);
  puVar3[0xd] = *(ushort *)(&UNK_003faee6 + iVar1);
  puVar3[2] = *(ushort *)(&UNK_003faeec + param_1 * 2);
  puVar3[0x11] = *(ushort *)(&UNK_003faf4e + param_1 * 6) | *(ushort *)(&UNK_003faf50 + param_1 * 6)
  ;
  if (puVar3[0x10] != 0) {
    puVar3[0x10] = 0;
  }
  if (puVar3[0x12] != 0) {
    puVar3[0x12] = 0;
  }
  if ((*puVar3 & 0x100) != 0) {
    puVar3[0x13] = 0;
  }
  *puVar3 = *puVar3 & 0xefff;
  *puVar3 = *puVar3 & 0xbfff;
  _6();
  return;
}

