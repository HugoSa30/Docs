/*
 * Program: n42.bin
 * Function: FUN_00169b24
 * Entry: 00169b24
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00169b24(void)

{
  frhodk_w = func_0xff22181c(fpvdk_w,(uint)ftvdk << 8);
  if (B_hfmv == 0) {
    DAT_003fab9d = DAT_003fab9d & 0xf6 | 8;
  }
  else {
    DAT_003fab9d = (B_hfm & 1) << 3 | B_hfm & 1 | DAT_003fab9d & 0xf6;
  }
  DAT_003fab9d = DAT_003fab9d & 0xf9;
  return;
}

