/*
 * Program: n42.bin
 * Function: FUN_0017ee44
 * Entry: 0017ee44
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0017ee44(void)

{
  uint uVar1;
  
  DAT_005b91e5 = func_0xff2196d0(&DAT_001d2878,nmot,DAT_005b91e9);
  DAT_005b91eb = func_0xff21984c(0x1d28b6,ub_w,DAT_005b96aa);
  uVar1 = ((uint)DAT_005b91eb << 8) / (uint)DAT_005b91e5;
  if (uVar1 < 0x100) {
    DAT_003fb6e0 = (undefined)uVar1;
  }
  else {
    DAT_003fb6e0 = 0xff;
  }
  return;
}

