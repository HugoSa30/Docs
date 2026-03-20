/*
 * Program: n42.bin
 * Function: FUN_00168bd0
 * Entry: 00168bd0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00168bd0(void)

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
  
  if (DAT_001c1d8d == '\0') {
    local_40 = _B_sislpe & 0xd0fc | 0x2002;
    local_3c[0] = local_40;
    local_30 = local_3c;
    local_34[0] = local_40;
    func_0xff222958(0xa1,local_34);
    return;
  }
  if (B_desee == '\0') {
    return;
  }
  local_3c[0] = _B_sislpe;
  local_24 = local_3c;
  local_2c[0] = _B_sislpe;
  uVar1 = FUN_00125cc0(&DAT_003fab66,local_2c,0xc,2,10);
  local_28._0_2_ = (ushort)(uVar1 >> 0x10);
  local_38 = local_28._0_2_;
  if ((DAT_003fdfa5 >> 1 & 1) == 0) {
    if (4 < DAT_003fab6b) {
      DAT_003fab69 = '\x01';
    }
    if (4 < DAT_003fab6c) {
      DAT_003fab6a = '\x01';
    }
    if (B_slp == '\0') {
      if (DAT_003fab69 == '\0') {
        DAT_003fab6b = 0;
      }
      if (DAT_003fab6c < 5) {
        DAT_003fab6c = DAT_003fab6c + 1;
      }
    }
    else {
      if (DAT_003fab6a == '\0') {
        DAT_003fab6c = 0;
      }
      if (DAT_003fab6b < 5) {
        DAT_003fab6b = DAT_003fab6b + 1;
      }
    }
    if ((DAT_003fab69 != '\0') && (DAT_003fab6a != '\0')) goto LAB_00168dbc;
  }
  if (((_B_sislpe & 1) == 0) && ((uVar1 & 0x10000) == 0)) {
    return;
  }
LAB_00168dbc:
  local_3c[0] = local_28._0_2_;
  local_1c = local_3c;
  local_20[0] = local_28._0_2_;
  local_28 = uVar1;
  func_0xff222958(0xa1,local_20);
                    /* WARNING: Read-only address (ram,0x003fdfa4) is written */
  return;
}

