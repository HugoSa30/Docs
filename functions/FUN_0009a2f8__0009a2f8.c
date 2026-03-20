/*
 * Program: n42.bin
 * Function: FUN_0009a2f8
 * Entry: 0009a2f8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009a2f8(undefined2 *param_1,byte *param_2)

{
  uint uVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[5] = _DAT_00016ab6 | (ushort)param_2[1] << 0xc | (ushort)*param_2 << 0xf;
  param_1[6] = _DAT_003fa3b8 | 0x2000;
  param_1[7] = _DAT_003fa3ba | DAT_003fa3bc | 0x2080;
  uVar1 = 0;
  do {
    param_1[uVar1 + 0x100] = *(undefined2 *)(param_2 + uVar1 * 2 + 2);
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 0x40);
  return;
}

