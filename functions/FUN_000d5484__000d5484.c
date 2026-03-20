/*
 * Program: n42.bin
 * Function: FUN_000d5484
 * Entry: 000d5484
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000d5484(void)

{
  canbstat = func_0x0103319c(0);
  if (B_fgdcan == '\0') {
    DAT_003f9b83 = TDCANBH;
    DAT_003f9b82 = TDCANB3;
    DAT_003f9b81 = TDCANB1;
  }
  else {
    if ((canbstat == 0) && (B_edprcanb == 0)) {
      if (DAT_003f9b83 == '\0') {
        DAT_003f9b84 = DAT_003f9b84 | 4;
      }
      else {
        DAT_003f9b83 = DAT_003f9b83 + -1;
      }
    }
    else {
      DAT_003f9b83 = TDCANBH;
    }
    if ((canbstat & 1) == 0) {
      DAT_003f9b82 = TDCANB3;
    }
    else if (DAT_003f9b82 == '\0') {
      DAT_003f9b84 = DAT_003f9b84 | 2;
    }
    else {
      DAT_003f9b82 = DAT_003f9b82 + -1;
    }
    if ((canbstat & 4) == 0) {
      DAT_003f9b81 = TDCANB1;
    }
    else if (DAT_003f9b81 == '\0') {
      DAT_003f9b84 = DAT_003f9b84 | 1;
    }
    else {
      DAT_003f9b81 = DAT_003f9b81 + -1;
    }
  }
  return;
}

