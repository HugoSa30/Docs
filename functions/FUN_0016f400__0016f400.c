/*
 * Program: n42.bin
 * Function: FUN_0016f400
 * Entry: 0016f400
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x0016f5c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0016f400(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (B_stend == '\0') {
    DAT_003fada8 = DAT_001c6291;
    DAT_003fada9 = DAT_001c6290;
  }
  else {
    if (DAT_003fada8 != '\0') {
      DAT_003fada8 = DAT_003fada8 + -1;
    }
    if (DAT_003fada9 != '\0') {
      DAT_003fada9 = DAT_003fada9 + -1;
    }
  }
  abak = func_0xff21ae98(&DAT_001d038c,DAT_001ce8cc,esst_stm09esub,esst_snm07esub);
  avak = func_0xff21ae98(&DAT_001d03cc,DAT_001ce8cc,esst_stm09esub,esst_snm07esub);
  if (B_st == '\0') {
    fbans_w = func_0xff217fe8(_DAT_001c62da,0x20,fbans_w);
    fbans = (byte)(fbans_w >> 8);
  }
  else {
    uVar2 = func_0xff2187cc(&DAT_001d0378,tmst);
    uVar3 = func_0xff2187cc(&DAT_001d0368,fho);
    iVar4 = (uVar2 & 0xff) * (uVar3 & 0xff);
    fbans_w = (word)iVar4;
    fbans = (byte)((uint)iVar4 >> 8);
  }
  uVar2 = fbans - 0x20;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0xff < (int)uVar2) {
    uVar2 = 0xff;
  }
  uVar2 = (int)((uVar2 & 0xff) * (uint)DAT_001c620e) >> 7;
  if (uVar2 < 0xdf) {
    uVar2 = (uVar2 & 0xff) + 0x20;
    if (0xff < uVar2) {
      uVar2 = 0xff;
    }
    fvans = (byte)uVar2;
  }
  else {
    fvans = 0xff;
  }
  uVar1 = DAT_005b8b82 >> 7;
  DAT_005b8860 = DAT_005b8b80 >> 7;
  DAT_005b8864 = uVar1;
  uVar2 = func_0xff21ae98(&DAT_001d044c,DAT_001ce8cc,esst_stm09esub,esst_snm07esub);
  uVar2 = (int)((int)(short)uVar1 * (uVar2 & 0xff) * (uint)fvans) >> 9;
  if (uVar2 < 0x8000) {
    if ((int)uVar2 < -0x8000) {
      fvakl_w = 0x8000;
    }
    else {
      fvakl_w = (word)uVar2;
    }
  }
  else {
    fvakl_w = 0x7fff;
  }
  uVar2 = func_0xff21ae98(&DAT_001d040c,DAT_001ce8cc,esst_stm09esub,esst_snm07esub);
  iVar4 = (int)((int)(short)DAT_005b8860 * (uVar2 & 0xff) * (uint)fbans) >> 9;
  if (iVar4 < 0x8000) {
    if (iVar4 < -0x8000) {
      fbakl_w = 0x8000;
    }
    else {
      fbakl_w = (word)iVar4;
    }
  }
  else {
    fbakl_w = 0x7fff;
  }
  return;
}

