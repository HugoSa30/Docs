/*
 * Program: n42.bin
 * Function: FUN_0010b4b4
 * Entry: 0010b4b4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010b4b4(void)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if (DAT_003fbd74 == '\0') {
    if (DAT_003fbd75 == '\0') {
      (**_DAT_003fbd60)(0,0,*_DAT_003fbddc,*(undefined2 *)(_DAT_003fbddc + 1),0);
      _DAT_003fbdd8 = 0xf0b36c;
    }
  }
  else {
    DAT_003fbd74 = '\0';
    _DAT_003fbdcc = _DAT_003fbd70;
    DAT_003fbd5e = *(undefined *)(_DAT_003fbd70 + 10);
    pcVar1 = *(char **)(_DAT_003fbd70 + 4);
    if ((*pcVar1 == '\x7f') && (pcVar1[2] == DAT_003fbd64)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    (**_DAT_003fbd60)(pcVar1,*(undefined2 *)(_DAT_003fbd70 + 8),0,0,uVar2);
    *(undefined *)(_DAT_003fbdcc + 0xb) = 2;
    _DAT_003fbdd0 = &DAT_003fbd68;
    _DAT_003fbdd8 = 0xf0b5d8;
  }
  return;
}

