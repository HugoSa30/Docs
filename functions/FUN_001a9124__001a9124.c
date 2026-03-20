/*
 * Program: n42.bin
 * Function: FUN_001a9124
 * Entry: 001a9124
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a9124(void)

{
  if ((*(ushort *)(*(int *)(*_DAT_003fba9c + 4) + 0x32) & 0xff) ==
      (ushort)*(byte *)(_DAT_003fbb2c + -1)) {
    if (_DAT_003fbb30 == 0) {
      DAT_003fbd5c = 1;
      FUN_0010e1b4();
      if (_DAT_003fbaac != 0) {
        if (_DAT_003fbb28 == 0) {
          DAT_003fbd59 = 1;
          _DAT_003fbaac = 1;
        }
        else {
          FUN_001a8f4c();
        }
      }
    }
    else {
      DAT_003fbd5c = 0;
      DAT_003fbd59 = 0;
      DAT_003fbd58 = 0;
      FUN_001095f0(*_DAT_003fba9c,_DAT_003fbb2c,1);
      _DAT_003fbb2c = _DAT_003fbb2c + 1;
      _DAT_003fbb30 = _DAT_003fbb30 + -1;
    }
  }
  else {
    FUN_001a8e70();
  }
  return;
}

