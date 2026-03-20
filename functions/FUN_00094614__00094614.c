/*
 * Program: n42.bin
 * Function: FUN_00094614
 * Entry: 00094614
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00094614(void)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  
  uVar2 = _DAT_003fa174;
  if (_DAT_003fa1c0 == _DAT_003fa170) {
    uVar3 = (uint)_DAT_003fa174;
    if (DAT_003fa178 < 2) {
      uVar4 = 0;
      bVar1 = (&DAT_003fa214)[uVar3];
      do {
        iVar5 = *(int *)(&DAT_003fa1c8 + uVar4 * 4);
        *(uint *)(iVar5 + 4) =
             (bVar1 & 0xf) << 8 | (uint)((bVar1 & 0x10) != 0) << 0xb |
             (uint)((bVar1 & 0x20) != 0) << 5;
        puVar6 = (uint *)(iVar5 + 8);
        *puVar6 = *puVar6 & 0xc480ffff;
        *puVar6 = *puVar6 | *(uint *)(&DAT_003fa1d0 + uVar3 * 4);
        uVar4 = uVar4 + 1 & 0xffff;
      } while (uVar4 < 2);
      iVar5 = 0x60;
    }
    else {
      bVar1 = (&DAT_003fa21c)[uVar3];
      DAT_003fa176 = (bVar1 & 0x80) != 0;
      if ((DAT_003fa177 == '\0') && ((bVar1 & 0x40) != 0)) {
        DAT_003fa177 = '\x01';
      }
      uVar4 = 0;
      do {
        iVar5 = *(int *)(&DAT_003fa1c8 + uVar4 * 4);
        *(uint *)(iVar5 + 4) =
             (bVar1 & 0xf) << 8 | (uint)((bVar1 & 0x10) != 0) << 0xb |
             (uint)((bVar1 & 0x20) != 0) << 5;
        puVar6 = (uint *)(iVar5 + 8);
        *puVar6 = *puVar6 & 0xc480ffff;
        *puVar6 = *puVar6 | *(uint *)(&DAT_003fa1f0 + uVar3 * 4);
        uVar4 = uVar4 + 1 & 0xffff;
      } while (uVar4 < 2);
      iVar5 = 0x6e;
    }
    if (uVar3 < 7) {
      _DAT_003fa170 = _DAT_003fa170 + *(ushort *)(&DAT_003fa1c4 + iVar5 + uVar3 * 2);
      _DAT_003fa174 = uVar2 + 1;
    }
    else {
      _DAT_003fa170 = 0xffff;
    }
  }
  return;
}

