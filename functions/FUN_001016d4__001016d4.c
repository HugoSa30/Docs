/*
 * Program: n42.bin
 * Function: FUN_001016d4
 * Entry: 001016d4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001016d4(undefined4 param_1,byte **param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar5;
  byte bVar6;
  undefined uVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  ushort uVar4;
  
  pbVar5 = *param_2;
  iVar8 = (uint)*pbVar5 * 0x10000 + (uint)pbVar5[1] * 0x100 + (uint)pbVar5[2];
  if (*(short *)((int)param_2 + 6) == 5) {
    bVar1 = pbVar5[4];
    uVar4 = (ushort)bVar1;
    if (pbVar5[3] == 7) {
      if ((undefined *)0xffe580 < &DAT_00ffe200 + iVar8) goto LAB_001017b4;
      bVar6 = 0;
      if (bVar1 != 0) {
        pbVar9 = (byte *)(iVar8 + 0xffe1ff);
        pbVar5 = pbVar5 + -1;
        do {
          pbVar9 = pbVar9 + 1;
          pbVar5 = pbVar5 + 1;
          *pbVar5 = *pbVar9;
          bVar6 = bVar6 + 1;
        } while (bVar6 < bVar1);
      }
    }
    else {
LAB_00101790:
      uVar3 = (uint)bVar1;
      iVar2 = FUN_0010159c(uVar3,iVar8);
      uVar4 = (ushort)uVar3;
      if ((iVar2 == 0) || (0xfe < (uVar3 & 0xff))) goto LAB_001017b4;
      if (iVar2 == 4) {
        uVar10 = 0;
        if ((uVar3 & 0xff) != 0) {
          pbVar5 = pbVar5 + -1;
          do {
            pbVar5 = pbVar5 + 1;
            *pbVar5 = 0xff;
            uVar10 = uVar10 + 1 & 0xff;
          } while (uVar10 < (uVar3 & 0xff));
        }
      }
      else {
        uVar10 = 0;
        if ((uVar3 & 0xff) != 0) {
          pbVar9 = (byte *)(iVar8 + -1);
          pbVar5 = pbVar5 + -1;
          do {
            pbVar9 = pbVar9 + 1;
            pbVar5 = pbVar5 + 1;
            *pbVar5 = *pbVar9;
            uVar10 = uVar10 + 1 & 0xff;
          } while (uVar10 < (uVar3 & 0xff));
        }
      }
    }
    *(ushort *)(param_2 + 2) = uVar4 & 0xff;
    uVar7 = 1;
  }
  else {
    if (*(short *)((int)param_2 + 6) == 4) {
      bVar1 = pbVar5[3];
      goto LAB_00101790;
    }
LAB_001017b4:
    *pbVar5 = 0x12;
    *(undefined2 *)(param_2 + 2) = 1;
    uVar7 = 2;
  }
  *(undefined *)((int)param_2 + 10) = uVar7;
  return;
}

