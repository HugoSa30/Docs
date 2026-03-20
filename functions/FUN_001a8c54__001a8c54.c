/*
 * Program: n42.bin
 * Function: FUN_001a8c54
 * Entry: 001a8c54
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a8c54(void)

{
  int iVar1;
  undefined *puVar2;
  
  if (DAT_003fbb6c == '\0') {
    if (_DAT_003fbb6e == 0) {
      _DAT_003fbb3a = 0;
      DAT_003fbd5b = 1;
    }
    if (_DAT_003fbb6e == _DAT_003fbb28) {
      iVar1 = (**(code **)(_DAT_003fbaa4 + 0x14))(&UNK_003fffa8,_DAT_003fbb28);
      if (iVar1 == 0) {
        FUN_001a8f4c();
      }
      else {
        iVar1 = (**(code **)(_DAT_003fbaa4 + 0x18))(&UNK_003fffa8);
        if (iVar1 == 0) {
          FUN_001a8f4c();
        }
        else {
          iVar1 = (**(code **)(_DAT_003fbaa4 + 0x1c))(&UNK_003fffa8);
          if (iVar1 == 0) {
            FUN_001a8f4c();
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
      puVar2 = _DAT_003fbb70 + 1;
      *_DAT_003fbb70 = DAT_003fbb75;
      _DAT_003fbb6e = _DAT_003fbb6e + 1;
      _DAT_003fbb70 = puVar2;
      if ((((_DAT_003fbb3a == 0) && (2 < _DAT_003fbb6e)) &&
          (iVar1 = (**(code **)(_DAT_003fbaa4 + 0x14))(&UNK_003fffa8,_DAT_003fbb6e), iVar1 != 0)) &&
         (DAT_003fffb5 != 0)) {
        _DAT_003fbb3a = (ushort)DAT_003fffb4 + (ushort)DAT_003fffb5 + 1;
      }
    }
    if (_DAT_003fbb6e == _DAT_003fbb3a) {
      (*_DAT_003fbd4c)();
    }
    else {
      FUN_00109630(*_DAT_003fba9c,&DAT_003fbb75,1);
    }
  }
  else {
    FUN_00109630(*_DAT_003fba9c,&UNK_003fbb74,1);
  }
  return;
}

