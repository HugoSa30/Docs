/*
 * Program: n42.bin
 * Function: FUN_00143728
 * Entry: 00143728
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00143728(void)

{
  byte *in_r6;
  byte in_r8;
  int in_r11;
  
  if ((((in_r11 != 0) && ((DAT_003fdf23 >> 1 & 1) != 0)) && ((DAT_003fdf1b >> 1 & 1) != 0)) &&
     ((((DAT_003fdf27 >> 1 & 1) != 0 && ((DAT_003fdf25 >> 1 & 1) != 0)) &&
      (((DAT_003fdf29 >> 1 & 1) != 0 && ((DAT_003fdf1d >> 1 & 1) != 0)))))) {
    if ((DAT_003fd7fe != 0xff) && ((DAT_003fa67c & 0x40) != 0)) {
      DAT_003fd7fe = DAT_003fd7fe + 1;
      DAT_003fa67c = DAT_003fa67c & 0xbf;
    }
    if ((((((DAT_003fdf23 & 1) == 0) && ((DAT_003fdf1b & 1) == 0)) && ((DAT_003fdf27 & 1) == 0)) &&
        (((DAT_003fdf25 & 1) == 0 && ((DAT_003fdf29 & 1) == 0)))) && ((DAT_003fdf1d & 1) == 0)) {
      *in_r6 = in_r8 & 0xbf;
    }
    else if (DAT_001c1110 <= DAT_003fd7fe) {
      *in_r6 = in_r8 & 0xbf;
    }
  }
  return;
}

