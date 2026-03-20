/*
 * Program: n42.bin
 * Function: FUN_000a3378
 * Entry: 000a3378
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000a3378(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    (&UNK_003fa51c)[uVar1 * 2] = 0;
    (&UNK_003fa51d)[uVar1 * 2] = 0;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 8);
  return;
}

