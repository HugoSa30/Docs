/*
 * Program: n42.bin
 * Function: FUN_000ed650
 * Entry: 000ed650
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ed650(void)

{
  char cVar3;
  short sVar2;
  uint uVar1;
  int iVar4;
  
  if (B_mdzgstp == 0) {
    if ((B_autget == '\0') || (cVar3 = B_wk, (CWSTPCNF & 1) == 0)) {
      cVar3 = '\0';
    }
    DAT_003fa986 = cVar3 != DAT_003fa987;
    if ((B_autget == '\0') || (DAT_003fa987 = B_wk, (CWSTPCNF & 1) == 0)) {
      DAT_003fa987 = '\0';
    }
    if ((B_autget == '\0') || (cVar3 = B_wkr, (CWSTPCNF >> 1 & 1) == 0)) {
      cVar3 = '\0';
    }
    DAT_003fa988 = cVar3 != DAT_003fa989;
    if ((B_autget == '\0') || (DAT_003fa989 = B_wkr, (CWSTPCNF >> 1 & 1) == 0)) {
      DAT_003fa989 = '\0';
    }
    if ((((CWSTPCNF >> 3 & 1) == 0) || (B_nws == '\0')) || (B_stpon != 0)) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    DAT_003fa982 = cVar3 != DAT_003fa983;
    if ((((CWSTPCNF >> 3 & 1) == 0) || (B_nws == '\0')) || (B_stpon != 0)) {
      DAT_003fa983 = '\0';
    }
    else {
      DAT_003fa983 = '\x01';
    }
    cVar3 = B_kuppl;
    if ((CWSTPCNF >> 4 & 1) == 0) {
      cVar3 = '\0';
    }
    DAT_003fa98e = cVar3 != DAT_003fa98f;
    DAT_003fa98f = B_kuppl;
    if ((CWSTPCNF >> 4 & 1) == 0) {
      DAT_003fa98f = '\0';
    }
    if ((((CWSTPCNF >> 5 & 1) == 0) || (B_ll == '\0')) || (DAT_003fa981 != '\0')) {
      DAT_003fa980 = false;
    }
    else {
      DAT_003fa980 = true;
    }
    DAT_003fa981 = B_ll;
    if ((CWSTPCNF >> 5 & 1) == 0) {
      DAT_003fa981 = '\0';
    }
    if ((((((bool)DAT_003fa986) || ((bool)DAT_003fa988)) || (DAT_003fa98c != '\0')) ||
        (((bool)DAT_003fa982 || ((bool)DAT_003fa98e)))) || ((bool)DAT_003fa980)) {
      B_edges = B_edges;
    }
    else {
      B_edges = 0;
    }
    sVar2 = _DRLSOLST;
    if (B_stpon == 0) {
      iVar4 = (esst_srl08dmub >> 0x10) * 2;
      sVar2 = *(short *)(&DAT_001c180c + iVar4) +
              (short)((esst_srl08dmub & 0xffff) *
                      ((int)*(short *)(iVar4 + 0x1c180e) - (int)*(short *)(&DAT_001c180c + iVar4))
                     >> 0x10);
    }
    iVar4 = (int)(short)rlgas_w;
    if (iVar4 < 1) {
      iVar4 = -iVar4;
    }
    B_mddrla = sVar2 < iVar4;
    cVar3 = B_koe;
    if (-1 < (char)CWSTPCNF) {
      cVar3 = '\0';
    }
    DAT_003fa991 = '\x01' - (cVar3 == DAT_003fa992);
    DAT_003fa992 = B_koe;
    if (-1 < (char)CWSTPCNF) {
      DAT_003fa992 = '\0';
    }
    if (((B_ll == '\0') || (vfzg != 0)) || ((dmdstpBits1_100ms & 0x4000) != 0)) {
      uVar1 = (uint)(byte)(&DAT_001c182c)[esst_snm08dmub >> 0x10] +
              ((int)((esst_snm08dmub & 0xffff) *
                    ((uint)*(byte *)((esst_snm08dmub >> 0x10) + 0x1c182d) -
                    (uint)(byte)(&DAT_001c182c)[esst_snm08dmub >> 0x10])) >> 0x10);
    }
    else {
      uVar1 = (uint)RLSALULL;
    }
    B_mdrl = (uint)rl << 7 < (uVar1 & 0xff) * (uint)fsalunkh;
    B_mdnmx = NMXALU < nmot;
    B_mdnmn = nmot < NMIALU;
    if ((((bool)B_mdrl) || ((bool)B_mdnmx)) || ((bool)B_mdnmn)) {
      B_range = B_range;
    }
    else {
      B_range = 0;
    }
  }
  return;
}

