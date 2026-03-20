/*
 * Program: n42.bin
 * Function: FUN_0009d00c
 * Entry: 0009d00c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009d00c(void)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_003fa158 == 5) {
    iVar1 = 0;
  }
  else if (_DAT_003fa164 == 5) {
    iVar1 = 1;
  }
  else {
    iVar1 = 2;
  }
  FUN_0009c9d8();
  FUN_0009c7c8();
  if (_DAT_003fa158 == 5) {
    iVar2 = 0;
  }
  else if (_DAT_003fa164 == 5) {
    iVar2 = 1;
  }
  else {
    iVar2 = 2;
  }
  if ((iVar2 != iVar1) && (iVar2 != 2)) {
    FUN_0009ceb8(iVar2);
  }
  return;
}

