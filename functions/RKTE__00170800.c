/*
 * Program: n42.bin
 * Function: RKTE
 * Entry: 00170800
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RKTE(void)

{
  fhkrst_w = func_0xff2192a8(_FRHOKRSTTE,&DAT_001c6b16,&FRHOKRSTTE_start,tkrst);
  tevfa_w = (word)(tevfa_l >> 4);
  ftek_w = func_0xff21984c(&FKKVS,nmot,tevfa_l >> 4 & 0xffff);
  if (0x1fff < ftek_w) {
    ftek_w = 0x1fff;
  }
  tevfa2_w = (word)(tevfa2_l >> 4);
  ftek2_w = func_0xff21984c(&FKKVS,nmot,tevfa2_l >> 4 & 0xffff);
  if (0x1fff < ftek2_w) {
    ftek2_w = 0x1fff;
  }
  tvu_w = func_0xff2189bc(&TVUB,ub);
  return;
}

