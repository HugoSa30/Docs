/*
 * Program: n42.bin
 * Function: FUN_00116798
 * Entry: 00116798
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00116798(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  
  if ((raster_um & 3) == 3) {
    uVar5 = (uint)aktqu_uc;
    bVar1 = (&DAT_001c0bb0)[uVar5];
    bVar2 = (&DAT_001c0ba0)[uVar5];
    bVar3 = (&DAT_001c0b90)[uVar5];
    bVar4 = (&DAT_001c0bc0)[uVar5];
    _DAT_003f98aa = 0;
    mzf_p_uc = bVar4;
    mz_uc = bVar1;
    if (DAT_001c0b8d != 0) {
      do {
        (&DAT_005b8fcc)[DAT_003f98ab] = *(undefined *)(uVar5 * 8 + 0x1c0bd0 + (uint)DAT_003f98ab);
        _DAT_003f98aa = _DAT_003f98aa + 1;
      } while (_DAT_003f98aa < DAT_001c0b8d);
    }
    if (bVar1 < bVar2) {
      if ((int)(uint)bVar4 < (int)(DAT_001c0b8d - 1)) {
        mzf_p_uc = bVar4 + 1;
      }
      else {
        mzf_p_uc = 0;
      }
      _DAT_003f98b6 =
           (ushort)bVar3 + (ushort)bVar2 * 0x100 +
           ((ushort)(byte)(&DAT_005b8fcc)[mzf_p_uc] - (ushort)bVar2) * (ushort)DAT_001c0b8c;
      (&DAT_005b8fcc)[mzf_p_uc] = bVar1;
    }
    else {
      _DAT_003f98b6 = (ushort)bVar1 << 8;
      _DAT_003f98b8 = 0;
      if (DAT_001c0b8d != 0) {
        do {
          (&DAT_005b8fcc)[DAT_003f98b9] = bVar1;
          _DAT_003f98b8 = _DAT_003f98b8 + 1;
        } while (DAT_003f98b9 < DAT_001c0b8d);
      }
    }
    mzf_uc = DAT_003f98b6;
    mzf_l_uc = DAT_003f98b7;
    abmzf_uc = (ushort)DAT_003f98b6 * 0x100 + (_DAT_003f98b6 & 0xff);
  }
  return;
}

