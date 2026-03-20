/*
 * Program: n42.bin
 * Function: FUN_000a5fec
 * Entry: 000a5fec
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000a5fec(int param_1,int param_2)

{
  ushort uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(ushort *)(&UNK_00306006 + param_1 * 8) & 0xf3ff;
  }
  else {
    uVar1 = *(ushort *)(&UNK_00306006 + param_1 * 8) & 0xfbff | 0x800;
  }
  *(ushort *)(&UNK_00306006 + param_1 * 8) = uVar1;
  return;
}

