/*
 * Program: n42.bin
 * Function: FUN_00154c58
 * Entry: 00154c58
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00154c58(void)

{
  ushort local_20;
  ushort local_1c [2];
  ushort local_18 [2];
  ushort *local_14;
  
  local_20 = _B_bkcana;
  if ((DAT_003f9b84 & 1) == 0) {
    if ((DAT_003f9b84 & 2) == 0) {
      if ((DAT_003f9b84 & 4) != 0) {
        local_20 = _B_bkcana & 0xd0fc | 0x2002;
      }
    }
    else {
      local_20 = _B_bkcana & 0xd0fc | 0x2803;
    }
  }
  else {
    local_20 = _B_bkcana & 0xd0fc | 0x2103;
  }
  DAT_003f9b84 = DAT_003f9b84 & 0xf8;
  local_1c[0] = local_20;
  local_14 = local_1c;
  local_18[0] = local_20;
  func_0xff222958(9,local_18);
  return;
}

