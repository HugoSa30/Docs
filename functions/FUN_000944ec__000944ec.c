/*
 * Program: n42.bin
 * Function: FUN_000944ec
 * Entry: 000944ec
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000944ec(uint param_1,int param_2,uint *param_3,uint param_4)

{
  uint in_r10;
  
  do {
    *param_3 = in_r10 | 0x8000000;
    do {
      param_4 = param_4 + 1 & 0xffff;
      if (1 < param_4) {
        return;
      }
    } while ((param_1 & *(uint *)(param_2 + param_4 * 4)) == 0);
    param_3 = *(uint **)(&DAT_003fa1c8 + param_4 * 4);
    in_r10 = *param_3;
  } while( true );
}

