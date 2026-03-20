/*
 * Program: n42.bin
 * Function: FUN_001807b8
 * Entry: 001807b8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001807b8(void)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort local_28;
  ushort local_24 [2];
  ushort local_20 [2];
  ushort *local_1c;
  
  uVar1 = _DAT_003fde68;
  local_28 = _DAT_003fde68;
  if ((((DAT_003fde6b & 1) == 0) && ((B_phad & 2) != 0)) || (DAT_003fc1a4 != '\0')) {
    DAT_005b8bb1 = DAT_005b8bb1 | 1;
  }
  else {
    DAT_005b8bb1 = DAT_005b8bb1 & 0xfe;
  }
  if ((DAT_005b8bb1 & 1) != 0) {
    DAT_003fb7a4 = func_0xff221e78(&UNK_003fb7a5,
                                   (B_anwpnp2 & B_anwmn) !=
                                   ~(B_enwpnp|B_anwpnp|B_enwpnp2|B_anwpnp2|B_enwmn|B_anwmn|B_enwmn2|
                                    B_anwmn2),DAT_001cb709);
    if (DAT_003fb7a4 == '\0') {
      DAT_005b8bb1 = DAT_005b8bb1 & 0xfb;
    }
    else {
      DAT_005b8bb1 = DAT_005b8bb1 | 4;
    }
    if ((DAT_005b8bb1 & 4) != 0) {
      local_28 = uVar1 & 0xd0fc | 0x2203;
    }
    DAT_003fb79c = func_0xff221e78(&UNK_003fb79d,
                                   (B_anwpnp2 & B_anwpnp) !=
                                   ~(B_enwpnp|B_anwpnp|B_enwpnp2|B_anwpnp2|B_enwmn|B_anwmn|B_enwmn2|
                                    B_anwmn2),DAT_001cb70a);
    if (DAT_003fb79c == '\0') {
      DAT_005b8bb1 = DAT_005b8bb1 & 0xf7;
    }
    else {
      DAT_005b8bb1 = DAT_005b8bb1 | 8;
    }
    if ((((DAT_005b8bb1 & 4) == 0) &&
        (((DAT_005b8bb1 & 8) == 0 ||
         (local_28 = local_28 & 0xd0fc | 0x2803, (DAT_005b8bb1 & 8) == 0)))) &&
       (DAT_005b8bc8 < _DAT_001cb722)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    DAT_003fb7a0 = func_0xff221e78(&UNK_003fb7a1,uVar2,DAT_001cb708);
    if (((DAT_003fb7a0 != '\0') || ((DAT_005b961a & 2) == 0)) || ((DAT_003fde6b & 1) != 0)) {
      local_28 = local_28 & 0xd0fc | 0x2002;
    }
    local_24[0] = local_28;
    local_1c = local_24;
    local_20[0] = local_28;
    func_0xff222958(3,local_20);
                    /* WARNING: Read-only address (ram,0x003fde68) is written */
                    /* WARNING: Read-only address (ram,0x003fde6b) is written */
                    /* WARNING: Read-only address (ram,0x005b8bc8) is written */
    return;
  }
  return;
}

