/*
 * Program: n42.bin
 * Function: FUN_00131ab0
 * Entry: 00131ab0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00131ab0(void)

{
  ushort uVar1;
  uint uVar2;
  byte bVar3;
  ushort local_18;
  ushort local_14 [2];
  ushort local_10 [2];
  ushort *local_c;
  
  uVar1 = _DAT_003fdf8c;
  local_18 = _DAT_003fdf8c;
  if (DAT_005b8d35 != '\0') {
    uVar2 = FUN_00123a9c(0);
    local_18._0_1_ = (byte)(uVar1 >> 8);
    if ((uVar2 & 3) == 3) {
      local_18 = uVar1 & 0xf0fe | 0x101;
    }
    else {
      bVar3 = local_18._0_1_ & 0xf;
      if (bVar3 == 1) {
        local_18 = uVar1 & 0xf0fe;
      }
    }
  }
  B_nvrbupok = 0;
  if ((B_pwf == '\0') && (B_eepwf == '\0')) {
    if (eeeExitStatus == '\0') {
      if ((local_18._0_1_ & 0xf) != 1) {
        local_18 = local_18 & 0xf0fe | 0x201;
      }
    }
    else if (eeeExitStatus == '\x01') {
      local_18 = local_18 & 0xf0fe;
      B_nvrbupok = 1;
    }
  }
  local_18 = local_18 & 0xdffd | 0x2002;
  local_14[0] = local_18;
  local_c = local_14;
  local_10[0] = local_18;
  func_0xff222958(0x95,local_10);
  return;
}

