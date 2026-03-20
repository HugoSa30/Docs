/*
 * Program: n42.bin
 * Function: FUN_000d26cc
 * Entry: 000d26cc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000d26cc(void)

{
  byte bVar1;
  byte bVar2;
  
  if (B_nmin == '\0') {
    DAT_003fb0f7 = '\0';
  }
  else if (DAT_003fb0f7 == '\0') {
    DAT_003fb0f7 = '\x01';
    drrev_sta = 3;
    DAT_005b9ad8 = inisynmon;
    inisynmon = 0x28;
    FUN_000fa6bc(0x1e58c);
    FUN_000fa6bc(0x1e5cc);
  }
  if ((-1 < (char)DAT_003fb0f8) &&
     (bVar2 = DAT_003fb0f8 & 0x7f | 0x80, bVar1 = DAT_003fb0f8 & 0x40, DAT_003fb0f8 = bVar2,
     bVar1 != 0)) {
    DAT_005b9ad8 = inisynmon;
    inisynmon = 1;
    if (drrev_sta == 3) {
      FUN_000fa6bc(0x1e58c);
    }
    FUN_000fa6bc(0x1e5cc);
    DAT_003fb0f8 = DAT_003fb0f8 & 0xbf;
  }
  return;
}

