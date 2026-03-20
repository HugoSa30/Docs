/*
 * Program: n42.bin
 * Function: FUN_0011b2e8
 * Entry: 0011b2e8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0011b2e8(undefined4 param_1,byte **param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  byte bVar7;
  
  sVar2 = *(short *)((int)param_2 + 6);
  if (sVar2 == 5) {
    bVar1 = (*param_2)[4];
  }
  else {
    if (sVar2 != 4) {
      **param_2 = 0x10;
      *(undefined2 *)(param_2 + 2) = 1;
      *(undefined *)((int)param_2 + 10) = 2;
      return;
    }
    bVar1 = (*param_2)[3];
  }
  if (((ushort)bVar1 < *(ushort *)(param_2 + 1)) && (sVar2 == 4)) {
    pbVar4 = *param_2;
    uVar6 = (uint)*pbVar4 * 0x10000 + (uint)pbVar4[1] * 0x100 + (uint)pbVar4[2];
    if (((((DAT_003fb2c0 & 0xef) == 0) && (0x1bffff < uVar6)) && (uVar6 < 0x1e0001)) &&
       (iVar3 = func_0xff209390(), iVar3 == 0x100)) {
      bVar7 = 0;
      if (bVar1 != 0) {
        pbVar4 = (byte *)(uVar6 + 0x3fffff);
        pbVar5 = *param_2 + -1;
        do {
          pbVar4 = pbVar4 + 1;
          pbVar5 = pbVar5 + 1;
          *pbVar5 = *pbVar4;
          bVar7 = bVar7 + 1;
        } while (bVar7 < bVar1);
      }
      *(ushort *)(param_2 + 2) = (ushort)bVar1;
      *(undefined *)((int)param_2 + 10) = 1;
      return;
    }
    **param_2 = 0x31;
  }
  else {
    **param_2 = 0x10;
  }
  *(undefined2 *)(param_2 + 2) = 1;
  *(undefined *)((int)param_2 + 10) = 2;
  return;
}

