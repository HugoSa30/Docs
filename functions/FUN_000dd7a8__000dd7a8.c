/*
 * Program: n42.bin
 * Function: FUN_000dd7a8
 * Entry: 000dd7a8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000dd8e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000dd7a8(void)

{
  uint uVar1;
  
  if (DAT_003fc12a == '\0') {
    uVar1 = calc_vanos_optimal(&DAT_001c9a00,DAT_001c0fa8,esst_swp08opub,esst_snm08opub);
  }
  else {
    uVar1 = calc_vanos_optimal(&DAT_001c9a40,DAT_001c0fa8,esst_swp08opub,esst_snm08opub);
  }
  if (((B_fgr != '\0') || (DAT_003fc124 != '\0')) && ((uVar1 & 0xff) < (uint)MDIMX)) {
    uVar1 = (uint)MDIMX;
  }
  DAT_005b91b0 = (undefined)uVar1;
  if ((uVar1 & 0xff) << 8 < (uint)DAT_005b95e8) {
    DAT_005b95e8 = FUN_000a7fe8(_DAT_001c9ad0,uVar1 & 0xff);
  }
  else {
    DAT_005b95e8 = (ushort)((uVar1 & 0xff) << 8);
  }
  DAT_005b9e08 = FUN_000ab0e8(&DAT_001c9ac4,DAT_005b91b0);
  DAT_005b91af = calc_vanos_optimal(&DAT_001c9a80,DAT_001c0fa8,DAT_005b9e08,esst_snm08opub);
  uVar1 = (uint)DAT_005b95e8 + (uint)DAT_005b91af * 0x100;
  if (0xffff < uVar1) {
    uVar1 = 0xffff;
  }
  miszul_w = (word)uVar1;
  if ((uint)MDIMX << 8 < (uVar1 & 0xffff)) {
    miszul_w = (ushort)MDIMX << 8;
  }
  return;
}

