/*
 * Program: n42.bin
 * Function: FUN_000f8924
 * Entry: 000f8924
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f8924(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(_DAT_003fc720 + param_1 * 0xc);
  uVar1 = (uint)*(byte *)(_DAT_003fc720 + param_1 * 0xc + 8) * 2;
  *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) & ~(3 << (uVar1 & 0x3f)) | 0 << (uVar1 & 0x3f);
  return;
}

