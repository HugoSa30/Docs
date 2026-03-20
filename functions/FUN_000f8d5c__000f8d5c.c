/*
 * Program: n42.bin
 * Function: FUN_000f8d5c
 * Entry: 000f8d5c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f8d5c(uint param_1,int param_2,int param_3)

{
  char cVar2;
  undefined4 uVar1;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (1000000 < param_1) {
    param_1 = 1000000;
  }
  uVar3 = (param_1 * 10000) / (uint)_DAT_003fc7e4;
  iVar5 = param_2 * 0x18;
  (&UNK_003fc72a)[iVar5] = (char)(uVar3 >> 0x10);
  *(short *)(&UNK_003fc72c + iVar5) = (short)uVar3;
  if (*(int *)(&UNK_003fc724 + iVar5) == 2) {
    if ((&UNK_003fc73a)[iVar5] == '\0') {
      uVar4 = uVar3 - *(int *)(&UNK_003fc734 + iVar5);
      if ((0 < (int)uVar4) && (uVar4 < _DAT_003fc7ec)) {
        uVar4 = 0;
      }
      *(uint *)(&UNK_003fc734 + iVar5) = uVar3;
    }
    else {
      *(uint *)(&UNK_003fc734 + iVar5) = uVar3;
      uVar4 = 0;
      (&UNK_003fc73a)[iVar5] = 0;
    }
  }
  else {
    uVar4 = 0;
    *(undefined4 *)(&UNK_003fc734 + iVar5) = 0;
  }
  (&UNK_003fc72f)[iVar5] = (char)(uVar4 >> 0x10);
  *(short *)(&UNK_003fc730 + iVar5) = (short)uVar4;
  if ((param_3 == 1) && (cVar2 = (*(code *)&SUB_00068a0c)(param_2), cVar2 == '\0')) {
    (*(code *)&SUB_00fb0fbc)(0x38,param_2);
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

