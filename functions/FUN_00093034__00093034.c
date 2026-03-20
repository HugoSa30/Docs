/*
 * Program: n42.bin
 * Function: FUN_00093034
 * Entry: 00093034
 * Exported by: ExportAllDecompiledFunctions.java
 */


short FUN_00093034(void)

{
  byte bVar1;
  short sVar2;
  
  sVar2 = FUN_00093248();
  if (sVar2 == 0x2000) {
    sVar2 = 0x100;
  }
  if (sVar2 == 0) {
    FUN_00093228();
    bVar1 = DAT_003fa1a0;
    if (DAT_003fa1a0 <= DAT_003fa1a1) {
      DAT_003fa1a0 = DAT_003fa1a0 + 1;
      sVar2 = FUN_000930c4(bVar1);
      return sVar2;
    }
  }
  else if (sVar2 == 0x100) {
    return 0x100;
  }
  DAT_003fa1a1 = 0;
  DAT_003fa1a0 = 1;
  return sVar2;
}

