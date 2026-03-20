/*
 * Program: n42.bin
 * Function: FUN_00115fa0
 * Entry: 00115fa0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00115fa0(void)

{
  uint uVar1;
  
  if ((raster_um & 3) == 3) {
    uVar1 = (uint)aktqu_uc;
    DAT_005b8fe4 = (&DAT_001c09b0)[uVar1];
    DAT_005b8fba = (&DAT_001c09a0)[uVar1];
    DAT_005b9248 = *(ushort *)(&DAT_001c09c0 + uVar1 * 2);
    DAT_003fbe7f = (&DAT_001c0990)[uVar1] == -0x6a;
    DAT_003f98ab = 0;
    if (((_DAT_001c09e0 < DAT_005b9248) && ((DAT_005b8fe4 & 0x80) != 0)) &&
       ((DAT_005b8fe4 & 1) == 0)) {
      DAT_003fbe80 = '\x01';
      if ((bool)DAT_003fbe7f) {
        DAT_003f98ab = DAT_005b8fba;
      }
    }
    else {
      DAT_003fbe80 = '\0';
    }
    mfgr_uc = DAT_003f98ab;
    abfgrc_uc = (word)DAT_003f98ab;
    if (DAT_003fbe80 != '\0') {
      abfgrc_uc = DAT_003f98ab | 0x600;
    }
    abfgrc_uc = abfgrc_uc | (ushort)aktqu_uc << 0xc;
  }
  return;
}

