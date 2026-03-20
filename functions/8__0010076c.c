/*
 * Program: n42.bin
 * Function: 8
 * Entry: 0010076c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short _(uint *param_1,short *param_2)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  
  if (_DAT_003fb988 == 0) {
    uVar4 = 0;
    bVar1 = false;
    if (DAT_005bc800 != 0) {
      do {
        if ((*param_1 < (uint)(&DAT_005bc804)[uVar4 * 8]) ||
           ((uint)(&DAT_005bc808)[uVar4 * 8] < *param_1)) {
          uVar4 = uVar4 + 1 & 0xff;
        }
        else {
          bVar1 = true;
          _DAT_003fb9a0 = (&DAT_005bc820)[uVar4 * 8];
        }
      } while ((uVar4 < DAT_005bc800) && (!bVar1));
      if (bVar1) {
        _DAT_003fb990 = *param_1;
        _DAT_003fb994 = param_1[1];
        DAT_003fb998 = *(undefined *)(param_1 + 2);
        _DAT_003fb99c = &DAT_005bc804 + uVar4 * 8;
        uVar3 = (&DAT_005bc808)[uVar4 * 8];
        if (_DAT_003fb994 <= uVar3) {
          uVar3 = _DAT_003fb994;
        }
        sVar2 = (*(code *)(&DAT_005bc80c)[uVar4 * 8])(_DAT_003fb990,uVar3);
        goto LAB_00100884;
      }
    }
    sVar2 = 1;
  }
  else {
    sVar2 = 4;
  }
LAB_00100884:
  *param_2 = sVar2;
  if (sVar2 == 0) {
    _DAT_003fb988 = 1;
  }
  return sVar2;
}

