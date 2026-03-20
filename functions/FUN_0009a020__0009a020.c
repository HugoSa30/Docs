/*
 * Program: n42.bin
 * Function: FUN_0009a020
 * Entry: 0009a020
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0009a020(int param_1,byte *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  
  bVar8 = 0;
  bVar7 = 0;
  iVar6 = param_1 * 0x10;
  bVar2 = FUN_00099dc0(*(undefined4 *)(iVar6 + 0x16864),param_1);
  *param_2 = bVar2;
  bVar3 = *(byte *)(iVar6 + 0x1686a);
  cVar1 = *(char *)((*(byte *)(iVar6 + 0x1686b) >> 4) + 0x16ab4);
  bVar5 = param_2[1] + 1;
  bVar4 = bVar5 * cVar1;
  if (param_2[1] < bVar2) {
    if (bVar5 <= bVar2) {
      iVar6 = *(int *)(&DAT_003fce3c + param_1 * 8);
      bVar7 = bVar8;
      do {
        *(undefined2 *)(param_3 + (uint)bVar7 * 2) = *(undefined2 *)(iVar6 + (uint)bVar4 * 2);
        bVar4 = bVar4 + cVar1;
        bVar7 = bVar7 + 1;
        bVar5 = bVar5 + 1;
      } while (bVar5 <= bVar2);
    }
  }
  else {
    if (bVar5 < bVar3) {
      iVar6 = *(int *)(&DAT_003fce3c + param_1 * 8);
      do {
        *(undefined2 *)(param_3 + (uint)bVar8 * 2) = *(undefined2 *)(iVar6 + (uint)bVar4 * 2);
        bVar4 = bVar4 + cVar1;
        bVar8 = bVar8 + 1;
        bVar5 = bVar5 + 1;
      } while (bVar5 < bVar3);
    }
    bVar3 = 0;
    bVar5 = 0;
    iVar6 = *(int *)(&DAT_003fce3c + param_1 * 8);
    bVar7 = bVar8;
    do {
      *(undefined2 *)(param_3 + (uint)bVar7 * 2) = *(undefined2 *)(iVar6 + (uint)bVar3 * 2);
      bVar3 = bVar3 + cVar1;
      bVar7 = bVar7 + 1;
      bVar5 = bVar5 + 1;
    } while (bVar5 <= bVar2);
  }
  param_2[2] = bVar7;
  return;
}

