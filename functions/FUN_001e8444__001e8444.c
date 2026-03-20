/*
 * Program: n42.bin
 * Function: FUN_001e8444
 * Entry: 001e8444
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e8444(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  
  iVar7 = _DAT_00fe16cc;
  if (_DAT_00fe16cc != 0) {
    puVar3 = (undefined4 *)0xfe5bf0;
    iVar2 = _DAT_00fe16cc;
    do {
      puVar3 = puVar3 + 1;
      FUN_001e83fc(*puVar3);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  uVar1 = _DAT_00fe83f4;
  _DAT_00300004 = 0xffa0;
  uVar4 = 0;
  if (_DAT_00fe83f4 != 0) {
    puVar5 = (undefined4 *)&UNK_00301ffc;
    puVar3 = (undefined4 *)0xfe7bf0;
    uVar4 = _DAT_00fe83f4;
    if ((_DAT_00fe83f4 & 1) == 0) {
LAB_001e84d8:
      uVar4 = uVar4 >> 1;
      do {
        puVar5[1] = puVar3[1];
        puVar3 = puVar3 + 2;
        puVar5 = puVar5 + 2;
        *puVar5 = *puVar3;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    else {
      puVar3 = (undefined4 *)&DAT_00fe7bf4;
      puVar5 = (undefined4 *)&DAT_00302000;
      _DAT_00302000 = _DAT_00fe7bf4;
      uVar4 = _DAT_00fe83f4 - 1;
      if (uVar4 != 0) goto LAB_001e84d8;
    }
    uVar4 = uVar1 - uVar4;
  }
  if (uVar4 < _DAT_00fe16c8) {
    puVar3 = (undefined4 *)(&UNK_00301ffc + uVar4 * 4);
    uVar1 = _DAT_00fe16c8 - uVar4;
    if ((uVar1 & 1) != 0) {
      puVar3 = (undefined4 *)(&DAT_00302000 + uVar4 * 4);
      *puVar3 = 0xffffffff;
      uVar1 = uVar1 - 1;
      if (uVar1 == 0) goto LAB_001e8554;
    }
    uVar1 = uVar1 >> 1;
    do {
      puVar3[1] = 0xffffffff;
      puVar3 = puVar3 + 2;
      *puVar3 = 0xffffffff;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
LAB_001e8554:
  if (iVar7 != 0) {
    puVar3 = (undefined4 *)0xfe5bf0;
    do {
      puVar3 = puVar3 + 1;
      puVar6 = (undefined2 *)*puVar3;
      puVar6[0x14] = 0x80;
      puVar6[0x14] = 0;
      puVar6[0x14] = 0x100;
      puVar6[4] = 0;
      *(undefined4 *)(puVar6 + 0xe) = 0;
      *puVar6 = 0x460;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

