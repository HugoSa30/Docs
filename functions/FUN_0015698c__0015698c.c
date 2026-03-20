/*
 * Program: n42.bin
 * Function: FUN_0015698c
 * Entry: 0015698c
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_0015698c(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  param_1 = param_1 * 0xd;
  if (*(char *)(param_1 + 0x1d44b5) != '\0') {
    bVar1 = fcmEnd - 1;
    bVar2 = bVar1;
    if ((*(ushort *)(&UNK_003fcf50 + (uint)bVar1 * 0x28) >> 2 & 1) != 0) {
      while (bVar2 != 0) {
        bVar1 = bVar2 - 1;
        if ((bVar2 == 0) ||
           (bVar2 = bVar1, (*(ushort *)(&UNK_003fcf50 + (uint)bVar1 * 0x28) >> 2 & 1) == 0))
        goto LAB_00156a20;
      }
      bVar1 = 0xb;
    }
LAB_00156a20:
    *param_2 = bVar1;
    if (bVar1 == 0xb) {
      if (((&DAT_001d44b0)[param_1] != '\0') && ((byte)(&DAT_001d44b2)[param_1] < 2)) {
        uVar3 = 1;
        *param_2 = 0xff;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

