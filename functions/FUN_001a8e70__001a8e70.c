/*
 * Program: n42.bin
 * Function: FUN_001a8e70
 * Entry: 001a8e70
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a8e70(void)

{
  uint uVar1;
  
  _DAT_003fbb2c = _DAT_003fbb78;
  _DAT_003fbb30 = _DAT_003fbb7c;
  uVar1 = FUN_00109650(*_DAT_003fba9c,_DAT_003fff88,0);
  if (uVar1 < _DAT_003fff88) {
    _DAT_003fbb34 = 1;
    DAT_003fbb6c = 1;
    FUN_00109630(*_DAT_003fba9c,&UNK_003fbb74);
  }
  else {
    FUN_001095f0(*_DAT_003fba9c,_DAT_003fbb2c,1);
    _DAT_003fbb2c = _DAT_003fbb2c + 1;
    _DAT_003fbb30 = _DAT_003fbb30 + -1;
  }
  return;
}

