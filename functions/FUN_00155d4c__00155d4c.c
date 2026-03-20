/*
 * Program: n42.bin
 * Function: FUN_00155d4c
 * Entry: 00155d4c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00155d4c(int param_1)

{
  uint uVar1;
  
  param_1 = param_1 * 0x28;
  *(undefined2 *)(&UNK_003fcf26 + param_1) = *(undefined2 *)(&UNK_003fcf4e + param_1);
  *(undefined2 *)(&UNK_003fcf28 + param_1) = *(undefined2 *)(&UNK_003fcf50 + param_1);
  (&UNK_003fcf2a)[param_1] = (&UNK_003fcf52)[param_1];
  (&UNK_003fcf25)[param_1] = (&UNK_003fcf4d)[param_1];
  (&UNK_003fcf2b)[param_1] = (&UNK_003fcf53)[param_1];
  (&UNK_003fcf2c)[param_1] = (&UNK_003fcf54)[param_1];
  (&UNK_003fcf4a)[param_1] = (&UNK_003fcf72)[param_1];
  (&UNK_003fcf2d)[param_1] = (&UNK_003fcf55)[param_1];
  (&UNK_003fcf2e)[param_1] = (&UNK_003fcf56)[param_1];
  (&UNK_003fcf2f)[param_1] = (&UNK_003fcf57)[param_1];
  (&UNK_003fcf30)[param_1] = (&UNK_003fcf58)[param_1];
  (&UNK_003fcf31)[param_1] = (&UNK_003fcf59)[param_1];
  (&UNK_003fcf32)[param_1] = (&UNK_003fcf5a)[param_1];
  (&UNK_003fcf33)[param_1] = (&UNK_003fcf5b)[param_1];
  (&UNK_003fcf34)[param_1] = (&UNK_003fcf5c)[param_1];
  (&UNK_003fcf35)[param_1] = (&UNK_003fcf5d)[param_1];
  (&UNK_003fcf36)[param_1] = (&UNK_003fcf5e)[param_1];
  (&UNK_003fcf37)[param_1] = (&UNK_003fcf5f)[param_1];
  uVar1 = 0;
  do {
    (&UNK_003fcf4c)[uVar1 + param_1 + -0x14] = (&UNK_003fcf4c)[uVar1 + param_1 + 0x14];
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 0x12);
  (&UNK_003fcf4b)[param_1] = (&UNK_003fcf73)[param_1];
  (&UNK_003fcf24)[param_1] = (&UNK_003fcf4c)[param_1];
  return;
}

