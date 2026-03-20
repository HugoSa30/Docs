/*
 * Program: n42.bin
 * Function: FUN_0017ede0
 * Entry: 0017ede0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0017ede0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = &UNK_003fce2f;
  puVar1 = (undefined *)0xf00207;
  iVar3 = 6;
  do {
    puVar2[1] = puVar1[1];
    puVar1 = puVar1 + 2;
    puVar2 = puVar2 + 2;
    *puVar2 = *puVar1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  (*(code *)&SUB_00fac924)();
  eeeExitStatus = 0x5a;
  return;
}

