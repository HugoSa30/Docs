/*
 * Program: n42.bin
 * Function: FUN_000dab10
 * Entry: 000dab10
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000dab10(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  char local_30;
  
  uVar4 = (uint)dpsfak;
  if (B_st == '\0') {
    iVar6 = (esst_snm16opuw >> 0x10) * 2;
    rl_w_kge = FUN_000b2644(&DAT_003fb394,_rl_w,
                            (uint)*(ushort *)(&DAT_001d1e88 + iVar6) +
                            ((int)((esst_snm16opuw & 0xffff) *
                                  ((uint)*(ushort *)(&DAT_001d1e8a + iVar6) -
                                  (uint)*(ushort *)(&DAT_001d1e88 + iVar6))) >> 0x10) & 0xffff);
  }
  else {
    _DAT_003fb394 = (uint)_rl_w << 0x10;
    rl_w_kge = _rl_w;
  }
  uVar5 = (uint)rl_w_kge;
  if (uVar5 < 0x1fe0) {
    rl_kge = (undefined)((int)uVar5 >> 5);
  }
  else {
    rl_kge = 0xff;
  }
  esst_srl16opuw = calc1dim(&KFFMKNULFS,uVar5);
  mioptugd_w = FUN_000aafb0(&KFMIOP,_KFFMKNULFS,esst_snm16opuw,esst_srl16opuw);
  uVar5 = FUN_000aafb0(&DAT_001c906e,_KFFMKNULFS,esst_snm16opuw,esst_srl16opuw);
  uVar5 = (uVar5 & 0xffff) / 0x147;
  etagd = (byte)uVar5;
  uVar9 = (uint)dpsfak;
  iVar6 = 0xff - uVar9;
  uVar5 = (iVar6 * 200) / 0xff + (uVar9 * uVar5) / 0xff;
  if (0xff < (uVar5 & 0xffff)) {
    uVar5 = 0xff;
  }
  mioptl1_w = (word)((int)((uint)mioptugd_w * (uVar5 & 0xff) * 0x29) >> 0xd);
  uVar5 = (int)((uint)Asprlu * iVar6) / 0xff + (uVar9 * Asprl) / 0xff;
  if ((uVar5 & 0xffff) < 0x100) {
    Asprll = (byte)uVar5;
  }
  else {
    Asprll = 0xff;
  }
  uVar5 = (int)((uint)Esprlu * iVar6) / 0xff + (uVar9 * Esprl) / 0xff;
  if ((uVar5 & 0xffff) < 0x100) {
    Esprll = (byte)uVar5;
  }
  else {
    Esprll = 0xff;
  }
  if ((uint)Vsa_spri + (uint)Vse_spri == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (((uint)Asprll + (uint)Esprll) * 0x400) / ((uint)Vsa_spri + (uint)Vse_spri);
    if (0xff < uVar5) {
      uVar5 = 0xff;
    }
  }
  fwuell = (byte)uVar5;
  fnwll = FUN_000a87cc(&DAT_001c9040,uVar5 & 0xff);
  if (B_ll == '\0') {
    uVar8 = 0;
  }
  else {
    _DAT_003fb390 = 0xffff;
    uVar8 = 0xff;
  }
  fznwll = FUN_000b26a0(&DAT_003fb390,uVar8,ZKFZNWLL);
  fnwlleff = (byte)((uint)fnwll * (uint)fznwll >> 8);
  cVar2 = calc_ign_angle_full_load(&DAT_001c8f40,_KFFMKNULFS,esst_snm16opuw,esst_srl16opuw);
  sVar7 = (short)(uVar4 * 0xff >> 8);
  local_30 = (char)((ushort)(cVar2 * sVar7) >> 8);
  iVar6 = (int)local_30;
  cVar2 = calc_ign_angle_full_load(&KFZWOP,_KFFMKNULFS,esst_snm16opuw,esst_srl16opuw);
  local_30 = (char)((ushort)((short)cVar2 * (0xff - sVar7)) >> 8);
  cVar2 = calc_ign_angle_partial_load
                    (KFZWOPLLT,&DAT_001c8d6d,DAT_001c8d6c,0x1c8d75,0x1c8d7a,nmot,rl_kge);
  cVar3 = calc_ign_angle_partial_load
                    (KFZWOPLL,&DAT_001c8d36,DAT_001c8d35,0x1c8d3e,0x1c8d43,nmot,rl_kge);
  iVar11 = (int)cVar2 - (int)cVar3;
  if (iVar11 < -0x80) {
    iVar11 = -0x80;
  }
  else if (0x7f < iVar11) {
    iVar11 = 0x7f;
  }
  iVar11 = (int)(char)((int)(short)((short)(char)iVar11 * (ushort)dpsfak) / 0xff) + (int)cVar3;
  if (iVar11 < -0x80) {
    iVar11 = -0x80;
  }
  else if (0x7f < iVar11) {
    iVar11 = 0x7f;
  }
  iVar10 = iVar6 + local_30;
  if (iVar10 < -0x80) {
    iVar10 = -0x80;
  }
  else if (0x7f < iVar10) {
    iVar10 = 0x7f;
  }
  iVar11 = (int)(char)iVar11 - (int)(char)iVar10;
  if (iVar11 < -0x80) {
    iVar11 = -0x80;
  }
  else if (0x7f < iVar11) {
    iVar11 = 0x7f;
  }
  iVar6 = iVar6 + local_30;
  if (iVar6 < -0x80) {
    iVar6 = -0x80;
  }
  else if (0x7f < iVar6) {
    iVar6 = 0x7f;
  }
  iVar6 = (int)(char)((uint)fnwlleff * (int)(char)iVar11 >> 8) + (int)(char)iVar6;
  if (iVar6 < -0x80) {
    iVar6 = -0x80;
  }
  else if (0x7f < iVar6) {
    iVar6 = 0x7f;
  }
  zwoptl1 = (byte)iVar6;
  etalab = FUN_000a87cc(&DAT_001c8e28,lambas);
  dzwol = FUN_000a8eec(DZWOLA,&DAT_001c904f,0x1c9059,lambas);
  dzwoag = dzwagr;
  miopt_w = FUN_000b1800((uint)etalab * 0xa4,mioptl1_w);
  mibas_w = FUN_000b1800((uint)etazwbm * 0xa4,miopt_w);
  if ((CWMBAS & 1) == 0) {
    sVar7 = (short)(char)zwoptl1 + (short)(char)dzwwl + (short)(char)dzwoag + (short)(char)dzwol;
  }
  else {
    sVar7 = (short)(char)zwoptl1 + (short)(char)dzwotm + (short)(char)dzwoag + (short)(char)dzwol;
  }
  if (sVar7 < 0x80) {
    if (sVar7 < -0x80) {
      zwopt = 0x80;
    }
    else {
      zwopt = (byte)sVar7;
    }
  }
  else {
    zwopt = 0x7f;
  }
  uVar5 = (uint)DAT_003fb38c;
  uVar4 = 1;
  uVar9 = uVar5;
  do {
    bVar1 = (&DAT_003fb38c)[uVar4];
    if (bVar1 < uVar5) {
      uVar5 = (uint)bVar1;
    }
    uVar9 = uVar9 + bVar1;
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 4);
  _DAT_003fb388 = (undefined2)uVar9;
  etatrmn = (byte)uVar5;
  etazwbm = (byte)(uVar9 >> 2);
  uVar4 = calc_vanos_optimal(&DAT_001c8c34,_KFFMKNULFS,esst_snm16opuw,esst_srl16opuw);
  uVar4 = (int)((uVar4 & 0xff) * (0xff - (uint)dpsfak)) / 0xff +
          ((uint)DZWKOEFK * (uint)dpsfak) / 0xff;
  if ((uVar4 & 0xffff) < 0x100) {
    dzwkoef = (byte)uVar4;
  }
  else {
    dzwkoef = 0xff;
  }
  return;
}

