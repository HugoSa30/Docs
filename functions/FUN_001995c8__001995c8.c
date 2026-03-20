/*
 * Program: n42.bin
 * Function: FUN_001995c8
 * Entry: 001995c8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001995c8(void)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  word wVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  
  if (B_nswo1 != '\0') {
    dmllri_w = 0;
    goto LAB_0019a2dc;
  }
  DAT_005b8280 = (undefined2)
                 (((uint)(byte)(&DAT_001c8644)[esst_snm06llub >> 0x10] +
                   ((int)((esst_snm06llub & 0xffff) *
                         ((uint)*(byte *)((esst_snm06llub >> 0x10) + 0x1c8645) -
                         (uint)(byte)(&DAT_001c8644)[esst_snm06llub >> 0x10])) >> 0x10) & 0xff) << 7
                 );
  DAT_005b8282 = (undefined2)
                 (((uint)(byte)(&DAT_001c864c)[esst_snm06llub >> 0x10] +
                   ((int)((esst_snm06llub & 0xffff) *
                         ((uint)(byte)(&DAT_001c864d)[esst_snm06llub >> 0x10] -
                         (uint)(byte)(&DAT_001c864c)[esst_snm06llub >> 0x10])) >> 0x10) & 0xff) << 7
                 );
  if (B_llrpd == '\0') {
    dmllrd_w = 0;
    dmllrdz_w = 0;
  }
  else {
    uVar4 = (uint)(byte)(&DAT_001c86a4)[esst_sns06llsb >> 0x10] +
            ((int)((esst_sns06llsb & 0xffff) *
                  ((uint)(byte)(&DAT_001c86a5)[esst_sns06llsb >> 0x10] -
                  (uint)(byte)(&DAT_001c86a4)[esst_sns06llsb >> 0x10])) >> 0x10) & 0xff;
    if (B_vllr == 0) {
      uVar11 = (uint)(byte)(&DAT_001c8674)[esst_sng06llsb >> 0x10] +
               ((int)((esst_sng06llsb & 0xffff) *
                     ((uint)*(byte *)((esst_sng06llsb >> 0x10) + 0x1c8675) -
                     (uint)(byte)(&DAT_001c8674)[esst_sng06llsb >> 0x10])) >> 0x10) & 0xff;
      uVar2 = (uint)(byte)(&DAT_001c8694)[esst_sns06llsb >> 0x10] +
              ((int)((esst_sns06llsb & 0xffff) *
                    ((uint)(byte)(&DAT_001c8695)[esst_sns06llsb >> 0x10] -
                    (uint)(byte)(&DAT_001c8694)[esst_sns06llsb >> 0x10])) >> 0x10) & 0xff;
      uVar6 = (uint)dpsfak;
      uVar3 = (uint)(byte)(&DAT_001c8654)[esst_sng06llsb >> 0x10] +
              ((int)((esst_sng06llsb & 0xffff) *
                    ((uint)(byte)(&DAT_001c8655)[esst_sng06llsb >> 0x10] -
                    (uint)(byte)(&DAT_001c8654)[esst_sng06llsb >> 0x10])) >> 0x10) & 0xff;
      iVar8 = (int)(short)((short)(char)ngfil *
                          ((short)((((uint)(byte)(&DAT_001c869c)[esst_sns06lltsb >> 0x10] +
                                     ((int)((esst_sns06lltsb & 0xffff) *
                                           ((uint)*(byte *)((esst_sns06lltsb >> 0x10) + 0x1c869d) -
                                           (uint)(byte)(&DAT_001c869c)[esst_sns06lltsb >> 0x10])) >>
                                     0x10) & 0xff) - uVar2) * uVar6 >> 8) + (short)uVar2 & 0xffU)) *
              (int)(short)-((short)((((uint)(byte)(&DAT_001c865c)[esst_sng06lltsb >> 0x10] +
                                      ((int)((esst_sng06lltsb & 0xffff) *
                                            ((uint)(byte)(&DAT_001c865d)[esst_sng06lltsb >> 0x10] -
                                            (uint)(byte)(&DAT_001c865c)[esst_sng06lltsb >> 0x10]))
                                      >> 0x10) & 0xff) - uVar3) * uVar6 >> 8) + (short)uVar3 & 0xffU
                           );
      iVar7 = (int)(short)((short)(char)ngfil *
                          ((short)((((uint)(byte)(&DAT_001c86ac)[esst_sns06lltsb >> 0x10] +
                                     ((int)((esst_sns06lltsb & 0xffff) *
                                           ((uint)(byte)(&DAT_001c86ad)[esst_sns06lltsb >> 0x10] -
                                           (uint)(byte)(&DAT_001c86ac)[esst_sns06lltsb >> 0x10])) >>
                                     0x10) & 0xff) - uVar4) * uVar6 >> 8) + (short)uVar4)) *
              (int)(short)-((short)((((uint)(byte)(&DAT_001c867c)[esst_sng06lltsb >> 0x10] +
                                      ((int)((esst_sng06lltsb & 0xffff) *
                                            ((uint)(byte)(&DAT_001c867d)[esst_sng06lltsb >> 0x10] -
                                            (uint)(byte)(&DAT_001c867c)[esst_sng06lltsb >> 0x10]))
                                      >> 0x10) & 0xff) - uVar11) * uVar6 >> 8) + (short)uVar11);
    }
    else {
      uVar11 = (uint)(byte)(&DAT_001c8684)[esst_sng06llsb >> 0x10] +
               ((int)((esst_sng06llsb & 0xffff) *
                     ((uint)(byte)(&DAT_001c8685)[esst_sng06llsb >> 0x10] -
                     (uint)(byte)(&DAT_001c8684)[esst_sng06llsb >> 0x10])) >> 0x10) & 0xff;
      uVar2 = (uint)(byte)(&DAT_001c8694)[esst_sns06llsb >> 0x10] +
              ((int)((esst_sns06llsb & 0xffff) *
                    ((uint)(byte)(&DAT_001c8695)[esst_sns06llsb >> 0x10] -
                    (uint)(byte)(&DAT_001c8694)[esst_sns06llsb >> 0x10])) >> 0x10) & 0xff;
      uVar6 = (uint)dpsfak;
      uVar3 = (uint)(byte)(&DAT_001c8664)[esst_sng06llsb >> 0x10] +
              ((int)((esst_sng06llsb & 0xffff) *
                    ((uint)(byte)(&DAT_001c8665)[esst_sng06llsb >> 0x10] -
                    (uint)(byte)(&DAT_001c8664)[esst_sng06llsb >> 0x10])) >> 0x10) & 0xff;
      iVar8 = (int)(short)((short)(char)ngfil *
                          ((short)((((uint)(byte)(&DAT_001c869c)[esst_sns06lltsb >> 0x10] +
                                     ((int)((esst_sns06lltsb & 0xffff) *
                                           ((uint)*(byte *)((esst_sns06lltsb >> 0x10) + 0x1c869d) -
                                           (uint)(byte)(&DAT_001c869c)[esst_sns06lltsb >> 0x10])) >>
                                     0x10) & 0xff) - uVar2) * uVar6 >> 8) + (short)uVar2 & 0xffU)) *
              (int)(short)-((short)((((uint)(byte)(&DAT_001c866c)[esst_sng06lltsb >> 0x10] +
                                      ((int)((esst_sng06lltsb & 0xffff) *
                                            ((uint)(byte)(&DAT_001c866d)[esst_sng06lltsb >> 0x10] -
                                            (uint)(byte)(&DAT_001c866c)[esst_sng06lltsb >> 0x10]))
                                      >> 0x10) & 0xff) - uVar3) * uVar6 >> 8) + (short)uVar3 & 0xffU
                           );
      iVar7 = (int)(short)((short)(char)ngfil *
                          ((short)((((uint)(byte)(&DAT_001c86ac)[esst_sns06lltsb >> 0x10] +
                                     ((int)((esst_sns06lltsb & 0xffff) *
                                           ((uint)(byte)(&DAT_001c86ad)[esst_sns06lltsb >> 0x10] -
                                           (uint)(byte)(&DAT_001c86ac)[esst_sns06lltsb >> 0x10])) >>
                                     0x10) & 0xff) - uVar4) * uVar6 >> 8) + (short)uVar4)) *
              (int)(short)-((short)((((uint)(byte)(&DAT_001c868c)[esst_sng06lltsb >> 0x10] +
                                      ((int)((esst_sng06lltsb & 0xffff) *
                                            ((uint)(byte)(&DAT_001c868d)[esst_sng06lltsb >> 0x10] -
                                            (uint)(byte)(&DAT_001c868c)[esst_sng06lltsb >> 0x10]))
                                      >> 0x10) & 0xff) - uVar11) * uVar6 >> 8) + (short)uVar11);
    }
    iVar7 = iVar7 >> 4;
    iVar8 = iVar8 >> 4;
    if (iVar8 < 0x8000) {
      if (iVar8 < -0x8000) {
        iVar10 = -0x8000;
LAB_00199ad0:
        iVar8 = 0x7fff;
      }
      else {
        iVar10 = (int)(short)iVar8;
        iVar8 = iVar10;
        if (iVar10 < 0) {
          if (iVar10 == -0x8000) goto LAB_00199ad0;
          iVar8 = -iVar10;
        }
      }
    }
    else {
      iVar10 = 0x7fff;
      iVar8 = iVar10;
    }
    wVar5 = dmllrd_w;
    if ((short)dmllrd_w < 0) {
      if (dmllrd_w == 0x8000) {
        wVar5 = 0x7fff;
      }
      else {
        wVar5 = -dmllrd_w;
      }
    }
    if ((short)wVar5 < (short)iVar8) {
      _DAT_005b828c = iVar10 << 0x10;
    }
    else {
      uVar1 = _DAT_001c8756;
      if (B_gd != '\0') {
        uVar1 = _DAT_001c8758;
      }
      _DAT_005b828c = func_0xff217f84(uVar1,iVar10,(int)DAT_005b828c,_DAT_005b828c & 0xffff);
    }
    uVar4 = func_0xff21984c(&DAT_001c84f4,minhub_w,dpssol_uw);
    uVar4 = (int)DAT_005b828c * (uVar4 & 0xffff);
    iVar8 = ((int)uVar4 >> 0xf) + (uint)((int)uVar4 < 0 && (uVar4 & 0x7fff) != 0);
    if (iVar8 < 0x8000) {
      if (iVar8 < -0x8000) {
        dmllrd_w = 0x8000;
      }
      else {
        dmllrd_w = (word)iVar8;
      }
    }
    else {
      dmllrd_w = 0x7fff;
    }
    if (iVar7 < 0x8000) {
      if (iVar7 < -0x8000) {
        iVar8 = -0x8000;
LAB_00199c04:
        iVar7 = 0x7fff;
      }
      else {
        iVar8 = (int)(short)iVar7;
        iVar7 = iVar8;
        if (iVar8 < 0) {
          if (iVar8 == -0x8000) goto LAB_00199c04;
          iVar7 = -iVar8;
        }
      }
    }
    else {
      iVar8 = 0x7fff;
      iVar7 = iVar8;
    }
    wVar5 = dmllrdz_w;
    if ((short)dmllrdz_w < 0) {
      if (dmllrdz_w == 0x8000) {
        wVar5 = 0x7fff;
      }
      else {
        wVar5 = -dmllrdz_w;
      }
    }
    if ((short)wVar5 < (short)iVar7) {
      _DAT_005b8290 = iVar8 << 0x10;
    }
    else {
      uVar1 = _DAT_001c8756;
      if (B_gd != '\0') {
        uVar1 = _DAT_001c8758;
      }
      _DAT_005b8290 = func_0xff217f84(uVar1,iVar8,(int)DAT_005b8290,_DAT_005b8290 & 0xffff);
    }
    uVar4 = func_0xff21984c(&DAT_001c8598,minhub_w,dpssol_uw);
    uVar4 = (int)DAT_005b8290 * (uVar4 & 0xffff);
    iVar7 = ((int)uVar4 >> 0xf) + (uint)((int)uVar4 < 0 && (uVar4 & 0x7fff) != 0);
    if (iVar7 < 0x8000) {
      if (iVar7 < -0x8000) {
        dmllrdz_w = 0x8000;
      }
      else {
        dmllrdz_w = (word)iVar7;
      }
    }
    else {
      dmllrdz_w = 0x7fff;
    }
  }
  if (B_gd == '\0') {
    DAT_005b9187 = (&DAT_001d1a90)[esst_stm06llub >> 0x10] +
                   (char)((esst_stm06llub & 0xffff) *
                          ((uint)(byte)(&DAT_001d1a91)[esst_stm06llub >> 0x10] -
                          (uint)(byte)(&DAT_001d1a90)[esst_stm06llub >> 0x10]) >> 0x10);
  }
  else {
    DAT_005b9187 = (&DAT_001d1a98)[esst_stm06lltub >> 0x10] +
                   (char)((esst_stm06lltub & 0xffff) *
                          ((uint)(byte)(&DAT_001d1a99)[esst_stm06lltub >> 0x10] -
                          (uint)(byte)(&DAT_001d1a98)[esst_stm06lltub >> 0x10]) >> 0x10);
  }
  if (B_stend == '\0') {
    if (B_gd == '\0') {
      DAT_005b8294 = func_0xff2187cc(&DAT_001c871c,tmot);
    }
    else {
      DAT_005b8294 = func_0xff2187cc(&DAT_001c8724,tmot);
    }
    DAT_005b8299 = DAT_005b8299 & 0xfd;
  }
  else if (DAT_005b8294 == '\0') {
    DAT_005b8299 = DAT_005b8299 & 0xfd | 2;
  }
  else {
    DAT_005b8294 = DAT_005b8294 + -1;
    DAT_005b8299 = DAT_005b8299 & 0xfd;
  }
  if (DAT_003fbf7f == '\0') {
    if (B_dtes == '\0') {
      if (B_dllr == '\0') {
        if ((DAT_005b8299 >> 1 & 1) == 0) {
          uVar9 = 0;
        }
        else if (B_llr == '\0') {
          uVar9 = 0;
        }
        else if (B_llrein == '\0') {
          uVar9 = (ushort)DAT_005b9187 << 5;
        }
        else if (B_vllr == 0) {
          uVar9 = (ushort)DAT_001c86d4 * -0x20;
        }
        else {
          uVar9 = (ushort)DAT_001c86d7 * -0x20;
        }
      }
      else {
        uVar9 = (ushort)DAT_001c86d5 * -0x20;
      }
    }
    else {
      uVar9 = (ushort)DAT_001c86d6 * -0x20;
    }
    if (B_st == '\0') {
      if ((int)(short)uVar9 <= (int)(short)DAT_005b8284) goto LAB_00199f3c;
      _DAT_005b8284 =
           func_0xff217f84((uint)DAT_001c872b << 8,(int)(short)uVar9,(int)(short)DAT_005b8284,
                           _DAT_005b8284 & 0xffff);
    }
    else {
LAB_00199f3c:
      _DAT_005b8284 = (uint)uVar9 << 0x10;
    }
    limin_w = DAT_005b8284;
  }
  else {
    limin_w = dmllri_w;
  }
  if (DAT_003fc0f6 == '\0') {
    if (B_llr == '\0') {
      uVar9 = 0;
    }
    else if (B_vllr == 0) {
      uVar9 = (ushort)DAT_001c86d8 << 5;
    }
    else {
      uVar9 = (ushort)DAT_001c86d9 << 5;
    }
    if ((int)(short)uVar9 < (int)(short)DAT_005b8288) {
      _DAT_005b8288 =
           func_0xff217f84((uint)DAT_001c872b << 8,uVar9,(int)(short)DAT_005b8288,
                           _DAT_005b8288 & 0xffff);
    }
    else {
      _DAT_005b8288 = (uint)uVar9 << 0x10;
    }
    limax_w = DAT_005b8288;
  }
  else {
    limax_w = dmllri_w;
  }
  if (B_st == '\0') {
    if ((((DAT_001c86da == '\x01') && (B_vllr == 0)) && ((DAT_005b8299 & 1) != 0)) ||
       ((iVar7 = (int)(short)dn_w, _DAT_001c8730 < iVar7 && ((short)dmllri_w < 0)))) {
      wVar5 = 0;
    }
    else if (B_llri == '\0') {
      wVar5 = limin_w;
      if (((short)limin_w <= (short)dmllri_w) &&
         (wVar5 = dmllri_w, (short)limax_w < (short)dmllri_w)) {
        wVar5 = limax_w;
      }
    }
    else {
      if (B_vllr == 0) {
        uVar4 = (uint)(byte)(&DAT_001c86b4)[esst_sdn08llsw >> 0x10] +
                ((int)((esst_sdn08llsw & 0xffff) *
                      ((uint)(byte)(&DAT_001c86b5)[esst_sdn08llsw >> 0x10] -
                      (uint)(byte)(&DAT_001c86b4)[esst_sdn08llsw >> 0x10])) >> 0x10);
        uVar11 = (uint)(byte)(&DAT_001c86bc)[esst_sdn08lltsw >> 0x10] +
                 ((int)((esst_sdn08lltsw & 0xffff) *
                       ((uint)(byte)(&DAT_001c86bd)[esst_sdn08lltsw >> 0x10] -
                       (uint)(byte)(&DAT_001c86bc)[esst_sdn08lltsw >> 0x10])) >> 0x10);
      }
      else {
        uVar4 = (uint)(byte)(&DAT_001c86cc)[esst_sdn08llsw >> 0x10] +
                ((int)((esst_sdn08llsw & 0xffff) *
                      ((uint)(byte)(&DAT_001c86cd)[esst_sdn08llsw >> 0x10] -
                      (uint)(byte)(&DAT_001c86cc)[esst_sdn08llsw >> 0x10])) >> 0x10);
        uVar11 = (uint)(byte)(&DAT_001c86c4)[esst_sdn08lltsw >> 0x10] +
                 ((int)((esst_sdn08lltsw & 0xffff) *
                       ((uint)(byte)(&DAT_001c86c5)[esst_sdn08lltsw >> 0x10] -
                       (uint)(byte)(&DAT_001c86c4)[esst_sdn08lltsw >> 0x10])) >> 0x10);
      }
      iVar8 = (int)(short)(DAT_001c8652 * 0x28);
      if ((short)(DAT_001c8652 * 0x28) <= iVar7) {
        iVar8 = iVar7;
      }
      uVar4 = ((int)(((uVar11 & 0xff) - (uVar4 & 0xff)) * (uint)dpsfak) >> 8) + (uVar4 & 0xff);
      if ((int)uVar4 < 0x80) {
        if ((int)uVar4 < -0x80) {
          uVar4 = 0xffffff80;
        }
      }
      else {
        uVar4 = 0x7f;
      }
      wVar5 = func_0xff217c10((uVar4 & 0xff) << 8,iVar8,(int)(short)dmllri_w,(int)(short)limin_w,
                              (int)(short)limax_w);
    }
  }
  else {
    wVar5 = (ushort)DAT_005b9187 << 5;
  }
  dmllri_w = (word)(((uint)(byte)(&DAT_001c863c)[esst_snm06llub >> 0x10] +
                     ((int)((esst_snm06llub & 0xffff) *
                           ((uint)*(byte *)((esst_snm06llub >> 0x10) + 0x1c863d) -
                           (uint)(byte)(&DAT_001c863c)[esst_snm06llub >> 0x10])) >> 0x10) & 0xff) <<
                   7);
  if ((short)dmllri_w < (short)wVar5) {
    DAT_003fc0f6 = '\x01';
  }
  else {
    DAT_003fc0f6 = '\0';
    dmllri_w = wVar5;
  }
LAB_0019a2dc:
  DAT_005b8299 = B_vllr & 1 | DAT_005b8299 & 0xfe;
  return;
}

