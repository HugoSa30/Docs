/*
 * Program: n42.bin
 * Function: FUN_000f2ba4
 * Entry: 000f2ba4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f2ba4(int param_1,undefined param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  uint in_MSR;
  char local_10;
  char local_f [7];
  
  (**(code **)(param_1 * 4 + 0x17058))(param_2,&local_10,local_f);
  bVar2 = 0x10;
  if (local_10 != '\0') {
    bVar2 = 0x11;
  }
  if (_DAT_003fa10c == 0) {
    _DAT_003fa110 = in_MSR >> 0xf & 1;
  }
  _DAT_003fa10c = _DAT_003fa10c + 1;
  bVar1 = *param_3;
  if ((local_f[0] != '\0') || (((bVar2 ^ bVar1) & 1) != 0)) {
    bVar2 = bVar2 | 2;
  }
  if ((bVar1 & 0x10) == 0) {
    *param_3 = bVar1 & 0xf0 | (bVar1 & 3) << 2 | bVar2;
  }
  else {
    *param_3 = bVar1 & 0xfe | bVar2;
  }
  _DAT_003fa10c = _DAT_003fa10c + -1;
  return;
}

