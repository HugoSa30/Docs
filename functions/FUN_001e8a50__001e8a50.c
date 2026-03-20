/*
 * Program: n42.bin
 * Function: FUN_001e8a50
 * Entry: 001e8a50
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x001e8aa8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e8a50(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  _DAT_002fc004 = 0xffffff03;
  puVar1 = (undefined4 *)&UNK_003fb804;
  iVar2 = 0xf1;
  do {
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_001e8948();
  FUN_001e6e94(0x40);
  return;
}

