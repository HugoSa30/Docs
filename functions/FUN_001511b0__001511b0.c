/*
 * Program: n42.bin
 * Function: FUN_001511b0
 * Entry: 001511b0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001511b0(void)

{
  word wVar1;
  word *pwVar2;
  undefined *puVar3;
  
  pwVar2 = &nn_w1_w;
  puVar3 = &nn_w1;
  wVar1 = FUN_001510fc((double)_nn_w1);
  *pwVar2 = wVar1;
  wVar1 = FUN_001510fc((double)*(float *)(puVar3 + 4));
  pwVar2[1] = wVar1;
  wVar1 = FUN_001510fc((double)*(float *)(puVar3 + 8));
  pwVar2[2] = wVar1;
  pwVar2 = &nn_w2_w;
  puVar3 = &nn_w2;
  wVar1 = FUN_001510fc((double)_nn_w2);
  *pwVar2 = wVar1;
  wVar1 = FUN_001510fc((double)*(float *)(puVar3 + 4));
  pwVar2[1] = wVar1;
  wVar1 = FUN_001510fc((double)*(float *)(puVar3 + 8));
  pwVar2[2] = wVar1;
  return;
}

