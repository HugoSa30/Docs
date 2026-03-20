/*
 * Program: n42.bin
 * Function: FUN_0009ee2c
 * Entry: 0009ee2c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0009ee2c(uint param_1,short *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  short sVar3;
  short sVar4;
  
  sVar3 = 0;
  sVar4 = *(byte *)((param_1 & 0xff) * 10 + 0x16c80) - 2;
  if (0 < sVar4) {
    pbVar1 = (byte *)((int)param_2 + -1);
    sVar3 = 0;
    do {
      pbVar2 = pbVar1;
      pbVar1 = pbVar2 + 1;
      sVar3 = sVar3 + (ushort)*pbVar1;
      sVar4 = sVar4 + -1;
    } while (0 < sVar4);
    param_2 = (short *)(pbVar2 + 2);
  }
  *param_2 = -(((ushort)param_1 & 0xff) + 1) - sVar3;
  return;
}

