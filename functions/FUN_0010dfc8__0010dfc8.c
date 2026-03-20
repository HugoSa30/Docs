/*
 * Program: n42.bin
 * Function: FUN_0010dfc8
 * Entry: 0010dfc8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0010dfc8(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00109650(*_DAT_003fba9c,_DAT_003fff8c,0);
  _DAT_003fbb34 = 0;
  if ((uVar1 < _DAT_003fff8c) && (DAT_003fbb22 == '\0')) {
    iVar2 = _DAT_003fff8c - uVar1;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

