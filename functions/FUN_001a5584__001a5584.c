/*
 * Program: n42.bin
 * Function: FUN_001a5584
 * Entry: 001a5584
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001a5584(void)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  pbVar3 = &DAT_005baa08;
  uVar2 = (uint)DAT_005baa09;
  if ((DAT_005baa08 < uVar2) && (FUN_001a5520(&DAT_005baa08), (int)uVar2 <= (int)(uint)*pbVar3)) {
    bVar1 = FUN_001a54d8();
    *pbVar3 = bVar1;
  }
  return;
}

