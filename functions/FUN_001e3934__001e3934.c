/*
 * Program: n42.bin
 * Function: FUN_001e3934
 * Entry: 001e3934
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001e3934(byte param_1,int param_2,byte param_3)

{
  DAT_003fbad6 = 9;
  DAT_003fbad9 = *(byte *)(param_2 + 1);
  DAT_003fbada = *(byte *)(param_2 + 2);
  DAT_003fbadb = *(byte *)(param_2 + 3);
  DAT_003fbadc = *(byte *)(param_2 + 4);
  DAT_003fbadd = *(byte *)(param_2 + 5);
  DAT_003fbade = param_3 ^ 9 ^ param_1 ^ DAT_003fbad9 ^ DAT_003fbada ^ DAT_003fbadb ^ DAT_003fbadc ^
                 DAT_003fbadd;
  DAT_003fbac2 = 9;
  DAT_003fbad7 = param_3;
  DAT_003fbad8 = param_1;
  FUN_001e15ac();
  return;
}

