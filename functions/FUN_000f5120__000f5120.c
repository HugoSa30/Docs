/*
 * Program: n42.bin
 * Function: FUN_000f5120
 * Entry: 000f5120
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort FUN_000f5120(int param_1)

{
  ushort uVar1;
  
  if (param_1 == 1) {
    uVar1 = *(ushort *)(_DAT_003fc2e8 + 8);
  }
  else {
    uVar1 = *(ushort *)(_DAT_003fc2f4 + 8);
  }
  return uVar1 >> 0xf;
}

