/*
 * Program: n42.bin
 * Function: FUN_001158ac
 * Entry: 001158ac
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001158ac(void)

{
  tpust_c_ur = 0xff;
  tpu_c_ur = 0xff;
  tpuca_c_ur = 0xff;
  tpucr_c_ur = 0xff;
  tpura_c_ur = 0xff;
  _tdifs1_ur = 0xffffffff;
  c720alt_ur = 0xff;
  _tc72alt_ur = 0xffffffff;
  zsytp1_um = 0x3c;
  zsytp2_um = 0xc3;
  if (e_tpu_um == '\0') {
    tpurstc_um = 0;
  }
  else {
    e_tpu_um = '\0';
    if (tpurstc_um < DAT_001ce7aa) {
      tpurstc_um = tpurstc_um + 1;
    }
    else {
      _DAT_003fffe8 = 0xbb44e169;
      FUN_00110cc4(0x12d);
      FUN_00110efc(0x12d);
    }
  }
  return;
}

