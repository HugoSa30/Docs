/*
 * Program: n42.bin
 * Function: FUN_00095e00
 * Entry: 00095e00
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00095e00(void)

{
  int iVar1;
  
  if (((_DAT_003f9f28 & 3) != 0) && (DAT_003f9ef6 == '\x04')) {
    if (DAT_003f9eeb == '\0') {
      if (DAT_003f9ee8 == '\0') {
        if (DAT_003f9ee9 != '\0') {
          DAT_003f9ee9 = '\0';
          iVar1 = FUN_00097648();
          if ((iVar1 - _DAT_003f9ef8) - _LAB_001c00d0 < 0) {
            _DAT_003f9f0c = _DAT_003f9ed4;
            _DAT_003f9ed4 = _DAT_003f9edc;
            DAT_003f9eee = 1;
            DAT_003f9ef6 = '\n';
            FUN_00095d60(0x78);
          }
        }
      }
      else {
        DAT_003f9ee8 = '\0';
        iVar1 = FUN_00097648();
        if ((iVar1 - _DAT_003f9ef8) - _LAB_001c00d0 < 0) {
          DAT_003f9eed = 1;
          DAT_003f9ef6 = '\x05';
          FUN_00095d60(DAT_003f9f0a);
        }
      }
    }
    else {
      DAT_003f9eeb = '\0';
      if (DAT_003f9eef == '\0') {
        DAT_003f9ef6 = '\0';
      }
      else {
        DAT_003f9eef = '\0';
        DAT_003f9eee = 1;
        DAT_003f9ef6 = '\v';
      }
      FUN_00097708(_DAT_003f9f10,_DAT_003f9ef2);
    }
  }
  return;
}

