/*
 * Program: n42.bin
 * Function: FUN_000fa608
 * Entry: 000fa608
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fa608(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = _DAT_003fbcb8;
  puVar1 = _DAT_003fbcb8 + 2;
  _DAT_003fbcb8 = _DAT_003fbcb8 + 3;
  *puVar1 = _DAT_003fbcdc;
  puVar2[1] = _DAT_003fbcec;
  *puVar2 = _DAT_003fbcd8;
  _DAT_003fbcdc = param_1[1];
  _DAT_003fbcec = 0xff;
  _DAT_003fbcd8 = (code **)*param_1;
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

