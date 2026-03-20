/*
 * Program: n42.bin
 * Function: FUN_0009b8c0
 * Entry: 0009b8c0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0009b8c0(int param_1,byte *param_2,undefined *param_3)

{
  *param_2 = (byte)(*(uint *)(&DAT_003fa4c8 + (uint)(byte)(&DAT_00016af5)[param_1 * 4] * 4) >>
                   ((byte)(&DAT_00016af6)[param_1 * 4] & 0x3f)) & 1;
  *param_3 = 0;
  return;
}

