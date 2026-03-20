/*
 * Program: n42.bin
 * Function: FUN_000fbf20
 * Entry: 000fbf20
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fbf20(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((_DAT_003fbcf0 != 1) && (uVar1 = *(uint *)(_DAT_003fbcbc + 0x20), uVar1 != 0)) {
    puVar3 = *(undefined4 **)(_DAT_003fbcbc + 100);
    puVar2 = puVar3 + -2;
    if ((uVar1 & 1) != 0) {
      uVar1 = uVar1 - 1;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar2 = puVar3;
      if (uVar1 == 0) {
        return;
      }
    }
    uVar1 = uVar1 >> 1;
    do {
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2 = puVar2 + 4;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}

