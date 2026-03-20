/*
 * Program: n42.bin
 * Function: FUN_00179b40
 * Entry: 00179b40
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x00179bb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00179b40(void)

{
  uint uVar1;
  int iVar2;
  
  DAT_005b91b6 = (char)((ushort)_DAT_003fb3e4 >> 8);
  if (DAT_005b91b6 < '\x01') {
    DAT_005b9612 = 0;
    DAT_005b9618 = DAT_005b930a;
  }
  else {
    DAT_005b9612 = (short)DAT_005b91b6 * (ushort)DAT_001c9c09;
    uVar1 = (uint)DAT_005b930a + (uint)DAT_005b9612;
    if (0xffff < uVar1) {
      uVar1 = 0xffff;
    }
    DAT_005b9618 = (ushort)uVar1;
  }
  uVar1 = (uint)DAT_005b9618;
  iVar2 = _VMAX - uVar1;
  if (iVar2 < -0x8000) {
    iVar2 = -0x8000;
  }
  else if (0x7fff < iVar2) {
    iVar2 = 0x7fff;
  }
  DAT_005b9614 = (short)iVar2;
  if ((DAT_003fb3e6 & 1) == 0) {
LAB_00179c68:
    if (uVar1 < _VMAX) {
      if ((DAT_003fb3e6 & 1) == 0) goto LAB_00179f20;
LAB_00179d94:
      if ((_VMAX <= uVar1) && (DAT_001c9c00 <= nmot)) {
        uVar1 = (uint)DAT_001c9c0c * 0x290;
        if (0xfffe < uVar1) {
          uVar1 = 0xffff;
        }
        DAT_005b960e = func_0xff217c10(uVar1 & 0xffff,(int)DAT_005b9614,(int)DAT_005b960e,
                                       (int)(short)((ushort)MDIMX * -0x80),(ushort)MDIMX << 7);
      }
    }
    else {
      DAT_003fb3e6 = DAT_003fb3e6 | 1;
      if ((DAT_001c9bec & 1) == 0) {
        DAT_005b9e10 = func_0xff21b248(&DAT_001c9c0e,_rl_w);
        DAT_005b9e0c = func_0xff21b184(&DAT_001c9c04,(int)DAT_005b91b6);
        DAT_005b91b8 = func_0xff21ae98(&DAT_001c9bf0,_DAT_001c9c0e,DAT_005b9e0c,DAT_005b9e10);
        iVar2 = (uint)(miist_w >> 9) - (uint)(DAT_005b91b8 >> 1);
        if (iVar2 < -0x80) {
          iVar2 = -0x80;
        }
        else if (0x7f < iVar2) {
          iVar2 = 0x7f;
        }
        DAT_005b91b9 = (char)iVar2;
        iVar2 = (int)DAT_005b91b9 - (uint)(mifab_w >> 9);
        if (iVar2 < -0x80) {
          iVar2 = -0x80;
        }
        else if (0x7f < iVar2) {
          iVar2 = 0x7f;
        }
        DAT_005b91b7 = (char)iVar2;
        DAT_005b960e = (short)((int)DAT_005b91b7 << 8);
      }
      else {
        DAT_005b960e = 0;
      }
    }
  }
  else {
    if (_VMAX < uVar1) {
      if ((DAT_003fb3e6 & 1) == 0) goto LAB_00179c68;
      goto LAB_00179d94;
    }
    DAT_003fb3e6 = DAT_003fb3e6 & 0xfe;
  }
  if (((DAT_003fb3e6 & 1) != 0) && (DAT_001c9c00 <= nmot)) {
    iVar2 = (int)DAT_005b9614 * (uint)DAT_001c9c0a;
    if (iVar2 < 0x7fff) {
      if (iVar2 < -0x7fff) {
        DAT_005b9610 = -0x8000;
      }
      else {
        DAT_005b9610 = (short)iVar2;
      }
    }
    else {
      DAT_005b9610 = 0x7fff;
    }
    iVar2 = (int)DAT_005b9610 + (int)DAT_005b960e;
    if (iVar2 < -0x8000) {
      iVar2 = -0x8000;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    uVar1 = (uint)(mifab_w >> 1) + (int)(short)iVar2;
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    else if (0xffff < (int)uVar1) {
      uVar1 = 0xffff;
    }
    if ((uVar1 & 0xffff) <= (uint)MDIMX << 7) {
      DAT_003fc131 = 1;
      mivmx_w = (short)uVar1 * 2;
      return;
    }
    DAT_003fc131 = 1;
    mivmx_w = (ushort)MDIMX << 8;
    return;
  }
LAB_00179f20:
  mivmx_w = (ushort)MDIMX << 8;
  DAT_003fc131 = 0;
  return;
}

