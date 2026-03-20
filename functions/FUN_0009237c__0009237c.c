/*
 * Program: n42.bin
 * Function: FUN_0009237c
 * Entry: 0009237c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009237c(void)

{
  if ((DAT_003f9f90 == '\n') && ((*(ushort *)(_DAT_003f9f88 + 0xc) & 0x40) != 0)) {
    DAT_003f9f73 = (undefined)*(undefined2 *)(_DAT_003f9f88 + 0xe);
    FUN_00092210(1);
    if (DAT_003f9f2c != '\0') {
      DAT_003f9f2c = '\0';
      FUN_000926a8(DAT_003f9f2b,1);
    }
  }
  return;
}

