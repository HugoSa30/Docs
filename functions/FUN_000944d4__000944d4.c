/*
 * Program: n42.bin
 * Function: FUN_000944d4
 * Entry: 000944d4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000944d4(uint param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint in_r12;
  
  while( true ) {
    if (in_r12 != 0) {
      **(uint **)(&DAT_003fa1c8 + param_4 * 4) =
           **(uint **)(&DAT_003fa1c8 + param_4 * 4) | 0x8000000;
    }
    param_4 = param_4 + 1 & 0xffff;
    if (1 < param_4) break;
    in_r12 = param_1 & *(uint *)(param_2 + param_4 * 4);
  }
  return;
}

