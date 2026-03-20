/*
 * Program: n42.bin
 * Function: FUN_000fb018
 * Entry: 000fb018
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fb018(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int **ppiVar3;
  
  puVar2 = _DAT_003fbcb8;
  puVar1 = _DAT_003fbcb8 + 2;
  _DAT_003fbcb8 = _DAT_003fbcb8 + 3;
  *puVar1 = _DAT_003fbcdc;
  puVar2[1] = _DAT_003fbcec;
  *puVar2 = _DAT_003fbcd8;
  _DAT_003fbcdc = _DAT_003fbce4;
  _DAT_003fbcec = _DAT_003fbce4;
  ppiVar3 = (int **)(*(int *)(_DAT_003fbcbc + 0x60) + _DAT_003fbce4 * 0x10);
  _DAT_003fbcd8 = (code **)**ppiVar3;
  ppiVar3[2] = (int *)_DAT_003fbcd8;
  _DAT_002fc240 = _DAT_002fc240 & 0x83;
  _DAT_003fbcb4 = 0xffffffff;
  _DAT_002fc014 = *(undefined4 *)(*(int *)(_DAT_003fbcbc + 0x44) + _DAT_003fbcdc * 4);
  do {
    (**_DAT_003fbcd8)();
    _DAT_003fbcd8 = _DAT_003fbcd8 + 1;
  } while (_DAT_003fbcec < 0x100);
  _DAT_003fbcdc = _DAT_003fbcb8[-1];
  _DAT_003fbcec = _DAT_003fbcb8[-2];
  _DAT_003fbcd8 = (code **)_DAT_003fbcb8[-3];
  _DAT_003fbcb8 = _DAT_003fbcb8 + -3;
  return;
}

