/*
 * Program: n42.bin
 * Function: FUN_0010e334
 * Entry: 0010e334
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_0010e334(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = (uint)(param_1 * param_3) / 1000;
  if ((param_1 - uVar1 <= param_2) && (param_2 <= param_1 + uVar1)) {
    return 1;
  }
  return 0;
}

