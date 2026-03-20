/*
 * Program: n42.bin
 * Function: FUN_0013ed64
 * Entry: 0013ed64
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0013ed64(void)

{
  byte bVar1;
  
  if (B_stend == '\0') {
    DAT_003fb2fd = DAT_003fb2fd & 0xfe;
    DAT_003fb302 = (&TVSATM)[esst_stm05saub >> 0x10] +
                   (char)((esst_stm05saub & 0xffff) *
                          ((uint)(byte)(&DAT_001d1a0d)[esst_stm05saub >> 0x10] -
                          (uint)(byte)(&TVSATM)[esst_stm05saub >> 0x10]) >> 0x10);
    bVar1 = *(byte *)((esst_stm05saub >> 0x10) + 0x1d19f8);
    nwem_out = (char)((int)(short)((((ushort)bVar1 +
                                     (short)((esst_stm05saub & 0xffff) *
                                             ((uint)*(byte *)((esst_stm05saub >> 0x10) + 0x1d19f9) -
                                             (uint)bVar1) >> 0x10) & 0xff) -
                                   ((ushort)(byte)NWEM[esst_stm05saub >> 0x10] +
                                    (short)((esst_stm05saub & 0xffff) *
                                            ((uint)*(byte *)((esst_stm05saub >> 0x10) + 0x1d19f1) -
                                            (uint)(byte)NWEM[esst_stm05saub >> 0x10]) >> 0x10) &
                                   0xff)) * (ushort)dpsfak) / 0xff) +
               (char)NWEM[esst_stm05saub >> 0x10] +
               (char)((esst_stm05saub & 0xffff) *
                      ((uint)*(byte *)((esst_stm05saub >> 0x10) + 0x1d19f1) -
                      (uint)(byte)NWEM[esst_stm05saub >> 0x10]) >> 0x10);
    return;
  }
  if (DAT_003fb302 == '\0') {
    DAT_003fb2fd = DAT_003fb2fd & 0xfe | 1;
    FUN_0013ee04();
    return;
  }
  DAT_003fb302 = DAT_003fb302 + -1;
  FUN_0013ee04();
  return;
}

