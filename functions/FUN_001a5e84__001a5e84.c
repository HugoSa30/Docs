/*
 * Program: n42.bin
 * Function: FUN_001a5e84
 * Entry: 001a5e84
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a5e84(void)

{
  int iVar1;
  
  iVar1 = func_0xff26bf90(0,0);
  if ((((iVar1 == 0) && (iVar1 = func_0xff26bf90(1,0), iVar1 == 0)) &&
      (iVar1 = func_0xff26bf90(2,0), iVar1 == 0)) && (iVar1 = func_0xff26bf90(3,0), iVar1 == 0)) {
    (*(code *)&SUB_000693f0)();
    func_0xff26c174(0,75000);
  }
  else {
    _dlOvrunCtr = _dlOvrunCtr + 1;
    (*(code *)&SUB_00faca3c)(0xdc);
  }
  return;
}

