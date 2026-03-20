/*
 * Program: n42.bin
 * Function: FUN_0009c3cc
 * Entry: 0009c3cc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0009c3cc(int param_1,int param_2,uint param_3)

{
  uint in_MSR;
  
  if (param_2 != 0) {
    param_3 = (uint)(param_3 == 0);
  }
  if (_DAT_003fa10c == 0) {
    _DAT_003fa110 = in_MSR >> 0xf & 1;
  }
  _DAT_003fa10c = _DAT_003fa10c + 1;
  if (param_3 == 0) {
    *(uint *)(&DAT_003fa49c + (uint)(byte)(&DAT_00016af5)[param_1 * 4] * 4) =
         *(uint *)(&DAT_003fa49c + (uint)(byte)(&DAT_00016af5)[param_1 * 4] * 4) &
         ~(1 << ((byte)(&DAT_00016af6)[param_1 * 4] & 0x3f));
  }
  else {
    *(uint *)(&DAT_003fa49c + (uint)(byte)(&DAT_00016af5)[param_1 * 4] * 4) =
         *(uint *)(&DAT_003fa49c + (uint)(byte)(&DAT_00016af5)[param_1 * 4] * 4) |
         1 << ((byte)(&DAT_00016af6)[param_1 * 4] & 0x3f);
  }
  _DAT_003fa10c = _DAT_003fa10c + -1;
  return 0;
}

