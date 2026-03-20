/*
 * Program: n42.bin
 * Function: FUN_0016950c
 * Entry: 0016950c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0016950c(void)

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
  
  if (DAT_001c1d97 == '\0') {
    local_38 = _DAT_003fdef4 & 0xd0fc | 0x2002;
    local_34[0] = local_38;
    local_28 = local_34;
    local_2c[0] = local_38;
    func_0xff222958(0x49,local_2c);
  }
  else if (B_desee != '\0') {
    local_34[0] = _DAT_003fdef4;
    local_1c = local_34;
    local_24[0] = _DAT_003fdef4;
    uVar1 = FUN_00125cc0(&DAT_003fab78,local_24,DAT_0001c234,2,10);
    local_20._0_2_ = (ushort)(uVar1 >> 0x10);
    local_18[0] = local_20._0_2_;
    local_30 = local_20._0_2_;
    local_20 = uVar1;
    if ((DAT_003fdef5 >> 1 & 1) == 0) {
      if ((_DAT_001c1d98 < Vse_tv) && (Vse_tv < _DAT_001c1d9a)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      DAT_003fab7b = func_0xff221e78(&UNK_003fab7c,uVar2,5);
    }
    if ((((uVar1 & 0x10000) != 0) || ((_DAT_003fdef4 & 1) != 0)) ||
       (((DAT_003fdef5 >> 1 & 1) == 0 && (DAT_003fab7b != '\0')))) {
      local_34[0] = local_18[0];
      local_14 = local_34;
      func_0xff222958(0x49,local_18);
    }
  }
  return;
}

