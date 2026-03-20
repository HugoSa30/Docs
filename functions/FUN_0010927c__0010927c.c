/*
 * Program: n42.bin
 * Function: FUN_0010927c
 * Entry: 0010927c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010927c(int param_1,undefined *param_2)

{
  undefined uVar1;
  int iVar2;
  uint in_MSR;
  
  if (_DAT_003fa10c == 0) {
    _DAT_003fa110 = in_MSR >> 0xf & 1;
  }
  _DAT_003fa10c = _DAT_003fa10c + 1;
  iVar2 = *(int *)(param_1 + 4);
  uVar1 = param_2[1];
  *(undefined *)(iVar2 + 0x3a) = *param_2;
  *(undefined *)(iVar2 + 0x3b) = uVar1;
  _DAT_003fa10c = _DAT_003fa10c + -1;
  return;
}

