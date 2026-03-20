/*
 * Program: n42.bin
 * Function: FUN_0013fb34
 * Entry: 0013fb34
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0013fb34(undefined4 param_1,int param_2)

{
  byte param_11;
  byte bStack00000009;
  undefined2 param_12;
  undefined2 param_13;
  undefined *param_14;
  
  _param_11 = CONCAT11((byte)(param_2 << 5) & 0x20 | param_11 & 0xdf,
                       (byte)(param_2 << 1) & 2 | bStack00000009 & 0xfd);
  param_12 = _param_11;
  param_14 = (undefined *)&stack0x0000000c;
  param_13 = _param_11;
  func_0xff222958(0x90,&stack0x00000010);
  return;
}

