/*
 * Program: n42.bin
 * Function: FUN_00100620
 * Entry: 00100620
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00100620(void)

{
  uint uVar1;
  uint uVar2;
  
  if ((_DAT_003fb988 == 3) || (_DAT_003fb988 == 4)) {
    _DAT_003fb988 = 4;
    uVar1 = (**(code **)(&DAT_005bc81c + (uint)(byte)(&DAT_003f9f30)[DAT_003fb983] * 0x20))();
    uVar2 = (uint)_DAT_003fb984;
    _DAT_003fb984 = (ushort)(uVar1 | uVar2);
    DAT_003fb983 = DAT_003fb983 + 1;
    if (DAT_003fb983 == DAT_003fb982) {
      if (((uVar1 | uVar2) >> 8 & 1) == 0) {
        _DAT_003fb988 = 0;
        _DAT_003fb98c = _DAT_003fb984;
      }
      else {
        _DAT_003fb984 = 0;
        DAT_003fb983 = 0;
      }
    }
  }
  return;
}

