/*
 * Program: n42.bin
 * Function: FUN_00134c84
 * Entry: 00134c84
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00134c84(void)

{
  uint uVar1;
  
  szout_w = _TSUB;
  if ((ub != 0) && (uVar1 = (int)(uint)ub >> 1, szout_w = _DAT_001cceec, uVar1 < 0x80)) {
    szout_w = *(word *)(&TSUB + uVar1 * 2);
  }
  return;
}

