/*
 * Program: n42.bin
 * Function: FUN_001af170
 * Entry: 001af170
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001af170(int param_1,uint param_2,uint param_3)

{
  *(ushort *)(param_1 + 10) =
       *(ushort *)(param_1 + 10) & ~(ushort)(1 << (param_2 & 0x3f)) |
       (ushort)((param_3 & 1) << (param_2 & 0x3f));
  return;
}

