/*
 * Program: n42.bin
 * Function: FUN_0013c870
 * Entry: 0013c870
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013c870(void)

{
  int iVar1;
  
  if (B_mdstop == 0) {
    iVar1 = (esst_stm08dmub >> 0x10) * 2;
    _flurktm_f = ((float)((double)CONCAT44(0x43300000,
                                           (uint)*(ushort *)(&DAT_001c1534 + iVar1) +
                                           ((int)((esst_stm08dmub & 0xffff) *
                                                 ((uint)*(ushort *)(&DAT_001c1536 + iVar1) -
                                                 (uint)*(ushort *)(&DAT_001c1534 + iVar1))) >> 0x10)
                                           & 0xffff) - (double)_DAT_0001bd4c) * _DAT_0001bd50) /
                 _DAT_0001bd54;
  }
  return;
}

