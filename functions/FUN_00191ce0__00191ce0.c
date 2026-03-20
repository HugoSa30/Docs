/*
 * Program: n42.bin
 * Function: FUN_00191ce0
 * Entry: 00191ce0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00191ce0(void)

{
  byte bVar1;
  byte bVar2;
  ENUM_005b86e6 EVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  
  if (((DAT_005b961a & 0x200) != 0) && ((DAT_005b86e4 & 0x80) == 0)) {
    uVar7 = (int)((uint)msabg2_w * (0x1000 - (uint)lamzak2_w)) >> 6;
    if ((int)uVar7 < 0) {
      uVar7 = 0;
    }
    DAT_005b86ae = (undefined2)uVar7;
    bVar1 = ushk;
    if ((DAT_001cb343 & 1) != 0) {
      bVar1 = ushk2;
    }
    if ((bVar1 < DAT_001cefeb) || ((DAT_005b86e8 & 2) == 0)) {
      cVar6 = '\0';
    }
    else {
      cVar6 = '\x01';
    }
    DAT_005b8100 = cVar6 != DAT_005b8101;
    if ((bVar1 < DAT_001cefeb) || ((DAT_005b86e8 & 2) == 0)) {
      DAT_005b8101 = '\0';
    }
    else {
      DAT_005b8101 = '\x01';
    }
    if ((bool)DAT_005b8100) {
      DAT_005b80fc = 0;
    }
    if ((DAT_001cefeb <= bVar1) && ((DAT_005b86e8 & 2) != 0)) {
      uVar7 = ((int)((uint)msabg_w * (0x1000 - (uint)lamzak_w)) >> 6) + (uVar7 & 0xffff);
      if ((int)uVar7 < 0) {
        uVar7 = 0;
      }
      else if (0xffff < (int)uVar7) {
        uVar7 = 0xffff;
      }
      DAT_005b86be = (undefined2)uVar7;
      func_0xff222274(&DAT_005b80fc,(ushort)(uVar7 >> 1) & 0x7fff,0x51f);
    }
    DAT_005b86b2 = (short)((uint)DAT_005b80fc >> 0x10) * 2;
    if ((bVar1 < DAT_001cefec) || ((DAT_005b86e8 & 2) == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    DAT_005b86b6 = DAT_005b86b2;
    DAT_005b80f8 = func_0xff221e78(&DAT_005b80f9,uVar5,DAT_001cefe8);
    bVar2 = DAT_001cefdb;
    if (B_fakat != '\0') {
      bVar2 = DAT_001cefdc;
    }
    if (((uint)DAT_005b86ce * (uint)bVar2 < (uint)DAT_005b86b2 << 5) || (DAT_005b80f8 != '\0')) {
      DAT_005b86e8 = DAT_005b86e8 | 1;
    }
    else {
      DAT_005b86e8 = DAT_005b86e8 & 0xfe;
    }
    bVar2 = DAT_005b86e8;
    DAT_005b80f1 = (DAT_005b86e8 & 0x80) != 0;
    DAT_005b80ee = '\x01' - ((DAT_005b86e8 & 1) == 0);
    DAT_005b80ec = (DAT_005b86e9 & 4) != 0;
    EVar3 = B_vekatv & B_dktb;
    DAT_005b80f2 = (B_vekatv & B_dktb) !=
                   ~(B_dktb|B_dktkas|B_dktsbs|B_vekatv|B_dktsps|B_tmsdkt|B_dktbi|B_dktlbi);
    puVar4 = &DAT_005b80ec;
    func_0xff223170(&DAT_005b80ec);
    if (puVar4[3] == '\0') {
      DAT_005b86e5 = DAT_005b86e5 & 0xfe;
    }
    else {
      DAT_005b86e5 = DAT_005b86e5 | 1;
    }
    if ((DAT_005b86e5 & 1) == 0) {
      DAT_005b86e5 = DAT_005b86e5 & 0xfd;
    }
    else {
      DAT_005b86e5 = DAT_005b86e5 | 2;
    }
    if (puVar4[1] == '\0') {
      DAT_005b86e8 = bVar2 & 0xfd;
    }
    else {
      DAT_005b86e8 = bVar2 | 2;
    }
    if (puVar4[4] == '\0') {
      DAT_005b86e8 = DAT_005b86e8 & 0xfb;
    }
    else {
      DAT_005b86e8 = DAT_005b86e8 | 4;
    }
    DAT_005b86bc = (short)((int)(short)lamzak_w << 3) + -0x8000;
    DAT_005b813a = DAT_005b813c;
    DAT_005b982a = DAT_005b813c;
    if (DAT_005b86bc < 1) {
      DAT_005b86e8 = DAT_005b86e8 & 0xf7;
    }
    else {
      DAT_005b86e8 = DAT_005b86e8 | 8;
    }
    if (DAT_005b813c < 1) {
      DAT_005b86e8 = DAT_005b86e8 | 0x10;
    }
    else {
      DAT_005b86e8 = DAT_005b86e8 & 0xef;
    }
    if ((DAT_005b86e8 & 4) == 0) {
      DAT_005b8153 = '\0';
    }
    else if ((((DAT_005b86e8 & 8) != 0) && ((DAT_005b86e8 & 0x10) != 0)) &&
            ((DAT_005b86e8 & 4) != 0)) {
      DAT_005b8153 = '\x01';
    }
    if (DAT_005b8153 == '\0') {
      DAT_005b86e8 = DAT_005b86e8 & 0xdf;
    }
    else {
      DAT_005b86e8 = DAT_005b86e8 | 0x20;
    }
    uVar7 = (int)((uint)msabg2_w * (lamzak2_w - 0x1000)) >> 6;
    if ((int)uVar7 < 0) {
      uVar7 = 0;
    }
    DAT_005b86ac = (undefined2)uVar7;
    uVar7 = ((int)((uint)msabg_w * (int)DAT_005b86bc) >> 9) + (uVar7 & 0xffff);
    if ((int)uVar7 < 0) {
      uVar7 = 0;
    }
    else if (0xffff < (int)uVar7) {
      uVar7 = 0xffff;
    }
    DAT_005b86c0 = (undefined2)uVar7;
    if (((uVar7 & 0xffff) == 0) && ((DAT_005b86e8 & 0x20) != 0)) {
      DAT_005b86e8 = DAT_005b86e8 | 0x40;
    }
    else {
      DAT_005b86e8 = DAT_005b86e8 & 0xbf;
    }
    if (((DAT_005b86e8 & 0x20) == 0) && (DAT_005b8113 != '\0')) {
      DAT_005b8112 = '\x01';
    }
    else {
      DAT_005b8112 = '\0';
    }
    DAT_005b8113 = (DAT_005b86e8 & 0x20) != 0;
    if ((DAT_005b8112 != '\0') &&
       (EVar3 != ~(B_dktb|B_dktkas|B_dktsbs|B_vekatv|B_dktsps|B_tmsdkt|B_dktbi|B_dktlbi))) {
      DAT_005b86c2 = DAT_005b86d0;
      DAT_005b86ca = DAT_005b86c8;
    }
    DAT_005b815c = DAT_005b8113 != DAT_005b815d;
    if ((bool)DAT_005b815c) {
      DAT_005b80d8 = 0;
    }
    DAT_005b813c = DAT_005b86bc;
    DAT_005b815d = DAT_005b8113;
    if ((DAT_005b86e8 & 0x20) != 0) {
      func_0xff222274(&DAT_005b80d8,(short)((int)(uVar7 & 0xffff) >> 1),0x51f);
    }
    DAT_005b86b4 = (short)((uint)DAT_005b80d8 >> 0x10) * 2;
    uVar7 = (uint)((DAT_005b80d8 >> 0x10) << 0x11) / (uint)DAT_005b86ce >> 4;
    if (0xffff < uVar7) {
      uVar7 = 0xffff;
    }
    DAT_005b86c8 = (undefined2)uVar7;
    DAT_005b86d0 = DAT_005b86b4;
    if ((((DAT_005b86e8 & 4) == 0) || (DAT_001cefea < bVar1)) &&
       ((B_fakat != '\0' || (((DAT_005b86e8 & 4) == 0 || ((uVar7 & 0xffff) < (uint)_DAT_001cefc8))))
       )) {
      DAT_005b86e8 = DAT_005b86e8 & 0x7f;
    }
    else {
      DAT_005b86e8 = DAT_005b86e8 | 0x80;
    }
  }
  return;
}

