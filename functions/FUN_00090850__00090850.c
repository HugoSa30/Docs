/*
 * Program: n42.bin
 * Function: FUN_00090850
 * Entry: 00090850
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_00090850(int param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  
  while( true ) {
    uVar2 = (*(int *)(_DAT_003fa110 + 4) - _DAT_003fa114) + 1;
    if ((param_2 & 0xffff) <= uVar2) {
      uVar2 = param_2;
    }
    sVar1 = FUN_0009070c(param_1,uVar2 & 0xffff);
    if (sVar1 == 0) {
      param_1 = param_1 + (uVar2 & 0xffff);
      param_2 = param_2 - uVar2;
      if ((param_2 & 0xffff) == 0) {
        return 0;
      }
      sVar1 = FUN_000905e4(_DAT_003fa114,0);
    }
    if ((param_2 & 0xffff) == 0) break;
    if (sVar1 != 0) {
      return sVar1;
    }
  }
  return sVar1;
}

