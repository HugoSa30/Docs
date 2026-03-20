/*
 * Program: n42.bin
 * Function: FUN_001b1480
 * Entry: 001b1480
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001b1480(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (*(code *)&SUB_00fb1470)();
  if (param_1 == 0) {
    iVar2 = (*(code *)&SUB_000655d8)();
    uVar3 = iVar2 * 10;
  }
  else {
    if (uVar1 < _DAT_003fc7e8) {
      iVar2 = (uVar1 - 1) - _DAT_003fc7e8;
    }
    else {
      iVar2 = uVar1 - _DAT_003fc7e8;
    }
    uVar3 = (iVar2 * (uint)_DAT_003fc7e4) / 10000;
    _DAT_003fc7e8 = uVar1;
  }
  return uVar3;
}

