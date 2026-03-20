/*
 * Program: n42.bin
 * Function: FUN_000a46a8
 * Entry: 000a46a8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000a46a8(void)

{
  _DAT_00305000 = _DAT_00305000 & 0x3fff | 0x80;
  _DAT_00305014 = _DAT_00305014 & 0xfff8 | 0x78;
  DAT_00305017 = DAT_00305017 & 0xfe | 0x7e;
  DAT_00305016 = DAT_00305016 | 0x7b;
  _DAT_00305018 = _DAT_00305018 & 0x83ff | 0x8000;
  _DAT_0030501c = _DAT_0030501c & 0x3fff;
  return 1;
}

