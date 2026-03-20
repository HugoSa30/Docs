/*
 * Program: n42.bin
 * Function: FUN_001e1bc4
 * Entry: 001e1bc4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e1bc4(void)

{
  char cVar1;
  
  _DAT_00305014 = _DAT_00305014 | 0x100;
  _DAT_00305008 = (undefined2)_DAT_00fe1804;
  _DAT_0030500a = 8;
  DAT_003fbac1 = 0;
  if (DAT_003fbac2 != 0) {
    do {
      do {
        cVar1 = FUN_001e19b4((&DAT_003fbad6)[DAT_003fbac1]);
      } while (cVar1 == '\0');
      DAT_003fbac1 = DAT_003fbac1 + 1;
    } while (DAT_003fbac1 < DAT_003fbac2);
  }
  do {
    cVar1 = FUN_001e1aac();
  } while (cVar1 == '\0');
  return;
}

