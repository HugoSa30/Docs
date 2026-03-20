/*
 * Program: n42.bin
 * Function: FUN_000b5efc
 * Entry: 000b5efc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000b5efc(void)

{
  if (B_mdstop == 0) {
    if (((B_luerk != 0) || (B_dluerk != '\0')) && (B_tnalu == 0)) {
      DAT_003fa690 = fanalun;
    }
    B_analu = DAT_003fa690 != 0;
    if ((((bool)B_analu) && (FUN_000b1cc0(), B_analu != 0)) || (DAT_003fa68e == 0)) {
      DAT_003fa68d = '\0';
    }
    else {
      DAT_003fa68d = '\x01';
    }
    DAT_003fa68e = B_analu;
    if (((B_lustop == 0) && (DAT_003fa68d != '\0')) ||
       (((B_luerk != 0 || (B_dluerk != '\0')) && (B_tnalu != 0)))) {
      DAT_003fa68f = TNALU;
    }
    B_tnalu = DAT_003fa68f != '\0';
    if ((bool)B_tnalu) {
      FUN_000b1cc0(&DAT_003fa68f);
    }
    if (((B_luerk == 0) && (B_dluerk == '\0')) && (B_luaerk == 0)) {
      B_mderk = 0;
    }
    else {
      B_mderk = B_mderk;
    }
  }
  return;
}

