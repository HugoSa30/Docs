/*
 * Program: n42.bin
 * Function: FUN_001424cc
 * Entry: 001424cc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001424cc(void)

{
  ushort local_38;
  ushort local_34 [2];
  ushort local_30 [2];
  ushort *local_2c;
  ushort local_28 [2];
  ushort *local_24;
  
  if (DAT_001d3520 == '\0') {
    DAT_003fde60 = '\0';
    _DAT_003fde5c = 0;
    _DAT_003fde5e = 0;
  }
  else {
    DAT_005b8c38 = DAT_005b8c38 | 0x40;
  }
                    /* WARNING: Read-only address (ram,0x003fdfbd) is written */
  if (DAT_001d3520 == '\0') {
    local_38 = _DAT_003fdfbc & 0xd0fc | 0x2002;
    local_34[0] = local_38;
    local_2c = local_34;
    local_30[0] = local_38;
    func_0xff222958(0xad,local_30);
  }
  else if ((DAT_003fdfbd >> 1 & 1) == 0) {
    if (((B_etr != '\0') || (DAT_001d3521 < nmot)) || ((DAT_001d351f != '\0' && (B_lowra != '\0'))))
    {
      DAT_003fb8a6 = '\x01';
    }
    if (DAT_003fb8a6 == '\0') {
      DAT_005b8c38 = DAT_005b8c38 | 2;
    }
    else {
      DAT_005b8c38 = DAT_005b8c38 & 0xfd;
    }
    if ((B_stend == '\0') || (DAT_003fb8a8 != '\0')) {
      DAT_003fb8a7 = false;
    }
    else {
      DAT_003fb8a7 = true;
    }
    DAT_003fb8a8 = B_stend;
    if ((bool)DAT_003fb8a7) {
      DAT_005b8c39 = DAT_005b90d4;
    }
    DAT_005b8c3a = DAT_005b8c39;
    if ((uint)DAT_001d3522 + (uint)DAT_005b8c39 < (uint)DAT_005b90d4) {
      DAT_005b8c38 = DAT_005b8c38 | 1;
    }
    else {
      DAT_005b8c38 = DAT_005b8c38 & 0xfe;
    }
    if (B_sa == '\0') {
      DAT_003fb8aa = 0;
    }
    if (((DAT_005b8c38 & 1) != 0) && (B_sa != '\0')) {
      func_0xff221d08(&DAT_003fb8aa);
    }
    DAT_005b8c3b = DAT_003fb8aa;
    if ((bRam001d3524 < DAT_003fb8aa) || (((DAT_005b8c38 & 1) != 0 && (DAT_003fc1ac != '\0')))) {
      if ((bRam001d3524 < DAT_003fb8aa) || (((DAT_005b8c38 & 1) != 0 && (DAT_003fc1ac != '\0')))) {
        DAT_003fb8a9 = '\x01';
      }
    }
    else {
      DAT_003fb8a9 = '\0';
    }
    if (DAT_003fb8a9 == '\0') {
      DAT_005b8c38 = DAT_005b8c38 & 0xf7;
    }
    else {
      DAT_005b8c38 = DAT_005b8c38 | 8;
    }
    if ((((((DAT_005b8c38 & 1) == 0) || ((DAT_005b8c38 & 8) != 0)) || ((DAT_003fdfc1 >> 1 & 1) == 0)
         ) || (((DAT_003fdfbf >> 1 & 1) == 0 || ((DAT_003fdfc1 & 1) != 0)))) ||
       (((DAT_003fdfbf & 1) != 0 || ((DAT_005b8c38 & 2) == 0)))) {
      DAT_005b8c38 = DAT_005b8c38 & 0xfb;
    }
    else {
      DAT_005b8c38 = DAT_005b8c38 | 4;
    }
    local_38 = _DAT_003fdfbc;
    if ((tmot < DAT_001d3523) && ((DAT_005b8c38 & 4) != 0)) {
      DAT_005b8c38 = DAT_005b8c38 | 0x20;
    }
    else {
      DAT_005b8c38 = DAT_005b8c38 & 0xdf;
    }
    if ((tmot < DAT_001d3523) || ((DAT_005b8c38 & 4) == 0)) {
      DAT_005b8c38 = DAT_005b8c38 & 0xef;
    }
    else {
      DAT_005b8c38 = DAT_005b8c38 | 0x10;
    }
    if ((DAT_005b8c38 & 0x20) != 0) {
      local_38 = _DAT_003fdfbc & 0xd0fc | 0x2203;
    }
    if ((DAT_005b8c38 & 0x10) != 0) {
      local_38 = local_38 & 0xd0fc | 0x2002;
    }
    local_34[0] = local_38;
    local_24 = local_34;
    local_28[0] = local_38;
    func_0xff222958(0xad,local_28);
    if (((DAT_005b8c38 & 4) == 0) || (DAT_003fb8ac != '\0')) {
      DAT_003fb8ab = false;
    }
    else {
      DAT_003fb8ab = true;
    }
    DAT_003fb8ac = '\x01' - ((DAT_005b8c38 & 4) == 0);
    if ((bool)DAT_003fb8ab) {
      DAT_003fde60 = DAT_001d351e + -0x80;
      _DAT_003fde5c = (ushort)DAT_001d3523;
      _DAT_003fde5e = (ushort)tmot;
    }
  }
  return;
}

