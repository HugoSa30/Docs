/*
 * Program: n42.bin
 * Function: FUN_001ad688
 * Entry: 001ad688
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001ad688(int param_1,char param_2)

{
  uint uVar1;
  uint in_TBLr;
  int in_TBUr;
  
  (*(code *)&SUB_00fad4ac)();
  _DAT_003fc2f8 = 1;
  _DAT_003fc2fc = 1;
  (*(code *)&SUB_00faf9a8)(3);
  _DAT_003fc32c = 0;
  _DAT_003fc2c8 = _DAT_000654c4;
  _DAT_003fc2cc = _DAT_000654c8;
  _DAT_003fc2d0 = _DAT_000654cc;
  _DAT_003fc2d4 = _DAT_000654d0;
  _DAT_003fc2d8 = _DAT_000654d4;
  _DAT_003fc2dc = _DAT_000654d8;
  _DAT_003fc332 = (undefined2)(0x78 / *(byte *)(param_1 + 0x10));
  if (param_2 == '\0') {
    _DAT_003fc2e0 = _DAT_000654d0;
    _DAT_003fc2e4 = _DAT_000654d4;
    _DAT_003fc2e8 = _DAT_000654d8;
    _DAT_003fc2ec = _DAT_000654c4;
    _DAT_003fc2f0 = _DAT_000654c8;
    _DAT_003fc2f4 = _DAT_000654cc;
  }
  else {
    _DAT_003fc2e0 = _DAT_000654c4;
    _DAT_003fc2e4 = _DAT_000654c8;
    _DAT_003fc2e8 = _DAT_000654cc;
    _DAT_003fc2ec = _DAT_000654d0;
    _DAT_003fc2f0 = _DAT_000654d4;
    _DAT_003fc2f4 = _DAT_000654d8;
  }
  _DAT_003fc2c0 = param_1;
  DAT_003fc338 = param_2;
  (*(code *)&SUB_00faf874)(0x6518c,2,_DAT_003fc2e0,3);
  _DAT_003fc328 = 0;
  _DAT_003fc330 = (*(code *)&SUB_00faf148)();
  uVar1 = in_TBUr * 0x6666 + (int)((ulonglong)in_TBLr * 0x6666 >> 0x20);
  _DAT_003fc2b8 = uVar1 >> 0x10;
  _DAT_003fc2bc = uVar1 * 0x10000 | in_TBLr * 0x6666 >> 0x10;
  _DAT_003fc334 = 1;
  _DAT_003fc2f8 = 2;
  _DAT_003fc2fc = 2;
  DAT_003fc348 = *(undefined *)(param_1 + 0xb);
  DAT_003fc349 = *(undefined *)(_DAT_003fc2c0 + 0x12);
  return;
}

