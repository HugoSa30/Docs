/*
 * Program: n42.bin
 * Function: FUN_000c4ab4
 * Entry: 000c4ab4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c4ab4(void)

{
  int iVar1;
  uint uVar2;
  uint in_TBLr;
  
  if ((nmot < 0x65) || ((nmot < 0x70 && (DAT_003f9cda != '\0')))) {
    iVar1 = (int)DAT_005b9546 - (int)DAT_005b9548;
    if (iVar1 < -0x8000) {
      iVar1 = -0x8000;
    }
    else if (0x7fff < iVar1) {
      iVar1 = 0x7fff;
    }
    DAT_005b9544 = (short)iVar1;
    uVar2 = (in_TBLr >> 5) - (uint)_DAT_003f9cf2;
    _DAT_003f9cf4 = (undefined2)uVar2;
    _DAT_003f9cf2 = (ushort)(in_TBLr >> 5);
    _DAT_003f9cf6 = FUN_000b17f4(uVar2 & 0xffff,0x3200);
    uVar2 = FUN_000a7c80((uint)DAT_005b9542 * (uint)_DAT_003f9cf6 >> 8 & 0xffff,(int)DAT_005b9544,
                         (int)(short)_DAT_003f9d18,_DAT_003f9d18 & 0xffff,0,0,0x7fff,0xffff);
    _DAT_003f9d18 = (ushort)(uVar2 >> 0x10);
    DAT_005b9556 = _DAT_003f9d18;
    DAT_003f9cda = '\x01';
    iVar1 = (uint)_DAT_003f9d18 - (uint)nmot_w;
    if (iVar1 < -0x8000) {
      iVar1 = -0x8000;
    }
    else if (0x7fff < iVar1) {
      iVar1 = 0x7fff;
    }
    DAT_005b9552 = (short)iVar1;
    iVar1 = (int)DAT_005b9552 * ((uint)DAT_005b9193 * 0xa4 >> 5);
    _DAT_003f9d18 = uVar2;
    if (iVar1 < 0x8000) {
      if (iVar1 < -0x8000) {
        DAT_005b9548 = -0x8000;
      }
      else {
        DAT_005b9548 = (short)iVar1;
      }
    }
    else {
      DAT_005b9548 = 0x7fff;
    }
  }
  if (DAT_003fc104 == '\0') {
    dmar_w = 0;
    DAT_003f9cd4 = '\0';
    goto LAB_000c4d48;
  }
  iVar1 = (int)DAT_005b9552 - (int)DAT_005b954e;
  if (iVar1 < -0x8000) {
    iVar1 = -0x8000;
  }
  else if (0x7fff < iVar1) {
    iVar1 = 0x7fff;
  }
  DAT_005b954a = (short)iVar1;
  iVar1 = (int)DAT_005b954a * (uint)DAT_005b9192;
  if (iVar1 < 0x8000) {
    if (-0x8001 < iVar1) {
      dmar_w = (word)iVar1;
      goto LAB_000c4ccc;
    }
    dmar_w = 0x8000;
LAB_000c4cdc:
    if (_DAT_003f9cf0 <= (short)dmar_w) {
      if (DAT_003f9cd4 == '\0') {
        dmar_w = 0;
      }
      goto LAB_000c4d48;
    }
  }
  else {
    dmar_w = 0x7fff;
LAB_000c4ccc:
    if ((short)dmar_w <= _DAT_003f9cee) goto LAB_000c4cdc;
  }
  DAT_003f9cd4 = DAT_001c8c04;
LAB_000c4d48:
  if ((DAT_001c8bdc & 1) != 0) {
    if (DAT_003fc10d == '\0') {
      if (DAT_005b9558 < nmot_w) {
        if (DAT_005b9558 <= DAT_005b955a) {
          DAT_003fc10e = 1;
        }
      }
      else if (DAT_005b955a < DAT_005b9558) {
        DAT_003fc108 = 1;
      }
    }
    else {
      DAT_003fc10e = 0;
      DAT_003fc108 = 0;
    }
    DAT_005b955a = DAT_005b9558;
    DAT_005b9558 = nmot_w;
  }
  return;
}

