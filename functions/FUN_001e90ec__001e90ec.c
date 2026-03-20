/*
 * Program: n42.bin
 * Function: FUN_001e90ec
 * Entry: 001e90ec
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_001e90ec(uint *param_1,int *param_2,int *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = 0;
  if (param_4 != 0) {
    do {
      iVar3 = *param_2;
      param_2 = param_2 + 1;
      if (iVar3 - uVar1 == -1) {
        uVar2 = -*param_3 - 1;
      }
      else {
        uVar2 = (iVar3 - uVar1) - *param_3;
        uVar1 = (uint)(-*param_3 - 1U < uVar2);
      }
      param_3 = param_3 + 1;
      *param_1 = uVar2;
      param_1 = param_1 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return uVar1;
}

