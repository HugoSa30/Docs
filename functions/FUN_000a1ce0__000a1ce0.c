/*
 * Program: n42.bin
 * Function: FUN_000a1ce0
 * Entry: 000a1ce0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000a1ce0(uint param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = _DAT_00011e84;
  puVar1 = _DAT_00011e70;
  if ((param_1 & 0xff) < _DAT_00011e74) {
    *_DAT_00011e70 = *(undefined2 *)(_DAT_00011e84 + 8);
    *(undefined2 *)((int)puVar1 + *(int *)(_DAT_00011e78 + (param_1 & 0xff) * 4)) =
         *(undefined2 *)(iVar2 + 0x12);
    uVar3 = 0x100;
  }
  else {
    uVar3 = 0x40;
  }
  return uVar3;
}

