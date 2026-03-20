/*
 * Program: n42.bin
 * Function: FUN_000cead0
 * Entry: 000cead0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cead0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  ebCtrNewY = DAT_001c0800;
  if ((DAT_001c06d0 & 1) == 0) {
    DAT_003fa668 = DAT_003fa668 & 0xfc;
    B_ebDavY = 0;
    ebMissY = 0xffff;
    ebCtrOldY = DAT_001c0800;
  }
  else {
    if (EBEN == '\0') {
      DAT_003fa668 = DAT_003fa668 & 0xfc;
      B_ebDavY = 0;
      ebMissY = 0xffff;
      ebCtrOldY = DAT_001c0800;
    }
    else if ((DAT_003fa668 & 1) == 0) {
      if (ebCtrOldY != DAT_001c0800) {
        ebMissY = 0;
        ebCtrOldY = DAT_001c0800;
        DAT_003fa668 = DAT_003fa668 & 0xfe | 1;
        B_ebDavY = B_ebDavY;
      }
    }
    else if ((DAT_003fa668 >> 1 & 1) == 0) {
      if (ebCtrOldY == DAT_001c0800) {
        ebMissY = ebMissY + 1;
        if (_EBMISS_Y < ebMissY) {
          DAT_003fa668 = DAT_003fa668 & 0xfd | 2;
          B_ebDavY = 0;
        }
      }
      else {
        ebCtrOldY = DAT_001c0800;
        ebMissY = 0;
      }
    }
    puVar3 = (undefined4 *)&DAT_001c06d8;
    puVar1 = &DAT_005e01ac;
    puVar2 = (undefined4 *)(&DAT_001c06d4 + (uint)DAT_001c06d4 * 4);
    if (&DAT_001c06d7 < puVar2) {
      do {
        if (puVar1 < &UNK_005e01d5) {
          uVar4 = ((undefined4 *)*puVar3)[1];
          *puVar1 = *(undefined4 *)*puVar3;
          puVar1[1] = uVar4;
          puVar1 = puVar1 + 2;
        }
        puVar3 = puVar3 + 1;
      } while (puVar3 <= puVar2);
    }
    puVar2 = puVar2 + DAT_001c06d5;
    for (; puVar3 <= puVar2; puVar3 = puVar3 + 1) {
      if (puVar1 < &UNK_005e01d9) {
        *puVar1 = *(undefined4 *)*puVar3;
        puVar1 = puVar1 + 1;
      }
    }
    uVar5 = (uint)DAT_001c06d6;
    for (; puVar3 <= puVar2 + uVar5; puVar3 = puVar3 + 1) {
      if (puVar1 < &UNK_005e01db) {
        *(undefined2 *)puVar1 = *(undefined2 *)*puVar3;
        puVar1 = (undefined4 *)((int)puVar1 + 2);
      }
    }
    uVar6 = (uint)DAT_001c06d7;
    for (; puVar3 <= puVar2 + uVar5 + uVar6; puVar3 = puVar3 + 1) {
      if (puVar1 < &DAT_005e01dc) {
        *(undefined *)puVar1 = *(undefined *)*puVar3;
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
    }
    DAT_005e0090 = 0x4040404;
    DAT_005e007c = 0x4040404;
  }
  if ((DAT_001c0338 & 1) != 0) {
    puVar3 = &DAT_001c0340;
    puVar1 = &DAT_005e00cc;
    puVar2 = (undefined4 *)(&DAT_001c033c + (uint)DAT_001c033c * 4);
    if (&DAT_001c033f < puVar2) {
      do {
        if (puVar1 < &UNK_005e011d) {
          uVar4 = ((undefined4 *)*puVar3)[1];
          *puVar1 = *(undefined4 *)*puVar3;
          puVar1[1] = uVar4;
          puVar1 = puVar1 + 2;
        }
        puVar3 = puVar3 + 1;
      } while (puVar3 <= puVar2);
    }
    puVar2 = puVar2 + DAT_001c033d;
    for (; puVar3 <= puVar2; puVar3 = puVar3 + 1) {
      if (puVar1 < &UNK_005e0121) {
        *puVar1 = *(undefined4 *)*puVar3;
        puVar1 = puVar1 + 1;
      }
    }
    uVar5 = (uint)DAT_001c033e;
    for (; puVar3 <= puVar2 + uVar5; puVar3 = puVar3 + 1) {
      if (puVar1 < &UNK_005e0123) {
        *(undefined2 *)puVar1 = *(undefined2 *)*puVar3;
        puVar1 = (undefined4 *)((int)puVar1 + 2);
      }
    }
    uVar6 = (uint)DAT_001c033f;
    for (; puVar3 <= puVar2 + uVar5 + uVar6; puVar3 = puVar3 + 1) {
      if (puVar1 < &DAT_005e0124) {
        *(undefined *)puVar1 = *(undefined *)*puVar3;
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
    }
    DAT_005e0084 = 0x2020202;
    DAT_005e007c = 0x2020202;
  }
  return;
}

