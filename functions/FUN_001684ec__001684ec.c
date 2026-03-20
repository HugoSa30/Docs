/*
 * Program: n42.bin
 * Function: FUN_001684ec
 * Entry: 001684ec
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001684ec(void)

{
  byte extraout_var;
  uint uVar1;
  ushort local_48;
  ushort local_44 [4];
  ushort local_3c;
  ushort local_38 [4];
  ushort *local_30;
  ushort local_2c [2];
  ushort *local_28;
  ushort local_24 [2];
  uint local_20;
  ushort *local_1c;
  ushort local_18 [2];
  ushort *local_14;
  
  if (DAT_003fddad != '\0') {
    DAT_003fdbcc = '\0';
    DAT_003fdbcd = '\0';
  }
  if ((DAT_001c1d8a == '\0') || (DAT_003fdbcd == '\0')) {
    if (DAT_003fdbcc != '\0') {
      local_48 = _DAT_003fdef6 & 0xd0fc | 0x2002;
      local_44[0] = local_48;
      local_28 = local_44;
      local_2c[0] = local_48;
      func_0xff222958(0x4a,local_2c);
      return;
    }
    if (B_desee == '\0') {
      return;
    }
    local_44[0] = _DAT_003fdef6;
    local_30 = local_44;
    local_38[0] = _DAT_003fdef6;
    FUN_00125cc0(&DAT_003fab58,local_38,10,2,10);
    if ((tkwpwm < _DAT_001c1d86) || (_DAT_001c1d88 < tkwpwm)) {
      DAT_005bb78d = 0;
      return;
    }
    if (DAT_005bb78d < 0xf) {
      DAT_005bb78d = DAT_005bb78d + 1;
      return;
    }
    if ((extraout_var & 0xf) == 4) {
      DAT_003fdbcc = 1;
      DAT_003fdbcd = 0;
      return;
    }
    DAT_003fdbcc = 1;
    DAT_003fdbcd = 1;
    return;
  }
  if (B_desee == '\0') {
    return;
  }
  local_44[0] = _DAT_003fdef6;
  local_1c = local_44;
  local_24[0] = _DAT_003fdef6;
  uVar1 = FUN_00125cc0(&DAT_003fab58,local_24,10,2,10);
  local_20._0_2_ = (ushort)(uVar1 >> 0x10);
  local_3c = local_20._0_2_;
  if ((DAT_003fdef7 >> 1 & 1) == 0) {
    if ((tkwpwm < _DAT_001c1d86) || (_DAT_001c1d88 < tkwpwm)) {
      DAT_005bb78c = 0;
    }
    else if (DAT_005bb78c < 5) {
      DAT_005bb78c = DAT_005bb78c + 1;
    }
    if (4 < DAT_005bb78c) goto LAB_001687a0;
  }
  if (((_DAT_003fdef6 & 1) == 0) && ((uVar1 & 0x10000) == 0)) {
    return;
  }
LAB_001687a0:
  local_44[0] = local_20._0_2_;
  local_14 = local_44;
  local_18[0] = local_20._0_2_;
  local_20 = uVar1;
  func_0xff222958(0x4a,local_18);
                    /* WARNING: Read-only address (ram,0x003fdef6) is written */
  return;
}

