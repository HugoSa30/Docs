/*
 * Program: n42.bin
 * Function: FUN_0010c1e8
 * Entry: 0010c1e8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0010c1e8(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  DAT_003fbe1a = 0;
  FUN_0010c4d8();
  uVar1 = (uint)DAT_003fbe1a;
  if (uVar1 == 0) {
    uVar2 = 1;
  }
  else {
    if (uVar1 < 10) {
                    /* WARNING: Could not emulate address calculation at 0x0010c230 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar1 * 4 + 0xf0c23c))();
      return;
    }
    uVar2 = 2;
  }
  FUN_0010bff8(uVar2);
  return;
}

