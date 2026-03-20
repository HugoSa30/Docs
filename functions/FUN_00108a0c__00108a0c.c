/*
 * Program: n42.bin
 * Function: FUN_00108a0c
 * Entry: 00108a0c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00108a0c(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_TBLr;
  
  iVar2 = param_1[1];
  if (*(char *)(iVar2 + 0x42) == -0x7f) {
    uVar1 = _DAT_0030502a >> 4 & 7;
    if (*(byte *)(iVar2 + 0x3d) != uVar1) {
      *(char *)(iVar2 + 0x3d) = (char)uVar1;
      *(undefined4 *)(param_1[1] + 0x28) = in_TBLr;
    }
    iVar2 = *param_1;
    uVar1 = *(ushort *)(iVar2 + 0xc);
    if ((uVar1 & 3) != 0) {
      iVar3 = param_1[1];
      *(ushort *)(iVar3 + 0x30) = uVar1;
      *(undefined2 *)(iVar3 + 0x32) = *(undefined2 *)(iVar2 + 0xe);
      _DAT_00305028 = 0xc20;
    }
  }
  return;
}

