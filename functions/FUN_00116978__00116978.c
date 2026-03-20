/*
 * Program: n42.bin
 * Function: FUN_00116978
 * Entry: 00116978
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00116978(void)

{
  uint uVar1;
  
  if ((raster_um & 3) == 3) {
    uVar1 = (uint)aktqu_uc;
    n_flags_uc = (&DAT_001c0d4c)[uVar1];
    spsn_uc = (&DAT_001c0d84)[uVar1];
    nmot_uc = (&DAT_001c0d5c)[uVar1];
    mfgr_uc = (&DAT_001c0d1c)[uVar1];
    mmsr_uc = (&DAT_001c0d2c)[uVar1];
    msgs_uc = (&DAT_001c0d3c)[uVar1];
    spnst08_uc = FUN_00110958(&DAT_001c0d78,spsn_uc);
    nmst08_uc = FUN_00110958(&DAT_001c0d6c,nmot_uc);
    if ((n_flags_uc & 2) == 0) {
      DAT_003f98b5 = FUN_00110b18(&DAT_001c0c90,DAT_001c0d6c,spnst08_uc);
    }
    else {
      DAT_003f98b5 = FUN_00110b18(&DAT_001c0cd0,DAT_001c0d6c,spnst08_uc);
    }
    mped_uc = DAT_003f98b5;
    if (mmsr_uc < mfgr_uc) {
      DAT_003f98b4 = mfgr_uc;
    }
    else {
      DAT_003f98b4 = mmsr_uc;
    }
    if (DAT_003f98b4 < msgs_uc) {
      DAT_003f98b4 = msgs_uc;
    }
    if (DAT_003f98b4 < DAT_003f98b5) {
      DAT_003f98b4 = DAT_003f98b5;
    }
    mz_uc = DAT_003f98b4;
    mdst08_uc = FUN_00110958(&DAT_001c0d10,DAT_003f98b4);
    mzo_uc = FUN_00110b18(&DAT_001c0c50,DAT_001c0d6c,mdst08_uc,nmst08_uc);
    abmzul_uc = (ushort)mz_uc + (ushort)mzo_uc * 4 + (ushort)mped_uc * 0x10;
  }
  return;
}

