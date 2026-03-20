/*
 * Program: n42.bin
 * Function: FUN_000d2374
 * Entry: 000d2374
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000d2490) */
/* WARNING: Removing unreachable block (ram,0x000d24cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d2374(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = (uint)vroh_w;
  if (uVar5 == 0) {
    if (vfzroh_w != 0) {
      iVar4 = (uint)vfzroh_w - (uint)_DVFZBEG;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0xffff < iVar4) {
        iVar4 = 0xffff;
      }
      vfzroh_w = (word)iVar4;
    }
  }
  else {
    uVar3 = (uint)vfzroh_w;
    if (uVar3 != uVar5) {
      if (uVar5 < uVar3) {
        uVar2 = uVar3 - _DVFZBEG;
        if ((int)uVar2 < 0) {
          uVar2 = 0;
        }
        else if (0xffff < (int)uVar2) {
          uVar2 = 0xffff;
        }
        if (uVar5 < (uVar2 & 0xffff)) {
          iVar4 = uVar3 - _DVFZBEG;
          if (iVar4 < 0) {
            iVar4 = 0;
          }
          else if (0xffff < iVar4) {
            iVar4 = 0xffff;
          }
          vfzroh_w = (word)iVar4;
        }
        else {
          vfzroh_w = vroh_w;
        }
      }
      else {
        uVar2 = uVar3 + _DVFZBEG;
        if (0xffff < uVar2) {
          uVar2 = 0xffff;
        }
        if ((uVar2 & 0xffff) < uVar5) {
          uVar3 = uVar3 + _DVFZBEG;
          if (0xffff < uVar3) {
            uVar3 = 0xffff;
          }
          vfzroh_w = (word)uVar3;
        }
        else {
          vfzroh_w = vroh_w;
        }
      }
    }
  }
  B_vnull = vfzroh_w < _VFZMN;
  uVar3 = _DAT_003fb0f0 >> 0x10;
  _DAT_003fb0f0 = FUN_000a7f20(_ZFV,vfzroh_w,uVar3,_DAT_003fb0f0 & 0xffff);
  uVar1 = _DAT_003fb0f0;
  _DAT_003fb0f0 = (ushort)(_DAT_003fb0f0 >> 0x10);
  vfil_w = _DAT_003fb0f0;
  if (uVar5 < _VRFGRMN) {
    if (DAT_003fb0f4 < TFGRVRAB) {
      DAT_003fb0f4 = DAT_003fb0f4 + 1;
    }
    else {
      DAT_003fb0f5 = '\x01';
    }
  }
  else {
    DAT_003fb0f5 = '\0';
    DAT_003fb0f4 = 0;
  }
  if ((DAT_003fb0f5 == '\0') && ((DAT_003fdfdf & 1) == 0)) {
    vfzg_w = _DAT_003fb0f0;
    uVar5 = _DAT_003fb0f0 / 0xa0;
    if (0xff < uVar5) {
      uVar5 = 0xff;
    }
    vfzg = (byte)uVar5;
  }
  else {
    vfzg_w = 0;
    vfzg = 0;
  }
  iVar4 = _DAT_003fb0f0 - uVar3;
  if (iVar4 < -0x80) {
    iVar4 = -0x80;
  }
  else if (0x7f < iVar4) {
    iVar4 = 0x7f;
  }
  bfzgl_b = (byte)iVar4;
  _DAT_003fb0f0 = uVar1;
  return;
}

