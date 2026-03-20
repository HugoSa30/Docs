/*
 * Program: n42.bin
 * Function: FUN_000c3478
 * Entry: 000c3478
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000c3478(void)

{
  undefined4 in_r6;
  ushort local_20 [4];
  uint local_18;
  uint local_14;
  
  zrph4_l = zrph4_l + 1;
  (*(code *)&SUB_00065990)(&wnwkwa2_w,&local_18,1);
  tnwia2_l = local_18 << 0x16 | local_14 >> 10;
  if (pgmaster == '\x01') {
    (*(code *)&SUB_000659dc)(local_20,0,1,in_r6,local_18 >> 10);
    zphfl4 = (byte)(local_20[0] >> 1);
    if (((NMXPHPOS < nmot) || (zphfl4 != 0)) || (synstate < 3)) {
      B_checkpg4 = 0;
      return;
    }
    if (B_pg4limsw == '\0') {
      if ((pg4limfr_w <= wnwkwa2_w) && (wnwkwa2_w <= pg4limsp_w)) {
        B_checkpg4 = 1;
        return;
      }
      B_checkpg4 = 1;
      zphfl4ct_w = zphfl4ct_w + 1;
      return;
    }
    if (pg4limfr_w <= wnwkwa2_w) {
      B_checkpg4 = 1;
      return;
    }
    if (wnwkwa2_w <= pg4limsp_w) {
      B_checkpg4 = 1;
      return;
    }
    B_checkpg4 = 1;
    zphfl4ct_w = zphfl4ct_w + 1;
    return;
  }
  if (-1 < (char)zphfl4) {
    zphfl4 = zphfl4 + 1;
    if ('\x03' < (char)zphfl4) {
      zphfl4 = 0;
    }
    if ('\0' < (char)zphfl4) goto LAB_000c36e0;
  }
  if (B_pg4limsw == '\0') {
    if ((wnwkwa2_w < pg4limfr_w) || (pg4limsp_w < wnwkwa2_w)) {
      zphfl4 = 0xff;
      zphfl4ct_w = zphfl4ct_w + 1;
    }
    else {
      zphfl4 = 0;
    }
  }
  else if ((wnwkwa2_w < pg4limfr_w) && (pg4limsp_w < wnwkwa2_w)) {
    zphfl4 = 0xff;
    zphfl4ct_w = zphfl4ct_w + 1;
  }
  else {
    zphfl4 = 0;
  }
LAB_000c36e0:
  if (((NMXPHPOS < nmot) || (zphfl4 != 0)) || (synstate < 3)) {
    B_checkpg4 = 0;
  }
  else {
    B_checkpg4 = 1;
  }
                    /* WARNING: Read-only address (ram,0x005b9a4a) is written */
  return;
}

