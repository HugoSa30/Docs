/*
 * Program: n42.bin
 * Function: FUN_001ae824
 * Entry: 001ae824
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001ae824(void)

{
  ushort uVar1;
  int iVar2;
  char cVar4;
  undefined4 uVar3;
  
  iVar2 = _DAT_003fc2f0;
  DAT_003fc340 = '\0';
  _DAT_003fc342 = 0xffff;
  _DAT_003fc2fc = 9;
  _DAT_003fc2f8 = 9;
  uVar1 = *(ushort *)(_DAT_003fc2f4 + 8);
  DAT_003fc33f = (byte)(uVar1 >> 0xf);
  if ((short)uVar1 < 0) {
    uVar1 = uVar1 >> 8 & 0x7f;
    DAT_003fc33e = (undefined)uVar1;
    if (4 < uVar1) {
      DAT_003fc340 = '\x01';
    }
  }
  else {
    DAT_003fc340 = '\x01';
  }
  if (DAT_003fc340 == '\x01') {
    _DAT_003fc344 =
         (*(ushort *)(_DAT_003fc2e4 + 0xc) & 0xff) - (*(ushort *)(_DAT_003fc2f0 + 0xc) & 0xff);
    if (_DAT_003fc344 < 0) {
      _DAT_003fc344 = -_DAT_003fc344;
    }
    if ((int)_DAT_003fc344 - 5U < 0x6f) {
      _DAT_003fc342 = *(ushort *)(_DAT_003fc2e4 + 0xc) & 0xff;
      (*(code *)&SUB_00fadc34)(0,_DAT_003fc342);
      if ((*(ushort *)(iVar2 + 0xc) & 0xff) != (int)(short)_DAT_003fc342) {
        (*(code *)&SUB_00fadc34)(0,_DAT_003fc342);
      }
      cVar4 = (*(code *)&SUB_00065120)(1);
      if (cVar4 == '\x01') {
        *(undefined4 *)(_DAT_003fc2ec + 0x18) = 2;
      }
    }
    if (DAT_003fc336 == '\x01') {
      uVar3 = (*(code *)&SUB_00fb3178)(1);
      (*(code *)&SUB_00fb322c)(0,0,uVar3,1);
      DAT_003fc336 = '\0';
    }
    if (*(code **)(_DAT_003fc2c0 + 4) != (code *)0x0) {
      (**(code **)(_DAT_003fc2c0 + 4))(3,7,0,0);
    }
    uVar3 = 1;
  }
  else {
    (*(code *)&SUB_00fadcf8)(0x35,0);
    _DAT_003fc2fc = 2;
    _DAT_003fc2f8 = 2;
    uVar3 = 0;
  }
  return uVar3;
}

