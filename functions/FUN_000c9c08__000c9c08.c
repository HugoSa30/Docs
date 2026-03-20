/*
 * Program: n42.bin
 * Function: FUN_000c9c08
 * Entry: 000c9c08
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000c9c08(void)

{
  uint uVar1;
  
  if ((tpnt_aktiv == 1) && (DAT_001c7f4a != '\0')) {
    uVar1 = (uint)DAT_005b90e3 - (uint)ikrma;
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    else if (0xff < (int)uVar1) {
      uVar1 = 0xff;
    }
    if ((uVar1 & 0xff) < (uint)DAT_001c7f4b == (bool)DAT_003fc078) {
      DAT_005b911b = DAT_001c7f2d;
    }
    else if (DAT_005b911b != 0) {
      DAT_005b911b = DAT_005b911b - 1;
      if (DAT_005b911b == 0) {
        DAT_003fc078 = DAT_003fc078 == '\0';
        DAT_005b911a = '\0';
        DAT_005b911b = DAT_001c7f2d;
      }
    }
    B_krtpfv = DAT_005b911b < DAT_001c7f2d;
    if (DAT_005b911a != '\0') {
      DAT_005b911a = DAT_005b911a + -1;
    }
    if (DAT_005b911a == '\0') {
      DAT_003fc079 = 1;
    }
  }
  return;
}

