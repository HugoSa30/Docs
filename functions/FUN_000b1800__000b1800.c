/*
 * Program: n42.bin
 * Function: FUN_000b1800
 * Entry: 000b1800
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_000b1800(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_1 * param_2) >> 0xf;
  if (0xfffe < uVar1) {
    uVar1 = 0xffff;
  }
  return uVar1;
}

