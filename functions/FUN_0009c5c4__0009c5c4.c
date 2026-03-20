/*
 * Program: n42.bin
 * Function: FUN_0009c5c4
 * Entry: 0009c5c4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009c5c4(void)

{
  int iVar1;
  uint uVar2;
  uint in_MSR;
  
  uVar2 = 0;
  if (DAT_00016c72 != 0) {
    do {
      if (*(int *)(&DAT_003fa444 + uVar2 * 4) != 0) {
        if (_DAT_003fa10c == 0) {
          _DAT_003fa110 = in_MSR >> 0xf & 1;
        }
        _DAT_003fa10c = _DAT_003fa10c + 1;
        iVar1 = uVar2 * 4;
        (**(code **)(uVar2 * 0x14 + 0x16ba4))
                  (*(undefined4 *)(uVar2 * 0x14 + 0x16b98),*(undefined4 *)(&DAT_003fa444 + iVar1),
                   *(undefined4 *)(&DAT_003fa49c + iVar1));
        *(undefined4 *)(&DAT_003fa4c8 + iVar1) = *(undefined4 *)(&DAT_003fa49c + iVar1);
        _DAT_003fa10c = _DAT_003fa10c + -1;
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < DAT_00016c72);
  }
  return;
}

