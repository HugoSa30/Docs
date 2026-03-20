/*
 * Program: n42.bin
 * Function: FUN_0013b668
 * Entry: 0013b668
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013b668(undefined4 param_1,byte *param_2)

{
  if ((((*param_2 >> 2 & 1) == 0) && ((DAT_003fdf61 & 1) != 0)) && ((char)DAT_003fdf61 < '\0')) {
    B_dlahini = B_dlahini | B_dlahini2;
    if ((*param_2 >> 4 & 1) == 0) {
      dlahini2_w = 0;
    }
    else {
      dlahini2_w = _DLAHINI2;
    }
    _DAT_003fb674 = (int)(short)dlahini2_w << 0x10;
    _dlahico2_w = dlahini2_w;
  }
  return;
}

