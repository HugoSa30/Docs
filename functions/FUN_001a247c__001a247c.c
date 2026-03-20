/*
 * Program: n42.bin
 * Function: FUN_001a247c
 * Entry: 001a247c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a247c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = _DAT_003fbc84;
  puVar1 = _DAT_003fbc7c;
  _DAT_003fbc84[1] = 0;
  iVar3 = FUN_00124ae0(_DAT_003fbca8,DAT_003fbcac,_DAT_003fbca0,DAT_003fbca4,
                       *(undefined4 *)(puVar1 + 2),puVar2 + 1);
  if (iVar3 == 0) {
    *puVar2 = 0xff;
  }
  else {
    *puVar1 = 0x19;
  }
  return;
}

