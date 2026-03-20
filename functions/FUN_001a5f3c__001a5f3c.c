/*
 * Program: n42.bin
 * Function: FUN_001a5f3c
 * Entry: 001a5f3c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a5f3c(void)

{
  int iVar1;
  
  _DAT_003fb5b8 = _DAT_003fb5b8 + -1;
  if (_DAT_003fb5b8 < 1) {
    _DAT_003fb5b8 = 5;
    iVar1 = func_0xff26bf90(0,0);
    if (iVar1 != 0) {
      _dlOvrunCtr = _dlOvrunCtr + 1;
      (*(code *)&SUB_00faca3c)(0xdc);
    }
  }
  return;
}

