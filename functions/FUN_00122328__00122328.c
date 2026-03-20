/*
 * Program: n42.bin
 * Function: FUN_00122328
 * Entry: 00122328
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00122328(void)

{
  byte *pbVar1;
  ushort uVar2;
  byte *pbVar3;
  
  if (DAT_003fb2d4 != '\x01') {
    return;
  }
  pbVar1 = _DAT_003fb2dc;
  if ((byte *)0x300 < _DAT_003fb2dc + (1 - (int)_DAT_003fb2d8)) {
    pbVar1 = _DAT_003fb2d8 + 0x2ff;
  }
  uVar2 = 0;
  if (_DAT_003fb2d8 <= pbVar1) {
    pbVar3 = _DAT_003fb2d8;
    if (((int)_DAT_003fb2d8 - (int)pbVar1 & 1U) == 0) {
      uVar2 = (ushort)*_DAT_003fb2d8;
      pbVar3 = _DAT_003fb2d8 + 1;
      if (pbVar1 < pbVar3) goto LAB_001223b8;
    }
    do {
      uVar2 = uVar2 + *pbVar3 + (ushort)pbVar3[1];
      pbVar3 = pbVar3 + 2;
    } while (pbVar3 <= pbVar1);
  }
LAB_001223b8:
  if (_DAT_003fb2dc == pbVar1) {
    DAT_003fb2d4 = '\x02';
  }
  _DAT_003fb2d6 = _DAT_003fb2d6 + uVar2;
  _DAT_003fb2d8 = _DAT_003fb2d8 + 0x300;
  return;
}

