/*
 * Program: n42.bin
 * Function: FUN_000d0840
 * Entry: 000d0840
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d0840(void)

{
  if ((uint)nmot * (uint)DAT_003fae0a < 0x8000) {
    DAT_005b90cd = (undefined)((int)((uint)nmot * (uint)DAT_003fae0a) >> 7);
  }
  else {
    DAT_005b90cd = 0xff;
  }
  if (DAT_005b8b77 == '\x01') {
    DAT_005b90cc = calc_value_from_x_y_2(&DAT_001c73c4,DAT_005b90cd,wdkba);
  }
  else if (DAT_005b8b77 == '\x02') {
    DAT_005b90cc = calc_value_from_x_y_2(&DAT_001c71fc,DAT_005b90cd,wdkba);
  }
  else if (DAT_005b8b77 == '\x03') {
    DAT_005b90cc = calc_value_from_x_y_2(&DAT_001c72e0,DAT_005b90cd,wdkba);
  }
  else {
    DAT_005b90cc = calc_value_from_x_y_2(&DAT_001c7118,DAT_005b90cd,wdkba);
  }
  DAT_005b90cb = calc_value_from_x_y_2(&DAT_001c7034,nmot,rl);
  _DAT_003fae08 = (ushort)DAT_005b90cc * (ushort)DAT_005b90cb;
  return;
}

