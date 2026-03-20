/*
 * Program: n42.bin
 * Function: FUN_00094824
 * Entry: 00094824
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00094824(void)

{
  uint uVar1;
  uint uVar2;
  
  FUN_00094614();
  uVar1 = _DAT_003fa184;
  _DAT_003fa1c0 = _DAT_003fa1c0 + 1;
  uVar2 = 0;
  do {
    if ((uVar1 & *(uint *)(&UNK_003f9e44 + uVar2 * 4)) != 0) {
      *(uint *)(*(int *)(&DAT_003fa1c8 + uVar2 * 4) + 8) =
           *(uint *)(*(int *)(&DAT_003fa1c8 + uVar2 * 4) + 8) | 1;
    }
    uVar2 = uVar2 + 1 & 0xffff;
  } while (uVar2 < 2);
  return;
}

