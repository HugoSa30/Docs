/*
 * Program: n42.bin
 * Function: FUN_000c84c4
 * Entry: 000c84c4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000c84c4(void)

{
  uint uVar1;
  
  if ((synstate < 3) && (B_nmin == '\0')) {
    uVar1 = (0x1d4c0000 / tseg_l) * 0x271 >> 8;
    if (39999 < uVar1) {
      uVar1 = 40000;
    }
    nmot_w = (word)uVar1;
  }
  return;
}

