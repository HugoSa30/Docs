/*
 * Program: n42.bin
 * Function: FUN_00169130
 * Entry: 00169130
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00169130(void)

{
  uint uVar1;
  ushort local_40;
  ushort local_3c [2];
  ushort local_38;
  ushort local_34 [2];
  ushort *local_30;
  ushort local_2c [2];
  uint local_28;
  ushort *local_24;
  ushort local_20 [2];
  ushort *local_1c;
  
  if (DAT_001c1d95 == '\0') {
    local_40 = _B_clteve & 0xd0fc | 0x2002;
    local_3c[0] = local_40;
    local_30 = local_3c;
    local_34[0] = local_40;
    func_0xff222958(0xac,local_34);
    return;
  }
  if (B_desee == '\0') {
    return;
  }
  local_3c[0] = _B_clteve;
  local_24 = local_3c;
  local_2c[0] = _B_clteve;
  uVar1 = FUN_00125cc0(&DAT_003fab6d,local_2c,7,2,10);
  local_28._0_2_ = (ushort)(uVar1 >> 0x10);
  local_38 = local_28._0_2_;
  if ((DAT_003fdfbb >> 1 & 1) == 0) {
    if (4 < DAT_003fab72) {
      DAT_003fab70 = '\x01';
    }
    if (4 < DAT_003fab73) {
      DAT_003fab71 = '\x01';
    }
    if (6 < tateist) {
      if (DAT_003fab71 == '\0') {
        DAT_003fab73 = 0;
      }
      if (DAT_003fab72 < 5) {
        DAT_003fab72 = DAT_003fab72 + 1;
      }
    }
    if (tateist == 0) {
      if (DAT_003fab70 == '\0') {
        DAT_003fab72 = 0;
      }
      if (DAT_003fab73 < 5) {
        DAT_003fab73 = DAT_003fab73 + 1;
      }
    }
    if ((DAT_003fab70 != '\0') && (DAT_003fab71 != '\0')) goto LAB_00169324;
  }
  if (((_B_clteve & 1) == 0) && ((uVar1 & 0x10000) == 0)) {
    return;
  }
LAB_00169324:
  local_3c[0] = local_28._0_2_;
  local_1c = local_3c;
  local_20[0] = local_28._0_2_;
  local_28 = uVar1;
  func_0xff222958(0xac,local_20);
                    /* WARNING: Read-only address (ram,0x003fdfba) is written */
  return;
}

