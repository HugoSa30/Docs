/*
 * Program: n42.bin
 * Function: FUN_0009b9c4
 * Entry: 0009b9c4
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_0009b9c4(int param_1,uint *param_2)

{
  int iVar1;
  uint local_18 [3];
  
  param_1 = param_1 * 4;
  iVar1 = (uint)*(byte *)(param_1 + 0x16af1) * 0x14;
  (**(code **)(iVar1 + 0x16ba0))
            (*(undefined4 *)(iVar1 + 0x16b98),
             *(undefined4 *)(&DAT_003fa3c0 + (uint)*(byte *)(param_1 + 0x16af1) * 4),local_18);
  *param_2 = local_18[0] >> (*(byte *)(param_1 + 0x16af2) & 0x3f) &
             (1 << (*(byte *)(param_1 + 0x16af3) & 0x3f)) - 1U;
  return 0;
}

