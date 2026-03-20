/*
 * Program: n42.bin
 * Function: FUN_00175574
 * Entry: 00175574
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00175574(void)

{
  ushort local_18;
  ushort local_14 [2];
  ushort local_10 [2];
  ushort *local_c;
  
  local_18 = _DAT_003fdf84;
  if (DAT_003fddad != '\0') {
    DAT_003fdc74 = '\0';
  }
  if (((DAT_003f9b94 & 1) == 0) && (DAT_003fdc74 != '\0')) {
    if ((DAT_001c7ade < ub) && (DAT_003fdc74 != '\0')) {
      if (DAT_005b8d15 == '\0') {
        if (((DAT_005b8d14 == '\0') && (DAT_005b8d13 == '\0')) && (DAT_005b8d16 == '\0'))
        goto LAB_00175730;
      }
      else {
        local_18 = _DAT_003fdf84 & 0xf0fe | 0x801;
      }
      if (DAT_005b8d16 != '\0') {
        local_18 = local_18 & 0xf0fe | 0x401;
      }
      if (DAT_005b8d13 != '\0') {
        local_18 = local_18 & 0xf0fe | 0x201;
      }
      if (DAT_005b8d14 != '\0') {
        local_18 = local_18 & 0xf0fe | 0x101;
      }
      local_18 = local_18 & 0xdffd | 0x2002;
    }
  }
  else {
    local_18 = _DAT_003fdf84 & 0xd0fc | 0x2002;
  }
LAB_00175730:
  local_14[0] = local_18;
  local_c = local_14;
  local_10[0] = local_18;
  func_0xff222958(0x91,local_10);
  return;
}

