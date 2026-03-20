/*
 * Program: n42.bin
 * Function: FUN_001e8894
 * Entry: 001e8894
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e8894(void)

{
  uint uVar1;
  
  _DAT_003fb994 = _DAT_00007fde;
  if (((_DAT_00007fde != 0) && (_DAT_00007fde != 0xffff)) && (599 < _DAT_00007fde)) {
    _DAT_003fb996 = _DAT_003ffff4;
    _DAT_003fb99a = _DAT_003ffff8;
    uVar1 = _DAT_003fb99a;
    _DAT_003fb99e = _DAT_003ffffc;
    DAT_003fb99c = (byte)(_DAT_003ffff8 >> 8);
    _DAT_003fb9a4 = DAT_003fb99c & 0xc0;
    _DAT_003fb9a8 = DAT_003fb99c & 0x3f;
    _DAT_003fb98c = (_DAT_003ffff8 & 0xff) * 0x8000;
    _DAT_003fb990 = _DAT_003fb98c + _DAT_003fb9a8 * 0x8000;
    _DAT_003fb99a = uVar1;
  }
  return;
}

