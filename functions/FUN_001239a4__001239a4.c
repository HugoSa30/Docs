/*
 * Program: n42.bin
 * Function: FUN_001239a4
 * Entry: 001239a4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001239a4(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = _DAT_003fa17c;
  uVar2 = 0;
  if (param_1 != (ushort *)0x0) {
    *param_1 = _DAT_003fa17a;
    param_1[1] = uVar1;
    param_1[2] = _DAT_003fa17e;
  }
  if ((_DAT_003fa17c != 0) && (uVar2 = 1, _DAT_003fa17a <= _DAT_003fa17c)) {
    uVar2 = 3;
  }
  uVar3 = uVar2;
  if ((_DAT_003fa17e != 0) && (uVar3 = uVar2 | 4, _DAT_003fa17a <= _DAT_003fa17e)) {
    uVar3 = uVar2 | 0xc;
  }
  return uVar3;
}

