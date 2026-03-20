/*
 * Program: n42.bin
 * Function: FUN_001a942c
 * Entry: 001a942c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_001a942c(void)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  
  if (_DAT_003fbaac != 2) goto LAB_001a971c;
  FUN_00109610(*_DAT_003fba9c,&UNK_003fbb1c);
  if (_DAT_003fbb32 < _DAT_003fbb6e) {
    _DAT_003fbb32 = _DAT_003fbb6e;
    DAT_003fbd5b = 1;
    iVar1 = (**(code **)(_DAT_003fbaa4 + 0x14))(&UNK_003fffa8,_DAT_003fbb6e);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(_DAT_003fbaa4 + 0x18))(&UNK_003fffa8);
      if (iVar1 == 0) {
        FUN_001a8f4c();
      }
      else {
        iVar1 = (**(code **)(_DAT_003fbaa4 + 0x1c))(&UNK_003fffa8);
        if (iVar1 == 0) {
          FUN_001a8f4c();
        }
        else {
          DAT_003fbd5a = 1;
          if (DAT_003fffb5 == 0) {
            DAT_003fbb38 = '\x01';
          }
          else if ((ushort)((ushort)DAT_003fffb4 + (ushort)DAT_003fffb5 + 1) <= _DAT_003fbb32) {
            uVar2 = (**(code **)(_DAT_003fbaa4 + 0x24))
                              (_DAT_003fbb24,(uint)DAT_003fffb4 + (uint)DAT_003fffb5);
            if (uVar2 == *(byte *)(_DAT_003fbb24 + (uint)DAT_003fffb4 + (uint)DAT_003fffb5)) {
              DAT_003fbd59 = 1;
              DAT_003fbd5b = 0;
              _DAT_003fbd54 = _DAT_003fffb8;
              DAT_003fbd58 = DAT_003fffb5;
            }
            else {
              FUN_001a8f4c();
            }
          }
        }
      }
    }
    goto LAB_001a971c;
  }
  if (_DAT_003fbb6e == 0) {
    if (_DAT_003fbb34 == 2) goto LAB_001a971c;
    uVar2 = FUN_00109650(*_DAT_003fba9c,_DAT_003fff94,0);
    if (uVar2 < _DAT_003fff94) {
      _DAT_003fbb34 = 2;
      goto LAB_001a971c;
    }
    FUN_0010df98();
    FUN_00109414();
  }
  else {
    if (_DAT_003fbb34 == 3) goto LAB_001a971c;
    uVar2 = FUN_00109650(*_DAT_003fba9c,*(undefined4 *)(_DAT_003fbaa8 + 8),0);
    if (uVar2 < *(uint *)(_DAT_003fbaa8 + 8)) {
      _DAT_003fbb34 = 3;
      goto LAB_001a971c;
    }
    if (DAT_003fbb38 != '\0') {
      uVar3 = (_DAT_003fbb32 - DAT_003fffb4) + 0xff;
      DAT_003fffb5 = (byte)uVar3;
      DAT_003fbb38 = '\0';
      uVar2 = (**(code **)(_DAT_003fbaa4 + 0x24))
                        (_DAT_003fbb24,(ushort)DAT_003fffb4 + (uVar3 & 0xff));
      if (uVar2 == *(byte *)(_DAT_003fbb24 + (uint)DAT_003fffb4 + (uint)DAT_003fffb5)) {
        DAT_003fbd59 = 1;
        DAT_003fbd5b = 0;
        _DAT_003fbd54 = _DAT_003fffb8;
        DAT_003fbd58 = DAT_003fffb5;
        goto LAB_001a9710;
      }
    }
    FUN_001a8f4c();
  }
LAB_001a9710:
  _DAT_003fbb34 = 0;
LAB_001a971c:
  return _DAT_003fbaac != 0;
}

