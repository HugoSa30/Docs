/*
 * Program: n42.bin
 * Function: FUN_00133d80
 * Entry: 00133d80
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00133d80(void)

{
  uint uVar1;
  
  DAT_005bb7ac = DAT_001c793f;
  DAT_005bb7ad = DAT_001c7940;
  DAT_005bb7ae = DAT_001c7940;
  DAT_005bb7af = DAT_001c7940;
  DAT_005bb7b0 = DAT_001c7940;
  uVar1 = (uint)wub;
  if (uVar1 < DAT_001c7943) {
    uVar1 = (uint)DAT_001c7941;
  }
  ub = (byte)uVar1;
  ub_w = (word)uVar1;
  uVar1 = uVar1 * 0x3c5 >> 2;
  ubsq_w = (word)uVar1;
  ubsq = (byte)(uVar1 >> 8);
  ubsqf_w = ubsq_w;
  ubsqf = ubsq;
  return;
}

