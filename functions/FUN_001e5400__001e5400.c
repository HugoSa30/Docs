/*
 * Program: n42.bin
 * Function: FUN_001e5400
 * Entry: 001e5400
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e5400(int *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = 0;
  FUN_001e2e0c();
  uVar1 = 0;
  if (_DAT_00fe16d8 != 0) {
    piVar2 = (int *)&DAT_003fb860;
    do {
      if (0xb < *(ushort *)(*piVar2 + 6)) {
        *param_1 = (*param_1 * 2 + (uint)*(ushort *)(*piVar2 + 8)) * 2 +
                   (uint)*(ushort *)(*piVar2 + 0xc);
        uVar3 = uVar3 + 1;
      }
      piVar2 = piVar2 + 6;
      uVar1 = uVar1 + 1;
    } while (uVar1 < _DAT_00fe16d8);
  }
  if (_DAT_00fe16d8 == uVar3) {
    uVar1 = 0;
    piVar4 = (int *)&DAT_003fb860;
    piVar2 = piVar4;
    for (uVar3 = _DAT_00fe16d8; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar1 = uVar1 + (*(short *)(*piVar2 + 6) == 0xc);
      piVar2 = piVar2 + 6;
    }
    uVar3 = _DAT_00fe16d8;
    if ((DAT_003fb898 >> 2 & 1) == 1) {
      if (uVar1 < _DAT_00fe16dc) {
        FUN_001e8824(0x1b);
        uVar3 = _DAT_00fe16d8;
      }
    }
    else if (uVar1 < _DAT_00fe16d8) {
      FUN_001e8824(0x1b);
      uVar3 = _DAT_00fe16d8;
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(uint *)(*(int *)(&DAT_00fe5bf4 + piVar4[1] * 4) + 0x18) =
           *(uint *)(*(int *)(&DAT_00fe5bf4 + piVar4[1] * 4) + 0x18) &
           ~(3 << (piVar4[2] * 2 & 0x3fU));
      *(uint *)(*(int *)(&DAT_00fe5bf4 + piVar4[1] * 4) + 0x18) =
           *(uint *)(*(int *)(&DAT_00fe5bf4 + piVar4[1] * 4) + 0x18) | 1 << (piVar4[2] * 2 & 0x3fU);
      piVar4 = piVar4 + 6;
    }
  }
  FUN_001e2e0c();
  return;
}

