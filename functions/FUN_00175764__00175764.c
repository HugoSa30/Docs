/*
 * Program: n42.bin
 * Function: FUN_00175764
 * Entry: 00175764
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00175764(void)

{
  uint uVar1;
  
  if ((uint)(DLRUBSOLL >> 1) < (uint)ub) {
    uVar1 = ((uint)DLRUBSOLL << 7) / (uint)ub;
  }
  else {
    uVar1 = 0xff;
  }
  _DAT_003fb09c = func_0xff217fe8((uint)ZKUBDLR << 7,uVar1 & 0xff,_DAT_003fb09c);
  if ((B_st == '\0') || (B_nmot == '\0')) {
    dlrkomp = (undefined)((uint)DLRKREIS * (uint)_DAT_003fb09c >> 0xf);
  }
  else {
    dlrkomp = (undefined)((uint)DLRKREISST * (uint)_DAT_003fb09c >> 0xf);
  }
  return;
}

