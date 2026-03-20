/*
 * Program: n42.bin
 * Function: FUN_001e915c
 * Entry: 001e915c
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_001e915c(uint *param_1,uint *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((param_3 < 0x20) && (param_4 != 0)) {
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar2 | uVar1 << (param_3 & 0x3f);
      param_1 = param_1 + 1;
      if (param_3 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar1 >> (0x20 - param_3 & 0x3f);
      }
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return uVar2;
}

