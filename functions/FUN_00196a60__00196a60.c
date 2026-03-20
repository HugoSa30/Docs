/*
 * Program: n42.bin
 * Function: FUN_00196a60
 * Entry: 00196a60
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00196a60(void)

{
  undefined4 uVar1;
  ushort uVar2;
  short sVar3;
  int unaff_r30;
  uint uVar4;
  
  if ((B_vvtno_an == '\0') || (uVar2 = _DAT_001c3b24, B_nmot == '\0')) {
    uVar2 = 0x708;
  }
  dvvtwnkmx = exwnkrbt_w;
  if (uVar2 < exwnkrbt_w) {
    dvvtwnkmx = uVar2;
  }
  if ((DAT_005b87ce == '\0') && ((B_bt == '\0' || (B_btvvta == '\0')))) {
    exwnkrbt_w = 0x708;
    return;
  }
  if ((B_bt != '\0') && (B_btvvta != '\0')) {
    if ((B_vvtno_an == '\0') && ((vvt_errst == '\0' && (DAT_005b8e8f == '\0')))) {
      sVar3 = 1;
    }
    else {
      sVar3 = 0;
    }
    unaff_r30 = (int)sVar3;
    if (unaff_r30 != 0) {
      uVar1 = 1;
      goto LAB_00196b64;
    }
  }
  uVar1 = 0;
LAB_00196b64:
  DAT_003fac3a = func_0xff221f64(&UNK_003fac3c,uVar1,_DAT_001c3b3a);
  if ((B_bt == '\0') || (B_btvvta == '\0')) {
    DAT_005b87e6 = 0x708;
    dvvttestat = 6;
  }
  else if (unaff_r30 == 0) {
    DAT_005b87e6 = 0x708;
    dvvttestat = 1;
  }
  else {
    dvvttestat = 0;
    B_vvtnotl1 = 1;
    DAT_005b87e6 = (ushort)((uint)vvtaet * 0x1c232 >> 0xe);
  }
  if ((int)(uint)_DAT_001c3b28 < (int)((uint)DAT_005b87e6 - (uint)exwnkrbt_w)) {
    uVar4 = (uint)exwnkrbt_w + (uint)_DAT_001c3b28;
    if (0xffff < uVar4) {
      uVar4 = 0xffff;
    }
    exwnkrbt_w = (word)uVar4;
  }
  else {
    exwnkrbt_w = DAT_005b87e6;
  }
                    /* WARNING: Read-only address (ram,0x005b8e8f) is written */
  DAT_005b87ce = DAT_003fac3a;
  return;
}

