/*
 * Program: n42.bin
 * Function: FUN_00152eb0
 * Entry: 00152eb0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00152eb0(void)

{
  uint uVar1;
  
  if (DAT_003fc1ae == '\0') {
    DAT_003fb360 = func_0xff2196d0(&DAT_001d1bd8,nmot,DAT_005b8b72);
  }
  else {
    DAT_003fb360 = func_0xff2196d0(&DAT_001d1c0c,nmot,DAT_005b8fff);
  }
  DAT_003fb364 = func_0xff2187cc(&DAT_001d1bc8,nmot);
  uVar1 = func_0xff21984c(&DAT_001c89d8,nmot_w,DAT_005b8a8a);
  uVar1 = (uVar1 & 0xffff) * (uint)DAT_005b8a8a >> 0xf;
  if (uVar1 < 0x10000) {
    _DAT_003fb362 = (undefined2)uVar1;
  }
  else {
    _DAT_003fb362 = 0xffff;
  }
  return;
}

