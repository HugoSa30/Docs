/*
 * Program: n42.bin
 * Function: 36
 * Entry: 0010ee04
 * Exported by: ExportAllDecompiledFunctions.java
 */


void _6(char *param_1)

{
  int iVar1;
  uint uVar2;
  
  _7();
  DAT_005baa25 = *param_1 + param_1[1];
  iVar1 = *(int *)(param_1 + 0x10);
  DAT_005baa24 = 0;
  for (uVar2 = (uint)DAT_005baa25; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined *)(iVar1 + 0xd) = 0;
    *(undefined *)(iVar1 + 0xc) = 1;
    *(undefined *)(iVar1 + 0xe) = 0;
    *(undefined *)(iVar1 + 0xf) = 0;
    iVar1 = iVar1 + 0x18;
  }
  DAT_005baa26 = 0;
  DAT_005baa27 = 0;
  return;
}

