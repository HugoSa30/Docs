/*
 * Program: n42.bin
 * Function: FUN_001a26e4
 * Entry: 001a26e4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a26e4(void)

{
  undefined *puVar1;
  undefined uVar2;
  undefined4 local_10 [2];
  
  puVar1 = _DAT_003fbc84;
  local_10[0] = 0;
  DAT_003fbc98 = *(byte *)(_DAT_003fbc7c + 2);
  if ((byte)((DAT_003fbc98 & 1) + (DAT_003fbc98 >> 1 & 1) + (DAT_003fbc98 >> 6 & 1)) == '\x01') {
    if (DAT_00fa9ca9 != '\0') {
      _DAT_003fbc9c = FUN_001a1350(local_10);
      *(undefined4 *)(puVar1 + 4) = local_10[0];
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0x32;
  }
  puVar1[1] = uVar2;
  puVar1[3] = DAT_00fa9ca9;
  *puVar1 = 0xff;
  return;
}

