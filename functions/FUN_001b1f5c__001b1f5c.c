/*
 * Program: n42.bin
 * Function: FUN_001b1f5c
 * Entry: 001b1f5c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b1f5c(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(_DAT_003fc884 + uVar1 * 0xc) != 0) {
      (*(code *)&SUB_00fb1e60)(uVar1 & 0xff);
    }
    uVar1 = uVar1 + 1 & 0xffff;
  } while (uVar1 < 4);
  return;
}

