/*
 * Program: n42.bin
 * Function: calc_ll
 * Entry: 000db21c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000db298) */
/* WARNING: Removing unreachable block (ram,0x000db5d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void calc_ll(void)

{
  byte bVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  ushort uVar5;
  word wVar6;
  uint uVar7;
  
  uVar2 = calc_value_from_x_y(0x1c97ba,wped_w,nmot_w);
  DAT_005b959c = (ushort)uVar2;
  DAT_005b959e = DAT_005b959c;
  if ((DAT_003fde7b & 1) != 0) {
    uVar7 = (uint)_DAT_003fb3c2 + (uint)_DAT_003fb3c4;
    if (0xffff < uVar7) {
      uVar7 = 0xffff;
    }
    if ((uVar7 & 0xffff) <= (uVar2 & 0xffff)) {
      DAT_005b959e = (ushort)uVar7;
    }
  }
  _DAT_003fb3c4 = DAT_005b959e;
  DAT_005b9594 = DAT_005b92e0;
  if (DAT_005b92e0 < DAT_005b959e) {
    DAT_005b9594 = DAT_005b959e;
  }
  if (_MRFALLU < DAT_005b9594) {
    if (_MRFALLO <= DAT_005b9594) {
      DAT_003fb3c9 = DAT_003fb3c9 & 0xef | 0x10;
    }
  }
  else {
    DAT_003fb3c9 = DAT_003fb3c9 & 0xef;
  }
  bVar1 = DAT_003fb3c9 >> 4 & 1;
  if ((bVar1 == 0) && ((DAT_003fbf70 == '\0' || ((DAT_001c9510 & 0x20) == 0)))) {
    B_ll = '\x01';
  }
  else {
    B_ll = '\0';
  }
  if ((DAT_005b959e < DAT_005b92e0) && (bVar1 != 0)) {
    B_fgr = 1;
  }
  else {
    B_fgr = 0;
  }
  mrfa_w = DAT_005b9594;
  if (DAT_005b9594 < mrstt_w) {
    mrfa_w = mrstt_w;
  }
  DAT_005b9582 = mivmx_w;
  if (minmx_w < mivmx_w) {
    DAT_005b9582 = minmx_w;
  }
  if (miasrl_w < DAT_005b9582) {
    DAT_005b9582 = miasrl_w;
  }
  if (miges_w < DAT_005b9582) {
    DAT_005b9582 = miges_w;
  }
  if (mibgr_w < DAT_005b9582) {
    DAT_005b9582 = mibgr_w;
  }
  uVar2 = (uint)DAT_005b9582;
  if (mimax_w < uVar2) {
    uVar2 = (uint)mimax_w;
  }
  DAT_005b9584 = (undefined2)uVar2;
  uVar7 = (uint)mimxl1_w;
  if (uVar2 < uVar7) {
    uVar2 = uVar7;
  }
  DAT_005b9586 = (undefined2)uVar2;
  DAT_005b9570 = FUN_000a7b40(uVar2 >> 1,(uVar2 & 1) << 0xf,uVar7);
  DAT_005b958e = calc_value_from_x_y(0x1c96ca,nmot_w,DAT_005b9570);
  DAT_005b959a = DAT_005b958e;
  if (mrfa_w < DAT_005b958e) {
    DAT_005b959a = mrfa_w;
  }
  wVar6 = mrfa_w;
  if (0x7fff < mrfa_w) {
    wVar6 = 0x8000;
  }
  uVar2 = (uint)mimxl1_w - (uint)mimin_w;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0xffff < (int)uVar2) {
    uVar2 = 0xffff;
  }
  uVar2 = FUN_000b1800(wVar6,uVar2 & 0xffff);
  uVar2 = (uVar2 & 0xffff) + (uint)mimin_w;
  if (0xffff < uVar2) {
    uVar2 = 0xffff;
  }
  uVar2 = (uVar2 >> 1 & 0x7fff) + (int)(short)dmllri_w;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0xffff < (int)uVar2) {
    uVar2 = 0xffff;
  }
  uVar3 = calc_value_from_x_y(0x1c95da,nmot_w,mrfa_w);
  uVar2 = FUN_000b181c(uVar3,uVar2 & 0xffff);
  if ((uint)MDIMX << 8 <= (uVar2 & 0xffff)) {
    uVar2 = (uint)MDIMX << 8;
  }
  DAT_005b958c = (ushort)uVar2;
  _DAT_003fb3b2 = DAT_005b958a;
  DAT_005b958a = mimax_w;
  if ((uVar2 & 0xffff) < (uint)mimax_w) {
    DAT_005b958a = DAT_005b958c;
  }
  if ((S_mdversta == '\0') && (B_sab == '\0')) {
    iVar4 = (int)(short)dmverl_w + (uint)(mdverb_w >> 1);
    if (iVar4 < -0x8000) {
      iVar4 = -0x8000;
    }
    else if (0x7fff < iVar4) {
      iVar4 = 0x7fff;
    }
    DAT_005b9576 = (word)iVar4;
  }
  else {
    DAT_005b9576 = dmverl_w;
  }
  if (DAT_001c9513 == '\0') {
    uVar2 = (uint)(short)dpssol_w;
  }
  else {
    uVar2 = (uint)dpssol_uw;
  }
  iVar4 = ((uint)DAT_005b98d2 - (uint)kfdps_aus) * 10 + 0x50000;
  if (iVar4 < 0x100) {
    iVar4 = 0x100;
  }
  iVar4 = (int)(((uVar2 - kfdps_aus) + 0x8000) * 0x9f6) / iVar4;
  if (iVar4 < 0) {
    DAT_005b8ebf = 0;
  }
  else if (iVar4 < 0x100) {
    DAT_005b8ebf = (undefined)iVar4;
  }
  else {
    DAT_005b8ebf = 0xff;
  }
  DAT_005b91a4 = calc_value_from_x_y_2(&DAT_001d1ea8,DAT_005b8ebf,dpsfak);
  iVar4 = (uint)(DAT_005b9588 >> 1) - (uint)(mdverl_w >> 1);
  if (iVar4 < -0x8000) {
    iVar4 = -0x8000;
  }
  else if (0x7fff < iVar4) {
    iVar4 = 0x7fff;
  }
  DAT_005b9590 = (short)iVar4;
  DAT_003fb3c9 = (B_lsd & 1) << 1 | DAT_003fb3c9 & 0xfd;
  DAT_003fc11b = DAT_001c9510 & 1;
  if ((((((DAT_001c9510 & 1) == 0) || (B_stend == '\0')) || (B_ll != '\0')) || (B_nmot == '\0')) ||
     (((gangi == 0 && ((DAT_001c9511 & 4) == 0)) || (((DAT_001c9510 & 4) != 0 && (B_kuppl != '\0')))
      ))) {
    DAT_003fc112 = '\0';
  }
  else {
    DAT_003fc112 = '\x01';
  }
  DAT_005b956c = FUN_000ab038(&DAT_001c957a,(int)_DAT_001c990e,esst_sga08mdub,DAT_005b9e04);
  iVar4 = (uint)(DAT_005b958a >> 1) - (uint)(DAT_005b957a >> 1);
  if (iVar4 < -0x8000) {
    iVar4 = -0x8000;
  }
  else if (0x7fff < iVar4) {
    iVar4 = 0x7fff;
  }
  DAT_003fc117 = DAT_005b956c < (short)iVar4;
  iVar4 = (uint)(DAT_005b958a >> 1) - (uint)(DAT_005b9588 >> 1);
  if (iVar4 < -0x8000) {
    iVar4 = -0x8000;
  }
  else if (0x7fff < iVar4) {
    iVar4 = 0x7fff;
  }
  if ((short)iVar4 < DAT_005b956e) {
    B_lsd = 0;
  }
  else if (DAT_003fc112 == '\0') {
    B_lsd = 0;
  }
  else if ((bool)DAT_003fc117) {
    B_lsd = 1;
  }
  if ((_DAT_003fb3b2 < DAT_005b958a) || (B_lsd != 0)) {
    if (miist_w < _DAT_003fb3c0) {
      DAT_005b9574 = _DAT_003fb3c0;
    }
    else {
      DAT_005b9574 = miist_w;
    }
  }
  else {
    DAT_005b9574 = DAT_005b958a;
  }
  if (((_DAT_003fb3b2 < DAT_005b958a) || (B_lsd != 0)) &&
     ((B_lsd == 0 || ((DAT_003fb3c9 >> 1 & 1) != 0)))) {
    DAT_003fc115 = '\0';
  }
  else {
    DAT_003fc115 = '\x01';
  }
  if (B_sa == '\0') {
    if (DAT_003fb3b5 == '\0') {
      DAT_003fb3c9 = DAT_003fb3c9 & 0xdf;
    }
    else {
      DAT_003fb3b5 = DAT_003fb3b5 + -1;
    }
  }
  else {
    DAT_003fb3b5 = (&DAT_001d1ec0)[DAT_005b9c4c >> 0x10] +
                   (char)((DAT_005b9c4c & 0xffff) *
                          ((uint)(byte)(&DAT_001d1ec1)[DAT_005b9c4c >> 0x10] -
                          (uint)(byte)(&DAT_001d1ec0)[DAT_005b9c4c >> 0x10]) >> 0x10);
    DAT_003fb3c9 = DAT_003fb3c9 & 0xdf | 0x20;
  }
  if (B_ll == '\0') {
    if (DAT_003fb3b6 == '\0') {
      DAT_003fb3c9 = DAT_003fb3c9 & 0xbf;
    }
    else {
      DAT_003fb3b6 = DAT_003fb3b6 + -1;
    }
  }
  else {
    DAT_003fb3b6 = (&DAT_001d1ec8)[DAT_005b9c4c >> 0x10] +
                   (char)((DAT_005b9c4c & 0xffff) *
                          ((uint)(byte)(&DAT_001d1ec9)[DAT_005b9c4c >> 0x10] -
                          (uint)(byte)(&DAT_001d1ec8)[DAT_005b9c4c >> 0x10]) >> 0x10);
    DAT_003fb3c9 = DAT_003fb3c9 & 0xbf | 0x40;
  }
  if (((DAT_003fb3c9 >> 5 & 1) == 0) && ((DAT_003fb3c9 >> 6 & 1) == 0)) {
    DAT_003fc119 = '\0';
  }
  else {
    DAT_003fc119 = '\x01';
  }
  iVar4 = (esst_sga08mdub >> 0x10) * 2;
  if ((DAT_005b9590 <
       (short)(*(short *)(&DAT_001d22ec + iVar4) +
              (short)((esst_sga08mdub & 0xffff) *
                      ((int)*(short *)(iVar4 + 0x1d22ee) - (int)*(short *)(&DAT_001d22ec + iVar4))
                     >> 0x10))) && (DAT_003fc119 != '\0')) {
    DAT_005b95aa = _DAT_001c9924;
    DAT_005b9566 = _DAT_001c9516;
  }
  else {
    DAT_005b95aa = _DAT_003fb3bc;
    DAT_005b9566 = _DAT_003fb3be;
  }
  uVar5 = nturbv_w;
  if ((DAT_001c9512 & 2) != 0) {
    uVar5 = nturbc_w;
  }
  if (nmot_w == 0) {
    if (uVar5 == 0) {
      DAT_005b95a0 = 0;
    }
    else {
      DAT_005b95a0 = 0xffff;
    }
  }
  else {
    uVar2 = ((uint)uVar5 << 0xd) / (uint)nmot_w;
    if (uVar2 < 0x10000) {
      DAT_005b95a0 = (undefined2)uVar2;
    }
    else {
      DAT_005b95a0 = 0xffff;
    }
  }
  if ((DAT_001c9512 & 4) == 0) {
    iVar4 = (DAT_005b9e04 >> 0x10) * 2;
    DAT_005b9572 = *(ushort *)(&DAT_001d22e0 + iVar4) +
                   (short)((DAT_005b9e04 & 0xffff) *
                           ((uint)*(ushort *)(iVar4 + 0x1d22e2) -
                           (uint)*(ushort *)(&DAT_001d22e0 + iVar4)) >> 0x10);
  }
  else {
    DAT_005b9572 = calc_value_from_x_y(&DAT_001c9490,DAT_005b95a0,gangi);
  }
  if ((DAT_001c9512 & 8) == 0) {
    DAT_005b95ac = DAT_005b95aa;
  }
  else {
    uVar2 = (uint)DAT_005b95aa << 0xf;
    if (DAT_005b9572 != 0) {
      uVar2 = uVar2 / DAT_005b9572;
    }
    if (uVar2 == 0) {
      DAT_005b95ac = 1;
    }
    else if (uVar2 < 0x10000) {
      DAT_005b95ac = (ushort)uVar2;
    }
    else {
      DAT_005b95ac = 0xffff;
    }
  }
  if (DAT_003fc115 == '\0') {
    iVar4 = (uint)(DAT_005b958a >> 3) - (uint)(DAT_005b957a >> 3);
    if (iVar4 < -0x8000) {
      iVar4 = -0x8000;
    }
    else if (0x7fff < iVar4) {
      iVar4 = 0x7fff;
    }
    _DAT_003fb3a8 =
         FUN_000a7d58(DAT_005b95ac,(int)(short)iVar4,(int)_DAT_003fb3a8,_DAT_003fb3a8 & 0xffff);
    uVar2 = FUN_000b17f4(DAT_005b957a,DAT_005b9566);
    iVar4 = (int)_DAT_003fb3a8 - ((uVar2 & 0xffff) >> 1);
    if (iVar4 < -0x8000) {
      iVar4 = -0x8000;
    }
    else if (0x7fff < iVar4) {
      iVar4 = 0x7fff;
    }
    _DAT_003fb3ac =
         FUN_000a7d58(DAT_005b95ac,(int)(short)iVar4,(int)_DAT_003fb3ac,_DAT_003fb3ac & 0xffff);
  }
  else {
    uVar2 = FUN_000b17f4(DAT_005b9574,DAT_005b9566);
    _DAT_003fb3a8 = (uint)((ushort)(uVar2 >> 1) & 0x7fff) << 0x10;
    _DAT_003fb3ac = (uint)(DAT_005b9574 >> 3) << 0x10;
  }
  uVar2 = (uint)_DAT_003fb3ac;
  if ((int)uVar2 < 1) {
    DAT_005b957a = 0;
  }
  else if (uVar2 < 0x2000) {
    DAT_005b957a = (ushort)(uVar2 << 3);
  }
  else {
    DAT_005b957a = 0xffff;
  }
  if (B_sab == '\0') {
    if (DAT_003fb3b4 == '\0') {
      DAT_003fb3c9 = DAT_003fb3c9 & 0xfb;
    }
    else {
      DAT_003fb3b4 = DAT_003fb3b4 + -1;
    }
  }
  else {
    DAT_003fb3c9 = DAT_003fb3c9 & 0xfb | 4;
    DAT_003fb3b4 = DAT_001c9514;
  }
  if (((DAT_003fb3c9 >> 2 & 1) == 0) || (B_lsd != 0)) {
LAB_000dc068:
    DAT_003fb3c9 = DAT_003fb3c9 & 0xf7 | 8;
  }
  else {
    uVar2 = (uint)mimin_w - (uint)_DAT_003fb3b0;
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    else if (0xffff < (int)uVar2) {
      uVar2 = 0xffff;
    }
    if ((uint)_DAT_001c9518 < (uVar2 & 0xffff)) goto LAB_000dc068;
    DAT_003fb3c9 = DAT_003fb3c9 & 0xf7;
  }
  if (((((DAT_003fb3c9 >> 3 & 1) == 0) && (B_vnull == '\0')) &&
      ((B_kuppl == '\0' || ((DAT_001c9510 & 0x10) == 0)))) && (_DAT_001c990c <= (short)ngfil_w)) {
    if (B_sab != '\0') {
      B_fil = '\x01';
    }
  }
  else {
    B_fil = '\0';
  }
  _DAT_003fb3b0 = mimin_w;
  if ((B_fil == '\0') || (B_sa != '\0')) {
    uVar5 = miist_w;
    if (B_sa != '\0') {
      uVar5 = 0;
    }
    _DAT_003fb398 = (uint)uVar5 << 0x10;
  }
  else if (B_sab == '\0') {
    _DAT_003fb398 = FUN_000a7f20(_DAT_001c991e,DAT_005b958a,_DAT_003fb398,_DAT_003fb398 & 0xffff);
  }
  else {
    _DAT_003fb398 = FUN_000a7f20(_DAT_001c991c,DAT_005b958a,_DAT_003fb398,_DAT_003fb398 & 0xffff);
  }
  DAT_005b9580 = _DAT_003fb398;
  DAT_003fb3c9 = B_dash & 1 | DAT_003fb3c9 & 0xfe;
  DAT_003fc11a = DAT_001c9510 & 2;
  DAT_005b9e04 = FUN_000ab2fc(&DAT_001c990e,(int)DAT_005b9590);
  DAT_005b9568 = FUN_000ab038(0x1c951a,(int)_DAT_001c990e,esst_sga08mdub,DAT_005b9e04);
  iVar4 = (uint)(DAT_005b9578 >> 1) - (uint)(DAT_005b958a >> 1);
  if (iVar4 < -0x8000) {
    iVar4 = -0x8000;
  }
  else if (0x7fff < iVar4) {
    iVar4 = 0x7fff;
  }
  DAT_003fc110 = DAT_005b9568 < (short)iVar4;
  if (B_stend == '\0') {
    _DAT_003fb3b8 = _DAT_001c9920;
    DAT_003fb3ba = '\0';
  }
  else if (_DAT_003fb3b8 == 0) {
    DAT_003fb3ba = '\x01';
  }
  else {
    _DAT_003fb3b8 = _DAT_003fb3b8 + -1;
  }
  if (((((B_nmot == '\0') || (DAT_003fb3ba == '\0')) ||
       ((B_vnull != '\0' && ((DAT_001c9511 & 1) == 0)))) ||
      ((((gangi == 0 && ((DAT_001c9511 & 2) == 0)) || (DAT_003fc11a == 0)) ||
       (((DAT_001c9510 & 8) != 0 && (B_kuppl != '\0')))))) || (B_sab != '\0')) {
    DAT_003fc111 = '\0';
  }
  else {
    DAT_003fc111 = '\x01';
  }
  if ((B_dash == 0) && ((DAT_001c9510 & 0x40) == 0)) {
LAB_000dc3dc:
    if (DAT_003fc111 == '\0') {
      B_dash = 0;
    }
    else if ((bool)DAT_003fc110) {
      B_dash = 1;
    }
  }
  else {
    iVar4 = (uint)(DAT_005b9588 >> 1) - (uint)(DAT_005b958a >> 1);
    if (iVar4 < -0x8000) {
      iVar4 = -0x8000;
    }
    else if (0x7fff < iVar4) {
      iVar4 = 0x7fff;
    }
    if (DAT_005b956a <= (short)iVar4) goto LAB_000dc3dc;
    B_dash = 0;
  }
  if ((B_dash != 0) &&
     (DAT_005b95a6 = FUN_000aafb0(&DAT_001d2220,_DAT_001ce9be,esst_sga08mdub,DAT_005b9c4c),
     DAT_005b95a8 = DAT_005b95a6, (DAT_001c9512 & 0x10) != 0)) {
    uVar2 = (uint)DAT_005b95a6 << 0xf;
    if (DAT_005b9572 != 0) {
      uVar2 = uVar2 / DAT_005b9572;
    }
    if (uVar2 == 0) {
      DAT_005b95a8 = 1;
    }
    else if (uVar2 < 0x10000) {
      DAT_005b95a8 = (ushort)uVar2;
    }
    else {
      DAT_005b95a8 = 0xffff;
    }
  }
  if (DAT_005b958a < _DAT_003fb3b2) {
    if (B_dash != 0) goto LAB_000dc500;
  }
  else {
    if (B_dash == 0) {
      _DAT_003fb39c = (uint)DAT_005b958a << 0x10;
      goto LAB_000dc544;
    }
LAB_000dc500:
    if ((DAT_003fb3c9 & 1) == 0) {
      _DAT_003fb39c = (uint)miist_w << 0x10;
      goto LAB_000dc544;
    }
  }
  _DAT_003fb39c = FUN_000a7f20(DAT_005b95a8,DAT_005b958a,_DAT_003fb39c,_DAT_003fb39c & 0xffff);
LAB_000dc544:
  DAT_005b9578 = _DAT_003fb39c;
  if (B_fil == '\0') {
    if (B_dash == 0) {
      if (B_lsd == 0) {
        DAT_005b9588 = DAT_005b958a;
      }
      else {
        DAT_005b9588 = DAT_005b957a;
      }
    }
    else {
      DAT_005b9588 = _DAT_003fb39c;
    }
  }
  else {
    DAT_005b9588 = DAT_005b9580;
  }
  iVar4 = (short)DAT_005b9576 * 2 + (uint)DAT_005b9588;
  if (iVar4 < 0) {
    mifa_w = 0;
  }
  else if (iVar4 < 0x10000) {
    mifa_w = (word)iVar4;
  }
  else {
    mifa_w = 0xffff;
  }
  mifa = (byte)(mifa_w >> 8);
  if (B_dash == 0) {
    _DAT_003fb3a0 = (uint)milsol_w << 0x10;
    if (B_lsd == 0) {
      uVar2 = (uint)DAT_005b958a;
    }
    else {
      uVar2 = FUN_000aa834(DAT_001d1ff2,&DAT_001d1ff4,DAT_001d1ff3,&DAT_001d1ffc,&DAT_001d200c,gangi
                           ,(uint)DAT_005b9588);
      uVar7 = FUN_000aa834(DAT_001d1f58,&DAT_001d1f5a,DAT_001d1f59,&DAT_001d1f62,&DAT_001d1f72,gangi
                           ,DAT_005b9588);
      uVar2 = ((int)(((uVar7 & 0xffff) - (uVar2 & 0xffff)) * (uint)DAT_005b91a4) >> 8) +
              (uVar2 & 0xffff);
      if ((int)uVar2 < 0x10000) {
        if ((int)uVar2 < 0) {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0xffff;
      }
      if ((uint)DAT_005b958a < (uVar2 & 0xffff)) {
        uVar2 = (uint)DAT_005b958a;
      }
    }
  }
  else {
    _DAT_003fb3a0 = FUN_000a7f20(DAT_005b95a8,DAT_005b958a,_DAT_003fb3a0,_DAT_003fb3a0 & 0xffff);
    uVar2 = _DAT_003fb3a0 >> 0x10;
  }
  iVar4 = (short)DAT_005b9576 * 2 + (uVar2 & 0xffff);
  if (iVar4 < 0) {
    mifal_w = 0;
  }
  else if (iVar4 < 0x10000) {
    mifal_w = (word)iVar4;
  }
  else {
    mifal_w = 0xffff;
  }
  return;
}

