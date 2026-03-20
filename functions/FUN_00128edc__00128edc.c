/*
 * Program: n42.bin
 * Function: FUN_00128edc
 * Entry: 00128edc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00128edc(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = uVar2 * 4;
    *(undefined2 *)(&UNK_003fa072 + iVar1) = *(undefined2 *)(&DAT_001ce6d4 + iVar1);
    *(undefined2 *)(&UNK_003fa074 + iVar1) = *(undefined2 *)(&DAT_001ce6d6 + iVar1);
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x10);
  return;
}

