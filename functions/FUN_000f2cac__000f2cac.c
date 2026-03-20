/*
 * Program: n42.bin
 * Function: FUN_000f2cac
 * Entry: 000f2cac
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000f2cac(void)

{
  byte *pbVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = &DAT_00016fc9;
  iVar2 = *(int *)((uint)DAT_00016fcc * 0x20 + 0x16f7c) + (uint)DAT_00016fcd;
  if (&DAT_00016fc9 < &DAT_00016fc9 + (uint)DAT_00017055 * 5) {
    do {
      (*(code *)&SUB_00062ba4)(puVar3[1],*puVar3,iVar2);
      puVar4 = puVar3;
      do {
        puVar3 = puVar4 + 5;
        iVar2 = *(int *)((uint)(byte)puVar4[8] * 0x20 + 0x16f7c) + (uint)(byte)puVar4[9];
        pbVar1 = puVar4 + 2;
        puVar4 = puVar3;
      } while ((*pbVar1 & 2) != 0);
    } while (puVar3 < &DAT_00016fc9 + (uint)DAT_00017055 * 5);
  }
  return;
}

