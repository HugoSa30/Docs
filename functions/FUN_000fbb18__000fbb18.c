/*
 * Program: n42.bin
 * Function: FUN_000fbb18
 * Entry: 000fbb18
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fbb18(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(int *)(_DAT_003fbcbc + 0x30) + 4);
  if (_DAT_003fbcf0 != 1) {
    do {
      *puVar2 = 0x9653c3a5;
      iVar1 = _DAT_003fbcbc;
      puVar2 = puVar2 + 1;
    } while ((undefined4 *)&stack0xfffffff0 != puVar2);
    puVar2 = (undefined4 *)(*(int *)(_DAT_003fbcbc + 0x38) + 4);
    do {
      *puVar2 = 0x9653c3a5;
      puVar2 = puVar2 + 1;
    } while ((undefined4 *)(*(int *)(iVar1 + 0x38) + *(int *)(iVar1 + 0x3c)) != puVar2);
    _DAT_003fbcf0 = _DAT_003fbcf0 | 0x202;
  }
  return;
}

