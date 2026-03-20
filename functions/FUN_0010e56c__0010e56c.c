/*
 * Program: n42.bin
 * Function: FUN_0010e56c
 * Entry: 0010e56c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0010e56c(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  if (_DAT_003fbaac == 2) {
    FUN_00109610(*_DAT_003fba9c,&UNK_003fbb1c);
    uVar1 = *_DAT_003fbb40;
    if (_DAT_003fbb32 < uVar1) {
      DAT_003fbd5b = 1;
      _DAT_003fbb32 = uVar1;
      iVar2 = (**(code **)(_DAT_003fbaa4 + 0x14))(&UNK_003fffa8,uVar1);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(_DAT_003fbaa4 + 0x18))(&UNK_003fffa8);
        if (iVar2 == 0) {
          FUN_0010eae8();
        }
        else {
          iVar2 = (**(code **)(_DAT_003fbaa4 + 0x1c))(&UNK_003fffa8);
          if (iVar2 == 0) {
            FUN_0010eae8();
          }
          else {
            DAT_003fbd5a = 1;
            if (DAT_003fffb5 == 0) {
              DAT_003fbb38 = 1;
            }
            else if ((ushort)((ushort)DAT_003fffb4 + (ushort)DAT_003fffb5 + 1) <= _DAT_003fbb32) {
              uVar3 = (**(code **)(_DAT_003fbaa4 + 0x24))
                                (_DAT_003fbb24,(uint)DAT_003fffb4 + (uint)DAT_003fffb5);
              if (uVar3 == *(byte *)(_DAT_003fbb24 + (uint)DAT_003fffb4 + (uint)DAT_003fffb5)) {
                DAT_003fbd59 = 1;
                DAT_003fbd5b = 0;
                _DAT_003fbd54 = _DAT_003fffb8;
                DAT_003fbd58 = DAT_003fffb5;
              }
              else {
                FUN_0010eae8();
              }
            }
          }
        }
      }
    }
    else {
      if (uVar1 == 0) {
        if (_DAT_003fbb34 == 2) goto LAB_0010e7b4;
        uVar3 = FUN_00109650(*_DAT_003fba9c,_DAT_003fff94,0);
        if (uVar3 < _DAT_003fff94) {
          _DAT_003fbb34 = 2;
          goto LAB_0010e7b4;
        }
        FUN_0010df98();
        FUN_00109414();
      }
      else {
        if (_DAT_003fbb34 == 3) goto LAB_0010e7b4;
        uVar3 = FUN_00109650(*_DAT_003fba9c,*(undefined4 *)(_DAT_003fbaa8 + 8),0);
        if (uVar3 < *(uint *)(_DAT_003fbaa8 + 8)) {
          _DAT_003fbb34 = 3;
          goto LAB_0010e7b4;
        }
        FUN_0010eae8();
      }
      _DAT_003fbb34 = 0;
    }
  }
LAB_0010e7b4:
  return _DAT_003fbaac != 0;
}

