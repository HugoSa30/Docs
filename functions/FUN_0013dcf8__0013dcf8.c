/*
 * Program: n42.bin
 * Function: FUN_0013dcf8
 * Entry: 0013dcf8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0013dcf8(void)

{
  ushort uVar1;
  undefined in_r0;
  int unaff_r31;
  undefined param_11;
  byte bStack00000009;
  undefined2 param_12;
  undefined2 param_13;
  undefined *param_14;
  
  uVar1 = CONCAT11(param_11,in_r0) & 0xf0ff;
  bStack00000009 = (byte)uVar1;
  _param_11 = CONCAT11((byte)(unaff_r31 << 5) & 0x20 | (byte)(uVar1 >> 8) & 0xdf | 8,
                       (byte)(unaff_r31 << 1) & 2 | bStack00000009 & 0xfd);
  param_12 = _param_11;
  param_14 = (undefined *)&stack0x0000000c;
  param_13 = _param_11;
  func_0xff222958(0x5d,&stack0x00000018);
  return;
}

