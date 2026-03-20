/*
 * Program: n42.bin
 * Function: FUN_000b181c
 * Entry: 000b181c
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_000b181c(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_1 * param_2) >> 0xe;
  if (0xfffe < uVar1) {
    uVar1 = 0xffff;
  }
  return uVar1;
}

