/*
 * Program: n42.bin
 * Function: FUN_000cb638
 * Entry: 000cb638
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cb638(void)

{
  int iVar1;
  short sVar2;
  
  if (B_mdzgstp == 0) {
    DAT_005b8ca0 = 0;
    sVar2 = _NGALUST;
    if (B_stpon == 0) {
      iVar1 = (esst_snm08dmub >> 0x10) * 2;
      sVar2 = *(short *)(&DAT_001c181c + iVar1) +
              (short)((esst_snm08dmub & 0xffff) *
                      ((int)*(short *)(iVar1 + 0x1c181e) - (int)*(short *)(&DAT_001c181c + iVar1))
                     >> 0x10);
    }
    iVar1 = (int)(short)ngfil_w;
    if (iVar1 < 1) {
      iVar1 = -iVar1;
    }
    B_mdng = sVar2 < iVar1;
    if ((((((B_mdein != '\0') || (B_sa != '\0')) || (B_edges != 0)) ||
         (((CWSTPCNF >> 6 & 1) != 0 && (B_dtest != '\0')))) || ((bool)B_mdng)) ||
       ((B_mddrla != 0 || (DAT_005b856f != '\0')))) {
      DAT_005b8c9d = 1;
    }
    else {
      DAT_005b8c9d = 0;
    }
    B_swe = B_swe_c;
    DAT_005b8c9c = 0;
    DAT_005b8c9b = B_asc_reg;
    if ((((B_mdtnst == 0) && (DAT_003fa991 == '\0')) && (B_nldg == '\0')) &&
       (((B_dkpu == '\0' && (B_asc_reg == '\0')) && (((ffon2 >> 2 & 1) == 0 && (B_error5 == 0))))))
    {
      DAT_005b8c9e = 0;
    }
    else {
      DAT_005b8c9e = 1;
    }
    DAT_005b8caa = 0;
    if ((B_evasel == '\0') || (B_error1 != 0)) {
      DAT_005b8cab = 1;
    }
    else {
      DAT_005b8cab = 0;
    }
    DAT_005b8ca7 = 0;
    if ((((B_tehb == '\0') && ((B_nopg & B_synph) != 0)) && (B_evloc != '\0')) &&
       (((B_fokstp == 0 && (DAT_005b8573 == '\0')) && (B_error26 == 0)))) {
      DAT_005b8ca8 = 0;
    }
    else {
      DAT_005b8ca8 = 1;
    }
    DAT_005b8ca2 = 0;
    if ((((B_nopg & B_synph) == 0) || (B_sa == '\0')) || (DAT_005b8572 != '\0')) {
      DAT_005b8ca1 = 1;
    }
    else {
      DAT_005b8ca1 = 0;
    }
    DAT_005b8cad = 0;
    DAT_005b8ca6 = 0;
    DAT_005b8ca4 = 0;
    if ((B_fomod == '\0') && (B_error7 == 0)) {
      DAT_005b8ca5 = 0;
    }
    else {
      DAT_005b8ca5 = 1;
    }
  }
  return;
}

