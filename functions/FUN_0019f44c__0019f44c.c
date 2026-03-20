/*
 * Program: n42.bin
 * Function: FUN_0019f44c
 * Entry: 0019f44c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0019f44c(void)

{
  uint uVar1;
  
  uVar1 = func_0xff209c74(0);
  if ((uVar1 & 0xffff0000) == 0) {
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = 0;
  }
  wub = (byte)(uVar1 >> 2);
  uVar1 = func_0xff209c74(2);
  if ((uVar1 & 0xffff0000) == 0) {
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = 0;
  }
  wtmot = (byte)(uVar1 >> 2);
  uVar1 = func_0xff209c74(3);
  if ((uVar1 & 0xffff0000) == 0) {
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = 0;
  }
  wtans = (byte)(uVar1 >> 2);
  uVar1 = func_0xff209c74(10);
  if ((uVar1 & 0xffff0000) == 0) {
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = 0xffff;
  }
  uhsv = (byte)(uVar1 >> 2);
  uVar1 = func_0xff209c74(0xb);
  if ((uVar1 & 0xffff0000) == 0) {
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = 0xffff;
  }
  uhsv2 = (byte)(uVar1 >> 2);
  uVar1 = func_0xff209c74(0xc);
  if ((uVar1 & 0xffff0000) == 0) {
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = 0xffff;
  }
  uhsh = (byte)(uVar1 >> 2);
  uVar1 = func_0xff209c74(0xd);
  if ((uVar1 & 0xffff0000) == 0) {
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = 0xffff;
  }
  uhsh2 = (byte)(uVar1 >> 2);
  uVar1 = func_0xff209c74(0x12);
  if ((uVar1 & 0xffff0000) == 0) {
    uVar1 = uVar1 & 0xffff;
  }
  else {
    uVar1 = 0xffff;
  }
  wtka = (byte)(uVar1 >> 2);
  return;
}

