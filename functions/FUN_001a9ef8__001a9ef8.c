/*
 * Program: n42.bin
 * Function: FUN_001a9ef8
 * Entry: 001a9ef8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_001a9ef8(void)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = func_0xff26beb0();
  uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
  bVar1 = uVar2 < _DAT_003fa208;
  if (uVar2 == _DAT_003fa208) {
    bVar1 = (uint)uVar3 < _DAT_003fa20c;
  }
  return !bVar1;
}

