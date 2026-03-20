/*
 * Program: n42.bin
 * Function: FUN_001a4774
 * Entry: 001a4774
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_001a4774(int param_1)

{
  byte bVar1;
  
  if (param_1 == 0xff) {
    bVar1 = 0;
    if (DAT_003fae70 != 0) {
      do {
        FUN_001a4670(bVar1);
        bVar1 = bVar1 + 1;
      } while (bVar1 < DAT_003fae70);
    }
  }
  else {
    FUN_001a4670();
  }
  return 1;
}

