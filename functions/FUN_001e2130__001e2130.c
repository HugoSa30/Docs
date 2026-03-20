/*
 * Program: n42.bin
 * Function: FUN_001e2130
 * Entry: 001e2130
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e2130(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (DAT_003fb9af < 0x81) {
    if (DAT_003fb9af == 0x80) {
      if ((DAT_003fb9ae == '\x03') && ((int)(uint)DAT_003fb9c4 <= _DAT_00fe1808)) {
        DAT_003fbac2 = 2;
        DAT_003fbac1 = 2;
        DAT_003fbad6 = DAT_003fb9c2;
        DAT_003fbad7 = DAT_00fe1800;
        DAT_003fbac0 = DAT_003fbac0 | 0x20;
      }
      else {
        FUN_001e1ccc(0x10);
      }
      DAT_003fbac0 = DAT_003fbac0 | 0x10;
      return;
    }
    if (DAT_003fb9af == 0x10) {
      if ((DAT_003fb9c2 == -6) &&
         ((((DAT_003fb9c3 != 0 && (DAT_003fb9c3 < 6)) && (DAT_003fb9ae == '\x02')) ||
          ((DAT_003fb9c3 == 6 && (DAT_003fb9ae == '\x05')))))) {
        if (DAT_003fb9c3 == 6) {
          uVar2 = (uint)DAT_003fb9c4 << 0x10 | (uint)DAT_003fb9c5 << 8 | (uint)DAT_003fb9c6;
        }
        else {
          uVar2 = *(uint *)((uint)DAT_003fb9c3 * 4 + 0xfe2df4);
        }
        if (uVar2 < _DAT_00fe2df8) {
          FUN_001e1ccc(0x31);
        }
        else {
          uVar3 = _DAT_00f07e64 / (uVar2 << 5);
          uVar1 = 1000 - ((_DAT_00f07e64 / (uVar3 * 0x20 + 0x20)) * 1000) / uVar2 & 0xffff;
          uVar2 = ((_DAT_00f07e64 / (uVar3 * 0x20)) * 1000) / uVar2 + 0xfc18 & 0xffff;
          if (uVar1 < uVar2) {
            uVar3 = uVar3 + 1;
          }
          if ((uVar1 < _DAT_00fe1722) || (uVar2 < _DAT_00fe1722)) {
            DAT_003fb836 = (undefined)uVar3;
            DAT_003fbac2 = 2;
            DAT_003fbac1 = 2;
            DAT_003fbad6 = DAT_003fb9c2;
            DAT_003fbad7 = DAT_003fb9c3;
            DAT_003fbac0 = DAT_003fbac0 | 0x20;
          }
          else {
            FUN_001e1ccc(0x31);
          }
        }
      }
      else {
        FUN_001e1ccc(0x10);
      }
      DAT_003fbac0 = DAT_003fbac0 | 0x10;
      return;
    }
    if (DAT_003fb9af == 0x27) {
      if ((DAT_003fb9c2 == -5) || (DAT_003fb9c2 == -4)) {
        FUN_001e7184();
      }
      else {
        FUN_001e1da0();
      }
      DAT_003fbac0 = DAT_003fbac0 | 0x10;
      return;
    }
    if (DAT_003fb9af == 0x3e) {
      DAT_003fbac0 = DAT_003fbac0 | 0x10;
      DAT_003fbac2 = 0;
      return;
    }
  }
  else {
    if (DAT_003fb9af == 0x81) {
      DAT_003fb9ac = DAT_003fb9ac | 1;
      DAT_003fbac0 = DAT_003fbac0 | 0x10;
      DAT_003fbac2 = 2;
      DAT_003fbad6 = 0xd6;
      DAT_003fbad7 = 0x8f;
      return;
    }
    if (DAT_003fb9af == 0x82) {
      DAT_003fb9ac = DAT_003fb9ac & 0xf6;
      DAT_003fbac0 = DAT_003fbac0 | 0x10;
      DAT_003fbac2 = 0;
      return;
    }
    if (DAT_003fb9af == 0x83) {
      if (((((DAT_003fb9c2 == '\x03') && (DAT_003fb9c3 == 0)) && (0x27 < DAT_003fb9c4)) &&
          ((DAT_003fb9c5 == 0 && (DAT_003fb9c6 == 0xff)))) && (DAT_003fb9c7 == '\0')) {
        DAT_003fbac2 = 1;
        DAT_003fbad6 = '\x03';
        _DAT_003fb824 = 0xffffffff;
      }
      else {
        FUN_001e1ccc(0x10);
      }
      DAT_003fbac0 = DAT_003fbac0 | 0x10;
      return;
    }
  }
  FUN_001e1ccc(0x11);
  DAT_003fbac0 = DAT_003fbac0 | 0x10;
                    /* WARNING: Read-only address (ram,0x003fb9c2) is written */
                    /* WARNING: Read-only address (ram,0x003fb9c3) is written */
                    /* WARNING: Read-only address (ram,0x003fb9c5) is written */
                    /* WARNING: Read-only address (ram,0x003fb9c6) is written */
                    /* WARNING: Read-only address (ram,0x003fb9c7) is written */
  return;
}

