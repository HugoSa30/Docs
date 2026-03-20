/*
 * Program: n42.bin
 * Function: FUN_000930c4
 * Entry: 000930c4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000930c4(uint param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  
  puVar1 = _DAT_003f9e4c;
  if ((param_1 & 0xff) < _DAT_003f9e50) {
    *_DAT_003f9e4c = *(undefined2 *)(_DAT_003f9e60 + 8);
    *(undefined2 *)((int)puVar1 + *(int *)(_DAT_003f9e54 + (param_1 & 0xff) * 4)) =
         *(undefined2 *)(_DAT_003f9e60 + 0x12);
    uVar2 = 0x100;
  }
  else {
    uVar2 = 0x40;
  }
  return uVar2;
}

