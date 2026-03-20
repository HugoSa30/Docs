/*
 * Program: n42.bin
 * Function: FUN_0019f91c
 * Entry: 0019f91c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0019f91c(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0x1f7cc;
  do {
    FUN_0019f7f4(iVar1 + uVar2 * 0x20);
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 2);
  return;
}

