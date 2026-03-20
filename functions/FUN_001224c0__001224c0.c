/*
 * Program: n42.bin
 * Function: FUN_001224c0
 * Entry: 001224c0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001224c0(void)

{
  undefined4 *puVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = _DAT_003fb2e4;
  if (DAT_003fb2e0 != '\0') {
    FUN_00122140(0x10);
    puVar1 = _DAT_003fbcb8 + 1;
    *_DAT_003fbcb8 = _DAT_002fc014;
    _DAT_003fbcb8 = puVar1;
    _DAT_002fc014 = 0;
    (*(code *)&SUB_00fac64c)(0);
    _DAT_002fc014 = _DAT_003fbcb8[-1];
    _DAT_003fbcb8 = _DAT_003fbcb8 + -1;
    if (piVar5 < _DAT_003fb2e8) {
      do {
        iVar3 = *piVar5;
        puVar1 = _DAT_003fbcb8 + 1;
        *_DAT_003fbcb8 = _DAT_002fc014;
        _DAT_003fbcb8 = puVar1;
        _DAT_002fc014 = 0;
        (*(code *)&SUB_00fac64c)(1);
        instructionSynchronize();
        *piVar5 = iVar3;
        instructionSynchronize();
        iVar4 = *piVar5;
        (*(code *)&SUB_00fac64c)(0);
        _DAT_002fc014 = _DAT_003fbcb8[-1];
        _DAT_003fbcb8 = _DAT_003fbcb8 + -1;
        iVar3 = *piVar5;
        piVar5 = piVar5 + 1;
        if (iVar3 != iVar4) {
          _DAT_003fb2e8 = (int *)0x0;
        }
      } while (piVar5 < _DAT_003fb2e8);
    }
    if (_DAT_003fb2e8 == (int *)0x0) {
      FUN_00122140(0x18);
      puVar1 = _DAT_003fbcb8 + 1;
      *_DAT_003fbcb8 = _DAT_002fc014;
      _DAT_003fbcb8 = puVar1;
      _DAT_002fc014 = 0;
      (*(code *)&SUB_00fac64c)(0);
      _DAT_002fc014 = _DAT_003fbcb8[-1];
      _DAT_003fbcb8 = _DAT_003fbcb8 + -1;
      FUN_00122158(4);
    }
    else {
      func_0xff21f75c(_DAT_003fb2e4);
      sVar2 = func_0xff21f760((int)_DAT_003fb2e8 - (int)_DAT_003fb2e4 & 0xffff);
      _DAT_003fb2e2 = sVar2 + _DAT_003fb2e2;
      if (_DAT_003fb2e8 < _DAT_003fb2c8) {
        if (_DAT_003fb2e8 + 0x40 <= _DAT_003fb2c8) {
          _DAT_003fb2e4 = _DAT_003fb2e4 + 0x40;
          _DAT_003fb2e8 = _DAT_003fb2e8 + 0x40;
          return;
        }
        _DAT_003fb2e4 = _DAT_003fb2e4 + 0x40;
        _DAT_003fb2e8 = _DAT_003fb2c8;
        return;
      }
      puVar1 = _DAT_003fbcb8 + 1;
      *_DAT_003fbcb8 = _DAT_002fc014;
      _DAT_003fbcb8 = puVar1;
      _DAT_002fc014 = 0;
      (*(code *)&SUB_00fac64c)(1);
      _DAT_002fc014 = _DAT_003fbcb8[-1];
      _DAT_003fbcb8 = _DAT_003fbcb8 + -1;
      FUN_00122158(0x1c);
    }
    DAT_003fb2e0 = '\0';
  }
  return;
}

