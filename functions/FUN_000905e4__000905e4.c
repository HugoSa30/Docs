/*
 * Program: n42.bin
 * Function: FUN_000905e4
 * Entry: 000905e4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000905e4(uint param_1)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 0;
  bVar1 = false;
  if (LAB_001c00f8 != 0) {
    do {
      if ((param_1 < *(uint *)(&LAB_001c00fc + uVar2 * 0xc)) ||
         ((uint)(&DAT_001c0100)[uVar2 * 3] < param_1)) {
        uVar2 = uVar2 + 1 & 0xff;
      }
      else {
        bVar1 = true;
      }
    } while ((uVar2 < LAB_001c00f8) && (!bVar1));
    if (bVar1) {
      _DAT_003fa110 = &LAB_001c00fc + uVar2 * 0xc;
      _DAT_003fa114 = param_1;
      _DAT_003fa118 = param_1;
      *(undefined4 *)(&DAT_003fa11c + (param_1 & 0x3c)) = 0xffffffff;
      return 0;
    }
  }
  return 1;
}

