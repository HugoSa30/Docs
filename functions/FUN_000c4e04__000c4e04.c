/*
 * Program: n42.bin
 * Function: FUN_000c4e04
 * Entry: 000c4e04
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000c4e04(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)(char)zwopt - (int)zwbas;
  if (iVar2 < -0x80) {
    iVar2 = -0x80;
  }
  else if (0x7f < iVar2) {
    iVar2 = 0x7f;
  }
  dzwb = (byte)iVar2;
  if ((char)dzwb < '\0') {
    dzwb = 0;
  }
  DAT_005b8a17 = DZW2DZWQ;
  if (0 < (char)dzwb) {
    DAT_005b8a17 = (&DZW2DZWQ)[(char)dzwb];
  }
  uVar1 = (uint)DAT_005b8a17 * (uint)dzwkoef >> 5;
  if (0xfffe < uVar1) {
    uVar1 = 0xffff;
  }
  DAT_005b8a12 = (undefined2)uVar1;
  uVar1 = 200 - uVar1;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  else if (0xffff < (int)uVar1) {
    uVar1 = 0xffff;
  }
  DAT_005b8a14 = (undefined2)uVar1;
  if (0xff < (uVar1 & 0xffff)) {
    uVar1 = 0xff;
  }
  etazwb = (byte)uVar1;
  if (DAT_003fb38a < 3) {
    DAT_003fb38a = DAT_003fb38a + 1;
  }
  else {
    DAT_003fb38a = 0;
  }
  (&DAT_003fb38c)[DAT_003fb38a] = etazwb;
  return;
}

