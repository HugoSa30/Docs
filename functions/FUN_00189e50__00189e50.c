/*
 * Program: n42.bin
 * Function: FUN_00189e50
 * Entry: 00189e50
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00189e50(int param_1)

{
  if (param_1 == 1) {
    B_fasla = 0;
    SLSlokBits = SLSlokBits & ~(B_dslset|B_dslreset|B_sldsl4|B_slkt);
    DAT_005bb7cd = 0;
    DAT_005bb7ce = 0;
    B_slpoff = 0;
    DAT_005bb7cc = 0;
    B_slp = 0;
    DAT_005bb7c9 = 0;
    B_sls = 0;
    DAT_005bb7d1 = DAT_005bb7d1 & 0xfd;
    B_slv = 0;
    _DAT_005bb85c = 0;
    fslpdyn = 0;
    imlsle_w = 0;
    imlsla_w = 0;
    DAT_005bb8d4 = 0;
    _DAT_005bb8d8 = 0;
    B_msloff = 0;
    B_mslon = 0;
    DAT_005bb7cf = DAT_005bb7cf & 0x80;
    fmsldyn = 0;
    DAT_005bb85e = 0;
    _DAT_005bb8dc = 0;
    DAT_005bb8e0 = 0;
    msl = 0;
    DAT_005bb8e4 = 0;
    DAT_005bb8e8 = 0;
    msl2 = 0;
    flmssl = 0;
    DAT_005bb7d0 = DAT_005bb7d0 & 0xe0;
    B_lmsslof = 0;
  }
  DAT_005bb7c5 = TSLABB;
  DAT_005bb7c7 = TVSLVON;
  DAT_005bb7c6 = TSLUBST;
  DAT_005bb7c8 = TVSLVOFF;
  if ((B_dslsp4 == '\0') || (B_slsfz == '\0')) {
    DAT_005bb7cf = DAT_005bb7cf & 0x7f;
  }
  else {
    DAT_005bb7cf = DAT_005bb7cf | 0x80;
  }
  B_slsadap = '\x01' - ((DAT_001cb363 & 0x40) == 0);
  B_slsoff = 1;
  flamsl_w = 0x1000;
  flamsl2_w = 0x1000;
  DAT_005bb7ca = TLMSSLAB;
  DAT_005bb860 = 0xffff;
  return;
}

