/*
 * Program: n42.bin
 * Function: FUN_000e2aa8
 * Entry: 000e2aa8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000e2aa8(int param_1,ushort *param_2)

{
  uint uVar1;
  word wVar2;
  word wVar3;
  undefined4 uVar4;
  uint uVar5;
  
  wVar3 = wnwkwe_w;
  wVar2 = wnwkwa2_w;
  if (param_1 == 0) {
    if (((DAT_003fdf93 & 1) == 0) && ((DAT_003fde6f & 1) == 0)) {
      uVar5 = (uint)wnwkwe_w;
      *param_2 = wnwkwe_w;
      if ((synstate < 3) || (zrph_l <= DAT_005b9de4 + 1U)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      if (((int)(0x1c20 - (uint)_DAT_001c7c4e) < (int)uVar5) ||
         (uVar1 = 0x708 - _DAT_001c7c4e & 0xffff, uVar5 < uVar1)) {
        *param_2 = wVar3 + _DAT_001c7c2e;
      }
      else {
        if (uVar1 < uVar5) {
          uVar1 = 0xe10 - _DAT_001c7c4e & 0xffff;
          if (uVar5 < uVar1) {
            *param_2 = wVar3 + _DAT_001c7c30;
            goto LAB_000e2cf4;
          }
          if ((uVar1 < uVar5) && (uVar5 < (0x1518 - _DAT_001c7c4e & 0xffff))) {
            *param_2 = wVar3 + _DAT_001c7c32;
            goto LAB_000e2cf4;
          }
        }
        *param_2 = wVar3 + _DAT_001c7c34;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else if (param_1 == 1) {
    if (((DAT_003fdf95 & 1) == 0) && ((DAT_003fde6f & 1) == 0)) {
      uVar5 = (uint)wnwkwa2_w;
      *param_2 = wnwkwa2_w;
      if ((synstate < 3) || (zrph4_l <= DAT_005b9dd8 + 1U)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      if (((int)(0x1c20 - (uint)_DAT_001c7c50) < (int)uVar5) ||
         (uVar1 = 0x708 - _DAT_001c7c50 & 0xffff, uVar5 < uVar1)) {
        *param_2 = wVar2 + _DAT_001c7c36;
      }
      else {
        if (uVar1 < uVar5) {
          uVar1 = 0xe10 - _DAT_001c7c50 & 0xffff;
          if (uVar5 < uVar1) {
            *param_2 = wVar2 + _DAT_001c7c38;
            goto LAB_000e2cf4;
          }
          if ((uVar1 < uVar5) && (uVar5 < (0x1518 - _DAT_001c7c50 & 0xffff))) {
            *param_2 = wVar2 + _DAT_001c7c3a;
            goto LAB_000e2cf4;
          }
        }
        *param_2 = wVar2 + _DAT_001c7c3c;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
LAB_000e2cf4:
  if (-(int)(short)((short)(char)nwpos_tkor + (short)(char)nwpos_nkor) < (int)(uint)*param_2) {
    *param_2 = *param_2 + (short)(char)nwpos_tkor + (short)(char)nwpos_nkor;
  }
  else {
    *param_2 = 0;
  }
  return uVar4;
}

