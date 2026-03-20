/*
 * Program: n42.bin
 * Function: FUN_00104370
 * Entry: 00104370
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x00104440) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00104370(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  _DAT_005bc800 = _DAT_00f00260;
  iVar3 = 0x209;
  puVar1 = (undefined4 *)0xf0025c;
  puVar2 = (undefined4 *)&DAT_005bc7fc;
  do {
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + 2;
    puVar2 = puVar2 + 2;
  } while (iVar3 != 0);
  puVar2 = (undefined4 *)&UNK_005b7ffc;
  puVar1 = (undefined4 *)0xf0febc;
  iVar3 = 0x11;
  do {
    puVar2[1] = puVar1[1];
    puVar1 = puVar1 + 2;
    puVar2 = puVar2 + 2;
    *puVar2 = *puVar1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00107d14(20000000);
  return;
}

