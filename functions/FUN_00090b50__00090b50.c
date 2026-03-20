/*
 * Program: n42.bin
 * Function: FUN_00090b50
 * Entry: 00090b50
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00090b50(void)

{
  undefined uVar4;
  uint uVar1;
  short sVar3;
  undefined4 uVar2;
  uint uVar5;
  
  if ((1 << (DAT_003fa0dc & 0x3f) & 0x18U) == 0) {
    uVar4 = 0x11;
  }
  else if (DAT_003fa0b0 == '\0') {
    if (DAT_003f9f26 == '\a') {
      uVar1 = (uint)*_DAT_003f9f18 * 0x10000 + (uint)_DAT_003f9f18[1] * 0x100 +
              (uint)_DAT_003f9f18[2];
      _DAT_003fa0b8 =
           (uint)_DAT_003f9f18[4] * 0x10000 + (uint)_DAT_003f9f18[5] * 0x100 +
           (uint)_DAT_003f9f18[6];
      if ((uVar1 < 0x8000) || (uVar5 = (uVar1 + _DAT_003fa0b8) - 1, uVar5 < uVar1)) {
        uVar4 = 0x42;
      }
      else {
        _DAT_003fa0bc = uVar1;
        _DAT_003fa0c0 = uVar5;
        DAT_003fa0c4 = _DAT_003f9f18[3];
        sVar3 = FUN_00092bf0(&DAT_003fa0bc,&DAT_003fa0d0);
        if (sVar3 == 0) {
          DAT_003fa0b0 = '\x11';
          *_DAT_003f9f1c = 0xff;
          uVar2 = 10;
          goto LAB_00090c5c;
        }
        uVar4 = 0x22;
      }
    }
    else {
      uVar4 = 0x12;
    }
  }
  else {
    uVar4 = 0x40;
  }
  *_DAT_003f9f20 = uVar4;
  uVar2 = 0x14;
LAB_00090c5c:
  FUN_00095b8c(uVar2,1);
  return;
}

