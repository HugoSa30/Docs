/*
 * Program: n42.bin
 * Function: FUN_001a9230
 * Entry: 001a9230
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a9230(undefined4 param_1,int param_2,undefined4 param_3,short param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined uVar5;
  uint uVar4;
  
  DAT_003fbd5c = 0;
  DAT_003fbd59 = 0;
  DAT_003fbd5b = 0;
  DAT_003fbd5a = 0;
  DAT_003fbd58 = 0;
  _DAT_003fbb24 = param_3;
  _DAT_003fbb28 = param_4;
  _DAT_003fbb70 = param_3;
  if (param_2 < 1) {
    DAT_003fbd5c = 1;
    FUN_0010e1b4();
    if (_DAT_003fbaac != 0) {
      if (_DAT_003fbb28 == 0) {
        DAT_003fbd59 = 1;
        _DAT_003fbaac = 1;
      }
      else {
        FUN_001a8f4c();
      }
    }
  }
  else {
    _DAT_003fbaac = 3;
    DAT_003fffb5 = (byte)param_2;
    DAT_003fffb1 = DAT_003fbd5e;
    _DAT_003fffb8 = param_1;
    (**(code **)(_DAT_003fbaa4 + 0x20))(&UNK_003fffa8);
    bVar3 = DAT_003fffb5;
    bVar2 = DAT_003fffb4;
    iVar1 = _DAT_003fffac;
    uVar5 = (**(code **)(_DAT_003fbaa4 + 0x24))
                      (_DAT_003fffac,(uint)DAT_003fffb4 + (uint)DAT_003fffb5);
    *(undefined *)(iVar1 + (uint)bVar2 + (uint)bVar3) = uVar5;
    _DAT_003fbb78 = _DAT_003fffac;
    _DAT_003fbb2c = _DAT_003fffac;
    _DAT_003fbb30 = (ushort)DAT_003fffb4 + (ushort)DAT_003fffb5 + 1;
    _DAT_003fbb7c = _DAT_003fbb30;
    uVar4 = FUN_00109650(*_DAT_003fba9c,_DAT_003fff88,0);
    if (uVar4 < _DAT_003fff88) {
      _DAT_003fbb34 = 1;
      DAT_003fbb6c = 1;
      FUN_00109630(*_DAT_003fba9c,&UNK_003fbb74);
    }
    else {
      FUN_001095f0(*_DAT_003fba9c,_DAT_003fbb2c,1);
      _DAT_003fbb2c = _DAT_003fbb2c + 1;
      _DAT_003fbb30 = _DAT_003fbb30 + -1;
      _DAT_003fbb34 = 0;
    }
  }
  return;
}

