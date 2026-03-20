/*
 * Program: n42.bin
 * Function: FUN_00091c7c
 * Entry: 00091c7c
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_00091c7c(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_2 + 0x23U & 0xff;
  if (uVar3 < 0x23) {
    uVar3 = 0xff;
  }
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar2 = 0x80000000;
    do {
      if (param_3 < uVar2) {
        param_3 = param_3 * 2;
      }
      else {
        param_3 = FUN_00091c30(param_1,param_3);
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while ((int)uVar4 < (int)uVar3);
  }
  if ((param_3 == param_4) && (param_3 != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

