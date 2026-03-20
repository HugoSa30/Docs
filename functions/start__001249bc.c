/*
 * Program: n42.bin
 * Function: start
 * Entry: 001249bc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void start(undefined4 *param_1,undefined *param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00122170();
  if ((uVar1 & 0x10) == 0x10) {
    *param_1 = 0x1c0000;
    *param_2 = 0;
  }
  else {
    *param_1 = &DAT_005c0000;
    *param_2 = 0;
  }
  return;
}

