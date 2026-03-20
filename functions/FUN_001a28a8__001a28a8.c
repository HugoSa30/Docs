/*
 * Program: n42.bin
 * Function: FUN_001a28a8
 * Entry: 001a28a8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a28a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = _DAT_003fbc84;
  puVar1 = _DAT_003fbc7c;
  iVar3 = FUN_00124910(_DAT_003fbca0,DAT_003fbca4,_DAT_003fbc84 + 1);
  if (iVar3 == 0) {
    *puVar2 = 0xff;
  }
  else {
    *puVar1 = 0x11;
  }
  return;
}

