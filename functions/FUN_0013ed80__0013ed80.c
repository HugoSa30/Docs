/*
 * Program: n42.bin
 * Function: FUN_0013ed80
 * Entry: 0013ed80
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0013ed80(void)

{
  byte bVar1;
  uint in_r7;
  byte in_cr0;
  
  if ((bool)(in_cr0 >> 1 & 1)) {
    DAT_003fb2fd = DAT_003fb2fd & 0xfe;
    DAT_003fb302 = (&TVSATM)[in_r7 >> 0x10] +
                   (char)((in_r7 & 0xffff) *
                          ((uint)(byte)(&DAT_001d1a0d)[in_r7 >> 0x10] -
                          (uint)(byte)(&TVSATM)[in_r7 >> 0x10]) >> 0x10);
    bVar1 = *(byte *)((in_r7 >> 0x10) + 0x1d19f8);
    nwem_out = (char)((int)(short)((((ushort)bVar1 +
                                     (short)((in_r7 & 0xffff) *
                                             ((uint)*(byte *)((in_r7 >> 0x10) + 0x1d19f9) -
                                             (uint)bVar1) >> 0x10) & 0xff) -
                                   ((ushort)(byte)NWEM[in_r7 >> 0x10] +
                                    (short)((in_r7 & 0xffff) *
                                            ((uint)*(byte *)((in_r7 >> 0x10) + 0x1d19f1) -
                                            (uint)(byte)NWEM[in_r7 >> 0x10]) >> 0x10) & 0xff)) *
                                  (ushort)dpsfak) / 0xff) +
               (char)NWEM[in_r7 >> 0x10] +
               (char)((in_r7 & 0xffff) *
                      ((uint)*(byte *)((in_r7 >> 0x10) + 0x1d19f1) - (uint)(byte)NWEM[in_r7 >> 0x10]
                      ) >> 0x10);
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

