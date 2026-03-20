/*
 * Program: n42.bin
 * Function: FUN_00168a0c
 * Entry: 00168a0c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00168a0c(void)

{
  uint uVar1;
  ushort local_38;
  ushort local_34 [2];
  ushort local_30;
  ushort local_2c [2];
  ushort *local_28;
  ushort local_24 [2];
  uint local_20;
  ushort *local_1c;
  ushort local_18 [2];
  ushort *local_14;
  
  if (DAT_001c1d8c == '\0') {
    local_38 = _Z_mle & 0xd0fc | 0x2002;
    local_34[0] = local_38;
    local_28 = local_34;
    local_2c[0] = local_38;
    func_0xff222958(0x93,local_2c);
    return;
  }
  if (B_desee == '\0') {
    return;
  }
  local_34[0] = _Z_mle;
  local_1c = local_34;
  local_24[0] = _Z_mle;
  uVar1 = FUN_00125cc0(&DAT_003fab62,local_24,0x18,2,10);
  local_20._0_2_ = (ushort)(uVar1 >> 0x10);
  local_30 = local_20._0_2_;
  if ((DAT_003fdf89 >> 1 & 1) == 0) {
    if ((taml < TAMLSMN) || (TAMLSMX < taml)) {
      DAT_003fab65 = 0;
    }
    else if (DAT_003fab65 < 5) {
      DAT_003fab65 = DAT_003fab65 + 1;
    }
    if (4 < DAT_003fab65) goto LAB_00168b98;
  }
  if (((_Z_mle & 1) == 0) && ((uVar1 & 0x10000) == 0)) {
    return;
  }
LAB_00168b98:
  local_34[0] = local_20._0_2_;
  local_14 = local_34;
  local_18[0] = local_20._0_2_;
  local_20 = uVar1;
  func_0xff222958(0x93,local_18);
                    /* WARNING: Read-only address (ram,0x003fdf88) is written */
  return;
}

