/*
 * Program: n42.bin
 * Function: FUN_000928b0
 * Entry: 000928b0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000928b0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)&DAT_003f9e78;
  iVar2 = 0x10;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_0009351c(0xf00000,0xf0ffff);
  _DAT_003f9e78 = (undefined *)0xfc0000;
  FUN_00093570(0xfc0000,0xf00000,0x4000);
  _DAT_003f9e78 = &DAT_003f9e7c;
  FUN_00093570(&DAT_003f9e7c,0xfc0040,0x10);
  FUN_00093570(_DAT_003f9e78,0xfc00c0,0x10);
  FUN_0009351c(0xfc0000,0xfcffff);
  FUN_00097324();
  return;
}

