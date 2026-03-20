/*
 * Program: n42.bin
 * Function: FUN_00190aec
 * Entry: 00190aec
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00190aec(void)

{
  undefined4 uVar1;
  
  DAT_005b95a2 = func_0xff21984c(&DAT_001d20ec,DAT_005b92e0,nmot_w);
  _DAT_003fb3a4 = func_0xff217f20(_DAT_001c9922,DAT_005b95a2,_DAT_003fb3a4,_DAT_003fb3a4 & 0xffff);
  uVar1 = _DAT_003fb3a4;
  _DAT_003fb3a4 = (undefined2)(_DAT_003fb3a4 >> 0x10);
  DAT_005b95a4 = _DAT_003fb3a4;
  _DAT_003fb3a4 = uVar1;
  return;
}

