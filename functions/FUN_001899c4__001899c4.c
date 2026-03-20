/*
 * Program: n42.bin
 * Function: FUN_001899c4
 * Entry: 001899c4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x00189a28) */

void FUN_001899c4(void)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  
  esst_snm08koub = func_0xff21b0e8(&DAT_001ce1f0,nmot);
  B_nac = B_ac;
  uVar5 = (uint)mifal_w + (uint)mdko * 0x100;
  if (0xffff < uVar5) {
    uVar5 = 0xffff;
  }
  uVar5 = (int)(uVar5 & 0xffff) >> 8;
  if ((vfzg < DAT_001ce218) &&
     ((B_vl != 0 ||
      (((uint)(byte)(&DAT_001ce1e0)[esst_snm08koub >> 0x10] +
        ((int)((esst_snm08koub & 0xffff) *
              ((uint)(byte)(&DAT_001ce1e1)[esst_snm08koub >> 0x10] -
              (uint)(byte)(&DAT_001ce1e0)[esst_snm08koub >> 0x10])) >> 0x10) & 0xff) < uVar5)))) {
    DAT_003fb8d9 = DAT_003fb8d9 & 0xfe;
  }
  else if (uVar5 < ((uint)(byte)(&DAT_001ce1e8)[esst_snm08koub >> 0x10] +
                    ((int)((esst_snm08koub & 0xffff) *
                          ((uint)(byte)(&DAT_001ce1e9)[esst_snm08koub >> 0x10] -
                          (uint)(byte)(&DAT_001ce1e8)[esst_snm08koub >> 0x10])) >> 0x10) & 0xff)) {
    DAT_003fb8d9 = DAT_003fb8d9 & 0xfe | 1;
  }
  if (((DAT_003fb8d9 & 1) == 0) || (DAT_003fb8d0 < DAT_001ce216)) {
    B_koena = false;
  }
  else {
    B_koena = true;
  }
  if (((DAT_001ce214 < tmot) || (tmot < DAT_001ce215)) || ((DAT_003fdf89 & 1) != 0)) {
    B_kooff = true;
  }
  else {
    B_kooff = false;
  }
  B_kosta = 0;
  B_komnoff = ((uint)(byte)(&DAT_001ce1fc)[esst_snm08koub >> 0x10] +
               ((int)((esst_snm08koub & 0xffff) *
                     ((uint)(byte)(&DAT_001ce1fd)[esst_snm08koub >> 0x10] -
                     (uint)(byte)(&DAT_001ce1fc)[esst_snm08koub >> 0x10])) >> 0x10) & 0xff) <
              (uint)DAT_003fb8d1;
  B_komnon = ((uint)(byte)(&DAT_001ce20c)[esst_snm08koub >> 0x10] +
              ((int)((esst_snm08koub & 0xffff) *
                    ((uint)(byte)(&DAT_001ce20d)[esst_snm08koub >> 0x10] -
                    (uint)(byte)(&DAT_001ce20c)[esst_snm08koub >> 0x10])) >> 0x10) & 0xff) <
             (uint)DAT_003fb8d3;
  uVar5 = (uint)(byte)(&DAT_001ce204)[esst_snm08koub >> 0x10] +
          ((int)((esst_snm08koub & 0xffff) *
                ((uint)(byte)(&DAT_001ce205)[esst_snm08koub >> 0x10] -
                (uint)(byte)(&DAT_001ce204)[esst_snm08koub >> 0x10])) >> 0x10) & 0xff;
  if (((uVar5 < DAT_003fb8d2) && (uVar5 < DAT_001ce1dc)) && ((DAT_003fb8d8 >> 1 & 1) != 0)) {
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  B_komxoff = (char)iVar4;
  if ((DAT_003fb8d9 >> 2 & 1) != 0) {
    DAT_003fb8d9 = DAT_003fb8d9 & 0xdf;
  }
  if ((DAT_003fb8d9 >> 3 & 1) != 0) {
    DAT_003fb8d9 = DAT_003fb8d9 & 0xef;
  }
  bVar1 = (byte)(iVar4 << 6);
  bVar3 = bVar1 | DAT_003fb8d9 & 0xbf;
  if ((bool)B_komnoff) {
    bVar3 = bVar1 | DAT_003fb8d9 & 0x9f | 0x20;
  }
  DAT_003fb8d9 = bVar3;
  if ((bool)B_komnon) {
    DAT_003fb8d9 = DAT_003fb8d9 & 0xef | 0x10;
  }
  if ((((bool)B_koena) || ((DAT_003fb8d9 >> 6 & 1) != 0)) && ((DAT_003fb8d9 >> 5 & 1) != 0)) {
    DAT_003fb8d9 = DAT_003fb8d9 & 0x7f | 0x80;
  }
  else if ((DAT_003fb8d9 >> 4 & 1) != 0) {
    DAT_003fb8d9 = DAT_003fb8d9 & 0x7f;
  }
  if (((B_ko == '\0') || ((bool)B_kooff)) || (-1 < (char)DAT_003fb8d9)) {
    DAT_003fb8d8 = DAT_003fb8d8 & 0xfe;
    bVar2 = false;
  }
  else {
    DAT_003fb8d8 = DAT_003fb8d8 & 0xfe | 1;
    bVar2 = true;
  }
  B_koe = DAT_001ce217 < DAT_003fb8d4;
  if ((!bVar2) || (DAT_001ce217 < DAT_003fb8d4)) {
    B_acres = 0;
  }
  else {
    B_acres = 1;
  }
  return;
}

