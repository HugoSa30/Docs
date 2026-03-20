/*
 * Program: n42.bin
 * Function: FUN_00092964
 * Entry: 00092964
 * Exported by: ExportAllDecompiledFunctions.java
 */


short FUN_00092964(byte *param_1,int param_2)

{
  short sVar1;
  byte *pbVar2;
  
  pbVar2 = param_1 + param_2 + -1;
  sVar1 = 0;
  for (; param_1 <= pbVar2; param_1 = param_1 + 1) {
    sVar1 = sVar1 + (ushort)*param_1;
  }
  return sVar1;
}

