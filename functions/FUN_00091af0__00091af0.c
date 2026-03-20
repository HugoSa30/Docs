/*
 * Program: n42.bin
 * Function: FUN_00091af0
 * Entry: 00091af0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00091af0(void)

{
  undefined uVar3;
  ushort uVar2;
  undefined4 uVar1;
  
  if ((1 << (DAT_003fa0dc & 0x3f) & 0x18U) == 0) {
    uVar3 = 0x11;
  }
  else if (DAT_003f9f26 == '\a') {
    _DAT_003fa0e0 =
         (uint)(byte)_DAT_003f9f18[1] * 0x10000 + (uint)(byte)_DAT_003f9f18[2] * 0x100 +
         (uint)(byte)_DAT_003f9f18[3];
    _DAT_003fa0e4 =
         (uint)(byte)_DAT_003f9f18[4] * 0x10000 + (uint)(byte)_DAT_003f9f18[5] * 0x100 +
         (uint)(byte)_DAT_003f9f18[6];
    if (_DAT_003fa0e0 < 0x8000) {
      uVar3 = 0x33;
    }
    else {
      uVar2 = FUN_00092a9c(&DAT_003fa0e0,&DAT_003fa0e8);
      if (uVar2 == 0) {
        *_DAT_003f9f1c = *_DAT_003f9f18;
        uVar1 = 10;
        goto LAB_00091bf0;
      }
      if ((uVar2 & 4) == 4) {
        uVar3 = 0x22;
      }
      else if ((uVar2 & 1) == 1) {
        uVar3 = 0x12;
      }
      else {
        uVar3 = 0x10;
      }
    }
  }
  else {
    uVar3 = 0x12;
  }
  *_DAT_003f9f20 = uVar3;
  uVar1 = 0x14;
LAB_00091bf0:
  FUN_00095b8c(uVar1,1);
  return;
}

