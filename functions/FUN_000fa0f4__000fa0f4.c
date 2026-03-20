/*
 * Program: n42.bin
 * Function: FUN_000fa0f4
 * Entry: 000fa0f4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000fa0f4(undefined param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = &DAT_003fc914 + param_2;
    iVar2 = param_2;
    do {
      puVar1[0x6f] = puVar1[0x6e];
      puVar1 = puVar1 + -1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  DAT_003fc984 = param_1;
  if ((int)(uint)DAT_003fc98c < param_2) {
    DAT_003fc98c = DAT_003fc98c + 1;
  }
  return;
}

