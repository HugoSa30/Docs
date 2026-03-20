/*
 * Program: n42.bin
 * Function: FUN_0009ef68
 * Entry: 0009ef68
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0009ef68(int param_1,int param_2)

{
  char *pcVar1;
  short *psVar2;
  
  param_2 = param_2 + (uint)*(byte *)(param_1 * 10 + 0x16c80);
  pcVar1 = (char *)(param_2 + -3);
  if ((*(ushort *)(&DAT_00016c7e + param_1 * 10) & 3) != 0) {
    *pcVar1 = *pcVar1 + '\x01';
    psVar2 = (short *)(param_2 + -2);
    *psVar2 = *psVar2 + -1;
  }
  return;
}

