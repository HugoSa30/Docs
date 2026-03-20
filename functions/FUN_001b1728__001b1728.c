/*
 * Program: n42.bin
 * Function: FUN_001b1728
 * Entry: 001b1728
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001b1728(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x14) =
       *(uint *)(param_1 + 0x14) & ~(3 << (param_2 * 2 & 0x3fU)) | 2 << (param_2 * 2 & 0x3fU);
  *(int *)(param_1 + 0x18) = 3 << (param_2 * 2 & 0x3fU);
  (*(code *)&SUB_00faf2d0)(param_1,param_2,0xf);
  (*(code *)&SUB_00faf214)(param_1,param_2,3);
  return;
}

