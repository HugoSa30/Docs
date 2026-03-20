/*
 * Program: n42.bin
 * Function: FUN_0012d530
 * Entry: 0012d530
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012d530(void)

{
  if (B_pwf != '\0') {
    FUN_0012d43c();
  }
  _fkmsdks_w = (ushort)FKPVDKE << 8;
  _fkmsvvts_w = (ushort)FKPVDKE << 8;
  B_timsa = TIMSA;
  B_timsall = TIMSALL;
  _DAT_003faba4 = _TIMSAON;
  DAT_003faba1 = TIMSAVT;
  DAT_003faba3 = TIMSALLVT;
  B_timsavvt = 0;
  B_timsallv = 0;
  pspvdb_w = 0x8000;
  pspvdk_w = 0x8000;
  pspvdkugn_w = 0x8000;
  B_hfmv = 1;
  B_dssv = 0;
  B_dslvh = 0;
  umsrln_w = (word)((uint)_NRLMNIST * (uint)KUMSRL >> 8);
  rlroh_w = 0x10ab;
  DAT_003fabb0 = B_llk;
  DAT_003fabb2 = 0;
  return;
}

