/*
 * Program: n42.bin
 * Function: FUN_000f518c
 * Entry: 000f518c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f518c(void)

{
  ushort uVar1;
  ushort uVar2;
  uint in_TBLr;
  int in_TBUr;
  
  if ((*(ushort *)(_DAT_003fc2e0 + 0x20) & 1) == 0) {
    return 0;
  }
  *(undefined2 *)(_DAT_003fc2e0 + 0x20) = 0xfffe;
  _DAT_003fc2b8 = in_TBUr * 0x6666 + (int)((ulonglong)in_TBLr * 0x6666 >> 0x20);
  _DAT_003fc2bc = _DAT_003fc2b8 * 0x10000 | in_TBLr * 0x6666 >> 0x10;
  _DAT_003fc2b8 = _DAT_003fc2b8 >> 0x10;
  if (DAT_003fc33a == '\0') {
    if ((short)*(ushort *)(_DAT_003fc2e8 + 8) < 0) {
      uVar2 = *(ushort *)(_DAT_003fc2e8 + 8) >> 8 & 0x7f;
      uVar1 = (ushort)DAT_003fc33d;
      DAT_003fc33d = (byte)uVar2;
      if ((uVar2 - uVar1 & 0xff) != 0) {
        if (uVar2 < 4) {
          if (uVar2 == 3) {
            FUN_000aff9c();
          }
          else if (uVar2 == 1) {
            _DAT_003fc2fc = 4;
            _DAT_003fc2f8 = 4;
            if (*(code **)(_DAT_003fc2c0 + 4) != (code *)0x0) {
              (**(code **)(_DAT_003fc2c0 + 4))(3,1,0,0);
            }
          }
          else if ((uVar2 == 2) && (_DAT_003fc2f8 < 5)) {
            _DAT_003fc2fc = 5;
            _DAT_003fc2f8 = 5;
            if (*(code **)(_DAT_003fc2c0 + 4) != (code *)0x0) {
              (**(code **)(_DAT_003fc2c0 + 4))(3,2,0,0);
            }
          }
        }
        else if (uVar2 == 4) {
          FUN_000b0050();
        }
        else if (uVar2 == 5) {
          FUN_000b0050();
          (*(code *)&SUB_00fae824)();
        }
      }
    }
    else {
      (*(code *)&SUB_00faea34)();
    }
  }
  (*_DAT_003fc2c4)();
  uVar1 = (*(ushort *)(_DAT_003fc2e8 + 0xc) >> 8) - (ushort)DAT_003fc33b & 0xff;
  DAT_003fc33b = (byte)(*(ushort *)(_DAT_003fc2e8 + 0xc) >> 8);
  if (0x77 < uVar1) {
    (*(code *)&SUB_00064fe0)();
    uVar1 = uVar1 + 0x88 & 0xff;
  }
  if (0x31 < uVar1) {
    (*(code *)&SUB_00064ea4)();
    uVar1 = uVar1 + 0xce & 0xff;
  }
  if (uVar1 != 0) {
    if (6 < uVar1) {
      (*(code *)&SUB_00064d5c)();
      while (uVar1 = uVar1 + 0xf9 & 0xff, 6 < uVar1) {
        (*(code *)&SUB_00fadcf8)(0x32,0);
      }
      if (uVar1 == 0) {
        return 1;
      }
    }
    if (*(code **)(_DAT_003fc2c0 + 4) != (code *)0x0) {
      (**(code **)(_DAT_003fc2c0 + 4))(3,0xb,0,0);
    }
    while (uVar1 = uVar1 + 0xff & 0xff, uVar1 != 0) {
      if (*(code **)(_DAT_003fc2c0 + 4) != (code *)0x0) {
        (**(code **)(_DAT_003fc2c0 + 4))(3,0xb,0,0);
      }
    }
  }
  return 1;
}

