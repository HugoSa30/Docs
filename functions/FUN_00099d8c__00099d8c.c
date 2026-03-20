/*
 * Program: n42.bin
 * Function: FUN_00099d8c
 * Entry: 00099d8c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00099d8c(int param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0x7fff;
  }
  if ((param_2 & 2) != 0) {
    *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0xdfff;
  }
  return;
}

