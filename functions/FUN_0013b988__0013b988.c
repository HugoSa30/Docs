/*
 * Program: n42.bin
 * Function: FUN_0013b988
 * Entry: 0013b988
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0013b988(int param_1,int param_2,uint param_3,undefined param_4)

{
  undefined *in_r10;
  
  while( true ) {
    in_r10[param_3 - 0x706c] = param_4;
    (&DAT_005b8f9c)[param_3] = param_4;
    (&DAT_005b8f88)[param_3] = param_4;
    (&DAT_005b8fb0)[param_3] = param_4;
    (&DAT_005b8f74)[param_3] = param_4;
    (&DAT_005b8fa8)[param_3] = param_4;
    param_3 = param_3 + 1 & 0xff;
    if ((((((param_1 == 0) && (-1 < *(char *)(param_2 + 0x7f))) && (-1 < *(char *)(param_2 + 0x81)))
         && ((-1 < *(char *)(param_2 + 0x83) && (-1 < *(char *)(param_2 + 0x85))))) &&
        ((-1 < *(char *)(param_2 + 0x87) &&
         ((-1 < *(char *)(param_2 + 0x89) && (-1 < *(char *)(param_2 + 0x8b))))))) || (7 < param_3))
    break;
    param_4 = 0;
    (&DAT_005b8f80)[param_3] = 0;
    in_r10 = &DAT_005c0000;
  }
  return;
}

