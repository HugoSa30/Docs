/*
 * Program: n42.bin
 * Function: FUN_001af214
 * Entry: 001af214
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001af214(int param_1,int param_2,uint param_3)

{
  *(uint *)(param_1 + 0x1c) =
       *(uint *)(param_1 + 0x1c) & ~(3 << (param_2 * 2 & 0x3fU)) |
       (param_3 & 3) << (param_2 * 2 & 0x3fU);
  return;
}

