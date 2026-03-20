/*
 * Program: n42.bin
 * Function: FUN_00124910
 * Entry: 00124910
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_00124910(undefined *param_1,undefined4 param_2,undefined *param_3)

{
  int iVar1;
  char cVar2;
  
  *param_3 = 0;
  iVar1 = func_0xff209390();
  if (iVar1 == 0x100) {
    if (param_1 == (undefined *)0x1c0000) {
      cVar2 = FUN_001220a8();
      if (cVar2 != '\x01') {
        *param_3 = 0x32;
      }
    }
    else if (param_1 == &DAT_005c0000) {
      cVar2 = FUN_001220f4();
      if (cVar2 != '\x01') {
        *param_3 = 0x32;
      }
    }
    else {
      *param_3 = 0x32;
    }
  }
  return 0;
}

