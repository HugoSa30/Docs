/*
 * Program: n42.bin
 * Function: FUN_001e18b0
 * Entry: 001e18b0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_001e18b0(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_TBLr;
  
  uVar2 = (uint)_DAT_0030502a;
  uVar3 = (uint)DAT_003fb837;
  while (uVar3 != ((int)uVar2 >> 4 & 0xfU)) {
    *_DAT_003fb838 = (char)*(undefined2 *)(&UNK_0030504c + (uint)DAT_003fb837 * 2);
    DAT_003fb837 = DAT_003fb837 + 1;
    _DAT_003fb838 = _DAT_003fb838 + 1;
    if (DAT_003fb837 == 8) {
      _DAT_0030502a = _DAT_0030502a & 0xf7ff;
    }
    else if (DAT_003fb837 == 0x10) {
      _DAT_0030502a = _DAT_0030502a & 0xfbff;
      DAT_003fb837 = 0;
    }
    uVar3 = (uint)DAT_003fb837;
  }
  bVar1 = _DAT_003fb838 != _DAT_003fb83c;
  if (bVar1) {
    DAT_003fb834 = *_DAT_003fb83c;
    _DAT_003fb83c = _DAT_003fb83c + 1;
    _DAT_003fb828 = in_TBLr;
  }
  return bVar1;
}

