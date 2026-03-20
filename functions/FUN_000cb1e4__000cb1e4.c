/*
 * Program: n42.bin
 * Function: FUN_000cb1e4
 * Entry: 000cb1e4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cb1e4(void)

{
  if (B_wakeup == 0) {
    while (drrev_sta != 1) {
      if (drrev_sta != 2) {
        if (drrev_sta != 3) {
          (*(code *)&SUB_00faca3c)(0xcb);
          return;
        }
        if (B_nmin != '\0') {
          return;
        }
        drrev_sta = 2;
        DAT_005b9ad8 = inisynmon;
        inisynmon = 0x31;
        FUN_000fa6bc(0x1e5cc);
        return;
      }
      if (sync_level == 0) {
        return;
      }
      FUN_000fa6bc(0x1e5ec);
      drrev_sta = 1;
    }
    _tsm_alt_um = _tsm_um;
    _tsm_um = FUN_000f15ac();
    if ((_B_nlale & 0x8000) == 0) {
      FUN_000fa6bc(0x1e60c);
    }
    else {
      FUN_000fa6bc(0x1ee88);
    }
  }
  return;
}

