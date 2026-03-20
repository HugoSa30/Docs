/*
 * Program: n42.bin
 * Function: FUN_001a8fb8
 * Entry: 001a8fb8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a8fb8(void)

{
  uint uVar1;
  ushort uVar2;
  
  if (_DAT_003fbb34 == 1) {
    _DAT_003fbaac = 3;
    FUN_001095f0(*_DAT_003fba9c,_DAT_003fbb2c,1);
    _DAT_003fbb2c = _DAT_003fbb2c + 1;
    _DAT_003fbb30 = _DAT_003fbb30 + -1;
  }
  else if (_DAT_003fbb34 == 2) {
    FUN_0010df98();
    FUN_00109414();
  }
  else if (_DAT_003fbb34 == 3) {
    if (DAT_003fbb38 != '\0') {
      uVar2 = (_DAT_003fbb32 - (ushort)DAT_003fffb4) + 0xff;
      DAT_003fffb5 = (byte)uVar2;
      DAT_003fbb38 = '\0';
      uVar1 = (**(code **)(_DAT_003fbaa4 + 0x24))
                        (_DAT_003fbb24,(ushort)DAT_003fffb4 + (uVar2 & 0xff));
      if (uVar1 == *(byte *)(_DAT_003fbb24 + (uint)DAT_003fffb4 + (uint)DAT_003fffb5)) {
        _DAT_003fbb34 = 0;
        _DAT_003fbd54 = _DAT_003fffb8;
        DAT_003fbd58 = DAT_003fffb5;
        DAT_003fbd59 = 1;
        DAT_003fbd5b = 0;
        return;
      }
    }
    FUN_001a8f4c();
  }
                    /* WARNING: Read-only address (ram,0x003fffb4) is written */
  _DAT_003fbb34 = 0;
  return;
}

