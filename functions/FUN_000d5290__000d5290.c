/*
 * Program: n42.bin
 * Function: FUN_000d5290
 * Entry: 000d5290
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d5290(void)

{
  uint uVar1;
  
  if (((B_stend == '\0') && (szout_w = _TSUB, ub != 0)) &&
     (uVar1 = (int)(uint)ub >> 1, szout_w = _DAT_001cceec, uVar1 < 0x80)) {
    szout_w = *(word *)(&TSUB + uVar1 * 2);
  }
  return;
}

