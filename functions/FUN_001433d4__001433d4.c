/*
 * Program: n42.bin
 * Function: FUN_001433d4
 * Entry: 001433d4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001433d4(void)

{
  byte bVar1;
  
  if (DAT_003fd803 != 0) {
    if (((DAT_003fd803 & 1) != 0) && ((DAT_003fdf2b >> 1 & 1) != 0)) {
      if ((DAT_003fd7ff != 0xff) && ((DAT_003fa67c & 1) != 0)) {
        DAT_003fd7ff = DAT_003fd7ff + 1;
        DAT_003fa67c = DAT_003fa67c & 0xfe;
      }
      if ((DAT_003fdf2b & 1) == 0) {
        DAT_003fd803 = DAT_003fd803 & 0xfe;
      }
      else if (DAT_001c1111 <= DAT_003fd7ff) {
        DAT_003fd803 = DAT_003fd803 & 0xfe;
      }
    }
    bVar1 = DAT_003fd803 & 0xfd;
    if ((DAT_003fd803 & 4) != 0) {
      if ((DIMCTESausbitsNOV1 & 1) == 0) {
        bVar1 = DAT_003fd803 & 0xfd | 4;
      }
      else {
        bVar1 = DAT_003fd803 & 0xf9;
      }
    }
    DAT_003fd803 = bVar1;
    if (((DAT_003fd803 & 8) != 0) &&
       ((bVar1 = DAT_003fdfa7 >> 1 & 1, bVar1 != 0 || ((DAT_003fdfa9 >> 1 & 1) != 0)))) {
      if ((DAT_003fd801 != 0xff) && ((DAT_003fa67c & 8) != 0)) {
        DAT_003fd801 = DAT_003fd801 + 1;
        DAT_003fa67c = DAT_003fa67c & 0xf7;
      }
      if ((bVar1 == 0) && ((DAT_003fdfa9 >> 1 & 1) == 0)) {
        DAT_003fd803 = DAT_003fd803 & 0xf7;
      }
      else if (DAT_001c1113 <= DAT_003fd801) {
        DAT_003fd803 = DAT_003fd803 & 0xf7;
      }
    }
    bVar1 = DAT_003fd803 & 0xef;
    if (((((DAT_003fd803 & 0x20) != 0) && ((DAT_003fdf5f >> 1 & 1) != 0)) &&
        ((DAT_003fdf5b >> 1 & 1) != 0)) &&
       ((((DAT_003fdf49 >> 1 & 1) != 0 && ((DAT_003fdf63 >> 1 & 1) != 0)) &&
        (((DAT_003fdf61 >> 1 & 1) != 0 &&
         (((DAT_003fdf5d >> 1 & 1) != 0 && ((DAT_003fdf4b >> 1 & 1) != 0)))))))) {
      if ((DAT_003fd800 != 0xff) && ((DAT_003fa67c & 0x20) != 0)) {
        DAT_003fd800 = DAT_003fd800 + 1;
        DAT_003fa67c = DAT_003fa67c & 0xdf;
      }
      if ((((((DAT_003fdf5f & 1) == 0) && ((DAT_003fdf5b & 1) == 0)) && ((DAT_003fdf49 & 1) == 0))
          && (((DAT_003fdf63 & 1) == 0 && ((DAT_003fdf61 & 1) == 0)))) &&
         (((DAT_003fdf5d & 1) == 0 && ((DAT_003fdf4b & 1) == 0)))) {
        bVar1 = DAT_003fd803 & 0xcf;
      }
      else if (DAT_001c1112 <= DAT_003fd800) {
        bVar1 = DAT_003fd803 & 0xcf;
      }
    }
    DAT_003fd803 = bVar1;
    if ((((DAT_003fd803 & 0x40) != 0) && ((DAT_003fdf23 >> 1 & 1) != 0)) &&
       (((DAT_003fdf1b >> 1 & 1) != 0 &&
        (((((DAT_003fdf27 >> 1 & 1) != 0 && ((DAT_003fdf25 >> 1 & 1) != 0)) &&
          ((DAT_003fdf29 >> 1 & 1) != 0)) && ((DAT_003fdf1d >> 1 & 1) != 0)))))) {
      if ((DAT_003fd7fe != 0xff) && ((DAT_003fa67c & 0x40) != 0)) {
        DAT_003fd7fe = DAT_003fd7fe + 1;
        DAT_003fa67c = DAT_003fa67c & 0xbf;
      }
      if ((((DAT_003fdf23 & 1) == 0) && ((DAT_003fdf1b & 1) == 0)) &&
         (((DAT_003fdf27 & 1) == 0 &&
          ((((DAT_003fdf25 & 1) == 0 && ((DAT_003fdf29 & 1) == 0)) && ((DAT_003fdf1d & 1) == 0))))))
      {
        DAT_003fd803 = DAT_003fd803 & 0xbf;
      }
      else if (DAT_001c1110 <= DAT_003fd7fe) {
        DAT_003fd803 = DAT_003fd803 & 0xbf;
      }
    }
  }
  return;
}

