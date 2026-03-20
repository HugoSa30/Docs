/*
 * Program: n42.bin
 * Function: FUN_001268c4
 * Entry: 001268c4
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_001268c4(void)

{
  bool bVar1;
  
  if (B_m9cvn == '\0') {
    bVar1 = kryptoCounter < 5;
  }
  else {
    bVar1 = kryptoCounter < 10;
  }
  return ((uint)(byte)(bVar1 << 3) << 8) >> 0xb ^ 1;
}

