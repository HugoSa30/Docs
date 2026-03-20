/*
 * Program: n42.bin
 * Function: FUN_00124ae0
 * Entry: 00124ae0
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4
FUN_00124ae0(undefined *param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5,
            undefined *param_6)

{
  int iVar1;
  char cVar2;
  
  *param_6 = 0;
  iVar1 = func_0xff209390();
  if (iVar1 != 0x100) {
    return 0;
  }
  if (DAT_003fa604 == '\x01') {
    cVar2 = FUN_001227dc();
    if (cVar2 == '\0') {
      FUN_001220a8();
      FUN_00121f1c();
      DAT_003fa604 = 0;
      return 0;
    }
  }
  else {
    if (((param_3 != 0x1c0000) || (param_1 != &DAT_005c0000)) || (0x20000 < param_5)) {
      *param_6 = 0x32;
      return 0;
    }
    cVar2 = FUN_00122430();
    if (cVar2 == '\0') {
      *param_6 = 0x32;
      return 0;
    }
    DAT_003fa604 = '\x01';
  }
  return 1;
}

