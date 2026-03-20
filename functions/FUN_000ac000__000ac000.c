/*
 * Program: n42.bin
 * Function: FUN_000ac000
 * Entry: 000ac000
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ac000(void)

{
  ushort uVar1;
  
  if (DAT_003fbf58 == '\0') {
    _DAT_003f9bf0 = FUN_000a90c8(DAT_001cf1f0,&DAT_001cf1f1,&DAT_001cf1f8,tmot);
  }
  else {
    _DAT_003f9bf0 = FUN_000a90c8(DAT_001cf1dc,&DAT_001cf1dd,&DAT_001cf1e4,tmot);
  }
  if (B_stend != '\0') {
    DAT_003f9b8c = '\x01';
  }
  if (DAT_003f9b8c != '\0') {
    uVar1 = FUN_000a90c8(DAT_001cf1f0,&DAT_001cf1f1,&DAT_001cf1f8,tmot);
    if (_DAT_003f9bf4 < uVar1) {
      _DAT_003f9bf4 = _DAT_003f9bf4 + 1;
    }
    else if (DAT_003fbf58 == '\0') {
      DAT_005b877a = 0;
      DAT_003fbf58 = '\x01';
    }
  }
  if (nmot_w < _DAT_001cf204) {
    _DAT_003f9bf2 = 0;
    DAT_003fbf5a = 0;
    if ((_DAT_001cf206 < nmot_w) && (nmot_w < _DAT_001cf208)) {
      DAT_003fbf59 = 1;
      if (DAT_005b877a != 0xffff) {
        DAT_005b877a = DAT_005b877a + 1;
      }
    }
    else {
      DAT_003fbf59 = 0;
    }
  }
  else {
    DAT_003fbf5a = 1;
    DAT_003fbf59 = 0;
    if (_DAT_003f9bf2 < _DAT_001cf20a) {
      _DAT_003f9bf2 = _DAT_003f9bf2 + 1;
    }
    else {
      DAT_005b877a = 0;
    }
  }
  DAT_003fbf5b = _DAT_003f9bf0 < DAT_005b877a;
  return;
}

