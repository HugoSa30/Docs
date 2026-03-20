/*
 * Program: n42.bin
 * Function: FUN_000a12cc
 * Entry: 000a12cc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a12cc(void)

{
  byte bVar1;
  undefined4 *puVar2;
  ushort uVar3;
  uint uVar4;
  byte bVar5;
  byte *pbVar6;
  
  bVar1 = DAT_00016cf4;
  pbVar6 = &DAT_003fe734;
  if (_DAT_003fe730 == 0x3aa3) {
    DAT_003fa18a = DAT_003fa18a | 0x10;
  }
  else if (_DAT_003fe730 != -0x5996) {
    DAT_003fa18a = DAT_003fa18a | 8;
  }
  uVar4 = (uint)DAT_003fa18a;
  bVar5 = 0;
  if (DAT_00016cf4 != 0) {
    do {
      if (((int)uVar4 >> 3 & 1U | (int)uVar4 >> 4 & 1U) == 0) {
        *pbVar6 = *pbVar6 & 0x80;
      }
      else {
        *pbVar6 = 0;
      }
      *pbVar6 = *pbVar6 | 3;
      pbVar6 = pbVar6 + 1;
      bVar5 = bVar5 + 1;
    } while (bVar5 < bVar1);
  }
  uVar3 = (ushort)DAT_00016cf5;
  if (DAT_00016cf5 != 0) {
    puVar2 = (undefined4 *)&UNK_003fa4f0;
    do {
      puVar2 = puVar2 + 1;
      *puVar2 = 0;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  DAT_003fa188 = 0;
  DAT_003fa189 = 0;
  DAT_003fa18b = 0;
  _DAT_003fa19e = _DAT_00016cfa;
  return;
}

