/*
 * Program: n42.bin
 * Function: FUN_0016dc14
 * Entry: 0016dc14
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0016dc14(void)

{
  undefined4 uVar1;
  
  if (avvtloc_1 == 0) {
    if ((B_kl15 == 0) || (B_hr == '\0')) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    DAT_003fad4a = func_0xff221e78(&UNK_003fad4b,uVar1,DAT_001c5967);
    tavvtout_w = _DAT_001c5962;
    if (((((B_kl15 != 0) && (B_hr != '\0')) && (tavvtout_w = _DAT_001c5960, B_vvttvnot == 0)) &&
        (((tavvtout_w = _DAT_001c5964, B_bt == '\0' || (B_btvvte == '\0')) || (B_vvteet == '\0'))))
       && (DAT_003fad4a != '\0')) {
      tavvtout_w = _DAT_001c5962;
    }
  }
  else {
    tavvtout_w = 0;
  }
  return;
}

