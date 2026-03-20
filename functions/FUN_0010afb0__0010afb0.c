/*
 * Program: n42.bin
 * Function: FUN_0010afb0
 * Entry: 0010afb0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010afb0(void)

{
  int iVar1;
  uint uVar2;
  
  if (((_DAT_003fbd34 != 0) && (*(char *)(_DAT_003fbd34 + 0x34) != '\0')) &&
     (uVar2 = 0, _DAT_003fbd28 != 0)) {
    do {
      iVar1 = *(int *)(_DAT_003fbd24 + uVar2 * 4);
      if (_DAT_003fbd30 != iVar1) {
        (**(code **)(iVar1 + 4))();
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < _DAT_003fbd28);
  }
  return;
}

