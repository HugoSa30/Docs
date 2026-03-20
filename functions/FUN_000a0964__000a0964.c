/*
 * Program: n42.bin
 * Function: FUN_000a0964
 * Entry: 000a0964
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000a0964(void)

{
  if (DAT_003fa18b - 0x20 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x000a0994 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((DAT_003fa18b - 0x20) * 4 + 68000))();
    return;
  }
  return;
}

