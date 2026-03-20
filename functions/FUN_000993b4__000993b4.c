/*
 * Program: n42.bin
 * Function: FUN_000993b4
 * Entry: 000993b4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000993b4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (_DAT_003f9a40 == 0) {
    if (DAT_001ce861 == '\0') {
      return;
    }
    _DAT_002fc000 = _DAT_002fc000 & 0xff99ffff | 0x640000;
    _DAT_003f9a40 = 1;
  }
  else if (_DAT_003f9a40 != 1) {
    if (_DAT_003f9a40 != 2) {
      DAT_005b8d4a = 2;
      return;
    }
    if (DAT_001ce861 != '\0') {
      _DAT_003f9a40 = 1;
      return;
    }
    _DAT_002fc000 = _DAT_002fc000 & 0xff99ffff | 0x420000;
    _DAT_003f9a40 = 0;
    return;
  }
  if (DAT_001ce861 == '\0') {
    _DAT_002fc000 = _DAT_002fc000 & 0xff99ffff | 0x420000;
    _DAT_003f9a40 = 0;
    return;
  }
  if ((int)DAT_001ce860 == (uint)DAT_003fa108) {
    return;
  }
  DAT_005b8d4a = 0;
  iVar1 = (uint)_DAT_001ce862 * 0x10000 + (uint)_DAT_001ce864;
  iVar8 = (uint)_DAT_001ce866 * 0x10000 + (uint)_DAT_001ce868;
  iVar7 = (uint)_DAT_001ce86a * 0x10000 + (uint)_DAT_001ce86c;
  iVar5 = (uint)_DAT_001ce86e * 0x10000 + (uint)_DAT_001ce870;
  iVar6 = (uint)_DAT_001ce876 * 0x10000 + (uint)_DAT_001ce878;
  iVar3 = (uint)_DAT_001ce87a * 0x10000 + (uint)_DAT_001ce87c;
  iVar2 = (uint)_DAT_001ce890 * 0x10000 + (uint)_DAT_001ce892;
  iVar4 = (uint)_DAT_001ce894 * 0x10000 + (uint)_DAT_001ce896;
  if (DAT_001ce872 < '\x04') {
    if (DAT_001ce872 == '\x03') {
      func_0x01070920(4,iVar6,(int)_DAT_001ce888,iVar2,(int)_DAT_001ce884,(int)_DAT_001ce87e,
                      (int)_DAT_001ce88c);
      func_0x01070920(5,iVar3,(int)_DAT_001ce88a,iVar4,(int)_DAT_001ce886,(int)_DAT_001ce880,
                      (int)_DAT_001ce88e);
      _DAT_003f9a40 = 2;
      DAT_003fa108 = DAT_001ce860;
      return;
    }
    if (DAT_001ce872 == '\0') {
      _DAT_003f9a40 = 2;
      DAT_003fa108 = DAT_001ce860;
      DAT_005b8d4a = 0;
      return;
    }
    if (DAT_001ce872 == '\x01') {
      func_0x01070350(0,iVar1);
      func_0x01070350(1,iVar8);
      func_0x01070350(2,iVar7);
      func_0x01070350(3,iVar5);
      _DAT_003f9a40 = 2;
      DAT_003fa108 = DAT_001ce860;
      return;
    }
    if (DAT_001ce872 == '\x02') {
      if (_DAT_001ce874 == 0xf) {
        func_0x010704c4(0,iVar1,iVar8);
        func_0x010704c4(2,iVar7,iVar5);
        _DAT_003f9a40 = 2;
        DAT_003fa108 = DAT_001ce860;
        return;
      }
      if (_DAT_001ce874 == 0x10) {
        func_0x010704c4(1,iVar1,iVar8);
        func_0x010704c4(3,iVar7,iVar5);
        _DAT_003f9a40 = 2;
        DAT_003fa108 = DAT_001ce860;
        return;
      }
      if (_DAT_001ce874 == 0x11) {
        func_0x010704c4(0,iVar1,iVar8);
        func_0x010704c4(3,iVar7,iVar5);
        _DAT_003f9a40 = 2;
        DAT_003fa108 = DAT_001ce860;
        return;
      }
      _DAT_003f9a40 = 2;
      DAT_003fa108 = DAT_001ce860;
      DAT_005b8d4a = 3;
      return;
    }
  }
  else {
    if (DAT_001ce872 == '\x04') {
      func_0x01070b8c(iVar6,iVar3,(int)_DAT_001ce888,iVar2,iVar4,(int)_DAT_001ce884,
                      (int)_DAT_001ce874,(int)_DAT_001ce882);
      _DAT_003f9a40 = 2;
      DAT_003fa108 = DAT_001ce860;
      return;
    }
    if (DAT_001ce872 == '\x05') {
      func_0x01070db8(iVar6,(int)_DAT_001ce888,iVar2,iVar4,(int)_DAT_001ce884,(int)_DAT_001ce882,
                      (int)_DAT_001ce88c);
      _DAT_003f9a40 = 2;
      DAT_003fa108 = DAT_001ce860;
      return;
    }
  }
  DAT_005b8d4a = 1;
  DAT_003fa108 = DAT_001ce860;
  _DAT_003f9a40 = 2;
  return;
}

