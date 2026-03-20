/*
 * Program: n42.bin
 * Function: FUN_000dfce8
 * Entry: 000dfce8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000dfce8(void)

{
  undefined uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte bVar8;
  uint uVar7;
  uint uVar9;
  uint local_28;
  uint local_24;
  
  local_28 = _DAT_003f9a84;
  if ((((B_sidk & 1) == 0) && (B_i_ska_fr == '\0')) && (B_i_ska_um == '\0')) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  bVar8 = zwspae == zwout | cVar3 * '\x02';
  if (DAT_005b8d0b == '\0') {
    if (DAT_003fa5ea != '\0') {
      DAT_003fa5ea = DAT_003fa5ea + -1;
    }
  }
  else {
    DAT_003fa5ea = DAT_001c0ed7;
  }
  if (DAT_005b8d11 == '\0') {
    if (DAT_003fa5eb != '\0') {
      DAT_003fa5eb = DAT_003fa5eb + -1;
    }
  }
  else {
    DAT_003fa5eb = DAT_001c0ed8;
  }
  if (DAT_005b8d0e == '\0') {
    if (DAT_003fa5ec != '\0') {
      DAT_003fa5ec = DAT_003fa5ec + -1;
    }
  }
  else {
    DAT_003fa5ec = DAT_001c0ed8;
  }
  if (DAT_005b8d10 == '\0') {
    if (DAT_003fa5ed != '\0') {
      DAT_003fa5ed = DAT_003fa5ed + -1;
    }
  }
  else {
    DAT_003fa5ed = DAT_001c0ed8;
  }
  local_24 = _DAT_003f9a88 & 0xffffff;
  if (DAT_003fa5f2 < etazaist) {
    DAT_003fbea1 = '\x01';
    _DAT_003fa5f0 = (undefined2)synchroCtr;
  }
  else if (DAT_003fbea1 == '\0') {
    DAT_005b8ff3 = (undefined)(miist_w >> 8);
  }
  uVar1 = DAT_005b8ff3;
  uVar7 = (uint)B_silm;
  uVar9 = (uint)DAT_003fdf8b;
  DAT_005b8ff4 = bVar8;
  iVar2 = FUN_000b1800(nmot_w,0xcccc);
  local_28 = (uint)CONCAT11(uVar1,B_kl15) | (uVar9 & 1) << 1 | (uint)DAT_003fbe9f << 2 |
             (uint)bVar8 << 4 | (uint)B_koe << 6 | (uVar7 & 1) << 7 | iVar2 << 0x10;
  cVar3 = func_0x010340a0(0x11,&local_28);
  DAT_003fa5f2 = etazaist;
  if ((cVar3 == '\0') || ((local_24 & 0x7000000) == 0)) {
    if (B_sa == '\0') {
      uVar7 = (uint)(DAT_005b958c >> 8);
    }
    else {
      uVar7 = 0;
    }
    local_28 = (uint)(DAT_005b9600 >> 8) << 0x18 | uVar7 | (uint)(mdverl_w >> 8) << 8 |
               (uint)DAT_003fc1d1 << 0x13 | (uint)DAT_003fc1d5 << 0x14 | (uint)DAT_003fc1d0 << 0x15;
    func_0x010340a0(0x12,&local_28);
  }
  local_24 = local_24 & 0xffffff;
  uVar7 = (uint)DAT_003fa5e8;
  if (uVar7 == 0) {
    uVar9 = (uint)DAT_000175f4;
  }
  else if (uVar7 == 1) {
    uVar9 = 0;
  }
  else if (uVar7 == 2) {
    uVar9 = (uint)obdsteuer;
  }
  else if (uVar7 == 3) {
    uVar9 = (uint)MDNORM;
    if (0x3f < MDNORM) {
      uVar9 = 0x3f;
    }
  }
  else {
    uVar9 = 0;
  }
  if ((DAT_003fdfc1 & 1) == 0) {
    uVar5 = (uint)tmot;
    if (tmot == 0xff) {
      uVar5 = 0xfe;
    }
  }
  else {
    uVar5 = 0xff;
  }
  if ((DAT_003fde95 & 1) == 0) {
    uVar4 = pu + 0x88 & 0xff;
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    else if (uVar4 < 0x66) {
      uVar4 = uVar4 * 2 + (uVar4 >> 1) + 1;
    }
    else {
      uVar4 = 0xfe;
    }
  }
  else {
    uVar4 = 0xff;
  }
  if (DAT_005b8d0c == '\0') {
    if (DAT_003fa5ea == '\0') {
      if (DAT_003fa5eb == '\0') {
        if (DAT_003fa5ed == '\0') {
          if (DAT_003fa5ec == '\0') {
            iVar2 = 0;
          }
          else {
            iVar2 = 1;
          }
        }
        else {
          iVar2 = 2;
        }
      }
      else {
        iVar2 = 3;
      }
    }
    else {
      iVar2 = 4;
    }
  }
  else {
    iVar2 = 7;
  }
  local_28 = uVar9 | uVar7 << 6 | uVar5 << 8 | (uVar4 & 0xff) << 0x10 | (uint)B_kuppl << 0x18 |
             (uint)B_nivns << 0x19 | (uint)DAT_003fc183 << 0x1a | (uint)DAT_003fc1d4 << 0x1b |
             (uint)B_nmot << 0x1c | iVar2 << 0x1d;
  cVar3 = func_0x010340a0(0x13,&local_28);
  if ((cVar3 == '\0') || ((local_24 & 0x7000000) == 0)) {
    uVar7 = (uint)(DAT_005b95a4 >> 8);
    if (uVar7 == 0xff) {
      uVar7 = 0xfe;
    }
    uVar9 = (uint)wped;
    if (uVar9 == 0xff) {
      uVar9 = 0xfe;
    }
    if (B_falls == '\0') {
      iVar2 = 0;
    }
    else {
      iVar2 = 3;
    }
    bVar8 = DAT_005b91e4;
    if (DAT_005b91e4 == 0xff) {
      bVar8 = 0xfe;
    }
    local_28 = uVar7 | uVar9 << 8 | (uint)B_brems << 0x10 | (DAT_003fde71 & 1) << 0x11 |
               (uint)B_kd << 0x12 | (uint)DAT_005b8df6 << 0x13 | iVar2 << 0x16 | (uint)bVar8 << 0x18
    ;
    func_0x010340a0(0x14,&local_28);
  }
  DAT_003fa5e9 = DAT_003fa5e9 + 1;
  if (6 < DAT_003fa5e9) {
    DAT_003fa5e9 = 0;
    DAT_003fa5e8 = DAT_003fa5e8 + 1;
    if (3 < DAT_003fa5e8) {
      DAT_003fa5e8 = 0;
    }
  }
  local_24 = local_24 & 0xffffff;
  local_28 = (uint)DAT_005b89ec << 8;
  cVar3 = func_0x010340a0(0xe,&local_28);
  if ((cVar3 == '\0') || ((local_24 & 0x7000000) == 0)) {
    local_28 = 0;
    func_0x010340a0(0xf,&local_28);
  }
  local_24 = local_24 & 0xffffff;
  if (DAT_005b8d18 == '\0') {
    if (DAT_003fa5ee == '\0') {
      iVar2 = 0;
    }
    else {
      DAT_003fa5ee = DAT_003fa5ee + -1;
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 1;
    DAT_003fa5ee = DAT_001c0ed9;
  }
  uVar7 = (uint)(DAT_005b88d7 != '\0');
  if (DAT_005b88d8 != '\0') {
    uVar7 = 1;
  }
  if ((((int)(uint)DAT_005b8e6b >> 6 & 1U) == 0) && ((int)(uint)DAT_005b8e6b >> 7 == 0)) {
    iVar6 = 0;
  }
  else {
    iVar6 = 1;
  }
  local_28 = (uint)kvaverbr << 8 | (uint)B_mil << 1 | (uint)DAT_003fc1d3 << 2 | iVar2 << 3 |
             (uint)DAT_003fbec5 << 4 | (uint)DAT_003fc1c9 << 6 | (uint)DAT_003fc181 << 7 |
             uVar7 << 0x18 | (uint)(DAT_005b88d8 != '\0') << 0x19 | iVar6 << 0x1a |
             (uint)B_uetmc << 0x1b | (uint)DAT_005b91cb << 0x1c;
  cVar3 = func_0x010340a0(0x15,&local_28);
  if ((cVar3 == '\0') || ((local_24 & 0x7000000) == 0)) {
    local_28 = (uint)B_kl61 << 8 | (uint)DAT_003fc1cd << 9 | (uint)DAT_003fc1ce << 10 |
               (uint)DAT_005b91c7 << 0xb | (uint)DAT_003fc1d2 << 0xf | (uint)DAT_005b91d5 << 0x10 |
               (uint)DAT_003fc1cf << 0x1f;
    func_0x010340a0(0x16,&local_28);
  }
  return;
}

