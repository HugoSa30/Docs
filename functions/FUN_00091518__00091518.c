/*
 * Program: n42.bin
 * Function: FUN_00091518
 * Entry: 00091518
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00091518(int param_1,int param_2)

{
  undefined8 uVar1;
  ushort unaff_r30;
  undefined4 in_TBLr;
  
  if (param_2 == 1) {
    unaff_r30 = 0x20;
  }
  else if (param_2 == 2) {
    unaff_r30 = 0x40;
  }
  else if (param_2 == 3) {
    unaff_r30 = _DAT_003f9f28 & 0x60;
  }
  if (param_1 == 0) {
    unaff_r30 = unaff_r30 | 2;
  }
  if ((param_1 == 1) || (param_1 == 2)) {
    unaff_r30 = unaff_r30 | 1;
  }
  if (2 < param_1) {
    if (param_1 == 0xfe) {
      FUN_00092048();
    }
    else {
      uVar1 = CONCAT44(_DAT_003f9ebe,_DAT_003f9ec2);
      if (param_1 != 0xff) goto LAB_000916dc;
    }
    _DAT_003f9f8c = _LAB_001c0034;
    DAT_003f9f37 = 0;
    DAT_003f9f36 = 0;
    FUN_000914f0();
    _DAT_003f9f6e = 0;
    _DAT_003f9f70 = 0;
    DAT_003f9f69 = 1;
    FUN_0009670c();
    FUN_000966bc();
    uVar1 = CONCAT44(_DAT_003f9ebe,_DAT_003f9ec2);
    _DAT_003f9f64 = &UNK_003f9f9e;
    _DAT_003f9f60 = &DAT_003f9f9f;
    DAT_003f9eec = 0;
    _DAT_003f9f28 = 0;
    goto LAB_000916dc;
  }
  if (param_1 == 2) {
LAB_0009160c:
    FUN_00095610();
  }
  else if (param_1 != 0) {
    uVar1 = CONCAT44(_DAT_003f9ebe,_DAT_003f9ec2);
    if (param_1 != 1) goto LAB_000916dc;
    goto LAB_0009160c;
  }
  _DAT_003f9f64 = &UNK_003f9f9e;
  _DAT_003f9f60 = &DAT_003f9f9f;
  DAT_003f9eee = 0;
  DAT_003f9eed = 0;
  DAT_003f9eef = 0;
  param_1 = param_1 * 0xc;
  _DAT_003f9ebe = FUN_00090e84(*(undefined4 *)(&LAB_001c0044 + param_1));
  FUN_00090ec4(&UNK_003f9ec8,*(undefined4 *)(&LAB_001c0044 + param_1));
  FUN_0009561c();
  if ((unaff_r30 & 0x20) == 0) {
    _DAT_003f9f8c = _LAB_001c0030;
    FUN_00097378();
    FUN_0009760c(2);
  }
  else {
    DAT_003f9f42 = 0;
    DAT_003f9f44 = 0;
    DAT_003f9f43 = 0;
    DAT_003f9f41 = 0;
    DAT_003f9f40 = 0;
    DAT_003f9f45 = 0;
    DAT_003f9f75 = 10;
    _DAT_003f9f54 = in_TBLr;
    _DAT_003f9f7c = in_TBLr;
    FUN_0009760c(1);
    _DAT_003f9f8c = *(undefined4 *)(&LAB_001c0030 + (uint)*(byte *)(param_1 + 0x1c0043) * 4);
  }
  _DAT_003f9f28 = unaff_r30 & 0xff | 0x80;
  uVar1 = _DAT_003f9ebe;
LAB_000916dc:
  _DAT_003f9ebe = (undefined4)((ulonglong)uVar1 >> 0x20);
  _DAT_003f9ec2 = (undefined4)uVar1;
  return;
}

