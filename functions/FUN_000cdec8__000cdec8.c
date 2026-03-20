/*
 * Program: n42.bin
 * Function: FUN_000cdec8
 * Entry: 000cdec8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000cdec8(void)

{
  uint local_18 [2];
  undefined local_10 [16];
  
  DAT_003fbeab = 0;
  DAT_003fbeaf = 0;
  B_asc_reg = 0;
  DAT_005b8ff7 = 0xff;
  DAT_005b8ff8 = 0;
  DAT_005b8ff6 = 0xff;
  DAT_005b8ff5 = 0;
  vfzgv1_w = 0x1fff;
  DAT_003fbeae = 0;
  func_0x010339ac(0,local_18);
  local_18[0] = local_18[0] & 0xffffff00 | 0xff000000;
  func_0x010340a0(0,local_18);
  func_0x010339ac(1,local_18);
  local_18[0] = local_18[0] & 0xffff00 | 0xff0000;
  func_0x010340a0(1,local_18);
  local_10[0] = 6;
  func_0x01033f54(0,local_10);
  return;
}

