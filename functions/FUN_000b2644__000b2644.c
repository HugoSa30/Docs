/*
 * Program: n42.bin
 * Function: FUN_000b2644
 * Entry: 000b2644
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_000b2644(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2 * 0x10000;
  uVar2 = *param_1;
  if (uVar1 != uVar2) {
    if (uVar2 < uVar1) {
      param_3 = (uVar1 - uVar2) / param_3;
      if (param_3 == 0) {
        param_3 = 1;
      }
    }
    else {
      param_3 = (uVar2 + param_2 * -0x10000) / param_3;
      if (param_3 == 0) {
        param_3 = 1;
      }
      param_3 = -param_3;
    }
    uVar2 = uVar2 + param_3;
    *param_1 = uVar2;
  }
  return uVar2 >> 0x10;
}

