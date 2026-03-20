/*
 * Program: n42.bin
 * Function: FUN_00093934
 * Entry: 00093934
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_00093934(uint param_1,uint param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  byte in_cr0;
  
  if ((((((bool)(in_cr0 >> 3 & 1)) || (param_2 < param_4)) || (*(uint *)(param_3 + 0x24) < param_1))
      || ((param_2 < *(uint *)(param_3 + 0x24) || (*(uint *)(param_3 + 0x28) < param_1)))) ||
     ((param_2 < *(uint *)(param_3 + 0x28) ||
      ((*(uint *)(param_3 + 0x2c) < param_1 || (param_2 < *(uint *)(param_3 + 0x2c))))))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

