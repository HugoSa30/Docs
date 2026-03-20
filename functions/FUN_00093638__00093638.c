/*
 * Program: n42.bin
 * Function: FUN_00093638
 * Entry: 00093638
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00093638(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = 0xd;
  puVar2 = (undefined4 *)&UNK_003f9bfc;
  puVar3 = (undefined4 *)0x7dbc;
  do {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x10f;
  puVar3 = (undefined4 *)&DAT_003f9c40;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

