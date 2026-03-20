/*
 * Program: n42.bin
 * Function: FUN_001012ac
 * Entry: 001012ac
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_001012ac(void)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  _DAT_00304c08 = 0;
  _DAT_00304c0a = 0xb7;
  _DAT_00304c10 = 0;
  _DAT_00304e00 = 0x78;
  _DAT_00304e02 = 0xff;
  do {
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x4f);
  _DAT_00304c0c = 0;
  uVar1 = _DAT_00304e80;
  if (uVar2 == 0x4f) {
    uVar1 = 0xf000;
  }
  return uVar1;
}

