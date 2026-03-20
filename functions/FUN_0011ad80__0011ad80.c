/*
 * Program: n42.bin
 * Function: FUN_0011ad80
 * Entry: 0011ad80
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0011ad80(byte **param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  *(undefined2 *)(param_1 + 2) = 0;
  bVar1 = **param_1;
  **param_1 = bVar1;
  uVar4 = bVar1 + 0x10 & 0xff;
  uVar6 = 0;
  if ((&DAT_005bb5a1)[uVar4 * 8] != '\0') {
    do {
      uVar3 = *(ushort *)((&DAT_005bb5a4)[uVar4 * 2] + uVar6 * 8);
      if (uVar3 < 0x100) {
        uVar5 = uVar3 & 0xff;
        FUN_00119bc4(uVar5);
        FUN_00117524(uVar5);
      }
      else {
        FUN_001193e4(uVar3);
      }
      uVar5 = 0;
      if (*(char *)((&DAT_005bb5a4)[uVar4 * 2] + uVar6 * 8 + 2) != '\0') {
        do {
          sVar2 = *(short *)(param_1 + 2);
          *(ushort *)(param_1 + 2) = sVar2 + 1U;
          (*param_1)[(ushort)(sVar2 + 1U)] =
               *(byte *)(*(int *)((&DAT_005bb5a4)[uVar4 * 2] + uVar6 * 8 + 4) + uVar5);
          uVar5 = uVar5 + 1 & 0xff;
        } while (uVar5 < *(byte *)((&DAT_005bb5a4)[uVar4 * 2] + uVar6 * 8 + 2));
      }
      uVar6 = uVar6 + 1 & 0xff;
    } while (uVar6 < (byte)(&DAT_005bb5a1)[uVar4 * 8]);
  }
  if (*(short *)(param_1 + 2) == 0) {
    **param_1 = 0x11;
    *(undefined2 *)(param_1 + 2) = 1;
    *(undefined *)((int)param_1 + 10) = 2;
  }
  else {
    *(short *)(param_1 + 2) = *(short *)(param_1 + 2) + 1;
    *(undefined *)((int)param_1 + 10) = 1;
  }
  return;
}

