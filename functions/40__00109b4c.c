/*
 * Program: n42.bin
 * Function: 40
 * Entry: 00109b4c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void _0(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  DAT_003fae74 = 0;
  DAT_003fae75 = 0;
  uVar2 = (uint)DAT_00f07e5c;
  if (uVar2 != 0) {
    do {
      (&UNK_003fae78)[uVar1] = 0;
      (&UNK_003fae76)[uVar1] = 0;
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < uVar2);
  }
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      (&UNK_003fae84)[uVar1 * 2] = 0xff;
      (&UNK_003fae85)[uVar1 * 2] = 0xff;
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < uVar2 << 4);
  }
  return;
}

