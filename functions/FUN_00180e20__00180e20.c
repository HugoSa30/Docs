/*
 * Program: n42.bin
 * Function: FUN_00180e20
 * Entry: 00180e20
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00180e20(void)

{
  char cVar3;
  uint uVar1;
  uint uVar2;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint in_MSR;
  ushort local_50;
  ushort local_4c;
  ushort local_48 [2];
  ushort local_44 [2];
  ushort *local_40;
  ushort local_3c [2];
  ushort *local_38;
  
  if ((pm_mod != '\0') && (DAT_003fb7f0 = '\0', pm_mod == '\x01')) {
    if (pm_ta == '\0') {
      pm_mod = '\0';
    }
    else {
      pm_ta = pm_ta + -1;
      if ((0x7d < nmot) && (pm_td = pm_td + -1, pm_td == '\0')) {
        pm_mod = '\0';
        DAT_003fb7f0 = 'f';
      }
    }
  }
  if (DAT_003fb7f0 == 'f') {
    if (0x85 < nmot - 0x10) {
      DAT_003fb7f0 = '\0';
    }
    if (DAT_003fb7f0 != 'f') goto LAB_00180f04;
    EwsNvBits = EwsNvBits | 1;
    B_eculock = 0;
  }
  else {
LAB_00180f04:
    bVar6 = 0;
    bVar4 = DAT_003fe976 ^ 0x3c;
    bVar5 = 0;
    do {
      bVar6 = bVar6 + ((bVar4 & 0x80) != 0);
      bVar4 = bVar4 * '\x02';
      bVar5 = bVar5 + 1;
    } while (bVar5 < 8);
    if (bVar6 < 6) {
      DAT_003fe976 = 0x3c;
      EwsNvBits = EwsNvBits & 0xfe;
      B_eculock = 1;
    }
    else {
      DAT_003fe976 = 0xc3;
      EwsNvBits = EwsNvBits | 1;
      B_eculock = 0;
    }
  }
  if ((stw_prog_frei_mod != 0) && (stw_prog_frei_mod == 1)) {
    if (stw_prog_frei_ta == 0) {
      stw_prog_frei_mod = 0;
    }
    else {
      stw_prog_frei_ta = stw_prog_frei_ta - 1;
      if ((0x7d < nmot) && (stw_prog_frei_td = stw_prog_frei_td - 1, stw_prog_frei_td == 0)) {
        if (_DAT_003fa10c == 0) {
          _DAT_003fa110 = in_MSR >> 0xf & 1;
        }
        _DAT_003fa10c = _DAT_003fa10c + 1;
        _DAT_003fb808 = 0x72ab;
        func_0xff20ba70(0x14,0,1);
        func_0xff21189c(&DAT_003fb808,DAT_003fb7f7 + 0xffe140,2);
        func_0xff20ba70(0x14,0,0);
        _DAT_003fa10c = _DAT_003fa10c + -1;
        stw_prog_frei_mod = 0;
      }
    }
  }
  if (B_nmin == '\0') {
    EwsNvBits = EwsNvBits & 0xef;
    B_inistw = '\0';
    B_resstw = '\0';
  }
  if (B_stend != '\0') {
    EwsNvBits = EwsNvBits | 0x20;
  }
  if ((B_write_active != '\0') &&
     (((DAT_005bb708 == '\x02' && (DAT_005bb714 == '\x02')) ||
      ((DAT_005bb720 == '\x02' && (DAT_005bb72c == '\x02')))))) {
    B_inistw = '\0';
    B_resstw = '\0';
    B_write_active = '\0';
  }
  FUN_00128bb8();
  if (DAT_003fb7f5 == '\x04') {
    if (((B_inistw == '\0') && (B_resstw == '\0')) && (DAT_003fb817 == 0)) {
      if ((_Z_dwa & 1) == 0) {
        if (_DAT_003fe968 == 0) {
          cVar3 = FUN_00127be8();
          if (cVar3 == '\0') {
            local_4c._0_1_ = (byte)(_Z_wfs >> 8);
            if (_DAT_003fe974 == _DAT_003fe96a) {
              uVar1 = func_0xff210928(7,0,0);
              uVar1 = uVar1 & 0xff;
              uVar2 = func_0xff210928(8,0,0);
              uVar2 = uVar2 & 0xff;
              if (((((int)uVar1 >> 6 & 1U) == 0) && (((int)uVar1 >> 3 & 1U) != 0)) &&
                 (((int)uVar1 >> 7 == 0 &&
                  (((((int)uVar2 >> 6 & 1U) == 0 && (((int)uVar2 >> 3 & 1U) != 0)) &&
                   ((int)uVar2 >> 7 == 0)))))) {
                if (((DAT_003fe880 == DAT_003fb7fb) && (DAT_003fe87f == DAT_003fb7fd)) &&
                   ((DAT_003fe88a == DAT_003fb7fb && (DAT_003fe889 == DAT_003fb7fd)))) {
                  if ((((uint)_DAT_003fe87d == (_DAT_003fe968 & 0xffff)) && (_DAT_003fe87b == 0)) &&
                     (((uint)_DAT_003fe887 == (_DAT_003fe968 & 0xffff) && (_DAT_003fe885 == 0)))) {
                    DAT_003fb7f5 = '\0';
                  }
                  else if (((local_4c._0_1_ & 0xf) == 4) || (B_kwperr != '\0')) {
                    DAT_003fb7f5 = '\x06';
                  }
                  else {
                    DAT_003fb7f5 = '\x11';
                  }
                }
                else {
                  DAT_003fb7f5 = '\x12';
                }
              }
              else {
                DAT_003fb7f5 = '\"';
              }
            }
            else if ((local_4c._0_1_ & 0xf) == 1) {
              DAT_003fb7f5 = ' ';
            }
            else if (((local_4c._0_1_ & 0xf) == 4) || (B_kwperr != '\0')) {
              DAT_003fb7f5 = '\x01';
            }
            else {
              DAT_003fb7f5 = '\x10';
            }
          }
          else if (cVar3 == '\x01') {
            DAT_003fb7f5 = '!';
          }
          else if (cVar3 == '\x02') {
            DAT_003fb7f5 = '\a';
          }
        }
        else {
          DAT_003fb7f5 = '\x02';
        }
      }
      else {
        DAT_003fb7f5 = '\x03';
      }
    }
    else if (B_timerr == '\0') {
      DAT_003fb7f5 = '\x04';
    }
    else {
      DAT_003fb7f5 = '\x03';
    }
  }
  bVar4 = EwsNvBits;
  if (DAT_003fb7f6 == '\x04') {
    if (stw_prog_frei_mod == 0) {
      if (((((DAT_00ffe189 == -0x55) && (DAT_00ffe188 == 'r')) &&
           ((DAT_00ffe186 & DAT_00ffe187) == 0xff)) ||
          (((DAT_00ffe1c9 == -0x55 && (DAT_00ffe1c8 == 'r')) &&
           ((DAT_00ffe1c6 & DAT_00ffe1c7) == 0xff)))) || ((DAT_00ffe146 & DAT_00ffe147) == 0xff)) {
        DAT_003fb7f6 = '\0';
      }
      else {
        DAT_003fb7f6 = '\x01';
      }
    }
    else {
      DAT_003fb7f6 = '\x04';
    }
  }
  if ((((EwsNvBits & 1) != 0) && (DAT_003fb7f0 != 'f')) && (0x25 < nmot)) {
    if (_tweiter == 0) {
      if (((int)(uint)EwsNvBits >> 2 & 1U) == 0) {
        cVar3 = FUN_00127d24(&DAT_003fe968,&DAT_003fe96c,&DAT_003fe970);
        if (cVar3 == '\0') {
          EwsNvBits = bVar4 | 4;
          B_write_active = '\x01';
          _DAT_003fb818 = _DAT_003fe968;
          DAT_003fb826 = 0;
          bVar4 = func_0xff2102d0(7,2,4,0,&DAT_003fb818,&DAT_005bb718);
          if (0x3f < bVar4) {
            DAT_005bb720 = -0x80;
          }
          DAT_003fb827 = 0;
          bVar4 = func_0xff2102d0(8,2,4,0,&DAT_003fb818,&DAT_005bb724);
          if (0x3f < bVar4) {
            DAT_005bb72c = -0x80;
          }
        }
        else {
          EwsNvBits = bVar4 & 0xfb;
        }
      }
    }
    else {
      _tweiter = _tweiter + -1;
    }
  }
  if (((B_kl15 == 0) || (B_nmin == '\0')) || (((int)(uint)EwsNvBits >> 5 & 1U) == 0)) {
    if ((EwsNvBits >> 4 & 1) == 0) goto LAB_001816ec;
  }
  else if (((int)(uint)EwsNvBits >> 4 & 1U) == 0) {
    _twuerg = 0x46;
    EwsNvBits = EwsNvBits | 0x10;
    goto LAB_001816ec;
  }
  if (_twuerg == 0) {
    DAT_003fe976 = 0x3c;
    if ((EwsNvBits >> 5 & 1) == 0) {
      EwsNvBits = EwsNvBits & 0xef | 2;
    }
    else {
      EwsNvBits = EwsNvBits & 0xcf;
    }
  }
  else {
    _twuerg = _twuerg + -1;
  }
LAB_001816ec:
  if ((DAT_003fb817 & 2) == 2) {
    local_50 = _Z_dwa & 0xdffd | 0x2002;
    local_48[0] = local_50;
    local_40 = local_48;
    local_44[0] = local_50;
    func_0xff222958(0x3d,local_44);
  }
  if ((DAT_003fb817 & 4) == 4) {
    local_4c = _Z_wfs & 0xdffd | 0x2002;
    local_48[0] = local_4c;
    local_38 = local_48;
    local_3c[0] = local_4c;
    func_0xff222958(0xc1,local_3c);
  }
  if ((DAT_003fb817 & 1) == 1) {
    FUN_00127820();
  }
  DAT_003fb817 = 0;
  AS_wp = 0;
  return;
}

