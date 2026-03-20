/*
 * Program: n42.bin
 * Function: FUN_00154704
 * Entry: 00154704
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00154704(void)

{
  ushort local_18;
  ushort local_14 [2];
  ushort local_10 [2];
  ushort *local_c;
  
  local_18 = _DAT_003fde7a;
  if ((DAT_003fa5d8 >> 1 & 1) == 0) {
    if ((DAT_003fa5d8 & 1) != 0) {
      local_18 = _DAT_003fde7a & 0xd0fc | 0x2403;
      DAT_003fa5d8 = DAT_003fa5d8 & 0xfe;
    }
  }
  else {
    local_18 = _DAT_003fde7a & 0xf0fe;
    DAT_003fa5d8 = DAT_003fa5d8 & 0xfd;
  }
  if ((DAT_003fa5d8 >> 2 & 1) != 0) {
    local_18 = local_18 & 0xdffd | 0x2002;
    DAT_003fa5d8 = DAT_003fa5d8 & 0xfb;
  }
  local_14[0] = local_18;
  local_c = local_14;
  local_10[0] = local_18;
  func_0xff222958(0xc,local_10);
  return;
}

