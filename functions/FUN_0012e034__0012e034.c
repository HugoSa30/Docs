/*
 * Program: n42.bin
 * Function: FUN_0012e034
 * Entry: 0012e034
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012e034(void)

{
  ushort local_70;
  ushort local_6c;
  ushort local_68;
  ushort local_64;
  ushort local_60;
  ushort local_5c;
  ushort local_58;
  ushort local_54;
  ushort local_50 [2];
  ushort local_4c [2];
  ushort *local_48;
  ushort local_44 [2];
  ushort *local_40;
  ushort local_3c [2];
  ushort *local_38;
  ushort local_34 [2];
  ushort *local_30;
  ushort local_2c [2];
  ushort *local_28;
  ushort local_24 [2];
  ushort *local_20;
  ushort local_1c [2];
  ushort *local_18;
  ushort local_14 [2];
  ushort *local_10;
  
  local_70 = _sfpfrao;
  local_6c = _sfpfrau;
  local_68 = _B_mnrkat;
  local_64 = _B_mnrkaz;
  local_60 = _B_ftfrao2;
  local_5c = _B_ftfrau2;
  local_58 = _B_clrkat2;
  local_54 = _B_mxrkaz2;
  if (B_pwf != '\0') {
    DKVSbits = DKVSbits & 0xfd | 1;
    _imlkvszs_w = 0;
    _DAT_003fdc50 = 0;
    imlkvs_w = 0;
  }
  frauzs_w = frau_w;
  frauzs2_w = frau2_w;
  if (CPLRA == '\0') {
    rkam_w = rkat_w;
    rkamzs2_w = rkat2_w;
  }
  else {
    rkam_w = rkaz_w;
    rkamzs2_w = rkaz2_w;
  }
  B_plra = CPLRA != '\0';
  if (B_lrare != '\0') {
    local_6c = _sfpfrau & 0xf0fe;
    local_64 = _B_mnrkaz & 0xf0fe;
    local_68 = _B_mnrkat & 0xf0fe;
    local_70 = _sfpfrao & 0xf0fe;
    local_5c = _B_ftfrau2 & 0xf0fe;
    local_54 = _B_mxrkaz2 & 0xf0fe;
    local_58 = _B_clrkat2 & 0xf0fe;
    local_60 = _B_ftfrao2 & 0xf0fe;
  }
  local_50[0] = local_70;
  local_4c[0] = local_70;
  rkam2_w = rkamzs2_w;
  rkamzs_w = rkam_w;
  local_48 = local_50;
  func_0xff222958(0x56,local_4c);
  local_50[0] = local_6c;
  local_44[0] = local_6c;
  local_40 = local_50;
  func_0xff222958(0x58,local_44);
  local_50[0] = local_68;
  local_3c[0] = local_68;
  local_38 = local_50;
  func_0xff222958(0x9d,local_3c);
  local_50[0] = local_64;
  local_34[0] = local_64;
  local_30 = local_50;
  func_0xff222958(0x9f,local_34);
  local_50[0] = local_60;
  local_2c[0] = local_60;
  local_28 = local_50;
  func_0xff222958(0x57,local_2c);
  local_50[0] = local_5c;
  local_24[0] = local_5c;
  local_20 = local_50;
  func_0xff222958(0x59,local_24);
  local_50[0] = local_58;
  local_1c[0] = local_58;
  local_18 = local_50;
  func_0xff222958(0x9e,local_1c);
  local_50[0] = local_54;
  local_14[0] = local_54;
  local_10 = local_50;
  func_0xff222958(0xa0,local_14);
  return;
}

