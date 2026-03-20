/*
 * Program: n42.bin
 * Function: 4
 * Entry: 00103178
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _(undefined4 param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined uVar4;
  uint uVar5;
  int in_TBLr;
  int iVar6;
  
  if (DAT_003fbd5c == '\0') {
    *(undefined *)((int)param_2 + 10) = 8;
    return;
  }
  iVar3 = 0;
  if (DAT_003f9fc2 == '\0') {
    DAT_003f9fe0 = '\x01';
    _DAT_003f9fda = *(ushort *)((int)param_2 + 6);
    _DAT_003f9fdc = *param_2;
    DAT_003f9fc2 = '\x04';
    _DAT_003f9f34 = _DAT_003fff8c;
    uVar5 = (uint)_DAT_003f9fda;
    if (DAT_00ffe5f6 < uVar5) {
      uVar4 = 0x12;
    }
    else if (DAT_003f9f38 == '\x11') {
      if ((_DAT_003f9f3c != 0) && (uVar5 <= _DAT_003f9f3c)) {
        _DAT_003f9f3c = _DAT_003f9f3c - uVar5;
        iVar3 = in_TBLr;
        goto LAB_0010328c;
      }
      uVar4 = 0x72;
    }
    else {
      uVar4 = 0x22;
    }
    *(undefined *)*param_2 = uVar4;
    *(undefined2 *)(param_2 + 2) = 1;
    *(undefined *)((int)param_2 + 10) = 2;
  }
  else {
LAB_0010328c:
    uVar2 = 0;
    iVar6 = in_TBLr;
    uVar1 = _DAT_003f9fda;
    if ((_DAT_003f9f34 < _DAT_003fb9a0) && (DAT_003f9fe0 == '\x01')) {
      DAT_003f9fc2 = '\x05';
    }
    do {
      if ((uVar1 == 0) || (DAT_003f9fc2 == '\x05')) break;
      _();
      _DAT_003f9fd0 = _DAT_003f9fdc;
      if (_DAT_003f9fda < 0x40) {
        _DAT_003f9fd4 = _DAT_003f9fda;
        uVar2 = _(&DAT_003f9fd0,&UNK_003f9fd8);
        _DAT_003f9fda = 0;
      }
      else {
        _DAT_003f9fd4 = 0x40;
        uVar2 = _(&DAT_003f9fd0,&UNK_003f9fd8);
        _DAT_003f9fdc = _DAT_003f9fdc + 0x40;
        _DAT_003f9fda = _DAT_003f9fda - 0x40;
      }
      if ((DAT_003f9fe0 == '\x01') && (_DAT_003f9f34 <= _DAT_003fb9a0 + (iVar6 - iVar3))) {
        DAT_003f9fc2 = '\x05';
      }
      uVar1 = uVar2;
    } while (_DAT_003f9fda != 0);
    _();
    if (uVar2 == 0) {
      if (_DAT_003f9fda != 0) {
        do {
        } while ((uint)(iVar6 - in_TBLr) < _DAT_003fff88);
        _DAT_003fff8c = 0;
        *(undefined *)((int)param_2 + 10) = 8;
        DAT_003f9fc2 = 1;
        DAT_003f9fe0 = 0;
        return;
      }
      uVar5 = (uint)_DAT_003f9f3a;
      _DAT_003f9f3a = (ushort)(uVar5 + 1);
      DAT_003f9fc2 = '\0';
      *(char *)*param_2 = (char)(uVar5 + 1 >> 8);
      *(char *)(*param_2 + 1) = (char)_DAT_003f9f3a;
      *(undefined *)(*param_2 + 2) = 1;
      *(undefined2 *)(param_2 + 2) = 3;
      uVar4 = 1;
    }
    else {
      _DAT_003f9f3c = 0;
      DAT_003f9fc2 = '\0';
      *(undefined *)*param_2 = 0x72;
      *(undefined2 *)(param_2 + 2) = 1;
      uVar4 = 2;
    }
    *(undefined *)((int)param_2 + 10) = uVar4;
    (**(code **)(_DAT_003fbd60 + 0x24))(0xf03164);
  }
  return;
}

