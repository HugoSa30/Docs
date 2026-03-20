/*
 * Program: n42.bin
 * Function: FUN_000942f4
 * Entry: 000942f4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000942f4(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  
  uVar1 = _DAT_003fa184;
  uVar4 = 0;
  uVar5 = (uint)DAT_003fa178;
  do {
    if (1 < uVar5) {
      FUN_000943c4();
      return;
    }
    puVar7 = *(uint **)(&DAT_003fa1c8 + uVar4 * 4);
    puVar7[1] = (DAT_003fa214 & 0xf) << 8 | (uint)((DAT_003fa214 & 0x10) != 0) << 0xb |
                (uint)((DAT_003fa214 & 0x20) != 0) << 5;
    if ((uVar1 & *(uint *)(&UNK_003f9e44 + uVar4 * 4)) != 0) {
      *puVar7 = *puVar7 & 0xf7ffffff;
      if (uVar5 == 1) {
        uVar6 = 0x8000000;
      }
      else {
        uVar6 = 0;
      }
      *puVar7 = uVar6 | *puVar7;
      if (uVar4 < 3) {
        uVar6 = _DAT_003fa180 >> (uVar4 * -8 + 0x10 & 0x3f) & 0xff00;
      }
      else {
        uVar6 = _DAT_003fa180 << 8;
      }
      if ((uVar5 == 2) || (uVar5 == 3)) {
        uVar3 = 4;
      }
      else {
        uVar3 = 0;
      }
      if (uVar5 < 3) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x40;
      }
      puVar7[2] = uVar6 | puVar7[2] | uVar3 | uVar2 | 2;
      if (3 < uVar5) {
        *puVar7 = *puVar7 | uVar5 * 0x1000000 + 0xfd000000;
      }
    }
    uVar4 = uVar4 + 1 & 0xffff;
  } while (uVar4 < 2);
  return;
}

