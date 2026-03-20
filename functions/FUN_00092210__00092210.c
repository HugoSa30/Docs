/*
 * Program: n42.bin
 * Function: FUN_00092210
 * Entry: 00092210
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00092210(int param_1)

{
  ushort uVar1;
  
  if (DAT_003f9f69 == '\x01') {
    if (param_1 == 1) {
      _DAT_003f9f6e = _DAT_003f9f6e | 1;
      (&UNK_003f9f6a)[_DAT_003f9f70] = DAT_003f9f73;
      DAT_003f9f69 = 2;
      _DAT_003f9f70 = _DAT_003f9f70 + 1;
      return;
    }
    if (param_1 == 2) {
      _DAT_003f9f6e = _DAT_003f9f6e & 0xfff3;
      return;
    }
joined_r0x00092244:
    if (param_1 == 3) {
      _DAT_003f9f6e = _DAT_003f9f6e & 0xfff3 | 2;
      DAT_003f9f69 = '\x03';
    }
  }
  else {
    if (DAT_003f9f69 == '\x02') {
      if (param_1 == 1) {
        if (_DAT_003f9f70 < 4) {
          (&UNK_003f9f6a)[_DAT_003f9f70] = DAT_003f9f73;
          _DAT_003f9f70 = _DAT_003f9f70 + 1;
          return;
        }
        _DAT_003f9f6e = _DAT_003f9f6e | 0x10;
        return;
      }
      if (param_1 != 2) goto joined_r0x00092244;
      _DAT_003f9f6e = _DAT_003f9f6e & 0xfffe;
      _DAT_003f9f70 = 0;
    }
    else {
      if (DAT_003f9f69 != '\x03') {
        return;
      }
      if (param_1 != 1) {
        return;
      }
      if (DAT_003f9f73 == DAT_003f9f72) {
        uVar1 = 8;
      }
      else {
        uVar1 = 4;
      }
      _DAT_003f9f6e = _DAT_003f9f6e & 0xfffc | uVar1;
    }
    DAT_003f9f69 = '\x01';
  }
                    /* WARNING: Read-only address (ram,0x003f9f72) is written */
  return;
}

