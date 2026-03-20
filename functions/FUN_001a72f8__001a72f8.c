/*
 * Program: n42.bin
 * Function: FUN_001a72f8
 * Entry: 001a72f8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001a72f8(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int in_TBLr;
  
  uVar5 = 0;
  if (_DAT_003fb9c4 == 0) {
    puVar3 = *(undefined **)(undefined4 *)*_DAT_003fba9c;
    if (puVar3 == &DAT_00305000) {
      iVar1 = 1;
    }
    else {
      iVar1 = 3;
    }
    if (((int)(uint)(byte)puVar3[0x14] >> iVar1 & 1U) != 0) {
      FUN_001091a4((undefined4 *)*_DAT_003fba9c,*(undefined4 *)(_DAT_003fbb48 + 0x18),1);
      FUN_001091a4(*_DAT_003fba9c,*(undefined4 *)(_DAT_003fbb48 + 0x1c),1);
      _DAT_003fb9c4 = 1;
    }
  }
  else if (_DAT_003fb9c4 == 2) {
    if (_DAT_003fb9c8 == 0) {
      iVar1 = FUN_001a71f8(_DAT_003fb9dc,0);
      if ((iVar1 == 0) || (DAT_003fb9c0 == 0)) {
        FUN_001a713c();
        return 0;
      }
      DAT_003fb9c0 = DAT_003fb9c0 - 1;
    }
    else {
      if (_DAT_003fb9c8 != 1) {
        if (_DAT_003fb9c8 == 2) {
          if (*(undefined **)*_DAT_003fba9c == &DAT_00305000) {
            iVar1 = 1;
          }
          else {
            iVar1 = 3;
          }
          if (((int)(uint)(byte)(*(undefined **)*_DAT_003fba9c)[0x14] >> iVar1 & 1U) == 0) {
            return 0;
          }
          if ((uint)(in_TBLr - _DAT_003fb9cc) <
              (2000000 / ((1000000000 / _DAT_00f07e68) / 100)) * 9 +
              (2000000 / ((1000000000 / _DAT_00f07e68) / 100) >> 2)) {
            return 0;
          }
          uVar2 = (uint)DAT_003fb9c0;
          if (uVar2 < 8) {
            uVar4 = (uint)DAT_003f9b7a;
            do {
              uVar4 = uVar4 | 1 << (uVar2 & 0x3f);
              uVar2 = uVar2 + 1;
            } while ((uVar2 & 0xff) < 8);
            DAT_003fb9c0 = (byte)uVar2;
            DAT_003f9b7a = (byte)uVar4;
          }
          _DAT_003fb9c8 = 3;
          return 0;
        }
        if (_DAT_003fb9c8 != 3) {
          return 0;
        }
        puVar3 = *(undefined **)(undefined4 *)*_DAT_003fba9c;
        if (puVar3 == &DAT_00305000) {
          iVar1 = 1;
        }
        else {
          iVar1 = 3;
        }
        if (((int)(uint)(byte)puVar3[0x14] >> iVar1 & 1U) != 0) {
          uVar4 = (1000000000 / _DAT_00f07e68) / 100;
          uVar2 = 2000000 / uVar4;
          if ((uint)(in_TBLr - _DAT_003fb9cc) < uVar2 * 10) {
            return 0;
          }
          if ((uint)(in_TBLr - _DAT_003fb9cc) <= (uVar2 + 150000 / uVar4) * 10) {
            FUN_001091a4((undefined4 *)*_DAT_003fba9c,*(undefined4 *)(_DAT_003fbb48 + 0x18),0);
            FUN_001091a4(*_DAT_003fba9c,*(undefined4 *)(_DAT_003fbb48 + 0x1c),0);
            _DAT_003fb9c4 = 3;
            return 0;
          }
          FUN_001a713c();
          return 0;
        }
        FUN_001a713c();
        return 0;
      }
      iVar1 = FUN_001a71f8(_DAT_003fb9d8,1);
      if ((iVar1 == 0) || (iVar1 = FUN_001a71f8(_DAT_003fb9dc,0), iVar1 == 0)) {
        FUN_001a713c();
        return 0;
      }
    }
    FUN_001091a4(*_DAT_003fba9c,*(undefined4 *)(_DAT_003fbb48 + 0x18),1);
    _DAT_003fb9c8 = 2;
  }
  else if (_DAT_003fb9c4 == 3) {
    uVar5 = 1;
  }
  return uVar5;
}

