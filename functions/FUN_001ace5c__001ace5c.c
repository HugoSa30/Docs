/*
 * Program: n42.bin
 * Function: FUN_001ace5c
 * Entry: 001ace5c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x001acebc) */
/* WARNING: Removing unreachable block (ram,0x001acf24) */
/* WARNING: Removing unreachable block (ram,0x001acf98) */
/* WARNING: Removing unreachable block (ram,0x001ad008) */
/* WARNING: Removing unreachable block (ram,0x001ad06c) */
/* WARNING: Removing unreachable block (ram,0x001ad0d0) */
/* WARNING: Removing unreachable block (ram,0x001ad134) */

void FUN_001ace5c(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  cVar1 = (*(code *)&SUB_00facae0)();
  if (cVar1 != '\0') {
    puVar2 = (undefined4 *)&UNK_003fce2c;
    iVar4 = 0x24b;
    do {
      puVar2[1] = 0;
      puVar2 = puVar2 + 2;
      *puVar2 = 0;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar3 = (undefined4 *)&UNK_003f9a2c;
  puVar2 = (undefined4 *)0xfb397c;
  iVar4 = 0x5f;
  do {
    puVar3[1] = puVar2[1];
    puVar2 = puVar2 + 2;
    puVar3 = puVar3 + 2;
    *puVar3 = *puVar2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar3 = (undefined4 *)&UNK_005bb77c;
  puVar2 = (undefined4 *)0xfb3c74;
  iVar4 = 0x52;
  do {
    puVar3[1] = puVar2[1];
    puVar2 = puVar2 + 2;
    puVar3 = puVar3 + 2;
    *puVar3 = *puVar2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar2 = (undefined4 *)&DAT_003f9d24;
  iVar4 = 0x4b2;
  do {
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
    *puVar2 = 0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar2 = (undefined4 *)&misol_w;
  iVar4 = 0xdb;
  do {
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
    *puVar2 = 0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar2 = (undefined4 *)&DAT_005b8084;
  iVar4 = 0x3cf;
  do {
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
    *puVar2 = 0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar2 = (undefined4 *)&UNK_005b9efc;
  iVar4 = 0x310;
  do {
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
    *puVar2 = 0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

