/*
 * Program: n42.bin
 * Function: FUN_001ac71c
 * Entry: 001ac71c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001ac71c(uint param_1,int param_2,undefined2 param_3,undefined4 param_4)

{
  uint uVar1;
  word wVar2;
  uint uVar3;
  
  uVar1 = param_1 * 1000 + param_2;
  uVar3 = 0;
  do {
    if ((uint)(&dr_errArray)[uVar3] == (uVar1 & 0xffff)) {
      if ((ushort)(&DAT_005bb754)[uVar3] < 50000) {
        (&DAT_005bb754)[uVar3] = (&DAT_005bb754)[uVar3] + 1;
      }
      break;
    }
    wVar2 = (word)uVar1;
    if ((&dr_errArray)[uVar3] == 0) {
      (&dr_errArray)[uVar3] = wVar2;
      (&DAT_005bb754)[uVar3] = 1;
      break;
    }
    if (uVar3 == 0x14) {
                    /* WARNING: Read-only address (ram,0x005bb77a) is written */
      _UNK_005bb77a = wVar2;
      if (_UNK_005bb77c < 50000) {
        _UNK_005bb77c = _UNK_005bb77c + 1;
                    /* WARNING: Read-only address (ram,0x005bb77c) is written */
      }
      break;
    }
    uVar3 = uVar3 + 2 & 0xffff;
  } while (uVar3 < 0x16);
  if ((((CW_DR_ERR_ID == 0) || (CW_DR_ERR_ID == param_1)) && ((int)(uint)_CW_DR_ERR1 <= param_2)) &&
     ((_CW_DR_ERR2 == 0 || (param_2 <= (int)(uint)_CW_DR_ERR2)))) {
    _DAT_003fb8ec = (undefined2)param_1;
    _DAT_003fb8ee = (undefined2)param_2;
    dr_errInfoh = (word)((uint)param_4 >> 0x10);
    dr_errInfol = (word)param_4;
    dr_errSec = _DAT_003fb8f0;
    dr_errMin = _DAT_003fb8f2;
    _DAT_003fb8ea = param_3;
  }
  return;
}

