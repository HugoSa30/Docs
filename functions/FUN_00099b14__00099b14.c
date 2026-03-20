/*
 * Program: n42.bin
 * Function: FUN_00099b14
 * Entry: 00099b14
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined FUN_00099b14(int param_1,undefined4 param_2,int param_3)

{
  if ((DAT_003fa124 & (&DAT_003fce40)[param_1 * 8]) == 0) {
    *(undefined *)(param_3 + 4) = 1;
  }
  else {
    (**(code **)(param_1 * 0x10 + 0x1686c))(param_1,param_2,param_3);
  }
  return *(undefined *)(param_3 + 4);
}

