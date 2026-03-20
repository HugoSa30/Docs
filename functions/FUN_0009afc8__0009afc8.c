/*
 * Program: n42.bin
 * Function: FUN_0009afc8
 * Entry: 0009afc8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0009afc8(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_38 [5];
  
  uVar3 = 0;
  uVar2 = (uint)DAT_00016c70;
  if (uVar2 != 0) {
    do {
      *(uint *)(&DAT_003fa3c0 + (uint)(byte)(&DAT_00016acd)[uVar3 * 3] * 4) =
           *(uint *)(&DAT_003fa3c0 + (uint)(byte)(&DAT_00016acd)[uVar3 * 3] * 4) |
           1 << ((byte)(&DAT_00016ace)[uVar3 * 3] & 0x3f);
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < uVar2);
  }
  uVar3 = 0;
  uVar2 = (uint)DAT_00016c71;
  if (uVar2 != 0) {
    do {
      iVar4 = uVar3 * 4;
      iVar5 = (1 << (*(byte *)(iVar4 + 0x16af3) & 0x3f)) + -1;
      *(uint *)(&DAT_003fa3c0 + (uint)*(byte *)(iVar4 + 0x16af1) * 4) =
           *(uint *)(&DAT_003fa3c0 + (uint)*(byte *)(iVar4 + 0x16af1) * 4) &
           ~(iVar5 << (*(byte *)(iVar4 + 0x16af2) & 0x3f)) |
           iVar5 << (*(byte *)(iVar4 + 0x16af2) & 0x3f);
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < uVar2);
  }
  uVar3 = 0;
  uVar2 = (uint)DAT_00016c73;
  if (uVar2 != 0) {
    do {
      *(uint *)(&DAT_003fa444 + (uint)(byte)(&DAT_00016af5)[uVar3 * 4] * 4) =
           *(uint *)(&DAT_003fa444 + (uint)(byte)(&DAT_00016af5)[uVar3 * 4] * 4) |
           1 << ((byte)(&DAT_00016af6)[uVar3 * 4] & 0x3f);
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < uVar2);
  }
  uVar3 = 0;
  uVar1 = (uint)DAT_00016c74;
  if (uVar1 != 0) {
    do {
      iVar4 = uVar3 * 8;
      iVar5 = (1 << (*(byte *)(iVar4 + 0x16b7f) & 0x3f)) + -1;
      *(uint *)(&DAT_003fa444 + (uint)*(byte *)(iVar4 + 0x16b7d) * 4) =
           *(uint *)(&DAT_003fa444 + (uint)*(byte *)(iVar4 + 0x16b7d) * 4) &
           ~(iVar5 << (*(byte *)(iVar4 + 0x16b7e) & 0x3f)) |
           iVar5 << (*(byte *)(iVar4 + 0x16b7e) & 0x3f);
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < uVar1);
  }
  uVar3 = 0;
  uVar1 = (uint)DAT_00016c75;
  iVar4 = uVar2 - uVar1;
  if (0 < iVar4) {
    do {
      iVar5 = uVar3 * 4;
      if ((&DAT_00016af7)[iVar5] == '\0') {
        *(uint *)(&DAT_003fa49c + (uint)(byte)(&DAT_00016af5)[iVar5] * 4) =
             *(uint *)(&DAT_003fa49c + (uint)(byte)(&DAT_00016af5)[iVar5] * 4) &
             ~(1 << ((byte)(&DAT_00016af6)[iVar5] & 0x3f));
      }
      else {
        *(uint *)(&DAT_003fa49c + (uint)(byte)(&DAT_00016af5)[iVar5] * 4) =
             *(uint *)(&DAT_003fa49c + (uint)(byte)(&DAT_00016af5)[iVar5] * 4) |
             1 << ((byte)(&DAT_00016af6)[iVar5] & 0x3f);
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while ((int)uVar3 < iVar4);
  }
  uVar3 = uVar2 - uVar1 & 0xff;
  if (uVar3 < uVar2) {
    do {
      iVar4 = uVar3 * 4;
      uVar2 = (uint)(byte)(&DAT_00016af5)[iVar4];
      iVar5 = uVar2 * 0x14;
      if (*(undefined **)(iVar5 + 0x16b9c) == &DAT_0000b610) {
        FUN_0009b8a0(*(undefined4 *)(iVar5 + 0x16b98),*(undefined4 *)(&DAT_003fa444 + uVar2 * 4),
                     local_38);
      }
      else {
        (**(code **)(iVar5 + 0x16ba0))
                  (*(undefined4 *)(iVar5 + 0x16b98),*(undefined4 *)(&DAT_003fa444 + uVar2 * 4),
                   local_38);
      }
      uVar2 = (uint)(byte)(&DAT_00016af6)[iVar4];
      if ((local_38[0] >> (uVar2 & 0x3f) & 1) == 0) {
        *(uint *)(&DAT_003fa49c + (uint)(byte)(&DAT_00016af5)[iVar4] * 4) =
             *(uint *)(&DAT_003fa49c + (uint)(byte)(&DAT_00016af5)[iVar4] * 4) &
             ~(1 << (uVar2 & 0x3f));
      }
      else {
        *(uint *)(&DAT_003fa49c + (uint)(byte)(&DAT_00016af5)[iVar4] * 4) =
             *(uint *)(&DAT_003fa49c + (uint)(byte)(&DAT_00016af5)[iVar4] * 4) | 1 << (uVar2 & 0x3f)
        ;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < DAT_00016c73);
  }
  uVar3 = 0;
  uVar2 = (uint)DAT_00016c74;
  if (uVar2 != 0) {
    do {
      iVar4 = uVar3 * 8;
      uVar1 = (1 << (*(byte *)(iVar4 + 0x16b7f) & 0x3f)) - 1;
      *(uint *)(&DAT_003fa49c + (uint)*(byte *)(iVar4 + 0x16b7d) * 4) =
           *(uint *)(&DAT_003fa49c + (uint)*(byte *)(iVar4 + 0x16b7d) * 4) &
           ~(uVar1 << (*(byte *)(iVar4 + 0x16b7e) & 0x3f)) |
           (*(uint *)(iVar4 + 0x16b80) & uVar1) << (*(byte *)(iVar4 + 0x16b7e) & 0x3f);
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < uVar2);
  }
  uVar3 = 0;
  if (DAT_00016c72 != 0) {
    do {
      uVar2 = *(uint *)(&DAT_003fa3c0 + uVar3 * 4) | *(uint *)(&DAT_003fa444 + uVar3 * 4);
      if (uVar2 != 0) {
        iVar4 = uVar3 * 4;
        (**(code **)(uVar3 * 0x14 + 0x16b9c))
                  (*(undefined4 *)(uVar3 * 0x14 + 0x16b98),uVar2,
                   *(uint *)(&DAT_003fa444 + uVar3 * 4),*(undefined4 *)(&DAT_003fa49c + iVar4));
        *(undefined4 *)(&DAT_003fa4c8 + iVar4) = *(undefined4 *)(&DAT_003fa49c + iVar4);
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < DAT_00016c72);
  }
  uVar3 = 0;
  if (DAT_00016c72 != 0) {
    do {
      if (*(int *)(&DAT_003fa3c0 + uVar3 * 4) != 0) {
        iVar4 = uVar3 * 4;
        (**(code **)(uVar3 * 0x14 + 0x16ba0))
                  (*(undefined4 *)(uVar3 * 0x14 + 0x16b98),*(int *)(&DAT_003fa3c0 + uVar3 * 4),
                   &DAT_003fa3ec + iVar4);
        *(undefined4 *)(&DAT_003fa418 + iVar4) = *(undefined4 *)(&DAT_003fa3ec + iVar4);
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < DAT_00016c72);
  }
  return;
}

