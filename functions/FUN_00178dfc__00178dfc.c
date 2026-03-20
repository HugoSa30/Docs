/*
 * Program: n42.bin
 * Function: FUN_00178dfc
 * Entry: 00178dfc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00178dfc(void)

{
  FUN_00178ce4();
  if (B_tmkr == '\0') {
    DAT_003fb16d = TMKR;
  }
  else {
    DAT_003fb16d = TMKR - 3;
  }
  B_tmkr = DAT_003fb16d <= tmot;
  ksb = 0xff;
  ksa = 0xff;
  ksdefb = 0xff;
  ksdefa = 0xff;
  if ((DAT_003fdf3f & 1) == 0) {
    if ((DAT_003fdf41 & 1) == 0) {
      if ((KSZA == '\x03') && ((DAT_003fdf43 & 1) != 0)) {
        ksdefa = 2;
        ksa = DAT_001c8163;
      }
    }
    else if (((DAT_003fdf43 & 1) == 0) || (KSZA != '\x03')) {
      ksdefa = 1;
      ksa = DAT_001c8162;
    }
  }
  else if (((DAT_003fdf41 & 1) == 0) && (((DAT_003fdf43 & 1) == 0 || (KSZA != '\x03')))) {
    ksdefa = 0;
    ksa = DAT_001c8161;
  }
  if (KSZA == '\x04') {
    if ((DAT_003fdf43 & 1) == 0) {
      if ((DAT_003fdf45 & 1) != 0) {
        ksdefb = 3;
        ksb = DAT_001c8164;
      }
    }
    else if ((DAT_003fdf45 & 1) == 0) {
      ksdefb = 2;
      ksb = DAT_001c8163;
    }
  }
  return;
}

