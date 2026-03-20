/*
 * Program: n42.bin
 * Function: FUN_001e2508
 * Entry: 001e2508
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e2508(void)

{
  char cVar1;
  uint uVar2;
  int in_TBLr;
  
  if (((DAT_003fbac0 >> 1 & 1) != 0) || ((DAT_003fbac0 >> 4 & 1) != 0)) {
    _DAT_003fb818 = 3;
    _DAT_003fb820 = 0;
    DAT_003fbac0 = DAT_003fbac0 & 0xed;
  }
  if (_DAT_003fb818 < 3) {
    if (_DAT_003fb818 == 2) {
      if (_DAT_00fe181c - _DAT_00fe1818 < (uint)(in_TBLr - _DAT_003fb828)) {
        _DAT_003fb824 = _DAT_00fe1810;
        _DAT_003fb818 = 4;
        _DAT_003fb81c = 0;
        DAT_003fb835 = '\x01';
      }
      else if ((_DAT_00fe1818 <= (uint)(in_TBLr - _DAT_003fb82c)) &&
              (_DAT_003fb82c = in_TBLr, cVar1 = FUN_001e1b88(), cVar1 != '\0')) {
        _DAT_003fb830 = _DAT_003fb830 + 1;
      }
      FUN_001e1a08(1);
      return;
    }
    if (_DAT_003fb818 == 0) {
      cVar1 = FUN_001e1aac();
      if (cVar1 != '\0') {
        FUN_001e1bb4(_DAT_00fe1808 & 0xff);
        _DAT_003fb818 = 1;
        return;
      }
      return;
    }
    if (_DAT_003fb818 != 1) {
                    /* WARNING: Read-only address (ram,0x003fb9c2) is written */
      _DAT_003fb818 = 0;
      return;
    }
    cVar1 = FUN_001e1b10();
    if (cVar1 != '\0') {
      _DAT_003fb818 = 2;
      return;
    }
    return;
  }
  if (_DAT_003fb818 == 3) {
    if (3 < _DAT_003fb820) {
      if (_DAT_003fb820 != 4) {
        if (_DAT_003fb820 != 5) {
          return;
        }
        cVar1 = FUN_001e1aac();
        if (cVar1 != '\0') {
          if ((DAT_003fbac0 >> 5 & 1) != 0) {
            if (DAT_003fb9af == '\x10') {
              FUN_001e1bb4(DAT_003fb836);
            }
            else {
              FUN_001e1bb4(DAT_003fb9c4);
            }
            DAT_003fbac0 = DAT_003fbac0 & 0xdf;
          }
          _DAT_003fb818 = 4;
          FUN_001e1a08(1);
          _DAT_003fb81c = 0;
          return;
        }
        return;
      }
      if ((DAT_003fbac2 != 0) && (DAT_003fbac1 < DAT_003fbac2)) {
        cVar1 = FUN_001e19b4((&DAT_003fbad6)[DAT_003fbac1]);
        if (cVar1 != '\0') {
          uVar2 = (uint)DAT_003fbac1;
          DAT_003fbac1 = DAT_003fbac1 + 1;
          DAT_003fbac4 = DAT_003fbac4 + (&DAT_003fbad6)[uVar2];
          return;
        }
        return;
      }
      cVar1 = FUN_001e19b4(DAT_003fbac4);
      if (cVar1 == '\0') {
        return;
      }
      if ((DAT_003fb9ac & 1) == 0) {
        _DAT_003fb818 = 0;
        _DAT_003fb820 = 5;
        _DAT_003fb824 = _DAT_00fe1810;
        return;
      }
      _DAT_003fb820 = 5;
      return;
    }
    if (_DAT_003fb820 == 3) {
      cVar1 = FUN_001e19b4(DAT_003fbac3);
      if (cVar1 != '\0') {
        _DAT_003fb820 = 4;
        DAT_003fbac4 = DAT_003fbac4 + DAT_003fbac3;
        return;
      }
      return;
    }
    if (_DAT_003fb820 == 0) {
      FUN_001e1a08(0);
      cVar1 = FUN_001e19b4(0);
      if (cVar1 != '\0') {
        _DAT_003fb820 = 1;
        DAT_003fbac1 = 0;
        DAT_003fbac4 = 0;
        return;
      }
      return;
    }
    if (_DAT_003fb820 == 1) {
      if ((DAT_003fbac0 >> 2 & 1) == 0) {
        cVar1 = FUN_001e19b4(DAT_003fbac2 + 1);
        if (cVar1 != '\0') {
          _DAT_003fb820 = 3;
          DAT_003fbac3 = DAT_003fb9af + '@';
          DAT_003fbac4 = DAT_003fbac4 + DAT_003fbac2 + '\x01';
          return;
        }
        return;
      }
      cVar1 = FUN_001e19b4(DAT_003fbac2 + 2);
      if (cVar1 != '\0') {
        _DAT_003fb820 = 2;
        DAT_003fbac0 = DAT_003fbac0 & 0xfb;
        DAT_003fbac3 = DAT_003fb9af;
        DAT_003fbac4 = DAT_003fbac4 + DAT_003fbac2 + '\x02';
        return;
      }
      return;
    }
    if (_DAT_003fb820 != 2) {
      return;
    }
    cVar1 = FUN_001e19b4(0x7f);
    if (cVar1 != '\0') {
      _DAT_003fb820 = 3;
      DAT_003fbac4 = DAT_003fbac4 + '\x7f';
      return;
    }
    return;
  }
  if (_DAT_003fb818 != 4) {
    _DAT_003fb818 = 0;
    return;
  }
  if (3 < _DAT_003fb81c) {
    if (_DAT_003fb81c == 4) {
      if (_DAT_00fe1814 < (uint)(in_TBLr - _DAT_003fb828)) {
        _DAT_003fb81c = 0;
        return;
      }
      cVar1 = FUN_001e18b0();
      if (cVar1 != '\0') {
        _DAT_003fb81c = 5;
        DAT_003fb9af = DAT_003fb834;
        DAT_003fb9b0 = DAT_003fb9b0 + DAT_003fb834;
        return;
      }
      return;
    }
    if (_DAT_003fb81c != 5) {
      return;
    }
    if (_DAT_00fe1814 < (uint)(in_TBLr - _DAT_003fb828)) {
      _DAT_003fb81c = 0;
      return;
    }
    cVar1 = FUN_001e18b0();
    do {
      if (cVar1 == '\0') {
        return;
      }
      while (DAT_003fb9ad == DAT_003fb9ae) {
        if (DAT_003fb9b0 == DAT_003fb834) {
          _DAT_003fb81c = 6;
          if (DAT_003fb9af == -0x80) {
            if ((DAT_003fb9ae == 0) || (DAT_003fb9c2 != '\0')) {
              DAT_003fb9ac = DAT_003fb9ac | 2;
              cVar1 = FUN_001e18b0();
            }
            else {
              FUN_001e2130();
              cVar1 = FUN_001e18b0();
            }
          }
          else {
            FUN_001e2130();
            cVar1 = FUN_001e18b0();
          }
        }
        else {
          _DAT_003fb81c = 0;
          cVar1 = FUN_001e18b0();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      DAT_003fb9b0 = DAT_003fb9b0 + DAT_003fb834;
      uVar2 = (uint)DAT_003fb9ad;
      DAT_003fb9ad = DAT_003fb9ad + 1;
      (&DAT_003fb9c2)[uVar2] = DAT_003fb834;
      cVar1 = FUN_001e18b0();
    } while( true );
  }
  if (_DAT_003fb81c == 3) {
    if (_DAT_00fe1814 < (uint)(in_TBLr - _DAT_003fb828)) {
      _DAT_003fb81c = 0;
      return;
    }
    cVar1 = FUN_001e18b0();
    if (cVar1 != '\0') {
      _DAT_003fb81c = 4;
      DAT_003fb9ae = DAT_003fb834 + -1;
      DAT_003fb9b0 = DAT_003fb9b0 + DAT_003fb834;
      return;
    }
    return;
  }
  if (_DAT_003fb81c != 0) {
    if (_DAT_003fb81c == 1) {
      if (_DAT_00fe1814 < (uint)(in_TBLr - _DAT_003fb828)) {
        _DAT_003fb81c = 0;
        return;
      }
      cVar1 = FUN_001e18b0();
      if (cVar1 != '\0') {
        if (DAT_003fb834 != -2) {
          _DAT_003fb81c = 0;
          return;
        }
        _DAT_003fb81c = 2;
        DAT_003fb9b0 = DAT_003fb9b0 + -2;
        return;
      }
      return;
    }
    if (_DAT_003fb81c != 2) {
      return;
    }
    if (_DAT_00fe1814 < (uint)(in_TBLr - _DAT_003fb828)) {
      _DAT_003fb81c = 0;
      return;
    }
    cVar1 = FUN_001e18b0();
    if (cVar1 != '\0') {
      _DAT_003fb81c = 4;
      DAT_003fb9b0 = DAT_003fb9b0 + DAT_003fb834;
      return;
    }
    return;
  }
  if (_DAT_003fb824 != 0xffffffff) {
    if (DAT_003fb835 != '\0') {
      if ((uint)(in_TBLr - _DAT_003fb828) <= _DAT_00fe1820) goto LAB_001e2a24;
      if (DAT_003fb835 != '\0') {
        _DAT_003fb818 = 0;
        return;
      }
    }
    if (_DAT_003fb824 < (uint)(in_TBLr - _DAT_003fb828)) {
      _DAT_003fb818 = 0;
      return;
    }
  }
LAB_001e2a24:
  cVar1 = FUN_001e18b0();
  if (cVar1 == '\0') {
    return;
  }
  if (DAT_003fb835 == '\0') {
    if (DAT_003fb834 != '\0') {
      _DAT_003fb818 = 0;
      DAT_003fb9b0 = DAT_003fb834;
      return;
    }
    _DAT_003fb81c = 3;
    DAT_003fb9ad = 0;
    DAT_003fb9b0 = DAT_003fb834;
    return;
  }
  if (DAT_003fb834 != -0x7f) {
    _DAT_003fb818 = 0;
    DAT_003fb9b0 = DAT_003fb834;
    return;
  }
  _DAT_003fb81c = 1;
  DAT_003fb835 = 0;
  DAT_003fb9ad = 0;
  DAT_003fb9ae = 0;
  DAT_003fb9b0 = DAT_003fb834;
  return;
}

