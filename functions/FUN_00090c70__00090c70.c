/*
 * Program: n42.bin
 * Function: FUN_00090c70
 * Entry: 00090c70
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00090c70(void)

{
  uint uVar1;
  short sVar2;
  undefined uVar4;
  undefined4 uVar3;
  
  if ((1 << (DAT_003fa0dc & 0x3f) & 0x18U) == 0) {
    uVar4 = 0x11;
    goto LAB_00090da4;
  }
  if (DAT_003fa0b0 != '\"') {
    if (DAT_003fa0b0 != '\x11') {
      uVar4 = 0x22;
      goto LAB_00090da4;
    }
    if (_DAT_003fa0b8 == 0) {
      uVar4 = 0x40;
      goto LAB_00090da4;
    }
    if (_DAT_003fa0b8 < DAT_003f9f26) {
      uVar4 = 0x43;
      goto LAB_00090da4;
    }
    _DAT_003fa0b8 = _DAT_003fa0b8 - DAT_003f9f26;
    DAT_003fa0b1 = DAT_003f9f26;
    _DAT_003fa0b4 = _DAT_003f9f18;
  }
  uVar1 = (uint)DAT_003fa0b1;
  if (0xfe < uVar1) {
    uVar1 = 0xfe;
  }
  DAT_003fa0b1 = DAT_003fa0b1 - (char)uVar1;
  _DAT_003fa0c8 = _DAT_003fa0b4;
  _DAT_003fa0cc = (undefined2)uVar1;
  sVar2 = FUN_00092d6c(&DAT_003fa0c8,&DAT_003fa0d0);
  if (sVar2 == 0) {
    if (DAT_003fa0b1 == 0) {
      DAT_003fa0b0 = 0x11;
      uVar3 = 10;
    }
    else {
      DAT_003fa0b0 = 0x22;
      _DAT_003fa0b4 = _DAT_003fa0b4 + uVar1;
      uVar3 = 0x1e;
    }
    FUN_00095b8c(uVar3,0);
    return;
  }
  _DAT_003fa0b8 = 0;
  DAT_003fa0b0 = '\x11';
  uVar4 = 0xfe;
LAB_00090da4:
  *_DAT_003f9f20 = uVar4;
  FUN_00095b8c(0x14,1);
  return;
}

