/*
 * Program: n42.bin
 * Function: 43
 * Entry: 00109bc8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void _3(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (DAT_00f07e5c != 0) {
    do {
      iVar1 = uVar5 * 4;
      iVar2 = uVar5 * 8;
      uVar3 = _8(*(undefined4 *)(param_1 + iVar2),*(undefined *)(param_1 + iVar2 + 4));
      *(undefined4 *)(&UNK_003faed4 + iVar1) = uVar3;
      uVar3 = _8(*(undefined4 *)(param_2 + iVar2),*(undefined *)(param_2 + iVar2 + 4));
      *(undefined4 *)(&UNK_003faedc + iVar1) = uVar3;
      uVar3 = _8(*(undefined4 *)(param_3 + iVar2),*(undefined *)(param_3 + iVar2 + 4));
      *(undefined4 *)(&UNK_003faee4 + iVar1) = uVar3;
      iVar1 = uVar5 * 2;
      uVar4 = FUN_00109dc4(*(undefined *)(param_6 + uVar5));
      *(undefined2 *)(&UNK_003faeec + iVar1) = uVar4;
      *(undefined2 *)(&UNK_003faef8 + iVar1) = *(undefined2 *)(param_4 + iVar1);
      *(undefined2 *)(&UNK_003faefc + iVar1) = *(undefined2 *)(param_4 + iVar1);
      *(undefined2 *)(&UNK_003faef0 + iVar1) = *(undefined2 *)(param_5 + iVar1);
      *(undefined2 *)(&UNK_003faef4 + iVar1) = *(undefined2 *)(param_5 + iVar1);
      *(undefined2 *)(&UNK_003faf50 + uVar5 * 6) = 0;
      *(undefined2 *)(&UNK_003faf4e + uVar5 * 6) = 0;
      FUN_00109f08(uVar5);
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < DAT_00f07e5c);
  }
  return;
}

