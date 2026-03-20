/*
 * Program: n42.bin
 * Function: FUN_0013ee04
 * Entry: 0013ee04
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0013ee04(void)

{
  byte bVar1;
  uint in_r7;
  
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
                    ((uint)*(byte *)((in_r7 >> 0x10) + 0x1d19f1) - (uint)(byte)NWEM[in_r7 >> 0x10])
                   >> 0x10);
  return;
}

