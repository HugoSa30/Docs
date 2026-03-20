/*
 * Program: n42.bin
 * Function: FUN_0016935c
 * Entry: 0016935c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0016935c(void)

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
  
  if (DAT_001c1d96 == '\0') {
    local_38 = _B_sivvte & 0xd0fc | 0x2002;
    local_34[0] = local_38;
    local_28 = local_34;
    local_2c[0] = local_38;
    func_0xff222958(0xbf,local_2c);
    return;
  }
  if (B_desee == '\0') {
    return;
  }
  local_34[0] = _B_sivvte;
  local_1c = local_34;
  local_24[0] = _B_sivvte;
  uVar1 = FUN_00125cc0(&DAT_003fab74,local_24,0x17,2,10);
  local_20._0_2_ = (ushort)(uVar1 >> 0x10);
  local_30 = local_20._0_2_;
  if ((DAT_003fdfe1 >> 1 & 1) == 0) {
    if ((int)(short)tavvtout_w - 1000U < 0x1f41) {
      if (DAT_003fab77 < 5) {
        DAT_003fab77 = DAT_003fab77 + 1;
      }
    }
    else {
      DAT_003fab77 = 0;
    }
    if (4 < DAT_003fab77) goto LAB_001694d4;
  }
  if (((_B_sivvte & 1) == 0) && ((uVar1 & 0x10000) == 0)) {
    return;
  }
LAB_001694d4:
  local_34[0] = local_20._0_2_;
  local_14 = local_34;
  local_18[0] = local_20._0_2_;
  local_20 = uVar1;
  func_0xff222958(0xbf,local_18);
                    /* WARNING: Read-only address (ram,0x003fdfe0) is written */
  return;
}

