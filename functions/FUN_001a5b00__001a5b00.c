/*
 * Program: n42.bin
 * Function: FUN_001a5b00
 * Entry: 001a5b00
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001a5b00(void)

{
  uint uVar1;
  uint uVar2;
  byte local_10 [8];
  
  DAT_005baa04 = 0xfa5670;
  uVar1 = FUN_0010b194();
  DAT_005baa09 = (byte)uVar1;
  uVar2 = FUN_001a54d8();
  if ((int)uVar2 < (int)(uVar1 & 0xff)) {
    do {
      FUN_001a5070(uVar2);
      local_10[0] = (byte)uVar2;
      FUN_001a5520(local_10);
      uVar2 = (uint)local_10[0];
    } while (uVar2 < DAT_005baa09);
  }
  return;
}

