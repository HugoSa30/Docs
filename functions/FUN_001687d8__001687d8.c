/*
 * Program: n42.bin
 * Function: FUN_001687d8
 * Entry: 001687d8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001687d8(void)

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
  
  if ((DAT_001c1d8b == '\0') || (B_kovar == '\0')) {
    local_40 = _B_mnkose & 0xd0fc | 0x2002;
    local_3c[0] = local_40;
    local_30 = local_3c;
    local_34[0] = local_40;
    func_0xff222958(0x69,local_34);
    return;
  }
  if (B_desee == '\0') {
    return;
  }
  local_3c[0] = _B_mnkose;
  local_24 = local_3c;
  local_2c[0] = _B_mnkose;
  uVar1 = FUN_00125cc0(&DAT_003fab5b,local_2c,0xe,2,10);
  local_28._0_2_ = (ushort)(uVar1 >> 0x10);
  local_38 = local_28._0_2_;
  if ((DAT_003fdf35 >> 1 & 1) == 0) {
    if (4 < DAT_003fab60) {
      DAT_003fab5e = '\x01';
    }
    if (4 < DAT_003fab61) {
      DAT_003fab5f = '\x01';
    }
    if (B_koe == '\0') {
      if (DAT_003fab5e == '\0') {
        DAT_003fab60 = 0;
      }
      if (DAT_003fab61 < 5) {
        DAT_003fab61 = DAT_003fab61 + 1;
      }
    }
    else {
      if (DAT_003fab5f == '\0') {
        DAT_003fab61 = 0;
      }
      if (DAT_003fab60 < 5) {
        DAT_003fab60 = DAT_003fab60 + 1;
      }
    }
    if ((DAT_003fab5e != '\0') && (DAT_003fab5f != '\0')) goto LAB_001689d4;
  }
  if (((_B_mnkose & 1) == 0) && ((uVar1 & 0x10000) == 0)) {
    return;
  }
LAB_001689d4:
  local_3c[0] = local_28._0_2_;
  local_1c = local_3c;
  local_20[0] = local_28._0_2_;
  local_28 = uVar1;
  func_0xff222958(0x69,local_20);
                    /* WARNING: Read-only address (ram,0x003fdf34) is written */
  return;
}

