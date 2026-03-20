/*
 * Program: n42.bin
 * Function: FUN_000b4648
 * Entry: 000b4648
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b4648(void)

{
  int iVar1;
  uint uVar2;
  
  _DAT_003fb0dc = func_0x00f99670(0xf096c0);
  if (_DAT_003fb0dc < _DAT_003fb0e0) {
    iVar1 = _DAT_003fb0dc + ~_DAT_003fb0e0 + 1;
  }
  else {
    iVar1 = _DAT_003fb0dc - _DAT_003fb0e0;
  }
  if ((iVar1 - 0x927cU < 0xa605) && (DAT_003fb0d6 != '\0')) {
    DAT_003fb0d5 = '\x01';
    DAT_003fb0d4 = 1;
    _DAT_003fb0d8 = 0;
  }
  if (DAT_003fb0d5 == '\0') {
    func_0x00f99630(0xf096c0,&UNK_003fb0e4,1);
  }
  else {
    _DAT_003fb0d8 = _DAT_003fb0d8 | *(ushort *)(_DAT_00f096c4 + 0x30);
    func_0x00f99630(0xf096c0,&UNK_003fb0e4 + (uint)DAT_003fb0d4 * 2,1);
    DAT_003fb0d4 = DAT_003fb0d4 + 1;
  }
  if (DAT_003fb0d4 == 6) {
    DAT_003fb0d4 = 7;
    DAT_003fb0d5 = '\0';
  }
  else if (DAT_003fb0d4 == 7) {
    DAT_003fb0d4 = 0;
    _DAT_003fb0d8 = _DAT_003fb0d8 | *(ushort *)(_DAT_00f096c4 + 0x30);
    uVar2 = 0;
    do {
      *(undefined2 *)(&UNK_003fb0b0 + uVar2 * 2) = *(undefined2 *)(&UNK_003fb0e4 + uVar2 * 2);
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 6);
    _DAT_003fb0c8 = _DAT_003fb0d8;
    _DAT_003fb0d8 = 0;
    _DAT_003fb0ca = _DAT_003fb0ca + 1;
  }
  _DAT_003fb0e0 = _DAT_003fb0dc;
  DAT_003fb0d6 = 1;
  return;
}

