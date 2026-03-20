/*
 * Program: n42.bin
 * Function: FUN_00156a64
 * Entry: 00156a64
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00156a64(uint param_1)

{
  byte bVar1;
  byte bVar2;
  
  if (param_1 != 0xb) {
    if (param_1 == 0xff) {
      if (fcmEnd != '\0') {
        bVar1 = fcmEnd - 1;
        bVar2 = bVar1;
        if ((*(ushort *)(&UNK_003fcf50 + (uint)bVar1 * 0x28) >> 3 & 1) != 0) {
          while (bVar2 != 0) {
            bVar1 = bVar2 - 1;
            if ((bVar2 == 0) ||
               (bVar2 = bVar1, (*(ushort *)(&UNK_003fcf50 + (uint)bVar1 * 0x28) >> 3 & 1) == 0))
            goto LAB_00156b08;
          }
          bVar1 = 10;
        }
LAB_00156b08:
        (&UNK_003fcf4c)[(uint)bVar1 * 0x28] = 0;
        FUN_00155e28((uint)bVar1);
      }
    }
    else {
      (&UNK_003fcf4c)[(param_1 & 0xff) * 0x28] = 0;
      FUN_00155e28();
    }
  }
  return;
}

