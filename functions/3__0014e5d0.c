/*
 * Program: n42.bin
 * Function: 3
 * Entry: 0014e5d0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void _(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  DAT_003fadd4 = func_0xff21ae98(&DAT_001d062c,DAT_001c1090,esst_stm12esub,esst_sts12esub);
  DAT_003fadd5 = func_0xff21ae98(&DAT_001d06bc,DAT_001c1090,esst_stm12esub,esst_sts12esub);
  uVar3 = func_0xff21ae98(&DAT_001d074c,DAT_001c1090,esst_stm12esub,esst_sts12esub);
  bVar1 = false;
  if ((B_lrnda == '\0') || (B_lrnda2 == '\0')) {
    uVar4 = (uVar3 & 0xff) -
            (int)(char)((&DAT_001d07dc)[esst_stm12esub >> 0x10] +
                       (char)((esst_stm12esub & 0xffff) *
                              ((int)(char)(&DAT_001d07dd)[esst_stm12esub >> 0x10] -
                              (int)(char)(&DAT_001d07dc)[esst_stm12esub >> 0x10]) >> 0x10));
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    else if (0xff < (int)uVar4) {
      uVar4 = 0xff;
    }
    lamwl_w = (word)((uVar4 & 0xff) << 5);
  }
  else {
    lamwl_w = (word)((uVar3 & 0xff) << 5);
    bVar1 = true;
  }
  if ((uVar3 & 0xff) < 0x81) {
    uVar3 = -uVar3;
  }
  if ((((DAT_001d0628 & 1) == 0) || ((uVar3 + 0x80 & 0xff) << 1 < (uint)DLAMNSWL)) &&
     (((DAT_001d0628 & 2) == 0 || (bVar1)))) {
    if (B_wks == '\0') {
      iVar2 = (esst_sts12esub >> 0x10) * 2;
      bVar1 = (uint)anztib_w <
              ((uint)*(ushort *)(&DAT_001d07e8 + iVar2) +
               ((int)((esst_sts12esub & 0xffff) *
                     ((uint)*(ushort *)(&DAT_001d07ea + iVar2) -
                     (uint)*(ushort *)(&DAT_001d07e8 + iVar2))) >> 0x10) & 0xffff);
    }
    else {
      iVar2 = (esst_sts12esub >> 0x10) * 2;
      bVar1 = (uint)anztib_w <
              ((uint)*(ushort *)(&DAT_001d0800 + iVar2) +
               ((int)((esst_sts12esub & 0xffff) *
                     ((uint)*(ushort *)(&DAT_001d0802 + iVar2) -
                     (uint)*(ushort *)(&DAT_001d0800 + iVar2))) >> 0x10) & 0xffff);
    }
    B_lawlon = bVar1 ^ 1;
  }
  else {
    B_lawlon = 0;
  }
  return;
}

