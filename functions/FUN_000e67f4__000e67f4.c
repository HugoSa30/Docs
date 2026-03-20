/*
 * Program: n42.bin
 * Function: FUN_000e67f4
 * Entry: 000e67f4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e67f4(void)

{
  if ((DAT_005b961a & 0x40) != 0) {
    if ((((ubsq_w < _UBDHLSUMN) || (_UBDHLSUMX < ubsq_w)) || ((BGBNausbits0 & B_bvhls) == 0)) ||
       (((B_stend == '\0' || (B_kl15 == 0)) || (B_elsuv != '\0')))) {
      DAT_005b816d = DAT_005b816d & 0xfe;
    }
    else {
      DAT_005b816d = DAT_005b816d | 1;
    }
    if ((((DAT_005b816d & 1) == 0) || (B_hsv == '\0')) || (B_elsu != '\0')) {
      B_enheat = false;
    }
    else {
      B_enheat = true;
    }
    if ((bool)B_enheat) {
      if (DAT_005b8175 < 200) {
        DAT_005b8175 = DAT_005b8175 + 1;
      }
      else {
        DAT_005b816c = DAT_005b816c | 0x80;
      }
    }
    else {
      DAT_005b8175 = 0;
      DAT_005b816c = DAT_005b816c & 0x7f;
    }
    B_enswit = (DAT_005b816c & 0x80) != 0;
    if ((((DAT_005b816d & 1) == 0) || (B_hsv2 == '\0')) || (B_elsu2 != '\0')) {
      B_enheat2 = false;
    }
    else {
      B_enheat2 = true;
    }
    if ((bool)B_enheat2) {
      if (DAT_005b818f < 200) {
        DAT_005b818f = DAT_005b818f + 1;
      }
      else {
        DAT_005b816f = DAT_005b816f | 0x80;
      }
    }
    else {
      DAT_005b818f = 0;
      DAT_005b816f = DAT_005b816f & 0x7f;
    }
    B_enswit2 = (DAT_005b816f & 0x80) != 0;
    if (((B_hsve == '\0') || (!(bool)B_enswit)) || (uhsv < UHEMX)) {
      DAT_005b8173 = TDFHS;
      DAT_005b816d = DAT_005b816d & 0x7f;
    }
    else if (DAT_005b8173 == '\0') {
      B_mxhlsu = 1;
      DAT_005b816d = DAT_005b816d | 0x80;
    }
    else {
      DAT_005b8173 = DAT_005b8173 + -1;
    }
    if (((B_hsve == '\0') && ((bool)B_enswit)) && (uhsv <= UHEMN)) {
      if (DAT_005b8172 == '\0') {
        B_mnhlsu = 1;
        DAT_005b816e = DAT_005b816e | 1;
      }
      else {
        DAT_005b8172 = DAT_005b8172 + -1;
      }
    }
    else {
      DAT_005b8172 = TDFHS;
      DAT_005b816e = DAT_005b816e & 0xfe;
    }
    if ((((B_hsve == '\0') && ((bool)B_enswit)) && (uhsv < UHEMX)) && (UHEMN < uhsv)) {
      if (DAT_005b8174 == '\0') {
        B_sihlsu = 1;
        DAT_005b816e = DAT_005b816e | 2;
      }
      else {
        DAT_005b8174 = DAT_005b8174 + -1;
      }
    }
    else {
      DAT_005b8174 = TDFHS;
      DAT_005b816e = DAT_005b816e & 0xfd;
    }
    if ((((DAT_005b816d & 0x80) == 0) && ((DAT_005b816e & 1) == 0)) && ((DAT_005b816e & 2) == 0)) {
      if ((B_hsve == '\0') && (UHEMX <= uhsv)) {
        DAT_005b816c = DAT_005b816c | 2;
      }
    }
    else {
      DAT_005b816c = DAT_005b816c & 0xfd;
    }
    if (((((DAT_005b816c & 2) != 0) && (B_hsve != '\0')) && (uhsv <= UHEMN)) ||
       ((BGBNausbits0 & B_bvhls) == 0)) {
      B_mxhlsu = 0;
      B_mnhlsu = 0;
      B_sihlsu = 0;
    }
    if (((B_hsve2 == '\0') || (!(bool)B_enswit2)) || (uhsv2 < UHEMX)) {
      DAT_005b818d = TDFHS;
      DAT_005b8170 = DAT_005b8170 & 0xbf;
    }
    else if (DAT_005b818d == '\0') {
      B_mxhlsu2 = 1;
      DAT_005b8170 = DAT_005b8170 | 0x40;
    }
    else {
      DAT_005b818d = DAT_005b818d + -1;
    }
    if (((B_hsve2 == '\0') && ((bool)B_enswit2)) && (uhsv2 <= UHEMN)) {
      if (DAT_005b818c == '\0') {
        B_mnhlsu2 = 1;
        DAT_005b8170 = DAT_005b8170 | 0x80;
      }
      else {
        DAT_005b818c = DAT_005b818c + -1;
      }
    }
    else {
      DAT_005b818c = TDFHS;
      DAT_005b8170 = DAT_005b8170 & 0x7f;
    }
    if ((((B_hsve2 == '\0') && ((bool)B_enswit2)) && (uhsv2 < UHEMX)) && (UHEMN < uhsv2)) {
      if (DAT_005b818e == '\0') {
        B_sihlsu2 = 1;
        DAT_005b8171 = DAT_005b8171 | 1;
      }
      else {
        DAT_005b818e = DAT_005b818e + -1;
      }
    }
    else {
      DAT_005b818e = TDFHS;
      DAT_005b8171 = DAT_005b8171 & 0xfe;
    }
    if ((((DAT_005b8170 & 0x40) == 0) && ((DAT_005b8170 & 0x80) == 0)) && ((DAT_005b8171 & 1) == 0))
    {
      if ((B_hsve2 == '\0') && (UHEMX <= uhsv2)) {
        DAT_005b816f = DAT_005b816f | 2;
      }
    }
    else {
      DAT_005b816f = DAT_005b816f & 0xfd;
    }
    if (((((DAT_005b816f & 2) != 0) && (B_hsve2 != '\0')) && (uhsv2 <= UHEMN)) ||
       ((BGBNausbits0 & B_bvhls) == 0)) {
      B_mxhlsu2 = 0;
      B_mnhlsu2 = 0;
      B_sihlsu2 = 0;
    }
  }
  return;
}

