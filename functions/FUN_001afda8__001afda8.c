/*
 * Program: n42.bin
 * Function: FUN_001afda8
 * Entry: 001afda8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_001afda8(void)

{
  short sVar2;
  int iVar1;
  
  if (_DAT_003fc664 == 2) {
    sVar2 = (*(code *)&SUB_00067d24)(DAT_003fc660,DAT_003fc661,DAT_003fc663);
    iVar1 = (int)sVar2;
  }
  else if (_DAT_003fc664 == 1) {
    sVar2 = (*(code *)&SUB_00067e48)(DAT_003fc660,DAT_003fc661,DAT_003fc662,DAT_003fc663);
    iVar1 = (int)sVar2;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

