/*
 * Program: n42.bin
 * Function: FUN_001a9ea4
 * Entry: 001a9ea4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a9ea4(int param_1)

{
  longlong lVar1;
  
  lVar1 = func_0xff26beb0();
  lVar1 = lVar1 + (ulonglong)((uint)(param_1 * 1000) / 400);
  _DAT_003fa208 = (int)((ulonglong)lVar1 >> 0x20);
  _DAT_003fa20c = (int)lVar1;
  return;
}

