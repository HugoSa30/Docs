/*
 * Program: n42.bin
 * Function: FUN_000a180c
 * Entry: 000a180c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_000a180c(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  
  sVar1 = FUN_000a1980(param_1,param_2);
  if (sVar1 == 0) {
    do {
      _DAT_002fc00e = 0xaa39;
      FUN_000b5400();
      sVar1 = FUN_000a1b30();
    } while (sVar1 == 0x100);
  }
  return sVar1;
}

