/*
 * Program: n42.bin
 * Function: FUN_00153664
 * Entry: 00153664
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00153664(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort local_28;
  
  uVar5 = (uint)DAT_005b9243 - (uint)DAT_005b90d4;
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  else if (0xff < (int)uVar5) {
    uVar5 = 0xff;
  }
  DAT_005b8c44 = (undefined)uVar5;
  if ((DAT_003fc21e == '\0') || (DAT_003fdbcd == '\0')) {
    DAT_005b8c40 = 0;
  }
  else {
    DAT_005b8c40 = func_0xff2187cc(&DAT_001d3580,uVar5 & 0xff);
  }
  uVar5 = func_0xff2187cc(&DAT_001d3598,DAT_005b9000);
  uVar5 = uVar5 & 0xff;
  uVar2 = func_0xff2187cc(&DAT_001d35c4,DAT_005b90d4);
  uVar2 = uVar2 & 0xff;
  uVar3 = uVar2;
  if (uVar2 < uVar5) {
    uVar3 = uVar5;
  }
  uVar6 = (uint)DAT_005b8c40;
  if ((DAT_005b8c40 < uVar3) && (uVar6 = uVar2, uVar2 < uVar5)) {
    uVar6 = uVar5;
  }
  uVar5 = func_0xff2187cc(&DAT_001d3568,vfzg);
  iVar4 = uVar6 * (uVar5 & 0xff);
  uVar5 = iVar4 >> 8;
  DAT_005b8c43 = (byte)((uint)iVar4 >> 8);
  if (uVar5 == 0) {
    DAT_005b8c41 = 0;
    DAT_005b8c3e = 0;
  }
  else {
    uVar2 = (uint)DAT_005b8c41;
    if (uVar5 < uVar2) {
      uVar3 = uVar2 - uVar5;
    }
    else {
      uVar3 = uVar5 - uVar2;
    }
    bVar1 = DAT_005b8c43;
    if ((uVar5 <= uVar2) && (bVar1 = DAT_005b8c41, (uint)DAT_001d3596 < (uVar3 & 0xff))) {
      bVar1 = DAT_005b8c43 + DAT_001d3596;
    }
    DAT_005b8c41 = bVar1;
    iVar4 = DAT_005b8c41 - 0x1a;
    if (iVar4 < -0x8000) {
      iVar4 = -0x8000;
    }
    else if (0x7fff < iVar4) {
      iVar4 = 0x7fff;
    }
    iVar4 = (short)iVar4 * 0xd555 >> 0x10;
    if (iVar4 < -0x8000) {
      iVar4 = -0x8000;
    }
    else if (0x7fff < iVar4) {
      iVar4 = 0x7fff;
    }
    uVar5 = (int)(short)iVar4 + 0x55;
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
    else if (0xffff < (int)uVar5) {
      uVar5 = 0xffff;
    }
    if ((ub == 0) || (uVar2 = 0x8a00 / ub, 0xffff < uVar2)) {
      uVar2 = 0xffff;
    }
    uVar2 = (uVar5 & 0xffff) * uVar2;
    local_28 = (ushort)(uVar2 >> 0x10);
    if (local_28 < 0x100) {
      uVar2 = uVar2 >> 8;
    }
    else {
      uVar2 = 0xffff;
    }
    iVar4 = (uVar2 & 0xffff) - 0x55;
    if (iVar4 < -0x8000) {
      iVar4 = -0x8000;
    }
    else if (0x7fff < iVar4) {
      iVar4 = 0x7fff;
    }
    iVar4 = (short)iVar4 * 0x999a >> 0xf;
    if (iVar4 < -0x8000) {
      iVar4 = -0x8000;
    }
    else if (0x7fff < iVar4) {
      iVar4 = 0x7fff;
    }
    uVar5 = (int)(short)iVar4 + 0x1a;
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
    else if (0xffff < (int)uVar5) {
      uVar5 = 0xffff;
    }
    if ((uVar5 & 0xffff) < 0x100) {
      DAT_005b8c3e = (byte)uVar5;
    }
    else {
      DAT_005b8c3e = 0xff;
    }
  }
  tamlausab = DAT_005b8c3e;
  if ((B_stend == '\0') || (DAT_005b8c3e < DAT_001d35d9)) {
    tamlausab = 0;
  }
  FUN_0015352c();
  B_nl10 = 0;
  B_nachln = 0;
  if (B_stend != '\0') {
    DAT_005bb7c4 = DAT_005bb7c4 | 1;
  }
  return;
}

