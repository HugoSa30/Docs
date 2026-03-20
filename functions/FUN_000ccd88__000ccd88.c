/*
 * Program: n42.bin
 * Function: FUN_000ccd88
 * Entry: 000ccd88
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ccd88(void)

{
  if ((B_sta == '\0') || (DAT_003fb4c5 != '\0')) {
    DAT_003fb4c4 = '\0';
  }
  else {
    DAT_003fb4c4 = '\x01';
  }
  DAT_003fb4c5 = B_sta;
  if (DAT_003fb4c4 != '\0') {
    _DAT_003fb4c8 = _TNNSTART;
  }
  FUN_000b1ce0(&DAT_003fb4c8);
  if ((_DAT_003fb4c8 == 0) && (DAT_003fb4c7 != '\0')) {
    DAT_003fb4c6 = true;
  }
  else {
    DAT_003fb4c6 = false;
  }
  DAT_003fb4c7 = '\x01' - (_DAT_003fb4c8 == 0);
  if ((bool)DAT_003fb4c6) {
    if (B_sta == '\0') {
      nnstart = 0;
    }
    else {
      nnstart = nmot_w;
    }
  }
  return;
}

