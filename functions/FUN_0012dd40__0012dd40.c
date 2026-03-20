/*
 * Program: n42.bin
 * Function: FUN_0012dd40
 * Entry: 0012dd40
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0012dd40(void)

{
  if ((char)DAT_001c5958 < '\0') {
    vvtchke = vvtchke | 0x80;
  }
  if ((DAT_001c5958 >> 6 & 1) != 0) {
    vvtchke = vvtchke | 0x40;
  }
  vvtfkt = (DAT_001c5958 >> 4 & 1) != 0;
  B_vvtchkde = 0;
  DAT_003fad3b = func_0xff221e78(&UNK_003fad3c,0,DAT_001c595d);
  DAT_003fad44 = func_0xff221e78(&UNK_003fad45,0,DAT_001c595b);
  DAT_003fad46 = func_0xff221e78(&UNK_003fad47,0,DAT_001c595b);
  return;
}

