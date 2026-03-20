/*
 * Program: n42.bin
 * Function: FUN_000f5b6c
 * Entry: 000f5b6c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000f5b6c(uint param_1,int param_2,int param_3)

{
  int iVar1;
  
  param_3 = param_3 * 0x70;
  iVar1 = param_2 * 6 + param_3;
  if ((byte)(&DAT_003fc3e0)[iVar1 + 0x1e] == param_1) {
    *(ushort *)(&UNK_003fc40a + param_3) = (ushort)(byte)(&DAT_003fc3e0)[iVar1 + 0x1f];
    *(ushort *)(&UNK_003fc40c + param_3) = (ushort)(byte)(&DAT_003fc3e0)[iVar1 + 0x20];
    *(ushort *)(&UNK_003fc40e + param_3) = (ushort)(byte)(&DAT_003fc3e0)[iVar1 + 0x21];
    *(undefined2 *)(&UNK_003fc410 + param_3) = *(undefined2 *)(&DAT_003fc3e0 + iVar1 + 0x22);
  }
  return;
}

