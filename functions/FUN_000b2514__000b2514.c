/*
 * Program: n42.bin
 * Function: FUN_000b2514
 * Entry: 000b2514
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_000b2514(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *param_1 >> 0x10;
  if (param_2 < uVar1) {
    param_3 = -((uVar1 - param_2) * param_3);
  }
  else {
    param_3 = (param_2 - uVar1) * param_3;
  }
  uVar1 = *param_1 + param_3;
  *param_1 = uVar1;
  return uVar1 >> 0x10;
}

