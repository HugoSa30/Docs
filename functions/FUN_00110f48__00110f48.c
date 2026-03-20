/*
 * Program: n42.bin
 * Function: FUN_00110f48
 * Entry: 00110f48
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00110f48(void)

{
  uint uVar1;
  
  _DAT_00305000 = 0x80;
  _DAT_00305014 = 0xf78;
  DAT_00305017 = 0x7e;
  DAT_00305016 = 0x7b;
  _DAT_00305018 = 0x8114;
  _DAT_0030501c = 0x100;
  DAT_0030501e = 0;
  uVar1 = 0;
  do {
    *(undefined2 *)(&DAT_00305180 + uVar1 * 2) = 0;
    *(undefined2 *)(&UNK_00305140 + uVar1 * 2) = 0;
    (&DAT_003051c0)[uVar1] = 0;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 0x20);
  DAT_003051c0 = 0x4e;
  _DAT_00305180 = 0x12c0;
  _DAT_0030501a = 0x8404;
  return;
}

