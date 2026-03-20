/*
 * Program: n42.bin
 * Function: FUN_001a319c
 * Entry: 001a319c
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_001a319c(uint param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar1 = (&UNK_003fae78)[param_1];
  _5();
  bVar2 = (&UNK_003fae76)[param_1];
  (&UNK_003fae76)[param_1] = (&UNK_003fae76)[param_1] & 0xfe;
  bVar3 = DAT_003fae74 >> (param_1 & 0x3f);
  DAT_003fae74 = DAT_003fae74 & ~(byte)(1 << (param_1 & 0x3f));
  _6();
  return bVar1 & 2 | bVar2 & 1 | (bVar3 & 1) << 2;
}

