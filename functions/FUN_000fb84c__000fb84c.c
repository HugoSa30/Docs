/*
 * Program: n42.bin
 * Function: FUN_000fb84c
 * Entry: 000fb84c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fb84c(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  if (param_1 != 0) {
    _DAT_003fbcf0 = 0;
    iVar1 = *(int *)(param_1 + 8);
    _DAT_002fc244 = 0;
    _DAT_002fc200 = 0;
    if (*(int *)(iVar1 + 0x44) == 0) {
      *(undefined **)(*(int *)(iVar1 + 0x34) + -8) = &stack0xffffffe8;
    }
    else {
      *(undefined **)(*(int *)(iVar1 + 0x34) + -0xc) = &stack0xffffffe8;
    }
    FUN_000fb74c(param_1);
    FUN_000fbe8c();
    FUN_000fba90();
    if ((_DAT_003fbd00 != 0) && (*(code **)(_DAT_003fbd00 + 0xc) != (code *)0x0)) {
      (**(code **)(_DAT_003fbd00 + 0xc))();
    }
    do {
      pcVar2 = *_DAT_003fbcd0;
      _DAT_003fbcd0 = _DAT_003fbcd0 + 1;
      (*pcVar2)();
    } while (_DAT_003fbcd0 != (code **)0x0);
  }
  _DAT_003fbcb0 = 0;
  _DAT_002fc240 = _DAT_002fc240 & 0x83;
  iVar1 = 0;
  _DAT_003fbcb4 = 0xffffffff;
  _DAT_003fbcf0 = 1;
  pcVar2 = **(code ***)(_DAT_003fbcbc + 0x5c);
  while (pcVar2 != (code *)0x0) {
    (*pcVar2)();
    iVar1 = iVar1 + 1;
    pcVar2 = *(code **)(*(int *)(_DAT_003fbcbc + 0x5c) + iVar1 * 4);
  }
  return;
}

