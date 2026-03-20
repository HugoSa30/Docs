/*
 * Program: n42.bin
 * Function: FUN_00155e28
 * Entry: 00155e28
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00155e28(uint param_1)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  
  puVar1 = &fcmEnd;
  uVar3 = (uint)fcmEnd;
  if (uVar3 - 1 == param_1) {
    bVar2 = 0;
    puVar1 = &UNK_003fcf4b + (param_1 & 0xff) * 0x28;
    do {
      puVar1 = puVar1 + 1;
      *puVar1 = 0;
      bVar2 = bVar2 + 1;
    } while (bVar2 < 0x28);
    fcmEnd = fcmEnd - 1;
  }
  else {
    for (param_1 = param_1 + 1; (param_1 = param_1 & 0xff, param_1 < uVar3 && (param_1 < 0xb));
        param_1 = param_1 + 1) {
      FUN_00155d4c(param_1);
    }
    *puVar1 = (char)(uVar3 + 0xff);
    bVar2 = 0;
    puVar1 = &UNK_003fcf4b + (uVar3 + 0xff & 0xff) * 0x28;
    do {
      puVar1 = puVar1 + 1;
      *puVar1 = 0;
      bVar2 = bVar2 + 1;
    } while (bVar2 < 0x28);
  }
  return;
}

