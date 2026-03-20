/*
 * Program: n42.bin
 * Function: FUN_0013f560
 * Entry: 0013f560
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013f560(int param_1,undefined4 param_2)

{
  ushort uVar1;
  char cVar3;
  short sVar2;
  undefined *unaff_r27;
  int iVar4;
  uint uVar5;
  int unaff_r29;
  uint uVar6;
  ushort *unaff_r31;
  
  cVar3 = func_0xff22214c(param_1 + -0x4ce2,param_2,DAT_001c845f,DAT_001c845d);
  if (cVar3 == '\0') {
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
  uVar1 = *unaff_r31;
  if ((((((uVar1 & 1) == 0) && ((uVar1 & 0x80) == 0)) &&
       (((uVar1 & 2) == 0 && (((uVar1 & 4) == 0 && ((uVar1 & 8) == 0)))))) && ((uVar1 & 0x10) == 0))
     && (((uVar1 & 0x20) == 0 && ((uVar1 & 0x40) == 0)))) {
    *unaff_r31 = uVar1 | 0x400;
  }
  else {
    *unaff_r31 = uVar1 & 0xfbff;
  }
  uVar1 = *unaff_r31;
  if ((uVar1 & 0x400) == 0) {
    DAT_005b89ed = DAT_005b89ed & 0xfd;
  }
  else {
    DAT_005b89ed = DAT_005b89ed | 2;
  }
  if (((uVar1 & 0x400) == 0) || (DAT_003fb319 != '\0')) {
    DAT_003fb318 = '\0';
  }
  else {
    DAT_003fb318 = '\x01';
  }
  DAT_003fb319 = '\x01' - ((uVar1 & 0x400) == 0);
  if (DAT_003fb318 != '\0') {
    DAT_005b89f5 = tumg;
  }
  DAT_005b89f2 = func_0xff2187cc(&DAT_001c841c,*unaff_r27);
  func_0xff2226a0(&DAT_003fb31a,DAT_005b89f2,DAT_001c8463);
  DAT_005b89ef = (byte)((ushort)_DAT_003fb31a >> 8);
  func_0xff2226a0(&DAT_003fb326,dffgen,DAT_001c8464);
  DAT_005b89ee = (undefined)(_DAT_003fb326 >> 8);
  DAT_005b89e6 = (ushort)DAT_005b89ef - (_DAT_003fb326 >> 8);
  if (DAT_005b89e6 < 1) {
    iVar4 = -(int)DAT_005b89e6;
  }
  else {
    iVar4 = (int)DAT_005b89e6;
  }
  if (iVar4 < _DAT_001c8452) {
    DAT_005b89f0 = '\x03';
  }
  else if (DAT_005b89e6 < 1) {
    DAT_005b89f0 = '\x01';
  }
  else {
    DAT_005b89f0 = '\x02';
  }
  if (DAT_005b89f0 == '\x01') {
    uVar6 = (uint)_DAT_001c844e;
  }
  else if (DAT_005b89f0 == '\x02') {
    uVar6 = (uint)_DAT_001c8450;
  }
  else {
    uVar6 = (uint)_DAT_001c844c;
  }
  DAT_005b89de = (undefined2)uVar6;
  if (DAT_005b89e6 < 1) {
    iVar4 = -(int)DAT_005b89e6;
  }
  else {
    iVar4 = (int)DAT_005b89e6;
  }
  if (iVar4 < _DAT_001c845a) {
    DAT_005b89f1 = '\x03';
  }
  else if (DAT_005b89e6 < 1) {
    DAT_005b89f1 = '\x01';
  }
  else {
    DAT_005b89f1 = '\x02';
  }
  if (DAT_005b89f1 == '\x01') {
    uVar5 = (uint)_DAT_001c8456;
  }
  else if (DAT_005b89f1 == '\x02') {
    uVar5 = (uint)_DAT_001c8458;
  }
  else {
    uVar5 = (uint)_DAT_001c8454;
  }
  DAT_005b89e0 = (undefined2)uVar5;
  DAT_005b89dc = (short)((int)(((int)((int)DAT_005b89e6 * uVar6) >> 1) * (uint)_DAT_001c844a) /
                        500000) + DAT_005b89dc;
  if (DAT_005b89dc < -0xff) {
    DAT_005b89dc = -0xff;
  }
  else if (0xff < DAT_005b89dc) {
    DAT_005b89dc = 0xff;
  }
  DAT_005b89e2 = (short)((int)((int)DAT_005b89e6 * uVar5) / 1000);
  DAT_005b89e4 = DAT_005b89e2 + DAT_005b89dc;
  sVar2 = DAT_005b89e4;
  if ((*unaff_r31 & 0x400) == 0) {
    sVar2 = 0;
  }
  sVar2 = func_0xff222250((int)(short)(ushort)DAT_005b89ec - (int)(short)(ushort)DAT_001c845e,
                          (int)sVar2,(uint)DAT_005b89ec + (uint)DAT_001c8461);
  sVar2 = func_0xff222250(0,(int)sVar2,DAT_001c8460);
  if (sVar2 < 0) {
    sVar2 = 0;
  }
  else if (0xfe < sVar2) {
    sVar2 = 0xfe;
  }
  DAT_005b89ec = (char)sVar2;
  DAT_005b89ed = DAT_005b89ed & 0xfe;
  DAT_005b89e8 = DAT_001d1a26;
  if ((*unaff_r31 & 0x400) == 0) {
    DAT_005b89e8 = 0;
  }
  return;
}

