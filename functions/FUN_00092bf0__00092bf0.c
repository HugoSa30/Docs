/*
 * Program: n42.bin
 * Function: FUN_00092bf0
 * Entry: 00092bf0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_00092bf0(uint *param_1,short *param_2)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  
  if (_DAT_003fa1a4 == 0) {
    uVar4 = 0;
    bVar1 = false;
    if (DAT_001c02ac != 0) {
      do {
        if ((*param_1 < (uint)(&DAT_001c02b0)[uVar4 * 7]) ||
           ((uint)(&DAT_001c02b4)[uVar4 * 7] < *param_1)) {
          uVar4 = uVar4 + 1 & 0xff;
        }
        else {
          bVar1 = true;
        }
      } while ((uVar4 < DAT_001c02ac) && (!bVar1));
      if (bVar1) {
        _DAT_003fa1b0 = *param_1;
        _DAT_003fa1b4 = param_1[1];
        DAT_003fa1b8 = *(undefined *)(param_1 + 2);
        _DAT_003fa1bc = &DAT_001c02b0 + uVar4 * 7;
        uVar3 = (&DAT_001c02b4)[uVar4 * 7];
        if (_DAT_003fa1b4 <= uVar3) {
          uVar3 = _DAT_003fa1b4;
        }
        sVar2 = (*(code *)(&DAT_001c02b8)[uVar4 * 7])(_DAT_003fa1b0,uVar3);
        goto LAB_00092cd8;
      }
    }
    sVar2 = 1;
  }
  else {
    sVar2 = 4;
  }
LAB_00092cd8:
  *param_2 = sVar2;
  if (sVar2 == 0) {
    _DAT_003fa1a4 = 1;
  }
  return sVar2;
}

