/*
 * Program: n42.bin
 * Function: FUN_000ab6f0
 * Entry: 000ab6f0
 * Exported by: ExportAllDecompiledFunctions.java
 */


byte FUN_000ab6f0(byte **param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  
  bVar4 = **param_1;
  uVar5 = (uint)bVar4;
  pbVar7 = *param_1 + 1;
  pbVar6 = pbVar7 + uVar5;
  bVar1 = *param_1[1];
  bVar2 = *(byte *)(param_1 + 2);
  *(byte *)(param_1 + 2) = param_2;
  if (*pbVar7 < param_2) {
    iVar9 = uVar5 - 1;
    if (param_2 < pbVar7[iVar9]) {
      uVar3 = (uint)(bVar4 >> 1);
      iVar9 = iVar9 - uVar3;
      if (pbVar7[iVar9] < param_2) {
        iVar9 = iVar9 + uVar3 + -1;
      }
      if (param_2 < pbVar7[iVar9]) {
        pbVar8 = pbVar7 + iVar9;
        do {
          iVar9 = iVar9 + -1;
          pbVar8 = pbVar8 + -1;
        } while (param_2 < *pbVar8);
      }
    }
    if (uVar5 - 1 == iVar9) {
      bVar4 = pbVar6[iVar9];
    }
    else {
      uVar5 = (uint)pbVar7[iVar9 + 1] - (uint)bVar1;
      if (uVar5 < param_2) {
        if (uVar5 < bVar2) {
          if ((uint)bVar2 < (uint)pbVar7[iVar9 + 1]) {
            if (*(char *)((int)param_1 + 9) == '\0') {
              bVar4 = pbVar6[iVar9];
            }
            else {
              bVar4 = pbVar6[iVar9 + 1];
            }
          }
          else {
            *(undefined *)((int)param_1 + 9) = 1;
            bVar4 = pbVar6[iVar9 + 1];
          }
        }
        else {
          *(undefined *)((int)param_1 + 9) = 0;
          bVar4 = pbVar6[iVar9];
        }
      }
      else {
        bVar4 = pbVar6[iVar9];
      }
    }
  }
  else {
    bVar4 = *pbVar6;
  }
  return bVar4;
}

