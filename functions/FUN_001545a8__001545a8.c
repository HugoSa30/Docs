/*
 * Program: n42.bin
 * Function: FUN_001545a8
 * Entry: 001545a8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001545a8(void)

{
  ushort local_18;
  ushort local_14 [2];
  ushort local_10 [2];
  ushort *local_c;
  
  local_18 = _DAT_003fde78;
  if (((DAT_003fa5d0 >> 1 & 1) == 0) || ((DAT_003fa5d0 >> 3 & 1) == 0)) {
    if (((DAT_003fa5d0 & 1) != 0) || ((DAT_003fa5d0 >> 2 & 1) != 0)) {
      local_18 = _DAT_003fde78 & 0xd0fc | 0x2403;
      DAT_003fa5d0 = DAT_003fa5d0 & 0xfa;
    }
  }
  else {
    local_18 = _DAT_003fde78 & 0xf0fe;
    DAT_003fa5d0 = DAT_003fa5d0 & 0xf5;
  }
  if ((DAT_003fa5d0 >> 4 & 1) != 0) {
    local_18 = local_18 & 0xdffd | 0x2002;
    DAT_003fa5d0 = DAT_003fa5d0 & 0xef;
  }
  local_14[0] = local_18;
  local_c = local_14;
  local_10[0] = local_18;
  func_0xff222958(0xb,local_10);
  return;
}

