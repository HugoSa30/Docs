/*
 * Program: n42.bin
 * Function: FUN_000a7f20
 * Entry: 000a7f20
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_000a7f20(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_3 * 0x10000 + param_4;
  uVar1 = param_2 * 0x10000;
  if (uVar2 < uVar1) {
    param_1 = (uVar1 - uVar2 >> 0x10) * param_1;
    if (param_1 == 0) {
      param_1 = 1;
    }
    uVar2 = uVar2 + param_1;
  }
  else if (uVar1 < uVar2) {
    param_1 = (uVar2 + param_2 * -0x10000 >> 0x10) * param_1;
    if (param_1 == 0) {
      param_1 = 1;
    }
    uVar2 = uVar2 - param_1;
  }
  return uVar2;
}

