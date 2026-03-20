/*
 * Program: n42.bin
 * Function: FUN_0009edb4
 * Entry: 0009edb4
 * Exported by: ExportAllDecompiledFunctions.java
 */


bool FUN_0009edb4(uint param_1,ushort *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  short sVar4;
  
  iVar3 = 0;
  sVar4 = *(byte *)((param_1 & 0xff) * 10 + 0x16c80) - 2;
  if (0 < sVar4) {
    pbVar1 = (byte *)((int)param_2 + -1);
    do {
      pbVar2 = pbVar1;
      pbVar1 = pbVar2 + 1;
      iVar3 = iVar3 + (uint)*pbVar1;
      sVar4 = sVar4 + -1;
    } while (0 < sVar4);
    param_2 = (ushort *)(pbVar2 + 2);
  }
  return (iVar3 + (param_1 & 0xff) + (uint)*param_2 + 1 & 0xffff) == 0;
}

