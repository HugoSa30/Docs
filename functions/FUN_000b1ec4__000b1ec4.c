/*
 * Program: n42.bin
 * Function: FUN_000b1ec4
 * Entry: 000b1ec4
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_000b1ec4(short *param_1,int param_2,short param_3)

{
  short sVar1;
  undefined4 uVar2;
  
  sVar1 = *param_1;
  if (param_2 == 0) {
    *param_1 = param_3;
  }
  else if (sVar1 != 0) {
    *param_1 = sVar1 + -1;
  }
  if ((param_2 == 0) || (sVar1 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

