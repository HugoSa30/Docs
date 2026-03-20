/*
 * Program: n42.bin
 * Function: FUN_0018fc20
 * Entry: 0018fc20
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x0018fd48) */
/* WARNING: Removing unreachable block (ram,0x0018fc88) */
/* WARNING: Removing unreachable block (ram,0x0018fcc4) */
/* WARNING: Removing unreachable block (ram,0x0018fd84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018fc20(void)

{
  uint uVar1;
  
  padlsu_w = func_0xff2189bc(&DAT_001d0e54,msabg_w);
  if (B_hag == '\0') {
    uVar1 = (uint)_PUELSU + (uint)padlsu_w;
    if (0xffff < uVar1) {
      uVar1 = 0xffff;
    }
    palsu_w = (word)uVar1;
  }
  else {
    uVar1 = (uint)pu_w + (uint)padlsu_w;
    if (0xffff < uVar1) {
      uVar1 = 0xffff;
    }
    palsu_w = (word)uVar1;
  }
  _DAT_003faffa = func_0xff2189bc(&DAT_001c79d4,palsu_w);
  padlsu2_w = func_0xff2189bc(0x1d0e6e,msabg2_w);
  if (B_hag == '\0') {
    uVar1 = (uint)_PUELSU + (uint)padlsu2_w;
    if (0xffff < uVar1) {
      uVar1 = 0xffff;
    }
    palsu2_w = (word)uVar1;
  }
  else {
    uVar1 = (uint)pu_w + (uint)padlsu2_w;
    if (0xffff < uVar1) {
      uVar1 = 0xffff;
    }
    palsu2_w = (word)uVar1;
  }
  _DAT_003fb00e = func_0xff2189bc(&DAT_001c79d4,palsu2_w);
  return;
}

