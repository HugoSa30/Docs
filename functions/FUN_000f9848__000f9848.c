/*
 * Program: n42.bin
 * Function: FUN_000f9848
 * Entry: 000f9848
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f9848(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xff;
  if (uVar1 < 4) {
    if (1 < *(int *)(&UNK_003fc888 + uVar1 * 0x10)) {
      if (0x1c1f < (int)param_1) {
        param_1 = (int)param_1 / 0x1c20 & 0xffff;
      }
      uVar1 = (param_1 & 0xffff) -
              ((param_1 & 0xffff) / (uint)*(ushort *)(&UNK_003fc896 + param_2 * 0x10)) *
              (uint)*(ushort *)(&UNK_003fc896 + param_2 * 0x10) & 0xffff;
      **(ushort **)(_DAT_003fc884 + param_2 * 0xc + 4) =
           (ushort)(((uVar1 * 0x3c) / 0xe10 & 0xff) << 8) |
           (ushort)((uVar1 * 0x3c00) / 0xe10) & 0xff;
      return 1;
    }
    (*(code *)&SUB_00fb1cdc)(0x35,uVar1);
  }
  else {
    (*(code *)&SUB_00fb1cdc)(0x33,uVar1);
  }
  return 0;
}

