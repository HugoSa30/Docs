/*
 * Program: n42.bin
 * Function: FUN_00106d9c
 * Entry: 00106d9c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00106d9c(void)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = 0;
  do {
    puVar2 = (uint *)(&DAT_005b800c)[uVar1];
    puVar2[2] = puVar2[2] & 0xfffffffd;
    puVar2[2] = puVar2[2] & 0xffff00bb;
    *puVar2 = *puVar2 & 0xf7ffffff;
    puVar2[1] = 0;
    uVar1 = uVar1 + 1 & 0xffff;
  } while (uVar1 < 2);
  return;
}

