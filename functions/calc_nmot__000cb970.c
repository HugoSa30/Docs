/*
 * Program: n42.bin
 * Function: calc_nmot
 * Entry: 000cb970
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void calc_nmot(void)

{
  uint uVar1;
  
  if (B_nmin != '\0') {
    _nmot_f = _DAT_0001be00;
    nmot_w = 0;
  }
  if ((synstate < 3) && (B_nmin == '\0')) {
    _nmot_f = (float)((double)CONCAT44(0x43300000,(uint)nmot_w) - (double)_DAT_0001bdf8) *
              _DAT_0001bdfc;
  }
  nmot = (byte)(nmot_w / 0xa0);
  uVar1 = nmot_w / 0x28;
  if (0xfe < uVar1) {
    uVar1 = 0xff;
  }
  nmotll = (byte)uVar1;
  return;
}

