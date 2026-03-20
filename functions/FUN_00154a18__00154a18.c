/*
 * Program: n42.bin
 * Function: FUN_00154a18
 * Entry: 00154a18
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00154a18(void)

{
  ushort local_28;
  ushort local_24 [2];
  ushort local_20 [2];
  ushort *local_1c;
  
  local_28 = _B_sicvvt;
  if ((B_fgdcan == '\0') || (B_vdia1new != 0)) {
    DAT_005bb7da = 0;
LAB_00154a9c:
    DAT_003f9b80 = DAT_003f9b80 & 0xfb;
  }
  else {
    if (DAT_005bb7da < _DAT_001c0eca) {
      DAT_005bb7da = DAT_005bb7da + 1;
      goto LAB_00154a9c;
    }
    DAT_003f9b80 = DAT_003f9b80 | 4;
  }
  if ((B_fgdcan == '\0') || (B_vdia2new != 0)) {
    DAT_005bb7dc = 0;
  }
  else {
    if (_DAT_001c0eca <= DAT_005bb7dc) {
      DAT_003f9b80 = DAT_003f9b80 | 8;
      goto LAB_00154b0c;
    }
    DAT_005bb7dc = DAT_005bb7dc + 1;
  }
  DAT_003f9b80 = DAT_003f9b80 & 0xf7;
LAB_00154b0c:
  if ((DAT_003f9b80 & 0x20) == 0) {
    if (((((DAT_003f9b80 & 1) == 0) && ((DAT_003f9b80 & 2) == 0)) && ((DAT_003f9b80 & 4) == 0)) &&
       ((DAT_003f9b80 & 8) == 0)) {
      if ((DAT_003f9b80 & 0x10) != 0) {
        local_28 = _B_sicvvt & 0xd0fc | 0x2803;
      }
    }
    else {
      local_28 = _B_sicvvt & 0xd0fc | 0x2403;
    }
  }
  else {
    local_28 = _B_sicvvt & 0xd0fc | 0x2002;
  }
  DAT_003f9b80 = DAT_003f9b80 & 0xc0;
  local_24[0] = local_28;
  local_1c = local_24;
  local_20[0] = local_28;
  func_0xff222958(0xf,local_20);
  return;
}

