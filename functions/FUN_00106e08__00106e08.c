/*
 * Program: n42.bin
 * Function: FUN_00106e08
 * Entry: 00106e08
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00106e08(void)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = _DAT_003fb95c;
  if (DAT_005b8088._0_2_ == _DAT_003fb958) {
    uVar3 = (uint)_DAT_003fb95c;
    if (DAT_003fb960 < 2) {
      bVar1 = (&DAT_005b8058)[uVar3];
      uVar4 = 0;
      do {
        iVar5 = (&DAT_005b800c)[uVar4];
        *(uint *)(iVar5 + 4) =
             (bVar1 & 0xf) << 8 | (uint)((bVar1 & 0x10) != 0) << 0xb |
             (uint)((bVar1 & 0x20) != 0) << 5;
        *(uint *)(iVar5 + 8) = *(uint *)(iVar5 + 8) & 0xc480ffff;
        *(uint *)(iVar5 + 8) = *(uint *)(iVar5 + 8) | (&DAT_005b8014)[uVar3];
        uVar4 = uVar4 + 1 & 0xffff;
      } while (uVar4 < 2);
      iVar5 = 0x60;
    }
    else {
      bVar1 = (&DAT_005b8060)[uVar3];
      DAT_003fb95e = (bVar1 & 0x80) != 0;
      if ((DAT_003fb95f == '\0') && ((bVar1 & 0x40) != 0)) {
        DAT_003fb95f = '\x01';
      }
      uVar4 = 0;
      do {
        iVar5 = (&DAT_005b800c)[uVar4];
        *(uint *)(iVar5 + 4) =
             (bVar1 & 0xf) << 8 | (uint)((bVar1 & 0x10) != 0) << 0xb |
             (uint)((bVar1 & 0x20) != 0) << 5;
        *(uint *)(iVar5 + 8) = *(uint *)(iVar5 + 8) & 0xc480ffff;
        *(uint *)(iVar5 + 8) = *(uint *)(iVar5 + 8) | (&DAT_005b8034)[uVar3];
        uVar4 = uVar4 + 1 & 0xffff;
      } while (uVar4 < 2);
      iVar5 = 0x6e;
    }
    if (uVar3 < 7) {
      _DAT_003fb958 = _DAT_003fb958 + *(ushort *)((int)&DAT_005b8008 + iVar5 + uVar3 * 2);
      _DAT_003fb95c = uVar2 + 1;
    }
    else {
      _DAT_003fb958 = 0xffff;
    }
  }
  return;
}

