/*
 * Program: n42.bin
 * Function: FUN_000fb74c
 * Entry: 000fb74c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fb74c(undefined4 *param_1)

{
  int iVar1;
  code *pcVar2;
  
  _DAT_003fbcb4 = 0;
  _DAT_003fbcb0 = 0;
  _DAT_003fbd00 = 0;
  _DAT_003fbcf4 = 0;
  _DAT_003fbcf8 = 0;
  if (_DAT_003fbcf0 != 0) {
    _DAT_003fbcf0 = 1;
    iVar1 = 0;
    pcVar2 = **(code ***)(_DAT_003fbcbc + 0x5c);
    while (pcVar2 != (code *)0x0) {
      (*pcVar2)();
      iVar1 = iVar1 + 1;
      pcVar2 = *(code **)(*(int *)(_DAT_003fbcbc + 0x5c) + iVar1 * 4);
    }
  }
  _DAT_003fbcf0 = 2;
  FUN_000fb5f0(param_1[2]);
  _DAT_003fbcd0 = *param_1;
  _DAT_003fbcc8 = param_1;
  _DAT_003fbccc = param_1;
  FUN_000fb530();
  iVar1 = 0;
  pcVar2 = **(code ***)(_DAT_003fbcbc + 0x5c);
  while (pcVar2 != (code *)0x0) {
    (*pcVar2)();
    iVar1 = iVar1 + 1;
    pcVar2 = *(code **)(*(int *)(_DAT_003fbcbc + 0x5c) + iVar1 * 4);
  }
  return;
}

