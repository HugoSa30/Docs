/*
 * Program: n42.bin
 * Function: FUN_00144910
 * Entry: 00144910
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00144910(void)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  undefined2 local_60;
  undefined2 local_5c;
  byte local_57;
  byte local_53;
  ushort local_50;
  ushort local_4c [2];
  ushort local_48 [2];
  ushort *local_44;
  ushort local_40 [2];
  ushort *local_3c;
  ushort local_38 [2];
  ushort *local_34;
  
  local_60 = _DAT_003fdf92;
  local_5c = _DAT_003fdf94;
  local_50 = _DAT_003fdf9a;
  uVar1 = (uint)phbmerr;
  if (uVar1 < (uint)PHBM << 1) {
    B_nopg = B_nopg & ~B_fph1bm;
  }
  else {
    B_nopg = B_nopg | B_fph1bm;
  }
  dphBits_ph1 = (uVar1 == 0) << 1 | dphBits_ph1 & ~B_rst3ph;
  uVar2 = (uint)ph4bmerr;
  if (uVar2 < (uint)PHBM << 1) {
    B_nopg = B_nopg & ~B_fph2bm;
  }
  else {
    B_nopg = B_nopg | B_fph2bm;
  }
  B_enph4bm = (uVar2 == 0) << 1 | B_enph4bm & ~B_rst3ph4;
  if ((uint)DAT_003fdb9c < (uint)PHBM << 1) {
    B_nopg = B_nopg & ~B_fph3bm;
  }
  else {
    B_nopg = B_nopg | B_fph3bm;
  }
  DAT_005b8dd8 = (DAT_003fdb9c == 0) << 1 | DAT_005b8dd8 & 0xfd;
  if ((uint)DAT_003fdb9d < (uint)PHBM << 1) {
    B_nopg = B_nopg & ~B_fph4bm;
  }
  else {
    B_nopg = B_nopg | B_fph4bm;
  }
  DAT_005b8dd9 = (DAT_003fdb9d == 0) << 1 | DAT_005b8dd9 & 0xfd;
  if ((((DAT_005b8dda & 1) != 0) && (((_CWPG1 >> 8 & 1) == 0 || (DAT_005b8ded == 0)))) &&
     (((_CWPG1 >> 7 & 1) == 0 || (uVar1 == 0)))) {
    local_60 = _DAT_003fdf92 & 0xd0fc | 0x2002;
  }
  if ((((_CWPG1 >> 8 & 1) != 0) && ((uint)DAT_001c1b4e << 1 <= (uint)DAT_005b8ded)) ||
     (((_CWPG1 >> 7 & 1) != 0 && ((B_nopg & B_fph1bm) != 0)))) {
    local_60 = local_60 & 0xd0fc | 0x2403;
  }
  if ((DAT_005b97c6 & 1) != 0) {
    local_60 = local_60 & 0xd0fc | 0x2803;
  }
  if ((DAT_005b97c7 & 1) != 0) {
    local_60 = local_60 & 0xd0fc | 0x2203;
  }
  if ((DAT_005b97c7 >> 4 & 1) != 0) {
    local_60 = local_60 & 0xd0fc | 0x2103;
  }
  if ((((DAT_005b8dda >> 1 & 1) != 0) && (((_CWPG4 >> 8 & 1) == 0 || (DAT_005b8dea == 0)))) &&
     (((_CWPG4 >> 7 & 1) == 0 || (uVar2 == 0)))) {
    local_5c = _DAT_003fdf94 & 0xd0fc | 0x2002;
  }
  if ((((_CWPG4 >> 8 & 1) != 0) && ((uint)DAT_001c1b4e << 1 <= (uint)DAT_005b8dea)) ||
     (((_CWPG4 >> 7 & 1) != 0 && ((B_nopg & B_fph2bm) != 0)))) {
    local_5c = local_5c & 0xd0fc | 0x2403;
  }
  if ((DAT_005b97c6 >> 1 & 1) != 0) {
    local_5c = local_5c & 0xd0fc | 0x2803;
  }
  if ((DAT_005b97c7 >> 1 & 1) != 0) {
    local_5c = local_5c & 0xd0fc | 0x2203;
  }
  if ((DAT_005b97c7 >> 5 & 1) != 0) {
    local_5c = local_5c & 0xd0fc | 0x2103;
  }
  uVar1 = 0;
  DAT_005b863e = DAT_005b863e | 1;
  do {
    bVar3 = (&DAT_001c1b48)[uVar1];
    if (1 < bVar3) {
      bVar3 = 1;
    }
    if (bVar3 == 1) {
      bVar3 = (byte)local_5c & 1;
    }
    else if (bVar3 == 2) {
      bVar3 = local_57 & 1;
    }
    else if (bVar3 == 3) {
      bVar3 = local_53 & 1;
    }
    else {
      bVar3 = (byte)local_60 & 1;
    }
    if (bVar3 == 0) {
      pgmaster = (&DAT_001c1b48)[uVar1];
      if (1 < pgmaster) {
        pgmaster = 1;
      }
      uVar1 = 5;
      DAT_005b863e = DAT_005b863e & 0xfe;
    }
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 2);
  if ((DAT_005b863e & 1) == 0) {
    B_nopg = B_nopg & ~B_nopg;
  }
  else {
    B_nopg = B_nopg | B_nopg;
  }
  if ((B_nopg & B_nopg) == 0) {
    local_50 = _DAT_003fdf9a & 0xd0fc | 0x2002;
  }
  DAT_005b97c8 = (ushort)DAT_001c1b4d * 2 + 5;
  if (DAT_005b97c8 < uzkw_w) {
    DAT_005b863e = DAT_005b863e | 2;
  }
  if ((DAT_005b863e & 2) == 0) {
    if ((B_nopg & B_nopg) != 0) {
      DAT_003faa96 = '\0';
      goto LAB_0014504c;
    }
  }
  else if ((B_nopg & B_nopg) != 0) goto LAB_0014504c;
  if ((DAT_005b863e & 2) == 0) {
    DAT_003faa96 = '\x01';
  }
LAB_0014504c:
  if (DAT_003faa96 == '\0') {
    B_nopg = B_nopg & ~B_synph;
  }
  else {
    B_nopg = B_nopg | B_synph;
  }
  if ((B_nopg & B_nopg) != 0) {
    local_50 = local_50 & 0xd0fc | 0x2403;
  }
  if (zphflct_w == DAT_005b97d0) {
    sVar4 = -1;
  }
  else {
    sVar4 = 2;
  }
  uVar5 = (ushort)DAT_001c1b4e * 2 + 4 & 0xff;
  if ((short)(sVar4 + (ushort)DAT_003faa98) < (short)uVar5) {
    uVar5 = sVar4 + (ushort)DAT_003faa98;
  }
  if ((short)uVar5 < 1) {
    uVar5 = 0;
  }
  DAT_003faa98 = (byte)uVar5;
  DAT_005b97d0 = zphflct_w;
  if (zphfl4ct_w == DAT_005b97ca) {
    sVar4 = -1;
  }
  else {
    sVar4 = 2;
  }
  uVar5 = (ushort)DAT_001c1b4e * 2 + 4 & 0xff;
  if ((short)(sVar4 + (ushort)DAT_003faa9c) < (short)uVar5) {
    uVar5 = sVar4 + (ushort)DAT_003faa9c;
  }
  if ((short)uVar5 < 1) {
    uVar5 = 0;
  }
  DAT_003faa9c = (byte)uVar5;
  DAT_005b97ca = zphfl4ct_w;
  if (DAT_005b9a50 == DAT_005b97cc) {
    sVar4 = -1;
  }
  else {
    sVar4 = 2;
  }
  uVar5 = (ushort)DAT_001c1b4e * 2 + 4 & 0xff;
  if ((short)(sVar4 + (ushort)DAT_003faa95) < (short)uVar5) {
    uVar5 = sVar4 + (ushort)DAT_003faa95;
  }
  if ((short)uVar5 < 1) {
    uVar5 = 0;
  }
  DAT_003faa95 = (byte)uVar5;
  DAT_005b97cc = DAT_005b9a50;
  if (DAT_005b9a52 == DAT_005b97ce) {
    sVar4 = -1;
  }
  else {
    sVar4 = 2;
  }
  uVar5 = (ushort)DAT_001c1b4e * 2 + 4 & 0xff;
  if ((short)(sVar4 + (ushort)DAT_003faa9f) < (short)uVar5) {
    uVar5 = sVar4 + (ushort)DAT_003faa9f;
  }
  if ((short)uVar5 < 1) {
    uVar5 = 0;
  }
  DAT_003faa9f = (byte)uVar5;
  DAT_005b97ce = DAT_005b9a52;
  local_4c[0] = local_60;
  local_48[0] = local_60;
  DAT_005b8dea = DAT_003faa9c;
  DAT_005b8deb = DAT_003faa95;
  DAT_005b8dec = DAT_003faa9f;
  DAT_005b8ded = DAT_003faa98;
  local_44 = local_4c;
  func_0xff222958(0x98,local_48);
  local_4c[0] = local_5c;
  local_40[0] = local_5c;
  local_3c = local_4c;
  func_0xff222958(0x99,local_40);
  local_4c[0] = local_50;
  local_38[0] = local_50;
  local_34 = local_4c;
  func_0xff222958(0x9c,local_38);
  return;
}

