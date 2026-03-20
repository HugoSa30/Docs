/*
 * Program: n42.bin
 * Function: FUN_00094548
 * Entry: 00094548
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00094548(uint param_1,int param_2,undefined4 param_3,uint param_4)

{
  for (; (int)param_4 < 2; param_4 = param_4 + 1 & 0xffff) {
    if ((param_1 & *(uint *)(param_2 + param_4 * 4)) != 0) {
      **(uint **)(&DAT_003fa1c8 + param_4 * 4) =
           **(uint **)(&DAT_003fa1c8 + param_4 * 4) & 0xf7ffffff;
    }
  }
  return;
}

