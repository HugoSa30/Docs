/*
 * Program: n42.bin
 * Function: FUN_001a86d4
 * Entry: 001a86d4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a86d4(void)

{
  uint uVar1;
  
  if (((_DAT_003fbbba != 0) ||
      ((uVar1 = *(int *)(*(int *)(*_DAT_003fba9c + 4) + 0x28) - _DAT_003fbbbc,
       *(uint *)(_DAT_003fbbb0 + 8) <= uVar1 && (uVar1 <= *(uint *)(_DAT_003fbbb0 + 4))))) &&
     (_DAT_003fbbb4 == 4)) {
    *(undefined *)(_DAT_003fffac + (uint)_DAT_003fbbba) = DAT_003fbbb8;
    _DAT_003fbbba = _DAT_003fbbba + 1;
    FUN_00109630(*_DAT_003fba9c,&DAT_003fbbb8,1);
    FUN_00109650(*_DAT_003fba9c,*(undefined4 *)(_DAT_003fbaa8 + 8),0);
    return;
  }
  _DAT_003fbbb4 = 0;
  FUN_0010df98();
                    /* WARNING: Read-only address (ram,0x003fbbb8) is written */
  return;
}

