/*
 * Program: n42.bin
 * Function: FUN_000d22d4
 * Entry: 000d22d4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d22d4(void)

{
  FUN_000f3ae4(0,0x1cb38,&DAT_003fb0aa,1,10000,4000);
  if (DAT_003fb0ac != '\x02') {
    if (DAT_003fb0ac == '\0') {
      if (_DAT_003fb0aa < 0x1901) {
        vroh_w = FUN_000b1798(_AIMV,_DAT_003fb0aa * 10);
      }
      else {
        vroh_w = 0;
      }
    }
    else {
      vroh_w = 0;
    }
  }
  return;
}

