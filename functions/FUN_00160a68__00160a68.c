/*
 * Program: n42.bin
 * Function: FUN_00160a68
 * Entry: 00160a68
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00160a68(void)

{
  uint uVar1;
  
  if ((DAT_005b961a & 0x40) != 0) {
    uVar1 = func_0xff217f20(_DAT_001c1bfa,tavvkm_w,DAT_005b8188,_DAT_005b8188 & 0xffff);
    DAT_005b8188 = (word)(uVar1 >> 0x10);
    talsuf_w = DAT_005b8188;
    _DAT_005b8188 = uVar1;
    uVar1 = func_0xff217f20(_DAT_001c1bfa,tavvkm2_w,DAT_005b81a0,_DAT_005b81a0 & 0xffff);
    DAT_005b81a0 = (word)(uVar1 >> 0x10);
    talsuf2_w = DAT_005b81a0;
    _DAT_005b81a0 = uVar1;
  }
  return;
}

