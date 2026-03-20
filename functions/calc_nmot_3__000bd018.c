/*
 * Program: n42.bin
 * Function: calc_nmot_3
 * Entry: 000bd018
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void calc_nmot_3(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (0x1d4c0000 / tseg_l) * 0x271 >> 8;
  if (39999 < uVar2) {
    uVar2 = 40000;
  }
  nmot_w = (word)uVar2;
  _nmot_f = (float)((double)CONCAT44(0x43300000,uVar2 & 0xffff) - (double)_DAT_0001bdf8) *
            _DAT_0001bdfc;
  if ((nmotllfil < 0x96) || ((uint)nmotll << 1 < 0x12d)) {
    if (nmotllfil < nmotll) {
      iVar1 = 1;
    }
    else {
      iVar1 = 2;
    }
    FUN_000b2550(&DAT_003faa80,nmotll,iVar1 << 5);
    nmotllfil = (byte)((ushort)_DAT_003faa80 >> 8);
  }
  return;
}

