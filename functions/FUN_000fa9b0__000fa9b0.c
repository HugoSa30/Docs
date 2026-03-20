/*
 * Program: n42.bin
 * Function: FUN_000fa9b0
 * Entry: 000fa9b0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fa9b0(void)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  
  puVar2 = _DAT_003fbcbc;
  uVar3 = *_DAT_003fbcbc;
  uVar6 = _DAT_003fbce0;
  if (uVar3 <= _DAT_003fbcdc) {
    uVar6 = _DAT_003fbcdc;
  }
  piVar4 = (int *)_DAT_003fbcbc[0x18];
  if (*piVar4 == 0) {
    piVar4[2] = (int)&DAT_003fbcc0;
    *piVar4 = -1;
    if (piVar4[uVar6 * 4] == 0) {
      piVar5 = piVar4 + uVar6 * 4;
      do {
        piVar1 = piVar5 + -4;
        piVar5 = piVar5 + -4;
        uVar6 = uVar6 - 1;
      } while (*piVar1 == 0);
    }
    *piVar4 = 0;
  }
  else if (piVar4[uVar6 * 4] == 0) {
    piVar5 = piVar4 + uVar6 * 4;
    do {
      piVar1 = piVar5 + -4;
      piVar5 = piVar5 + -4;
      uVar6 = uVar6 - 1;
    } while (*piVar1 == 0);
  }
  if (uVar3 <= uVar6) {
    if (_DAT_003fbcec <= uVar6) {
      _DAT_003fbcd8 = piVar4[uVar6 * 4 + 2] + -4;
      return;
    }
    _DAT_003fbcec = _DAT_003fbcec | 0xff00;
    if (((_DAT_003fbcb4 == 0xffffffff) && (_DAT_003fbce8 < uVar6)) &&
       (_DAT_003fbce4 = uVar6, piVar4[uVar6 * 4 + 2] == 0)) {
      _DAT_003fbcb4 = (uint)*(byte *)(puVar2[0x14] + uVar6);
      _DAT_002fc240 = (ushort)(0x100 << (0xf - _DAT_003fbcb4 >> 1 & 0x3f)) | 5;
    }
    *(uint *)(_DAT_003fbcb8 + -4) = puVar2[6];
    return;
  }
  _DAT_003fbce0 = uVar6;
  if (_DAT_003fbcec <= uVar6) {
    _DAT_003fbcd4 = piVar4[uVar6 * 4 + 2];
    return;
  }
  if (*puVar2 <= _DAT_003fbcec) {
    _DAT_003fbcec = _DAT_003fbcec | 0xff00;
    if (_DAT_003fbcb4 == 0xffffffff) {
      _DAT_003fbce4 = 0;
    }
    *(uint *)(_DAT_003fbcb8 + -4) = puVar2[6];
    return;
  }
  _DAT_003fbcd4 = piVar4[uVar6 * 4 + 2];
  _DAT_003fbcec = _DAT_003fbcec | 0xff00;
  return;
}

