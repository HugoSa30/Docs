/*
 * Program: n42.bin
 * Function: FUN_00091400
 * Entry: 00091400
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_00091400(uint param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  if ((param_3 & 0xc) == 0) {
    uVar1 = 0;
  }
  else if (((param_2 & 3) == 3) || (((param_1 & 3) != 3 && ((param_3 & 3) != 0)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

