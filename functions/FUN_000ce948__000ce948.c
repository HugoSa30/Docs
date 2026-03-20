/*
 * Program: n42.bin
 * Function: FUN_000ce948
 * Entry: 000ce948
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000ce948(void)

{
  uint uVar1;
  
  esst_srl06zuub = FUN_000ab0e8(&KFZWVL_axis_y,rl);
  esst_srl12zuub = FUN_000ab3b0(&DAT_001c1054,rl,esst_srl12zuub);
  if ((S_ZNDRLP & 1) == 0) {
    esst_srl16zuub = FUN_000ab0e8(&DAT_001c1064,rl);
  }
  else {
    esst_srl16zuub = FUN_000ab0e8(&DAT_001c1064,rlp);
  }
  esst_sks06esub = FUN_000ab3b0(&DAT_001c0f7c,kstaa,esst_sks06esub);
  esst_srl12esub = FUN_000ab3b0(&DAT_001c1044,rl,esst_srl12esub);
  esst_san12esuw = FUN_000ab53c(&DAT_001c10aa,anztib_w,esst_san12esuw);
  esst_swp08opub = FUN_000ab3b0(&DAT_001c10a0,wped,esst_swp08opub);
  uVar1 = (uint)gangi;
  if (uVar1 == 0) {
    esst_sga08mdub = 0;
  }
  else if (uVar1 < 7) {
    esst_sga08mdub = uVar1 << 0x10;
  }
  else {
    esst_sga08mdub = 0x70000;
  }
  DAT_005b9c4c = FUN_000ab53c(&DAT_001ce9be,nmot_w,DAT_005b9c4c);
  return;
}

