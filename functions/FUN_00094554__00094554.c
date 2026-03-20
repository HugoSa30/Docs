/*
 * Program: n42.bin
 * Function: FUN_00094554
 * Entry: 00094554
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_00094554(void)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = 0;
  do {
    if ((*(uint *)(*(int *)(&DAT_003fa1c8 + uVar1 * 4) + 8) & 0x80000000) != 0) {
      return 0;
    }
    puVar2 = (uint *)(*(int *)(&DAT_003fa1c8 + uVar1 * 4) + 8);
    *puVar2 = *puVar2 & 0xfffffffe;
    uVar1 = uVar1 + 1 & 0xffff;
  } while (uVar1 < 2);
  return 1;
}

