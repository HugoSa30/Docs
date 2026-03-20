/*
 * Program: n42.bin
 * Function: FUN_000edb1c
 * Entry: 000edb1c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000edb1c(void)

{
  int iVar1;
  uint uVar2;
  
  if (B_autget == '\0') {
    iVar1 = (esst_snm04dmuw1 >> 0x10) * 2;
    uVar2 = (uint)*(ushort *)(&DAT_001c1854 + iVar1) +
            ((int)((esst_snm04dmuw1 & 0xffff) *
                  ((uint)*(ushort *)(&DAT_001c1856 + iVar1) -
                  (uint)*(ushort *)(&DAT_001c1854 + iVar1))) >> 0x10);
  }
  else {
    iVar1 = (esst_snm04dmuw2 >> 0x10) * 2;
    uVar2 = (uint)*(ushort *)(&DAT_001c185c + iVar1) +
            ((int)((esst_snm04dmuw2 & 0xffff) *
                  ((uint)*(ushort *)(&DAT_001c185e + iVar1) -
                  (uint)*(ushort *)(&DAT_001c185c + iVar1))) >> 0x10);
  }
  slfofu_f = (dword)((float)((double)CONCAT44(0x43300000,uVar2 & 0xffff) - (double)_DAT_0001bdcc) *
                    _DAT_0001bdd0);
  if (B_autget == '\0') {
    iVar1 = (esst_snm04dmuw1 >> 0x10) * 2;
    uVar2 = (uint)*(ushort *)(&DAT_001c1844 + iVar1) +
            ((int)((esst_snm04dmuw1 & 0xffff) *
                  ((uint)*(ushort *)(&DAT_001c1846 + iVar1) -
                  (uint)*(ushort *)(&DAT_001c1844 + iVar1))) >> 0x10);
  }
  else {
    iVar1 = (esst_snm04dmuw2 >> 0x10) * 2;
    uVar2 = (uint)*(ushort *)(&DAT_001c184c + iVar1) +
            ((int)((esst_snm04dmuw2 & 0xffff) *
                  ((uint)*(ushort *)(&DAT_001c184e + iVar1) -
                  (uint)*(ushort *)(&DAT_001c184c + iVar1))) >> 0x10);
  }
  slfofo_f = (dword)((float)((double)CONCAT44(0x43300000,uVar2 & 0xffff) - (double)_DAT_0001bdcc) *
                    _DAT_0001bdd0);
  return;
}

