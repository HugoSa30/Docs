/*
 * Program: n42.bin
 * Function: FUN_000f5b10
 * Entry: 000f5b10
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f5b10(int param_1,int param_2)

{
  byte bVar1;
  
  param_2 = param_2 * 0x70;
  bVar1 = *(byte *)(_DAT_003fc5b0 + param_1);
  *(ushort *)(&UNK_003fc40a + param_2) = *(short *)(&UNK_003fc40a + param_2) - (ushort)bVar1;
  *(ushort *)(&UNK_003fc40c + param_2) = *(short *)(&UNK_003fc40c + param_2) - (ushort)bVar1;
  *(ushort *)(&UNK_003fc40e + param_2) = *(short *)(&UNK_003fc40e + param_2) + (ushort)bVar1;
  *(ushort *)(&UNK_003fc410 + param_2) = *(short *)(&UNK_003fc410 + param_2) + (ushort)bVar1;
  return;
}

