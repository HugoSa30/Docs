/*
 * Program: n42.bin
 * Function: FUN_000f9638
 * Entry: 000f9638
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f9638(ushort param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xff;
  if (uVar1 < 4) {
    if (1 < *(int *)(&UNK_003fc888 + uVar1 * 0x10)) {
      if (2000 < param_1) {
        param_1 = 2000;
      }
      *(short *)(*(int *)(_DAT_003fc884 + param_2 * 0xc + 4) + 4) =
           (short)(((uint)param_1 * 10000) / (uint)_DAT_003fc8c8);
      return 1;
    }
    (*(code *)&SUB_00fb1cdc)(0x35,uVar1);
  }
  else {
    (*(code *)&SUB_00fb1cdc)(0x33,uVar1);
  }
  return 0;
}

