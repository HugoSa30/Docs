/*
 * Program: n42.bin
 * Function: FUN_000ef990
 * Entry: 000ef990
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000efa28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ef990(void)

{
  undefined2 uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  
  uVar3 = calc_value_from_x_y(&DAT_001c8828,nmot_w,_rl_w);
  uVar4 = calc_value_from_y(&DAT_001c8804,evhubi_w);
  uVar3 = (uVar3 & 0xffff) + (uVar4 & 0xffff);
  if (uVar3 < 0x10000) {
    mdsw_w = (word)uVar3;
  }
  else {
    mdsw_w = 0xffff;
  }
  uVar3 = (uint)_DAT_003fb350 + (uint)mdsw_w;
  if (0xffff < uVar3) {
    uVar3 = 0xffff;
  }
  iVar6 = (uVar3 & 0xffff) + (int)_DAT_003fb352;
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  else if (0xffff < iVar6) {
    iVar6 = 0xffff;
  }
  mds_w = (word)iVar6;
  uVar3 = calc_value_from_x_y(&DAT_001c89a4,_rl_w,nmot_w);
  iVar6 = ((int)((uVar3 & 0xffff) * (int)(short)dmvad_w) >> 0xf) + (uint)mds_w;
  if (iVar6 < 0xffff) {
    if (iVar6 < 1) {
      mdsvad_w = 0;
    }
    else {
      mdsvad_w = (word)iVar6;
    }
  }
  else {
    mdsvad_w = 0xffff;
  }
  uVar3 = (uint)mdsvad_w + (uint)mdverb_w;
  if (uVar3 < 0xffff) {
    mdverl_w = (word)uVar3;
  }
  else {
    mdverl_w = 0xffff;
  }
  if (S_mdversta == '\0') {
    uVar3 = (uint)mdwan_w + ((int)(uint)mdsvad_w >> 1);
  }
  else {
    uVar3 = (uint)mdwan_w + (uint)(mdverl_w >> 1);
  }
  if (uVar3 < 0x8000) {
    if ((int)uVar3 < -0x7fff) {
      uVar3 = 0xffff8000;
    }
  }
  else {
    uVar3 = 0x7fff;
  }
  uVar5 = (ushort)uVar3;
  if (B_llrein == '\0') {
    _DAT_003fb34e = 0;
    _DAT_003fb34c = uVar5;
  }
  else {
    uVar1 = 0;
    uVar2 = 0;
    FUN_000a7f84((uint)ZFMDVERL << 8,(int)(short)uVar5,(int)(short)_DAT_003fb34c,
                 _DAT_003fb34c & 0xffff);
    _DAT_003fb34c = uVar2;
    _DAT_003fb34e = uVar1;
  }
  mdverf_w = _DAT_003fb34c * 2;
  if (((B_sa == '\0') && (B_llrein != '\0')) && ((CNFMDVER & 1) == 0)) {
    iVar6 = (int)(short)uVar5 - (uint)_DAT_003fb34c;
    if (iVar6 < -0x8000) {
      iVar6 = -0x8000;
    }
    else if (0x7fff < iVar6) {
      iVar6 = 0x7fff;
    }
    dmverl_w = (word)iVar6;
  }
  else {
    dmverl_w = 0;
  }
  return;
}

