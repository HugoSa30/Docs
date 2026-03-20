/*
 * Program: n42.bin
 * Function: FUN_00123c58
 * Entry: 00123c58
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_00123c58(undefined4 param_1,short param_2,int param_3)

{
  byte bVar1;
  short sVar2;
  byte bVar3;
  short *psVar4;
  byte *pbVar5;
  
  if ((param_2 == 0) && (param_3 < (int)(uRam0000ec00 - 1))) {
    bVar3 = (byte)((uint)param_1 >> 8);
    if ((bRam0000ec02 & 1) != 0) {
      pbVar5 = (byte *)(iRam0000ebf8 + param_3);
      *pbVar5 = bVar3;
      pbVar5[1] = (byte)param_1;
      return 1;
    }
    if ((bRam0000ec02 & 2) != 0) {
      psVar4 = (short *)(iRam0000ebf8 + -2);
      pbVar5 = (byte *)(iRam0000ebf8 + param_3);
      sVar2 = *psVar4;
      bVar1 = *pbVar5;
      *pbVar5 = bVar3;
      *psVar4 = sVar2 + (((ushort)((uint)param_1 >> 8) & 0xff) - (ushort)bVar1) +
                (((ushort)param_1 & 0xff) - (ushort)pbVar5[1]);
      pbVar5[1] = (byte)param_1;
      return 1;
    }
  }
  return 0;
}

