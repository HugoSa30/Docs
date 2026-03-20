/*
 * Program: n42.bin
 * Function: FUN_0019163c
 * Entry: 0019163c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019163c(void)

{
  short sVar2;
  uint uVar1;
  int iVar3;
  
  sVar2 = func_0xff21b038(0x1d236e,_DAT_001c10f6,esst_snm07lsuw,esst_srl08lsuw);
  iVar3 = (uint)g1korr * (int)sVar2;
  if (iVar3 < 0x400000) {
    if (iVar3 < -0x400000) {
      lrsg1_w = 0x8000;
    }
    else {
      lrsg1_w = (word)(iVar3 >> 7);
    }
  }
  else {
    lrsg1_w = 0x7fff;
  }
  uVar1 = func_0xff21afb0(&DAT_001d23de,_DAT_001c10f6,esst_snm07lsuw,esst_srl08lsuw);
  uVar1 = (uint)g2korr * (uVar1 & 0xffff);
  if (uVar1 < 0x800000) {
    lrsg2_w = (word)(uVar1 >> 7);
  }
  else {
    lrsg2_w = 0xffff;
  }
  if ((DAT_003f9bdc & 1) == 0) {
    lrsg4_w = 0;
  }
  else {
    lrsg4_w = func_0xff21b038(0x1d244e,_DAT_001c10f6,esst_snm07lsuw,esst_srl08lsuw);
  }
  lrsp1_w = func_0xff21afb0(&DAT_001d24be,_DAT_001c10f6,esst_snm07lsuw,esst_srl08lsuw);
  lrsp2_w = func_0xff21afb0(&DAT_001d252e,_DAT_001c10f6,esst_snm07lsuw,esst_srl08lsuw);
  lrsp3_w = func_0xff21afb0(0x1d259e,_DAT_001c10f6,esst_snm07lsuw,esst_srl08lsuw);
  lrsp4_w = func_0xff21b038(0x1d260e,_DAT_001c10f6,esst_snm07lsuw,esst_srl08lsuw);
  lrsza = func_0xff2187cc(&DAT_001cb480,ml);
  return;
}

