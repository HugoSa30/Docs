/*
 * Program: n42.bin
 * Function: FUN_0017a998
 * Entry: 0017a998
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0017a998(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ushort local_38;
  ushort local_34;
  byte bStack_2f;
  ushort local_2c [2];
  ushort local_28 [2];
  ushort *local_24;
  ushort local_20 [2];
  ushort *local_1c;
  
  if (B_dodgen != 0) {
    local_38 = _Z_dgen;
    if (genstatroh == 8) {
      local_38 = _Z_dgen & 0xf0fe;
LAB_0017aabc:
      local_38 = local_38 & 0xdffd | 0x2002;
    }
    else if (genstatroh == 10) {
      local_38 = _Z_dgen & 0xd0fc | 0x2103;
    }
    else if (genstatroh == 0xb) {
      local_38 = _Z_dgen & 0xd0fc | 0x2403;
    }
    else if (genstatroh == 0xc) {
      local_38 = _Z_dgen & 0xf0fe | 0x801;
      goto LAB_0017aabc;
    }
    local_2c[0] = local_38;
    local_24 = local_2c;
    local_28[0] = local_38;
    func_0xff222958(0x11,local_28);
    B_dodgen = 0;
  }
  if (B_dodgenbs == 0) goto LAB_0017ac08;
  local_34 = _Z_dgenbs;
  if (genfbsak == 8) {
    local_34 = _Z_dgenbs & 0xf0fe;
LAB_0017abc0:
    local_34 = local_34 & 0xdffd | 0x2002;
  }
  else if (genfbsak == 0xb) {
    local_34 = _Z_dgenbs & 0xd0fc | 0x2403;
  }
  else if (genfbsak == 0xc) {
    local_34 = _Z_dgenbs & 0xf0fe | 0x801;
    goto LAB_0017abc0;
  }
  local_2c[0] = local_34;
  local_1c = local_2c;
  local_20[0] = local_34;
  func_0xff222958(0x12,local_20);
  B_dodgenbs = 0;
LAB_0017ac08:
  iVar3 = func_0xff250aac(0x11,&UNK_003fb3ea);
  if (iVar3 == 0) {
    eprl1 = 0;
    B_gfmeak = 0;
    B_gfelak = 0;
    B_gfhtak = 0;
  }
  else {
    eprl1 = DAT_003fb3ef & 1;
    if (((DAT_003fb3ec >> 3 & 1) == 0) || (genstatroh != 0xc)) {
      B_gfmeak = 0;
    }
    else {
      B_gfmeak = 1;
    }
    if (((DAT_003fb3ec >> 2 & 1) == 0) || (genstatroh != 0xb)) {
      B_gfelak = 0;
    }
    else {
      B_gfelak = 1;
    }
    if (((DAT_003fb3ec & 1) == 0) || (genstatroh != 10)) {
      B_gfhtak = 0;
    }
    else {
      B_gfhtak = 1;
    }
  }
  iVar3 = func_0xff250aac(0x12,&UNK_003fb3ea);
  if (iVar3 == 0) {
    eprl2 = 0;
    B_gfnobsak = 0;
    bVar1 = false;
    B_gfbsupak = 0;
    bVar2 = false;
  }
  else {
    eprl2 = DAT_003fb3ef & 1;
    if (((DAT_003fb3ec >> 2 & 1) == 0) || (genfbsak != 0xb)) {
      B_gfnobsak = 0;
      bVar1 = false;
    }
    else {
      B_gfnobsak = 1;
      bVar1 = true;
    }
    if (((DAT_003fb3ec >> 3 & 1) == 0) || (genfbsak != 0xc)) {
      B_gfbsupak = 0;
      bVar2 = false;
    }
    else {
      B_gfbsupak = 1;
      bVar2 = true;
    }
  }
  if ((((B_gfmeak != 0) || (B_gfelak != 0)) || (B_gfhtak != 0)) || ((bVar1 || (bVar2)))) {
    B_genfprl = 1;
  }
  else {
    B_genfprl = 0;
  }
  bStack_2f = (byte)_B_betum;
  B_tumers = bStack_2f >> 6 & 1;
  if (((DAT_003fdfb7 & 1) == 0) && (B_pwf == '\0')) {
    B_taerr = 0;
  }
  else {
    B_taerr = 1;
  }
  return;
}

