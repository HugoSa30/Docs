/*
 * Program: n42.bin
 * Function: FUN_0019a300
 * Entry: 0019a300
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019a300(void)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  
  if (B_fs == '\0') {
    DAT_003fb344 = DAT_003fb344 & 0xfb;
  }
  else {
    if ((DAT_003fb344 >> 2 & 1) == 0) {
      DAT_003fb344 = DAT_003fb344 & 0xf3 | 0xc;
    }
    if ((DAT_003fb341 == '\0') && ((DAT_003fb344 >> 3 & 1) == 0)) {
      if (dmdresfs != 0) {
        iVar4 = (uint)_DAT_003fb33e - (uint)DMRESFS;
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        else if (0xffff < iVar4) {
          iVar4 = 0xffff;
        }
        _DAT_003fb33e = (ushort)iVar4;
      }
    }
    else {
      _DAT_003fb33e =
           (ushort)(byte)((&DAT_001c87c0)[esst_stm04saub >> 0x10] +
                         (char)((esst_stm04saub & 0xffff) *
                                ((uint)(byte)(&DAT_001c87c1)[esst_stm04saub >> 0x10] -
                                (uint)(byte)(&DAT_001c87c0)[esst_stm04saub >> 0x10]) >> 0x10)) << 8;
    }
    dmdresfs = DAT_003fb33e;
  }
  if ((B_nswo1 == '\0') && (B_ll != '\0')) {
    if (((DNLLRES < (char)dns) && (DAT_003fb342 == '\0')) && (B_ll != '\0')) {
      if ((DAT_003fb344 & 1) == 0) {
        DAT_003fb344 = DAT_003fb344 & 0xfc | 3;
      }
    }
    else {
      DAT_003fb344 = DAT_003fb344 & 0xfe;
    }
    if ((DAT_003fb340 == '\0') && ((DAT_003fb344 >> 1 & 1) == 0)) {
      if ((_DAT_003fb33c != 0) && (B_ll != '\0')) {
        iVar4 = (uint)_DAT_003fb33c - (uint)DMRESLL;
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        else if (0xffff < iVar4) {
          iVar4 = 0xffff;
        }
        _DAT_003fb33c = (ushort)iVar4;
      }
    }
    else {
      _DAT_003fb33c =
           (ushort)(byte)((&DAT_001c87c4)[esst_stm04saub >> 0x10] +
                         (char)((esst_stm04saub & 0xffff) *
                                ((uint)*(byte *)((esst_stm04saub >> 0x10) + 0x1c87c5) -
                                (uint)(byte)(&DAT_001c87c4)[esst_stm04saub >> 0x10]) >> 0x10)) << 8;
    }
    if (B_fs == '\0') {
      uVar1 = func_0xff21ae98(&KFMREST,DAT_001c1088,esst_sns06llsb,esst_stm04saub);
      uVar1 = uVar1 & 0xff;
      uVar2 = func_0xff21ae98(&KFMRES,DAT_001c1078,esst_sns06llsb,esst_sta04saub);
      uVar2 = uVar2 & 0xff;
    }
    else {
      uVar1 = func_0xff21ae98(&KFMRESFST,DAT_001c1088,esst_sns06llsb,esst_stm04saub);
      uVar1 = (uVar1 & 0xff) + (uint)dmdresfs;
      uVar2 = func_0xff21ae98(&KFMRESFS,DAT_001c1078,esst_sns06llsb,esst_sta04saub);
      uVar2 = (uVar2 & 0xff) + (uint)dmdresfs;
    }
    sVar3 = func_0xff219bb4(0x1d1aa2,minhub_w,dpssol_uw);
    resdiff = uVar2 + (int)sVar3;
    if ((int)resdiff < 0) {
      resdiff = 0;
    }
    iVar4 = resdiff + ((int)((uVar1 - resdiff) * (uint)dpsfak) >> 8);
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (0xffff < iVar4) {
      iVar4 = 0xffff;
    }
    sVar5 = (short)(char)dmdresdtev;
    sVar3 = func_0xff2191ac(_DAT_001c87ca,&DAT_001c87cc,&DAT_001c87da,(int)(short)lws_w);
    iVar6 = (int)sVar3 + (int)sVar5;
    if (iVar6 < -0x8000) {
      iVar6 = -0x8000;
    }
    else if (0x7fff < iVar6) {
      iVar6 = 0x7fff;
    }
    iVar4 = (int)(short)iVar4 + (int)(short)iVar6;
    if (iVar4 < -0x8000) {
      iVar4 = -0x8000;
    }
    else if (0x7fff < iVar4) {
      iVar4 = 0x7fff;
    }
    uVar1 = (uint)DAT_003fb33c + (int)(short)iVar4;
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    else if (0xffff < (int)uVar1) {
      uVar1 = 0xffff;
    }
    uVar1 = uVar1 & 0xffff;
    if (uVar1 < (uint)dmrac << 2) {
      uVar1 = (uint)dmrac << 2;
    }
    if (uVar1 + DAT_005b94fc < 0x10000) {
      dmrllr_w = (word)(uVar1 + DAT_005b94fc);
    }
    else {
      dmrllr_w = 0xffff;
    }
  }
  else {
    dmrllr_w = (ushort)dmrac << 2;
  }
  return;
}

