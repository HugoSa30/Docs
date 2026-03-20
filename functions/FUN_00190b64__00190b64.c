/*
 * Program: n42.bin
 * Function: FUN_00190b64
 * Entry: 00190b64
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00190b64(void)

{
  undefined2 uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  
  if (B_autget == '\0') {
    miges_w = (ushort)MDIMX << 8;
    uVar2 = func_0xff217f84(_DAT_001c9940,(int)(short)ngas_w,(int)_DAT_003fb3cc,
                            _DAT_003fb3cc & 0xffff);
    _DAT_003fb3cc = (short)(uVar2 >> 0x10);
    DAT_005b95b8 = _DAT_003fb3cc;
    _DAT_003fb3cc = uVar2;
  }
  else if ((DAT_003fde7b & 1) == 0) {
    if (DAT_003fbeb6 == '\0') {
      miges_w = (ushort)MDIMX << 8;
    }
    else {
      miges_w = migs_w;
    }
  }
  else {
    miges_w = (ushort)DAT_001c9928 << 8;
  }
  DAT_003fc11c = _DAT_001c993c <= DAT_005b95b8;
  if ((B_autget != '\0') || ((bool)DAT_003fc11c)) {
    mibgr_w = (ushort)MDIMX << 8;
  }
  else {
    uVar3 = func_0xff2187cc(&DAT_001c992c,gangi);
    uVar4 = func_0xff2187cc(&DAT_001d22fc,nmot);
    uVar3 = (uVar3 & 0xff) * (uVar4 & 0xff);
    if (0x7fff < uVar3) {
      uVar3 = 0x7fff;
    }
    DAT_005b95b2 = uVar3 * 2;
    if (DAT_003fc11d == '\0') {
      DAT_005b95ae = 0x8000;
      _DAT_003fb3d0 = 0x80000000;
      DAT_005b95b0 = 0x8000;
      mibgr_w = DAT_005b95b2;
    }
    else {
      DAT_005b95ae = func_0xff217b40(uVar3,0,DAT_005b960c);
      uVar2 = func_0xff217f20(_DAT_001c993e,DAT_005b95ae,_DAT_003fb3d0,_DAT_003fb3d0 & 0xffff);
      _DAT_003fb3d0 = (undefined2)(uVar2 >> 0x10);
      uVar1 = _DAT_003fb3d0;
      DAT_005b95b0 = _DAT_003fb3d0;
      _DAT_003fb3d0 = uVar2;
      mibgr_w = func_0xff221800(DAT_005b95b2,uVar1);
    }
  }
  if ((milsol_w == mibgr_w) && (mibgr_w < mifafu_w)) {
    DAT_003fc11d = 1;
  }
  else {
    DAT_003fc11d = 0;
  }
  return;
}

