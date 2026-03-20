/*
 * Program: n42.bin
 * Function: FUN_0016f968
 * Entry: 0016f968
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0016f968(void)

{
  byte bVar1;
  undefined uVar6;
  short sVar4;
  ushort uVar5;
  uint uVar2;
  uint uVar3;
  uint uVar7;
  
  if ((DAT_005b8d01 == '\0') && (DAT_005b8d01 = '\x01', B_pwf != '\0')) {
    DAT_003fdc58 = DAT_001c69f6;
  }
  bVar1 = tans;
  if ((_DAT_001c69f4 & 1) != 0) {
    bVar1 = DAT_005b90d4;
  }
  DAT_005b99ee = (ushort)bVar1 - (ushort)tmot;
  if (B_stend == '\0') {
    uVar2 = func_0xff2196d0(&DAT_001c6938,tmot,nmot);
    _DAT_003faddc = (ushort)((uVar2 & 0xff) << 8);
    sVar4 = func_0xff218abc(&DAT_001c69c4,(int)DAT_005b99ee);
    if (sVar4 < -0x80) {
      sVar4 = -0x80;
    }
    else if (0x7f < sVar4) {
      sVar4 = 0x7f;
    }
    _DAT_003fadde = (undefined2)((int)(char)sVar4 << 8);
    uVar2 = func_0xff2196d0(&DAT_001c6904,vfzg,taml);
    _DAT_003fade0 = (ushort)((uVar2 & 0xff) << 8);
  }
  else {
    uVar6 = func_0xff2196d0(&DAT_001c6938,tmot,nmot);
    func_0xff2226a0(&DAT_003faddc,uVar6,DAT_001c69f8);
    sVar4 = func_0xff218abc(&DAT_001c69c4,(int)DAT_005b99ee);
    if (sVar4 < -0x80) {
      sVar4 = -0x80;
    }
    else if (0x7f < sVar4) {
      sVar4 = 0x7f;
    }
    func_0xff2225e8(&DAT_003fadde,(int)(char)sVar4,DAT_001c69f7);
    uVar6 = func_0xff2196d0(&DAT_001c6904,vfzg,taml);
    func_0xff2226a0(&DAT_003fade0,uVar6,DAT_001c69f9);
  }
  DAT_005b8e3b = (undefined)(_DAT_003faddc >> 8);
  DAT_005b8e38 = (char)((uint)((int)(short)(char)((ushort)_DAT_003fadde >> 8) *
                              (int)(short)(_DAT_003fade0 >> 8)) >> 8);
  sVar4 = (_DAT_003faddc >> 9) + (short)DAT_005b8e38 + -0x20;
  if (sVar4 < -0x80) {
    sVar4 = -0x80;
  }
  else if (0x7f < sVar4) {
    sVar4 = 0x7f;
  }
  DAT_005b8e39 = (char)sVar4;
  uVar5 = func_0xff2187cc(&DAT_001c69e0,DAT_005b91d6);
  sVar4 = (short)((uint)((((short)(char)sVar4 * 2 - (int)(short)(ushort)tumg) + 0x40) *
                        (int)(short)(uVar5 & 0xff)) >> 8);
  if (sVar4 < -0x80) {
    sVar4 = -0x80;
  }
  else if (0x7f < sVar4) {
    sVar4 = 0x7f;
  }
  DAT_005b8e3a = (char)sVar4;
  DAT_005b99f2 = DAT_005b8e39 * 2 + DAT_005b8e3a * -2;
  if (DAT_005b99f2 < -0x100) {
    DAT_005b99f2 = -0x100;
  }
  else if (0xff < DAT_005b99f2) {
    DAT_005b99f2 = 0xff;
  }
  if (B_stend == '\0') {
    uVar2 = func_0xff21984c(&DAT_001c683c,DAT_003fdba1,tabst_w);
    uVar5 = (ushort)DAT_003fdc58;
    uVar7 = (uint)tmot;
    uVar3 = func_0xff2189bc(0x1c699e,tabst_w);
    DAT_005b99f0 = ((ushort)tmot -
                   (short)((int)(((uVar7 * 0x80 - ((short)uVar5 + -0x40) * (uVar2 & 0xffff)) +
                                 -0x2000) * (uVar3 & 0xffff)) >> 0xe)) + -0x40;
    if (DAT_005b99f0 < -0x100) {
      DAT_005b99f0 = -0x100;
    }
    else if (0xff < DAT_005b99f0) {
      DAT_005b99f0 = 0xff;
    }
    _DAT_003fade4 = (int)DAT_005b99f0 << 0x10;
  }
  else {
    sVar4 = func_0xff21984c(&DAT_001c68a0,tnst_w,DAT_005b91d6);
    if (sVar4 == 0) {
      sVar4 = 1;
    }
    func_0xff22258c(&DAT_003fade4,(int)DAT_005b99f2,sVar4);
  }
  sVar4 = (short)((uint)_DAT_003fade4 >> 0x10) + 0x40;
  if (sVar4 < 0) {
    sVar4 = 0;
  }
  else if (0xff < sVar4) {
    sVar4 = 0xff;
  }
  tkrst = (byte)sVar4;
  if ((B_st == '\0') && (DAT_003fade9 != '\0')) {
    DAT_003fade8 = true;
  }
  else {
    DAT_003fade8 = false;
  }
  DAT_003fade9 = B_st;
  if (((bool)DAT_003fade8) || ((B_nmot != '\0' && (B_stend != '\0')))) {
    DAT_003fdc58 = (byte)sVar4;
  }
  return;
}

