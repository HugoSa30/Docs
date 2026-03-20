/*
 * Program: n42.bin
 * Function: FUN_000f6dd4
 * Entry: 000f6dd4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f6dd4(void)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  while ((*(undefined **)(_DAT_003fc5a8 + uVar2 * 0xc) != &DAT_00304000 ||
         (cVar1 = (*(code *)&SUB_00066c00)
                            (_DAT_003fc5a8 + uVar2 * 0xc,&UNK_003fc3e8 + uVar2 * 0x70,uVar2 & 0xff),
         cVar1 == '\0'))) {
    uVar2 = uVar2 + 1 & 0xffff;
    if (3 < uVar2) {
      return 0;
    }
  }
  return 1;
}

