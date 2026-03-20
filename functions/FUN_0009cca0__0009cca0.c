/*
 * Program: n42.bin
 * Function: FUN_0009cca0
 * Entry: 0009cca0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009cca0(void)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  _DAT_003fa17a = 0;
  _DAT_003fa180 = 0;
  uVar3 = 0;
  do {
    uVar2 = *(ushort *)((uint)uVar3 * 4 + 0xec00);
    if (uVar2 == 0) {
      (*(code *)&SUB_00faca3c)(0x15e);
    }
    if ((uVar2 & 0x1f) != 0) {
      (*(code *)&SUB_00faca3c)(0x15e);
    }
    if (0xff < (uint)((int)(uint)uVar2 >> 5)) {
      (*(code *)&SUB_00faca3c)(0x15e);
    }
    bVar1 = *(byte *)((uint)uVar3 * 4 + 0xec02);
    if ((bVar1 & 1) == 0) {
      if (((bVar1 & 2) != 0) && ((bVar1 & 0x40) == 0)) {
        _DAT_003fa180 = _DAT_003fa180 + 1;
      }
    }
    else {
      if ((bVar1 & 0x40) == 0) {
        _DAT_003fa17a = _DAT_003fa17a + 1;
      }
      if (_DAT_003fa180 != 0) {
        (*(code *)&SUB_00faca3c)(0x15e);
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 == 0);
  return;
}

