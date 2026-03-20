/*
 * Program: n42.bin
 * Function: FUN_000bd124
 * Entry: 000bd124
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000bd124(void)

{
  byte bVar1;
  
  bVar1 = synstate;
  if (synstate_o < 5) {
    synstate_o = synstate;
    if ((sync_level == 2) && ((B_tprel & B_bm) != 0)) {
      synstate = 3;
    }
    else {
      synstate = sync_level;
    }
    if (((synstate != bVar1) && (bVar1 != 0)) && (bVar1 < 3)) {
      zylvirt = zzyl;
    }
  }
  return;
}

