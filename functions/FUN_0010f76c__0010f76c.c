/*
 * Program: n42.bin
 * Function: FUN_0010f76c
 * Entry: 0010f76c
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_0010f76c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((*(code **)(DAT_005baa10 + 0x1c) == (code *)0x0) ||
     (uVar1 = (**(code **)(DAT_005baa10 + 0x1c))(), (uVar1 & 2) != 0)) {
    uVar2 = FUN_0010aa30(param_1,param_2,param_3,8);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

