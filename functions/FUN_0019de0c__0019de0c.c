/*
 * Program: n42.bin
 * Function: FUN_0019de0c
 * Entry: 0019de0c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019de0c(void)

{
  uint uVar1;
  
  if (((DAT_005bb7c4 & 1) == 0) || ((_B_nlale & 0x8000) == 0)) {
    B_nachln = '\0';
  }
  else {
    B_nachln = '\x01';
  }
  if (B_nachln == '\0') {
    B_nl10 = 0;
  }
  else {
    uVar1 = _TNLSGMN - 3;
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    else if (0xffff < (int)uVar1) {
      uVar1 = 0xffff;
    }
    if (((uint)_tnachl_w < (uVar1 & 0xffff)) && (TMMLN < tmot)) {
      B_nl10 = 1;
    }
    else {
      B_nl10 = 0;
    }
  }
  if (((DAT_005bb7c4 & 1) == 0) || (tmot <= TMMLN)) {
    tamlnl = 0;
  }
  else {
    tamlnl = DAT_001d3595;
  }
  FUN_0015352c();
  return;
}

