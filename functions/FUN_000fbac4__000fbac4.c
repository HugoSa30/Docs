/*
 * Program: n42.bin
 * Function: FUN_000fbac4
 * Entry: 000fbac4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fbac4(void)

{
  int iVar1;
  
  iVar1 = _DAT_003fbcbc;
  if (_DAT_003fbcf0 != 1) {
    *(undefined4 *)(*(int *)(_DAT_003fbcbc + 0x2c) + -4) = 0xcafea596;
    **(undefined4 **)(iVar1 + 0x30) = 0xcafea596;
    *(undefined4 *)(*(int *)(iVar1 + 0x34) + -4) = 0xcafea596;
    *(undefined4 *)(*(int *)(iVar1 + 0x38) + *(int *)(iVar1 + 0x3c)) = 0xcafea596;
    **(undefined4 **)(iVar1 + 0x38) = 0xcafea596;
    _DAT_003fbcf0 = _DAT_003fbcf0 | 0x102;
  }
  return;
}

