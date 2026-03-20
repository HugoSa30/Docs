/*
 * Program: n42.bin
 * Function: FUN_000f4ac8
 * Entry: 000f4ac8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000f4ac8(void)

{
  uint uVar1;
  
  uVar1 = (*(code *)&SUB_00064a1c)(1);
  return (_DAT_003fc328 / *(byte *)(_DAT_003fc2c0 + 0x10)) * 0x78 + (uVar1 & 0xffff);
}

