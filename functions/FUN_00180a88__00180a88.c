/*
 * Program: n42.bin
 * Function: FUN_00180a88
 * Entry: 00180a88
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00180a88(void)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort local_28;
  ushort local_24 [2];
  ushort local_20 [2];
  ushort *local_1c;
  
  uVar1 = _DAT_003fdef2;
  local_28 = _DAT_003fdef2;
  if ((((DAT_003fdef5 & 1) == 0) && ((B_phad & 1) != 0)) || (DAT_003fc1a5 != '\0')) {
    DAT_005b8bb2 = DAT_005b8bb2 | 1;
  }
  else {
    DAT_005b8bb2 = DAT_005b8bb2 & 0xfe;
  }
  if ((DAT_005b8bb2 & 1) != 0) {
    DAT_003fb7ae = func_0xff221e78(&UNK_003fb7af,
                                   (B_anwpnp2 & B_enwmn) !=
                                   ~(B_enwpnp|B_anwpnp|B_enwpnp2|B_anwpnp2|B_enwmn|B_anwmn|B_enwmn2|
                                    B_anwmn2),DAT_001cb709);
    if (DAT_003fb7ae == '\0') {
      DAT_005b8bb2 = DAT_005b8bb2 & 0xfb;
    }
    else {
      DAT_005b8bb2 = DAT_005b8bb2 | 4;
    }
    if ((DAT_005b8bb2 & 4) != 0) {
      local_28 = uVar1 & 0xd0fc | 0x2203;
    }
    DAT_003fb7a8 = func_0xff221e78(&UNK_003fb7a9,
                                   (B_anwpnp2 & B_enwpnp) !=
                                   ~(B_enwpnp|B_anwpnp|B_enwpnp2|B_anwpnp2|B_enwmn|B_anwmn|B_enwmn2|
                                    B_anwmn2),DAT_001cb70a);
    if (DAT_003fb7a8 == '\0') {
      DAT_005b8bb2 = DAT_005b8bb2 & 0xf7;
    }
    else {
      DAT_005b8bb2 = DAT_005b8bb2 | 8;
    }
    if ((((DAT_005b8bb2 & 4) == 0) &&
        (((DAT_005b8bb2 & 8) == 0 ||
         (local_28 = local_28 & 0xd0fc | 0x2803, (DAT_005b8bb2 & 8) == 0)))) &&
       (Vse_sprs < _SPRZG_AN)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    DAT_003fb7b0 = func_0xff221e78(&UNK_003fb7b1,uVar2,DAT_001cb708);
    if (((DAT_003fb7b0 != '\0') || ((DAT_005b961a & 8) == 0)) || ((DAT_003fdef5 & 1) != 0)) {
      local_28 = local_28 & 0xd0fc | 0x2002;
    }
    local_24[0] = local_28;
    local_1c = local_24;
    local_20[0] = local_28;
    func_0xff222958(0x48,local_20);
                    /* WARNING: Read-only address (ram,0x003fdef2) is written */
                    /* WARNING: Read-only address (ram,0x003fdef5) is written */
                    /* WARNING: Read-only address (ram,0x005b8bda) is written */
    return;
  }
  return;
}

