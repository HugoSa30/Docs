/*
 * Program: n42.bin
 * Function: FUN_001a1e18
 * Entry: 001a1e18
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a1e18(void)

{
  byte bVar1;
  
  bVar1 = *_DAT_003fbc7c;
  if (bVar1 != 0) {
    *_DAT_003fbc7c = 0;
    (**(code **)((uint)bVar1 * 4 + 0xfa9cd0))();
  }
  return;
}

