/*
 * Program: n42.bin
 * Function: FUN_001a1360
 * Entry: 001a1360
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a1360(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = _DAT_003fbc84;
  puVar1 = _DAT_003fbc7c;
  _DAT_003fbc84[1] = 0;
  iVar3 = FUN_00124a2c(_DAT_003fbca0,DAT_003fbca4,*(undefined4 *)(puVar1 + 2),puVar2 + 4,puVar2 + 1)
  ;
  if (iVar3 == 0) {
    *puVar2 = 0xff;
    puVar2[3] = 2;
  }
  else {
    *puVar1 = 0xe;
  }
  return;
}

