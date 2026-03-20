/*
 * Program: n42.bin
 * Function: FUN_001a7f74
 * Entry: 001a7f74
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_001a7f74(void)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  
  iVar4 = 0;
  if (_DAT_003fbbd0 == 0) {
    _DAT_003fbbdc =
         FUN_00108000(**(undefined4 **)(_DAT_003fbb84 + 0xc),
                      (*(undefined4 **)(_DAT_003fbb84 + 0xc))[3],&DAT_003fbbd4);
    iVar1 = FUN_0010e334(*(undefined4 *)(*(int *)(_DAT_003fbb84 + 0xc) + 0xc),_DAT_003fbbdc,
                         *(undefined2 *)(*(int *)(_DAT_003fbb84 + 0xc) + 0x10));
    if (iVar1 != 0) {
      _DAT_003fbbd0 = 1;
    }
  }
  else if (_DAT_003fbbd0 == 1) {
    iVar1 = FUN_001a72f8();
    if (iVar1 != 0) {
      uVar2 = FUN_001a71c0();
      cVar3 = FUN_00122d88();
      iVar1 = FUN_001a7df4(uVar2);
      if ((iVar1 == 0) && (cVar3 == '\0')) {
        if ((uVar2 & 0x80) == 0) {
          return 0;
        }
        iVar1 = FUN_001a7f38(uVar2);
        if (iVar1 == 0) {
          return 0;
        }
        uVar2 = uVar2 & 0x7f;
        iVar1 = FUN_001a7df4(uVar2);
        if (iVar1 == 0) {
          return 0;
        }
        if (*(char *)(_DAT_003fbb8c + (uint)DAT_003fbb90 * 0x14 + 1) != '\0') {
          return 0;
        }
      }
      iVar1 = FUN_0010dd00(*(undefined4 *)(_DAT_003fbb84 + 0xc));
      if (iVar1 != 0) {
        _4(*_DAT_003fba9c,&DAT_003fbbd4);
        _DAT_003fbaec = _DAT_003fbbd4;
        _DAT_003fbaf0 = _DAT_003fbbd8;
        _DAT_003fff9c = _DAT_003fbbdc;
        iVar4 = _DAT_003fbb8c + (uint)DAT_003fbb90 * 0x14;
        DAT_003fbd5d = *(char *)(iVar4 + 1);
        FUN_001a7c0c(*_DAT_003fba9c,uVar2,*(undefined *)(iVar4 + 9),*(undefined *)(iVar4 + 10),
                     DAT_003fbbe0,DAT_003fbd5d != '\0');
        _DAT_003fbbd0 = 2;
        iVar4 = 1;
      }
    }
  }
  else if (_DAT_003fbbd0 == 2) {
    iVar4 = FUN_001a7690();
    if (iVar4 == 0) {
      FUN_001a713c();
      _DAT_003fbbd0 = 1;
      FUN_0010df98();
    }
    else if (iVar4 == 2) {
      FUN_001a713c();
      FUN_0010dc28();
      _DAT_003fbbd0 = 1;
      DAT_003fbb98 = 1;
    }
  }
                    /* WARNING: Read-only address (ram,0x003fbbd4) is written */
                    /* WARNING: Read-only address (ram,0x003fbbd8) is written */
  return iVar4;
}

