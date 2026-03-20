/*
 * Program: n42.bin
 * Function: FUN_0013fac4
 * Entry: 0013fac4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013fac4(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte param_11;
  undefined uStack00000009;
  ushort uStack0000000c;
  ushort uStack00000010;
  undefined *puStack00000014;
  
  bVar1 = (byte)(param_2 << 5) & 0x20 | param_11 & 0xdf;
  _param_11 = CONCAT11(bVar1,uStack00000009);
  DAT_003fc123 = 1;
  if (B_stend == '\0') {
    _DAT_003fb3d8 = 0;
  }
  else if (_DAT_003fb3d8 < _DAT_001d2310) {
    _DAT_003fb3d8 = _DAT_003fb3d8 + 1;
  }
  else {
    _param_11 = CONCAT11(bVar1,uStack00000009) & 0xdffd | 0x2002;
  }
  uStack0000000c = _param_11;
  puStack00000014 = (undefined *)&stack0x0000000c;
  uStack00000010 = _param_11;
  func_0xff222958(0x90,&stack0x00000010);
  return;
}

