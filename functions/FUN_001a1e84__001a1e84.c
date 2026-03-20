/*
 * Program: n42.bin
 * Function: FUN_001a1e84
 * Entry: 001a1e84
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a1e84(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = _DAT_003fbc84;
  puVar1 = _DAT_003fbc7c;
  if ((byte)_DAT_003fbc7c[2] < 6) {
    _DAT_003fbc84[1] = 0;
    iVar3 = FUN_0012475c(_DAT_003fbca0,DAT_003fbca4,puVar1 + 3,puVar1[2],puVar2 + 1);
    if (iVar3 == 0) {
      if (puVar2[1] == '\0') {
        _DAT_003fbca0 = _DAT_003fbca0 + (uint)(byte)puVar1[2];
        *(int *)(puVar2 + 4) = _DAT_003fbca0;
        puVar2[3] = DAT_003fbca4;
      }
      *puVar2 = 0xff;
    }
    else {
      *puVar1 = 3;
    }
  }
  else {
    _DAT_003fbc84[1] = 0x32;
    *puVar2 = 0xff;
  }
  return;
}

