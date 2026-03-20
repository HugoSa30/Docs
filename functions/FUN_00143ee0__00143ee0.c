/*
 * Program: n42.bin
 * Function: FUN_00143ee0
 * Entry: 00143ee0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00143ee0(void)

{
  if ((bbwuc == 0) && (B_nowuc == '\0')) {
    if (B_stend == '\0') {
      tmstem = tmot;
    }
    else if ((uint)tmstem < (uint)DAT_001c111a) {
      B_nowuc = '\0';
      if (((uint)TMWUC < (uint)tmot) &&
         ((int)(uint)DAT_001c1118 <= (int)((uint)tmot - (uint)tmstem))) {
        bbwuc = B_wuc;
        FUN_00142f24();
        if (wuccnt != -1) {
          wuccnt = wuccnt + '\x01';
        }
      }
    }
    else {
      B_nowuc = '\x01';
    }
  }
  return;
}

