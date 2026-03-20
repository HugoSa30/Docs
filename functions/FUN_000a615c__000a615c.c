/*
 * Program: n42.bin
 * Function: FUN_000a615c
 * Entry: 000a615c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000a615c(int param_1,int param_2)

{
  ushort uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(ushort *)(&UNK_00306006 + param_1 * 8) & 0xf7f0 | 0x204;
  }
  else {
    uVar1 = *(ushort *)(&UNK_00306006 + param_1 * 8) & 0xf7f0 | 0xa04;
  }
  *(ushort *)(&UNK_00306006 + param_1 * 8) = uVar1;
  return;
}

