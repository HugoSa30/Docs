/*
 * Program: n42.bin
 * Function: FUN_001ac87c
 * Entry: 001ac87c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001ac87c(void)

{
  word *pwVar1;
  int iVar2;
  
  _DAT_003fb8ec = 0;
  _DAT_003fb8ee = 0;
  _DAT_003fb8ea = 0;
  dr_errInfoh = 0;
  dr_errInfol = 0;
  dr_errSec = 0;
  dr_errMin = 0;
  pwVar1 = &dr_errSec;
  iVar2 = 0xb;
  do {
    pwVar1[1] = 0;
    pwVar1 = pwVar1 + 2;
    *pwVar1 = 0;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

