/*
 * Program: n42.bin
 * Function: FUN_001a7f38
 * Entry: 001a7f38
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_001a7f38(uint param_1)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = 0;
  uVar1 = 0;
  do {
    uVar1 = uVar1 + (param_1 & 1);
    param_1 = param_1 >> 1 & 0x7f;
    bVar2 = bVar2 + 1;
  } while (bVar2 < 8);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  return 0;
}

