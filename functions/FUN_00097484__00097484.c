/*
 * Program: n42.bin
 * Function: FUN_00097484
 * Entry: 00097484
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00097484(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  iVar2 = _DAT_003f9f64;
  iVar1 = _DAT_003f9e38;
  uVar3 = 0;
  if (*(uint *)(_DAT_003f9e38 + 8) >> 2 != 0xffffffff) {
    puVar4 = (undefined4 *)(_DAT_003f9e38 + 0xfc);
    puVar6 = (undefined *)(_DAT_003f9f64 + -3);
    do {
      puVar4 = puVar4 + 1;
      uVar5 = *puVar4;
      puVar6[4] = (char)((uint)uVar5 >> 0x18);
      puVar6[5] = (char)((uint)uVar5 >> 0x10);
      puVar6[6] = (char)((uint)uVar5 >> 8);
      puVar6[7] = (char)uVar5;
      uVar3 = uVar3 + 1 & 0xffff;
      puVar6 = puVar6 + 4;
    } while (uVar3 < (*(uint *)(iVar1 + 8) >> 2) + 1);
  }
  _DAT_003f9f60 = iVar2 + *(int *)(iVar1 + 8) + 1;
  return;
}

