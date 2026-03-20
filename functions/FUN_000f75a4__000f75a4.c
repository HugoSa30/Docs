/*
 * Program: n42.bin
 * Function: FUN_000f75a4
 * Entry: 000f75a4
 * Exported by: ExportAllDecompiledFunctions.java
 */


uint FUN_000f75a4(uint param_1,uint param_2,uint param_3)

{
  return *(int *)(&DAT_0001ff38 + (param_1 & 0xf) * 4) +
         *(int *)(&DAT_0001ff38 + ((param_1 & 0xf0) >> 4) * 4) +
         *(int *)(&DAT_0001ff38 + (param_2 & 0xf) * 4) +
         *(int *)(&DAT_0001ff38 + ((param_2 & 0xf0) >> 4) * 4) +
         *(int *)(&DAT_0001ff38 + (param_3 & 0xf) * 4) +
         *(int *)(&DAT_0001ff38 + ((param_3 & 0xf0) >> 4) * 4) & 1;
}

