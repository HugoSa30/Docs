/*
 * Program: n42.bin
 * Function: FUN_000bd1ac
 * Entry: 000bd1ac
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000bd1d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bd1ac(void)

{
  uint uVar1;
  
  if (B_fbm == '\0') {
    if (bmloss_w == 0) {
      DAT_003faa8a = 1;
      DAT_003faa8c = 1;
      return;
    }
    bmloss_w = bmloss_w - 1;
  }
  else {
    uVar1 = (uint)bmloss_w + (uint)_ZIDFBM;
    if (0xffff < uVar1) {
      uVar1 = 0xffff;
    }
    if ((uint)_LBMMX < (uVar1 & 0xffff)) {
      bmloss_w = _LBMMX;
    }
    else {
      bmloss_w = (word)uVar1;
    }
  }
  if (bmloss_w == 0) {
    DAT_003faa8c = 1;
    DAT_003faa8a = 1;
    return;
  }
  uVar1 = _LBMMX - 100;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  else if (0xffff < (int)uVar1) {
    uVar1 = 0xffff;
  }
  if ((uint)bmloss_w <= (uVar1 & 0xffff)) {
    return;
  }
  DAT_003faa8a = 0;
  DAT_003faa8b = 1;
  DAT_003faa8c = 1;
  return;
}

