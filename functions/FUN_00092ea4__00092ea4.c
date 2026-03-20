/*
 * Program: n42.bin
 * Function: FUN_00092ea4
 * Entry: 00092ea4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_00092ea4(uint param_1,uint param_2)

{
  uint uVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  if ((param_1 <= _DAT_001c0490) && (_DAT_001c048c <= param_2)) {
    bVar3 = true;
    uVar5 = 0;
    if (((uint)(_DAT_003f9e4c + *_DAT_003f9e54) < param_1) && (_DAT_003f9e50 != 0)) {
      do {
        uVar5 = uVar5 + 1;
        if (param_1 <= (uint)(_DAT_003f9e4c + *(int *)((int)_DAT_003f9e54 + (uVar5 * 4 & 0x3fc))))
        break;
      } while ((uVar5 & 0xff) < _DAT_003f9e50);
    }
    if ((_DAT_003f9e4c + _DAT_003f9e54[uVar5 & 0xff] != param_1) ||
       ((uVar5 & 0xff) == _DAT_003f9e50)) {
      bVar3 = false;
    }
    DAT_003fa1a0 = (undefined)uVar5;
    iVar4 = _DAT_003f9e4c + _DAT_003f9e54[uVar5 & 0xff] +
            *(int *)(_DAT_003f9e58 + (uVar5 & 0xff) * 4);
    while ((iVar4 - 1U < param_2 && ((uVar5 & 0xff) < _DAT_003f9e50))) {
      uVar5 = uVar5 + 1;
      uVar1 = uVar5 * 4 & 0x3fc;
      iVar4 = _DAT_003f9e4c + *(int *)((int)_DAT_003f9e54 + uVar1) + *(int *)(_DAT_003f9e58 + uVar1)
      ;
    }
    if (((_DAT_003f9e4c + _DAT_003f9e54[uVar5 & 0xff] + *(int *)(_DAT_003f9e58 + (uVar5 & 0xff) * 4)
         ) - 1U != param_2) || ((uVar5 & 0xff) == _DAT_003f9e50)) {
      bVar3 = false;
    }
    DAT_003fa1a1 = (undefined)uVar5;
    if (bVar3) {
      sVar2 = FUN_00093248();
      goto LAB_00093000;
    }
  }
  sVar2 = 1;
LAB_00093000:
  if (sVar2 != 0) {
    DAT_003fa1a1 = 0;
    DAT_003fa1a0 = 1;
  }
  return sVar2;
}

