/*
 * Program: n42.bin
 * Function: FUN_00183034
 * Entry: 00183034
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00183034(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  
  if (((B_mslmin & B_dslm) == ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)
      ) || (DAT_003fb89a != '\0')) {
    DAT_003fb899 = false;
  }
  else {
    DAT_003fb899 = true;
  }
  DAT_003fb89a = '\x01' - ((B_mslmin & B_dslm) ==
                          ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes));
  if ((B_sls == '\0') && (DAT_003fb8a4 != '\0')) {
    DAT_003fb8a3 = true;
  }
  else {
    DAT_003fb8a3 = false;
  }
  DAT_003fb8a4 = B_sls;
  bVar4 = (DSLSLRSlokBits3a & B_dfrmoff2) !=
          ~(B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr|B_meaoper);
  if (DAT_003fb8a3) {
    DAT_003fc20b = _TWSLPOFF < _twslp_w;
  }
  if (DAT_003fb899) {
    pm_akt = '\0';
  }
  else if (((SLSlokBits & B_slsoab) == 0) && (DAT_003fb8a3)) {
    pm_akt = '\x01';
  }
  if (((B_awmslsum & B_rmslsmg) == 0) || (DAT_003fb8a2 != '\0')) {
    DAT_003fb8a1 = 0;
    bVar3 = false;
  }
  else {
    DAT_003fb8a1 = 1;
    bVar3 = true;
  }
  DAT_003fb8a2 = '\x01' - ((B_awmslsum & B_rmslsmg) == 0);
  if (((DSLSLRSlokBits1a & B_dslo) ==
       ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab)) && (DAT_003fb89c != '\0'))
  {
    DAT_003fb89b = 1;
    bVar2 = true;
  }
  else {
    DAT_003fb89b = 0;
    bVar2 = false;
  }
  DAT_003fb89c = '\x01' - ((DSLSLRSlokBits1a & B_dslo) ==
                          ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab));
  if (((B_mnslspr2 & B_mslmin2) ==
       ~(B_errofs2|B_mslmin2|B_mnslspr2|B_eslsp2|B_zslsp2|B_mxslvpr2|B_eslvp2|B_zslvp2)) ||
     ((B_mnslspr2 & B_zslsp2) ==
      ~(B_errofs2|B_mslmin2|B_mnslspr2|B_eslsp2|B_zslsp2|B_mxslvpr2|B_eslvp2|B_zslvp2))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  bVar5 = (B_mnslspr2 & B_zslsp2) ==
          ~(B_errofs2|B_mslmin2|B_mnslspr2|B_eslsp2|B_zslsp2|B_mxslvpr2|B_eslvp2|B_zslvp2);
  if (((B_awmslsum & B_awmslsum) != 0) &&
     ((B_mslmin & B_dslmab) ==
      ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes))) {
    bVar2 = bVar3;
  }
  if (bVar2) {
    DAT_003fb898 = '\0';
  }
  else if ((B_dslfa != '\0') &&
          ((B_mslmin & B_dslm) !=
           ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes))) {
    DAT_003fb898 = '\x01';
  }
  if ((B_fasla == '\0') || (DAT_003fb89e != '\0')) {
    DAT_003fb89d = false;
  }
  else {
    DAT_003fb89d = true;
  }
  DAT_003fb89e = B_fasla;
  if (((B_fa == '\0') || (B_fasls == '\0')) || (DAT_003fb897 != '\0')) {
    DAT_003fb896 = false;
  }
  else {
    DAT_003fb896 = true;
  }
  if ((B_fa == '\0') || (B_fasls == '\0')) {
    DAT_003fb897 = 0;
  }
  else {
    DAT_003fb897 = 1;
  }
  if (((B_dsl5ab & 0x40) == 0) && (DAT_003fb8a0 != '\0')) {
    DAT_003fb89f = true;
  }
  else {
    DAT_003fb89f = false;
  }
  DAT_003fb8a0 = '\x01' - ((B_dsl5ab & 0x40) == 0);
  if (((B_fa == '\0') || (B_fasls == '\0')) || ((DAT_003fb898 != '\0' && (DAT_003fb89f)))) {
    DAT_003fb895 = '\0';
  }
  else if ((DAT_003fb89d) || (DAT_003fb896)) {
    DAT_003fb895 = '\x01';
  }
  if (DAT_003fb898 != '\0') {
    DAT_005b8c03 = 0;
    goto LAB_00183714;
  }
  if ((DAT_003fb895 != '\0') &&
     ((B_dslfa == '\0' ||
      ((B_mslmin & B_dslm) == ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)
      )))) {
    if (tmot < TMFASLMN) {
      DAT_005b8c03 = 0x30;
    }
    else if (B_kh == '\0') {
      if (_twslp_w < _TWSLPFA) {
        if ((B_mslmin & B_dslerr) ==
            ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) {
          if ((DSLSLRSlokBits1a & B_dsl) ==
              ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab)) {
            DAT_005b8c03 = 0x33;
          }
          else if ((DSLSLRSlokBits3a & B_meaoper) ==
                   ~(B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr|B_meaoper)) {
            DAT_005b8c03 = 0x34;
          }
          else if ((B_mslmin & B_dslmes) ==
                   ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) {
            DAT_005b8c03 = 0x35;
          }
          else if (B_te == '\0') {
            DAT_005b8c03 = 0xfe;
          }
          else {
            DAT_005b8c03 = 0x36;
          }
        }
        else {
          DAT_005b8c03 = 0x32;
        }
      }
      else {
        DAT_005b8c03 = 0x31;
      }
    }
    else {
      DAT_005b8c03 = 0x37;
    }
    goto LAB_00183714;
  }
  if (((B_mslmn == '\0') ||
      ((bVar5 && ((DSLSLRSlokBits3a & B_zslsp) ==
                  ~(B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr|B_meaoper)))))
     && (((DSLSLRSlokBits3a & B_zslsp) ==
          ~(B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr|B_meaoper) || (bVar5)))
     ) {
    if (((((B_mslmin & B_dslmab) !=
           ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) &&
         (B_mslmn == '\0')) ||
        ((DSLSLRSlokBits1a & B_dsloab) !=
         ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab))) ||
       (((B_dsl5ab & 0x80) != 0 || (bVar4)))) {
      if ((pm_akt == '\0') && (DAT_003fc20b == '\0')) {
        if (((B_mslmin & B_dslmab) ==
             ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) ||
           (B_mslmn != '\0')) {
          if ((DSLSLRSlokBits1a & B_dsloab) ==
              ~(B_dslo|B_dsloab|B_dsloe|B_dslp4|B_szsls|B_dsl|B_slarq|B_dsltab)) {
            if ((B_dsl5ab & 0x80) != 0) {
              if (bVar4) {
                DAT_005b8c03 = 0x24;
                goto LAB_00183714;
              }
              if ((B_dsl5ab & 0x80) != 0) {
                DAT_005b8c03 = 0x25;
                goto LAB_00183714;
              }
            }
            DAT_005b8c03 = 0x26;
          }
          else {
            DAT_005b8c03 = 0x23;
          }
        }
        else {
          DAT_005b8c03 = 0x22;
        }
      }
      else if (DAT_003fc20b == '\0') {
        DAT_005b8c03 = 0x21;
      }
      else {
        DAT_005b8c03 = 0x20;
      }
    }
    else {
      DAT_005b8c03 = 5;
    }
    goto LAB_00183714;
  }
  if (B_mslmn == '\0') {
    if ((B_mnslspr2 & B_mnslspr2) ==
        ~(B_errofs2|B_mslmin2|B_mnslspr2|B_eslsp2|B_zslsp2|B_mxslvpr2|B_eslvp2|B_zslvp2)) {
      if ((DSLSLRSlokBits3a & B_mnslspr) ==
          ~(B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr|B_meaoper)) {
        DAT_005b8c03 = 0x16;
        goto LAB_00183714;
      }
      if ((DSLSLRSlokBits3a & B_mnslspr) !=
          ~(B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr|B_meaoper)) {
        DAT_005b8c03 = 0x13;
        goto LAB_00183714;
      }
    }
    else if ((DSLSLRSlokBits3a & B_mnslspr) !=
             ~(B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr|B_meaoper)) {
      DAT_005b8c03 = 0x15;
      goto LAB_00183714;
    }
    DAT_005b8c03 = 0x14;
    goto LAB_00183714;
  }
  if (bVar1) {
    if ((B_mslmin & B_mslmin) !=
        ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) {
      if ((DSLSLRSlokBits3a & B_zslsp) !=
          ~(B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr|B_meaoper)) {
        DAT_005b8c03 = 0x12;
        goto LAB_00183714;
      }
      goto LAB_00183590;
    }
  }
  else {
LAB_00183590:
    if (((B_mslmin & B_mslmin) !=
         ~(B_cwdslt|B_mslmin|B_zslvp|B_dslerr|B_dslm|B_dslmab|B_dslme|B_dslmes)) &&
       ((DSLSLRSlokBits3a & B_zslsp) !=
        ~(B_dfrmoff2|B_dsl5dly|B_dsl45|B_mnslspr|B_eslsp|B_zslsp|B_mxslvpr|B_meaoper))) {
      DAT_005b8c03 = 0x10;
      goto LAB_00183714;
    }
  }
  DAT_005b8c03 = 0x11;
LAB_00183714:
  if (DAT_005b8c03 - 0x10 < 0x10) {
    DAT_003fde3e = DAT_005b8c03;
  }
  return;
}

