/*
 * Program: n42.bin
 * Function: FUN_0009d4a8
 * Entry: 0009d4a8
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_0009d4a8(int param_1,short *param_2)

{
  short *psVar1;
  
  psVar1 = (short *)((int)param_2 + (*(ushort *)(param_1 * 4 + 0xec00) + 8 & 0xfffffffe));
  if (param_2 < psVar1) {
    do {
      if (*param_2 != -1) {
        return 0;
      }
      param_2 = param_2 + 1;
    } while (param_2 < psVar1);
  }
  return 1;
}

