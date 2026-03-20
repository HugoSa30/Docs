/*
 * Program: n42.bin
 * Function: FUN_0009d438
 * Entry: 0009d438
 * Exported by: ExportAllDecompiledFunctions.java
 */


short * FUN_0009d438(int param_1,short *param_2,short *param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_3 <= param_2) {
      return (short *)0x0;
    }
    if (*param_2 == -1) {
      uVar1 = uVar1 + 1 & 0xffff;
      if ((*(ushort *)(param_1 * 4 + 0xec00) >> 1) + 4 <= uVar1) {
        return param_2 + (1 - uVar1);
      }
    }
    else {
      uVar1 = 0;
    }
    param_2 = param_2 + 1;
  } while( true );
}

