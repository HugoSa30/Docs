/*
 * Program: n42.bin
 * Function: FUN_001a9808
 * Entry: 001a9808
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a9808(void)

{
  int iVar1;
  
  if (_DAT_003fbb3c == 0) {
    _DAT_003fbb3a = 0;
    DAT_003fbd5b = 1;
  }
  if (_DAT_003fbb3c == _DAT_003fbb28) {
    iVar1 = (**(code **)(_DAT_003fbaa4 + 0x14))(&UNK_003fffa8,_DAT_003fbb28);
    if (iVar1 == 0) {
      FUN_0010eae8();
    }
    else {
      iVar1 = (**(code **)(_DAT_003fbaa4 + 0x18))(&UNK_003fffa8);
      if (iVar1 == 0) {
        FUN_0010eae8();
      }
      else {
        iVar1 = (**(code **)(_DAT_003fbaa4 + 0x1c))(&UNK_003fffa8);
        if (iVar1 == 0) {
          FUN_0010eae8();
        }
        else {
          DAT_003fbd5a = 1;
          DAT_003fbd5b = 0;
          _DAT_003fbd54 = _DAT_003fffb8;
          DAT_003fbd58 = DAT_003fffb5;
        }
      }
    }
  }
  else {
    _DAT_003fbb3c = _DAT_003fbb3c + 1;
    if ((((_DAT_003fbb3a == 0) && (2 < _DAT_003fbb3c)) &&
        (iVar1 = (**(code **)(_DAT_003fbaa4 + 0x14))(&UNK_003fffa8,_DAT_003fbb3c), iVar1 != 0)) &&
       (DAT_003fffb5 != 0)) {
      _DAT_003fbb3a = (ushort)DAT_003fffb4 + (ushort)DAT_003fffb5 + 1;
    }
    if ((uint)_DAT_003fbb3a == (uint)_DAT_003fbb3c) {
      (*_DAT_003fbd4c)();
    }
    else {
      FUN_00109630(*_DAT_003fba9c,_DAT_003fbb24 + (uint)_DAT_003fbb3c,1);
    }
  }
  return;
}

