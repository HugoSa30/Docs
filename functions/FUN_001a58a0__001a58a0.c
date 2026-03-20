/*
 * Program: n42.bin
 * Function: FUN_001a58a0
 * Entry: 001a58a0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001a58a0(void)

{
  int iVar1;
  
  while( true ) {
    if (DAT_005baa09 <= DAT_005baa08) {
      DAT_005baa08 = FUN_001a54d8();
      DAT_005baa04 = &SUB_00fa5930;
      (*(code *)&SUB_00fa5930)();
      return;
    }
    iVar1 = FUN_001a4d74(DAT_005baa08);
    if (iVar1 != 5) break;
    FUN_001a4d74(DAT_005baa08);
    FUN_001a5520(&DAT_005baa08);
  }
  return;
}

