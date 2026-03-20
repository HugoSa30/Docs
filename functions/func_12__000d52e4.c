/*
 * Program: n42.bin
 * Function: func_12
 * Entry: 000d52e4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_12(void)

{
  undefined4 uVar1;
  short sVar4;
  int iVar2;
  uint uVar3;
  int extraout_r4;
  int iVar5;
  short local_18;
  word wStack_16;
  
  uVar1 = FUN_000b167c(tesum_l,0x27fe);
  sVar4 = calc_value_from_y_2(&FRLFSDP,(int)(short)dps_w);
  iVar2 = FUN_000b1798(uVar1,sVar4 + 0x8000);
  uVar3 = calc_value_from_y(&KLKRKTE,rk_w);
  uVar3 = (int)(short)rkte_w * (uVar3 & 0xffff);
  FUN_000afc90(((int)uVar3 >> 0x1f) * 0x3a957 + (int)((ulonglong)uVar3 * 0x3a957 >> 0x20),
               uVar3 * 0x3a957,0,0x2000000);
  if (extraout_r4 < -0x8000) {
    iVar5 = -0x8000;
  }
  else {
    iVar5 = extraout_r4;
    if (0x7fff < extraout_r4) {
      iVar5 = 0x7fff;
    }
  }
  iVar2 = iVar2 + iVar5;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0xffff < iVar2) {
    iVar2 = 0xffff;
  }
  te_ges = (word)iVar2;
  uVar1 = FUN_000b1798((uint)_FKVAUM * ((int)kva_korr + 1000U & 0xffff),1000);
  iVar2 = FUN_000b167c(uVar1,te_ges);
  uVar3 = iVar2 + (uint)kvarest;
  if (uVar3 < kvarest) {
    uVar3 = 0xffffffff;
  }
  local_18 = (short)(uVar3 >> 0x10);
  kvaverbr = kvaverbr + local_18;
  wStack_16 = (word)uVar3;
  kvarest = wStack_16;
  return;
}

