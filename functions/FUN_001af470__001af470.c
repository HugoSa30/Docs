/*
 * Program: n42.bin
 * Function: FUN_001af470
 * Entry: 001af470
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001af470(void)

{
  ushort uVar1;
  undefined4 uVar2;
  
  if ((_DAT_00300000 >> 10 & 1) == 0) {
    uVar2 = 2;
  }
  else {
    uVar1 = _DAT_00300000 & 0xfdff;
    if ((_DAT_00300000 >> 10 & 1) == 0) {
      _DAT_00300000 = uVar1 | 0x200;
      if (_DAT_003fc368 == 0) {
        if (_DAT_003fc364 != (code *)0x0) {
          (*_DAT_003fc364)(10,0x32,_DAT_003fc368 == 0);
        }
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      _DAT_00300000 = uVar1;
      if (_DAT_003fc364 != (code *)0x0) {
        (*_DAT_003fc364)(10,0x35,0);
      }
      uVar2 = 3;
    }
  }
  return uVar2;
}

