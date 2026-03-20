/*
 * Program: n42.bin
 * Function: FUN_001a50c8
 * Entry: 001a50c8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a50c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  DAT_003fbdb8 = 1;
  DAT_003fbdc0 = DAT_003fbde0;
  DAT_003fbdc8 = FUN_0010b1a4();
  _DAT_003fbdc2 = _DAT_003fbde2;
  iVar3 = 0;
  if (_DAT_003fbde2 != 0) {
    puVar2 = (undefined *)(*_DAT_003fbdbc + -1);
    puVar1 = (undefined *)(_DAT_003fbde4 + -1);
    do {
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)_DAT_003fbdc2);
  }
  _DAT_003fbdc4 = *_DAT_003fbdbc;
  DAT_003fbd80 = 1;
  DAT_003fbd88 = 0;
  return;
}

