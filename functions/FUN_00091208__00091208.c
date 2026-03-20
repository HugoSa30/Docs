/*
 * Program: n42.bin
 * Function: FUN_00091208
 * Entry: 00091208
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00091208(void)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  
  bVar1 = false;
  if ((_DAT_003f9f28 & 0x80) == 0) {
    if (DAT_003f9f36 == '\0') {
      cVar3 = FUN_0009687c();
      if (cVar3 != '\0') {
        DAT_003f9f36 = '\x01';
      }
    }
    else {
      if (DAT_003f9f36 == '\x01') {
        cVar3 = FUN_00091498();
        if (cVar3 != '\x01') {
          return;
        }
        DAT_003f9f36 = '\x10';
        _DAT_003f9f30 = -(ushort)DAT_003f9f35;
      }
      else if (DAT_003f9f36 != '\x10') {
        if (DAT_003f9f36 != '\x11') {
          return;
        }
        _DAT_003f9f30 = _DAT_003f9f30 + DAT_003f9f35;
        uVar2 = FUN_0009678c();
        if ((0x1a < _DAT_003f9f30) &&
           ((cVar3 = FUN_0009687c(), cVar3 == '\0' || ((uVar2 & 0x400000) != 0)))) {
          bVar1 = true;
          DAT_003f9f36 = '\0';
          FUN_000914f0();
        }
        if ((uint)_DAT_003f9f30 + (uint)DAT_003f9f35 * 2 < 0x30) {
          return;
        }
        if (bVar1) {
          return;
        }
        FUN_0009214c();
        FUN_000926a8(1,1);
        return;
      }
      _DAT_003f9f30 = _DAT_003f9f30 + DAT_003f9f35;
      uVar2 = FUN_0009678c();
      if ((uint)_DAT_003f9f30 + (uint)DAT_003f9f35 < 0x18) {
        cVar3 = FUN_0009687c();
        if ((cVar3 != '\0') ||
           (((uVar2 & 0x400000) != 0 && (((uVar2 & 0x420000) != 0x420000 || ((uVar2 & 0xff) != 0))))
           )) {
          DAT_003f9f36 = '\0';
          FUN_000914f0();
        }
      }
      else {
        DAT_003f9f36 = '\x11';
      }
    }
  }
  return;
}

