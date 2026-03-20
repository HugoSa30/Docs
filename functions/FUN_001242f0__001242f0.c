/*
 * Program: n42.bin
 * Function: FUN_001242f0
 * Entry: 001242f0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001242f0(void)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  DAT_003fa178 = 1;
  if (_DAT_003fa158 == 5) {
    cVar1 = func_0xff20e8fc(0);
    if (cVar1 == '\0') {
      cVar1 = func_0xff20e560(1);
      if (cVar1 != '\0') {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else if (_DAT_003fa164 == 5) {
    cVar1 = func_0xff20e8fc(1);
    if (cVar1 == '\0') {
      cVar1 = func_0xff20e560(0);
      if (cVar1 != '\0') {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    cVar1 = func_0xff20e69c();
    if (cVar1 != '\0') {
      uVar2 = 1;
    }
  }
  func_0xff20d350(0);
  func_0xff20d350(1);
  return uVar2;
}

