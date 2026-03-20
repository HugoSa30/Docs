/*
 * Program: n42.bin
 * Function: FUN_000fb1cc
 * Entry: 000fb1cc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000fb1cc(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int in_TBLr;
  
  if (*(int *)(*(int *)(_DAT_003fbcbc + 0x6c) + param_1 * 4) == -1) {
    puVar1 = _DAT_003fbcb8 + 1;
    *_DAT_003fbcb8 = _DAT_002fc014;
    _DAT_003fbcb8 = puVar1;
    *(undefined4 *)(*(int *)(_DAT_003fbcbc + 0x6c) + param_1 * 4) = param_3;
    iVar5 = _DAT_003fbcbc;
    iVar9 = in_TBLr + param_2;
    iVar8 = *(int *)(_DAT_003fbcbc + 0x70);
    *(int *)(iVar8 + param_1 * 4) = iVar9;
    iVar4 = *(int *)(iVar5 + 0x24);
    iVar3 = *(int *)(iVar5 + 0x68);
    iVar5 = *(int *)(iVar3 + iVar4 * 4);
    if ((DAT_003fbcad == '\0') || (iVar9 - *(int *)(iVar8 + iVar5 * 4) < 0)) {
      *(int *)(iVar3 + iVar4 * 4) = param_1;
      *(int *)(iVar3 + param_1 * 4) = iVar5;
      _DAT_002fc200 = _DAT_002fc200 & 0xff0f | 0x44;
      _DAT_002fc208 = in_TBLr + param_2;
    }
    else {
      *(int *)(iVar8 + iVar4 * 4) = iVar9 + -0x80000000;
      iVar7 = *(int *)(iVar8 + iVar5 * 4);
      while (-1 < iVar9 - iVar7) {
        iVar6 = *(int *)(iVar3 + iVar5 * 4);
        iVar4 = iVar5;
        iVar5 = iVar6;
        iVar7 = *(int *)(iVar8 + iVar6 * 4);
      }
      *(int *)(iVar3 + iVar4 * 4) = param_1;
      *(int *)(iVar3 + param_1 * 4) = iVar5;
    }
    DAT_003fbcad = DAT_003fbcad + '\x01';
    _DAT_002fc014 = _DAT_003fbcb8[-1];
    _DAT_003fbcb8 = _DAT_003fbcb8 + -1;
    uVar2 = 0;
  }
  else {
    FUN_000fba18(7,param_1);
    uVar2 = 7;
  }
  return uVar2;
}

