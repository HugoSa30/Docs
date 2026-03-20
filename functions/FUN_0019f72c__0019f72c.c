/*
 * Program: n42.bin
 * Function: FUN_0019f72c
 * Entry: 0019f72c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019f72c(void)

{
  B_norm = 0;
  B_nachlauf = B_nachlauf;
  B_wakeup = 0;
  if ((_B_nlale & 0x8000) == 0) {
    if (DAT_005b8d39 == '\0') {
      func_0xff20ba70(0x21,0,0);
      func_0xff20ba70(0x11,1,0);
      DAT_005b8d39 = '\x01';
      B_hr = 0;
      DAT_003fc1d8 = 0;
      DAT_003fc1d9 = 0;
    }
    else {
      FUN_001277dc();
      DAT_003fc1da = 1;
    }
  }
  return;
}

