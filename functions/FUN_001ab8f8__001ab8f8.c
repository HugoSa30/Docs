/*
 * Program: n42.bin
 * Function: FUN_001ab8f8
 * Entry: 001ab8f8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001ab8f8(void)

{
  undefined4 uVar1;
  ushort uVar2;
  
  if (_DAT_003fc3e0 == 0) {
    uVar1 = 0;
  }
  else if (_DAT_003fc5a8 == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = 0;
    do {
      (*(code *)&SUB_00065798)(uVar2 & 0xff);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 4);
    DAT_003fc5bd = 0;
    uVar1 = 1;
  }
  return uVar1;
}

