/*
 * Program: n42.bin
 * Function: FUN_001e7524
 * Entry: 001e7524
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e7524(ushort *param_1)

{
  byte bVar1;
  
  _DAT_00305000 = 0x80;
  DAT_00305007 = 0;
  _DAT_00305014 = _DAT_00305014 & 0xff00 | 0x78;
  DAT_00305016 = 0x7b;
  DAT_00305017 = 0x7e;
  _DAT_00305018 = *param_1 | 0x8000;
  _DAT_0030501a =
       (ushort)((*(byte *)(param_1 + 1) & 0x7f) << 8) | (ushort)*(byte *)((int)param_1 + 3);
  bVar1 = *(byte *)(param_1 + 2);
  _DAT_0030501c = (ushort)((bVar1 & 0x20) << 9) | (ushort)((bVar1 & 0x10) << 9) | bVar1 & 0xf;
  DAT_0030501e = 0;
  DAT_0030501f = 0;
  return;
}

