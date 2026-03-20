/*
 * Program: n42.bin
 * Function: FUN_00094c38
 * Entry: 00094c38
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00094c38(undefined4 param_1)

{
  char cVar2;
  undefined4 uVar1;
  
  _DAT_003fa180 = param_1;
  cVar2 = FUN_000949c0();
  if (cVar2 == '\0') {
    _DAT_003fa18c = _DAT_003fa1c4;
    DAT_003fa178 = 2;
    _DAT_003fa184 = param_1;
    FUN_000942f4();
    DAT_003fa179 = 0;
    _DAT_003fa188 = param_1;
    FUN_000948a4();
    _DAT_003fa17c = 0;
    _DAT_003fa174 = 1;
    _DAT_003fa170 = (uint)_DAT_003fa232;
    DAT_003fa176 = (DAT_003fa21c & 0x80) != 0;
    DAT_003fa177 = (DAT_003fa21d & 0x40) != 0;
    _DAT_003fa1c0 = 0;
    FUN_00094824();
    DAT_003fa17a = 6;
    uVar1 = 0;
  }
  else {
    uVar1 = 0x91;
  }
  return uVar1;
}

