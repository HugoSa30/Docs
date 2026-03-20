/*
 * Program: n42.bin
 * Function: FUN_00196140
 * Entry: 00196140
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00196140(void)

{
  uint uVar1;
  uint uVar2;
  dword dVar3;
  uint uVar4;
  
  rktseg_w = rk2_w;
  if (rk2_w < rk_w) {
    rktseg_w = rk_w;
  }
  dVar3 = te2_l;
  if (te2_l < te_l) {
    dVar3 = te_l;
  }
  uVar2 = (uint)tvu_w;
  uVar4 = tseg_l / 10;
  if (0x200000 < uVar4) {
    uVar4 = 0x200000;
  }
  uVar1 = func_0xff21984c(&KFWTSEG,nmot_w,rktseg_w);
  if (dVar3 + uVar2 == 0) {
    teqout = 0xff;
  }
  else {
    uVar2 = (uVar4 * (uVar1 >> 5 & 0x7ff)) / (dVar3 + uVar2);
    if (uVar2 < 0x100) {
      teqout = (byte)uVar2;
    }
    else {
      teqout = 0xff;
    }
  }
  if (teqout < 0x80) {
    if ((uint)rlmxfak_w < (uint)_RLMXLESS) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)rlmxfak_w - (uint)_RLMXLESS;
    }
  }
  else {
    uVar2 = (uint)rlmxfak_w + (uint)_RLMXPLUS;
    if (0xffff < uVar2) {
      uVar2 = 0xffff;
    }
  }
  if ((uVar2 & 0xffff) < (uint)_RLMXFMN) {
    uVar2 = (uint)_RLMXFMN;
  }
  if ((uVar2 & 0xffff) < 0x8000) {
    rlmxfak_w = (word)uVar2;
  }
  else {
    rlmxfak_w = 0x8000;
  }
  if (_NTIMDRED < nmot_w) {
    uVar2 = (uint)rlugdob_w * (uint)rlmxfak_w >> 0xf;
    if (uVar2 < 0x10000) {
      rltimx_w = (word)uVar2;
    }
    else {
      rltimx_w = 0xffff;
    }
    if (rlmxfak_w < 0x8000) {
      B_temxon = 1;
    }
    else if (RLMXTEHYST < teqout) {
      B_temxon = 0;
    }
  }
  else {
    rltimx_w = rlugdob_w;
    B_temxon = 0;
  }
  rlumax_w = rltimx_w;
  if (dvvtrlmx_w < rltimx_w) {
    rlumax_w = dvvtrlmx_w;
  }
  return;
}

