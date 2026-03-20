/*
 * Program: n42.bin
 * Function: FUN_000d27f0
 * Entry: 000d27f0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000d27f0(void)

{
  ushort local_10;
  word wStack_e;
  
  local_10 = (ushort)((uint)mdverf_w * (uint)fnstab_w >> 0x1d);
  if (local_10 == 0) {
    wStack_e = (word)((uint)mdverf_w * (uint)fnstab_w >> 0xd);
  }
  else {
    wStack_e = 0xffff;
  }
  mill_w = wStack_e;
  mimin_w = wStack_e;
  if (B_sab != '\0') {
    mimin_w = 0;
  }
  return;
}

