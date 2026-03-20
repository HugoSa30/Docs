/*
 * Program: n42.bin
 * Function: FUN_001a29f0
 * Entry: 001a29f0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a29f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = _DAT_003fbc84;
  puVar1 = _DAT_003fbc7c;
  if ((byte)_DAT_003fbc7c[2] < 6) {
    _DAT_003fbc84[1] = 0;
    iVar3 = FUN_001248b8(puVar2 + 3,*(undefined4 *)(puVar1 + 4),puVar1[3],puVar1[2],puVar2 + 1);
    if (iVar3 == 0) {
      *puVar2 = 0xff;
    }
    else {
      *puVar1 = 0xf;
    }
  }
  else {
    _DAT_003fbc84[1] = 0x32;
    *puVar2 = 0xff;
  }
  return;
}

