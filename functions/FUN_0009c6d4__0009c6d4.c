/*
 * Program: n42.bin
 * Function: FUN_0009c6d4
 * Entry: 0009c6d4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009c6d4(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_000b1204(DAT_0000ebf0);
  iVar2 = FUN_000b1224(DAT_0000ebf1);
  _DAT_003fa144 = iVar2 + 2;
  _DAT_003fa13c = iVar1 + 0x14;
  _DAT_003fa140 = iVar1 + 0x1ffc;
  _DAT_003fa138 = iVar1;
  iVar1 = FUN_000b1204(DAT_0000ebf4);
  iVar2 = FUN_000b1224(DAT_0000ebf5);
  _DAT_003fa154 = iVar2 + 2;
  _DAT_003fa14c = iVar1 + 0x14;
  _DAT_003fa150 = iVar1 + 0x1ffc;
  _DAT_003fa148 = iVar1;
  if (_DAT_003fa144 < _DAT_003fa140) {
    (*(code *)&SUB_00faca3c)(0x15e);
  }
  if (_DAT_003fa154 < _DAT_003fa150) {
    (*(code *)&SUB_00faca3c)(0x15e);
  }
  return;
}

