/*
 * Program: n42.bin
 * Function: FUN_00094b98
 * Entry: 00094b98
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00094b98(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar2;
  undefined4 uVar1;
  
  _DAT_003fa17c = param_3;
  _DAT_003fa180 = param_1;
  cVar2 = FUN_000949c0();
  if (cVar2 != '\0') {
    uVar1 = FUN_00094c24(0x91);
    return uVar1;
  }
  _DAT_003fa18c = param_3 + _DAT_003fa1c4;
  DAT_003fa178 = param_4 != 0;
  _DAT_003fa184 = param_1;
  _DAT_003fa190 = param_2;
  FUN_000942f4();
  DAT_003fa179 = 0;
  _DAT_003fa188 = param_1;
  FUN_000948f0();
  DAT_003fa17a = 5;
  return 0;
}

