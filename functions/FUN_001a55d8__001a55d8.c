/*
 * Program: n42.bin
 * Function: FUN_001a55d8
 * Entry: 001a55d8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a55d8(void)

{
  uint uVar1;
  uint uVar2;
  byte local_18 [4];
  
  DAT_005baa04 = 0xfa58a0;
  uVar1 = FUN_001a54d8();
  uVar2 = uVar1;
  if ((int)uVar1 < (int)(uint)DAT_005baa09) {
    do {
      FUN_001a4b70(uVar2,*(undefined4 *)(_DAT_003fbd7c + 8),*(undefined2 *)(_DAT_003fbd7c + 6),
                   *(undefined *)(_DAT_003fbd7c + 4));
      local_18[0] = (byte)uVar2;
      FUN_001a5520(local_18);
      uVar2 = (uint)local_18[0];
    } while ((uint)local_18[0] < (uint)DAT_005baa09);
  }
  DAT_005baa08 = (char)uVar1;
  return;
}

