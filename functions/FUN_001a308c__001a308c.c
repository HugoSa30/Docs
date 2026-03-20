/*
 * Program: n42.bin
 * Function: FUN_001a308c
 * Entry: 001a308c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a308c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = _DAT_003fbc84;
  puVar1 = _DAT_003fbc7c;
  if ((byte)_DAT_003fbc7c[2] < 6) {
    _DAT_003fbc84[1] = 0;
    iVar3 = FUN_001248b8(puVar2 + 3,_DAT_003fbca0,DAT_003fbca4,puVar1[2],puVar2 + 1);
    if (iVar3 == 0) {
      if (puVar2[1] == '\0') {
        _DAT_003fbca0 = _DAT_003fbca0 + (uint)(byte)puVar1[2];
      }
      *puVar2 = 0xff;
    }
    else {
      *puVar1 = 4;
    }
  }
  else {
    _DAT_003fbc84[1] = 0x32;
    *puVar2 = 0xff;
  }
  return;
}

