/*
 * Program: n42.bin
 * Function: FUN_001add68
 * Entry: 001add68
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001add68(void)

{
  undefined4 uVar1;
  short sVar2;
  
  if (_DAT_003fc2ec == 0) {
    uVar1 = 0;
  }
  else {
    _DAT_003fc346 =
         (*(ushort *)(_DAT_003fc2e4 + 0xc) & 0xff) - (*(ushort *)(_DAT_003fc2f0 + 0xc) & 0xff);
    sVar2 = _DAT_003fc346;
    if (_DAT_003fc346 < 0) {
      sVar2 = -_DAT_003fc346;
    }
    if ((int)sVar2 - 5U < 0x6f) {
      (*(code *)&SUB_00fadcf8)
                (0x34,*(ushort *)(_DAT_003fc2e4 + 0xc) & 0xff |
                      (*(ushort *)(_DAT_003fc2f0 + 0xc) & 0xff) << 8);
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

