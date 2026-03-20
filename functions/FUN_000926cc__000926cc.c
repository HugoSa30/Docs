/*
 * Program: n42.bin
 * Function: FUN_000926cc
 * Entry: 000926cc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000926cc(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = 0xf62;
  puVar2 = (undefined4 *)0x3d34;
  puVar3 = (undefined4 *)&UNK_003fa07c;
  do {
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_000910d8();
  return;
}

