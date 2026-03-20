/*
 * Program: n42.bin
 * Function: FUN_001b0cc0
 * Entry: 001b0cc0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b0cc0(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(_DAT_003fc674 + uVar1 * 0xc) != 0) {
      (*(code *)&SUB_00fb0ba0)(uVar1 & 0xff);
    }
    uVar1 = uVar1 + 1 & 0xffff;
  } while (uVar1 < 8);
  return;
}

