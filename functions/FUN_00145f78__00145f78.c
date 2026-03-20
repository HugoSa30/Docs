/*
 * Program: n42.bin
 * Function: FUN_00145f78
 * Entry: 00145f78
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x00147f7c) */
/* WARNING: Removing unreachable block (ram,0x00147ed8) */
/* WARNING: Removing unreachable block (ram,0x001479ec) */
/* WARNING: Removing unreachable block (ram,0x00146f98) */
/* WARNING: Removing unreachable block (ram,0x00147038) */
/* WARNING: Removing unreachable block (ram,0x00147a8c) */
/* WARNING: Removing unreachable block (ram,0x00147f24) */
/* WARNING: Removing unreachable block (ram,0x00147fbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00145f78(void)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  char cVar7;
  char cVar8;
  uint uVar5;
  ushort uVar6;
  uint uVar9;
  char cVar11;
  uint uVar10;
  short sVar14;
  int iVar12;
  int iVar13;
  byte bStack_8f;
  uint local_8c;
  short sStack_86;
  undefined2 local_84;
  
  if (B_stend == '\0') {
    DAT_005b8088._2_1_ = DAT_005b8088._2_1_ & 0xfb;
  }
  else {
    DAT_005b8088._2_1_ = DAT_005b8088._2_1_ | 4;
  }
  if (B_st == '\0') {
    DAT_005b8088._2_1_ = DAT_005b8088._2_1_ & 0xf7;
  }
  else {
    DAT_005b8088._2_1_ = DAT_005b8088._2_1_ | 8;
  }
  if ((DAT_005b808c == 0) || (uVar9 = (uint)DAT_005b808e / (uint)DAT_005b808c, 0xffff < uVar9)) {
    uVar9 = 0xffff;
  }
  etazwimt = (byte)uVar9;
  DAT_005b808c = 1;
  DAT_005b808e = (ushort)etazwist;
  if ((DAT_005b8088._2_1_ & 8) == 0) {
    if ((DAT_005b8088._2_1_ & 4) != 0) {
      DAT_005bb88c = DAT_005bb88c + _ml_w;
      if (0x3fffff < DAT_005bb88c) {
        DAT_005bb88c = 0x3fffff;
      }
      imlatm_w = (word)(DAT_005bb88c >> 6);
      imlatm = (byte)((DAT_005bb88c >> 6) >> 8);
    }
  }
  else {
    DAT_005bb88c = 0;
    imlatm = 0;
  }
  if ((B_tfu == '\0') || (bStack_8f = (byte)_B_betum, (bStack_8f >> 6 & 1) != 0)) {
    if (((DAT_003fdfb7 & 1) == 0) && ((uint)DAT_003fdbac <= (uint)tans)) {
      if (((DAT_001cec91 <= vfzg) && (DAT_001cec72 < nmot)) && (DAT_001cea42 <= imlatm)) {
        iVar12 = (uint)tans - (uint)DAT_001cea1c;
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        else if (0xff < iVar12) {
          iVar12 = 0xff;
        }
        DAT_003fdbac = (byte)iVar12;
      }
    }
    else {
      bVar1 = tans < DAT_003fdbac;
      DAT_003fdbac = DAT_001cec90;
      if (bVar1) {
        DAT_003fdbac = tans;
      }
    }
    DAT_005b8653 = DAT_003fdbac;
  }
  else {
    DAT_005b8653 = tumg;
  }
  if (((DAT_005b8088._2_1_ & 4) == 0) && ((DAT_005b8088._2_1_ & 2) != 0)) {
    B_atmst = B_atmst | B_stndnl;
  }
  else {
    B_atmst = B_atmst & ~B_stndnl;
    if (_DAT_003fdbaa < tabst_w) {
      _DAT_003fdbaa = tabst_w;
    }
    if (((((_B_nlale & 0x4000) == 0) || (B_uhrrmin != '\0')) || (B_uhrrsec != '\0')) &&
       (((DAT_005b8088._2_1_ & 4) != 0 && ((DAT_005b8088._2_1_ & 2) == 0)))) {
      DAT_005b867a = _DAT_003fdbaa;
    }
  }
  if ((B_atmst & B_atmst) == 0) {
    DAT_005b8088._2_1_ = DAT_005b8088._2_1_ & 0xef;
  }
  else {
    DAT_005b8088._2_1_ = DAT_005b8088._2_1_ | 0x10;
  }
  if ((((DAT_005b8088._2_1_ & 4) != 0) && ((DAT_005b8088._2_1_ & 2) == 0)) || (DAT_003fc1a0 != '\0')
     ) {
    B_atmst = B_atmst | (B_atmst|B_atmst2);
    if (DAT_003fc1a0 == '\0') {
      DAT_005b9d7c = func_0xff21b53c(0x1cedf2,DAT_005b867a,DAT_005b9d7c);
      func_0xff21b3b0(&DAT_001cec74,DAT_005b8653,DAT_005b9d80);
      return;
    }
    tabgmst = DAT_001cec7b;
    tkatmst = DAT_001cec8d;
    tabgmst2 = DAT_001cec7b;
    tkatmst2 = DAT_001cec8d;
  }
  uVar9 = (short)(((ushort)tmot - (DAT_001cec83 - 0x40)) + -0x40) * 0x4cd;
  cVar11 = (char)((int)uVar9 >> 0xd);
  if ((uVar9 & 0x1000) != 0) {
    cVar11 = cVar11 + '\x01';
  }
  if (B_sa == '\0') {
    DAT_005b864d = func_0xff2196d0(&DAT_001ceb7c,nmot,rl);
    uVar6 = (ushort)DAT_005b864d;
    cVar7 = func_0xff218eec(DAT_001cec96,0x1cec97,0x1cec9a,DAT_005b8653);
    sVar14 = (uVar6 - 10) - (short)cVar7;
    if (B_trkh == '\0') {
      if (B_kh != '\0') {
        sVar14 = sVar14 + (ushort)DAT_001cec7c;
      }
    }
    else {
      sVar14 = sVar14 + (ushort)DAT_001cec85;
    }
    if (B_kw != '\0') {
      sVar14 = sVar14 + (ushort)DAT_001cec7e;
    }
    cVar7 = func_0xff21af1c(&DAT_001ceb34,DAT_001ce89c,esst_sml06tmuw,esst_sez06tmub);
    cVar8 = func_0xff21af1c(&DAT_001ceaec,_DAT_001ce984,esst_sml06tmuw,esst_slx06tmuw);
    sVar14 = (sVar14 + cVar7) - (short)cVar8;
  }
  else {
    sVar14 = DAT_001cec7f - 10;
  }
  sVar14 = sVar14 + cVar11 + 10;
  if (sVar14 < 10) {
    DAT_005b8651 = 10;
  }
  else if (sVar14 < 0x100) {
    DAT_005b8651 = (byte)sVar14;
  }
  else {
    DAT_005b8651 = 0xff;
  }
  if (B_sa == '\0') {
    DAT_005b864e = func_0xff2196d0(&DAT_001cebd0,nmot,rl);
    uVar6 = (ushort)DAT_005b864e;
    cVar7 = func_0xff218eec(DAT_001cec96,0x1cec97,0x1cec9a,DAT_005b8653);
    sVar14 = (uVar6 - 10) - (short)cVar7;
    if (B_trkh == '\0') {
      if (B_kh != '\0') {
        sVar14 = sVar14 + (ushort)DAT_001cec7d;
      }
    }
    else {
      sVar14 = sVar14 + (ushort)DAT_001cec86;
    }
    if (B_kw != '\0') {
      sVar14 = sVar14 + (ushort)DAT_001cec7e;
    }
    cVar7 = func_0xff21af1c(&DAT_001ceb58,DAT_001ce89c,esst_sml06tmuw,esst_sez06tmub);
    cVar8 = func_0xff21af1c(&DAT_001ceb10,_DAT_001ce992,esst_sml06tmuw,esst_sly06tmuw);
    sVar14 = (sVar14 + cVar7) - (short)cVar8;
  }
  else {
    sVar14 = DAT_001cec7f - 10;
  }
  sVar14 = sVar14 + cVar11 + 10;
  if (sVar14 < 10) {
    DAT_005b8652 = 10;
  }
  else if (sVar14 < 0x100) {
    DAT_005b8652 = (byte)sVar14;
  }
  else {
    DAT_005b8652 = 0xff;
  }
  if (((B_atmst & B_atmst) == 0) || ((DAT_005b8088._2_1_ & 0x10) != 0)) {
    if (B_sa != '\0') {
      if (((byte)DAT_005b8088 & 1) == 0) {
        if (B_atmtpk == '\0') {
          DAT_005bb884 = (ushort)tkatmst << 8;
        }
        else {
          uVar9 = (uint)tikatm + (int)(short)(DAT_001cec80 - 10);
          if ((int)uVar9 < 0) {
            uVar9 = 0;
          }
          else if (0xffff < (int)uVar9) {
            uVar9 = 0xffff;
          }
          if ((uVar9 & 0xffff) < 0x100) {
            DAT_005bb884 = (ushort)(uVar9 << 8);
          }
          else {
            DAT_005bb884 = 0xff00;
          }
        }
        _DAT_005bb884 = (uint)DAT_005bb884 << 0x10;
        if ((B_atmtpk2 == '\0') || (B_sa == '\0')) {
          DAT_005bb8a4 = (ushort)tkatmst2 << 8;
        }
        else {
          uVar9 = (uint)DAT_005b865d + (int)(short)(DAT_001cec81 - 10);
          if ((int)uVar9 < 0) {
            uVar9 = 0;
          }
          else if (0xffff < (int)uVar9) {
            uVar9 = 0xffff;
          }
          if ((uVar9 & 0xffff) < 0x100) {
            DAT_005bb8a4 = (ushort)(uVar9 << 8);
          }
          else {
            DAT_005bb8a4 = 0xff00;
          }
        }
        _DAT_005bb8a4 = (uint)DAT_005bb8a4 << 0x10;
      }
      goto LAB_00146da4;
    }
LAB_00146dc8:
    DAT_005b8088._3_1_ = (byte)DAT_005b8088 & 0xfe;
  }
  else {
    _DAT_005bb874 = (uint)tabgmst << 0x18;
    DAT_005b864b = tabgmst;
    _DAT_005bb878 = (uint)tabgmst << 0x18;
    DAT_005b864f = tabgmst;
    DAT_005b868a = (ushort)tkatmst << 8;
    _DAT_005bb87c = (uint)tkatmst << 0x18;
    tkatm = tkatmst;
    tikatm = tkatmst;
    DAT_005bb884 = DAT_005b868a;
    if ((B_atmtpk != '\0') && (B_sa != '\0')) {
      uVar9 = (uint)tkatmst + (int)(short)(DAT_001cec80 - 10);
      if ((int)uVar9 < 0) {
        uVar9 = 0;
      }
      else if (0xffff < (int)uVar9) {
        uVar9 = 0xffff;
      }
      if ((uVar9 & 0xffff) < 0x100) {
        DAT_005bb884 = (ushort)(uVar9 << 8);
      }
      else {
        DAT_005bb884 = 0xff00;
      }
    }
    _DAT_005bb880 = (uint)tkatmst << 0x18;
    _DAT_005bb884 = (uint)DAT_005bb884 << 0x10;
    _DAT_005bb888 = (uint)tkatmst << 0x18;
    _DAT_005bb894 = (uint)tabgmst2 << 0x18;
    DAT_005b864c = tabgmst2;
    _DAT_005bb898 = (uint)tabgmst2 << 0x18;
    DAT_005b8650 = tabgmst2;
    DAT_005b8688 = (ushort)tkatmst2 << 8;
    _DAT_005bb89c = (uint)tkatmst2 << 0x18;
    DAT_005b865f = tkatmst2;
    DAT_005b865d = tkatmst2;
    DAT_005bb8a4 = DAT_005b8688;
    if ((B_atmtpk2 != '\0') && (B_sa != '\0')) {
      uVar9 = (uint)tkatmst2 + (int)(short)(DAT_001cec81 - 10);
      if ((int)uVar9 < 0) {
        uVar9 = 0;
      }
      else if (0xffff < (int)uVar9) {
        uVar9 = 0xffff;
      }
      if ((uVar9 & 0xffff) < 0x100) {
        DAT_005bb8a4 = (ushort)(uVar9 << 8);
      }
      else {
        DAT_005bb8a4 = 0xff00;
      }
    }
    _DAT_005bb8a0 = (uint)tkatmst2 << 0x18;
    _DAT_005bb8a4 = (uint)DAT_005bb8a4 << 0x10;
    _DAT_005bb8a8 = (uint)tkatmst2 << 0x18;
    _DAT_005bb8b0 = (uint)tkatmst2 << 0x18;
    DAT_005b868c = DAT_005b8688;
    DAT_005b868e = DAT_005b868a;
    tkatm2_w = DAT_005b8688;
LAB_00146da4:
    if (B_sa == '\0') goto LAB_00146dc8;
    DAT_005b8088._3_1_ = (byte)DAT_005b8088 | 1;
  }
  if ((B_atmst & B_atmst) == 0) {
    tabgm = DAT_001cec84;
    tabgm_w = (ushort)DAT_001cec84 << 8;
  }
  else {
    if (B_atmtpa != '\0') {
      iVar12 = (esst_sml07tmuw >> 0x10) * 2;
      _DAT_005bb878 =
           func_0xff217f20((uint)*(ushort *)(&DAT_001cee56 + iVar12) +
                           ((int)((esst_sml07tmuw & 0xffff) *
                                 ((uint)*(ushort *)(&DAT_001cee58 + iVar12) -
                                 (uint)*(ushort *)(&DAT_001cee56 + iVar12))) >> 0x10) & 0xffff,
                           (uint)DAT_005b8651 << 8,DAT_005bb878,_DAT_005bb878 & 0xffff);
      DAT_005b864f = (byte)(_DAT_005bb878 >> 0x18);
    }
    if ((DAT_005b8088._2_1_ & 4) != 0) {
      iVar12 = (esst_sml07tmuw >> 0x10) * 2;
      _DAT_005bb874 =
           func_0xff217f20((uint)*(ushort *)(&DAT_001cee02 + iVar12) +
                           ((int)((esst_sml07tmuw & 0xffff) *
                                 ((uint)*(ushort *)(&DAT_001cee04 + iVar12) -
                                 (uint)*(ushort *)(&DAT_001cee02 + iVar12))) >> 0x10) & 0xffff,
                           (uint)DAT_005b8651 << 8,DAT_005bb874,_DAT_005bb874 & 0xffff);
      DAT_005b864b = (byte)(_DAT_005bb874 >> 0x18);
    }
    uVar9 = esst_sml07tmuw & 0xffff;
    bVar2 = (&DAT_001cea20)[esst_sml07tmuw >> 0x10];
    bVar3 = *(byte *)((esst_sml07tmuw >> 0x10) + 0x1cea21);
    uVar10 = (_DAT_005bb878 >> 0x10) - 0xa00;
    if ((int)uVar10 < 0) {
      uVar10 = 0;
    }
    else if (0xffff < (int)uVar10) {
      uVar10 = 0xffff;
    }
    uVar5 = func_0xff2187cc(&DAT_001cea30,vfzg);
    uVar9 = func_0xff2217f4(uVar10 & 0xffff,
                            (uVar5 & 0xff) *
                            (0xff - ((uint)bVar2 +
                                    ((int)(uVar9 * ((uint)bVar3 - (uint)bVar2)) >> 0x10)) & 0xff));
    uVar9 = (uVar9 & 0xffff) + 0xa00;
    if (0xffff < uVar9) {
      uVar9 = 0xffff;
    }
    uVar10 = (_DAT_005bb874 >> 0x10) - 0xa00;
    if ((int)uVar10 < 0) {
      uVar10 = 0;
    }
    else if (0xffff < (int)uVar10) {
      uVar10 = 0xffff;
    }
    uVar10 = (((uint)(byte)(&DAT_001cea20)[esst_sml07tmuw >> 0x10] +
               ((int)((esst_sml07tmuw & 0xffff) *
                     ((uint)*(byte *)((esst_sml07tmuw >> 0x10) + 0x1cea21) -
                     (uint)(byte)(&DAT_001cea20)[esst_sml07tmuw >> 0x10])) >> 0x10) & 0xff) *
              (uVar10 & 0xffff) >> 8) + 0xa00;
    if (0xffff < uVar10) {
      uVar10 = 0xffff;
    }
    uVar9 = ((uVar9 & 0xffff) + (uVar10 & 0xffff)) - 0xa00;
    if (uVar9 < 0xffff) {
      tabgm_w = (word)uVar9;
    }
    else {
      tabgm_w = 0xffff;
    }
    tabgm = (byte)(tabgm_w >> 8);
  }
  if ((B_atmst & B_atmst) == 0) {
LAB_001477e0:
    DAT_005b868a = (ushort)DAT_001cec84 << 8;
    tkatm = DAT_001cec84;
    tikatm = DAT_001cec84;
    DAT_005b868e = DAT_005b868a;
  }
  else {
    if ((B_sa == '\0') && (DAT_001cec7a <= tabgm)) {
      DAT_005b8656 = (&DAT_001cea44)[esst_sml07tmuw >> 0x10] +
                     (char)((esst_sml07tmuw & 0xffff) *
                            ((int)(char)(&DAT_001cea45)[esst_sml07tmuw >> 0x10] -
                            (int)(char)(&DAT_001cea44)[esst_sml07tmuw >> 0x10]) >> 0x10);
      if (DAT_005b8656 < '\0') {
        if (((uint)(byte)(&DAT_001cec44)[esst_slx06tmuw >> 0x10] +
             ((int)((esst_slx06tmuw & 0xffff) *
                   ((uint)*(byte *)((esst_slx06tmuw >> 0x10) + 0x1cec45) -
                   (uint)(byte)(&DAT_001cec44)[esst_slx06tmuw >> 0x10])) >> 0x10) & 0xff) <
            ((uint)(byte)(&DAT_001cec64)[esst_sez06tmub >> 0x10] +
             ((int)((esst_sez06tmub & 0xffff) *
                   ((uint)*(byte *)((esst_sez06tmub >> 0x10) + 0x1cec65) -
                   (uint)(byte)(&DAT_001cec64)[esst_sez06tmub >> 0x10])) >> 0x10) & 0xff)) {
          DAT_005b8654 = (&DAT_001cec64)[esst_sez06tmub >> 0x10] +
                         (char)((esst_sez06tmub & 0xffff) *
                                ((uint)*(byte *)((esst_sez06tmub >> 0x10) + 0x1cec65) -
                                (uint)(byte)(&DAT_001cec64)[esst_sez06tmub >> 0x10]) >> 0x10);
        }
        else {
          DAT_005b8654 = (&DAT_001cec44)[esst_slx06tmuw >> 0x10] +
                         (char)((esst_slx06tmuw & 0xffff) *
                                ((uint)*(byte *)((esst_slx06tmuw >> 0x10) + 0x1cec45) -
                                (uint)(byte)(&DAT_001cec44)[esst_slx06tmuw >> 0x10]) >> 0x10);
        }
      }
      else if (((uint)(byte)(&DAT_001cec64)[esst_sez06tmub >> 0x10] +
                ((int)((esst_sez06tmub & 0xffff) *
                      ((uint)*(byte *)((esst_sez06tmub >> 0x10) + 0x1cec65) -
                      (uint)(byte)(&DAT_001cec64)[esst_sez06tmub >> 0x10])) >> 0x10) & 0xff) <
               ((uint)(byte)(&DAT_001cec44)[esst_slx06tmuw >> 0x10] +
                ((int)((esst_slx06tmuw & 0xffff) *
                      ((uint)*(byte *)((esst_slx06tmuw >> 0x10) + 0x1cec45) -
                      (uint)(byte)(&DAT_001cec44)[esst_slx06tmuw >> 0x10])) >> 0x10) & 0xff)) {
        DAT_005b8654 = (&DAT_001cec64)[esst_sez06tmub >> 0x10] +
                       (char)((esst_sez06tmub & 0xffff) *
                              ((uint)*(byte *)((esst_sez06tmub >> 0x10) + 0x1cec65) -
                              (uint)(byte)(&DAT_001cec64)[esst_sez06tmub >> 0x10]) >> 0x10);
      }
      else {
        DAT_005b8654 = (&DAT_001cec44)[esst_slx06tmuw >> 0x10] +
                       (char)((esst_slx06tmuw & 0xffff) *
                              ((uint)*(byte *)((esst_slx06tmuw >> 0x10) + 0x1cec45) -
                              (uint)(byte)(&DAT_001cec44)[esst_slx06tmuw >> 0x10]) >> 0x10);
      }
      iVar12 = (int)((int)(short)((int)DAT_005b8656 << 8) * (uint)DAT_005b8654 * 0x100) >> 0xf;
      if (iVar12 < -0x8000) {
        iVar12 = -0x8000;
      }
      else if (0x7fff < iVar12) {
        iVar12 = 0x7fff;
      }
      DAT_005b8686 = (short)iVar12;
      uVar9 = (uint)tabgm_w + (int)DAT_005b8686;
      if ((int)uVar9 < 0) {
        uVar9 = 0;
      }
      else if (0xffff < (int)uVar9) {
        uVar9 = 0xffff;
      }
      DAT_005b865a = (&DAT_001cea54)[esst_sml07tmuw >> 0x10] +
                     (char)((esst_sml07tmuw & 0xffff) *
                            ((int)(char)(&DAT_001cea55)[esst_sml07tmuw >> 0x10] -
                            (int)(char)(&DAT_001cea54)[esst_sml07tmuw >> 0x10]) >> 0x10);
      if (DAT_005b865a < '\0') {
        if (((uint)(byte)(&DAT_001cec24)[esst_slx06tmuw >> 0x10] +
             ((int)((esst_slx06tmuw & 0xffff) *
                   ((uint)*(byte *)((esst_slx06tmuw >> 0x10) + 0x1cec25) -
                   (uint)(byte)(&DAT_001cec24)[esst_slx06tmuw >> 0x10])) >> 0x10) & 0xff) <
            ((uint)(byte)(&DAT_001cec34)[esst_sez06tmub >> 0x10] +
             ((int)((esst_sez06tmub & 0xffff) *
                   ((uint)*(byte *)((esst_sez06tmub >> 0x10) + 0x1cec35) -
                   (uint)(byte)(&DAT_001cec34)[esst_sez06tmub >> 0x10])) >> 0x10) & 0xff)) {
          DAT_005b8658 = (&DAT_001cec34)[esst_sez06tmub >> 0x10] +
                         (char)((esst_sez06tmub & 0xffff) *
                                ((uint)*(byte *)((esst_sez06tmub >> 0x10) + 0x1cec35) -
                                (uint)(byte)(&DAT_001cec34)[esst_sez06tmub >> 0x10]) >> 0x10);
        }
        else {
          DAT_005b8658 = (&DAT_001cec24)[esst_slx06tmuw >> 0x10] +
                         (char)((esst_slx06tmuw & 0xffff) *
                                ((uint)*(byte *)((esst_slx06tmuw >> 0x10) + 0x1cec25) -
                                (uint)(byte)(&DAT_001cec24)[esst_slx06tmuw >> 0x10]) >> 0x10);
        }
      }
      else if (((uint)(byte)(&DAT_001cec34)[esst_sez06tmub >> 0x10] +
                ((int)((esst_sez06tmub & 0xffff) *
                      ((uint)*(byte *)((esst_sez06tmub >> 0x10) + 0x1cec35) -
                      (uint)(byte)(&DAT_001cec34)[esst_sez06tmub >> 0x10])) >> 0x10) & 0xff) <
               ((uint)(byte)(&DAT_001cec24)[esst_slx06tmuw >> 0x10] +
                ((int)((esst_slx06tmuw & 0xffff) *
                      ((uint)*(byte *)((esst_slx06tmuw >> 0x10) + 0x1cec25) -
                      (uint)(byte)(&DAT_001cec24)[esst_slx06tmuw >> 0x10])) >> 0x10) & 0xff)) {
        DAT_005b8658 = (&DAT_001cec34)[esst_sez06tmub >> 0x10] +
                       (char)((esst_sez06tmub & 0xffff) *
                              ((uint)*(byte *)((esst_sez06tmub >> 0x10) + 0x1cec35) -
                              (uint)(byte)(&DAT_001cec34)[esst_sez06tmub >> 0x10]) >> 0x10);
      }
      else {
        DAT_005b8658 = (&DAT_001cec24)[esst_slx06tmuw >> 0x10] +
                       (char)((esst_slx06tmuw & 0xffff) *
                              ((uint)*(byte *)((esst_slx06tmuw >> 0x10) + 0x1cec25) -
                              (uint)(byte)(&DAT_001cec24)[esst_slx06tmuw >> 0x10]) >> 0x10);
      }
      iVar12 = (int)((int)(short)((int)DAT_005b865a << 8) * (uint)DAT_005b8658 * 0x100) >> 0xf;
      if (iVar12 < -0x8000) {
        iVar12 = -0x8000;
      }
      else if (0x7fff < iVar12) {
        iVar12 = 0x7fff;
      }
      DAT_005b8682 = (short)iVar12;
      uVar10 = (uint)tabgm_w + (int)DAT_005b8682;
      if ((int)uVar10 < 0) {
        uVar10 = 0;
      }
      else if (0xffff < (int)uVar10) {
        uVar10 = 0xffff;
      }
    }
    else {
      DAT_005b8686 = (short)((int)DAT_001cec8a << 8);
      uVar9 = (uint)tabgm_w + (int)DAT_005b8686;
      if ((int)uVar9 < 0) {
        uVar9 = 0;
      }
      else if (0xffff < (int)uVar9) {
        uVar9 = 0xffff;
      }
      DAT_005b8682 = (short)((int)DAT_001cec88 << 8);
      uVar10 = (uint)tabgm_w + (int)DAT_005b8682;
      if ((int)uVar10 < 0) {
        uVar10 = 0;
      }
      else if (0xffff < (int)uVar10) {
        uVar10 = 0xffff;
      }
    }
    if ((B_atmst & B_atmst) == 0) goto LAB_001477e0;
    if (B_atmtpk != '\0') {
      iVar12 = (esst_sml07tmuw >> 0x10) * 2;
      iVar13 = (esst_sml07tmuw >> 0x10) * 2;
      uVar5 = (uint)*(ushort *)(&DAT_001cee1e + iVar13) +
              ((int)((esst_sml07tmuw & 0xffff) *
                    ((uint)*(ushort *)(&DAT_001cee20 + iVar13) -
                    (uint)*(ushort *)(&DAT_001cee1e + iVar13))) >> 0x10) & 0xffff;
      uVar9 = func_0xff217f20((uint)*(ushort *)(&DAT_001cee3a + iVar12) +
                              ((int)((esst_sml07tmuw & 0xffff) *
                                    ((uint)*(ushort *)(&DAT_001cee3c + iVar12) -
                                    (uint)*(ushort *)(&DAT_001cee3a + iVar12))) >> 0x10) & 0xffff,
                              uVar9 & 0xffff,_DAT_005bb87c,_DAT_005bb87c & 0xffff);
      _DAT_005bb87c = (word)(uVar9 >> 0x10);
      DAT_005b868e = _DAT_005bb87c;
      DAT_005bb87c = (byte)(uVar9 >> 0x18);
      tkatm = DAT_005bb87c;
      _DAT_005bb87c = uVar9;
      uVar9 = func_0xff217f20(uVar5,uVar10 & 0xffff,DAT_005bb880,_DAT_005bb880 & 0xffff);
      DAT_005bb880 = (undefined2)(uVar9 >> 0x10);
      uVar4 = DAT_005bb880;
      _DAT_005bb880 = uVar9;
      uVar9 = func_0xff217f20(uVar5,uVar4,DAT_005bb884,_DAT_005bb884 & 0xffff);
      DAT_005bb884 = (ushort)(uVar9 >> 0x10);
      uVar6 = DAT_005bb884;
      _DAT_005bb884 = uVar9;
      uVar9 = func_0xff217f20(uVar5,uVar6,_DAT_005bb888,_DAT_005bb888 & 0xffff);
      _DAT_005bb888 = (word)(uVar9 >> 0x10);
      DAT_005b868a = _DAT_005bb888;
      DAT_005bb888 = (byte)(uVar9 >> 0x18);
      tikatm = DAT_005bb888;
      _DAT_005bb888 = uVar9;
    }
  }
  tkatm_w = DAT_005b868e;
  if ((B_atmst & B_atmst2) == 0) {
    tabgm2 = DAT_001cec84;
    DAT_005b8676 = (ushort)DAT_001cec84 << 8;
  }
  else {
    if (B_atmtpa2 != '\0') {
      iVar12 = (esst_sml07tmuw >> 0x10) * 2;
      _DAT_005bb898 =
           func_0xff217f20((uint)*(ushort *)(&DAT_001cee64 + iVar12) +
                           ((int)((esst_sml07tmuw & 0xffff) *
                                 ((uint)*(ushort *)(&DAT_001cee66 + iVar12) -
                                 (uint)*(ushort *)(&DAT_001cee64 + iVar12))) >> 0x10) & 0xffff,
                           (uint)DAT_005b8652 << 8,DAT_005bb898,_DAT_005bb898 & 0xffff);
      DAT_005b8650 = (byte)(_DAT_005bb898 >> 0x18);
    }
    if ((DAT_005b8088._2_1_ & 4) != 0) {
      iVar12 = (esst_sml07tmuw >> 0x10) * 2;
      _DAT_005bb894 =
           func_0xff217f20((uint)*(ushort *)(&DAT_001cee10 + iVar12) +
                           ((int)((esst_sml07tmuw & 0xffff) *
                                 ((uint)*(ushort *)(&DAT_001cee12 + iVar12) -
                                 (uint)*(ushort *)(&DAT_001cee10 + iVar12))) >> 0x10) & 0xffff,
                           (uint)DAT_005b8652 << 8,DAT_005bb894,_DAT_005bb894 & 0xffff);
      DAT_005b864c = (byte)(_DAT_005bb894 >> 0x18);
    }
    uVar9 = esst_sml07tmuw & 0xffff;
    bVar2 = (&DAT_001cea28)[esst_sml07tmuw >> 0x10];
    bVar3 = *(byte *)((esst_sml07tmuw >> 0x10) + 0x1cea29);
    uVar10 = (_DAT_005bb898 >> 0x10) - 0xa00;
    if ((int)uVar10 < 0) {
      uVar10 = 0;
    }
    else if (0xffff < (int)uVar10) {
      uVar10 = 0xffff;
    }
    uVar5 = func_0xff2187cc(&DAT_001cea30,vfzg);
    uVar9 = func_0xff2217f4(uVar10 & 0xffff,
                            (uVar5 & 0xff) *
                            (0xff - ((uint)bVar2 +
                                    ((int)(uVar9 * ((uint)bVar3 - (uint)bVar2)) >> 0x10)) & 0xff));
    uVar9 = (uVar9 & 0xffff) + 0xa00;
    if (0xffff < uVar9) {
      uVar9 = 0xffff;
    }
    uVar10 = (_DAT_005bb894 >> 0x10) - 0xa00;
    if ((int)uVar10 < 0) {
      uVar10 = 0;
    }
    else if (0xffff < (int)uVar10) {
      uVar10 = 0xffff;
    }
    uVar10 = (((uint)(byte)(&DAT_001cea28)[esst_sml07tmuw >> 0x10] +
               ((int)((esst_sml07tmuw & 0xffff) *
                     ((uint)*(byte *)((esst_sml07tmuw >> 0x10) + 0x1cea29) -
                     (uint)(byte)(&DAT_001cea28)[esst_sml07tmuw >> 0x10])) >> 0x10) & 0xff) *
              (uVar10 & 0xffff) >> 8) + 0xa00;
    if (0xffff < uVar10) {
      uVar10 = 0xffff;
    }
    uVar9 = ((uVar9 & 0xffff) + (uVar10 & 0xffff)) - 0xa00;
    if (uVar9 < 0xffff) {
      DAT_005b8676 = (ushort)uVar9;
    }
    else {
      DAT_005b8676 = 0xffff;
    }
    tabgm2 = (byte)(DAT_005b8676 >> 8);
  }
  if ((B_atmst & B_atmst2) == 0) {
    tkatm2_w = (ushort)DAT_001cec84 << 8;
  }
  else {
    if ((B_sa == '\0') && (DAT_001cec7a <= tabgm2)) {
      DAT_005b8663 = (&DAT_001cea64)[esst_sml06tmuw >> 0x10] +
                     (char)((esst_sml06tmuw & 0xffff) *
                            ((int)(char)(&DAT_001cea65)[esst_sml06tmuw >> 0x10] -
                            (int)(char)(&DAT_001cea64)[esst_sml06tmuw >> 0x10]) >> 0x10);
      if (DAT_005b8663 < '\0') {
        if (((uint)(byte)(&DAT_001cec54)[esst_sly06tmuw >> 0x10] +
             ((int)((esst_sly06tmuw & 0xffff) *
                   ((uint)*(byte *)((esst_sly06tmuw >> 0x10) + 0x1cec55) -
                   (uint)(byte)(&DAT_001cec54)[esst_sly06tmuw >> 0x10])) >> 0x10) & 0xff) <
            ((uint)(byte)(&DAT_001cec5c)[esst_sez06tmub >> 0x10] +
             ((int)((esst_sez06tmub & 0xffff) *
                   ((uint)*(byte *)((esst_sez06tmub >> 0x10) + 0x1cec5d) -
                   (uint)(byte)(&DAT_001cec5c)[esst_sez06tmub >> 0x10])) >> 0x10) & 0xff)) {
          DAT_005b8662 = (&DAT_001cec5c)[esst_sez06tmub >> 0x10] +
                         (char)((esst_sez06tmub & 0xffff) *
                                ((uint)*(byte *)((esst_sez06tmub >> 0x10) + 0x1cec5d) -
                                (uint)(byte)(&DAT_001cec5c)[esst_sez06tmub >> 0x10]) >> 0x10);
        }
        else {
          DAT_005b8662 = (&DAT_001cec54)[esst_sly06tmuw >> 0x10] +
                         (char)((esst_sly06tmuw & 0xffff) *
                                ((uint)*(byte *)((esst_sly06tmuw >> 0x10) + 0x1cec55) -
                                (uint)(byte)(&DAT_001cec54)[esst_sly06tmuw >> 0x10]) >> 0x10);
        }
      }
      else if (((uint)(byte)(&DAT_001cec5c)[esst_sez06tmub >> 0x10] +
                ((int)((esst_sez06tmub & 0xffff) *
                      ((uint)*(byte *)((esst_sez06tmub >> 0x10) + 0x1cec5d) -
                      (uint)(byte)(&DAT_001cec5c)[esst_sez06tmub >> 0x10])) >> 0x10) & 0xff) <
               ((uint)(byte)(&DAT_001cec54)[esst_sly06tmuw >> 0x10] +
                ((int)((esst_sly06tmuw & 0xffff) *
                      ((uint)*(byte *)((esst_sly06tmuw >> 0x10) + 0x1cec55) -
                      (uint)(byte)(&DAT_001cec54)[esst_sly06tmuw >> 0x10])) >> 0x10) & 0xff)) {
        DAT_005b8662 = (&DAT_001cec5c)[esst_sez06tmub >> 0x10] +
                       (char)((esst_sez06tmub & 0xffff) *
                              ((uint)*(byte *)((esst_sez06tmub >> 0x10) + 0x1cec5d) -
                              (uint)(byte)(&DAT_001cec5c)[esst_sez06tmub >> 0x10]) >> 0x10);
      }
      else {
        DAT_005b8662 = (&DAT_001cec54)[esst_sly06tmuw >> 0x10] +
                       (char)((esst_sly06tmuw & 0xffff) *
                              ((uint)*(byte *)((esst_sly06tmuw >> 0x10) + 0x1cec55) -
                              (uint)(byte)(&DAT_001cec54)[esst_sly06tmuw >> 0x10]) >> 0x10);
      }
      iVar12 = (int)((int)(short)((int)DAT_005b8663 << 8) * (uint)DAT_005b8662 * 0x100) >> 0xf;
      if (iVar12 < -0x8000) {
        iVar12 = -0x8000;
      }
      else if (0x7fff < iVar12) {
        iVar12 = 0x7fff;
      }
      DAT_005b8696 = (short)iVar12;
      uVar9 = (uint)DAT_005b8676 + (int)DAT_005b8696;
      if ((int)uVar9 < 0) {
        uVar9 = 0;
      }
      else if (0xffff < (int)uVar9) {
        uVar9 = 0xffff;
      }
    }
    else {
      DAT_005b8696 = (short)((int)DAT_001cec8c << 8);
      uVar9 = (uint)DAT_005b8676 + (int)DAT_005b8696;
      if ((int)uVar9 < 0) {
        uVar9 = 0;
      }
      else if (0xffff < (int)uVar9) {
        uVar9 = 0xffff;
      }
    }
    if (B_atmtpk != '\0') {
      iVar12 = (esst_sml07tmuw >> 0x10) * 2;
      uVar9 = func_0xff217f20((uint)*(ushort *)(&DAT_001cee72 + iVar12) +
                              ((int)((esst_sml07tmuw & 0xffff) *
                                    ((uint)*(ushort *)(&DAT_001cee74 + iVar12) -
                                    (uint)*(ushort *)(&DAT_001cee72 + iVar12))) >> 0x10) & 0xffff,
                              uVar9 & 0xffff,DAT_005bb8b0,_DAT_005bb8b0 & 0xffff);
      DAT_005bb8b0 = (word)(uVar9 >> 0x10);
      tkatm2_w = DAT_005bb8b0;
      _DAT_005bb8b0 = uVar9;
    }
  }
  uVar9 = func_0xff2217f4(tkatm_w,0xd555);
  uVar9 = (uVar9 & 0xffff) + 0x2531;
  if (0xffff < uVar9) {
    uVar9 = 0xffff;
  }
  DAT_005bb7e2 = (ushort)uVar9;
  uVar9 = func_0xff2217f4(tkatm2_w,0xd555);
  uVar9 = (uVar9 & 0xffff) + 0x2531;
  if (0xffff < uVar9) {
    uVar9 = 0xffff;
  }
  DAT_005bb7e4 = (undefined2)uVar9;
  uVar10 = (uint)tkatmst * 0xd5;
  if (0xfffe < uVar10) {
    uVar10 = 0xffff;
  }
  uVar10 = uVar10 + 0x2531;
  if (0xffff < uVar10) {
    uVar10 = 0xffff;
  }
  uVar5 = (uint)msabg_w + (uint)msabg2_w;
  if (0xffff < uVar5) {
    uVar5 = 0xffff;
  }
  DAT_005b8670 = (undefined2)uVar5;
  uVar9 = (uint)DAT_005bb7e2 * (uint)msabg_w + (uVar9 & 0xffff) * (uint)msabg2_w;
  local_84 = (undefined2)(uVar9 >> 0x10);
  uVar9 = func_0xff217b40(local_84,uVar9 & 0xffff,uVar5 & 0xffff);
  DAT_005b867c = (ushort)uVar9;
  iVar12 = (uint)_DAT_001cedf0 - (uint)DAT_005b8774;
  if (iVar12 < -0x8000) {
    iVar12 = -0x8000;
  }
  else if (0x7fff < iVar12) {
    iVar12 = 0x7fff;
  }
  iVar12 = (int)((int)(short)iVar12 * (uint)DAT_001cea3d) >> 4;
  if (iVar12 < 0x8000) {
    if (iVar12 < -0x8000) {
      DAT_005b8668 = -0x8000;
    }
    else {
      sStack_86 = (short)iVar12;
      DAT_005b8668 = sStack_86;
    }
  }
  else {
    DAT_005b8668 = 0x7fff;
  }
  DAT_005b8666 = ((ushort)(uVar9 >> 1) & 0x7fff) - (DAT_005b869c >> 1);
  uVar6 = func_0xff2189bc(&DAT_001cec9e,DAT_005b8670);
  iVar12 = (int)((int)DAT_005b8666 * (uint)uVar6) >> 0x10;
  if (iVar12 < -0x8000) {
    iVar12 = -0x8000;
  }
  else if (0x7fff < iVar12) {
    iVar12 = 0x7fff;
  }
  uVar9 = (uint)(DAT_005b867c >> 1) - (int)(short)iVar12;
  if ((int)uVar9 < 0) {
    uVar9 = 0;
  }
  else if (0xffff < (int)uVar9) {
    uVar9 = 0xffff;
  }
  if ((uVar9 & 0xffff) < 0x8000) {
    DAT_005b867e = (short)uVar9 * 2;
  }
  else {
    DAT_005b867e = -1;
  }
  uVar9 = func_0xff221838(uVar6,DAT_005b8670,0x8873);
  local_8c._0_2_ = (ushort)(uVar9 >> 0x1b);
  uVar9 = uVar9 >> 0xb;
  if (local_8c._0_2_ != 0) {
    local_8c = CONCAT22(local_8c._0_2_,0xffff);
    uVar9 = local_8c;
  }
  local_8c = uVar9;
  iVar12 = (int)((int)DAT_005b8666 * (local_8c & 0xffff)) >> 0x10;
  if (iVar12 < -0x8000) {
    iVar12 = -0x8000;
  }
  else if (0x7fff < iVar12) {
    iVar12 = 0x7fff;
  }
  DAT_005b8674 = (short)iVar12;
  uVar9 = func_0xff2190c8(DAT_001cecc0,&DAT_001cecc1,&DAT_001cecc8,vfzg);
  iVar12 = (int)DAT_005b8668 + ((uVar9 & 0xffff) >> 1);
  if (iVar12 < -0x8000) {
    iVar12 = -0x8000;
  }
  else if (0x7fff < iVar12) {
    iVar12 = 0x7fff;
  }
  iVar13 = (uint)DAT_005b869c - (uint)DAT_005b8760;
  if (iVar13 < -0x8000) {
    iVar13 = -0x8000;
  }
  else if (0x7fff < iVar13) {
    iVar13 = 0x7fff;
  }
  iVar12 = (int)(short)iVar13 * (int)(short)iVar12 >> 0x10;
  if (iVar12 < -0x8000) {
    iVar12 = -0x8000;
  }
  else if (0x7fff < iVar12) {
    iVar12 = 0x7fff;
  }
  DAT_005b8672 = (short)iVar12;
  uVar9 = (int)DAT_005b8674 - (int)DAT_005b8672;
  if ((int)uVar9 < -0x8000) {
    uVar9 = 0xffff8000;
  }
  else if (0x7fff < (int)uVar9) {
    uVar9 = 0x7fff;
  }
  DAT_005b8664 = (short)uVar9;
  DAT_005b869a = func_0xff217b80((int)(DAT_005b8664 >> 6),(uVar9 & 0x3f) << 10,_DAT_001cecd6);
  if (((B_atmst & B_atmst) == 0) || ((DAT_005b8088._2_1_ & 0x10) != 0)) {
    iVar12 = func_0xff217dc8(0x3333,(int)DAT_005b869a,DAT_005bb8b4,_DAT_005bb8b4 & 0xffff,0,0xffff);
    DAT_005bb8b4 = (ushort)((uint)iVar12 >> 0x10);
    DAT_005b869c = DAT_005bb8b4;
    _DAT_005bb8b4 = iVar12;
  }
  else {
    uVar9 = (uint)DAT_001cea2f * 0x100;
    DAT_005b869c = DAT_005b8760;
    if (0xff < uVar9) {
      if (uVar9 < 0xff00) {
        DAT_005b869c = (ushort)((uVar10 & 0xffff) * uVar9 +
                                (uint)DAT_005b8760 * ((uint)DAT_001cea2f * -0x100 + 0x10000) >> 0x10
                               );
      }
      else {
        DAT_005b869c = (ushort)uVar10;
      }
    }
    _DAT_005bb8b4 = (uint)DAT_005b869c << 0x10;
  }
  uVar9 = func_0xff221800(DAT_005b867e,0x999a);
  uVar9 = (uVar9 & 0xffff) - 0x2ca1;
  if ((int)uVar9 < 0) {
    uVar9 = 0;
  }
  else if (0xffff < (int)uVar9) {
    uVar9 = 0xffff;
  }
  DAT_005b8698 = (undefined2)uVar9;
  if ((B_atmst & B_atmst2) == 0) {
LAB_00148b30:
    DAT_005b8688 = (ushort)DAT_001cec84 << 8;
    DAT_005b865f = DAT_001cec84;
    DAT_005b865d = DAT_001cec84;
    DAT_005b868c = DAT_005b8688;
  }
  else {
    if ((B_sa == '\0') && (uVar10 = uVar9 & 0xffff, (uint)DAT_001cec7a << 8 <= uVar10)) {
      DAT_005b8657 = (&DAT_001cea4c)[esst_sml07tmuw >> 0x10] +
                     (char)((esst_sml07tmuw & 0xffff) *
                            ((int)(char)(&DAT_001cea4d)[esst_sml07tmuw >> 0x10] -
                            (int)(char)(&DAT_001cea4c)[esst_sml07tmuw >> 0x10]) >> 0x10);
      if (DAT_005b8657 < '\0') {
        if (((uint)(byte)(&DAT_001cec4c)[esst_sly06tmuw >> 0x10] +
             ((int)((esst_sly06tmuw & 0xffff) *
                   ((uint)*(byte *)((esst_sly06tmuw >> 0x10) + 0x1cec4d) -
                   (uint)(byte)(&DAT_001cec4c)[esst_sly06tmuw >> 0x10])) >> 0x10) & 0xff) <
            ((uint)(byte)(&DAT_001cec6c)[esst_sez06tmub >> 0x10] +
             ((int)((esst_sez06tmub & 0xffff) *
                   ((uint)*(byte *)((esst_sez06tmub >> 0x10) + 0x1cec6d) -
                   (uint)(byte)(&DAT_001cec6c)[esst_sez06tmub >> 0x10])) >> 0x10) & 0xff)) {
          DAT_005b8655 = (&DAT_001cec6c)[esst_sez06tmub >> 0x10] +
                         (char)((esst_sez06tmub & 0xffff) *
                                ((uint)*(byte *)((esst_sez06tmub >> 0x10) + 0x1cec6d) -
                                (uint)(byte)(&DAT_001cec6c)[esst_sez06tmub >> 0x10]) >> 0x10);
        }
        else {
          DAT_005b8655 = (&DAT_001cec4c)[esst_sly06tmuw >> 0x10] +
                         (char)((esst_sly06tmuw & 0xffff) *
                                ((uint)*(byte *)((esst_sly06tmuw >> 0x10) + 0x1cec4d) -
                                (uint)(byte)(&DAT_001cec4c)[esst_sly06tmuw >> 0x10]) >> 0x10);
        }
      }
      else if (((uint)(byte)(&DAT_001cec6c)[esst_sez06tmub >> 0x10] +
                ((int)((esst_sez06tmub & 0xffff) *
                      ((uint)*(byte *)((esst_sez06tmub >> 0x10) + 0x1cec6d) -
                      (uint)(byte)(&DAT_001cec6c)[esst_sez06tmub >> 0x10])) >> 0x10) & 0xff) <
               ((uint)(byte)(&DAT_001cec4c)[esst_sly06tmuw >> 0x10] +
                ((int)((esst_sly06tmuw & 0xffff) *
                      ((uint)*(byte *)((esst_sly06tmuw >> 0x10) + 0x1cec4d) -
                      (uint)(byte)(&DAT_001cec4c)[esst_sly06tmuw >> 0x10])) >> 0x10) & 0xff)) {
        DAT_005b8655 = (&DAT_001cec6c)[esst_sez06tmub >> 0x10] +
                       (char)((esst_sez06tmub & 0xffff) *
                              ((uint)*(byte *)((esst_sez06tmub >> 0x10) + 0x1cec6d) -
                              (uint)(byte)(&DAT_001cec6c)[esst_sez06tmub >> 0x10]) >> 0x10);
      }
      else {
        DAT_005b8655 = (&DAT_001cec4c)[esst_sly06tmuw >> 0x10] +
                       (char)((esst_sly06tmuw & 0xffff) *
                              ((uint)*(byte *)((esst_sly06tmuw >> 0x10) + 0x1cec4d) -
                              (uint)(byte)(&DAT_001cec4c)[esst_sly06tmuw >> 0x10]) >> 0x10);
      }
      iVar12 = (int)((int)(short)((int)DAT_005b8657 << 8) * (uint)DAT_005b8655 * 0x100) >> 0xf;
      if (iVar12 < -0x8000) {
        iVar12 = -0x8000;
      }
      else if (0x7fff < iVar12) {
        iVar12 = 0x7fff;
      }
      DAT_005b8684 = (short)iVar12;
      uVar5 = uVar10 + (int)DAT_005b8684;
      if ((int)uVar5 < 0) {
        uVar5 = 0;
      }
      else if (0xffff < (int)uVar5) {
        uVar5 = 0xffff;
      }
      DAT_005b865b = (&DAT_001cea5c)[esst_sml07tmuw >> 0x10] +
                     (char)((esst_sml07tmuw & 0xffff) *
                            ((int)(char)(&DAT_001cea5d)[esst_sml07tmuw >> 0x10] -
                            (int)(char)(&DAT_001cea5c)[esst_sml07tmuw >> 0x10]) >> 0x10);
      if (DAT_005b865b < '\0') {
        if (((uint)(byte)(&DAT_001cec2c)[esst_sly06tmuw >> 0x10] +
             ((int)((esst_sly06tmuw & 0xffff) *
                   ((uint)*(byte *)((esst_sly06tmuw >> 0x10) + 0x1cec2d) -
                   (uint)(byte)(&DAT_001cec2c)[esst_sly06tmuw >> 0x10])) >> 0x10) & 0xff) <
            ((uint)(byte)(&DAT_001cec3c)[esst_sez06tmub >> 0x10] +
             ((int)((esst_sez06tmub & 0xffff) *
                   ((uint)*(byte *)((esst_sez06tmub >> 0x10) + 0x1cec3d) -
                   (uint)(byte)(&DAT_001cec3c)[esst_sez06tmub >> 0x10])) >> 0x10) & 0xff)) {
          DAT_005b8659 = (&DAT_001cec3c)[esst_sez06tmub >> 0x10] +
                         (char)((esst_sez06tmub & 0xffff) *
                                ((uint)*(byte *)((esst_sez06tmub >> 0x10) + 0x1cec3d) -
                                (uint)(byte)(&DAT_001cec3c)[esst_sez06tmub >> 0x10]) >> 0x10);
        }
        else {
          DAT_005b8659 = (&DAT_001cec2c)[esst_sly06tmuw >> 0x10] +
                         (char)((esst_sly06tmuw & 0xffff) *
                                ((uint)*(byte *)((esst_sly06tmuw >> 0x10) + 0x1cec2d) -
                                (uint)(byte)(&DAT_001cec2c)[esst_sly06tmuw >> 0x10]) >> 0x10);
        }
      }
      else if (((uint)(byte)(&DAT_001cec3c)[esst_sez06tmub >> 0x10] +
                ((int)((esst_sez06tmub & 0xffff) *
                      ((uint)*(byte *)((esst_sez06tmub >> 0x10) + 0x1cec3d) -
                      (uint)(byte)(&DAT_001cec3c)[esst_sez06tmub >> 0x10])) >> 0x10) & 0xff) <
               ((uint)(byte)(&DAT_001cec2c)[esst_sly06tmuw >> 0x10] +
                ((int)((esst_sly06tmuw & 0xffff) *
                      ((uint)*(byte *)((esst_sly06tmuw >> 0x10) + 0x1cec2d) -
                      (uint)(byte)(&DAT_001cec2c)[esst_sly06tmuw >> 0x10])) >> 0x10) & 0xff)) {
        DAT_005b8659 = (&DAT_001cec3c)[esst_sez06tmub >> 0x10] +
                       (char)((esst_sez06tmub & 0xffff) *
                              ((uint)*(byte *)((esst_sez06tmub >> 0x10) + 0x1cec3d) -
                              (uint)(byte)(&DAT_001cec3c)[esst_sez06tmub >> 0x10]) >> 0x10);
      }
      else {
        DAT_005b8659 = (&DAT_001cec2c)[esst_sly06tmuw >> 0x10] +
                       (char)((esst_sly06tmuw & 0xffff) *
                              ((uint)*(byte *)((esst_sly06tmuw >> 0x10) + 0x1cec2d) -
                              (uint)(byte)(&DAT_001cec2c)[esst_sly06tmuw >> 0x10]) >> 0x10);
      }
      iVar12 = (int)((int)(short)((int)DAT_005b865b << 8) * (uint)DAT_005b8659 * 0x100) >> 0xf;
      if (iVar12 < -0x8000) {
        iVar12 = -0x8000;
      }
      else if (0x7fff < iVar12) {
        iVar12 = 0x7fff;
      }
      DAT_005b8680 = (short)iVar12;
      uVar10 = uVar10 + (int)DAT_005b8680;
      if ((int)uVar10 < 0) {
        uVar10 = 0;
      }
      else if (0xffff < (int)uVar10) {
        uVar10 = 0xffff;
      }
    }
    else {
      DAT_005b8684 = (short)((int)DAT_001cec8b << 8);
      uVar5 = (uVar9 & 0xffff) + (int)DAT_005b8684;
      if ((int)uVar5 < 0) {
        uVar5 = 0;
      }
      else if (0xffff < (int)uVar5) {
        uVar5 = 0xffff;
      }
      DAT_005b8680 = (short)((int)DAT_001cec89 << 8);
      uVar10 = (uVar9 & 0xffff) + (int)DAT_005b8680;
      if ((int)uVar10 < 0) {
        uVar10 = 0;
      }
      else if (0xffff < (int)uVar10) {
        uVar10 = 0xffff;
      }
    }
    if ((B_atmst & B_atmst2) == 0) goto LAB_00148b30;
    if (B_atmtpk2 != '\0') {
      iVar12 = (esst_sml07tmuw >> 0x10) * 2;
      iVar13 = (esst_sml07tmuw >> 0x10) * 2;
      uVar9 = (uint)*(ushort *)(&DAT_001cee2c + iVar13) +
              ((int)((esst_sml07tmuw & 0xffff) *
                    ((uint)*(ushort *)(&DAT_001cee2e + iVar13) -
                    (uint)*(ushort *)(&DAT_001cee2c + iVar13))) >> 0x10) & 0xffff;
      uVar5 = func_0xff217f20((uint)*(ushort *)(&DAT_001cee48 + iVar12) +
                              ((int)((esst_sml07tmuw & 0xffff) *
                                    ((uint)*(ushort *)(&DAT_001cee4a + iVar12) -
                                    (uint)*(ushort *)(&DAT_001cee48 + iVar12))) >> 0x10) & 0xffff,
                              uVar5 & 0xffff,DAT_005bb89c,_DAT_005bb89c & 0xffff);
      DAT_005bb89c = (word)(uVar5 >> 0x10);
      DAT_005b868c = DAT_005bb89c;
      DAT_005bb89c._0_1_ = (byte)(uVar5 >> 0x18);
      DAT_005b865f = DAT_005bb89c._0_1_;
      _DAT_005bb89c = uVar5;
      uVar10 = func_0xff217f20(uVar9,uVar10 & 0xffff,DAT_005bb8a0,_DAT_005bb8a0 & 0xffff);
      DAT_005bb8a0 = (undefined2)(uVar10 >> 0x10);
      uVar4 = DAT_005bb8a0;
      _DAT_005bb8a0 = uVar10;
      uVar10 = func_0xff217f20(uVar9,uVar4,DAT_005bb8a4,_DAT_005bb8a4 & 0xffff);
      DAT_005bb8a4 = (ushort)(uVar10 >> 0x10);
      uVar6 = DAT_005bb8a4;
      _DAT_005bb8a4 = uVar10;
      uVar9 = func_0xff217f20(uVar9,uVar6,DAT_005bb8a8,_DAT_005bb8a8 & 0xffff);
      DAT_005bb8a8 = (word)(uVar9 >> 0x10);
      DAT_005b8688 = DAT_005bb8a8;
      DAT_005bb8a8._0_1_ = (byte)(uVar9 >> 0x18);
      DAT_005b865d = DAT_005bb8a8._0_1_;
      _DAT_005bb8a8 = uVar9;
    }
  }
  DAT_005b8690 = DAT_005b868c;
  if ((DAT_005b8088._2_1_ & 4) == 0) {
    if ((DAT_005b8088._2_1_ & 2) != 0) {
      if (B_atmtpa == '\0') {
        ATMbits = ATMbits & 0xfb;
      }
      else {
        ATMbits = ATMbits | 4;
      }
      if (B_atmtpk == '\0') {
        ATMbits = ATMbits & 0xfe;
      }
      else {
        ATMbits = ATMbits | 1;
      }
      if (B_atmtpa2 == '\0') {
        ATMbits = ATMbits & 0xf7;
      }
      else {
        ATMbits = ATMbits | 8;
      }
      if (B_atmtpk2 == '\0') {
        ATMbits = ATMbits & 0xfd;
      }
      else {
        ATMbits = ATMbits | 2;
      }
      DAT_003fdba1 = tabgm;
      DAT_003fdba3 = tkatm;
      DAT_003fdba2 = tabgm2;
      DAT_003fdba4 = DAT_005b865f;
      _DAT_003fdbaa = 0;
      DAT_005bb890 = 0;
      DAT_005b866e = 0;
      B_atmtpa = '\0';
      B_atmtpk = '\0';
      DAT_005bb8ac = 0;
      DAT_005b866c = 0;
      B_atmtpa2 = '\0';
      B_atmtpk2 = '\0';
      if ((DAT_005b8088._2_1_ & 4) != 0) goto LAB_00148cec;
    }
    DAT_005b8088._2_1_ = DAT_005b8088._2_1_ & 0xfd;
  }
  else {
LAB_00148cec:
    DAT_005b8088._2_1_ = DAT_005b8088._2_1_ | 2;
  }
  if ((DAT_005b8088._2_1_ & 8) == 0) {
    if ((DAT_005b8088._2_1_ & 4) != 0) {
      uVar6 = (DAT_005b8651 - 10) + (short)DAT_001cec87;
      if ((short)uVar6 < 0) {
        if ((uint)_ml_w * (uint)(ushort)-uVar6 < 0x80000) {
          uVar9 = (uint)_ml_w * (uint)(ushort)-uVar6 >> 3;
        }
        else {
          uVar9 = 0xffff;
        }
        if ((uVar9 & 0xffff) < DAT_005bb890) {
          DAT_005bb890 = DAT_005bb890 - (uVar9 & 0xffff);
        }
        else {
          DAT_005bb890 = 0;
        }
      }
      else {
        uVar9 = (uint)_ml_w * (uint)uVar6;
        if (uVar9 < 0x80000) {
          if (uVar9 < 0xff) {
            uVar9 = 0;
          }
          else {
            uVar9 = uVar9 >> 3;
          }
        }
        else {
          uVar9 = 0xffff;
        }
        DAT_005bb890 = DAT_005bb890 + (uVar9 & 0xffff);
        if (0x7ffffff < DAT_005bb890) {
          DAT_005bb890 = 0x7ffffff;
        }
      }
      DAT_005b866e = (ushort)(DAT_005bb890 >> 0xb);
    }
  }
  else {
    DAT_005bb890 = 0;
    DAT_005b866e = 0;
  }
  if ((ATMbits & 1) == 0) {
    if ((((DAT_005b8088._2_1_ & 8) == 0) && ((DAT_005b8088._2_1_ & 1) != 0)) && (DAT_003fdba5 < 6))
    {
      DAT_003fdba5 = DAT_003fdba5 + 1;
    }
  }
  else {
    DAT_003fdba5 = 0;
  }
  if ((ATMbits & 4) == 0) {
    if ((((DAT_005b8088._2_1_ & 8) == 0) && ((DAT_005b8088._2_1_ & 1) != 0)) && (DAT_003fdba7 < 6))
    {
      DAT_003fdba7 = DAT_003fdba7 + 1;
    }
  }
  else {
    DAT_003fdba7 = 0;
  }
  uVar9 = func_0xff21afb0(&DAT_001ced64,_DAT_001ce9de,esst_st307tmub,DAT_005b9ce0);
  uVar10 = ((uint)DAT_003fdba5 * (uint)DAT_001cea40 + 0x100 & 0xffff) * (uVar9 & 0xffff);
  uVar9 = uVar10 >> 8;
  if (B_kh != '\0') {
    uVar9 = (uVar10 >> 0xc & 0xffff) * (uint)DAT_001cec94 >> 3;
  }
  if (0xffff < uVar9) {
    uVar9 = 0xffff;
  }
  if ((uVar9 & 0xffff) <= (uint)DAT_005b866e) {
    B_atmtpk = '\x01';
  }
  uVar9 = func_0xff21afb0(&DAT_001cecd8,_DAT_001ce9de,esst_st107tmub,DAT_005b9ce0);
  uVar10 = ((uint)DAT_003fdba7 * (uint)DAT_001cea3e + 0x100 & 0xffff) * (uVar9 & 0xffff);
  uVar9 = uVar10 >> 8;
  if (B_kh != '\0') {
    uVar9 = (uVar10 >> 0xc & 0xffff) * (uint)DAT_001cec92 >> 3;
  }
  if (0xffff < uVar9) {
    uVar9 = 0xffff;
  }
  if ((uVar9 & 0xffff) <= (uint)DAT_005b866e) {
    B_atmtpa = '\x01';
  }
  if ((DAT_005b8088._2_1_ & 8) == 0) {
    if ((DAT_005b8088._2_1_ & 4) != 0) {
      uVar6 = (DAT_005b8652 - 10) + (short)DAT_001cec87;
      if ((short)uVar6 < 0) {
        if ((uint)_ml_w * (uint)(ushort)-uVar6 < 0x80000) {
          uVar9 = (uint)_ml_w * (uint)(ushort)-uVar6 >> 3;
        }
        else {
          uVar9 = 0xffff;
        }
        if ((uVar9 & 0xffff) < DAT_005bb8ac) {
          DAT_005bb8ac = DAT_005bb8ac - (uVar9 & 0xffff);
        }
        else {
          DAT_005bb8ac = 0;
        }
      }
      else {
        if ((uint)_ml_w * (uint)uVar6 < 0x80000) {
          uVar9 = (uint)_ml_w * (uint)uVar6 >> 3;
        }
        else {
          uVar9 = 0xffff;
        }
        DAT_005bb8ac = DAT_005bb8ac + (uVar9 & 0xffff);
        if (0x7ffffff < DAT_005bb8ac) {
          DAT_005bb8ac = 0x7ffffff;
        }
      }
      DAT_005b866c = (undefined2)(DAT_005bb8ac >> 0xb);
    }
  }
  else {
    DAT_005bb8ac = 0;
    DAT_005b866c = 0;
  }
  if ((ATMbits & 2) == 0) {
    if ((((DAT_005b8088._2_1_ & 8) == 0) && ((DAT_005b8088._2_1_ & 1) != 0)) && (DAT_003fdba6 < 6))
    {
      DAT_003fdba6 = DAT_003fdba6 + 1;
    }
  }
  else {
    DAT_003fdba6 = 0;
  }
  if ((ATMbits & 8) == 0) {
    if ((((DAT_005b8088._2_1_ & 8) == 0) && ((DAT_005b8088._2_1_ & 1) != 0)) && (DAT_003fdba8 < 6))
    {
      DAT_003fdba8 = DAT_003fdba8 + 1;
    }
  }
  else {
    DAT_003fdba8 = 0;
  }
  uVar9 = func_0xff21afb0(&DAT_001cedaa,_DAT_001ce9de,esst_st407tmub,DAT_005b9ce0);
  uVar10 = ((uint)DAT_003fdba6 * (uint)DAT_001cea41 + 0x100 & 0xffff) * (uVar9 & 0xffff);
  uVar9 = uVar10 >> 8;
  if (B_kh != '\0') {
    uVar9 = (uVar10 >> 0xc & 0xffff) * (uint)DAT_001cec95 >> 3;
  }
  if (0xffff < uVar9) {
    uVar9 = 0xffff;
  }
  if ((uVar9 & 0xffff) <= (uint)DAT_005b866e) {
    B_atmtpk2 = '\x01';
  }
  uVar9 = func_0xff21afb0(&DAT_001ced1e,_DAT_001ce9de,esst_st207tmub,DAT_005b9ce0);
  uVar10 = ((uint)DAT_003fdba8 * (uint)DAT_001cea3f + 0x100 & 0xffff) * (uVar9 & 0xffff);
  uVar9 = uVar10 >> 8;
  if (B_kh != '\0') {
    uVar9 = (uVar10 >> 0xc & 0xffff) * (uint)DAT_001cec93 >> 3;
  }
  if (0xffff < uVar9) {
    uVar9 = 0xffff;
  }
  if ((uVar9 & 0xffff) <= (uint)DAT_005b866e) {
    B_atmtpa2 = '\x01';
  }
  if ((DAT_005b8088._2_1_ & 8) == 0) {
    DAT_005b8088._2_1_ = DAT_005b8088._2_1_ & 0xfe;
  }
  else {
    DAT_005b8088._2_1_ = DAT_005b8088._2_1_ | 1;
  }
  return;
}

