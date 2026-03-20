/*
 * Program: n42.bin
 * Function: FUN_000fa6bc
 * Entry: 000fa6bc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000fa6bc(int *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  int *piVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  
  pbVar7 = (byte *)param_1[3];
  uVar8 = _DAT_003fbcbc[6];
  puVar2 = _DAT_003fbcb8 + 1;
  *_DAT_003fbcb8 = _DAT_002fc014;
  _DAT_003fbcb8 = puVar2;
  puVar1 = _DAT_003fbcbc;
  uVar9 = param_1[1];
  uVar3 = _DAT_003fbcbc[0x18];
  piVar6 = (int *)(uVar3 + uVar9 * 0x10);
  _DAT_002fc014 = uVar8;
  if (*piVar6 == 0) {
    *piVar6 = (int)param_1;
    if (uVar9 < *puVar1) {
      piVar6[2] = *param_1;
      if (_DAT_003fbce0 < uVar9) {
        *(int *)(uVar3 + _DAT_003fbce0 * 0x10 + 8) = _DAT_003fbcd4;
        _DAT_003fbcd4 = piVar6[2];
        _DAT_003fbce0 = uVar9;
      }
      else if (uVar9 == _DAT_003fbce0) {
        _DAT_003fbcd4 = *param_1;
      }
    }
    else if ((_DAT_003fbce4 < uVar9) && (_DAT_003fbce8 < uVar9)) {
      _DAT_003fbcb4 = (uint)*(byte *)(puVar1[0x14] + uVar9);
      _DAT_002fc240 = (ushort)(0x100 << (0xf - _DAT_003fbcb4 >> 1 & 0x3f)) | 5;
      _DAT_003fbce4 = uVar9;
    }
    *pbVar7 = *pbVar7 + 1;
    if (_DAT_003fbcf4 != (undefined4 *)0x0) {
      (**(code **)*_DAT_003fbcf4)(param_1);
    }
    _DAT_002fc014 = _DAT_003fbcb8[-1];
    _DAT_003fbcb8 = _DAT_003fbcb8 + -1;
    uVar4 = 0;
  }
  else if ((uint)*pbVar7 < (uint)param_1[2]) {
    bVar5 = *(byte *)(piVar6 + 3);
    if (((bVar5 & 0x80) == 0) || (*(char *)(_DAT_003fbcbc[0x12] + uVar9) == '\0')) {
      *(int **)(*(int *)(_DAT_003fbcbc[0x13] + uVar9 * 4) + (uint)bVar5 * 4) = param_1;
      uVar3 = bVar5 + 1;
      *(char *)(piVar6 + 3) = (char)uVar3;
      if ((uint)*(byte *)(puVar1[0x12] + uVar9) <= (uVar3 & 0xff)) {
        *(undefined *)(piVar6 + 3) = 0;
      }
      bVar5 = *(byte *)((int)piVar6 + 0xd) & 0x7f;
      *(byte *)((int)piVar6 + 0xd) = bVar5;
      if (bVar5 == *(byte *)(piVar6 + 3)) {
        *(byte *)(piVar6 + 3) = *(byte *)(piVar6 + 3) | 0x80;
      }
      *pbVar7 = *pbVar7 + 1;
      if (_DAT_003fbcf4 != (undefined4 *)0x0) {
        (**(code **)*_DAT_003fbcf4)(param_1);
      }
      _DAT_002fc014 = _DAT_003fbcb8[-1];
      _DAT_003fbcb8 = _DAT_003fbcb8 + -1;
      uVar4 = 0;
    }
    else {
      _DAT_002fc014 = _DAT_003fbcb8[-1];
      _DAT_003fbcb8 = _DAT_003fbcb8 + -1;
      FUN_000fba18(9,uVar9);
      uVar4 = 9;
    }
  }
  else {
    _DAT_002fc014 = _DAT_003fbcb8[-1];
    _DAT_003fbcb8 = _DAT_003fbcb8 + -1;
    FUN_000fba18(4,param_1);
    uVar4 = 4;
  }
  return uVar4;
}

