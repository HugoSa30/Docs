/*
 * Program: n42.bin
 * Function: FUN_00103e70
 * Entry: 00103e70
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00103e70(void)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_00103e04();
  if (cVar1 == '\0') {
    cVar1 = FUN_00103d40();
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else if ((*_DAT_00f0001c == _DAT_00f00000) && (*_DAT_00f00030 == _DAT_00f00000)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else if ((*DAT_001c001c == DAT_001c0000) && (*_LAB_001c0030 == DAT_001c0000)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

