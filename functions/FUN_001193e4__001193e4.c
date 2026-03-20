/*
 * Program: n42.bin
 * Function: FUN_001193e4
 * Entry: 001193e4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001193e4(int param_1)

{
  if (param_1 == 0x4002) {
    DAT_003f9ba8 = B_ko << 7 | (B_br & 1) << 4 | (B_bl & 1) << 3 | (B_kuppl & 1) << 2 |
                   (B_estart & 1) << 1 | B_kl15 & 1;
  }
  else if (param_1 == 0x4005) {
    DAT_003f9bac = B_hshe << 7 | (B_hshe2 & 1) << 6 | (B_hsve & 1) << 5 | (B_hsve2 & 1) << 4 |
                   (B_koe & 1) << 3 | (B_slp & 1) << 2 | (B_slv & 1) << 1;
    DAT_003f9bad = B_sta << 7 | (B_etr & 1) << 6 | (B_ekp & 1) << 5 | (B_ebl & 1) << 4 |
                   (B_akr & 1) << 3;
  }
  else if (param_1 == 0x400c) {
    DAT_003f9bb4 = B_krdws & 1;
  }
  else if (param_1 == 0x400d) {
    DAT_003f9bb8 = B_mil & 1;
  }
  else if (param_1 == 0x400e) {
    DAT_003f9bbc = B_fs & 1;
  }
  else if (param_1 == 0x400f) {
    RV_B_ECULOCK = B_eculock & 1;
    DAT_003f9bc1 = B_lrnrdy & 1;
    DAT_003f9bc2 = B_lltd & 1;
    DAT_003f9bc3 = B_llk & 1;
    DAT_003f9bc4 = B_teakt & 1;
    RV_B_VVTNOTL = B_vvtnotl & 1;
    DAT_003f9bc6 = B_nvrbupok & 1;
  }
  else if (param_1 == 0x4010) {
    DAT_003f9bc8 = B_atmtpa & 1;
    DAT_003f9bc9 = B_atmtpk & 1;
    DAT_003f9bca = B_kh & 1;
    DAT_003f9bcb = B_nsub & 1;
    DAT_003f9bcc = B_te & 1;
  }
  else if (param_1 == 0x4012) {
    DAT_003f9bd0 = B_ssll & 1;
    DAT_003f9bd1 = B_tdadon & 1;
  }
  else if (param_1 == 0x4007) {
    DAT_003f9bb0 = B_lr << 7 | (B_lr2 & 1) << 6 | (B_sbbvk & 1) << 5 | (B_sbbvk2 & 1) << 4 |
                   (B_sbbhk & 1) << 3 | (B_sbbhk2 & 1) << 2 | (B_vl & 1) << 1 | B_ll & 1;
    DAT_003f9bb1 = B_lrnrdy << 7 | (B_sa & 1) << 6 | (B_tehb & 1) << 5 | (B_eculock & 1) << 4 |
                   (B_pn & 1) << 3 | (B_kd & 1) << 2;
  }
  return;
}

