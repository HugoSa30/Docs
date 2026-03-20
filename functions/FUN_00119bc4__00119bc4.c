/*
 * Program: n42.bin
 * Function: FUN_00119bc4
 * Entry: 00119bc4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00119bc4(int param_1)

{
  DAT_003f9bd7 = 0;
  DAT_003f9bd6 = 0;
  DAT_003f9bd5 = 0;
  DAT_003f9bd4 = 0;
  if (param_1 == 5) {
    DAT_003f9bd4 = ((DAT_005b961a & 1) != 0) * -0x80 | ((DAT_005b961a & 0x40) != 0) * '@' & 0x40U |
                   ((B_cdswe & B_cdlsv) != 0) * ' ' & 0x20U | ((B_cdswe & B_cdhsv) != 0) * '\b' & 8U
                   | ((B_cdswe & 0x200) != 0) * '\x04' & 4U | B_katfz & 1;
    DAT_003f9bd5 = ((DAT_003fd803 & 0x80) != 0) * -0x80 | ((DAT_003fd803 & 0x40) != 0) * '@' & 0x40U
                   | ((DAT_003fd803 & 0x20) != 0) * ' ' & 0x20U |
                   ((DAT_003fd803 & 8) != 0) * '\b' & 8U | ((DAT_003fd803 & 4) != 0) * '\x04' & 4U |
                   (DAT_003fd803 & 1) != 0;
  }
  else if (param_1 == 7) {
    DAT_003f9bd4 = B_acc << 7 | (DAT_005b8d18 & 1) << 6 | (DAT_005b8d11 & 1) << 5 |
                   (DAT_005b8d10 & 1) << 4 | (DAT_005b8d0f & 1) << 3 | (DAT_005b8d0e & 1) << 2 |
                   (DAT_005b8d0d & 1) << 1 | DAT_005b8d0b & 1;
  }
  else if (param_1 == 0x17) {
    DAT_003f9bd4 = (DAT_003fbff3 & 1) << 2 | (B_lra2 & 1) << 1 | B_lra & 1;
  }
  else if (param_1 == 0x1a) {
    DAT_003f9bd4 = B_umauab << 7 | (B_umae & 1) << 6 | ((BGDVEintbits & 1) != 0) * ' ' & 0x20U |
                   (B_lrnrdy & 1) << 4 | ((BGDVEintbits & 2) != 0) * '\b' & 8U | (B_lrnakt & 1) << 2
                   | (B_lrnvb & 1) << 1 | B_lrnfg & 1;
  }
  else if (param_1 == 0x30) {
    if (B_kl15 == 0) {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x31) {
    if (B_estart == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x32) {
    if (B_kuppl == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x25) {
    DAT_003f9bd4 = ((B_dylsu & B_dylsu) !=
                   ~(B_drlmx|B_dylsu|B_dylsuav|B_dylsuf|B_heallsv|B_helsu|B_helsuf|B_lshkpft)) *
                   '\x02' & 2U |
                   (B_dylsu & B_dylsuav) !=
                   ~(B_drlmx|B_dylsu|B_dylsuav|B_dylsuf|B_heallsv|B_helsu|B_helsuf|B_lshkpft);
    DAT_003f9bd5 = ((B_lshkpft2 & B_dylsu2) !=
                   ~(B_sigflsu2|B_dylsu2|B_dylsuav2|B_heallsv2|B_helsu2|B_helsuf2|B_lshkpft2|
                    B_lshkpmr2)) * '\x02' & 2U |
                   (B_lshkpft2 & B_dylsuav2) !=
                   ~(B_sigflsu2|B_dylsu2|B_dylsuav2|B_heallsv2|B_helsu2|B_helsuf2|B_lshkpft2|
                    B_lshkpmr2);
  }
  else if (param_1 == 0x33) {
    if (B_br == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x34) {
    if (B_bl == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x36) {
    if (B_ko == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x37) {
    if (DAT_005b8d0b == 0) {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x38) {
    if (DAT_005b8d0d == 0) {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x39) {
    if (DAT_005b8d0e == 0) {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x3a) {
    if (DAT_005b8d0f == 0) {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x3b) {
    if (DAT_005b8d10 == 0) {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x3c) {
    if (DAT_005b8d11 == 0) {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x3d) {
    if (DAT_005b8d18 == 0) {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x3e) {
    if (B_acc == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x3f) {
    if (B_ll == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x40) {
    if (B_vl == 0) {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x41) {
    if (B_sbbhk2 == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x42) {
    if (B_sbbhk == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x43) {
    if (B_sbbvk2 == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x44) {
    if (B_sbbvk == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x45) {
    if (B_lr2 == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x46) {
    if (B_lr == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x47) {
    if (B_kd == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x48) {
    if (B_pn == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x49) {
    if ((EwsNvBits & 1) == 0) {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x4a) {
    if (B_sa == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x4b) {
    if (B_umae == 0) {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x65) {
    if (B_nac == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x66) {
    if (B_fhz == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x67) {
    if (B_nftev == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x68) {
    if (B_nsub == 1) {
      DAT_003f9bd4 = 0xff;
    }
    else {
      DAT_003f9bd4 = 0;
    }
  }
  else if (param_1 == 0x6b) {
    if (B_slp == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x6c) {
    if (B_koe == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x6d) {
    if (B_hsve2 == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x6e) {
    if (B_hsve == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x6f) {
    if (B_hshe2 == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x70) {
    if (B_hshe == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x71) {
    if (B_akr == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x72) {
    if (B_ebl == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x73) {
    if (B_ekp == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x74) {
    if (B_etr == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0x75) {
    if (B_sta == '\0') {
      DAT_003f9bd4 = 0;
    }
    else {
      DAT_003f9bd4 = 0xff;
    }
  }
  else if (param_1 == 0xc3) {
    DAT_003f9bd4 = (byte)(((uint)(byte)((top_w < 100) << 3) << 8) >> 0xb) ^ 1;
  }
  return;
}

