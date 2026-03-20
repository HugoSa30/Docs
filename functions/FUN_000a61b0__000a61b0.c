/*
 * Program: n42.bin
 * Function: FUN_000a61b0
 * Entry: 000a61b0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000a61b0(int param_1,int param_2)

{
  ushort uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(ushort *)(&UNK_00306006 + param_1 * 8) & 0xf7ff;
  }
  else {
    uVar1 = *(ushort *)(&UNK_00306006 + param_1 * 8) | 0x800;
  }
  *(ushort *)(&UNK_00306006 + param_1 * 8) = uVar1;
  return;
}

