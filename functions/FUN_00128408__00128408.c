/*
 * Program: n42.bin
 * Function: FUN_00128408
 * Entry: 00128408
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00128408(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (uint)DAT_003fb816;
  uVar1 = uVar3 + 0x28;
  if (uVar3 < uVar1) {
    if (_DAT_003fb810 != _DAT_003fe968) {
      do {
        _DAT_003fb810 = _DAT_003fb810 * -0x44543011 + ((uint)_DAT_003fe974 << 8 | 0xbf0000ef);
        uVar3 = uVar3 + 1 & 0xff;
        if (uVar1 <= uVar3) goto LAB_001284dc;
      } while (_DAT_003fb810 != _DAT_003fe968);
    }
    if (uVar3 < uVar1) {
      _DAT_003fb810 = _DAT_003fb810 * -0x44543011 + ((uint)_DAT_003fe974 << 8 | 0xbf0000ef);
      DAT_003fb816 = 0;
      _DAT_003fe968 = _DAT_003fb810;
      _DAT_003fe96c = _DAT_003fb810;
      _DAT_003fe970 = _DAT_003fb810;
      return 0;
    }
  }
LAB_001284dc:
  if (uVar3 < 200) {
    DAT_003fb816 = (byte)uVar3;
    uVar2 = 2;
  }
  else {
    DAT_003fb816 = 0;
    uVar2 = 1;
  }
  return uVar2;
}

