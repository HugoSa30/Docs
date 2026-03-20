/*
 * Program: n42.bin
 * Function: FUN_0009ba70
 * Entry: 0009ba70
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0009ba70(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint in_MSR;
  
  param_1 = param_1 * 4;
  uVar1 = (uint)(byte)(&DAT_00016af5)[param_1];
  if (param_2 != 0) {
    param_3 = (uint)(param_3 == 0);
  }
  if (_DAT_003fa10c == 0) {
    _DAT_003fa110 = in_MSR >> 0xf & 1;
  }
  _DAT_003fa10c = _DAT_003fa10c + 1;
  if (param_3 == 0) {
    *(uint *)(&DAT_003fa49c + uVar1 * 4) =
         *(uint *)(&DAT_003fa49c + uVar1 * 4) & ~(1 << ((byte)(&DAT_00016af6)[param_1] & 0x3f));
  }
  else {
    *(uint *)(&DAT_003fa49c + uVar1 * 4) =
         *(uint *)(&DAT_003fa49c + uVar1 * 4) | 1 << ((byte)(&DAT_00016af6)[param_1] & 0x3f);
  }
  (**(code **)(uVar1 * 0x14 + 0x16ba4))
            (*(undefined4 *)(uVar1 * 0x14 + 0x16b98),*(undefined4 *)(&DAT_003fa444 + uVar1 * 4),
             *(undefined4 *)(&DAT_003fa49c + uVar1 * 4));
  _DAT_003fa10c = _DAT_003fa10c + -1;
  return 0;
}

