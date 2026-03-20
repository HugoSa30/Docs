/*
 * Program: n42.bin
 * Function: FUN_001238d0
 * Entry: 001238d0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001238d0(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_005bb7d4;
  if (uVar2 < 2) {
    iVar1 = uVar2 * 0x10;
    DAT_005bb864 = (uint *)(iVar1 + 0x7fe0);
    if ((*(uint *)(&DAT_00007fe4 + iVar1) < *DAT_005bb864) ||
       (*(int *)(&DAT_00007fe8 + iVar1) + *(int *)(iVar1 + 0x7fec) != -1)) {
      FUN_00129864();
    }
  }
  else if (uVar2 < 0xc) {
    iVar1 = uVar2 * 0x10;
    DAT_005bb864 = (uint *)(&DAT_001ce7a0 + iVar1);
    if ((*(uint *)(&DAT_001ce7a4 + iVar1) < *DAT_005bb864) ||
       (*(int *)(&DAT_001ce7a8 + iVar1) + *(int *)(&DAT_001ce7ac + iVar1) != -1)) {
      FUN_00129864();
    }
  }
  else {
    DAT_005bb864 = (uint *)(uVar2 * 0x10 + 0xfdff50);
  }
  return;
}

