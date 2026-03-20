/*
 * Program: n42.bin
 * Function: FUN_00094544
 * Entry: 00094544
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00094544(uint param_1,int param_2)

{
  uint uVar1;
  uint in_r12;
  
  while (uVar1 = in_r12 & 0xffff, uVar1 < 2) {
    if ((param_1 & *(uint *)(param_2 + uVar1 * 4)) != 0) {
      **(uint **)(&DAT_003fa1c8 + uVar1 * 4) = **(uint **)(&DAT_003fa1c8 + uVar1 * 4) & 0xf7ffffff;
    }
    in_r12 = uVar1 + 1;
  }
  return;
}

