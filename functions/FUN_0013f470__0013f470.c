/*
 * Program: n42.bin
 * Function: FUN_0013f470
 * Entry: 0013f470
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013f470(void)

{
  char cVar2;
  short sVar1;
  undefined *unaff_r27;
  int iVar3;
  ushort uVar5;
  ushort uVar6;
  uint uVar4;
  int unaff_r29;
  uint uVar7;
  ushort *unaff_r31;
  
  *unaff_r31 = *unaff_r31 & 0xfffe;
  uVar5 = (((ushort)DAT_005b8b78 - (ushort)DAT_001c8469) - (ushort)DAT_001c846a) + 0x80;
  if ((short)uVar5 < 0) {
    uVar5 = 0;
  }
  uVar6 = ((ushort)DAT_005b8b78 - (ushort)DAT_001c8469) + 0x40;
  if ((short)uVar6 < 0) {
    uVar6 = 0;
  }
  cVar2 = func_0xff22214c(&UNK_003fb325,*unaff_r27,uVar5 & 0xff,uVar6 & 0xff);
  if (cVar2 == '\0') {
    *unaff_r31 = *unaff_r31 & 0xff7f;
  }
  else {
    *unaff_r31 = *unaff_r31 | 0x80;
  }
  cVar2 = func_0xff22214c(&UNK_003fb32d,ub,DAT_001c8467,DAT_001c8466);
  if (cVar2 == '\0') {
    *unaff_r31 = *unaff_r31 | 4;
  }
  else {
    *unaff_r31 = *unaff_r31 & 0xfffb;
  }
  cVar2 = func_0xff22214c(&UNK_003fb31e,nmot,DAT_001c845f,DAT_001c845d);
  if (cVar2 == '\0') {
    *unaff_r31 = *unaff_r31 | 8;
  }
  else {
    *unaff_r31 = *unaff_r31 & 0xfff7;
  }
  if (((B_genfbsd == 0) && ((DAT_003fdfc7 & 1) == 0)) && ((DAT_003fdfc1 & 1) == 0)) {
    *unaff_r31 = *unaff_r31 & 0xffdf;
  }
  else {
    *unaff_r31 = *unaff_r31 | 0x20;
  }
  if (unaff_r29 == 0) {
    *unaff_r31 = *unaff_r31 & 0xffbf;
  }
  else {
    *unaff_r31 = *unaff_r31 | 0x40;
  }
  uVar5 = *unaff_r31;
  if ((((((uVar5 & 1) == 0) && ((uVar5 & 0x80) == 0)) &&
       (((uVar5 & 2) == 0 && (((uVar5 & 4) == 0 && ((uVar5 & 8) == 0)))))) && ((uVar5 & 0x10) == 0))
     && (((uVar5 & 0x20) == 0 && ((uVar5 & 0x40) == 0)))) {
    *unaff_r31 = uVar5 | 0x400;
  }
  else {
    *unaff_r31 = uVar5 & 0xfbff;
  }
  uVar5 = *unaff_r31;
  if ((uVar5 & 0x400) == 0) {
    DAT_005b89ed = DAT_005b89ed & 0xfd;
  }
  else {
    DAT_005b89ed = DAT_005b89ed | 2;
  }
  if (((uVar5 & 0x400) == 0) || (DAT_003fb319 != '\0')) {
    DAT_003fb318 = '\0';
  }
  else {
    DAT_003fb318 = '\x01';
  }
  DAT_003fb319 = '\x01' - ((uVar5 & 0x400) == 0);
  if (DAT_003fb318 != '\0') {
    DAT_005b89f5 = tumg;
  }
  DAT_005b89f2 = func_0xff2187cc(&DAT_001c841c,nmot);
  func_0xff2226a0(&DAT_003fb31a,DAT_005b89f2,DAT_001c8463);
  DAT_005b89ef = (byte)((ushort)_DAT_003fb31a >> 8);
  func_0xff2226a0(&DAT_003fb326,dffgen,DAT_001c8464);
  DAT_005b89ee = (undefined)(_DAT_003fb326 >> 8);
  DAT_005b89e6 = (ushort)DAT_005b89ef - (_DAT_003fb326 >> 8);
  if (DAT_005b89e6 < 1) {
    iVar3 = -(int)DAT_005b89e6;
  }
  else {
    iVar3 = (int)DAT_005b89e6;
  }
  if (iVar3 < _DAT_001c8452) {
    DAT_005b89f0 = '\x03';
  }
  else if (DAT_005b89e6 < 1) {
    DAT_005b89f0 = '\x01';
  }
  else {
    DAT_005b89f0 = '\x02';
  }
  if (DAT_005b89f0 == '\x01') {
    uVar7 = (uint)_DAT_001c844e;
  }
  else if (DAT_005b89f0 == '\x02') {
    uVar7 = (uint)_DAT_001c8450;
  }
  else {
    uVar7 = (uint)_DAT_001c844c;
  }
  DAT_005b89de = (undefined2)uVar7;
  if (DAT_005b89e6 < 1) {
    iVar3 = -(int)DAT_005b89e6;
  }
  else {
    iVar3 = (int)DAT_005b89e6;
  }
  if (iVar3 < _DAT_001c845a) {
    DAT_005b89f1 = '\x03';
  }
  else if (DAT_005b89e6 < 1) {
    DAT_005b89f1 = '\x01';
  }
  else {
    DAT_005b89f1 = '\x02';
  }
  if (DAT_005b89f1 == '\x01') {
    uVar4 = (uint)_DAT_001c8456;
  }
  else if (DAT_005b89f1 == '\x02') {
    uVar4 = (uint)_DAT_001c8458;
  }
  else {
    uVar4 = (uint)_DAT_001c8454;
  }
  DAT_005b89e0 = (undefined2)uVar4;
  DAT_005b89dc = (short)((int)(((int)((int)DAT_005b89e6 * uVar7) >> 1) * (uint)_DAT_001c844a) /
                        500000) + DAT_005b89dc;
  if (DAT_005b89dc < -0xff) {
    DAT_005b89dc = -0xff;
  }
  else if (0xff < DAT_005b89dc) {
    DAT_005b89dc = 0xff;
  }
  DAT_005b89e2 = (short)((int)((int)DAT_005b89e6 * uVar4) / 1000);
  DAT_005b89e4 = DAT_005b89e2 + DAT_005b89dc;
  sVar1 = DAT_005b89e4;
  if ((*unaff_r31 & 0x400) == 0) {
    sVar1 = 0;
  }
  sVar1 = func_0xff222250((int)(short)(ushort)DAT_005b89ec - (int)(short)(ushort)DAT_001c845e,
                          (int)sVar1,(uint)DAT_005b89ec + (uint)DAT_001c8461);
  sVar1 = func_0xff222250(0,(int)sVar1,DAT_001c8460);
  if (sVar1 < 0) {
    sVar1 = 0;
  }
  else if (0xfe < sVar1) {
    sVar1 = 0xfe;
  }
  DAT_005b89ec = (char)sVar1;
  DAT_005b89ed = DAT_005b89ed & 0xfe;
  DAT_005b89e8 = DAT_001d1a26;
  if ((*unaff_r31 & 0x400) == 0) {
    DAT_005b89e8 = 0;
  }
  return;
}

