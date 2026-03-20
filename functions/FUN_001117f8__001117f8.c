/*
 * Program: n42.bin
 * Function: FUN_001117f8
 * Entry: 001117f8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001117f8(void)

{
  mzf_ur = 0xff;
  mzf_l_ur = 0xff;
  mzf_p_ur = 0xff;
  _DAT_003f98aa = 0;
  if (DAT_001ce2b6 != 0) {
    do {
      (&UNK_003f9944)[DAT_003f98ab] = 0xff;
      _DAT_003f98aa = _DAT_003f98aa + 1;
    } while (DAT_003f98ab < DAT_001ce2b6);
  }
  return;
}

