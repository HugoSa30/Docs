/*
 * Program: n42.bin
 * Function: FUN_00179000
 * Entry: 00179000
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00179000(void)

{
  fketm = func_0xff2187cc(&DAT_001c83b0,tmot);
  rkrmx1w = (&DAT_001c8390)[DAT_005b9c2c >> 0x10] +
            (char)((DAT_005b9c2c & 0xffff) *
                   ((uint)(byte)(&DAT_001c8391)[DAT_005b9c2c >> 0x10] -
                   (uint)(byte)(&DAT_001c8390)[DAT_005b9c2c >> 0x10]) >> 0x10);
  rkrmx2w = (&DAT_001c83a0)[DAT_005b9c30 >> 0x10] +
            (char)((DAT_005b9c30 & 0xffff) *
                   ((uint)(byte)(&DAT_001c83a1)[DAT_005b9c30 >> 0x10] -
                   (uint)(byte)(&DAT_001c83a0)[DAT_005b9c30 >> 0x10]) >> 0x10);
  rkrem1w = (&DAT_001c8370)[DAT_005b9c2c >> 0x10] +
            (char)((DAT_005b9c2c & 0xffff) *
                   ((uint)*(byte *)((DAT_005b9c2c >> 0x10) + 0x1c8371) -
                   (uint)(byte)(&DAT_001c8370)[DAT_005b9c2c >> 0x10]) >> 0x10);
  rkrem2w = (&DAT_001c8380)[DAT_005b9c30 >> 0x10] +
            (char)((DAT_005b9c30 & 0xffff) *
                   ((uint)*(byte *)((DAT_005b9c30 >> 0x10) + 0x1c8381) -
                   (uint)(byte)(&DAT_001c8380)[DAT_005b9c30 >> 0x10]) >> 0x10);
  kereffw = func_0xff2187cc(&DAT_001d1954,nmot);
  kerefldyw = func_0xff2187cc(&DAT_001d1964,nmot);
  kerefndyw = func_0xff2187cc(&DAT_001d1974,nmot);
  DAT_005b9140 = func_0xff21ae98(&DAT_001c8170,DAT_001ce8f4,DAT_005b9c84,DAT_005b9c98);
  DAT_005b9141 = func_0xff21ae98(&DAT_001c81b0,DAT_001ce8f4,DAT_005b9c84,DAT_005b9c98);
  DAT_005b9142 = func_0xff21ae98(&DAT_001c81f0,DAT_001ce8f4,DAT_005b9c84,DAT_005b9c98);
  DAT_005b9143 = func_0xff21ae98(&DAT_001c8230,DAT_001ce8f4,DAT_005b9c84,DAT_005b9c98);
  DAT_005b9144 = func_0xff21ae98(&DAT_001c8270,DAT_001ce8f4,DAT_005b9c84,DAT_005b9c98);
  DAT_005b9145 = func_0xff21ae98(&DAT_001c82b0,DAT_001ce8f4,DAT_005b9c84,DAT_005b9c98);
  DAT_005b9146 = func_0xff21ae98(&DAT_001c82f0,DAT_001ce8f4,DAT_005b9c84,DAT_005b9c98);
  DAT_005b9147 = func_0xff21ae98(&DAT_001c8330,DAT_001ce8f4,DAT_005b9c84,DAT_005b9c98);
  return;
}

