/*
 * Program: n42.bin
 * Function: FUN_00109314
 * Entry: 00109314
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00109314(void)

{
  int iVar1;
  uint in_MSR;
  undefined local_10;
  undefined local_f;
  
  FUN_001090b4(*_DAT_003fba9c,&local_10);
  local_f = 0;
  if (_DAT_003fa10c == 0) {
    _DAT_003fa110 = in_MSR >> 0xf & 1;
  }
  _DAT_003fa10c = _DAT_003fa10c + 1;
  iVar1 = *(int *)(*_DAT_003fba9c + 4);
  *(undefined *)(iVar1 + 0x3a) = local_10;
  *(undefined *)(iVar1 + 0x3b) = 0;
  _DAT_003fa10c = _DAT_003fa10c + -1;
  FUN_0010e3f8();
  return;
}

