/*
 * Program: n42.bin
 * Function: FUN_000c008c
 * Entry: 000c008c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000c0624) */

void FUN_000c008c(void)

{
  byte bVar1;
  uint uVar2;
  
  if (B_stend == '\0') {
    fns = 0x40;
    nsactr1 = 0x80;
    nsactr2 = 0x80;
    DAT_005b8258 = 0xffff;
    DAT_005b825c = 0xffff;
  }
  else if (fktns == 0) {
    fns = 0x40;
  }
  else {
    if ((B_hst & 1) == 0) {
      if (B_frz_hub == 0) {
        uVar2 = (int)((uint)DAT_005b8272 * (uint)DAT_005b8265) >> 7;
        if (B_wks != '\0') {
          uVar2 = (int)(uVar2 * DAT_005b8263) >> 7;
        }
      }
      else {
        uVar2 = (int)((uint)DAT_005b8271 * (uint)DAT_005b8264) >> 7;
        if (B_wks != '\0') {
          uVar2 = (int)(uVar2 * DAT_005b8262) >> 7;
        }
      }
    }
    else {
      uVar2 = (uint)DAT_005b8261;
    }
    if (B_staa == '\0') {
      if ((DAT_005b8251 & 1) == 0) {
        DAT_005b8254 = ZDGZA1;
      }
      else {
        DAT_005b8254 = ZDGZA2;
      }
      if (DAT_005b825e == DAT_005b8254) {
        if ((B_hst & 1) == 0) {
          if ((DAT_005b8251 & 1) == 0) {
            fzans1 = DAT_005b8268;
          }
          else {
            fzans1 = DAT_005b8267;
          }
        }
        else if ((DAT_005b8251 & 1) == 0) {
          fzans1 = DAT_005b8269;
        }
        else {
          fzans1 = DAT_005b826a;
        }
        DAT_005b8258 = FUN_000a7fe8((uint)fzans1 << 6,0,DAT_005b8258);
        nsactr1 = (byte)((ushort)DAT_005b8258 >> 9);
      }
      if (DAT_005b8266 >> 1 < nsactr1) {
        DAT_005b8251 = DAT_005b8251 & 0xfe;
      }
      else {
        DAT_005b8251 = DAT_005b8251 & 0xfe | 1;
      }
      if (DAT_005b825e < DAT_005b8254) {
        DAT_005b825e = DAT_005b825e + 1;
      }
      else {
        DAT_005b825e = 1;
      }
      bVar1 = DAT_005b8251 >> 3 & 1;
      if (bVar1 == 0) {
        DAT_005b8255 = ZDGZA1VT;
      }
      else {
        DAT_005b8255 = ZDGZA2VT;
      }
      if (DAT_005b825f == DAT_005b8255) {
        if ((B_hst & 1) == 0) {
          if (bVar1 == 0) {
            fzans1vt = DAT_005b826d;
          }
          else {
            fzans1vt = DAT_005b826c;
          }
        }
        else if (bVar1 == 0) {
          fzans1vt = DAT_005b826e;
        }
        else {
          fzans1vt = DAT_005b826f;
        }
        DAT_005b825a = FUN_000a7fe8((uint)fzans1vt << 6,0,DAT_005b825a);
        nsactr1vt = (byte)((ushort)DAT_005b825a >> 9);
      }
      if (DAT_005b826b >> 1 < nsactr1vt) {
        DAT_005b8251 = DAT_005b8251 & 0xf7;
      }
      else {
        DAT_005b8251 = DAT_005b8251 & 0xf7 | 8;
      }
      if (DAT_005b825f < DAT_005b8255) {
        DAT_005b825f = DAT_005b825f + 1;
      }
      else {
        DAT_005b825f = 1;
      }
      if (B_frz_hub == 0) {
        nsactr = nsactr1vt;
      }
      else {
        nsactr = nsactr1;
      }
    }
    else {
      bVar1 = DAT_005b8251 >> 2 & 1;
      if (bVar1 == 0) {
        DAT_005b8254 = ZDGZA1;
      }
      else {
        DAT_005b8254 = ZDGZA2;
      }
      if (DAT_005b8260 == DAT_005b8254) {
        if (bVar1 == 0) {
          fzans2 = DAT_005b8257;
        }
        else {
          fzans2 = DAT_005b8256;
        }
        DAT_005b825c = FUN_000a7fe8((uint)fzans2 << 6,0,DAT_005b825c);
        nsactr2 = (byte)((int)((uint)(byte)((ushort)DAT_005b825c >> 9) * (uint)DAT_005b8270) >> 7);
      }
      nsactr = nsactr2;
      if (DAT_005b8273 < DAT_005b825c._0_1_ >> 1) {
        DAT_005b8251 = DAT_005b8251 & 0xfb;
      }
      else {
        DAT_005b8251 = DAT_005b8251 & 0xfb | 4;
      }
      if (DAT_005b8260 < DAT_005b8254) {
        DAT_005b8260 = DAT_005b8260 + 1;
      }
      else {
        DAT_005b8260 = 1;
      }
    }
    uVar2 = (nsactr * uVar2 >> 8) * (uint)DAT_005b8274 >> 7;
    if (0xff < uVar2) {
      uVar2 = 0xff;
    }
    fktns = (byte)uVar2;
    uVar2 = (uVar2 & 0xff) + 0x40;
    if (0xff < uVar2) {
      uVar2 = 0xff;
    }
    fns = (byte)uVar2;
  }
  return;
}

