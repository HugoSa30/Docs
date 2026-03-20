/*
 * Program: n42.bin
 * Function: FUN_0011c3b8
 * Entry: 0011c3b8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0011c3b8(int *param_1)

{
  int iVar1;
  undefined uVar2;
  uint uVar3;
  ushort local_30;
  ushort local_2c [2];
  ushort local_28 [2];
  ushort *local_24;
  ushort local_20 [2];
  ushort *local_1c;
  
  uVar3 = 2;
  if (*(short *)((int)param_1 + 6) == 2) {
    if (*(char *)(*param_1 + 1) == '\0') {
      if (nmot_w != 0) {
        uVar2 = 0x22;
        goto LAB_0011ca44;
      }
      if ((DAT_00ffe146 & DAT_00ffe147) == 0xff) {
        EwsNvBits = EwsNvBits | 2;
        B_inistw = 1;
        DAT_003fe976 = 0x3c;
        DAT_003fb7f5 = 4;
        DAT_003fb7f6 = 4;
        _ttimout = 1000;
        B_timerr = 0;
        uVar2 = 0;
      }
      else if ((((DAT_00ffe189 == 0xab) && (DAT_00ffe188 == 0x72)) &&
               ((DAT_00ffe186 & DAT_00ffe187) == 0xff)) ||
              (((DAT_00ffe1c9 == 0xab && (DAT_00ffe1c8 == 0x72)) &&
               ((DAT_00ffe1c6 & DAT_00ffe1c7) == 0xff)))) {
        EwsNvBits = EwsNvBits | 2;
        B_inistw = 1;
        DAT_003fe976 = 0x3c;
        DAT_003fb7f5 = 4;
        DAT_003fb7f6 = 4;
        _ttimout = 1000;
        B_timerr = 0;
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      if (*(char *)(*param_1 + 1) != '\x01') {
        uVar2 = 0x12;
        uVar3 = 1;
        goto LAB_0011ca60;
      }
      if (nmot_w != 0) {
        uVar2 = 0x22;
        uVar3 = 1;
        goto LAB_0011ca60;
      }
      if ((DAT_00ffe1c6 | DAT_00ffe1c7) == 0) {
        iVar1 = 0x80;
      }
      else if ((DAT_00ffe186 | DAT_00ffe187) == 0) {
        iVar1 = 0x40;
      }
      else {
        if ((DAT_00ffe146 | DAT_00ffe147) != 0) {
          local_30 = _Z_wfs & 0xf0fe | 0x201;
          local_2c[0] = local_30;
          local_1c = local_2c;
          local_20[0] = local_30;
          func_0xff222958(0xc1,local_20);
          DAT_003fb7f5 = 4;
          uVar2 = 2;
          goto LAB_0011ca4c;
        }
        iVar1 = 0;
      }
      if (((*(char *)(iVar1 + 0xffe140) == *(char *)(iVar1 + 0xffe142)) &&
          (*(char *)(iVar1 + 0xffe141) == *(char *)(iVar1 + 0xffe143))) ||
         (((*(char *)(iVar1 + 0xffe140) == *(char *)(iVar1 + 0xffe144) &&
           (*(char *)(iVar1 + 0xffe141) == *(char *)(iVar1 + 0xffe145))) ||
          ((*(char *)(iVar1 + 0xffe142) == *(char *)(iVar1 + 0xffe144) &&
           (*(char *)(iVar1 + 0xffe143) == *(char *)(iVar1 + 0xffe145))))))) {
        EwsNvBits = EwsNvBits | 2;
        B_resstw = 1;
        DAT_003fe976 = 0x3c;
        DAT_003fb7f5 = 4;
        _ttimout = 1000;
        B_timerr = 0;
        uVar2 = 0;
      }
      else {
        local_30 = _Z_wfs & 0xf0fe | 0x101;
        local_2c[0] = local_30;
        local_24 = local_2c;
        local_28[0] = local_30;
        func_0xff222958(0xc1,local_28);
        DAT_003fb7f5 = 4;
        uVar2 = 3;
      }
    }
  }
  else {
    if (*(short *)((int)param_1 + 6) != 8) {
      uVar2 = 0x12;
LAB_0011ca44:
      uVar3 = 1;
      goto LAB_0011ca60;
    }
    if ((((pm_fre == 'r') && (B_eepwf != '\0')) && (nmot_w == 0)) &&
       ((0xed < tmot && (DAT_003fffa6 == '\x04')))) {
      iVar1 = *param_1;
      if ((((byte)(*(byte *)(iVar1 + 2) | *(byte *)(iVar1 + 3) | *(byte *)(iVar1 + 4)) == 0) &&
          (*(char *)(iVar1 + 5) == '\x02')) &&
         ((*(char *)(iVar1 + 6) == -0x66 && (*(char *)(iVar1 + 7) == 'K')))) {
        if (*(char *)(iVar1 + 1) == '\x03') {
          pm_ta = 0x50;
          pm_td = 0x28;
          pm_mod = 1;
          uVar2 = 0;
        }
        else {
          if (*(char *)(iVar1 + 1) != '\x02') {
            uVar2 = 0x12;
            goto LAB_0011ca30;
          }
          if (top_w < 0xf) {
            if ((DAT_00ffe146 | DAT_00ffe147) == 0) {
              if ((DAT_00ffe186 & DAT_00ffe187 & DAT_00ffe188 & DAT_00ffe189) == 0xff) {
                stw_prog_frei_ta = 0x50;
                stw_prog_frei_td = 0x28;
                stw_prog_frei_mod = 1;
                DAT_003fb7f7 = 0x48;
                DAT_003fb7f6 = 4;
                uVar2 = 0;
              }
              else if (((DAT_00ffe189 == 0xab) && (DAT_00ffe188 == 0x72)) &&
                      ((DAT_00ffe186 & DAT_00ffe187) == 0xff)) {
                DAT_003fb7f6 = 4;
                uVar2 = 0;
              }
              else if ((DAT_00ffe1c6 & DAT_00ffe1c7 & DAT_00ffe1c8 & DAT_00ffe1c9) == 0xff) {
                stw_prog_frei_ta = 0x50;
                stw_prog_frei_td = 0x28;
                stw_prog_frei_mod = 1;
                DAT_003fb7f7 = 0x88;
                DAT_003fb7f6 = 4;
                uVar2 = 0;
              }
              else if (((DAT_00ffe1c9 == 0xab) && (DAT_00ffe1c8 == 0x72)) &&
                      ((DAT_00ffe1c6 & DAT_00ffe1c7) == 0xff)) {
                DAT_003fb7f6 = 4;
                uVar2 = 0;
              }
              else {
                uVar2 = 1;
              }
            }
            else {
              DAT_003fb7f6 = 4;
              uVar2 = 0;
            }
          }
          else {
            uVar2 = 0x22;
            uVar3 = 1;
          }
        }
      }
      else {
        uVar2 = 0x12;
        uVar3 = 1;
      }
    }
    else {
      uVar2 = 0x22;
LAB_0011ca30:
      uVar3 = 1;
    }
    pm_fre = '\0';
  }
LAB_0011ca4c:
  if (1 < uVar3) {
    *(undefined *)(*param_1 + 1) = uVar2;
    return uVar3;
  }
LAB_0011ca60:
  *(undefined *)*param_1 = uVar2;
                    /* WARNING: Read-only address (ram,0x003fdfe4) is written */
  return uVar3;
}

