/*
 * Program: n42.bin
 * Function: FUN_0010b950
 * Entry: 0010b950
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010b950(void)

{
  code **ppcVar1;
  
  ppcVar1 = (code **)FUN_0010b084();
  if (ppcVar1 == (code **)0x0) {
    if (_DAT_003fbd60 != (code **)0x0) {
      if (_DAT_003fbd60[0xc] != (code *)0x0) {
        (*_DAT_003fbd60[0xc])();
      }
      if (*(code **)(_DAT_003fbdec + 0xc) != (code *)0x0) {
        (**(code **)(_DAT_003fbdec + 0xc))();
      }
      FUN_0010b1d0();
      _5();
      _DAT_003fbd60 = (code **)0x0;
    }
  }
  else {
    if ((_DAT_003fbd60 == (code **)0x0) && (DAT_003fbe0d != '\0')) {
      DAT_003fbe0d = '\0';
      _5();
      FUN_0010c6f4();
      _DAT_003fbd60 = ppcVar1;
      FUN_0010b678();
    }
    else if (DAT_003fbd20 != '\0') {
      DAT_003fbe0d = '\0';
      _5();
      FUN_0010c6f4();
      _DAT_003fbd60 = ppcVar1;
      (**ppcVar1)(0,0,*_DAT_003fbddc,*(undefined2 *)(_DAT_003fbddc + 1),0);
    }
    if (_DAT_003fbdd8 != (code *)0xf0b4b4) {
      (*_DAT_003fbdd8)();
    }
    FUN_0010c44c();
    (**(code **)(_DAT_003fbdf0 + 8))();
    DAT_003fbd6c = 0;
    DAT_003fbd80 = 0;
    if (_DAT_003fbdd8 == (code *)0xf0b4b4) {
      (*(code *)0xf0b4b4)();
    }
    if (((DAT_003fbdb8 != '\0') && (_DAT_003fbdd8 == (code *)0xf0b36c)) && (DAT_003fbd5b == '\0')) {
      (**(code **)(_DAT_003fbdf0 + 0x10))();
    }
  }
  return;
}

