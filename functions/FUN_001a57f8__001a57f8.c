/*
 * Program: n42.bin
 * Function: FUN_001a57f8
 * Entry: 001a57f8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001a57f8(void)

{
  int iVar1;
  
  if (DAT_005baa08 < DAT_005baa09) {
    do {
      iVar1 = FUN_001a4a64(DAT_005baa08);
      if (iVar1 != 1) {
        if (iVar1 != 4) {
          return;
        }
        DAT_003fbd88 = 0;
        DAT_005baa04 = 0xfa5670;
        return;
      }
      FUN_001a5520(&DAT_005baa08);
    } while (DAT_005baa08 < DAT_005baa09);
  }
  FUN_001a55d8();
  return;
}

