/*
 * Program: n42.bin
 * Function: FUN_0017cc1c
 * Entry: 0017cc1c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017cc1c(void)

{
  g2korr = func_0xff2187cc(&LRSGKTM,tmot);
  g1korr = g2korr;
  if (g2korr < 0x81) {
    DAT_003f9bdc = DAT_003f9bdc | 1;
  }
  else {
    DAT_003f9bdc = DAT_003f9bdc & 0xfe;
    if ((uint)g2korr * (uint)FLRSG2K < 0x8000) {
      g2korr = (byte)((int)((uint)g2korr * (uint)FLRSG2K) >> 7);
    }
    else {
      g2korr = 0xff;
    }
  }
  frmx_w = _FRMAX;
  return;
}

