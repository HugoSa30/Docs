/*
 * Program: n42.bin
 * Function: FUN_001696dc
 * Entry: 001696dc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001696dc(void)

{
  uint uVar1;
  undefined4 uVar2;
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
  
  if (DAT_001c1d9c == '\0') {
    local_38 = _DAT_003fde6a & 0xd0fc | 0x2002;
    local_34[0] = local_38;
    local_28 = local_34;
    local_2c[0] = local_38;
    func_0xff222958(4,local_2c);
  }
  else if (B_desee != '\0') {
    local_34[0] = _DAT_003fde6a;
    local_1c = local_34;
    local_24[0] = _DAT_003fde6a;
    uVar1 = FUN_00125cc0(&DAT_003fab7d,local_24,DAT_0001c238,2,10);
    local_20._0_2_ = (ushort)(uVar1 >> 0x10);
    local_18[0] = local_20._0_2_;
    local_30 = local_20._0_2_;
    local_20 = uVar1;
    if ((DAT_003fde6b >> 1 & 1) == 0) {
      if ((_DAT_001c1d98 < DAT_005b8bca) && (DAT_005b8bca < _DAT_001c1d9a)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      DAT_003fab80 = func_0xff221e78(&UNK_003fab81,uVar2,5);
    }
    if ((((uVar1 & 0x10000) != 0) || ((_DAT_003fde6a & 1) != 0)) ||
       (((DAT_003fde6b >> 1 & 1) == 0 && (DAT_003fab80 != '\0')))) {
      local_34[0] = local_18[0];
      local_14 = local_34;
      func_0xff222958(4,local_18);
    }
  }
  return;
}

