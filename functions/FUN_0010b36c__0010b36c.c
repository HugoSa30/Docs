/*
 * Program: n42.bin
 * Function: FUN_0010b36c
 * Entry: 0010b36c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010b36c(void)

{
  uint uVar1;
  
  if ((DAT_003fbd5b == '\0') &&
     ((DAT_003fbd59 != '\0' ||
      ((_DAT_003fbddc == (undefined4 *)&DAT_003fbdf4 && (DAT_003fbd5a != '\0')))))) {
    if (DAT_003fbdb8 != '\0') {
      DAT_003fbdb8 = '\0';
      (**(code **)(_DAT_003fbdf0 + 4))();
    }
    DAT_003fbde0 = DAT_003fbd5e;
    _DAT_003fbde2 = (ushort)DAT_003fbd58;
    _DAT_003fbde4 = _DAT_003fbd54;
    uVar1 = FUN_0010b1a4();
    if ((uVar1 & 0xfffffffe) != 0) {
      (**(code **)(_DAT_003fbdf0 + 0xc))();
    }
    uVar1 = FUN_0010b1a4();
    if ((uVar1 & 1) == 0) {
      (**_DAT_003fbd60)(0,0,*_DAT_003fbddc,*(undefined2 *)(_DAT_003fbddc + 1),0);
    }
    else {
      _DAT_003fbd68 = &DAT_003fbddc;
      DAT_003fbd6c = 1;
      DAT_003fbd74 = 0;
      _DAT_003fbdd8 = 0xf0b4b4;
    }
  }
  return;
}

