/*
 * Program: n42.bin
 * Function: FUN_000c4630
 * Entry: 000c4630
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c4630(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  
  if (B_nswo1 == '\0') {
    uVar6 = (uint)nsol * 0x28;
    if (0xfffe < uVar6) {
      uVar6 = 0xffff;
    }
    iVar3 = uVar6 - nmot_w;
    if (iVar3 < -0x8000) {
      iVar3 = -0x8000;
    }
    else if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    dn_w = (word)iVar3;
    iVar3 = (int)(short)dn_w / 0x28;
    sVar5 = (short)iVar3;
    if (sVar5 < 0x80) {
      if (sVar5 < -0x80) {
        dn = 0x80;
      }
      else {
        dn = (byte)iVar3;
      }
    }
    else {
      dn = 0x7f;
    }
    esst_sdn08llsw = FUN_000ab2fc(&DAT_001c8732,(int)(short)dn_w);
    esst_sdn08lltsw = FUN_000ab2fc(&DAT_001c8744,(int)(short)dn_w);
    if (B_llrpd == '\0') {
      dmllr_w = 0;
      dmllrz_w = 0;
    }
    else {
      if (B_vllr == '\0') {
        uVar1 = (uint)(byte)(&DAT_001c86dc)[esst_sdn08llsw >> 0x10] +
                ((int)((esst_sdn08llsw & 0xffff) *
                      ((uint)(byte)(&DAT_001c86dd)[esst_sdn08llsw >> 0x10] -
                      (uint)(byte)(&DAT_001c86dc)[esst_sdn08llsw >> 0x10])) >> 0x10);
        uVar2 = (uint)(byte)(&DAT_001c86e4)[esst_sdn08lltsw >> 0x10] +
                ((int)((esst_sdn08lltsw & 0xffff) *
                      ((uint)(byte)(&DAT_001c86e5)[esst_sdn08lltsw >> 0x10] -
                      (uint)(byte)(&DAT_001c86e4)[esst_sdn08lltsw >> 0x10])) >> 0x10);
        uVar6 = (uint)(byte)(&DAT_001c870c)[esst_sdn08llsw >> 0x10] +
                ((int)((esst_sdn08llsw & 0xffff) *
                      ((uint)(byte)(&DAT_001c870d)[esst_sdn08llsw >> 0x10] -
                      (uint)(byte)(&DAT_001c870c)[esst_sdn08llsw >> 0x10])) >> 0x10);
        uVar4 = (uint)(byte)(&DAT_001c8714)[esst_sdn08lltsw >> 0x10] +
                ((int)((esst_sdn08lltsw & 0xffff) *
                      ((uint)(byte)(&DAT_001c8715)[esst_sdn08lltsw >> 0x10] -
                      (uint)(byte)(&DAT_001c8714)[esst_sdn08lltsw >> 0x10])) >> 0x10);
      }
      else {
        uVar1 = (uint)(byte)(&DAT_001c86f4)[esst_sdn08llsw >> 0x10] +
                ((int)((esst_sdn08llsw & 0xffff) *
                      ((uint)(byte)(&DAT_001c86f5)[esst_sdn08llsw >> 0x10] -
                      (uint)(byte)(&DAT_001c86f4)[esst_sdn08llsw >> 0x10])) >> 0x10);
        uVar2 = (uint)(byte)(&DAT_001c86ec)[esst_sdn08lltsw >> 0x10] +
                ((int)((esst_sdn08lltsw & 0xffff) *
                      ((uint)(byte)(&DAT_001c86ed)[esst_sdn08lltsw >> 0x10] -
                      (uint)(byte)(&DAT_001c86ec)[esst_sdn08lltsw >> 0x10])) >> 0x10);
        uVar6 = (uint)(byte)(&DAT_001c86fc)[esst_sdn08llsw >> 0x10] +
                ((int)((esst_sdn08llsw & 0xffff) *
                      ((uint)(byte)(&DAT_001c86fd)[esst_sdn08llsw >> 0x10] -
                      (uint)(byte)(&DAT_001c86fc)[esst_sdn08llsw >> 0x10])) >> 0x10);
        uVar4 = (uint)(byte)(&DAT_001c8704)[esst_sdn08lltsw >> 0x10] +
                ((int)((esst_sdn08lltsw & 0xffff) *
                      ((uint)(byte)(&DAT_001c8705)[esst_sdn08lltsw >> 0x10] -
                      (uint)(byte)(&DAT_001c8704)[esst_sdn08lltsw >> 0x10])) >> 0x10);
      }
      iVar3 = (int)((((int)(((uVar2 & 0xff) - (uVar1 & 0xff)) * (uint)dpsfak) >> 8) + (uVar1 & 0xff)
                    ) * (int)(short)dn_w) >> 2;
      if (iVar3 < 0x8000) {
        if (iVar3 < -0x8000) {
          dmllrp_w = 0x8000;
        }
        else {
          dmllrp_w = (word)iVar3;
        }
      }
      else {
        dmllrp_w = 0x7fff;
      }
      iVar3 = (int)((((int)(((uVar4 & 0xff) - (uVar6 & 0xff)) * (uint)dpsfak) >> 8) + (uVar6 & 0xff)
                    ) * (int)(short)dn_w) >> 2;
      if (iVar3 < 0x8000) {
        if (iVar3 < -0x8000) {
          dmllrpz_w = 0x8000;
        }
        else {
          dmllrpz_w = (word)iVar3;
        }
      }
      else {
        dmllrpz_w = 0x7fff;
      }
      iVar3 = (int)(short)dmllrp_w + (int)(short)dmllrd_w;
      if (iVar3 < -0x8000) {
        iVar3 = -0x8000;
      }
      else if (0x7fff < iVar3) {
        iVar3 = 0x7fff;
      }
      dmllr_w = (word)iVar3;
      if ((short)DAT_005b8280 < (short)dmllr_w) {
        dmllr_w = DAT_005b8280;
      }
      else if ((short)dmllr_w < (short)_DMLLRMN) {
        dmllr_w = _DMLLRMN;
      }
      iVar3 = (int)(short)dmllrpz_w + (int)(short)dmllrdz_w;
      if (iVar3 < -0x8000) {
        iVar3 = -0x8000;
      }
      else if (0x7fff < iVar3) {
        iVar3 = 0x7fff;
      }
      dmllrz_w = (word)iVar3;
      if ((short)DAT_005b8282 < (short)dmllrz_w) {
        dmllrz_w = DAT_005b8282;
      }
      else if ((short)dmllrz_w < (short)_DMLLRZMN) {
        dmllrz_w = _DMLLRZMN;
      }
    }
  }
  else {
    dn = 0;
    dn_w = 0;
    dmllr_w = 0;
    dmllrz_w = 0;
  }
  return;
}

