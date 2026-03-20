/*
 * Program: n42.bin
 * Function: FUN_000cc4c0
 * Entry: 000cc4c0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cc4c0(void)

{
  byte bVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  
  if (B_stend == '\0') {
    DAT_005b8ec2 = '\x01';
  }
  else if (DAT_005b8ec2 != '\0') {
    if (B_pwf == '\0') {
      bVar1 = tans;
      if (DAT_001cadb6 == '\x01') {
        bVar1 = tmot;
      }
      DAT_005b8a7c = _DAT_003fddc6 - (ushort)bVar1;
      if (DAT_005b8a7c < -0x40) {
        DAT_005b8a7c = -0x40;
      }
      if (DAT_003fddc4 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x000cc570 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)DAT_003fddc4 * 4 + 0x3c57c))();
        return;
      }
      uVar2 = calc_value_from_y(&DAT_001ca7ae,tabst_w);
      iVar4 = (int)DAT_005b8a7c * (uVar2 & 0xffff);
      DAT_005b8a80 = (undefined2)((uint)iVar4 >> 8);
      bVar1 = tans;
      if (DAT_001cadb6 == '\x01') {
        bVar1 = tmot;
      }
      _DAT_003fb400 = (iVar4 >> 8) + (uint)bVar1;
      if ((short)_DAT_003fb400 < 0) {
        _DAT_003fb400 = 0;
      }
      else if (0x200 < (short)_DAT_003fb400) {
        _DAT_003fb400 = 0x200;
      }
      DAT_005b8a74 = (word)_DAT_003fb400;
      _DAT_003fb400 = _DAT_003fb400 << 0x10;
      DAT_005b8ec2 = '\0';
      _DAT_003fb408 = _DAT_003fb400;
      DAT_005b8a76 = DAT_005b8a74;
      gentemp = DAT_005b8a74;
    }
    else {
      bVar1 = tans;
      if (DAT_001cadb6 == '\x01') {
        bVar1 = tmot;
      }
      DAT_005b8a74 = (word)bVar1;
      DAT_005b8ec2 = '\0';
      gentemp = DAT_005b8a74;
    }
  }
  if (DAT_005b9b08 == 0) {
    DAT_005b8a8c = 0;
  }
  else {
    uVar2 = (uint)ugen;
    if (0x36 < uVar2) {
      uVar2 = 0x36;
    }
    DAT_005b8a92 = (undefined2)uVar2;
    DAT_005b8aa4 = ((uVar2 + 0x6a) * (uint)DAT_005b8aaf * 0x10) / 5;
    if (DAT_003fddc4 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x000cc7d0 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)DAT_003fddc4 * 4 + 0x3c7dc))();
      return;
    }
    DAT_005b8aad = FUN_000aa054(DAT_001c9cf0,&DAT_001c9cf2,DAT_001c9cf1,&DAT_001c9cfa,0x1c9d0a,
                                (uint)DAT_005b8aaf,DAT_005b9b08);
    if (DAT_003fddc4 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x000cc958 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)DAT_003fddc4 * 4 + 0x3c964))();
      return;
    }
    uVar2 = calc_value_from_y(&DAT_001ca95e,gentemp);
    uVar5 = (uint)DAT_005b8aad * (uVar2 & 0xffff) * 2;
    DAT_005b8a82 = (undefined2)(uVar5 >> 8);
    uVar2 = ((uint)nmot_w << 0x10) / 0x3c >> 0x12;
    if (0xff < uVar2) {
      uVar2 = 0xff;
    }
    DAT_005b8ab1 = (undefined)uVar2;
    DAT_005b8a98 = (uVar5 >> 8 & 0xffff) * (uVar2 & 0xff);
    if (DAT_005b8a98 == 0) {
      DAT_005b8a98 = 1;
    }
    uVar2 = (DAT_005b8aa4 << 0xe) / DAT_005b8a98 >> 0xc;
    if (uVar2 < 0x201) {
      DAT_005b8a8c = (ushort)uVar2;
    }
    else {
      DAT_005b8a8c = 0x200;
    }
  }
  bVar1 = DAT_001cadb8;
  if (B_genoff != 0) {
    bVar1 = DAT_001cadb9;
  }
  uVar6 = (ushort)bVar1 + (i_slp >> 4);
  if (0xff < uVar6) {
    uVar6 = 0xff;
  }
  DAT_005b8aae = (undefined)uVar6;
  DAT_005b8a5a = (uVar6 & 0xff) - (ushort)genig;
  if (B_stend == '\0') {
    DAT_003fb412 = '\0';
  }
  else if (((B_gfbsupak != 0) || (B_gfnobsak != 0)) || (B_genactiv != 0)) {
    DAT_003fb412 = '\x01';
  }
  DAT_003fb410 = FUN_000b1f18(&UNK_003fb411,DAT_003fb412 == '\0',DAT_001cadbe);
  if (DAT_003fb410 != '\0') {
    _DAT_003fb40c = 0xffff0000;
  }
  FUN_000b2514(&DAT_003fb40c,0,_DAT_001cad8c);
  DAT_005b8a5c = (short)((int)DAT_005b8a5a * (_DAT_003fb40c >> 0x10) >> 0x10);
  sVar3 = DAT_005b8a5c + (ushort)genig;
  if (sVar3 < 0) {
    sVar3 = 0;
  }
  else if (0xff < sVar3) {
    sVar3 = 0xff;
  }
  DAT_005b8ab0 = (byte)sVar3;
  DAT_005b8aaf = genig;
  if (DAT_001cadbd != '\0') {
    DAT_005b8aaf = (byte)sVar3;
  }
  if (MDNORM == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (uint)MDNORM;
  }
  DAT_005b8ec6 = (char)uVar2;
  uVar2 = (((uint)DAT_005b8a8c * 0x640000) / uVar2) / 0x1900;
  if (0xffff < uVar2) {
    uVar2 = 0xffff;
  }
  DAT_005b8a88 = (short)uVar2;
  if (DAT_001cad91 == '\0') {
    uVar2 = 0;
  }
  DAT_005b8a86 = (short)uVar2;
  uVar5 = (uVar2 & 0xffff) + (uint)_DAT_001cad10;
  if (uVar5 == 0) {
    uVar5 = 0;
  }
  else if (0xffff < uVar5) {
    DAT_005b8a8a = 0xffff;
    goto LAB_000ccd40;
  }
  DAT_005b8a8a = (undefined2)uVar5;
LAB_000ccd40:
  iVar4 = (uVar2 & 0xffff) + (uint)_DAT_001cad10;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  B_gene = 1 - (iVar4 == 0);
  return;
}

