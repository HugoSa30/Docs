/*
 * Program: n42.bin
 * Function: FUN_00095aa8
 * Entry: 00095aa8
 * Exported by: ExportAllDecompiledFunctions.java
 */


byte * FUN_00095aa8(byte *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  byte bVar8;
  byte *pbVar7;
  
  bVar2 = LAB_001c0040;
  bVar3 = 0;
  iVar6 = 0;
  if (param_2 < 0x40) {
    iVar6 = param_2;
  }
  bVar8 = (byte)iVar6;
  bVar4 = param_1[6];
  if (((bVar4 == 2) || (bVar4 == 3)) || (bVar4 == 5)) {
    bVar8 = bVar8 | 0x80;
  }
  pbVar5 = (byte *)(param_3 + (uint)*param_1);
  if (bVar4 == 4) {
    *pbVar5 = LAB_001c0040;
    pbVar5[-1] = DAT_001c0305;
    pbVar5 = pbVar5 + -2;
    bVar8 = DAT_001c0303;
  }
  else {
    bVar4 = (byte)param_2;
    if (*param_1 < 3) {
      if (param_2 < 0x40) goto LAB_00095b4c;
    }
    else {
      bVar1 = param_1[3];
      if (0x3f < param_2) {
        *pbVar5 = bVar4;
        pbVar5 = pbVar5 + -1;
      }
      *pbVar5 = bVar2;
      pbVar5 = pbVar5 + -1;
      bVar4 = bVar1;
    }
    *pbVar5 = bVar4;
    pbVar5 = pbVar5 + -1;
  }
LAB_00095b4c:
  *pbVar5 = bVar8;
  for (pbVar7 = pbVar5; pbVar7 < (byte *)(param_3 + (uint)*param_1 + param_2 + 1);
      pbVar7 = pbVar7 + 1) {
    bVar3 = bVar3 + *pbVar7;
  }
  *pbVar7 = bVar3;
  return pbVar5;
}

