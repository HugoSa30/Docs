/*
 * Program: n42.bin
 * Function: FUN_0018f250
 * Entry: 0018f250
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0018f250(void)

{
  DAT_003fac9d = func_0xff21ae98(&KFRLMNSAN,DAT_001c1080,esst_snm12feub,esst_stm04feub);
  DAT_003fac9c = func_0xff21ae98(&KFRLMNN,DAT_001c1080,esst_snm12feub,esst_stm04feub);
  DAT_003fac9f = func_0xff21ae98(&KFRLMNSANT,DAT_001c1080,esst_snm12feub,esst_stm04feub);
  DAT_003fac9e = func_0xff21ae98(&KFRLMNNT,DAT_001c1080,esst_snm12feub,esst_stm04feub);
  DAT_003faca0 = (&DAT_001c56c0)[esst_snm12feub >> 0x10] +
                 (char)((esst_snm12feub & 0xffff) *
                        ((uint)(byte)(&DAT_001c56c1)[esst_snm12feub >> 0x10] -
                        (uint)(byte)(&DAT_001c56c0)[esst_snm12feub >> 0x10]) >> 0x10);
  return;
}

