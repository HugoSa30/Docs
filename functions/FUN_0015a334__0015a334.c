/*
 * Program: n42.bin
 * Function: FUN_0015a334
 * Entry: 0015a334
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x0015a4ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015a334(void)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  ushort uVar7;
  uint uVar6;
  uint uVar8;
  uint uVar9;
  undefined uVar10;
  ushort local_58;
  ushort local_50 [2];
  ushort local_4c [2];
  ushort *local_48;
  ushort local_44 [2];
  ushort *local_40;
  ushort local_3c [2];
  ushort *local_38;
  ushort local_34 [2];
  ushort *local_30;
  
  if (B_mdstop == 0) {
    if (B_milstp == 0) {
      if (rl < bfrlmn) {
        bfrlmn = rl;
      }
      if (bfrlmx < rl) {
        bfrlmx = rl;
      }
      if (nmot < bfnmn) {
        bfnmn = nmot;
      }
      if (bfnmx < nmot) {
        bfnmx = nmot;
      }
      if (tmot < TMWUC) {
        B_bfklt = B_bfklt;
      }
      else {
        B_bfwrm = B_bfwrm;
      }
    }
    kswf = func_0xff2196d0(&DAT_001c17b4,rl,nmot);
    if ((B_ivzkat1 != 0) && (DAT_005b8554 == 0)) {
      DAT_005b8554 = tmot;
    }
    if (DAT_005b8c7d != '\0') {
      if (B_ivzabg1 == 0) {
        if ((fivzabg < 4) && (_DAT_001c17f4 < DAT_005b971c)) {
          uVar9 = DAT_003fa978 + 1;
          if (0xff < uVar9) {
            uVar9 = 0xff;
          }
          DAT_003fa978 = (byte)uVar9;
          fivzabg = DAT_003fa978;
        }
        DAT_005b8c84 = false;
        if ((fivzabg < 4) || (DAT_005b971c <= _DAT_001c17f4)) {
          DAT_005b8c80 = '\0';
        }
        else {
          DAT_005b8c80 = '\x01';
        }
      }
      else {
        DAT_005b8c84 = _DAT_001c17f6 < DAT_005b971c;
      }
      cVar1 = DAT_005b8c80;
      if (B_ivzabg1 != 0) {
        cVar1 = DAT_005b8c84;
      }
      if ((cVar1 != '\0') && ((B_nopg >> 1 & 1) != 0)) {
        uVar7 = DAT_005b971c >> 2;
        if (12000 < uVar7) {
          uVar7 = 12000;
        }
        uVar9 = 0;
        DAT_005b8546 = uVar7;
        do {
          (&DAT_005b8558)[uVar9] = uVar7 <= (ushort)(&DAT_005b971e)[uVar9];
          uVar9 = uVar9 + 1 & 0xff;
        } while (uVar9 < 4);
      }
      B_ivzabg1 = 0;
    }
    if (DAT_005b854a == 0) {
      uVar9 = (uint)_DAT_001c17f4 << 0xf;
    }
    else {
      uVar9 = ((uint)_DAT_001c17f4 << 0xf) / (uint)DAT_005b854a;
    }
    uVar6 = (uint)DAT_005b854c;
    uVar8 = (uVar6 << 0xf) / 10;
    if (uVar8 < (uint)_DAT_001c17f8 << 0xf) {
      uVar8 = uVar8 >> 0xf;
    }
    else {
      if (uVar6 == 0) {
        uVar8 = (uint)_DAT_001c17f8 << 0xf;
      }
      else {
        uVar8 = ((uint)_DAT_001c17f8 << 0xf) / uVar6;
      }
      if (uVar8 < uVar9) {
        uVar8 = (uVar9 >> 10) * ((int)uVar6 >> 5);
      }
      else {
        uVar8 = (uint)_DAT_001c17f8;
      }
    }
    if (0xffff < uVar8) {
      uVar8 = 0xffff;
    }
    ahearv_w = (word)uVar8;
    if (((DAT_005b8c80 == '\0') && (DAT_005b8c84 == '\0')) && (DAT_005b8c83 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      local_58 = _B_mnmd;
      uVar7 = local_58;
      local_58._0_1_ = (byte)(_B_mnmd >> 8);
      bVar5 = local_58._0_1_ & 0xf;
      local_58 = uVar7;
      if (bVar5 != 1) {
        if (DAT_005b8c84 != '\0') {
          local_58 = _B_mnmd & 0xd0fc | 0x2803;
        }
        if (DAT_005b8c80 != '\0') {
          local_58 = local_58 & 0xd0fc | 0x2203;
        }
      }
      if (DAT_005b8c83 != '\0') {
        local_58 = local_58 & 0xd0fc | 0x2103;
      }
      local_50[0] = local_58;
      local_48 = local_50;
      local_4c[0] = local_58;
      func_0xff222958(0x83,local_4c);
      if (bVar3) {
        uVar9 = 0;
        do {
          if ((((DAT_005b8c83 != '\0') && (((int)(uint)flgkat_w >> (uVar9 & 0x3f) & 1U) != 0)) ||
              ((DAT_005b8c80 != '\0' && ((&DAT_005b8558)[uVar9 & 0xff] != '\0')))) ||
             ((DAT_005b8c84 != '\0' && ((&DAT_005b8558)[uVar9 & 0xff] != '\0')))) {
            if ((uVar9 & 0xff) < 0xc) {
              uVar8 = (uint)*(byte *)((uVar9 & 0xff) + 0x1bd6c);
            }
            else {
              uVar8 = 0x84;
            }
            uVar7 = *(ushort *)(&UNK_003fde62 + uVar8 * 2);
            local_58._0_1_ = (byte)(uVar7 >> 8);
            bVar5 = local_58._0_1_ & 0xf;
            local_58 = uVar7;
            if (bVar5 != 1) {
              if ((DAT_005b8c84 != '\0') && ((&DAT_005b8558)[uVar9 & 0xff] != '\0')) {
                local_58 = uVar7 & 0xd0fc | 0x2803;
              }
              if ((DAT_005b8c80 != '\0') && ((&DAT_005b8558)[uVar9 & 0xff] != '\0')) {
                local_58 = local_58 & 0xd0fc | 0x2203;
              }
            }
            if ((DAT_005b8c83 != '\0') && (((int)(uint)flgkat_w >> (uVar9 & 0x3f) & 1U) != 0)) {
              local_58 = local_58 & 0xd0fc | 0x2103;
            }
            if ((uVar9 & 0xff) < 0xc) {
              uVar10 = *(undefined *)((uVar9 & 0xff) + 0x1bd78);
            }
            else {
              uVar10 = 0x84;
            }
            local_50[0] = local_58;
            local_40 = local_50;
            local_44[0] = local_58;
            func_0xff222958(uVar10,local_44);
          }
          uVar9 = uVar9 + 1;
        } while ((uVar9 & 0xff) < 4);
        if ((bVar3) && ((B_sp1 & 1) == 0)) {
          B_sp1 = B_sp1 & 0xfe | 1;
          FUN_00142f24(&B_sp1);
        }
      }
    }
    if ((DAT_005b8c7c == '\0') && (DAT_005b8c7d != '\0')) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      if ((DAT_003fdf69 >> 1 & 1) == 0) {
        local_58 = _B_mnmd;
        if ((_B_mnmd & 1) == 0) {
          local_58 = _B_mnmd & 0xdffd | 0x2002;
        }
        local_50[0] = local_58;
        local_38 = local_50;
        local_3c[0] = local_58;
        func_0xff222958(0x83,local_3c);
        bVar5 = 0;
        do {
          if (bVar5 < 0xc) {
            uVar9 = (uint)*(byte *)(bVar5 + 0x1bd84);
          }
          else {
            uVar9 = 0x84;
          }
          local_58 = *(ushort *)(&UNK_003fde62 + uVar9 * 2);
          if ((local_58 & 1) == 0) {
            local_58 = local_58 & 0xdffd | 0x2002;
          }
          if (bVar5 < 0xc) {
            uVar10 = *(undefined *)(bVar5 + 0x1bd90);
          }
          else {
            uVar10 = 0x84;
          }
          local_50[0] = local_58;
          local_34[0] = local_58;
          local_30 = local_50;
          func_0xff222958(uVar10,local_34);
          bVar5 = bVar5 + 1;
        } while (bVar5 < 4);
      }
      if (bVar4) {
        DAT_005b8c7c = '\x01';
      }
    }
    DAT_005b8564 = (&DAT_001c17ac)[esst_snm08dmub >> 0x10] +
                   (char)((esst_snm08dmub & 0xffff) *
                          ((uint)(byte)(&DAT_001c17ad)[esst_snm08dmub >> 0x10] -
                          (uint)(byte)(&DAT_001c17ac)[esst_snm08dmub >> 0x10]) >> 0x10);
    if (((bVar3) && (B_afklt == 0)) && (B_afwrm == 0)) {
      B_afklt = B_aftklt;
      B_afwrm = B_aftwrm;
      uVar9 = aftnmn + 4;
      if (0xff < uVar9) {
        uVar9 = 0xff;
      }
      afnmn = (byte)uVar9;
      uVar8 = aftnmx - 4;
      if ((short)uVar8 < 0) {
        uVar8 = 0;
      }
      afnmx = (byte)uVar8;
      uVar6 = (uint)aftrlmn * 0x233 >> 9;
      if (0xff < uVar6) {
        uVar6 = 0xff;
      }
      afrlmn = (undefined)uVar6;
      uVar2 = (uint)aftrlmx * 0x39a >> 10;
      afrlmx = (undefined)uVar2;
      if ((uVar9 & 0xff) << 2 < (uint)nsllm) {
        afnmn = nsllm >> 2;
      }
      if (uVar2 < (uVar6 & 0xff)) {
        afrlmn = (undefined)(((uVar6 & 0xff) + uVar2) * 0x400000 >> 0x17);
        afrlmx = afrlmn;
      }
      if (((uVar8 & 0xff) < (uint)afnmn) &&
         (uVar9 = ((uint)afnmn + (uVar8 & 0xff)) * 0x400000 >> 0x17, afnmn = (byte)uVar9,
         afnmx = afnmn, (uVar9 & 0xff) << 2 < (uint)nsllm)) {
        afnmn = nsllm >> 2;
        afnmx = afnmn;
      }
    }
    if (DAT_005b8c7d != '\0') {
      aftnmn = 0xff;
      aftrlmn = 0xfe;
      aftnmx = 0;
      aftrlmx = 0;
      B_aftklt = 0;
      B_aftwrm = 0;
      DAT_005b8c7d = '\0';
    }
    if ((char)CWDALA < '\0') {
      _zzuend_l = 0;
      uVar9 = 0;
      do {
        *(undefined2 *)(&UNK_003fd812 + uVar9 * 2) = 0;
        uVar9 = uVar9 + 1 & 0xff;
      } while (uVar9 < 4);
      DAT_003fd834 = 0;
    }
    if ((CWDALA >> 1 & 1) != 0) {
      if ((bbdcy == B_dcy) && (DAT_003fa97a == '\0')) {
        DAT_003fa979 = true;
      }
      else {
        DAT_003fa979 = false;
      }
      DAT_003fa97a = (char)(((uint)(byte)((bbdcy == B_dcy) << 1) << 8) >> 9);
      if ((bool)DAT_003fa979) {
        uVar9 = DAT_003fd834 + 1;
        if (0xff < uVar9) {
          uVar9 = 0xff;
        }
        DAT_003fd834 = (byte)uVar9;
        if ((uint)DAT_001c1802 == (uVar9 & 0xff)) {
          _zzuend_l = 0;
          uVar9 = 0;
          do {
            *(undefined2 *)(&UNK_003fd812 + uVar9 * 2) = 0;
            uVar9 = uVar9 + 1 & 0xff;
          } while (uVar9 < 4);
          DAT_003fd834 = 0;
        }
      }
    }
    bVar5 = 0;
    do {
      if (bVar5 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0015af54 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)bVar5 * 4 + 0xf5af60))();
        return;
      }
      if (bVar5 + 1 < 9) {
                    /* WARNING: Could not emulate address calculation at 0x0015b018 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((bVar5 + 1) * 4 + 0xf5b024))();
        return;
      }
      (&DAT_005b8da0)[bVar5] = 0;
      bVar5 = bVar5 + 1;
    } while (bVar5 < 4);
  }
  return;
}

