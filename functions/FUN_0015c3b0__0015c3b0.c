/*
 * Program: n42.bin
 * Function: FUN_0015c3b0
 * Entry: 0015c3b0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015c3b0(void)

{
  bool bVar1;
  ushort local_28;
  ushort local_24;
  ushort local_20 [2];
  ushort local_1c [2];
  ushort *local_18;
  ushort local_14 [2];
  ushort *local_10;
  
  local_28 = _DAT_003fdf8a;
  local_24 = _DAT_003fde6e;
  if (B_nmin == '\0') {
    local_28 = _DAT_003fdf8a & 0xd0fc | 0x2002;
  }
  else {
    if ((zrph_l - DAT_005b9d68 < (uint)_DAT_001c1b40) &&
       (zrph4_l - DAT_005b9d64 < (uint)_DAT_001c1b40)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_28 = _DAT_003fdf8a & 0xd0fc | 0x2403;
    }
  }
  if (DAT_003faa8a == '\0') {
    if (DAT_003faa8b != '\0') {
      local_24 = _DAT_003fde6e & 0xf0fe | 0x801;
      DAT_003faa8b = '\0';
    }
  }
  else {
    local_24 = _DAT_003fde6e & 0xf0fe;
    DAT_003faa8a = '\0';
    DAT_003faa8b = '\0';
  }
  if (DAT_003faa8c != '\0') {
    local_24 = local_24 & 0xdffd | 0x2002;
  }
  if (((local_28 & 1) == 0) && ((local_24 & 1) == 0)) {
    B_nldg = 0;
  }
  else {
    B_nldg = 1;
  }
  local_20[0] = local_28;
  local_1c[0] = local_28;
  local_18 = local_20;
  func_0xff222958(0x94,local_1c);
  local_20[0] = local_24;
  local_14[0] = local_24;
  local_10 = local_20;
  func_0xff222958(6,local_14);
  return;
}

