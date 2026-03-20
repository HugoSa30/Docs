/*
 * Program: n42.bin
 * Function: FUN_001b124c
 * Entry: 001b124c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001b124c(void)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  while ((*(int *)(_DAT_003fc720 + uVar2 * 0xc) == 0 ||
         (cVar1 = (*(code *)&SUB_00fb1134)(uVar2 & 0xff), cVar1 != '\0'))) {
    uVar2 = uVar2 + 1 & 0xffff;
    if (7 < uVar2) {
      return 1;
    }
  }
  return 0;
}

