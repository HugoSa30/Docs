/*
 * Program: n42.bin
 * Function: FUN_001b1930
 * Entry: 001b1930
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b1930(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(_DAT_003fc7f4 + uVar1 * 0xc) != 0) {
      (*(code *)&SUB_00fb1820)(uVar1 & 0xff,*(undefined *)(_DAT_003fc7f4 + uVar1 * 0xc + 10));
    }
    uVar1 = uVar1 + 1 & 0xffff;
  } while (uVar1 < 0x20);
  return;
}

