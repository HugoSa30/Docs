/*
 * Program: n42.bin
 * Function: FUN_001e1da0
 * Entry: 001e1da0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e1da0(void)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint in_TBLr;
  
  bVar1 = DAT_003fb9c2;
  if (_DAT_003fb848 < in_TBLr) {
    uVar3 = in_TBLr - _DAT_003fb848;
  }
  else {
    uVar3 = _DAT_003fb848 - ((in_TBLr == 0) + 1);
  }
  if ((uVar3 < _DAT_00fe1824) && (DAT_003fb84c != '\0')) {
    DAT_003fb9ac = DAT_003fb9ac & 0xf7;
    DAT_003fb840 = 0;
    FUN_001e1ccc(0x37);
  }
  else if (DAT_003fb9ae < 2) {
    DAT_003fb9ac = DAT_003fb9ac & 0xf7;
    DAT_003fb840 = 0;
    FUN_001e1ccc(0x10);
  }
  else if ((DAT_003fb9c2 & 1) == 0) {
    if (DAT_003fb9ae < 5) {
      DAT_003fb9ac = DAT_003fb9ac & 0xf7;
      DAT_003fb840 = 0;
      FUN_001e1ccc(0x10);
    }
    else if (DAT_003fb840 == '\0') {
      DAT_003fb9ac = DAT_003fb9ac & 0xf7;
      DAT_003fb840 = 0;
      FUN_001e1ccc(0x10);
    }
    else {
      DAT_003fb840 = 0;
      uVar3 = DAT_003fb841 - 0x3c;
      if ((uVar3 >> 0x1f | ((uint)(byte)((5 < (int)uVar3) << 2) << 8) >> 10) == 0) {
        cVar2 = FUN_001e1cf0(DAT_003fb841 + 0xc4 & 0xff,DAT_003fb842,_DAT_003fb844,
                             (uint)DAT_003fb9c3 << 0x18 | (uint)DAT_003fb9c4 << 0x10 |
                             (uint)DAT_003fb9c5 << 8 | (uint)DAT_003fb9c6);
        if (cVar2 == '\x01') {
          DAT_003fb9ac = DAT_003fb9ac | 8;
          DAT_003fbac2 = 2;
          DAT_003fbad6 = bVar1;
          DAT_003fbad7 = 0x34;
        }
        else {
          DAT_003fb84c = '\x01';
          DAT_003fb9ac = DAT_003fb9ac & 0xf7;
          _DAT_003fb848 = in_TBLr;
          FUN_001e1ccc(0x33);
        }
      }
      else {
        DAT_003fb84c = '\x01';
        DAT_003fb9ac = DAT_003fb9ac & 0xf7;
        _DAT_003fb848 = in_TBLr;
        FUN_001e1ccc(0x33);
      }
    }
  }
  else if ((DAT_003fb9c2 & 1) == 1) {
    DAT_003fb840 = 1;
    if ((DAT_003fb9ac >> 3 & 1) == 1) {
      DAT_003fb842 = DAT_003fb9c3;
      _DAT_003fb844 = 0;
      DAT_003fbad6 = DAT_003fb9c2;
      DAT_003fbac2 = 5;
      DAT_003fbad7 = 0;
      DAT_003fbad8 = 0;
      DAT_003fbad9 = 0;
      DAT_003fbada = 0;
    }
    else {
      DAT_003fb841 = (byte)((int)(DAT_003fb9c2 + 1) >> 1);
      do {
        do {
          FUN_001e5400(&DAT_003fbad2);
        } while (_DAT_003fb844 == _DAT_003fbad2);
      } while ((_DAT_003fbad2 & 0xff000000) == 0);
      _DAT_003fb844 = _DAT_003fbad2;
      DAT_003fb842 = DAT_003fb9c3;
      DAT_003fbad6 = bVar1;
      DAT_003fbac2 = 5;
      DAT_003fbad7 = (undefined)(_DAT_003fbad2 >> 0x18);
      DAT_003fbad8 = (undefined)(_DAT_003fbad2 >> 0x10);
      DAT_003fbad9 = (undefined)(_DAT_003fbad2 >> 8);
      DAT_003fbada = (undefined)_DAT_003fbad2;
    }
  }
  else {
    DAT_003fb9ac = DAT_003fb9ac & 0xf7;
    DAT_003fb840 = 0;
    FUN_001e1ccc(0x11);
  }
  return;
}

