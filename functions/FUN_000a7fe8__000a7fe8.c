/*
 * Program: n42.bin
 * Function: FUN_000a7fe8
 * Entry: 000a7fe8
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_000a7fe8(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_2 * 0x100;
  if (param_3 < uVar1) {
    uVar1 = (uVar1 - param_3) * param_1 >> 0x10;
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    param_3 = uVar1 + param_3;
  }
  else if (uVar1 < param_3) {
    uVar1 = (param_3 + param_2 * -0x100) * param_1 >> 0x10;
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    param_3 = param_3 - uVar1;
  }
  return param_3 & 0xffff;
}

