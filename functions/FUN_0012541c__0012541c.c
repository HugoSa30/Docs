/*
 * Program: n42.bin
 * Function: FUN_0012541c
 * Entry: 0012541c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012541c(void)

{
  uint uVar1;
  
  if (B_zagstp == 0) {
    zzylzag = zzyl;
    if (_DAT_003faa54 == 0xb) {
      FUN_001251d0();
    }
    else if (_DAT_003faa54 == 0x11) {
      FUN_001252dc();
    }
    else if (_DAT_003faa54 == 0x1e) {
      if (pausez_w == 1) {
        FUN_0012506c();
      }
      else if (pausez_w == 0) {
        FUN_00124f7c();
      }
    }
    flgstign_w = flgst_w;
    if ((DAT_001c1b1e >> 1 & 1) == 0) {
      flgstign_w = 0;
    }
    uVar1 = (uint)flgst_w;
    flgstinj_w = flgst_w;
    if ((DAT_001c1b1e >> 1 & 1) != 0) {
      flgstinj_w = 0;
    }
    if (0xff < uVar1) {
      uVar1 = 0xff;
    }
    B_mdzag = (byte)((uVar1 & 0xff) >> (zzylzag & 0x3f)) & 1;
  }
  return;
}

