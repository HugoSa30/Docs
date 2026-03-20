/*
 * Program: n42.bin
 * Function: FUN_00100704
 * Entry: 00100704
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_00100704(undefined4 param_1)

{
  uint uVar1;
  undefined auStack_8 [8];
  
  uVar1 = FUN_001004c8(param_1,auStack_8);
  if ((uVar1 & 0xffff) == 0) {
    do {
      _();
      FUN_00100620();
      uVar1 = FUN_001006f8();
    } while (uVar1 == 0x100);
  }
  return uVar1 & 0xffff;
}

