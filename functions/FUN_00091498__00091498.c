/*
 * Program: n42.bin
 * Function: FUN_00091498
 * Entry: 00091498
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_00091498(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0009678c();
  if (((uVar1 & 0x4200ff) == 0x420000) || (DAT_003f9f3a == '\x01')) {
    DAT_003f9f3a = '\x01';
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

