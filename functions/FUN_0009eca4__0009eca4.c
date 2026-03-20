/*
 * Program: n42.bin
 * Function: FUN_0009eca4
 * Entry: 0009eca4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0009eca4(uint param_1,int param_2,short *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  short sVar4;
  short sVar5;
  
  sVar4 = 0;
  sVar5 = *(byte *)((param_1 & 0xff) * 10 + 0x16c80) - 2;
  if (0 < sVar5) {
    pbVar2 = (byte *)(param_2 + -1);
    pbVar1 = (byte *)((int)param_3 + -1);
    sVar4 = 0;
    do {
      pbVar3 = pbVar1;
      pbVar2 = pbVar2 + 1;
      sVar4 = sVar4 + (ushort)*pbVar2;
      pbVar1 = pbVar3 + 1;
      *pbVar1 = *pbVar2;
      sVar5 = sVar5 + -1;
    } while (0 < sVar5);
    param_3 = (short *)(pbVar3 + 2);
  }
  *param_3 = -(((ushort)param_1 & 0xff) + 1) - sVar4;
  return;
}

