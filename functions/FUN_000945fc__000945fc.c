/*
 * Program: n42.bin
 * Function: FUN_000945fc
 * Entry: 000945fc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000945fc(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,uint param_6,
                 uint *param_7)

{
  uint *puVar1;
  
  while( true ) {
    param_7[1] = param_1;
    param_6 = param_6 + 1 & 0xffff;
    if (1 < param_6) break;
    param_7 = *(uint **)(param_5 + param_6 * 4 + 4);
    puVar1 = param_7 + 2;
    *puVar1 = *puVar1 & param_4;
    *puVar1 = *puVar1 & param_3;
    *param_7 = *param_7 & param_2;
  }
  return;
}

