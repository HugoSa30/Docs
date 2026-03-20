/*
 * Program: n42.bin
 * Function: FUN_001783d8
 * Entry: 001783d8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001783d8(void)

{
  ushort local_18;
  ushort local_14 [2];
  ushort local_10 [2];
  ushort *local_c;
  
  local_18 = _DAT_003fdf3c;
  if (DAT_001c7f4a == '\0') {
    local_18 = _DAT_003fdf3c & 0xd0fc | 0x2002;
  }
  else {
    if (DAT_003fc078 == '\0') {
      local_18 = _DAT_003fdf3c & 0xf0fe;
    }
    else {
      if (DAT_003fc079 == '\0') goto LAB_001784c4;
      local_18 = _DAT_003fdf3c & 0xf0fe | 0x801;
    }
    if (DAT_003fc079 != '\0') {
      local_18 = local_18 & 0xdffd | 0x2002;
    }
  }
LAB_001784c4:
  local_14[0] = local_18;
  local_c = local_14;
  local_10[0] = local_18;
  func_0xff222958(0x6d,local_10);
  return;
}

