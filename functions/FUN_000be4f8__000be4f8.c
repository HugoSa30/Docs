/*
 * Program: n42.bin
 * Function: FUN_000be4f8
 * Entry: 000be4f8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000be4f8(void)

{
  word wVar1;
  uint uVar2;
  int iVar3;
  undefined2 local_20;
  
  if ((B_stend == '\0') && (S_MSDKIST == '\0')) {
    if (S_HUBINST == '\0') {
      msndk_w = calc_value_from_x_y(&KFMSNVVT,evhubs_w,nmot_w);
    }
    else {
      msndk_w = calc_value_from_x_y(&KFMSNVVT,evhubin_w,nmot_w);
    }
    uVar2 = ((uint)msndk_w * (uint)ftvdk >> 7) * (uint)fpvdkds_w >> 0xe;
    if (uVar2 < 0x10000) {
      msdk_w = (word)uVar2;
    }
    else {
      msdk_w = 0xffff;
    }
  }
  pspvdk_w = FUN_000a7b40((int)(uint)_ps_w >> 1,(_ps_w & 1) << 0xf,pvdk_w);
  pspvdkugn_w = calc_value_from_y(&PSPVDKUGN,nmot_w);
  pspvdb_w = pspvdkugn_w;
  if (pspvdk_w < pspvdkugn_w) {
    pspvdb_w = pspvdk_w;
  }
  if (B_stend == '\0') {
    uVar2 = (uint)nmot_w;
    if (uVar2 < _NRLMNIST) {
      uVar2 = (uint)_NRLMNIST;
    }
    umsrln_w = (word)(uVar2 * KUMSRL >> 8);
  }
  else {
    umsrln_w = (word)((uint)nmot_w * (uint)KUMSRL >> 8);
  }
  uVar2 = ((uint)msdk_w + (uint)mste & 0xffff) * 0x2155;
  local_20 = (undefined2)(uVar2 >> 0x10);
  rldvs_w = FUN_000a7b40(local_20,uVar2 & 0xffff,umsrln_w);
  if (((DAT_003fab9d & 1) == 0) || ((DAT_003fab9d >> 1 & 1) != 0)) {
    drllad_w = 0;
  }
  if (((B_sidk & 1) == 0) || ((B_silm & 1) == 0)) {
    wVar1 = rldvs_w;
    if ((DAT_003fabb1 != '\0') && (wVar1 = rldvs_w, B_ehfm == '\0')) {
      uVar2 = ((uint)_mshfm_w + (uint)mste & 0xffff) * 0x2155;
      iVar3 = (int)(short)drllad_w;
      local_20 = (undefined2)(uVar2 >> 0x10);
      uVar2 = FUN_000a7b40(local_20,uVar2 & 0xffff,umsrln_w);
      iVar3 = (uVar2 & 0xffff) - iVar3;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (0xffff < iVar3) {
        iVar3 = 0xffff;
      }
      wVar1 = (word)iVar3;
    }
  }
  else {
    uVar2 = FUN_000a87cc(&RLNOT,nmot);
    wVar1 = (word)((uVar2 & 0xff) << 5);
  }
  rlroh_w = wVar1;
  return;
}

