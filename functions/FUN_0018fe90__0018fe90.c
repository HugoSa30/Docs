/*
 * Program: n42.bin
 * Function: FUN_0018fe90
 * Entry: 0018fe90
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018fe90(void)

{
  uint in_MSR;
  
  if (B_genactiv == B_genactiv) {
    DAT_005bb842 = DAT_005bb842 + 1;
    DAT_005bb844 = DAT_005bb844 + 1;
  }
  if ((5 < DAT_005bb842) || (5 < DAT_005bb844)) {
    DAT_005bb842 = 0;
    DAT_005bb844 = 0;
    if (DAT_005bb7b2 == -1) {
      DAT_005bb7b3 = 0;
    }
    else {
      (*(code *)&SUB_00fb24e0)((int)DAT_005bb7b2);
    }
  }
  if ((DAT_005bb848 < 0xb) && (DAT_005bb7b3 != 5)) {
    if (_DAT_003fa10c == 0) {
      _DAT_003fa110 = in_MSR >> 0xf & 1;
    }
    if (DAT_005bb7b4 != 7) {
      DAT_005bb7b3 = DAT_005bb7b4;
      DAT_005bb7b4 = 7;
    }
  }
  else {
    DAT_005bb7b3 = 5;
  }
  if (8 < DAT_005bb7b3) {
    if (DAT_005bb7b2 == -1) {
      DAT_005bb7b3 = 0;
    }
    else {
      (*(code *)&SUB_00fb24e0)((int)DAT_005bb7b2);
    }
    return;
  }
                    /* WARNING: Could not emulate address calculation at 0x0018fff4 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)DAT_005bb7b3 * 4 + 0xf90000))();
  return;
}

