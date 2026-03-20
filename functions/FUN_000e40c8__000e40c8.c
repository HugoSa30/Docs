/*
 * Program: n42.bin
 * Function: FUN_000e40c8
 * Entry: 000e40c8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e40c8(void)

{
  dlahi_w = _dlahico_w;
  if (((DAT_001cb343 >> 1 & 1) != 0) && ((DAT_001cb343 & 1) != 0)) {
    dlahi_w = _dlahico2_w;
  }
  if (((DAT_001cb343 & 1) == 0) || ((DAT_001cb343 >> 2 & 1) == 0)) {
    dlahp_w = dlahpco_w;
    if ((DAT_001cb343 & 1) != 0) {
      dlahp_w = dlahpco2_w;
    }
  }
  else {
    dlahp_w = 0;
  }
  dlahi2_w = _dlahico2_w;
  if (((DAT_001cb343 >> 1 & 1) != 0) && (dlahi2_w = _dlahico_w, (DAT_001cb343 & 1) != 0)) {
    dlahi2_w = _dlahico2_w;
  }
  if (((DAT_001cb343 & 1) == 0) && ((DAT_001cb343 >> 2 & 1) != 0)) {
    dlahp2_w = 0;
  }
  else {
    dlahp2_w = dlahpco_w;
    if ((DAT_001cb343 & 1) != 0) {
      dlahp2_w = dlahpco2_w;
    }
  }
  DAT_005b9b44 = ushk_w;
  if ((DAT_001cb343 & 1) != 0) {
    DAT_005b9b44 = ushk2_w;
  }
  DAT_005b8d32 = B_sbbhk;
  if ((DAT_001cb343 & 1) != 0) {
    DAT_005b8d32 = B_sbbhk2;
  }
  DAT_005b8d31 = 1;
  return;
}

