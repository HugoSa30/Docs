/*
 * Program: n42.bin
 * Function: FUN_0009c944
 * Entry: 0009c944
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_0009c944(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  uVar2 = *(uint *)(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 4);
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  if (uVar1 == uVar2) {
    if (~uVar1 == uVar3) {
      *param_2 = uVar1;
      return 3;
    }
    if (uVar3 == 0xffffffff) {
      if (uVar1 == 0xffffffff) {
        *param_2 = 0;
        return 1;
      }
      *param_2 = uVar1;
      return 2;
    }
  }
  else if ((uVar2 == uVar3) && (uVar2 == 0xffffffff)) {
    *param_2 = uVar1;
    return 2;
  }
  *param_2 = 0;
  return 0;
}

