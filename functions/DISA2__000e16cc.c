/*
 * Program: n42.bin
 * Function: DISA2
 * Entry: 000e16cc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void DISA2(void)

{
  if ((B_stend != '\0') || (B_btdisa != '\0')) {
    DISA();
    if ((B_di_ausschalt & 8) != 0) {
      if (DI_HYST < Sollwert) {
        B_di_ausschalt = B_di_ausschalt & 0xf7 | B_di_einschalt;
      }
      else {
        B_di_ausschalt = B_di_ausschalt & 0xf7 | B_di_ausschalt;
      }
    }
    if (DI_SCHALT == '\0') {
      if (DAT_003fc1cc == '\0') {
        FUN_000e1150();
      }
      else {
        FUN_000e2a70(0,0);
      }
    }
    else {
      if ((((int)(short)(ushort)DAT_003fab8f + (uint)DI_HYST < (uint)(int)(short)(ushort)Sollwert)
          || ((B_di_ausschalt & B_di_einschalt) != 0)) && ((B_di_ausschalt & B_di_ausschalt) == 0))
      {
        FUN_000e141c();
        DAT_003fab8f = 0xff;
      }
      else if ((((int)(short)(ushort)Sollwert <
                 (int)((int)(short)(ushort)DAT_003fab8f - (uint)DI_HYST)) ||
               ((B_di_ausschalt & B_di_ausschalt) != 0)) && ((B_di_ausschalt & B_di_einschalt) == 0)
              ) {
        FUN_000e1574();
        DAT_003fab8f = 0;
      }
      B_su = (B_di_ausschalt & B_disa) == 0;
    }
  }
  return;
}

