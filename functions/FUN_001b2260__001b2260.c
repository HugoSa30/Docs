/*
 * Program: n42.bin
 * Function: FUN_001b2260
 * Entry: 001b2260
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b2260(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 8;
  puVar1 = (undefined4 *)&UNK_003fc8c4;
  do {
    puVar1[2] = 0;
    puVar1[3] = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0);
  (*(code *)&SUB_00fafc50)(0x202ac);
  DAT_003fc910 = 0;
  _DAT_003fc90c = 1;
  return;
}

