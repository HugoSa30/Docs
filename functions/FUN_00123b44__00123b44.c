/*
 * Program: n42.bin
 * Function: FUN_00123b44
 * Entry: 00123b44
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_00123b44(byte param_1,short param_2,int param_3)

{
  byte *pbVar1;
  
  if ((param_2 == 0) && (param_3 < (int)(uint)uRam0000ec00)) {
    if ((bRam0000ec02 & 1) != 0) {
      *(byte *)(iRam0000ebf8 + param_3) = param_1;
      return 1;
    }
    if ((bRam0000ec02 & 2) != 0) {
      pbVar1 = (byte *)(iRam0000ebf8 + param_3);
      *(short *)(iRam0000ebf8 + -2) =
           *(short *)(iRam0000ebf8 + -2) + ((ushort)param_1 - (ushort)*pbVar1);
      *pbVar1 = param_1;
      return 1;
    }
  }
  return 0;
}

