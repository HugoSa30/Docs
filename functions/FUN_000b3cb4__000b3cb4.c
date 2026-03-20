/*
 * Program: n42.bin
 * Function: FUN_000b3cb4
 * Entry: 000b3cb4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000b3cb4(undefined4 param_1,uint param_2)

{
  if (param_2 < 0xd) {
                    /* WARNING: Could not emulate address calculation at 0x000b3cd0 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 * 4 + 0x23cdc))();
    return;
  }
  return;
}

