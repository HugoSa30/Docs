/*
 * Program: n42.bin
 * Function: FUN_001a3218
 * Entry: 001a3218
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a3218(void)

{
  uint uVar1;
  uint uVar2;
  
  _DAT_003fae7c = &UNK_003faf00;
  uVar1 = (uint)DAT_00f07e5c;
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      _DAT_003fae7c[uVar2] = *(undefined *)(uVar2 * 8 + 0xf23308);
      (&UNK_003faf04)[uVar2] = 0;
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < uVar1);
  }
  return;
}

