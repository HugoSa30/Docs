/*
 * Program: n42.bin
 * Function: FUN_00091d10
 * Entry: 00091d10
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00091d10(void)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined uVar6;
  uint in_TBLr;
  
  if (_DAT_003f9e34 < in_TBLr) {
    uVar4 = in_TBLr - _DAT_003f9e34;
  }
  else {
    uVar4 = _DAT_003f9e34 - ((in_TBLr == 0) + 1);
  }
  if ((uVar4 < 0x17d7841) && (DAT_003fa0f2 != '\x01')) {
    DAT_003f9e31 = 0;
    uVar6 = 0x37;
  }
  else if (DAT_003f9f26 < 2) {
    DAT_003f9e31 = 0;
    uVar6 = 0x10;
  }
  else {
    bVar1 = *_DAT_003f9f18;
    if ((bVar1 & 1) == 0) {
      if ((DAT_003f9f26 < 5) && (DAT_003fa0f2 != '\x01')) {
        DAT_003f9e31 = 0;
        uVar6 = 0x10;
        goto LAB_0009201c;
      }
      if (DAT_003f9e31 != '\0') {
        DAT_003f9e31 = 0;
        if (DAT_003fa0f2 != '\0') {
          DAT_003f9e30 = '\x01';
          *_DAT_003f9f1c = bVar1;
          _DAT_003f9f1c[1] = 0x34;
          uVar5 = 2;
          goto LAB_00091ee8;
        }
        uVar4 = DAT_003fa0d4 - 0x3c;
        if ((uVar4 >> 0x1f | ((uint)(byte)((5 < (int)uVar4) << 2) << 8) >> 10) == 0) {
          cVar3 = FUN_00091c7c(DAT_003fa0d4 + 0xc4 & 0xff,DAT_003fa0d5,_DAT_003fa0d8,
                               (uint)_DAT_003f9f18[1] << 0x18 | (uint)_DAT_003f9f18[2] << 0x10 |
                               (uint)_DAT_003f9f18[3] << 8 | (uint)_DAT_003f9f18[4]);
          if (cVar3 == '\x01') {
            DAT_003f9e30 = '\x01';
            *_DAT_003f9f1c = bVar1;
            _DAT_003f9f1c[1] = 0x34;
            uVar5 = 2;
            goto LAB_00091fa0;
          }
          uVar6 = 0x33;
          _DAT_003f9e34 = in_TBLr;
        }
        else {
          uVar6 = 0x33;
          _DAT_003f9e34 = in_TBLr;
        }
        goto LAB_0009201c;
      }
      uVar6 = 0x10;
    }
    else {
      if ((bVar1 & 1) == 1) {
        DAT_003f9e31 = 1;
        if (DAT_003f9e30 != '\0') {
          DAT_003fa0d5 = _DAT_003f9f18[1];
          _DAT_003fa0d8 = 0;
          *_DAT_003f9f1c = bVar1;
          _DAT_003f9f1c[1] = 0;
          _DAT_003f9f1c[2] = 0;
          _DAT_003f9f1c[3] = 0;
          _DAT_003f9f1c[4] = 0;
          uVar5 = 5;
LAB_00091fa0:
          FUN_00095b8c(10,uVar5);
          return;
        }
        DAT_003fa0d4 = (byte)((int)(*_DAT_003f9f18 + 1) >> 1);
        do {
          do {
            iVar2 = FUN_000923e8();
            uVar4 = FUN_000923e8();
            uVar4 = iVar2 << 0x10 | uVar4 & 0xffff;
          } while (uVar4 == _DAT_003fa0d8);
        } while ((iVar2 << 0x10 & 0xff000000U) == 0);
        DAT_003fa0d5 = _DAT_003f9f18[1];
        _DAT_003fa0d8 = uVar4;
        *_DAT_003f9f1c = bVar1;
        uVar4 = _DAT_003fa0d8;
        _DAT_003f9f1c[1] = (byte)(_DAT_003fa0d8 >> 0x18);
        _DAT_003f9f1c[2] = (byte)(uVar4 >> 0x10);
        _DAT_003f9f1c[3] = (byte)(uVar4 >> 8);
        _DAT_003f9f1c[4] = (byte)uVar4;
        uVar5 = 5;
LAB_00091ee8:
        FUN_00095b8c(10,uVar5);
        return;
      }
      uVar6 = 0x11;
    }
    DAT_003f9e31 = 0;
  }
LAB_0009201c:
  DAT_003f9e30 = 0;
  *_DAT_003f9f20 = uVar6;
  FUN_00095b8c(0x14,1);
  return;
}

