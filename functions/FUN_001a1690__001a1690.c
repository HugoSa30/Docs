/*
 * Program: n42.bin
 * Function: FUN_001a1690
 * Entry: 001a1690
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a1690(void)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined uVar7;
  
  puVar3 = _DAT_003fbc84;
  iVar2 = _DAT_003fbc7c;
  bVar1 = *(byte *)(_DAT_003fbc7c + 2);
  uVar6 = (uint)bVar1;
  if (((uint)DAT_00fa9cae < uVar6 + DAT_003fbc54) ||
     (((*(uint *)(_DAT_003fbc7c + 4) & 1) != 0 && (uVar6 != 1)))) {
    _DAT_003fbc84[1] = 0x32;
    uVar7 = 0xff;
  }
  else {
    _DAT_003fbc84[1] = 0;
    iVar4 = FUN_00124bdc(*(undefined4 *)(iVar2 + 4),*(undefined *)(iVar2 + 3),uVar6,puVar3 + 1);
    if (iVar4 == 0) {
      if (puVar3[1] == '\0') {
        puVar5 = _DAT_003fbc50 + 1;
        *_DAT_003fbc50 = *(undefined4 *)(iVar2 + 4);
        _DAT_003fbc50 = puVar5;
        if ((int)(uint)DAT_003fbc54 <= (int)(DAT_00fa9cae - 1)) {
          *_DAT_003fbc48 = DAT_003fbc54 + bVar1;
          _DAT_003fbc48 = _DAT_003fbc48 + 1;
        }
        if (_DAT_003fbc48 <= _DAT_003fbc4c) {
          do {
            *_DAT_003fbc48 = '\0';
            _DAT_003fbc48 = _DAT_003fbc48 + 1;
          } while (_DAT_003fbc48 <= _DAT_003fbc4c);
        }
      }
      uVar7 = 0xff;
    }
    else {
      uVar7 = 0x16;
    }
  }
  *puVar3 = uVar7;
  return;
}

