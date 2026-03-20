/*
 * Program: n42.bin
 * Function: FUN_001a5520
 * Entry: 001a5520
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001a5520(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (uint)DAT_005baa09;
  if (*param_1 < uVar1) {
    uVar3 = *param_1 + 1;
    *param_1 = (byte)uVar3;
    uVar2 = 2 << (uVar3 & 0x3f);
    if (((uVar3 & 0xff) < uVar1) && ((uVar2 & DAT_005baa0a) == 0)) {
      do {
        uVar2 = uVar2 * 2;
        uVar3 = uVar3 + 1;
        if (uVar1 <= (uVar3 & 0xff)) break;
      } while ((uVar2 & DAT_005baa0a) == 0);
      *param_1 = (byte)uVar3;
    }
  }
  return;
}

