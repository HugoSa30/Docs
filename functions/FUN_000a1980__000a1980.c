/*
 * Program: n42.bin
 * Function: FUN_000a1980
 * Entry: 000a1980
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_000a1980(uint param_1,uint param_2)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((_DAT_0001197c < param_1) || (param_2 < _DAT_00011978)) {
    sVar1 = 1;
  }
  else {
    bVar2 = true;
    uVar5 = 0;
    if (((uint)(_DAT_00011e70 + *_DAT_00011e78) < param_1) && (_DAT_00011e74 != 0)) {
      do {
        uVar5 = uVar5 + 1;
        if (param_1 <= (uint)(_DAT_00011e70 + *(int *)((int)_DAT_00011e78 + (uVar5 * 4 & 0x3fc))))
        break;
      } while ((uVar5 & 0xff) < _DAT_00011e74);
    }
    if ((_DAT_00011e70 + _DAT_00011e78[uVar5 & 0xff] != param_1) ||
       ((uVar5 & 0xff) == _DAT_00011e74)) {
      bVar2 = false;
    }
    DAT_003fa1d0 = (undefined)uVar5;
    iVar4 = _DAT_00011e70 + _DAT_00011e78[uVar5 & 0xff] +
            *(int *)(_DAT_00011e7c + (uVar5 & 0xff) * 4);
    while ((iVar4 - 1U < param_2 && ((uVar5 & 0xff) < _DAT_00011e74))) {
      uVar5 = uVar5 + 1;
      uVar3 = uVar5 * 4 & 0x3fc;
      iVar4 = _DAT_00011e70 + *(int *)((int)_DAT_00011e78 + uVar3) + *(int *)(_DAT_00011e7c + uVar3)
      ;
    }
    if (((_DAT_00011e70 + _DAT_00011e78[uVar5 & 0xff] + *(int *)(_DAT_00011e7c + (uVar5 & 0xff) * 4)
         ) - 1U != param_2) || ((uVar5 & 0xff) == _DAT_00011e74)) {
      bVar2 = false;
    }
    DAT_003fa1d1 = (undefined)uVar5;
    if (bVar2) {
      sVar1 = FUN_000a1c14();
    }
    else {
      sVar1 = 1;
    }
  }
  if (sVar1 != 0) {
    DAT_003fa1d1 = 0;
    DAT_003fa1d0 = 1;
  }
  return sVar1;
}

