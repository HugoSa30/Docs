/*
 * Program: n42.bin
 * Function: FUN_0015a29c
 * Entry: 0015a29c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015a29c(void)

{
  if (B_mdstop != 0) {
    return;
  }
  if (B_nmntkomp == 0) {
    if (tnst_w < 0x65) {
      if (_tsmxkomp_f <= *(float *)(&UNK_003fa720 + (uint)tskinmz2 * 4)) goto LAB_0015a30c;
    }
    B_nmntkomp = B_nmntkomp;
  }
LAB_0015a30c:
  func_0xff218740((double)_nmot_f,&DAT_001c1128);
  return;
}

