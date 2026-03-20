/*
 * Program: n42.bin
 * Function: FUN_001038cc
 * Entry: 001038cc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x0010390c) */
/* WARNING: Removing unreachable block (ram,0x00103970) */
/* WARNING: Removing unreachable block (ram,0x001039d4) */
/* WARNING: Removing unreachable block (ram,0x00103a38) */

void FUN_001038cc(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)&DAT_003f9d24;
  iVar2 = 0x4b2;
  do {
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)&misol_w;
  iVar2 = 0xdb;
  do {
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)&DAT_005b8084;
  iVar2 = 0x3cf;
  do {
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)&UNK_005b9efc;
  iVar2 = 0x310;
  do {
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

