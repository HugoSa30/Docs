/*
 * Program: n42.bin
 * Function: FUN_000b3320
 * Entry: 000b3320
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000b3320(void)

{
  uint uVar1;
  
  if (wub < DAT_001c7943) {
    ub = DAT_001c7941;
    DAT_003f9b90 = DAT_003f9b90 & 0xfe | 1;
  }
  else {
    ub = wub;
    DAT_003f9b90 = DAT_003f9b90 & 0xfe;
  }
  uVar1 = (uint)ub * 0x3c5 >> 2;
  ubsq_w = (word)uVar1;
  ubsq = (byte)(uVar1 >> 8);
  return;
}

