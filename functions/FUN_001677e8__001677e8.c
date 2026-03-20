/*
 * Program: n42.bin
 * Function: FUN_001677e8
 * Entry: 001677e8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001677e8(void)

{
  ushort local_20;
  ushort local_1c [2];
  ushort local_18 [2];
  ushort *local_14;
  
  local_20 = _B_clkuppl;
  if (B_autget == '\0') {
    if (((DAT_003fab39 == '\0') && (DAT_003fab38 == '\0')) && (anzkupplb != 0xff)) {
      anzkupplb = anzkupplb + 1;
    }
    DAT_003fab39 = DAT_003fab38 == '\0';
    if (S_kupp == '\0') {
      DAT_003fab38 = '\x01';
    }
    else if (DAT_003fab38 != '\0') {
      DAT_003fab38 = DAT_003fab38 + -1;
    }
    if (anzkupplb < AKUPPLB) {
      if (AGANGW < anzgangw) {
        local_20 = _B_clkuppl & 0xd0fc | 0x2403;
      }
    }
    else {
      local_20 = _B_clkuppl & 0xd0fc | 0x2002;
    }
  }
  else {
    local_20 = _B_clkuppl & 0xd0fc | 0x2002;
  }
  local_1c[0] = local_20;
  local_14 = local_1c;
  local_18[0] = local_20;
  func_0xff222958(0x72,local_18);
  return;
}

