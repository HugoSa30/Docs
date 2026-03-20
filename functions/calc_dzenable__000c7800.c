/*
 * Program: n42.bin
 * Function: calc_dzenable
 * Entry: 000c7800
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void calc_dzenable(void)

{
  undefined2 *puVar1;
  byte bVar3;
  uint uVar2;
  uint uVar4;
  byte bVar5;
  
  if (B_dzenable == 0) {
    ignchan = 0;
    B_dzrts = 0;
  }
  else {
    if (B_dzack != 0) {
      ignchan = 0;
      B_dzbuf = 0;
    }
    if (B_dzbuf == 0) {
      bVar5 = 0;
      _DAT_003fb07c = (undefined2 *)(*(code *)&SUB_00fb0664)();
      bVar3 = (*(code *)&SUB_00068548)();
      if (bVar3 != 0) {
        uVar2 = (uint)ignchan;
        puVar1 = _DAT_003fb07c + -5;
        do {
          _DAT_003fb07c = puVar1;
          uVar4 = (uint)*(byte *)((int)_DAT_003fb07c + 0x11);
          *(undefined2 *)(&DAT_005b9a82 + uVar4 * 2) = _DAT_003fb07c[5];
          (&DAT_005b9a62)[uVar4] = _DAT_003fb07c[6];
          *(undefined2 *)(&DAT_005b9a72 + uVar4 * 2) = _DAT_003fb07c[7];
          (&DAT_005b8e5c)[uVar4] = *(undefined *)(_DAT_003fb07c + 9);
          uVar2 = uVar2 | 1 << (uVar4 & 0x3f);
          bVar5 = bVar5 + 1;
          puVar1 = _DAT_003fb07c + 5;
        } while (bVar5 < bVar3);
        _DAT_003fb07c = _DAT_003fb07c + 10;
        ignchan = (byte)uVar2;
      }
    }
    B_dzrts = (ENUM_005b8d1b)(((uint)(byte)((ignchan == 0xf) << 1) << 8) >> 9);
  }
  B_dzbuf = B_dzrts;
  return;
}

