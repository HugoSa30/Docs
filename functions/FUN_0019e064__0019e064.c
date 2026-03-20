/*
 * Program: n42.bin
 * Function: FUN_0019e064
 * Entry: 0019e064
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019e064(void)

{
  undefined4 uVar1;
  
  if ((B_enabale == 0) || (_DAT_001c1b2a <= nmot_w)) {
    B_enabint = 0;
  }
  else {
    B_enabint = 1;
  }
  if ((B_enabint == 0) || (DAT_003faa5b != '\0')) {
    DAT_003faa5a = false;
  }
  else {
    DAT_003faa5a = true;
  }
  if ((bool)DAT_003faa5a) {
    B_strtint = 1;
  }
  DAT_003faa6b = B_enabint != DAT_003faa6c;
  DAT_003faa5b = B_enabint;
  DAT_003faa6c = B_enabint;
  if ((bool)DAT_003faa6b) {
    if (B_enabint == 0) {
      uVar1 = 500;
    }
    else {
      uVar1 = 0xffffffff;
    }
    FUN_001ad9ec(uVar1);
  }
  return;
}

