/*
 * Program: n42.bin
 * Function: FUN_000943c4
 * Entry: 000943c4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000943c4(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint in_r9;
  int unaff_r29;
  uint unaff_r30;
  uint uVar3;
  uint *puVar4;
  
  while( true ) {
    puVar4 = *(uint **)(param_3 + in_r9 * 4 + 4);
    puVar4[1] = unaff_r30;
    if ((param_1 & *(uint *)(param_2 + in_r9 * 4)) != 0) {
      *puVar4 = *puVar4 & 0xf7ffffff;
      if (unaff_r29 == 1) {
        uVar3 = 0x8000000;
      }
      else {
        uVar3 = 0;
      }
      *puVar4 = uVar3 | *puVar4;
      if ((int)in_r9 < 3) {
        uVar3 = _DAT_003fa180 >> (in_r9 * -8 + 0x10 & 0x3f) & 0xff00;
      }
      else {
        uVar3 = _DAT_003fa180 << 8;
      }
      if ((unaff_r29 == 2) || (unaff_r29 == 3)) {
        uVar2 = 4;
      }
      else {
        uVar2 = 0;
      }
      if (unaff_r29 < 3) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0x40;
      }
      puVar4[2] = uVar3 | puVar4[2] | uVar2 | uVar1 | 2;
      if (3 < unaff_r29) {
        *puVar4 = *puVar4 | unaff_r29 * 0x1000000 + 0xfd000000U;
      }
    }
    in_r9 = in_r9 + 1 & 0xffff;
    if (1 < in_r9) break;
    if (1 < unaff_r29) {
      FUN_000943c4();
      return;
    }
    unaff_r30 = (DAT_003fa214 & 0xf) << 8 | (uint)((DAT_003fa214 & 0x10) != 0) << 0xb |
                (uint)((DAT_003fa214 & 0x20) != 0) << 5;
  }
  return;
}

