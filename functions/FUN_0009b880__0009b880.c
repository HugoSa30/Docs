/*
 * Program: n42.bin
 * Function: FUN_0009b880
 * Entry: 0009b880
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0009b880(int param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 0x24) = param_2 & param_3;
  *_DAT_003fa128 = param_2 & param_3;
  return 0;
}

