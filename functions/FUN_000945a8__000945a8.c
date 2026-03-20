/*
 * Program: n42.bin
 * Function: FUN_000945a8
 * Entry: 000945a8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000945a8(void)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  uVar1 = 0;
  do {
    puVar2 = *(uint **)(&DAT_003fa1c8 + uVar1 * 4);
    puVar3 = puVar2 + 2;
    *puVar3 = *puVar3 & 0xfffffffd;
    *puVar3 = *puVar3 & 0xffff00bb;
    *puVar2 = *puVar2 & 0xf7ffffff;
    puVar2[1] = 0;
    uVar1 = uVar1 + 1 & 0xffff;
  } while (uVar1 < 2);
  return;
}

