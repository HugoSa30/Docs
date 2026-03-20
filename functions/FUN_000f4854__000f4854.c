/*
 * Program: n42.bin
 * Function: FUN_000f4854
 * Entry: 000f4854
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_000f4854(uint param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint in_TBLr;
  int in_TBUr;
  
  uVar4 = in_TBUr * 0x6666 + (int)((ulonglong)in_TBLr * 0x6666 >> 0x20);
  uVar2 = uVar4 >> 0x10;
  uVar3 = _DAT_003fc2b8 + (uint)CARRY4(_DAT_003fc2bc,param_1);
  bVar1 = uVar2 < uVar3;
  if (uVar3 == uVar2) {
    bVar1 = (uVar4 * 0x10000 | in_TBLr * 0x6666 >> 0x10) < _DAT_003fc2bc + param_1;
  }
  return bVar1;
}

