/*
 * Program: n42.bin
 * Function: get_codeword_info
 * Entry: 0012690c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void get_codeword_info(void)

{
  B_abstnl = CWUHR >> 2 & 1;
  B_etol = 0;
  if ((DAT_001cb34d & 1) == 0) {
    DAT_005b961a = DAT_005b961a & 0xfffe;
  }
  else {
    DAT_005b961a = DAT_005b961a | 1;
  }
  if ((DAT_001cb33c & 2) == 0) {
    DAT_005b961a = DAT_005b961a & 0xfffd;
  }
  else {
    DAT_005b961a = DAT_005b961a | 2;
  }
  if ((DAT_001cb34e & 1) == 0) {
    DAT_005b961a = DAT_005b961a & 0xfffb;
  }
  else {
    DAT_005b961a = DAT_005b961a | 4;
  }
  if ((DAT_001cb33c & 1) == 0) {
    DAT_005b961a = DAT_005b961a & 0xfff7;
  }
  else {
    DAT_005b961a = DAT_005b961a | 8;
  }
  if ((DAT_001cb34f & 1) == 0) {
    DAT_005b961a = DAT_005b961a & 0xffef;
  }
  else {
    DAT_005b961a = DAT_005b961a | 0x10;
  }
  if ((DAT_001cb350 & 1) == 0) {
    DAT_005b961a = DAT_005b961a & 0xffdf;
  }
  else {
    DAT_005b961a = DAT_005b961a | 0x20;
  }
  if ((DAT_001cb351 & 1) == 0) {
    DAT_005b961a = DAT_005b961a & 0xffbf;
  }
  else {
    DAT_005b961a = DAT_005b961a | 0x40;
  }
  if ((DAT_001cb339 & 1) == 0) {
    DAT_005b961a = DAT_005b961a & 0xff7f;
  }
  else {
    DAT_005b961a = DAT_005b961a | 0x80;
  }
  if ((DAT_001cb352 & 1) == 0) {
    DAT_005b961a = DAT_005b961a & 0xfeff;
  }
  else {
    DAT_005b961a = DAT_005b961a | 0x100;
  }
  if ((DAT_001cb33a & 1) == 0) {
    DAT_005b961a = DAT_005b961a & 0xfdff;
  }
  else {
    DAT_005b961a = DAT_005b961a | 0x200;
  }
  if ((DAT_001cb33b & 2) == 0) {
    DAT_005b961a = DAT_005b961a & 0xfbff;
  }
  else {
    DAT_005b961a = DAT_005b961a | 0x400;
  }
  if ((DAT_001cb33b & 1) == 0) {
    DAT_005b961a = DAT_005b961a & 0xf7ff;
  }
  else {
    DAT_005b961a = DAT_005b961a | 0x800;
  }
  if ((DAT_001cb353 & 1) == 0) {
    DAT_005b961a = DAT_005b961a & 0xefff;
  }
  else {
    DAT_005b961a = DAT_005b961a | 0x1000;
  }
  if ((DAT_001cb354 & 1) == 0) {
    DAT_005b961a = DAT_005b961a & 0xdfff;
  }
  else {
    DAT_005b961a = DAT_005b961a | 0x2000;
  }
  if ((DAT_001cb355 & 1) == 0) {
    DAT_005b961a = DAT_005b961a & 0xbfff;
  }
  else {
    DAT_005b961a = DAT_005b961a | 0x4000;
  }
  if ((DAT_001cb356 & 1) == 0) {
    DAT_005b961a = DAT_005b961a & 0x7fff;
  }
  else {
    DAT_005b961a = DAT_005b961a | 0x8000;
  }
  if ((DAT_001cb357 & 1) == 0) {
    B_cdswe = B_cdswe & ~B_cdmd;
  }
  else {
    B_cdswe = B_cdswe | B_cdmd;
  }
  if ((DAT_001cb358 & 1) == 0) {
    B_cdswe = B_cdswe & ~B_cdswe;
  }
  else {
    B_cdswe = B_cdswe | B_cdswe;
  }
  if ((DAT_001cb359 & 1) == 0) {
    B_cdswe = B_cdswe & ~B_cdtankl;
  }
  else {
    B_cdswe = B_cdswe | B_cdtankl;
  }
  if ((DAT_001cb35a & 1) == 0) {
    B_cdswe = B_cdswe & ~B_cdlsv;
  }
  else {
    B_cdswe = B_cdswe | B_cdlsv;
  }
  if ((DAT_001cb35b & 1) == 0) {
    B_cdswe = B_cdswe & ~B_cdlatp;
  }
  else {
    B_cdswe = B_cdswe | B_cdlatp;
  }
  if ((DAT_001cb35c & 1) == 0) {
    B_cdswe = B_cdswe & ~B_cdlatv;
  }
  else {
    B_cdswe = B_cdswe | B_cdlatv;
  }
  if ((DAT_001cb35d & 1) == 0) {
    B_cdswe = B_cdswe & ~B_cdhsv;
  }
  else {
    B_cdswe = B_cdswe | B_cdhsv;
  }
  if ((DAT_001cb35f & 1) == 0) {
    B_cdswe = B_cdswe & ~B_cdhsh;
  }
  else {
    B_cdswe = B_cdswe | B_cdhsh;
  }
  if ((DAT_001cb360 & 1) == 0) {
    B_cdswe = B_cdswe & ~B_cdkat;
  }
  else {
    B_cdswe = B_cdswe | B_cdkat;
  }
  if ((DAT_001cb361 & 1) == 0) {
    B_cdswe = B_cdswe & 0xfdff;
  }
  else {
    B_cdswe = B_cdswe | 0x200;
  }
  B_cwlshdyn = CWLSHA >> 1 & 1;
  B_cwlshsch = CWLSHA & 1;
  B_cwlshvl = CWLSHA >> 2 & 1;
  B_auakt = 0;
  B_fphubap = CWMDAPP >> 3 & 1;
  B_fpwdkap = CWMDAPP >> 1 & 1;
  B_fzg_on = FZG_ON & 1;
  B_gen1 = CWGEN1 & 1;
  B_gen2 = CWGEN2 & 1;
  B_hubap = CWMDAPP >> 4 & 1;
  B_katfz = CWKONABG & 1;
  DAT_003fc140 = DAT_001cb342 & 1;
  B_lsh = CWKONLS >> 1 & 1;
  B_lsh2 = CWKONLS >> 5 & 1;
  B_lsv = CWKONLS & 1;
  B_lsv2 = CWKONLS >> 4 & 1;
  B_mde8e = CWSCTMDE & 1;
  B_mde9e = CWSCTMDE >> 1 & 1;
  B_mrfavl = CWVL & 1;
  B_ndsav = CWNSABG & 1;
  B_nokatfz = (CWKONABG & 1) == 0;
  B_psapp = CWMDAPP >> 5 & 1;
  B_psger = CWPSGER & 1;
  B_slsfz = '\x01' - (CDSLS == '\0');
  B_tfu = CWTF & 1;
  B_uhrrmin = CWUHR & 1;
  B_uhrrsec = CWUHR >> 1 & 1;
  B_wdksapcw = CWMDAPP >> 2 & 1;
  B_zwappl = CWMDAPP & 1;
  cw_erfil = CWERFIL;
  zzbank = 0xaa;
  return;
}

