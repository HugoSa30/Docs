/*
 * Program: n42.bin
 * Function: FUN_000967c0
 * Entry: 000967c0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000967c0(uint param_1)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  
  if (param_1 <= _LAB_001c006c) {
    uVar1 = _LAB_001c0070 / (param_1 << 5) & 0xffff;
    sVar3 = (short)param_1 - (short)(_LAB_001c0070 / (uVar1 * 0x20));
    sVar2 = (short)param_1 - (short)(_LAB_001c0070 / (uVar1 * 0x20 + 0x20));
    if (sVar3 < 0) {
      sVar3 = -sVar3;
    }
    if (sVar2 < 0) {
      sVar2 = -sVar2;
    }
    if (sVar3 < sVar2) {
      sVar2 = sVar3;
    }
    if (sVar2 < (short)((param_1 * _LAB_001c0068) / 1000)) {
      if (sVar2 != sVar3) {
        uVar1 = uVar1 + 1;
      }
      goto LAB_00096868;
    }
  }
  uVar1 = 0;
LAB_00096868:
  return uVar1 & 0xffff;
}

