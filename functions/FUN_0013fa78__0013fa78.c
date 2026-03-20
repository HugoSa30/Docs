/*
 * Program: n42.bin
 * Function: FUN_0013fa78
 * Entry: 0013fa78
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013fa78(void)

{
  ushort uVar1;
  undefined param_8;
  int in_r11;
  ushort param_11;
  ushort uStack0000000c;
  ushort uStack00000010;
  undefined *puStack00000014;
  
  uVar1 = param_11;
  *(undefined *)(in_r11 + -0x3edd) = param_8;
  param_11 = param_11 & 0xf0fe;
  if (B_stend == '\0') {
    _DAT_003fb3d8 = 0;
  }
  else if (_DAT_003fb3d8 < _DAT_001d2310) {
    _DAT_003fb3d8 = _DAT_003fb3d8 + 1;
  }
  else {
    param_11 = uVar1 & 0xd0fc | 0x2002;
  }
  uStack0000000c = param_11;
  puStack00000014 = (undefined *)&stack0x0000000c;
  uStack00000010 = param_11;
  func_0xff222958(0x90,&stack0x00000010);
  return;
}

