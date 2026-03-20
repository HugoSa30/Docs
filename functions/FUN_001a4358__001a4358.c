/*
 * Program: n42.bin
 * Function: FUN_001a4358
 * Entry: 001a4358
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_001a4358(uint param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  bVar2 = FUN_001a4610();
  _5();
  bVar1 = (byte)(1 << (param_1 & 0x3f));
  if (bVar2 == 0) {
    (&UNK_003fae78)[param_1] = (&UNK_003fae78)[param_1] & 0xfe;
    DAT_003fae75 = DAT_003fae75 & ~bVar1;
  }
  else if ((bVar2 & 0x40) == 0) {
    DAT_003fae75 = bVar1 | DAT_003fae75;
    DAT_003fae74 = bVar1 | DAT_003fae74;
    (&UNK_003fae78)[param_1] = (&UNK_003fae78)[param_1] & 0xfe;
    uVar3 = 4;
  }
  else {
    (&UNK_003fae78)[param_1] = (&UNK_003fae78)[param_1] | 1;
    (&UNK_003fae76)[param_1] = (&UNK_003fae76)[param_1] | 1;
    uVar3 = 1;
  }
  _6();
  return uVar3;
}

