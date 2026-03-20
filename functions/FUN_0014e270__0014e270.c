/*
 * Program: n42.bin
 * Function: FUN_0014e270
 * Entry: 0014e270
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0014e270(void)

{
  ushort uVar6;
  char cVar9;
  ushort uVar7;
  char cVar10;
  ushort uVar8;
  char cVar11;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar12;
  int iVar13;
  uint uVar14;
  
  if (B_stend == '\0') {
    uVar14 = func_0xff2187cc(&DAT_001c65a8,tmot);
    uVar1 = func_0xff2187cc(&DAT_001c65c8,nmot);
    uVar2 = func_0xff2187cc(&DAT_001c6594,tmot);
    uVar3 = func_0xff2187cc(&DAT_001c65bc,nmot);
    uVar6 = (ushort)dpsfak;
    uVar4 = func_0xff2187cc(&DAT_001c6594,tmot);
    uVar5 = func_0xff2187cc(&DAT_001c65bc,nmot);
    iVar13 = (((uVar14 & 0xff) + (uVar1 & 0xff)) - ((uVar2 & 0xff) + (uVar3 & 0xff))) *
             (int)(short)uVar6 + ((uVar4 & 0xff) + (uVar5 & 0xff)) * 0x100 + (char)vsvw * 0x200;
    uVar14 = iVar13 >> 8;
    if ((short)((uint)iVar13 >> 8) < 1) {
      uVar14 = 0;
    }
    if (0xff < (uVar14 & 0xffff)) {
      uVar14 = 0xff;
    }
    wvespnst = (byte)uVar14;
  }
  else {
    iVar13 = (esst_snm08gkub >> 0x10) * 2;
    if (((uint)*(ushort *)(&DAT_001c6550 + iVar13) +
         ((int)((esst_snm08gkub & 0xffff) *
               ((uint)*(ushort *)(&DAT_001c6552 + iVar13) -
               (uint)*(ushort *)(&DAT_001c6550 + iVar13))) >> 0x10) & 0xffff) < (uint)mrfa_w) {
      weemrfa = (&WEEMRFAN)[esst_snm08gkub >> 0x10] +
                (char)((esst_snm08gkub & 0xffff) *
                       ((uint)(byte)(&WEEMRFAN)[esst_snm08gkub >> 0x10] -
                       (uint)(byte)(&WEEMRFAN)[esst_snm08gkub >> 0x10]) >> 0x10);
    }
    iVar13 = (esst_snm08gkub >> 0x10) * 2;
    B_mrfamx = ((uint)*(ushort *)(&DAT_001c6550 + iVar13) +
                ((int)((esst_snm08gkub & 0xffff) *
                      ((uint)*(ushort *)(&DAT_001c6552 + iVar13) -
                      (uint)*(ushort *)(&DAT_001c6550 + iVar13))) >> 0x10) & 0xffff) < (uint)mrfa_w;
    if ((bool)B_mrfamx) {
      iVar13 = (uint)weemrfa << 8;
    }
    else {
      uVar6 = func_0xff21ae98(&DAT_001c6510,DAT_001c0f64,esst_snm08gkub,esst_srl08gkub);
      cVar9 = func_0xff218eec(WEEMGD,&WEEMGD,0x1c658a,tmot);
      uVar7 = func_0xff21ae98(&DAT_001c64d0,DAT_001c0f64,esst_snm08gkub,esst_srl08gkub);
      cVar10 = func_0xff218eec(WEEM,&WEEM,0x1c6579,tmot);
      uVar12 = (ushort)dpsfak;
      uVar8 = func_0xff21ae98(&DAT_001c64d0,DAT_001c0f64,esst_snm08gkub,esst_srl08gkub);
      cVar11 = func_0xff218eec(WEEM,&WEEM,0x1c6579,tmot);
      iVar13 = (((int)(short)(uVar6 & 0xff) + (int)cVar9) -
               ((int)(short)(uVar7 & 0xff) + (int)cVar10)) * (int)(short)uVar12 +
               ((int)(short)(uVar8 & 0xff) + (int)cVar11) * 0x100;
    }
    iVar13 = iVar13 + (char)vsvw * 0x200;
    uVar14 = iVar13 >> 8;
    if ((short)((uint)iVar13 >> 8) < 1) {
      uVar14 = 0;
    }
    if (0xff < (uVar14 & 0xffff)) {
      uVar14 = 0xff;
    }
    wvespnst = (byte)uVar14;
  }
  wea = (&WEAN)[esst_snm08gkub >> 0x10] +
        (char)((esst_snm08gkub & 0xffff) *
               ((uint)(byte)(&WEAN)[esst_snm08gkub >> 0x10] -
               (uint)(byte)(&WEAN)[esst_snm08gkub >> 0x10]) >> 0x10);
  return;
}

