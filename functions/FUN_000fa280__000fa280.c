/*
 * Program: n42.bin
 * Function: FUN_000fa280
 * Entry: 000fa280
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fa280(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = _DAT_003fbcbc;
  if (_DAT_003fbcf0 == 1) {
    DAT_003fbcad = 0;
    return;
  }
  uVar3 = *(uint *)(_DAT_003fbcbc + 0x24);
  if (uVar3 != 0) {
    puVar5 = *(undefined4 **)(_DAT_003fbcbc + 0x6c);
    uVar2 = uVar3;
    puVar4 = puVar5 + -1;
    if ((uVar3 & 1) != 0) {
      uVar2 = uVar3 - 1;
      *puVar5 = 0xffffffff;
      puVar4 = puVar5;
      if (uVar2 == 0) goto LAB_000fa2d4;
    }
    uVar2 = uVar2 >> 1;
    do {
      puVar4[1] = 0xffffffff;
      puVar4 = puVar4 + 2;
      *puVar4 = 0xffffffff;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
LAB_000fa2d4:
  *(uint *)(*(int *)(iVar1 + 0x68) + uVar3 * 4) = uVar3;
  DAT_003fbcad = 0;
  return;
}

