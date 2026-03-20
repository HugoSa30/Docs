/*
 * Program: n42.bin
 * Function: FUN_00156f54
 * Entry: 00156f54
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00156f54(void)

{
  if (B_fprakt == '\0') {
    DAT_005b8509 = DAT_005b8509 & 0xfe;
  }
  else {
    DAT_005b8509 = DAT_005b8509 | 1;
  }
  if (B_fprzvb == '\0') {
    DAT_005b8509 = DAT_005b8509 & 0xfd;
  }
  else {
    DAT_005b8509 = DAT_005b8509 | 2;
  }
  if (B_fprakt == '\0') {
    DAT_005b850a = DAT_005b850a & 0xfe;
  }
  else {
    DAT_005b850a = DAT_005b850a | 1;
  }
  if (B_fprovb == '\0') {
    DAT_005b850a = DAT_005b850a & 0xfd;
  }
  else {
    DAT_005b850a = DAT_005b850a | 2;
  }
  if (B_lrnakt == '\0') {
    DAT_005b850e = DAT_005b850e & 0xfe;
  }
  else {
    DAT_005b850e = DAT_005b850e | 1;
  }
  if (B_lrnvb == '\0') {
    DAT_005b850e = DAT_005b850e & 0xfd;
  }
  else {
    DAT_005b850e = DAT_005b850e | 2;
  }
  if (B_lrnakt == '\0') {
    DAT_005b850b = DAT_005b850b & 0xfe;
    DAT_005b850c = DAT_005b850c & 0xfe;
    DAT_005b850d = DAT_005b850d & 0xfe;
  }
  else {
    DAT_005b850b = DAT_005b850b | 1;
    DAT_005b850c = DAT_005b850c | 1;
    DAT_005b850d = DAT_005b850d | 1;
  }
  if (B_lrnvb == '\0') {
    DAT_005b850b = DAT_005b850b & 0xfd;
    DAT_005b850c = DAT_005b850c & 0xfd;
    DAT_005b850d = DAT_005b850d & 0xfd;
  }
  else {
    DAT_005b850b = DAT_005b850b | 2;
    DAT_005b850c = DAT_005b850c | 2;
    DAT_005b850d = DAT_005b850d | 2;
  }
  if ((DAT_005b961a & 0x1000) == 0) {
    DAT_005b850f = DAT_005b850f & 0xfe | 2;
    DAT_005b8511 = DAT_005b8511 & 0xfe | 2;
    DAT_005b8521 = DAT_005b8521 & 0xfe | 2;
    DAT_005b8523 = DAT_005b8523 & 0xfe | 2;
  }
  else {
    if ((B_lra == '\0') || (B_dkvsf == '\0')) {
      DAT_005b850f = DAT_005b850f & 0xfe;
      DAT_005b8511 = DAT_005b8511 & 0xfe;
      DAT_005b8521 = DAT_005b8521 & 0xfe;
      DAT_005b8523 = DAT_005b8523 & 0xfe;
    }
    else {
      if (B_frao == '\0') {
        DAT_005b850f = DAT_005b850f & 0xfe;
      }
      else {
        DAT_005b850f = DAT_005b850f | 1;
      }
      if (B_frau == '\0') {
        DAT_005b8511 = DAT_005b8511 & 0xfe;
      }
      else {
        DAT_005b8511 = DAT_005b8511 | 1;
      }
      if (B_rkat == '\0') {
        DAT_005b8521 = DAT_005b8521 & 0xfe;
      }
      else {
        DAT_005b8521 = DAT_005b8521 | 1;
      }
      if (B_rkaz == '\0') {
        DAT_005b8523 = DAT_005b8523 & 0xfe;
      }
      else {
        DAT_005b8523 = DAT_005b8523 | 1;
      }
    }
    if (B_nofra == '\0') {
      DAT_005b850f = DAT_005b850f & 0xfd;
      DAT_005b8511 = DAT_005b8511 & 0xfd;
    }
    else {
      DAT_005b850f = DAT_005b850f | 2;
      DAT_005b8511 = DAT_005b8511 | 2;
    }
    if (B_norkat == '\0') {
      DAT_005b8521 = DAT_005b8521 & 0xfd;
    }
    else {
      DAT_005b8521 = DAT_005b8521 | 2;
    }
    if (B_norkaz == '\0') {
      DAT_005b8523 = DAT_005b8523 & 0xfd;
    }
    else {
      DAT_005b8523 = DAT_005b8523 | 2;
    }
  }
  if ((DAT_005b961a & 0x1000) == 0) {
    DAT_005b8510 = DAT_005b8510 & 0xfe | 2;
    DAT_005b8512 = DAT_005b8512 & 0xfe | 2;
    DAT_005b8522 = DAT_005b8522 & 0xfe | 2;
    DAT_005b8524 = DAT_005b8524 & 0xfe | 2;
  }
  else {
    if ((B_lra2 == '\0') || (B_dkvsf == '\0')) {
      DAT_005b8510 = DAT_005b8510 & 0xfe;
      DAT_005b8512 = DAT_005b8512 & 0xfe;
      DAT_005b8522 = DAT_005b8522 & 0xfe;
      DAT_005b8524 = DAT_005b8524 & 0xfe;
    }
    else {
      if (B_frao == '\0') {
        DAT_005b8510 = DAT_005b8510 & 0xfe;
      }
      else {
        DAT_005b8510 = DAT_005b8510 | 1;
      }
      if (B_frau == '\0') {
        DAT_005b8512 = DAT_005b8512 & 0xfe;
      }
      else {
        DAT_005b8512 = DAT_005b8512 | 1;
      }
      if (B_rkat == '\0') {
        DAT_005b8522 = DAT_005b8522 & 0xfe;
      }
      else {
        DAT_005b8522 = DAT_005b8522 | 1;
      }
      if (B_rkaz == '\0') {
        DAT_005b8524 = DAT_005b8524 & 0xfe;
      }
      else {
        DAT_005b8524 = DAT_005b8524 | 1;
      }
    }
    if (B_nofra == '\0') {
      DAT_005b8510 = DAT_005b8510 & 0xfd;
      DAT_005b8512 = DAT_005b8512 & 0xfd;
    }
    else {
      DAT_005b8510 = DAT_005b8510 | 2;
      DAT_005b8512 = DAT_005b8512 | 2;
    }
    if (B_norkat == '\0') {
      DAT_005b8522 = DAT_005b8522 & 0xfd;
    }
    else {
      DAT_005b8522 = DAT_005b8522 | 2;
    }
    if (B_norkaz == '\0') {
      DAT_005b8524 = DAT_005b8524 & 0xfd;
    }
    else {
      DAT_005b8524 = DAT_005b8524 | 2;
    }
  }
  if ((DAT_005b961a & 0x20) == 0) {
    DAT_005b8513 = DAT_005b8513 & 0xfe | 2;
  }
  else {
    if (((((ubsq_w < _UBDHLSHMN) || (_UBDHLSHMX < ubsq_w)) || (tahsom_w < _TADHMNH)) ||
        ((_TADHMXH < tahsom_w || (B_rinh == '\0')))) || ((B_atmtpk == '\0' || (B_nmot == '\0')))) {
      DAT_005b8513 = DAT_005b8513 & 0xfe;
    }
    else {
      DAT_005b8513 = DAT_005b8513 | 1;
    }
    DAT_005b8513 = DAT_005b8513 & 0xfd;
  }
  if ((DAT_005b961a & 0x20) == 0) {
    DAT_005b8514 = DAT_005b8514 & 0xfe | 2;
  }
  else {
    if ((((ubsq_w < _UBDHLSHMN) || (_UBDHLSHMX < ubsq_w)) ||
        ((tahsom2_w < _TADHMNH ||
         (((_TADHMXH < tahsom2_w || (B_rinh2 == '\0')) || (B_atmtpk2 == '\0')))))) ||
       (B_nmot == '\0')) {
      DAT_005b8514 = DAT_005b8514 & 0xfe;
    }
    else {
      DAT_005b8514 = DAT_005b8514 | 1;
    }
    DAT_005b8514 = DAT_005b8514 & 0xfd;
  }
  if ((DAT_005b961a & 0x40) == 0) {
    DAT_005b8515 = DAT_005b8515 & 0xfe | 2;
  }
  else {
    if (((ubsq_w < _UBDHLSUMN) || (_UBDHLSUMX < ubsq_w)) ||
       (((B_hsv == '\0' || ((B_stend == '\0' || (B_elsu != '\0')))) || (B_elsuv != '\0')))) {
      DAT_005b8515 = DAT_005b8515 & 0xfe;
    }
    else {
      DAT_005b8515 = DAT_005b8515 | 1;
    }
    DAT_005b8515 = DAT_005b8515 & 0xfd;
  }
  if ((DAT_005b961a & 0x40) == 0) {
    DAT_005b8516 = DAT_005b8516 & 0xfe | 2;
  }
  else {
    if ((((ubsq_w < _UBDHLSUMN) || (_UBDHLSUMX < ubsq_w)) || (B_hsv2 == '\0')) ||
       (((B_stend == '\0' || (B_elsu2 != '\0')) || (B_elsuv != '\0')))) {
      DAT_005b8516 = DAT_005b8516 & 0xfe;
    }
    else {
      DAT_005b8516 = DAT_005b8516 | 1;
    }
    DAT_005b8516 = DAT_005b8516 & 0xfd;
  }
  if ((DAT_005b961a & 0x80) == 0) {
    DAT_005b8517 = DAT_005b8517 & 0xfe | 2;
  }
  else {
    if (((ubsq_w < _UBDHLSUMN) || (_UBDHLSUMX < ubsq_w)) ||
       ((B_hsv == '\0' || (((B_stend == '\0' || (B_elsu != '\0')) || (B_elsuv != '\0')))))) {
      DAT_005b8517 = DAT_005b8517 & 0xfe;
    }
    else {
      DAT_005b8517 = DAT_005b8517 | 1;
    }
    DAT_005b8517 = DAT_005b8517 & 0xfd;
  }
  if ((DAT_005b961a & 0x80) == 0) {
    DAT_005b8518 = DAT_005b8518 & 0xfe | 2;
  }
  else {
    if ((((ubsq_w < _UBDHLSUMN) || (_UBDHLSUMX < ubsq_w)) ||
        ((B_hsv2 == '\0' || ((B_stend == '\0' || (B_elsu2 != '\0')))))) || (B_elsuv != '\0')) {
      DAT_005b8518 = DAT_005b8518 & 0xfe;
    }
    else {
      DAT_005b8518 = DAT_005b8518 | 1;
    }
    DAT_005b8518 = DAT_005b8518 & 0xfd;
  }
  if (((DAT_005b961a & 0x200) == 0) ||
     ((B_vekatv & B_dktb) == ~(B_dktb|B_dktkas|B_dktsbs|B_vekatv|B_dktsps|B_tmsdkt|B_dktbi|B_dktlbi)
     )) {
    DAT_005b8519 = DAT_005b8519 & 0xfe;
  }
  else {
    DAT_005b8519 = DAT_005b8519 | 1;
  }
  if (((DAT_005b961a & 0x200) == 0) || ((DAT_005b86e7 & 2) != 0)) {
    DAT_005b8519 = DAT_005b8519 | 2;
  }
  else {
    DAT_005b8519 = DAT_005b8519 & 0xfd;
  }
  if ((DAT_005b961a & 0x2000) == 0) {
    DAT_005b851a = DAT_005b851a & 0xfe | 2;
    DAT_005b851b = DAT_005b851b & 0xfe | 2;
  }
  else {
    DAT_005b851a = DAT_005b851a & 0xfd | 1;
    DAT_005b851b = DAT_005b851b & 0xfd | 1;
  }
  if ((B_cdswe & B_cdtankl) == 0) {
    DAT_005b851c = DAT_005b851c & 0xfe | 2;
    DAT_005b851d = DAT_005b851d & 0xfe | 2;
  }
  else {
    DAT_005b851c = DAT_005b851c & 0xfd | 1;
    DAT_005b851d = DAT_005b851d & 0xfd | 1;
  }
  if ((B_cdswe & B_cdlsv) == 0) {
    DAT_005b851e = DAT_005b851e & 0xfe | 2;
    DAT_005b851f = DAT_005b851f & 0xfe | 2;
  }
  else {
    DAT_005b851e = DAT_005b851e & 0xfd | 1;
    DAT_005b851f = DAT_005b851f & 0xfd | 1;
  }
  if ((B_cdswe & B_cdlatp) == 0) {
    DAT_005b8520 = DAT_005b8520 & 0xfe | 2;
  }
  else {
    if ((B_lrs == '\0') || (B_lrs2 == '\0')) {
      DAT_005b8520 = DAT_005b8520 & 0xfe;
    }
    else {
      DAT_005b8520 = DAT_005b8520 | 1;
    }
    DAT_005b8520 = DAT_005b8520 & 0xfd;
  }
  if (B_dsls == '\0') {
    DAT_005b8525 = DAT_005b8525 & 0xfe;
    DAT_005b8526 = DAT_005b8526 & 0xfe;
  }
  else {
    DAT_005b8525 = DAT_005b8525 | 1;
    DAT_005b8526 = DAT_005b8526 | 1;
  }
  if (B_dsls == '\0') {
    if ((((((B_cdswe & B_cdhsv) == 0) || (B_slsfz == '\0')) || (B_nmot == '\0')) ||
        ((B_mslmin & B_dslerr) !=
         ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes))) ||
       ((((DSLSLRSlokBits1a & B_dslo) ==
          ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab) &&
         ((DAT_003fa68c & 1) != 0)) ||
        (((DSLSLRSlokBits1a & B_dsloab) !=
          ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab) &&
         ((DAT_003fa68c & 2) == 0)))))) {
      DAT_005b8525 = DAT_005b8525 | 2;
      DAT_005b8526 = DAT_005b8526 | 2;
    }
  }
  else {
    DAT_005b8525 = DAT_005b8525 & 0xfd;
    DAT_005b8526 = DAT_005b8526 & 0xfd;
  }
  if ((DSLSLRSlokBits1a & B_dslo) ==
      ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab)) {
    DAT_003fa68c = DAT_003fa68c & 0xfe;
  }
  else {
    DAT_003fa68c = DAT_003fa68c | 1;
  }
  if ((DSLSLRSlokBits1a & B_dsloab) ==
      ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab)) {
    DAT_003fa68c = DAT_003fa68c & 0xfd;
  }
  else {
    DAT_003fa68c = DAT_003fa68c | 2;
  }
  if ((DSLSLRSlokBits2a & B_dsl2e) ==
      ~(B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab)) {
    DAT_005b8527 = DAT_005b8527 & 0xfe;
  }
  else {
    DAT_005b8527 = DAT_005b8527 | 1;
  }
  if ((DSLSLRSlokBits2a & B_dsl2e) ==
      ~(B_dsl2ab|B_dsl2e|B_dsl3|B_dsl3ab|B_dsl3e|B_eslvp|B_slsofw|B_dsl4ab)) {
    DAT_005b8528 = DAT_005b8528 & 0xfe;
  }
  else {
    DAT_005b8528 = DAT_005b8528 | 1;
  }
  if (((DAT_005b8525 & 2) == 0) &&
     ((B_mslmin & B_cwdslt) !=
      ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes))) {
    DAT_005b8527 = DAT_005b8527 & 0xfd;
    DAT_005b8528 = DAT_005b8528 & 0xfd;
  }
  else {
    DAT_005b8527 = DAT_005b8527 | 2;
    DAT_005b8528 = DAT_005b8528 | 2;
  }
  if (((B_cdswe & 0x200) == 0) || (((B_dtevio & B_dtebel) == 0 && (DAT_003fc1de == '\0')))) {
    DAT_005b8529 = DAT_005b8529 & 0xfe;
  }
  else {
    DAT_005b8529 = DAT_005b8529 | 1;
  }
  if (((B_cdswe & 0x200) == 0) || ((DAT_003fdfb9 >> 1 & 1) != 0)) {
    DAT_005b8529 = DAT_005b8529 | 2;
  }
  else {
    DAT_005b8529 = DAT_005b8529 & 0xfd;
  }
  if (10 < DAT_003f9abc) {
    if (DAT_003f9abc < 10) {
      DAT_003f9abc = DAT_003f9abc + 1;
    }
    else {
      DAT_003f9abc = 1;
    }
    DAT_005bb3b6 = DAT_005b8509;
    DAT_005bb3b7 = DAT_005b850a;
    DAT_005bb3b9 = DAT_005b850b;
    DAT_005bb3be = DAT_005b850c;
    DAT_005bb3c0 = DAT_005b850d;
    DAT_005bb3c1 = DAT_005b850e;
    DAT_005bb3ee = DAT_005b850f;
    DAT_005bb3ef = DAT_005b8510;
    DAT_005bb3f0 = DAT_005b8511;
    DAT_005bb3f1 = DAT_005b8512;
    DAT_005bb3f4 = DAT_005b8513;
    DAT_005bb3f5 = DAT_005b8514;
    DAT_005bb3f8 = DAT_005b8515;
    DAT_005bb3f9 = DAT_005b8516;
    DAT_005bb3fa = DAT_005b8517;
    DAT_005bb3fb = DAT_005b8518;
    DAT_005bb3fc = DAT_005b8519;
    DAT_005bb40b = DAT_005b851a;
    DAT_005bb40c = DAT_005b851b;
    DAT_005bb414 = DAT_005b851c;
    DAT_005bb415 = DAT_005b851d;
    DAT_005bb416 = DAT_005b851e;
    DAT_005bb417 = DAT_005b851f;
    DAT_005bb418 = DAT_005b8520;
    DAT_005bb435 = DAT_005b8521;
    DAT_005bb436 = DAT_005b8522;
    DAT_005bb437 = DAT_005b8523;
    DAT_005bb438 = DAT_005b8524;
    DAT_005bb43a = DAT_005b8525;
    DAT_005bb43b = DAT_005b8526;
    DAT_005bb43c = DAT_005b8527;
    DAT_005bb43d = DAT_005b8528;
    DAT_005bb443 = DAT_005b8529;
    return;
  }
                    /* WARNING: Could not emulate address calculation at 0x001580b8 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)DAT_003f9abc * 4 + 0xf580c4))();
  return;
}

