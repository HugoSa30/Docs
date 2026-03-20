/*
 * Program: n42.bin
 * Function: FUN_00190700
 * Entry: 00190700
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00190700(void)

{
  uint uVar1;
  
  uVar1 = (uint)gangi;
  if (B_autget == '\0') {
    DAT_005b9542 = _DAT_001d1dfa;
    if ((1 < uVar1) && (DAT_005b9542 = _DAT_001d1e04, (int)(uVar1 - 1) < 6)) {
      DAT_005b9542 = *(undefined2 *)(&DAT_001d1df8 + uVar1 * 2);
    }
    DAT_005b9193 = DAT_001d1cc4;
    if ((1 < uVar1) && (DAT_005b9193 = DAT_001d1cc9, (int)(uVar1 - 1) < 6)) {
      DAT_005b9193 = *(undefined *)(uVar1 + 0x1d1cc3);
    }
    DAT_005b9192 = DAT_001d1cdc;
    if ((1 < uVar1) && (DAT_005b9192 = DAT_001d1ce1, (int)(uVar1 - 1) < 6)) {
      DAT_005b9192 = (&DAT_001d1cdb)[uVar1];
    }
  }
  else if (B_wk == '\0') {
    DAT_005b9542 = _DAT_001d1de2;
    if ((1 < uVar1) && (DAT_005b9542 = _DAT_001d1dec, (int)(uVar1 - 1) < 6)) {
      DAT_005b9542 = *(undefined2 *)(&DAT_001d1de0 + uVar1 * 2);
    }
    DAT_005b9193 = DAT_001d1cb4;
    if ((1 < uVar1) && (DAT_005b9193 = DAT_001d1cb9, (int)(uVar1 - 1) < 6)) {
      DAT_005b9193 = (&DAT_001d1cb3)[uVar1];
    }
    DAT_005b9192 = DAT_001d1ccc;
    if ((1 < uVar1) && (DAT_005b9192 = DAT_001d1cd1, (int)(uVar1 - 1) < 6)) {
      DAT_005b9192 = (&DAT_001d1ccb)[uVar1];
    }
  }
  else {
    DAT_005b9542 = _DAT_001d1dee;
    if ((1 < uVar1) && (DAT_005b9542 = _DAT_001d1df8, (int)(uVar1 - 1) < 6)) {
      DAT_005b9542 = *(undefined2 *)(&DAT_001d1dec + uVar1 * 2);
    }
    DAT_005b9193 = DAT_001d1cbc;
    if ((1 < uVar1) && (DAT_005b9193 = DAT_001d1cc1, (int)(uVar1 - 1) < 6)) {
      DAT_005b9193 = *(undefined *)(uVar1 + 0x1d1cbb);
    }
    DAT_005b9192 = DAT_001d1cd4;
    if ((1 < uVar1) && (DAT_005b9192 = DAT_001d1cd9, (int)(uVar1 - 1) < 6)) {
      DAT_005b9192 = (&DAT_001d1cd3)[uVar1];
    }
  }
  DAT_005b9550 = _DAT_001d1e06;
  if ((1 < uVar1) && (DAT_005b9550 = _DAT_001d1e10, (int)(uVar1 - 1) < 6)) {
    DAT_005b9550 = *(undefined2 *)(&DAT_001d1e04 + uVar1 * 2);
  }
  DAT_005b9dfc = func_0xff21b608(&DAT_001d1e36,(int)DAT_005b9546,DAT_005b9dfc);
  _DAT_003f9cf0 = func_0xff21b038(0x1d1d62,(int)_DAT_001d1e36,esst_sga08mdub);
  _DAT_003f9cee = func_0xff21b038(&DAT_001d1ce2,(int)_DAT_001d1e36,esst_sga08mdub,DAT_005b9dfc);
  DAT_003f9cdb = tmot < DAT_001c8be8;
  return;
}

