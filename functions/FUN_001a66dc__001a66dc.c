/*
 * Program: n42.bin
 * Function: FUN_001a66dc
 * Entry: 001a66dc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a66dc(void)

{
  int iVar1;
  
  r2ms_swoff_Ctr = r2ms_swoff_Ctr + 1;
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

