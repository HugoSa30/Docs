/*
 * Program: n42.bin
 * Function: FUN_000c31ac
 * Entry: 000c31ac
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000c31ac(void)

{
  undefined4 in_r6;
  ushort local_20 [4];
  uint local_18;
  uint local_14;
  
  zrph_l = zrph_l + 1;
  (*(code *)&SUB_00065990)(&wnwkwe_w,&local_18,0);
  tnwie_l = local_18 << 0x16 | local_14 >> 10;
  if (pgmaster == '\0') {
    (*(code *)&SUB_000659dc)(local_20,0,0,in_r6,local_18 >> 10);
    zphfl = (byte)(local_20[0] >> 1);
    if (((NMXPHPOS < nmot) || (zphfl != 0)) || (synstate < 3)) {
      B_checkpg = 0;
      return;
    }
    if (B_pg1limsw == '\0') {
      if ((pg1limfr_w <= wnwkwe_w) && (wnwkwe_w <= pg1limsp_w)) {
        B_checkpg = 1;
        return;
      }
      B_checkpg = 1;
      zphflct_w = zphflct_w + 1;
      return;
    }
    if (pg1limfr_w <= wnwkwe_w) {
      B_checkpg = 1;
      return;
    }
    if (wnwkwe_w <= pg1limsp_w) {
      B_checkpg = 1;
      return;
    }
    B_checkpg = 1;
    zphflct_w = zphflct_w + 1;
    return;
  }
  if (-1 < (char)zphfl) {
    zphfl = zphfl + 1;
    if ('\x03' < (char)zphfl) {
      zphfl = 0;
    }
    if ('\0' < (char)zphfl) goto LAB_000c3414;
  }
  if (B_pg1limsw == '\0') {
    if ((wnwkwe_w < pg1limfr_w) || (pg1limsp_w < wnwkwe_w)) {
      zphfl = 0xff;
      zphflct_w = zphflct_w + 1;
    }
    else {
      zphfl = 0;
    }
  }
  else if ((wnwkwe_w < pg1limfr_w) && (pg1limsp_w < wnwkwe_w)) {
    zphfl = 0xff;
    zphflct_w = zphflct_w + 1;
  }
  else {
    zphfl = 0;
  }
LAB_000c3414:
  if (((NMXPHPOS < nmot) || (zphfl != 0)) || (synstate < 3)) {
    B_checkpg = 0;
  }
  else {
    B_checkpg = 1;
  }
                    /* WARNING: Read-only address (ram,0x005b9a4c) is written */
  return;
}

