/*
 * Program: n42.bin
 * Function: FUN_001348bc
 * Entry: 001348bc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001348bc(void)

{
  byte bVar1;
  
  DAT_003fb302 = (&TVSATM)[esst_stm05saub >> 0x10] +
                 (char)((esst_stm05saub & 0xffff) *
                        ((uint)(byte)(&DAT_001d1a0d)[esst_stm05saub >> 0x10] -
                        (uint)(byte)(&TVSATM)[esst_stm05saub >> 0x10]) >> 0x10);
  DAT_003fb300 = func_0xff21ae98(&KFTVSA,DAT_001c0fb4,esst_stm05saub,esst_snm08__ub);
  DAT_003fb306 = func_0xff21ae98(&KFTVSAM,DAT_001c0fb4,esst_stm05saub,esst_snm08__ub);
  bVar1 = *(byte *)((esst_stm05saub >> 0x10) + 0x1d19f8);
  nwem_out = (char)((int)(short)((((ushort)bVar1 +
                                   (short)((esst_stm05saub & 0xffff) *
                                           ((uint)*(byte *)((esst_stm05saub >> 0x10) + 0x1d19f9) -
                                           (uint)bVar1) >> 0x10) & 0xff) -
                                 ((ushort)(byte)NWEM[esst_stm05saub >> 0x10] +
                                  (short)((esst_stm05saub & 0xffff) *
                                          ((uint)*(byte *)((esst_stm05saub >> 0x10) + 0x1d19f1) -
                                          (uint)(byte)NWEM[esst_stm05saub >> 0x10]) >> 0x10) & 0xff)
                                 ) * (ushort)dpsfak) / 0xff) +
             (char)NWEM[esst_stm05saub >> 0x10] +
             (char)((esst_stm05saub & 0xffff) *
                    ((uint)*(byte *)((esst_stm05saub >> 0x10) + 0x1d19f1) -
                    (uint)(byte)NWEM[esst_stm05saub >> 0x10]) >> 0x10);
  nwe = nwem_out;
  return;
}

