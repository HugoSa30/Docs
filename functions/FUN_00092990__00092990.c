/*
 * Program: n42.bin
 * Function: FUN_00092990
 * Entry: 00092990
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00092990(void)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  
  iVar1 = _DAT_003fa104;
  if (DAT_003fa0fc == '\x01') {
    if (DAT_001c0430 < _DAT_003fa108) {
      _DAT_003fa108 = _DAT_003fa108 - DAT_001c0430;
      _DAT_003fa104 = _DAT_003fa104 + DAT_001c0430;
      uVar3 = DAT_001c0430;
    }
    else {
      DAT_003fa0fc = '\x02';
      uVar3 = _DAT_003fa108;
    }
    sVar2 = FUN_00092964(iVar1,uVar3 & 0xffff);
    _DAT_003fa0fe = sVar2 + _DAT_003fa0fe;
  }
  return;
}

