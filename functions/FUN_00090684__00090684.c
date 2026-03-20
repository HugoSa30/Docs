/*
 * Program: n42.bin
 * Function: FUN_00090684
 * Entry: 00090684
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_00090684(void)

{
  uint uVar1;
  undefined2 uVar2;
  
  uVar1 = _DAT_003fa114 & 3;
  while (uVar1 != 0) {
    (&DAT_003fa11c)[_DAT_003fa114 & 0x3f] = 0xff;
    _DAT_003fa114 = _DAT_003fa114 + 1;
    uVar1 = _DAT_003fa114 & 3;
  }
  uVar2 = func_0x0048a3d8(&DAT_003fa11c + (_DAT_003fa118 & 0x3f),
                          _DAT_003fa114 - _DAT_003fa118 >> 2 & 0xff,_DAT_003fa118);
  return uVar2;
}

