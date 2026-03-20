/*
 * Program: n42.bin
 * Function: FUN_00170a14
 * Entry: 00170a14
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00170a14(void)

{
  ushort local_18;
  ushort local_14 [2];
  ushort local_10 [2];
  ushort *local_c;
  
  if (DAT_001c6bd6 < ub) {
    if (DAT_005b9ab8 < _DAT_001c6bd4) {
      DAT_005b8e6b = DAT_005b8e6b & 0xbf;
    }
    else {
      DAT_005b8e6b = DAT_005b8e6b | 0x40;
    }
    if (DAT_005b8e6d < DAT_001c6bd7) {
      DAT_005b8e6b = DAT_005b8e6b & 0x7f;
    }
    else {
      DAT_005b8e6b = DAT_005b8e6b | 0x80;
    }
    if ((((DAT_005b8e6b & 0x40) == 0) && ((DAT_005b8e6b & 0x80) == 0)) && (DAT_005b88d8 == '\0')) {
      local_18 = _DAT_003fdfc2 & 0xdffc | 0x2002;
    }
    else if ((DAT_005b8e6b & 0x40) == 0) {
      if ((DAT_005b8e6b & 0x80) == 0) {
        if (DAT_005b88d8 == '\0') {
          local_18 = _DAT_003fdfc2 & 0xd0fc | 0x2003;
        }
        else {
          local_18 = _DAT_003fdfc2 & 0xd0fc | 0x2203;
        }
      }
      else {
        local_18 = _DAT_003fdfc2 & 0xd0fc | 0x2803;
      }
    }
    else {
      local_18 = _DAT_003fdfc2 & 0xd0fc | 0x2403;
    }
    local_14[0] = local_18;
    local_c = local_14;
    local_10[0] = local_18;
    func_0xff222958(0xb0,local_10);
  }
  else {
    DAT_005b9ab8 = 0;
    DAT_005b8e6d = 0;
    DAT_005b8e6b = DAT_005b8e6b & 0xdf;
    DAT_005b8e6c = 0;
    DAT_005b8e69 = 0;
  }
  return;
}

