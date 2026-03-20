/*
 * Program: n42.bin
 * Function: FUN_000f9454
 * Entry: 000f9454
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f9454(uint param_1,uint param_2)

{
  ushort *puVar1;
  uint uVar2;
  
  uVar2 = param_2 & 0xff;
  if (uVar2 < 4) {
    if (1 < *(int *)(&UNK_003fc888 + uVar2 * 0x10)) {
      if (0x1c20 < (int)param_1) {
        param_1 = (int)param_1 / 0x1c20 & 0xffff;
      }
      if ((int)param_1 < 0x3c) {
        param_1 = 0x3c;
      }
      uVar2 = 0x1c20 / (0x1c20 / (int)param_1);
      *(short *)(&UNK_003fc896 + param_2 * 0x10) = (short)uVar2;
      puVar1 = (ushort *)(*(int *)(_DAT_003fc884 + param_2 * 0xc + 4) + 10);
      *puVar1 = *puVar1 & 0xff | (ushort)((((uVar2 & 0xffff) * 0x3c) / 0xe10 & 0xff) << 8);
      return 1;
    }
    (*(code *)&SUB_00fb1cdc)(0x35,uVar2);
  }
  else {
    (*(code *)&SUB_00fb1cdc)(0x33,uVar2);
  }
  return 0;
}

