/*
 * Program: n42.bin
 * Function: FUN_001b28b8
 * Entry: 001b28b8
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_001b28b8(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0x38) {
                    /* WARNING: Could not emulate address calculation at 0x001b28e4 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2 * 4 + 0xfb28f0))();
    return uVar1;
  }
  return 1;
}

