/*
 * Program: n42.bin
 * Function: func_3
 * Entry: 000b5974
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_3(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  ebCtrNewT = DAT_001c0798;
  if ((DAT_001c0608 & 1) == 0) {
    DAT_003fa664 = DAT_003fa664 & 0xfc;
    B_ebDavT = 0;
    ebMissT = 0xffff;
    ebCtrOldT = DAT_001c0798;
  }
  else {
    if (EBEN == '\0') {
      DAT_003fa664 = DAT_003fa664 & 0xfc;
      B_ebDavT = 0;
      ebMissT = 0xffff;
      ebCtrOldT = DAT_001c0798;
    }
    else if ((DAT_003fa664 & 1) == 0) {
      if (ebCtrOldT != DAT_001c0798) {
        ebMissT = 0;
        ebCtrOldT = DAT_001c0798;
        DAT_003fa664 = DAT_003fa664 & 0xfe | 1;
        B_ebDavT = B_ebDavT;
      }
    }
    else if ((DAT_003fa664 >> 1 & 1) == 0) {
      if (ebCtrOldT == DAT_001c0798) {
        ebMissT = ebMissT + 1;
        if (_EBMISS_T < ebMissT) {
          DAT_003fa664 = DAT_003fa664 & 0xfd | 2;
          B_ebDavT = 0;
        }
      }
      else {
        ebCtrOldT = DAT_001c0798;
        ebMissT = 0;
      }
    }
    puVar3 = (undefined4 *)&DAT_001c0610;
    puVar1 = &DAT_005e017c;
    puVar2 = (undefined4 *)(&DAT_001c060c + (uint)DAT_001c060c * 4);
    if (&DAT_001c060f < puVar2) {
      do {
        if (puVar1 < &UNK_005e01a5) {
          uVar4 = ((undefined4 *)*puVar3)[1];
          *puVar1 = *(undefined4 *)*puVar3;
          puVar1[1] = uVar4;
          puVar1 = puVar1 + 2;
        }
        puVar3 = puVar3 + 1;
      } while (puVar3 <= puVar2);
    }
    puVar2 = puVar2 + DAT_001c060d;
    for (; puVar3 <= puVar2; puVar3 = puVar3 + 1) {
      if (puVar1 < &UNK_005e01a9) {
        *puVar1 = *(undefined4 *)*puVar3;
        puVar1 = puVar1 + 1;
      }
    }
    uVar5 = (uint)DAT_001c060e;
    for (; puVar3 <= puVar2 + uVar5; puVar3 = puVar3 + 1) {
      if (puVar1 < &UNK_005e01ab) {
        *(undefined2 *)puVar1 = *(undefined2 *)*puVar3;
        puVar1 = (undefined4 *)((int)puVar1 + 2);
      }
    }
    uVar6 = (uint)DAT_001c060f;
    for (; puVar3 <= puVar2 + uVar5 + uVar6; puVar3 = puVar3 + 1) {
      if (puVar1 < &DAT_005e01ac) {
        *(undefined *)puVar1 = *(undefined *)*puVar3;
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
    }
    DAT_005e008c = 0x7070707;
    DAT_005e0078 = 0x7070707;
  }
  if ((DAT_001c0250 & 1) != 0) {
    puVar3 = (undefined4 *)&DAT_001c0258;
    puVar1 = &DAT_005e0094;
    puVar2 = (undefined4 *)(&DAT_001c0254 + (uint)DAT_001c0254 * 4);
    if (&DAT_001c0257 < puVar2) {
      do {
        if (puVar1 < &UNK_005e00c5) {
          uVar4 = ((undefined4 *)*puVar3)[1];
          *puVar1 = *(undefined4 *)*puVar3;
          puVar1[1] = uVar4;
          puVar1 = puVar1 + 2;
        }
        puVar3 = puVar3 + 1;
      } while (puVar3 <= puVar2);
    }
    puVar2 = puVar2 + DAT_001c0255;
    for (; puVar3 <= puVar2; puVar3 = puVar3 + 1) {
      if (puVar1 < &UNK_005e00c9) {
        *puVar1 = *(undefined4 *)*puVar3;
        puVar1 = puVar1 + 1;
      }
    }
    uVar5 = (uint)DAT_001c0256;
    for (; puVar3 <= puVar2 + uVar5; puVar3 = puVar3 + 1) {
      if (puVar1 < &UNK_005e00cb) {
        *(undefined2 *)puVar1 = *(undefined2 *)*puVar3;
        puVar1 = (undefined4 *)((int)puVar1 + 2);
      }
    }
    uVar6 = (uint)DAT_001c0257;
    for (; puVar3 <= puVar2 + uVar5 + uVar6; puVar3 = puVar3 + 1) {
      if (puVar1 < &DAT_005e00cc) {
        *(undefined *)puVar1 = *(undefined *)*puVar3;
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
    }
    DAT_005e0080 = 0x5050505;
    DAT_005e0078 = 0x5050505;
  }
  return;
}

