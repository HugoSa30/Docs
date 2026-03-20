/*
 * Program: n42.bin
 * Function: FUN_000fbf90
 * Entry: 000fbf90
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000fbf90(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int in_TBLr;
  
  iVar6 = 0;
  puVar5 = _DAT_003fbcb8 + 1;
  *_DAT_003fbcb8 = _DAT_002fc014;
  _DAT_003fbcb8 = puVar5;
  iVar7 = *(int *)(_DAT_003fbcbc + 100);
  piVar4 = (int *)(iVar7 + param_1 * 8);
  iVar2 = *piVar4;
  uVar3 = piVar4[1];
  bVar1 = iVar2 != 0;
  if (iVar2 == 0) {
    bVar1 = 2 < uVar3;
  }
  if (bVar1) {
    iVar2 = param_1 * 8;
    if (~*(uint *)(iVar7 + iVar2 + 4) == *(uint *)(iVar7 + iVar2)) {
      iVar6 = *(uint *)(iVar7 + iVar2) - in_TBLr;
      if (iVar6 < 1) {
        puVar5 = (undefined4 *)(*(int *)(_DAT_003fbcbc + 100) + param_1 * 8);
        *puVar5 = 0;
        puVar5[1] = 1;
        _DAT_002fc014 = _DAT_003fbcb8[-1];
        _DAT_003fbcb8 = _DAT_003fbcb8 + -1;
        uVar8 = 0xf;
        FUN_000fba18(0xf,param_1);
        iVar6 = 0;
      }
      else {
        uVar8 = 0;
        _DAT_002fc014 = _DAT_003fbcb8[-1];
        _DAT_003fbcb8 = _DAT_003fbcb8 + -1;
      }
    }
    else {
      *(undefined4 *)(iVar7 + iVar2) = 0;
      ((undefined4 *)(iVar7 + iVar2))[1] = 2;
      _DAT_002fc014 = _DAT_003fbcb8[-1];
      _DAT_003fbcb8 = _DAT_003fbcb8 + -1;
      uVar8 = 0x10;
      FUN_000fba18(0x10,param_1);
    }
  }
  else {
    uVar8 = *(undefined4 *)(uVar3 * 4 + 0xfa9d9c);
    _DAT_002fc014 = _DAT_003fbcb8[-1];
    _DAT_003fbcb8 = _DAT_003fbcb8 + -1;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar6;
  }
  return uVar8;
}

