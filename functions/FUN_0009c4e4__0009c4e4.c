/*
 * Program: n42.bin
 * Function: FUN_0009c4e4
 * Entry: 0009c4e4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0009c4e4(void)

{
  int iVar1;
  uint uVar2;
  uint local_28 [6];
  
  uVar2 = 0;
  if (DAT_00016c72 != 0) {
    do {
      if (*(int *)(&DAT_003fa3c0 + uVar2 * 4) != 0) {
        (**(code **)(uVar2 * 0x14 + 0x16ba0))
                  (*(undefined4 *)(uVar2 * 0x14 + 0x16b98),*(int *)(&DAT_003fa3c0 + uVar2 * 4),
                   local_28);
        iVar1 = uVar2 * 4;
        *(uint *)(&DAT_003fa418 + iVar1) =
             *(uint *)(&DAT_003fa418 + iVar1) & (local_28[0] | *(uint *)(&DAT_003fa3ec + iVar1)) |
             local_28[0] & *(uint *)(&DAT_003fa3ec + iVar1);
        *(uint *)(&DAT_003fa3ec + iVar1) = local_28[0];
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < DAT_00016c72);
  }
  return;
}

