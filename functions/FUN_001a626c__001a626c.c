/*
 * Program: n42.bin
 * Function: FUN_001a626c
 * Entry: 001a626c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a626c(void)

{
  int iVar1;
  
  r2msCtr = r2msCtr + 1;
  FUN_0010efc0();
  func_0xff26c174(3,10000);
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

