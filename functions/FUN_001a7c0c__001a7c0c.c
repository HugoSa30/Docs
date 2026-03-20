/*
 * Program: n42.bin
 * Function: FUN_001a7c0c
 * Entry: 001a7c0c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a7c0c(int param_1,undefined param_2,undefined param_3,undefined param_4,char param_5,
                 char param_6)

{
  uint uVar1;
  
  _DAT_003fba0c = 0xfa7b0c;
  _DAT_003fba10 = 0xfa7a9c;
  _DAT_003fba14 = 0xfa7bb0;
  DAT_003fb9e8 = 0;
  DAT_003fb9fc = param_2;
  DAT_003fb9fd = param_3;
  DAT_003fb9fe = param_4;
  DAT_003fb9ff = param_5;
  DAT_003fba00 = param_6;
  _DAT_003fba04 = param_1;
  FUN_00108320();
  _DAT_003fba08 = 1;
  if (DAT_003fba00 == '\0') {
    _DAT_003fb9e4 = 0;
  }
  else {
    uVar1 = *(uint *)(*(int *)(_DAT_003fba04 + 4) + 0x28);
    _DAT_003fb9e4 = (ushort)uVar1;
    if ((uint)(_DAT_003fb9e0[1] - *_DAT_003fb9e0) <= (uVar1 & 0xffff)) {
      do {
        uVar1 = uVar1 >> 1 & 0x7fff;
      } while ((uint)(_DAT_003fb9e0[1] - *_DAT_003fb9e0) <= uVar1);
      _DAT_003fb9e4 = (ushort)uVar1;
    }
    _DAT_003fb9e4 = _DAT_003fb9e4 >> 1;
  }
  FUN_00109630(_DAT_003fba04,&DAT_003fb9e6,1);
  if (DAT_003fb9ff == '\0') {
    _DAT_003fb9f0 = 9;
    _DAT_003fb9f8 = 1;
    FUN_00109650(_DAT_003fba04,_DAT_003fb9e0[1]);
  }
  else {
    _DAT_003fb9f0 = 0;
    _DAT_003fb9f8 = 0;
    DAT_003fb9e7 = 0x55;
    FUN_00109650(_DAT_003fba04,*_DAT_003fb9e0 + (uint)_DAT_003fb9e4,1);
    _DAT_003fb9f4 = 1;
  }
  return;
}

