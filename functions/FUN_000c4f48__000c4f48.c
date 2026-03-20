/*
 * Program: n42.bin
 * Function: FUN_000c4f48
 * Entry: 000c4f48
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000c4f48(void)

{
  uint uVar1;
  int iVar2;
  
  if ((B_zwvz == '\0') && (dmar_w == 0)) {
    B_zwvs = 0;
  }
  else {
    B_zwvs = 1;
  }
  if (B_zwvz == '\0') {
    uVar1 = (uint)(mibas_w >> 1) + (int)(short)dmar_w;
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    else if (0xffff < (int)uVar1) {
      uVar1 = 0xffff;
    }
  }
  else {
    uVar1 = (uint)misolv_w;
    if ((uint)mibas_w < (uint)misolv_w) {
      uVar1 = (uint)mibas_w;
    }
    iVar2 = (int)(short)dmar_w + (int)(short)dmllrz_w;
    if (iVar2 < -0x8000) {
      iVar2 = -0x8000;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    uVar1 = ((int)uVar1 >> 1) + (int)(short)iVar2;
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    else if (0xffff < (int)uVar1) {
      uVar1 = 0xffff;
    }
  }
  if ((uVar1 & 0xffff) < 0x8000) {
    mizsolv_w = (short)uVar1 * 2;
  }
  else {
    mizsolv_w = 0xffff;
  }
  if (B_mibeg == '\0') {
    mizsol_w = mizsolv_w;
  }
  else {
    mizsol_w = miszul_w;
  }
  return;
}

