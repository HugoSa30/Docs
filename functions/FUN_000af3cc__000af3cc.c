/*
 * Program: n42.bin
 * Function: FUN_000af3cc
 * Entry: 000af3cc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000af418) */
/* WARNING: Removing unreachable block (ram,0x000af480) */
/* WARNING: Removing unreachable block (ram,0x000af4f4) */

void FUN_000af3cc(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)&DAT_003f9814;
  iVar3 = 0x1e;
  do {
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1 = (undefined4 *)0xfb397c;
  puVar2 = (undefined4 *)&UNK_003f9a2c;
  iVar3 = 0x5f;
  do {
    puVar2[1] = puVar1[1];
    puVar1 = puVar1 + 2;
    puVar2 = puVar2 + 2;
    *puVar2 = *puVar1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1 = (undefined4 *)0xfb3c74;
  puVar2 = (undefined4 *)&UNK_005bb77c;
  iVar3 = 0x52;
  do {
    puVar2[1] = puVar1[1];
    puVar1 = puVar1 + 2;
    puVar2 = puVar2 + 2;
    *puVar2 = *puVar1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  func_0x00fb1ed4();
  func_0x00fb2158(8);
  return;
}

