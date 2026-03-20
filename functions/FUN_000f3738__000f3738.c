/*
 * Program: n42.bin
 * Function: FUN_000f3738
 * Entry: 000f3738
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f3738(uint *param_1)

{
  uint uVar1;
  uint in_MSR;
  
  if (_DAT_003fa10c == 0) {
    _DAT_003fa110 = in_MSR >> 0xf & 1;
  }
  _DAT_003fa10c = _DAT_003fa10c + 1;
  uVar1 = *param_1;
  if ((*(byte *)((int)param_1 + 0x22) & 1) == 0) {
    param_1[5] = 0;
    param_1[3] = (param_1[4] ^ param_1[1]) & uVar1;
  }
  else {
    param_1[6] = uVar1;
    param_1[5] = 0xffffffff;
    param_1[3] = uVar1;
  }
  param_1[4] = param_1[4] & ~uVar1 | param_1[1] & uVar1;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined *)((int)param_1 + 0x22) = 0;
  _DAT_003fa10c = _DAT_003fa10c + -1;
  return;
}

