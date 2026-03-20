/*
 * Program: n42.bin
 * Function: FUN_000a1b30
 * Entry: 000a1b30
 * Exported by: ExportAllDecompiledFunctions.java
 */


short FUN_000a1b30(void)

{
  byte bVar1;
  short sVar2;
  
  sVar2 = FUN_000a1c14();
  if (sVar2 == 0x2000) {
    sVar2 = 0x100;
  }
  else if (sVar2 == 0) {
    FUN_000a1bf0();
    bVar1 = DAT_003fa1d0;
    if (DAT_003fa1d1 < DAT_003fa1d0) {
      DAT_003fa1d1 = 0;
      DAT_003fa1d0 = 1;
    }
    else {
      DAT_003fa1d0 = DAT_003fa1d0 + 1;
      sVar2 = FUN_000a1ce0(bVar1);
    }
  }
  else if (sVar2 != 0x100) {
    DAT_003fa1d1 = 0;
    DAT_003fa1d0 = 1;
  }
  return sVar2;
}

