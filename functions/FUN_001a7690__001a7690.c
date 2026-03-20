/*
 * Program: n42.bin
 * Function: FUN_001a7690
 * Entry: 001a7690
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001a7690(void)

{
  undefined4 uVar1;
  
  if (_DAT_003fb9f0 < 0xe) {
                    /* WARNING: Could not emulate address calculation at 0x001a76c0 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(_DAT_003fb9f0 * 4 + 0xfa76cc))();
    return uVar1;
  }
  return _DAT_003fba08;
}

