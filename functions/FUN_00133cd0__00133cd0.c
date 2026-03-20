/*
 * Program: n42.bin
 * Function: FUN_00133cd0
 * Entry: 00133cd0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00133cd0(void)

{
  DAT_005bb7a5 = TDTKAUS;
  DAT_005bb7a4 = TDTKAUS;
  DAT_005bb7a3 = TDTKAUS;
  tka = func_0xff2187cc(&DAT_001d0bb8,DAT_005b9105);
  tkalin = tka;
  if (((TKAUSDMX < tka) || (tka < TKAUSDMN)) || ((DAT_003fdfc5 & 1) != 0)) {
    tka = TKAUSDE;
  }
  return;
}

