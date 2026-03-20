/*
 * Program: n42.bin
 * Function: FUN_000f1ad8
 * Entry: 000f1ad8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f1ad8(int param_1)

{
  if (param_1 < 0x10) {
    _DAT_003fa06c =
         CONCAT22(*(short *)(&UNK_003fa072 + param_1 * 4) + (ushort)evz_austot * 8,
                  *(short *)(&UNK_003fa074 + param_1 * 4) + (ushort)evz_austot * -8);
  }
  else {
    _DAT_003fa06c = 0;
  }
  return;
}

