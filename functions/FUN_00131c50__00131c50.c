/*
 * Program: n42.bin
 * Function: FUN_00131c50
 * Entry: 00131c50
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00131c50(void)

{
  B_dtest = 0;
  B_dtes = 0;
  DAT_003fc1de = 0;
  DAT_005b8b93 = 0;
  DAT_005b91f0 = 0;
  DAT_005b8b8f = 0;
  DAT_005b8b91 = 5;
  B_dtevio = B_dtevio & ~(B_dteabr|B_dtean|B_dteaq|B_dtebel|B_dtesq|B_dtevio);
  DAT_003fc1df = 0;
  DAT_003fb6f0 = (B_ko & 1) << 3 | DAT_003fb6f0 & 0xf6;
  mvdtehp = 0;
  midter = 0;
  dmidte = 0;
  DAT_005b96c2 = 0;
  DAT_005b96c0 = 0;
  DAT_005b96ca = 0;
  DAT_005b96c8 = 0;
  nsdter = 0;
  dnsdte = 0;
  _DAT_003fb6e4 = 0;
  DAT_005b8b96 = 0;
  DAT_005b8b94 = 0;
  DAT_005b8b92 = 0;
  DAT_005b8b90 = DAT_001d2a09;
  return;
}

