/*
 * Program: n42.bin
 * Function: FUN_0018ca0c
 * Entry: 0018ca0c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x0018d610) */
/* WARNING: Removing unreachable block (ram,0x0018cf00) */
/* WARNING: Removing unreachable block (ram,0x0018d018) */
/* WARNING: Removing unreachable block (ram,0x0018d7b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018ca0c(void)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ushort uVar11;
  ushort local_64;
  ushort local_60 [2];
  ushort local_5c [2];
  ushort *local_58;
  ushort local_54 [2];
  ushort *local_50;
  
  local_64 = _DAT_003fdf2a;
  if ((DAT_005b961a & 0x200) == 0) {
    local_64 = _DAT_003fdf2a & 0xd0fc | 0x2002;
    local_60[0] = local_64;
    local_58 = local_60;
    local_5c[0] = local_64;
    func_0xff222958(100,local_5c);
  }
  if (DAT_001cefe5 < tmst) {
    DAT_005b86e4 = DAT_005b86e4 & 0x7f;
  }
  else {
    DAT_005b86e4 = DAT_005b86e4 | 0x80;
  }
  if ((DAT_005b961a & 0x200) == 0) {
    return;
  }
  if ((DAT_005b86e4 & 0x80) != 0) {
    return;
  }
  func_0xff222550(&DAT_005b80d4,msabg,DAT_001cefed);
  uVar11 = (ushort)msabg - (DAT_005b80d4 >> 8);
  if ((short)uVar11 < 1) {
    uVar11 = -uVar11;
  }
  DAT_005b86ea = (undefined)uVar11;
  if ((uVar11 & 0xff) < (ushort)DAT_001cefd7) {
    DAT_005b86e9 = DAT_005b86e9 & 0xfe;
  }
  else {
    DAT_005b86e9 = DAT_005b86e9 | 1;
  }
  if ((lamsons2_w == lamsons_w) && (DAT_005b86ba == lamsons_w)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((bVar3) || ((DAT_005b86e5 & 1) == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  DAT_005b811b = func_0xff221e78(&DAT_005b811c,uVar7,10);
  if (((DAT_005b86e7 & 8) == 0) && (B_nswo2 == '\0')) {
    if (B_fakat != '\0') {
      if (((_DAT_001cefc4 <= msabg_w) && (msabg_w <= _DAT_001cefbe)) &&
         ((DAT_005b961a & 0x800) != 0)) goto LAB_0018ccec;
      goto LAB_0018cd34;
    }
    if (((msabg_w < _DAT_001cefc2) || (_DAT_001cefbc < msabg_w)) &&
       ((msabg_w < _DAT_001cefc0 || (_DAT_001cefba < msabg_w)))) goto LAB_0018cd34;
LAB_0018ccec:
    if (((B_fakat == '\0') && (DAT_005b8168 != 0)) ||
       (((DAT_005b86e9 & 1) != 0 || ((DAT_005b811b != '\0' || ((DAT_005b86e8 & 0x40) != 0))))))
    goto LAB_0018cd34;
    DAT_005b86e9 = DAT_005b86e9 & 0xfd;
  }
  else {
LAB_0018cd34:
    DAT_005b86e9 = DAT_005b86e9 | 2;
  }
  if (((DAT_005b86e7 & 2) == 0) && ((DAT_005b86e9 & 2) == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  DAT_005b8156 = func_0xff221f18(&DAT_005b8157,uVar7,DAT_001cefe9);
  if (DAT_005b8156 == '\0') {
    B_vekatv = B_vekatv | B_dktb;
  }
  else {
    B_vekatv = B_vekatv & (B_dktkas|B_dktsbs|B_vekatv|B_dktsps|B_tmsdkt|B_dktbi|B_dktlbi);
  }
  if (((((B_vekatv & B_dktb) ==
         ~(B_dktb|B_dktkas|B_dktsbs|B_vekatv|B_dktsps|B_tmsdkt|B_dktbi|B_dktlbi)) ||
       (lamzak_w < _DAT_001cefb0)) || (_DAT_001cefae < lamzak_w)) ||
     ((lamzak2_w < _DAT_001cefb0 || (_DAT_001cefae < lamzak2_w)))) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  DAT_005b80be = func_0xff221e78(&DAT_005b80bf,uVar7,DAT_001cefe7);
  if (DAT_005b80be == '\0') {
    DAT_005b86e9 = DAT_005b86e9 & 0xfb;
  }
  else {
    DAT_005b86e9 = DAT_005b86e9 | 4;
  }
  if (((DAT_005b86e8 & 4) == 0) && (DAT_005b80e7 != '\0')) {
    DAT_005b80e6 = true;
  }
  else {
    DAT_005b80e6 = false;
  }
  DAT_005b80e7 = '\x01' - ((DAT_005b86e8 & 4) == 0);
  if (((bool)DAT_005b80e6) &&
     ((B_vekatv & B_dktb) != ~(B_dktb|B_dktkas|B_dktsbs|B_vekatv|B_dktsps|B_tmsdkt|B_dktbi|B_dktlbi)
     )) {
    uVar9 = DAT_005b8143 + 1;
    if (0xffff < uVar9) {
      uVar9 = 0xffff;
    }
    DAT_005b8143 = (byte)uVar9;
  }
  DAT_005b86df = DAT_005b8143;
  uVar9 = (uint)DAT_005b86ca;
  if (DAT_005b86d8 < uVar9) {
    if ((bool)DAT_005b80e6) {
      if ((B_vekatv & B_dktb) ==
          ~(B_dktb|B_dktkas|B_dktsbs|B_vekatv|B_dktsps|B_tmsdkt|B_dktbi|B_dktlbi))
      goto LAB_0018cf70;
      goto LAB_0018cf90;
    }
  }
  else {
LAB_0018cf70:
    if ((((bool)DAT_005b80e6) &&
        ((B_vekatv & B_dktb) !=
         ~(B_dktb|B_dktkas|B_dktsbs|B_vekatv|B_dktsps|B_tmsdkt|B_dktbi|B_dktlbi))) &&
       (DAT_005b8143 == 1)) {
LAB_0018cf90:
      DAT_005b86d8 = DAT_005b86ca;
    }
  }
  if (uVar9 < DAT_005b86d4) {
    if (!(bool)DAT_005b80e6) goto LAB_0018d03c;
    if ((B_vekatv & B_dktb) ==
        ~(B_dktb|B_dktkas|B_dktsbs|B_vekatv|B_dktsps|B_tmsdkt|B_dktbi|B_dktlbi)) goto LAB_0018cfc8;
LAB_0018cfe8:
    DAT_005b86d4 = DAT_005b86ca;
  }
  else {
LAB_0018cfc8:
    if (!(bool)DAT_005b80e6) goto LAB_0018d03c;
    if (((B_vekatv & B_dktb) !=
         ~(B_dktb|B_dktkas|B_dktsbs|B_vekatv|B_dktsps|B_tmsdkt|B_dktbi|B_dktlbi)) &&
       (DAT_005b8143 == 1)) goto LAB_0018cfe8;
  }
  if (((bool)DAT_005b80e6) &&
     ((B_vekatv & B_dktb) != ~(B_dktb|B_dktkas|B_dktsbs|B_vekatv|B_dktsps|B_tmsdkt|B_dktbi|B_dktlbi)
     )) {
    uVar9 = (uint)DAT_005b8160 + ((int)uVar9 >> 3);
    if (0xffff < uVar9) {
      uVar9 = 0xffff;
    }
    DAT_005b8160 = (ushort)uVar9;
  }
LAB_0018d03c:
  uVar9 = (uint)DAT_005b8160;
  DAT_005b86cc = DAT_005b8160;
  DAT_005b8138 = B_fakat != DAT_005b8139;
  DAT_005b8139 = B_fakat;
  if ((bool)DAT_005b8138) {
    DAT_005b86df = 0;
  }
  bVar1 = DAT_001cefce;
  if (B_fakat != '\0') {
    bVar1 = DAT_001cefcf;
  }
  uVar6 = (uint)DAT_005b86df;
  if ((bVar1 <= uVar6) || ((bool)DAT_005b8138)) {
    if (uVar6 == 0) {
      uVar4 = (uint)DAT_005b8160 << 0x10;
    }
    else {
      uVar4 = ((uint)DAT_005b8160 << 0x10) / uVar6;
    }
    if (uVar4 >> 0xd < 0x10000) {
      DAT_005b86c6 = (ushort)(uVar4 >> 0xd);
    }
    else {
      DAT_005b86c6 = 0xffff;
    }
    DAT_005b8160 = 0;
    DAT_005b8143 = 0;
  }
  bVar1 = DAT_001cefce;
  if (B_fakat != '\0') {
    bVar1 = DAT_001cefcf;
  }
  if ((bVar1 <= uVar6) && ((DAT_001cefd6 & 1) == 0)) {
    DAT_005b86c4 = DAT_005b86c6;
  }
  uVar4 = (uint)DAT_005b86d8 - (uint)DAT_005b86c6;
  if ((int)uVar4 < 0) {
    uVar4 = 0;
  }
  DAT_005b86d6 = (undefined2)uVar4;
  uVar5 = (uint)DAT_005b86d4;
  uVar8 = DAT_005b86c6 - uVar5;
  if ((int)uVar8 < 0) {
    uVar8 = 0;
  }
  DAT_005b86d2 = (undefined2)uVar8;
  bVar1 = DAT_001cefce;
  if (B_fakat != '\0') {
    bVar1 = DAT_001cefcf;
  }
  if (((DAT_001cefd6 & 1) != 0) && (bVar1 <= uVar6)) {
    if ((uVar8 & 0xffff) < (uVar4 & 0xffff)) {
      uVar5 = (uint)DAT_005b86d8;
    }
    bVar1 = DAT_001cefce;
    if (B_fakat != '\0') {
      bVar1 = DAT_001cefcf;
    }
    if ((short)(bVar1 - 1) == 0) {
      iVar10 = (uVar9 * 8 - uVar5) * 0x800;
    }
    else {
      iVar10 = (int)((uVar9 * 8 - uVar5) * 0x800) / (int)(short)(bVar1 - 1);
    }
    iVar10 = iVar10 >> 0xb;
    if (iVar10 < 0) {
      iVar10 = 0;
    }
    else if (0xffff < iVar10) {
      iVar10 = 0xffff;
    }
    DAT_005b86c4 = (ushort)iVar10;
  }
  if (((DAT_005b80c5 == '\0') && (DAT_005b8119 == '\0')) && (DAT_005b8145 != '\0')) {
    DAT_005b8144 = '\x01';
  }
  else {
    DAT_005b8144 = '\0';
  }
  if ((DAT_005b80c5 == '\0') && (DAT_005b8119 == '\0')) {
    DAT_005b8145 = 0;
  }
  else {
    DAT_005b8145 = 1;
  }
  DAT_005b8149 = B_fakat != DAT_005b814a;
  DAT_005b814a = B_fakat;
  DAT_005b8110 = func_0xff221f18(&DAT_005b8111,DAT_005b8149,0x18);
  uVar11 = _DAT_001cefc6;
  bVar1 = DAT_001cefce;
  if (B_fakat != '\0') {
    uVar11 = _DAT_001cefca;
    bVar1 = DAT_001cefcf;
  }
  if ((DAT_005b8149 == '\0') && ((DAT_005b8110 != '\0' || (DAT_005b8144 == '\0')))) {
    if ((bVar1 <= DAT_005b86df) && (DAT_005b86c4 < uVar11)) {
      DAT_005b8116 = '\x01';
    }
  }
  else {
    DAT_005b8116 = '\0';
  }
  if (DAT_005b8116 == '\0') {
    B_vekatv = B_vekatv & (B_dktb|B_dktkas|B_dktsbs|B_vekatv|B_tmsdkt|B_dktbi|B_dktlbi);
  }
  else {
    B_vekatv = B_vekatv | B_dktsps;
  }
  if ((B_vekatv & B_dktsps) !=
      ~(B_dktb|B_dktkas|B_dktsbs|B_vekatv|B_dktsps|B_tmsdkt|B_dktbi|B_dktlbi)) {
    DAT_003fdbb4 = DAT_003fdbb4 | 1;
  }
  if ((DAT_003fdbb4 & 1) == 0) {
    DAT_003fdbb4 = DAT_003fdbb4 & 0xfd;
  }
  else {
    DAT_003fdbb4 = DAT_003fdbb4 | 2;
  }
  if ((((DAT_005b8110 == '\0') && (DAT_005b8144 != '\0')) && ((DAT_005b86e7 & 0x40) == 0)) &&
     (((DAT_005b86e2 & 0x40) == 0 && ((DAT_005b86e7 & 0x20) == 0)))) {
    DAT_005b86e9 = DAT_005b86e9 | 8;
  }
  else {
    DAT_005b86e9 = DAT_005b86e9 & 0xf7;
  }
  uVar11 = _DAT_001cefc6;
  bVar1 = DAT_001cefce;
  if (B_fakat != '\0') {
    uVar11 = _DAT_001cefca;
    bVar1 = DAT_001cefcf;
  }
  if ((((DAT_005b86e9 & 8) != 0) || ((bVar1 <= DAT_005b86df && (uVar11 <= DAT_005b86c4)))) ||
     (DAT_005b8149 != '\0')) {
    DAT_003fdbb4 = DAT_003fdbb4 & 0xfc;
  }
  uVar11 = _DAT_001cefc6;
  bVar1 = DAT_001cefce;
  if (B_fakat != '\0') {
    uVar11 = _DAT_001cefca;
    bVar1 = DAT_001cefcf;
  }
  if ((DAT_005b86df < bVar1) || (DAT_005b86c4 < uVar11)) {
    DAT_005b86e9 = DAT_005b86e9 & 0xef;
  }
  else {
    DAT_005b86e9 = DAT_005b86e9 | 0x10;
  }
  if (((DAT_005b86e9 & 8) == 0) && ((DAT_005b86e9 & 0x10) == 0)) {
    DAT_005b86e9 = DAT_005b86e9 & 0xdf;
  }
  else {
    DAT_005b86e9 = DAT_005b86e9 | 0x20;
  }
  if (((DAT_005b86e9 & 0x20) == 0) || (DAT_005b80d1 != '\0')) {
    DAT_005b80d0 = false;
  }
  else {
    DAT_005b80d0 = true;
  }
  DAT_005b80d1 = '\x01' - ((DAT_005b86e9 & 0x20) == 0);
  if ((bool)DAT_005b80d0) {
    uVar9 = DAT_005b812b + 1;
    if (0xffff < uVar9) {
      uVar9 = 0xffff;
    }
    DAT_005b812b = (byte)uVar9;
  }
  bVar1 = DAT_005b812b;
  DAT_005b86de = DAT_005b812b;
  DAT_005b8106 = B_fakat != DAT_005b8107;
  DAT_005b8107 = B_fakat;
  if ((bool)DAT_005b8106) {
    DAT_005b812b = 0;
    DAT_005b813f = 0;
  }
  if (((uint)DAT_005b8b62 << 4 < (uint)DAT_005b8b5e * (uint)DAT_001cefd9) || (DAT_005b8142 != '\0'))
  {
    DAT_005b8141 = '\0';
  }
  else {
    DAT_005b8141 = '\x01';
  }
  DAT_005b8142 = -(((uint)DAT_005b8b62 << 4 < (uint)DAT_005b8b5e * (uint)DAT_001cefd9) + -1);
  if ((((DAT_005b8141 == '\0') || ((uint)DAT_001cefdf << 8 < (uint)DAT_005b868a)) ||
      ((DAT_005b86e2 & 4) != 0)) || (bVar1 != 0)) {
    DAT_005b86e9 = DAT_005b86e9 & 0xbf;
  }
  else {
    DAT_005b86e9 = DAT_005b86e9 | 0x40;
  }
  if (((DAT_005b86e9 & 0x10) == 0) || (DAT_005b8147 != '\0')) {
    DAT_005b8146 = false;
  }
  else {
    DAT_005b8146 = true;
  }
  DAT_005b8147 = '\x01' - ((DAT_005b86e9 & 0x10) == 0);
  if ((bool)DAT_005b8146) {
    uVar9 = DAT_005b813f + 1;
    if (0xffff < uVar9) {
      uVar9 = 0xffff;
    }
    DAT_005b813f = (byte)uVar9;
  }
  DAT_005b86e1 = DAT_005b813f;
  if ((short)((ushort)bVar1 - (ushort)DAT_005b813f) < 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (ushort)bVar1 - (ushort)DAT_005b813f & 0xff;
  }
  DAT_005b86e0 = (undefined)uVar11;
  uVar2 = (ushort)DAT_005b813f;
  if ((bool)DAT_005b8106) {
    DAT_005b8150 = '\0';
  }
  else if ((((DAT_005b86e9 & 0x40) != 0) || (DAT_001cefd0 <= bVar1)) ||
          ((DAT_005b813f != 0 && (uVar11 <= uVar2)))) {
    DAT_005b8150 = '\x01';
  }
  if (DAT_005b8150 == '\0') {
    DAT_005b86e9 = DAT_005b86e9 & 0x7f;
  }
  else {
    DAT_005b86e9 = DAT_005b86e9 | 0x80;
  }
  if (((DAT_005b813f != 0) && (uVar11 <= uVar2)) || ((DAT_005b86e9 & 0x40) != 0)) {
    local_64 = local_64 & 0xd0fc | 0x2002;
  }
  if (((DAT_005b813f == 0) || (uVar2 < uVar11)) &&
     (((DAT_005b86e9 & 0x40) == 0 && ((DAT_005b86e9 & 8) != 0)))) {
    local_64 = local_64 & 0xd0fc | 0x2203;
  }
  if ((DAT_005b86e8 & 4) == 0) {
    if ((DAT_005b86e8 & 2) == 0) {
      DAT_005b86b8 = 0x1000;
    }
    else {
      DAT_005b86b8 = _DAT_001cefb2;
      if (B_fakat != '\0') {
        DAT_005b86b8 = _DAT_001cefb4;
      }
    }
  }
  else {
    DAT_005b86b8 = _DAT_001cefb6;
    if (B_fakat != '\0') {
      DAT_005b86b8 = _DAT_001cefb8;
    }
  }
  if (((DAT_005b86e9 & 0x20) != 0) || ((DAT_005b86e9 & 0x40) != 0)) {
    uVar11 = DAT_005b86c4;
    if ((DAT_005b86e9 & 0x40) != 0) {
      uVar11 = _DAT_001cefc8;
    }
    iVar10 = 0xff - ((uint)DAT_001cefda * (uint)uVar11 >> 0xc);
    if ((short)iVar10 < 0) {
      avkatf = 0;
    }
    else {
      avkatf = (undefined)iVar10;
    }
  }
  local_60[0] = local_64;
  local_50 = local_60;
  local_54[0] = local_64;
  DAT_005b86ba = DAT_005b86b8;
  func_0xff222958(100,local_54);
                    /* WARNING: Read-only address (ram,0x003fdf2a) is written */
                    /* WARNING: Read-only address (ram,0x005b80d4) is written */
  return;
}

