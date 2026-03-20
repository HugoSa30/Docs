/*
 * Program: n42.bin
 * Function: FUN_00100e5c
 * Entry: 00100e5c
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_00100e5c(uint param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_005bd530;
  puVar1 = DAT_005bd51c;
  if ((param_1 & 0xff) < DAT_005bd520) {
    *DAT_005bd51c = *(undefined2 *)(DAT_005bd530 + 8);
    *(undefined2 *)((int)puVar1 + *(int *)(DAT_005bd524 + (param_1 & 0xff) * 4)) =
         *(undefined2 *)(iVar2 + 0x12);
    uVar3 = 0x100;
  }
  else {
    uVar3 = 0x40;
  }
  return uVar3;
}

