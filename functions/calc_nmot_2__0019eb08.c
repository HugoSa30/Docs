/*
 * Program: n42.bin
 * Function: calc_nmot_2
 * Entry: 0019eb08
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void calc_nmot_2(void)

{
  uint uVar1;
  
  if (B_nmin != '\0') {
    _nmot_f = _DAT_0001be00;
    nmot_w = 0;
  }
  nmot = (byte)(nmot_w / 0xa0);
  uVar1 = nmot_w / 0x28;
  if (0xfe < uVar1) {
    uVar1 = 0xff;
  }
  nmotll = (byte)uVar1;
  return;
}

