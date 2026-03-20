/*
 * Program: n42.bin
 * Function: FUN_000e2f1c
 * Entry: 000e2f1c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e2f1c(void)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_r30;
  uint unaff_r31;
  uint local_30 [2];
  undefined2 local_28;
  
  if (DAT_003f9b9a < 2) {
    DAT_003f9b9a = DAT_003f9b9a + 1;
  }
  else {
    DAT_003f9b9a = 0;
  }
  uVar6 = (uint)DAT_003f9b9a;
  if (uVar6 == 0) {
    if ((DAT_003fdfc1 & 1) == 0) {
      unaff_r31 = (uint)tmot * 3 >> 2;
      if (0xfffe < unaff_r31) {
        unaff_r31 = 0xffff;
      }
    }
    else {
      unaff_r31 = 0xff;
    }
    unaff_r30 = 0xff;
  }
  else if (uVar6 == 1) {
    unaff_r31 = (uint)DAT_003f9b9b;
    unaff_r30 = 0xff;
  }
  else if (uVar6 == 2) {
    unaff_r31 = (uint)DAT_003f9b9c;
    if (DAT_005b9002 == -0x7f) {
      unaff_r30 = 0xff;
    }
    else {
      iVar4 = DAT_005b9002 + 0x28;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0xff < iVar4) {
        iVar4 = 0xff;
      }
      unaff_r30 = iVar4 * 2 & 0xff;
    }
  }
  local_30[0] = (uint)CONCAT21(nmot_w,B_kl15) | uVar6 << 0x1c | 0xf0000fc;
  func_0x010340a0(0x1b,local_30);
  local_30[0] = unaff_r31 & 0xffff | (unaff_r30 & 0xffff) << 8 | 0xffff0000;
  func_0x010340a0(0x1c,local_30);
  bVar1 = B_vvtslow != 0;
  uVar6 = (uint)exwinks_w + (uint)_DAT_001c7c66;
  if ((uint)dvvtwnkmx < (uint)exwinks_w + (uint)_DAT_001c7c66) {
    uVar6 = (uint)dvvtwnkmx;
  }
  if (0x6ea < uVar6) {
    uVar6 = 0x6ea;
  }
  uVar6 = (uVar6 << 0x10) / 0x6ea;
  if (0xfffe < uVar6) {
    uVar6 = 0xfffe;
  }
  vvt_sw = (word)uVar6;
  uVar5 = (uint)DAT_005b8e1e;
  sVar3 = (ushort)swvvtnot * 0x40 + (ushort)dme_errfb * 0x10 + (ushort)DAT_005b8e82 +
          (vvt_sw & 0xff) + ((ushort)(uVar6 >> 8) & 0xff) + (ushort)bVar1 * 0x40 +
          (ushort)DAT_005b8e1e * 8 + (ushort)vvtfkt + 0x402;
  local_28._0_1_ = (char)((ushort)sVar3 >> 8);
  local_28._1_1_ = (char)sVar3;
  DAT_005b8e80 = local_28._0_1_ + (char)local_28;
  local_30[0] = (uint)CONCAT11(DAT_005b8e82,DAT_005b8e80) | (uint)dme_errfb << 0xc |
                (uint)swvvtnot << 0xe | uVar6 << 0x10;
  local_28 = sVar3;
  func_0x010340a0(0x1d,local_30);
  local_30[0] = vvtfkt | 0xffffff00 | uVar5 << 3 | (uint)bVar1 << 6;
  cVar2 = func_0x010340a0(0x1e,local_30);
  if (cVar2 == '\0') {
    if (DAT_005b8e82 < 0xe) {
      DAT_005b8e82 = DAT_005b8e82 + 1;
    }
    else {
      DAT_005b8e82 = 0;
    }
  }
  return;
}

