/*
 * Program: n42.bin
 * Function: FUN_001b1ad4
 * Entry: 001b1ad4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001b1ad4(void)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  while ((*(int *)(_DAT_003fc7f4 + uVar2 * 0xc) == 0 ||
         (cVar1 = (*(code *)&SUB_00fb19a8)
                            (uVar2 & 0xff,*(undefined *)(_DAT_003fc7f4 + uVar2 * 0xc + 10)),
         cVar1 != '\0'))) {
    uVar2 = uVar2 + 1 & 0xffff;
    if (0x1f < uVar2) {
      return 1;
    }
  }
  return 0;
}

