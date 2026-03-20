/*
 * Program: n42.bin
 * Function: FUN_000bd2c8
 * Entry: 000bd2c8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000bd2c8(void)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  ushort uVar8;
  
  if (zzyl != 0) {
    return;
  }
  uVar3 = zrph_l - DAT_005b9d6c;
  if ((DAT_005b97c6 >> 4 & 1) != 0) {
    B_ph3flok = (byte)((((uint)(byte)((uVar3 == 4) << 1) << 8) >> 9) << 3) | B_ph3flok & 0xf7;
  }
  DAT_005b8de9 = (undefined)DAT_005b97d2;
  uVar5 = (uint)DAT_005b8df5;
  uVar6 = (ushort)DAT_005b8df5;
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0xff < (int)uVar3) {
    uVar3 = 0xff;
  }
  DAT_005b8df5 = (byte)uVar3;
  DAT_005b9d6c = zrph_l;
  uVar3 = (uVar3 & 0xff) + uVar5 + (DAT_005b97d2 & 0xff);
  bVar1 = uVar3 - 0xb < 3;
  uVar8 = DAT_005b97d2 & 0xff;
  if ((bVar1) && (uVar8 != 0xfe)) {
    DAT_005b8dda = DAT_005b8dda & 0xfe | 1;
  }
  else {
    DAT_005b8dda = DAT_005b8dda & 0xfe;
  }
  if ((bVar1) || (uVar3 < 2)) {
    cVar4 = '\x01';
  }
  else {
    cVar4 = '\0';
  }
  DAT_003faaa0 = '\x01' - (cVar4 == DAT_003faaa1);
  if ((bVar1) || (uVar3 < 2)) {
    DAT_003faaa1 = 1;
  }
  else {
    DAT_003faaa1 = 0;
  }
  DAT_005b97d2 = uVar6;
  if (uVar8 != 0xfe) {
    FUN_000b1d08(&DAT_003faa97);
    DAT_005b8dee = DAT_003faa97;
  }
  if (DAT_005b8dee < DAT_001c1b4d) {
    if ((DAT_005b8dda & 1) != 0) {
      DAT_005b97c6 = DAT_005b97c6 & 0xfe;
      DAT_005b97c7 = DAT_005b97c7 & 0xee;
    }
  }
  else {
    if (uVar3 < 2) {
      DAT_003faa9a = (*(code *)&SUB_00065aac)(&DAT_003faa9b,0);
    }
    if ((bVar1) || (uVar3 < 2)) {
      DAT_005b97c6 = DAT_005b97c6 & 0xfe;
    }
    else {
      DAT_005b97c6 = DAT_005b97c6 & 0xfe | 1;
    }
    if ((uVar3 < 2) && (DAT_003faa9b != '\0')) {
      DAT_005b97c7 = DAT_005b97c7 & 0xef | 0x10;
    }
    else {
      DAT_005b97c7 = DAT_005b97c7 & 0xef;
    }
    if ((DAT_003faa9b == '\0') && (uVar3 < 2)) {
      DAT_005b97c7 = DAT_005b97c7 & 0xfe | 1;
    }
    else {
      DAT_005b97c7 = DAT_005b97c7 & 0xfe;
    }
    DAT_003faa9d = '\0';
  }
  bVar2 = DAT_005b8de3;
  if ((DAT_001c1b4d <= DAT_005b8dee) ||
     (((DAT_003faa9d == '\0' && (DAT_003faaa0 != '\0')) || (bVar1)))) {
    DAT_003faa97 = 0;
    DAT_005b8dee = 0;
  }
  if (DAT_003faaa0 != '\0') {
    DAT_003faa9d = '\x01';
  }
  if (zzyl != 0) {
    return;
  }
  uVar3 = zrph4_l - DAT_005b9d70;
  if ((DAT_005b97c6 >> 4 & 1) != 0) {
    B_ph3flok = (byte)(((uint)(byte)((uVar3 == 4) << 1) << 8) >> 9) | B_ph3flok & 0xfe;
  }
  DAT_005b97c6 = DAT_005b97c6 & 0xef | 0x10;
  DAT_005b8de4 = DAT_005b8de3;
  uVar5 = (uint)DAT_005b8df2;
  DAT_005b8de3 = DAT_005b8df2;
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0xff < (int)uVar3) {
    uVar3 = 0xff;
  }
  DAT_005b8df2 = (byte)uVar3;
  DAT_005b9d70 = zrph4_l;
  uVar3 = (uVar3 & 0xff) + uVar5 + (uint)bVar2;
  bVar1 = uVar3 - 0xb < 3;
  if ((bVar1) || (uVar3 < 2)) {
    cVar4 = '\x01';
  }
  else {
    cVar4 = '\0';
  }
  DAT_003faa91 = '\x01' - (cVar4 == DAT_003faa92);
  if ((bVar1) || (uVar3 < 2)) {
    DAT_003faa92 = 1;
  }
  else {
    DAT_003faa92 = 0;
  }
  if ((bVar1) && (bVar2 != 0xfe)) {
    DAT_005b8dda = DAT_005b8dda & 0xfd | 2;
  }
  else {
    DAT_005b8dda = DAT_005b8dda & 0xfd;
  }
  if (bVar2 != 0xfe) {
    FUN_000b1d08(&DAT_003faa93);
    DAT_005b8def = DAT_003faa93;
  }
  if (DAT_005b8def < DAT_001c1b4d) {
    if ((DAT_005b8dda >> 1 & 1) != 0) {
      DAT_005b97c6 = DAT_005b97c6 & 0xfd;
      DAT_005b97c7 = DAT_005b97c7 & 0xdd;
    }
  }
  else {
    if (uVar3 < 2) {
      DAT_003faa9a = (*(code *)&SUB_00065aac)(&DAT_003faa9b,1);
    }
    if ((bVar1) || (uVar3 < 2)) {
      DAT_005b97c6 = DAT_005b97c6 & 0xfd;
    }
    else {
      DAT_005b97c6 = DAT_005b97c6 & 0xfd | 2;
    }
    if ((uVar3 < 2) && (DAT_003faa9b != '\0')) {
      DAT_005b97c7 = DAT_005b97c7 & 0xdf | 0x20;
    }
    else {
      DAT_005b97c7 = DAT_005b97c7 & 0xdf;
    }
    if ((DAT_003faa9b == '\0') && (uVar3 < 2)) {
      DAT_005b97c7 = DAT_005b97c7 & 0xfd | 2;
    }
    else {
      DAT_005b97c7 = DAT_005b97c7 & 0xfd;
    }
    DAT_003faa94 = '\0';
  }
  bVar2 = DAT_005b8de5;
  if ((DAT_001c1b4d <= DAT_005b8def) ||
     (((DAT_003faa94 == '\0' && (DAT_003faa91 != '\0')) || (bVar1)))) {
    DAT_003faa93 = 0;
    DAT_005b8def = 0;
  }
  if (DAT_003faa91 != '\0') {
    DAT_003faa94 = '\x01';
  }
  uVar3 = DAT_005b9dc4 - DAT_005b9d74;
  if ((DAT_005b97c6 >> 4 & 1) != 0) {
    B_ph3flok = (uVar3 == 0) << 1 | B_ph3flok & 0xfd;
  }
  DAT_005b97c6 = DAT_005b97c6 & 0xef | 0x10;
  DAT_005b8de6 = DAT_005b8de5;
  uVar5 = (uint)DAT_005b8df3;
  DAT_005b8de5 = DAT_005b8df3;
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0xff < (int)uVar3) {
    uVar3 = 0xff;
  }
  DAT_005b8df3 = (byte)uVar3;
  DAT_005b9d74 = DAT_005b9dc4;
  uVar3 = (uVar3 & 0xff) + uVar5 + (uint)bVar2;
  bVar1 = uVar3 < 2;
  if ((bVar1) && (bVar2 != 0xfe)) {
    DAT_005b8dda = DAT_005b8dda & 0xfb | 4;
  }
  else {
    DAT_005b8dda = DAT_005b8dda & 0xfb;
  }
  if ((bVar1) || (uVar3 < 2)) {
    cVar4 = '\x01';
  }
  else {
    cVar4 = '\0';
  }
  DAT_003faaa9 = '\x01' - (cVar4 == DAT_003faaaa);
  if ((bVar1) || (uVar3 < 2)) {
    DAT_003faaaa = 1;
  }
  else {
    DAT_003faaaa = 0;
  }
  if (bVar2 != 0xfe) {
    FUN_000b1d08(&DAT_003faaa7);
    DAT_005b8df0 = DAT_003faaa7;
  }
  if (DAT_005b8df0 < DAT_001c1b4d) {
    if ((DAT_005b8dda >> 2 & 1) != 0) {
      DAT_005b97c6 = DAT_005b97c6 & 0xfb;
      DAT_005b97c7 = DAT_005b97c7 & 0xbb;
    }
  }
  else {
    if (uVar3 < 2) {
      DAT_003faa9a = (*(code *)&SUB_00065aac)(&DAT_003faa9b,2);
LAB_000bdb50:
      DAT_005b97c6 = DAT_005b97c6 & 0xfb;
    }
    else {
      if (uVar3 < 2) goto LAB_000bdb50;
      DAT_005b97c6 = DAT_005b97c6 & 0xfb | 4;
    }
    if ((uVar3 < 2) && (DAT_003faa9b != '\0')) {
      DAT_005b97c7 = DAT_005b97c7 & 0xbf | 0x40;
    }
    else {
      DAT_005b97c7 = DAT_005b97c7 & 0xbf;
    }
    if ((DAT_003faa9b == '\0') && (uVar3 < 2)) {
      DAT_005b97c7 = DAT_005b97c7 & 0xfb | 4;
    }
    else {
      DAT_005b97c7 = DAT_005b97c7 & 0xfb;
    }
    DAT_003faaa6 = '\0';
  }
  bVar2 = DAT_005b8de7;
  if ((DAT_001c1b4d <= DAT_005b8df0) ||
     (((DAT_003faaa6 == '\0' && (DAT_003faaa9 != '\0')) || (bVar1)))) {
    DAT_003faaa7 = 0;
    DAT_005b8df0 = 0;
  }
  if (DAT_003faaa9 != '\0') {
    DAT_003faaa6 = '\x01';
  }
  DAT_005b8de8 = DAT_005b8de7;
  uVar5 = (uint)DAT_005b8df4;
  DAT_005b8de7 = DAT_005b8df4;
  uVar3 = DAT_005b9dc8 - DAT_005b9d78;
  if ((int)uVar3 < 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = uVar3;
    if (0xff < (int)uVar3) {
      uVar7 = 0xff;
    }
  }
  DAT_005b8df4 = (byte)uVar7;
  DAT_005b9d78 = DAT_005b9dc8;
  uVar5 = (uVar7 & 0xff) + uVar5 + (uint)bVar2;
  bVar1 = uVar5 < 2;
  if ((bVar1) && (bVar2 != 0xfe)) {
    DAT_005b8dda = DAT_005b8dda & 0xf7 | 8;
  }
  else {
    DAT_005b8dda = DAT_005b8dda & 0xf7;
  }
  if ((bVar1) || (uVar5 < 2)) {
    cVar4 = '\x01';
  }
  else {
    cVar4 = '\0';
  }
  DAT_003faaa3 = '\x01' - (cVar4 == DAT_003faaa4);
  if ((bVar1) || (uVar5 < 2)) {
    DAT_003faaa4 = 1;
  }
  else {
    DAT_003faaa4 = 0;
  }
  if (bVar2 != 0xfe) {
    FUN_000b1d08(&DAT_003faaa2);
    DAT_005b8df1 = DAT_003faaa2;
  }
  if (DAT_005b8df1 < DAT_001c1b4d) {
    if ((DAT_005b8dda >> 3 & 1) != 0) {
      DAT_005b97c6 = DAT_005b97c6 & 0xf7;
      DAT_005b97c7 = DAT_005b97c7 & 0x77;
    }
    goto LAB_000bdf10;
  }
  if (uVar5 < 2) {
    DAT_003faa9a = (*(code *)&SUB_00065aac)(&DAT_003faa9b,3);
LAB_000bde34:
    DAT_005b97c6 = DAT_005b97c6 & 0xf7;
  }
  else {
    if (uVar5 < 2) goto LAB_000bde34;
    DAT_005b97c6 = DAT_005b97c6 & 0xf7 | 8;
  }
  if ((uVar5 < 2) && (DAT_003faa9b != '\0')) {
    DAT_005b97c7 = DAT_005b97c7 & 0x7f | 0x80;
  }
  else {
    DAT_005b97c7 = DAT_005b97c7 & 0x7f;
  }
  if ((DAT_003faa9b == '\0') && (uVar5 < 2)) {
    DAT_005b97c7 = DAT_005b97c7 & 0xf7 | 8;
  }
  else {
    DAT_005b97c7 = DAT_005b97c7 & 0xf7;
  }
  DAT_003faaab = '\0';
LAB_000bdf10:
  if ((DAT_001c1b4d <= DAT_005b8df1) ||
     (((DAT_003faaab == '\0' && (DAT_003faaa3 != '\0')) || (bVar1)))) {
    DAT_003faaa2 = 0;
    DAT_005b8df1 = 0;
  }
  if (DAT_003faaa3 != '\0') {
    DAT_003faaab = '\x01';
  }
  if ((DAT_005b97c6 >> 4 & 1) != 0) {
    B_ph3flok = (uVar3 == 0) << 2 | B_ph3flok & 0xfb;
  }
  DAT_005b97c6 = DAT_005b97c6 & 0xef | 0x10;
                    /* WARNING: Read-only address (ram,0x003faa9b) is written */
                    /* WARNING: Read-only address (ram,0x005b9dc4) is written */
                    /* WARNING: Read-only address (ram,0x005b9dc8) is written */
  return;
}

